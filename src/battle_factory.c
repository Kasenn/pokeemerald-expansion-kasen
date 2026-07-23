#include "global.h"
#include "battle.h"
#include "battle_factory.h"
#include "battle_factory_screen.h"
#include "event_data.h"
#include "battle_setup.h"
#include "overworld.h"
#include "frontier_util.h"
#include "battle_tower.h"
#include "random.h"
#include "constants/battle_ai.h"
#include "constants/battle_factory.h"
#include "constants/battle_frontier.h"
#include "constants/battle_frontier_mons.h"
#include "constants/battle_tent.h"
#include "constants/frontier_util.h"
#include "constants/layouts.h"
#include "constants/trainers.h"
#include "constants/moves.h"
#include "constants/items.h"

void CallBattleFactoryFunction(void)
{
    return;
}

bool8 InBattleFactory(void)
{
    return FALSE;
}

u8 GetFactoryMonFixedIV(u8 challengeNum, bool8 isLastBattle)
{
    return 0;
}

void FillFactoryBrainParty(void)
{
    return;
}

u8 GetNumPastRentalsRank(u8 battleMode, enum FrontierLevelMode lvlMode)
{
    return 0;
}

u64 GetAiScriptsInBattleFactory(void)
{
    return 0;
}

void SetMonMoveAvoidReturn(struct Pokemon *mon, enum Move moveArg, u8 moveSlot)
{
    return;
}

void FillFactoryTrainerParty(void)
{
    return;
}
