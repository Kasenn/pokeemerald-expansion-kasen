#include "global.h"
#include "battle_tower.h"
#include "apprentice.h"
#include "event_data.h"
#include "battle_setup.h"
#include "battle_special.h"
#include "overworld.h"
#include "random.h"
#include "text.h"
#include "main.h"
#include "international_string_util.h"
#include "battle.h"
#include "battle_partner.h"
#include "frontier_util.h"
#include "strings.h"
#include "recorded_battle.h"
#include "easy_chat.h"
#include "gym_leader_rematch.h"
#include "battle_transition.h"
#include "trainer_see.h"
#include "new_game.h"
#include "string_util.h"
#include "data.h"
#include "link.h"
#include "field_message_box.h"
#include "tv.h"
#include "battle_factory.h"
#include "constants/abilities.h"
#include "constants/apprentice.h"
#include "constants/battle_ai.h"
#include "constants/battle_dome.h"
#include "constants/battle_frontier.h"
#include "constants/battle_frontier_mons.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_tent.h"
#include "constants/battle_tent_mons.h"
#include "constants/battle_tent_trainers.h"
#include "constants/battle_tower.h"
#include "constants/battle_partner.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/trainers.h"
#include "constants/event_objects.h"
#include "constants/moves.h"
#include "test/battle.h"

#include "data/battle_frontier/battle_frontier_trainer_mons.h"
#include "data/battle_frontier/battle_frontier_trainers.h"
#include "data/battle_frontier/battle_frontier_mons.h"

void CallBattleTowerFunc(void)
{
    return;
}

void PutNewBattleTowerRecord(struct EmeraldBattleTowerRecord *newRecordEm)
{
    return;
}

void CalcEmeraldBattleTowerChecksum(struct EmeraldBattleTowerRecord *record)
{
    return;
}

void CalcRubyBattleTowerChecksum(struct RSBattleTowerRecord *record)
{
    return;
}

u16 GetCurrentBattleTowerWinStreak(enum FrontierLevelMode lvlMode, u8 battleMode)
{
    return 0;
}

void TryHideBattleTowerReporter(void)
{
    return;
}

bool32 RubyBattleTowerRecordToEmerald(struct RSBattleTowerRecord *src, struct EmeraldBattleTowerRecord *dst)
{
    return FALSE;
}

bool32 EmeraldBattleTowerRecordToRuby(struct EmeraldBattleTowerRecord *src, struct RSBattleTowerRecord *dst)
{
    return FALSE;
}

void CalcApprenticeChecksum(struct Apprentice *apprentice)
{
    return;
}

void GetBattleTowerTrainerLanguage(u8 *dst, u16 trainerId)
{
    return;
}

u8 SetTentPtrsGetLevel(void)
{
    return FALSE;
}

bool32 ValidateBattleTowerRecord(u8 recordId) // unused
{
    return FALSE;
}

void TrySetLinkBattleTowerEnemyPartyLevel(void)
{
    return;
}

void FillTentTrainerParty(u8 monsCount)
{
    return;
}

