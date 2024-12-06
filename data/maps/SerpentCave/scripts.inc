SerpentCave_MapScripts::
# 2 "data/maps/SerpentCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SerpentCaveLayout
# 3 "data/maps/SerpentCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SerpentCaveSetWaterfall
# 4 "data/maps/SerpentCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SerpentCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SerpentCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SerpentCave/scripts.pory"
	map_script_2 VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_NOT_ENTERED, IrisGoodbye
	.2byte 0


SerpentCaveLayout::
# 21 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_INTRO
	goto_if_ge SerpentCaveLayout_2
SerpentCaveLayout_1:
# 24 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_NOT_ENTERED
	goto_if_eq SerpentCaveLayout_5
SerpentCaveLayout_4:
# 64 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_2
# 65 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_4
# 66 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_6
# 67 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_8
# 68 "data/maps/SerpentCave/scripts.pory"
	switch VAR_SERPENTCAVE_WATER_LEVEL
# 69 "data/maps/SerpentCave/scripts.pory"
	case 0, SerpentCaveLayout_9
# 71 "data/maps/SerpentCave/scripts.pory"
	case 1, SerpentCaveLayout_10
# 72 "data/maps/SerpentCave/scripts.pory"
	case 11, SerpentCaveLayout_10
# 74 "data/maps/SerpentCave/scripts.pory"
	case 2, SerpentCaveLayout_11
# 75 "data/maps/SerpentCave/scripts.pory"
	case 12, SerpentCaveLayout_11
# 77 "data/maps/SerpentCave/scripts.pory"
	case 3, SerpentCaveLayout_12
# 78 "data/maps/SerpentCave/scripts.pory"
	case 13, SerpentCaveLayout_12
# 80 "data/maps/SerpentCave/scripts.pory"
	case 4, SerpentCaveLayout_13
# 81 "data/maps/SerpentCave/scripts.pory"
	case 14, SerpentCaveLayout_13
SerpentCaveLayout_7:
# 84 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_1, SerpentCaveLayout_21
SerpentCaveLayout_20:
# 88 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_2, SerpentCaveLayout_24
SerpentCaveLayout_23:
# 92 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_3, SerpentCaveLayout_27
SerpentCaveLayout_26:
# 96 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_4, SerpentCaveLayout_29
	return

SerpentCaveLayout_2:
# 22 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_B
	goto SerpentCaveLayout_1

SerpentCaveLayout_5:
# 25 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 26 "data/maps/SerpentCave/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 27 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_0
# 28 "data/maps/SerpentCave/scripts.pory"
	case 27, SerpentCaveLayout_15
# 36 "data/maps/SerpentCave/scripts.pory"
	case 57, SerpentCaveLayout_16
# 44 "data/maps/SerpentCave/scripts.pory"
	case 83, SerpentCaveLayout_17
# 46 "data/maps/SerpentCave/scripts.pory"
	case 113, SerpentCaveLayout_18
# 54 "data/maps/SerpentCave/scripts.pory"
	case 138, SerpentCaveLayout_19
	goto SerpentCaveLayout_4

SerpentCaveLayout_9:
# 70 "data/maps/SerpentCave/scripts.pory"
	setmaplayoutindex LAYOUT_SERPENT_CAVE_0_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_10:
# 73 "data/maps/SerpentCave/scripts.pory"
	setmaplayoutindex LAYOUT_SERPENT_CAVE_1_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_11:
# 76 "data/maps/SerpentCave/scripts.pory"
	setmaplayoutindex LAYOUT_SERPENT_CAVE_2_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_12:
# 79 "data/maps/SerpentCave/scripts.pory"
	setmaplayoutindex LAYOUT_SERPENT_CAVE_3_STREAMS
	goto SerpentCaveLayout_7

SerpentCaveLayout_13:
# 82 "data/maps/SerpentCave/scripts.pory"
	setmaplayoutindex LAYOUT_SERPENT_CAVE
	goto SerpentCaveLayout_7

