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
#include "tm_case.h"
#include "heal_location.h"

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
    if (MAP_NUM(MAP_DYNAMIC))
        SetWarpDestinationToDynamicWarp(0);
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

bool8 ScrCmd_bpmart(struct ScriptContext *ctx)
{
    const void *ptr = (void *)ScriptReadWord(ctx);
    u8 isMoveTutor = VarGet(ScriptReadHalfword(ctx));

    if(isMoveTutor == TRUE)
    {
        gMoveDescription = MOVE_DESC_BATTLE;
        CreateBPmartMoveTutor(ptr);
    }
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

        // profglade
        case 0x308: return 0x2E9;
        case 0x309: return 0x201;
        case 0x30A: return 0x221;
        case 0x30B: return 0x241;

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

    s16 srcX1 = VarGet(ScriptReadHalfword(ctx));
    s16 srcY1 = VarGet(ScriptReadHalfword(ctx));
    s16 srcX2 = VarGet(ScriptReadHalfword(ctx));
    s16 srcY2 = VarGet(ScriptReadHalfword(ctx));

    s16 destXBase = VarGet(ScriptReadHalfword(ctx));
    s16 destYBase = VarGet(ScriptReadHalfword(ctx));
    bool32 updateMap = ScriptReadByte(ctx);

    s16 i, j;

    const struct MapHeader *mapHeader = Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(map), MAP_NUM(map));
    const struct MapLayout *mapLayout = mapHeader->mapLayout;

    for (i = srcX1; i <= srcX2; i++)
    {
        for (j = srcY1; j <= srcY2; j++)
        {
            u16 metatile = mapLayout->map[j * mapLayout->width + i];

            s16 destX = destXBase + (i - srcX1);
            s16 destY = destYBase + (j - srcY1);

            MapGridSetMetatileIdAt(destX + MAP_OFFSET, destY + MAP_OFFSET, metatile);
        }
    }
    if (updateMap)
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

void ForceCanopy(void)
{
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(8, 12));
    // SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(4, 12));
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_EFFECT_BLEND);
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
}

void TestSpotlight(void)
{
    BeginHardwarePaletteFade((BLDCNT_TGT1_BG3 | BLDCNT_TGT1_BG2 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BD | BLDCNT_EFFECT_DARKEN), 0, 0, 16, FALSE);
}

void FlipInkay(void)
{
    struct Pokemon *mon = GetFirstLiveMon();
    struct ObjectEvent *objectEvent = GetFollowerObject();

    u16 species1 = SPECIES_INKAY;
    u16 species2 = SPECIES_INKAY_FLIPPED;

    if (GetMonData(mon, MON_DATA_SPECIES_OR_EGG, 0) == SPECIES_INKAY)
    {
        SetMonData(mon, MON_DATA_SPECIES, &species2);
        FollowerSetGraphics(objectEvent, SPECIES_INKAY_FLIPPED, OW_SHINY(objectEvent), OW_FEMALE(objectEvent));
    }
    else if (GetMonData(mon, MON_DATA_SPECIES_OR_EGG, 0) == SPECIES_INKAY_FLIPPED)
    {
        SetMonData(mon, MON_DATA_SPECIES, &species1);
        FollowerSetGraphics(objectEvent, SPECIES_INKAY, OW_SHINY(objectEvent), OW_FEMALE(objectEvent));
    }
    RefreshFollowerGraphics(objectEvent);
}

void ScrCmd_isachest(void)
{
    u16 localId = gSpecialVar_LastTalked;
    const struct ObjectEventTemplate *obj = GetObjectEventTemplateByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);

    if (GetChestType(obj->graphicsId))
        gSpecialVar_0x8008 = TRUE;
    else
        gSpecialVar_0x8008 = FALSE;
}

void ScrCmd_openchest(void)
{
    u16 localId = gSpecialVar_LastTalked;
    const struct ObjectEventTemplate *obj = GetObjectEventTemplateByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    u8 objectEventId;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, &objectEventId))
    {
        u16 flag = GetObjectEventFlagIdByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
        if (FlagGet(flag))
            gSpecialVar_0x8008 = TRUE;
        else
            gSpecialVar_0x8008 = FALSE;
        FlagSet(flag);
        ObjectEventSetGraphicsId(&gObjectEvents[gSelectedObjectEvent], GetChestType(obj->graphicsId));
        if (gObjectEvents[gSelectedObjectEvent].active)
            ObjectEventFaceOppositeDirection(&gObjectEvents[gSelectedObjectEvent], DIR_NORTH);
    }
}

void TryShinyStarters(void)
{
    if (Random() < SHINY_ODDS)
        FlagSet(FLAG_FIRST_STARTER_SHINY);
    if (Random() < SHINY_ODDS)
        FlagSet(FLAG_SECOND_STARTER_SHINY);
    if (Random() < SHINY_ODDS)
        FlagSet(FLAG_THIRD_STARTER_SHINY);
}

static const u16 sCoralgrove_ExtraPalette[] = INCGFX_U16("data/tilesets/secondary/coralgrove_secondary/palettes/09backup.pal", ".gbapal");
static const u16 sCoralgrove_OriginalPalette[] = INCGFX_U16("data/tilesets/secondary/coralgrove_secondary/palettes/09.pal", ".gbapal");              

void LoadCoralGroveAdditionalPal(void)
{
    LoadPaletteFast(sCoralgrove_ExtraPalette, BG_PLTT_ID(9), PLTT_SIZE_4BPP);
    TimeMixPalettes(1, &gPlttBufferUnfaded[BG_PLTT_ID(9)], &gPlttBufferFaded[BG_PLTT_ID(9)], &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, 256);
}

