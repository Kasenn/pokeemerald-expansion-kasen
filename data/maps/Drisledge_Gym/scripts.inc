Drisledge_Gym_MapScripts::
# 2 "data/maps/Drisledge_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupDrisledgeGym
# 3 "data/maps/Drisledge_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetDrisledgeGymTiles
	.byte 0


SetDrisledgeGymTiles::
# 7 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge SetDrisledgeGymTiles_2
SetDrisledgeGymTiles_1:
# 17 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 13
	goto_if_ge SetDrisledgeGymTiles_5
SetDrisledgeGymTiles_4:
# 31 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 16
	goto_if_ge SetDrisledgeGymTiles_8
SetDrisledgeGymTiles_7:
# 45 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 19
	goto_if_ge SetDrisledgeGymTiles_11
SetDrisledgeGymTiles_10:
# 59 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 22
	goto_if_ge SetDrisledgeGymTiles_14
SetDrisledgeGymTiles_13:
# 73 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 29
	goto_if_ge SetDrisledgeGymTiles_16
	return

SetDrisledgeGymTiles_2:
# 8 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 21, 38, 0x2B3, FALSE
# 9 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 39, 0x2B3, FALSE
# 10 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 22, 38, 0x2B3, FALSE
# 11 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 40, 0x2B3, FALSE
# 12 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 23, 38, 0x2B3, FALSE
# 13 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 41, 0x2B3, FALSE
# 14 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 24, 38, 0x2B3, FALSE
# 15 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 42, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_1

SetDrisledgeGymTiles_5:
# 18 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 37, 0x2B3, FALSE
# 19 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 33, 38, 0x2B3, FALSE
# 20 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 39, 0x2B3, FALSE
# 21 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 36, 0x2B3, FALSE
# 22 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 34, 38, 0x2B3, FALSE
# 23 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 40, 0x2B3, FALSE
# 24 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 35, 0x2B3, FALSE
# 25 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 35, 38, 0x2B3, FALSE
# 26 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 41, 0x2B3, FALSE
# 27 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 34, 0x2B3, FALSE
# 28 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 36, 38, 0x2B3, FALSE
# 29 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 42, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_4

SetDrisledgeGymTiles_8:
# 32 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 33, 27, 0x2B3, FALSE
# 33 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 26, 0x2B3, FALSE
# 34 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 27, 0x2B3, FALSE
# 35 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 34, 27, 0x2B3, FALSE
# 36 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 25, 0x2B3, FALSE
# 37 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 27, 0x2B3, FALSE
# 38 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 35, 27, 0x2B3, FALSE
# 39 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 24, 0x2B3, FALSE
# 40 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 27, 0x2B3, FALSE
# 41 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 36, 27, 0x2B3, FALSE
# 42 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 23, 0x2B3, FALSE
# 43 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 27, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_7

SetDrisledgeGymTiles_11:
# 46 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 46, 27, 0x2B3, FALSE
# 47 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 26, 0x2B3, FALSE
# 48 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 28, 0x2B3, FALSE
# 49 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 47, 27, 0x2B3, FALSE
# 50 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 25, 0x2B3, FALSE
# 51 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 29, 0x2B3, FALSE
# 52 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 48, 27, 0x2B3, FALSE
# 53 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 24, 0x2B3, FALSE
# 54 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 30, 0x2B3, FALSE
# 55 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 49, 27, 0x2B3, FALSE
# 56 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 23, 0x2B3, FALSE
# 57 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 31, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_10

SetDrisledgeGymTiles_14:
# 60 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 44, 11, 0x2B3, FALSE
# 61 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 10, 0x2B3, FALSE
# 62 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 46, 11, 0x2B3, FALSE
# 63 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 43, 11, 0x2B3, FALSE
# 64 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 9, 0x2B3, FALSE
# 65 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 47, 11, 0x2B3, FALSE
# 66 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 42, 11, 0x2B3, FALSE
# 67 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 8, 0x2B3, FALSE
# 68 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 48, 11, 0x2B3, FALSE
# 69 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 41, 11, 0x2B3, FALSE
# 70 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 7, 0x2B3, FALSE
# 71 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 49, 11, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_13