SerpentCaveLayout_15:
# 29 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_TEMP_1, 0
# 30 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 31, 27, 6
# 31 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 32, 27, 5
# 32 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 33, 27, 5
# 33 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 34 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
	goto SerpentCaveLayout_4

SerpentCaveLayout_16:
# 37 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 31, 57, 32
# 39 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 32, 57, 35
# 40 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 33, 57, 35
# 41 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_DOWN
# 43 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_DOWN
	goto SerpentCaveLayout_4

SerpentCaveLayout_17:
# 45 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto SerpentCaveLayout_4

SerpentCaveLayout_18:
# 47 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_TEMP_1, 3
# 48 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 31, 113, 30
# 49 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 32, 113, 32
# 50 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 33, 113, 32
# 51 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
# 52 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_DOWN
	goto SerpentCaveLayout_4

SerpentCaveLayout_19:
# 55 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_TEMP_1, 4
# 56 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 31, 138, 29
# 57 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 32, 138, 31
# 58 "data/maps/SerpentCave/scripts.pory"
	setobjectxyperm 33, 138, 31
# 59 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
# 60 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/maps/SerpentCave/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_DOWN
	goto SerpentCaveLayout_4

SerpentCaveLayout_21:
# 85 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_1
# 86 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_2
	goto SerpentCaveLayout_20

SerpentCaveLayout_24:
# 89 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_3
# 90 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_4
	goto SerpentCaveLayout_23

SerpentCaveLayout_27:
# 93 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_5
# 94 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_6
	goto SerpentCaveLayout_26

SerpentCaveLayout_29:
# 97 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_7
# 98 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_8
	return


SerpentCaveSetWaterfall::
# 102 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_TEMP_A
# 103 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_1, SerpentCaveSetWaterfall_2
SerpentCaveSetWaterfall_1:
# 127 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_2, SerpentCaveSetWaterfall_5
SerpentCaveSetWaterfall_4:
# 145 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_3, SerpentCaveSetWaterfall_10
SerpentCaveSetWaterfall_9:
# 161 "data/maps/SerpentCave/scripts.pory"
	goto_if_set FLAG_SERPENTCAVE_BOULDER_4, SerpentCaveSetWaterfall_14
	return

SerpentCaveSetWaterfall_2:
# 104 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 3, 0x2B6, TRUE
# 105 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 3, 0x2B7, TRUE
# 106 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 4, 0x2C8, TRUE
# 107 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 4, 0x2C9, TRUE
# 108 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 5, 0x2C8, TRUE
# 109 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 5, 0x2C9, TRUE
# 110 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 6, 0x2C8, TRUE
# 111 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 6, 0x2C9, TRUE
# 112 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 7, 0x2C8, TRUE
# 113 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 7, 0x2C9, TRUE
# 114 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 8, 0x2D0, TRUE
# 115 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 8, 0x2D1, TRUE
# 116 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_7
	goto SerpentCaveSetWaterfall_1

SerpentCaveSetWaterfall_5:
# 128 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 36, 0x2CC, TRUE
# 129 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 36, 0x2CD, TRUE
# 130 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 35, 0x2C4, TRUE
# 131 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 35, 0x2C5, TRUE
# 132 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 34, 0x2C4, TRUE
# 133 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 34, 0x2C5, TRUE
# 134 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 33, 0x2C4, TRUE
# 135 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 33, 0x2C5, TRUE
# 136 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 32, 0x2BC, TRUE
# 137 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 32, 0x2BD, TRUE
# 138 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_12
	goto SerpentCaveSetWaterfall_4

SerpentCaveSetWaterfall_7:
# 117 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 9, 0x0B9, TRUE
# 118 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 9, 0x0B9, TRUE
# 119 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 10, 0x0B9, TRUE
# 120 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 10, 0x0B9, TRUE
# 121 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 11, 0x0B9, TRUE
# 122 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 11, 0x0B9, TRUE
# 123 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 12, 0x0B9, TRUE
# 124 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 12, 0x0B9, TRUE
	goto SerpentCaveSetWaterfall_1

