DebugScript1::
# 11 "data/scripts/general_scripts.pory"
	call SetEggOnPedestal
	return


DebugScript2::
# 15 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 23 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 26 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 27 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 28 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 32 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 36 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 37 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 42 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 48 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 49 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 50 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 52 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 53 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 54 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 61 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 64 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 65 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 33 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 38 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 39 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 40 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 43 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 44 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 45 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 55 "data/scripts/general_scripts.pory"
	lockall
# 56 "data/scripts/general_scripts.pory"
	waitmoncry
# 57 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 58 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 59 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 62 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 77 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 81 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 82 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 83 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 84 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 85 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 90 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 91 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 95 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 96 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 92 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 105 "data/scripts/general_scripts.pory"
	lockall
# 106 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 107 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 108 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 120 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 121 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 122 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 123 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 124 "data/scripts/general_scripts.pory"
	hidemonpic
# 125 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 126 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 131 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 132 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 133 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 134 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 135 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 135 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 142 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 143 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 144 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 145 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 147 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 110 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 111 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 112 "data/scripts/general_scripts.pory"
	waitse
# 113 "data/scripts/general_scripts.pory"
	waitmessage
# 114 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 115 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 116 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 117 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 128 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 137 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 138 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 139 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 159 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 160 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 161 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 159 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 165 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 166 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 167 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 165 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 171 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 172 "data/scripts/general_scripts.pory"
	counteggs
# 173 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 177 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 178 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 183 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 184 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 185 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 185 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 190 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 191 "data/scripts/general_scripts.pory"
	call HideEggs
# 192 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 193 "data/scripts/general_scripts.pory"
	delay 32
# 194 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 195 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 199 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 201 "data/scripts/general_scripts.pory"
	delay 48
# 202 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 203 "data/scripts/general_scripts.pory"
	waitmovement 0
# 204 "data/scripts/general_scripts.pory"
	delay 30
# 205 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 206 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 207 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 208 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 209 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 211 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 212 "data/scripts/general_scripts.pory"
	waitmovement 0
# 213 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 214 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 218 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 220 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 221 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 222 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 224 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 225 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 227 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 228 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 231 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 232 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 233 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 235 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 174 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 180 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 187 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 196 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 207 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 208 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 209 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 215 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 223 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 226 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 229 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 238 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 239 "data/scripts/general_scripts.pory"
	lock_anim
# 240 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 242 "data/scripts/general_scripts.pory"
	unlock_anim
# 243 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 247 "data/scripts/general_scripts.pory"
	delay 16
# 248 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 249 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 250 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 251 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 255 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 257 "data/scripts/general_scripts.pory"
	delay 32
# 258 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 259 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 252 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 276 "data/scripts/general_scripts.pory"
	lockall
# 277 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 278 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 279 "data/scripts/general_scripts.pory"
	delay 15
# 280 "data/scripts/general_scripts.pory"
	waitse
# 281 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 282 "data/scripts/general_scripts.pory"
	delay 30
# 283 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 284 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 285 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 300 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 301 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 303 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 304 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 306 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 307 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 310 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 316 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 317 "data/scripts/general_scripts.pory"
	closemessage
# 318 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 322 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 323 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 324 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 332 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 342 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 354 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 371 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 372 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 312 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 313 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 319 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 325 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 326 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 327 "data/scripts/general_scripts.pory"
	delay 32
# 328 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 329 "data/scripts/general_scripts.pory"
	delay 32
# 330 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 331 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 333 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
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
# 340 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 341 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 343 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
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
# 352 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 353 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 355 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
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


MakeBerryBridge::
# 385 "data/scripts/general_scripts.pory"
	counteggs
# 386 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 395 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 396 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 397 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 401 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 402 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 403 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 404 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 405 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 406 "data/scripts/general_scripts.pory"
	delay 32
# 408 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 409 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 410 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 411 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 412 "data/scripts/general_scripts.pory"
	delay 16
# 413 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 414 "data/scripts/general_scripts.pory"
	waitmovement 0
# 416 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 417 "data/scripts/general_scripts.pory"
	waitmovement 0
# 418 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 419 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 420 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 421 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 422 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 423 "data/scripts/general_scripts.pory"
	delay 16
# 424 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 425 "data/scripts/general_scripts.pory"
	waitmovement 0
# 427 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 428 "data/scripts/general_scripts.pory"
	waitmovement 0
# 430 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 431 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 432 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 433 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 434 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 435 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 436 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 437 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 438 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 439 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 440 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 387 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 388 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 392 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 398 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 457 "data/scripts/general_scripts.pory"
	counteggs
# 458 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 467 "data/scripts/general_scripts.pory"
	closemessage
# 468 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 469 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 470 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 471 "data/scripts/general_scripts.pory"
	delay 32
# 472 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 473 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 474 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 475 "data/scripts/general_scripts.pory"
	delay 16
