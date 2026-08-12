DebugScript1::
# 16 "data/scripts/general_scripts.pory"
	callnative TestSpeciesBST2
# 17 "data/scripts/general_scripts.pory"
	callnative TestSpeciesBST3
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
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 97 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 101 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 102 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 98 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 111 "data/scripts/general_scripts.pory"
	lockall
# 112 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 113 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 114 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 126 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 127 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 128 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 129 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 130 "data/scripts/general_scripts.pory"
	hidemonpic
# 131 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 132 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 137 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 138 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 139 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 140 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 141 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 142 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 142 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 149 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 150 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 151 "data/scripts/general_scripts.pory"
	delay 1
# 152 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 153 "data/scripts/general_scripts.pory"
	delay 1
# 154 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
# 155 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 156 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 158 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 116 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 117 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 118 "data/scripts/general_scripts.pory"
	waitse
# 119 "data/scripts/general_scripts.pory"
	waitmessage
# 120 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 121 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 122 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 123 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 134 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 144 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 145 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 146 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 170 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 171 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 172 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 170 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 176 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 177 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 178 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 176 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 182 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 183 "data/scripts/general_scripts.pory"
	counteggs
# 184 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 188 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 189 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 194 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 195 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 196 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 196 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 201 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 202 "data/scripts/general_scripts.pory"
	call HideEggs
# 203 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 204 "data/scripts/general_scripts.pory"
	delay 32
# 205 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 206 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 210 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 212 "data/scripts/general_scripts.pory"
	delay 48
# 213 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 214 "data/scripts/general_scripts.pory"
	waitmovement 0
# 215 "data/scripts/general_scripts.pory"
	delay 30
# 216 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 217 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 218 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 219 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 220 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 222 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 223 "data/scripts/general_scripts.pory"
	waitmovement 0
# 224 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 225 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 229 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 231 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 232 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 233 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 235 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 236 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 238 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 239 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 242 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 243 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 245 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 185 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 191 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 198 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 207 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 218 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 219 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 220 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 226 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 234 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 237 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 240 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 248 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 249 "data/scripts/general_scripts.pory"
	lock_anim
# 250 "data/scripts/general_scripts.pory"
	lock_facing_direction
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
# 252 "data/scripts/general_scripts.pory"
	unlock_anim
# 253 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 257 "data/scripts/general_scripts.pory"
	delay 16
# 258 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 259 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 260 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 261 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 265 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 267 "data/scripts/general_scripts.pory"
	delay 32
# 268 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 269 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 262 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 286 "data/scripts/general_scripts.pory"
	lockall
# 287 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 288 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 289 "data/scripts/general_scripts.pory"
	delay 15
# 290 "data/scripts/general_scripts.pory"
	waitse
# 291 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 292 "data/scripts/general_scripts.pory"
	delay 30
# 293 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 294 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 295 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 310 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 311 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 313 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 314 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 316 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 317 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 320 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 326 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 327 "data/scripts/general_scripts.pory"
	closemessage
# 328 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 332 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 333 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 334 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 342 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 352 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 364 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 381 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 382 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 322 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 323 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 329 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 335 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 336 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 337 "data/scripts/general_scripts.pory"
	delay 32
# 338 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 339 "data/scripts/general_scripts.pory"
	delay 32
# 340 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 341 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 343 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
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
# 350 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 351 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 353 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
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
# 362 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 363 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 365 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
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
# 378 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 379 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 395 "data/scripts/general_scripts.pory"
	counteggs
# 396 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 405 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 406 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 407 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 411 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 412 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 413 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 414 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 415 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 416 "data/scripts/general_scripts.pory"
	delay 32
# 418 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 419 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 420 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 421 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 422 "data/scripts/general_scripts.pory"
	delay 16
# 423 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 424 "data/scripts/general_scripts.pory"
	waitmovement 0
# 426 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 427 "data/scripts/general_scripts.pory"
	waitmovement 0
# 428 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 429 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 430 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 431 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 432 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 433 "data/scripts/general_scripts.pory"
	delay 16
# 434 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 435 "data/scripts/general_scripts.pory"
	waitmovement 0
# 437 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 438 "data/scripts/general_scripts.pory"
	waitmovement 0
# 440 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 441 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 442 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 443 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 444 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 445 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 446 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 447 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 448 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 449 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 450 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 397 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 398 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 402 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 408 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 467 "data/scripts/general_scripts.pory"
	counteggs
# 468 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 477 "data/scripts/general_scripts.pory"
	closemessage
# 478 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 479 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 480 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 481 "data/scripts/general_scripts.pory"
	delay 32
# 482 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 483 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 484 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 485 "data/scripts/general_scripts.pory"
	delay 16
# 486 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 487 "data/scripts/general_scripts.pory"
	waitmovement 0
# 489 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 490 "data/scripts/general_scripts.pory"
	waitmovement 0
# 491 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 492 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 493 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 494 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 495 "data/scripts/general_scripts.pory"
	delay 16
# 496 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 497 "data/scripts/general_scripts.pory"
	waitmovement 0
# 499 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 500 "data/scripts/general_scripts.pory"
	waitmovement 0
# 501 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 502 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 503 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 504 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 505 "data/scripts/general_scripts.pory"
	delay 16
# 506 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 507 "data/scripts/general_scripts.pory"
	waitmovement 0
# 509 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 510 "data/scripts/general_scripts.pory"
	waitmovement 0
# 511 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 512 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 513 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 514 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 515 "data/scripts/general_scripts.pory"
	delay 16
