SerpentCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SerpentCaveLayout
	map_script MAP_SCRIPT_ON_LOAD, SerpentCaveSetWaterfall
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SerpentCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SerpentCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_NOT_ENTERED, IrisGoodbye
	.2byte 0


SerpentCaveLayout::
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_INTRO
	goto_if_ge SerpentCaveLayout_2
SerpentCaveLayout_1:
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_NOT_ENTERED
	goto_if_eq SerpentCaveLayout_5
SerpentCaveLayout_4:
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_8
	switch VAR_SERPENTCAVE_WATER_LEVEL
	case 0, SerpentCaveLayout_9
	case 1, SerpentCaveLayout_10
	case 11, SerpentCaveLayout_10
	case 2, SerpentCaveLayout_11
	case 12, SerpentCaveLayout_11
	case 3, SerpentCaveLayout_12
	case 13, SerpentCaveLayout_12
	case 4, SerpentCaveLayout_13
	case 14, SerpentCaveLayout_13
SerpentCaveLayout_7:
	goto_if_set FLAG_SERPENTCAVE_BOULDER_1, SerpentCaveLayout_21
SerpentCaveLayout_20:
	goto_if_set FLAG_SERPENTCAVE_BOULDER_2, SerpentCaveLayout_24
SerpentCaveLayout_23:
	goto_if_set FLAG_SERPENTCAVE_BOULDER_3, SerpentCaveLayout_27
SerpentCaveLayout_26:
	goto_if_set FLAG_SERPENTCAVE_BOULDER_4, SerpentCaveLayout_29
	return

SerpentCaveLayout_2:
	setflag FLAG_TEMP_B
	goto SerpentCaveLayout_1

SerpentCaveLayout_5:
	setflag FLAG_HIDE_MAP_NAME_POPUP
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 27, SerpentCaveLayout_15
	case 57, SerpentCaveLayout_16
	case 83, SerpentCaveLayout_17
	case 113, SerpentCaveLayout_18
	case 138, SerpentCaveLayout_19
	goto SerpentCaveLayout_4

SerpentCaveLayout_9:
	setmaplayoutindex LAYOUT_SERPENT_CAVE_0_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_10:
	setmaplayoutindex LAYOUT_SERPENT_CAVE_1_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_11:
	setmaplayoutindex LAYOUT_SERPENT_CAVE_2_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_12:
	setmaplayoutindex LAYOUT_SERPENT_CAVE_3_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_13:
	setmaplayoutindex LAYOUT_SERPENT_CAVE
	goto SerpentCaveLayout_7

SerpentCaveLayout_15:
	setvar VAR_TEMP_1, 0
	setobjectxyperm 31, 27, 6
	setobjectxyperm 32, 27, 5
	setobjectxyperm 33, 27, 5
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
	goto SerpentCaveLayout_4

SerpentCaveLayout_16:
	setvar VAR_TEMP_1, 1
	setobjectxyperm 31, 57, 32
	setobjectxyperm 32, 57, 35
	setobjectxyperm 33, 57, 35
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_DOWN
	goto SerpentCaveLayout_4

SerpentCaveLayout_17:
	setvar VAR_TEMP_1, 2
	goto SerpentCaveLayout_4

SerpentCaveLayout_18:
	setvar VAR_TEMP_1, 3
	setobjectxyperm 31, 113, 30
	setobjectxyperm 32, 113, 32
	setobjectxyperm 33, 113, 32
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_DOWN
	goto SerpentCaveLayout_4

SerpentCaveLayout_19:
	setvar VAR_TEMP_1, 4
	setobjectxyperm 31, 138, 29
	setobjectxyperm 32, 138, 31
	setobjectxyperm 33, 138, 31
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_DOWN
	goto SerpentCaveLayout_4

SerpentCaveLayout_21:
	setflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	goto SerpentCaveLayout_20

SerpentCaveLayout_24:
	setflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	goto SerpentCaveLayout_23

SerpentCaveLayout_27:
	setflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	goto SerpentCaveLayout_26

SerpentCaveLayout_29:
	setflag FLAG_TEMP_7
	clearflag FLAG_TEMP_8
	return


