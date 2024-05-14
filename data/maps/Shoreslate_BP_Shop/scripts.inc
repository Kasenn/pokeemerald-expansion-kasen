@ special ChooseMonForMoveTutor

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
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK4
	setvar VAR_TEMP_3, 4
	goto BPShop_HoldItemClerk
	return


Shoreslate_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR4
	call BPShop_SetupHoldItem
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
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_3:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_QUICK_CLAW
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_4:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_SOOTHE_BELL
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_5:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_SCOPE_LENS
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_6:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_SHELL_BELL
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_7:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_MUSCLE_BAND
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_8:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_WISE_GLASSES
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_9:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_WIDE_LENS
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_10:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_ZOOM_LENS
	goto BPShop_HeldItem
	return

Shoreslate_BPShop_ChooseHoldItem_11:
	call BPShop_ClerkGoodbye
	return

Shoreslate_BPShop_ChooseHoldItem_12:
	call BPShop_ClerkGoodbye
	return


Shoreslate_BPShop_MoveTutor::
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_5
	setvar VAR_TEMP_5, 5
	goto BPShop_MoveTutor
	return


Shoreslate_BPShop_ChooseTutorMove::
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_5
	call MoveTutorSetup
	switch VAR_RESULT
	case 0, Shoreslate_BPShop_ChooseTutorMove_3
	case 1, Shoreslate_BPShop_ChooseTutorMove_4
	case 2, Shoreslate_BPShop_ChooseTutorMove_5
	case 3, Shoreslate_BPShop_ChooseTutorMove_6
	case 4, Shoreslate_BPShop_ChooseTutorMove_7
	case 5, Shoreslate_BPShop_ChooseTutorMove_8
	case 6, Shoreslate_BPShop_ChooseTutorMove_9
	case 7, Shoreslate_BPShop_ChooseTutorMove_10
	case 8, Shoreslate_BPShop_ChooseTutorMove_11
	case 9, Shoreslate_BPShop_ChooseTutorMove_12
	case 10, Shoreslate_BPShop_ChooseTutorMove_13
	case MULTI_B_PRESSED, Shoreslate_BPShop_ChooseTutorMove_14
Shoreslate_BPShop_ChooseTutorMove_1:
	end

Shoreslate_BPShop_ChooseTutorMove_3:
	setvar VAR_0x8008, 6
	setvar VAR_0x8005, MOVE_WATER_PULSE
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_4:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_5:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MAGIC_ROOM
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_6:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_MUD_SLAP
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_7:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_SWIFT
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_8:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_FOUL_PLAY
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_9:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_GUNK_SHOT
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_10:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_TRICK
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_11:
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_ANCIENT_POWER
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_12:
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
	goto BPShop_ConfirmMoveSelection
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_13:
	call BPShop_ExitTutorMoveSelect
	goto Shoreslate_BPShop_ChooseTutorMove_1

Shoreslate_BPShop_ChooseTutorMove_14:
	call BPShop_ExitTutorMoveSelect
	goto Shoreslate_BPShop_ChooseTutorMove_1


ShoreslateShop_Man_Text::
	.string "Hey, want to hear a secret?$"

ShoreslateShop_Man_TextContinued::
	.string "There are certain type of trainers who\n"
	.string "are colloquially known as\l"
	.string "“Pokémon enthusiasts.”\p"
	.string "These people absolutely love Pokémon\n"
	.string "battles and often times even demand\l"
	.string "rematches if you happen to cross their\l"
	.string "path more than once.\p"
	.string "If you ever find yourself short on\n"
	.string "Battle Points, consider challenging\l"
	.string "one of these enthusiasts.$"

ShoreslateShop_OldMan_Text::
	.string "I don't understand what half of these\n"
	.string "items even do…$"

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
