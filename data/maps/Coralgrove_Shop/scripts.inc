Coralgrove_Shop_MapScripts::
	.byte 0


CGShop_Lass::
	msgbox CGShop_Lass_Text_0, MSGBOX_NPC
	end


CGShop_Fisher::
	msgbox CGShop_Fisher_Text_0, MSGBOX_NPC
	end


Coralgrove_BPShop_HoldItemClerk::
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK2
	setvar VAR_TEMP_3, 2
	goto BPShop_HoldItemClerk
	return


Coralgrove_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR2
	call BPShop_SetupHoldItem
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
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MIRACLE_SEED
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_3:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_CHARCOAL
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_4:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MYSTIC_WATER
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_5:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_SILK_SCARF
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_6:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_SHARP_BEAK
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_7:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_BLACK_BELT
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_8:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_HARD_STONE
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_9:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MAGNET
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_10:
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_POISON_BARB
	goto BPShop_HeldItem
	return

Coralgrove_BPShop_ChooseHoldItem_11:
	call BPShop_ClerkGoodbye
	return

Coralgrove_BPShop_ChooseHoldItem_12:
	call BPShop_ClerkGoodbye
	return


Coralgrove_BPShop_MoveTutor::
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_TEMP_5, 3
	goto BPShop_MoveTutor
	return


Coralgrove_BPShop_ChooseTutorMove::
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	call MoveTutorSetup
	switch VAR_RESULT
	case 0, Coralgrove_BPShop_ChooseTutorMove_3
	case 1, Coralgrove_BPShop_ChooseTutorMove_4
	case 2, Coralgrove_BPShop_ChooseTutorMove_5
	case 3, Coralgrove_BPShop_ChooseTutorMove_6
	case 4, Coralgrove_BPShop_ChooseTutorMove_7
	case 5, Coralgrove_BPShop_ChooseTutorMove_8
	case 6, Coralgrove_BPShop_ChooseTutorMove_9
	case 7, Coralgrove_BPShop_ChooseTutorMove_10
	case 8, Coralgrove_BPShop_ChooseTutorMove_11
	case 9, Coralgrove_BPShop_ChooseTutorMove_12
	case 10, Coralgrove_BPShop_ChooseTutorMove_13
	case MULTI_B_PRESSED, Coralgrove_BPShop_ChooseTutorMove_14
Coralgrove_BPShop_ChooseTutorMove_1:
	end

Coralgrove_BPShop_ChooseTutorMove_3:
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_SNORE
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_4:
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_BIND
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_5:
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_6:
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_7:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_8:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_ELECTROWEB
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_9:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_DEFOG
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_10:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_11:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_12:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_RECYCLE
	goto BPShop_ConfirmMoveSelection
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_13:
	call BPShop_ExitTutorMoveSelect
	goto Coralgrove_BPShop_ChooseTutorMove_1

Coralgrove_BPShop_ChooseTutorMove_14:
	call BPShop_ExitTutorMoveSelect
	goto Coralgrove_BPShop_ChooseTutorMove_1


CGShop_Lass_Text_0:
	.string "So much cool stuff to buy!\pI don't even know what I'm\ngoing to get first!$"

CGShop_Fisher_Text_0:
	.string "Wish I could afford this Mystic Water…$"

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

Coralgrove_BPShop_Text_HelpingHandDesc::
	.string "Boosts the power\n"
	.string "of an ally's\n"
	.string "attack.$"

Coralgrove_BPShop_Text_RecycleDesc::
	.string "Recycles a used\n"
	.string "held item.$"
