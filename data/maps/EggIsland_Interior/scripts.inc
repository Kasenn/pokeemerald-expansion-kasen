EggIsland_Interior_MapScripts::
# 57 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME
# 58 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 79 "data/maps/EggIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetSwitches
	.byte 0

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME:
# 57 "data/maps/EggIsland_Interior/scripts.pory"
	setstepcallback STEP_CB_EGG_ISLAND_INTERIOR
	return

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 59 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_GEODUDES_AWAKENED, EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 65 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 66 "data/maps/EggIsland_Interior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 67 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 68 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 69 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 70 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 71 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaOne
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	hasmonitem 0, ITEM_STRENGTH_GLOVES
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 76 "data/maps/EggIsland_Interior/scripts.pory"
	call SetupMushroomInterior
# 77 "data/maps/EggIsland_Interior/scripts.pory"
	call SetEggs
	return

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 60 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_1
# 61 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 62 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_3
# 63 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_4
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 67 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaOne
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 68 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaOne
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 69 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaTwo
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 70 "data/maps/EggIsland_Interior/scripts.pory"
	call SetUpInteriorAreaTwo
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 70 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 69 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 28
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 68 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 55
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 67 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 74 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
	goto EggIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22


SetUpInteriorAreaOne::
# 82 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 83 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
	return


SetUpInteriorAreaTwo::
# 86 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 87 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 2
	return


SetEggs::
# 91 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0xFFFF
	goto_if_eq SetEggs_2
SetEggs_1:
# 92 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0xFFFF
	goto_if_eq SetEggs_5
SetEggs_4:
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0xFFFF
	goto_if_eq SetEggs_8
SetEggs_7:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0xFFFF
	goto_if_eq SetEggs_11
SetEggs_10:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0xFFFF
	goto_if_eq SetEggs_14
SetEggs_13:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0xFFFF
	goto_if_eq SetEggs_17
SetEggs_16:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0xFFFF
	goto_if_eq SetEggs_20
SetEggs_19:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0xFFFF
	goto_if_eq SetEggs_23
SetEggs_22:
# 99 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0xFFFF
	goto_if_eq SetEggs_26
SetEggs_25:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0xFFFF
	goto_if_eq SetEggs_29
SetEggs_28:
# 101 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0xFFFF
	goto_if_eq SetEggs_32
SetEggs_31:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetEggs_35
SetEggs_34:
# 104 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetEggs_38
SetEggs_37:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetEggs_41
SetEggs_40:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetEggs_44
SetEggs_43:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_ne SetEggs_47
SetEggs_46:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetEggs_50
SetEggs_49:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_7, 0
	goto_if_ne SetEggs_53
SetEggs_52:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_8, 0
	goto_if_ne SetEggs_56
SetEggs_55:
# 111 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_9, 0
	goto_if_ne SetEggs_59
SetEggs_58:
# 112 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_10, 0
	goto_if_ne SetEggs_62
SetEggs_61:
# 113 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_11, 0
	goto_if_ne SetEggs_64
	return

SetEggs_2:
# 91 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_1, 0
	goto SetEggs_1

SetEggs_5:
# 92 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_2, 0
	goto SetEggs_4

SetEggs_8:
# 93 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_3, 0
	goto SetEggs_7

SetEggs_11:
# 94 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_4, 0
	goto SetEggs_10

SetEggs_14:
# 95 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_5, 0
	goto SetEggs_13

SetEggs_17:
# 96 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_6, 0
	goto SetEggs_16

SetEggs_20:
# 97 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_7, 0
	goto SetEggs_19

SetEggs_23:
# 98 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_8, 0
	goto SetEggs_22

SetEggs_26:
# 99 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_9, 0
	goto SetEggs_25

SetEggs_29:
# 100 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_10, 0
	goto SetEggs_28

SetEggs_32:
# 101 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ROCKPLATE_11, 0
	goto SetEggs_31

SetEggs_35:
# 103 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, 47, 62
	goto SetEggs_34

SetEggs_38:
# 104 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, 34, 80
	goto SetEggs_37

SetEggs_41:
# 105 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, 26, 80
	goto SetEggs_40

