#include "global.h"
#include "frontier_util.h"
#include "battle_setup.h"
#include "battle_main.h"
#include "berry.h"
#include "clock.h"
#include "coins.h"
#include "contest.h"
#include "contest_util.h"
#include "contest_painting.h"
#include "data.h"
#include "decompress.h"
#include "decoration.h"
#include "decoration_inventory.h"
#include "event_data.h"
#include "field_door.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_move.h"
#include "event_object_lock.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "fake_rtc.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "field_tasks.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "follower_npc.h"
#include "gpu_regs.h"
#include "item.h"
#include "lilycove_lady.h"
#include "main.h"
#include "menu.h"
#include "money.h"
#include "move.h"
#include "mystery_event_script.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "overworld.h"
#include "rotating_tile_puzzle.h"
#include "rtc.h"
#include "script.h"
#include "script_menu.h"
#include "script_movement.h"
#include "script_pokemon_util.h"
#include "shop.h"
#include "slot_machine.h"
#include "sound.h"
#include "string_util.h"
#include "text.h"
#include "text_window.h"
#include "trainer_see.h"
#include "tv.h"
#include "window.h"
#include "list_menu.h"
#include "malloc.h"
#include "constants/event_objects.h"
#include "constants/map_types.h"
#include "item.h"
#include "battle.h"
#include "trainer_card.h"
#include "pokemon_icon.h"
#include "constants/metatile_labels.h"
#include "tilesets.h"
#include "field_camera.h"
#include "start_menu.h"
#include "constants/abilities.h"

static bool8 sIsScriptedWildDouble;

static u8 *const sScriptStringVars[] =
{
    gStringVar1,
    gStringVar2,
    gStringVar3,
};

bool8 ScrCmd_checkitemquantity(struct ScriptContext *ctx)
{
    u16 itemId = VarGet(ScriptReadHalfword(ctx));

    gSpecialVar_0x8005 = CountTotalItemQuantityInBag(itemId);
    return FALSE;
}

bool8 ScrCmd_checkdexmon(struct ScriptContext *ctx)
{
    u16 species = VarGet(ScriptReadHalfword(ctx));

    gSpecialVar_Result = GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT);
    return FALSE;
}

bool8 ScrCmd_warpsilentnofadeout(struct ScriptContext *ctx)
{
    u8 mapGroup = ScriptReadByte(ctx);
    u8 mapNum = ScriptReadByte(ctx);
    u8 warpId = ScriptReadByte(ctx);
    u16 x = VarGet(ScriptReadHalfword(ctx));
    u16 y = VarGet(ScriptReadHalfword(ctx));

    SetWarpDestination(mapGroup, mapNum, warpId, x, y);
    DoDiveWarpNoFadeout();
    ResetInitialPlayerAvatarState();
    return TRUE;
}

bool8 ScrCmd_warpholexy(struct ScriptContext *ctx)
{
    u8 mapGroup = ScriptReadByte(ctx);
    u8 mapNum = ScriptReadByte(ctx);
    u8 warpId = ScriptReadByte(ctx);
    u16 x = VarGet(ScriptReadHalfword(ctx));
    u16 y = VarGet(ScriptReadHalfword(ctx));

    SetWarpDestination(mapGroup, mapNum, warpId, x, y);
    DoFallWarp();
    ResetInitialPlayerAvatarState();
    return TRUE;
}

bool8 ScrCmd_checkpartymon(struct ScriptContext *ctx)
{
    u16 species = ScriptReadHalfword(ctx);
    u8 leadmononly = ScriptReadByte(ctx);
    u8 i;
    u8 slots = (leadmononly == TRUE) ? 1 : PARTY_SIZE;

    for (i = 0; i < slots; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG, 0) == species)
        {
            gSpecialVar_0x8000 = i;
            gSpecialVar_Result = TRUE;
            if (GetMonData(&gPlayerParty[i], MON_DATA_IS_SHINY, 0))
                gSpecialVar_0x800A = TRUE;
            else
                gSpecialVar_0x800A = FALSE;
            return TRUE;
        }
    }
    gSpecialVar_Result = FALSE;
    return FALSE;
}

