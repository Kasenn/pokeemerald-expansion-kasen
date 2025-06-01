#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_message.h"
#include "bg.h"
#include "data.h"
#include "event_data.h"
#include "graphics.h"
#include "item_menu.h"
#include "link.h"
#include "main.h"
#include "m4a.h"
#include "palette.h"
#include "pokeball.h"
#include "pokeblock.h"
#include "pokemon.h"
#include "reshow_battle_screen.h"
#include "sound.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "util.h"
#include "window.h"
#include "line_break.h"
#include "constants/battle_anim.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/rgb.h"

static void SafariHandleDrawTrainerPic(u32 battler);
static void SafariHandleSuccessBallThrowAnim(u32 battler);
static void SafariHandleBallThrowAnim(u32 battler);
static void SafariHandlePrintString(u32 battler);
static void SafariHandlePrintSelectionString(u32 battler);
static void SafariHandleChooseAction(u32 battler);
static void SafariHandleChooseItem(u32 battler);
static void SafariHandleStatusIconUpdate(u32 battler);
static void SafariHandleFaintingCry(u32 battler);
static void SafariHandleIntroTrainerBallThrow(u32 battler);
static void SafariHandleBattleAnimation(u32 battler);
static void SafariHandleEndLinkBattle(u32 battler);

static void SafariBufferRunCommand(u32 battler);
static void SafariBufferExecCompleted(u32 battler);
static void CompleteWhenChosePokeblock(u32 battler);

static void (*const sSafariBufferCommands[CONTROLLER_CMDS_COUNT])(u32 battler) =
{
    [CONTROLLER_GETMONDATA]               = BtlController_Empty,
    [CONTROLLER_GETRAWMONDATA]            = BtlController_Empty,
    [CONTROLLER_SETMONDATA]               = BtlController_Empty,
    [CONTROLLER_SETRAWMONDATA]            = BtlController_Empty,
    [CONTROLLER_LOADMONSPRITE]            = BtlController_Empty,
    [CONTROLLER_SWITCHINANIM]             = BtlController_Empty,
    [CONTROLLER_RETURNMONTOBALL]          = BtlController_Empty,
    [CONTROLLER_DRAWTRAINERPIC]           = SafariHandleDrawTrainerPic,
    [CONTROLLER_TRAINERSLIDE]             = BtlController_Empty,
    [CONTROLLER_TRAINERSLIDEBACK]         = BtlController_Empty,
    [CONTROLLER_FAINTANIMATION]           = BtlController_Empty,
    [CONTROLLER_PALETTEFADE]              = BtlController_Empty,
    [CONTROLLER_SUCCESSBALLTHROWANIM]     = SafariHandleSuccessBallThrowAnim,
    [CONTROLLER_BALLTHROWANIM]            = SafariHandleBallThrowAnim,
    [CONTROLLER_PAUSE]                    = BtlController_Empty,
    [CONTROLLER_MOVEANIMATION]            = BtlController_Empty,
    [CONTROLLER_PRINTSTRING]              = SafariHandlePrintString,
    [CONTROLLER_PRINTSTRINGPLAYERONLY]    = SafariHandlePrintSelectionString,
    [CONTROLLER_CHOOSEACTION]             = SafariHandleChooseAction,
    [CONTROLLER_YESNOBOX]                 = BtlController_Empty,
    [CONTROLLER_CHOOSEMOVE]               = BtlController_Empty,
    [CONTROLLER_OPENBAG]                  = SafariHandleChooseItem,
    [CONTROLLER_CHOOSEPOKEMON]            = BtlController_Empty,
    [CONTROLLER_23]                       = BtlController_Empty,
    [CONTROLLER_HEALTHBARUPDATE]          = BtlController_Empty,
    [CONTROLLER_EXPUPDATE]                = BtlController_Empty,
    [CONTROLLER_STATUSICONUPDATE]         = SafariHandleStatusIconUpdate,
    [CONTROLLER_STATUSANIMATION]          = BtlController_Empty,
    [CONTROLLER_STATUSXOR]                = BtlController_Empty,
    [CONTROLLER_DATATRANSFER]             = BtlController_Empty,
    [CONTROLLER_DMA3TRANSFER]             = BtlController_Empty,
    [CONTROLLER_PLAYBGM]                  = BtlController_Empty,
    [CONTROLLER_32]                       = BtlController_Empty,
    [CONTROLLER_TWORETURNVALUES]          = BtlController_Empty,
    [CONTROLLER_CHOSENMONRETURNVALUE]     = BtlController_Empty,
    [CONTROLLER_ONERETURNVALUE]           = BtlController_Empty,
    [CONTROLLER_ONERETURNVALUE_DUPLICATE] = BtlController_Empty,
    [CONTROLLER_HITANIMATION]             = BtlController_Empty,
    [CONTROLLER_CANTSWITCH]               = BtlController_Empty,
    [CONTROLLER_PLAYSE]                   = BtlController_HandlePlaySE,
    [CONTROLLER_PLAYFANFAREORBGM]         = BtlController_HandlePlayFanfareOrBGM,
    [CONTROLLER_FAINTINGCRY]              = SafariHandleFaintingCry,
    [CONTROLLER_INTROSLIDE]               = BtlController_HandleIntroSlide,
    [CONTROLLER_INTROTRAINERBALLTHROW]    = SafariHandleIntroTrainerBallThrow,
    [CONTROLLER_DRAWPARTYSTATUSSUMMARY]   = BtlController_Empty,
    [CONTROLLER_HIDEPARTYSTATUSSUMMARY]   = BtlController_Empty,
    [CONTROLLER_ENDBOUNCE]                = BtlController_Empty,
    [CONTROLLER_SPRITEINVISIBILITY]       = BtlController_Empty,
    [CONTROLLER_BATTLEANIMATION]          = SafariHandleBattleAnimation,
    [CONTROLLER_LINKSTANDBYMSG]           = BtlController_Empty,
    [CONTROLLER_RESETACTIONMOVESELECTION] = BtlController_Empty,
    [CONTROLLER_ENDLINKBATTLE]            = SafariHandleEndLinkBattle,
    [CONTROLLER_DEBUGMENU]                = BtlController_Empty,
    [CONTROLLER_TERMINATOR_NOP]           = BtlController_TerminatorNop
};

