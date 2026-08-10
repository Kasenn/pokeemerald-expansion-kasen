EggIsland_Interior_MapScripts::
# 54 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME
# 55 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 78 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetSwitches
# 79 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
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

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 80 "data/maps/EggIsland_Interior/scripts.pory"
	map_script_2 VAR_STORY, 6, EggHatchScene2
	.2byte 0


SetUpInteriorAreaOne::
# 84 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 85 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
	return


SetUpInteriorAreaTwo::
# 88 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 89 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 3
	return


SetEggs::
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0xFFFF
	goto_if_eq SetEggs_2
SetEggs_1:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0xFFFF
	goto_if_eq SetEggs_5
SetEggs_4:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0xFFFF
	goto_if_eq SetEggs_8
SetEggs_7:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0xFFFF
	goto_if_eq SetEggs_11
SetEggs_10:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0xFFFF
	goto_if_eq SetEggs_14
SetEggs_13:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0xFFFF
	goto_if_eq SetEggs_17
SetEggs_16:
# 99 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0xFFFF
	goto_if_eq SetEggs_20
SetEggs_19:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0xFFFF
	goto_if_eq SetEggs_23
SetEggs_22:
# 101 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0xFFFF
	goto_if_eq SetEggs_26
SetEggs_25:
# 102 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0xFFFF
	goto_if_eq SetEggs_29
SetEggs_28:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0xFFFF
	goto_if_eq SetEggs_32
SetEggs_31:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetEggs_35
SetEggs_34:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetEggs_38
SetEggs_37:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetEggs_41
SetEggs_40:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetEggs_44
SetEggs_43:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetEggs_47
SetEggs_46:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetEggs_50
SetEggs_49:
# 111 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0
	goto_if_ne SetEggs_53
SetEggs_52:
# 112 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetEggs_56
SetEggs_55:
# 113 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0
	goto_if_ne SetEggs_59
SetEggs_58:
# 114 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0
	goto_if_ne SetEggs_62
SetEggs_61:
# 115 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0
	goto_if_ne SetEggs_64
	return

SetEggs_2:
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_1, 0
	goto SetEggs_1

SetEggs_5:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_2, 0
	goto SetEggs_4

SetEggs_8:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_3, 0
	goto SetEggs_7

SetEggs_11:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_4, 0
	goto SetEggs_10

SetEggs_14:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_5, 0
	goto SetEggs_13

SetEggs_17:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_6, 0
	goto SetEggs_16

SetEggs_20:
# 99 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_7, 0
	goto SetEggs_19

SetEggs_23:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_8, 0
	goto SetEggs_22

SetEggs_26:
# 101 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_9, 0
	goto SetEggs_25

SetEggs_29:
# 102 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_10, 0
	goto SetEggs_28

SetEggs_32:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_11, 0
	goto SetEggs_31

SetEggs_35:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, 47, 62
	goto SetEggs_34

SetEggs_38:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, 34, 80
	goto SetEggs_37

SetEggs_41:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, 26, 80
	goto SetEggs_40

SetEggs_44:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, 30, 83
	goto SetEggs_43

SetEggs_47:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, 22, 66
	goto SetEggs_46

SetEggs_50:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, 36, 69
	goto SetEggs_49

SetEggs_53:
# 111 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, 18, 48
	goto SetEggs_52

SetEggs_56:
# 112 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, 35, 51
	goto SetEggs_55

SetEggs_59:
# 113 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, 33, 42
	goto SetEggs_58

SetEggs_62:
# 114 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, 36, 30
	goto SetEggs_61

SetEggs_64:
# 115 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, 75, 31
	return


SetSwitches::
# 119 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetSwitches_2
SetSwitches_1:
# 124 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetSwitches_5
SetSwitches_4:
# 127 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetSwitches_8
SetSwitches_7:
# 130 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetSwitches_11
SetSwitches_10:
# 133 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetSwitches_14
SetSwitches_13:
# 137 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetSwitches_17
SetSwitches_16:
# 142 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0
	goto_if_ne SetSwitches_20
