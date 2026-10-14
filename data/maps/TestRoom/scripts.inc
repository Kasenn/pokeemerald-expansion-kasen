TestRoom_MapScripts::
# 29 "data/maps/TestRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TestRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 30 "data/maps/TestRoom/scripts.pory"
	setvar VAR_HOUR_OVERRIDE, 1
# 31 "data/maps/TestRoom/scripts.pory"
	setvar VAR_MINUTE_OVERRIDE, 1
# 32 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


TestFollowerMacro::
# 41 "data/maps/TestRoom/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 6, 25
# 42 "data/maps/TestRoom/scripts.pory"
	showobjectat OBJ_EVENT_ID_FOLLOWER, MAP_TEST_ROOM
# 43 "data/maps/TestRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
# 44 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 45 "data/maps/TestRoom/scripts.pory"
	release
	return


DoBoulderCheck::
# 48 "data/maps/TestRoom/scripts.pory"
	getobjectxy 4
# 49 "data/maps/TestRoom/scripts.pory"
	compare VAR_0x8002, 25
	goto_if_ne DoBoulderCheck_2
# 53 "data/maps/TestRoom/scripts.pory"
	safefollow
# 54 "data/maps/TestRoom/scripts.pory"
	applymovement 4, MoveBoulderFast
# 55 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 56 "data/maps/TestRoom/scripts.pory"
	setobjectxy 4, 9, 25
# 57 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 4, 9, 25
# 58 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
DoBoulderCheck_1:
# 60 "data/maps/TestRoom/scripts.pory"
	release
	return

DoBoulderCheck_2:
# 50 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto DoBoulderCheck_1


# 62 "data/maps/TestRoom/scripts.pory"
MoveBoulderFast:
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 63 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
	step_end

SetTestFlag::
# 66 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 67 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 68 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 69 "data/maps/TestRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_YOUNGSTER
	return


TestBoundary::
# 78 "data/maps/TestRoom/scripts.pory"
	lock
# 79 "data/maps/TestRoom/scripts.pory"
	showobjectat 16, MAP_TEST_ROOM
# 80 "data/maps/TestRoom/scripts.pory"
	hideobjectat 15, MAP_TEST_ROOM
# 81 "data/maps/TestRoom/scripts.pory"
	applymovement 16, Walk6Left
# 82 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Walk6invis
# 83 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/TestRoom/scripts.pory"
	turnobject 10, DIR_WEST
# 87 "data/maps/TestRoom/scripts.pory"
	showobjectat 10, MAP_PETALBURG_CITY
# 88 "data/maps/TestRoom/scripts.pory"
	applymovement 16, TurnInvisible, MAP_TEST_ROOM
# 89 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MakeVisible
# 90 "data/maps/TestRoom/scripts.pory"
	waitmovement 0, MAP_TEST_ROOM
# 91 "data/maps/TestRoom/scripts.pory"
	release
	return


# 94 "data/maps/TestRoom/scripts.pory"
Walk6invis:
# 95 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 96 "data/maps/TestRoom/scripts.pory"
	walk_left
# 96 "data/maps/TestRoom/scripts.pory"
	walk_left
# 96 "data/maps/TestRoom/scripts.pory"
	walk_left
# 96 "data/maps/TestRoom/scripts.pory"
	walk_left
# 96 "data/maps/TestRoom/scripts.pory"
	walk_left
# 96 "data/maps/TestRoom/scripts.pory"
	walk_left
	step_end

# 99 "data/maps/TestRoom/scripts.pory"
MakeVisible:
# 100 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 103 "data/maps/TestRoom/scripts.pory"
TurnInvisible:
# 104 "data/maps/TestRoom/scripts.pory"
	set_invisible
	step_end

TestMovementScript::
# 109 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 110 "data/maps/TestRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 111 "data/maps/TestRoom/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq TestMovementScript_2
# 115 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_1, MSGBOX_NPC
TestMovementScript_1:
# 117 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Walk3Up
# 118 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 119 "data/maps/TestRoom/scripts.pory"
	addvar VAR_TEMP_0, 1
# 120 "data/maps/TestRoom/scripts.pory"
	release
	return

TestMovementScript_2:
# 112 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_0, MSGBOX_NPC
	goto TestMovementScript_1


HideKrokorokOrPlayer::
# 141 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
	return


KrokorokPlayer::
# 145 "data/maps/TestRoom/scripts.pory"
	lock
# 146 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 147 "data/maps/TestRoom/scripts.pory"
	msgbox ReturnKrokorok, MSGBOX_YESNO