bool8 ScrCmd_getfollowerxy(struct ScriptContext *ctx)
{
    u16 *pX = GetVarPointer(ScriptReadHalfword(ctx));
    u16 *pY = GetVarPointer(ScriptReadHalfword(ctx));

    struct ObjectEvent *followerObject = GetFollowerObject();
    if (followerObject)
    {
        *pX = followerObject->currentCoords.x - MAP_OFFSET;
        *pY = followerObject->currentCoords.y - MAP_OFFSET;
    }
    else
    {
        *pX = 0;
        *pY = 0;
    }
    return FALSE;
}

bool8 ScrCmd_getobjectxy(struct ScriptContext *ctx)
{
    u16 localId = VarGet(ScriptReadHalfword(ctx));
    u8 objectId = GetObjectEventIdByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup); 
    struct ObjectEvent *objEvent = &gObjectEvents[objectId];

    gSpecialVar_0x8001 = objEvent->currentCoords.x - MAP_OFFSET;
    gSpecialVar_0x8002 = objEvent->currentCoords.y - MAP_OFFSET;
    return FALSE;
}

bool8 ScrCmd_checkpartylevel(struct ScriptContext *ctx)
{
    u8 i;
    u16 monLevel = ScriptReadHalfword(ctx);
    u8 above = 0;

    gSpecialVar_Result = 0;
    gSpecialVar_0x8004 = 0;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL);
        if (!species)
            break;
        if (!GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG) && GetMonData(&gPlayerParty[i], MON_DATA_LEVEL) >= monLevel)
        {
            gSpecialVar_0x8004 = species;
            gSpecialVar_Result = PARTY_SIZE;
            above = 1;
            break;
        }
    }

    if (above != 1)
    {
        gSpecialVar_Result = 0;
    }

    return FALSE;
}

bool8 ScrCmd_setwildbattlelevelrange(struct ScriptContext *ctx)
{
    u16 species = ScriptReadHalfword(ctx);
    u8 level = ScriptReadByte(ctx);
    u16 item = ScriptReadHalfword(ctx);
    u16 species2 = ScriptReadHalfword(ctx);
    u8 level2 = ScriptReadByte(ctx);
    u16 item2 = ScriptReadHalfword(ctx);

    u8 randomLevel = Random() % (level2 - level + 1) + level;
    u8 randomLevel2 = Random() % (level2 - level + 1) + level;

    if(species2 == SPECIES_NONE)
    {
        CreateScriptedWildMon(species, randomLevel, item);
        sIsScriptedWildDouble = FALSE;
    }
    else
    {
        CreateScriptedDoubleWildMon(species, randomLevel, item, species2, randomLevel2, item2);
        sIsScriptedWildDouble = TRUE;
    }

    return FALSE;
}

bool8 ScrCmd_dowildbattlenorunning(struct ScriptContext *ctx)
{
    BattleSetup_StartScriptedWildBattleNoRunning();

    ScriptContext_Stop();

    return TRUE;
}

bool8 ScrCmd_dowildgrottobattle(struct ScriptContext *ctx)
{
    Script_RequestEffects(SCREFF_V1 | SCREFF_HARDWARE);
    u8 value = 2;

    if (sIsScriptedWildDouble == FALSE)
    {
        SetMonData(&gEnemyParty[0], MON_DATA_ABILITY_NUM, &value);
        BattleSetup_StartScriptedWildBattle();
    }
    else
    {
        SetMonData(&gEnemyParty[0], MON_DATA_ABILITY_NUM, &value);
        SetMonData(&gEnemyParty[1], MON_DATA_ABILITY_NUM, &value);
        BattleSetup_StartScriptedDoubleWildBattle();
    }

    ScriptContext_Stop();

    return TRUE;
}

bool8 ScrCmd_bpmart(struct ScriptContext *ctx)
{
    const void *ptr = (void *)ScriptReadWord(ctx);
    u8 isMoveTutor = VarGet(ScriptReadHalfword(ctx));

    if(isMoveTutor == TRUE)
        CreateBPmartMoveTutor(ptr);
    else
        CreateBPmartMenu(ptr);
    ScriptContext_Stop();
    return TRUE;
}

bool8 ScrCmd_removeobjectbyflag(struct ScriptContext *ctx)
{
    u8 i;
    u16 flag = ScriptReadHalfword(ctx);

    FlagSet(flag);

    for (i = 0; i < gMapHeader.events->objectEventCount; i++)
    {
        if (gMapHeader.events->objectEvents[i].flagId == flag)
        {
            u8 localId = gMapHeader.events->objectEvents[i].localId;
            RemoveObjectEventByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
        }
    }
    return FALSE;
}

