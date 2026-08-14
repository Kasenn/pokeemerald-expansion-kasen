DebugScript1::
# 26 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE
# 27 "data/scripts/general_scripts.pory"
	dowildbattle
	return


DebugScript2::
# 31 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 39 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 42 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 43 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 44 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 48 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 52 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 53 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 58 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 64 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 65 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 66 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 68 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 69 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 70 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 77 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 80 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 81 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 49 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 54 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 55 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 56 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 59 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 60 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 61 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 71 "data/scripts/general_scripts.pory"
	lockall
# 72 "data/scripts/general_scripts.pory"
	waitmoncry
# 73 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 74 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 75 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 78 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 93 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 97 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 98 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 99 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 100 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 101 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 106 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, Script_RetreatWithDiglett_2
# 116 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 117 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_5
# 121 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 122 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 107 "data/scripts/general_scripts.pory"
	compare VAR_AI_FLAGS, 2
	goto_if_eq Script_RetreatWithDiglett_8
# 111 "data/scripts/general_scripts.pory"
	msgbox DiglettHeatText
Script_RetreatWithDiglett_7:
# 113 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_5:
# 118 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_8:
# 108 "data/scripts/general_scripts.pory"
	msgbox DiglettRockText
	goto Script_RetreatWithDiglett_7


Script_TryLootEgg::
# 142 "data/scripts/general_scripts.pory"
	lockall
# 143 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 144 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 145 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 157 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 158 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 159 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 160 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 161 "data/scripts/general_scripts.pory"
	hidemonpic
# 162 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 163 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 168 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 169 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 170 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 171 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 172 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 173 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 173 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 180 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 181 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 182 "data/scripts/general_scripts.pory"
	delay 1
# 183 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 184 "data/scripts/general_scripts.pory"
	delay 1
# 185 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
# 186 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 187 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 189 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 147 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 148 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 149 "data/scripts/general_scripts.pory"
	waitse
# 150 "data/scripts/general_scripts.pory"
	waitmessage
# 151 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 152 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 153 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 154 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 165 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 175 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 176 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 177 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 201 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 202 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 203 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 201 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 207 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 208 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 209 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 207 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 213 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 214 "data/scripts/general_scripts.pory"
	counteggs
# 215 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 219 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 220 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 225 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 226 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 227 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 227 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 232 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 233 "data/scripts/general_scripts.pory"
	call HideEggs
# 234 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 235 "data/scripts/general_scripts.pory"
	delay 32
# 236 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 237 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 241 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 243 "data/scripts/general_scripts.pory"
	delay 48
# 244 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 245 "data/scripts/general_scripts.pory"
	waitmovement 0
# 246 "data/scripts/general_scripts.pory"
	delay 30
# 247 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 248 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 249 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 250 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 251 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 253 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 254 "data/scripts/general_scripts.pory"
	waitmovement 0
# 255 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 256 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 260 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 262 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 263 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 264 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 266 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 267 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 269 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 270 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 273 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 274 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 276 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 216 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 222 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 229 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 238 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 249 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 250 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 251 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 257 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 265 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 268 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 271 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 279 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 280 "data/scripts/general_scripts.pory"
	lock_anim
# 281 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 282 "data/scripts/general_scripts.pory"
	walk_fast_down
# 282 "data/scripts/general_scripts.pory"
	walk_fast_down
# 282 "data/scripts/general_scripts.pory"
	walk_fast_down
# 282 "data/scripts/general_scripts.pory"
	walk_fast_down
# 282 "data/scripts/general_scripts.pory"
	walk_fast_down
# 282 "data/scripts/general_scripts.pory"
	walk_fast_down
# 282 "data/scripts/general_scripts.pory"
	walk_fast_down
# 283 "data/scripts/general_scripts.pory"
	unlock_anim
# 284 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 288 "data/scripts/general_scripts.pory"
	delay 16
# 289 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 290 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 291 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 292 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 296 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 298 "data/scripts/general_scripts.pory"
	delay 32
# 299 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 300 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 293 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 317 "data/scripts/general_scripts.pory"
	lockall
# 318 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 319 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 320 "data/scripts/general_scripts.pory"
	delay 15
# 321 "data/scripts/general_scripts.pory"
	waitse
# 322 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 323 "data/scripts/general_scripts.pory"
	delay 30
# 324 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 325 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 326 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 341 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 342 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 344 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 345 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 347 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 348 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 351 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 357 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 358 "data/scripts/general_scripts.pory"
	closemessage
