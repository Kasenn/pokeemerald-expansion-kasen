EggIsland_Interior_MapScripts::
# 54 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME
# 55 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 81 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetSwitches
# 82 "data/maps/EggIsland_Interior/scripts.pory"
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
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 63 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 64 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 65 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 32
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 70 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 71 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 3
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 73 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_FINAL_BOULDER_IN_PLACE, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
	hasmonitem 0, ITEM_STRENGTH_GLOVES
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 78 "data/maps/EggIsland_Interior/scripts.pory"
	call SetupMushroomInterior
# 79 "data/maps/EggIsland_Interior/scripts.pory"
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
# 66 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 67 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 63 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 64 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 55
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 65 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 72
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 73 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE_BOULDER, 75, 31
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 76 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 83 "data/maps/EggIsland_Interior/scripts.pory"
	map_script_2 VAR_STORY, 6, EggHatchScene2
	.2byte 0


SetEggs::
# 88 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0xFFFF
	goto_if_eq SetEggs_2
SetEggs_1:
# 89 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0xFFFF
	goto_if_eq SetEggs_5
SetEggs_4:
# 90 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0xFFFF
	goto_if_eq SetEggs_8
SetEggs_7:
# 91 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0xFFFF
	goto_if_eq SetEggs_11
SetEggs_10:
# 92 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0xFFFF
	goto_if_eq SetEggs_14
SetEggs_13:
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0xFFFF
	goto_if_eq SetEggs_17
SetEggs_16:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0xFFFF
	goto_if_eq SetEggs_20
SetEggs_19:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0xFFFF
	goto_if_eq SetEggs_23
SetEggs_22:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0xFFFF
	goto_if_eq SetEggs_26
SetEggs_25:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0xFFFF
	goto_if_eq SetEggs_29
SetEggs_28:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0xFFFF
	goto_if_eq SetEggs_32
SetEggs_31:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetEggs_35
SetEggs_34:
# 101 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetEggs_38
SetEggs_37:
# 102 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetEggs_41
SetEggs_40:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetEggs_44
SetEggs_43:
# 104 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetEggs_47
SetEggs_46:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetEggs_50
SetEggs_49:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0
	goto_if_ne SetEggs_53
SetEggs_52:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetEggs_56
SetEggs_55:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0
	goto_if_ne SetEggs_59
SetEggs_58:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0
	goto_if_ne SetEggs_62
SetEggs_61:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0
	goto_if_ne SetEggs_64
	return

SetEggs_2:
# 88 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_1, 0
	goto SetEggs_1

SetEggs_5:
# 89 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_2, 0
	goto SetEggs_4

SetEggs_8:
# 90 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_3, 0
	goto SetEggs_7

SetEggs_11:
# 91 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_4, 0
	goto SetEggs_10

SetEggs_14:
# 92 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_5, 0
	goto SetEggs_13

SetEggs_17:
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_6, 0
	goto SetEggs_16

SetEggs_20:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_7, 0
	goto SetEggs_19

SetEggs_23:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_8, 0
	goto SetEggs_22

SetEggs_26:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_9, 0
	goto SetEggs_25

SetEggs_29:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_10, 0
	goto SetEggs_28

SetEggs_32:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_11, 0
	goto SetEggs_31

SetEggs_35:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, 47, 62
	goto SetEggs_34

SetEggs_38:
# 101 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, 34, 80
	goto SetEggs_37

SetEggs_41:
# 102 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, 26, 80
	goto SetEggs_40

SetEggs_44:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, 30, 83
	goto SetEggs_43

SetEggs_47:
# 104 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, 22, 66
	goto SetEggs_46

SetEggs_50:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, 36, 69
	goto SetEggs_49

SetEggs_53:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, 18, 48
	goto SetEggs_52

SetEggs_56:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, 35, 51
	goto SetEggs_55

SetEggs_59:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, 33, 42
	goto SetEggs_58

SetEggs_62:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, 36, 30
	goto SetEggs_61

SetEggs_64:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, 75, 31
	return


SetSwitches::
# 114 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetSwitches_2
SetSwitches_1:
# 119 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetSwitches_5
SetSwitches_4:
# 122 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetSwitches_8
SetSwitches_7:
# 125 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetSwitches_11
SetSwitches_10:
# 128 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetSwitches_14
SetSwitches_13:
# 132 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetSwitches_17
SetSwitches_16:
# 137 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0
	goto_if_ne SetSwitches_20