void ApplyGlobalTintToPaletteSlot(u8 slot, u8 count, u8 mode)
{
    switch (mode)
    {
    case 0:
        return;
    case 1:
        TintPalette_GrayScale(&gPlttBufferUnfaded[BG_PLTT_ID(slot)], count * 16);
        break;
    case 2:
        TintPalette_SepiaTone(&gPlttBufferUnfaded[BG_PLTT_ID(slot)], count * 16);
        break;
    default:
        return;
    }
    CpuFastCopy(&gPlttBufferUnfaded[BG_PLTT_ID(slot)], &gPlttBufferFaded[BG_PLTT_ID(slot)], count * PLTT_SIZE_4BPP);
}

void TintWorld(void)
{
    ApplyGlobalTintToPaletteSlot(0, 32, 2);
}

void StorePCLocation(void)
{
    if (MAP(MAP_OLDALE_TOWN_POKEMON_CENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 0);
    else if (MAP(MAP_RUSTBORO_CITY_POKEMON_CENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 1);
    else if (MAP(MAP_DEWFORD_TOWN_POKEMON_CENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 2);
    else if (MAP(MAP_ALDELEAF_POKE_CENTER1F))
        VarSet(VAR_OBJ_GFX_ID_F, 3);
    else if (MAP(MAP_SHORESLATE_POKECENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 4);
    else if (MAP(MAP_MARIGORGE_POKECENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 5);
    else if (MAP(MAP_KAOLISLE_POKECENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 6);
    else if (MAP(MAP_ROCKLIFFE_POKECENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 7);
    else if (MAP(MAP_SANDSTONE_POKECENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 8);
    else if (MAP(MAP_DRISLEDGE_POKECENTER_1F))
        VarSet(VAR_OBJ_GFX_ID_F, 9);
}

void ZeroFlags(void)
{
    memset(gSaveBlock1Ptr->flags2, 0, sizeof(gSaveBlock1Ptr->flags2));
}

void CheckSaveBlockData(void)
{
    u16 i, j;

    for (i = 0; i < 1040; i++)
    {
        j = gSaveBlock1Ptr->flags2[i];
        if (gSaveBlock1Ptr->flags2[i] != 0)
        {
            DebugPrintfLevel(MGBA_LOG_WARN, "placeholder %d", i);
            DebugPrintfLevel(MGBA_LOG_WARN, "is value %d", j);
        }
    }
}

void DismountPlayer(void)
{
    if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_BIKE)
    {
        SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);
        Overworld_ClearSavedMusic();
        Overworld_ChangeMusicToDefault();
        // Overworld_PlaySpecialMapMusic();
    }
}

void PlayerSinkInSnow(void)
{
    SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);
}

void CheckFoughtTrainers(void)
{
    u16 i;

    for (i = 1; i < TRAINER_UNUSED_376_; i++)
    {
        if (!HasTrainerBeenFought(i))
        {
            DebugPrintfLevel(MGBA_LOG_WARN, "Trainer %d has not been fought", i);
        }
    }
}

void ScrCmd_matchpartylevel(struct ScriptContext *ctx)
{
    u8 i;
    u16 monLevel = VarGet(ScriptReadHalfword(ctx));

    gSpecialVar_Result = FALSE;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL);
        if (!species)
            break;
        if (!GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG) && GetMonData(&gPlayerParty[i], MON_DATA_LEVEL) == monLevel)
        {
            gSpecialVar_Result = TRUE;
            break;
        }
    }
}

bool8 ScrCmd_buffertypename(struct ScriptContext *ctx)
{
    u8 stringVarIndex = ScriptReadByte(ctx);
    u16 type = VarGet(ScriptReadHalfword(ctx));

    StringCopy(sScriptStringVars[stringVarIndex], gTypesInfo[type].name);
    return FALSE;
}

void ZeroStrangeSeedIndex(void)
{
    u8 i;

    for (i = 0; i < 11; i++)
    {
        ConvertIntToDecimalStringN(gStringVar2, gSaveBlock1Ptr->strangeSeedDrop[i], STR_CONV_MODE_LEFT_ALIGN, 3);
        StringAppend(gStringVar1, gStringVar2);
        StringAppend(gStringVar1, COMPOUND_STRING(","));
    }
}

void ScrCmd_checkmonlevel(struct ScriptContext *ctx)
{
    u8 requiredLevel = VarGet(ScriptReadHalfword(ctx));
    u8 monLevel = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_LEVEL, 0);

    gSpecialVar_0x8000 = monLevel;

    if (GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_IS_EGG, NULL))
    {
        gSpecialVar_Result = SPECIES_EGG;
    }
    else if (monLevel >= requiredLevel)
    {
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

#define XL_CANDY_EXP    30000
#define L_CANDY_EXP     10000
#define M_CANDY_EXP     3000
#define S_CANDY_EXP     800
#define XS_CANDY_EXP    100

void ScrCmd_DefeatTrainer(struct ScriptContext *ctx)
{
    u16 trainer = VarGet(ScriptReadHalfword(ctx));

    if (FlagGet(TRAINER_FLAGS_START + trainer))
        return;
    SetTrainerFlag(trainer);

    const struct TrainerMon *party = GetTrainerPartyFromId(trainer);
    u8 partySize = GetTrainerPartySizeFromId(trainer);
    u8 lastMonLevel = party[partySize - 1].lvl;
    u8 trainerMoney = gTrainerClasses[GetTrainerClassFromId(trainer)].money ?: 5;
    u32 money = 4 * lastMonLevel * trainerMoney;
    u8 battlePoints = money / 500;
    u8 bpCap = (GetTrainerBpCapFromId(trainer) && FlagGet(FLAG_BADGE06_GET)) ? 5 : 3;
    
    s32 exp = 0;
    u8 i;
    u16 xl = 0, l = 0, m = 0, s = 0, xs = 0;

    if (battlePoints > bpCap)
        battlePoints = bpCap;
    
    AddMoney(&gSaveBlock1Ptr->money, money);
    AddBattlePoints(battlePoints);

    for (i = 0; i < partySize; i++)
    {
        exp += (gSpeciesInfo[party[i].species].expYield * party[i].lvl * 150) / 700;
        // Base trainer exp without scaling and without any exp boosts
    }
    while (exp >= XL_CANDY_EXP)
    {
        xl++;
        exp -= XL_CANDY_EXP;
    }
    while (exp >= L_CANDY_EXP)
    {
        l++;
        exp -= L_CANDY_EXP;
    }
    while (exp >= M_CANDY_EXP)
    {
        m++;
        exp -= M_CANDY_EXP;
    }
    while (exp >= S_CANDY_EXP)
    {
        s++;
        exp -= S_CANDY_EXP;
    }
    while (exp >= XS_CANDY_EXP)
    {
        xs++;
        exp -= XS_CANDY_EXP;
    }

    if (xl)
        AddBagItem(ITEM_EXP_CANDY_XL, xl);
    if (l)
        AddBagItem(ITEM_EXP_CANDY_L, l);
    if (m)
        AddBagItem(ITEM_EXP_CANDY_M, m);
    if (s)
        AddBagItem(ITEM_EXP_CANDY_S, s);
    if (xs)
        AddBagItem(ITEM_EXP_CANDY_XS, xs);
}

bool8 ScrCmd_startquest(struct ScriptContext *ctx)
{
    u32 flagId = ScriptReadHalfword(ctx);
    u16 var = VarGet(VAR_CURRENT_QUEST);

    if (!FlagGet(FLAG_SYS_JOURNAL_GET))
    {
        return FALSE;
    }

    FlagSet(flagId);
    gSaveBlock1Ptr->questFlag[var] = flagId - EXTENDED_FLAG_START;
    gSaveBlock1Ptr->questOrder[var] = var;

    VarSet(VAR_CURRENT_QUEST, var + 1);

    return FALSE;
}

void StartAllQuests(struct ScriptContext *ctx)
{
    u16 i;

    for (i = 0; i < 41; i++)
    {
        FlagSet(FLAG_Q01_PRIMROSE_ORICORIO_START + i);
        gSaveBlock1Ptr->questFlag[i] = (FLAG_Q01_PRIMROSE_ORICORIO_START + i - EXTENDED_FLAG_START);
        gSaveBlock1Ptr->questOrder[i] = i;
    }
}

void ScrCmd_finishquest(struct ScriptContext *ctx)
{
    u32 flagId = ScriptReadHalfword(ctx);
    u16 i, j;

    FlagSet(flagId);

    if (!FlagGet(FLAG_SYS_JOURNAL_GET))
    {
        return;
    }

    flagId -= EXTENDED_FLAG_START;
    for (i = 0; i < QUEST_COUNT; i++)
    {
        if (gSaveBlock1Ptr->questFlag[i] == flagId - QUEST_COUNT)
        {
            for (j = i; j < QUEST_COUNT - 1; j++)
            {
                gSaveBlock1Ptr->questFlag[j] = gSaveBlock1Ptr->questFlag[j + 1];
            }

            gSaveBlock1Ptr->questFlag[QUEST_COUNT - 1] = 0;

            break;
        }
    }
}

void TestPlayerAvatarFlagDebug(void)
{
    ConvertIntToDecimalStringN(sScriptStringVars[0], gPlayerAvatar.flags, STR_CONV_MODE_LEFT_ALIGN, 3);
}

static s32 GetRoute18CleanMetatile(s32 metatileId)
{
    switch (metatileId)
    {
        case 0x292: return 0x2BC;
        case 0x29C: return 0x2CB;
        case 0x291: return 0x2BB;
        case 0x299: return 0x2C3;
        case 0x29A: return 0x2C4;
        case 0x294: return 0x2C6;
        case 0x295: return 0x2C7;
        case 0x293: return 0x2BD;
        case 0x29B: return 0x2C5;
        default: return 0x000;
    }
}

static s32 GetCleanMetatile(s32 metatileId)
{
    switch (metatileId)
    {
        case METATILE_General_SeedDrop: return METATILE_General_Grass;
        case METATILE_General_SeedDropTreeLeft: return METATILE_General_Grass_TreeLeft;
        case METATILE_General_SeedDropTreeRight: return METATILE_General_Grass_TreeRight;
        case 0x3BC: return 0x31C;
        case 0x3BD: return 0x31D;
        case 0x3BA: return 0x31A;
        case 0x3BB: return 0x31B;
        case 0x3B8: return 0x318;
        case 0x3B9: return 0x319;
        case 0x338: return 0x278;
        case 0x339: return 0x279;
        case 0x33A: return 0x27B;
        case 0x33B: return 0x27C;
        case 0x33C: return 0x27E;
        case 0x33D: return 0x27F;
        case 0x328: return 0x271;
        case 0x20B: return 0x071;
        case 0x3B6: return 0x3DD;
        case 0x3A9: return 0x32C;
        case 0x026: return METATILE_General_Grass_TreeUp;
        default: return 0x000;
    }
}

void RevertSeedDropMetatile(void)
{
    s16 x, y;
    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);

    s32 metatileId = MapGridGetMetatileIdAt(x, y);
    s32 newMetatileId = 0;

    if (gMapHeader.mapLayout->secondaryTileset == &gTileset_Route18)
        newMetatileId = GetRoute18CleanMetatile(metatileId);
    else
        newMetatileId = GetCleanMetatile(metatileId);

    MapGridSetMetatileIdAt(x, y, newMetatileId);
}

void FixGrottoHiddenAbility(void)
{
    u16 i, j;
    u16 hiddenAbility = 2;

    static u16 sGrottoMapsecs[] =
    {
        MAPSEC_HIDDENGROTTO_AZURETIDE,
        MAPSEC_HIDDENGROTTO_WW,
        MAPSEC_HIDDENGROTTO_ROUTE7,
        MAPSEC_HIDDENGROTTO_ROUTE14,
        MAPSEC_HIDDENGROTTO_ROUTE15,
    };

    for (i = 0; i < PARTY_SIZE; i++)
    {
        for (j = 0; j < ARRAY_COUNT(sGrottoMapsecs); j++)
        {
            if (GetMonData(&gPlayerParty[i], MON_DATA_MET_LOCATION, NULL) == sGrottoMapsecs[j])
            {
                SetMonData(&gPlayerParty[i], MON_DATA_ABILITY_NUM, &hiddenAbility);
                break;
            }
        }
    }

    int boxId, boxPosition;

    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            if (GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_SANITY_HAS_SPECIES))
            {
                for (j = 0; j < ARRAY_COUNT(sGrottoMapsecs); j++)
                {
                    if (GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_MET_LOCATION, NULL) == sGrottoMapsecs[j])
                    {
                        SetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_ABILITY_NUM, &hiddenAbility);
                        break;
                    }
                }
            }
        }
    }
}