void SetControllerToSafari(u32 battler)
{
    gBattlerControllerEndFuncs[battler] = SafariBufferExecCompleted;
    gBattlerControllerFuncs[battler] = SafariBufferRunCommand;
}

static void SafariBufferRunCommand(u32 battler)
{
    if (gBattleControllerExecFlags & (1u << battler))
    {
        if (gBattleResources->bufferA[battler][0] < ARRAY_COUNT(sSafariBufferCommands))
            sSafariBufferCommands[gBattleResources->bufferA[battler][0]](battler);
        else
            SafariBufferExecCompleted(battler);
    }
}

static const u16 *const sHealthBoxColor[] =
{
    gBattleInterface_BallStatusBarPal,
    gBattleInterface_BallStatusBarPal2, //gBattleInterface_BallStatusBarPal2,
    gBattleInterface_BallStatusBarPal3, //gBattleInterface_BallStatusBarPal3,
    gBattleInterface_BallStatusBarPal4, //gBattleInterface_BallStatusBarPal4,
    gBattleInterface_BallStatusBarPal5, //gBattleInterface_BallStatusBarPal5,
    gBattleInterface_BallStatusBarPal6, //gBattleInterface_BallStatusBarPal6,
    gBattleInterface_BallStatusBarPal7, //gBattleInterface_BallStatusBarPal7,
    gBattleInterface_BallStatusBarPal8, //gBattleInterface_BallStatusBarPal8,
};

static const u16 *const sBattleTextboxColor[] =
{
    gBattleTextboxPalette,
    gBattleTextboxPalette2,
    gBattleTextboxPalette3,
    gBattleTextboxPalette4,
    gBattleTextboxPalette5,
    gBattleTextboxPalette6,
    gBattleTextboxPalette7,
    gBattleTextboxPalette8,
};

