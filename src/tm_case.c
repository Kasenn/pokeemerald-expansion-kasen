#include "global.h"
#include "tm_case.h"
#include "decompress.h"
#include "graphics.h"
#include "task.h"
#include "text_window.h"
#include "menu.h"
#include "menu_helpers.h"
#include "list_menu.h"
#include "item.h"
#include "item_menu.h"
#include "link.h"
#include "money.h"
#include "shop.h"
#include "pokemon_storage_system.h"
#include "party_menu.h"
#include "data.h"
#include "scanline_effect.h"
#include "strings.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "palette.h"
#include "pokemon_icon.h"
#include "constants/rgb.h"
#include "malloc.h"
#include "bg.h"
#include "move.h"
#include "gpu_regs.h"
#include "sound.h"
#include "shop.h"

// Any item in the TM Case with nonzero importance is considered an HM
#define IS_HM(itemId) (GetItemImportance(itemId) != 0)

#define TAG_SCROLL_ARROW 110

enum {
    WIN_LIST,
    WIN_DESCRIPTION,
    WIN_SELECTED_MSG,
    WIN_TITLE,
    WIN_MOVE_INFO_LABELS,
    WIN_MOVE_INFO,
    WIN_MESSAGE,
};

// IDs for the actions in the context menu
enum {
    ACTION_USE,
    ACTION_EXIT
};

enum {
    COLOR_LIGHT,
    COLOR_DARK,
    COLOR_CURSOR_SELECTED,
    COLOR_MOVE_INFO,
    COLOR_CURSOR_ERASE = 0xFF
};

enum {
    TMCASE_FIELD,
    TMCASE_REOPENING,
};

// The "static" resources are preserved even if the TM case is exited. This is
// useful for when its left temporarily (e.g. going to the party menu to teach a TM)
// but also to preserve the selected item when the TM case is fully closed.
static EWRAM_DATA struct {
    void (* exitCallback)(void);
    u8 menuType;
    u8 unused;
    u16 selectedRow;
    u16 scrollOffset;
} sTMCaseStaticResources = {};

// The "dynamic" resources will be reset any time the TM case is exited, even temporarily.
static EWRAM_DATA struct {
    void (* nextScreenCallback)(void);
    u8 maxTMsShown;
    u8 numTMs;
    u8 contextMenuWindowId;
    u8 scrollArrowsTaskId;
    u16 currItem;
    const u8 * menuActionIndices;
    u8 numMenuActions;
    s16 seqId;
} * sTMCaseDynamicResources = NULL;

static EWRAM_DATA void *sTilemapBuffer = NULL;
static EWRAM_DATA struct ListMenuItem * sListMenuItemsBuffer = NULL;
static EWRAM_DATA u8 (* sListMenuStringsBuffer)[29] = NULL;
static EWRAM_DATA u16 * sTMSpritePaletteBuffer = NULL;
EWRAM_DATA u8    gMoveMenuSpriteIdData[PARTY_SIZE] = {};
EWRAM_DATA u16   gMoveMenuSpriteIdPalette[PARTY_SIZE] = {};

static void CB2_SetUpTMCaseUI_Blocking(void);
static bool8 DoSetUpTMCaseUI(void);
static void ResetBufferPointers_NoFree(void);
static void LoadBGTemplates(void);
static bool8 HandleLoadTMCaseGraphicsAndPalettes(void);
static void CreateTMCaseListMenuBuffers(void);
static void InitTMCaseListMenuItems(void);
static void GetTMNumberAndMoveString(u8 * dest, u16 itemId);
static void List_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);
static void List_ItemPrintFunc(u8 windowId, u32 itemId, u8 y);
static void PrintDescription(s32 itemIndex);
static void PrintMoveInfo(u16 itemId);
static void PrintListCursorAtRow(u8 y, u8 colorIdx);
static void CreateListScrollArrows(void);
static void TMCaseSetup_GetTMCount(void);
static void TMCaseSetup_InitListMenuPositions(void);
static void TMCaseSetup_UpdateVisualMenuOffset(void);
static void Task_FadeOutAndCloseTMCase(u8 taskId);
static void Task_HandleListInput(u8 taskId);
static void Task_SelectedTMHM_Field(u8 taskId);
static void Task_ContextMenu_HandleInput(u8 taskId);
static void Action_Use(u8 taskId);
static void PrintError_ThereIsNoPokemon(u8 taskId);
static void Task_WaitButtonAfterErrorPrint(u8 taskId);
static void CloseMessageAndReturnToList(u8 taskId);
static void Action_Exit(u8 taskId);
static void InitWindowTemplatesAndPals(void);
static void TMCase_Print(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx);
static void TMCase_SetWindowBorder1(u8 windowId);
static void TMCase_SetWindowBorder2(u8 windowId);
static void PrintMessageWithFollowupTask(u8 taskId, u8 fontId, const u8 * str, TaskFunc func);
static void PrintTitle(void);
static void DrawMoveInfoLabels(void);
static void PlaceHMTileInWindow(u8 windowId, u8 x, u8 y);
static u8 AddContextMenu(u8 * windowId);
static void RemoveContextMenu(u8 * windowId);

