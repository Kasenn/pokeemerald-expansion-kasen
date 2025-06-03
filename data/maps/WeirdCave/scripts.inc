WeirdCave_MapScripts::
# 2 "data/maps/WeirdCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, WeirdCaveHideDoor
# 3 "data/maps/WeirdCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetRockVar
# 4 "data/maps/WeirdCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/WeirdCave/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

WeirdCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/WeirdCave/scripts.pory"
	special ShowJournalPopupAdd
# 7 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


WeirdCaveHideDoor::
# 12 "data/maps/WeirdCave/scripts.pory"
	goto_if_unset FLAG_Q17_DESERT_WEIRDCAVE_START, WeirdCaveHideDoor_3
WeirdCaveHideDoor_1:
# 16 "data/maps/WeirdCave/scripts.pory"
	goto_if_unset FLAG_WEIRDCAVESOLVED, WeirdCaveHideDoor_7
WeirdCaveHideDoor_6:
# 24 "data/maps/WeirdCave/scripts.pory"
	switch VAR_WEIRDCAVEROCKFORMATION
# 26 "data/maps/WeirdCave/scripts.pory"
	case 0, WeirdCaveHideDoor_11
# 33 "data/maps/WeirdCave/scripts.pory"
	case 1, WeirdCaveHideDoor_12
# 35 "data/maps/WeirdCave/scripts.pory"
	case 2, WeirdCaveHideDoor_13
# 37 "data/maps/WeirdCave/scripts.pory"
	case 3, WeirdCaveHideDoor_14
# 39 "data/maps/WeirdCave/scripts.pory"
	case 4, WeirdCaveHideDoor_15
# 41 "data/maps/WeirdCave/scripts.pory"
	case 5, WeirdCaveHideDoor_16
# 43 "data/maps/WeirdCave/scripts.pory"
	case 6, WeirdCaveHideDoor_17
WeirdCaveHideDoor_9:
	end

WeirdCaveHideDoor_2:
# 13 "data/maps/WeirdCave/scripts.pory"
	startquest FLAG_Q17_DESERT_WEIRDCAVE_START
# 14 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto WeirdCaveHideDoor_1

WeirdCaveHideDoor_3:
# 12 "data/maps/WeirdCave/scripts.pory"
	goto_if_unset FLAG_WEIRDCAVE_STONE, WeirdCaveHideDoor_2
	goto WeirdCaveHideDoor_1

WeirdCaveHideDoor_7:
# 17 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 5, 0x219, TRUE
# 18 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 5, 0x219, TRUE
# 19 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 5, 0x219, TRUE
# 20 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 6, 0x219, TRUE
# 21 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 6, 0x219, TRUE
# 22 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 6, 0x219, TRUE
	goto WeirdCaveHideDoor_6

WeirdCaveHideDoor_11:
# 27 "data/maps/WeirdCave/scripts.pory"
	setmetatile 5, 14, 0x211, FALSE
# 28 "data/maps/WeirdCave/scripts.pory"
	setmetatile 9, 8, 0x211, FALSE
# 29 "data/maps/WeirdCave/scripts.pory"
	setmetatile 5, 11, 0x211, FALSE
# 30 "data/maps/WeirdCave/scripts.pory"
	setmetatile 9, 14, 0x211, FALSE
# 31 "data/maps/WeirdCave/scripts.pory"
	setmetatile 5, 8, 0x211, FALSE
# 32 "data/maps/WeirdCave/scripts.pory"
	setmetatile 9, 11, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_12:
# 34 "data/maps/WeirdCave/scripts.pory"
	setmetatile 5, 14, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_13:
# 36 "data/maps/WeirdCave/scripts.pory"
	setmetatile 5, 11, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_14:
# 38 "data/maps/WeirdCave/scripts.pory"
	setmetatile 9, 8, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_15:
# 40 "data/maps/WeirdCave/scripts.pory"
	setmetatile 5, 8, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_16:
# 42 "data/maps/WeirdCave/scripts.pory"
	setmetatile 9, 11, 0x211, FALSE
	goto WeirdCaveHideDoor_9

