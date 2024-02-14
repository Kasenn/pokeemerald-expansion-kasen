Shoreslate_BP_Shop_MapScripts::
	.byte 0


ShoreslateShop_Man::
	faceplayer
	lockall
	msgbox ShoreslateShop_Man_Text, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq ShoreslateShop_Man_2
ShoreslateShop_Man_1:
	waitmessage
	closemessage
	release
	end

ShoreslateShop_Man_2:
	msgbox ShoreslateShop_Man_TextContinued, MSGBOX_NPC
	goto ShoreslateShop_Man_1


ShoreslateShop_OldMan::
	msgbox ShoreslateShop_OldMan_Text, MSGBOX_NPC
	end


Shoreslate_BPShop_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK4
	call Shoreslate_BPShop_ClerkWelcome
	goto Shoreslate_BPShop_ChooseHoldItem
	end


Shoreslate_BPShop_ClerkWelcome::
	msgbox Shoreslate_BPShop_Text_BuySomething, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return


Shoreslate_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR4
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, Shoreslate_BPShop_ChooseHoldItem_2
	case 1, Shoreslate_BPShop_ChooseHoldItem_3
	case 2, Shoreslate_BPShop_ChooseHoldItem_4
	case 3, Shoreslate_BPShop_ChooseHoldItem_5
	case 4, Shoreslate_BPShop_ChooseHoldItem_6
	case 5, Shoreslate_BPShop_ChooseHoldItem_7
	case 6, Shoreslate_BPShop_ChooseHoldItem_8
	case 7, Shoreslate_BPShop_ChooseHoldItem_9
	case 8, Shoreslate_BPShop_ChooseHoldItem_10
	case 9, Shoreslate_BPShop_ChooseHoldItem_11
	case MULTI_B_PRESSED, Shoreslate_BPShop_ChooseHoldItem_12
	return

Shoreslate_BPShop_ChooseHoldItem_2:
	call Shoreslate_BPShop_BrightPowder
	return

Shoreslate_BPShop_ChooseHoldItem_3:
	call Shoreslate_BPShop_QuickClaw
	return

Shoreslate_BPShop_ChooseHoldItem_4:
	call Shoreslate_BPShop_SootheBell
	return

Shoreslate_BPShop_ChooseHoldItem_5:
	call Shoreslate_BPShop_ScopeLens
	return

Shoreslate_BPShop_ChooseHoldItem_6:
	call Shoreslate_BPShop_ShellBell
	return

Shoreslate_BPShop_ChooseHoldItem_7:
	call Shoreslate_BPShop_MuscleBand
	return

Shoreslate_BPShop_ChooseHoldItem_8:
	call Shoreslate_BPShop_WiseGlasses
	return

Shoreslate_BPShop_ChooseHoldItem_9:
	call Shoreslate_BPShop_WideLens
	return

Shoreslate_BPShop_ChooseHoldItem_10:
	call Shoreslate_BPShop_ZoomLens
	return

Shoreslate_BPShop_ChooseHoldItem_11:
	call Shoreslate_BPShop_ClerkGoodbye
	return

Shoreslate_BPShop_ChooseHoldItem_12:
	call Shoreslate_BPShop_ClerkGoodbye
	return


Shoreslate_BPShop_BrightPowder::
	msgbox Shoreslate_BPShop_TextBrightPowder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_QuickClaw::
	msgbox Shoreslate_BPShop_TextQuickClaw, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_QUICK_CLAW
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_SootheBell::
	msgbox Shoreslate_BPShop_TextSootheBell, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_SOOTHE_BELL
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_ScopeLens::
	msgbox Shoreslate_BPShop_TextScopeLens, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_SCOPE_LENS
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_ShellBell::
	msgbox Shoreslate_BPShop_TextShellBell, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_SHELL_BELL
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_MuscleBand::
	msgbox Shoreslate_BPShop_TextMuscleBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_MUSCLE_BAND
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_WiseGlasses::
	msgbox Shoreslate_BPShop_TextWiseGlasses, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_WISE_GLASSES
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_WideLens::
	msgbox Shoreslate_BPShop_TextWideLens, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_WIDE_LENS
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_ZoomLens::
	msgbox Shoreslate_BPShop_TextZoomLens, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_ZOOM_LENS
	goto Shoreslate_BPShop_TryPurchasePrize
	end