SetSwitches_19:
# 147 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetSwitches_23
SetSwitches_22:
# 153 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0
	goto_if_ne SetSwitches_26
SetSwitches_25:
# 158 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0
	goto_if_ne SetSwitches_29
SetSwitches_28:
# 162 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0
	goto_if_ne SetSwitches_32
SetSwitches_31:
# 167 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetSwitches_36
	return

SetSwitches_2:
# 120 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x379, FALSE
# 121 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x379, FALSE
# 122 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37B, FALSE
	goto SetSwitches_1

SetSwitches_5:
# 125 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37B, FALSE
	goto SetSwitches_4

SetSwitches_8:
# 128 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37B, FALSE
	goto SetSwitches_7

SetSwitches_11:
# 131 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37B, FALSE
	goto SetSwitches_10

SetSwitches_14:
# 134 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x379, FALSE
# 135 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37B, FALSE
	goto SetSwitches_13

SetSwitches_17:
# 138 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x379, FALSE
# 139 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x379, FALSE
# 140 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37B, FALSE
	goto SetSwitches_16

SetSwitches_20:
# 143 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x379, FALSE
# 144 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x379, FALSE
# 145 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37B, FALSE
	goto SetSwitches_19

SetSwitches_23:
# 148 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x379, FALSE
# 149 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x379, FALSE
# 150 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x379, FALSE
# 151 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37B, FALSE
	goto SetSwitches_22

SetSwitches_26:
# 154 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x379, FALSE
# 155 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x379, FALSE
# 156 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37B, FALSE
	goto SetSwitches_25

SetSwitches_29:
# 159 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x379, FALSE
# 160 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37B, FALSE
	goto SetSwitches_28

SetSwitches_32:
# 163 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x379, FALSE
# 164 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37B, FALSE
	goto SetSwitches_31

SetSwitches_34:
# 174 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 175 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x379, FALSE
	return

SetSwitches_35:
# 169 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetSwitches_40
	return

SetSwitches_36:
# 168 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetSwitches_35
	return

SetSwitches_39:
# 171 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetSwitches_44
	return

SetSwitches_40:
# 170 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetSwitches_39
	return

SetSwitches_43:
# 173 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetSwitches_34
	return

SetSwitches_44:
# 172 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetSwitches_43
	return


SetupMushroomInterior::
# 180 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroomInterior_2
# 183 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 184 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 185 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 186 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 187 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 188 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
# 189 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 190 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 55
	goto_if_eq SetupMushroomInterior_5
# 190 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq SetupMushroomInterior_5
SetupMushroomInterior_4:
# 193 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 194 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
	return

SetupMushroomInterior_2:
	return

SetupMushroomInterior_5:
# 191 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
	goto SetupMushroomInterior_4


PlateTrigger1::
# 198 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 199 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 200 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x379, FALSE
# 201 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x379, FALSE
# 202 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37B, FALSE
# 203 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger2::
# 207 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger2_2
PlateTrigger2_1:
# 215 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 216 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 217 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37B, FALSE
# 218 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger2_2:
# 208 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 209 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 210 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 211 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 212 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger2_1


PlateTrigger3::
# 222 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger3_2
PlateTrigger3_1:
# 230 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 231 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 232 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37B, FALSE
# 233 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger3_2:
# 223 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 224 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 225 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 226 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 227 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger3_1


PlateTrigger4::
# 237 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger4_2
PlateTrigger4_1:
# 245 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 246 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 247 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37B, FALSE
# 248 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger4_2:
# 238 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 239 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 240 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 241 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 242 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger4_1


