DebugScript1::
# 23 "data/scripts/general_scripts.pory"
	createmon 0, 1, SPECIES_SNOVER, 15, move1 = MOVE_LEER, move2 = MOVE_INGRAIN, move3 = MOVE_WOOD_HAMMER, move4 = MOVE_BLIZZARD
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
	lockall
# 104 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, Script_RetreatWithDiglett_2
# 114 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 115 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_5
# 119 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 120 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 105 "data/scripts/general_scripts.pory"
	compare VAR_AI_FLAGS, 2
	goto_if_eq Script_RetreatWithDiglett_8
# 109 "data/scripts/general_scripts.pory"
	msgbox DiglettHeatText
Script_RetreatWithDiglett_7:
# 111 "data/scripts/general_scripts.pory"
	releaseall
	end

Script_RetreatWithDiglett_5:
# 116 "data/scripts/general_scripts.pory"
	releaseall
	end

Script_RetreatWithDiglett_8:
# 106 "data/scripts/general_scripts.pory"
	msgbox DiglettRockText
	goto Script_RetreatWithDiglett_7


Script_TryLootEgg::
# 140 "data/scripts/general_scripts.pory"
	lockall
# 141 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 142 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 143 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 155 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 156 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 157 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 158 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 159 "data/scripts/general_scripts.pory"
	hidemonpic
# 160 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 161 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 166 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 167 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 168 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 169 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 170 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 171 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 171 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 178 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 179 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 180 "data/scripts/general_scripts.pory"
	delay 1
# 181 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 182 "data/scripts/general_scripts.pory"
	delay 1
# 183 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
# 184 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 185 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 187 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 145 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 146 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 147 "data/scripts/general_scripts.pory"
	waitse
# 148 "data/scripts/general_scripts.pory"
	waitmessage
# 149 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 150 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 151 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 152 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 163 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 173 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 174 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 175 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 199 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 200 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 201 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 199 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 205 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 206 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 207 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 205 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 211 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 212 "data/scripts/general_scripts.pory"
	counteggs
# 213 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 217 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 218 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 223 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 224 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 225 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 225 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 230 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 231 "data/scripts/general_scripts.pory"
	call HideEggs
# 232 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 233 "data/scripts/general_scripts.pory"
	delay 32
# 234 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 235 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 239 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 241 "data/scripts/general_scripts.pory"
	delay 48
# 242 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 243 "data/scripts/general_scripts.pory"
	waitmovement 0
# 244 "data/scripts/general_scripts.pory"
	delay 30
# 245 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 246 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 247 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 248 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 249 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 251 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 252 "data/scripts/general_scripts.pory"
	waitmovement 0
# 253 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 254 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 258 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 260 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 261 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 262 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 264 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 265 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 267 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 268 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 271 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 272 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 274 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 214 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 220 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 227 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 236 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 247 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 248 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 249 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 255 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 263 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 266 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 269 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 277 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 278 "data/scripts/general_scripts.pory"
	lock_anim
# 279 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 280 "data/scripts/general_scripts.pory"
	walk_fast_down
# 280 "data/scripts/general_scripts.pory"
	walk_fast_down
# 280 "data/scripts/general_scripts.pory"
	walk_fast_down
# 280 "data/scripts/general_scripts.pory"
	walk_fast_down
# 280 "data/scripts/general_scripts.pory"
	walk_fast_down
# 280 "data/scripts/general_scripts.pory"
	walk_fast_down
# 280 "data/scripts/general_scripts.pory"
	walk_fast_down
# 281 "data/scripts/general_scripts.pory"
	unlock_anim
# 282 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 286 "data/scripts/general_scripts.pory"
	delay 16
# 287 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 288 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 289 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 290 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 294 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 296 "data/scripts/general_scripts.pory"
	delay 32
# 297 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 298 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 291 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 315 "data/scripts/general_scripts.pory"
	lockall
# 316 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 317 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 318 "data/scripts/general_scripts.pory"
	delay 15
# 319 "data/scripts/general_scripts.pory"
	waitse
# 320 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 321 "data/scripts/general_scripts.pory"
	delay 30