# 359 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 363 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 364 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 365 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 373 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 383 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 395 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 412 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 413 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 353 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 354 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 360 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 366 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 367 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 368 "data/scripts/general_scripts.pory"
	delay 32
# 369 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 370 "data/scripts/general_scripts.pory"
	delay 32
# 371 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 372 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 374 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 375 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 376 "data/scripts/general_scripts.pory"
	delay 32
# 377 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 378 "data/scripts/general_scripts.pory"
	delay 32
# 379 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 380 "data/scripts/general_scripts.pory"
	delay 32
# 381 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 382 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 384 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
# 385 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 386 "data/scripts/general_scripts.pory"
	delay 32
# 387 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 388 "data/scripts/general_scripts.pory"
	delay 32
# 389 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 390 "data/scripts/general_scripts.pory"
	delay 32
# 391 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 392 "data/scripts/general_scripts.pory"
	delay 32
# 393 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 394 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 396 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
# 397 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 398 "data/scripts/general_scripts.pory"
	delay 32
# 399 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 400 "data/scripts/general_scripts.pory"
	delay 32
# 401 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 402 "data/scripts/general_scripts.pory"
	delay 32
# 403 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 404 "data/scripts/general_scripts.pory"
	delay 32
# 405 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 406 "data/scripts/general_scripts.pory"
	delay 32
# 407 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 408 "data/scripts/general_scripts.pory"
	delay 32
# 409 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 410 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 426 "data/scripts/general_scripts.pory"
	counteggs
# 427 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 436 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 437 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 438 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 442 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 443 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 444 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 445 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 446 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 447 "data/scripts/general_scripts.pory"
	delay 32
# 449 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 450 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 451 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 452 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 453 "data/scripts/general_scripts.pory"
	delay 16
# 454 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 455 "data/scripts/general_scripts.pory"
	waitmovement 0
# 457 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 458 "data/scripts/general_scripts.pory"
	waitmovement 0
# 459 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 460 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 461 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 462 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 463 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 464 "data/scripts/general_scripts.pory"
	delay 16
# 465 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 466 "data/scripts/general_scripts.pory"
	waitmovement 0
# 468 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 469 "data/scripts/general_scripts.pory"
	waitmovement 0
# 471 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 472 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 473 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 474 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 475 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 476 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 477 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 478 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 479 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 480 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 481 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 428 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 429 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 433 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 439 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 498 "data/scripts/general_scripts.pory"
	counteggs
# 499 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 508 "data/scripts/general_scripts.pory"
	closemessage
# 509 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 510 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 511 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 512 "data/scripts/general_scripts.pory"
	delay 32
# 513 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 514 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 515 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 516 "data/scripts/general_scripts.pory"
	delay 16
# 517 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 518 "data/scripts/general_scripts.pory"
	waitmovement 0
# 520 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 521 "data/scripts/general_scripts.pory"
	waitmovement 0
# 522 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 523 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 524 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 525 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 526 "data/scripts/general_scripts.pory"
	delay 16
# 527 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 528 "data/scripts/general_scripts.pory"
	waitmovement 0
# 530 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 531 "data/scripts/general_scripts.pory"
	waitmovement 0
# 532 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 533 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 534 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 535 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 536 "data/scripts/general_scripts.pory"
	delay 16
# 537 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 538 "data/scripts/general_scripts.pory"
	waitmovement 0
# 540 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 541 "data/scripts/general_scripts.pory"
	waitmovement 0
# 542 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 543 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 544 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 545 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 546 "data/scripts/general_scripts.pory"
	delay 16
# 547 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 548 "data/scripts/general_scripts.pory"
	waitmovement 0
# 550 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 551 "data/scripts/general_scripts.pory"
	waitmovement 0
# 552 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 553 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 554 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 555 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 556 "data/scripts/general_scripts.pory"
	delay 16
# 557 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 558 "data/scripts/general_scripts.pory"
	waitmovement 0
# 560 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 561 "data/scripts/general_scripts.pory"
	waitmovement 0
# 563 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 564 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 565 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 566 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 567 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 568 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 569 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 570 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 571 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 572 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 573 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 574 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 575 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 500 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 501 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 505 "data/scripts/general_scripts.pory"
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
	jump_up
# 586 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 587 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 603 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 604 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 605 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 609 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 610 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 611 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 615 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 616 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 617 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 621 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 622 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 623 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 627 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 628 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 629 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 633 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 634 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 635 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 639 "data/scripts/general_scripts.pory"
	random 6
