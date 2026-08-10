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
	lock
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
	release
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
	call DoWaterEggMovement
# 192 "data/scripts/general_scripts.pory"
	delay 32
# 193 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 194 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 198 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 200 "data/scripts/general_scripts.pory"
	delay 48
# 201 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 202 "data/scripts/general_scripts.pory"
	waitmovement 0
# 203 "data/scripts/general_scripts.pory"
	delay 30
# 204 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 205 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 206 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 207 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 208 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 210 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 211 "data/scripts/general_scripts.pory"
	waitmovement 0
# 212 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 213 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 217 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 219 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 220 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 221 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 223 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 224 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 226 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 227 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 230 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 231 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 232 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 233 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
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
# 195 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 206 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 207 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 208 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 214 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 222 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 225 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 228 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 236 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 237 "data/scripts/general_scripts.pory"
	lock_anim
# 238 "data/scripts/general_scripts.pory"
	lock_facing_direction
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
# 240 "data/scripts/general_scripts.pory"
	unlock_anim
# 241 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 245 "data/scripts/general_scripts.pory"
	delay 16
# 246 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 247 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 248 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 249 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 253 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 255 "data/scripts/general_scripts.pory"
	delay 32
# 256 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 257 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 250 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 274 "data/scripts/general_scripts.pory"
	lockall
# 275 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 276 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 277 "data/scripts/general_scripts.pory"
	delay 15
# 278 "data/scripts/general_scripts.pory"
	waitse
# 279 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 280 "data/scripts/general_scripts.pory"
	delay 30
# 281 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 282 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 283 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 298 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 299 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 301 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 302 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 304 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 305 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 308 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 314 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 315 "data/scripts/general_scripts.pory"
	closemessage
# 316 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 320 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 321 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 322 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 330 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 340 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 352 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 369 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 370 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 310 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 311 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 317 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 323 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 324 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 325 "data/scripts/general_scripts.pory"
	delay 32
# 326 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 327 "data/scripts/general_scripts.pory"
	delay 32
# 328 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 329 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 331 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 332 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 333 "data/scripts/general_scripts.pory"
	delay 32
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

SlipperySlopeMain_11:
# 341 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
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
# 350 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 351 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 353 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
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
# 364 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 365 "data/scripts/general_scripts.pory"
	delay 32
# 366 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 367 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 383 "data/scripts/general_scripts.pory"
	counteggs
# 384 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 393 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 394 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 395 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 399 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 400 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 401 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 402 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 403 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 404 "data/scripts/general_scripts.pory"
	delay 32
# 406 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 407 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 408 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 409 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 410 "data/scripts/general_scripts.pory"
	delay 16
# 411 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 412 "data/scripts/general_scripts.pory"
	waitmovement 0
# 414 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 415 "data/scripts/general_scripts.pory"
	waitmovement 0
# 416 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 417 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 418 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 419 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 420 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 421 "data/scripts/general_scripts.pory"
	delay 16
# 422 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 423 "data/scripts/general_scripts.pory"
	waitmovement 0
# 425 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 426 "data/scripts/general_scripts.pory"
	waitmovement 0
# 428 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 429 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 430 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 431 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 432 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 433 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 434 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 435 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 436 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 437 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 438 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 385 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 386 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 390 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 396 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 455 "data/scripts/general_scripts.pory"
	counteggs
# 456 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 465 "data/scripts/general_scripts.pory"
	closemessage
# 466 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 467 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 468 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 469 "data/scripts/general_scripts.pory"
	delay 32
# 470 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 471 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 472 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 473 "data/scripts/general_scripts.pory"
	delay 16
# 474 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 475 "data/scripts/general_scripts.pory"
	waitmovement 0
# 477 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 478 "data/scripts/general_scripts.pory"
	waitmovement 0
# 479 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 480 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 481 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 482 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 491 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 492 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 501 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 502 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 511 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 512 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 513 "data/scripts/general_scripts.pory"
	delay 16
# 514 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 515 "data/scripts/general_scripts.pory"
	waitmovement 0
# 517 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 518 "data/scripts/general_scripts.pory"
	waitmovement 0