# 516 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 517 "data/scripts/general_scripts.pory"
	waitmovement 0
# 519 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 520 "data/scripts/general_scripts.pory"
	waitmovement 0
# 521 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 522 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 523 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 524 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 525 "data/scripts/general_scripts.pory"
	delay 16
# 526 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 527 "data/scripts/general_scripts.pory"
	waitmovement 0
# 529 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 530 "data/scripts/general_scripts.pory"
	waitmovement 0
# 532 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 533 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 534 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 535 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 536 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 537 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 538 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 539 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 540 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 541 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 542 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 543 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 544 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 469 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 470 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 474 "data/scripts/general_scripts.pory"
	release
	end


# 547 "data/scripts/general_scripts.pory"
Walk1Up:
# 548 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 551 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 552 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 553 "data/scripts/general_scripts.pory"
	set_visible
# 554 "data/scripts/general_scripts.pory"
	jump_up
# 555 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 556 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 572 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 573 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 574 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 578 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 579 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 580 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 584 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 585 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 586 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 590 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 591 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 592 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 596 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 597 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 598 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 602 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 603 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 604 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 608 "data/scripts/general_scripts.pory"
	random 6
# 609 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 610 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 611 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 612 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 613 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 614 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 615 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 610 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 611 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 612 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 613 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 614 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 615 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 637 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 640 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 644 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 645 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 642 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 650 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 651 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 652 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 655 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 658 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 664 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 670 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 675 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 676 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 677 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 653 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 656 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 659 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 660 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 666 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 661 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 672 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 673 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 667 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 673 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 681 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 682 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 686 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 691 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 697 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 704 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 713 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 683 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 684 "data/scripts/general_scripts.pory"
	waitmovement 0
# 685 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 687 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 688 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 689 "data/scripts/general_scripts.pory"
	waitmovement 0
# 690 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 692 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 693 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 694 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 695 "data/scripts/general_scripts.pory"
	waitmovement 0
# 696 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 698 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 699 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 700 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 701 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 702 "data/scripts/general_scripts.pory"
	waitmovement 0
# 703 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 705 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 706 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 707 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 708 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 709 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 710 "data/scripts/general_scripts.pory"
	waitmovement 0
# 711 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 207 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 207 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 207 "data/scripts/general_scripts.pory"
	jump_2_right
# 207 "data/scripts/general_scripts.pory"
	delay_16
# 207 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 207 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 210 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 210 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 210 "data/scripts/general_scripts.pory"
	jump_2_left
# 210 "data/scripts/general_scripts.pory"
	delay_16
# 210 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 210 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 218 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 218 "data/scripts/general_scripts.pory"
	lock_anim
# 218 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 218 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
# 218 "data/scripts/general_scripts.pory"
	walk_fast_down
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
	unlock_anim
# 218 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 218 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 219 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 219 "data/scripts/general_scripts.pory"
	lock_anim
# 219 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 219 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 219 "data/scripts/general_scripts.pory"
	walk_fast_down
# 219 "data/scripts/general_scripts.pory"
	jump_down
# 219 "data/scripts/general_scripts.pory"
	walk_fast_down
# 219 "data/scripts/general_scripts.pory"
	walk_fast_down
# 219 "data/scripts/general_scripts.pory"
	walk_fast_down
# 219 "data/scripts/general_scripts.pory"
	walk_fast_down
# 219 "data/scripts/general_scripts.pory"
	walk_fast_down
# 219 "data/scripts/general_scripts.pory"
	walk_fast_down
# 219 "data/scripts/general_scripts.pory"
	unlock_anim
# 219 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 219 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 220 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 220 "data/scripts/general_scripts.pory"
	lock_anim
# 220 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 220 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 220 "data/scripts/general_scripts.pory"
	jump_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	unlock_anim
# 220 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 220 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 262 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 262 "data/scripts/general_scripts.pory"
	set_visible
# 262 "data/scripts/general_scripts.pory"
	jump_2_right
# 262 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 265 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 265 "data/scripts/general_scripts.pory"
	set_visible
# 265 "data/scripts/general_scripts.pory"
	jump_2_left
# 265 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 335 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 335 "data/scripts/general_scripts.pory"
	walk_slow_up
# 335 "data/scripts/general_scripts.pory"
	walk_slow_up
# 335 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 343 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 353 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 353 "data/scripts/general_scripts.pory"
	walk_slow_up
# 353 "data/scripts/general_scripts.pory"
	walk_slow_up
# 353 "data/scripts/general_scripts.pory"
	walk_slow_up
# 353 "data/scripts/general_scripts.pory"
	walk_slow_up
# 353 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 365 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 365 "data/scripts/general_scripts.pory"
	walk_slow_up
# 365 "data/scripts/general_scripts.pory"
	walk_slow_up
# 365 "data/scripts/general_scripts.pory"
	walk_slow_up
# 365 "data/scripts/general_scripts.pory"
	walk_slow_up
# 365 "data/scripts/general_scripts.pory"
	walk_slow_up
# 365 "data/scripts/general_scripts.pory"
	walk_slow_up
# 365 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 437 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 437 "data/scripts/general_scripts.pory"
	walk_up
# 437 "data/scripts/general_scripts.pory"
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
# 117 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 137 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 145 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 156 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 194 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 405 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 603 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 74 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 105 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 161 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 272 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 279 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 298 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 385 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 388 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 453 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 459 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 559 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 564 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 619 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 621 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 623 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 625 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 628 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 631 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