PlateTrigger5::
# 252 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 253 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 254 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x379, FALSE
# 255 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37B, FALSE
# 256 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger6::
# 260 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 261 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 262 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x379, FALSE
# 263 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x379, FALSE
# 264 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37B, FALSE
# 265 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger7::
# 269 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 270 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 271 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x379, FALSE
# 272 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x379, FALSE
# 273 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37B, FALSE
# 274 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger8::
# 278 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 279 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 280 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x379, FALSE
# 281 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x379, FALSE
# 282 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x379, FALSE
# 283 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37B, FALSE
# 284 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger9::
# 288 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 289 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 290 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x379, FALSE
# 291 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x379, FALSE
# 292 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37B, FALSE
# 293 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger10::
# 297 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 298 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 299 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x379, FALSE
# 300 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37B, FALSE
# 301 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger11::
# 305 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 306 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 307 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x379, FALSE
# 308 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37B, FALSE
# 309 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript4
	return


MainPlateScript::
# 313 "data/maps/EggIsland_Interior/scripts.pory"
	getcustomvar
# 314 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0xFFFF
	goto_if_eq MainPlateScript_2
	return

MainPlateScript_2:
# 315 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


MainPlateScript2::
# 321 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 322 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 323 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 324 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 325 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne MainPlateScript2_4
MainPlateScript2_1:
# 334 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

MainPlateScript2_2:
# 332 "data/maps/EggIsland_Interior/scripts.pory"
	goto TriggerMainGate
	goto MainPlateScript2_1

MainPlateScript2_3:
# 327 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne MainPlateScript2_8
	goto MainPlateScript2_1

MainPlateScript2_4:
# 326 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne MainPlateScript2_3
	goto MainPlateScript2_1

MainPlateScript2_7:
# 329 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne MainPlateScript2_12
	goto MainPlateScript2_1

MainPlateScript2_8:
# 328 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne MainPlateScript2_7
	goto MainPlateScript2_1

MainPlateScript2_11:
# 331 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne MainPlateScript2_2
	goto MainPlateScript2_1

MainPlateScript2_12:
# 330 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne MainPlateScript2_11
	goto MainPlateScript2_1


MainPlateScript3::
# 338 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 339 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 340 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 341 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 342 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


MainPlateScript4::
# 347 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 348 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 349 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 350 "data/maps/EggIsland_Interior/scripts.pory"
	getobjectxy LOCALID_PUZZLE_BOULDER, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 351 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 75
	goto_if_eq MainPlateScript4_3
MainPlateScript4_1:
# 355 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 356 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

MainPlateScript4_2:
# 352 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_FINAL_BOULDER_IN_PLACE
# 353 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE_BOULDER, 75, 31
	goto MainPlateScript4_1

MainPlateScript4_3:
# 351 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MainPlateScript4_2
	goto MainPlateScript4_1


TriggerMainGate::
# 361 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 362 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x379, FALSE
# 363 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 364 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 365 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 366 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_DOOR_OPEN
# 367 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SteppedOffofSwitch1::
# 374 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 375 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 376 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x378, TRUE
# 377 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x378, TRUE
# 378 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37A, FALSE
# 379 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch2::
# 382 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 383 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 384 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37A, FALSE
# 385 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch3::
# 388 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 389 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 390 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37A, FALSE
# 391 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch4::
# 394 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 395 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 396 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37A, FALSE
# 397 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch5::
# 400 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 401 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 402 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x378, TRUE
# 403 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37A, FALSE
# 404 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch6::
# 407 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 408 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 409 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x378, TRUE
# 410 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x378, TRUE
# 411 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37A, FALSE
# 412 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch7::
# 415 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 416 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 417 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x378, TRUE
# 418 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x378, TRUE
# 419 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37A, FALSE
# 420 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch8::
# 423 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 424 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 425 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x378, TRUE
# 426 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x378, TRUE
# 427 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x378, TRUE
# 428 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37A, FALSE
# 429 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch9::
# 432 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 433 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 434 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x378, TRUE
# 435 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x378, TRUE
# 436 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37A, FALSE
# 437 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch10::
# 440 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 441 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 442 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x378, TRUE
# 443 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37A, FALSE
# 444 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch11::
# 447 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 448 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 449 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x378, TRUE
# 450 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37A, FALSE
# 451 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitchMain::
# 455 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 456 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 457 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 458 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0
# 459 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 460 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 461 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 462 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 463 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 464 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 465 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_eq SteppedOffofSwitchMain_3
SteppedOffofSwitchMain_1:
# 469 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SteppedOffofSwitchMain_2:
# 467 "data/maps/EggIsland_Interior/scripts.pory"
	goto BlockMainGate
	goto SteppedOffofSwitchMain_1