static void DrawPartyMonIcons(void);
static void TintPartyMonIcons(u16 tm);

static const struct BgTemplate sBGTemplates[] = {
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0x000
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0x000
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0x000
    }
};

static const struct MenuAction sMenuActions[] = {
    [ACTION_USE]  = {COMPOUND_STRING("Use"),  {Action_Use }},
    [ACTION_EXIT] = {COMPOUND_STRING("Exit"), {Action_Exit}},
};

static const u8 sMenuActionIndices_Field[] = {ACTION_USE, ACTION_EXIT};

static const u8 sText_ClearTo18[] = _("{CLEAR_TO 18}");
static const u8 sText_SingleSpace[] = _(" ");

static ALIGNED(4) const u16 sPal3Override[] = {RGB(8, 8, 8), RGB(30, 16, 6)};

static const u8 sTextColors[][3] = {
    [COLOR_LIGHT] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY},
    [COLOR_DARK] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY},
    [COLOR_CURSOR_SELECTED] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_LIGHT_GRAY, TEXT_COLOR_GREEN},
    [COLOR_MOVE_INFO] = {0, 14, 10},
};

static const struct WindowTemplate sWindowTemplates[] = {
    [WIN_LIST] = {
        .bg = 0,
        .tilemapLeft = 10,
        .tilemapTop = 1,
        .width = 19,
        .height = 10,
        .paletteNum = 15,
        .baseBlock = 0x081
    },
    [WIN_DESCRIPTION] = {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 12,
        .width = 18,
        .height = 8,
        .paletteNum = 10,
        .baseBlock = 0x13f
    },
    [WIN_SELECTED_MSG] = {
        .bg = 1,
        .tilemapLeft = 5,
        .tilemapTop = 15,
        .width = 15,
        .height = 4,
        .paletteNum = 13,
        .baseBlock = 0x1f9
    },
    [WIN_TITLE] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 1,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x235
    },
    [WIN_MOVE_INFO_LABELS] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 13,
        .width = 5,
        .height = 6,
        .paletteNum = 12,
        .baseBlock = 0x249
    },
    [WIN_MOVE_INFO] = {
        .bg = 0,
        .tilemapLeft = 7,
        .tilemapTop = 13,
        .width = 5,
        .height = 6,
        .paletteNum = 12,
        .baseBlock = 0x267
    },
    [WIN_MESSAGE] = {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 11,
        .baseBlock = 0x285
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sWindowTemplates_ContextMenu = {
    .bg = 1,
    .tilemapLeft = 22,
    .tilemapTop = 15,
    .width = 7,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x1cf
};

void InitTMCase(u8 type, void (* exitCallback)(void))
{
    ResetBufferPointers_NoFree();
    sTMCaseDynamicResources = Alloc(sizeof(*sTMCaseDynamicResources));
    sTMCaseDynamicResources->nextScreenCallback = NULL;
    sTMCaseDynamicResources->scrollArrowsTaskId = TASK_NONE;
    sTMCaseDynamicResources->contextMenuWindowId = WINDOW_NONE;
    if (type != TMCASE_REOPENING)
        sTMCaseStaticResources.menuType = type;
    if (exitCallback != NULL)
        sTMCaseStaticResources.exitCallback = exitCallback;
    gTextFlags.autoScroll = FALSE;
    SetMainCallback2(CB2_SetUpTMCaseUI_Blocking);
}

static void CB2_Idle(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_Idle(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_SetUpTMCaseUI_Blocking(void)
{
    while (1)
    {
        if (MenuHelpers_ShouldWaitForLinkRecv() == TRUE)
            break;
        if (DoSetUpTMCaseUI() == TRUE)
            break;
        if (MenuHelpers_IsLinkActive() == TRUE)
            break;
    }
}

#define tListTaskId       data[0]
#define tSelection        data[1]
#define tQuantitySelected data[8]

static bool8 DoSetUpTMCaseUI(void)
{
    u8 taskId;

    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ResetVramOamAndBgCntRegs();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        gMain.state++;
        break;
    case 2:
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 3:
        ResetPaletteFade();
        gMain.state++;
        break;
    case 4:
        ResetSpriteData();
        gMain.state++;
        break;
    case 5:
        ResetTasks();
        gMain.state++;
        break;
    case 6:
        LoadBGTemplates();
        sTMCaseDynamicResources->seqId = 0;
        gMain.state++;
        break;
    case 7:
        InitWindowTemplatesAndPals();
        gMain.state++;
        break;
    case 8:
        if (HandleLoadTMCaseGraphicsAndPalettes())
            gMain.state++;
        break;
    case 9:
        SortItemsInBag(&gBagPockets[POCKET_TM_HM], SORT_BY_INDEX);
        gMain.state++;
        break;
    case 10:
        TMCaseSetup_GetTMCount();
        TMCaseSetup_InitListMenuPositions();
        TMCaseSetup_UpdateVisualMenuOffset();
        gMain.state++;
        break;
    case 11:
        DrawMoveInfoLabels();
        gMain.state++;
        break;
    case 12:
        CreateTMCaseListMenuBuffers();
        InitTMCaseListMenuItems();
        gMain.state++;
        break;
    case 13:
        PrintTitle();
        gMain.state++;
        break;
    case 14:
        taskId = CreateTask(Task_HandleListInput, 0);
        gTasks[taskId].tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sTMCaseStaticResources.scrollOffset, sTMCaseStaticResources.selectedRow);
        gMain.state++;
        break;
    case 15:
        CreateListScrollArrows();
        gMain.state++;
        break;
    case 16:
        DrawPartyMonIcons();
        gMain.state++;
        break;
    case 17:
        BlendPalettes(PALETTES_ALL, 16, 0);
        gMain.state++;
        break;
    case 18:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(VBlankCB_Idle);
        SetMainCallback2(CB2_Idle);
        return TRUE;
    }

    return FALSE;
}

static void ResetBufferPointers_NoFree(void)
{
    sTMCaseDynamicResources = NULL;
    sTilemapBuffer = NULL;
    sListMenuItemsBuffer = NULL;
    sListMenuStringsBuffer = NULL;
    sTMSpritePaletteBuffer = NULL;
}

static void ResetAllBgsCoordinatesAndBgCntRegs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);
}

