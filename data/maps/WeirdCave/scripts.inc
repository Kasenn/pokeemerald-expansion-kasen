WeirdCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, WeirdCaveHideDoor
	map_script MAP_SCRIPT_ON_TRANSITION, SetRockVar
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 1, WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	special ShowJournalPopupAdd
	setvar VAR_TEMP_1, 0
	return


WeirdCaveHideDoor::
	goto_if_unset FLAG_Q17_DESERT_WEIRDCAVE_START, WeirdCaveHideDoor_3
WeirdCaveHideDoor_1:
	goto_if_unset FLAG_WEIRDCAVESOLVED, WeirdCaveHideDoor_7
WeirdCaveHideDoor_6:
	switch VAR_WEIRDCAVEROCKFORMATION
	case 0, WeirdCaveHideDoor_11
	case 1, WeirdCaveHideDoor_12
	case 2, WeirdCaveHideDoor_13
	case 3, WeirdCaveHideDoor_14
	case 4, WeirdCaveHideDoor_15
	case 5, WeirdCaveHideDoor_16
	case 6, WeirdCaveHideDoor_17
WeirdCaveHideDoor_9:
	end

WeirdCaveHideDoor_2:
	startquest FLAG_Q17_DESERT_WEIRDCAVE_START
	setvar VAR_TEMP_1, 1
	goto WeirdCaveHideDoor_1

WeirdCaveHideDoor_3:
	goto_if_unset FLAG_WEIRDCAVE_STONE, WeirdCaveHideDoor_2
	goto WeirdCaveHideDoor_1

WeirdCaveHideDoor_7:
	setmetatile 6, 5, 0x219, TRUE
	setmetatile 7, 5, 0x219, TRUE
	setmetatile 8, 5, 0x219, TRUE
	setmetatile 6, 6, 0x219, TRUE
	setmetatile 7, 6, 0x219, TRUE
	setmetatile 8, 6, 0x219, TRUE
	goto WeirdCaveHideDoor_6

WeirdCaveHideDoor_11:
	setmetatile 5, 14, 0x211, FALSE
	setmetatile 9, 8, 0x211, FALSE
	setmetatile 5, 11, 0x211, FALSE
	setmetatile 9, 14, 0x211, FALSE
	setmetatile 5, 8, 0x211, FALSE
	setmetatile 9, 11, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_12:
	setmetatile 5, 14, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_13:
	setmetatile 5, 11, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_14:
	setmetatile 9, 8, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_15:
	setmetatile 5, 8, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_16:
	setmetatile 9, 11, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_17:
	setmetatile 9, 14, 0x211, FALSE
	goto WeirdCaveHideDoor_9


SetRockVar::
	goto_if_unset FLAG_WEIRDCAVESOLVED, SetRockVar_1
	setvar VAR_WEIRDCAVEROCKFORMATION, 10
	return

SetRockVar_1:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	compare VAR_WEIRDCAVEROCKFORMATION, 7
	goto_if_eq SetRockVar_4
	return

SetRockVar_4:
	setvar VAR_WEIRDCAVEROCKFORMATION, 0
	return


WeirdCaveTrigger1::
	compare VAR_TEMP_0, 0
	goto_if_ne WeirdCaveTrigger1_2
	setvar VAR_TEMP_0, 1
WeirdCaveTrigger1_1:
	release
	return

WeirdCaveTrigger1_2:
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger1_1


WeirdCaveTrigger2::
	compare VAR_TEMP_0, 1
	goto_if_ne WeirdCaveTrigger2_2
	setvar VAR_TEMP_0, 2
WeirdCaveTrigger2_1:
	release
	return

WeirdCaveTrigger2_2:
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger2_1


WeirdCaveTrigger3::
	compare VAR_TEMP_0, 2
	goto_if_ne WeirdCaveTrigger3_2
	setvar VAR_TEMP_0, 3
WeirdCaveTrigger3_1:
	release
	return

WeirdCaveTrigger3_2:
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger3_1


WeirdCaveTrigger4::
	compare VAR_TEMP_0, 3
	goto_if_ne WeirdCaveTrigger4_2
	setvar VAR_TEMP_0, 4
WeirdCaveTrigger4_1:
	release
	return

WeirdCaveTrigger4_2:
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger4_1


WeirdCaveTrigger5::
	compare VAR_TEMP_0, 4
	goto_if_ne WeirdCaveTrigger5_2
	setvar VAR_TEMP_0, 5
WeirdCaveTrigger5_1:
	release
	return

WeirdCaveTrigger5_2:
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger5_1


WeirdCaveTrigger6::
	compare VAR_TEMP_0, 5
	goto_if_ne WeirdCaveTrigger6_2
	lock
	setflag FLAG_WEIRDCAVESOLVED
	setmetatile 6, 5, 0x20B, TRUE
	setmetatile 7, 5, 0x20C, TRUE
	setmetatile 8, 5, 0x20D, TRUE
	setmetatile 6, 6, 0x213, TRUE
	setmetatile 7, 6, 0x214, FALSE
	setmetatile 8, 6, 0x215, TRUE
	special DrawWholeMapView
	fadeoutbgm 0
	delay 30
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 60
	playse SE_SWITCH
	waitse
	delay 90
	fadeinbgm 0
	delay 30
	release
WeirdCaveTrigger6_1:
	release
	return

WeirdCaveTrigger6_2:
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger6_1

