PokemonWorldTournament_MapScripts::
	.byte 0


@hasMoveTutor

BP_Mart_MoveTutor::
	lock
	faceplayer
	message BP_Mart_Greetings
	waitmessage
	bpmart BP_Mart_Moves, TRUE
	compare VAR_RESULT, FALSE
	goto_if_eq BP_Mart_MoveTutor_2
	msgbox IllTakeYourBPNow
BP_Mart_MoveTutor_1:
	release
	return

BP_Mart_MoveTutor_2:
	msgbox PleaseSaveSomeBp
	goto BP_Mart_MoveTutor_1


	.align 2
BP_Mart_Moves:
	.2byte MOVE_THUNDER_PUNCH
	.2byte MOVE_FIRE_PUNCH
	.2byte MOVE_ICE_PUNCH
	.2byte MOVE_DRAIN_PUNCH
	.2byte MOVE_KNOCK_OFF
	.2byte MOVE_SUPER_FANG
	.2byte MOVE_DUAL_CHOP
	.2byte MOVE_ENDEAVOR
	.2byte MOVE_NONE
	.2byte ITEM_NONE

BP_Mart_ItemShop::
	lock
	faceplayer
	message BP_Mart_Greetings2
	waitmessage
	bpmart BP_Mart_Items, FALSE
	msgbox PleaseSaveSomeBp
	release
	return


	.align 2
BP_Mart_Items:
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_IRON_BALL
	.2byte ITEM_RING_TARGET
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_RED_CARD
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_NONE

TestDir::
	lock
	switch VAR_FACING
	case DIR_NORTH, TestDir_3
	case DIR_WEST, TestDir_4
	case DIR_EAST, TestDir_5
	case DIR_SOUTH, TestDir_6
TestDir_1:
	release
	return

TestDir_3:
	msgbox TestDir_Text_0
	goto TestDir_1

TestDir_4:
	msgbox TestDir_Text_1
	goto TestDir_1

TestDir_5:
	msgbox TestDir_Text_2
	goto TestDir_1

TestDir_6:
	msgbox TestDir_Text_3
	goto TestDir_1


DebugGuy::
	lock
	faceplayer
	msgbox EnableMoveInfo, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DebugGuy_2
	setflag FLAG_TEMP_1
	msgbox EnableContestInfo, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DebugGuy_5
	setflag FLAG_TEMP_2
	msgbox EverythingEnabled
	release
	return

DebugGuy_2:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	msgbox BasicMenu
	release
	end

DebugGuy_5:
	clearflag FLAG_TEMP_2
	msgbox MoveInfoEnabled
	release
	end


TestDir_Text_0:
	.string "facing north$"

TestDir_Text_1:
	.string "facing west$"

TestDir_Text_2:
	.string "facing east$"

TestDir_Text_3:
	.string "facing south$"

IllTakeYourBPNow::
	.string "I'll be taking your BP now.$"

BP_Mart_Greetings::
	.string "We got the moves,\n"
	.string "we got the groove.$"

BP_Mart_Greetings2::
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some exquisite items?$"

PleaseSaveSomeBp::
	.string "Please save some BP\n"
	.string "and come see us again.$"

EnableMoveInfo::
	.string "Enable move info window?$"

BasicMenu::
	.string "Move Tutor set to default.$"

EnableContestInfo::
	.string "Enable contest move info?$"

MoveInfoEnabled::
	.string "Move Tutor set to show\n"
	.string "basic move info.$"

EverythingEnabled::
	.string "Move Tutor set to show\n"
	.string "all move info.$"