void LoadCoralGroveOriginalPal(void)
{
    LoadPaletteFast(sCoralgrove_OriginalPalette, BG_PLTT_ID(9), PLTT_SIZE_4BPP);
    TimeMixPalettes(1, &gPlttBufferUnfaded[BG_PLTT_ID(9)], &gPlttBufferFaded[BG_PLTT_ID(9)], &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, 256);
}

void ForceFadeOutBGM(void)
{
    FadeOutBGM(4);
}

void TestSkybattleEligibility(void)
{   
    int i;
    for (i = 0; i < NUM_SPECIES; i++)
    {
        enum Ability ability1 = GetSpeciesAbility(i, 0);
        enum Ability ability2 = GetSpeciesAbility(i, 1);
        enum Ability ability3 = GetSpeciesAbility(i, 2);

        bool32 hasLevitateAbility = (ability1 == ABILITY_LEVITATE || ability1 == ABILITY_EELEVATE
                                  || ability2 == ABILITY_LEVITATE || ability2 == ABILITY_EELEVATE
                                  || ability3 == ABILITY_LEVITATE || ability3 == ABILITY_EELEVATE);
        bool32 isFlyingType = GetSpeciesType(i, 0) == TYPE_FLYING || GetSpeciesType(i, 1) == TYPE_FLYING;

        if ((hasLevitateAbility || isFlyingType) && !gSpeciesInfo[i].isSkyBattleBanned)
            DebugPrintf2("%S", gSpeciesInfo[i].speciesName);
    }


}

static const u16 sSkyBattleBadge01[] =
{
    SPECIES_WINGULL,
    SPECIES_SWABLU,
    SPECIES_DRIFLOON,
};

static const u16 sSkyBattleBadge2[] =
{
    SPECIES_WINGULL,
    SPECIES_SWABLU,
    SPECIES_DRIFLOON,
    SPECIES_PIDGEOTTO,
    SPECIES_STARAVIA,
    SPECIES_FLETCHINDER,
};

static const u16 sSkyBattleBadge3[] =
{
    SPECIES_WINGULL,
    SPECIES_SWABLU,
    SPECIES_DRIFLOON,
    SPECIES_PIDGEOTTO,
    SPECIES_STARAVIA,
    SPECIES_FLETCHINDER,
    SPECIES_FEAROW,
    SPECIES_SKARMORY,
    SPECIES_PELIPPER,
};

static const u16 sSkyBattleBadge4[] =
{
    SPECIES_WINGULL,
    SPECIES_SWABLU,
    SPECIES_DRIFLOON,
    SPECIES_PIDGEOTTO,
    SPECIES_STARAVIA,
    SPECIES_FLETCHINDER,
    SPECIES_FEAROW,
    SPECIES_SKARMORY,
    SPECIES_PELIPPER,
    SPECIES_DRIFBLIM,
};

static const u16 sSkyBattleBadge5678[] =
{
    SPECIES_WINGULL,
    SPECIES_SWABLU,
    SPECIES_DRIFLOON,
    SPECIES_PIDGEOTTO,
    SPECIES_STARAVIA,
    SPECIES_FLETCHINDER,
    SPECIES_FEAROW,
    SPECIES_SKARMORY,
    SPECIES_PELIPPER,
    SPECIES_DRIFBLIM,
    SPECIES_PIDGEOT,
    SPECIES_ALTARIA,
    SPECIES_STARAPTOR,
    SPECIES_TALONFLAME
};

void TrySpawnSkyBattle(void)
{
    u8 badgeCount = 0;
    enum Species species;

    for (int i = FLAG_BADGE01_GET; i < FLAG_BADGE01_GET + NUM_BADGES; i++)
    {
        if (FlagGet(i))
            badgeCount++;
    }

    switch (badgeCount)
    {
    default:
    case 1:
        species = sSkyBattleBadge01[Random() % ARRAY_COUNT(sSkyBattleBadge01)];
        break;
    case 2:
        species = sSkyBattleBadge2[Random() % ARRAY_COUNT(sSkyBattleBadge2)];
        break;
    case 3:
        species = sSkyBattleBadge3[Random() % ARRAY_COUNT(sSkyBattleBadge3)];
        break;
    case 4:
        species = sSkyBattleBadge3[Random() % ARRAY_COUNT(sSkyBattleBadge3)];
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        species = sSkyBattleBadge5678[Random() % ARRAY_COUNT(sSkyBattleBadge5678)];
        break;
    }

    gSpecialVar_0x8000 = species;
    gSpecialVar_0x8001 = (4 * badgeCount) + 4 + Random() % 3;
}

void SetLastVisitedDrifblimBalloon(void)
{
    const struct HealLocation *healLocation = GetHealLocationByMap(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum);
    if (healLocation)
    {
        SetWarpData(&gSaveBlock1Ptr->flightPointWarp, healLocation->mapGroup, healLocation->mapNum, WARP_ID_NONE, healLocation->x, healLocation->y);
    }
}