SetSwitches_19:
# 142 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetSwitches_23
SetSwitches_22:
# 148 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0
	goto_if_ne SetSwitches_26
SetSwitches_25:
# 153 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0
	goto_if_ne SetSwitches_29
SetSwitches_28:
# 157 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0
	goto_if_ne SetSwitches_32
# 157 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_FINAL_BOULDER_IN_PLACE, SetSwitches_32
SetSwitches_31:
# 162 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetSwitches_38
	return

SetSwitches_2:
# 115 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x379, FALSE
# 116 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x379, FALSE
# 117 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37B, FALSE
	goto SetSwitches_1

SetSwitches_5:
# 120 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37B, FALSE
	goto SetSwitches_4

SetSwitches_8:
# 123 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37B, FALSE
	goto SetSwitches_7

SetSwitches_11:
# 126 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37B, FALSE
	goto SetSwitches_10

SetSwitches_14:
# 129 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x379, FALSE
# 130 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37B, FALSE
	goto SetSwitches_13

SetSwitches_17:
# 133 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x379, FALSE
# 134 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x379, FALSE
# 135 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37B, FALSE
	goto SetSwitches_16

SetSwitches_20:
# 138 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x379, FALSE
# 139 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x379, FALSE
# 140 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37B, FALSE
	goto SetSwitches_19

SetSwitches_23:
# 143 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x379, FALSE
# 144 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x379, FALSE
# 145 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x379, FALSE
# 146 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37B, FALSE
	goto SetSwitches_22

SetSwitches_26:
# 149 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x379, FALSE
# 150 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x379, FALSE
# 151 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37B, FALSE
	goto SetSwitches_25

SetSwitches_29:
# 154 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x379, FALSE
# 155 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37B, FALSE
	goto SetSwitches_28

SetSwitches_32:
# 158 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x379, FALSE
# 159 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37B, FALSE
	goto SetSwitches_31

SetSwitches_36:
# 169 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 170 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x379, FALSE
	return

SetSwitches_37:
# 164 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetSwitches_42
	return

SetSwitches_38:
# 163 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetSwitches_37
	return

SetSwitches_41:
# 166 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetSwitches_46
	return

SetSwitches_42:
# 165 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetSwitches_41
	return

SetSwitches_45:
# 168 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetSwitches_36
	return

SetSwitches_46:
# 167 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetSwitches_45
	return


SetupMushroomInterior::
# 175 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroomInterior_2
# 178 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 179 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 180 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 181 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 182 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 183 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
# 184 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 185 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 55
	goto_if_eq SetupMushroomInterior_5
# 185 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq SetupMushroomInterior_5
SetupMushroomInterior_4:
# 188 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 189 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
	return

SetupMushroomInterior_2:
	return

SetupMushroomInterior_5:
# 186 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
	goto SetupMushroomInterior_4


PlateTrigger1::
# 193 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 194 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 195 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x379, FALSE
# 196 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x379, FALSE
# 197 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37B, FALSE
# 198 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger2::
# 202 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger2_2
PlateTrigger2_1:
# 210 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 211 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 212 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37B, FALSE
# 213 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger2_2:
# 203 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 204 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 205 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 206 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 207 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger2_1


PlateTrigger3::
# 217 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger3_2
PlateTrigger3_1:
# 225 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 226 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 227 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37B, FALSE
# 228 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger3_2:
# 218 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 219 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 220 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 221 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 222 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger3_1


PlateTrigger4::
# 232 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, PlateTrigger4_2
PlateTrigger4_1:
# 240 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 241 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 242 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37B, FALSE
# 243 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return

PlateTrigger4_2:
# 233 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_GEODUDES_AWAKENED
# 234 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_1
# 235 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_2
# 236 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_3
# 237 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PlateTrigger4_1


PlateTrigger5::
# 247 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 248 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 249 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x379, FALSE
# 250 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37B, FALSE
# 251 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger6::
# 255 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 256 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 257 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x379, FALSE
# 258 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x379, FALSE
# 259 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37B, FALSE
# 260 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger7::
# 264 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 265 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 266 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x379, FALSE
# 267 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x379, FALSE
# 268 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37B, FALSE
# 269 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger8::
# 273 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 274 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 275 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x379, FALSE
# 276 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x379, FALSE
# 277 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x379, FALSE
# 278 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37B, FALSE
# 279 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript2
	return


