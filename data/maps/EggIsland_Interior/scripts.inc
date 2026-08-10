EggIsland_Interior_MapScripts::
# 54 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME
# 55 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 78 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetSwitches
	.byte 0

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME:
# 54 "data/maps/EggIsland_Interior/scripts.pory"
	setstepcallback STEP_CB_EGG_ISLAND_INTERIOR
	return

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 56 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 62 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 63 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 64 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 65 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 66 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 67 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 68 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaOne
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 70 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_FINAL_BOULDER_IN_PLACE, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
	hasmonitem 0, ITEM_STRENGTH_GLOVES
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 75 "data/maps/EggIsland_Interior/scripts.pory"
	call SetupMushroomInterior
# 76 "data/maps/EggIsland_Interior/scripts.pory"
	call SetEggs
	return

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 57 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_1
# 58 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 59 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_3
# 60 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_4
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 64 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaOne
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 65 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaOne
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 66 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaTwo
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 67 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaTwo
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 67 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 66 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 28
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 65 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 55
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 64 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 70 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE_BOULDER, 75, 31
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 73 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_25


SetUpInteriorAreaOne::
# 81 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 82 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
	return


SetUpInteriorAreaTwo::
# 85 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 86 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 3
	return


SetEggs::
# 90 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0xFFFF
	goto_if_eq SetEggs_2
SetEggs_1:
# 91 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0xFFFF
	goto_if_eq SetEggs_5
SetEggs_4:
# 92 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0xFFFF
	goto_if_eq SetEggs_8
SetEggs_7:
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0xFFFF
	goto_if_eq SetEggs_11
SetEggs_10:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0xFFFF
	goto_if_eq SetEggs_14
SetEggs_13:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0xFFFF
	goto_if_eq SetEggs_17
SetEggs_16:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0xFFFF
	goto_if_eq SetEggs_20
SetEggs_19:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0xFFFF
	goto_if_eq SetEggs_23
SetEggs_22:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0xFFFF
	goto_if_eq SetEggs_26
SetEggs_25:
# 99 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0xFFFF
	goto_if_eq SetEggs_29
SetEggs_28:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0xFFFF
	goto_if_eq SetEggs_32
SetEggs_31:
# 102 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetEggs_35
SetEggs_34:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetEggs_38
SetEggs_37:
# 104 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetEggs_41
SetEggs_40:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetEggs_44
SetEggs_43:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetEggs_47
SetEggs_46:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetEggs_50
SetEggs_49:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0
	goto_if_ne SetEggs_53
SetEggs_52:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetEggs_56
SetEggs_55:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0
	goto_if_ne SetEggs_59
SetEggs_58:
# 111 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0
	goto_if_ne SetEggs_62
SetEggs_61:
# 112 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0
	goto_if_ne SetEggs_64
	return

SetEggs_2:
# 90 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_1, 0
	goto SetEggs_1

SetEggs_5:
# 91 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_2, 0
	goto SetEggs_4

SetEggs_8:
# 92 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_3, 0
	goto SetEggs_7

SetEggs_11:
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_4, 0
	goto SetEggs_10

SetEggs_14:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_5, 0
	goto SetEggs_13

SetEggs_17:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_6, 0
	goto SetEggs_16

SetEggs_20:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_7, 0
	goto SetEggs_19

SetEggs_23:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_8, 0
	goto SetEggs_22

SetEggs_26:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_9, 0
	goto SetEggs_25

SetEggs_29:
# 99 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_10, 0
	goto SetEggs_28

SetEggs_32:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_11, 0
	goto SetEggs_31

SetEggs_35:
# 102 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, 47, 62
	goto SetEggs_34

SetEggs_38:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, 34, 80
	goto SetEggs_37

SetEggs_41:
# 104 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, 26, 80
	goto SetEggs_40

SetEggs_44:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, 30, 83
	goto SetEggs_43

SetEggs_47:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, 22, 66
	goto SetEggs_46

SetEggs_50:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, 36, 69
	goto SetEggs_49

SetEggs_53:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, 18, 48
	goto SetEggs_52

