Coralgrove_Shop_MapScripts::
	.byte 0


CGShop_Lass::
	msgbox CGShop_Lass_Text_0, MSGBOX_NPC
	end


CGShop_Fisher::
	msgbox CGShop_Fisher_Text_0, MSGBOX_NPC
	end


Coralgrove_BPShop_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK2
	call Coralgrove_BPShop_ClerkWelcome
	goto Coralgrove_BPShop_ChooseHoldItem
	end


Coralgrove_BPShop_ClerkWelcome::
	msgbox Coralgrove_BPShop_Text_BuySomething, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return


Coralgrove_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR2
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, Coralgrove_BPShop_ChooseHoldItem_2
	case 1, Coralgrove_BPShop_ChooseHoldItem_3
	case 2, Coralgrove_BPShop_ChooseHoldItem_4
	case 3, Coralgrove_BPShop_ChooseHoldItem_5
	case 4, Coralgrove_BPShop_ChooseHoldItem_6
	case 5, Coralgrove_BPShop_ChooseHoldItem_7
	case 6, Coralgrove_BPShop_ChooseHoldItem_8
	case 7, Coralgrove_BPShop_ChooseHoldItem_9
	case 8, Coralgrove_BPShop_ChooseHoldItem_10
	case 9, Coralgrove_BPShop_ChooseHoldItem_11
	case MULTI_B_PRESSED, Coralgrove_BPShop_ChooseHoldItem_12
	return

Coralgrove_BPShop_ChooseHoldItem_2:
	call Coralgrove_BPShop_MiracleSeed
	return

Coralgrove_BPShop_ChooseHoldItem_3:
	call Coralgrove_BPShop_Charcoal
	return

Coralgrove_BPShop_ChooseHoldItem_4:
	call Coralgrove_BPShop_MysticWater
	return

Coralgrove_BPShop_ChooseHoldItem_5:
	call Coralgrove_BPShop_SilkScarf
	return

Coralgrove_BPShop_ChooseHoldItem_6:
	call Coralgrove_BPShop_SharpBeak
	return

Coralgrove_BPShop_ChooseHoldItem_7:
	call Coralgrove_BPShop_BlackBelt
	return

Coralgrove_BPShop_ChooseHoldItem_8:
	call Coralgrove_BPShop_HardStone
	return

Coralgrove_BPShop_ChooseHoldItem_9:
	call Coralgrove_BPShop_Magnet
	return

Coralgrove_BPShop_ChooseHoldItem_10:
	call Coralgrove_BPShop_PoisonBarb
	return

Coralgrove_BPShop_ChooseHoldItem_11:
	call Coralgrove_BPShop_ClerkGoodbye
	return

Coralgrove_BPShop_ChooseHoldItem_12:
	call Coralgrove_BPShop_ClerkGoodbye
	return


Coralgrove_BPShop_MiracleSeed::
	msgbox Coralgrove_BPShop_TextMiracleSeed, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MIRACLE_SEED
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_Charcoal::
	msgbox Coralgrove_BPShop_TextCharcoal, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_CHARCOAL
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_MysticWater::
	msgbox Coralgrove_BPShop_TextMysticWater, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MYSTIC_WATER
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_SilkScarf::
	msgbox Coralgrove_BPShop_TextSilkScarf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_SILK_SCARF
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_SharpBeak::
	msgbox Coralgrove_BPShop_TextSharpBeak, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_SHARP_BEAK
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_BlackBelt::
	msgbox Coralgrove_BPShop_TextBlackBelt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_BLACK_BELT
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_HardStone::
	msgbox Coralgrove_BPShop_TextHardStone, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_HARD_STONE
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_Magnet::
	msgbox Coralgrove_BPShop_TextMagnet, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MAGNET
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_PoisonBarb::
	msgbox Coralgrove_BPShop_TextPoisonBarb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_POISON_BARB
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_ClerkGoodbye::
	msgbox Coralgrove_BPShop_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