# 322 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 323 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 324 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 339 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 340 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 342 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 343 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 345 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 346 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 349 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 355 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 356 "data/scripts/general_scripts.pory"
	closemessage
# 357 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 361 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 362 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 363 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 371 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 381 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 393 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 410 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 411 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 351 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 352 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 358 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 364 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 365 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 366 "data/scripts/general_scripts.pory"
	delay 32
# 367 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 368 "data/scripts/general_scripts.pory"
	delay 32
# 369 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 370 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 372 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 373 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 374 "data/scripts/general_scripts.pory"
	delay 32
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
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 382 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
# 383 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 384 "data/scripts/general_scripts.pory"
	delay 32
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
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 394 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
# 395 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 396 "data/scripts/general_scripts.pory"
	delay 32
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
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 424 "data/scripts/general_scripts.pory"
	counteggs
# 425 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 434 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 435 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 436 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 440 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 441 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 442 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 443 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 444 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 445 "data/scripts/general_scripts.pory"
	delay 32
# 447 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 448 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 449 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 450 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 451 "data/scripts/general_scripts.pory"
	delay 16
# 452 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 453 "data/scripts/general_scripts.pory"
	waitmovement 0
# 455 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 456 "data/scripts/general_scripts.pory"
	waitmovement 0
# 457 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 458 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 459 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 460 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 461 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 462 "data/scripts/general_scripts.pory"
	delay 16
# 463 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 464 "data/scripts/general_scripts.pory"
	waitmovement 0
# 466 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 467 "data/scripts/general_scripts.pory"
	waitmovement 0
# 469 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 470 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 471 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 472 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 473 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 474 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 475 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 476 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 477 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 478 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 479 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 426 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 427 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 431 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 437 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 496 "data/scripts/general_scripts.pory"
	counteggs
# 497 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 506 "data/scripts/general_scripts.pory"
	closemessage
# 507 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 508 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 509 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 510 "data/scripts/general_scripts.pory"
	delay 32
# 511 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 512 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 513 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 514 "data/scripts/general_scripts.pory"
	delay 16
# 515 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 516 "data/scripts/general_scripts.pory"
	waitmovement 0
# 518 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 519 "data/scripts/general_scripts.pory"
	waitmovement 0
# 520 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 521 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 522 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 523 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 524 "data/scripts/general_scripts.pory"
	delay 16
# 525 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 526 "data/scripts/general_scripts.pory"
	waitmovement 0
# 528 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 529 "data/scripts/general_scripts.pory"
	waitmovement 0
# 530 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 531 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 532 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 533 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 534 "data/scripts/general_scripts.pory"
	delay 16
# 535 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 536 "data/scripts/general_scripts.pory"
	waitmovement 0
# 538 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 539 "data/scripts/general_scripts.pory"
	waitmovement 0
# 540 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 541 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 542 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 543 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 544 "data/scripts/general_scripts.pory"
	delay 16
# 545 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 546 "data/scripts/general_scripts.pory"
	waitmovement 0
# 548 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 549 "data/scripts/general_scripts.pory"
	waitmovement 0
# 550 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 551 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_MAIN_X, VAR_TEMP_0
# 552 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 553 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 554 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 555 "data/scripts/general_scripts.pory"
	delay 16
# 556 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 557 "data/scripts/general_scripts.pory"
	waitmovement 0
# 559 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 560 "data/scripts/general_scripts.pory"
	waitmovement 0
# 562 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 37, 0x238, FALSE
# 563 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 36, 0x238, FALSE
# 564 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 35, 0x238, FALSE
# 565 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 34, 0x238, FALSE
# 566 "data/scripts/general_scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 33, 0x239, FALSE
# 567 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 568 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 569 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 570 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 571 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 572 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 573 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 574 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA2
# 575 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA3
# 576 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 498 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 499 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 503 "data/scripts/general_scripts.pory"
	release
	end


# 579 "data/scripts/general_scripts.pory"
Walk1Up:
# 580 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 583 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 584 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 585 "data/scripts/general_scripts.pory"
	set_visible
# 586 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 587 "data/scripts/general_scripts.pory"
	jump_up
# 588 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 589 "data/scripts/general_scripts.pory"
	nurse_joy_bow