static const u8 *const sWindowFrames[] =
{
    gTextWindowFrame1_GfxOpaque,
    sTextWindowFrame2_GfxOpaque,
    sTextWindowFrame3_GfxOpaque,
    sTextWindowFrame4_GfxOpaque,
    sTextWindowFrame5_GfxOpaque,
    sTextWindowFrame6_GfxOpaque,
    sTextWindowFrame7_GfxOpaque,
    sTextWindowFrame8_GfxOpaque,
    sTextWindowFrame9_GfxOpaque,
    sTextWindowFrame10_GfxOpaque,
    sTextWindowFrame11_GfxOpaque,
    sTextWindowFrame12_GfxOpaque,
    sTextWindowFrame13_GfxOpaque,
    sTextWindowFrame14_GfxOpaque,
    sTextWindowFrame15_GfxOpaque,
    sTextWindowFrame16_GfxOpaque,
    sTextWindowFrame17_GfxOpaque,
    sTextWindowFrame18_GfxOpaque,
    sTextWindowFrame19_GfxOpaque,
    sTextWindowFrame20_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
    sTextWindowFrame21_GfxOpaque,
};

static const u16 *const sWindowFrameColor[] =
{
    gTextWindowFrame1_PalOpaque,
    sTextWindowFrame2_PalOpaque,
    sTextWindowFrame3_PalOpaque,
    sTextWindowFrame4_PalOpaque,
    sTextWindowFrame5_PalOpaque,
    sTextWindowFrame6_PalOpaque,
    sTextWindowFrame7_PalOpaque,
    sTextWindowFrame8_PalOpaque,
    sTextWindowFrame9_PalOpaque,
    sTextWindowFrame10_PalOpaque,
    sTextWindowFrame11_PalOpaque,
    sTextWindowFrame12_PalOpaque,
    sTextWindowFrame13_PalOpaque,
    sTextWindowFrame14_PalOpaque,
    sTextWindowFrame15_PalOpaque,
    sTextWindowFrame16_PalOpaque,
    sTextWindowFrame17_PalOpaque,
    sTextWindowFrame18_PalOpaque,
    sTextWindowFrame19_PalOpaque,
    sTextWindowFrame20_PalOpaque,
    sTextWindowFrame21_Pal1Opaque,
    sTextWindowFrame21_Pal2Opaque,
    sTextWindowFrame21_Pal3Opaque,
    sTextWindowFrame21_Pal4Opaque,
    sTextWindowFrame21_Pal5Opaque,
    sTextWindowFrame21_Pal6Opaque,
    sTextWindowFrame21_Pal7Opaque,
    sTextWindowFrame21_Pal8Opaque,
};

