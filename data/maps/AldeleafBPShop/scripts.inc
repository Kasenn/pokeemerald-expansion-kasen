@ special ChooseMonForMoveTutor

AldeleafBPShop_MapScripts::
	.byte 0


AldeShop_Man::
	msgbox AldeShop_Man_Text, MSGBOX_NPC
	end


AldeShop_OldMan::
	msgbox AldeShop_OldMan_Text, MSGBOX_NPC
	end


Aldeleaf_BPShop_HoldItemClerk::
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK3
	setvar VAR_TEMP_3, 3
	goto BPShop_HoldItemClerk
	return


Aldeleaf_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR3
	call BPShop_SetupHoldItem
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
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_DRAGON_SCALE
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_3:
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_ELECTIRIZER
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_4:
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_KINGS_ROCK
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_5:
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_MAGMARIZER
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_6:
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_METAL_COAT
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_7:
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_PRISM_SCALE
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_8:
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_PROTECTOR
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_9:
	setvar VAR_0x8008, 24
	setvar VAR_0x8009, ITEM_OVAL_STONE
	goto BPShop_HeldItem
	return

Aldeleaf_BPShop_ChooseHoldItem_10:
	call BPShop_ClerkGoodbye
	return

Aldeleaf_BPShop_ChooseHoldItem_11:
	call BPShop_ClerkGoodbye
	return


Aldeleaf_BPShop_MoveTutor::
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_4
	setvar VAR_TEMP_5, 4
	goto BPShop_MoveTutor
	return


Aldeleaf_BPShop_ChooseTutorMove::
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_4
	call MoveTutorSetup
	switch VAR_RESULT
	case 0, Aldeleaf_BPShop_ChooseTutorMove_3
	case 1, Aldeleaf_BPShop_ChooseTutorMove_4
	case 2, Aldeleaf_BPShop_ChooseTutorMove_5
	case 3, Aldeleaf_BPShop_ChooseTutorMove_6
	case 4, Aldeleaf_BPShop_ChooseTutorMove_7
	case 5, Aldeleaf_BPShop_ChooseTutorMove_8
	case 6, Aldeleaf_BPShop_ChooseTutorMove_9
	case 7, Aldeleaf_BPShop_ChooseTutorMove_10
	case 8, Aldeleaf_BPShop_ChooseTutorMove_11
	case 9, Aldeleaf_BPShop_ChooseTutorMove_12
	case 10, Aldeleaf_BPShop_ChooseTutorMove_13
	case MULTI_B_PRESSED, Aldeleaf_BPShop_ChooseTutorMove_14
Aldeleaf_BPShop_ChooseTutorMove_1:
	end

Aldeleaf_BPShop_ChooseTutorMove_3:
	setvar VAR_0x8008, 6
	setvar VAR_0x8005, MOVE_DRILL_RUN
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_4:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_BOUNCE
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_5:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_6:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_7:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_8:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MAGNET_RISE
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_9:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MAGIC_COAT
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_10:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_11:
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_SKILL_SWAP
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_12:
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto BPShop_ConfirmMoveSelection
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_13:
	call BPShop_ExitTutorMoveSelect
	goto Aldeleaf_BPShop_ChooseTutorMove_1

Aldeleaf_BPShop_ChooseTutorMove_14:
	call BPShop_ExitTutorMoveSelect
	goto Aldeleaf_BPShop_ChooseTutorMove_1


BPShop_ClerkWelcome::
	msgbox BPShop_BuySomething, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return


BPShop_ClerkGoodbye::
	msgbox BPShop_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


BPShop_HoldItemClerk::
	lock
	faceplayer
	call BPShop_ClerkWelcome
	switch VAR_TEMP_3
	case 2, BPShop_HoldItemClerk_3
	case 3, BPShop_HoldItemClerk_4
	case 4, BPShop_HoldItemClerk_5
	case 5, BPShop_HoldItemClerk_6
	case 6, BPShop_HoldItemClerk_7
BPShop_HoldItemClerk_1:
	end

BPShop_HoldItemClerk_3:
	goto Coralgrove_BPShop_ChooseHoldItem
	goto BPShop_HoldItemClerk_1

