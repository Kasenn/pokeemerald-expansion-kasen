#include "global.h"
#include "battle.h"
#include "battle_arena.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "bg.h"
#include "decompress.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "item.h"
#include "m4a.h"
#include "overworld.h"
#include "palette.h"
#include "random.h"
#include "sound.h"
#include "string_util.h"
#include "text.h"
#include "util.h"
#include "constants/songs.h"
#include "constants/battle_arena.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_string_ids.h"
#include "constants/battle_frontier.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/rgb.h"

void CallBattleArenaFunction(void)
{
    return;
}

u8 BattleArena_ShowJudgmentWindow(u8 *state)
{
    return 0;
}

void BattleArena_InitPoints(void)
{
    return;
}

void BattleArena_AddMindPoints(enum BattlerId battler)
{
    return;
}

void BattleArena_AddSkillPoints(enum BattlerId battler)
{
    return;
}

void BattleArena_DeductSkillPoints(enum BattlerId battler, enum StringID stringId)
{
    return;
}

void DrawArenaRefereeTextBox(void)
{
    return;
}

void EraseArenaRefereeTextBox(void)
{
    return;
}