SetEggs_56:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, 35, 51
	goto SetEggs_55

SetEggs_59:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, 33, 42
	goto SetEggs_58

SetEggs_62:
# 111 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, 36, 30
	goto SetEggs_61

SetEggs_64:
# 112 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, 75, 31
	return


SetSwitches::
# 116 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetSwitches_2
SetSwitches_1:
# 121 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetSwitches_5
SetSwitches_4:
# 124 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetSwitches_8
SetSwitches_7:
# 127 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetSwitches_11
SetSwitches_10:
# 130 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetSwitches_14
SetSwitches_13:
# 134 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetSwitches_17
SetSwitches_16:
# 139 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0
	goto_if_ne SetSwitches_20
SetSwitches_19:
# 144 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetSwitches_23
SetSwitches_22:
# 150 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0
	goto_if_ne SetSwitches_26
SetSwitches_25:
# 155 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0
	goto_if_ne SetSwitches_29
SetSwitches_28:
# 159 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0
	goto_if_ne SetSwitches_32
SetSwitches_31:
# 164 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetSwitches_36
	return

SetSwitches_2:
# 117 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x379, FALSE
# 118 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x379, FALSE
# 119 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37B, FALSE
	goto SetSwitches_1

SetSwitches_5:
# 122 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37B, FALSE
	goto SetSwitches_4

SetSwitches_8:
# 125 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37B, FALSE
	goto SetSwitches_7

SetSwitches_11:
# 128 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37B, FALSE
	goto SetSwitches_10

SetSwitches_14:
# 131 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x379, FALSE
# 132 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37B, FALSE
	goto SetSwitches_13

SetSwitches_17:
# 135 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x379, FALSE
# 136 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x379, FALSE
# 137 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37B, FALSE
	goto SetSwitches_16

SetSwitches_20:
# 140 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x379, FALSE
# 141 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x379, FALSE
# 142 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37B, FALSE
	goto SetSwitches_19

SetSwitches_23:
# 145 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x379, FALSE
# 146 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x379, FALSE
# 147 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x379, FALSE
# 148 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37B, FALSE
	goto SetSwitches_22

SetSwitches_26:
# 151 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x379, FALSE
# 152 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x379, FALSE
# 153 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37B, FALSE
	goto SetSwitches_25

SetSwitches_29:
# 156 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x379, FALSE
# 157 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37B, FALSE
	goto SetSwitches_28

SetSwitches_32:
# 160 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x379, FALSE
# 161 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37B, FALSE
	goto SetSwitches_31

SetSwitches_34:
# 171 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 172 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x379, FALSE
	return

SetSwitches_35:
# 166 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetSwitches_40
	return

SetSwitches_36:
# 165 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetSwitches_35
	return

SetSwitches_39:
# 168 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetSwitches_44
	return

SetSwitches_40:
# 167 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetSwitches_39
	return

SetSwitches_43:
# 170 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetSwitches_34
	return

SetSwitches_44:
# 169 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetSwitches_43
	return


SetupMushroomInterior::
# 177 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroomInterior_2
# 180 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 181 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 182 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 183 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 184 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 185 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
# 186 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 187 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 55
	goto_if_eq SetupMushroomInterior_5
# 187 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq SetupMushroomInterior_5
SetupMushroomInterior_4:
# 190 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 191 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
	return

SetupMushroomInterior_2:
	return

SetupMushroomInterior_5:
# 188 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
	goto SetupMushroomInterior_4


PlateTrigger1::
# 195 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 196 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 197 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x379, FALSE
# 198 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x379, FALSE
# 199 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37B, FALSE
# 200 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger2::
# 204 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger2_2
PlateTrigger2_1:
# 212 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 213 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 214 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37B, FALSE
# 215 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger2_2:
# 205 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 206 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 207 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 208 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 209 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger2_1


PlateTrigger3::
# 219 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger3_2
PlateTrigger3_1:
# 227 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 228 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 229 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37B, FALSE
# 230 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger3_2:
# 220 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 221 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 222 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 223 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 224 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger3_1


