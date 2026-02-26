#include "global.h"
#include "battle.h"
#include "battle_setup.h"
#include "dynamic_placeholder_text_util.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_specials.h"
#include "item.h"
#include "main.h"
#include "nuzlocke.h"
#include "overworld.h"
#include "pokemon_storage_system.h"
#include "palette.h"
#include "window.h"
#include "script.h"
#include "constants/rgb.h"
#include "battle_factory.h"
#include "save.h"
#include "battle_tent.h"
#include "string_util.h"
#include "strings.h"
#include "malloc.h"
#include "region_map.h"
#include "pokemon_summary_screen.h"

const u32 gSummaryPage_Info_Tilemap_Deathbox[]          = INCBIN_U32("graphics/summary_screen/page_info_deathbox.bin.smolTM");
const u32 gStorageSystemPartyMenu_Tilemap_Deathbox[]    = INCBIN_U32("graphics/pokemon_storage/party_menu_deathbox.bin.smolTM");

const u8 gText_GameOver[] = _("{PLAYER}'s team was wiped out,\nending the current run…\p");

EWRAM_DATA u8 gCurrentBoxOption = 0;

u8 CopyMonToDeathbox(struct Pokemon *mon)
{
    s32 boxNo, boxPos;

    SetPCBoxToSendMon(VarGet(VAR_PC_BOX_TO_SEND_MON));

    boxNo = StorageGetCurrentBox();

    if (boxNo < LIVE_BOXES_COUNT)
        boxNo = LIVE_BOXES_COUNT;

    s32 startBox = boxNo;

    do
    {
        for (boxPos = 0; boxPos < IN_BOX_COUNT; boxPos++)
        {
            struct BoxPokemon *checkingMon = GetBoxedMonPtr(boxNo, boxPos);
            if (GetBoxMonData(checkingMon, MON_DATA_SPECIES, NULL) == SPECIES_NONE)
            {
                CopyMon(checkingMon, &mon->box, sizeof(mon->box));
                gSpecialVar_MonBoxId = boxNo;
                gSpecialVar_MonBoxPos = boxPos;
                if (GetPCBoxToSendMon() != boxNo)
                    FlagClear(FLAG_SHOWN_BOX_WAS_FULL_MESSAGE);
                VarSet(VAR_PC_BOX_TO_SEND_MON, boxNo);
                return MON_GIVEN_TO_PC;
            }
        }

        boxNo++;
            
        if (boxNo == TOTAL_BOXES_COUNT)
            boxNo = 7;
    
    } while (boxNo != startBox);

    return MON_CANT_GIVE;
}

void SetBoxMonOpposingSpecies(struct BoxPokemon *boxMon, u16 species)
{
    u8 data;
    species &= 0x7FF;

    data = (species >> 0) & 0x1F;
    SetBoxMonData(boxMon, MON_DATA_OPPONENT_SPECIES_1, &data);

    data = (species >> 5) & 0x1F;
    SetBoxMonData(boxMon, MON_DATA_OPPONENT_SPECIES_2, &data);

    data = (species >> 10) & 0x1F;
    SetBoxMonData(boxMon, MON_DATA_OPPONENT_SPECIES_3, &data);
}

u16 GetBoxMonOpposingSpecies(struct BoxPokemon *boxMon)
{
    u16 species = 0;

    species |= (GetBoxMonData(boxMon, MON_DATA_OPPONENT_SPECIES_1, NULL) & 0x1F) << 0;
    species |= (GetBoxMonData(boxMon, MON_DATA_OPPONENT_SPECIES_2, NULL) & 0x1F) << 5;
    species |= (GetBoxMonData(boxMon, MON_DATA_OPPONENT_SPECIES_3, NULL) & 0x1F) << 10;

    return species;
}

