#include "global.h"
#include "apprentice.h"
#include "battle.h"
#include "battle_tower.h"
#include "data.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "frontier_util.h"
#include "field_player_avatar.h"
#include "international_string_util.h"
#include "item.h"
#include "item_menu.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "new_game.h"
#include "party_menu.h"
#include "random.h"
#include "script.h"
#include "script_menu.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "constants/battle_frontier.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/moves.h"

void BufferApprenticeChallengeText(u8 saveApprenticeId)
{
    return;
}

void Apprentice_ScriptContext_Enable(void)
{
    ScriptContext_Enable();
}

void ResetApprenticeStruct(struct Apprentice *apprentice)
{
    return;
}

void ResetAllApprenticeData(void)
{
    return;
}
