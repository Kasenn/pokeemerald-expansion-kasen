DebugScript1::
# 11 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BERRYBRIDGE_CREATED, DebugScript1_2
# 15 "data/scripts/general_scripts.pory"
	msgbox DebugScript1_Text_1
DebugScript1_1:
# 17 "data/scripts/general_scripts.pory"
	callnative TestMonNameLength
	return

DebugScript1_2:
# 12 "data/scripts/general_scripts.pory"
	msgbox DebugScript1_Text_0
	goto DebugScript1_1


DebugScript2::
# 26 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 34 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 37 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 38 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 39 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 43 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 47 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 48 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 53 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 59 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 60 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 61 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 63 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 64 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 65 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 72 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 75 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 76 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 44 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 49 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 50 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 51 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 54 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 55 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 56 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 66 "data/scripts/general_scripts.pory"
	lockall
# 67 "data/scripts/general_scripts.pory"
	waitmoncry
# 68 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 69 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 70 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 73 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 88 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 92 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 93 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 94 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 95 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 96 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 101 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 102 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 106 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 107 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 103 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 116 "data/scripts/general_scripts.pory"
	lock
# 117 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 118 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 119 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 131 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 132 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 133 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 134 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 135 "data/scripts/general_scripts.pory"
	hidemonpic
# 136 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 137 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 142 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 143 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 144 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 145 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 146 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 146 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 153 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 154 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 155 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 157 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 121 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 122 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 123 "data/scripts/general_scripts.pory"
	waitse
# 124 "data/scripts/general_scripts.pory"
	waitmessage
# 125 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 126 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 127 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 128 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 139 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 148 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 149 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 150 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 169 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 170 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 171 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 169 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 175 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 176 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 177 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 175 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 181 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 182 "data/scripts/general_scripts.pory"
	counteggs
# 183 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 187 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 188 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 193 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 194 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 195 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 195 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 200 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 201 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 202 "data/scripts/general_scripts.pory"
	delay 32
# 203 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 204 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 208 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 210 "data/scripts/general_scripts.pory"
	delay 48
# 211 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 212 "data/scripts/general_scripts.pory"
	waitmovement 0
# 213 "data/scripts/general_scripts.pory"
	delay 30
# 214 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 215 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 216 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 217 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 218 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 220 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 221 "data/scripts/general_scripts.pory"
	waitmovement 0
# 222 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 223 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 227 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 229 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 230 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 231 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 233 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 234 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 236 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 237 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 240 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 241 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 242 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 243 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossingMain_2:
# 184 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 190 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 197 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 205 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 216 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 217 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 218 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 224 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 232 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 235 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 238 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 246 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 247 "data/scripts/general_scripts.pory"
	lock_anim
# 248 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	unlock_anim
# 251 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 255 "data/scripts/general_scripts.pory"
	delay 16
# 256 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 257 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 258 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 259 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 263 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 265 "data/scripts/general_scripts.pory"
	delay 32
# 266 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 267 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 260 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 284 "data/scripts/general_scripts.pory"
	lockall
# 285 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 286 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 287 "data/scripts/general_scripts.pory"
	delay 15
# 288 "data/scripts/general_scripts.pory"
	waitse
# 289 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 290 "data/scripts/general_scripts.pory"
	delay 30
# 291 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 292 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 293 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 308 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 309 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 311 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 312 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 314 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 315 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 318 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 324 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 325 "data/scripts/general_scripts.pory"
	closemessage
# 326 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 330 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 331 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 332 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 340 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 350 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 362 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 379 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 380 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 320 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 321 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 327 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 333 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 334 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 335 "data/scripts/general_scripts.pory"
	delay 32
# 336 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 337 "data/scripts/general_scripts.pory"
	delay 32
# 338 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 339 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 341 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 342 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 343 "data/scripts/general_scripts.pory"
	delay 32
# 344 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 345 "data/scripts/general_scripts.pory"
	delay 32
# 346 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 347 "data/scripts/general_scripts.pory"
	delay 32
# 348 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 349 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 351 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
# 352 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 353 "data/scripts/general_scripts.pory"
	delay 32