SerpentCaveSetWaterfall_10:
# 146 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 33, 0x2CC, TRUE
# 147 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 33, 0x2CD, TRUE
# 148 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 32, 0x2C4, TRUE
# 149 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 32, 0x2C5, TRUE
# 150 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 31, 0x2C4, TRUE
# 151 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 31, 0x2C5, TRUE
# 152 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 30, 0x2BC, TRUE
# 153 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 30, 0x2BD, TRUE
# 154 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_16
	goto SerpentCaveSetWaterfall_9

SerpentCaveSetWaterfall_12:
# 139 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 31, 0x2C4, TRUE
# 140 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 31, 0x2C5, TRUE
# 141 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 30, 0x2BC, TRUE
# 142 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 30, 0x2BD, TRUE
	goto SerpentCaveSetWaterfall_4

SerpentCaveSetWaterfall_14:
# 162 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 32, 0x2CD, TRUE
# 163 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 32, 0x2CC, TRUE
# 164 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 31, 0x2C4, TRUE
# 165 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 31, 0x2C5, TRUE
# 166 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 30, 0x2C4, TRUE
# 167 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 30, 0x2C5, TRUE
# 168 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 29, 0x2BC, TRUE
# 169 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 29, 0x2BD, TRUE
# 170 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_le SerpentCaveSetWaterfall_18
	return

SerpentCaveSetWaterfall_16:
# 155 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 29, 0x2C4, TRUE
# 156 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 29, 0x2C5, TRUE
# 157 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 28, 0x2BC, TRUE
# 158 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 28, 0x2BD, TRUE
	goto SerpentCaveSetWaterfall_9

SerpentCaveSetWaterfall_18:
# 171 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 28, 0x2C4, TRUE
# 172 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 28, 0x2C5, TRUE
# 173 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 27, 0x2BC, TRUE
# 174 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 27, 0x2BD, TRUE
	return


# 179 "data/maps/SerpentCave/scripts.pory"
Walk4DownFast:
# 180 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 180 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 180 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 180 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 181 "data/maps/SerpentCave/scripts.pory"
	walk_fast_down
# 181 "data/maps/SerpentCave/scripts.pory"
	walk_fast_down
# 181 "data/maps/SerpentCave/scripts.pory"
	walk_fast_down
	step_end

SerpentCave_RapidTooFast::
# 205 "data/maps/SerpentCave/scripts.pory"
	msgbox SerpentCave_RapidTooFast_Text, MSGBOX_SIGN
	return


# 212 "data/maps/SerpentCave/scripts.pory"
BoulderGoingUp1:
# 213 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 213 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 213 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 213 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 213 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 214 "data/maps/SerpentCave/scripts.pory"
	jump_special_up
# 215 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 216 "data/maps/SerpentCave/scripts.pory"
	jump_special_up
	step_end

# 217 "data/maps/SerpentCave/scripts.pory"
BoulderGoingUp2:
# 218 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 218 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 218 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 218 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 219 "data/maps/SerpentCave/scripts.pory"
	jump_special_up
# 220 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 221 "data/maps/SerpentCave/scripts.pory"
	jump_special_up
	step_end

PushABoulder::
	checkpartymove MOVE_STRENGTH
# 0 "data/maps/SerpentCave/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq PushABoulder_2
# 228 "data/maps/SerpentCave/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	msgbox PushBoulderAside, MSGBOX_YESNO
# 0 "data/maps/SerpentCave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PushABoulder_5
# 233 "data/maps/SerpentCave/scripts.pory"
	safefollow
# 234 "data/maps/SerpentCave/scripts.pory"
	msgbox PushWithStrength
# 235 "data/maps/SerpentCave/scripts.pory"
	closemessage
# 236 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 237 "data/maps/SerpentCave/scripts.pory"
	waitse
# 238 "data/maps/SerpentCave/scripts.pory"
	waitstate
# 239 "data/maps/SerpentCave/scripts.pory"
	delay 20
	return

PushABoulder_2:
# 224 "data/maps/SerpentCave/scripts.pory"
	msgbox PushBoulderAsideCant