static void LoadBGTemplates(void)
{
    void ** ptr;
    ResetAllBgsCoordinatesAndBgCntRegs();
    ptr = &sTilemapBuffer;
    *ptr = AllocZeroed(0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBGTemplates, ARRAY_COUNT(sBGTemplates));
    SetBgTilemapBuffer(2, *ptr);
    ScheduleBgCopyTilemapToVram(1);
    ScheduleBgCopyTilemapToVram(2);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
}

static bool8 HandleLoadTMCaseGraphicsAndPalettes(void)
{
    switch (sTMCaseDynamicResources->seqId)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, gTMCase_Gfx, 0, 0, 0);
        sTMCaseDynamicResources->seqId++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(gTMCaseMenu_Tilemap, sTilemapBuffer);
            sTMCaseDynamicResources->seqId++;
        }
        break;
    case 2:
        DecompressDataWithHeaderWram(gTMCaseMenu_Tilemap, GetBgTilemapBuffer(1));
        sTMCaseDynamicResources->seqId++;
        break;
    case 3:
        if (gSaveBlock2Ptr->playerGender == MALE)
            LoadPalette(gTMCaseMenu_Male_Pal, BG_PLTT_ID(0), 4 * PLTT_SIZE_4BPP);
        else
            LoadPalette(gTMCaseMenu_Female_Pal, BG_PLTT_ID(0), 4 * PLTT_SIZE_4BPP);
        sTMCaseDynamicResources->seqId++;
        break;
    case 4:
        sTMCaseDynamicResources->seqId++;
        break;
    default:
        sTMCaseDynamicResources->seqId = 0;
        return TRUE;
    }

    return FALSE;
}

static void CreateTMCaseListMenuBuffers(void)
{
    struct BagPocket * pocket = &gBagPockets[POCKET_TM_HM];
    sListMenuItemsBuffer = Alloc((pocket->capacity + 1) * sizeof(struct ListMenuItem));
    sListMenuStringsBuffer = Alloc(sTMCaseDynamicResources->numTMs * 29);
}

static void InitTMCaseListMenuItems(void)
{
    struct BagPocket * pocket = &gBagPockets[POCKET_TM_HM];
    u16 i;

    for (i = 0; i < sTMCaseDynamicResources->numTMs; i++)
    {
        GetTMNumberAndMoveString(sListMenuStringsBuffer[i], pocket->itemSlots[i].itemId);
        sListMenuItemsBuffer[i].name = sListMenuStringsBuffer[i];
        sListMenuItemsBuffer[i].id = i;
    }
    // sListMenuItemsBuffer[i].name = gText_Close;
    // sListMenuItemsBuffer[i].id = -2;
    gMultiuseListMenuTemplate.items = sListMenuItemsBuffer;
    gMultiuseListMenuTemplate.totalItems = sTMCaseDynamicResources->numTMs;
    gMultiuseListMenuTemplate.windowId = 0;
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 8;
    gMultiuseListMenuTemplate.cursor_X = 0;
    gMultiuseListMenuTemplate.lettersSpacing = 0;
    gMultiuseListMenuTemplate.itemVerticalPadding = 2;
    gMultiuseListMenuTemplate.upText_Y = 2;
    gMultiuseListMenuTemplate.maxShowed = sTMCaseDynamicResources->maxTMsShown;
    gMultiuseListMenuTemplate.fontId = 2;
    gMultiuseListMenuTemplate.cursorPal = 2;
    gMultiuseListMenuTemplate.fillValue = 0;
    gMultiuseListMenuTemplate.cursorShadowPal = 3;
    gMultiuseListMenuTemplate.moveCursorFunc = List_MoveCursorFunc;
    gMultiuseListMenuTemplate.itemPrintFunc = List_ItemPrintFunc;
    gMultiuseListMenuTemplate.cursorKind = 0;
    gMultiuseListMenuTemplate.scrollMultiple = 0;
}

// static void InitTMCaseListMenuItems(void)
// {
//     struct BagPocket * pocket = &gBagPockets[POCKET_TM_HM - 1];
//     u16 i;

