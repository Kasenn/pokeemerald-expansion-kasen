#include "global.h"
#include "clock.h"
#include "new_game.h"
#include "random.h"
#include "pokemon.h"
#include "roamer.h"
#include "pokemon_size_record.h"
#include "script.h"
#include "lottery_corner.h"
#include "play_time.h"
#include "mauville_old_man.h"
#include "match_call.h"
#include "lilycove_lady.h"
#include "load_save.h"
#include "pokeblock.h"
#include "dewford_trend.h"
#include "berry.h"
#include "rtc.h"
#include "easy_chat.h"
#include "event_data.h"
#include "money.h"
#include "trainer_hill.h"
#include "trainer_tower.h"
#include "tv.h"
#include "coins.h"
#include "text.h"
#include "overworld.h"
#include "mail.h"
#include "battle_records.h"
#include "item.h"
#include "pokedex.h"
#include "apprentice.h"
#include "frontier_util.h"
#include "pokedex.h"
#include "save.h"
#include "link_rfu.h"
#include "main.h"
#include "contest.h"
#include "item_menu.h"
#include "pokemon_storage_system.h"
#include "pokemon_jump.h"
#include "decoration_inventory.h"
#include "secret_base.h"
#include "string_util.h"
#include "player_pc.h"
#include "field_specials.h"
#include "berry_powder.h"
#include "mystery_gift.h"
#include "union_room_chat.h"
#include "constants/map_groups.h"
#include "constants/items.h"
#include "difficulty.h"
#include "follower_npc.h"

extern const u8 EventScript_ResetAllMapFlags[];
extern const u8 EventScript_ResetAllMapFlagsFrlg[];

static void ClearFrontierRecord(void);
static void WarpToTruck(void);
static void ResetMiniGamesRecords(void);
static void ResetItemFlags(void);
static void ResetDexNav(void);

EWRAM_DATA bool8 gDifferentSaveFile = FALSE;
EWRAM_DATA bool8 gEnableContestDebugging = FALSE;

static const struct ContestWinner sContestWinnerPicDummy =
{
    .monName = _(""),
    .trainerName = _("")
};

void SetTrainerId(u32 trainerId, u8 *dst)
{
    dst[0] = trainerId;
    dst[1] = trainerId >> 8;
    dst[2] = trainerId >> 16;
    dst[3] = trainerId >> 24;
}

u32 GetTrainerId(u8 *trainerId)
{
    return (trainerId[3] << 24) | (trainerId[2] << 16) | (trainerId[1] << 8) | (trainerId[0]);
}

void CopyTrainerId(u8 *dst, u8 *src)
{
    s32 i;
    for (i = 0; i < TRAINER_ID_LENGTH; i++)
        dst[i] = src[i];
}

static void InitPlayerTrainerId(void)
{
    return;
}

// L=A isnt set here for some reason.
static void SetDefaultOptions(void)
{
    gSaveBlock1Ptr->battleInterfaceColor = 0;
    gSaveBlock1Ptr->optionsWindowFrameType = 0;
    gSaveBlock1Ptr->optionsSound = OPTIONS_SOUND_STEREO;
    gSaveBlock1Ptr->optionsBattleStyle = OPTIONS_BATTLE_STYLE_SET;
    gSaveBlock1Ptr->optionsBattleSceneOff = FALSE;
    gSaveBlock1Ptr->regionMapZoom = FALSE;
}

static void ClearPokedexFlags(void)
{
    gUnusedPokedexU8 = 0;
}

void ClearAllContestWinnerPics(void)
{
    return;
}

static void ClearFrontierRecord(void)
{
    return;
}

static void WarpToTruck(void)
{
    if (IS_FRLG)
        SetWarpDestination(MAP_GROUP(MAP_PALLET_TOWN_PLAYERS_HOUSE_2F), MAP_NUM(MAP_PALLET_TOWN_PLAYERS_HOUSE_2F), WARP_ID_NONE, 6, 6);
    else
        SetWarpDestination(MAP_GROUP(MAP_YOSHI_INTRO), MAP_NUM(MAP_YOSHI_INTRO), 0, -1, -1);
    WarpIntoMap();
}

