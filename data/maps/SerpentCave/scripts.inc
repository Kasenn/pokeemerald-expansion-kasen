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
	disable_jump_landing_ground_effect
# 215 "data/maps/SerpentCave/scripts.pory"
	lock_anim
# 216 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 217 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 218 "data/maps/SerpentCave/scripts.pory"
	unlock_anim
# 219 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 220 "data/maps/SerpentCave/scripts.pory"
	lock_anim
# 221 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 222 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 223 "data/maps/SerpentCave/scripts.pory"
	unlock_anim
# 224 "data/maps/SerpentCave/scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 226 "data/maps/SerpentCave/scripts.pory"
BoulderGoingUp2:
# 227 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 227 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 227 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 227 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 228 "data/maps/SerpentCave/scripts.pory"
	disable_jump_landing_ground_effect
# 229 "data/maps/SerpentCave/scripts.pory"
	lock_anim
# 230 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 231 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 232 "data/maps/SerpentCave/scripts.pory"
	unlock_anim
# 233 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 234 "data/maps/SerpentCave/scripts.pory"
	lock_anim
# 235 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 236 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 237 "data/maps/SerpentCave/scripts.pory"
	unlock_anim
# 238 "data/maps/SerpentCave/scripts.pory"
	enable_jump_landing_ground_effect
	step_end

PushABoulder::
	checkpartymove MOVE_STRENGTH
# 0 "data/maps/SerpentCave/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq PushABoulder_2
# 246 "data/maps/SerpentCave/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	msgbox PushBoulderAside, MSGBOX_YESNO
# 0 "data/maps/SerpentCave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PushABoulder_5
# 251 "data/maps/SerpentCave/scripts.pory"
	safefollow
# 252 "data/maps/SerpentCave/scripts.pory"
	msgbox PushWithStrength
# 253 "data/maps/SerpentCave/scripts.pory"
	closemessage
# 254 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 255 "data/maps/SerpentCave/scripts.pory"
	waitse
# 256 "data/maps/SerpentCave/scripts.pory"
	waitstate
# 257 "data/maps/SerpentCave/scripts.pory"
	delay 20
	return

PushABoulder_2:
# 242 "data/maps/SerpentCave/scripts.pory"
	msgbox PushBoulderAsideCant
# 243 "data/maps/SerpentCave/scripts.pory"
	release
	end

PushABoulder_5:
# 248 "data/maps/SerpentCave/scripts.pory"
	release
	end


DoBoulderOneRoll::
# 260 "data/maps/SerpentCave/scripts.pory"
	applymovement 6, Walk4DownFast
# 261 "data/maps/SerpentCave/scripts.pory"
	applymovement 7, Walk4DownFast
# 263 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 4, 0x326, TRUE
# 264 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 4, 0x327, TRUE
# 265 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 266 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 267 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 4, 0x2C8, TRUE
# 268 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 4, 0x2C9, TRUE
# 269 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 270 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 272 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 5, 0x32E, TRUE
# 273 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 5, 0x32F, TRUE
# 274 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 276 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 5, 0x2C8, TRUE
# 277 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 5, 0x2C9, TRUE
# 278 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 279 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 281 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 6, 0x32E, TRUE
# 282 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 6, 0x32F, TRUE
# 283 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 285 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 6, 0x2C8, TRUE
# 286 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 6, 0x2C9, TRUE
# 287 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 288 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 290 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 7, 0x32E, TRUE
# 291 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 7, 0x32F, TRUE
# 292 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 293 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 294 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 7, 0x2C8, TRUE
# 295 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 7, 0x2C9, TRUE
# 296 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 297 "data/maps/SerpentCave/scripts.pory"
	delay 2