//     for (i = 0; i < sTMCaseDynamicResources->numTMs; i++)
//     {
//         GetTMNumberAndMoveString(sListMenuStringsBuffer[i], pocket->itemSlots[i].itemId);
//         sListMenuItemsBuffer[i].label = sListMenuStringsBuffer[i];
//         sListMenuItemsBuffer[i].index = i;
//     }
//     sListMenuItemsBuffer[i].label = gText_Close;
//     sListMenuItemsBuffer[i].index = LIST_CANCEL;

//     gMultiuseListMenuTemplate.items = sListMenuItemsBuffer;
//     gMultiuseListMenuTemplate.totalItems = sTMCaseDynamicResources->numTMs + 1; // +1 for Cancel
//     gMultiuseListMenuTemplate.windowId = WIN_LIST;
//     gMultiuseListMenuTemplate.header_X = 0;
//     gMultiuseListMenuTemplate.item_X = 8;
//     gMultiuseListMenuTemplate.cursor_X = 0;
//     gMultiuseListMenuTemplate.lettersSpacing = 0;
//     gMultiuseListMenuTemplate.itemVerticalPadding = 2;
//     gMultiuseListMenuTemplate.upText_Y = 2;
//     gMultiuseListMenuTemplate.maxShowed = sTMCaseDynamicResources->maxTMsShown;
//     gMultiuseListMenuTemplate.fontId = FONT_NORMAL;
//     gMultiuseListMenuTemplate.cursorPal = 2;
//     gMultiuseListMenuTemplate.fillValue = 0;
//     gMultiuseListMenuTemplate.cursorShadowPal = 3;
//     gMultiuseListMenuTemplate.moveCursorFunc = List_MoveCursorFunc;
//     gMultiuseListMenuTemplate.itemPrintFunc = List_ItemPrintFunc;
//     gMultiuseListMenuTemplate.cursorKind = 0;
//     gMultiuseListMenuTemplate.scrollMultiple = 0;
// }

static void GetTMNumberAndMoveString(u8 * dest, u16 itemId)
{
    StringCopy(gStringVar4, gText_FontSmall);
    if (itemId >= ITEM_HM01)
    {
        StringAppend(gStringVar4, sText_ClearTo18);
        StringAppend(gStringVar4, gText_NumberClear01);
        ConvertIntToDecimalStringN(gStringVar1, itemId - ITEM_HM01 + 1, STR_CONV_MODE_LEADING_ZEROS, 1);
        StringAppend(gStringVar4, gStringVar1);
    }
    else
    {
        StringAppend(gStringVar4, gText_NumberClear01);
        ConvertIntToDecimalStringN(gStringVar1, itemId - ITEM_TM01 + 1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringAppend(gStringVar4, gStringVar1);
    }
    StringAppend(gStringVar4, sText_SingleSpace);
    StringAppend(gStringVar4, gText_FontShort);
    StringAppend(gStringVar4, GetMoveName(ItemIdToBattleMoveId(itemId)));
    StringCopy(dest, gStringVar4);
}

static void List_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
    u16 itemId;

    if (itemIndex == LIST_CANCEL)
        itemId = ITEM_NONE;
    else
    {
        struct ItemSlot itemSlot = GetBagItemIdAndQuantity(POCKET_TM_HM, itemIndex);
        itemId = itemSlot.itemId;//wip this might be broken
    }

    if (onInit != TRUE)
    {
        PlaySE(SE_SELECT);
        // SwapDisc(sTMCaseDynamicResources->discSpriteId, itemId);
    }
    PrintDescription(itemIndex);
    PrintMoveInfo(itemId);
}

static void List_ItemPrintFunc(u8 windowId, u32 itemIndex, u8 y)
{
    struct ItemSlot itemSlot = GetBagItemIdAndQuantity(POCKET_TM_HM, itemIndex);
    u16 itemId = itemSlot.itemId;//wip this might be broken

    if (itemIndex != LIST_CANCEL)
    {
        if (IS_HM(itemId))
            PlaceHMTileInWindow(windowId, 8, y);
    }
}

static void PrintDescription(s32 itemIndex)
{
    const u8 * str;
    struct ItemSlot itemSlot = GetBagItemIdAndQuantity(POCKET_TM_HM, itemIndex);
    u16 itemId = itemSlot.itemId;//wip this might be broken

    if (itemIndex != LIST_CANCEL)
        str = GetItemDescription(GetBagItemId(POCKET_TM_HM, itemIndex));
    else
        str = gText_TMCaseWillBePutAway;
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
    TMCase_Print(WIN_DESCRIPTION, FONT_NORMAL, str, 2, 3, 1, 0, 0, COLOR_LIGHT);

    TintPartyMonIcons(itemId);
}

// Darkens (or subsequently lightens) the blue bg tiles around the description window when a TM/HM is selected.
// shade=0: lighten, shade=1: darken
static void SetDescriptionWindowShade(s32 shade)
{
    SetBgTilemapPalette(2, 0, 12, 30, 8, 2 * shade + 1);
    ScheduleBgCopyTilemapToVram(2);
}