void SendFaintedMonsToPC(void)
{
    u8 i;
    metloc_u8_t metLocation = GetCurrentRegionMapSectionId();
    u16 opponent;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) && !GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG) && GetMonData(&gPlayerParty[i], MON_DATA_HP) == 0)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
            {
                if (GetMonData(&gPlayerParty[i], MON_DATA_OPPONENT_TRAINER) == 1 && TRAINER_BATTLE_PARAM.opponentB != 0)
                    opponent = TRAINER_BATTLE_PARAM.opponentB;
                else
                    opponent = TRAINER_BATTLE_PARAM.opponentA;
            }
            else
                opponent = 0;

            SetMonData(&gPlayerParty[i], MON_DATA_MOVE1, &metLocation);
            SetMonData(&gPlayerParty[i], MON_DATA_MOVE2, &opponent);

            u16 item = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);
            if (item != ITEM_NONE)
            {
                u16 emptyItem = ITEM_NONE;
                SetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM, &emptyItem);
                if (AddBagItem(item, 1) == FALSE)
                    AddPCItem(item, 1);
            }

            CopyMonToDeathbox(&gPlayerParty[i]);
            ZeroMonData(&gPlayerParty[i]);
        }
    }
    CompactPartySlots();
    CalculatePlayerPartyCount();
    UpdateFollowingPokemon();
}

void StoreOpposingBattler(u8 battler)
{
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return;

    u8 opposingBattlerId;
    u16 species;
    struct Pokemon *faintedMon = GetBattlerMon(battler);

    if (faintedMon == NULL)
        return;

    if (IsDoubleBattle())
    {
        bool8 opponentInvolved = FALSE;

        if (battler == gBattlerTarget && !IsOnPlayerSide(gBattlerAttacker)) // opponent attacks and faints player
        {
            opposingBattlerId = gBattlerAttacker;
            opponentInvolved = TRUE;
        }
        else if (battler == gBattlerAttacker && !IsOnPlayerSide(gBattlerTarget)) // player attacks opponent and faints (recoil, rough skin etc.)
        {
            opposingBattlerId = gBattlerTarget;
            opponentInvolved = TRUE;
        }

        if (!opponentInvolved) // player faints from endturn damage / attacked by the partner
        {
            opposingBattlerId = GetOppositeBattler(battler);

            if (!IsBattlerAlive(opposingBattlerId))
                opposingBattlerId = GetBattlerAtPosition(GetPartnerBattler(opposingBattlerId)); // if opposite battler is fainted, use its partner instead
        }

        if (opposingBattlerId ==  GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT))
        {
            u16 val = 1;
            SetBoxMonData(&faintedMon->box, MON_DATA_OPPONENT_TRAINER, &val);
        }
    }
    else // against single opponent
    {
        opposingBattlerId = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
    }

    species = gBattleMons[opposingBattlerId].species;
    SetBoxMonOpposingSpecies(&faintedMon->box, species);
}

void CB2_ResetGameInLimbo(void)
{
    switch(gMain.state)
    {
    case 0:
    default:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_WHITEALPHA);
        gMain.state = 1;
        break;
    case 1:
        UpdatePaletteFade();
        if(!gPaletteFade.active)
        {
            FreeAllWindowBuffers();
            DoSoftReset();
        }
        break;
    }
}

void DoWarpToIntro(void)
{
    LockPlayerFieldControls();
    ClearSaveData();
    SetMainCallback2(CB2_ResetGameInLimbo);
}

static const u8 sText_ReleasedToWild[] = _("\nReleased into the wild.");
static const u8 sText_FaintedAgainstTrainer[] = _("\nFainted against\n{DYNAMIC 2} {DYNAMIC 0}{DYNAMIC 7}{DYNAMIC 1}'s\n{DYNAMIC 0}{DYNAMIC 5}{DYNAMIC 1}, {DYNAMIC 0}{DYNAMIC 6}{DYNAMIC 1}.");
static const u8 sText_FaintedAgainstWild[] = _("\nFainted against\na wild {DYNAMIC 0}{DYNAMIC 5}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 6}{DYNAMIC 1}.");

