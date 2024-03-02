AldeleafBPShop_MapScripts::
	.byte 0


AldeShop_Man::
	msgbox AldeShop_Man_Text, MSGBOX_NPC
	end


AldeShop_OldMan::
	msgbox AldeShop_OldMan_Text, MSGBOX_NPC
	end


Aldeleaf_BPShop_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK3
	call Aldeleaf_BPShop_ClerkWelcome
	goto Aldeleaf_BPShop_ChooseHoldItem
	end


Aldeleaf_BPShop_ClerkWelcome::
	msgbox Aldeleaf_BPShop_Text_BuySomething, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return


Aldeleaf_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR3
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, Aldeleaf_BPShop_ChooseHoldItem_2
	case 1, Aldeleaf_BPShop_ChooseHoldItem_3
	case 2, Aldeleaf_BPShop_ChooseHoldItem_4
	case 3, Aldeleaf_BPShop_ChooseHoldItem_5
	case 4, Aldeleaf_BPShop_ChooseHoldItem_6
	case 5, Aldeleaf_BPShop_ChooseHoldItem_7
	case 6, Aldeleaf_BPShop_ChooseHoldItem_8
	case 7, Aldeleaf_BPShop_ChooseHoldItem_9
	case 8, Aldeleaf_BPShop_ChooseHoldItem_10
	case MULTI_B_PRESSED, Aldeleaf_BPShop_ChooseHoldItem_11
	return

Aldeleaf_BPShop_ChooseHoldItem_2:
	call Aldeleaf_BPShop_DragonScale
	return

Aldeleaf_BPShop_ChooseHoldItem_3:
	call Aldeleaf_BPShop_Electirizer
	return

Aldeleaf_BPShop_ChooseHoldItem_4:
	call Aldeleaf_BPShop_KingsRock
	return

Aldeleaf_BPShop_ChooseHoldItem_5:
	call Aldeleaf_BPShop_Magmarizer
	return

Aldeleaf_BPShop_ChooseHoldItem_6:
	call Aldeleaf_BPShop_MetalCoat
	return

Aldeleaf_BPShop_ChooseHoldItem_7:
	call Aldeleaf_BPShop_PrismScale
	return

Aldeleaf_BPShop_ChooseHoldItem_8:
	call Aldeleaf_BPShop_Protector
	return

Aldeleaf_BPShop_ChooseHoldItem_9:
	call Aldeleaf_BPShop_ReaperCloth
	return

Aldeleaf_BPShop_ChooseHoldItem_10:
	call Aldeleaf_BPShop_ClerkGoodbye
	return

Aldeleaf_BPShop_ChooseHoldItem_11:
	call Aldeleaf_BPShop_ClerkGoodbye
	return


Aldeleaf_BPShop_DragonScale::
	msgbox Aldeleaf_BPShop_TextDragonScale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_DRAGON_SCALE
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_Electirizer::
	msgbox Aldeleaf_BPShop_TextElectirizer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_ELECTIRIZER
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_KingsRock::
	msgbox Aldeleaf_BPShop_TextKingsRock, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_KINGS_ROCK
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_Magmarizer::
	msgbox Aldeleaf_BPShop_TextMagmarizer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_MAGMARIZER
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_MetalCoat::
	msgbox Aldeleaf_BPShop_TextMetalCoat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_METAL_COAT
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_PrismScale::
	msgbox Aldeleaf_BPShop_TextPrismScale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_PRISM_SCALE
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_Protector::
	msgbox Aldeleaf_BPShop_TextProtector, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_PROTECTOR
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_ReaperCloth::
	msgbox Aldeleaf_BPShop_TextReaperCloth, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_REAPER_CLOTH
	goto Aldeleaf_BPShop_TryPurchasePrize
	end


Aldeleaf_BPShop_ClerkGoodbye::
	msgbox Aldeleaf_BPShop_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


Aldeleaf_BPShop_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Aldeleaf_BPShop_TryGivePrize
	msgbox Aldeleaf_BPShop_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Aldeleaf_BPShop_ChooseHoldItem
	end


Aldeleaf_BPShop_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto Aldeleaf_BPShop_TryGiveItem
	end


Aldeleaf_BPShop_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, Aldeleaf_BPShop_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox Aldeleaf_BPShop_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Aldeleaf_BPShop_ChooseHoldItem
	end


Aldeleaf_BPShop_BagFull::
	msgbox Aldeleaf_BPShop_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


Aldeleaf_BPShop_EventScript_MoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_4
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR2, Aldeleaf_BPShop_EventScript_AlreadyMetTutor
	msgbox Aldeleaf_BPShop_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR2
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove
	end


Aldeleaf_BPShop_EventScript_AlreadyMetTutor::
	msgbox Aldeleaf_BPShop_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove
	end