SerpentCaveSetWaterfall::
	setflag FLAG_TEMP_A
	goto_if_set FLAG_SERPENTCAVE_BOULDER_1, SerpentCaveSetWaterfall_2
SerpentCaveSetWaterfall_1:
	goto_if_set FLAG_SERPENTCAVE_BOULDER_2, SerpentCaveSetWaterfall_5
SerpentCaveSetWaterfall_4:
	goto_if_set FLAG_SERPENTCAVE_BOULDER_3, SerpentCaveSetWaterfall_10
SerpentCaveSetWaterfall_9:
	goto_if_set FLAG_SERPENTCAVE_BOULDER_4, SerpentCaveSetWaterfall_14
	return

SerpentCaveSetWaterfall_2:
	setmetatile 30, 3, 0x2B6, TRUE
	setmetatile 31, 3, 0x2B7, TRUE
	setmetatile 30, 4, 0x2C8, TRUE
	setmetatile 31, 4, 0x2C9, TRUE
	setmetatile 30, 5, 0x2C8, TRUE
	setmetatile 31, 5, 0x2C9, TRUE
	setmetatile 30, 6, 0x2C8, TRUE
	setmetatile 31, 6, 0x2C9, TRUE
	setmetatile 30, 7, 0x2C8, TRUE
	setmetatile 31, 7, 0x2C9, TRUE
	setmetatile 30, 8, 0x2D0, TRUE
	setmetatile 31, 8, 0x2D1, TRUE
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_7
	goto SerpentCaveSetWaterfall_1

SerpentCaveSetWaterfall_5:
	setmetatile 54, 36, 0x2CC, TRUE
	setmetatile 55, 36, 0x2CD, TRUE
	setmetatile 54, 35, 0x2C4, TRUE
	setmetatile 55, 35, 0x2C5, TRUE
	setmetatile 54, 34, 0x2C4, TRUE
	setmetatile 55, 34, 0x2C5, TRUE
	setmetatile 54, 33, 0x2C4, TRUE
	setmetatile 55, 33, 0x2C5, TRUE
	setmetatile 54, 32, 0x2BC, TRUE
	setmetatile 55, 32, 0x2BD, TRUE
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_12
	goto SerpentCaveSetWaterfall_4

SerpentCaveSetWaterfall_7:
	setmetatile 30, 9, 0x0B9, TRUE
	setmetatile 31, 9, 0x0B9, TRUE
	setmetatile 30, 10, 0x0B9, TRUE
	setmetatile 31, 10, 0x0B9, TRUE
	setmetatile 30, 11, 0x0B9, TRUE
	setmetatile 31, 11, 0x0B9, TRUE
	setmetatile 30, 12, 0x0B9, TRUE
	setmetatile 31, 12, 0x0B9, TRUE
	goto SerpentCaveSetWaterfall_1

SerpentCaveSetWaterfall_10:
	setmetatile 108, 33, 0x2CC, TRUE
	setmetatile 109, 33, 0x2CD, TRUE
	setmetatile 108, 32, 0x2C4, TRUE
	setmetatile 109, 32, 0x2C5, TRUE
	setmetatile 108, 31, 0x2C4, TRUE
	setmetatile 109, 31, 0x2C5, TRUE
	setmetatile 108, 30, 0x2BC, TRUE
	setmetatile 109, 30, 0x2BD, TRUE
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_16
	goto SerpentCaveSetWaterfall_9

SerpentCaveSetWaterfall_12:
	setmetatile 54, 31, 0x2C4, TRUE
	setmetatile 55, 31, 0x2C5, TRUE
	setmetatile 54, 30, 0x2BC, TRUE
	setmetatile 55, 30, 0x2BD, TRUE
	goto SerpentCaveSetWaterfall_4

SerpentCaveSetWaterfall_14:
	setmetatile 135, 32, 0x2CD, TRUE
	setmetatile 134, 32, 0x2CC, TRUE
	setmetatile 134, 31, 0x2C4, TRUE
	setmetatile 135, 31, 0x2C5, TRUE
	setmetatile 134, 30, 0x2C4, TRUE
	setmetatile 135, 30, 0x2C5, TRUE
	setmetatile 134, 29, 0x2BC, TRUE
	setmetatile 135, 29, 0x2BD, TRUE
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_18
	return