static u16 BerryTypeToItemId(u16 berry)
{
    u16 item = berry - 1;

    if (item > LAST_BERRY_INDEX - FIRST_BERRY_INDEX)
        return FIRST_BERRY_INDEX;
    else
        return berry + FIRST_BERRY_INDEX - 1;
}

void ScrCmd_checkberrytree(struct ScriptContext *ctx)
{
    u8 id = ScriptReadByte(ctx);
    u8 berry = GetBerryTypeByBerryTreeId(id);;
    gSpecialVar_Result = FALSE;

    if (gSaveBlock1Ptr->berryTrees[id].stage == BERRY_STAGE_BERRIES)
    {
        AddBagItem(BerryTypeToItemId(berry), gSaveBlock1Ptr->berryTrees[id].berryYield);
        RemoveBerryTree(id);
        gSpecialVar_Result = TRUE;
    }
}

void ScrCmd_SetupEnchantedForestFlags(void)
{
    if (FlagGet(FLAG_ENCHANTED_FOREST_NIGHT))
    {
        gTimeOfDay = TIME_NIGHT;
        gEnchantedForestNight = TRUE;
    }
    else
    {
        gTimeOfDay = TIME_DAY;
        gEnchantedForestNight = FALSE;
    }
}

void ScrCmd_GetDayForRoute7(void)
{
    if (gLocalTime.days % 2 == 0)
        gSpecialVar_0x8000 = TRUE;
    else
        gSpecialVar_0x8000 = FALSE;
}