SteppedOffofSwitchMain_3:
# 466 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_DOOR_OPEN, SteppedOffofSwitchMain_2
	goto SteppedOffofSwitchMain_1


BlockMainGate::
# 474 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x378, TRUE
# 475 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x378, TRUE
# 476 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 477 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 478 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 479 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_DOOR_OPEN
# 480 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SetEggOnPedestal::
	msgbox SetEggOnPedestal_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetEggOnPedestal_2
# 489 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text2, MSGBOX_AUTOCLOSE
# 490 "data/maps/EggIsland_Interior/scripts.pory"
	special ChoosePartyEgg
# 491 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SetEggOnPedestal_5
# 491 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq SetEggOnPedestal_5
# 496 "data/maps/EggIsland_Interior/scripts.pory"
	removeegg VAR_0x8004
# 497 "data/maps/EggIsland_Interior/scripts.pory"
	call HideEggs
# 498 "data/maps/EggIsland_Interior/scripts.pory"
	copyvartocustomvar VAR_0x800A
# 500 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	switch VAR_FACING
# 502 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_NORTH, SetEggOnPedestal_11
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_WEST, SetEggOnPedestal_12
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_EAST, SetEggOnPedestal_13
# 505 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_SOUTH, SetEggOnPedestal_14
SetEggOnPedestal_9:
# 507 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 508 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 47
	goto_if_eq SetEggOnPedestal_17
SetEggOnPedestal_15:
# 513 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 34
	goto_if_eq SetEggOnPedestal_22
SetEggOnPedestal_20:
# 518 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq SetEggOnPedestal_27
SetEggOnPedestal_25:
# 523 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq SetEggOnPedestal_32
SetEggOnPedestal_30:
# 528 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq SetEggOnPedestal_37
SetEggOnPedestal_35:
# 533 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_42
SetEggOnPedestal_40:
# 538 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq SetEggOnPedestal_47
SetEggOnPedestal_45:
# 543 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 35
	goto_if_eq SetEggOnPedestal_52
SetEggOnPedestal_50:
# 548 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 33
	goto_if_eq SetEggOnPedestal_57
SetEggOnPedestal_55:
# 553 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_62
SetEggOnPedestal_60:
# 558 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 75
	goto_if_eq SetEggOnPedestal_67
SetEggOnPedestal_65:
# 563 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 564 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text3
# 565 "data/maps/EggIsland_Interior/scripts.pory"
	special CalculatePlayerPartyCount
# 566 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateEggPP
# 568 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_2:
# 486 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_5:
# 493 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_11:
# 502 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_0
	goto SetEggOnPedestal_9

SetEggOnPedestal_12:
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_1
	goto SetEggOnPedestal_9

SetEggOnPedestal_13:
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_2
	goto SetEggOnPedestal_9

SetEggOnPedestal_14:
# 505 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_3
	goto SetEggOnPedestal_9

SetEggOnPedestal_16:
# 509 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_1
# 510 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, VAR_TEMP_0, VAR_TEMP_1
# 511 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_1
	goto SetEggOnPedestal_15

SetEggOnPedestal_17:
# 508 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 62
	goto_if_eq SetEggOnPedestal_16
	goto SetEggOnPedestal_15

SetEggOnPedestal_21:
# 514 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_2
# 515 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, VAR_TEMP_0, VAR_TEMP_1
# 516 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_2
	goto SetEggOnPedestal_20

SetEggOnPedestal_22:
# 513 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_21
	goto SetEggOnPedestal_20

SetEggOnPedestal_26:
# 519 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_3
# 520 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, VAR_TEMP_0, VAR_TEMP_1
# 521 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_3
	goto SetEggOnPedestal_25

SetEggOnPedestal_27:
# 518 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_26
	goto SetEggOnPedestal_25

