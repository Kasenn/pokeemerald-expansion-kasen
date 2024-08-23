PokemonWorldTournament_MapScripts::
	.byte 0


@hasMoveTutor

BP_Mart::
	lock
	faceplayer
	message BP_Mart_Greetings
	waitmessage
	bpmart BP_Mart_Moves, TRUE
	compare VAR_RESULT, FALSE
	goto_if_eq BP_Mart_2
	msgbox TakeYourBP
BP_Mart_1:
	release
	return

BP_Mart_2:
	msgbox PleaseSaveSomeBp
	goto BP_Mart_1


	.align 2
BP_Mart_Moves:
	.2byte MOVE_KARATE_CHOP
	.2byte MOVE_RAZOR_WIND
	.2byte MOVE_DOUBLE_KICK
	.2byte MOVE_HORN_DRILL
	.2byte MOVE_TACKLE
	.2byte MOVE_BODY_SLAM
	.2byte MOVE_DOUBLE_EDGE
	.2byte MOVE_ACID
	.2byte MOVE_AURORA_BEAM
	.2byte MOVE_RAZOR_LEAF
	.2byte MOVE_FISSURE
	.2byte MOVE_SMOG
	.2byte MOVE_SWIFT
	.2byte MOVE_CRABHAMMER
	.2byte MOVE_SLASH
	.2byte MOVE_AEROBLAST
	.2byte MOVE_MAGNITUDE
	.2byte MOVE_MEGAHORN
	.2byte MOVE_IRON_TAIL
	.2byte MOVE_CROSS_CHOP
	.2byte MOVE_RAIN_DANCE
	.2byte MOVE_SUNNY_DAY
	.2byte MOVE_ROCK_SMASH
	.2byte MOVE_FAKE_OUT
	.2byte MOVE_ARM_THRUST
	.2byte MOVE_ICE_BALL
	.2byte MOVE_POISON_FANG
	.2byte MOVE_METEOR_MASH
	.2byte MOVE_HEAD_SMASH
	.2byte MOVE_BIND
	.2byte MOVE_SNORE
	.2byte MOVE_WATER_PULSE
	.2byte MOVE_SHOCK_WAVE
	.2byte MOVE_BUG_BITE
	.2byte MOVE_COVET
	.2byte MOVE_LOW_KICK
	.2byte MOVE_SIGNAL_BEAM
	.2byte MOVE_GIGA_DRAIN
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

BP_Mart2::
	lock
	faceplayer
	message BP_Mart_Greetings2
	waitmessage
	bpmart BP_Mart_Items, FALSE
	msgbox gText_PleaseComeAgain
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
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_PROTECTIVE_PADS
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

TakeYourBP::
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