static void PrintListCursor(u8 listTaskId, u8 colorIdx)
{
    PrintListCursorAtRow(ListMenuGetYCoordForPrintingArrowCursor(listTaskId), colorIdx);
}

static void PrintListCursorAtRow(u8 y, u8 colorIdx)
{
    if (colorIdx == COLOR_CURSOR_ERASE)
    {
        // Never used. Would erase cursor (but also a portion of the list text)
        FillWindowPixelRect(WIN_LIST, 0, 0, y, GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_WIDTH), GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_HEIGHT));
        CopyWindowToVram(WIN_LIST, COPYWIN_GFX);
    }
    else
    {
        TMCase_Print(WIN_LIST, FONT_NORMAL, gText_SelectorArrow2, 0, y, 0, 0, 0, colorIdx);
    }
}

static void CreateListScrollArrows(void)
{
    sTMCaseDynamicResources->scrollArrowsTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP,
                                                                                           160, 8, 88,
                                                                                           sTMCaseDynamicResources->numTMs - sTMCaseDynamicResources->maxTMsShown + 1,
                                                                                           TAG_SCROLL_ARROW, TAG_SCROLL_ARROW,
                                                                                           &sTMCaseStaticResources.scrollOffset);
}

static void RemoveScrollArrows(void)
{
    if (sTMCaseDynamicResources->scrollArrowsTaskId != TASK_NONE)
    {
        RemoveScrollIndicatorArrowPair(sTMCaseDynamicResources->scrollArrowsTaskId);
        sTMCaseDynamicResources->scrollArrowsTaskId = TASK_NONE;
    }
}

void ResetTMCaseCursorPos(void)
{
    sTMCaseStaticResources.selectedRow = 0;
    sTMCaseStaticResources.scrollOffset = 0;
}

static void TMCaseSetup_GetTMCount(void)
{
    struct BagPocket * pocket = &gBagPockets[POCKET_TM_HM];
    u16 i;

    // BagPocketCompaction(pocket->itemSlots, pocket->capacity); //wip
    sTMCaseDynamicResources->numTMs = 0;
    for (i = 0; i < pocket->capacity; i++)
    {
        if (pocket->itemSlots[i].itemId == ITEM_NONE)
            break;
        sTMCaseDynamicResources->numTMs++;
    }
    sTMCaseDynamicResources->maxTMsShown = min(sTMCaseDynamicResources->numTMs + 1, 5);
}

static void TMCaseSetup_InitListMenuPositions(void)
{
    if (sTMCaseStaticResources.scrollOffset != 0)
    {
        if (sTMCaseStaticResources.scrollOffset + sTMCaseDynamicResources->maxTMsShown > sTMCaseDynamicResources->numTMs + 1)
            sTMCaseStaticResources.scrollOffset = sTMCaseDynamicResources->numTMs + 1 - sTMCaseDynamicResources->maxTMsShown;
    }
    if (sTMCaseStaticResources.scrollOffset + sTMCaseStaticResources.selectedRow >= sTMCaseDynamicResources->numTMs + 1)
    {
        if (sTMCaseDynamicResources->numTMs + 1 < 2)
            sTMCaseStaticResources.selectedRow = 0;
        else
            sTMCaseStaticResources.selectedRow = sTMCaseDynamicResources->numTMs;
    }
}

static void TMCaseSetup_UpdateVisualMenuOffset(void)
{
    u8 i;
    if (sTMCaseStaticResources.selectedRow > 3)
    {
        for (i = 0; i <= sTMCaseStaticResources.selectedRow - 3 && sTMCaseStaticResources.scrollOffset + sTMCaseDynamicResources->maxTMsShown != sTMCaseDynamicResources->numTMs + 1; i++)
        {
            do {} while (0);
            sTMCaseStaticResources.selectedRow--;
            sTMCaseStaticResources.scrollOffset++;
        }
    }
}

static void DestroyTMCaseBuffers(void)
{
    if (sTMCaseDynamicResources != NULL)
        Free(sTMCaseDynamicResources);
    if (sTilemapBuffer != NULL)
        Free(sTilemapBuffer);
    if (sListMenuItemsBuffer != NULL)
        Free(sListMenuItemsBuffer);
    if (sListMenuStringsBuffer != NULL)
        Free(sListMenuStringsBuffer);
    if (sTMSpritePaletteBuffer != NULL)
        Free(sTMSpritePaletteBuffer);
    FreeAllWindowBuffers();
}

static void Task_BeginFadeOutFromTMCase(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, -2, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_FadeOutAndCloseTMCase;
}

static void Task_FadeOutAndCloseTMCase(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (!gPaletteFade.active)
    {
        DestroyListMenuTask(tListTaskId, &sTMCaseStaticResources.scrollOffset, &sTMCaseStaticResources.selectedRow);
        if (sTMCaseDynamicResources->nextScreenCallback != NULL)
            SetMainCallback2(sTMCaseDynamicResources->nextScreenCallback);
        else
            SetMainCallback2(sTMCaseStaticResources.exitCallback);
        RemoveScrollArrows();
        DestroyTMCaseBuffers();
        DestroyTask(taskId);
    }
}