# 354 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 355 "data/scripts/general_scripts.pory"
	delay 32
# 356 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 357 "data/scripts/general_scripts.pory"
	delay 32
# 358 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 359 "data/scripts/general_scripts.pory"
	delay 32
# 360 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 361 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 363 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
# 364 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 365 "data/scripts/general_scripts.pory"
	delay 32
# 366 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 367 "data/scripts/general_scripts.pory"
	delay 32
# 368 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 369 "data/scripts/general_scripts.pory"
	delay 32
# 370 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 371 "data/scripts/general_scripts.pory"
	delay 32
# 372 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 373 "data/scripts/general_scripts.pory"
	delay 32
# 374 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 375 "data/scripts/general_scripts.pory"
	delay 32
# 376 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 377 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 393 "data/scripts/general_scripts.pory"
	counteggs
# 394 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 403 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 404 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 405 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 409 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 410 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 411 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 412 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 413 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 414 "data/scripts/general_scripts.pory"
	delay 32
# 416 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 417 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 418 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 419 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 420 "data/scripts/general_scripts.pory"
	delay 16
# 421 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 422 "data/scripts/general_scripts.pory"
	waitmovement 0
# 424 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 425 "data/scripts/general_scripts.pory"
	waitmovement 0
# 426 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 427 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 428 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 429 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 430 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 431 "data/scripts/general_scripts.pory"
	delay 16
# 432 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 433 "data/scripts/general_scripts.pory"
	waitmovement 0
# 435 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 436 "data/scripts/general_scripts.pory"
	waitmovement 0
# 438 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 439 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 440 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 441 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 442 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 443 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 444 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 445 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 446 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 447 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 448 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 395 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 396 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 400 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 406 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 465 "data/scripts/general_scripts.pory"
	counteggs
# 466 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 475 "data/scripts/general_scripts.pory"
	closemessage
# 476 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 477 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 478 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 479 "data/scripts/general_scripts.pory"
	delay 32
# 480 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 481 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 482 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 483 "data/scripts/general_scripts.pory"
	delay 16
# 484 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 485 "data/scripts/general_scripts.pory"
	waitmovement 0
# 487 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 488 "data/scripts/general_scripts.pory"
	waitmovement 0
# 489 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 490 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 491 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 492 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 493 "data/scripts/general_scripts.pory"
	delay 16
# 494 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 495 "data/scripts/general_scripts.pory"
	waitmovement 0
# 497 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 498 "data/scripts/general_scripts.pory"
	waitmovement 0
# 499 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 500 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 501 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 502 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 503 "data/scripts/general_scripts.pory"
	delay 16
# 504 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 505 "data/scripts/general_scripts.pory"
	waitmovement 0
# 507 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 508 "data/scripts/general_scripts.pory"
	waitmovement 0
# 509 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 510 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 511 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 512 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 513 "data/scripts/general_scripts.pory"
	delay 16
# 514 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 515 "data/scripts/general_scripts.pory"
	waitmovement 0
# 517 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 518 "data/scripts/general_scripts.pory"
	waitmovement 0
# 519 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 520 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 521 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 522 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 523 "data/scripts/general_scripts.pory"
	delay 16
# 524 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 525 "data/scripts/general_scripts.pory"
	waitmovement 0
# 527 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 528 "data/scripts/general_scripts.pory"
	waitmovement 0
# 530 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 531 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 532 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 533 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 534 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 535 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 536 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 537 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 538 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 539 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 540 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 541 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 542 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 467 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 468 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 472 "data/scripts/general_scripts.pory"
	release
	end


# 545 "data/scripts/general_scripts.pory"
Walk1Up:
# 546 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 549 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 550 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 551 "data/scripts/general_scripts.pory"
	set_visible
# 552 "data/scripts/general_scripts.pory"
	jump_up
# 553 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 554 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 570 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 571 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 572 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 576 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 577 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 578 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 582 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 583 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 584 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 588 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 589 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 590 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 594 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 595 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 596 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 600 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 601 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 602 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 606 "data/scripts/general_scripts.pory"
	random 6