Shoreslate_BPShop_ClerkGoodbye::
	msgbox Shoreslate_BPShop_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


Shoreslate_BPShop_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Shoreslate_BPShop_TryGivePrize
	msgbox Shoreslate_BPShop_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Shoreslate_BPShop_ChooseHoldItem
	end


Shoreslate_BPShop_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto Shoreslate_BPShop_TryGiveItem
	end


Shoreslate_BPShop_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, Shoreslate_BPShop_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox Shoreslate_BPShop_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Shoreslate_BPShop_ChooseHoldItem
	end


Shoreslate_BPShop_BagFull::
	msgbox Shoreslate_BPShop_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


Shoreslate_BPShop_EventScript_MoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_5
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 5
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR2, Shoreslate_BPShop_EventScript_AlreadyMetTutor
	msgbox Shoreslate_BPShop_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR2
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove
	end


Shoreslate_BPShop_EventScript_AlreadyMetTutor::
	msgbox Shoreslate_BPShop_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove
	end


Shoreslate_BPShop_EventScript_ChooseTutorMove::
	msgbox Shoreslate_BPShop_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_5
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, Shoreslate_BPShop_EventScript_ChooseTutorMove_3
	case 1, Shoreslate_BPShop_EventScript_ChooseTutorMove_4
	case 2, Shoreslate_BPShop_EventScript_ChooseTutorMove_5
	case 3, Shoreslate_BPShop_EventScript_ChooseTutorMove_6
	case 4, Shoreslate_BPShop_EventScript_ChooseTutorMove_7
	case 5, Shoreslate_BPShop_EventScript_ChooseTutorMove_8
	case 6, Shoreslate_BPShop_EventScript_ChooseTutorMove_9
	case 7, Shoreslate_BPShop_EventScript_ChooseTutorMove_10
	case 8, Shoreslate_BPShop_EventScript_ChooseTutorMove_11
	case 9, Shoreslate_BPShop_EventScript_ChooseTutorMove_12
	case 10, Shoreslate_BPShop_EventScript_ChooseTutorMove_13
	case 11, Shoreslate_BPShop_EventScript_ChooseTutorMove_14
	case MULTI_B_PRESSED, Shoreslate_BPShop_EventScript_ChooseTutorMove_15
Shoreslate_BPShop_EventScript_ChooseTutorMove_1:
	end

Shoreslate_BPShop_EventScript_ChooseTutorMove_3:
	call Shoreslate_BPShop_EventScript_WaterPulse
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_4:
	call Shoreslate_BPShop_EventScript_FuryCutter
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_5:
	call Shoreslate_BPShop_EventScript_MagicRoom
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_6:
	call Shoreslate_BPShop_EventScript_MudSlap
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_7:
	call Shoreslate_BPShop_EventScript_Swift
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_8:
	call Shoreslate_BPShop_EventScript_FoulPlay
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_9:
	call Shoreslate_BPShop_EventScript_GunkShot
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_10:
	call Shoreslate_BPShop_EventScript_Trick
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_11:
	call Shoreslate_BPShop_EventScript_ZenHeadbutt
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_12:
	call Shoreslate_BPShop_EventScript_AncientPower
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_13:
	call Shoreslate_BPShop_EventScript_OminousWind
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_14:
	call Shoreslate_BPShop_EventScript_ExitTutorMoveSelect
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1

Shoreslate_BPShop_EventScript_ChooseTutorMove_15:
	call Shoreslate_BPShop_EventScript_ExitTutorMoveSelect
	goto Shoreslate_BPShop_EventScript_ChooseTutorMove_1


