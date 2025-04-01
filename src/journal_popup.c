#include "global.h"
#include "battle_pyramid.h"
#include "bg.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "main.h"
#include "menu.h"
#include "map_name_popup.h"
#include "palette.h"
#include "region_map.h"
#include "rtc.h"
#include "start_menu.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "constants/battle_frontier.h"
#include "constants/layouts.h"
#include "constants/region_map_sections.h"
#include "constants/weather.h"
#include "config/general.h"
#include "config/overworld.h"
#include "journal_popup.h"

// static functions
static void Task_JournalPopUpWindow(u8 taskId);
static void ShowJournalPopUpWindow(void);
static void LoadJournalPopUpWindowBg(void);

// .rodata
static const u8 sJournalPopUp_Background[] = INCBIN_U8("graphics/map_popup/journal.4bpp");
static const u8 sJournalPopUp_Outline[] = INCBIN_U8("graphics/map_popup/journal_outline.4bpp");
static const u16 sJournalPopUp_Palette_Female[] = INCBIN_U16("graphics/map_popup/journal_pal_female.gbapal");
static const u16 sJournalPopUp_Palette_Male[] = INCBIN_U16("graphics/map_popup/journal_pal_male.gbapal");

EWRAM_DATA u8 gJournalPopupTaskId = 0;
static EWRAM_DATA u8 sIsQuestStarted = 0;

// States and data defines for Task_JournalPopUpWindow
enum {
    STATE_SLIDE_IN,
    STATE_WAIT,
    STATE_SLIDE_OUT,
    STATE_UNUSED,
    STATE_ERASE,
    STATE_END,
    STATE_PRINT, // For some reason the first state is numerically last.
};

#define POPUP_OFFSCREEN_Y  34
#define POPUP_SLIDE_SPEED  2

#define tState         data[0]
#define tOnscreenTimer data[1]
#define tYOffset       data[2]
#define tPrintTimer    data[4]

void ShowJournalPopup(void)
{
    // New pop up window
    gJournalPopupTaskId = CreateTask(Task_JournalPopUpWindow, 90);
    SetGpuReg(REG_OFFSET_BG0VOFS, POPUP_OFFSCREEN_Y);

    gTasks[gJournalPopupTaskId].tState = STATE_PRINT;
    gTasks[gJournalPopupTaskId].tYOffset = POPUP_OFFSCREEN_Y;
}

void ShowJournalPopupAdd(void)
{
    sIsQuestStarted = TRUE;
    ShowJournalPopup();
}

void ShowJournalPopupRemove(void)
{
    sIsQuestStarted = FALSE;
    ShowJournalPopup();
}


static void Task_JournalPopUpWindow(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
    case STATE_PRINT:
        // Wait, then create and print the pop up window
        if (++task->tPrintTimer > 5)
        {
            task->tState = STATE_SLIDE_IN;
            task->tPrintTimer = 0;
            ShowJournalPopUpWindow();
        }
        break;
    case STATE_SLIDE_IN:
        // Slide the window onscreen.
        task->tYOffset += POPUP_SLIDE_SPEED;
        if (task->tYOffset >= POPUP_OFFSCREEN_Y * 2)
        {
            task->tYOffset = POPUP_OFFSCREEN_Y * 2;
            task->tState = STATE_WAIT;
            gTasks[gJournalPopupTaskId].tOnscreenTimer = 0;
        }
        break;
    case STATE_WAIT:
        // Wait while the window is fully onscreen.
        if (++task->tOnscreenTimer > 90)
        {
            task->tOnscreenTimer = 0;
            task->tState = STATE_SLIDE_OUT;
        }
        break;
    case STATE_SLIDE_OUT:
        // Slide the window offscreen.
        task->tYOffset -= POPUP_SLIDE_SPEED;
        if (task->tYOffset <= POPUP_OFFSCREEN_Y)
        {
            task->tYOffset = POPUP_OFFSCREEN_Y;
            task->tState = STATE_ERASE;
            return;
        }
        break;
    case STATE_ERASE:
        ClearStdWindowAndFrame(GetJournalPopUpWindowId(), TRUE);
        task->tState = STATE_END;
        break;
    case STATE_END:
        HideJournalPopUpWindow();
        return;
    }
    SetGpuReg(REG_OFFSET_BG0VOFS, task->tYOffset);
}