SetDrisledgeGymTiles_16:
# 74 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 11, 0x2B3, FALSE
# 75 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 11, 0x2B3, FALSE
# 76 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 9, 0x2BE, FALSE
# 77 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 9, 0x2BF, FALSE
# 78 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 10, 0x2C6, FALSE
# 79 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 10, 0x2C7, FALSE
# 80 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 12, 0x2BE, FALSE
# 81 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 12, 0x2BF, FALSE
# 82 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 13, 0x2C6, FALSE
# 83 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 13, 0x2C7, FALSE
# 84 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 11, 0x2B3, FALSE
# 85 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 11, 0x2B3, FALSE
# 86 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 9, 0x2BE, FALSE
# 87 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 9, 0x2BF, FALSE
# 88 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 10, 0x2C6, FALSE
# 89 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 10, 0x2C7, FALSE
# 90 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 12, 0x2BE, FALSE
# 91 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 12, 0x2BF, FALSE
# 92 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 13, 0x2C6, FALSE
# 93 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 13, 0x2C7, FALSE
# 94 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 11, 0x2B3, FALSE
# 95 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 11, 0x2B3, FALSE
# 96 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 9, 0x2BE, FALSE
# 97 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 9, 0x2BF, FALSE
# 98 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 10, 0x2C6, FALSE
# 99 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 10, 0x2C7, FALSE
# 100 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 12, 0x2BE, FALSE
# 101 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 12, 0x2BF, FALSE
# 102 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 13, 0x2C6, FALSE
# 103 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 13, 0x2C7, FALSE
	return


TurnMimikyus::
# 107 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 108 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 109 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 110 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_LEFT
# 111 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
# 112 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 2, DIR_WEST
# 113 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 4, DIR_WEST
# 114 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 9, DIR_SOUTH
# 115 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 13, DIR_WEST
# 116 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 17, DIR_SOUTH
# 117 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


SetupDrisledgeGym::
# 121 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_1
# 122 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_2
# 123 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_3
# 124 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_4
# 125 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_5
# 126 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 29
	goto_if_ge SetupDrisledgeGym_2
# 130 "data/maps/Drisledge_Gym/scripts.pory"
	setflashlevel 1
SetupDrisledgeGym_1:
# 132 "data/maps/Drisledge_Gym/scripts.pory"
	call HideGhosts
# 133 "data/maps/Drisledge_Gym/scripts.pory"
	call RemoveHexManiac
# 134 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 11
	goto_if_eq SetupDrisledgeGym_6
SetupDrisledgeGym_5:
# 137 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 14
	goto_if_eq SetupDrisledgeGym_9
SetupDrisledgeGym_8:
# 140 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 17
	goto_if_eq SetupDrisledgeGym_12
SetupDrisledgeGym_11:
# 143 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 20
	goto_if_eq SetupDrisledgeGym_15
SetupDrisledgeGym_14:
# 146 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 23
	goto_if_eq SetupDrisledgeGym_17
	return

SetupDrisledgeGym_2:
# 127 "data/maps/Drisledge_Gym/scripts.pory"
	setflashlevel 0
	goto SetupDrisledgeGym_1

SetupDrisledgeGym_6:
# 135 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
	goto SetupDrisledgeGym_5

SetupDrisledgeGym_9:
# 138 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
	goto SetupDrisledgeGym_8

SetupDrisledgeGym_12:
# 141 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
	goto SetupDrisledgeGym_11

SetupDrisledgeGym_15:
# 144 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
	goto SetupDrisledgeGym_14

SetupDrisledgeGym_17:
# 147 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_5
	return


RemoveHexManiac::
# 151 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge RemoveHexManiac_2
RemoveHexManiac_1:
# 154 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 13
	goto_if_ge RemoveHexManiac_5
RemoveHexManiac_4:
# 157 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 16
	goto_if_ge RemoveHexManiac_8
RemoveHexManiac_7:
# 160 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 19
	goto_if_ge RemoveHexManiac_11
RemoveHexManiac_10:
# 163 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 22
	goto_if_ge RemoveHexManiac_14
RemoveHexManiac_13:
# 166 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 29
	goto_if_ge RemoveHexManiac_17
RemoveHexManiac_16:
	return

RemoveHexManiac_2:
# 152 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_10
	goto RemoveHexManiac_1

RemoveHexManiac_5:
# 155 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_11
	goto RemoveHexManiac_4

RemoveHexManiac_8:
# 158 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_12
	goto RemoveHexManiac_7

RemoveHexManiac_11:
# 161 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_13
	goto RemoveHexManiac_10

RemoveHexManiac_14:
# 164 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_14
	goto RemoveHexManiac_13

RemoveHexManiac_17:
# 167 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_F
	goto RemoveHexManiac_16


