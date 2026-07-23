#include "global.h"
#include "frontier_util.h"
#include "easy_chat.h"
#include "event_data.h"
#include "battle_setup.h"
#include "overworld.h"
#include "random.h"
#include "battle_frontier.h"
#include "battle_special.h"
#include "battle_tower.h"
#include "field_specials.h"
#include "battle.h"
#include "script_pokemon_util.h"
#include "main.h"
#include "window.h"
#include "menu.h"
#include "text.h"
#include "battle_records.h"
#include "international_string_util.h"
#include "string_util.h"
#include "new_game.h"
#include "link.h"
#include "tv.h"
#include "apprentice.h"
#include "pokedex.h"
#include "recorded_battle.h"
#include "data.h"
#include "record_mixing.h"
#include "strings.h"
#include "malloc.h"
#include "save.h"
#include "load_save.h"
#include "battle_dome.h"
#include "constants/battle_frontier.h"
#include "constants/battle_frontier_mons.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_pike.h"
#include "constants/frontier_util.h"
#include "constants/trainers.h"
#include "constants/game_stat.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "constants/event_objects.h"
#include "party_menu.h"
#include "list_menu.h"

void CallFrontierUtilFunc(void)
{
    return;    
}

u8 GetFrontierBrainStatus(void)
{
    return 0;    
}

void CopyFrontierTrainerText(u8 whichText, u16 trainerId)
{
    return;    
}

void ResetWinStreaks(void)
{
    return;    
}

u32 GetCurrentFacilityWinStreak(void)
{
    return 0;    
}

void ResetFrontierTrainerIds(void)
{
    return;    
}

u8 GetPlayerSymbolCountForFacility(u8 facility)
{
    return 0;    
}

void ShowRankingHallRecordsWindow(void)
{
    return;    
}

void ScrollRankingHallRecordsWindow(void)
{
    return;    
}

void ClearRankingHallRecords(void)
{
    return;    
}

void SaveGameFrontier(void)
{
    return;    
}

enum TrainerPicID GetFrontierBrainTrainerPicIndex(void)
{
    return TRAINER_PIC_NONE;    
}

enum TrainerClassID GetFrontierBrainTrainerClass(void)
{
    return TRAINER_CLASS_PKMN_TRAINER_1;    
}

void CopyFrontierBrainTrainerName(u8 *dst)
{
    return;    
}

bool8 IsFrontierBrainFemale(void)
{
    return FALSE;    
}

void SetFrontierBrainObjEventGfx_2(void)
{
    return;    
}

void CreateFrontierBrainPokemon(void)
{
    return;    
}

enum Species GetFrontierBrainMonSpecies(u8 monId)
{
    return SPECIES_NONE;    
}

void SetFrontierBrainObjEventGfx(u8 facility)
{
    return;    
}

u16 GetFrontierBrainMonMove(u8 monId, u8 moveSlotId)
{
    return 0;    
}

u8 GetFrontierBrainMonNature(u8 monId)
{
    return 0;    
}

u8 GetFrontierBrainMonEvs(u8 monId, u8 evStatId)
{
    return 0;    
}

s32 GetFronterBrainSymbol(void)
{
    return 0;    
}

void ClearEnemyPartyAfterChallenge(void)
{
    return;    
}

bool8 IsFrontierTrainerFemale(u16 trainerId)
{
    return FALSE;    
}

u8 GetFrontierTrainerFixedIvs(u16 trainerId)
{
    return 0;    
}

u16 GetRandomScaledFrontierTrainerId(u8 challengeNum, u8 battleNum)
{
    return 0;    
}

void SetBattleFacilityTrainerGfxId(u16 trainerId, u8 tempVarId)
{
    return;    
}

u16 GetBattleFacilityTrainerGfxId(u16 trainerId)
{
    return 0;    
}

u8 GetFrontierTrainerFrontSpriteId(u16 trainerId)
{
    return 0;    
}

enum TrainerClassID GetFrontierOpponentClass(u16 trainerId)
{
    return TRAINER_CLASS_PKMN_TRAINER_1;    
}

u8 GetFrontierTrainerFacilityClass(u16 trainerId)
{
    return 0;    
}

void GetFrontierTrainerName(u8 *dst, u16 trainerId)
{
    return;    
}

u16 GetRandomFrontierMonFromSet(u16 trainerId)
{
    return 0;    
}

void FrontierSpeechToString(const u16 *words)
{
    return;    
}

u8 SetFacilityPtrsGetLevel(void)
{
    return 0;    
}

u8 GetFrontierEnemyMonLevel(enum FrontierLevelMode lvlMode)
{
    return 0;    
}

s32 GetHighestLevelInPlayerParty(void)
{
    return 0;    
}

u16 FacilityClassToGraphicsId(u8 facilityClass)
{
    return 0;    
}

void ShowBattleFrontierCaughtBannedSpecies(void)
{
    return;    
}