Coralgrove_BPShop_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Coralgrove_BPShop_TryGivePrize
	msgbox Coralgrove_BPShop_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Coralgrove_BPShop_ChooseHoldItem
	end


Coralgrove_BPShop_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto Coralgrove_BPShop_TryGiveItem
	end


Coralgrove_BPShop_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, Coralgrove_BPShop_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox Coralgrove_BPShop_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Coralgrove_BPShop_ChooseHoldItem
	end


Coralgrove_BPShop_BagFull::
	msgbox Coralgrove_BPShop_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


Coralgrove_BPShop_EventScript_MoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_3
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, Coralgrove_BPShop_EventScript_AlreadyMetTutor
	msgbox Coralgrove_BPShop_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove
	end


Coralgrove_BPShop_EventScript_AlreadyMetTutor::
	msgbox Coralgrove_BPShop_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove
	end


Coralgrove_BPShop_EventScript_ChooseTutorMove::
	msgbox Coralgrove_BPShop_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, Coralgrove_BPShop_EventScript_ChooseTutorMove_3
	case 1, Coralgrove_BPShop_EventScript_ChooseTutorMove_4
	case 2, Coralgrove_BPShop_EventScript_ChooseTutorMove_5
	case 3, Coralgrove_BPShop_EventScript_ChooseTutorMove_6
	case 4, Coralgrove_BPShop_EventScript_ChooseTutorMove_7
	case 5, Coralgrove_BPShop_EventScript_ChooseTutorMove_8
	case 6, Coralgrove_BPShop_EventScript_ChooseTutorMove_9
	case 7, Coralgrove_BPShop_EventScript_ChooseTutorMove_10
	case 8, Coralgrove_BPShop_EventScript_ChooseTutorMove_11
	case 9, Coralgrove_BPShop_EventScript_ChooseTutorMove_12
	case 10, Coralgrove_BPShop_EventScript_ChooseTutorMove_13
	case MULTI_B_PRESSED, Coralgrove_BPShop_EventScript_ChooseTutorMove_14
Coralgrove_BPShop_EventScript_ChooseTutorMove_1:
	end

Coralgrove_BPShop_EventScript_ChooseTutorMove_3:
	call Coralgrove_BPShop_EventScript_Snore
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_4:
	call Coralgrove_BPShop_EventScript_Bind
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_5:
	call Coralgrove_BPShop_EventScript_ShockWave
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_6:
	call Coralgrove_BPShop_EventScript_BugBite
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_7:
	call Coralgrove_BPShop_EventScript_HealBell
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_8:
	call Coralgrove_BPShop_EventScript_Electroweb
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_9:
	call Coralgrove_BPShop_EventScript_Defog
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_10:
	call Coralgrove_BPShop_EventScript_LowKick
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_11:
	call Coralgrove_BPShop_EventScript_HelpingHand
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_12:
	call Coralgrove_BPShop_EventScript_Recycle
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_13:
	call Coralgrove_BPShop_EventScript_ExitTutorMoveSelect
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1

Coralgrove_BPShop_EventScript_ChooseTutorMove_14:
	call Coralgrove_BPShop_EventScript_ExitTutorMoveSelect
	goto Coralgrove_BPShop_EventScript_ChooseTutorMove_1