static void HandleInputChooseAction(u32 battler)
{
    if (JOY_HELD(START_BUTTON))
    {
        if (JOY_NEW(DPAD_UP))
        {
            PlaySE(SE_SELECT);
            if (gSaveBlock2Ptr->optionsWindowFrameType == 27)
                gSaveBlock2Ptr->optionsWindowFrameType = 0;
            else
                gSaveBlock2Ptr->optionsWindowFrameType++;
            LoadBgTiles(2, sWindowFrames[gSaveBlock2Ptr->optionsWindowFrameType], 0x120, 0x12);
            LoadUserWindowBorderGfx(2, 0x22, BG_PLTT_ID(1));
            LoadPalette(sWindowFrameColor[gSaveBlock2Ptr->optionsWindowFrameType], BG_PLTT_ID(1), PLTT_SIZE_4BPP);
        }
        else if (JOY_NEW(DPAD_DOWN))
        {
            PlaySE(SE_SELECT);
            if (gSaveBlock2Ptr->optionsWindowFrameType == 0)
                gSaveBlock2Ptr->optionsWindowFrameType = 27;
            else
                gSaveBlock2Ptr->optionsWindowFrameType--;
            LoadBgTiles(2, sWindowFrames[gSaveBlock2Ptr->optionsWindowFrameType], 0x120, 0x12);
            LoadUserWindowBorderGfx(2, 0x22, BG_PLTT_ID(1));
            LoadPalette(sWindowFrameColor[gSaveBlock2Ptr->optionsWindowFrameType], BG_PLTT_ID(1), PLTT_SIZE_4BPP);
        }
        else if (JOY_NEW(DPAD_RIGHT))
        {
            PlaySE(SE_SELECT);
            if (gSaveBlock2Ptr->battleInterfaceColor == 7)
                gSaveBlock2Ptr->battleInterfaceColor = 0;
            else
                gSaveBlock2Ptr->battleInterfaceColor++;
            u16 color = gSaveBlock2Ptr->battleInterfaceColor;
            LoadPalette(sHealthBoxColor[color], OBJ_PLTT_ID(4), PLTT_SIZEOF(8));
            LoadPalette(sBattleTextboxColor[color], BG_PLTT_ID(0), TILE_SIZE_4BPP);
        }
        else if (JOY_NEW(DPAD_LEFT))
        {
            PlaySE(SE_SELECT);
            if (gSaveBlock2Ptr->battleInterfaceColor == 0)
                gSaveBlock2Ptr->battleInterfaceColor = 7;
            else
                gSaveBlock2Ptr->battleInterfaceColor--;
            u16 color = gSaveBlock2Ptr->battleInterfaceColor;
            LoadPalette(sHealthBoxColor[color], OBJ_PLTT_ID(4), PLTT_SIZEOF(8));
            LoadPalette(sBattleTextboxColor[color], BG_PLTT_ID(0), TILE_SIZE_4BPP);
        }
    }

    else if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);

        switch (gActionSelectionCursor[battler])
        {
        case 0:
            BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, B_ACTION_SAFARI_BALL, 0);
            break;
        case 1:
            BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, B_ACTION_SAFARI_LAY_LOW, 0);
            break;
        case 2:
            BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, B_ACTION_SAFARI_GO_NEAR, 0);
            break;
        case 3:
            BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, B_ACTION_SAFARI_RUN, 0);
            break;
        }
        SafariBufferExecCompleted(battler);
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        if (gActionSelectionCursor[battler] & 1)
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[battler]);
            gActionSelectionCursor[battler] ^= 1;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[battler], 0);
        }
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        if (!(gActionSelectionCursor[battler] & 1))
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[battler]);
            gActionSelectionCursor[battler] ^= 1;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[battler], 0);
        }
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (gActionSelectionCursor[battler] & 2)
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[battler]);
            gActionSelectionCursor[battler] ^= 2;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[battler], 0);
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (!(gActionSelectionCursor[battler] & 2))
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[battler]);
            gActionSelectionCursor[battler] ^= 2;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[battler], 0);
        }
    }
    else if (B_QUICK_MOVE_CURSOR_TO_RUN && JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        ActionSelectionDestroyCursorAt(gActionSelectionCursor[battler]);
        gActionSelectionCursor[battler] = 3;
        ActionSelectionCreateCursorAt(gActionSelectionCursor[battler], 0);
    }
}

static void Controller_WaitForHealthbox(u32 battler)
{
    if (gSprites[gHealthboxSpriteIds[battler]].callback == SpriteCallbackDummy)
        SafariBufferExecCompleted(battler);
}

static void SafariSetBattleEndCallbacks(u32 battler)
{
    if (!gPaletteFade.active)
    {
        gMain.inBattle = FALSE;
        gMain.callback1 = gPreBattleCallback1;
        SetMainCallback2(gMain.savedCallback);
    }
}

static void SafariOpenPokeblockCase(u32 battler)
{
    if (!gPaletteFade.active)
    {
        gBattlerControllerFuncs[battler] = CompleteWhenChosePokeblock;
        FreeAllWindowBuffers();
        OpenPokeblockCaseInBattle();
    }
}

static void CompleteWhenChosePokeblock(u32 battler)
{
    if (gMain.callback2 == BattleMainCB2 && !gPaletteFade.active)
    {
        BtlController_EmitOneReturnValue(battler, B_COMM_TO_ENGINE, gSpecialVar_ItemId);
        SafariBufferExecCompleted(battler);
    }
}

static void SafariBufferExecCompleted(u32 battler)
{
    gBattlerControllerFuncs[battler] = SafariBufferRunCommand;
    if (gBattleTypeFlags & BATTLE_TYPE_LINK)
    {
        u8 playerId = GetMultiplayerId();

        PrepareBufferDataTransferLink(battler, B_COMM_CONTROLLER_IS_DONE, 4, &playerId);
        gBattleResources->bufferA[battler][0] = CONTROLLER_TERMINATOR_NOP;
    }
    else
    {
        gBattleControllerExecFlags &= ~(1u << battler);
    }
}