HideGhosts::
# 172 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_6
# 173 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_7
# 174 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_8
# 175 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_9
# 176 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_A
# 177 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_B
# 178 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_C
# 179 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_D
# 180 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_TEMP_E
	return


EventScript_FallDownDrisledgeGym::
# 184 "data/maps/Drisledge_Gym/scripts.pory"
	lock
# 185 "data/maps/Drisledge_Gym/scripts.pory"
	delay 20
# 186 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 187 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 188 "data/maps/Drisledge_Gym/scripts.pory"
	playse SE_FALL
# 189 "data/maps/Drisledge_Gym/scripts.pory"
	delay 60
# 190 "data/maps/Drisledge_Gym/scripts.pory"
	warpholexy MAP_DRISLEDGE_GYM, 5, 38
# 191 "data/maps/Drisledge_Gym/scripts.pory"
	waitstate
	end


DrisledgeGym_Mimikyu1::
# 197 "data/maps/Drisledge_Gym/scripts.pory"
	faceplayer
# 198 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 199 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 200 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 201 "data/maps/Drisledge_Gym/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 37
# 202 "data/maps/Drisledge_Gym/scripts.pory"
	dowildbattle
# 203 "data/maps/Drisledge_Gym/scripts.pory"
	delay 20
# 204 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 205 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 206 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 207 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 208 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 2, Walk6Right
# 209 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 210 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 2
# 211 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 12
# 212 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeGym_Mimikyu2::
# 215 "data/maps/Drisledge_Gym/scripts.pory"
	faceplayer
# 216 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 217 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 218 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 219 "data/maps/Drisledge_Gym/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 37
# 220 "data/maps/Drisledge_Gym/scripts.pory"
	dowildbattle
# 221 "data/maps/Drisledge_Gym/scripts.pory"
	delay 20
# 222 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 223 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 224 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 225 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 226 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 4, Walk6Up
# 227 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 228 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 4
# 229 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 15
# 230 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeGym_Mimikyu3::
# 233 "data/maps/Drisledge_Gym/scripts.pory"
	faceplayer
# 234 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 235 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 236 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 237 "data/maps/Drisledge_Gym/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 37
# 238 "data/maps/Drisledge_Gym/scripts.pory"
	dowildbattle
# 239 "data/maps/Drisledge_Gym/scripts.pory"
	delay 20
# 240 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 241 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 242 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 243 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 244 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 9, Walk6Right
# 245 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 246 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 9
# 247 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 18
# 248 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeGym_Mimikyu4::
# 251 "data/maps/Drisledge_Gym/scripts.pory"
	faceplayer
# 252 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 253 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 254 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 255 "data/maps/Drisledge_Gym/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 37
# 256 "data/maps/Drisledge_Gym/scripts.pory"
	dowildbattle
# 257 "data/maps/Drisledge_Gym/scripts.pory"
	delay 20
# 258 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 259 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 260 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 261 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 262 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 13, Walk6Up
# 263 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 264 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 13
# 265 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 21
# 266 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeGym_Mimikyu5::
# 269 "data/maps/Drisledge_Gym/scripts.pory"
	faceplayer
# 270 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 271 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 272 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 273 "data/maps/Drisledge_Gym/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 37
# 274 "data/maps/Drisledge_Gym/scripts.pory"
	dowildbattle
# 275 "data/maps/Drisledge_Gym/scripts.pory"
	delay 20
# 276 "data/maps/Drisledge_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 277 "data/maps/Drisledge_Gym/scripts.pory"
	delay 40
# 278 "data/maps/Drisledge_Gym/scripts.pory"
	waitmoncry
# 279 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 280 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 17, Walk6Left
# 281 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 282 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 17
# 283 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 25
# 284 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeGym_Trainer1::
# 292 "data/maps/Drisledge_Gym/scripts.pory"
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER1, DrisledgeGym_Trainer4_Intro, DrisledgeGym_Trainer4_Lose, DrisledgeGym_Trainer1_PostScript
	return


DrisledgeGym_Trainer1_PostScript::
# 295 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 296 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_6
# 297 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 3
# 298 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox KeepUpWithReal
# 299 "data/maps/Drisledge_Gym/scripts.pory"
	closemessage
# 300 "data/maps/Drisledge_Gym/scripts.pory"
	delay 48
# 301 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 302 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 3, RunFastDown
# 303 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 1, RunFastRight
# 304 "data/maps/Drisledge_Gym/scripts.pory"
	call DrisledgeMetatiles1