Shoreslate_BPShop_EventScript_ChooseNewTutorMove::
	msgbox Shoreslate_BPShop_Text_TeachWhichMove
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_5
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_3
	case 1, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_4
	case 2, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_5
	case 3, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_6
	case 4, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_7
	case 5, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_8
	case 6, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_9
	case 7, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_10
	case 8, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_11
	case 9, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_12
	case 10, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_13
	case 11, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_14
	case MULTI_B_PRESSED, Shoreslate_BPShop_EventScript_ChooseNewTutorMove_15
Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1:
	end

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_3:
	call Shoreslate_BPShop_EventScript_WaterPulse
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_4:
	call Shoreslate_BPShop_EventScript_FuryCutter
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_5:
	call Shoreslate_BPShop_EventScript_MagicRoom
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_6:
	call Shoreslate_BPShop_EventScript_MudSlap
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_7:
	call Shoreslate_BPShop_EventScript_Swift
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_8:
	call Shoreslate_BPShop_EventScript_FoulPlay
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_9:
	call Shoreslate_BPShop_EventScript_GunkShot
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_10:
	call Shoreslate_BPShop_EventScript_Trick
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_11:
	call Shoreslate_BPShop_EventScript_ZenHeadbutt
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_12:
	call Shoreslate_BPShop_EventScript_AncientPower
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_13:
	call Shoreslate_BPShop_EventScript_OminousWind
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_14:
	call Shoreslate_BPShop_EventScript_ExitTutorMoveSelect
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1

Shoreslate_BPShop_EventScript_ChooseNewTutorMove_15:
	call Shoreslate_BPShop_EventScript_ExitTutorMoveSelect
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove_1


Shoreslate_BPShop_EventScript_WaterPulse::
	setvar VAR_0x8008, 6
	setvar VAR_0x8005, MOVE_WATER_PULSE
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_FuryCutter::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_MagicRoom::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MAGIC_ROOM
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_MudSlap::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MUD_SLAP
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_Swift::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_SWIFT
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_FoulPlay::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_FOUL_PLAY
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_GunkShot::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_GUNK_SHOT
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_Trick::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_TRICK
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_ZenHeadbutt::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_AncientPower::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_ANCIENT_POWER
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_OminousWind::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
	goto Shoreslate_BPShop_EventScript_ConfirmMoveSelection
	end


Shoreslate_BPShop_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox Shoreslate_BPShop_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end


Shoreslate_BPShop_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox Shoreslate_BPShop_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Shoreslate_BPShop_EventScript_ChooseNewTutorMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Shoreslate_BPShop_EventScript_TeachTutorMove
	msgbox Shoreslate_BPShop_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto Shoreslate_BPShop_EventScript_ChooseNewTutorMove
	end


Shoreslate_BPShop_EventScript_TeachTutorMove::
	msgbox Shoreslate_BPShop_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, Shoreslate_BPShop_EventScript_ChooseTutorMove
	msgbox Shoreslate_BPShop_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end


ShoreslateShop_Man_Text::
	.string "Hey, want to hear a secret?$"

ShoreslateShop_Man_TextContinued::
	.string "There are certain type of trainers who\n"
	.string "are colloquially known as\l"
	.string "“Pokémon aficionados.”\p"
	.string "These people absolutely love Pokémon\n"
	.string "battles and often times even demand\l"
	.string "rematches if you happen to cross their\l"
	.string "path more than once.\p"
	.string "If you ever find yourself short on\n"
	.string "Battle Points, consider challenging\l"
	.string "one of these aficionados.$"

ShoreslateShop_OldMan_Text::
	.string "I don't understand what half of these\n"
	.string "items even do…$"

Shoreslate_BPShop_Text_BuySomething::
	.string "Welcome to the BP shop.\pHere's a list of this store's\npurchasable items.$"

Shoreslate_BPShop_TextBrightPowder::
	.string "You've chosen the Bright Powder.\nIs that correct?$"

Shoreslate_BPShop_TextQuickClaw::
	.string "You've chosen the Quick Claw.\n Is that correct?$"

Shoreslate_BPShop_TextSootheBell::
	.string "You've chosen the Soothe Bell.\n Is that correct?$"

Shoreslate_BPShop_TextScopeLens::
	.string "You've chosen the Scope Lens.\n Is that correct?$"

Shoreslate_BPShop_TextShellBell::
	.string "You've chosen the Shell Bell.\n Is that correct?$"

Shoreslate_BPShop_TextMuscleBand::
	.string "You've chosen the Muscle Band.\n Is that correct?$"

Shoreslate_BPShop_TextWiseGlasses::
	.string "You've chosen the Wise Glasses.\n Is that correct?$"

Shoreslate_BPShop_TextWideLens::
	.string "You've chosen the Wide Lens.\n Is that correct?$"

Shoreslate_BPShop_TextZoomLens::
	.string "You've chosen the Zoom Lens.\n Is that correct?$"