SetEggOnPedestal_31:
# 524 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_4
# 525 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, VAR_TEMP_0, VAR_TEMP_1
# 526 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_4
	goto SetEggOnPedestal_30

SetEggOnPedestal_32:
# 523 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 83
	goto_if_eq SetEggOnPedestal_31
	goto SetEggOnPedestal_30

SetEggOnPedestal_36:
# 529 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_5
# 530 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, VAR_TEMP_0, VAR_TEMP_1
# 531 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_5
	goto SetEggOnPedestal_35

SetEggOnPedestal_37:
# 528 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq SetEggOnPedestal_36
	goto SetEggOnPedestal_35

SetEggOnPedestal_41:
# 534 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_6
# 535 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, VAR_TEMP_0, VAR_TEMP_1
# 536 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_6
	goto SetEggOnPedestal_40

SetEggOnPedestal_42:
# 533 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 69
	goto_if_eq SetEggOnPedestal_41
	goto SetEggOnPedestal_40

SetEggOnPedestal_46:
# 539 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_7
# 540 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, VAR_TEMP_0, VAR_TEMP_1
# 541 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_7
	goto SetEggOnPedestal_45

SetEggOnPedestal_47:
# 538 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq SetEggOnPedestal_46
	goto SetEggOnPedestal_45

SetEggOnPedestal_51:
# 544 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_8
# 545 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, VAR_TEMP_0, VAR_TEMP_1
# 546 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_8
	goto SetEggOnPedestal_50

SetEggOnPedestal_52:
# 543 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq SetEggOnPedestal_51
	goto SetEggOnPedestal_50

SetEggOnPedestal_56:
# 549 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_9
# 550 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, VAR_TEMP_0, VAR_TEMP_1
# 551 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_9
	goto SetEggOnPedestal_55

SetEggOnPedestal_57:
# 548 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 42
	goto_if_eq SetEggOnPedestal_56
	goto SetEggOnPedestal_55

SetEggOnPedestal_61:
# 554 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_10
# 555 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, VAR_TEMP_0, VAR_TEMP_1
# 556 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_10
	goto SetEggOnPedestal_60

SetEggOnPedestal_62:
# 553 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq SetEggOnPedestal_61
	goto SetEggOnPedestal_60

SetEggOnPedestal_66:
# 559 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_11
# 560 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, VAR_TEMP_0, VAR_TEMP_1
# 561 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_11
	goto SetEggOnPedestal_65

SetEggOnPedestal_67:
# 558 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq SetEggOnPedestal_66
	goto SetEggOnPedestal_65


Script_GroundEgg1::
# 586 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 587 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_1
# 588 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg2::
# 591 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 592 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_2
# 593 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg3::
# 596 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 597 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_3
# 598 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg4::
# 601 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 602 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_4
# 603 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg5::
# 606 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 607 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_5
# 608 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg6::
# 611 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 612 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_6
# 613 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg7::
# 616 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 617 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_7
# 618 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg8::
# 621 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 622 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_8
# 623 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg9::
# 626 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 627 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_9
# 628 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg10::
# 631 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 632 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_10
# 633 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg11::
# 636 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 637 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_11
# 638 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


GroundEggMain::
# 642 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 643 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_ge GroundEggMain_2
	msgbox GroundEggMain_Text2, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GroundEggMain_5
# 651 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text_0, MSGBOX_AUTOCLOSE
# 652 "data/maps/EggIsland_Interior/scripts.pory"
	getcustomvar
# 653 "data/maps/EggIsland_Interior/scripts.pory"
	giveegg VAR_RESULT
# 654 "data/maps/EggIsland_Interior/scripts.pory"
	special CalculatePlayerPartyCount
# 655 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateEggPP
# 656 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateFollowingPokemon
# 657 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 658 "data/maps/EggIsland_Interior/scripts.pory"
	switch VAR_TEMP_6