# 520 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 521 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 522 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 523 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 524 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 525 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 526 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 527 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 528 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 529 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 530 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 531 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 532 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 457 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 458 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 462 "data/scripts/general_scripts.pory"
	release
	end


# 535 "data/scripts/general_scripts.pory"
Walk1Up:
# 536 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 539 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 540 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 541 "data/scripts/general_scripts.pory"
	set_visible
# 542 "data/scripts/general_scripts.pory"
	jump_up
# 543 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 544 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 560 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 561 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 562 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 566 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 567 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 568 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 572 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 573 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 574 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 578 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 579 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 580 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 584 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 585 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 586 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 590 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 591 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 592 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 596 "data/scripts/general_scripts.pory"
	random 6
# 597 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 598 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 599 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 600 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 601 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 602 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 603 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 598 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 599 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 600 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 601 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 602 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 603 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 625 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 628 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 632 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 633 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 630 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 638 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 639 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY
# 640 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_2
SetYoshiMoves_1:
# 643 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_5
SetYoshiMoves_4:
# 646 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_8
SetYoshiMoves_7:
# 652 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 657 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 658 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 659 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 641 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 644 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY_STRONG
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 648 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 654 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 655 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_15
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 649 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_7

SetYoshiMoves_15:
# 655 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10


# 195 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 195 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 195 "data/scripts/general_scripts.pory"
	jump_2_right
# 195 "data/scripts/general_scripts.pory"
	delay_16
# 195 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 195 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 198 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 198 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 198 "data/scripts/general_scripts.pory"
	jump_2_left
# 198 "data/scripts/general_scripts.pory"
	delay_16
# 198 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 198 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 206 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 206 "data/scripts/general_scripts.pory"
	lock_anim
# 206 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 206 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 206 "data/scripts/general_scripts.pory"
	walk_fast_down
# 206 "data/scripts/general_scripts.pory"
	walk_fast_down
# 206 "data/scripts/general_scripts.pory"
	jump_down
# 206 "data/scripts/general_scripts.pory"
	walk_fast_down
# 206 "data/scripts/general_scripts.pory"
	walk_fast_down
# 206 "data/scripts/general_scripts.pory"
	walk_fast_down
# 206 "data/scripts/general_scripts.pory"
	walk_fast_down
# 206 "data/scripts/general_scripts.pory"
	walk_fast_down
# 206 "data/scripts/general_scripts.pory"
	unlock_anim
# 206 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 206 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 207 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 207 "data/scripts/general_scripts.pory"
	lock_anim
# 207 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 207 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
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
	walk_fast_down
# 207 "data/scripts/general_scripts.pory"
	unlock_anim
# 207 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 207 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 208 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 208 "data/scripts/general_scripts.pory"
	lock_anim
# 208 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 208 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
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
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	unlock_anim
# 208 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 208 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 250 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 250 "data/scripts/general_scripts.pory"
	set_visible
# 250 "data/scripts/general_scripts.pory"
	jump_2_right
# 250 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 253 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 253 "data/scripts/general_scripts.pory"
	set_visible
# 253 "data/scripts/general_scripts.pory"
	jump_2_left
# 253 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 323 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 323 "data/scripts/general_scripts.pory"
	walk_slow_up
# 323 "data/scripts/general_scripts.pory"
	walk_slow_up
# 323 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 331 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 331 "data/scripts/general_scripts.pory"
	walk_slow_up
# 331 "data/scripts/general_scripts.pory"
	walk_slow_up
# 331 "data/scripts/general_scripts.pory"
	walk_slow_up
# 331 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 341 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
# 341 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 353 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
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
# 353 "data/scripts/general_scripts.pory"
	walk_slow_up
# 353 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 425 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 425 "data/scripts/general_scripts.pory"
	walk_up
# 425 "data/scripts/general_scripts.pory"
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
# 393 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 591 "data/scripts/general_scripts.pory"
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
# 260 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 267 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 286 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 373 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 376 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 441 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 447 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 547 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 552 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 607 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 609 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 611 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 613 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 616 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 619 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