SerpentCaveSetWaterfall_16:
	setmetatile 108, 29, 0x2C4, TRUE
	setmetatile 109, 29, 0x2C5, TRUE
	setmetatile 108, 28, 0x2BC, TRUE
	setmetatile 109, 28, 0x2BD, TRUE
	goto SerpentCaveSetWaterfall_9

SerpentCaveSetWaterfall_18:
	setmetatile 134, 28, 0x2C4, TRUE
	setmetatile 135, 28, 0x2C5, TRUE
	setmetatile 134, 27, 0x2BC, TRUE
	setmetatile 135, 27, 0x2BD, TRUE
	return


Walk4DownFast:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SerpentCave_RapidTooFast::
	msgbox SerpentCave_RapidTooFast_Text, MSGBOX_SIGN
	return


BoulderGoingUp1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	jump_special_up
	walk_up
	jump_special_up
	step_end

BoulderGoingUp2:
	walk_up
	walk_up
	walk_up
	walk_up
	jump_special_up
	walk_up
	jump_special_up
	step_end

PushABoulder::
	checkpartymove MOVE_STRENGTH
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq PushABoulder_2
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	msgbox PushBoulderAside, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq PushABoulder_5
	safefollow
	msgbox PushWithStrength
	closemessage
	call CameraShake
	waitse
	waitstate
	delay 20
	return

PushABoulder_2:
	msgbox PushBoulderAsideCant
	release
	end

PushABoulder_5:
	release
	end


DoBoulderOneRoll::
	applymovement 6, Walk4DownFast
	applymovement 7, Walk4DownFast
	setmetatile 30, 4, 0x326, TRUE
	setmetatile 31, 4, 0x327, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 4, 0x2C8, TRUE
	setmetatile 31, 4, 0x2C9, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 5, 0x32E, TRUE
	setmetatile 31, 5, 0x32F, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 5, 0x2C8, TRUE
	setmetatile 31, 5, 0x2C9, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 6, 0x32E, TRUE
	setmetatile 31, 6, 0x32F, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 6, 0x2C8, TRUE
	setmetatile 31, 6, 0x2C9, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 7, 0x32E, TRUE
	setmetatile 31, 7, 0x32F, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 7, 0x2C8, TRUE
	setmetatile 31, 7, 0x2C9, TRUE
	special DrawWholeMapView
	delay 2
	setmetatile 30, 8, 0x33E, TRUE
	setmetatile 31, 8, 0x33F, TRUE
	special DrawWholeMapView
	delay 4
	setmetatile 30, 8, 0x2D0, TRUE
	setmetatile 31, 8, 0x2D1, TRUE
	special DrawWholeMapView
	delay 4
	setmetatile 30, 9, 0x346, TRUE
	setmetatile 31, 9, 0x347, TRUE
	special DrawWholeMapView
	delay 4
	setmetatile 30, 9, 0x0B9, TRUE
	setmetatile 31, 9, 0x0B9, TRUE
	special DrawWholeMapView
	delay 4
	setmetatile 30, 10, 0x346, TRUE
	setmetatile 31, 10, 0x347, TRUE
	special DrawWholeMapView
	delay 4
	setmetatile 30, 10, 0x0B9, TRUE
	setmetatile 31, 10, 0x0B9, TRUE
	special DrawWholeMapView
	delay 4
	setmetatile 30, 11, 0x346, TRUE
	setmetatile 31, 11, 0x347, TRUE
	special DrawWholeMapView
	delay 4
	setmetatile 30, 11, 0x0B9, TRUE
	setmetatile 31, 11, 0x0B9, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 12, 0x0B9, TRUE
	setmetatile 31, 12, 0x0B9, TRUE
	special DrawWholeMapView
	return