Aldeleaf_BPShop_EventScript_ChooseTutorMove::
	msgbox Aldeleaf_BPShop_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_4
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, Aldeleaf_BPShop_EventScript_ChooseTutorMove_3
	case 1, Aldeleaf_BPShop_EventScript_ChooseTutorMove_4
	case 2, Aldeleaf_BPShop_EventScript_ChooseTutorMove_5
	case 3, Aldeleaf_BPShop_EventScript_ChooseTutorMove_6
	case 4, Aldeleaf_BPShop_EventScript_ChooseTutorMove_7
	case 5, Aldeleaf_BPShop_EventScript_ChooseTutorMove_8
	case 6, Aldeleaf_BPShop_EventScript_ChooseTutorMove_9
	case 7, Aldeleaf_BPShop_EventScript_ChooseTutorMove_10
	case 8, Aldeleaf_BPShop_EventScript_ChooseTutorMove_11
	case 9, Aldeleaf_BPShop_EventScript_ChooseTutorMove_12
	case 10, Aldeleaf_BPShop_EventScript_ChooseTutorMove_13
	case MULTI_B_PRESSED, Aldeleaf_BPShop_EventScript_ChooseTutorMove_14
Aldeleaf_BPShop_EventScript_ChooseTutorMove_1:
	end

Aldeleaf_BPShop_EventScript_ChooseTutorMove_3:
	call Aldeleaf_BPShop_EventScript_DrillRun
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_4:
	call Aldeleaf_BPShop_EventScript_Bounce
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_5:
	call Aldeleaf_BPShop_EventScript_SignalBeam
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_6:
	call Aldeleaf_BPShop_EventScript_IronHead
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_7:
	call Aldeleaf_BPShop_EventScript_IronDefense
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_8:
	call Aldeleaf_BPShop_EventScript_MagnetRise
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_9:
	call Aldeleaf_BPShop_EventScript_MagicCoat
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_10:
	call Aldeleaf_BPShop_EventScript_KnockOff
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_11:
	call Aldeleaf_BPShop_EventScript_SkillSwap
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_12:
	call Aldeleaf_BPShop_EventScript_IcyWind
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_13:
	call Aldeleaf_BPShop_EventScript_ExitTutorMoveSelect
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseTutorMove_14:
	call Aldeleaf_BPShop_EventScript_ExitTutorMoveSelect
	goto Aldeleaf_BPShop_EventScript_ChooseTutorMove_1


Aldeleaf_BPShop_EventScript_ChooseNewTutorMove::
	msgbox Aldeleaf_BPShop_Text_TeachWhichMove
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_4
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_3
	case 1, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_4
	case 2, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_5
	case 3, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_6
	case 4, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_7
	case 5, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_8
	case 6, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_9
	case 7, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_10
	case 8, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_11
	case 9, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_12
	case 10, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_13
	case MULTI_B_PRESSED, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_14
Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1:
	end

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_3:
	call Aldeleaf_BPShop_EventScript_DrillRun
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_4:
	call Aldeleaf_BPShop_EventScript_Bounce
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_5:
	call Aldeleaf_BPShop_EventScript_SignalBeam
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_6:
	call Aldeleaf_BPShop_EventScript_IronHead
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_7:
	call Aldeleaf_BPShop_EventScript_IronDefense
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_8:
	call Aldeleaf_BPShop_EventScript_MagnetRise
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_9:
	call Aldeleaf_BPShop_EventScript_MagicCoat
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_10:
	call Aldeleaf_BPShop_EventScript_KnockOff
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_11:
	call Aldeleaf_BPShop_EventScript_SkillSwap
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_12:
	call Aldeleaf_BPShop_EventScript_IcyWind
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_13:
	call Aldeleaf_BPShop_EventScript_ExitTutorMoveSelect
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1

Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_14:
	call Aldeleaf_BPShop_EventScript_ExitTutorMoveSelect
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove_1


Aldeleaf_BPShop_EventScript_DrillRun::
	setvar VAR_0x8008, 6
	setvar VAR_0x8005, MOVE_DRILL_RUN
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_Bounce::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_BOUNCE
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_SignalBeam::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_IronHead::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_IronDefense::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_MagnetRise::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MAGNET_RISE
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_MagicCoat::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MAGIC_COAT
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_KnockOff::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_SkillSwap::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_SKILL_SWAP
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_Synthesis::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_SYNTHESIS
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_StealthRock::
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_IcyWind::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto Aldeleaf_BPShop_EventScript_ConfirmMoveSelection
	end


Aldeleaf_BPShop_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox Aldeleaf_BPShop_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end


Aldeleaf_BPShop_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox Aldeleaf_BPShop_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aldeleaf_BPShop_EventScript_ChooseNewTutorMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Aldeleaf_BPShop_EventScript_TeachTutorMove
	msgbox Aldeleaf_BPShop_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto Aldeleaf_BPShop_EventScript_ChooseNewTutorMove
	end


Aldeleaf_BPShop_EventScript_TeachTutorMove::
	msgbox Aldeleaf_BPShop_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, Aldeleaf_BPShop_EventScript_ChooseTutorMove
	msgbox Aldeleaf_BPShop_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end


