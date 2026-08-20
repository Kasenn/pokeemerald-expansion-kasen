DebugScript1::
# 23 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE
# 24 "data/scripts/general_scripts.pory"
	dowildbattle
	return


DebugScript2::
# 28 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 36 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 39 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 40 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 41 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 45 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 49 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 50 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 55 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 61 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 62 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 63 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 65 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 66 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 67 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 74 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 77 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 78 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 46 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 51 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 52 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 53 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 56 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 57 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 58 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 68 "data/scripts/general_scripts.pory"
	lockall
# 69 "data/scripts/general_scripts.pory"
	waitmoncry
# 70 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 71 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 72 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 75 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 90 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 94 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 95 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 96 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 97 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 98 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 103 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, Script_RetreatWithDiglett_2
# 113 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 114 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_5
# 118 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 119 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 104 "data/scripts/general_scripts.pory"
	compare VAR_AI_FLAGS, 2
	goto_if_eq Script_RetreatWithDiglett_8
# 108 "data/scripts/general_scripts.pory"
	msgbox DiglettHeatText
Script_RetreatWithDiglett_7:
# 110 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_5:
# 115 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_8:
# 105 "data/scripts/general_scripts.pory"
	msgbox DiglettRockText
	goto Script_RetreatWithDiglett_7


Script_TryLootEgg::
# 139 "data/scripts/general_scripts.pory"
	lockall
# 140 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 141 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 142 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 154 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 155 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 156 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 157 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 158 "data/scripts/general_scripts.pory"
	hidemonpic
# 159 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 160 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 165 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 166 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 167 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 168 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 169 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 170 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 170 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 177 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 178 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 179 "data/scripts/general_scripts.pory"
	delay 1
# 180 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 181 "data/scripts/general_scripts.pory"
	delay 1
# 182 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
# 183 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 184 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 186 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 144 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 145 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 146 "data/scripts/general_scripts.pory"
	waitse
# 147 "data/scripts/general_scripts.pory"
	waitmessage
# 148 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 149 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 150 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 151 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 162 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 172 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 173 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 174 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 198 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 199 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 200 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 198 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 204 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 205 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 206 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 204 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 210 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 211 "data/scripts/general_scripts.pory"
	counteggs
# 212 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 216 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 217 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 222 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 223 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 224 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 224 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 229 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 230 "data/scripts/general_scripts.pory"
	call HideEggs
# 231 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 232 "data/scripts/general_scripts.pory"
	delay 32
# 233 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 234 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 238 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 240 "data/scripts/general_scripts.pory"
	delay 48
# 241 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 242 "data/scripts/general_scripts.pory"
	waitmovement 0
# 243 "data/scripts/general_scripts.pory"
	delay 30
# 244 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 245 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 246 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 247 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 248 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 250 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 251 "data/scripts/general_scripts.pory"
	waitmovement 0
# 252 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 253 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 257 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 259 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 260 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 261 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 263 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 264 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 266 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 267 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 270 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 271 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 273 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 213 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 219 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 226 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 235 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 246 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 247 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 248 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 254 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 262 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 265 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 268 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 276 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 277 "data/scripts/general_scripts.pory"
	lock_anim
# 278 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 279 "data/scripts/general_scripts.pory"
	walk_fast_down
# 279 "data/scripts/general_scripts.pory"
	walk_fast_down
# 279 "data/scripts/general_scripts.pory"
	walk_fast_down
# 279 "data/scripts/general_scripts.pory"
	walk_fast_down
# 279 "data/scripts/general_scripts.pory"
	walk_fast_down
# 279 "data/scripts/general_scripts.pory"
	walk_fast_down
# 279 "data/scripts/general_scripts.pory"
	walk_fast_down
# 280 "data/scripts/general_scripts.pory"
	unlock_anim
# 281 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 285 "data/scripts/general_scripts.pory"
	delay 16
# 286 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 287 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 288 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 289 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 293 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 295 "data/scripts/general_scripts.pory"
	delay 32
# 296 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 297 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 290 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 314 "data/scripts/general_scripts.pory"
	lockall
# 315 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 316 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 317 "data/scripts/general_scripts.pory"
	delay 15
# 318 "data/scripts/general_scripts.pory"
	waitse
# 319 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 320 "data/scripts/general_scripts.pory"
	delay 30
# 321 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 322 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 323 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 338 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 339 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 341 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 342 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 344 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 345 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 348 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 354 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 355 "data/scripts/general_scripts.pory"
	closemessage