// #define METATILE_ProfGlade_OrangeTreeBottom_Left                         0x238
// #define METATILE_ProfGlade_OrangeTreeBottom_Middle                       0x239
// #define METATILE_ProfGlade_OrangeTreeBottom_Right                        0x23A
// #define METATILE_ProfGlade_OrangeTreeMiddle_Left                         0x230
// #define METATILE_ProfGlade_OrangeTreeMiddle_Left_OrangeTreeBottom_Right  0x23C
// #define METATILE_ProfGlade_OrangeTreeMiddle_Left_RedTreeBottom_Right     0x25C
// #define METATILE_ProfGlade_OrangeTreeMiddle_Left_YellowTreeBottom_Right  0x21C
// #define METATILE_ProfGlade_OrangeTreeMiddle_Middle                       0x231
// #define METATILE_ProfGlade_OrangeTreeMiddle_Right                        0x232
// #define METATILE_ProfGlade_OrangeTreeMiddle_Right_OrangeTreeBottom_Left  0x23B
// #define METATILE_ProfGlade_OrangeTreeMiddle_Right_RedTreeBottom_Left     0x25B
// #define METATILE_ProfGlade_OrangeTreeMiddle_Right_YellowTreeBottom_Left  0x21B
// #define METATILE_ProfGlade_OrangeTreePeak_Clear                          0x221
// #define METATILE_ProfGlade_OrangeTreePeak_Grass                          0x220
// #define METATILE_ProfGlade_OrangeTreePeak_OrangeTreeBehind               0x26B
// #define METATILE_ProfGlade_OrangeTreePeak_OrangeTreeMiddle_Left          0x282
// #define METATILE_ProfGlade_OrangeTreePeak_OrangeTreeMiddle_Right         0x283
// #define METATILE_ProfGlade_OrangeTreePeak_RedTreeBehind                  0x273
// #define METATILE_ProfGlade_OrangeTreePeak_RedTreeMiddle_Left             0x28A
// #define METATILE_ProfGlade_OrangeTreePeak_RedTreeMiddle_Right            0x28B
// #define METATILE_ProfGlade_OrangeTreePeak_YellowTreeBehind               0x263
// #define METATILE_ProfGlade_OrangeTreePeak_YellowTreeMiddle_Left          0x27A
// #define METATILE_ProfGlade_OrangeTreePeak_YellowTreeMiddle_Right         0x27B
// #define METATILE_ProfGlade_OrangeTreeTop_Left                            0x228
// #define METATILE_ProfGlade_OrangeTreeTop_Left_OrangeTreeBottom_Middle    0x2BA
// #define METATILE_ProfGlade_OrangeTreeTop_Left_OrangeTreeBottom_Right     0x29A
// #define METATILE_ProfGlade_OrangeTreeTop_Left_OrangeTreeMiddle_Right     0x234
// #define METATILE_ProfGlade_OrangeTreeTop_Left_RedTreeBottom_Middle       0x2BC
// #define METATILE_ProfGlade_OrangeTreeTop_Left_RedTreeBottom_Right        0x29C
// #define METATILE_ProfGlade_OrangeTreeTop_Left_RedTreeMiddle_Right        0x254
// #define METATILE_ProfGlade_OrangeTreeTop_Left_TreeBottom_Left            0x268
// #define METATILE_ProfGlade_OrangeTreeTop_Left_YellowTreeBottom_Middle    0x2B8
// #define METATILE_ProfGlade_OrangeTreeTop_Left_YellowTreeBottom_Right     0x298
// #define METATILE_ProfGlade_OrangeTreeTop_Left_YellowTreeMiddle_Right     0x214
// #define METATILE_ProfGlade_OrangeTreeTop_Middle                          0x229
// #define METATILE_ProfGlade_OrangeTreeTop_Right                           0x22A
// #define METATILE_ProfGlade_OrangeTreeTop_Right_OrangeTreeBottom_Left     0x29B
// #define METATILE_ProfGlade_OrangeTreeTop_Right_OrangeTreeBottom_Middle   0x2BB
// #define METATILE_ProfGlade_OrangeTreeTop_Right_OrangeTreeMiddle_Left     0x233
// #define METATILE_ProfGlade_OrangeTreeTop_Right_RedTreeBottom_Left        0x29D
// #define METATILE_ProfGlade_OrangeTreeTop_Right_RedTreeBottom_Middle      0x2BD
// #define METATILE_ProfGlade_OrangeTreeTop_Right_RedTreeMiddle_Left        0x253
// #define METATILE_ProfGlade_OrangeTreeTop_Right_TreeBottom_Right          0x269
// #define METATILE_ProfGlade_OrangeTreeTop_Right_YellowTreeBottom_Left     0x299
// #define METATILE_ProfGlade_OrangeTreeTop_Right_YellowTreeBottom_Middle   0x2B9
// #define METATILE_ProfGlade_OrangeTreeTop_Right_YellowTreeMiddle_Left     0x213
// #define METATILE_ProfGlade_RedTreeBottom_Left                            0x258
// #define METATILE_ProfGlade_RedTreeBottom_Middle                          0x259
// #define METATILE_ProfGlade_RedTreeBottom_Right                           0x25A
// #define METATILE_ProfGlade_RedTreeMiddle_Left                            0x250
// #define METATILE_ProfGlade_RedTreeMiddle_Left_OrangeTreeBottom_Right     0x22E
// #define METATILE_ProfGlade_RedTreeMiddle_Left_RedTreeBottom_Right        0x24E
// #define METATILE_ProfGlade_RedTreeMiddle_Left_YellowTreeBottom_Right     0x20E
// #define METATILE_ProfGlade_RedTreeMiddle_Middle                          0x251
// #define METATILE_ProfGlade_RedTreeMiddle_Right                           0x252
// #define METATILE_ProfGlade_RedTreeMiddle_Right_OrangeTreeBottom_Left     0x22D
// #define METATILE_ProfGlade_RedTreeMiddle_Right_RedTreeBottom_Left        0x24D
// #define METATILE_ProfGlade_RedTreeMiddle_Right_YellowTreeBottom_Left     0x20D
// #define METATILE_ProfGlade_RedTreePeak_Clear                             0x241
// #define METATILE_ProfGlade_RedTreePeak_Grass                             0x240
// #define METATILE_ProfGlade_RedTreePeak_OrangeTreeBehind                  0x26C
// #define METATILE_ProfGlade_RedTreePeak_OrangeTreeMiddle_Left             0x284
// #define METATILE_ProfGlade_RedTreePeak_OrangeTreeMiddle_Right            0x285
// #define METATILE_ProfGlade_RedTreePeak_RedTreeBehind                     0x274
// #define METATILE_ProfGlade_RedTreePeak_RedTreeMiddle_Left                0x28C
// #define METATILE_ProfGlade_RedTreePeak_RedTreeMiddle_Right               0x28D
// #define METATILE_ProfGlade_RedTreePeak_YellowTreeBehind                  0x264
// #define METATILE_ProfGlade_RedTreePeak_YellowTreeMiddle_Left             0x27C
// #define METATILE_ProfGlade_RedTreePeak_YellowTreeMiddle_Right            0x27D
// #define METATILE_ProfGlade_RedTreeTop_Left                               0x248
// #define METATILE_ProfGlade_RedTreeTop_Left_OrangeTreeBottom_Middle       0x2C2
// #define METATILE_ProfGlade_RedTreeTop_Left_OrangeTreeBottom_Right        0x2A2
// #define METATILE_ProfGlade_RedTreeTop_Left_OrangeTreeMiddle_Right        0x226
// #define METATILE_ProfGlade_RedTreeTop_Left_RedTreeBottom_Middle          0x2C4
// #define METATILE_ProfGlade_RedTreeTop_Left_RedTreeBottom_Right           0x2A4
// #define METATILE_ProfGlade_RedTreeTop_Left_RedTreeMiddle_Right           0x246
// #define METATILE_ProfGlade_RedTreeTop_Left_TreeBottom_Left               0x270
// #define METATILE_ProfGlade_RedTreeTop_Left_YellowTreeBottom_Middle       0x2C0
// #define METATILE_ProfGlade_RedTreeTop_Left_YellowTreeBottom_Right        0x2A0
// #define METATILE_ProfGlade_RedTreeTop_Left_YellowTreeMiddle_Right        0x206
// #define METATILE_ProfGlade_RedTreeTop_Middle                             0x249
// #define METATILE_ProfGlade_RedTreeTop_Right                              0x24A
// #define METATILE_ProfGlade_RedTreeTop_Right_OrangeTreeBottom_Left        0x2A3
// #define METATILE_ProfGlade_RedTreeTop_Right_OrangeTreeBottom_Middle      0x2C3
// #define METATILE_ProfGlade_RedTreeTop_Right_OrangeTreeMiddle_Left        0x225
// #define METATILE_ProfGlade_RedTreeTop_Right_RedTreeBottom_Left           0x2A5
// #define METATILE_ProfGlade_RedTreeTop_Right_RedTreeBottom_Middle         0x2C5
// #define METATILE_ProfGlade_RedTreeTop_Right_RedTreeMiddle_Left           0x245
// #define METATILE_ProfGlade_RedTreeTop_Right_TreeBottom_Right             0x271
// #define METATILE_ProfGlade_RedTreeTop_Right_YellowTreeBottom_Left        0x2A1
// #define METATILE_ProfGlade_RedTreeTop_Right_YellowTreeBottom_Middle      0x2C1
// #define METATILE_ProfGlade_RedTreeTop_Right_YellowTreeMiddle_Left        0x205
// #define METATILE_ProfGlade_YellowTreeBottom_Left                         0x218
// #define METATILE_ProfGlade_YellowTreeBottom_Middle                       0x219
// #define METATILE_ProfGlade_YellowTreeBottom_Right                        0x21A
// #define METATILE_ProfGlade_YellowTreeMiddle_Left                         0x210
// #define METATILE_ProfGlade_YellowTreeMiddle_Left_OrangeTreeBottom_Right  0x22C
// #define METATILE_ProfGlade_YellowTreeMiddle_Left_RedTreeBottom_Right     0x24C
// #define METATILE_ProfGlade_YellowTreeMiddle_Left_YellowTreeBottom_Right  0x20C
// #define METATILE_ProfGlade_YellowTreeMiddle_Middle                       0x211
// #define METATILE_ProfGlade_YellowTreeMiddle_Right                        0x212
// #define METATILE_ProfGlade_YellowTreeMiddle_Right_OrangeTreeBottom_Left  0x22B
// #define METATILE_ProfGlade_YellowTreeMiddle_Right_RedTreeBottom_Left     0x24B
// #define METATILE_ProfGlade_YellowTreeMiddle_Right_YellowTreeBottom_Left  0x20B
// #define METATILE_ProfGlade_YellowTreePeak_Clear                          0x201
// #define METATILE_ProfGlade_YellowTreePeak_Grass                          0x200
// #define METATILE_ProfGlade_YellowTreePeak_OrangeTreeBehind               0x26A
// #define METATILE_ProfGlade_YellowTreePeak_OrangeTreeMiddle_Left          0x280
// #define METATILE_ProfGlade_YellowTreePeak_OrangeTreeMiddle_Right         0x281
// #define METATILE_ProfGlade_YellowTreePeak_RedTreeBehind                  0x272
// #define METATILE_ProfGlade_YellowTreePeak_RedTreeMiddle_Left             0x288
// #define METATILE_ProfGlade_YellowTreePeak_RedTreeMiddle_Right            0x289
// #define METATILE_ProfGlade_YellowTreePeak_YellowTreeBehind               0x262
// #define METATILE_ProfGlade_YellowTreePeak_YellowTreeMiddle_Left          0x278
// #define METATILE_ProfGlade_YellowTreePeak_YellowTreeMiddle_Right         0x279
// #define METATILE_ProfGlade_YellowTreeTop_Left                            0x208
// #define METATILE_ProfGlade_YellowTreeTop_Left_OrangeTreeBottom_Middle    0x2B2
// #define METATILE_ProfGlade_YellowTreeTop_Left_OrangeTreeBottom_Right     0x292
// #define METATILE_ProfGlade_YellowTreeTop_Left_OrangeTreeMiddle_Right     0x224
// #define METATILE_ProfGlade_YellowTreeTop_Left_RedTreeBottom_Middle       0x2B4
// #define METATILE_ProfGlade_YellowTreeTop_Left_RedTreeBottom_Right        0x294
// #define METATILE_ProfGlade_YellowTreeTop_Left_RedTreeMiddle_Right        0x244
// #define METATILE_ProfGlade_YellowTreeTop_Left_TreeBottom_Left            0x260
// #define METATILE_ProfGlade_YellowTreeTop_Left_YellowTreeBottom_Middle    0x2B0
// #define METATILE_ProfGlade_YellowTreeTop_Left_YellowTreeBottom_Right     0x290
// #define METATILE_ProfGlade_YellowTreeTop_Left_YellowTreeMiddle_Right     0x204
// #define METATILE_ProfGlade_YellowTreeTop_Middle                          0x209
// #define METATILE_ProfGlade_YellowTreeTop_Right                           0x20A
// #define METATILE_ProfGlade_YellowTreeTop_Right_OrangeTreeBottom_Left     0x293
// #define METATILE_ProfGlade_YellowTreeTop_Right_OrangeTreeBottom_Middle   0x2B3
// #define METATILE_ProfGlade_YellowTreeTop_Right_OrangeTreeMiddle_Left     0x223
// #define METATILE_ProfGlade_YellowTreeTop_Right_RedTreeBottom_Left        0x295
// #define METATILE_ProfGlade_YellowTreeTop_Right_RedTreeBottom_Middle      0x2B5
// #define METATILE_ProfGlade_YellowTreeTop_Right_RedTreeMiddle_Left        0x243
// #define METATILE_ProfGlade_YellowTreeTop_Right_TreeBottom_Right          0x261
// #define METATILE_ProfGlade_YellowTreeTop_Right_YellowTreeBottom_Left     0x291
// #define METATILE_ProfGlade_YellowTreeTop_Right_YellowTreeBottom_Middle   0x2B1
// #define METATILE_ProfGlade_YellowTreeTop_Right_YellowTreeMiddle_Left     0x203