SetEggs_44:
# 106 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, 30, 83
	goto SetEggs_43

SetEggs_47:
# 107 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, 22, 66
	goto SetEggs_46

SetEggs_50:
# 108 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, 36, 69
	goto SetEggs_49

SetEggs_53:
# 109 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, 18, 48
	goto SetEggs_52

SetEggs_56:
# 110 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, 35, 51
	goto SetEggs_55

SetEggs_59:
# 111 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, 33, 42
	goto SetEggs_58

SetEggs_62:
# 112 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, 36, 30
	goto SetEggs_61

SetEggs_64:
# 113 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, 75, 31
	return


SetSwitches::
# 117 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_ne SetSwitches_2
SetSwitches_1:
# 122 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_ne SetSwitches_5
SetSwitches_4:
# 125 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_ne SetSwitches_8
SetSwitches_7:
# 128 "data/maps/EggIsland_Interior/scripts.pory"
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
# 118 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x379, FALSE
# 119 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x379, FALSE
# 120 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37B, FALSE
	goto SetSwitches_1

SetSwitches_5:
# 123 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37B, FALSE
	goto SetSwitches_4

SetSwitches_8:
# 126 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37B, FALSE
	goto SetSwitches_7

SetSwitches_11:
# 129 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 21, 76, 0x379, FALSE
# 130 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 76, 0x379, FALSE
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
# 173 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 174 "data/maps/EggIsland_Interior/scripts.pory"
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
	goto_if_ne SetSwitches_43
	return

SetSwitches_40:
# 170 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne SetSwitches_39
	return

SetSwitches_43:
# 172 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne SetSwitches_34
	return


SetupMushroomInterior::
# 179 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroomInterior_2
# 182 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 183 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 184 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 185 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 186 "data/maps/EggIsland_Interior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 187 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 188 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 189 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
	return

SetupMushroomInterior_2:
	return


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
	setmetatile 21, 76, 0x379, FALSE
# 243 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 76, 0x379, FALSE
# 244 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37B, FALSE
# 245 "data/maps/EggIsland_Interior/scripts.pory"
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
	goto MainPlateScript2
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
	goto MainPlateScript2
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
	goto MainPlateScript2
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
	goto MainPlateScript2
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
# 330 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

MainPlateScript2_2:
# 328 "data/maps/EggIsland_Interior/scripts.pory"
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
	goto_if_ne MainPlateScript2_11
	goto MainPlateScript2_1

MainPlateScript2_8:
# 325 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_ne MainPlateScript2_7
	goto MainPlateScript2_1

MainPlateScript2_11:
# 327 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_ne MainPlateScript2_2
	goto MainPlateScript2_1


TriggerMainGate::
# 335 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x379, FALSE
# 336 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x379, FALSE
# 337 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 338 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 339 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 340 "data/maps/EggIsland_Interior/scripts.pory"
	setflag FLAG_DOOR_OPEN
# 341 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SteppedOffofSwitch1::
# 348 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 349 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 45, 68, 0x378, TRUE
# 350 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 46, 68, 0x378, TRUE
# 351 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 47, 62, 0x37A, FALSE
# 352 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch2::
# 355 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 356 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 80, 0x37A, FALSE
# 357 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch3::
# 360 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 361 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 26, 80, 0x37A, FALSE
# 362 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch4::
# 365 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 366 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 21, 76, 0x378, TRUE
# 367 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 76, 0x378, TRUE
# 368 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 30, 83, 0x37A, FALSE
# 369 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch5::
# 372 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 373 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 66, 0x378, TRUE
# 374 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 22, 66, 0x37A, FALSE
# 375 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch6::
# 378 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 379 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 61, 0x378, TRUE
# 380 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 34, 61, 0x378, TRUE
# 381 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 69, 0x37A, FALSE
# 382 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch7::
# 385 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 386 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 52, 0x378, TRUE
# 387 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 29, 53, 0x378, TRUE
# 388 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 18, 48, 0x37A, FALSE
# 389 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch8::
# 392 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 393 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 51, 0x378, TRUE
# 394 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 52, 0x378, TRUE
# 395 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 53, 0x378, TRUE
# 396 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 35, 51, 0x37A, FALSE
# 397 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch9::
# 400 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 401 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 31, 48, 0x378, TRUE
# 402 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 32, 48, 0x378, TRUE
# 403 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 33, 42, 0x37A, FALSE
# 404 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch10::
# 407 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 408 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 68, 22, 0x378, TRUE
# 409 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 36, 30, 0x37A, FALSE
# 410 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitch11::
# 413 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 414 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 42, 32, 0x378, TRUE
# 415 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 75, 31, 0x37A, FALSE
# 416 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitchMain
	return


