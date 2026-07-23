#include "global.h"
#include "constants/decorations.h"
#include "constants/mauville_old_man.h"
#include "decoration.h"
#include "decoration_inventory.h"
#include "event_data.h"
#include "main.h"
#include "menu.h"
#include "menu_helpers.h"
#include "script.h"
#include "constants/songs.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "script_menu.h"

static const u8 *const sDefaultTraderNames[NUM_TRADER_ITEMS] =
{
    COMPOUND_STRING("TRISTAN"),
    COMPOUND_STRING("PHILIP"),
    COMPOUND_STRING("DENNIS"),
    COMPOUND_STRING("ROBERTO"),
};

static const u8 sDefaultTraderDecorations[NUM_TRADER_ITEMS] =
{
    DECOR_DUSKULL_DOLL,
    DECOR_BALL_CUSHION,
    DECOR_TIRE,
    DECOR_PRETTY_FLOWERS,
};

void TraderSetup(void)
{
    return;
}

void Trader_ResetFlag(void)
{
    return;
}

#define tWindowId data[3]

void CreateAvailableDecorationsMenu(u8 taskId)
{
    return;
}

void Task_BufferDecorSelectionAndCloseWindow(u8 taskId, u8 decorationId)
{
    s16 *data = gTasks[taskId].data;
    if (decorationId > NUM_DECORATIONS)
        gSpecialVar_0x8004 = 0xFFFF;
    else
        gSpecialVar_0x8004 = decorationId;

    ClearStdWindowAndFrameToTransparent(tWindowId, FALSE);
    ClearWindowTilemap(tWindowId);
    RemoveWindow(tWindowId);
    ScheduleBgCopyTilemapToVram(0);
    DestroyTask(taskId);
    ScriptContext_Enable();
}

void Task_HandleGetDecorationMenuInput(u8 taskId)
{
    return;
}

void GetTraderTradedFlag(void)
{
    return;
}

void DoesPlayerHaveNoDecorations(void)
{
    u8 i;

    for (i = 0; i < DECORCAT_COUNT; i++)
    {
        if (GetNumOwnedDecorationsInCategory(i))
        {
            gSpecialVar_Result = FALSE;
            return;
        }
    }
    gSpecialVar_Result = TRUE;
}

void IsDecorationCategoryFull(void)
{
    gSpecialVar_Result = FALSE;
    if (gDecorations[gSpecialVar_0x8004].category != gDecorations[gSpecialVar_0x8006].category
        && GetFirstEmptyDecorSlot(gDecorations[gSpecialVar_0x8004].category) == -1)
    {
        CopyDecorationCategoryName(gStringVar2, gDecorations[gSpecialVar_0x8004].category);
        gSpecialVar_Result = TRUE;
    }
}

void TraderShowDecorationMenu(void)
{
    CreateTask(ShowDecorationCategoriesWindow, 0);
}

void DecorationItemsMenuAction_Trade(u8 taskId)
{
    if (IsSelectedDecorInThePC() == TRUE)
    {
        gSpecialVar_0x8006 = gCurDecorationItems[gCurDecorationIndex];
        StringCopy(gStringVar3, gDecorations[gSpecialVar_0x8004].name);
        StringCopy(gStringVar2, gDecorations[gSpecialVar_0x8006].name);
    }
    else
    {
        gSpecialVar_0x8006 = 0xFFFF;
    }
    DestroyTask(taskId);
    ScriptContext_Enable();
}

void ExitTraderMenu(u8 taskId)
{
    gSpecialVar_0x8006 = 0;
    DestroyTask(taskId);
    ScriptContext_Enable();
}

void TraderDoDecorationTrade(void)
{
    return;
}

void TraderMenuGetDecoration(void)
{
    u8 taskId = CreateTask(Task_HandleGetDecorationMenuInput, 0);
    CreateAvailableDecorationsMenu(taskId);
}