# 590 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

EventScript_Follower1::
# 606 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 607 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 608 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 612 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 613 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 614 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 618 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 619 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 620 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 624 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 625 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 626 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 630 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 631 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 632 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 636 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 637 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 638 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 642 "data/scripts/general_scripts.pory"
	random 6
# 643 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 644 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 645 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 646 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 647 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 648 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 649 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 644 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 645 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 646 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 647 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 648 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 649 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 671 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 674 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 678 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 679 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 676 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 684 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 685 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 686 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 689 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 692 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 698 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 704 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 709 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 710 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 711 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 687 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 690 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 693 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 694 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 700 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 695 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 706 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 707 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 701 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 707 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 715 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 716 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 720 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 725 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 731 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 738 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 747 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 717 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 718 "data/scripts/general_scripts.pory"
	waitmovement 0
# 719 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 721 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 722 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 723 "data/scripts/general_scripts.pory"
	waitmovement 0
# 724 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 726 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 727 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 728 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 729 "data/scripts/general_scripts.pory"
	waitmovement 0
# 730 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 732 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 733 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 734 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 735 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 736 "data/scripts/general_scripts.pory"
	waitmovement 0
# 737 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 739 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 740 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 741 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 742 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 743 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 744 "data/scripts/general_scripts.pory"
	waitmovement 0
# 745 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 236 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 236 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 236 "data/scripts/general_scripts.pory"
	jump_2_right
# 236 "data/scripts/general_scripts.pory"
	delay_16
# 236 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 236 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 239 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 239 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 239 "data/scripts/general_scripts.pory"
	jump_2_left
# 239 "data/scripts/general_scripts.pory"
	delay_16
# 239 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 239 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 247 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 247 "data/scripts/general_scripts.pory"
	lock_anim
# 247 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 247 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 247 "data/scripts/general_scripts.pory"
	walk_fast_down
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
	unlock_anim
# 247 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 247 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 248 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 248 "data/scripts/general_scripts.pory"
	lock_anim
# 248 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 248 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 248 "data/scripts/general_scripts.pory"
	walk_fast_down
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
	unlock_anim
# 248 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 248 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 249 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 249 "data/scripts/general_scripts.pory"
	lock_anim
# 249 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 249 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
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

# 291 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 291 "data/scripts/general_scripts.pory"
	set_visible
# 291 "data/scripts/general_scripts.pory"
	jump_2_right
# 291 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 294 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 294 "data/scripts/general_scripts.pory"
	set_visible
# 294 "data/scripts/general_scripts.pory"
	jump_2_left
# 294 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 364 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 364 "data/scripts/general_scripts.pory"
	walk_slow_up
# 364 "data/scripts/general_scripts.pory"
	walk_slow_up
# 364 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 372 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 382 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 382 "data/scripts/general_scripts.pory"
	walk_slow_up
# 382 "data/scripts/general_scripts.pory"
	walk_slow_up
# 382 "data/scripts/general_scripts.pory"
	walk_slow_up
# 382 "data/scripts/general_scripts.pory"
	walk_slow_up
# 382 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 394 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 394 "data/scripts/general_scripts.pory"
	walk_slow_up
# 394 "data/scripts/general_scripts.pory"
	walk_slow_up
# 394 "data/scripts/general_scripts.pory"
	walk_slow_up
# 394 "data/scripts/general_scripts.pory"
	walk_slow_up
# 394 "data/scripts/general_scripts.pory"
	walk_slow_up
# 394 "data/scripts/general_scripts.pory"
	walk_slow_up
# 394 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 466 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 466 "data/scripts/general_scripts.pory"
	walk_up
# 466 "data/scripts/general_scripts.pory"
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
# 146 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 166 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 174 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 185 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 223 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 434 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 637 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 81 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

DiglettRockText::
# 123 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "hard terrain here…$"

DiglettHeatText::
# 128 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "intense heat here…$"

RetreatWithDiglett_Text::
# 134 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 190 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 301 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 308 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 327 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 414 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 417 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 482 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 488 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 593 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 598 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 653 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 655 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 657 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 659 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 662 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 665 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