# 148 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokPlayer_2
# 152 "data/maps/TestRoom/scripts.pory"
	closemessage
# 153 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 154 "data/maps/TestRoom/scripts.pory"
	setobjectxy 1, VAR_TEMP_0, VAR_TEMP_1
# 155 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
# 156 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_1
# 157 "data/maps/TestRoom/scripts.pory"
	addobject 1
# 158 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 159 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokPlayer_6
# 162 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokPlayer_7
# 165 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokPlayer_8
# 168 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokPlayer_9
KrokorokPlayer_4:
# 172 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 173 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 174 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SetObjectVisible
# 175 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 176 "data/maps/TestRoom/scripts.pory"
	removeobject 2
# 177 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 178 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 179 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 180 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 181 "data/maps/TestRoom/scripts.pory"
	delay 15
# 182 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokPlayer_2:
# 149 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokPlayer_6:
# 160 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_NORTH
# 161 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokPlayer_4

KrokorokPlayer_7:
# 163 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_EAST
# 164 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokPlayer_4

KrokorokPlayer_8:
# 166 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_WEST
# 167 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokPlayer_4

KrokorokPlayer_9:
# 169 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_SOUTH
# 170 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokPlayer_4


KrokorokScript::
# 186 "data/maps/TestRoom/scripts.pory"
	lock
# 187 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 188 "data/maps/TestRoom/scripts.pory"
	msgbox SwitchToKrokorok, MSGBOX_YESNO
# 189 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokScript_2
# 193 "data/maps/TestRoom/scripts.pory"
	closemessage
# 194 "data/maps/TestRoom/scripts.pory"
	delay 15
# 196 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 197 "data/maps/TestRoom/scripts.pory"
	setobjectxy 2, VAR_TEMP_0, VAR_TEMP_1
# 198 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
# 200 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_3
# 201 "data/maps/TestRoom/scripts.pory"
	addobject 2
# 202 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 203 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_6
# 205 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_7
# 207 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_8
# 209 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_9
KrokorokScript_4:
# 213 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 214 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_12
# 216 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_13
# 218 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_14
# 220 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_15
KrokorokScript_10:
# 223 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 224 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 225 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SetObjectVisible
# 226 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 227 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 228 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 229 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 230 "data/maps/TestRoom/scripts.pory"
	removeobject 1
# 231 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 232 "data/maps/TestRoom/scripts.pory"
	delay 15
# 233 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokScript_2:
# 190 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokScript_6:
# 204 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_NORTH
	goto KrokorokScript_4

KrokorokScript_7:
# 206 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_EAST
	goto KrokorokScript_4

KrokorokScript_8:
# 208 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_WEST
	goto KrokorokScript_4

KrokorokScript_9:
# 210 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_SOUTH
	goto KrokorokScript_4

KrokorokScript_12:
# 215 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokScript_10

KrokorokScript_13:
# 217 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokScript_10

KrokorokScript_14:
# 219 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokScript_10

KrokorokScript_15:
# 221 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokScript_10


# 246 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokNorth:
# 247 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 248 "data/maps/TestRoom/scripts.pory"
	walk_up
# 249 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_down
	step_end

# 251 "data/maps/TestRoom/scripts.pory"
MovePlayerFromKrokorokSouth:
# 252 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 253 "data/maps/TestRoom/scripts.pory"
	walk_down
# 254 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_up
	step_end

# 256 "data/maps/TestRoom/scripts.pory"
SetObjectVisible:
# 257 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 260 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokEast:
# 261 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 262 "data/maps/TestRoom/scripts.pory"
	walk_right
# 263 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_left
	step_end

# 266 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokSouth:
# 267 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 268 "data/maps/TestRoom/scripts.pory"
	walk_down
# 269 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_up
	step_end

# 272 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokWest:
# 273 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 274 "data/maps/TestRoom/scripts.pory"
	walk_left
# 275 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_right
	step_end

TestTrigger1::
# 279 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 280 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger2::
# 283 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 284 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger3::
# 287 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 288 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger4::
# 291 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 292 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger5::
# 295 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 296 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger6::
# 299 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 300 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger7::
# 303 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 304 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger8::
# 307 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 8
# 308 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger9::
# 311 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 9
# 312 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger10::
# 315 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 10
# 316 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger11::
# 319 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 11
# 320 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


MainReflectionTrigger::
# 324 "data/maps/TestRoom/scripts.pory"
	switch VAR_TEMP_2