DoBoulderTwoRoll::
	applymovement 8, BoulderGoingUp1
	applymovement 9, BoulderGoingUp1
	delay 4
	setmetatile 54, 36, 0x340, TRUE
	setmetatile 55, 36, 0x341, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 36, 0x2CC, TRUE
	setmetatile 55, 36, 0x2CD, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 35, 0x338, TRUE
	setmetatile 55, 35, 0x339, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 35, 0x2C4, TRUE
	setmetatile 55, 35, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 34, 0x338, TRUE
	setmetatile 55, 34, 0x339, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 34, 0x2C4, TRUE
	setmetatile 55, 34, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 33, 0x338, TRUE
	setmetatile 55, 33, 0x339, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 33, 0x2C4, TRUE
	setmetatile 55, 33, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 32, 0x330, TRUE
	setmetatile 55, 32, 0x331, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 32, 0x2BC, TRUE
	setmetatile 55, 32, 0x2BD, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 54, 31, 0x338, TRUE
	setmetatile 55, 31, 0x339, TRUE
	special DrawWholeMapView
	call CameraShake
	delay 8
	setmetatile 54, 31, 0x2C4, TRUE
	setmetatile 55, 31, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 30, 0x330, TRUE
	setmetatile 55, 30, 0x331, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 54, 30, 0x2BC, TRUE
	setmetatile 55, 30, 0x2BD, TRUE
	special DrawWholeMapView
	return


DoBoulderThreeRoll::
	applymovement 17, BoulderGoingUp2
	applymovement 18, BoulderGoingUp2
	delay 4
	setmetatile 108, 33, 0x340, TRUE
	setmetatile 109, 33, 0x341, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 33, 0x2CC, TRUE
	setmetatile 109, 33, 0x2CD, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 32, 0x338, TRUE
	setmetatile 109, 32, 0x339, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 32, 0x2C4, TRUE
	setmetatile 109, 32, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 31, 0x338, TRUE
	setmetatile 109, 31, 0x339, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 31, 0x2C4, TRUE
	setmetatile 109, 31, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 30, 0x330, TRUE
	setmetatile 109, 30, 0x331, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 30, 0x2BC, TRUE
	setmetatile 109, 30, 0x2BD, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 108, 29, 0x338, TRUE
	setmetatile 109, 29, 0x339, TRUE
	special DrawWholeMapView
	call CameraShake
	delay 8
	setmetatile 108, 29, 0x2C4, TRUE
	setmetatile 109, 29, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 28, 0x330, TRUE
	setmetatile 109, 28, 0x331, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 108, 28, 0x2BC, TRUE
	setmetatile 109, 28, 0x2BD, TRUE
	special DrawWholeMapView
	return


DoBoulderFourRoll::
	applymovement 24, BoulderGoingUp2
	applymovement 25, BoulderGoingUp2
	delay 4
	setmetatile 134, 32, 0x340, TRUE
	setmetatile 135, 32, 0x341, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 32, 0x2CC, TRUE
	setmetatile 135, 32, 0x2CD, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 31, 0x338, TRUE
	setmetatile 135, 31, 0x339, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 31, 0x2C4, TRUE
	setmetatile 135, 31, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 30, 0x338, TRUE
	setmetatile 135, 30, 0x339, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 30, 0x2C4, TRUE
	setmetatile 135, 30, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 29, 0x330, TRUE
	setmetatile 135, 29, 0x331, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 29, 0x2BC, TRUE
	setmetatile 135, 29, 0x2BD, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 134, 28, 0x338, TRUE
	setmetatile 135, 28, 0x339, TRUE
	special DrawWholeMapView
	call CameraShake
	delay 8
	setmetatile 134, 28, 0x2C4, TRUE
	setmetatile 135, 28, 0x2C5, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 27, 0x330, TRUE
	setmetatile 135, 27, 0x331, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 134, 27, 0x2BC, TRUE
	setmetatile 135, 27, 0x2BD, TRUE
	special DrawWholeMapView
	return


SerpentCave_MoveFirstBoulder::
	lockall
	call PushABoulder
	call DoBoulderOneRoll
	waitmovement 0
	removeobject 1
	removeobject 6
	removeobject 7
	clearflag FLAG_TEMP_2
	addobject 2
	addobject 3
	addobject 4
	addobject 5
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveFirstBoulder_2
	call CameraShake
	waitstate
