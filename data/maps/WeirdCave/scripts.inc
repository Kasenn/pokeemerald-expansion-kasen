WeirdCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, WeirdCaveHideDoor
	map_script MAP_SCRIPT_ON_TRANSITION, SetRockVar
	.byte 0


WeirdCaveHideDoor::
	goto_if_unset FLAG_WEIRDCAVESOLVED, WeirdCaveHideDoor_2
WeirdCaveHideDoor_1:
	end

WeirdCaveHideDoor_2:
	setmetatile 6, 5, 0x219, TRUE
	setmetatile 7, 5, 0x219, TRUE
	setmetatile 8, 5, 0x219, TRUE
	setmetatile 6, 6, 0x219, TRUE
	setmetatile 7, 6, 0x219, TRUE
	setmetatile 8, 6, 0x219, TRUE
	goto WeirdCaveHideDoor_1


SetRockVar::
	goto_if_unset FLAG_WEIRDCAVESOLVED, SetRockVar_2
SetRockVar_1:
	goto_if_set FLAG_WEIRDCAVESOLVED, SetRockVar_5
	compare VAR_WEIRDCAVEROCKFORMATION, 11
	goto_if_eq SetRockVar_8
SetRockVar_7:
	compare VAR_WEIRDCAVEROCKFORMATION, 0
	goto_if_eq SetRockVar_11
	compare VAR_WEIRDCAVEROCKFORMATION, 1
	goto_if_eq SetRockVar_14
	compare VAR_WEIRDCAVEROCKFORMATION, 2
	goto_if_eq SetRockVar_17
	compare VAR_WEIRDCAVEROCKFORMATION, 3
	goto_if_eq SetRockVar_20
	compare VAR_WEIRDCAVEROCKFORMATION, 4
	goto_if_eq SetRockVar_23
	compare VAR_WEIRDCAVEROCKFORMATION, 5
	goto_if_eq SetRockVar_26
	compare VAR_WEIRDCAVEROCKFORMATION, 6
	goto_if_eq SetRockVar_29
	compare VAR_WEIRDCAVEROCKFORMATION, 7
	goto_if_eq SetRockVar_32
	compare VAR_WEIRDCAVEROCKFORMATION, 8
	goto_if_eq SetRockVar_35
	compare VAR_WEIRDCAVEROCKFORMATION, 9
	goto_if_eq SetRockVar_38
	compare VAR_WEIRDCAVEROCKFORMATION, 10
	goto_if_eq SetRockVar_40
	return

SetRockVar_2:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 0
	goto SetRockVar_1

SetRockVar_5:
	setvar VAR_WEIRDCAVEROCKFORMATION, 20
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 9, 8
	setobjectxyperm 3, 5, 11
	setobjectxyperm 4, 9, 11
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 9, 14
	end

SetRockVar_8:
	setvar VAR_WEIRDCAVEROCKFORMATION, 0
	goto SetRockVar_7

SetRockVar_11:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 0, 0
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 9, 14
	end

SetRockVar_14:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 5, 11
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 0, 0
	end

SetRockVar_17:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 5, 11
	setobjectxyperm 4, 9, 11
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 0, 0
	end

SetRockVar_20:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 5, 11
	setobjectxyperm 4, 9, 11
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 0, 0
	end

SetRockVar_23:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 9, 8
	setobjectxyperm 3, 0, 0
	setobjectxyperm 4, 9, 11
	setobjectxyperm 5, 0, 0
	setobjectxyperm 6, 0, 0
	end

SetRockVar_26:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 5, 11
	setobjectxyperm 4, 9, 11
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 0, 0
	end

SetRockVar_29:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 5, 11
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 0, 0
	end

SetRockVar_32:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 0, 0
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 9, 14
	end

SetRockVar_35:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 5, 11
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 0, 0
	end

SetRockVar_38:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 5, 8
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 0, 0
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 5, 14
	setobjectxyperm 6, 9, 14
	end

SetRockVar_40:
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
	setobjectxyperm 1, 0, 0
	setobjectxyperm 2, 0, 0
	setobjectxyperm 3, 0, 0
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 0, 0
	setobjectxyperm 6, 0, 0
	end


