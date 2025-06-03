TestRoom_MapScripts::
# 13 "data/maps/TestRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TestRoom_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TestRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 14 "data/maps/TestRoom/scripts.pory"
	setstepcallback STEP_CB_ROPE_BRIDGE
	return


TestFollowerMacro::
# 23 "data/maps/TestRoom/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 6, 25
# 24 "data/maps/TestRoom/scripts.pory"
	showobjectat OBJ_EVENT_ID_FOLLOWER, MAP_TEST_ROOM
# 25 "data/maps/TestRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
# 26 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/TestRoom/scripts.pory"
	release
	return


DoBoulderCheck::
# 30 "data/maps/TestRoom/scripts.pory"
	getobjectxy 4
# 31 "data/maps/TestRoom/scripts.pory"
	compare VAR_0x8002, 25
	goto_if_ne DoBoulderCheck_2
# 35 "data/maps/TestRoom/scripts.pory"
	safefollow
# 36 "data/maps/TestRoom/scripts.pory"
	applymovement 4, MoveBoulderFast
# 37 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 38 "data/maps/TestRoom/scripts.pory"
	setobjectxy 4, 9, 25
# 39 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 4, 9, 25
# 40 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
DoBoulderCheck_1:
# 42 "data/maps/TestRoom/scripts.pory"
	release
	return

DoBoulderCheck_2:
# 32 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto DoBoulderCheck_1


# 44 "data/maps/TestRoom/scripts.pory"
MoveBoulderFast:
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 45 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
	step_end

SetTestFlag::
# 48 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 49 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 50 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 51 "data/maps/TestRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_YOUNGSTER
	return


TestBoundary::
# 60 "data/maps/TestRoom/scripts.pory"
	lock
# 61 "data/maps/TestRoom/scripts.pory"
	showobjectat 16, MAP_TEST_ROOM
# 62 "data/maps/TestRoom/scripts.pory"
	hideobjectat 15, MAP_TEST_ROOM
# 63 "data/maps/TestRoom/scripts.pory"
	applymovement 16, Walk6Left
# 64 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk6invis
# 65 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 68 "data/maps/TestRoom/scripts.pory"
	turnobject 10, DIR_WEST
# 69 "data/maps/TestRoom/scripts.pory"
	showobjectat 10, MAP_PETALBURG_CITY
# 70 "data/maps/TestRoom/scripts.pory"
	applymovement 16, TurnInvisible, MAP_TEST_ROOM
# 71 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MakeVisible
# 72 "data/maps/TestRoom/scripts.pory"
	waitmovement 0, MAP_TEST_ROOM
# 73 "data/maps/TestRoom/scripts.pory"
	release
	return


# 76 "data/maps/TestRoom/scripts.pory"
Walk6invis:
# 77 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 78 "data/maps/TestRoom/scripts.pory"
	walk_left
# 78 "data/maps/TestRoom/scripts.pory"
	walk_left
# 78 "data/maps/TestRoom/scripts.pory"
	walk_left
# 78 "data/maps/TestRoom/scripts.pory"
	walk_left
# 78 "data/maps/TestRoom/scripts.pory"
	walk_left
# 78 "data/maps/TestRoom/scripts.pory"
	walk_left
	step_end

# 81 "data/maps/TestRoom/scripts.pory"
MakeVisible:
# 82 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 85 "data/maps/TestRoom/scripts.pory"
TurnInvisible:
# 86 "data/maps/TestRoom/scripts.pory"
	set_invisible
	step_end

TestMovementScript::
# 91 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 92 "data/maps/TestRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 93 "data/maps/TestRoom/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq TestMovementScript_2
# 97 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_1, MSGBOX_NPC
TestMovementScript_1:
# 99 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Up
# 100 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 101 "data/maps/TestRoom/scripts.pory"
	addvar VAR_TEMP_0, 1
# 102 "data/maps/TestRoom/scripts.pory"
	release
	return

TestMovementScript_2:
# 94 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_0, MSGBOX_NPC
	goto TestMovementScript_1


HideKrokorokOrPlayer::
# 123 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
	return


KrokorokPlayer::
# 127 "data/maps/TestRoom/scripts.pory"
	lock
# 128 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 129 "data/maps/TestRoom/scripts.pory"
	msgbox ReturnKrokorok, MSGBOX_YESNO
# 130 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokPlayer_2
# 134 "data/maps/TestRoom/scripts.pory"
	closemessage
# 135 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 136 "data/maps/TestRoom/scripts.pory"
	setobjectxy 1, VAR_TEMP_0, VAR_TEMP_1
# 137 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
# 138 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_1
# 139 "data/maps/TestRoom/scripts.pory"
	addobject 1
# 140 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 141 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokPlayer_6
# 144 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokPlayer_7
# 147 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokPlayer_8
# 150 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokPlayer_9
KrokorokPlayer_4:
# 154 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 155 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 156 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
# 157 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 158 "data/maps/TestRoom/scripts.pory"
	removeobject 2
# 159 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 160 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 161 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 162 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 163 "data/maps/TestRoom/scripts.pory"
	delay 15
# 164 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokPlayer_2:
# 131 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokPlayer_6:
# 142 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_NORTH
# 143 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokPlayer_4

KrokorokPlayer_7:
# 145 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_EAST
# 146 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokPlayer_4

KrokorokPlayer_8:
# 148 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_WEST
# 149 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokPlayer_4

KrokorokPlayer_9:
# 151 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_SOUTH
# 152 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokPlayer_4


KrokorokScript::
# 168 "data/maps/TestRoom/scripts.pory"
	lock