# 659 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_1, GroundEggMain_8
# 660 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_2, GroundEggMain_9
# 661 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_3, GroundEggMain_10
# 662 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_4, GroundEggMain_11
# 663 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_5, GroundEggMain_12
# 664 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_6, GroundEggMain_13
# 665 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_7, GroundEggMain_14
# 666 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_8, GroundEggMain_15
# 667 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_9, GroundEggMain_16
# 668 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_10, GroundEggMain_17
# 669 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_11, GroundEggMain_18
	return

GroundEggMain_2:
# 644 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text1, MSGBOX_AUTOCLOSE
	end

GroundEggMain_5:
# 648 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

GroundEggMain_8:
# 659 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch1
	return

GroundEggMain_9:
# 660 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch2
	return

GroundEggMain_10:
# 661 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch3
	return

GroundEggMain_11:
# 662 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch4
	return

GroundEggMain_12:
# 663 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch5
	return

GroundEggMain_13:
# 664 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch6
	return

GroundEggMain_14:
# 665 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch7
	return

GroundEggMain_15:
# 666 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch8
	return

GroundEggMain_16:
# 667 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch9
	return

GroundEggMain_17:
# 668 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch10
	return

GroundEggMain_18:
# 669 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch11
	return


AITrigger0::
# 684 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 685 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 686 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
# 687 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


AITrigger1::
# 691 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 692 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 693 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 3
# 694 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


StaticTongueUpgrade::
# 698 "data/maps/EggIsland_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 699 "data/maps/EggIsland_Interior/scripts.pory"
	message StaticTongueUpgrade_Text_0
# 700 "data/maps/EggIsland_Interior/scripts.pory"
	delay 10
# 701 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 702 "data/maps/EggIsland_Interior/scripts.pory"
	waitfanfare
# 703 "data/maps/EggIsland_Interior/scripts.pory"
	waitmessage
# 704 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox StaticTongueUpgrade_Text
# 705 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 706 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


GripGloves::
# 715 "data/maps/EggIsland_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 716 "data/maps/EggIsland_Interior/scripts.pory"
	message GripGloves_Text_0
# 717 "data/maps/EggIsland_Interior/scripts.pory"
	delay 10
# 718 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 719 "data/maps/EggIsland_Interior/scripts.pory"
	waitfanfare
# 720 "data/maps/EggIsland_Interior/scripts.pory"
	waitmessage
# 721 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GripGlovesDescription
# 722 "data/maps/EggIsland_Interior/scripts.pory"
	callnative EquipGripGloves
# 723 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


TriggerHelpDiglett::
# 727 "data/maps/EggIsland_Interior/scripts.pory"
	playbgm MUS_HELP, TRUE
# 728 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_WEST
# 729 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 730 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_DIGLETT, Common_Movement_ExclamationMark
# 731 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 732 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 733 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 734 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 735 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 736 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox TriggerHelpDiglett_Text_1, MSGBOX_AUTOCLOSE
# 737 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
# 738 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 739 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_DISABLE_ENCOUNTERS
# 740 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 4
	return


DontLeaveDiglett::
# 744 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 745 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DontLeaveDiglett_Text_0, MSGBOX_AUTOCLOSE
# 746 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, DontLeaveDiglett_Movement_0
# 747 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 748 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


Sandshrew1::
# 752 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 753 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 754 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1_LetsBattle, MSGBOX_DEFAULT
# 755 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateMildMon
# 756 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SWIFT, move3 = MOVE_ROLLOUT, move4 = MOVE_RAPID_SPIN
# 757 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 758 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew2Attacks
	return


Sandshrew2::
# 762 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 763 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 764 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew2_LetsBattle, MSGBOX_DEFAULT
# 765 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateMildMon
# 766 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SWIFT, move3 = MOVE_ROLLOUT, move4 = MOVE_RAPID_SPIN
# 767 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 768 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew1Attacks
	return


Sandshrew1Attacks::
# 778 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 779 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Movement_ObjectDisappears
# 780 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 781 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW2
# 782 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 783 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Common_Movement_ExclamationMark
# 784 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 785 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 786 "data/maps/EggIsland_Interior/scripts.pory"
	delay 48