PlateTrigger4::
# 234 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger4_2
PlateTrigger4_1:
# 242 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 243 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 244 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37B, FALSE
# 245 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger4_2:
# 235 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 236 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 237 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 238 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 239 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger4_1


PlateTrigger5::
# 249 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 250 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 251 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x379, FALSE
# 252 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37B, FALSE
# 253 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger6::
# 257 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 258 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 259 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x379, FALSE
# 260 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x379, FALSE
# 261 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37B, FALSE
# 262 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger7::
# 266 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 267 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 268 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x379, FALSE
# 269 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x379, FALSE
# 270 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37B, FALSE
# 271 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger8::
# 275 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 276 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 277 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x379, FALSE
# 278 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x379, FALSE
# 279 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x379, FALSE
# 280 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37B, FALSE
# 281 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger9::
# 285 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 286 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 287 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x379, FALSE
# 288 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x379, FALSE
# 289 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37B, FALSE
# 290 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger10::
# 294 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 295 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 296 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x379, FALSE
# 297 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37B, FALSE
# 298 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger11::
# 302 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 303 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 304 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x379, FALSE
# 305 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37B, FALSE
# 306 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript4
	return


MainPlateScript::
# 310 "data/maps/EggIsland_Interior/scripts.pory"
	getcustomvar
# 311 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0xFFFF
	goto_if_eq MainPlateScript_2
	return

MainPlateScript_2:
# 312 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


MainPlateScript2::
# 318 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 319 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 320 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 321 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 322 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne MainPlateScript2_4
MainPlateScript2_1:
# 331 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

MainPlateScript2_2:
# 329 "data/maps/EggIsland_Interior/scripts.pory"
	goto TriggerMainGate
	goto MainPlateScript2_1

MainPlateScript2_3:
# 324 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne MainPlateScript2_8
	goto MainPlateScript2_1

MainPlateScript2_4:
# 323 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne MainPlateScript2_3
	goto MainPlateScript2_1

MainPlateScript2_7:
# 326 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne MainPlateScript2_12
	goto MainPlateScript2_1

MainPlateScript2_8:
# 325 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne MainPlateScript2_7
	goto MainPlateScript2_1

MainPlateScript2_11:
# 328 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne MainPlateScript2_2
	goto MainPlateScript2_1

MainPlateScript2_12:
# 327 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne MainPlateScript2_11
	goto MainPlateScript2_1


MainPlateScript3::
# 335 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 336 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 337 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 338 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 339 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


MainPlateScript4::
# 344 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 345 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 346 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 347 "data/maps/EggIsland_Interior/scripts.pory"
	getobjectxy LOCALID_PUZZLE_BOULDER, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 348 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 75
	goto_if_eq MainPlateScript4_3
MainPlateScript4_1:
# 352 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 353 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

MainPlateScript4_2:
# 349 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_FINAL_BOULDER_IN_PLACE
# 350 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE_BOULDER, 75, 31
	goto MainPlateScript4_1

MainPlateScript4_3:
# 348 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MainPlateScript4_2
	goto MainPlateScript4_1


TriggerMainGate::
# 358 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 359 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x379, FALSE
# 360 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 361 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 362 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 363 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_DOOR_OPEN
# 364 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SteppedOffofSwitch1::
# 371 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 372 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 373 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x378, TRUE
# 374 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x378, TRUE
# 375 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37A, FALSE
# 376 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch2::
# 379 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 380 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 381 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37A, FALSE
# 382 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch3::
# 385 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 386 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 387 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37A, FALSE
# 388 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch4::
# 391 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 392 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 393 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37A, FALSE
# 394 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch5::
# 397 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 398 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 399 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x378, TRUE
# 400 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37A, FALSE
# 401 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch6::
# 404 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 405 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 406 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x378, TRUE
# 407 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x378, TRUE
# 408 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37A, FALSE
# 409 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch7::
# 412 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 413 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 414 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x378, TRUE
# 415 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x378, TRUE
# 416 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37A, FALSE
# 417 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch8::
# 420 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 421 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 422 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x378, TRUE
# 423 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x378, TRUE
# 424 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x378, TRUE
# 425 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37A, FALSE
# 426 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch9::
# 429 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 430 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 431 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x378, TRUE
# 432 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x378, TRUE
# 433 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37A, FALSE
# 434 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch10::
# 437 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 438 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 439 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x378, TRUE
# 440 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37A, FALSE
# 441 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch11::
# 444 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 445 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 446 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x378, TRUE
# 447 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37A, FALSE
# 448 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitchMain::
# 452 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 453 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 454 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 455 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0
# 456 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 457 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 458 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 459 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 460 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 461 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 462 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_eq SteppedOffofSwitchMain_3
SteppedOffofSwitchMain_1:
# 466 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SteppedOffofSwitchMain_2:
# 464 "data/maps/EggIsland_Interior/scripts.pory"
	goto BlockMainGate
	goto SteppedOffofSwitchMain_1