bool8 ScrCmd_gethiddenpowertype(struct ScriptContext *ctx)
{
    u8 stringVarIndex = ScriptReadByte(ctx);
    u8 slot = gSpecialVar_0x8004;

    u32 typeBits = ((GetMonData(&gPlayerParty[slot], MON_DATA_HP_IV) & 1) << 0)
        | ((GetMonData(&gPlayerParty[slot], MON_DATA_ATK_IV) & 1) << 1)
        | ((GetMonData(&gPlayerParty[slot], MON_DATA_DEF_IV) & 1) << 2)
        | ((GetMonData(&gPlayerParty[slot], MON_DATA_SPEED_IV) & 1) << 3)
        | ((GetMonData(&gPlayerParty[slot], MON_DATA_SPATK_IV) & 1) << 4)
        | ((GetMonData(&gPlayerParty[slot], MON_DATA_SPDEF_IV) & 1) << 5);

    u8 type = ((NUMBER_OF_MON_TYPES - 6) * typeBits) / 63 + 2;
    if (type >= TYPE_MYSTERY)
        type++;

    StringCopy(sScriptStringVars[stringVarIndex], gTypesInfo[type].name);
    return FALSE;
}

void ScrCmd_FossilToPokemon(void)
{
    u16 species = 1;

    switch(VarGet(VAR_WHICH_FOSSIL_REVIVED))
    {
    case ITEM_HELIX_FOSSIL:    species = SPECIES_OMANYTE;     break;
    case ITEM_DOME_FOSSIL:     species = SPECIES_KABUTO;      break;
    case ITEM_OLD_AMBER:       species = SPECIES_AERODACTYL;  break;
    case ITEM_ROOT_FOSSIL:     species = SPECIES_LILEEP;      break;
    case ITEM_CLAW_FOSSIL:     species = SPECIES_ANORITH;     break;
    case ITEM_ARMOR_FOSSIL:    species = SPECIES_CRANIDOS;    break;
    case ITEM_SKULL_FOSSIL:    species = SPECIES_SHIELDON;    break;
    case ITEM_COVER_FOSSIL:    species = SPECIES_TIRTOUGA;    break;
    case ITEM_PLUME_FOSSIL:    species = SPECIES_ARCHEN;      break;
    case ITEM_JAW_FOSSIL:      species = SPECIES_TYRUNT;      break;
    case ITEM_SAIL_FOSSIL:     species = SPECIES_AMAURA;      break;
    case SPECIES_DRACOZOLT:    species = SPECIES_DRACOZOLT;   break;
    case SPECIES_ARCTOZOLT:    species = SPECIES_ARCTOZOLT;   break;
    case SPECIES_DRACOVISH:    species = SPECIES_DRACOVISH;   break;
    case SPECIES_ARCTOVISH:    species = SPECIES_ARCTOVISH;   break;
    }
    VarSet(VAR_TEMP_TRANSFERRED_SPECIES, species);
}

