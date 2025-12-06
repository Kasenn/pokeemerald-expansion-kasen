TestRoom_MapScripts::
# 26 "data/maps/TestRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TestRoom_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TestRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 27 "data/maps/TestRoom/scripts.pory"
	setstepcallback STEP_CB_WAILORD
	return


TestFollowerMacro::
# 36 "data/maps/TestRoom/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 6, 25
# 37 "data/maps/TestRoom/scripts.pory"
	showobjectat OBJ_EVENT_ID_FOLLOWER, MAP_TEST_ROOM
# 38 "data/maps/TestRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
# 39 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 40 "data/maps/TestRoom/scripts.pory"
	release
	return


DoBoulderCheck::
# 43 "data/maps/TestRoom/scripts.pory"
	getobjectxy 4
# 44 "data/maps/TestRoom/scripts.pory"
	compare VAR_0x8002, 25
	goto_if_ne DoBoulderCheck_2
# 48 "data/maps/TestRoom/scripts.pory"
	safefollow
# 49 "data/maps/TestRoom/scripts.pory"
	applymovement 4, MoveBoulderFast
# 50 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/TestRoom/scripts.pory"
	setobjectxy 4, 9, 25
# 52 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 4, 9, 25
# 53 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
DoBoulderCheck_1:
# 55 "data/maps/TestRoom/scripts.pory"
	release
	return

DoBoulderCheck_2:
# 45 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto DoBoulderCheck_1


# 57 "data/maps/TestRoom/scripts.pory"
MoveBoulderFast:
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
# 58 "data/maps/TestRoom/scripts.pory"
	walk_fast_left
	step_end

SetTestFlag::
# 61 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 62 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 63 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 64 "data/maps/TestRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_YOUNGSTER
	return


TestBoundary::
# 73 "data/maps/TestRoom/scripts.pory"
	lock
# 74 "data/maps/TestRoom/scripts.pory"
	showobjectat 16, MAP_TEST_ROOM
# 75 "data/maps/TestRoom/scripts.pory"
	hideobjectat 15, MAP_TEST_ROOM
# 76 "data/maps/TestRoom/scripts.pory"
	applymovement 16, Walk6Left
# 77 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Walk6invis
# 78 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 81 "data/maps/TestRoom/scripts.pory"
	turnobject 10, DIR_WEST
# 82 "data/maps/TestRoom/scripts.pory"
	showobjectat 10, MAP_PETALBURG_CITY
# 83 "data/maps/TestRoom/scripts.pory"
	applymovement 16, TurnInvisible, MAP_TEST_ROOM
# 84 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MakeVisible
# 85 "data/maps/TestRoom/scripts.pory"
	waitmovement 0, MAP_TEST_ROOM
# 86 "data/maps/TestRoom/scripts.pory"
	release
	return


# 89 "data/maps/TestRoom/scripts.pory"
Walk6invis:
# 90 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 91 "data/maps/TestRoom/scripts.pory"
	walk_left
# 91 "data/maps/TestRoom/scripts.pory"
	walk_left
# 91 "data/maps/TestRoom/scripts.pory"
	walk_left
# 91 "data/maps/TestRoom/scripts.pory"
	walk_left
# 91 "data/maps/TestRoom/scripts.pory"
	walk_left
# 91 "data/maps/TestRoom/scripts.pory"
	walk_left
	step_end

# 94 "data/maps/TestRoom/scripts.pory"
MakeVisible:
# 95 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 98 "data/maps/TestRoom/scripts.pory"
TurnInvisible:
# 99 "data/maps/TestRoom/scripts.pory"
	set_invisible
	step_end

TestMovementScript::
# 104 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 105 "data/maps/TestRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 106 "data/maps/TestRoom/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq TestMovementScript_2
# 110 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_1, MSGBOX_NPC
TestMovementScript_1:
# 112 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Walk3Up
# 113 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 114 "data/maps/TestRoom/scripts.pory"
	addvar VAR_TEMP_0, 1
# 115 "data/maps/TestRoom/scripts.pory"
	release
	return

TestMovementScript_2:
# 107 "data/maps/TestRoom/scripts.pory"
	msgbox TestMovementScript_Text_0, MSGBOX_NPC
	goto TestMovementScript_1


HideKrokorokOrPlayer::
# 136 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_3
	return


KrokorokPlayer::
# 140 "data/maps/TestRoom/scripts.pory"
	lock
# 141 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 142 "data/maps/TestRoom/scripts.pory"
	msgbox ReturnKrokorok, MSGBOX_YESNO