WeirdCaveHideDoor_17:
# 44 "data/maps/WeirdCave/scripts.pory"
	setmetatile 9, 14, 0x211, FALSE
	goto WeirdCaveHideDoor_9


SetRockVar::
# 49 "data/maps/WeirdCave/scripts.pory"
	goto_if_unset FLAG_WEIRDCAVESOLVED, SetRockVar_1
# 56 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVEROCKFORMATION, 10
	return

SetRockVar_1:
# 50 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 51 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 7
	goto_if_eq SetRockVar_4
	return

SetRockVar_4:
# 52 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVEROCKFORMATION, 0
	return


WeirdCaveTrigger1::
# 60 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne WeirdCaveTrigger1_2
# 64 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 1
WeirdCaveTrigger1_1:
# 66 "data/maps/WeirdCave/scripts.pory"
	release
	return

WeirdCaveTrigger1_2:
# 61 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger1_1


WeirdCaveTrigger2::
# 69 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_ne WeirdCaveTrigger2_2
# 73 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 2
WeirdCaveTrigger2_1:
# 75 "data/maps/WeirdCave/scripts.pory"
	release
	return

WeirdCaveTrigger2_2:
# 70 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger2_1


WeirdCaveTrigger3::
# 78 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_ne WeirdCaveTrigger3_2
# 82 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 3
WeirdCaveTrigger3_1:
# 84 "data/maps/WeirdCave/scripts.pory"
	release
	return

WeirdCaveTrigger3_2:
# 79 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger3_1


WeirdCaveTrigger4::
# 87 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_ne WeirdCaveTrigger4_2
# 91 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 4
WeirdCaveTrigger4_1:
# 93 "data/maps/WeirdCave/scripts.pory"
	release
	return

WeirdCaveTrigger4_2:
# 88 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger4_1


WeirdCaveTrigger5::
# 96 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_ne WeirdCaveTrigger5_2
# 100 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 5
WeirdCaveTrigger5_1:
# 102 "data/maps/WeirdCave/scripts.pory"
	release
	return

WeirdCaveTrigger5_2:
# 97 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger5_1


WeirdCaveTrigger6::
# 105 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_ne WeirdCaveTrigger6_2
# 109 "data/maps/WeirdCave/scripts.pory"
	lock
# 110 "data/maps/WeirdCave/scripts.pory"
	setflag FLAG_WEIRDCAVESOLVED
# 111 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 5, 0x20B, TRUE
# 112 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 5, 0x20C, TRUE
# 113 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 5, 0x20D, TRUE
# 114 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 6, 0x213, TRUE
# 115 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 6, 0x214, FALSE
# 116 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 6, 0x215, TRUE
# 117 "data/maps/WeirdCave/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/WeirdCave/scripts.pory"
	fadeoutbgm 0
# 119 "data/maps/WeirdCave/scripts.pory"
	delay 30
# 120 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8004, 1
# 121 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8005, 1
# 122 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8006, 8
# 123 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8007, 5
# 124 "data/maps/WeirdCave/scripts.pory"
	special ShakeCamera
# 125 "data/maps/WeirdCave/scripts.pory"
	waitstate
# 126 "data/maps/WeirdCave/scripts.pory"
	delay 60
# 127 "data/maps/WeirdCave/scripts.pory"
	playse SE_SWITCH
# 128 "data/maps/WeirdCave/scripts.pory"
	waitse
# 129 "data/maps/WeirdCave/scripts.pory"
	delay 90
# 130 "data/maps/WeirdCave/scripts.pory"
	fadeinbgm 0
# 131 "data/maps/WeirdCave/scripts.pory"
	delay 30
# 132 "data/maps/WeirdCave/scripts.pory"
	release
WeirdCaveTrigger6_1:
# 135 "data/maps/WeirdCave/scripts.pory"
	release
	return

WeirdCaveTrigger6_2:
# 106 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto WeirdCaveTrigger6_1

