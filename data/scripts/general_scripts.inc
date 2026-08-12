DebugScript1::
# 16 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE
# 17 "data/scripts/general_scripts.pory"
	dowildbattle
	return


DebugScript2::
# 21 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 29 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 32 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 33 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 34 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 38 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 42 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 43 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 48 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 54 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 55 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 56 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 58 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 59 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 60 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 67 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 70 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 71 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 39 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 44 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 45 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 46 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 49 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 50 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 51 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 61 "data/scripts/general_scripts.pory"
	lockall
# 62 "data/scripts/general_scripts.pory"
	waitmoncry
# 63 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 64 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 65 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 68 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 83 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 87 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 88 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 89 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 90 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 91 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 96 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, Script_RetreatWithDiglett_2
# 106 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 107 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_5
# 111 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 112 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 97 "data/scripts/general_scripts.pory"
	compare VAR_AI_FLAGS, 2
	goto_if_eq Script_RetreatWithDiglett_8
# 101 "data/scripts/general_scripts.pory"
	msgbox DiglettHeatText
Script_RetreatWithDiglett_7:
# 103 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_5:
# 108 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_8:
# 98 "data/scripts/general_scripts.pory"
	msgbox DiglettRockText
	goto Script_RetreatWithDiglett_7


Script_TryLootEgg::
# 130 "data/scripts/general_scripts.pory"
	lockall
# 131 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 132 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 133 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 145 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 146 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 147 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 148 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 149 "data/scripts/general_scripts.pory"
	hidemonpic
# 150 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 151 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 156 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 157 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 158 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 159 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 160 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 161 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 161 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 168 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 169 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 170 "data/scripts/general_scripts.pory"
	delay 1
# 171 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 172 "data/scripts/general_scripts.pory"
	delay 1
# 173 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
# 174 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 175 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 177 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 135 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 136 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 137 "data/scripts/general_scripts.pory"
	waitse
# 138 "data/scripts/general_scripts.pory"
	waitmessage
# 139 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 140 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 141 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 142 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 153 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 163 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 164 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 165 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 189 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 190 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 191 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 189 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 195 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 196 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 197 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 195 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 201 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 202 "data/scripts/general_scripts.pory"
	counteggs
# 203 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 207 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 208 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 213 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 214 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 215 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 215 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 220 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 221 "data/scripts/general_scripts.pory"
	call HideEggs
# 222 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 223 "data/scripts/general_scripts.pory"
	delay 32
# 224 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 225 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 229 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 231 "data/scripts/general_scripts.pory"
	delay 48
# 232 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 233 "data/scripts/general_scripts.pory"
	waitmovement 0
# 234 "data/scripts/general_scripts.pory"
	delay 30
# 235 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 236 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 237 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 238 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 239 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 241 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 242 "data/scripts/general_scripts.pory"
	waitmovement 0
# 243 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 244 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 248 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 250 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 251 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 252 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 254 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 255 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 257 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 258 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 261 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 262 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 264 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 204 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 210 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 217 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 226 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 237 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 238 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 239 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 245 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 253 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 256 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 259 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 267 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 268 "data/scripts/general_scripts.pory"
	lock_anim
# 269 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 270 "data/scripts/general_scripts.pory"
	walk_fast_down
# 270 "data/scripts/general_scripts.pory"
	walk_fast_down
# 270 "data/scripts/general_scripts.pory"
	walk_fast_down
# 270 "data/scripts/general_scripts.pory"
	walk_fast_down
# 270 "data/scripts/general_scripts.pory"
	walk_fast_down
# 270 "data/scripts/general_scripts.pory"
	walk_fast_down
# 270 "data/scripts/general_scripts.pory"
	walk_fast_down
# 271 "data/scripts/general_scripts.pory"
	unlock_anim
# 272 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 276 "data/scripts/general_scripts.pory"
	delay 16
# 277 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 278 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 279 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 280 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 284 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 286 "data/scripts/general_scripts.pory"
	delay 32
# 287 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 288 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 281 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 305 "data/scripts/general_scripts.pory"
	lockall
# 306 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 307 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 308 "data/scripts/general_scripts.pory"
	delay 15
# 309 "data/scripts/general_scripts.pory"
	waitse
# 310 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 311 "data/scripts/general_scripts.pory"
	delay 30
# 312 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 313 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 314 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 329 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 330 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 332 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 333 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 335 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 336 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 339 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 345 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 346 "data/scripts/general_scripts.pory"
	closemessage
# 347 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 351 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 352 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 353 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 361 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 371 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 383 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 400 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 401 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 341 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 342 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 348 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 354 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 355 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 356 "data/scripts/general_scripts.pory"
	delay 32
# 357 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 358 "data/scripts/general_scripts.pory"
	delay 32
# 359 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 360 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 362 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 363 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 364 "data/scripts/general_scripts.pory"
	delay 32
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

SlipperySlopeMain_11:
# 372 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
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
# 381 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 382 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 384 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
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
# 395 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 396 "data/scripts/general_scripts.pory"
	delay 32
# 397 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 398 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 414 "data/scripts/general_scripts.pory"
	counteggs
# 415 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 424 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 425 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 426 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 430 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 431 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 432 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 433 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 434 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 435 "data/scripts/general_scripts.pory"
	delay 32
# 437 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 438 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 439 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 440 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 441 "data/scripts/general_scripts.pory"
	delay 16
# 442 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 443 "data/scripts/general_scripts.pory"
	waitmovement 0