PlateTrigger9::
# 283 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 284 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 285 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x379, FALSE
# 286 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x379, FALSE
# 287 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37B, FALSE
# 288 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger10::
# 292 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 293 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 294 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x379, FALSE
# 295 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37B, FALSE
# 296 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript3
	return


PlateTrigger11::
# 300 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 301 "data/maps/EggIsland_Interior/scripts.pory"
	call MainPlateScript
# 302 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x379, FALSE
# 303 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37B, FALSE
# 304 "data/maps/EggIsland_Interior/scripts.pory"
	goto MainPlateScript4
	return


MainPlateScript::
# 308 "data/maps/EggIsland_Interior/scripts.pory"
	getcustomvar
# 309 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0xFFFF
	goto_if_eq MainPlateScript_2
	return

MainPlateScript_2:
# 310 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


MainPlateScript2::
# 316 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 317 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 318 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 319 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 320 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne MainPlateScript2_4
MainPlateScript2_1:
# 329 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

MainPlateScript2_2:
# 327 "data/maps/EggIsland_Interior/scripts.pory"
	goto TriggerMainGate
	goto MainPlateScript2_1

MainPlateScript2_3:
# 322 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne MainPlateScript2_8
	goto MainPlateScript2_1

MainPlateScript2_4:
# 321 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne MainPlateScript2_3
	goto MainPlateScript2_1

MainPlateScript2_7:
# 324 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne MainPlateScript2_12
	goto MainPlateScript2_1

MainPlateScript2_8:
# 323 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne MainPlateScript2_7
	goto MainPlateScript2_1

MainPlateScript2_11:
# 326 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne MainPlateScript2_2
	goto MainPlateScript2_1

MainPlateScript2_12:
# 325 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne MainPlateScript2_11
	goto MainPlateScript2_1


MainPlateScript3::
# 333 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 334 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 335 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 336 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 337 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


MainPlateScript4::
# 342 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 343 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 344 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 345 "data/maps/EggIsland_Interior/scripts.pory"
	getobjectxy LOCALID_PUZZLE_BOULDER, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 346 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 75
	goto_if_eq MainPlateScript4_3
MainPlateScript4_1:
# 350 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0xFFFF
# 351 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

MainPlateScript4_2:
# 347 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_FINAL_BOULDER_IN_PLACE
# 348 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE_BOULDER, 75, 31
	goto MainPlateScript4_1

MainPlateScript4_3:
# 346 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MainPlateScript4_2
	goto MainPlateScript4_1


TriggerMainGate::
# 356 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 357 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x379, FALSE
# 358 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 359 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 360 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 361 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_DOOR_OPEN
# 362 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SteppedOffofSwitch1::
# 369 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 370 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 371 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x378, TRUE
# 372 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x378, TRUE
# 373 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37A, FALSE
# 374 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch2::
# 377 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 378 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 379 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37A, FALSE
# 380 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch3::
# 383 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 384 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 385 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37A, FALSE
# 386 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch4::
# 389 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 390 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 391 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37A, FALSE
# 392 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch5::
# 395 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 396 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 397 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x378, TRUE
# 398 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37A, FALSE
# 399 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch6::
# 402 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 403 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 404 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x378, TRUE
# 405 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x378, TRUE
# 406 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37A, FALSE
# 407 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch7::
# 410 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 411 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 412 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x378, TRUE
# 413 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x378, TRUE
# 414 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37A, FALSE
# 415 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch8::
# 418 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 419 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 420 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x378, TRUE
# 421 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x378, TRUE
# 422 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x378, TRUE
# 423 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37A, FALSE
# 424 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch9::
# 427 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 428 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 429 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x378, TRUE
# 430 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x378, TRUE
# 431 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37A, FALSE
# 432 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch10::
# 435 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 436 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 437 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x378, TRUE
# 438 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37A, FALSE
# 439 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch11::
# 442 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_FINAL_BOULDER_IN_PLACE, SteppedOffofSwitch11_2
# 446 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 447 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 448 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x378, TRUE
# 449 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37A, FALSE
# 450 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return