# 225 "data/maps/SerpentCave/scripts.pory"
	release
	end

PushABoulder_5:
# 230 "data/maps/SerpentCave/scripts.pory"
	release
	end


DoBoulderOneRoll::
# 242 "data/maps/SerpentCave/scripts.pory"
	applymovement 6, Walk4DownFast
# 243 "data/maps/SerpentCave/scripts.pory"
	applymovement 7, Walk4DownFast
# 245 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 4, 0x326, TRUE
# 246 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 4, 0x327, TRUE
# 247 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 248 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 249 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 4, 0x2C8, TRUE
# 250 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 4, 0x2C9, TRUE
# 251 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 252 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 254 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 5, 0x32E, TRUE
# 255 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 5, 0x32F, TRUE
# 256 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 257 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 258 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 5, 0x2C8, TRUE
# 259 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 5, 0x2C9, TRUE
# 260 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 261 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 263 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 6, 0x32E, TRUE
# 264 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 6, 0x32F, TRUE
# 265 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 266 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 267 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 6, 0x2C8, TRUE
# 268 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 6, 0x2C9, TRUE
# 269 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 270 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 272 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 7, 0x32E, TRUE
# 273 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 7, 0x32F, TRUE
# 274 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 276 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 7, 0x2C8, TRUE
# 277 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 7, 0x2C9, TRUE
# 278 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 279 "data/maps/SerpentCave/scripts.pory"
	delay 2
# 281 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 8, 0x33E, TRUE
# 282 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 8, 0x33F, TRUE
# 283 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 285 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 8, 0x2D0, TRUE
# 286 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 8, 0x2D1, TRUE
# 287 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 288 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 290 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 9, 0x346, TRUE
# 291 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 9, 0x347, TRUE
# 292 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 293 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 294 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 9, 0x0B9, TRUE
# 295 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 9, 0x0B9, TRUE
# 296 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 297 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 299 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 10, 0x346, TRUE
# 300 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 10, 0x347, TRUE
# 301 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 302 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 303 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 10, 0x0B9, TRUE
# 304 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 10, 0x0B9, TRUE
# 305 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 306 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 308 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 11, 0x346, TRUE
# 309 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 11, 0x347, TRUE
# 310 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 311 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 312 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 11, 0x0B9, TRUE
# 313 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 11, 0x0B9, TRUE
# 314 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 315 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 317 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 12, 0x0B9, TRUE
# 318 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 12, 0x0B9, TRUE
# 319 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


DoBoulderTwoRoll::
# 321 "data/maps/SerpentCave/scripts.pory"
	applymovement 8, BoulderGoingUp1
# 322 "data/maps/SerpentCave/scripts.pory"
	applymovement 9, BoulderGoingUp1
# 324 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 325 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 36, 0x340, TRUE
# 326 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 36, 0x341, TRUE
# 327 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 328 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 329 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 36, 0x2CC, TRUE
# 330 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 36, 0x2CD, TRUE
# 331 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 333 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 334 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 35, 0x338, TRUE
# 335 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 35, 0x339, TRUE
# 336 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 337 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 338 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 35, 0x2C4, TRUE
# 339 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 35, 0x2C5, TRUE
# 340 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 342 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 343 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 34, 0x338, TRUE
# 344 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 34, 0x339, TRUE
# 345 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 346 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 347 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 34, 0x2C4, TRUE
# 348 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 34, 0x2C5, TRUE
# 349 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 351 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 352 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 33, 0x338, TRUE
# 353 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 33, 0x339, TRUE
# 354 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 355 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 356 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 33, 0x2C4, TRUE
# 357 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 33, 0x2C5, TRUE
# 358 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 360 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 361 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 32, 0x330, TRUE
# 362 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 32, 0x331, TRUE
# 363 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 364 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 365 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 32, 0x2BC, TRUE
# 366 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 32, 0x2BD, TRUE
# 367 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 369 "data/maps/SerpentCave/scripts.pory"
	delay 16