# 787 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Sandshrew1Attacks_Movement_0
# 788 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 789 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 790 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 791 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 792 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1Attacks_Text_0
# 793 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 794 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_EARTHQUAKE, move2 = MOVE_SLASH, move3 = MOVE_ROLLOUT, move4 = MOVE_GYRO_BALL
# 795 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 796 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Movement_ObjectDisappears
# 797 "data/maps/EggIsland_Interior/scripts.pory"
	savebgm MUS_DUMMY
# 798 "data/maps/EggIsland_Interior/scripts.pory"
	fadedefaultbgm
# 799 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 800 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW1
# 801 "data/maps/EggIsland_Interior/scripts.pory"
	goto SandshrewFinale
	return


Sandshrew2Attacks::
# 804 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 805 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Movement_ObjectDisappears
# 806 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 807 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW1
# 808 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 809 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Common_Movement_ExclamationMark
# 810 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 811 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 812 "data/maps/EggIsland_Interior/scripts.pory"
	delay 48
# 813 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Sandshrew2Attacks_Movement_0
# 814 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 815 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 816 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 817 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 818 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1Attacks_Text_0
# 819 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 820 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_EARTHQUAKE, move2 = MOVE_SLASH, move3 = MOVE_ROLLOUT, move4 = MOVE_GYRO_BALL
# 821 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 822 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Movement_ObjectDisappears
# 823 "data/maps/EggIsland_Interior/scripts.pory"
	savebgm MUS_DUMMY
# 824 "data/maps/EggIsland_Interior/scripts.pory"
	fadedefaultbgm
# 825 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 826 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW2
# 827 "data/maps/EggIsland_Interior/scripts.pory"
	goto SandshrewFinale
	return


SandshrewFinale::
# 831 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 832 "data/maps/EggIsland_Interior/scripts.pory"
	delay 32
# 833 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 53
	goto_if_eq SandshrewFinale_2
# 837 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SandshrewFinale_Movement_1
SandshrewFinale_1:
# 839 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 840 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 841 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_WEST
# 842 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 843 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 844 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SandshrewFinale_Text, MSGBOX_AUTOCLOSE
# 845 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 846 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
# 847 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 848 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_DIGLETT, SandshrewFinale_Movement_2
# 849 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 850 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 851 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 852 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_DIGLETT
# 853 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 854 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 5
# 855 "data/maps/EggIsland_Interior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_INTERIOR, 32, 72
# 856 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 857 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SandshrewFinale_Text2
# 858 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return

SandshrewFinale_2:
# 834 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SandshrewFinale_Movement_0
	goto SandshrewFinale_1


DiglettScript::
# 884 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 885 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DiglettScript_Text, MSGBOX_NPC
# 886 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
	return


EggHatchScene::
# 893 "data/maps/EggIsland_Interior/scripts.pory"
	lockall
# 894 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Text_EggHatchHuh, MSGBOX_DEFAULT
# 895 "data/maps/EggIsland_Interior/scripts.pory"
	special EggHatch
# 896 "data/maps/EggIsland_Interior/scripts.pory"
	releaseall
	end


EggHatchScene2::
# 901 "data/maps/EggIsland_Interior/scripts.pory"
	lockall
# 902 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 903 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 904 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER1, DIR_WEST
# 905 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 906 "data/maps/EggIsland_Interior/scripts.pory"
	bufferpartymonnickname STR_VAR_1, 1
# 907 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker EggHatchScene2_Text_0
# 908 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox EggHatchScene_Text
# 909 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 910 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker SP_NAME_NONE
# 911 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox EggHatchScene_Text2
# 912 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 7
# 913 "data/maps/EggIsland_Interior/scripts.pory"
	releaseall
	end


TurboBoostEncounters::
# 934 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 935 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_eq TurboBoostEncounters_2
# 939 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TURBOBOOST_ENCOUNTERS
# 940 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return

TurboBoostEncounters_2:
# 936 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


TurboBoostEncountersOff::
# 944 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 945 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


# 502 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_0:
# 502 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_up
	step_end