# 476 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 477 "data/scripts/general_scripts.pory"
	waitmovement 0
# 479 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 480 "data/scripts/general_scripts.pory"
	waitmovement 0
# 481 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 482 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 483 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 484 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 493 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 494 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 503 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 504 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 513 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 514 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 515 "data/scripts/general_scripts.pory"
	delay 16
# 516 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 517 "data/scripts/general_scripts.pory"
	waitmovement 0
# 519 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 520 "data/scripts/general_scripts.pory"
	waitmovement 0
# 522 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 523 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 524 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 525 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 526 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 527 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 528 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 529 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 530 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 531 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 532 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 533 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 534 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 459 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 460 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 464 "data/scripts/general_scripts.pory"
	release
	end


# 537 "data/scripts/general_scripts.pory"
Walk1Up:
# 538 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 541 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 542 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 543 "data/scripts/general_scripts.pory"
	set_visible
# 544 "data/scripts/general_scripts.pory"
	jump_up
# 545 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 546 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 562 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 563 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 564 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 568 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 569 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 570 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 574 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 575 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 576 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 580 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 581 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 582 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 586 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 587 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 588 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 592 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 593 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 594 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 598 "data/scripts/general_scripts.pory"
	random 6
# 599 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 600 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 601 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 602 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 603 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 604 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 605 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 600 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 601 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 602 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 603 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 604 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 605 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 627 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 630 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 634 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 635 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 632 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 640 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 641 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 642 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 645 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 648 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 654 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 660 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 665 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 666 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 667 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 643 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 646 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 649 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 650 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 656 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 651 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 662 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 663 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 657 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 663 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 671 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 672 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 676 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 681 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 687 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 694 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 703 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 673 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 674 "data/scripts/general_scripts.pory"
	waitmovement 0
# 675 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 677 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 678 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 679 "data/scripts/general_scripts.pory"
	waitmovement 0
# 680 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 682 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 683 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 684 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 685 "data/scripts/general_scripts.pory"
	waitmovement 0
# 686 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 688 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 689 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 690 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 691 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 692 "data/scripts/general_scripts.pory"
	waitmovement 0
# 693 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 695 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 696 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 697 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 698 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 699 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 700 "data/scripts/general_scripts.pory"
	waitmovement 0
# 701 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 196 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 196 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 196 "data/scripts/general_scripts.pory"
	jump_2_right
# 196 "data/scripts/general_scripts.pory"
	delay_16
# 196 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 196 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 199 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 199 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 199 "data/scripts/general_scripts.pory"
	jump_2_left
# 199 "data/scripts/general_scripts.pory"
	delay_16
# 199 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 199 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 207 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 207 "data/scripts/general_scripts.pory"
	lock_anim
# 207 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 207 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 207 "data/scripts/general_scripts.pory"
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	jump_down
# 207 "data/scripts/general_scripts.pory"
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	unlock_anim
# 207 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 207 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 208 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 208 "data/scripts/general_scripts.pory"
	lock_anim
# 208 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 208 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	jump_down
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	unlock_anim
# 208 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 208 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 209 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 209 "data/scripts/general_scripts.pory"
	lock_anim
# 209 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 209 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 209 "data/scripts/general_scripts.pory"
	jump_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	unlock_anim
# 209 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 209 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 252 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 252 "data/scripts/general_scripts.pory"
	set_visible
# 252 "data/scripts/general_scripts.pory"
	jump_2_right
# 252 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 255 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 255 "data/scripts/general_scripts.pory"
	set_visible
# 255 "data/scripts/general_scripts.pory"
	jump_2_left
# 255 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 325 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 325 "data/scripts/general_scripts.pory"
	walk_slow_up
# 325 "data/scripts/general_scripts.pory"
	walk_slow_up
# 325 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 333 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 333 "data/scripts/general_scripts.pory"
	walk_slow_up
# 333 "data/scripts/general_scripts.pory"
	walk_slow_up
# 333 "data/scripts/general_scripts.pory"
	walk_slow_up
# 333 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 343 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
# 343 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 355 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 355 "data/scripts/general_scripts.pory"
	walk_slow_up
# 355 "data/scripts/general_scripts.pory"
	walk_slow_up
# 355 "data/scripts/general_scripts.pory"
	walk_slow_up
# 355 "data/scripts/general_scripts.pory"
	walk_slow_up
# 355 "data/scripts/general_scripts.pory"
	walk_slow_up
# 355 "data/scripts/general_scripts.pory"
	walk_slow_up
# 355 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 427 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 427 "data/scripts/general_scripts.pory"
	walk_up
# 427 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 15 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 77 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 84 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 111 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 131 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 138 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 145 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 183 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 395 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 593 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 68 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 99 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 150 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 262 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 269 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 288 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 375 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 378 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 443 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 449 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 549 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 554 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 609 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 611 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 613 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 615 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 618 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 621 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