// void PaintTreeMetatile(void)
// {
//     u16 replacementTile = 0;
//     s16 x = sCursorPosition.x;
//     s16 y = sCursorPosition.y;
//     u16 destTile = GetMetatileIdAt(x, y);
//     u16 tileAboveDestTile = GetMetatileIdAt(x, y - 1);
//     u16 tileBelowDestTile = GetMetatileIdAt(x, y + 1);

//     switch (destTile)
//     {
//     case METATILE_ProfGlade_YellowTreeMiddle_Left:
//         switch (tileBelowDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeTop_Middle:       replacementTile = METATILE_ProfGlade_YellowTreePeak_YellowTreeMiddle_Left;          break;
//         case METATILE_ProfGlade_OrangeTreeTop_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreePeak_YellowTreeMiddle_Left;          break;
//         case METATILE_ProfGlade_RedTreeTop_Middle:          replacementTile = METATILE_ProfGlade_RedTreePeak_YellowTreeMiddle_Left;             break;
//         }
//     case METATILE_ProfGlade_YellowTreeMiddle_Right:
//         switch (tileBelowDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeTop_Middle:       replacementTile = METATILE_ProfGlade_YellowTreePeak_YellowTreeMiddle_Right;         break;
//         case METATILE_ProfGlade_OrangeTreeTop_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreePeak_YellowTreeMiddle_Right;         break;
//         case METATILE_ProfGlade_RedTreeTop_Middle:          replacementTile = METATILE_ProfGlade_RedTreePeak_YellowTreeMiddle_Right;            break;
//         }
//     case METATILE_ProfGlade_OrangeTreeMiddle_Left:
//         switch (tileBelowDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeTop_Middle:       replacementTile = METATILE_ProfGlade_YellowTreePeak_OrangeTreeMiddle_Left;          break;
//         case METATILE_ProfGlade_OrangeTreeTop_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreePeak_OrangeTreeMiddle_Left;          break;
//         case METATILE_ProfGlade_RedTreeTop_Middle:          replacementTile = METATILE_ProfGlade_RedTreePeak_OrangeTreeMiddle_Left;             break;
//         }
//     case METATILE_ProfGlade_OrangeTreeMiddle_Right:
//         switch (tileBelowDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeTop_Middle:       replacementTile = METATILE_ProfGlade_YellowTreePeak_OrangeTreeMiddle_Right;         break;
//         case METATILE_ProfGlade_OrangeTreeTop_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreePeak_OrangeTreeMiddle_Right;         break;
//         case METATILE_ProfGlade_RedTreeTop_Middle:          replacementTile = METATILE_ProfGlade_RedTreePeak_OrangeTreeMiddle_Right;            break;
//         }
//     case METATILE_ProfGlade_RedTreeMiddle_Left:
//         switch (tileBelowDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeTop_Middle:       replacementTile = METATILE_ProfGlade_YellowTreePeak_RedTreeMiddle_Left;             break;
//         case METATILE_ProfGlade_OrangeTreeTop_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreePeak_RedTreeMiddle_Left;             break;
//         case METATILE_ProfGlade_RedTreeTop_Middle:          replacementTile = METATILE_ProfGlade_RedTreePeak_RedTreeMiddle_Left;                break;
//         }
//     case METATILE_ProfGlade_RedTreeMiddle_Right:
//         switch (tileBelowDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeTop_Middle:       replacementTile = METATILE_ProfGlade_YellowTreePeak_RedTreeMiddle_Right;            break;
//         case METATILE_ProfGlade_OrangeTreeTop_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreePeak_RedTreeMiddle_Right;            break;
//         case METATILE_ProfGlade_RedTreeTop_Middle:          replacementTile = METATILE_ProfGlade_RedTreePeak_RedTreeMiddle_Right;               break;
//         }
//     case METATILE_ProfGlade_YellowTreeTop_Left:
//         switch (tileAboveDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_YellowTreeTop_Left_YellowTreeBottom_Middle;    break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_YellowTreeTop_Left_OrangeTreeBottom_Middle;    break;
//         case METATILE_ProfGlade_RedTreeMiddle_Middle:       replacementTile = METATILE_ProfGlade_YellowTreeTop_Left_RedTreeBottom_Middle;       break;
            