# 299 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 8, 0x33E, TRUE
# 300 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 8, 0x33F, TRUE
# 301 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 302 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 303 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 8, 0x2D0, TRUE
# 304 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 8, 0x2D1, TRUE
# 305 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 306 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 308 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 9, 0x346, TRUE
# 309 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 9, 0x347, TRUE
# 310 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 311 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 312 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 9, 0x0B9, TRUE
# 313 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 9, 0x0B9, TRUE
# 314 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 315 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 317 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 10, 0x346, TRUE
# 318 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 10, 0x347, TRUE
# 319 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 320 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 321 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 10, 0x0B9, TRUE
# 322 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 10, 0x0B9, TRUE
# 323 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 324 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 326 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 11, 0x346, TRUE
# 327 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 11, 0x347, TRUE
# 328 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 329 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 330 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 11, 0x0B9, TRUE
# 331 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 11, 0x0B9, TRUE
# 332 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 333 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 335 "data/maps/SerpentCave/scripts.pory"
	setmetatile 30, 12, 0x0B9, TRUE
# 336 "data/maps/SerpentCave/scripts.pory"
	setmetatile 31, 12, 0x0B9, TRUE
# 337 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


DoBoulderTwoRoll::
# 339 "data/maps/SerpentCave/scripts.pory"
	applymovement 8, BoulderGoingUp1
# 340 "data/maps/SerpentCave/scripts.pory"
	applymovement 9, BoulderGoingUp1
# 342 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 343 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 36, 0x340, TRUE
# 344 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 36, 0x341, TRUE
# 345 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 346 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 347 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 36, 0x2CC, TRUE
# 348 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 36, 0x2CD, TRUE
# 349 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 351 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 352 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 35, 0x338, TRUE
# 353 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 35, 0x339, TRUE
# 354 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 355 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 356 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 35, 0x2C4, TRUE
# 357 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 35, 0x2C5, TRUE
# 358 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 360 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 361 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 34, 0x338, TRUE
# 362 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 34, 0x339, TRUE
# 363 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 364 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 365 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 34, 0x2C4, TRUE
# 366 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 34, 0x2C5, TRUE
# 367 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 369 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 370 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 33, 0x338, TRUE
# 371 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 33, 0x339, TRUE
# 372 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 373 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 374 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 33, 0x2C4, TRUE
# 375 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 33, 0x2C5, TRUE
# 376 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 378 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 379 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 32, 0x330, TRUE
# 380 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 32, 0x331, TRUE
# 381 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 382 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 383 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 32, 0x2BC, TRUE
# 384 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 32, 0x2BD, TRUE
# 385 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 387 "data/maps/SerpentCave/scripts.pory"
	delay 16
# 388 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 31, 0x338, TRUE
# 389 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 31, 0x339, TRUE
# 390 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 392 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 394 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 395 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 31, 0x2C4, TRUE
# 396 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 31, 0x2C5, TRUE
# 397 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 399 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 400 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 30, 0x330, TRUE
# 401 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 30, 0x331, TRUE
# 402 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 403 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 404 "data/maps/SerpentCave/scripts.pory"
	setmetatile 54, 30, 0x2BC, TRUE
# 405 "data/maps/SerpentCave/scripts.pory"
	setmetatile 55, 30, 0x2BD, TRUE
# 406 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


DoBoulderThreeRoll::
# 408 "data/maps/SerpentCave/scripts.pory"
	applymovement 17, BoulderGoingUp2
# 409 "data/maps/SerpentCave/scripts.pory"
	applymovement 18, BoulderGoingUp2
# 411 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 412 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 33, 0x340, TRUE
# 413 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 33, 0x341, TRUE
# 414 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 415 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 416 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 33, 0x2CC, TRUE
# 417 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 33, 0x2CD, TRUE
# 418 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 420 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 421 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 32, 0x338, TRUE
# 422 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 32, 0x339, TRUE
# 423 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 424 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 425 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 32, 0x2C4, TRUE
# 426 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 32, 0x2C5, TRUE
# 427 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 429 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 430 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 31, 0x338, TRUE
# 431 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 31, 0x339, TRUE
# 432 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 433 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 434 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 31, 0x2C4, TRUE
# 435 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 31, 0x2C5, TRUE
# 436 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 438 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 439 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 30, 0x330, TRUE
# 440 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 30, 0x331, TRUE
# 441 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 442 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 443 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 30, 0x2BC, TRUE
# 444 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 30, 0x2BD, TRUE
# 445 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 447 "data/maps/SerpentCave/scripts.pory"
	delay 16
