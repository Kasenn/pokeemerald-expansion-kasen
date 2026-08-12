DebugScript1::
# 18 "data/scripts/general_scripts.pory"
	callnative TestSpeciesBST2
# 19 "data/scripts/general_scripts.pory"
	callnative TestSpeciesBST3
	return


DebugScript2::
# 23 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 31 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 34 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 35 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 36 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 40 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 44 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 45 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 50 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 56 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 57 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 58 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 60 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 61 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 62 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 69 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 72 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 73 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 41 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 46 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 47 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 48 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 51 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 52 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 53 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 63 "data/scripts/general_scripts.pory"
	lockall
# 64 "data/scripts/general_scripts.pory"
	waitmoncry
# 65 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 66 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 67 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 70 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 85 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 89 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 90 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 91 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 92 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 93 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 98 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 99 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 103 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 104 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 100 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 113 "data/scripts/general_scripts.pory"
	lockall
# 114 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 115 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 116 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 128 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 129 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 130 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 131 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 132 "data/scripts/general_scripts.pory"
	hidemonpic
# 133 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 134 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 139 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 140 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 141 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 142 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 143 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 144 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 144 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 151 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 152 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 153 "data/scripts/general_scripts.pory"
	delay 1
# 154 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 155 "data/scripts/general_scripts.pory"
	delay 1
# 156 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
# 157 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 158 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 160 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 118 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 119 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 120 "data/scripts/general_scripts.pory"
	waitse
# 121 "data/scripts/general_scripts.pory"
	waitmessage
# 122 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 123 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 124 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 125 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 136 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 146 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 147 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 148 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 172 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 173 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 174 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 172 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 178 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 179 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 180 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 178 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 184 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 185 "data/scripts/general_scripts.pory"
	counteggs
# 186 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 190 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 191 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 196 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 197 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 198 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 198 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 203 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 204 "data/scripts/general_scripts.pory"
	call HideEggs
# 205 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 206 "data/scripts/general_scripts.pory"
	delay 32
# 207 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 208 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 212 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 214 "data/scripts/general_scripts.pory"
	delay 48
# 215 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 216 "data/scripts/general_scripts.pory"
	waitmovement 0
# 217 "data/scripts/general_scripts.pory"
	delay 30
# 218 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 219 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 220 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 221 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 222 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 224 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 225 "data/scripts/general_scripts.pory"
	waitmovement 0
# 226 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 227 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 231 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 233 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 234 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 235 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 237 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 238 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 240 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 241 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 244 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 245 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 247 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 187 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 193 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 200 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 209 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 220 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 221 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 222 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 228 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 236 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 239 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 242 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 250 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 251 "data/scripts/general_scripts.pory"
	lock_anim
# 252 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 253 "data/scripts/general_scripts.pory"
	walk_fast_down
# 253 "data/scripts/general_scripts.pory"
	walk_fast_down
# 253 "data/scripts/general_scripts.pory"
	walk_fast_down
# 253 "data/scripts/general_scripts.pory"
	walk_fast_down
# 253 "data/scripts/general_scripts.pory"
	walk_fast_down
# 253 "data/scripts/general_scripts.pory"
	walk_fast_down
# 253 "data/scripts/general_scripts.pory"
	walk_fast_down
# 254 "data/scripts/general_scripts.pory"
	unlock_anim
# 255 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 259 "data/scripts/general_scripts.pory"
	delay 16
# 260 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 261 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 262 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 263 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 267 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 269 "data/scripts/general_scripts.pory"
	delay 32
# 270 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 271 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 264 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 288 "data/scripts/general_scripts.pory"
	lockall
# 289 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 290 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 291 "data/scripts/general_scripts.pory"
	delay 15
# 292 "data/scripts/general_scripts.pory"
	waitse
# 293 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 294 "data/scripts/general_scripts.pory"
	delay 30
# 295 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 296 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 297 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 312 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 313 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 315 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 316 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 318 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 319 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 322 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 328 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 329 "data/scripts/general_scripts.pory"
	closemessage
# 330 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 334 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 335 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 336 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 344 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 354 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 366 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 383 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 384 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 324 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 325 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 331 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 337 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 338 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 339 "data/scripts/general_scripts.pory"
	delay 32