# 305 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 10
# 306 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 307 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 3
# 308 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 1
# 309 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeMetatiles1::
# 318 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 319 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 21, 38, 0x2B3, FALSE
# 320 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 39, 0x2B3, FALSE
# 321 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 322 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 323 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 22, 38, 0x2B3, FALSE
# 324 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 40, 0x2B3, FALSE
# 325 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 326 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 327 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 23, 38, 0x2B3, FALSE
# 328 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 41, 0x2B3, FALSE
# 329 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 330 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 331 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 24, 38, 0x2B3, FALSE
# 332 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 20, 42, 0x2B3, FALSE
# 333 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 334 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
	return


DrisledgeGym_Trainer2::
# 340 "data/maps/Drisledge_Gym/scripts.pory"
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER2, DrisledgeGym_Trainer1_Intro, DrisledgeGym_Trainer1_Lose, DrisledgeGym_Trainer2_PostScript
	return


DrisledgeGym_Trainer2_PostScript::
# 343 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 344 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_7
# 345 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_8
# 346 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 6
# 347 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 7
# 348 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox KeepUpWithReal
# 349 "data/maps/Drisledge_Gym/scripts.pory"
	closemessage
# 350 "data/maps/Drisledge_Gym/scripts.pory"
	delay 48
# 351 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 352 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 5, RunFastUp
# 353 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 6, RunFastDown
# 354 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 7, RunFastRight
# 355 "data/maps/Drisledge_Gym/scripts.pory"
	call DrisledgeMetatiles2
# 356 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 13
# 357 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 358 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 5
# 359 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 6
# 360 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 7
# 361 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeMetatiles2::
# 370 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 371 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 37, 0x2B3, FALSE
# 372 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 33, 38, 0x2B3, FALSE
# 373 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 39, 0x2B3, FALSE
# 374 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 375 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 376 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 36, 0x2B3, FALSE
# 377 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 34, 38, 0x2B3, FALSE
# 378 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 40, 0x2B3, FALSE
# 379 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 380 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 381 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 35, 0x2B3, FALSE
# 382 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 35, 38, 0x2B3, FALSE
# 383 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 41, 0x2B3, FALSE
# 384 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 385 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 386 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 34, 0x2B3, FALSE
# 387 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 36, 38, 0x2B3, FALSE
# 388 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 42, 0x2B3, FALSE
# 389 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 390 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
	return


DrisledgeGym_Trainer3::
# 396 "data/maps/Drisledge_Gym/scripts.pory"
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER3, DrisledgeGym_Trainer2_Intro, DrisledgeGym_Trainer2_Lose, DrisledgeGym_Trainer3_PostScript
	return


DrisledgeGym_Trainer3_PostScript::
# 399 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 400 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_A
# 401 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_9
# 402 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 11
# 403 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 8
# 404 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox KeepUpWithReal
# 405 "data/maps/Drisledge_Gym/scripts.pory"
	closemessage
# 406 "data/maps/Drisledge_Gym/scripts.pory"
	delay 48
# 407 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 408 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 10, RunFastRight
# 409 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 11, RunFastUp
# 410 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 8, RunFastLeft
# 411 "data/maps/Drisledge_Gym/scripts.pory"
	call DrisledgeMetatiles3
# 412 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 16
# 413 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 414 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 8
# 415 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 10
# 416 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 11
# 417 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeMetatiles3::
# 426 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 427 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 33, 27, 0x2B3, FALSE
# 428 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 26, 0x2B3, FALSE
# 429 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 27, 0x2B3, FALSE
# 430 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 431 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 432 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 34, 27, 0x2B3, FALSE
# 433 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 25, 0x2B3, FALSE
# 434 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 27, 0x2B3, FALSE
# 435 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 436 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 437 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 35, 27, 0x2B3, FALSE
# 438 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 24, 0x2B3, FALSE
# 439 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 27, 0x2B3, FALSE
# 440 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 441 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 442 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 36, 27, 0x2B3, FALSE
# 443 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 32, 23, 0x2B3, FALSE
# 444 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 27, 0x2B3, FALSE
# 445 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 446 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
	return


DrisledgeGym_Trainer4::
# 452 "data/maps/Drisledge_Gym/scripts.pory"
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER4, DrisledgeGym_Trainer3_Intro, DrisledgeGym_Trainer3_Lose, DrisledgeGym_Trainer4_PostScript
	return


DrisledgeGym_Trainer4_PostScript::
# 455 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 456 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_B
# 457 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_C
# 458 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 12
# 459 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 15
# 460 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox KeepUpWithReal
# 461 "data/maps/Drisledge_Gym/scripts.pory"
	closemessage