# 448 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 29, 0x338, TRUE
# 449 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 29, 0x339, TRUE
# 450 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 452 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 454 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 455 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 29, 0x2C4, TRUE
# 456 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 29, 0x2C5, TRUE
# 457 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 459 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 460 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 28, 0x330, TRUE
# 461 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 28, 0x331, TRUE
# 462 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 463 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 464 "data/maps/SerpentCave/scripts.pory"
	setmetatile 108, 28, 0x2BC, TRUE
# 465 "data/maps/SerpentCave/scripts.pory"
	setmetatile 109, 28, 0x2BD, TRUE
# 466 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


DoBoulderFourRoll::
# 468 "data/maps/SerpentCave/scripts.pory"
	applymovement 24, BoulderGoingUp2
# 469 "data/maps/SerpentCave/scripts.pory"
	applymovement 25, BoulderGoingUp2
# 471 "data/maps/SerpentCave/scripts.pory"
	delay 4
# 472 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 32, 0x340, TRUE
# 473 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 32, 0x341, TRUE
# 474 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 475 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 476 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 32, 0x2CC, TRUE
# 477 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 32, 0x2CD, TRUE
# 478 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 480 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 481 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 31, 0x338, TRUE
# 482 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 31, 0x339, TRUE
# 483 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 484 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 485 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 31, 0x2C4, TRUE
# 486 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 31, 0x2C5, TRUE
# 487 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 489 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 490 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 30, 0x338, TRUE
# 491 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 30, 0x339, TRUE
# 492 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 493 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 494 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 30, 0x2C4, TRUE
# 495 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 30, 0x2C5, TRUE
# 496 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 498 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 499 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 29, 0x330, TRUE
# 500 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 29, 0x331, TRUE
# 501 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 502 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 503 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 29, 0x2BC, TRUE
# 504 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 29, 0x2BD, TRUE
# 505 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 507 "data/maps/SerpentCave/scripts.pory"
	delay 16
# 508 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 28, 0x338, TRUE
# 509 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 28, 0x339, TRUE
# 510 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 512 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 514 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 515 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 28, 0x2C4, TRUE
# 516 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 28, 0x2C5, TRUE
# 517 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 519 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 520 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 27, 0x330, TRUE
# 521 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 27, 0x331, TRUE
# 522 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
# 523 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 524 "data/maps/SerpentCave/scripts.pory"
	setmetatile 134, 27, 0x2BC, TRUE
# 525 "data/maps/SerpentCave/scripts.pory"
	setmetatile 135, 27, 0x2BD, TRUE
# 526 "data/maps/SerpentCave/scripts.pory"
	special DrawWholeMapView
	return


SerpentCave_MoveFirstBoulder::
# 530 "data/maps/SerpentCave/scripts.pory"
	lock
# 531 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 532 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderOneRoll
# 533 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 534 "data/maps/SerpentCave/scripts.pory"
	removeobject 1
# 535 "data/maps/SerpentCave/scripts.pory"
	removeobject 6
# 536 "data/maps/SerpentCave/scripts.pory"
	removeobject 7
# 537 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_2
# 538 "data/maps/SerpentCave/scripts.pory"
	addobject 2
# 539 "data/maps/SerpentCave/scripts.pory"
	addobject 3
# 540 "data/maps/SerpentCave/scripts.pory"
	addobject 4
# 541 "data/maps/SerpentCave/scripts.pory"
	addobject 5
# 542 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveFirstBoulder_2
# 547 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 548 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveFirstBoulder_1:
# 550 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_1
# 551 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 552 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveFirstBoulder_2:
# 543 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 544 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveFirstBoulder_1


SerpentCave_MoveSecondBoulder::
# 554 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 555 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderTwoRoll
# 557 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 558 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 559 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveSecondBoulder_2
# 564 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 565 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveSecondBoulder_1:
# 567 "data/maps/SerpentCave/scripts.pory"
	removeobject 8
# 568 "data/maps/SerpentCave/scripts.pory"
	removeobject 9
# 569 "data/maps/SerpentCave/scripts.pory"
	removeobject 10
# 570 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_4
# 571 "data/maps/SerpentCave/scripts.pory"
	addobject 12
# 572 "data/maps/SerpentCave/scripts.pory"
	addobject 13
# 573 "data/maps/SerpentCave/scripts.pory"
	addobject 14