# 503 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_1:
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_left
	step_end

# 504 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_2:
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_right
	step_end

# 505 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_3:
# 505 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_down
	step_end

# 746 "data/maps/EggIsland_Interior/scripts.pory"
DontLeaveDiglett_Movement_0:
# 746 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
	step_end

# 787 "data/maps/EggIsland_Interior/scripts.pory"
Sandshrew1Attacks_Movement_0:
# 787 "data/maps/EggIsland_Interior/scripts.pory"
	walk_left
# 787 "data/maps/EggIsland_Interior/scripts.pory"
	walk_down
	step_end

# 813 "data/maps/EggIsland_Interior/scripts.pory"
Sandshrew2Attacks_Movement_0:
# 813 "data/maps/EggIsland_Interior/scripts.pory"
	walk_left
# 813 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
	step_end

# 834 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_0:
# 834 "data/maps/EggIsland_Interior/scripts.pory"
	walk_down
# 834 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_fast_right
	step_end

# 837 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_1:
# 837 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
# 837 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_fast_right
	step_end

# 848 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_2:
# 848 "data/maps/EggIsland_Interior/scripts.pory"
	nurse_joy_bow
	step_end

GroundEggMain_Text_0:
# 651 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi picked up the egg.$"

StaticTongueUpgrade_Text_0:
# 699 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi obtained the\nStatic Tongue Upgrade!$"

GripGloves_Text_0:
# 716 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi found the Grip Gloves!$"

TriggerHelpDiglett_Text_0:
# 735 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Diglett$"

TriggerHelpDiglett_Text_1:
# 736 "data/maps/EggIsland_Interior/scripts.pory"
	.string "You there, please help!\pI am getting bullied by\nthese two shrews!$"

DontLeaveDiglett_Text_0:
# 745 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please don't leave me here\nwith these two!$"

Sandshrew1_Text_0:
# 753 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Sandshrew$"

Sandshrew1Attacks_Text_0:
# 792 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Now you've done it!$"

EggHatchScene2_Text_0:
# 907 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{STR_VAR_1}$"

SetEggOnPedestal_Text::
# 571 "data/maps/EggIsland_Interior/scripts.pory"
	.string "There seems to be a weighted\n"
	.string "pressure plate under this egg.\l"
	.string "Leave an egg on the plate?$"

SetEggOnPedestal_Text2::
# 576 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Choose an egg to leave\n"
	.string "on the plate.$"

SetEggOnPedestal_Text3::
# 580 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi left an egg\n"
	.string "on the plate.$"

GroundEggMain_Text1::
# 673 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.$"

GroundEggMain_Text2::
# 677 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.\l"
	.string "Do you want to pick it up?$"

StaticTongueUpgrade_Text::
# 709 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi's “Tongue Attack” now has\n"
	.string "a chance to paralyze the target.$"

Sandshrew1_LetsBattle::
# 770 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Who are you? Get lost!$"

Sandshrew2_LetsBattle::
# 773 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Don't butt in!$"

SandshrewFinale_Text::
# 861 "data/maps/EggIsland_Interior/scripts.pory"
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
# 872 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}You can now use the “Retreat”\n"
	.string "option in the Start Menu to\l"
	.string "return to the latest discovered\l"
	.string "save point.\p"
	.string "You can also use the move\n"
	.string "“Call Diglett” once every battle\l"
	.string "to summon Diglett to fiercely\l"
	.string "strike your foes.$"

DiglettScript_Text::
# 888 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please help me!$"

EggHatchScene_Text::
# 917 "data/maps/EggIsland_Interior/scripts.pory"
	.string "This hot sand must've\n"
	.string "accelerated our growth.\p"
	.string "But don't worry, Yoshi!\p"
	.string "Even if our form has changed,\n"
	.string "we will still aid you\l"
	.string "the best we can!\p"
	.string "Now, let's go find that\n"
	.string "Kamek guy!$"

EggHatchScene_Text2::
# 928 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}Yoshi's “Toss Egg” has been\n"
	.string "replaced with “Helping Hand”.$"