SerpentCave_MoveFirstBoulder_1:
	setflag FLAG_SERPENTCAVE_BOULDER_1
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
	release
	return

SerpentCave_MoveFirstBoulder_2:
	playse SE_M_DIVE
	waitse
	goto SerpentCave_MoveFirstBoulder_1


SerpentCave_MoveSecondBoulder::
	call PushABoulder
	call DoBoulderTwoRoll
	waitmovement 0
	delay 8
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveSecondBoulder_2
	call CameraShake
	waitstate
SerpentCave_MoveSecondBoulder_1:
	removeobject 8
	removeobject 9
	removeobject 10
	clearflag FLAG_TEMP_4
	addobject 12
	addobject 13
	addobject 14
	addobject 15
	addobject 16
	setflag FLAG_SERPENTCAVE_BOULDER_2
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
	release
	return

SerpentCave_MoveSecondBoulder_2:
	playse SE_M_DIVE
	waitse
	goto SerpentCave_MoveSecondBoulder_1


SerpentCave_MoveThirdBoulder::
	call PushABoulder
	call DoBoulderThreeRoll
	waitmovement 0
	delay 8
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveThirdBoulder_2
	call CameraShake
	waitstate
SerpentCave_MoveThirdBoulder_1:
	removeobject 17
	removeobject 18
	removeobject 19
	clearflag FLAG_TEMP_6
	addobject 20
	addobject 21
	addobject 22
	addobject 23
	setflag FLAG_SERPENTCAVE_BOULDER_3
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
	release
	return

SerpentCave_MoveThirdBoulder_2:
	playse SE_M_DIVE
	waitse
	goto SerpentCave_MoveThirdBoulder_1


SerpentCave_MoveFourthBoulder::
	call PushABoulder
	call DoBoulderFourRoll
	waitmovement 0
	delay 8
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveFourthBoulder_2
	call CameraShake
	waitstate
SerpentCave_MoveFourthBoulder_1:
	removeobject 24
	removeobject 25
	removeobject 26
	clearflag FLAG_TEMP_8
	addobject 27
	addobject 28
	addobject 29
	addobject 30
	setflag FLAG_SERPENTCAVE_BOULDER_4
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
	release
	return

SerpentCave_MoveFourthBoulder_2:
	playse SE_M_DIVE
	waitse
	goto SerpentCave_MoveFourthBoulder_1


CameraShake::
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 14
	setvar VAR_0x8007, 6
	special ShakeCamera
	return


CameraShakeFaster::
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	return


IrisGoodbye::
	delay 24
	switch VAR_TEMP_1
	case 0, IrisGoodbye_3
	case 2, IrisGoodbye_3
	turnobject 31, DIR_SOUTH
IrisGoodbye_1:
	playse SE_PIN
	applymovement 31, ExclamationMark
	waitmovement 0
	delay 48
	switch VAR_TEMP_1
	case 0, IrisGoodbye_7
	case 2, IrisGoodbye_7
	case 1, IrisGoodbye_8
	case 3, IrisGoodbye_9
	case 4, IrisGoodbye_10
IrisGoodbye_5:
	waitmovement 0
	delay 10
	msgbox IrisIntroText
	closemessage
	delay 5
	switch VAR_TEMP_1
	case 2, IrisGoodbye_13
IrisGoodbye_11:
	delay 48
	addobject 32
	addobject 33
	removeobject 31
	delay 60
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	switch VAR_TEMP_1
	case 0, IrisGoodbye_15
	case 1, IrisGoodbye_16
	case 2, IrisGoodbye_17
	case 3, IrisGoodbye_18
	case 4, IrisGoodbye_19
	return

IrisGoodbye_3:
	turnobject 31, DIR_NORTH
	goto IrisGoodbye_1

IrisGoodbye_7:
	applymovement 31, Walk1Up
	goto IrisGoodbye_5

IrisGoodbye_8:
	applymovement 31, Walk3Down
	goto IrisGoodbye_5

IrisGoodbye_9:
	applymovement 31, Walk2Down
	goto IrisGoodbye_5

IrisGoodbye_10:
	applymovement 31, Walk2Down
	goto IrisGoodbye_5