//         case METATILE_ProfGlade_YellowTreeMiddle_Right:     replacementTile = METATILE_ProfGlade_YellowTreeTop_Left_YellowTreeBottom_Right;     break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Right:     replacementTile = METATILE_ProfGlade_YellowTreeTop_Left_OrangeTreeBottom_Right;     break;
//         case METATILE_ProfGlade_RedTreeMiddle_Right:        replacementTile = METATILE_ProfGlade_YellowTreeTop_Left_RedTreeBottom_Right;        break;
//         }
//         break;
//     case METATILE_ProfGlade_YellowTreeTop_Right:
//         switch (tileAboveDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_YellowTreeTop_Right_YellowTreeBottom_Middle;   break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_YellowTreeTop_Right_OrangeTreeBottom_Middle;   break;
//         case METATILE_ProfGlade_RedTreeMiddle_Middle:       replacementTile = METATILE_ProfGlade_YellowTreeTop_Right_RedTreeBottom_Middle;      break;

//         case METATILE_ProfGlade_YellowTreeMiddle_Left:      replacementTile = METATILE_ProfGlade_YellowTreeTop_Right_YellowTreeBottom_Left;     break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Left:      replacementTile = METATILE_ProfGlade_YellowTreeTop_Right_OrangeTreeBottom_Left;     break;
//         case METATILE_ProfGlade_RedTreeMiddle_Left:         replacementTile = METATILE_ProfGlade_YellowTreeTop_Right_RedTreeBottom_Left;        break;
//         }
//         break;
//     case METATILE_ProfGlade_OrangeTreeTop_Left:
//         switch (tileAboveDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_OrangeTreeTop_Left_YellowTreeBottom_Middle;    break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_OrangeTreeTop_Left_OrangeTreeBottom_Middle;    break;
//         case METATILE_ProfGlade_RedTreeMiddle_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreeTop_Left_RedTreeBottom_Middle;       break;