SteppedOffofSwitchMain_3:
# 463 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_DOOR_OPEN, SteppedOffofSwitchMain_2
	goto SteppedOffofSwitchMain_1


BlockMainGate::
# 471 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x378, TRUE
# 472 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x378, TRUE
# 473 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 474 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 475 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 476 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_DOOR_OPEN
# 477 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SetEggOnPedestal::
	msgbox SetEggOnPedestal_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetEggOnPedestal_2
# 486 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text2, MSGBOX_AUTOCLOSE
# 487 "data/maps/EggIsland_Interior/scripts.pory"
	special ChoosePartyEgg
# 488 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SetEggOnPedestal_5
# 488 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq SetEggOnPedestal_5
# 493 "data/maps/EggIsland_Interior/scripts.pory"
	removeegg VAR_0x8004
# 494 "data/maps/EggIsland_Interior/scripts.pory"
	copyvartocustomvar VAR_0x800A
# 496 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 497 "data/maps/EggIsland_Interior/scripts.pory"
	switch VAR_FACING
# 498 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_NORTH, SetEggOnPedestal_11
# 499 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_WEST, SetEggOnPedestal_12
# 500 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_EAST, SetEggOnPedestal_13
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_SOUTH, SetEggOnPedestal_14
SetEggOnPedestal_9:
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 47
	goto_if_eq SetEggOnPedestal_17
SetEggOnPedestal_15:
# 509 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 34
	goto_if_eq SetEggOnPedestal_22
SetEggOnPedestal_20:
# 514 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq SetEggOnPedestal_27
SetEggOnPedestal_25:
# 519 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq SetEggOnPedestal_32
SetEggOnPedestal_30:
# 524 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq SetEggOnPedestal_37
SetEggOnPedestal_35:
# 529 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_42
SetEggOnPedestal_40:
# 534 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq SetEggOnPedestal_47
SetEggOnPedestal_45:
# 539 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 35
	goto_if_eq SetEggOnPedestal_52
SetEggOnPedestal_50:
# 544 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 33
	goto_if_eq SetEggOnPedestal_57
SetEggOnPedestal_55:
# 549 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_62
SetEggOnPedestal_60:
# 554 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 75
	goto_if_eq SetEggOnPedestal_67
SetEggOnPedestal_65:
# 559 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 560 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text3
# 561 "data/maps/EggIsland_Interior/scripts.pory"
	special CalculatePlayerPartyCount
# 562 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateEggPP
# 563 "data/maps/EggIsland_Interior/scripts.pory"
	callnative ForceResetFollowers
# 564 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_2:
# 483 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_5:
# 490 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_11:
# 498 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_0
	goto SetEggOnPedestal_9

SetEggOnPedestal_12:
# 499 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_1
	goto SetEggOnPedestal_9

SetEggOnPedestal_13:
# 500 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_2
	goto SetEggOnPedestal_9

SetEggOnPedestal_14:
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_3
	goto SetEggOnPedestal_9

SetEggOnPedestal_16:
# 505 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_1
# 506 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, VAR_TEMP_0, VAR_TEMP_1
# 507 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_1
	goto SetEggOnPedestal_15