void Sav2_ClearSetDefault(void)
{
    ClearSav2();
    SetDefaultOptions();
}

void ResetMenuAndMonGlobals(void)
{
    gDifferentSaveFile = FALSE;
    ResetPokedexScrollPositions();
    ZeroPlayerPartyMons();
    ZeroEnemyPartyMons();
    ResetBagScrollPositions();
    ResetPokeblockScrollPositions();
}

void NewGameInitData(void)
{
    if (gSaveFileStatus == SAVE_STATUS_EMPTY || gSaveFileStatus == SAVE_STATUS_CORRUPT)
        RtcReset();
    gDifferentSaveFile = TRUE;
    ZeroPlayerPartyMons();
    ZeroEnemyPartyMons();
    ResetPokedex();
    ClearFrontierRecord();
    ClearSav1();
    ClearSav3();
    ClearAllMail();
    gSaveBlock1Ptr->specialSaveWarpFlags = 0;
    InitPlayerTrainerId();
    PlayTimeCounter_Reset();
    ClearPokedexFlags();
    InitEventData();
    ClearTVShowData();
    ResetGabbyAndTy();
    ClearSecretBases();
    ClearBerryTrees();
    SetCoins(0);
    ResetLinkContestBoolean();
    ResetGameStats();
    ClearAllContestWinnerPics();
    ClearPlayerLinkBattleRecords();
    InitSeedotSizeRecord();
    InitLotadSizeRecord();
    gPartiesCount[B_TRAINER_PLAYER] = 0;
    ZeroPlayerPartyMons();
    ResetPokemonStorageSystem();
    DeactivateAllRoamers();
    ClearBag();
    NewGameInitPCItems();
    ClearPokeblocks();
    ClearDecorationInventories();
    InitEasyChatPhrases();
    DebugPrintf("do we get here? a");
    SetMauvilleOldMan();
    DebugPrintf("do we get here? b");
    InitDewfordTrend();
    DebugPrintf("do we get here? c");
    ResetFanClub();
    DebugPrintf("do we get here? d");
    ResetLotteryCorner();
    DebugPrintf("do we get here? e");
    UpdateDailySeed();
    DebugPrintf("do we get here? f");
    WarpToTruck();
    DebugPrintf("do we get here? g");
    RunScriptImmediately(EventScript_ResetAllMapFlags);
    DebugPrintf("do we get here? hfgf");
    ResetMiniGamesRecords();
    DebugPrintf("do we get here? h");
    InitUnionRoomChatRegisteredTexts();
    DebugPrintf("do we get here? i");
    InitLilycoveLady();
    DebugPrintf("do we get here? j");
    ResetAllApprenticeData();
    DebugPrintf("do we get here? k");
    ClearRankingHallRecords();
    DebugPrintf("do we get here? l");
    InitMatchCallCounters();
    DebugPrintf("do we get here? m");
    ClearMysteryGift();
    DebugPrintf("do we get here? n");
    WipeTrainerNameRecords();
    DebugPrintf("do we get here? o");
    ResetTrainerHillResults();
    DebugPrintf("do we get here? p");
    ResetTrainerTowerResults();
    DebugPrintf("do we get here? q");
    ResetContestLinkResults();
    DebugPrintf("do we get here? r");
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    DebugPrintf("do we get here? s");
    ResetItemFlags();
    DebugPrintf("do we get here? t");
    ResetDexNav();
    DebugPrintf("do we get here? u");
    ClearFollowerNPCData();
    DebugPrintf("do we get here? v");
}

static void ResetMiniGamesRecords(void)
{
    return;
}

static void ResetItemFlags(void)
{
#if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_FIRST_TIME
    memset(&gSaveBlock3Ptr->itemFlags, 0, sizeof(gSaveBlock3Ptr->itemFlags));
#endif
}

static void ResetDexNav(void)
{
#if USE_DEXNAV_SEARCH_LEVELS == TRUE
    memset(gSaveBlock3Ptr->dexNavSearchLevels, 0, sizeof(gSaveBlock3Ptr->dexNavSearchLevels));
#endif
}