# 462 "data/maps/Drisledge_Gym/scripts.pory"
	delay 48
# 463 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 464 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 12, RunFastRight
# 465 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 14, RunFastUp
# 466 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 15, RunFastDown
# 467 "data/maps/Drisledge_Gym/scripts.pory"
	call DrisledgeMetatiles4
# 468 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 19
# 469 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 470 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 12
# 471 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 14
# 472 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 15
# 473 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeMetatiles4::
# 482 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 483 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 46, 27, 0x2B3, FALSE
# 484 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 26, 0x2B3, FALSE
# 485 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 28, 0x2B3, FALSE
# 486 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 487 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 488 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 47, 27, 0x2B3, FALSE
# 489 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 25, 0x2B3, FALSE
# 490 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 29, 0x2B3, FALSE
# 491 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 492 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 493 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 48, 27, 0x2B3, FALSE
# 494 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 24, 0x2B3, FALSE
# 495 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 30, 0x2B3, FALSE
# 496 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 497 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 498 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 49, 27, 0x2B3, FALSE
# 499 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 23, 0x2B3, FALSE
# 500 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 31, 0x2B3, FALSE
# 501 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 502 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
	return


DrisledgeGym_Trainer5::
# 508 "data/maps/Drisledge_Gym/scripts.pory"
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER5, DrisledgeGym_Trainer5_Intro, DrisledgeGym_Trainer5_Lose, DrisledgeGym_Trainer5_PostScript
	return


DrisledgeGym_Trainer5_PostScript::
# 511 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 512 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_D
# 513 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_E
# 514 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 16
# 515 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 19
# 516 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox KeepUpWithReal
# 517 "data/maps/Drisledge_Gym/scripts.pory"
	closemessage
# 518 "data/maps/Drisledge_Gym/scripts.pory"
	delay 48
# 519 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 520 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 19, RunFastRight
# 521 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 16, RunFastUp
# 522 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 18, RunFastLeft
# 523 "data/maps/Drisledge_Gym/scripts.pory"
	call DrisledgeMetatiles5
# 524 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 22
# 525 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 526 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 16
# 527 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 19
# 528 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 18
# 529 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeMetatiles5::
# 538 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 539 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 44, 11, 0x2B3, FALSE
# 540 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 10, 0x2B3, FALSE
# 541 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 46, 11, 0x2B3, FALSE
# 542 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 543 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 544 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 43, 11, 0x2B3, FALSE
# 545 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 9, 0x2B3, FALSE
# 546 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 47, 11, 0x2B3, FALSE
# 547 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 548 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 549 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 42, 11, 0x2B3, FALSE
# 550 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 8, 0x2B3, FALSE
# 551 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 48, 11, 0x2B3, FALSE
# 552 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 553 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 554 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 41, 11, 0x2B3, FALSE
# 555 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 45, 7, 0x2B3, FALSE
# 556 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 49, 11, 0x2B3, FALSE
# 557 "data/maps/Drisledge_Gym/scripts.pory"
	delay 4
# 558 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
	return


DrisledgeGym_Trainer6::
# 564 "data/maps/Drisledge_Gym/scripts.pory"
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER6, DrisledgeGym_Trainer6_Intro, DrisledgeGym_Trainer6_Lose, DrisledgeGym_Trainer6_PostScript
	return


DrisledgeGym_Trainer6_PostScript::
# 567 "data/maps/Drisledge_Gym/scripts.pory"
	animateflash 0
# 568 "data/maps/Drisledge_Gym/scripts.pory"
	setflashlevel 0
# 569 "data/maps/Drisledge_Gym/scripts.pory"
	safefollow
# 570 "data/maps/Drisledge_Gym/scripts.pory"
	applymovement 21, Walk7Left
# 571 "data/maps/Drisledge_Gym/scripts.pory"
	call DrisledgeMetatiles6
# 572 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 29
# 573 "data/maps/Drisledge_Gym/scripts.pory"
	waitmovement 0
# 574 "data/maps/Drisledge_Gym/scripts.pory"
	removeobject 21
# 575 "data/maps/Drisledge_Gym/scripts.pory"
	release
	return