static void Task_HandleListInput(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    s32 input;

    if (!gPaletteFade.active)
    {
        if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
        {
            input = ListMenu_ProcessInput(tListTaskId);
            ListMenuGetScrollAndRow(tListTaskId, &sTMCaseStaticResources.scrollOffset, &sTMCaseStaticResources.selectedRow);
            switch (input)
            {
            case LIST_NOTHING_CHOSEN:
                break;
            case LIST_CANCEL:
                PlaySE(SE_SELECT);
                gSpecialVar_ItemId = ITEM_NONE;
                Task_BeginFadeOutFromTMCase(taskId);
                break;
            default:
                PlaySE(SE_SELECT);
                SetDescriptionWindowShade(1);
                RemoveScrollArrows();
                PrintListCursor(tListTaskId, COLOR_CURSOR_SELECTED);
                tSelection = input;
                struct ItemSlot itemSlot = GetBagItemIdAndQuantity(POCKET_TM_HM, tSelection);
                u16 itemId = itemSlot.itemId;//wip this might be broken

                gSpecialVar_ItemId = itemId;
                gTasks[taskId].func = Task_SelectedTMHM_Field;
                break;
            }
        }
    }
}

static void ReturnToList(u8 taskId)
{
    SetDescriptionWindowShade(0);
    CreateListScrollArrows();
    gTasks[taskId].func = Task_HandleListInput;
}

// When a TM/HM in the list is selected in the field, create a context
// menu with a list of actions that can be taken.
static void Task_SelectedTMHM_Field(u8 taskId)
{
    u8 * strbuf;
    
    // Create context window
    TMCase_SetWindowBorder2(WIN_SELECTED_MSG);

    // Regular TM/HM context menu
    AddContextMenu(&sTMCaseDynamicResources->contextMenuWindowId);
    sTMCaseDynamicResources->menuActionIndices = sMenuActionIndices_Field;
    sTMCaseDynamicResources->numMenuActions = ARRAY_COUNT(sMenuActionIndices_Field);

    // Print context window actions
    PrintMenuActionTexts(sTMCaseDynamicResources->contextMenuWindowId,
                                  FONT_SHORT,
                                  GetMenuCursorDimensionByFont(FONT_SHORT, 0),
                                  2,
                                  0,
                                  GetFontAttribute(FONT_SHORT, FONTATTR_MAX_LETTER_HEIGHT) + 2,
                                  sTMCaseDynamicResources->numMenuActions,
                                  sMenuActions,
                                  sTMCaseDynamicResources->menuActionIndices);

    // Menu_InitCursor(sTMCaseDynamicResources->contextMenuWindowId, FONT_NORMAL, 0, 2, GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_HEIGHT) + 2, sTMCaseDynamicResources->numMenuActions, 0); //wip
    InitMenuInUpperLeftCornerNormal(sTMCaseDynamicResources->contextMenuWindowId, sTMCaseDynamicResources->numMenuActions, 0);

    
    // Print label text next to the context window
    strbuf = Alloc(256);
    GetTMNumberAndMoveString(strbuf, gSpecialVar_ItemId);
    StringAppend(strbuf, gText_Var1IsSelected + 2); // +2 skips over the stringvar
    TMCase_Print(WIN_SELECTED_MSG, FONT_NORMAL, strbuf, 0, 2, 1, 0, 0, COLOR_DARK);
    Free(strbuf);
    if (IS_HM(gSpecialVar_ItemId))
    {
        PlaceHMTileInWindow(WIN_SELECTED_MSG, 0, 2);
        CopyWindowToVram(WIN_SELECTED_MSG, COPYWIN_GFX);
    }

    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    gTasks[taskId].func = Task_ContextMenu_HandleInput;
}

static void Task_ContextMenu_HandleInput(u8 taskId)
{
    s8 input;

    if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        input = Menu_ProcessInputNoWrap();
        switch (input)
        {
        case MENU_B_PRESSED:
            // Run last action in list (Exit)
            PlaySE(SE_SELECT);
            sMenuActions[sTMCaseDynamicResources->menuActionIndices[sTMCaseDynamicResources->numMenuActions - 1]].func.void_u8(taskId);
            break;
        case MENU_NOTHING_CHOSEN:
            break;
        default:
            PlaySE(SE_SELECT);
            sMenuActions[sTMCaseDynamicResources->menuActionIndices[input]].func.void_u8(taskId);
            break;
        }
    }
}

static void Action_Use(u8 taskId)
{
    RemoveContextMenu(&sTMCaseDynamicResources->contextMenuWindowId);
    ClearStdWindowAndFrameToTransparent(WIN_SELECTED_MSG, FALSE);
    ClearWindowTilemap(WIN_SELECTED_MSG);
    PutWindowTilemap(WIN_LIST);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    if (CalculatePlayerPartyCount() == 0)
    {
        PrintError_ThereIsNoPokemon(taskId);
    }
    else
    {
        gItemUseCB = ItemUseCB_TMHM;
        sTMCaseDynamicResources->nextScreenCallback = CB2_ShowPartyMenuForItemUse;
        Task_BeginFadeOutFromTMCase(taskId);
    }
}