SteppedOffofSwitchMain::
# 420 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 421 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 422 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 423 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar 0
# 424 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_1, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 425 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_2, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 426 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_3, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 427 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_4, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 428 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_5, 0
	goto_if_eq SteppedOffofSwitchMain_3
# 429 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_ROCKPLATE_6, 0
	goto_if_eq SteppedOffofSwitchMain_3
SteppedOffofSwitchMain_1:
# 433 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SteppedOffofSwitchMain_2:
# 431 "data/maps/EggIsland_Interior/scripts.pory"
	goto BlockMainGate
	goto SteppedOffofSwitchMain_1

SteppedOffofSwitchMain_3:
# 430 "data/maps/EggIsland_Interior/scripts.pory"
	goto_if_set FLAG_DOOR_OPEN, SteppedOffofSwitchMain_2
	goto SteppedOffofSwitchMain_1


BlockMainGate::
# 438 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 71, 0x378, TRUE
# 439 "data/maps/EggIsland_Interior/scripts.pory"
	setmetatile 17, 72, 0x378, TRUE
# 440 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_M_STRENGTH
# 441 "data/maps/EggIsland_Interior/scripts.pory"
	special DrawWholeMapView
# 442 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 443 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_DOOR_OPEN
# 444 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end


SetEggOnPedestal::
	msgbox SetEggOnPedestal_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetEggOnPedestal_2
# 453 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text2, MSGBOX_AUTOCLOSE
# 454 "data/maps/EggIsland_Interior/scripts.pory"
	special ChoosePartyEgg
# 455 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SetEggOnPedestal_5
# 455 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq SetEggOnPedestal_5
# 460 "data/maps/EggIsland_Interior/scripts.pory"
	removeegg VAR_0x8004
# 461 "data/maps/EggIsland_Interior/scripts.pory"
	setcustomvar VAR_0x800A
# 462 "data/maps/EggIsland_Interior/scripts.pory"
	delay 32
# 463 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 47
	goto_if_eq SetEggOnPedestal_11
SetEggOnPedestal_9:
# 468 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 34
	goto_if_eq SetEggOnPedestal_16
SetEggOnPedestal_14:
# 473 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq SetEggOnPedestal_21
SetEggOnPedestal_19:
# 478 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq SetEggOnPedestal_26
SetEggOnPedestal_24:
# 483 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq SetEggOnPedestal_31
SetEggOnPedestal_29:
# 488 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_36
SetEggOnPedestal_34:
# 493 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq SetEggOnPedestal_41
SetEggOnPedestal_39:
# 498 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 35
	goto_if_eq SetEggOnPedestal_46
SetEggOnPedestal_44:
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 33
	goto_if_eq SetEggOnPedestal_51
SetEggOnPedestal_49:
# 508 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq SetEggOnPedestal_56
SetEggOnPedestal_54:
# 513 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_0, 75
	goto_if_eq SetEggOnPedestal_61
SetEggOnPedestal_59:
# 518 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox SetEggOnPedestal_Text3
# 519 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return

SetEggOnPedestal_2:
# 450 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_5:
# 457 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

SetEggOnPedestal_10:
# 464 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_1
# 465 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_1, VAR_TEMP_0, VAR_TEMP_1
# 466 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_1
	goto SetEggOnPedestal_9

SetEggOnPedestal_11:
# 463 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 62
	goto_if_eq SetEggOnPedestal_10
	goto SetEggOnPedestal_9