# 356 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 360 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 361 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 362 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 370 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 380 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 392 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 409 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 410 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 350 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 351 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 357 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 363 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
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
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 371 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
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
# 378 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 379 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 381 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
# 382 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 383 "data/scripts/general_scripts.pory"
	delay 32
# 384 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 385 "data/scripts/general_scripts.pory"
	delay 32
# 386 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 387 "data/scripts/general_scripts.pory"
	delay 32
# 388 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 389 "data/scripts/general_scripts.pory"
	delay 32
# 390 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 391 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 393 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
# 394 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 395 "data/scripts/general_scripts.pory"
	delay 32
# 396 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 397 "data/scripts/general_scripts.pory"
	delay 32
# 398 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 399 "data/scripts/general_scripts.pory"
	delay 32
# 400 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 401 "data/scripts/general_scripts.pory"
	delay 32
# 402 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 403 "data/scripts/general_scripts.pory"
	delay 32
# 404 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 405 "data/scripts/general_scripts.pory"
	delay 32
# 406 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 407 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 423 "data/scripts/general_scripts.pory"
	counteggs
# 424 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 433 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 434 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 435 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 439 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 440 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 441 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 442 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 443 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 444 "data/scripts/general_scripts.pory"
	delay 32
# 446 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 447 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 448 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 449 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 450 "data/scripts/general_scripts.pory"
	delay 16
# 451 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 452 "data/scripts/general_scripts.pory"
	waitmovement 0
# 454 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 455 "data/scripts/general_scripts.pory"
	waitmovement 0
# 456 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 457 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 458 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 459 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 460 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 461 "data/scripts/general_scripts.pory"
	delay 16
# 462 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 463 "data/scripts/general_scripts.pory"
	waitmovement 0
# 465 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 466 "data/scripts/general_scripts.pory"
	waitmovement 0
# 468 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 469 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 470 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 471 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 472 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 473 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 474 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 475 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 476 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 477 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 478 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 425 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 426 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 430 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 436 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 495 "data/scripts/general_scripts.pory"
	counteggs
# 496 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 505 "data/scripts/general_scripts.pory"
	closemessage
# 506 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 507 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 508 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 509 "data/scripts/general_scripts.pory"
	delay 32
# 510 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 511 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 512 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 521 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 522 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 523 "data/scripts/general_scripts.pory"
	delay 16
# 524 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 525 "data/scripts/general_scripts.pory"
	waitmovement 0
# 527 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 528 "data/scripts/general_scripts.pory"
	waitmovement 0
# 529 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 530 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 531 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 532 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 533 "data/scripts/general_scripts.pory"
	delay 16
# 534 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 535 "data/scripts/general_scripts.pory"
	waitmovement 0
# 537 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 538 "data/scripts/general_scripts.pory"
	waitmovement 0
# 539 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 540 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 541 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 542 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 543 "data/scripts/general_scripts.pory"
	delay 16
# 544 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 545 "data/scripts/general_scripts.pory"
	waitmovement 0
# 547 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 548 "data/scripts/general_scripts.pory"
	waitmovement 0
# 549 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 550 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_MAIN_X, VAR_TEMP_0
# 551 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 552 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 553 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 554 "data/scripts/general_scripts.pory"
	delay 16
# 555 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 556 "data/scripts/general_scripts.pory"
	waitmovement 0
# 558 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 559 "data/scripts/general_scripts.pory"
	waitmovement 0
# 561 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 37, 0x238, FALSE
# 562 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 36, 0x238, FALSE
# 563 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 35, 0x238, FALSE
# 564 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 34, 0x238, FALSE
# 565 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 33, 0x239, FALSE
# 566 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 567 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 568 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 569 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 570 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 571 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 572 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 573 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA2
# 574 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA3
# 575 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 497 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 498 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 502 "data/scripts/general_scripts.pory"
	release
	end


# 578 "data/scripts/general_scripts.pory"
Walk1Up:
# 579 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 582 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 583 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 584 "data/scripts/general_scripts.pory"
	set_visible
# 585 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 586 "data/scripts/general_scripts.pory"
	jump_up
# 587 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 588 "data/scripts/general_scripts.pory"
	nurse_joy_bow
# 589 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

EventScript_Follower1::
# 605 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 606 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 607 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 611 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 612 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 613 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 617 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 618 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 619 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 623 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 624 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 625 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 629 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 630 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 631 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 635 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 636 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 637 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 641 "data/scripts/general_scripts.pory"
	random 6