static void PrintError_ThereIsNoPokemon(u8 taskId)
{
    PrintMessageWithFollowupTask(taskId, FONT_NORMAL, gText_NoPokemon, Task_WaitButtonAfterErrorPrint);
}

static void Task_WaitButtonAfterErrorPrint(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        CloseMessageAndReturnToList(taskId);
    }
}

static void CloseMessageAndReturnToList(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    DestroyListMenuTask(tListTaskId, &sTMCaseStaticResources.scrollOffset, &sTMCaseStaticResources.selectedRow);
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sTMCaseStaticResources.scrollOffset, sTMCaseStaticResources.selectedRow);
    PrintListCursor(tListTaskId, COLOR_DARK);
    ClearDialogWindowAndFrameToTransparent(WIN_MESSAGE, FALSE);
    ClearWindowTilemap(WIN_MESSAGE);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    ReturnToList(taskId);
}

static void Action_Exit(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    RemoveContextMenu(&sTMCaseDynamicResources->contextMenuWindowId);
    ClearStdWindowAndFrameToTransparent(WIN_SELECTED_MSG, FALSE);
    ClearWindowTilemap(WIN_SELECTED_MSG);
    PutWindowTilemap(WIN_LIST);
    PrintListCursor(tListTaskId, COLOR_DARK);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    ReturnToList(taskId);
}

static void InitWindowTemplatesAndPals(void)
{
    u8 i;

    InitWindows(sWindowTemplates);
    DeactivateAllTextPrinters();
    LoadUserWindowBorderGfx(0, 0x5B, BG_PLTT_ID(14));//wip
    LoadMessageBoxGfx(0, 0x64, BG_PLTT_ID(11));//wip
    DrawStdFrameWithCustomTileAndPalette(0, FALSE, 0x78, BG_PLTT_ID(13));//wip, maybe set to TRUE?
    LoadPalette(gStandardMenuPalette, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
    LoadPalette(gStandardMenuPalette, BG_PLTT_ID(10), PLTT_SIZE_4BPP);
    LoadPalette(sPal3Override, BG_PLTT_ID(15) + 6, sizeof(sPal3Override));
    LoadPalette(sPal3Override, BG_PLTT_ID(13) + 6, sizeof(sPal3Override));
    ListMenuLoadStdPalAt(BG_PLTT_ID(12), 1);
    for (i = 0; i < ARRAY_COUNT(sWindowTemplates) - 1; i++)
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
    PutWindowTilemap(WIN_LIST);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_TITLE);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    ScheduleBgCopyTilemapToVram(0);
}

static void TMCase_Print(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sTextColors[colorIdx], speed, str);
}

static void TMCase_SetWindowBorder1(u8 windowId)
{
    DrawStdFrameWithCustomTileAndPalette(windowId, FALSE, 0x5B, 14);
}

static void TMCase_SetWindowBorder2(u8 windowId)
{
    DrawStdFrameWithCustomTileAndPalette(windowId, FALSE, 0x78, 13);
}

static void PrintMessageWithFollowupTask(u8 taskId, u8 fontId, const u8 * str, TaskFunc func)
{
    DisplayMessageAndContinueTask(taskId, WIN_MESSAGE, 0x64, 0x0B, fontId, GetPlayerTextSpeedDelay(), str, func);
    ScheduleBgCopyTilemapToVram(1);
}

static void PrintTitle(void)
{
    u32 distance = 72 - GetStringWidth(FONT_NORMAL, gText_TMCase, 0);
    AddTextPrinterParameterized3(WIN_TITLE, FONT_NORMAL, distance / 2, 1, sTextColors[COLOR_LIGHT], 0, gText_TMCase);
}

static void DrawMoveInfoLabels(void)
{
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_TYPE, 0, 0);
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_POWER, 0, 12);
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_ACCURACY, 0, 24);
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_PP, 0, 36);
    CopyWindowToVram(WIN_MOVE_INFO_LABELS, COPYWIN_GFX);
}

static void PrintMoveInfo(u16 itemId)
{
    u8 i;
    u16 move;
    const u8 * str;

    FillWindowPixelRect(WIN_MOVE_INFO, 0, 0, 0, 40, 48);
    if (itemId == ITEM_NONE)
    {
        for (i = 0; i < 4; i++)
            TMCase_Print(WIN_MOVE_INFO, FONT_SHORT_COPY_1, gText_ThreeDashes, 7, 12 * i, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);
        CopyWindowToVram(WIN_MOVE_INFO, COPYWIN_GFX);
    }
    else
    {
        // Draw type icon
        move = ItemIdToBattleMoveId(itemId);
        BlitMenuInfoIcon(WIN_MOVE_INFO, GetMoveType(move) + 1, 0, 0);

        // Print power
        if (GetMovePower(move) < 2)
            str = gText_ThreeDashes;
        else
        {
            ConvertIntToDecimalStringN(gStringVar1, GetMovePower(move), STR_CONV_MODE_RIGHT_ALIGN, 3);
            str = gStringVar1;
        }
        TMCase_Print(WIN_MOVE_INFO, FONT_SHORT_COPY_1, str, 7, 12, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);

        // Print accuracy
        if (GetMoveAccuracy(move) == 0)
            str = gText_ThreeDashes;
        else
        {
            ConvertIntToDecimalStringN(gStringVar1, GetMoveAccuracy(move), STR_CONV_MODE_RIGHT_ALIGN, 3);
            str = gStringVar1;
        }
        TMCase_Print(WIN_MOVE_INFO, FONT_SHORT_COPY_1, str, 7, 24, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);

        // Print PP
        ConvertIntToDecimalStringN(gStringVar1, GetMovePP(move), STR_CONV_MODE_RIGHT_ALIGN, 3);
        TMCase_Print(WIN_MOVE_INFO, FONT_SHORT_COPY_1, gStringVar1, 7, 36, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);

        CopyWindowToVram(WIN_MOVE_INFO, COPYWIN_GFX);
    }
}