static void SafariHandleDrawTrainerPic(u32 battler)
{
    u32 trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_BACK_PIC_BRENDAN;

    switch (VarGet(VAR_CHOSEN_OUTFIT)){
    case OUTFIT_RUBYSAPPHIRE:
        trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN;
        break;
    case OUTFIT_EMERALD:
        trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_BACK_PIC_BRENDAN;
        break;
    case OUTFIT_ORAS:
        trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_BACK_PIC_BRENDAN_ORAS;
        break;
    }    

    BtlController_HandleDrawTrainerPic(battler, trainerPicId, FALSE,
                                       80, 80 + 4 * (8 - gTrainerBacksprites[trainerPicId].coordinates.size),
                                       30);
}

static void SafariHandleSuccessBallThrowAnim(u32 battler)
{
    BtlController_HandleSuccessBallThrowAnim(battler, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), B_ANIM_BALL_THROW_WITH_TRAINER, FALSE);
}

static void SafariHandleBallThrowAnim(u32 battler)
{
    BtlController_HandleBallThrowAnim(battler, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), B_ANIM_BALL_THROW_WITH_TRAINER, FALSE);
}

static void SafariHandlePrintString(u32 battler)
{
    BtlController_HandlePrintString(battler, FALSE, FALSE);
}

static void SafariHandlePrintSelectionString(u32 battler)
{
    if (IsOnPlayerSide(battler))
        SafariHandlePrintString(battler);
    else
        SafariBufferExecCompleted(battler);
}

static void HandleChooseActionAfterDma3(u32 battler)
{
    if (!IsDma3ManagerBusyWithBgCopy())
    {
        gBattle_BG0_X = 0;
        gBattle_BG0_Y = DISPLAY_HEIGHT;
        gBattlerControllerFuncs[battler] = HandleInputChooseAction;
    }
}

static void SafariHandleChooseAction(u32 battler)
{
    s32 i;

    gBattlerControllerFuncs[battler] = HandleChooseActionAfterDma3;
    BattlePutTextOnWindow(gText_SafariZoneMenu, B_WIN_ACTION_MENU);

    for (i = 0; i < 4; i++)
        ActionSelectionDestroyCursorAt(i);

    ActionSelectionCreateCursorAt(gActionSelectionCursor[battler], 0);
    BattleStringExpandPlaceholdersToDisplayedString(gText_WhatWillPkmnDo2);
    // BreakStringAutomatic(gDisplayedStringBattle, WindowWidthPx(B_WIN_ACTION_PROMPT), 2, FONT_NORMAL);
    BattlePutTextOnWindow(gDisplayedStringBattle, B_WIN_ACTION_PROMPT);
}

static void SafariHandleChooseItem(u32 battler)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
    gBattlerControllerFuncs[battler] = SafariOpenPokeblockCase;
    gBattlerInMenuId = battler;
}

static void SafariHandleStatusIconUpdate(u32 battler)
{
    UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], GetBattlerMon(battler), HEALTHBOX_SAFARI_BALLS_TEXT);
    SafariBufferExecCompleted(battler);
}

// All of the other controllers(except Wally's) use CRY_MODE_FAINT.
// Player is not a pokemon, so it can't really faint in the Safari anyway.
static void SafariHandleFaintingCry(u32 battler)
{
    u16 species = GetMonData(GetBattlerMon(battler), MON_DATA_SPECIES);

    PlayCry_Normal(species, 25);
    SafariBufferExecCompleted(battler);
    SafariBufferExecCompleted(battler);
}

static void SafariHandleIntroTrainerBallThrow(u32 battler)
{
    UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], GetBattlerMon(battler), HEALTHBOX_SAFARI_ALL_TEXT);
    StartHealthboxSlideIn(battler);
    SetHealthboxSpriteVisible(gHealthboxSpriteIds[battler]);
    gBattlerControllerFuncs[battler] = Controller_WaitForHealthbox;
}

static void SafariHandleBattleAnimation(u32 battler)
{
    BtlController_HandleBattleAnimation(battler, TRUE, FALSE);
}

static void SafariHandleEndLinkBattle(u32 battler)
{
    gBattleOutcome = gBattleResources->bufferA[battler][1];
    FadeOutMapMusic(5);
    BeginFastPaletteFade(3);
    SafariBufferExecCompleted(battler);
    if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && !(gBattleTypeFlags & BATTLE_TYPE_IS_MASTER))
        gBattlerControllerFuncs[battler] = SafariSetBattleEndCallbacks;
}