# 574 "data/maps/SerpentCave/scripts.pory"
	addobject 15
# 575 "data/maps/SerpentCave/scripts.pory"
	addobject 16
# 576 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_2
# 577 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 578 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveSecondBoulder_2:
# 560 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 561 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveSecondBoulder_1


SerpentCave_MoveThirdBoulder::
# 580 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 581 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderThreeRoll
# 583 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 584 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 585 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveThirdBoulder_2
# 590 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 591 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveThirdBoulder_1:
# 593 "data/maps/SerpentCave/scripts.pory"
	removeobject 17
# 594 "data/maps/SerpentCave/scripts.pory"
	removeobject 18
# 595 "data/maps/SerpentCave/scripts.pory"
	removeobject 19
# 596 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_6
# 597 "data/maps/SerpentCave/scripts.pory"
	addobject 20
# 598 "data/maps/SerpentCave/scripts.pory"
	addobject 21
# 599 "data/maps/SerpentCave/scripts.pory"
	addobject 22
# 600 "data/maps/SerpentCave/scripts.pory"
	addobject 23
# 601 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_3
# 602 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 603 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveThirdBoulder_2:
# 586 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 587 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveThirdBoulder_1


SerpentCave_MoveFourthBoulder::
# 606 "data/maps/SerpentCave/scripts.pory"
	call PushABoulder
# 607 "data/maps/SerpentCave/scripts.pory"
	call DoBoulderFourRoll
# 609 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 610 "data/maps/SerpentCave/scripts.pory"
	delay 8
# 611 "data/maps/SerpentCave/scripts.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 3
	goto_if_eq SerpentCave_MoveFourthBoulder_2
# 616 "data/maps/SerpentCave/scripts.pory"
	call CameraShake
# 617 "data/maps/SerpentCave/scripts.pory"
	waitstate
SerpentCave_MoveFourthBoulder_1:
# 619 "data/maps/SerpentCave/scripts.pory"
	removeobject 24
# 620 "data/maps/SerpentCave/scripts.pory"
	removeobject 25
# 621 "data/maps/SerpentCave/scripts.pory"
	removeobject 26
# 622 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_TEMP_8
# 623 "data/maps/SerpentCave/scripts.pory"
	addobject 27
# 624 "data/maps/SerpentCave/scripts.pory"
	addobject 28
# 625 "data/maps/SerpentCave/scripts.pory"
	addobject 29
# 626 "data/maps/SerpentCave/scripts.pory"
	addobject 30
# 627 "data/maps/SerpentCave/scripts.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_4
# 628 "data/maps/SerpentCave/scripts.pory"
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
# 629 "data/maps/SerpentCave/scripts.pory"
	release
	return

SerpentCave_MoveFourthBoulder_2:
# 612 "data/maps/SerpentCave/scripts.pory"
	playse SE_M_DIVE
# 613 "data/maps/SerpentCave/scripts.pory"
	waitse
	goto SerpentCave_MoveFourthBoulder_1


CameraShake::
# 631 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8004, 1
# 632 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8005, 1
# 633 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8006, 14
# 634 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8007, 6
# 635 "data/maps/SerpentCave/scripts.pory"
	special ShakeCamera
	return


CameraShakeFaster::
# 639 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8004, 1
# 640 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8005, 1
# 641 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8006, 8
# 642 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_0x8007, 5
# 643 "data/maps/SerpentCave/scripts.pory"
	special ShakeCamera
	return


IrisGoodbye::
# 661 "data/maps/SerpentCave/scripts.pory"
	delay 24
# 662 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 663 "data/maps/SerpentCave/scripts.pory"
	case 0, IrisGoodbye_3
# 664 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_3
# 667 "data/maps/SerpentCave/scripts.pory"
	turnobject 31, DIR_SOUTH
IrisGoodbye_1:
# 669 "data/maps/SerpentCave/scripts.pory"
	playse SE_PIN
# 670 "data/maps/SerpentCave/scripts.pory"
	exclamationmark 31
# 671 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 672 "data/maps/SerpentCave/scripts.pory"
	case 0, IrisGoodbye_7
# 673 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_7
# 675 "data/maps/SerpentCave/scripts.pory"
	case 1, IrisGoodbye_8