# 607 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 608 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 609 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 610 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 611 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 612 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 613 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 608 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 609 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 610 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 611 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 612 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 613 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 635 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 638 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 642 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 643 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 640 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 648 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 649 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY
# 650 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_2
SetYoshiMoves_1:
# 653 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_5
SetYoshiMoves_4:
# 656 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_8
SetYoshiMoves_7:
# 662 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 667 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 668 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 669 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 651 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 654 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY_STRONG
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 658 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 664 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 665 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_15
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 659 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_7

SetYoshiMoves_15:
# 665 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10


# 205 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 205 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 205 "data/scripts/general_scripts.pory"
	jump_2_right
# 205 "data/scripts/general_scripts.pory"
	delay_16
# 205 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 205 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 208 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 208 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 208 "data/scripts/general_scripts.pory"
	jump_2_left
# 208 "data/scripts/general_scripts.pory"
	delay_16
# 208 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 208 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 216 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 216 "data/scripts/general_scripts.pory"
	lock_anim
# 216 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 216 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 216 "data/scripts/general_scripts.pory"
	walk_fast_down
# 216 "data/scripts/general_scripts.pory"
	walk_fast_down
# 216 "data/scripts/general_scripts.pory"
	jump_down
# 216 "data/scripts/general_scripts.pory"
	walk_fast_down
# 216 "data/scripts/general_scripts.pory"
	walk_fast_down
# 216 "data/scripts/general_scripts.pory"
	walk_fast_down
# 216 "data/scripts/general_scripts.pory"
	walk_fast_down
# 216 "data/scripts/general_scripts.pory"
	walk_fast_down
# 216 "data/scripts/general_scripts.pory"
	unlock_anim
# 216 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 216 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 217 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 217 "data/scripts/general_scripts.pory"
	lock_anim
# 217 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 217 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 217 "data/scripts/general_scripts.pory"
	walk_fast_down
# 217 "data/scripts/general_scripts.pory"
	jump_down
# 217 "data/scripts/general_scripts.pory"
	walk_fast_down
# 217 "data/scripts/general_scripts.pory"
	walk_fast_down
# 217 "data/scripts/general_scripts.pory"
	walk_fast_down
# 217 "data/scripts/general_scripts.pory"
	walk_fast_down
# 217 "data/scripts/general_scripts.pory"
	walk_fast_down
# 217 "data/scripts/general_scripts.pory"
	walk_fast_down
# 217 "data/scripts/general_scripts.pory"
	unlock_anim
# 217 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 217 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 218 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 218 "data/scripts/general_scripts.pory"
	lock_anim
# 218 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 218 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 218 "data/scripts/general_scripts.pory"
	jump_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	unlock_anim
# 218 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 218 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 260 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 260 "data/scripts/general_scripts.pory"
	set_visible
# 260 "data/scripts/general_scripts.pory"
	jump_2_right
# 260 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 263 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 263 "data/scripts/general_scripts.pory"
	set_visible
# 263 "data/scripts/general_scripts.pory"
	jump_2_left
# 263 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 333 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 333 "data/scripts/general_scripts.pory"
	walk_slow_up
# 333 "data/scripts/general_scripts.pory"
	walk_slow_up
# 333 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 341 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 351 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 351 "data/scripts/general_scripts.pory"
	walk_slow_up
# 351 "data/scripts/general_scripts.pory"
	walk_slow_up
# 351 "data/scripts/general_scripts.pory"
	walk_slow_up
# 351 "data/scripts/general_scripts.pory"
	walk_slow_up
# 351 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 363 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 435 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 435 "data/scripts/general_scripts.pory"
	walk_up
# 435 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript1_Text_0:
# 12 "data/scripts/general_scripts.pory"
	.string "true$"

DebugScript1_Text_1:
# 15 "data/scripts/general_scripts.pory"
	.string "false$"

DebugScript2_Text_0:
# 26 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 88 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 95 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 122 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 142 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 149 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 155 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 193 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 403 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 601 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 79 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 110 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 160 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 270 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 277 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 296 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 383 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 386 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 451 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 457 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 557 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 562 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 617 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 619 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 621 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 623 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 626 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 629 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