# 370 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 31, 0x338, TRUE
# 371 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 31, 0x339, TRUE
# 372 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 374 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 376 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 377 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 31, 0x2C4, TRUE
# 378 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 31, 0x2C5, TRUE
# 379 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 381 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 382 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 30, 0x330, TRUE
# 383 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 30, 0x331, TRUE
# 384 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 385 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 386 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 30, 0x2BC, TRUE
# 387 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 30, 0x2BD, TRUE
# 388 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


DoBoulderThreeRoll::
# 390 "data/maps/SerpentCave/scripts.pory"
	applymovement 17, BoulderGoingUp2
# 391 "data/maps/SerpentCave/scripts.pory"
	applymovement 18, BoulderGoingUp2
# 393 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 394 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 33, 0x340, TRUE
# 395 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 33, 0x341, TRUE
# 396 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 397 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 398 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 33, 0x2CC, TRUE
# 399 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 33, 0x2CD, TRUE
# 400 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 402 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 403 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 32, 0x338, TRUE
# 404 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 32, 0x339, TRUE
# 405 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 406 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 407 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 32, 0x2C4, TRUE
# 408 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 32, 0x2C5, TRUE
# 409 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 411 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 412 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 31, 0x338, TRUE
# 413 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 31, 0x339, TRUE
# 414 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 415 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 416 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 31, 0x2C4, TRUE
# 417 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 31, 0x2C5, TRUE
# 418 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 420 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 421 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 30, 0x330, TRUE
# 422 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 30, 0x331, TRUE
# 423 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 424 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 425 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 30, 0x2BC, TRUE
# 426 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 30, 0x2BD, TRUE
# 427 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 429 "data/maps/SerpentCave/scripts.pory"
	delay 16
# 430 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 29, 0x338, TRUE
# 431 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 29, 0x339, TRUE
# 432 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 434 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 436 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 437 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 29, 0x2C4, TRUE
# 438 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 29, 0x2C5, TRUE
# 439 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 441 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 442 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 28, 0x330, TRUE
# 443 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 28, 0x331, TRUE
# 444 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 445 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 446 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 28, 0x2BC, TRUE
# 447 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 28, 0x2BD, TRUE
# 448 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


DoBoulderFourRoll::
# 450 "data/maps/SerpentCave/scripts.pory"
	applymovement 24, BoulderGoingUp2
# 451 "data/maps/SerpentCave/scripts.pory"
	applymovement 25, BoulderGoingUp2
# 453 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 454 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 32, 0x340, TRUE
# 455 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 32, 0x341, TRUE
# 456 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 457 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 458 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 32, 0x2CC, TRUE
# 459 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 32, 0x2CD, TRUE
# 460 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 462 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 463 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 31, 0x338, TRUE
# 464 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 31, 0x339, TRUE
# 465 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 466 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 467 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 31, 0x2C4, TRUE
# 468 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 31, 0x2C5, TRUE
# 469 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 471 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 472 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 30, 0x338, TRUE
# 473 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 30, 0x339, TRUE
# 474 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 475 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 476 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 30, 0x2C4, TRUE
# 477 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 30, 0x2C5, TRUE
# 478 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 480 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 481 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 29, 0x330, TRUE
# 482 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 29, 0x331, TRUE
# 483 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 484 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 485 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 29, 0x2BC, TRUE
# 486 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 29, 0x2BD, TRUE
# 487 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 489 "data/maps/SerpentCave/scripts.pory"
	delay 16
# 490 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 28, 0x338, TRUE
# 491 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 28, 0x339, TRUE
# 492 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 494 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 496 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 497 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 28, 0x2C4, TRUE
# 498 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 28, 0x2C5, TRUE
# 499 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 501 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 502 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 27, 0x330, TRUE
# 503 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 27, 0x331, TRUE
# 504 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 505 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 506 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 27, 0x2BC, TRUE
# 507 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 27, 0x2BD, TRUE
# 508 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


SerpentCave_MoveFirstBoulder::
# 512 "data/maps/SerpentCave/scripts.pory"
	lockall