static void PlaceHMTileInWindow(u8 windowId, u8 x, u8 y)
{
    BlitBitmapToWindow(windowId, gTMCaseHM_Gfx, x, y, 16, 12);
}

static u8 AddContextMenu(u8 * windowId)
{
    if (*windowId == WINDOW_NONE)
    {
        *windowId = AddWindow(&sWindowTemplates_ContextMenu);
        TMCase_SetWindowBorder1(*windowId);
        ScheduleBgCopyTilemapToVram(0);
    }
    return *windowId;
}

static void RemoveContextMenu(u8 * windowId)
{
    ClearStdWindowAndFrameToTransparent(*windowId, FALSE);
    ClearWindowTilemap(*windowId);
    RemoveWindow(*windowId);
    ScheduleBgCopyTilemapToVram(0);
    *windowId = WINDOW_NONE;
}

#define MON_ICON_START_X  0x10
#define MON_ICON_START_Y  0x2a
#define MON_ICON_PADDING  0x20


void LoadMonIconPalettesTinted(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
    {
        LoadSpritePalette(&gMonIconPaletteTable[i]);
        TintPalette_GrayScale2(&gPlttBufferUnfaded[0x170 + i*16], 16);
    }
}


static void DrawPartyMonIcons(void)
{
    u8 i;
    u16 species;
    u8 icon_x = 0;
    u8 icon_y = 0;

    LoadMonIconPalettesTinted();

    for (i = 0; i < gPlayerPartyCount; i++)
    {
        //calc icon position (centered)
        switch (gPlayerPartyCount)
        {
        case 1:
            icon_x = MON_ICON_START_X + MON_ICON_PADDING;
            icon_y = MON_ICON_START_Y + MON_ICON_PADDING*0.5;
            break;
        case 2:
            icon_x = i < 2 ? MON_ICON_START_X + MON_ICON_PADDING*0.5 + MON_ICON_PADDING * i : MON_ICON_START_X + MON_ICON_PADDING*0.5 + MON_ICON_PADDING * (i - 2);
            icon_y = MON_ICON_START_Y + MON_ICON_PADDING*0.5;
            break;
        case 3:
            icon_x = i < 3 ? MON_ICON_START_X + MON_ICON_PADDING * i : MON_ICON_START_X + MON_ICON_PADDING * (i - 3);
            icon_y = MON_ICON_START_Y + MON_ICON_PADDING*0.5;
            break;
        case 4:
            icon_x = i < 2 ? MON_ICON_START_X + MON_ICON_PADDING*0.5 + MON_ICON_PADDING * i : MON_ICON_START_X + MON_ICON_PADDING*0.5 + MON_ICON_PADDING * (i - 2);
            icon_y = i < 2 ? MON_ICON_START_Y : MON_ICON_START_Y + MON_ICON_PADDING;
            break;
        default:
            icon_x = i < 3 ? MON_ICON_START_X + MON_ICON_PADDING * i : MON_ICON_START_X + MON_ICON_PADDING * (i - 3);
            icon_y = i < 3 ? MON_ICON_START_Y : MON_ICON_START_Y + MON_ICON_PADDING;
            break;
        }

        //get species
        species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        gMoveMenuSpriteIdData[i] = CreateMonIcon(species, SpriteCB_MonIcon, icon_x, icon_y, 1, GetMonData(&gPlayerParty[0], MON_DATA_PERSONALITY));

        //Set priority, stop movement and save original palette position
        gSprites[gMoveMenuSpriteIdData[i]].oam.priority = 0;
        StartSpriteAnim(&gSprites[gMoveMenuSpriteIdData[i]], 4); //full stop
        gMoveMenuSpriteIdPalette[i] = gSprites[gMoveMenuSpriteIdData[i]].oam.paletteNum; //save correct palette number to array
    }
}

static void TintPartyMonIcons(u16 tm)
{
    u8 i;
    u16 species;

    for (i = 0; i < gPlayerPartyCount; i++)
    {
        species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL);
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(7, 11));
        if (!CanLearnTeachableMove(species, ItemIdToBattleMoveId(tm))) 
        {
            gSprites[gMoveMenuSpriteIdData[i]].oam.objMode = ST_OAM_OBJ_BLEND;
        }
        else
        {
            gSprites[gMoveMenuSpriteIdData[i]].oam.objMode = ST_OAM_OBJ_NORMAL;
        }
    }
}