SetEggOnPedestal_17:
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 62
	goto_if_eq SetEggOnPedestal_16
	goto SetEggOnPedestal_15

SetEggOnPedestal_21:
# 510 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_2
# 511 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, VAR_TEMP_0, VAR_TEMP_1
# 512 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_2
	goto SetEggOnPedestal_20

SetEggOnPedestal_22:
# 509 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_21
	goto SetEggOnPedestal_20

SetEggOnPedestal_26:
# 515 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_3
# 516 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, VAR_TEMP_0, VAR_TEMP_1
# 517 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_3
	goto SetEggOnPedestal_25

SetEggOnPedestal_27:
# 514 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_26
	goto SetEggOnPedestal_25

SetEggOnPedestal_31:
# 520 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_4
# 521 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, VAR_TEMP_0, VAR_TEMP_1
# 522 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_4
	goto SetEggOnPedestal_30

SetEggOnPedestal_32:
# 519 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 83
	goto_if_eq SetEggOnPedestal_31
	goto SetEggOnPedestal_30

SetEggOnPedestal_36:
# 525 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_5
# 526 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, VAR_TEMP_0, VAR_TEMP_1
# 527 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_5
	goto SetEggOnPedestal_35

SetEggOnPedestal_37:
# 524 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq SetEggOnPedestal_36
	goto SetEggOnPedestal_35

SetEggOnPedestal_41:
# 530 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_6
# 531 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, VAR_TEMP_0, VAR_TEMP_1
# 532 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_6
	goto SetEggOnPedestal_40

SetEggOnPedestal_42:
# 529 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 69
	goto_if_eq SetEggOnPedestal_41
	goto SetEggOnPedestal_40

SetEggOnPedestal_46:
# 535 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_7
# 536 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, VAR_TEMP_0, VAR_TEMP_1
# 537 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_7
	goto SetEggOnPedestal_45

SetEggOnPedestal_47:
# 534 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq SetEggOnPedestal_46
	goto SetEggOnPedestal_45

SetEggOnPedestal_51:
# 540 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_8
# 541 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, VAR_TEMP_0, VAR_TEMP_1
# 542 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_8
	goto SetEggOnPedestal_50

SetEggOnPedestal_52:
# 539 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq SetEggOnPedestal_51
	goto SetEggOnPedestal_50

SetEggOnPedestal_56:
# 545 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_9
# 546 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, VAR_TEMP_0, VAR_TEMP_1
# 547 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_9
	goto SetEggOnPedestal_55

SetEggOnPedestal_57:
# 544 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 42
	goto_if_eq SetEggOnPedestal_56
	goto SetEggOnPedestal_55

SetEggOnPedestal_61:
# 550 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_10
# 551 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, VAR_TEMP_0, VAR_TEMP_1
# 552 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_10
	goto SetEggOnPedestal_60

SetEggOnPedestal_62:
# 549 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq SetEggOnPedestal_61
	goto SetEggOnPedestal_60

SetEggOnPedestal_66:
# 555 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_11
# 556 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, VAR_TEMP_0, VAR_TEMP_1
# 557 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_11
	goto SetEggOnPedestal_65

SetEggOnPedestal_67:
# 554 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq SetEggOnPedestal_66
	goto SetEggOnPedestal_65


Script_GroundEgg1::
# 582 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 583 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_1
# 584 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg2::
# 587 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 588 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_2
# 589 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg3::
# 592 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 593 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_3
# 594 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg4::
# 597 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 598 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_4
# 599 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg5::
# 602 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 603 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_5
# 604 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg6::
# 607 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 608 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_6
# 609 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg7::
# 612 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 613 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_7
# 614 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg8::
# 617 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 618 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_8
# 619 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg9::
# 622 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 623 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_9
# 624 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg10::
# 627 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 628 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_10
# 629 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg11::
# 632 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 633 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_11
# 634 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


GroundEggMain::
# 638 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 639 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_ge GroundEggMain_2
	msgbox GroundEggMain_Text2, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GroundEggMain_5
