#include "global.h"
#include "battle.h"
#include "battle_controllers.h"
#include "battle_pyramid_bag.h"
#include "bg.h"
#include "decompress.h"
#include "event_data.h"
#include "field_effect.h"
#include "field_weather.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_use.h"
#include "list_menu.h"
#include "mail.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "task.h"
#include "text_window.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/songs.h"

void InitBattlePyramidBagCursorPosition(void)
{
    return;
}

void CB2_PyramidBagMenuFromStartMenu(void)
{
    return;
}

void CB2_ReturnToPyramidBagMenu(void)
{
    return;
}

void UpdatePyramidBagList(void)
{
    return;
}

void UpdatePyramidBagCursorPos(void)
{
    return;
}

void GoToBattlePyramidBagMenu(u8 location, MainCallback exitCallback)
{
    return;
}

void Task_CloseBattlePyramidBagMessage(u8 taskId)
{
    return;
}

void TryStoreHeldItemsInPyramidBag(void)
{
    return;
}

void ChooseItemsToTossFromPyramidBag(void)
{
    return;
}

void CloseBattlePyramidBag(u8 taskId)
{
    return;
}

void DisplayItemMessageInBattlePyramid(u8 taskId, const u8 *str, TaskFunc callback)
{
    return;
}