DrisledgeMetatiles6::
# 584 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 11, 0x2B3, FALSE
# 585 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 586 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 587 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 11, 0x2B3, FALSE
# 588 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 9, 0x2BE, FALSE
# 589 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 9, 0x2BF, FALSE
# 590 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 10, 0x2C6, FALSE
# 591 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 10, 0x2C7, FALSE
# 592 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 12, 0x2BE, FALSE
# 593 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 12, 0x2BF, FALSE
# 594 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 30, 13, 0x2C6, FALSE
# 595 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 31, 13, 0x2C7, FALSE
# 596 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 597 "data/maps/Drisledge_Gym/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 598 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 599 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 11, 0x2B3, FALSE
# 600 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 601 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 602 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 11, 0x2B3, FALSE
# 603 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 9, 0x2BE, FALSE
# 604 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 9, 0x2BF, FALSE
# 605 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 10, 0x2C6, FALSE
# 606 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 10, 0x2C7, FALSE
# 607 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 12, 0x2BE, FALSE
# 608 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 12, 0x2BF, FALSE
# 609 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 28, 13, 0x2C6, FALSE
# 610 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 29, 13, 0x2C7, FALSE
# 611 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 612 "data/maps/Drisledge_Gym/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 613 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 614 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 11, 0x2B3, FALSE
# 615 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 616 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
# 617 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 11, 0x2B3, FALSE
# 618 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 9, 0x2BE, FALSE
# 619 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 9, 0x2BF, FALSE
# 620 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 10, 0x2C6, FALSE
# 621 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 10, 0x2C7, FALSE
# 622 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 12, 0x2BE, FALSE
# 623 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 12, 0x2BF, FALSE
# 624 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 26, 13, 0x2C6, FALSE
# 625 "data/maps/Drisledge_Gym/scripts.pory"
	setmetatile 27, 13, 0x2C7, FALSE
# 626 "data/maps/Drisledge_Gym/scripts.pory"
	delay 12
# 627 "data/maps/Drisledge_Gym/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 628 "data/maps/Drisledge_Gym/scripts.pory"
	special DrawWholeMapView
	return


DrisledgeGym_Trigger1::
# 633 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 11
# 634 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 635 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 2
# 636 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 637 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 2, DIR_SOUTH
	return


DrisledgeGym_Trigger2::
# 640 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 14
# 641 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
# 642 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 4
# 643 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 644 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 4, DIR_SOUTH
	return


DrisledgeGym_Trigger3::
# 647 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 14
# 648 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
# 649 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 4
# 650 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 651 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 4, DIR_EAST
	return


DrisledgeGym_Trigger4::
# 654 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 17
# 655 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
# 656 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 9
# 657 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 658 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 9, DIR_WEST
	return


DrisledgeGym_Trigger5::
# 661 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 17
# 662 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
# 663 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 9
# 664 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 665 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 9, DIR_NORTH
	return


DrisledgeGym_Trigger6::
# 668 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 20
# 669 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
# 670 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 13
# 671 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
# 672 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 13, DIR_SOUTH
	return


DrisledgeGym_Trigger7::
# 675 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 20
# 676 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
# 677 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 13
# 678 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_RIGHT
# 679 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 13, DIR_EAST
	return


DrisledgeGym_Trigger8::
# 682 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 23
# 683 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_5
# 684 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 17
# 685 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_RIGHT
# 686 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 17, DIR_EAST
	return


DrisledgeGym_Trigger9::
# 689 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 23
# 690 "data/maps/Drisledge_Gym/scripts.pory"
	clearflag FLAG_TEMP_5
# 691 "data/maps/Drisledge_Gym/scripts.pory"
	addobject 17
# 692 "data/maps/Drisledge_Gym/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_UP
# 693 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 17, DIR_NORTH
	return


# 696 "data/maps/Drisledge_Gym/scripts.pory"
RunFastDown:
# 697 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_down
# 697 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_down
# 697 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_down
# 697 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_down
# 697 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_down
# 697 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_down
	step_end

# 699 "data/maps/Drisledge_Gym/scripts.pory"
RunFastUp:
# 700 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_up
# 700 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_up
# 700 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_up
# 700 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_up
# 700 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_up
# 700 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_up
	step_end

# 702 "data/maps/Drisledge_Gym/scripts.pory"
RunFastLeft:
# 703 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_left
# 703 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_left
# 703 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_left
# 703 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_left
# 703 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_left
# 703 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_left
	step_end

# 705 "data/maps/Drisledge_Gym/scripts.pory"
RunFastRight:
# 706 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_right
# 706 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_right
# 706 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_right
# 706 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_right
# 706 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_right
# 706 "data/maps/Drisledge_Gym/scripts.pory"
	walk_fast_right
	step_end

DrisledgeGym_AcerolaTalk::
# 710 "data/maps/Drisledge_Gym/scripts.pory"
	checkplayergender