SteppedOffofSwitch11_2:
# 443 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SteppedOffofSwitchMain::
# 454 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 455 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 456 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 457 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0
# 458 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 459 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 460 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 461 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 462 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 463 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 464 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_eq SteppedOffofSwitchMain_3
SteppedOffofSwitchMain_1:
# 468 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SteppedOffofSwitchMain_2:
# 466 "data/maps/EggIsland_Interior/scripts.pory"
	goto BlockMainGate
	goto SteppedOffofSwitchMain_1

SteppedOffofSwitchMain_3:
# 465 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_DOOR_OPEN, SteppedOffofSwitchMain_2
	goto SteppedOffofSwitchMain_1


BlockMainGate::
# 473 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x378, TRUE
# 474 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x378, TRUE
# 475 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 476 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 477 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 478 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_DOOR_OPEN
# 479 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SetEggOnPedestal::
	msgbox SetEggOnPedestal_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetEggOnPedestal_2
# 488 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text2, MSGBOX_AUTOCLOSE
# 489 "data/maps/EggIsland_Interior/scripts.pory"
	special ChoosePartyEgg
# 490 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SetEggOnPedestal_5
# 490 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq SetEggOnPedestal_5
# 495 "data/maps/EggIsland_Interior/scripts.pory"
	removeegg VAR_0x8004
# 496 "data/maps/EggIsland_Interior/scripts.pory"
	call HideEggs
# 497 "data/maps/EggIsland_Interior/scripts.pory"
	copyvartocustomvar VAR_0x800A
# 499 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 500 "data/maps/EggIsland_Interior/scripts.pory"
	switch VAR_FACING
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_NORTH, SetEggOnPedestal_11
# 502 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_WEST, SetEggOnPedestal_12
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_EAST, SetEggOnPedestal_13
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	case DIR_SOUTH, SetEggOnPedestal_14
SetEggOnPedestal_9:
# 506 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 507 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 47
	goto_if_eq SetEggOnPedestal_17
SetEggOnPedestal_15:
# 512 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 34
	goto_if_eq SetEggOnPedestal_22
SetEggOnPedestal_20:
# 517 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq SetEggOnPedestal_27
SetEggOnPedestal_25:
# 522 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq SetEggOnPedestal_32
SetEggOnPedestal_30:
# 527 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq SetEggOnPedestal_37
SetEggOnPedestal_35:
# 532 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_42
SetEggOnPedestal_40:
# 537 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq SetEggOnPedestal_47
SetEggOnPedestal_45:
# 542 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 35
	goto_if_eq SetEggOnPedestal_52
SetEggOnPedestal_50:
# 547 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 33
	goto_if_eq SetEggOnPedestal_57
SetEggOnPedestal_55:
# 552 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_62
SetEggOnPedestal_60:
# 557 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 75
	goto_if_eq SetEggOnPedestal_67
SetEggOnPedestal_65:
# 562 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 563 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text3
# 564 "data/maps/EggIsland_Interior/scripts.pory"
	special CalculatePlayerPartyCount
# 565 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateEggPP
# 566 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 567 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_eq SetEggOnPedestal_71
SetEggOnPedestal_70:
# 572 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_2:
# 485 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_5:
# 492 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_11:
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_0
	goto SetEggOnPedestal_9

SetEggOnPedestal_12:
# 502 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_1
	goto SetEggOnPedestal_9

SetEggOnPedestal_13:
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_2
	goto SetEggOnPedestal_9

SetEggOnPedestal_14:
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SetEggOnPedestal_Movement_3
	goto SetEggOnPedestal_9

SetEggOnPedestal_16:
# 508 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_1
# 509 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, VAR_TEMP_0, VAR_TEMP_1
# 510 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_1
	goto SetEggOnPedestal_15

SetEggOnPedestal_17:
# 507 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 62
	goto_if_eq SetEggOnPedestal_16
	goto SetEggOnPedestal_15

SetEggOnPedestal_21:
# 513 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_2
# 514 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, VAR_TEMP_0, VAR_TEMP_1
# 515 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_2
	goto SetEggOnPedestal_20

SetEggOnPedestal_22:
# 512 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_21
	goto SetEggOnPedestal_20

SetEggOnPedestal_26:
# 518 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_3
# 519 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, VAR_TEMP_0, VAR_TEMP_1
# 520 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_3
	goto SetEggOnPedestal_25

SetEggOnPedestal_27:
# 517 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_26
	goto SetEggOnPedestal_25