void LatisWarp(void)
{
    switch (gSpecialVar_0x8004)
    {
        case 1:
            SetWarpDestination(MAP_GROUP(MAP_LATIAS_ISLAND), MAP_NUM(MAP_LATIAS_ISLAND), WARP_ID_NONE, 15, 66);
            break;
        case 2:
            SetWarpDestination(MAP_GROUP(MAP_TOWN_WIP2), MAP_NUM(MAP_TOWN_WIP2), WARP_ID_NONE, 25, 28);
            break;
        case 3:
            SetWarpDestination(MAP_GROUP(MAP_LATIOS_ISLAND), MAP_NUM(MAP_LATIOS_ISLAND), WARP_ID_NONE, 17, 72);
            break;
        case 4:
            SetWarpDestination(MAP_GROUP(MAP_ROUTE23LAKE), MAP_NUM(MAP_ROUTE23LAKE), WARP_ID_NONE, 19, 15);
            break;
    }
}

bool8 ScrCmd_teleportcamera(struct ScriptContext *ctx)
{
    s16 x = VarGet(ScriptReadHalfword(ctx));
    s16 y = VarGet(ScriptReadHalfword(ctx));

    MoveCameraAndRedrawMap(x, y);
    return FALSE;
}

static void Task_OpenPokeNav(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(StartMenuPokeNavCallback);
        DestroyTask(taskId);
    }
}