# 513 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 514 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderOneRoll
# 515 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 516 "data/maps/SerpentCave/scripts.pory"
	removeobject 1
# 517 "data/maps/SerpentCave/scripts.pory"
	removeobject 6
# 518 "data/maps/SerpentCave/scripts.pory"
	removeobject 7
# 519 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_2
# 520 "data/maps/SerpentCave/scripts.pory"
	addobject 2
# 521 "data/maps/SerpentCave/scripts.pory"
	addobject 3
# 522 "data/maps/SerpentCave/scripts.pory"
	addobject 4
# 523 "data/maps/SerpentCave/scripts.pory"
	addobject 5
# 524 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveFirstBoulder_2
# 529 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 530 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveFirstBoulder_1:
# 532 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_1
# 533 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 534 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveFirstBoulder_2:
# 525 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 526 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveFirstBoulder_1


SerpentCave_MoveSecondBoulder::
# 536 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 537 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderTwoRoll
# 539 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 540 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 541 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveSecondBoulder_2
# 546 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 547 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveSecondBoulder_1:
# 549 "data/maps/SerpentCave/scripts.pory"
	removeobject 8
# 550 "data/maps/SerpentCave/scripts.pory"
	removeobject 9
# 551 "data/maps/SerpentCave/scripts.pory"
	removeobject 10
# 552 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_4
# 553 "data/maps/SerpentCave/scripts.pory"
	addobject 12
# 554 "data/maps/SerpentCave/scripts.pory"
	addobject 13
# 555 "data/maps/SerpentCave/scripts.pory"
	addobject 14
# 556 "data/maps/SerpentCave/scripts.pory"
	addobject 15
# 557 "data/maps/SerpentCave/scripts.pory"
	addobject 16
# 558 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_2
# 559 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 560 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveSecondBoulder_2:
# 542 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 543 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveSecondBoulder_1


SerpentCave_MoveThirdBoulder::
# 562 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 563 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderThreeRoll
# 565 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 566 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 567 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveThirdBoulder_2
# 572 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 573 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveThirdBoulder_1:
# 575 "data/maps/SerpentCave/scripts.pory"
	removeobject 17
# 576 "data/maps/SerpentCave/scripts.pory"
	removeobject 18
# 577 "data/maps/SerpentCave/scripts.pory"
	removeobject 19
# 578 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_6
# 579 "data/maps/SerpentCave/scripts.pory"
	addobject 20
# 580 "data/maps/SerpentCave/scripts.pory"
	addobject 21
# 581 "data/maps/SerpentCave/scripts.pory"
	addobject 22
# 582 "data/maps/SerpentCave/scripts.pory"
	addobject 23
# 583 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_3
# 584 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 585 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveThirdBoulder_2:
# 568 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 569 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveThirdBoulder_1


SerpentCave_MoveFourthBoulder::
# 588 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 589 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderFourRoll
# 591 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 592 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 593 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveFourthBoulder_2
# 598 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 599 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveFourthBoulder_1:
# 601 "data/maps/SerpentCave/scripts.pory"
	removeobject 24
# 602 "data/maps/SerpentCave/scripts.pory"
	removeobject 25
# 603 "data/maps/SerpentCave/scripts.pory"
	removeobject 26
# 604 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_8
# 605 "data/maps/SerpentCave/scripts.pory"
	addobject 27
# 606 "data/maps/SerpentCave/scripts.pory"
	addobject 28
# 607 "data/maps/SerpentCave/scripts.pory"
	addobject 29
# 608 "data/maps/SerpentCave/scripts.pory"
	addobject 30
# 609 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_4
# 610 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 611 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveFourthBoulder_2:
# 594 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 595 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveFourthBoulder_1


CameraShake::
# 613 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8004, 1
# 614 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8005, 1
# 615 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8006, 14
# 616 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8007, 6
# 617 "data/maps/SerpentCave/scripts.pory"
	special ShakeCamera
	return