# 647 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text_0, MSGBOX_AUTOCLOSE
# 648 "data/maps/EggIsland_Interior/scripts.pory"
	getcustomvar
# 649 "data/maps/EggIsland_Interior/scripts.pory"
	giveegg VAR_RESULT
# 650 "data/maps/EggIsland_Interior/scripts.pory"
	special CalculatePlayerPartyCount
# 651 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateEggPP
# 652 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateFollowingPokemon
# 653 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 654 "data/maps/EggIsland_Interior/scripts.pory"
	switch VAR_TEMP_6
# 655 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_1, GroundEggMain_8
# 656 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_2, GroundEggMain_9
# 657 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_3, GroundEggMain_10
# 658 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_4, GroundEggMain_11
# 659 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_5, GroundEggMain_12
# 660 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_6, GroundEggMain_13
# 661 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_7, GroundEggMain_14
# 662 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_8, GroundEggMain_15
# 663 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_9, GroundEggMain_16
# 664 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_10, GroundEggMain_17
# 665 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_11, GroundEggMain_18
	return

GroundEggMain_2:
# 640 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text1, MSGBOX_AUTOCLOSE
	end

GroundEggMain_5:
# 644 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

GroundEggMain_8:
# 655 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch1
	return

GroundEggMain_9:
# 656 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch2
	return

GroundEggMain_10:
# 657 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch3
	return

GroundEggMain_11:
# 658 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch4
	return

GroundEggMain_12:
# 659 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch5
	return

GroundEggMain_13:
# 660 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch6
	return

GroundEggMain_14:
# 661 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch7
	return

GroundEggMain_15:
# 662 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch8
	return

GroundEggMain_16:
# 663 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch9
	return

GroundEggMain_17:
# 664 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch10
	return

GroundEggMain_18:
# 665 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch11
	return


AITrigger0::
# 680 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 681 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 682 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
# 683 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


AITrigger1::
# 687 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 688 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 689 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 3
# 690 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


SecretItem::
	return


GripGloves::
# 698 "data/maps/EggIsland_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 699 "data/maps/EggIsland_Interior/scripts.pory"
	message GripGloves_Text_0
# 700 "data/maps/EggIsland_Interior/scripts.pory"
	delay 10
# 701 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 702 "data/maps/EggIsland_Interior/scripts.pory"
	waitfanfare
# 703 "data/maps/EggIsland_Interior/scripts.pory"
	waitmessage
# 704 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GripGlovesDescription
# 705 "data/maps/EggIsland_Interior/scripts.pory"
	callnative EquipGripGloves
# 706 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


TriggerHelpDiglett::
# 710 "data/maps/EggIsland_Interior/scripts.pory"
	playbgm MUS_HELP, TRUE
# 711 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_WEST
# 712 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 713 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_DIGLETT, Common_Movement_ExclamationMark
# 714 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 715 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 716 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 717 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 718 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 719 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox TriggerHelpDiglett_Text_1, MSGBOX_AUTOCLOSE
# 720 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
# 721 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 722 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_DISABLE_ENCOUNTERS
# 723 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 4
	return


DontLeaveDiglett::
# 727 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 728 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DontLeaveDiglett_Text_0, MSGBOX_AUTOCLOSE
# 729 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, DontLeaveDiglett_Movement_0
# 730 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 731 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


Sandshrew1::
# 735 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 736 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 737 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1_LetsBattle, MSGBOX_DEFAULT
# 738 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateMildMon
# 739 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SWIFT, move3 = MOVE_ROLLOUT, move4 = MOVE_RAPID_SPIN
# 740 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 741 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew2Attacks
	return


Sandshrew2::
# 745 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 746 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 747 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew2_LetsBattle, MSGBOX_DEFAULT
# 748 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateMildMon
# 749 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SWIFT, move3 = MOVE_ROLLOUT, move4 = MOVE_RAPID_SPIN
# 750 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 751 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew1Attacks
	return