Shoreslate_BPShop_ThankYouVisitWithPoints::
	.string "Thank you very much.\pPlease visit us when you have\nsaved up Battle Points.$"

Shoreslate_BPShop_Text_DontHaveEnoughPoints::
	.string "I'm so sorry…\nYou don't have enough Battle Points…$"

Shoreslate_BPShop_Text_DontHaveSpaceToHoldIt::
	.string "I'm so sorry…\nYou don't have space to hold it…$"

Shoreslate_BPShop_Text_HereIsYourPrize::
	.string "Here is your item!$"

Shoreslate_BPShop_Text_TutorIntro::
	.string "Welcome to the BP shop.\p"
	.string "I can train your Pokémon moves\n"
	.string "in exchange for BP.$"

Shoreslate_BPShop_Text_TutorWelcomeBack::
	.string "Welcome to the BP shop.\n"
	.string "I am this shop's move tutor.$"

Shoreslate_BPShop_Text_TeachWhichMove::
	.string "Which move would you like to choose?$"

Shoreslate_BPShop_Text_MoveWillBeXBattlePoints::
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points.$"

Shoreslate_BPShop_Text_TeachMoveToWhichMon::
	.string "Which Pokémon would you like to teach\n"
	.string "this move?$"

Shoreslate_BPShop_Text_HaventGotEnoughPoints::
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

Shoreslate_BPShop_Text_IllTakeBattlePoints::
	.string "Please come again.$"

Shoreslate_BPShop_Text_YouDontWantTo::
	.string "Let me know if you change your mind.$"

Shoreslate_BPShop_Text_WaterPulseDesc::
	.string "An aquatic\n"
	.string "attack that may\n"
	.string "confuse the foe.$"

Shoreslate_BPShop_Text_FuryCutterDesc::
	.string "An attack that\n"
	.string "intensifies on\n"
	.string "successive hits.$"

Shoreslate_BPShop_Text_MagicRoomDesc::
	.string "Hold items lose\n"
	.string "their effects\n"
	.string "for 5 turns.$"

Shoreslate_BPShop_Text_MudSlapDesc::
	.string "Hurls mud in the\n"
	.string "foe's face to\n"
	.string "reduce accuracy.$"

Shoreslate_BPShop_Text_SwiftDesc::
	.string "Sprays star-\n"
	.string "shaped rays\n"
	.string "that never miss.$"

Shoreslate_BPShop_Text_FoulPlayDesc::
	.string "The greater the\n"
	.string "foe's Attack, the\n"
	.string "greater the power.$"

Shoreslate_BPShop_Text_GunkShotDesc::
	.string "Shoots filth\n"
	.string "at the foe.\n"
	.string "May also poison.$"

Shoreslate_BPShop_Text_TrickDesc::
	.string "Tricks the foe\n"
	.string "into trading\n"
	.string "held items.$"

Shoreslate_BPShop_Text_ZenHeadbuttDesc::
	.string "A strong head-\n"
	.string "butt that may\n"
	.string "cause flinching.$"

Shoreslate_BPShop_Text_AncientPowerDesc::
	.string "An attack that\n"
	.string "may raise\n"
	.string "all stats.$"

Shoreslate_BPShop_Text_OminousWindDesc::
	.string "A repulsive\n"
	.string "attack that may\n"
	.string "raise all stats.$"

BattleFrontier_ExchangeServiceCorner_Text_SootheBellDesc::
	.string "A hold item that calms spirits and\n"
	.string "fosters friendship.$"

BattleFrontier_ExchangeServiceCorner_Text_ShellBellDesc::
	.string "A hold item that restores HP upon\n"
	.string "striking the foe.$"

BattleFrontier_ExchangeServiceCorner_Text_MuscleBandDesc::
	.string "A headband that boosts the power of\n"
	.string "physical moves.$"

BattleFrontier_ExchangeServiceCorner_Text_WiseGlassesDesc::
	.string "A pair of glasses that ups the power\n"
	.string "of special moves.$"

BattleFrontier_ExchangeServiceCorner_Text_WideLensDesc::
	.string "A magnifying lens that boosts the\n"
	.string "accuracy of moves.$"

BattleFrontier_ExchangeServiceCorner_Text_ZoomLensDesc::
	.string "If the holder moves after the foe, it'll\n"
	.string "boost accuracy.$"