void ScrCmd_ActivatePokeNav(void)
{
    BeginTimeOfDayPaletteFade(PALETTES_ALL, 0, 0, 16, &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, 0);
    LockPlayerFieldControls();
    CreateTask(Task_OpenPokeNav, 1);
}

void ScrCmd_DrawTiles(struct ScriptContext *ctx)
{
    s16 map = VarGet(ScriptReadHalfword(ctx));
	s16 startingX = VarGet(ScriptReadHalfword(ctx));
    s16 startingY = VarGet(ScriptReadHalfword(ctx));
	s16 x1 = VarGet(ScriptReadHalfword(ctx));
	s16 x2 = VarGet(ScriptReadHalfword(ctx));
	s16 y1 = VarGet(ScriptReadHalfword(ctx));
	s16 y2 = VarGet(ScriptReadHalfword(ctx));

    s16 i;
    s16 j;
    
    const struct MapHeader *mapHeader = Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(map), MAP_NUM(map));
    const struct MapLayout *mapLayout = mapHeader->mapLayout;

    for (i = x1; i <= x2; i++)
    {
        for (j = y1; j <= y2; j++)
        {
            u16 metatile = mapLayout->map[j * mapLayout->width + i];

            s16 destX = i + startingX;
            s16 destY = j + startingY;

            MapGridSetMetatileIdAt(destX, destY, metatile);
        }
    }

    DrawWholeMapView();
}

void PrepPlayerForGogoatRacing(void)
{
    SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_BIKE | PLAYER_AVATAR_FLAG_GOGOAT);
}

void ResetGogoatRaceRecords(void)
{
    gSaveBlock1Ptr->gogoatRaceRecord[0] = 0xFFFFFFFF;
    gSaveBlock1Ptr->gogoatRaceRecord[1] = 0xFFFFFFFF;
}

void ScrCmd_IsCurrentMap(struct ScriptContext *ctx)
{
    s16 map = VarGet(ScriptReadHalfword(ctx));

    if (MAP(map))
        gSpecialVar_Result = TRUE;
    else
        gSpecialVar_Result = FALSE;
}

void TurnBikeToGogoat(void)
{
    FlagSet(FLAG_GOGOAT_RIDING);
    if (gSaveBlock2Ptr->playerBike == ACRO_BIKE)
    {
        FlagSet(FLAG_DEFAULT_BIKE);
    }
    gSaveBlock2Ptr->playerBike = MACH_BIKE;
}

void TurnGogoatToBike(void)
{
    FlagClear(FLAG_GOGOAT_RIDING);
    if (FlagGet(FLAG_DEFAULT_BIKE))
    {
        FlagClear(FLAG_DEFAULT_BIKE);
        gSaveBlock2Ptr->playerBike = ACRO_BIKE;
    }
}