SetEggOnPedestal_31:
# 523 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_4
# 524 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, VAR_TEMP_0, VAR_TEMP_1
# 525 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_4
	goto SetEggOnPedestal_30

SetEggOnPedestal_32:
# 522 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 83
	goto_if_eq SetEggOnPedestal_31
	goto SetEggOnPedestal_30

SetEggOnPedestal_36:
# 528 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_5
# 529 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, VAR_TEMP_0, VAR_TEMP_1
# 530 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_5
	goto SetEggOnPedestal_35

SetEggOnPedestal_37:
# 527 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq SetEggOnPedestal_36
	goto SetEggOnPedestal_35

SetEggOnPedestal_41:
# 533 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_6
# 534 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, VAR_TEMP_0, VAR_TEMP_1
# 535 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_6
	goto SetEggOnPedestal_40

SetEggOnPedestal_42:
# 532 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 69
	goto_if_eq SetEggOnPedestal_41
	goto SetEggOnPedestal_40

SetEggOnPedestal_46:
# 538 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_7
# 539 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, VAR_TEMP_0, VAR_TEMP_1
# 540 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_7
	goto SetEggOnPedestal_45

SetEggOnPedestal_47:
# 537 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq SetEggOnPedestal_46
	goto SetEggOnPedestal_45

SetEggOnPedestal_51:
# 543 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_8
# 544 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, VAR_TEMP_0, VAR_TEMP_1
# 545 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_8
	goto SetEggOnPedestal_50

SetEggOnPedestal_52:
# 542 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq SetEggOnPedestal_51
	goto SetEggOnPedestal_50

SetEggOnPedestal_56:
# 548 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_9
# 549 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, VAR_TEMP_0, VAR_TEMP_1
# 550 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_9
	goto SetEggOnPedestal_55

SetEggOnPedestal_57:
# 547 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 42
	goto_if_eq SetEggOnPedestal_56
	goto SetEggOnPedestal_55

SetEggOnPedestal_61:
# 553 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_10
# 554 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, VAR_TEMP_0, VAR_TEMP_1
# 555 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_10
	goto SetEggOnPedestal_60

SetEggOnPedestal_62:
# 552 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq SetEggOnPedestal_61
	goto SetEggOnPedestal_60

SetEggOnPedestal_66:
# 558 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_11
# 559 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, VAR_TEMP_0, VAR_TEMP_1
# 560 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_11
	goto SetEggOnPedestal_65

SetEggOnPedestal_67:
# 557 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq SetEggOnPedestal_66
	goto SetEggOnPedestal_65

SetEggOnPedestal_71:
# 568 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_FORCE_EGG
# 569 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_FORCE_ENCOUNTER, 0
	goto SetEggOnPedestal_70


Script_GroundEgg1::
# 590 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 591 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_1
# 592 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg2::
# 595 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 596 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_2
# 597 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg3::
# 600 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 601 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_3
# 602 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg4::
# 605 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 606 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_4
# 607 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg5::
# 610 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 611 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_5
# 612 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg6::
# 615 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 616 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_6
# 617 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg7::
# 620 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 621 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_7
# 622 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg8::
# 625 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 626 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_8
# 627 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg9::
# 630 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 631 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_9
# 632 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg10::
# 635 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 636 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_10
# 637 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg11::
# 640 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 641 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_11
# 642 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


GroundEggMain::
# 646 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 647 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_ge GroundEggMain_2
	msgbox GroundEggMain_Text2, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GroundEggMain_5
# 655 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text_0, MSGBOX_AUTOCLOSE
# 656 "data/maps/EggIsland_Interior/scripts.pory"
	getcustomvar
# 657 "data/maps/EggIsland_Interior/scripts.pory"
	giveegg VAR_RESULT
# 658 "data/maps/EggIsland_Interior/scripts.pory"
	special CalculatePlayerPartyCount
# 659 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateEggPP
# 660 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateFollowingPokemon
# 661 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 662 "data/maps/EggIsland_Interior/scripts.pory"
	switch VAR_TEMP_6
# 663 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_1, GroundEggMain_8
# 664 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_2, GroundEggMain_9
# 665 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_3, GroundEggMain_10
# 666 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_4, GroundEggMain_11
# 667 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_5, GroundEggMain_12
# 668 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_6, GroundEggMain_13
# 669 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_7, GroundEggMain_14
# 670 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_8, GroundEggMain_15
# 671 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_9, GroundEggMain_16
# 672 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_10, GroundEggMain_17
# 673 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_11, GroundEggMain_18
	return