SetEggOnPedestal_15:
# 469 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_2
# 470 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_2, VAR_TEMP_0, VAR_TEMP_1
# 471 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_2
	goto SetEggOnPedestal_14

SetEggOnPedestal_16:
# 468 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_15
	goto SetEggOnPedestal_14

SetEggOnPedestal_20:
# 474 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_3
# 475 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_3, VAR_TEMP_0, VAR_TEMP_1
# 476 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_3
	goto SetEggOnPedestal_19

SetEggOnPedestal_21:
# 473 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 80
	goto_if_eq SetEggOnPedestal_20
	goto SetEggOnPedestal_19

SetEggOnPedestal_25:
# 479 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_4
# 480 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_4, VAR_TEMP_0, VAR_TEMP_1
# 481 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_4
	goto SetEggOnPedestal_24

SetEggOnPedestal_26:
# 478 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 83
	goto_if_eq SetEggOnPedestal_25
	goto SetEggOnPedestal_24

SetEggOnPedestal_30:
# 484 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_5
# 485 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_5, VAR_TEMP_0, VAR_TEMP_1
# 486 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_5
	goto SetEggOnPedestal_29

SetEggOnPedestal_31:
# 483 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq SetEggOnPedestal_30
	goto SetEggOnPedestal_29

SetEggOnPedestal_35:
# 489 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_6
# 490 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_6, VAR_TEMP_0, VAR_TEMP_1
# 491 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_6
	goto SetEggOnPedestal_34

SetEggOnPedestal_36:
# 488 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 69
	goto_if_eq SetEggOnPedestal_35
	goto SetEggOnPedestal_34

SetEggOnPedestal_40:
# 494 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_7
# 495 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_7, VAR_TEMP_0, VAR_TEMP_1
# 496 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_7
	goto SetEggOnPedestal_39

SetEggOnPedestal_41:
# 493 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq SetEggOnPedestal_40
	goto SetEggOnPedestal_39

SetEggOnPedestal_45:
# 499 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_8
# 500 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_8, VAR_TEMP_0, VAR_TEMP_1
# 501 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_8
	goto SetEggOnPedestal_44

SetEggOnPedestal_46:
# 498 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq SetEggOnPedestal_45
	goto SetEggOnPedestal_44

SetEggOnPedestal_50:
# 504 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_9
# 505 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_9, VAR_TEMP_0, VAR_TEMP_1
# 506 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_9
	goto SetEggOnPedestal_49

SetEggOnPedestal_51:
# 503 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 42
	goto_if_eq SetEggOnPedestal_50
	goto SetEggOnPedestal_49

SetEggOnPedestal_55:
# 509 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_10
# 510 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_10, VAR_TEMP_0, VAR_TEMP_1
# 511 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_10
	goto SetEggOnPedestal_54

SetEggOnPedestal_56:
# 508 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq SetEggOnPedestal_55
	goto SetEggOnPedestal_54

SetEggOnPedestal_60:
# 514 "data/maps/EggIsland_Interior/scripts.pory"
	clearflag FLAG_GROUNDEGG_11
# 515 "data/maps/EggIsland_Interior/scripts.pory"
	setobjectxyperm LOCALID_EGG_11, VAR_TEMP_0, VAR_TEMP_1
# 516 "data/maps/EggIsland_Interior/scripts.pory"
	addobject LOCALID_EGG_11
	goto SetEggOnPedestal_59

SetEggOnPedestal_61:
# 513 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq SetEggOnPedestal_60
	goto SetEggOnPedestal_59


Script_GroundEgg1::
# 536 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_1
# 537 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_1
# 538 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg2::
# 541 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_2
# 542 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_2
# 543 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg3::
# 546 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_3
# 547 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_3
# 548 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg4::
# 551 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_4
# 552 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_4
# 553 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg5::
# 556 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_5
# 557 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_5
# 558 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg6::
# 561 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_6
# 562 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_6
# 563 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg7::
# 566 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_7
# 567 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_7
# 568 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg8::
# 571 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_8
# 572 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_8
# 573 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg9::
# 576 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_9
# 577 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_9
# 578 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg10::
# 581 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_10
# 582 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_10
# 583 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