void HideJournalPopUpWindow(void)
{
    if (FuncIsActiveTask(Task_JournalPopUpWindow))
    {
    #ifdef UBFIX
        if (GetJournalPopUpWindowId() != WINDOW_NONE)
    #endif // UBFIX
        {
            ClearStdWindowAndFrame(GetJournalPopUpWindowId(), TRUE);
            RemoveJournalPopUpWindow();
        }

        SetGpuReg_ForcedBlank(REG_OFFSET_BG0VOFS, 0);
        DestroyTask(gJournalPopupTaskId);
    }
}

static const u8 sText_JournalEntryAdded[] = _("Journal entry added");
static const u8 sText_JournalEntryRemoved[] = _("Journal entry removed");

static void ShowJournalPopUpWindow(void)
{
    u8 x;

    AddJournalPopUpWindow();
    LoadJournalPopUpWindowBg();

    static const u8 sFontColor[3] = {TEXT_COLOR_TRANSPARENT, 2, 3};

    if (sIsQuestStarted)
    {
        x = GetStringCenterAlignXOffset(FONT_NARROW, sText_JournalEntryAdded, 112);
        AddTextPrinterParameterized3(GetJournalPopUpWindowId(), FONT_NARROW, x, 2, sFontColor, TEXT_SKIP_DRAW, sText_JournalEntryAdded);
    
    }
    else
    {
        x = GetStringCenterAlignXOffset(FONT_NARROW, sText_JournalEntryRemoved, 112);
        AddTextPrinterParameterized3(GetJournalPopUpWindowId(), FONT_NARROW, x, 2, sFontColor, TEXT_SKIP_DRAW, sText_JournalEntryRemoved);    
    }
    CopyWindowToVram(GetJournalPopUpWindowId(), COPYWIN_FULL);
}

#define TILE_TOP_EDGE_START 0x21D
#define TILE_TOP_EDGE_END   0x228 + 4
#define TILE_LEFT_EDGE_TOP  0x229 + 4
#define TILE_RIGHT_EDGE_TOP 0x22A + 4
#define TILE_LEFT_EDGE_MID  0x22B + 4
#define TILE_RIGHT_EDGE_MID 0x22C + 4
#define TILE_LEFT_EDGE_BOT  0x22D + 4
#define TILE_RIGHT_EDGE_BOT 0x22E + 4
#define TILE_BOT_EDGE_START 0x22F + 4
#define TILE_BOT_EDGE_END   0x23A + 4

static void DrawJournalPopUpFrame(u8 bg, u8 x, u8 y, u8 deltaX, u8 deltaY, u8 unused)
{
    s32 i;

    // Draw top edge
    for (i = 0; i < 1 + TILE_TOP_EDGE_END - TILE_TOP_EDGE_START; i++)
        FillBgTilemapBufferRect(bg, TILE_TOP_EDGE_START + i, i - 1 + x, y - 1, 1, 1, 14);

    // Draw sides
    FillBgTilemapBufferRect(bg, TILE_LEFT_EDGE_TOP,       x - 1,     y, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_RIGHT_EDGE_TOP, deltaX + x,     y, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_LEFT_EDGE_MID,       x - 1, y + 1, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_RIGHT_EDGE_MID, deltaX + x, y + 1, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_LEFT_EDGE_BOT,       x - 1, y + 2, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_RIGHT_EDGE_BOT, deltaX + x, y + 2, 1, 1, 14);

    // Draw bottom edge
    for (i = 0; i < 1 + TILE_BOT_EDGE_END - TILE_BOT_EDGE_START; i++)
        FillBgTilemapBufferRect(bg, TILE_BOT_EDGE_START + i, i - 1 + x, y + deltaY, 1, 1, 14);
}

static void LoadJournalPopUpWindowBg(void)
{
    u8 popupWindowId = GetJournalPopUpWindowId();

    LoadBgTiles(GetWindowAttribute(popupWindowId, WINDOW_BG), sJournalPopUp_Outline, sizeof(sJournalPopUp_Outline), 0x21D);
    CallWindowFunction(popupWindowId, DrawJournalPopUpFrame);
    PutWindowTilemap(popupWindowId);
    if (gSaveBlock2Ptr->playerGender == FEMALE)
        LoadPalette(sJournalPopUp_Palette_Female, BG_PLTT_ID(14), sizeof(sJournalPopUp_Palette_Female));
    else
        LoadPalette(sJournalPopUp_Palette_Male, BG_PLTT_ID(14), sizeof(sJournalPopUp_Palette_Male));
    BlitBitmapToWindow(popupWindowId, sJournalPopUp_Background, 0, 0, 112, 24);
}