WeirdCave_TriggerTiles::
	goto_if_set FLAG_WEIRDCAVESOLVED, WeirdCave_TriggerTiles_2
	switch VAR_WEIRDCAVE_CORRECTSTEPS
	case 0, WeirdCave_TriggerTiles_5
	case 1, WeirdCave_TriggerTiles_6
	case 2, WeirdCave_TriggerTiles_7
	case 3, WeirdCave_TriggerTiles_8
	case 4, WeirdCave_TriggerTiles_9
	case 5, WeirdCave_TriggerTiles_10
	case 6, WeirdCave_TriggerTiles_11
	case 7, WeirdCave_TriggerTiles_12
	case 8, WeirdCave_TriggerTiles_13
	case 9, WeirdCave_TriggerTiles_14
	case 20, WeirdCave_TriggerTiles_15
	return

WeirdCave_TriggerTiles_2:
	release
	end

WeirdCave_TriggerTiles_5:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_19
WeirdCave_TriggerTiles_18:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_16:
	release
	end

WeirdCave_TriggerTiles_6:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 6
	goto_if_eq WeirdCave_TriggerTiles_25
WeirdCave_TriggerTiles_24:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_22:
	release
	end

WeirdCave_TriggerTiles_7:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_31
WeirdCave_TriggerTiles_30:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_28:
	release
	end

WeirdCave_TriggerTiles_8:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_37
WeirdCave_TriggerTiles_36:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_34:
	release
	end

WeirdCave_TriggerTiles_9:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_43
WeirdCave_TriggerTiles_42:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_40:
	release
	end

WeirdCave_TriggerTiles_10:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 9
	goto_if_eq WeirdCave_TriggerTiles_49
WeirdCave_TriggerTiles_48:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_46:
	release
	end

WeirdCave_TriggerTiles_11:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_55
WeirdCave_TriggerTiles_54:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_52:
	release
	end

WeirdCave_TriggerTiles_12:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_61
WeirdCave_TriggerTiles_60:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_58:
	release
	end

WeirdCave_TriggerTiles_13:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_67
WeirdCave_TriggerTiles_66:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_64:
	release
	end

WeirdCave_TriggerTiles_14:
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_73
WeirdCave_TriggerTiles_72:
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_70:
	release
	end

WeirdCave_TriggerTiles_15:
	release
	end

WeirdCave_TriggerTiles_17:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_16

WeirdCave_TriggerTiles_19:
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_17
	goto WeirdCave_TriggerTiles_18

WeirdCave_TriggerTiles_23:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_22

WeirdCave_TriggerTiles_25:
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_23
	goto WeirdCave_TriggerTiles_24

WeirdCave_TriggerTiles_29:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_28

WeirdCave_TriggerTiles_31:
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_29
	goto WeirdCave_TriggerTiles_30

WeirdCave_TriggerTiles_35:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_34

WeirdCave_TriggerTiles_37:
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_35
	goto WeirdCave_TriggerTiles_36

WeirdCave_TriggerTiles_41:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_40

WeirdCave_TriggerTiles_43:
	compare VAR_TEMP_1, 17
	goto_if_eq WeirdCave_TriggerTiles_41
	goto WeirdCave_TriggerTiles_42

WeirdCave_TriggerTiles_47:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_46

WeirdCave_TriggerTiles_49:
	compare VAR_TEMP_1, 17
	goto_if_eq WeirdCave_TriggerTiles_47
	goto WeirdCave_TriggerTiles_48

WeirdCave_TriggerTiles_53:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_52

WeirdCave_TriggerTiles_55:
	compare VAR_TEMP_1, 17
	goto_if_eq WeirdCave_TriggerTiles_53
	goto WeirdCave_TriggerTiles_54

WeirdCave_TriggerTiles_59:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_58

WeirdCave_TriggerTiles_61:
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_59
	goto WeirdCave_TriggerTiles_60

WeirdCave_TriggerTiles_65:
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_64

WeirdCave_TriggerTiles_67:
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_65
	goto WeirdCave_TriggerTiles_66

WeirdCave_TriggerTiles_71:
	lockall
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
	goto WeirdCave_TriggerTiles_70

WeirdCave_TriggerTiles_73:
	compare VAR_TEMP_1, 15
	goto_if_eq WeirdCave_TriggerTiles_71
	goto WeirdCave_TriggerTiles_72