IrisGoodbye_13:
	turnobject 31, DIR_EAST
	goto IrisGoodbye_11

IrisGoodbye_15:
	goto IrisLeavesEntrance1
	return

IrisGoodbye_16:
	goto IrisLeavesEntrance2
	return

IrisGoodbye_17:
	goto IrisLeavesEntrance3
	return

IrisGoodbye_18:
	goto IrisLeavesEntrance4
	return

IrisGoodbye_19:
	goto IrisLeavesEntrance5
	return


IrisLeavesOnAggron1:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_down
	walk_right
	walk_right
	walk_down
	jump_special_down
	delay_16
	jump_special_down
	delay_16
	jump_special_down
	delay_16
	jump_special_down
	delay_16
	jump_special_down
	delay_16
	step_end

IrisLeavesOnAggron2:
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	step_end

IrisLeavesOnAggron3:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_down
	jump_special_down
	delay_16
	jump_special_down
	delay_16
	jump_special_down
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

IrisLeavesOnAggron4:
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_up
	walk_up
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	step_end

IrisLeavesOnAggron5:
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_up
	walk_right
	walk_right
	walk_up
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	jump_up
	delay_16
	delay_16
	step_end

IrisLeavesEntrance1::
	applymovement 32, IrisLeavesOnAggron1
	applymovement 33, IrisLeavesOnAggron1
	delay 72
	message IrisLeavesEntrance1_Text_0
	delay 72
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	goto IrisIntroEnd
	return


IrisLeavesEntrance2::
	applymovement 32, IrisLeavesOnAggron2
	applymovement 33, IrisLeavesOnAggron2
	delay 56
	message IrisLeavesEntrance1_Text_0
	delay 88
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	goto IrisIntroEnd
	return


IrisLeavesEntrance3::
	applymovement 32, IrisLeavesOnAggron3
	applymovement 33, IrisLeavesOnAggron3
	delay 48
	delay 12
	message IrisLeavesEntrance1_Text_0
	delay 36
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	goto IrisIntroEnd
	return


IrisLeavesEntrance4::
	applymovement 32, IrisLeavesOnAggron4
	applymovement 33, IrisLeavesOnAggron4
	delay 56
	message IrisLeavesEntrance1_Text_0
	delay 40
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	goto IrisIntroEnd
	return


IrisLeavesEntrance5::
	applymovement 32, IrisLeavesOnAggron5
	applymovement 33, IrisLeavesOnAggron5
	delay 56
	message IrisLeavesEntrance1_Text_0
	delay 56
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	delay 48
	call CameraShakeFaster
	goto IrisIntroEnd
	return


IrisIntroEnd::
	waitmovement 0
	delay 30
	removeobject 32
	removeobject 33
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_INTRO
	release
	return


IrisLeavesEntrance1_Text_0:
	.string "NOT THAT WAYYY!$"

PushBoulderAsideCant::
	.string "It's a huge boulder, and it looks like\n"
	.string "there's a hole in the wall behind it.\p"
	.string "A Pokémon may be able to push the\n"
	.string "boulder aside.$"

PushBoulderAside::
	.string "It's a huge boulder, and it looks like\n"
	.string "there's a hole in the wall behind it.\p"
	.string "A Pokémon may be able to push the\n"
	.string "boulder aside.\p"
	.string "Would you like to use Strength?$"

PushWithStrength::
	.string "{STR_VAR_1} used Strength!\p"
	.string "{STR_VAR_1} was able to nudge\n"
	.string "the huge boulder loose!$"

SerpentCave_RapidTooFast_Text::
	.string "The water is flowing too rapidly\n"
	.string "to fish or surf here.$"

IrisIntroText::
	.string "Oh, hi there!\p"
	.string "Are you here looking for treasure?\p"
	.string "My name's Iris, and you are…?\p"
	.string "{PLAYER}… Well, listen up,\n"
	.string "{PLAYER}.\p"
	.string "I found these caverns first,\n"
	.string "which means all the treasure here\l"
	.string "belongs to me!\p"
	.string "With the help of my trusty steed,\n"
	.string "I bet I can grab up everything\l"
	.string "before you can even blink!\p"
	.string "Let's go, Aggron!$"