# 340 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 341 "data/scripts/general_scripts.pory"
	delay 32
# 342 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 343 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 345 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
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

SlipperySlopeMain_11:
# 355 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
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
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 367 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
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
# 380 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 381 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 397 "data/scripts/general_scripts.pory"
	counteggs
# 398 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 407 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 408 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 409 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 413 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 414 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 415 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 416 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 417 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 418 "data/scripts/general_scripts.pory"
	delay 32
# 420 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 421 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 422 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 423 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 424 "data/scripts/general_scripts.pory"
	delay 16
# 425 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 426 "data/scripts/general_scripts.pory"
	waitmovement 0
# 428 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 429 "data/scripts/general_scripts.pory"
	waitmovement 0
# 430 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 431 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 432 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 433 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 434 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 435 "data/scripts/general_scripts.pory"
	delay 16
# 436 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 437 "data/scripts/general_scripts.pory"
	waitmovement 0
# 439 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 440 "data/scripts/general_scripts.pory"
	waitmovement 0
# 442 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 443 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 444 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 445 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 446 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 447 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 448 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 449 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 450 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 451 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 452 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 399 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 400 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 404 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 410 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 469 "data/scripts/general_scripts.pory"
	counteggs
# 470 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 479 "data/scripts/general_scripts.pory"
	closemessage
# 480 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 481 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 482 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 483 "data/scripts/general_scripts.pory"
	delay 32
# 484 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 485 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 486 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 487 "data/scripts/general_scripts.pory"
	delay 16
# 488 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 489 "data/scripts/general_scripts.pory"
	waitmovement 0
# 491 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 492 "data/scripts/general_scripts.pory"
	waitmovement 0
# 493 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 494 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 495 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 496 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 497 "data/scripts/general_scripts.pory"
	delay 16
# 498 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 499 "data/scripts/general_scripts.pory"
	waitmovement 0
# 501 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 502 "data/scripts/general_scripts.pory"
	waitmovement 0
# 503 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 504 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 505 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 506 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 507 "data/scripts/general_scripts.pory"
	delay 16
# 508 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 509 "data/scripts/general_scripts.pory"
	waitmovement 0
# 511 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 512 "data/scripts/general_scripts.pory"
	waitmovement 0
# 513 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 514 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 515 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 516 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 517 "data/scripts/general_scripts.pory"
	delay 16
# 518 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 519 "data/scripts/general_scripts.pory"
	waitmovement 0
# 521 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 522 "data/scripts/general_scripts.pory"
	waitmovement 0
# 523 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 524 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 525 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 526 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 527 "data/scripts/general_scripts.pory"
	delay 16
# 528 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 529 "data/scripts/general_scripts.pory"
	waitmovement 0
# 531 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 532 "data/scripts/general_scripts.pory"
	waitmovement 0
# 534 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 535 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 536 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 537 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 538 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 539 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 540 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 541 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 542 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 543 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 544 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 545 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 546 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 471 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 472 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 476 "data/scripts/general_scripts.pory"
	release
	end


# 549 "data/scripts/general_scripts.pory"
Walk1Up:
# 550 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 553 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 554 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 555 "data/scripts/general_scripts.pory"
	set_visible
# 556 "data/scripts/general_scripts.pory"
	jump_up
# 557 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 558 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 574 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 575 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 576 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 580 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 581 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 582 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 586 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 587 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 588 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 592 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 593 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 594 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 598 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 599 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 600 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 604 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 605 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 606 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 610 "data/scripts/general_scripts.pory"
	random 6
# 611 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 612 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 613 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 614 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 615 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 616 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 617 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 612 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 613 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 614 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 615 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 616 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 617 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 639 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 642 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 646 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 647 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 644 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 652 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 653 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 654 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 657 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 660 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 666 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 672 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 677 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 678 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 679 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 655 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 658 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 661 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 662 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 668 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 663 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 674 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 675 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 669 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 675 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 683 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 684 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 688 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 693 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 699 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 706 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 715 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 685 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 686 "data/scripts/general_scripts.pory"
	waitmovement 0
# 687 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 689 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 690 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 691 "data/scripts/general_scripts.pory"
	waitmovement 0