# 445 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 446 "data/scripts/general_scripts.pory"
	waitmovement 0
# 447 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 448 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 449 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 450 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 451 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 452 "data/scripts/general_scripts.pory"
	delay 16
# 453 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 454 "data/scripts/general_scripts.pory"
	waitmovement 0
# 456 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 457 "data/scripts/general_scripts.pory"
	waitmovement 0
# 459 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 460 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 461 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 462 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 463 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 464 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 465 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 466 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 467 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 468 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 469 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 416 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 417 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 421 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 427 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 486 "data/scripts/general_scripts.pory"
	counteggs
# 487 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 496 "data/scripts/general_scripts.pory"
	closemessage
# 497 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 498 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 499 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 500 "data/scripts/general_scripts.pory"
	delay 32
# 501 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 502 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 503 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 504 "data/scripts/general_scripts.pory"
	delay 16
# 505 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 506 "data/scripts/general_scripts.pory"
	waitmovement 0
# 508 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 509 "data/scripts/general_scripts.pory"
	waitmovement 0
# 510 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 511 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 512 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 513 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 522 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 523 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 532 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 533 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 542 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 543 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 544 "data/scripts/general_scripts.pory"
	delay 16
# 545 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 546 "data/scripts/general_scripts.pory"
	waitmovement 0
# 548 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 549 "data/scripts/general_scripts.pory"
	waitmovement 0
# 551 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 552 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 553 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 554 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 555 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 556 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 557 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 558 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 559 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 560 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 561 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 562 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 563 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 488 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 489 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 493 "data/scripts/general_scripts.pory"
	release
	end


# 566 "data/scripts/general_scripts.pory"
Walk1Up:
# 567 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 570 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 571 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 572 "data/scripts/general_scripts.pory"
	set_visible
# 573 "data/scripts/general_scripts.pory"
	jump_up
# 574 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 575 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 591 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 592 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 593 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 597 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 598 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 599 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 603 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 604 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 605 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 609 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 610 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 611 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 615 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 616 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 617 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 621 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 622 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 623 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 627 "data/scripts/general_scripts.pory"
	random 6
# 628 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 629 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 630 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 631 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 632 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 633 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 634 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 629 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 630 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 631 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 632 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 633 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 634 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 656 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 659 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 663 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 664 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 661 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 669 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 670 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 671 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 674 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 677 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 683 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 689 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 694 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 695 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 696 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 672 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 675 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 678 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 679 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 685 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 680 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 691 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 692 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 686 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 692 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 700 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 701 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 705 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 710 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 716 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 723 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 732 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 702 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 703 "data/scripts/general_scripts.pory"
	waitmovement 0
# 704 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 706 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 707 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 708 "data/scripts/general_scripts.pory"
	waitmovement 0
# 709 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 711 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 712 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 713 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 714 "data/scripts/general_scripts.pory"
	waitmovement 0
# 715 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 717 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 718 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 719 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 720 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 721 "data/scripts/general_scripts.pory"
	waitmovement 0
# 722 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 724 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 725 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 726 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 727 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 728 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 729 "data/scripts/general_scripts.pory"
	waitmovement 0
# 730 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 226 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 226 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 226 "data/scripts/general_scripts.pory"
	jump_2_right
# 226 "data/scripts/general_scripts.pory"
	delay_16
# 226 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 226 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 229 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 229 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 229 "data/scripts/general_scripts.pory"
	jump_2_left
# 229 "data/scripts/general_scripts.pory"
	delay_16
# 229 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 229 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 237 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 237 "data/scripts/general_scripts.pory"
	lock_anim
# 237 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 237 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	jump_down
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	unlock_anim
# 237 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 237 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 238 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 238 "data/scripts/general_scripts.pory"
	lock_anim
# 238 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 238 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 238 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	jump_down
# 238 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	unlock_anim
# 238 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 238 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 239 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 239 "data/scripts/general_scripts.pory"
	lock_anim
# 239 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 239 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 239 "data/scripts/general_scripts.pory"
	jump_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	unlock_anim
# 239 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 239 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 281 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 281 "data/scripts/general_scripts.pory"
	set_visible
# 281 "data/scripts/general_scripts.pory"
	jump_2_right
# 281 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 284 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 284 "data/scripts/general_scripts.pory"
	set_visible
# 284 "data/scripts/general_scripts.pory"
	jump_2_left
# 284 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 354 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 354 "data/scripts/general_scripts.pory"
	walk_slow_up
# 354 "data/scripts/general_scripts.pory"
	walk_slow_up
# 354 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 362 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 362 "data/scripts/general_scripts.pory"
	walk_slow_up
# 362 "data/scripts/general_scripts.pory"
	walk_slow_up
# 362 "data/scripts/general_scripts.pory"
	walk_slow_up
# 362 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 372 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
# 372 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 384 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
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
# 384 "data/scripts/general_scripts.pory"
	walk_slow_up
# 384 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 456 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 456 "data/scripts/general_scripts.pory"
	walk_up
# 456 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 21 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 83 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 90 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 136 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 156 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 164 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 175 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 213 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 424 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 622 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 74 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

DiglettRockText::
# 115 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling to get to\n"
	.string "you due to hard terrain here…$"

DiglettHeatText::
# 119 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling to get to\n"
	.string "you due to the intense heat here…$"

RetreatWithDiglett_Text::
# 124 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 180 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 291 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 298 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 317 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 404 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 407 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 472 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 478 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 578 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 583 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 638 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 640 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 642 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 644 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 647 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 650 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