AldeShop_Man_Text::
	.string "Did you know?\n"
	.string "There used to be Pokémon that would\l"
	.string "evolve only if they were traded when\l"
	.string "holding a specific item.\p"
	.string "Nowadays most of those Pokémon are\n"
	.string "able to evolve as soon as they get\l"
	.string "ahold of said items.$"

AldeShop_OldMan_Text::
	.string "Where were these shops back when\n"
	.string "I was still but a wee trainer…$"

Aldeleaf_BPShop_Text_BuySomething::
	.string "Welcome to the BP shop.\pHere's a list of this store's\npurchasable items.$"

Aldeleaf_BPShop_TextDragonScale::
	.string "You've chosen the Dragon Scale.\nIs that correct?$"

Aldeleaf_BPShop_TextElectirizer::
	.string "You've chosen the Electirizer.\n Is that correct?$"

Aldeleaf_BPShop_TextKingsRock::
	.string "You've chosen the King's Rock.\n Is that correct?$"

Aldeleaf_BPShop_TextMagmarizer::
	.string "You've chosen the Magmarizer.\n Is that correct?$"

Aldeleaf_BPShop_TextMetalCoat::
	.string "You've chosen the Metal Coat.\n Is that correct?$"

Aldeleaf_BPShop_TextPrismScale::
	.string "You've chosen the Prism Scale.\n Is that correct?$"

Aldeleaf_BPShop_TextProtector::
	.string "You've chosen the Protector.\n Is that correct?$"

Aldeleaf_BPShop_TextReaperCloth::
	.string "You've chosen the Reaper Cloth.\n Is that correct?$"

Aldeleaf_BPShop_ThankYouVisitWithPoints::
	.string "Thank you very much.\pPlease visit us when you have\nsaved up Battle Points.$"

Aldeleaf_BPShop_Text_DontHaveEnoughPoints::
	.string "I'm so sorry…\nYou don't have enough Battle Points…$"

Aldeleaf_BPShop_Text_DontHaveSpaceToHoldIt::
	.string "I'm so sorry…\nYou don't have space to hold it…$"

Aldeleaf_BPShop_Text_HereIsYourPrize::
	.string "Here is your item!$"

Aldeleaf_BPShop_Text_TutorIntro::
	.string "Welcome to the BP shop.\p"
	.string "I can train your Pokémon moves\n"
	.string "in exchange for BP.$"

Aldeleaf_BPShop_Text_TutorWelcomeBack::
	.string "Welcome to the BP shop.\n"
	.string "I am this shop's move tutor.$"

Aldeleaf_BPShop_Text_TeachWhichMove::
	.string "Which move would you like to choose?$"

Aldeleaf_BPShop_Text_MoveWillBeXBattlePoints::
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points.$"

Aldeleaf_BPShop_Text_TeachMoveToWhichMon::
	.string "Which Pokémon would you like to teach\n"
	.string "this move?$"

Aldeleaf_BPShop_Text_HaventGotEnoughPoints::
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

Aldeleaf_BPShop_Text_IllTakeBattlePoints::
	.string "Please come again.$"

Aldeleaf_BPShop_Text_YouDontWantTo::
	.string "Let me know if you change your mind.$"

Aldeleaf_BPShop_Text_DrillRunDesc::
	.string "Spins its body\n"
	.string "like a drill. High\n"
	.string "critical-hit ratio.$"

Aldeleaf_BPShop_Text_BounceDesc::
	.string "Bounces up, then\n"
	.string "down on next turn.\n"
	.string "May paralyze.$"

Aldeleaf_BPShop_Text_SignalBeamDesc::
	.string "A strange beam\n"
	.string "attack that may\n"
	.string "confuse the foe.$"

Aldeleaf_BPShop_Text_IronHeadDesc::
	.string "Slams the foe with\n"
	.string "a hard head. May\n"
	.string "cause flinching.$"

Aldeleaf_BPShop_Text_IronDefenseDesc::
	.string "Hardens the body\n"
	.string "to sharply\n"
	.string "raise Defense.$"

Aldeleaf_BPShop_Text_MagnetRiseDesc::
	.string "The user levitates\n"
	.string "with electro-\n"
	.string "magnetism.$"

Aldeleaf_BPShop_Text_MagicCoatDesc::
	.string "Reflects special\n"
	.string "effects back\n"
	.string "to the attacker.$"

Aldeleaf_BPShop_Text_KnockOffDesc::
	.string "Knocks down the\n"
	.string "foe's held item to\n"
	.string "prevent its use.$"

Aldeleaf_BPShop_Text_SkillSwapDesc::
	.string "The user swaps\n"
	.string "special abilities\n"
	.string "with the target.$"

Aldeleaf_BPShop_Text_SynthesisDesc::
	.string "Restores HP.\n"
	.string "The amount varies\n"
	.string "with the weather.$"

Aldeleaf_BPShop_Text_StealthRockDesc::
	.string "Sets floating\n"
	.string "stones that hurt\n"
	.string "a foe switching in.$"

Aldeleaf_BPShop_Text_IcyWindDesc::
	.string "A chilling attack\n"
	.string "that lowers the\n"
	.string "foe's Speed.$"
