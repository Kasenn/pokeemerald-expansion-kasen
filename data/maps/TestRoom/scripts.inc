TestRoom_MapScripts::
# 2 "data/maps/TestRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetTestFlag
	.byte 0


DoBoulderCheck::
# 12 "data/maps/TestRoom/scripts.pory"
	getobjectxy 4
# 13 "data/maps/TestRoom/scripts.pory"
	compare VAR_0x8002, 25
	goto_if_ne DoBoulderCheck_2
# 17 "data/maps/TestRoom/scripts.pory"
	safefollow
# 18 "data/maps/TestRoom/scripts.pory"
	applymovement 4, MoveBoulderFast
# 19 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 20 "data/maps/TestRoom/scripts.pory"
	setobjectxy 4, 9, 25
# 21 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 4, 9, 25
# 22 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
DoBoulderCheck_1:
# 24 "data/maps/TestRoom/scripts.pory"
	release
	return

DoBoulderCheck_2:
# 14 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto DoBoulderCheck_1


# 26 "data/maps/TestRoom/scripts.pory"
MoveBoulderFast:
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 27 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
	step_end

SetTestFlag::
# 30 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 31 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 32 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 33 "data/maps/TestRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_YOUNGSTER
	return


TestBoundary::
# 42 "data/maps/TestRoom/scripts.pory"
	lock
# 43 "data/maps/TestRoom/scripts.pory"
	showobjectat 16, MAP_TEST_ROOM
# 44 "data/maps/TestRoom/scripts.pory"
	hideobjectat 15, MAP_TEST_ROOM
# 45 "data/maps/TestRoom/scripts.pory"
	applymovement 16, Walk6Left
# 46 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk6invis
# 47 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 50 "data/maps/TestRoom/scripts.pory"
	turnobject 10, DIR_WEST
# 51 "data/maps/TestRoom/scripts.pory"
	showobjectat 10, MAP_PETALBURG_CITY
# 52 "data/maps/TestRoom/scripts.pory"
	applymovement 16, TurnInvisible, MAP_TEST_ROOM
# 53 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MakeVisible
# 54 "data/maps/TestRoom/scripts.pory"
	waitmovement 0, MAP_TEST_ROOM
# 55 "data/maps/TestRoom/scripts.pory"
	release
	return


# 58 "data/maps/TestRoom/scripts.pory"
Walk6invis:
# 59 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 60 "data/maps/TestRoom/scripts.pory"
	walk_left
# 60 "data/maps/TestRoom/scripts.pory"
	walk_left
# 60 "data/maps/TestRoom/scripts.pory"
	walk_left
# 60 "data/maps/TestRoom/scripts.pory"
	walk_left
# 60 "data/maps/TestRoom/scripts.pory"
	walk_left
# 60 "data/maps/TestRoom/scripts.pory"
	walk_left
	step_end

# 63 "data/maps/TestRoom/scripts.pory"
MakeVisible:
# 64 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 67 "data/maps/TestRoom/scripts.pory"
TurnInvisible:
# 68 "data/maps/TestRoom/scripts.pory"
	set_invisible
	step_end

TestMovementScript::
# 73 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 74 "data/maps/TestRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 75 "data/maps/TestRoom/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq TestMovementScript_2
# 79 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_1, MSGBOX_NPC
TestMovementScript_1:
# 81 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Up
# 82 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/TestRoom/scripts.pory"
	addvar VAR_TEMP_0, 1
# 84 "data/maps/TestRoom/scripts.pory"
	release
	return

TestMovementScript_2:
# 76 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_0, MSGBOX_NPC
	goto TestMovementScript_1


HideKrokorokOrPlayer::
# 105 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
	return


KrokorokPlayer::
# 109 "data/maps/TestRoom/scripts.pory"
	lock
# 110 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 111 "data/maps/TestRoom/scripts.pory"
	msgbox ReturnKrokorok, MSGBOX_YESNO
# 112 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokPlayer_2
# 116 "data/maps/TestRoom/scripts.pory"
	closemessage
# 117 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 118 "data/maps/TestRoom/scripts.pory"
	setobjectxy 1, VAR_TEMP_0, VAR_TEMP_1
# 119 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
# 120 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_1
# 121 "data/maps/TestRoom/scripts.pory"
	addobject 1
# 122 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 123 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokPlayer_6
# 126 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokPlayer_7
# 129 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokPlayer_8
# 132 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokPlayer_9
KrokorokPlayer_4:
# 136 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 137 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 138 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
# 139 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 140 "data/maps/TestRoom/scripts.pory"
	removeobject 2
# 141 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 142 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 143 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 144 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 145 "data/maps/TestRoom/scripts.pory"
	delay 15
# 146 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokPlayer_2:
# 113 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokPlayer_6:
# 124 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_NORTH
# 125 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokPlayer_4

KrokorokPlayer_7:
# 127 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_EAST
# 128 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokPlayer_4

KrokorokPlayer_8:
# 130 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_WEST
# 131 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokPlayer_4

KrokorokPlayer_9:
# 133 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_SOUTH
# 134 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokPlayer_4


KrokorokScript::
# 150 "data/maps/TestRoom/scripts.pory"
	lock