# 711 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DrisledgeGym_AcerolaTalk_2
# 715 "data/maps/Drisledge_Gym/scripts.pory"
	bufferstring STR_VAR_1, DrisledgeGym_AcerolaTalk_Text_1
DrisledgeGym_AcerolaTalk_1:
# 717 "data/maps/Drisledge_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, DrisledgeGym_AcerolaTalk_5
# 720 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox DrisGym_YouArrived, MSGBOX_NPC
# 721 "data/maps/Drisledge_Gym/scripts.pory"
	turnobject 20, DIR_EAST
	return

DrisledgeGym_AcerolaTalk_2:
# 712 "data/maps/Drisledge_Gym/scripts.pory"
	bufferstring STR_VAR_1, DrisledgeGym_AcerolaTalk_Text_0
	goto DrisledgeGym_AcerolaTalk_1

DrisledgeGym_AcerolaTalk_5:
# 718 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox DrisGym_AcerolaPosBat, MSGBOX_NPC
	return


DrisledgeGym_AcerolaTrigger::
# 724 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_TEMP_0, 4
# 725 "data/maps/Drisledge_Gym/scripts.pory"
	call GymStartingMovement
# 726 "data/maps/Drisledge_Gym/scripts.pory"
	checkplayergender
# 727 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DrisledgeGym_AcerolaTrigger_2
# 731 "data/maps/Drisledge_Gym/scripts.pory"
	bufferstring STR_VAR_1, DrisledgeGym_AcerolaTalk_Text_1
DrisledgeGym_AcerolaTrigger_1:
# 733 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox AcerolaIntro
# 734 "data/maps/Drisledge_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_ACEROLA, AcerolaDefeated
# 735 "data/maps/Drisledge_Gym/scripts.pory"
	goto Acerola_PosBatEvent
	return

DrisledgeGym_AcerolaTrigger_2:
# 728 "data/maps/Drisledge_Gym/scripts.pory"
	bufferstring STR_VAR_1, DrisledgeGym_AcerolaTalk_Text_0
	goto DrisledgeGym_AcerolaTrigger_1


Acerola_PosBatEvent::
# 739 "data/maps/Drisledge_Gym/scripts.pory"
	call GymMovementAfter
# 740 "data/maps/Drisledge_Gym/scripts.pory"
	checkplayergender
# 741 "data/maps/Drisledge_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Acerola_PosBatEvent_2
# 745 "data/maps/Drisledge_Gym/scripts.pory"
	bufferstring STR_VAR_1, DrisledgeGym_AcerolaTalk_Text_1
Acerola_PosBatEvent_1:
# 747 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox Acerola_AfterDefeat
# 748 "data/maps/Drisledge_Gym/scripts.pory"
	message Acerola_ReceiveBadge
# 749 "data/maps/Drisledge_Gym/scripts.pory"
	waitmessage
# 750 "data/maps/Drisledge_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 751 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox Acerola_ExplainBadge, MSGBOX_DEFAULT
# 752 "data/maps/Drisledge_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 753 "data/maps/Drisledge_Gym/scripts.pory"
	giveitem ITEM_TM_SHADOW_CLAW
# 754 "data/maps/Drisledge_Gym/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
# 755 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox Explain_ShadowClaw, MSGBOX_DEFAULT
# 756 "data/maps/Drisledge_Gym/scripts.pory"
	closemessage
# 757 "data/maps/Drisledge_Gym/scripts.pory"
	special RemoveCameraObject
# 758 "data/maps/Drisledge_Gym/scripts.pory"
	release
	end

Acerola_PosBatEvent_2:
# 742 "data/maps/Drisledge_Gym/scripts.pory"
	bufferstring STR_VAR_1, DrisledgeGym_AcerolaTalk_Text_0
	goto Acerola_PosBatEvent_1


DrisledgeGym_Statue::
# 835 "data/maps/Drisledge_Gym/scripts.pory"
	msgbox DrisledgeGym_Statue_Text, MSGBOX_NPC
	return


DrisledgeGym_AcerolaTalk_Text_0:
# 712 "data/maps/Drisledge_Gym/scripts.pory"
	.string "mister$"

DrisledgeGym_AcerolaTalk_Text_1:
# 715 "data/maps/Drisledge_Gym/scripts.pory"
	.string "miss$"

KeepUpWithReal::
# 287 "data/maps/Drisledge_Gym/scripts.pory"
	.string "…Think you can keep up with the\n"
	.string "real one?$"