# 677 "data/maps/SerpentCave/scripts.pory"
	case 3, IrisGoodbye_9
# 679 "data/maps/SerpentCave/scripts.pory"
	case 4, IrisGoodbye_10
IrisGoodbye_5:
# 682 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 683 "data/maps/SerpentCave/scripts.pory"
	delay 10
# 684 "data/maps/SerpentCave/scripts.pory"
	msgbox IrisIntroText
# 685 "data/maps/SerpentCave/scripts.pory"
	closemessage
# 686 "data/maps/SerpentCave/scripts.pory"
	delay 5
# 687 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 688 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_13
IrisGoodbye_11:
# 691 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 692 "data/maps/SerpentCave/scripts.pory"
	addobject 32
# 693 "data/maps/SerpentCave/scripts.pory"
	addobject 33
# 694 "data/maps/SerpentCave/scripts.pory"
	removeobject 31
# 695 "data/maps/SerpentCave/scripts.pory"
	delay 60
# 696 "data/maps/SerpentCave/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 697 "data/maps/SerpentCave/scripts.pory"
	switch VAR_TEMP_1
# 698 "data/maps/SerpentCave/scripts.pory"
	case 0, IrisGoodbye_15
# 700 "data/maps/SerpentCave/scripts.pory"
	case 1, IrisGoodbye_16
# 702 "data/maps/SerpentCave/scripts.pory"
	case 2, IrisGoodbye_17
# 704 "data/maps/SerpentCave/scripts.pory"
	case 3, IrisGoodbye_18
# 706 "data/maps/SerpentCave/scripts.pory"
	case 4, IrisGoodbye_19
	return

IrisGoodbye_3:
# 665 "data/maps/SerpentCave/scripts.pory"
	turnobject 31, DIR_NORTH
	goto IrisGoodbye_1

IrisGoodbye_7:
# 674 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk1Up
	goto IrisGoodbye_5

IrisGoodbye_8:
# 676 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk3Down
	goto IrisGoodbye_5

IrisGoodbye_9:
# 678 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk2Down
	goto IrisGoodbye_5

IrisGoodbye_10:
# 680 "data/maps/SerpentCave/scripts.pory"
	applymovement 31, Walk2Down
	goto IrisGoodbye_5

IrisGoodbye_13:
# 689 "data/maps/SerpentCave/scripts.pory"
	turnobject 31, DIR_EAST
	goto IrisGoodbye_11

IrisGoodbye_15:
# 699 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance1
	return

IrisGoodbye_16:
# 701 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance2
	return

IrisGoodbye_17:
# 703 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance3
	return

IrisGoodbye_18:
# 705 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance4
	return

IrisGoodbye_19:
# 707 "data/maps/SerpentCave/scripts.pory"
	goto IrisLeavesEntrance5
	return


# 711 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron1:
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 712 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_up
# 713 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 714 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 714 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 715 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 716 "data/maps/SerpentCave/scripts.pory"
	lock_anim
# 717 "data/maps/SerpentCave/scripts.pory"
	disable_jump_landing_ground_effect
# 718 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 719 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 720 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 720 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 721 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 722 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 722 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 723 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 724 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 724 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 725 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 726 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 726 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 727 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 728 "data/maps/SerpentCave/scripts.pory"
	unlock_anim
# 729 "data/maps/SerpentCave/scripts.pory"
	enable_jump_landing_ground_effect
# 730 "data/maps/SerpentCave/scripts.pory"
	delay_16
	step_end

# 732 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron2:
# 733 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 733 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 733 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 733 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 733 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 733 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 734 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 734 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 735 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 735 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 736 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 737 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 738 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 738 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 739 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 740 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 740 "data/maps/SerpentCave/scripts.pory"
	delay_16
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
	step_end

# 748 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron3:
# 749 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 749 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 749 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 749 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 749 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 749 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_right
# 750 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 751 "data/maps/SerpentCave/scripts.pory"
	lock_anim
# 752 "data/maps/SerpentCave/scripts.pory"
	disable_jump_landing_ground_effect
# 753 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 754 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 755 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 755 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 756 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 757 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 757 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 758 "data/maps/SerpentCave/scripts.pory"
	jump_down