# 151 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 152 "data/maps/TestRoom/scripts.pory"
	msgbox SwitchToKrokorok, MSGBOX_YESNO
# 153 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokScript_2
# 157 "data/maps/TestRoom/scripts.pory"
	closemessage
# 158 "data/maps/TestRoom/scripts.pory"
	delay 15
# 160 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 161 "data/maps/TestRoom/scripts.pory"
	setobjectxy 2, VAR_TEMP_0, VAR_TEMP_1
# 162 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
# 164 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_3
# 165 "data/maps/TestRoom/scripts.pory"
	addobject 2
# 166 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 167 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_6
# 169 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_7
# 171 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_8
# 173 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_9
KrokorokScript_4:
# 177 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 178 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_12
# 180 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_13
# 182 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_14
# 184 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_15
KrokorokScript_10:
# 187 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 188 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 189 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
# 190 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 191 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 192 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 193 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 194 "data/maps/TestRoom/scripts.pory"
	removeobject 1
# 195 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 196 "data/maps/TestRoom/scripts.pory"
	delay 15
# 197 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokScript_2:
# 154 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokScript_6:
# 168 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_NORTH
	goto KrokorokScript_4

KrokorokScript_7:
# 170 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_EAST
	goto KrokorokScript_4

KrokorokScript_8:
# 172 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_WEST
	goto KrokorokScript_4

KrokorokScript_9:
# 174 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_SOUTH
	goto KrokorokScript_4

KrokorokScript_12:
# 179 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokScript_10

KrokorokScript_13:
# 181 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokScript_10

KrokorokScript_14:
# 183 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokScript_10

KrokorokScript_15:
# 185 "data/maps/TestRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokScript_10


# 210 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokNorth:
# 211 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 212 "data/maps/TestRoom/scripts.pory"
	walk_up
# 213 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_down
	step_end

# 215 "data/maps/TestRoom/scripts.pory"
SetObjectVisible:
# 216 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 219 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokEast:
# 220 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 221 "data/maps/TestRoom/scripts.pory"
	walk_right
# 222 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_left
	step_end

# 225 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokSouth:
# 226 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 227 "data/maps/TestRoom/scripts.pory"
	walk_down
# 228 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_up
	step_end

# 231 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokWest:
# 232 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 233 "data/maps/TestRoom/scripts.pory"
	walk_left
# 234 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_right
	step_end

TestTrigger1::
# 238 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 239 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger2::
# 242 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 243 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger3::
# 246 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 247 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger4::
# 250 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 251 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger5::
# 254 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 255 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger6::
# 258 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 259 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger7::
# 262 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 263 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger8::
# 266 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 8
# 267 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger9::
# 270 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 9
# 271 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger10::
# 274 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 10
# 275 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger11::
# 278 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 11
# 279 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


MainReflectionTrigger::
# 283 "data/maps/TestRoom/scripts.pory"
	switch VAR_TEMP_2
# 284 "data/maps/TestRoom/scripts.pory"
	case 1, MainReflectionTrigger_3
# 286 "data/maps/TestRoom/scripts.pory"
	case 2, MainReflectionTrigger_4
# 288 "data/maps/TestRoom/scripts.pory"
	case 3, MainReflectionTrigger_5
# 290 "data/maps/TestRoom/scripts.pory"
	case 4, MainReflectionTrigger_6
# 292 "data/maps/TestRoom/scripts.pory"
	case 5, MainReflectionTrigger_7
# 294 "data/maps/TestRoom/scripts.pory"
	case 6, MainReflectionTrigger_8
# 296 "data/maps/TestRoom/scripts.pory"
	case 7, MainReflectionTrigger_9
# 298 "data/maps/TestRoom/scripts.pory"
	case 8, MainReflectionTrigger_10
# 300 "data/maps/TestRoom/scripts.pory"
	case 9, MainReflectionTrigger_11
# 302 "data/maps/TestRoom/scripts.pory"
	case 10, MainReflectionTrigger_12
# 304 "data/maps/TestRoom/scripts.pory"
	case 11, MainReflectionTrigger_13
MainReflectionTrigger_1:
# 307 "data/maps/TestRoom/scripts.pory"
	release
	end

MainReflectionTrigger_3:
# 285 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 16
	goto MainReflectionTrigger_1

MainReflectionTrigger_4:
# 287 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_5:
# 289 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 8, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_6:
# 291 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 9, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_7:
# 293 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 10, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_8:
# 295 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 11, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_9:
# 297 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 12, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_10:
# 299 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 13, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_11:
# 301 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 14, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_12:
# 303 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_13:
# 305 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 16
	goto MainReflectionTrigger_1


TestMovementScript_Text_0:
# 76 "data/maps/TestRoom/scripts.pory"
	.string "0$"

TestMovementScript_Text_1:
# 79 "data/maps/TestRoom/scripts.pory"
	.string "{STR_VAR_1}$"

ReturnKrokorok::
# 200 "data/maps/TestRoom/scripts.pory"
	.string "Stop giving Krokorok orders?$"

SwitchToKrokorok::
# 204 "data/maps/TestRoom/scripts.pory"
	.string "The Krokorok looks at you\n"
	.string "expectantly.\p"
	.string "Start giving it orders?$"