# 143 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokPlayer_2
# 147 "data/maps/TestRoom/scripts.pory"
	closemessage
# 148 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 149 "data/maps/TestRoom/scripts.pory"
	setobjectxy 1, VAR_TEMP_0, VAR_TEMP_1
# 150 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 1, VAR_TEMP_0, VAR_TEMP_1
# 151 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_1
# 152 "data/maps/TestRoom/scripts.pory"
	addobject 1
# 153 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 154 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokPlayer_6
# 157 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokPlayer_7
# 160 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokPlayer_8
# 163 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokPlayer_9
KrokorokPlayer_4:
# 167 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 168 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 169 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SetObjectVisible
# 170 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 171 "data/maps/TestRoom/scripts.pory"
	removeobject 2
# 172 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 173 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 174 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 175 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 176 "data/maps/TestRoom/scripts.pory"
	delay 15
# 177 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokPlayer_2:
# 144 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokPlayer_6:
# 155 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_NORTH
# 156 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokPlayer_4

KrokorokPlayer_7:
# 158 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_EAST
# 159 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokPlayer_4

KrokorokPlayer_8:
# 161 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_WEST
# 162 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokPlayer_4

KrokorokPlayer_9:
# 164 "data/maps/TestRoom/scripts.pory"
	turnobject 1, DIR_SOUTH
# 165 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokPlayer_4


KrokorokScript::
# 181 "data/maps/TestRoom/scripts.pory"
	lock
# 182 "data/maps/TestRoom/scripts.pory"
	faceplayer
# 183 "data/maps/TestRoom/scripts.pory"
	msgbox SwitchToKrokorok, MSGBOX_YESNO
# 184 "data/maps/TestRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KrokorokScript_2
# 188 "data/maps/TestRoom/scripts.pory"
	closemessage
# 189 "data/maps/TestRoom/scripts.pory"
	delay 15
# 191 "data/maps/TestRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 192 "data/maps/TestRoom/scripts.pory"
	setobjectxy 2, VAR_TEMP_0, VAR_TEMP_1
# 193 "data/maps/TestRoom/scripts.pory"
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
# 195 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_3
# 196 "data/maps/TestRoom/scripts.pory"
	addobject 2
# 197 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 198 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_6
# 200 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_7
# 202 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_8
# 204 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_9
KrokorokScript_4:
# 208 "data/maps/TestRoom/scripts.pory"
	switch VAR_FACING
# 209 "data/maps/TestRoom/scripts.pory"
	case DIR_NORTH, KrokorokScript_12
# 211 "data/maps/TestRoom/scripts.pory"
	case DIR_EAST, KrokorokScript_13
# 213 "data/maps/TestRoom/scripts.pory"
	case DIR_WEST, KrokorokScript_14
# 215 "data/maps/TestRoom/scripts.pory"
	case DIR_SOUTH, KrokorokScript_15
KrokorokScript_10:
# 218 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 219 "data/maps/TestRoom/scripts.pory"
	setkrokorokdisguise
# 220 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SetObjectVisible
# 221 "data/maps/TestRoom/scripts.pory"
	waitmovement 0
# 222 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 223 "data/maps/TestRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 224 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 225 "data/maps/TestRoom/scripts.pory"
	removeobject 1
# 226 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 227 "data/maps/TestRoom/scripts.pory"
	delay 15
# 228 "data/maps/TestRoom/scripts.pory"
	release
	return

KrokorokScript_2:
# 185 "data/maps/TestRoom/scripts.pory"
	release
	end

KrokorokScript_6:
# 199 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_NORTH
	goto KrokorokScript_4

KrokorokScript_7:
# 201 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_EAST
	goto KrokorokScript_4

KrokorokScript_8:
# 203 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_WEST
	goto KrokorokScript_4

KrokorokScript_9:
# 205 "data/maps/TestRoom/scripts.pory"
	turnobject 2, DIR_SOUTH
	goto KrokorokScript_4

KrokorokScript_12:
# 210 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokNorth
	goto KrokorokScript_10

KrokorokScript_13:
# 212 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokEast
	goto KrokorokScript_10

KrokorokScript_14:
# 214 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokWest
	goto KrokorokScript_10

KrokorokScript_15:
# 216 "data/maps/TestRoom/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokSouth
	goto KrokorokScript_10


# 241 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokNorth:
# 242 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 243 "data/maps/TestRoom/scripts.pory"
	walk_up
# 244 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_down
	step_end