Sandshrew1Attacks::
# 761 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 762 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Movement_ObjectDisappears
# 763 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 764 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW2
# 765 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 766 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Common_Movement_ExclamationMark
# 767 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 768 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 769 "data/maps/EggIsland_Interior/scripts.pory"
	delay 48
# 770 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Sandshrew1Attacks_Movement_0
# 771 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 772 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 773 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 774 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 775 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1Attacks_Text_0
# 776 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 777 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_EARTHQUAKE, move2 = MOVE_SLASH, move3 = MOVE_ROLLOUT, move4 = MOVE_GYRO_BALL
# 778 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 779 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Movement_ObjectDisappears
# 780 "data/maps/EggIsland_Interior/scripts.pory"
	savebgm MUS_DUMMY
# 781 "data/maps/EggIsland_Interior/scripts.pory"
	fadedefaultbgm
# 782 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 783 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW1
# 784 "data/maps/EggIsland_Interior/scripts.pory"
	goto SandshrewFinale
	return


Sandshrew2Attacks::
# 787 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 788 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Movement_ObjectDisappears
# 789 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 790 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW1
# 791 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 792 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Common_Movement_ExclamationMark
# 793 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 794 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 795 "data/maps/EggIsland_Interior/scripts.pory"
	delay 48
# 796 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Sandshrew2Attacks_Movement_0
# 797 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 798 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 799 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 800 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 801 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1Attacks_Text_0
# 802 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 803 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_EARTHQUAKE, move2 = MOVE_SLASH, move3 = MOVE_ROLLOUT, move4 = MOVE_GYRO_BALL
# 804 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 805 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Movement_ObjectDisappears
# 806 "data/maps/EggIsland_Interior/scripts.pory"
	savebgm MUS_DUMMY
# 807 "data/maps/EggIsland_Interior/scripts.pory"
	fadedefaultbgm
# 808 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 809 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW2
# 810 "data/maps/EggIsland_Interior/scripts.pory"
	goto SandshrewFinale
	return


SandshrewFinale::
# 814 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 815 "data/maps/EggIsland_Interior/scripts.pory"
	delay 32
# 816 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 53
	goto_if_eq SandshrewFinale_2
# 820 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SandshrewFinale_Movement_1
SandshrewFinale_1:
# 822 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 823 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 824 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_WEST
# 825 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 826 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 827 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SandshrewFinale_Text, MSGBOX_AUTOCLOSE
# 828 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 829 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
# 830 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 831 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_DIGLETT, SandshrewFinale_Movement_2
# 832 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 833 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 834 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 835 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_DIGLETT
# 836 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 837 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 5
# 838 "data/maps/EggIsland_Interior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_INTERIOR, 32, 72
# 839 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 840 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SandshrewFinale_Text2
# 841 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return

SandshrewFinale_2:
# 817 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SandshrewFinale_Movement_0
	goto SandshrewFinale_1


DiglettScript::
# 867 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 868 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DiglettScript_Text, MSGBOX_NPC
# 869 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
	return


EggHatchScene::
# 876 "data/maps/EggIsland_Interior/scripts.pory"
	lockall
# 877 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Text_EggHatchHuh, MSGBOX_DEFAULT
# 878 "data/maps/EggIsland_Interior/scripts.pory"
	special EggHatch
# 879 "data/maps/EggIsland_Interior/scripts.pory"
	delay 32
# 880 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 881 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER1, DIR_WEST
# 882 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 883 "data/maps/EggIsland_Interior/scripts.pory"
	bufferpartymonnickname STR_VAR_1, 1
# 884 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker EggHatchScene_Text_0
# 885 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox EggHatchScene_Text
# 886 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 887 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox EggHatchScene_Text2
# 888 "data/maps/EggIsland_Interior/scripts.pory"
	releaseall
	end


TurboBoostEncounters::
# 909 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 910 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_eq TurboBoostEncounters_2
# 914 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TURBOBOOST_ENCOUNTERS
# 915 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return

TurboBoostEncounters_2:
# 911 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


TurboBoostEncountersOff::
# 919 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 920 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


# 498 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_0:
# 498 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_up
	step_end

# 499 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_1:
# 499 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_left
	step_end