CameraShakeFaster::
# 621 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8004, 1
# 622 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8005, 1
# 623 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8006, 8
# 624 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8007, 5
# 625 "data/maps/SerpentCave/scripts.pory"
	special ShakeCamera
	return


IrisGoodbye::
# 643 "data/maps/SerpentCave/scripts.pory"
	delay 24
# 644 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 645 "data/maps/SerpentCave/scripts.pory"
	case 0, IrisGoodbye_3
# 646 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_3
# 649 "data/maps/SerpentCave/scripts.pory"
	turnobject 31, DIR_SOUTH
IrisGoodbye_1:
# 651 "data/maps/SerpentCave/scripts.pory"
	playse SE_PIN
# 652 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, ExclamationMark
# 653 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 654 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 655 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 656 "data/maps/SerpentCave/scripts.pory"
	case 0, IrisGoodbye_7
# 657 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_7
# 659 "data/maps/SerpentCave/scripts.pory"
	case 1, IrisGoodbye_8
# 661 "data/maps/SerpentCave/scripts.pory"
	case 3, IrisGoodbye_9
# 663 "data/maps/SerpentCave/scripts.pory"
	case 4, IrisGoodbye_10
IrisGoodbye_5:
# 666 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 667 "data/maps/SerpentCave/scripts.pory"
	delay 10
# 668 "data/maps/SerpentCave/scripts.pory"
	msgbox IrisIntroText
# 669 "data/maps/SerpentCave/scripts.pory"
	closemessage
# 670 "data/maps/SerpentCave/scripts.pory"
	delay 5
# 671 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 672 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_13
IrisGoodbye_11:
# 675 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 676 "data/maps/SerpentCave/scripts.pory"
	addobject 32
# 677 "data/maps/SerpentCave/scripts.pory"
	addobject 33
# 678 "data/maps/SerpentCave/scripts.pory"
	removeobject 31
# 679 "data/maps/SerpentCave/scripts.pory"
	delay 60
# 680 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 681 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 682 "data/maps/SerpentCave/scripts.pory"
	case 0, IrisGoodbye_15
# 684 "data/maps/SerpentCave/scripts.pory"
	case 1, IrisGoodbye_16
# 686 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_17
# 688 "data/maps/SerpentCave/scripts.pory"
	case 3, IrisGoodbye_18
# 690 "data/maps/SerpentCave/scripts.pory"
	case 4, IrisGoodbye_19
	return

IrisGoodbye_3:
# 647 "data/maps/SerpentCave/scripts.pory"
	turnobject 31, DIR_NORTH
	goto IrisGoodbye_1

IrisGoodbye_7:
# 658 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk1Up
	goto IrisGoodbye_5

IrisGoodbye_8:
# 660 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk3Down
	goto IrisGoodbye_5

IrisGoodbye_9:
# 662 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk2Down
	goto IrisGoodbye_5

IrisGoodbye_10:
# 664 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk2Down
	goto IrisGoodbye_5

IrisGoodbye_13:
# 673 "data/maps/SerpentCave/scripts.pory"
	turnobject 31, DIR_EAST
	goto IrisGoodbye_11

IrisGoodbye_15:
# 683 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance1
	return

IrisGoodbye_16:
# 685 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance2
	return

IrisGoodbye_17:
# 687 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance3
	return

IrisGoodbye_18:
# 689 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance4
	return

IrisGoodbye_19:
# 691 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance5
	return


# 695 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron1:
# 696 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 696 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 696 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 696 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 696 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 696 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 697 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 698 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 698 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 699 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 700 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 701 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 702 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 703 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 704 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 705 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 706 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 707 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 708 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 709 "data/maps/SerpentCave/scripts.pory"
	delay_16
	step_end

# 711 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron2:
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 713 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 713 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 714 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 714 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 715 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 716 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 717 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 717 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 718 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 719 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 719 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 720 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 721 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 721 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 722 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 723 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 723 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 724 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 725 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 725 "data/maps/SerpentCave/scripts.pory"
	delay_16
	step_end