# 246 "data/maps/TestRoom/scripts.pory"
MovePlayerFromKrokorokSouth:
# 247 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 248 "data/maps/TestRoom/scripts.pory"
	walk_down
# 249 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_up
	step_end

# 251 "data/maps/TestRoom/scripts.pory"
SetObjectVisible:
# 252 "data/maps/TestRoom/scripts.pory"
	set_visible
	step_end

# 255 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokEast:
# 256 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 257 "data/maps/TestRoom/scripts.pory"
	walk_right
# 258 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_left
	step_end

# 261 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokSouth:
# 262 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 263 "data/maps/TestRoom/scripts.pory"
	walk_down
# 264 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_up
	step_end

# 267 "data/maps/TestRoom/scripts.pory"
MovePlayerToKrokorokWest:
# 268 "data/maps/TestRoom/scripts.pory"
	set_invisible
# 269 "data/maps/TestRoom/scripts.pory"
	walk_left
# 270 "data/maps/TestRoom/scripts.pory"
	walk_in_place_fast_right
	step_end

TestTrigger1::
# 274 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 275 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger2::
# 278 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 279 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger3::
# 282 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 283 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger4::
# 286 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 287 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger5::
# 290 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 291 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger6::
# 294 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 295 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger7::
# 298 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 299 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger8::
# 302 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 8
# 303 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger9::
# 306 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 9
# 307 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger10::
# 310 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 10
# 311 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


TestTrigger11::
# 314 "data/maps/TestRoom/scripts.pory"
	setvar VAR_TEMP_2, 11
# 315 "data/maps/TestRoom/scripts.pory"
	goto MainReflectionTrigger
	return


MainReflectionTrigger::
# 319 "data/maps/TestRoom/scripts.pory"
	switch VAR_TEMP_2
# 320 "data/maps/TestRoom/scripts.pory"
	case 1, MainReflectionTrigger_3
# 322 "data/maps/TestRoom/scripts.pory"
	case 2, MainReflectionTrigger_4
# 324 "data/maps/TestRoom/scripts.pory"
	case 3, MainReflectionTrigger_5
# 326 "data/maps/TestRoom/scripts.pory"
	case 4, MainReflectionTrigger_6
# 328 "data/maps/TestRoom/scripts.pory"
	case 5, MainReflectionTrigger_7
# 330 "data/maps/TestRoom/scripts.pory"
	case 6, MainReflectionTrigger_8
# 332 "data/maps/TestRoom/scripts.pory"
	case 7, MainReflectionTrigger_9
# 334 "data/maps/TestRoom/scripts.pory"
	case 8, MainReflectionTrigger_10
# 336 "data/maps/TestRoom/scripts.pory"
	case 9, MainReflectionTrigger_11
# 338 "data/maps/TestRoom/scripts.pory"
	case 10, MainReflectionTrigger_12
# 340 "data/maps/TestRoom/scripts.pory"
	case 11, MainReflectionTrigger_13
MainReflectionTrigger_1:
# 343 "data/maps/TestRoom/scripts.pory"
	release
	end

MainReflectionTrigger_3:
# 321 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 16
	goto MainReflectionTrigger_1

MainReflectionTrigger_4:
# 323 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 7, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_5:
# 325 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 8, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_6:
# 327 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 9, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_7:
# 329 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 10, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_8:
# 331 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 11, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_9:
# 333 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 12, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_10:
# 335 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 13, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_11:
# 337 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 14, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_12:
# 339 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_13:
# 341 "data/maps/TestRoom/scripts.pory"
	setobjectxy 37, 15, 16
	goto MainReflectionTrigger_1


TestFollowerDespawning::
# 409 "data/maps/TestRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 410 "data/maps/TestRoom/scripts.pory"
	release
	return


TestFollowerSpawning::
# 414 "data/maps/TestRoom/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 415 "data/maps/TestRoom/scripts.pory"
	release
	return


TestMovementScript_Text_0:
# 107 "data/maps/TestRoom/scripts.pory"
	.string "0$"

TestMovementScript_Text_1:
# 110 "data/maps/TestRoom/scripts.pory"
	.string "{STR_VAR_1}$"

ReturnKrokorok::
# 231 "data/maps/TestRoom/scripts.pory"
	.string "Stop giving Krokorok orders?$"

SwitchToKrokorok::
# 235 "data/maps/TestRoom/scripts.pory"
	.string "The Krokorok looks at you\n"
	.string "expectantly.\p"
	.string "Start giving it orders?$"