static const u8 sText_XNatureMetAtYZ[] = _("Met at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
static const u8 sText_XNatureHatchedAtYZ[] = _("Hatched at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
static const u8 sText_XNatureObtainedInTrade[] = _("Obtained in a trade.");
static const u8 sText_XNatureFatefulEncounter[] = _("Obtained in a fateful\nencounter at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
static const u8 sText_XNatureProbablyMetAt[] = _("Probably met at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
static const u8 sText_XNatureMetSomewhereAt[] = _("Met somewhere at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
static const u8 sText_XNatureHatchedSomewhereAt[] = _("Hatched somewhere at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
static const u8 sText_Red[] = _("{COLOR LIGHT_RED}{SHADOW GREEN}");
static const u8 sText_Black[] = _("{COLOR WHITE}{SHADOW DARK_GRAY}");

enum {
    COLOR_RED,
    COLOR_BLACK,
    OPPONENT_TRAINER_CLASS,
    MET_LEVEL,
    MET_LOCATION,
    OPPONENT_SPECIES,
    DEFEAT_LOCATION,
    OPPONENT_TRAINER_NAME,
};

const u8 *GetCorrectMetLocationString(u8 metLevel, metloc_u8_t metLocation)
{
    if (DoesMonOTMatchOwner() == TRUE)
    {
        if (metLevel == 0)
            return (metLocation >= MAPSEC_NONE) ? sText_XNatureHatchedSomewhereAt : sText_XNatureHatchedAtYZ;
        else
            return (metLocation >= MAPSEC_NONE) ? sText_XNatureMetSomewhereAt : sText_XNatureMetAtYZ;
    }
    else if (metLocation == METLOC_FATEFUL_ENCOUNTER)
    {
        return sText_XNatureFatefulEncounter;
    }
    else if (metLocation != METLOC_IN_GAME_TRADE && DidMonComeFromGBAGames())
    {
        return (metLocation >= MAPSEC_NONE) ? sText_XNatureObtainedInTrade : sText_XNatureProbablyMetAt;
    }
    else
    {
        return sText_XNatureObtainedInTrade;
    }
}

void BufferMonTrainerMemoDeathbox(void)
{
    const u8 *text;
    metloc_u8_t metLocation = GetSummaryMonMetLocation();
    u8 metLevel = GetSummaryMonMetLevel();

    DynamicPlaceholderTextUtil_Reset();
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(COLOR_RED, sText_Red);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(COLOR_BLACK, sText_Black);

    // met level
    u8 metLevelString[4];
    GetMetLevelString(metLevelString);

    // met location
    if (metLocation < MAPSEC_NONE)
    {
        u8 metLocationString[32];
        GetMapNameHandleAquaHideout(metLocationString, metLocation);
        DynamicPlaceholderTextUtil_SetPlaceholderPtr(MET_LOCATION, metLocationString);
    }
    text = GetCorrectMetLocationString(metLevel, metLocation);
    DynamicPlaceholderTextUtil_ExpandPlaceholders(gStringVar4, text);

    // defeating opponent
    struct BoxPokemon *boxMon = GetSummaryScreenCurrentBoxMon();
    u16 opponent = GetBoxMonData(boxMon, MON_DATA_MOVE2);

    if (opponent >= TRAINERS_COUNT) // released
    {
        StringAppend(gStringVar4, sText_ReleasedToWild);
    }
    else
    {
        metloc_u8_t defeatLocation = GetBoxMonData(boxMon, MON_DATA_MOVE1);
        u16 opponentSpecies = GetBoxMonOpposingSpecies(boxMon);
        u8 defeatLocationString[32];

        GetMapNameHandleAquaHideout(defeatLocationString, defeatLocation);
        DynamicPlaceholderTextUtil_SetPlaceholderPtr(OPPONENT_SPECIES, GetSpeciesName(opponentSpecies)); // species lost against
        DynamicPlaceholderTextUtil_SetPlaceholderPtr(DEFEAT_LOCATION, defeatLocationString);             // defeat location
        if (opponent != TRAINER_NONE)
        {
            DynamicPlaceholderTextUtil_SetPlaceholderPtr(OPPONENT_TRAINER_NAME, GetTrainerNameFromId(opponent));       // trainer name
            DynamicPlaceholderTextUtil_SetPlaceholderPtr(OPPONENT_TRAINER_CLASS, GetTrainerClassNameFromId(opponent)); // trainer class
        }

        if (opponent != TRAINER_NONE)
            DynamicPlaceholderTextUtil_ExpandPlaceholders(gStringVar3, sText_FaintedAgainstTrainer);
        else
            DynamicPlaceholderTextUtil_ExpandPlaceholders(gStringVar3, sText_FaintedAgainstWild);

        StringAppend(gStringVar4, gStringVar3);
    }
}