DrisledgeGym_Trainer1_Intro::
# 311 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Go away…$"

DrisledgeGym_Trainer1_Lose::
# 314 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Leave me be…$"

DrisledgeGym_Trainer2_Intro::
# 363 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Leave this place…$"

DrisledgeGym_Trainer2_Lose::
# 366 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Why are you still here…$"

DrisledgeGym_Trainer3_Intro::
# 419 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Let's play… forever…$"

DrisledgeGym_Trainer3_Lose::
# 422 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Let's play… more…$"

DrisledgeGym_Trainer4_Intro::
# 475 "data/maps/Drisledge_Gym/scripts.pory"
	.string "A new friend?$"

DrisledgeGym_Trainer4_Lose::
# 478 "data/maps/Drisledge_Gym/scripts.pory"
	.string "No… not friend…$"

DrisledgeGym_Trainer5_Intro::
# 531 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Why do you still follow us?$"

DrisledgeGym_Trainer5_Lose::
# 534 "data/maps/Drisledge_Gym/scripts.pory"
	.string "I see it now…$"

DrisledgeGym_Trainer6_Intro::
# 577 "data/maps/Drisledge_Gym/scripts.pory"
	.string "I will not let you reach Acerola…$"

DrisledgeGym_Trainer6_Lose::
# 580 "data/maps/Drisledge_Gym/scripts.pory"
	.string "I failed…$"

DrisGym_YouArrived::
# 762 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\p"
	.string "I knew I could count on you showing up\n"
	.string "sooner or later.\p"
	.string "If you're ready to play, take a stand\n"
	.string "on the other side of the arena.$"

AcerolaIntro::
# 769 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\n"
	.string "Are you surprised to see me here?\p"
	.string "That's right! I'm the Gym Leader\n"
	.string "around here!\p"
	.string "I hope you didn't have too much\n"
	.string "trouble getting here.\l"
	.string "I know the weather can be a bit\l"
	.string "cruddy at times.\p"
	.string "It's nice to finally have some\n"
	.string "human company around here.\p"
	.string "Don't get me wrong, Pokémon are\n"
	.string "good pals, but people are just so\l"
	.string "much more complex and interesting.\p"
	.string "That said, how about we have some fun?\p"
	.string "I wanna see just how complex your\n"
	.string "mind can be!$"

AcerolaDefeated::
# 787 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Aww…\p"
	.string "Guess the playtime's over…$"

Acerola_ReceiveBadge::
# 791 "data/maps/Drisledge_Gym/scripts.pory"
	.string "{PLAYER} received the Phantom Badge\n"
	.string "from Acerola!$"

Explain_ShadowClaw::
# 795 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Shadow Claw is a real simple move.\p"
	.string "You just give the foe a real nasty\n"
	.string "scratch, nothing more, nothing less.\p"
	.string "Oh, I guess Pokémon using it tend to\n"
	.string "be a bit luckier with the amount of\l"
	.string "damage they deal to their foes.$"

Acerola_AfterDefeat::
# 804 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Looks like my friends are all tired\n"
	.string "from playing.\p"
	.string "That was fun, {STR_VAR_1}!\p"
	.string "Since this is a Pokémon Gym after all,\n"
	.string "I guess there's something I need to\l"
	.string "give the winner.$"

Acerola_ExplainBadge::
# 812 "data/maps/Drisledge_Gym/scripts.pory"
	.string "Now that you have the Phantom Badge,\n"
	.string "all traded Pokémon up to level 70\l"
	.string "should be following your commands.\p"
	.string "Not only that, but now you'll be able\n"
	.string "to ride across water on your Pokémon,\l"
	.string "assuming you teach them to surf first.\p"
	.string "I think I remember your scientist\n"
	.string "pal mentioning something about that.\l"
	.string "Maybe check on him near Amberock?\p"
	.string "Oh, but before that, I was also\n"
	.string "supposed to give you this TM!$"

DrisGym_AcerolaPosBat::
# 825 "data/maps/Drisledge_Gym/scripts.pory"
	.string "I remember your scientist friend\n"
	.string "mentioning something about teaching\l"
	.string "your Pokémon how to surf.\p"
	.string "If you've got nothing better to do,\n"
	.string "maybe now's a good time to go check\l"
	.string "on him near Amberock Town?$"

DrisledgeGym_Statue_Text::
# 837 "data/maps/Drisledge_Gym/scripts.pory"
	.string "There are only indecipherable sketches\n"
	.string "and doodles drawn on this plaque.$"
