PokemonWorldTournament_MapScripts::
	.byte 0


# 3 "data/maps/PokemonWorldTournament/scripts.pory"
@hasMoveTutor

BP_Mart_MoveTutor::
# 7 "data/maps/PokemonWorldTournament/scripts.pory"
	lock
# 8 "data/maps/PokemonWorldTournament/scripts.pory"
	faceplayer
# 9 "data/maps/PokemonWorldTournament/scripts.pory"
	message BP_Mart_Greetings
# 10 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 11 "data/maps/PokemonWorldTournament/scripts.pory"
	bpmart BP_Mart_Moves, TRUE
# 12 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BP_Mart_MoveTutor_2
# 16 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox IllTakeYourBPNow
BP_Mart_MoveTutor_1:
# 18 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return

BP_Mart_MoveTutor_2:
# 13 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PleaseSaveSomeBp
	goto BP_Mart_MoveTutor_1


	.align 2
# 43 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Moves:
# 44 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_THUNDER_PUNCH
# 45 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_FIRE_PUNCH
# 46 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_ICE_PUNCH
# 47 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_DRAIN_PUNCH
# 48 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_KNOCK_OFF
# 49 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_SUPER_FANG
# 50 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_DUAL_CHOP
# 51 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_ENDEAVOR
# 52 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

BP_Mart_ItemShop::
# 56 "data/maps/PokemonWorldTournament/scripts.pory"
	lock
# 57 "data/maps/PokemonWorldTournament/scripts.pory"
	faceplayer
# 58 "data/maps/PokemonWorldTournament/scripts.pory"
	message BP_Mart_Greetings2
# 59 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 60 "data/maps/PokemonWorldTournament/scripts.pory"
	bpmart BP_Mart_Items, FALSE
# 61 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PleaseSaveSomeBp
# 62 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return


	.align 2
# 65 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Items:
# 66 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 67 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 68 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_IRON_BALL
# 69 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_RING_TARGET
# 70 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 71 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 72 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_POWER_HERB
# 73 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 74 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 75 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_RED_CARD
# 76 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_NONE

TestDir::
# 81 "data/maps/PokemonWorldTournament/scripts.pory"
	lock
# 82 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_FACING
# 83 "data/maps/PokemonWorldTournament/scripts.pory"
	case DIR_NORTH, TestDir_3
# 85 "data/maps/PokemonWorldTournament/scripts.pory"
	case DIR_WEST, TestDir_4
# 87 "data/maps/PokemonWorldTournament/scripts.pory"
	case DIR_EAST, TestDir_5
# 89 "data/maps/PokemonWorldTournament/scripts.pory"
	case DIR_SOUTH, TestDir_6
TestDir_1:
# 92 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return

TestDir_3:
# 84 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox TestDir_Text_0
	goto TestDir_1

TestDir_4:
# 86 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox TestDir_Text_1
	goto TestDir_1

TestDir_5:
# 88 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox TestDir_Text_2
	goto TestDir_1

TestDir_6:
# 90 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox TestDir_Text_3
	goto TestDir_1


DebugGuy::
# 141 "data/maps/PokemonWorldTournament/scripts.pory"
	lock
# 142 "data/maps/PokemonWorldTournament/scripts.pory"
	faceplayer
# 143 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox EnableMoveInfo, MSGBOX_YESNO
# 144 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DebugGuy_2
# 151 "data/maps/PokemonWorldTournament/scripts.pory"
	setflag FLAG_TEMP_1
# 152 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox EnableContestInfo, MSGBOX_YESNO
# 153 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DebugGuy_5
# 159 "data/maps/PokemonWorldTournament/scripts.pory"
	setflag FLAG_TEMP_2
# 160 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox EverythingEnabled
# 161 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return

DebugGuy_2:
# 145 "data/maps/PokemonWorldTournament/scripts.pory"
	clearflag FLAG_TEMP_1
# 146 "data/maps/PokemonWorldTournament/scripts.pory"
	clearflag FLAG_TEMP_2
# 147 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox BasicMenu
# 148 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	end

DebugGuy_5:
# 154 "data/maps/PokemonWorldTournament/scripts.pory"
	clearflag FLAG_TEMP_2
# 155 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox MoveInfoEnabled
# 156 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	end


TestDir_Text_0:
# 84 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "facing north$"

TestDir_Text_1:
# 86 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "facing west$"

TestDir_Text_2:
# 88 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "facing east$"

TestDir_Text_3:
# 90 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "facing south$"

IllTakeYourBPNow::
# 21 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "I'll be taking your BP now.$"

BP_Mart_Greetings::
# 25 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "We got the moves,\n"
	.string "we got the groove.$"

BP_Mart_Greetings2::
# 30 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some exquisite items?$"

PleaseSaveSomeBp::
# 38 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Please save some BP\n"
	.string "and come see us again.$"

EnableMoveInfo::
# 164 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Enable move info window?$"

BasicMenu::
# 167 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Move Tutor set to default.$"

EnableContestInfo::
# 170 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Enable contest move info?$"

MoveInfoEnabled::
# 173 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Move Tutor set to show\n"
	.string "basic move info.$"

EverythingEnabled::
# 177 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Move Tutor set to show\n"
	.string "all move info.$"