bool8 ScrCmd_checkpartymove(struct ScriptContext *ctx)
{
    u8 i;
    u16 move = ScriptReadHalfword(ctx);

    gSpecialVar_Result = PARTY_SIZE;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL);
        if (!species)
            break;
        if (!GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG) && MonKnowsMove(&gPlayerParty[i], move) == TRUE)
        {
            gSpecialVar_Result = i;
            gSpecialVar_0x8004 = species;
            break;
        }
    }
    return FALSE;
}

void ResetFreeSpace(void)
{
    for (int i = 0; i < BAG_FREESPACE_COUNT; i++)
    {
        SetBagItemQuantity(&gSaveBlock1Ptr->freeSpaceItems[i].quantity, 0);
        gSaveBlock1Ptr->freeSpaceItems[i].itemId = ITEM_NONE;
        gSaveBlock1Ptr->freeSpaceFlags[i] = 0;
    }
}

void TestStringIds (void)
{
    for (int i = 0; i < STRINGID_COUNT; i++)
    {
        if (gBattleStringsTable[i] == NULL)
        {
            DebugPrintf2("%d", i);
        }
    }
}

void TestSpeciesName(void)
{
    s32 finalWidth = 0;
    s32 species = 0;
    s32 width = 0;
    DebugPrintf2("==========SPECIES==========");
    for (int i = 0; i < NUM_SPECIES; i++)
    {
        width = GetStringWidth(FONT_NORMAL, gSpeciesInfo[i].speciesName, 0);

        if (width > finalWidth && width < 200)
        {
            finalWidth = width;
            species = i;
            DebugPrintf2("width: %d, %S", finalWidth, gSpeciesInfo[species].speciesName);
        }
    }
}

void TestItemName(void)
{
    s32 finalWidth = 0;
    s32 itemId = 0;
    s32 width = 0;
    DebugPrintf2("==========ITEMS==========");
    for (int i = 0; i < ITEMS_COUNT; i++)
    {
        width = GetStringWidth(FONT_NORMAL, gItemsInfo[i].name, 0);

        if (width > finalWidth && width < 200)
        {
            finalWidth = width;
            itemId = i;
            DebugPrintf2("width: %d, %S", finalWidth, gItemsInfo[itemId].name);
        }
    }
}

void TestAbilityName(void)
{
    s32 finalWidth = 0;
    s32 itemId = 0;
    s32 width = 0;
    DebugPrintf2("==========ABILITIES==========");
    for (int i = 0; i < ABILITIES_COUNT; i++)
    {
        width = GetStringWidth(FONT_NORMAL, gAbilitiesInfo[i].name, 0);

        if (width > finalWidth && width < 200)
        {
            finalWidth = width;
            itemId = i;
            DebugPrintf2("width: %d, %S", finalWidth, gAbilitiesInfo[itemId].name);
        }
    }
}

void TestMoveName(void)
{
    s32 finalWidth = 0;
    s32 moveId = 0;
    s32 width = 0;
    DebugPrintf2("==========MOVES==========");
    for (int i = 0; i < MOVES_COUNT; i++)
    {
        width = GetStringWidth(FONT_NORMAL, gMovesInfo[i].name, 0);

        if (MoveThawsUser(i))
                DebugPrintf2("move thaws user: %S, width: %d", gMovesInfo[i].name, width);

        if (width > finalWidth && width < 200)
        {
            finalWidth = width;
            moveId = i;
            DebugPrintf2("width: %d, %S", finalWidth, gMovesInfo[moveId].name);
        }
    }
}

void BufferGogoatRecordTime(void)
{
    u32 oldRecord = (MAP(MAP_ROUTE20_RANCH_RACE)) ? 23 : 39;
    u16 raceRecord = (MAP(MAP_ROUTE20_RANCH_RACE)) ? 0 : 1;

    if (MAP(MAP_ROUTE20))
    {
        if (gSaveBlock1Ptr->pos.y < 20)
        {
            oldRecord = 23;
            raceRecord = 0;
        }
        else
        {
            oldRecord = 39;
            raceRecord = 1;
        }
    }

    u32 buffer = gSaveBlock1Ptr->gogoatRaceRecord[raceRecord];

    if (buffer > oldRecord || buffer == 0)
        buffer = oldRecord;

    ConvertIntToDecimalStringN(gStringVar2, buffer, STR_CONV_MODE_LEFT_ALIGN, CountDigits(buffer));
}