GroundEggMain_2:
# 648 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text1, MSGBOX_AUTOCLOSE
	end

GroundEggMain_5:
# 652 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

GroundEggMain_8:
# 663 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch1
	return

GroundEggMain_9:
# 664 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch2
	return

GroundEggMain_10:
# 665 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch3
	return

GroundEggMain_11:
# 666 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch4
	return

GroundEggMain_12:
# 667 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch5
	return

GroundEggMain_13:
# 668 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch6
	return

GroundEggMain_14:
# 669 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch7
	return

GroundEggMain_15:
# 670 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch8
	return

GroundEggMain_16:
# 671 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch9
	return

GroundEggMain_17:
# 672 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch10
	return

GroundEggMain_18:
# 673 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch11
	return


AITrigger0::
# 688 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 689 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 690 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
# 691 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


AITrigger1::
# 695 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 696 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 697 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 3
# 698 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


StaticTongueUpgrade::
# 702 "data/maps/EggIsland_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 703 "data/maps/EggIsland_Interior/scripts.pory"
	message StaticTongueUpgrade_Text_0
# 704 "data/maps/EggIsland_Interior/scripts.pory"
	delay 10
# 705 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 706 "data/maps/EggIsland_Interior/scripts.pory"
	waitfanfare
# 707 "data/maps/EggIsland_Interior/scripts.pory"
	waitmessage
# 708 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox StaticTongueUpgrade_Text
# 709 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 710 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


GripGloves::
# 719 "data/maps/EggIsland_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 720 "data/maps/EggIsland_Interior/scripts.pory"
	message GripGloves_Text_0
# 721 "data/maps/EggIsland_Interior/scripts.pory"
	delay 10
# 722 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 723 "data/maps/EggIsland_Interior/scripts.pory"
	waitfanfare
# 724 "data/maps/EggIsland_Interior/scripts.pory"
	waitmessage
# 725 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GripGlovesDescription
# 726 "data/maps/EggIsland_Interior/scripts.pory"
	callnative EquipGripGloves
# 727 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


TriggerHelpDiglett::
# 731 "data/maps/EggIsland_Interior/scripts.pory"
	playbgm MUS_HELP, TRUE
# 732 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_WEST
# 733 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 734 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_DIGLETT, Common_Movement_ExclamationMark
# 735 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 736 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 737 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 738 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 739 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 740 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox TriggerHelpDiglett_Text_1, MSGBOX_AUTOCLOSE
# 741 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
# 742 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 743 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_DISABLE_ENCOUNTERS
# 744 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 4
	return


DontLeaveDiglett::
# 748 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 749 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DontLeaveDiglett_Text_0, MSGBOX_AUTOCLOSE
# 750 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, DontLeaveDiglett_Movement_0
# 751 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 752 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


Sandshrew1::
# 756 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 757 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 758 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1_LetsBattle, MSGBOX_DEFAULT
# 759 "data/maps/EggIsland_Interior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 760 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateMildMon
# 761 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SWIFT, move3 = MOVE_ROLLOUT, move4 = MOVE_RAPID_SPIN
# 762 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 763 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew2Attacks
	return


Sandshrew2::
# 767 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 768 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 769 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew2_LetsBattle, MSGBOX_DEFAULT
# 770 "data/maps/EggIsland_Interior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 771 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateMildMon
# 772 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SWIFT, move3 = MOVE_ROLLOUT, move4 = MOVE_RAPID_SPIN
# 773 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 774 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew1Attacks
	return


Sandshrew1Attacks::
# 784 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 785 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Movement_ObjectDisappears
# 786 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 787 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW2
# 788 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 789 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Common_Movement_ExclamationMark
# 790 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 791 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 792 "data/maps/EggIsland_Interior/scripts.pory"
	delay 48
# 793 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Sandshrew1Attacks_Movement_0
# 794 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 795 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 796 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 797 "data/maps/EggIsland_Interior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 798 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 799 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1Attacks_Text_0
# 800 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 801 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SLASH, move3 = MOVE_ROLLOUT, move4 = MOVE_GYRO_BALL
# 802 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 803 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Movement_ObjectDisappears
# 804 "data/maps/EggIsland_Interior/scripts.pory"
	savebgm MUS_DUMMY