# 692 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 694 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 695 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 696 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 697 "data/scripts/general_scripts.pory"
	waitmovement 0
# 698 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 700 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 701 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 702 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 703 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 704 "data/scripts/general_scripts.pory"
	waitmovement 0
# 705 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 707 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 708 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 709 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 710 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 711 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 712 "data/scripts/general_scripts.pory"
	waitmovement 0
# 713 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 209 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 209 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 209 "data/scripts/general_scripts.pory"
	jump_2_right
# 209 "data/scripts/general_scripts.pory"
	delay_16
# 209 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 209 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 212 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 212 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 212 "data/scripts/general_scripts.pory"
	jump_2_left
# 212 "data/scripts/general_scripts.pory"
	delay_16
# 212 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 212 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 220 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 220 "data/scripts/general_scripts.pory"
	lock_anim
# 220 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 220 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
# 220 "data/scripts/general_scripts.pory"
	walk_fast_down
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
	unlock_anim
# 220 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 220 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 221 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 221 "data/scripts/general_scripts.pory"
	lock_anim
# 221 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 221 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 221 "data/scripts/general_scripts.pory"
	walk_fast_down
# 221 "data/scripts/general_scripts.pory"
	jump_down
# 221 "data/scripts/general_scripts.pory"
	walk_fast_down
# 221 "data/scripts/general_scripts.pory"
	walk_fast_down
# 221 "data/scripts/general_scripts.pory"
	walk_fast_down
# 221 "data/scripts/general_scripts.pory"
	walk_fast_down
# 221 "data/scripts/general_scripts.pory"
	walk_fast_down
# 221 "data/scripts/general_scripts.pory"
	walk_fast_down
# 221 "data/scripts/general_scripts.pory"
	unlock_anim
# 221 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 221 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 222 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 222 "data/scripts/general_scripts.pory"
	lock_anim
# 222 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 222 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 222 "data/scripts/general_scripts.pory"
	jump_down
# 222 "data/scripts/general_scripts.pory"
	walk_fast_down
# 222 "data/scripts/general_scripts.pory"
	walk_fast_down
# 222 "data/scripts/general_scripts.pory"
	walk_fast_down
# 222 "data/scripts/general_scripts.pory"
	walk_fast_down
# 222 "data/scripts/general_scripts.pory"
	walk_fast_down
# 222 "data/scripts/general_scripts.pory"
	walk_fast_down
# 222 "data/scripts/general_scripts.pory"
	walk_fast_down
# 222 "data/scripts/general_scripts.pory"
	unlock_anim
# 222 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 222 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 264 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 264 "data/scripts/general_scripts.pory"
	set_visible
# 264 "data/scripts/general_scripts.pory"
	jump_2_right
# 264 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 267 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 267 "data/scripts/general_scripts.pory"
	set_visible
# 267 "data/scripts/general_scripts.pory"
	jump_2_left
# 267 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 337 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 337 "data/scripts/general_scripts.pory"
	walk_slow_up
# 337 "data/scripts/general_scripts.pory"
	walk_slow_up
# 337 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 345 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 345 "data/scripts/general_scripts.pory"
	walk_slow_up
# 345 "data/scripts/general_scripts.pory"
	walk_slow_up
# 345 "data/scripts/general_scripts.pory"
	walk_slow_up
# 345 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 355 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
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

# 367 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 367 "data/scripts/general_scripts.pory"
	walk_slow_up
# 367 "data/scripts/general_scripts.pory"
	walk_slow_up
# 367 "data/scripts/general_scripts.pory"
	walk_slow_up
# 367 "data/scripts/general_scripts.pory"
	walk_slow_up
# 367 "data/scripts/general_scripts.pory"
	walk_slow_up
# 367 "data/scripts/general_scripts.pory"
	walk_slow_up
# 367 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 439 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 439 "data/scripts/general_scripts.pory"
	walk_up
# 439 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 23 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 85 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 92 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 119 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 139 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 147 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 158 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 196 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 407 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 605 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 76 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 107 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 163 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 274 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 281 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 300 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 387 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 390 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 455 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 461 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 561 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 566 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 621 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 623 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 625 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 627 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 630 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 633 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