# 169 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 170 "data/maps/TestRoom/scripts.pory"
	msgbox SwitchToKrokorok, MSGBOX_YESNO
# 171 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokScript_2
# 175 "data/maps/TestRoom/scripts.pory"
	closemessage
# 176 "data/maps/TestRoom/scripts.pory"
	delay 15
# 178 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 179 "data/maps/TestRoom/scripts.pory"
	setobjectxy 2, VAR_TEMP_0, VAR_TEMP_1
# 180 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
# 182 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_3
# 183 "data/maps/TestRoom/scripts.pory"
	addobject 2
# 184 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 185 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_6
# 187 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_7
# 189 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_8
# 191 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_9
KrokorokScript_4:
# 195 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 196 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_12
# 198 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_13
# 200 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_14
# 202 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_15
KrokorokScript_10:
# 205 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 206 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 207 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
# 208 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 209 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 210 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 211 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 212 "data/maps/TestRoom/scripts.pory"
	removeobject 1
# 213 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 214 "data/maps/TestRoom/scripts.pory"
	delay 15
# 215 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokScript_2:
# 172 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokScript_6:
# 186 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_NORTH
	goto KrokorokScript_4

KrokorokScript_7:
# 188 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_EAST
	goto KrokorokScript_4

KrokorokScript_8:
# 190 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_WEST
	goto KrokorokScript_4

KrokorokScript_9:
# 192 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_SOUTH
	goto KrokorokScript_4

KrokorokScript_12:
# 197 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokScript_10

KrokorokScript_13:
# 199 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokScript_10

KrokorokScript_14:
# 201 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokScript_10

KrokorokScript_15:
# 203 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokScript_10


# 228 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokNorth:
# 229 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 230 "data/maps/TestRoom/scripts.pory"
	walk_up
# 231 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_down
	step_end

# 233 "data/maps/TestRoom/scripts.pory"
MovePlayerFromKrokorokSouth:
# 234 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 235 "data/maps/TestRoom/scripts.pory"
	walk_down
# 236 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_up
	step_end

# 238 "data/maps/TestRoom/scripts.pory"
SetObjectVisible:
# 239 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 242 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokEast:
# 243 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 244 "data/maps/TestRoom/scripts.pory"
	walk_right
# 245 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_left
	step_end

# 248 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokSouth:
# 249 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 250 "data/maps/TestRoom/scripts.pory"
	walk_down
# 251 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_up
	step_end

# 254 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokWest:
# 255 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 256 "data/maps/TestRoom/scripts.pory"
	walk_left
# 257 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_right
	step_end

TestTrigger1::
# 261 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 262 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger2::
# 265 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 266 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger3::
# 269 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 270 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger4::
# 273 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 274 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger5::
# 277 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 278 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger6::
# 281 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 282 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger7::
# 285 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 286 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger8::
# 289 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 8
# 290 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger9::
# 293 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 9
# 294 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger10::
# 297 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 10
# 298 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger11::
# 301 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 11
# 302 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


MainReflectionTrigger::
# 306 "data/maps/TestRoom/scripts.pory"
	switch VAR_TEMP_2
# 307 "data/maps/TestRoom/scripts.pory"
	case 1, MainReflectionTrigger_3
# 309 "data/maps/TestRoom/scripts.pory"
	case 2, MainReflectionTrigger_4
# 311 "data/maps/TestRoom/scripts.pory"
	case 3, MainReflectionTrigger_5
# 313 "data/maps/TestRoom/scripts.pory"
	case 4, MainReflectionTrigger_6
# 315 "data/maps/TestRoom/scripts.pory"
	case 5, MainReflectionTrigger_7
# 317 "data/maps/TestRoom/scripts.pory"
	case 6, MainReflectionTrigger_8
# 319 "data/maps/TestRoom/scripts.pory"
	case 7, MainReflectionTrigger_9
# 321 "data/maps/TestRoom/scripts.pory"
	case 8, MainReflectionTrigger_10
# 323 "data/maps/TestRoom/scripts.pory"
	case 9, MainReflectionTrigger_11
# 325 "data/maps/TestRoom/scripts.pory"
	case 10, MainReflectionTrigger_12
# 327 "data/maps/TestRoom/scripts.pory"
	case 11, MainReflectionTrigger_13
MainReflectionTrigger_1:
# 330 "data/maps/TestRoom/scripts.pory"
	release
	end

MainReflectionTrigger_3:
# 308 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 16
	goto MainReflectionTrigger_1

MainReflectionTrigger_4:
# 310 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_5:
# 312 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 8, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_6:
# 314 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 9, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_7:
# 316 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 10, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_8:
# 318 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 11, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_9:
# 320 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 12, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_10:
# 322 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 13, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_11:
# 324 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 14, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_12:
# 326 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_13:
# 328 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 16
	goto MainReflectionTrigger_1


TestFollowerDespawning::
# 396 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 397 "data/maps/TestRoom/scripts.pory"
	release
	return


TestFollowerSpawning::
# 401 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 402 "data/maps/TestRoom/scripts.pory"
	release
	return


TestMovementScript_Text_0:
# 94 "data/maps/TestRoom/scripts.pory"
	.string "0$"

TestMovementScript_Text_1:
# 97 "data/maps/TestRoom/scripts.pory"
	.string "{STR_VAR_1}$"

ReturnKrokorok::
# 218 "data/maps/TestRoom/scripts.pory"
	.string "Stop giving Krokorok orders?$"

SwitchToKrokorok::
# 222 "data/maps/TestRoom/scripts.pory"
	.string "The Krokorok looks at you\n"
	.string "expectantly.\p"
	.string "Start giving it orders?$"
