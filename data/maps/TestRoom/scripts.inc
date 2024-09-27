TestRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetTestFlag
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 1, TestMovementScript
	.2byte 0


SetTestFlag::
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	return


TestMovementScript::
	safefollow
	buffernumberstring STR_VAR_1, VAR_TEMP_0
	compare VAR_TEMP_0, 0
	goto_if_eq TestMovementScript_2
	msgbox TestMovementScript_Text_1, MSGBOX_NPC
TestMovementScript_1:
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Up
	waitmovement 0
	addvar VAR_TEMP_0, 1
	release
	return

TestMovementScript_2:
	msgbox TestMovementScript_Text_0, MSGBOX_NPC
	goto TestMovementScript_1


HideKrokorokOrPlayer::
	setflag FLAG_TEMP_3
	return


KrokorokPlayer::
	lock
	faceplayer
	msgbox ReturnKrokorok, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokPlayer_2
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setobjectxy 1, VAR_TEMP_0, VAR_TEMP_1
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
	clearflag FLAG_TEMP_1
	addobject 1
	switch VAR_FACING
	case DIR_NORTH, KrokorokPlayer_6
	case DIR_EAST, KrokorokPlayer_7
	case DIR_WEST, KrokorokPlayer_8
	case DIR_SOUTH, KrokorokPlayer_9
KrokorokPlayer_4:
	waitmovement 0
	setkrokorokdisguise
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
	waitmovement 0
	removeobject 2
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	callnative UpdateFollowingPokemon
	clearflag FLAG_SYS_USE_STRENGTH
	setflag FLAG_SYS_B_DASH
	delay 15
	release
	return

KrokorokPlayer_2:
	release
	end

KrokorokPlayer_6:
	turnobject 1, DIR_NORTH
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokPlayer_4

KrokorokPlayer_7:
	turnobject 1, DIR_EAST
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokPlayer_4

KrokorokPlayer_8:
	turnobject 1, DIR_WEST
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokPlayer_4

KrokorokPlayer_9:
	turnobject 1, DIR_SOUTH
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokPlayer_4


KrokorokScript::
	lock
	faceplayer
	msgbox SwitchToKrokorok, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokScript_2
	closemessage
	delay 15
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setobjectxy 2, VAR_TEMP_0, VAR_TEMP_1
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
	clearflag FLAG_TEMP_3
	addobject 2
	switch VAR_FACING
	case DIR_NORTH, KrokorokScript_6
	case DIR_EAST, KrokorokScript_7
	case DIR_WEST, KrokorokScript_8
	case DIR_SOUTH, KrokorokScript_9
KrokorokScript_4:
	switch VAR_FACING
	case DIR_NORTH, KrokorokScript_12
	case DIR_EAST, KrokorokScript_13
	case DIR_WEST, KrokorokScript_14
	case DIR_SOUTH, KrokorokScript_15
KrokorokScript_10:
	waitmovement 0
	setkrokorokdisguise
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
	waitmovement 0
	setflag FLAG_TEMP_HIDE_FOLLOWER
	callnative UpdateFollowingPokemon
	setflag FLAG_SYS_USE_STRENGTH
	removeobject 1
	clearflag FLAG_SYS_B_DASH
	delay 15
	release
	return

KrokorokScript_2:
	release
	end

KrokorokScript_6:
	turnobject 2, DIR_NORTH
	goto KrokorokScript_4

KrokorokScript_7:
	turnobject 2, DIR_EAST
	goto KrokorokScript_4

KrokorokScript_8:
	turnobject 2, DIR_WEST
	goto KrokorokScript_4

KrokorokScript_9:
	turnobject 2, DIR_SOUTH
	goto KrokorokScript_4

KrokorokScript_12:
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokScript_10

KrokorokScript_13:
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokScript_10

KrokorokScript_14:
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokScript_10

KrokorokScript_15:
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokScript_10


MovePlayerToKrokorokNorth:
	set_invisible
	walk_up
	walk_in_place_fast_down
	step_end

SetObjectVisible:
	set_visible
	step_end

MovePlayerToKrokorokEast:
	set_invisible
	walk_right
	walk_in_place_fast_left
	step_end

MovePlayerToKrokorokSouth:
	set_invisible
	walk_down
	walk_in_place_fast_up
	step_end

MovePlayerToKrokorokWest:
	set_invisible
	walk_left
	walk_in_place_fast_right
	step_end

TestTrigger1::
	setvar VAR_TEMP_2, 1
	goto MainReflectionTrigger
	return


TestTrigger2::
	setvar VAR_TEMP_2, 2
	goto MainReflectionTrigger
	return


TestTrigger3::
	setvar VAR_TEMP_2, 3
	goto MainReflectionTrigger
	return


TestTrigger4::
	setvar VAR_TEMP_2, 4
	goto MainReflectionTrigger
	return


TestTrigger5::
	setvar VAR_TEMP_2, 5
	goto MainReflectionTrigger
	return


TestTrigger6::
	setvar VAR_TEMP_2, 6
	goto MainReflectionTrigger
	return


TestTrigger7::
	setvar VAR_TEMP_2, 7
	goto MainReflectionTrigger
	return


TestTrigger8::
	setvar VAR_TEMP_2, 8
	goto MainReflectionTrigger
	return


TestTrigger9::
	setvar VAR_TEMP_2, 9
	goto MainReflectionTrigger
	return


TestTrigger10::
	setvar VAR_TEMP_2, 10
	goto MainReflectionTrigger
	return


TestTrigger11::
	setvar VAR_TEMP_2, 11
	goto MainReflectionTrigger
	return


MainReflectionTrigger::
	switch VAR_TEMP_2
	case 1, MainReflectionTrigger_3
	case 2, MainReflectionTrigger_4
	case 3, MainReflectionTrigger_5
	case 4, MainReflectionTrigger_6
	case 5, MainReflectionTrigger_7
	case 6, MainReflectionTrigger_8
	case 7, MainReflectionTrigger_9
	case 8, MainReflectionTrigger_10
	case 9, MainReflectionTrigger_11
	case 10, MainReflectionTrigger_12
	case 11, MainReflectionTrigger_13
MainReflectionTrigger_1:
	release
	end

MainReflectionTrigger_3:
	setobjectxy 37, 7, 16
	goto MainReflectionTrigger_1

MainReflectionTrigger_4:
	setobjectxy 37, 7, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_5:
	setobjectxy 37, 8, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_6:
	setobjectxy 37, 9, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_7:
	setobjectxy 37, 10, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_8:
	setobjectxy 37, 11, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_9:
	setobjectxy 37, 12, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_10:
	setobjectxy 37, 13, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_11:
	setobjectxy 37, 14, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_12:
	setobjectxy 37, 15, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_13:
	setobjectxy 37, 15, 16
	goto MainReflectionTrigger_1


TestMovementScript_Text_0:
	.string "0$"

TestMovementScript_Text_1:
	.string "{STR_VAR_1}$"

ReturnKrokorok::
	.string "Stop giving Krokorok orders?$"

SwitchToKrokorok::
	.string "The Krokorok looks at you\n"
	.string "expectantly.\p"
	.string "Start giving it orders?$"