Coralgrove_BPShop_EventScript_ChooseNewTutorMove::
	msgbox Coralgrove_BPShop_Text_TeachWhichMove
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_3
	case 1, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_4
	case 2, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_5
	case 3, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_6
	case 4, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_7
	case 5, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_8
	case 6, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_9
	case 7, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_10
	case 8, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_11
	case 9, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_12
	case 10, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_13
	case MULTI_B_PRESSED, Coralgrove_BPShop_EventScript_ChooseNewTutorMove_14
Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1:
	end

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_3:
	call Coralgrove_BPShop_EventScript_Snore
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_4:
	call Coralgrove_BPShop_EventScript_Bind
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_5:
	call Coralgrove_BPShop_EventScript_ShockWave
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_6:
	call Coralgrove_BPShop_EventScript_BugBite
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_7:
	call Coralgrove_BPShop_EventScript_HealBell
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_8:
	call Coralgrove_BPShop_EventScript_Electroweb
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_9:
	call Coralgrove_BPShop_EventScript_Defog
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_10:
	call Coralgrove_BPShop_EventScript_LowKick
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_11:
	call Coralgrove_BPShop_EventScript_HelpingHand
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_12:
	call Coralgrove_BPShop_EventScript_Recycle
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_13:
	call Coralgrove_BPShop_EventScript_ExitTutorMoveSelect
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1

Coralgrove_BPShop_EventScript_ChooseNewTutorMove_14:
	call Coralgrove_BPShop_EventScript_ExitTutorMoveSelect
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove_1


Coralgrove_BPShop_EventScript_Snore::
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_SNORE
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Bind::
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_BIND
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_ShockWave::
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Covet::
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_COVET
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_BugBite::
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_HealBell::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Electroweb::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_ELECTROWEB
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Defog::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_DEFOG
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_LowKick::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Uproar::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_UPROAR
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_HelpingHand::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Block::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_BLOCK
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_WorrySeed::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_WORRY_SEED
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Snatch::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_SNATCH
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_Recycle::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_RECYCLE
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_LastResort::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_LAST_RESORT
	goto Coralgrove_BPShop_EventScript_ConfirmMoveSelection
	end


Coralgrove_BPShop_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox Coralgrove_BPShop_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end


Coralgrove_BPShop_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox Coralgrove_BPShop_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_EventScript_ChooseNewTutorMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Coralgrove_BPShop_EventScript_TeachTutorMove
	msgbox Coralgrove_BPShop_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto Coralgrove_BPShop_EventScript_ChooseNewTutorMove
	end


Coralgrove_BPShop_EventScript_TeachTutorMove::
	msgbox Coralgrove_BPShop_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, Coralgrove_BPShop_EventScript_ChooseTutorMove
	msgbox Coralgrove_BPShop_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end


CGShop_Lass_Text_0:
	.string "So much cool stuff to buy!\pI don't even know what I'm\ngoing to get first!$"

CGShop_Fisher_Text_0:
	.string "Wish I could afford this Mystic Water…$"

Coralgrove_BPShop_Text_BuySomething::
	.string "Welcome to the BP shop.\pHere's a list of this store's\npurchasable hold items.$"

Coralgrove_BPShop_TextMiracleSeed::
	.string "You've chosen the Miracle Seed.\nIs that correct?$"

Coralgrove_BPShop_TextCharcoal::
	.string "You've chosen the Charcoal.\n Is that correct?$"

Coralgrove_BPShop_TextMysticWater::
	.string "You've chosen the Mystic Water.\n Is that correct?$"

Coralgrove_BPShop_TextSilkScarf::
	.string "You've chosen the Silk Scarf.\n Is that correct?$"

Coralgrove_BPShop_TextSharpBeak::
	.string "You've chosen the Sharp Beak.\n Is that correct?$"

Coralgrove_BPShop_TextBlackBelt::
	.string "You've chosen the Black Belt.\n Is that correct?$"

Coralgrove_BPShop_TextHardStone::
	.string "You've chosen the Hard Stone.\n Is that correct?$"

Coralgrove_BPShop_TextMagnet::
	.string "You've chosen the Magnet.\n Is that correct?$"

Coralgrove_BPShop_TextPoisonBarb::
	.string "You've chosen the Poison Barb.\n Is that correct?$"

Coralgrove_BPShop_ThankYouVisitWithPoints::
	.string "Thank you very much.\pPlease visit us when you have\nsaved up Battle Points.$"