# 759 "data/maps/SerpentCave/scripts.pory"
	unlock_anim
# 760 "data/maps/SerpentCave/scripts.pory"
	enable_jump_landing_ground_effect
# 761 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 762 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 762 "data/maps/SerpentCave/scripts.pory"
	walk_down
# 762 "data/maps/SerpentCave/scripts.pory"
	walk_down
	step_end

# 764 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron4:
# 765 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 765 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 765 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 765 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 765 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 765 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 766 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 766 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 767 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 768 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 768 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 769 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 770 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 770 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 771 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 772 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 772 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 773 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 774 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 774 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 775 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 776 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 776 "data/maps/SerpentCave/scripts.pory"
	delay_16
	step_end

# 778 "data/maps/SerpentCave/scripts.pory"
IrisLeavesOnAggron5:
# 779 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 779 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 779 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 779 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 779 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 779 "data/maps/SerpentCave/scripts.pory"
	walk_in_place_fast_down
# 780 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 781 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 781 "data/maps/SerpentCave/scripts.pory"
	walk_right
# 782 "data/maps/SerpentCave/scripts.pory"
	walk_up
# 783 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 784 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 784 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 785 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 786 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 786 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 787 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 788 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 788 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 789 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 790 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 790 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 791 "data/maps/SerpentCave/scripts.pory"
	jump_up
# 792 "data/maps/SerpentCave/scripts.pory"
	delay_16
# 792 "data/maps/SerpentCave/scripts.pory"
	delay_16
	step_end

IrisLeavesEntrance1::
# 796 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron1
# 797 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron1
# 798 "data/maps/SerpentCave/scripts.pory"
	delay 72
# 799 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 800 "data/maps/SerpentCave/scripts.pory"
	delay 72
# 801 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 802 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 803 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 804 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 805 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 806 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 807 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 808 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 809 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 810 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance2::
# 813 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron2
# 814 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron2
# 815 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 816 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 817 "data/maps/SerpentCave/scripts.pory"
	delay 88
# 818 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 819 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 820 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 821 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 822 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 823 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 824 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 825 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 826 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 827 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance3::
# 830 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron3
# 831 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron3
# 832 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 833 "data/maps/SerpentCave/scripts.pory"
	delay 12
# 834 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 835 "data/maps/SerpentCave/scripts.pory"
	delay 36
# 836 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 837 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 838 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 839 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 840 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 841 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance4::
# 844 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron4
# 845 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron4
# 846 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 847 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 848 "data/maps/SerpentCave/scripts.pory"
	delay 40
# 849 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 850 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 851 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 852 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 853 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 854 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 855 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 856 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 857 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 858 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisLeavesEntrance5::
# 861 "data/maps/SerpentCave/scripts.pory"
	applymovement 32, IrisLeavesOnAggron5
# 862 "data/maps/SerpentCave/scripts.pory"
	applymovement 33, IrisLeavesOnAggron5
# 863 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 864 "data/maps/SerpentCave/scripts.pory"
	message IrisLeavesEntrance1_Text_0
# 865 "data/maps/SerpentCave/scripts.pory"
	delay 56
# 866 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 867 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 868 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 869 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 870 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 871 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 872 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 873 "data/maps/SerpentCave/scripts.pory"
	delay 48
# 874 "data/maps/SerpentCave/scripts.pory"
	call CameraShakeFaster
# 875 "data/maps/SerpentCave/scripts.pory"
	goto IrisIntroEnd
	return


IrisIntroEnd::
# 878 "data/maps/SerpentCave/scripts.pory"
	waitmovement 0
# 879 "data/maps/SerpentCave/scripts.pory"
	delay 30
# 880 "data/maps/SerpentCave/scripts.pory"
	removeobject 32
# 881 "data/maps/SerpentCave/scripts.pory"
	removeobject 33
# 882 "data/maps/SerpentCave/scripts.pory"
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_INTRO
# 883 "data/maps/SerpentCave/scripts.pory"
	release
	return


IrisLeavesEntrance1_Text_0:
# 799 "data/maps/SerpentCave/scripts.pory"
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
# 646 "data/maps/SerpentCave/scripts.pory"
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