# 727 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron3:
# 728 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 728 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 728 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 728 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 728 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 728 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 729 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 730 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 731 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 732 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 733 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 734 "data/maps/SerpentCave/scripts.pory"
	jump_special_down
# 735 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 736 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 736 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 736 "data/maps/SerpentCave/scripts.pory"
	walk_down
	step_end

# 738 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron4:
# 739 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 739 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 739 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 739 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 739 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 739 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 740 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 740 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 741 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 742 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 742 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 743 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 744 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 744 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 745 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 746 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 746 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 747 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 748 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 748 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 749 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 750 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 750 "data/maps/SerpentCave/scripts.pory"
	delay_16
	step_end

# 752 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron5:
# 753 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 753 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 753 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 753 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 753 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 753 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 754 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 755 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 755 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 756 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 757 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 758 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 758 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 759 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 760 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 760 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 761 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 762 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 762 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 763 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 764 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 764 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 765 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 766 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 766 "data/maps/SerpentCave/scripts.pory"
	delay_16
	step_end

IrisLeavesEntrance1::
# 770 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron1
# 771 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron1
# 772 "data/maps/SerpentCave/scripts.pory"
	delay 72
# 773 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 774 "data/maps/SerpentCave/scripts.pory"
	delay 72
# 775 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 776 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 777 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 778 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 779 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 780 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 781 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 782 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 783 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 784 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance2::
# 787 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron2
# 788 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron2
# 789 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 790 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 791 "data/maps/SerpentCave/scripts.pory"
	delay 88
# 792 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 793 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 794 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 795 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 796 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 797 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 798 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 799 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 800 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 801 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance3::
# 804 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron3
# 805 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron3
# 806 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 807 "data/maps/SerpentCave/scripts.pory"
	delay 12
# 808 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 809 "data/maps/SerpentCave/scripts.pory"
	delay 36
# 810 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 811 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 812 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 813 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 814 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 815 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance4::
# 818 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron4
# 819 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron4
# 820 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 821 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 822 "data/maps/SerpentCave/scripts.pory"
	delay 40
# 823 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 824 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 825 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 826 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 827 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 828 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 829 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 830 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 831 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 832 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance5::
# 835 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron5
# 836 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron5
# 837 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 838 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 839 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 840 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 841 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 842 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 843 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 844 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 845 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 846 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 847 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 848 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 849 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisIntroEnd::
# 852 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 853 "data/maps/SerpentCave/scripts.pory"
	delay 30
# 854 "data/maps/SerpentCave/scripts.pory"
	removeobject 32
# 855 "data/maps/SerpentCave/scripts.pory"
	removeobject 33
# 856 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_INTRO
# 857 "data/maps/SerpentCave/scripts.pory"
	release
	return


IrisLeavesEntrance1_Text_0:
# 773 "data/maps/SerpentCave/scripts.pory"
	.string "NOT THAT WAYYY!$"

PushBoulderAsideCant::
# 184 "data/maps/SerpentCave/scripts.pory"
	.string "It's a huge boulder, and it looks like\n"
	.string "there's a hole in the wall behind it.\p"
	.string "A Pokémon may be able to push the\n"
	.string "boulder aside.$"

PushBoulderAside::
# 190 "data/maps/SerpentCave/scripts.pory"
	.string "It's a huge boulder, and it looks like\n"
	.string "there's a hole in the wall behind it.\p"
	.string "A Pokémon may be able to push the\n"
	.string "boulder aside.\p"
	.string "Would you like to use Strength?$"

PushWithStrength::
# 198 "data/maps/SerpentCave/scripts.pory"
	.string "{STR_VAR_1} used Strength!\p"
	.string "{STR_VAR_1} was able to nudge\n"
	.string "the huge boulder loose!$"

SerpentCave_RapidTooFast_Text::
# 207 "data/maps/SerpentCave/scripts.pory"
	.string "The water is flowing too rapidly\n"
	.string "to fish or surf here.$"

IrisIntroText::
# 628 "data/maps/SerpentCave/scripts.pory"
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