# 640 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 641 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 642 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 643 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 644 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 645 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 646 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 641 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 642 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 643 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 644 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 645 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 646 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 668 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 671 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 675 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 676 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 673 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 681 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 682 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 683 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 686 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 689 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 695 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 701 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 706 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 707 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 708 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 684 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 687 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 690 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 691 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 697 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 692 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 703 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 704 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 698 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 704 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 712 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 713 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 717 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 722 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 728 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 735 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 744 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 714 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 715 "data/scripts/general_scripts.pory"
	waitmovement 0
# 716 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 718 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 719 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 720 "data/scripts/general_scripts.pory"
	waitmovement 0
# 721 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 723 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 724 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 725 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 726 "data/scripts/general_scripts.pory"
	waitmovement 0
# 727 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 729 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 730 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 731 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 732 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 733 "data/scripts/general_scripts.pory"
	waitmovement 0
# 734 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 736 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 737 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 738 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 739 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 740 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 741 "data/scripts/general_scripts.pory"
	waitmovement 0
# 742 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 238 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 238 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 238 "data/scripts/general_scripts.pory"
	jump_2_right
# 238 "data/scripts/general_scripts.pory"
	delay_16
# 238 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 238 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 241 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 241 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 241 "data/scripts/general_scripts.pory"
	jump_2_left
# 241 "data/scripts/general_scripts.pory"
	delay_16
# 241 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 241 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 249 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 249 "data/scripts/general_scripts.pory"
	lock_anim
# 249 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 249 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	walk_fast_down
# 249 "data/scripts/general_scripts.pory"
	jump_down
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
	unlock_anim
# 249 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 249 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 250 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 250 "data/scripts/general_scripts.pory"
	lock_anim
# 250 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 250 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 250 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	jump_down
# 250 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	walk_fast_down
# 250 "data/scripts/general_scripts.pory"
	unlock_anim
# 250 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 250 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 251 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 251 "data/scripts/general_scripts.pory"
	lock_anim
# 251 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 251 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 251 "data/scripts/general_scripts.pory"
	jump_down
# 251 "data/scripts/general_scripts.pory"
	walk_fast_down
# 251 "data/scripts/general_scripts.pory"
	walk_fast_down
# 251 "data/scripts/general_scripts.pory"
	walk_fast_down
# 251 "data/scripts/general_scripts.pory"
	walk_fast_down
# 251 "data/scripts/general_scripts.pory"
	walk_fast_down
# 251 "data/scripts/general_scripts.pory"
	walk_fast_down
# 251 "data/scripts/general_scripts.pory"
	walk_fast_down
# 251 "data/scripts/general_scripts.pory"
	unlock_anim
# 251 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 251 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 293 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 293 "data/scripts/general_scripts.pory"
	set_visible
# 293 "data/scripts/general_scripts.pory"
	jump_2_right
# 293 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 296 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 296 "data/scripts/general_scripts.pory"
	set_visible
# 296 "data/scripts/general_scripts.pory"
	jump_2_left
# 296 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 366 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 366 "data/scripts/general_scripts.pory"
	walk_slow_up
# 366 "data/scripts/general_scripts.pory"
	walk_slow_up
# 366 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 374 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 384 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 384 "data/scripts/general_scripts.pory"
	walk_slow_up
# 384 "data/scripts/general_scripts.pory"
	walk_slow_up
# 384 "data/scripts/general_scripts.pory"
	walk_slow_up
# 384 "data/scripts/general_scripts.pory"
	walk_slow_up
# 384 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 396 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 396 "data/scripts/general_scripts.pory"
	walk_slow_up
# 396 "data/scripts/general_scripts.pory"
	walk_slow_up
# 396 "data/scripts/general_scripts.pory"
	walk_slow_up
# 396 "data/scripts/general_scripts.pory"
	walk_slow_up
# 396 "data/scripts/general_scripts.pory"
	walk_slow_up
# 396 "data/scripts/general_scripts.pory"
	walk_slow_up
# 396 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 468 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 468 "data/scripts/general_scripts.pory"
	walk_up
# 468 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 31 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 93 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 100 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 148 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 168 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 176 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 187 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 225 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 436 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 634 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 84 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

DiglettRockText::
# 125 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "hard terrain here…$"

DiglettHeatText::
# 130 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "intense heat here…$"

RetreatWithDiglett_Text::
# 136 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 192 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 303 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 310 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 329 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 416 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 419 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 484 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 490 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 590 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 595 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 650 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 652 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 654 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 656 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 659 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 662 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