# 325 "data/maps/TestRoom/scripts.pory"
	case 1, MainReflectionTrigger_3
# 327 "data/maps/TestRoom/scripts.pory"
	case 2, MainReflectionTrigger_4
# 329 "data/maps/TestRoom/scripts.pory"
	case 3, MainReflectionTrigger_5
# 331 "data/maps/TestRoom/scripts.pory"
	case 4, MainReflectionTrigger_6
# 333 "data/maps/TestRoom/scripts.pory"
	case 5, MainReflectionTrigger_7
# 335 "data/maps/TestRoom/scripts.pory"
	case 6, MainReflectionTrigger_8
# 337 "data/maps/TestRoom/scripts.pory"
	case 7, MainReflectionTrigger_9
# 339 "data/maps/TestRoom/scripts.pory"
	case 8, MainReflectionTrigger_10
# 341 "data/maps/TestRoom/scripts.pory"
	case 9, MainReflectionTrigger_11
# 343 "data/maps/TestRoom/scripts.pory"
	case 10, MainReflectionTrigger_12
# 345 "data/maps/TestRoom/scripts.pory"
	case 11, MainReflectionTrigger_13
MainReflectionTrigger_1:
# 348 "data/maps/TestRoom/scripts.pory"
	release
	end

MainReflectionTrigger_3:
# 326 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 16
	goto MainReflectionTrigger_1

MainReflectionTrigger_4:
# 328 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_5:
# 330 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 8, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_6:
# 332 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 9, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_7:
# 334 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 10, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_8:
# 336 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 11, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_9:
# 338 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 12, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_10:
# 340 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 13, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_11:
# 342 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 14, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_12:
# 344 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_13:
# 346 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 16
	goto MainReflectionTrigger_1


TestFollowerDespawning::
# 414 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 415 "data/maps/TestRoom/scripts.pory"
	release
	return


TestFollowerSpawning::
# 419 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 420 "data/maps/TestRoom/scripts.pory"
	release
	return


TurnHikerTest::
# 429 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 430 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 432 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, TurnHikerTest_3
# 436 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, TurnHikerTest_4
# 440 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, TurnHikerTest_5
# 444 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, TurnHikerTest_6
TurnHikerTest_1:
# 449 "data/maps/TestRoom/scripts.pory"
	setmetatile VAR_TEMP_0, VAR_TEMP_1, VAR_TEMP_3, TRUE
# 450 "data/maps/TestRoom/scripts.pory"
	subvar VAR_TEMP_1, 1
# 451 "data/maps/TestRoom/scripts.pory"
	setmetatile VAR_TEMP_0, VAR_TEMP_1, VAR_TEMP_2, FALSE
# 452 "data/maps/TestRoom/scripts.pory"
	special DrawWholeMapView
# 453 "data/maps/TestRoom/scripts.pory"
	msgbox TurnHikerTest_Text_0, MSGBOX_AUTOCLOSE
	return

TurnHikerTest_3:
# 433 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 0x0A2
# 434 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_3, 0x0AA
# 435 "data/maps/TestRoom/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto TurnHikerTest_1

TurnHikerTest_4:
# 437 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 0x0A2 + 3
# 438 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_3, 0x0AA + 3
# 439 "data/maps/TestRoom/scripts.pory"
	subvar VAR_TEMP_0, 1
	goto TurnHikerTest_1

TurnHikerTest_5:
# 441 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 0x0A2 + 2
# 442 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_3, 0x0AA + 2
# 443 "data/maps/TestRoom/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto TurnHikerTest_1

TurnHikerTest_6:
# 445 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 0x0A2 + 1
# 446 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_3, 0x0AA + 1
# 447 "data/maps/TestRoom/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto TurnHikerTest_1


TestMovementScript_Text_0:
# 112 "data/maps/TestRoom/scripts.pory"
	.string "0$"

TestMovementScript_Text_1:
# 115 "data/maps/TestRoom/scripts.pory"
	.string "{STR_VAR_1}$"

TurnHikerTest_Text_0:
# 453 "data/maps/TestRoom/scripts.pory"
	.string "I am not a sprite.\nI'm a sign!$"

ReturnKrokorok::
# 236 "data/maps/TestRoom/scripts.pory"
	.string "Stop giving Krokorok orders?$"

SwitchToKrokorok::
# 240 "data/maps/TestRoom/scripts.pory"
	.string "The Krokorok looks at you\n"
	.string "expectantly.\p"
	.string "Start giving it orders?$"