# 805 "data/maps/EggIsland_Interior/scripts.pory"
	fadedefaultbgm
# 806 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 807 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW1
# 808 "data/maps/EggIsland_Interior/scripts.pory"
	goto SandshrewFinale
	return


Sandshrew2Attacks::
# 811 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 812 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW1, Movement_ObjectDisappears
# 813 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 814 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW1
# 815 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 816 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Common_Movement_ExclamationMark
# 817 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 818 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 819 "data/maps/EggIsland_Interior/scripts.pory"
	delay 48
# 820 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Sandshrew2Attacks_Movement_0
# 821 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 822 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 823 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 824 "data/maps/EggIsland_Interior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 825 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 826 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1Attacks_Text_0
# 827 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 828 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000, move1 = MOVE_MAGNITUDE, move2 = MOVE_SLASH, move3 = MOVE_ROLLOUT, move4 = MOVE_GYRO_BALL
# 829 "data/maps/EggIsland_Interior/scripts.pory"
	dowildbattle
# 830 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_SANDSHREW2, Movement_ObjectDisappears
# 831 "data/maps/EggIsland_Interior/scripts.pory"
	savebgm MUS_DUMMY
# 832 "data/maps/EggIsland_Interior/scripts.pory"
	fadedefaultbgm
# 833 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 834 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_SANDSHREW2
# 835 "data/maps/EggIsland_Interior/scripts.pory"
	goto SandshrewFinale
	return


SandshrewFinale::
# 839 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 840 "data/maps/EggIsland_Interior/scripts.pory"
	delay 32
# 841 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 53
	goto_if_eq SandshrewFinale_2
# 845 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SandshrewFinale_Movement_1
SandshrewFinale_1:
# 847 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 848 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 849 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_WEST
# 850 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 851 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 852 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SandshrewFinale_Text, MSGBOX_AUTOCLOSE
# 853 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 854 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
# 855 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 856 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_DIGLETT, SandshrewFinale_Movement_2
# 857 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 858 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 859 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 860 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject LOCALID_DIGLETT
# 861 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 862 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 5
# 863 "data/maps/EggIsland_Interior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_INTERIOR, 32, 72
# 864 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 865 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SandshrewFinale_Text2
# 866 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return

SandshrewFinale_2:
# 842 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, SandshrewFinale_Movement_0
	goto SandshrewFinale_1


DiglettScript::
# 892 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 893 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DiglettScript_Text, MSGBOX_NPC
# 894 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
	return


EggHatchScene::
# 901 "data/maps/EggIsland_Interior/scripts.pory"
	lockall
# 902 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_EXP_SHARE
# 903 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Text_EggHatchHuh, MSGBOX_DEFAULT
# 904 "data/maps/EggIsland_Interior/scripts.pory"
	special EggHatch
# 905 "data/maps/EggIsland_Interior/scripts.pory"
	releaseall
	end


EggHatchScene2::
# 910 "data/maps/EggIsland_Interior/scripts.pory"
	lockall
# 911 "data/maps/EggIsland_Interior/scripts.pory"
	delay 16
# 912 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 913 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER1, DIR_WEST
# 914 "data/maps/EggIsland_Interior/scripts.pory"
	delay 8
# 915 "data/maps/EggIsland_Interior/scripts.pory"
	bufferpartymonnickname STR_VAR_1, 1
# 916 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker EggHatchScene2_Text_0
# 917 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox EggHatchScene_Text
# 918 "data/maps/EggIsland_Interior/scripts.pory"
	call SetYoshiMoves
# 919 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker SP_NAME_NONE
# 920 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox EggHatchScene_Text2
# 921 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, EggHatchScene2_2
EggHatchScene2_1:
# 924 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 7
# 925 "data/maps/EggIsland_Interior/scripts.pory"
	releaseall
	end

EggHatchScene2_2:
# 922 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox EggHatchScene_Text3
	goto EggHatchScene2_1


TurboBoostEncounters::
# 952 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 953 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_eq TurboBoostEncounters_2
# 957 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TURBOBOOST_ENCOUNTERS
# 958 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return

TurboBoostEncounters_2:
# 954 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


TurboBoostEncountersOff::
# 962 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 963 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


# 501 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_0:
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_up
	step_end

# 502 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_1:
# 502 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_left
	step_end

# 503 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_2:
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_right
	step_end