//         case METATILE_ProfGlade_YellowTreeMiddle_Right:     replacementTile = METATILE_ProfGlade_OrangeTreeTop_Left_YellowTreeBottom_Right;     break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Right:     replacementTile = METATILE_ProfGlade_OrangeTreeTop_Left_OrangeTreeBottom_Right;     break;
//         case METATILE_ProfGlade_RedTreeMiddle_Right:        replacementTile = METATILE_ProfGlade_OrangeTreeTop_Left_RedTreeBottom_Right;        break;
//         }
//         break;
//     case METATILE_ProfGlade_OrangeTreeTop_Right:
//         switch (tileAboveDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_OrangeTreeTop_Right_YellowTreeBottom_Middle;   break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_OrangeTreeTop_Right_OrangeTreeBottom_Middle;   break;
//         case METATILE_ProfGlade_RedTreeMiddle_Middle:       replacementTile = METATILE_ProfGlade_OrangeTreeTop_Right_RedTreeBottom_Middle;      break;

//         case METATILE_ProfGlade_YellowTreeMiddle_Left:      replacementTile = METATILE_ProfGlade_OrangeTreeTop_Right_YellowTreeBottom_Left;     break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Left:      replacementTile = METATILE_ProfGlade_OrangeTreeTop_Right_OrangeTreeBottom_Left;     break;
//         case METATILE_ProfGlade_RedTreeMiddle_Left:         replacementTile = METATILE_ProfGlade_OrangeTreeTop_Right_RedTreeBottom_Left;        break;
//         }
//         break;
//     case METATILE_ProfGlade_RedTreeTop_Left:
//         switch (tileAboveDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_RedTreeTop_Left_YellowTreeBottom_Middle;       break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_RedTreeTop_Left_OrangeTreeBottom_Middle;       break;
//         case METATILE_ProfGlade_RedTreeMiddle_Middle:       replacementTile = METATILE_ProfGlade_RedTreeTop_Left_RedTreeBottom_Middle;          break;

//         case METATILE_ProfGlade_YellowTreeMiddle_Right:     replacementTile = METATILE_ProfGlade_RedTreeTop_Left_YellowTreeBottom_Right;        break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Right:     replacementTile = METATILE_ProfGlade_RedTreeTop_Left_OrangeTreeBottom_Right;        break;
//         case METATILE_ProfGlade_RedTreeMiddle_Right:        replacementTile = METATILE_ProfGlade_RedTreeTop_Left_RedTreeBottom_Right;           break;
//         }
//         break;
//     case METATILE_ProfGlade_RedTreeTop_Right:
//         switch (tileAboveDestTile)
//         {
//         case METATILE_ProfGlade_YellowTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_RedTreeTop_Right_YellowTreeBottom_Middle;      break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Middle:    replacementTile = METATILE_ProfGlade_RedTreeTop_Right_OrangeTreeBottom_Middle;      break;
//         case METATILE_ProfGlade_RedTreeMiddle_Middle:       replacementTile = METATILE_ProfGlade_RedTreeTop_Right_RedTreeBottom_Middle;         break;

