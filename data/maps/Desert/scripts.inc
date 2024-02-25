Desert_MapScripts::
	.byte 0


DesertQuakesOn::
	setflag FLAG_DESERT_STEPS
	release
	end


DesertQuakesOff::
	clearflag FLAG_DESERT_STEPS
	release
	end


DesertEntrance::
	msgbox DesertEntrance_Text_0, MSGBOX_NPC
	end


Desert_RuinsFound::
	release
	random 200
	compare VAR_RESULT, 1
	goto_if_le Desert_RuinsFound_1
	release
	end

Desert_RuinsFound_1:
	goto Desert_TriggerEntrance
	return


Desert_TriggerEntrance::
	msgbox Desert_TriggerEntrance_Text_0, MSGBOX_DEFAULT
	closemessage
	release
	end


ScorchedDesert_TriggerQuakes::
	lockall
	random 9
	goto_if_set FLAG_DESERT_RUINS_OPENED, ScorchedDesert_TriggerQuakes_2
ScorchedDesert_TriggerQuakes_1:
	compare VAR_RESULT, 5
	goto_if_le ScorchedDesert_TriggerQuakes_5
ScorchedDesert_TriggerQuakes_4:
	releaseall
	end

ScorchedDesert_TriggerQuakes_2:
	random 30
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_5:
	addvar VAR_TEMP_DESERTRUINSFOUND, 1
	switch VAR_TEMP_DESERTRUINSFOUND
	case 1, ScorchedDesert_TriggerQuakes_8
	case 2, ScorchedDesert_TriggerQuakes_9
	case 3, ScorchedDesert_TriggerQuakes_10
	case 4, ScorchedDesert_TriggerQuakes_11
	case 5, ScorchedDesert_TriggerQuakes_12
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_8:
	message ScorchedDesert_TriggerQuakes_Text_0
	waitmessage
	playse SE_SWITCH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 6
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_9:
	message ScorchedDesert_TriggerQuakes_Text_1
	waitmessage
	playse SE_SWITCH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 10
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_10:
	message ScorchedDesert_TriggerQuakes_Text_2
	waitmessage
	playse SE_M_STRENGTH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 14
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_11:
	message ScorchedDesert_TriggerQuakes_Text_3
	waitmessage
	playse SE_M_STRENGTH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 20
	setvar VAR_0x8007, 4
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_12:
	message ScorchedDesert_TriggerQuakes_Text_4
	waitmessage
	playse SE_M_EARTHQUAKE
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 30
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	waitse
	delay 30
	closemessage
	delay 10
	playse SE_SWITCH
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	setmetatile VAR_TEMP_1, VAR_TEMP_2, 0x3DF, FALSE
	setobjectxy OBJ_EVENT_ID_PLAYER, VAR_TEMP_1, VAR_TEMP_2
	special DrawWholeMapView
	goto ScorchedDesert_FallThroughFloor
	goto ScorchedDesert_TriggerQuakes_4


SpawnHoleOnPlayer::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	setmetatile VAR_TEMP_1, VAR_TEMP_2, 0x3DF, FALSE
	setobjectxy OBJ_EVENT_ID_PLAYER, VAR_TEMP_1, VAR_TEMP_2
	special DrawWholeMapView
	end


ScorchedDesert_FallThroughFloor::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedDesert_FallThroughFloorMovement
	waitmovement 0
	playse SE_FALL
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_16
ScorchedDesert_FallThroughFloor_14:
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_13
ScorchedDesert_FallThroughFloor_11:
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_10
ScorchedDesert_FallThroughFloor_8:
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_7
ScorchedDesert_FallThroughFloor_6:
	msgbox ScorchedDesert_FallThroughFloor_Text_0
ScorchedDesert_FallThroughFloor_1:
	waitstate
	end

ScorchedDesert_FallThroughFloor_2:
	warpholexy MAP_UNDERGROUND_RUINS, 5, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_3:
	warpholexy MAP_UNDERGROUND_RUINS, 79, 57
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_4:
	warpholexy MAP_UNDERGROUND_RUINS, 24, 63
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_5:
	warpholexy MAP_UNDERGROUND_RUINS, 73, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_7:
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_5
	goto ScorchedDesert_FallThroughFloor_6

ScorchedDesert_FallThroughFloor_10:
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_4
	goto ScorchedDesert_FallThroughFloor_8

ScorchedDesert_FallThroughFloor_13:
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_3
	goto ScorchedDesert_FallThroughFloor_11

ScorchedDesert_FallThroughFloor_16:
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_2
	goto ScorchedDesert_FallThroughFloor_14


ScorchedDesert_FallThroughFloorMovement:
	set_invisible
	step_end

printplayercoords::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	buffernumberstring STR_VAR_2, VAR_TEMP_2
	msgbox printplayercoords_Text_0, MSGBOX_NPC
	return


DesertEntrance_Text_0:
	.string "This place is still work in progress.\n"
	.string "You're free to explore, though there's\l"
	.string "no trainers here and even the terrain\l"
	.string "is still under construction in places.\p"
	.string "Wild encounters should be working.$"

Desert_TriggerEntrance_Text_0:
	.string "triggered$"

ScorchedDesert_TriggerQuakes_Text_0:
	.string "You can feel the ground\nshaking slightly.$"

ScorchedDesert_TriggerQuakes_Text_1:
	.string "The shaking seems to be growing\nin magnitude.$"

ScorchedDesert_TriggerQuakes_Text_2:
	.string "You notice the sand shifting below\nyour feet as the shaking continues.$"

ScorchedDesert_TriggerQuakes_Text_3:
	.string "The shaking seems to be intensifying.$"

ScorchedDesert_TriggerQuakes_Text_4:
	.string "It's an earthquake!$"

ScorchedDesert_FallThroughFloor_Text_0:
	.string "something borked$"

printplayercoords_Text_0:
	.string "{STR_VAR_1},{STR_VAR_2}$"