# 500 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_2:
# 500 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_right
	step_end

# 501 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_3:
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_down
	step_end

# 729 "data/maps/EggIsland_Interior/scripts.pory"
DontLeaveDiglett_Movement_0:
# 729 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
	step_end

# 770 "data/maps/EggIsland_Interior/scripts.pory"
Sandshrew1Attacks_Movement_0:
# 770 "data/maps/EggIsland_Interior/scripts.pory"
	walk_left
# 770 "data/maps/EggIsland_Interior/scripts.pory"
	walk_down
	step_end

# 796 "data/maps/EggIsland_Interior/scripts.pory"
Sandshrew2Attacks_Movement_0:
# 796 "data/maps/EggIsland_Interior/scripts.pory"
	walk_left
# 796 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
	step_end

# 817 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_0:
# 817 "data/maps/EggIsland_Interior/scripts.pory"
	walk_down
# 817 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_fast_right
	step_end

# 820 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_1:
# 820 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
# 820 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_fast_right
	step_end

# 831 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_2:
# 831 "data/maps/EggIsland_Interior/scripts.pory"
	nurse_joy_bow
	step_end

GroundEggMain_Text_0:
# 647 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi picked up the egg.$"

GripGloves_Text_0:
# 699 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi found the Grip Gloves!$"

TriggerHelpDiglett_Text_0:
# 718 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Diglett$"

TriggerHelpDiglett_Text_1:
# 719 "data/maps/EggIsland_Interior/scripts.pory"
	.string "You there, please help!\pI am getting bullied by\nthese two shrews!$"

DontLeaveDiglett_Text_0:
# 728 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please don't leave me here\nwith these two!$"

Sandshrew1_Text_0:
# 736 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Sandshrew$"

Sandshrew1Attacks_Text_0:
# 775 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Now you've done it!$"

EggHatchScene_Text_0:
# 884 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{STR_VAR_1}$"

SetEggOnPedestal_Text::
# 567 "data/maps/EggIsland_Interior/scripts.pory"
	.string "There seems to be a weighted\n"
	.string "pressure plate under this egg.\l"
	.string "Leave an egg on the plate?$"

SetEggOnPedestal_Text2::
# 572 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Choose an egg to leave\n"
	.string "on the plate.$"

SetEggOnPedestal_Text3::
# 576 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi left an egg\n"
	.string "on the plate.$"

GroundEggMain_Text1::
# 669 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.$"

GroundEggMain_Text2::
# 673 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.\l"
	.string "Do you want to pick it up?$"

Sandshrew1_LetsBattle::
# 753 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Who are you? Get lost!$"

Sandshrew2_LetsBattle::
# 756 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Don't butt in!$"

SandshrewFinale_Text::
# 844 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Thank you for saving me,\n"
	.string "friend!\p"
	.string "The two of them together was\n"
	.string "just too much for my feeble\l"
	.string "defenses.\p"
	.string "I am in your debt, friend.\n"
	.string "Whenever you are in a pinch,\l"
	.string "call for me, and I will come\l"
	.string "bursting out of the ground!$"

SandshrewFinale_Text2::
# 855 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}You can now use the “Retreat”\n"
	.string "option in the Start Menu to\l"
	.string "return to the latest discovered\l"
	.string "save point.\p"
	.string "You can also use the move\n"
	.string "“Call Diglett” once every battle\l"
	.string "to summon Diglett to fiercely\l"
	.string "strike your foes.$"

DiglettScript_Text::
# 871 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please help me!$"

EggHatchScene_Text::
# 892 "data/maps/EggIsland_Interior/scripts.pory"
	.string "This hot sand must've\n"
	.string "accelerated our growth.\p"
	.string "But don't worry, Yoshi!\p"
	.string "Even if our form has changed,\n"
	.string "we will still aid you\l"
	.string "the best we can!\p"
	.string "Now, let's go find that\n"
	.string "Kamek guy!$"

EggHatchScene_Text2::
# 903 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}Yoshi's “Toss Egg” has been\n"
	.string "replaced with “Helping Hand”.$"