//         case METATILE_ProfGlade_YellowTreeMiddle_Left:      replacementTile = METATILE_ProfGlade_RedTreeTop_Right_YellowTreeBottom_Left;         break;
//         case METATILE_ProfGlade_OrangeTreeMiddle_Left:      replacementTile = METATILE_ProfGlade_RedTreeTop_Right_OrangeTreeBottom_Left;         break;
//         case METATILE_ProfGlade_RedTreeMiddle_Left:         replacementTile = METATILE_ProfGlade_RedTreeTop_Right_RedTreeBottom_Left;            break;
//         }
//         break;
//     }
//     if (replacementTile != 0)
//         MapGridSetMetatileIdAt(x, y, replacementTile);
// }

void GetMetatileId(struct ScriptContext *ctx)
{
    u16 x = VarGet(ScriptReadHalfword(ctx));
    u16 y = VarGet(ScriptReadHalfword(ctx));
    
    gSpecialVar_Result = MapGridGetMetatileIdAt(x, y);
}

// Auto-generated from map.bin for MAP_PROFS_GLADE_INTERIOR
// Encounter metatile IDs: 0x200, 0x220, 0x240, 0x2EC
// Map dimensions: 78 x 95
#define PROFS_GLADE_INTERIOR_ENCOUNTER_TILE_COUNT 459

struct TileCoord
{
    u16 x;
    u16 y;
};

static const struct TileCoord sProfsGladeInteriorEncounterTiles[PROFS_GLADE_INTERIOR_ENCOUNTER_TILE_COUNT] =
{
    {46, 5},  {47, 5},  {48, 5},  {47, 6},  {48, 6},  {47, 7},
    {48, 7},  {49, 7},  {49, 8},  {41, 9},  {42, 9},  {43, 9},
    {41, 10}, {42, 10}, {43, 10}, {31, 11}, {32, 11}, {41, 11},
    {42, 11}, {31, 12}, {32, 12}, {33, 12}, {30, 13}, {31, 13},
    {32, 13}, {33, 13}, {30, 14}, {31, 14}, {32, 14}, {33, 14},
    {10, 15}, {11, 15}, {12, 15}, {13, 15}, {14, 15}, {30, 15},
    {31, 15}, {32, 15}, {33, 15}, {10, 16}, {11, 16}, {12, 16},
    {13, 16}, {14, 16}, {30, 16}, {31, 16}, {32, 16}, {33, 16},
    {34, 16}, {10, 17}, {11, 17}, {12, 17}, {13, 17}, {14, 17},
    {33, 17}, {11, 18}, {36, 21}, {36, 22}, {37, 22}, {36, 23},
    {37, 23}, {36, 24}, {37, 24}, {36, 25}, {37, 25}, {65, 25},
    {66, 25}, {67, 25}, {68, 25}, {69, 25}, {36, 26}, {37, 26},
    {66, 26}, {67, 26}, {68, 26}, {37, 27}, {22, 29}, {23, 29},
    {24, 29}, {42, 29}, {43, 29}, {44, 29}, {45, 29}, {46, 29},
    {47, 29}, {48, 29}, {49, 29}, {50, 29}, {7, 30},  {8, 30},
    {9, 30},  {22, 30}, {23, 30}, {24, 30}, {25, 30}, {26, 30},
    {43, 30}, {44, 30}, {45, 30}, {46, 30}, {47, 30}, {48, 30},
    {49, 30}, {50, 30}, {7, 31},  {8, 31},  {9, 31},  {10, 31},
    {25, 31}, {26, 31}, {27, 31}, {28, 31}, {29, 31}, {43, 31},
    {44, 31}, {45, 31}, {46, 31}, {47, 31}, {48, 31}, {49, 31},
    {50, 31}, {51, 31}, {7, 32},  {8, 32},  {9, 32},  {10, 32},
    {28, 32}, {29, 32}, {42, 32}, {49, 32}, {10, 33}, {11, 33},
    {20, 33}, {21, 33}, {18, 34}, {19, 34}, {20, 34}, {21, 34},
    {17, 35}, {18, 35}, {19, 35}, {20, 35}, {21, 35}, {16, 36},
    {17, 36}, {18, 36}, {16, 37}, {17, 37}, {18, 37}, {67, 41},
    {68, 41}, {69, 41}, {64, 42}, {65, 42}, {66, 42}, {67, 42},
    {68, 42}, {69, 42}, {64, 43}, {65, 43}, {66, 43}, {67, 43},
    {68, 43}, {69, 43}, {40, 44}, {41, 44}, {42, 44}, {64, 44},
    {65, 44}, {66, 44}, {67, 44}, {68, 44}, {10, 45}, {11, 45},
    {12, 45}, {41, 45}, {42, 45}, {43, 45}, {64, 45}, {65, 45},
    {66, 45}, {67, 45}, {68, 45}, {10, 46}, {11, 46}, {12, 46},
    {48, 46}, {49, 46}, {10, 47}, {11, 47}, {12, 47}, {49, 47},
    {50, 47}, {51, 47}, {10, 48}, {11, 48}, {12, 48}, {13, 48},
    {10, 49}, {11, 49}, {12, 49}, {26, 49}, {27, 49}, {16, 50},
    {17, 50}, {18, 50}, {19, 50}, {20, 50}, {26, 50}, {27, 50},
    {28, 50}, {29, 50}, {30, 50}, {14, 51}, {15, 51}, {16, 51},
    {17, 51}, {18, 51}, {19, 51}, {20, 51}, {21, 51}, {27, 51},
    {28, 51}, {29, 51}, {30, 51}, {13, 52}, {14, 52}, {15, 52},
    {16, 52}, {17, 52}, {18, 52}, {19, 52}, {20, 52}, {21, 52},
    {13, 53}, {14, 53}, {15, 53}, {16, 53}, {17, 53}, {18, 53},
    {37, 53}, {38, 53}, {39, 53}, {14, 54}, {15, 54}, {37, 54},
    {38, 54}, {14, 55}, {15, 55}, {12, 56}, {56, 56}, {11, 57},
    {12, 57}, {13, 57}, {56, 57}, {57, 57}, {58, 57}, {59, 57},
    {60, 57}, {61, 57}, {62, 57}, {10, 58}, {11, 58}, {12, 58},
    {35, 58}, {58, 58}, {59, 58}, {60, 58}, {61, 58}, {62, 58},
    {10, 59}, {11, 59}, {12, 59}, {22, 59}, {23, 59}, {34, 59},
    {35, 59}, {36, 59}, {58, 59}, {59, 59}, {60, 59}, {61, 59},
    {62, 59}, {63, 59}, {10, 60}, {11, 60}, {12, 60},
    {19, 60}, {20, 60}, {21, 60}, {22, 60}, {34, 60}, {35, 60},
    {36, 60}, {19, 61}, {20, 61}, {21, 61}, {22, 61}, {34, 61},
    {35, 61}, {36, 61}, {30, 62}, {34, 62}, {35, 62}, {36, 62},
    {28, 63}, {29, 63}, {31, 63}, {32, 63}, {33, 63}, {34, 63},
    {35, 63}, {36, 63}, {52, 63}, {53, 63}, {54, 63}, {55, 63},
    {56, 63}, {57, 63}, {28, 64}, {29, 64}, {30, 64}, {31, 64},
    {32, 64}, {34, 64}, {35, 64}, {36, 64}, {52, 64}, {53, 64},
    {54, 64}, {57, 64}, {28, 65}, {29, 65}, {30, 65}, {32, 65},
    {33, 65}, {52, 65}, {53, 65}, {31, 66}, {32, 66}, {33, 66},
    {31, 67}, {32, 67}, {26, 71}, {27, 71}, {28, 71}, {29, 71},
    {30, 71}, {31, 71}, {32, 71}, {26, 72}, {31, 72}, {35, 73},
    {36, 73}, {34, 74}, {35, 74}, {36, 74}, {45, 74}, {46, 74},
    {47, 74}, {48, 74}, {49, 74}, {50, 74}, {51, 74}, {49, 75},
    {50, 75}, {51, 75}, {52, 75}, {53, 75}, {54, 75}, {52, 76},
    {53, 76}, {54, 76}, {55, 76}, {15, 77}, {16, 77}, {17, 77},
    {18, 77}, {52, 77}, {53, 77}, {54, 77}, {55, 77}, {15, 78},
    {16, 78}, {17, 78}, {52, 78}, {15, 79}, {52, 79}, {37, 80},
    {38, 80}, {39, 80}, {52, 80}, {37, 81}, {38, 81}, {39, 81},
    {40, 81}, {41, 81}, {42, 81}, {51, 81}, {52, 81}, {40, 82},
    {41, 82}, {42, 82}, {43, 82}, {44, 82}, {45, 82}, {46, 82},
    {33, 83}, {34, 83}, {40, 83}, {41, 83}, {42, 83}, {43, 83},
    {44, 83}, {45, 83}, {46, 83}, {47, 83}, {30, 84}, {31, 84},
    {32, 84}, {33, 84}, {34, 84}, {41, 84}, {45, 84}, {46, 84},
    {47, 84}, {48, 84}, {30, 85}, {31, 85}, {32, 85}, {33, 85},
    {34, 85}, {45, 85}, {46, 85}, {47, 85}, {48, 85}, {21, 86},
    {22, 86}, {23, 86}, {24, 86}, {25, 86}, {26, 86}, {31, 86},
    {32, 86}, {33, 86}, {34, 86}, {35, 86}, {45, 86}, {46, 86},
    {24, 87}, {25, 87}, {26, 87}, {27, 87}, {28, 87}, {45, 87},
    {46, 87}, {27, 88}, {28, 88}, {29, 88},
};