Script_GroundEgg11::
# 586 "data/maps/EggIsland_Interior/scripts.pory"
	setvarid VAR_ROCKPLATE_11
# 587 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_TEMP_6, LOCALID_EGG_11
# 588 "data/maps/EggIsland_Interior/scripts.pory"
	goto GroundEggMain
	return


GroundEggMain::
# 592 "data/maps/EggIsland_Interior/scripts.pory"
	counteggs
# 593 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_ge GroundEggMain_2
	msgbox GroundEggMain_Text2, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Interior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GroundEggMain_5
# 601 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text_0, MSGBOX_AUTOCLOSE
# 602 "data/maps/EggIsland_Interior/scripts.pory"
	getcustomvar
# 603 "data/maps/EggIsland_Interior/scripts.pory"
	giveegg VAR_RESULT
# 604 "data/maps/EggIsland_Interior/scripts.pory"
	special CalculatePlayerPartyCount
# 605 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateEggPP
# 606 "data/maps/EggIsland_Interior/scripts.pory"
	callnative UpdateFollowingPokemon
# 607 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 608 "data/maps/EggIsland_Interior/scripts.pory"
	switch VAR_TEMP_6
# 609 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_1, GroundEggMain_8
# 610 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_2, GroundEggMain_9
# 611 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_3, GroundEggMain_10
# 612 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_4, GroundEggMain_11
# 613 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_5, GroundEggMain_12
# 614 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_6, GroundEggMain_13
# 615 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_7, GroundEggMain_14
# 616 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_8, GroundEggMain_15
# 617 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_9, GroundEggMain_16
# 618 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_10, GroundEggMain_17
# 619 "data/maps/EggIsland_Interior/scripts.pory"
	case LOCALID_EGG_11, GroundEggMain_18
	return

GroundEggMain_2:
# 594 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GroundEggMain_Text1, MSGBOX_AUTOCLOSE
	end

GroundEggMain_5:
# 598 "data/maps/EggIsland_Interior/scripts.pory"
	release
	end

GroundEggMain_8:
# 609 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch1
	return

GroundEggMain_9:
# 610 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch2
	return

GroundEggMain_10:
# 611 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch3
	return

GroundEggMain_11:
# 612 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch4
	return

GroundEggMain_12:
# 613 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch5
	return

GroundEggMain_13:
# 614 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch6
	return

GroundEggMain_14:
# 615 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch7
	return

GroundEggMain_15:
# 616 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch8
	return

GroundEggMain_16:
# 617 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch9
	return

GroundEggMain_17:
# 618 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch10
	return

GroundEggMain_18:
# 619 "data/maps/EggIsland_Interior/scripts.pory"
	goto SteppedOffofSwitch11
	return


AITrigger0::
# 634 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 1
# 635 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 636 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 1
# 637 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


AITrigger1::
# 641 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 3
# 642 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 643 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 3
# 644 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


GripGloves::
# 648 "data/maps/EggIsland_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 649 "data/maps/EggIsland_Interior/scripts.pory"
	message GripGloves_Text_0
# 650 "data/maps/EggIsland_Interior/scripts.pory"
	delay 10
# 651 "data/maps/EggIsland_Interior/scripts.pory"
	waitfanfare
# 652 "data/maps/EggIsland_Interior/scripts.pory"
	waitmessage
# 653 "data/maps/EggIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 654 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox GripGlovesDescription
# 655 "data/maps/EggIsland_Interior/scripts.pory"
	callnative EquipGripGloves
	return


TriggerHelpDiglett::
# 659 "data/maps/EggIsland_Interior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 660 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_WEST
# 661 "data/maps/EggIsland_Interior/scripts.pory"
	playse SE_PIN
# 662 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_DIGLETT, Common_Movement_ExclamationMark
# 663 "data/maps/EggIsland_Interior/scripts.pory"
	waitse
# 664 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 665 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 666 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 667 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox TriggerHelpDiglett_Text_1, MSGBOX_AUTOCLOSE
# 668 "data/maps/EggIsland_Interior/scripts.pory"
	turnobject LOCALID_DIGLETT, DIR_SOUTH