# 504 "data/maps/EggIsland_Interior/scripts.pory"
SetEggOnPedestal_Movement_3:
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_down
	step_end

# 750 "data/maps/EggIsland_Interior/scripts.pory"
DontLeaveDiglett_Movement_0:
# 750 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
	step_end

# 793 "data/maps/EggIsland_Interior/scripts.pory"
Sandshrew1Attacks_Movement_0:
# 793 "data/maps/EggIsland_Interior/scripts.pory"
	walk_left
# 793 "data/maps/EggIsland_Interior/scripts.pory"
	walk_down
	step_end

# 820 "data/maps/EggIsland_Interior/scripts.pory"
Sandshrew2Attacks_Movement_0:
# 820 "data/maps/EggIsland_Interior/scripts.pory"
	walk_left
# 820 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
	step_end

# 842 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_0:
# 842 "data/maps/EggIsland_Interior/scripts.pory"
	walk_down
# 842 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_fast_right
	step_end

# 845 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_1:
# 845 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
# 845 "data/maps/EggIsland_Interior/scripts.pory"
	walk_in_place_fast_right
	step_end

# 856 "data/maps/EggIsland_Interior/scripts.pory"
SandshrewFinale_Movement_2:
# 856 "data/maps/EggIsland_Interior/scripts.pory"
	nurse_joy_bow
	step_end

GroundEggMain_Text_0:
# 655 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi picked up the egg.$"

StaticTongueUpgrade_Text_0:
# 703 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi obtained the\nStatic Tongue Upgrade!$"

GripGloves_Text_0:
# 720 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi found the Grip Gloves!$"

TriggerHelpDiglett_Text_0:
# 739 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Diglett$"

TriggerHelpDiglett_Text_1:
# 740 "data/maps/EggIsland_Interior/scripts.pory"
	.string "You there, please help!\pI am getting bullied by\nthese two shrews!$"

DontLeaveDiglett_Text_0:
# 749 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please don't leave me here\nwith these two!$"

Sandshrew1_Text_0:
# 757 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Sandshrew$"

Sandshrew1Attacks_Text_0:
# 799 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Now you've done it!$"

EggHatchScene2_Text_0:
# 916 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{STR_VAR_1}$"

SetEggOnPedestal_Text::
# 575 "data/maps/EggIsland_Interior/scripts.pory"
	.string "There seems to be a weighted\n"
	.string "pressure plate under this egg.\l"
	.string "Leave an egg on the plate?$"

SetEggOnPedestal_Text2::
# 580 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Choose an egg to leave\n"
	.string "on the plate.$"

SetEggOnPedestal_Text3::
# 584 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi left an egg\n"
	.string "on the plate.$"

GroundEggMain_Text1::
# 677 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.$"

GroundEggMain_Text2::
# 681 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.\l"
	.string "Do you want to pick it up?$"

StaticTongueUpgrade_Text::
# 713 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi's “Tongue Attack” now has\n"
	.string "a chance to paralyze the target.$"

Sandshrew1_LetsBattle::
# 776 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Who are you? Get lost!$"

Sandshrew2_LetsBattle::
# 779 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Don't butt in!$"

SandshrewFinale_Text::
# 869 "data/maps/EggIsland_Interior/scripts.pory"
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
# 880 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}You can now use the “Retreat”\n"
	.string "option in the Start Menu to\l"
	.string "return to the latest discovered\l"
	.string "save point.\p"
	.string "You can also use the move\n"
	.string "“Call Diglett” once every battle\l"
	.string "to summon Diglett to fiercely\l"
	.string "strike your foes.$"

DiglettScript_Text::
# 896 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please help me!$"

EggHatchScene_Text::
# 929 "data/maps/EggIsland_Interior/scripts.pory"
	.string "This hot sand must've\n"
	.string "accelerated our growth.\p"
	.string "But don't worry, Yoshi!\p"
	.string "Even if our form has changed,\n"
	.string "we will still aid you\l"
	.string "the best we can!\p"
	.string "Now, let's go find that\n"
	.string "Kamek guy!$"

EggHatchScene_Text2::
# 940 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}Yoshi's “Toss Egg” has been\n"
	.string "replaced with “Helping Hand”.$"

EggHatchScene_Text3::
# 945 "data/maps/EggIsland_Interior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}When not in battle,\n"
	.string "“Super Mushroom” can be used\l"
	.string "to revive fallen companions.$"