static u16 sStarters[] =
{
    SPECIES_ROWLET,
    SPECIES_TORCHIC,
    SPECIES_PIPLUP
};

void GetRandomGrassTileForStarterEncounter(void)
{
    bool8 eligibleSpot = FALSE;
    s16 x, y;

    do
    {
        u16 tile = Random() % PROFS_GLADE_INTERIOR_ENCOUNTER_TILE_COUNT;

        x = sProfsGladeInteriorEncounterTiles[tile].x;
        y = sProfsGladeInteriorEncounterTiles[tile].y;

        if ((x < gSaveBlock1Ptr->pos.x - 9 || x > gSaveBlock1Ptr->pos.x + 9)
         || (y < gSaveBlock1Ptr->pos.y - 9 || y > gSaveBlock1Ptr->pos.y + 9))
        {
            if (y < 39)
                SetObjEventTemplateCoords(LOCALID_GLADE_HIKER, 12, 51);
            else
                SetObjEventTemplateCoords(LOCALID_GLADE_HIKER, 39, 31);
            VarSet(VAR_TEMP_0, x);
            VarSet(VAR_TEMP_1, y);
            SetObjEventTemplateCoords(LOCALID_GLADE_MON, x, y);
            eligibleSpot = TRUE;
        }
    } while (!eligibleSpot);

    VarSet(VAR_TEMP_2, sStarters[Random() % ARRAY_COUNT(sStarters)]);
}

void IsStarterWithinViewOfPlayer(void)
{
    u16 x = VarGet(VAR_TEMP_0);
    u16 y = VarGet(VAR_TEMP_1);

    if ((x < gSaveBlock1Ptr->pos.x - 9 || x > gSaveBlock1Ptr->pos.x + 9)
     || (y < gSaveBlock1Ptr->pos.y - 9 || y > gSaveBlock1Ptr->pos.y + 9))
    {
        gSpecialVar_Result = FALSE;
    }
    else
    {
        gSpecialVar_Result = TRUE;
    }
}