# 669 "data/maps/EggIsland_Interior/scripts.pory"
	setvar VAR_STORY, 4
	return


DontLeaveDiglett::
# 673 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 674 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DontLeaveDiglett_Text_0, MSGBOX_AUTOCLOSE
# 675 "data/maps/EggIsland_Interior/scripts.pory"
	applymovement LOCALID_PLAYER, DontLeaveDiglett_Movement_0
# 676 "data/maps/EggIsland_Interior/scripts.pory"
	waitmovement 0
# 677 "data/maps/EggIsland_Interior/scripts.pory"
	release
	return


Sandshrew1::
# 681 "data/maps/EggIsland_Interior/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 682 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 683 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 684 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew1_LetsBattle, MSGBOX_DEFAULT
# 685 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 686 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000
# 687 "data/maps/EggIsland_Interior/scripts.pory"
	special StartSpecialBattle
# 688 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew2Attacks
	return


Sandshrew2::
# 692 "data/maps/EggIsland_Interior/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 693 "data/maps/EggIsland_Interior/scripts.pory"
	faceplayer
# 694 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker Sandshrew1_Text_0
# 695 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox Sandshrew2_LetsBattle, MSGBOX_DEFAULT
# 696 "data/maps/EggIsland_Interior/scripts.pory"
	callnative CreateStrongMon
# 697 "data/maps/EggIsland_Interior/scripts.pory"
	createmon 1, 0, SPECIES_SANDSHREW, VAR_0x8000
# 698 "data/maps/EggIsland_Interior/scripts.pory"
	special StartSpecialBattle
# 699 "data/maps/EggIsland_Interior/scripts.pory"
	goto Sandshrew1Attacks
	return


Sandshrew1Attacks::
	return


Sandshrew2Attacks::
	return


DiglettScript::
# 716 "data/maps/EggIsland_Interior/scripts.pory"
	setspeaker TriggerHelpDiglett_Text_0
# 717 "data/maps/EggIsland_Interior/scripts.pory"
	msgbox DiglettScript_Text, MSGBOX_NPC
	return


# 675 "data/maps/EggIsland_Interior/scripts.pory"
DontLeaveDiglett_Movement_0:
# 675 "data/maps/EggIsland_Interior/scripts.pory"
	walk_up
	step_end

GroundEggMain_Text_0:
# 601 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi picked up the egg.$"

GripGloves_Text_0:
# 649 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi found the Grip Gloves!$"

TriggerHelpDiglett_Text_0:
# 666 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Diglett$"

TriggerHelpDiglett_Text_1:
# 667 "data/maps/EggIsland_Interior/scripts.pory"
	.string "You there, please help!\pI am getting bullied by\nthese two shrews!$"

DontLeaveDiglett_Text_0:
# 674 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please don't leave me here\nwith these two!$"

Sandshrew1_Text_0:
# 683 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Sandshrew$"

SetEggOnPedestal_Text::
# 521 "data/maps/EggIsland_Interior/scripts.pory"
	.string "There seems to be a weighted\n"
	.string "pressure plate under this egg.\l"
	.string "Leave an egg on the plate?$"

SetEggOnPedestal_Text2::
# 526 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Choose an egg to leave\n"
	.string "on the plate.$"

SetEggOnPedestal_Text3::
# 530 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Yoshi left an egg\n"
	.string "on the plate.$"

GroundEggMain_Text1::
# 623 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.$"

GroundEggMain_Text2::
# 627 "data/maps/EggIsland_Interior/scripts.pory"
	.string "It's an egg, holding down\n"
	.string "a weighted pressure plate.\l"
	.string "Do you want to pick it up?$"

Sandshrew1_LetsBattle::
# 701 "data/maps/EggIsland_Interior/scripts.pory"
	.string "wip$"

Sandshrew2_LetsBattle::
# 704 "data/maps/EggIsland_Interior/scripts.pory"
	.string "wip$"

DiglettScript_Text::
# 719 "data/maps/EggIsland_Interior/scripts.pory"
	.string "Please help me!$"