# 642 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 643 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 644 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 645 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 646 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 647 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 648 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 643 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 644 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 645 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 646 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 647 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 648 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 670 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 673 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 677 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 678 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 675 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 683 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 684 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 685 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 688 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 691 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 697 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 703 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 708 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 709 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 710 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 686 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 689 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 692 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 693 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 699 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 694 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 705 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 706 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 700 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 706 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 714 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 715 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 719 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 724 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 730 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 737 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 746 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 716 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 717 "data/scripts/general_scripts.pory"
	waitmovement 0
# 718 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 720 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 721 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 722 "data/scripts/general_scripts.pory"
	waitmovement 0
# 723 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 725 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 726 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 727 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 728 "data/scripts/general_scripts.pory"
	waitmovement 0
# 729 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 731 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 732 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 733 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 734 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 735 "data/scripts/general_scripts.pory"
	waitmovement 0
# 736 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 738 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 739 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 740 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 741 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 742 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 743 "data/scripts/general_scripts.pory"
	waitmovement 0
# 744 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 235 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 235 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 235 "data/scripts/general_scripts.pory"
	jump_2_right
# 235 "data/scripts/general_scripts.pory"
	delay_16
# 235 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 235 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 238 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 238 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 238 "data/scripts/general_scripts.pory"
	jump_2_left
# 238 "data/scripts/general_scripts.pory"
	delay_16
# 238 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 238 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 246 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 246 "data/scripts/general_scripts.pory"
	lock_anim
# 246 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 246 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 246 "data/scripts/general_scripts.pory"
	walk_fast_down
# 246 "data/scripts/general_scripts.pory"
	walk_fast_down
# 246 "data/scripts/general_scripts.pory"
	jump_down
# 246 "data/scripts/general_scripts.pory"
	walk_fast_down
# 246 "data/scripts/general_scripts.pory"
	walk_fast_down
# 246 "data/scripts/general_scripts.pory"
	walk_fast_down
# 246 "data/scripts/general_scripts.pory"
	walk_fast_down
# 246 "data/scripts/general_scripts.pory"
	walk_fast_down
# 246 "data/scripts/general_scripts.pory"
	unlock_anim
# 246 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 246 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 247 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 247 "data/scripts/general_scripts.pory"
	lock_anim
# 247 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 247 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
# 247 "data/scripts/general_scripts.pory"
	jump_down
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
# 247 "data/scripts/general_scripts.pory"
	unlock_anim
# 247 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 247 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 248 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 248 "data/scripts/general_scripts.pory"
	lock_anim
# 248 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 248 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 248 "data/scripts/general_scripts.pory"
	jump_down
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
# 248 "data/scripts/general_scripts.pory"
	unlock_anim
# 248 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 248 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 290 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 290 "data/scripts/general_scripts.pory"
	set_visible
# 290 "data/scripts/general_scripts.pory"
	jump_2_right
# 290 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 293 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 293 "data/scripts/general_scripts.pory"
	set_visible
# 293 "data/scripts/general_scripts.pory"
	jump_2_left
# 293 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 363 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
# 363 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 371 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 371 "data/scripts/general_scripts.pory"
	walk_slow_up
# 371 "data/scripts/general_scripts.pory"
	walk_slow_up
# 371 "data/scripts/general_scripts.pory"
	walk_slow_up
# 371 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 381 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 381 "data/scripts/general_scripts.pory"
	walk_slow_up
# 381 "data/scripts/general_scripts.pory"
	walk_slow_up
# 381 "data/scripts/general_scripts.pory"
	walk_slow_up
# 381 "data/scripts/general_scripts.pory"
	walk_slow_up
# 381 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 393 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 393 "data/scripts/general_scripts.pory"
	walk_slow_up
# 393 "data/scripts/general_scripts.pory"
	walk_slow_up
# 393 "data/scripts/general_scripts.pory"
	walk_slow_up
# 393 "data/scripts/general_scripts.pory"
	walk_slow_up
# 393 "data/scripts/general_scripts.pory"
	walk_slow_up
# 393 "data/scripts/general_scripts.pory"
	walk_slow_up
# 393 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 465 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 465 "data/scripts/general_scripts.pory"
	walk_up
# 465 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 28 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 90 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 97 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 145 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 165 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 173 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 184 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 222 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 433 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 636 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 81 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

DiglettRockText::
# 122 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "hard terrain here…$"

DiglettHeatText::
# 127 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "intense heat here…$"

RetreatWithDiglett_Text::
# 133 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 189 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 300 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 307 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 326 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 413 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 416 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 481 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 487 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 592 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 597 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 652 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 654 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 656 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 658 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 661 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 664 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