BPShop_HoldItemClerk_4:
	goto Aldeleaf_BPShop_ChooseHoldItem
	goto BPShop_HoldItemClerk_1

BPShop_HoldItemClerk_5:
	goto Shoreslate_BPShop_ChooseHoldItem
	goto BPShop_HoldItemClerk_1

BPShop_HoldItemClerk_6:
	goto Kaolisle_BPShop_ChooseHoldItem
	goto BPShop_HoldItemClerk_1

BPShop_HoldItemClerk_7:
	goto Sandstone_BPShop_ChooseHoldItem
	goto BPShop_HoldItemClerk_1


BPShop_SetupHoldItem::
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	return


BPShop_HeldItem::
	bufferitemname STR_VAR_3, VAR_0x8009
	msgbox BPShop_HeldItemText, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BPShop_HeldItem_2
BPShop_HeldItem_1:
	goto BPShop_TryPurchasePrize
	end

BPShop_HeldItem_2:
	switch VAR_TEMP_3
	case 2, BPShop_HeldItem_5
	case 3, BPShop_HeldItem_6
	case 4, BPShop_HeldItem_7
	case 5, BPShop_HeldItem_8
	case 6, BPShop_HeldItem_9
	goto BPShop_HeldItem_1

BPShop_HeldItem_5:
	goto Coralgrove_BPShop_ChooseHoldItem
	goto BPShop_HeldItem_1

BPShop_HeldItem_6:
	goto Aldeleaf_BPShop_ChooseHoldItem
	goto BPShop_HeldItem_1

BPShop_HeldItem_7:
	goto Shoreslate_BPShop_ChooseHoldItem
	goto BPShop_HeldItem_1

BPShop_HeldItem_8:
	goto Kaolisle_BPShop_ChooseHoldItem
	goto BPShop_HeldItem_1

BPShop_HeldItem_9:
	goto Sandstone_BPShop_ChooseHoldItem
	goto BPShop_HeldItem_1


BPShop_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BPShop_TryGiveItem
	msgbox BPShop_NotEnoughPoints, MSGBOX_DEFAULT
	switch VAR_TEMP_3
	case 2, BPShop_TryPurchasePrize_3
	case 3, BPShop_TryPurchasePrize_4
	case 4, BPShop_TryPurchasePrize_5
	case 5, BPShop_TryPurchasePrize_6
	case 6, BPShop_TryPurchasePrize_7
BPShop_TryPurchasePrize_1:
	end

BPShop_TryPurchasePrize_3:
	goto Coralgrove_BPShop_ChooseHoldItem
	goto BPShop_TryPurchasePrize_1

BPShop_TryPurchasePrize_4:
	goto Aldeleaf_BPShop_ChooseHoldItem
	goto BPShop_TryPurchasePrize_1

BPShop_TryPurchasePrize_5:
	goto Shoreslate_BPShop_ChooseHoldItem
	goto BPShop_TryPurchasePrize_1

BPShop_TryPurchasePrize_6:
	goto Kaolisle_BPShop_ChooseHoldItem
	goto BPShop_TryPurchasePrize_1

BPShop_TryPurchasePrize_7:
	goto Sandstone_BPShop_ChooseHoldItem
	goto BPShop_TryPurchasePrize_1


BPShop_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BPShop_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BPShop_HereIsYourItem, MSGBOX_DEFAULT
	switch VAR_TEMP_3
	case 2, BPShop_TryGiveItem_3
	case 3, BPShop_TryGiveItem_4
	case 4, BPShop_TryGiveItem_5
	case 5, BPShop_TryGiveItem_6
	case 6, BPShop_TryGiveItem_7
BPShop_TryGiveItem_1:
	end

BPShop_TryGiveItem_3:
	goto Coralgrove_BPShop_ChooseHoldItem
	goto BPShop_TryGiveItem_1

BPShop_TryGiveItem_4:
	goto Aldeleaf_BPShop_ChooseHoldItem
	goto BPShop_TryGiveItem_1

BPShop_TryGiveItem_5:
	goto Shoreslate_BPShop_ChooseHoldItem
	goto BPShop_TryGiveItem_1

BPShop_TryGiveItem_6:
	goto Kaolisle_BPShop_ChooseHoldItem
	goto BPShop_TryGiveItem_1