Coralgrove_BPShop_Text_DontHaveEnoughPoints::
	.string "I'm so sorry…\nYou don't have enough Battle Points…$"

Coralgrove_BPShop_Text_DontHaveSpaceToHoldIt::
	.string "I'm so sorry…\nYou don't have space to hold it…$"

Coralgrove_BPShop_Text_HereIsYourPrize::
	.string "Here is your item!$"

Coralgrove_BPShop_Text_TutorIntro::
	.string "Welcome to the BP shop.\p"
	.string "I can train your Pokémon moves\n"
	.string "in exchange for BP.$"

Coralgrove_BPShop_Text_TutorWelcomeBack::
	.string "Welcome to the BP shop.\n"
	.string "I am this shop's move tutor.$"

Coralgrove_BPShop_Text_TeachWhichMove::
	.string "Which move would you like to choose?$"

Coralgrove_BPShop_Text_MoveWillBeXBattlePoints::
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points.$"

Coralgrove_BPShop_Text_TeachMoveToWhichMon::
	.string "Which Pokémon would you like to teach\n"
	.string "this move?$"

Coralgrove_BPShop_Text_HaventGotEnoughPoints::
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

Coralgrove_BPShop_Text_IllTakeBattlePoints::
	.string "Please come again.$"

Coralgrove_BPShop_Text_YouDontWantTo::
	.string "Let me know if you change your mind.$"

Coralgrove_BPShop_Text_SnoreDesc::
	.string "Can only be used\n"
	.string "while asleep. May\n"
	.string "cause flinching.$"

Coralgrove_BPShop_Text_BindDesc::
	.string "Bind and squeeze\n"
	.string "the target for\n"
	.string "4-5 turns.$"

Coralgrove_BPShop_Text_ShockWaveDesc::
	.string "A quick jolt of\n"
	.string "electricity that\n"
	.string "never misses.$"

Coralgrove_BPShop_Text_CovetDesc::
	.string "Steals the\n"
	.string "target's held\n"
	.string "item.$"

Coralgrove_BPShop_Text_BugBiteDesc::
	.string "Eats the target's\n"
	.string "berry, gaining\n"
	.string "its effect.$"

Coralgrove_BPShop_Text_HealBellDesc::
	.string "Heals the status\n"
	.string "conditions of all\n"
	.string "party Pokémon.$"

Coralgrove_BPShop_Text_ElectrowebDesc::
	.string "Electric web that\n"
	.string "also reduces the\n"
	.string "target's speed.$"

Coralgrove_BPShop_Text_DefogDesc::
	.string "Clears most\n"
	.string "obstacles. Also\n"
	.string "lowers evasion.$"

Coralgrove_BPShop_Text_LowKickDesc::
	.string "The heavier the\n"
	.string "target, the\n"
	.string "greater the power.$"

Coralgrove_BPShop_Text_UproarDesc::
	.string "3-turn attack.\n"
	.string "No Pokémon can\n"
	.string "sleep during it.$"

Coralgrove_BPShop_Text_HelpingHandDesc::
	.string "Boosts the power\n"
	.string "of an ally's\n"
	.string "attack.$"

Coralgrove_BPShop_Text_BlockDesc::
	.string "Prevents the\n"
	.string "target from\n"
	.string "escaping.$"

Coralgrove_BPShop_Text_WorrySeedDesc::
	.string "Makes the\n"
	.string "target's ability\n"
	.string "Insomnia.$"

Coralgrove_BPShop_Text_SnatchDesc::
	.string "Steals the effect\n"
	.string "of most beneficial\n"
	.string "status moves.$"

Coralgrove_BPShop_Text_RecycleDesc::
	.string "Recycles a used\n"
	.string "held item.$"

Coralgrove_BPShop_Text_LastResortDesc::
	.string "Only usable after\n"
	.string "using all other\n"
	.string "moves in combat.$"