BPShop_TryGiveItem_7:
	goto Sandstone_BPShop_ChooseHoldItem
	goto BPShop_TryGiveItem_1


BPShop_BagFull::
	msgbox BPShop_NotEnoughRoom, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


SetCorrectBpShop::
	switch VAR_TEMP_5
	case 3, SetCorrectBpShop_2
	case 4, SetCorrectBpShop_3
	case 5, SetCorrectBpShop_4
	case 6, SetCorrectBpShop_5
	case 7, SetCorrectBpShop_6
	return

SetCorrectBpShop_2:
	goto Coralgrove_BPShop_ChooseTutorMove
	return

SetCorrectBpShop_3:
	goto Aldeleaf_BPShop_ChooseTutorMove
	return

SetCorrectBpShop_4:
	goto Shoreslate_BPShop_ChooseTutorMove
	return

SetCorrectBpShop_5:
	goto Kaolisle_BPShop_ChooseTutorMove
	return

SetCorrectBpShop_6:
	goto Sandstone_BPShop_ChooseTutorMove
	return


BPShop_MoveTutor::
	lock
	faceplayer
	goto_if_set FLAG_MET_MOVE_TUTOR, BPShop_MoveTutor_2
	msgbox BPShop_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_MOVE_TUTOR
BPShop_MoveTutor_1:
	call SetCorrectBpShop
	end

BPShop_MoveTutor_2:
	msgbox BPShop_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto BPShop_MoveTutor_1


MoveTutorSetup::
	msgbox BPShop_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	return


BPShop_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox BPShop_Text_MoveWillBeXBP, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BPShop_ConfirmMoveSelection_2
BPShop_ConfirmMoveSelection_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BPShop_TeachTutorMove
	msgbox BPShop_Text_NotEnoughPoints, MSGBOX_DEFAULT
	call SetCorrectBpShop
	end

BPShop_ConfirmMoveSelection_2:
	call SetCorrectBpShop
	goto BPShop_ConfirmMoveSelection_1


BPShop_TeachTutorMove::
	msgbox BPShop_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, FALSE
	goto_if_eq BPShop_TeachTutorMove_2
BPShop_TeachTutorMove_1:
	msgbox BPShop_Text_ComeAgain, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

BPShop_TeachTutorMove_2:
	call SetCorrectBpShop
	goto BPShop_TeachTutorMove_1


BPShop_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BPShop_Text_YouDontWantTo, MSGBOX_DEFAULT
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

Aldeleaf_BPShop_Text_IcyWindDesc::
	.string "A chilling attack\n"
	.string "that lowers the\n"
	.string "foe's Speed.$"

BPShop_NotEnoughRoom::
	.string "I'm so sorry…\nYou don't have space to hold it…$"

BPShop_HereIsYourItem::
	.string "Here is your item!$"

BPShop_NotEnoughPoints::
	.string "I'm so sorry…\nYou don't have enough Battle Points…$"

BPShop_ThankYouVisitWithPoints::
	.string "Thank you very much.\pPlease visit us when you have\nsaved up Battle Points.$"

BPShop_BuySomething::
	.string "Welcome to the BP shop.\pHere's a list of this store's\npurchasable items.$"

BPShop_HeldItemText::
	.string "You've chosen the {STR_VAR_3}.\nIs that correct?$"

BPShop_Text_TutorIntro::
	.string "Welcome to the BP shop.\p"
	.string "I can train your Pokémon moves\n"
	.string "in exchange for BP.$"

BPShop_Text_TutorWelcomeBack::
	.string "Welcome to the BP shop.\n"
	.string "I am this shop's move tutor.$"

BPShop_Text_TeachWhichMove::
	.string "Which move would you like to choose?$"

BPShop_Text_MoveWillBeXBP::
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points.$"

BPShop_Text_TeachMoveToWhichMon::
	.string "Which Pokémon would you like to teach\n"
	.string "this move?$"

BPShop_Text_NotEnoughPoints::
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

BPShop_Text_ComeAgain::
	.string "Please come again.$"

BPShop_Text_YouDontWantTo::
	.string "Let me know if you change your mind.$"
