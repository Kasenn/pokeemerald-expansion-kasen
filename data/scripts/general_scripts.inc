DebugScript1::
# 11 "data/scripts/general_scripts.pory"
	callnative TestMonNameLength
	return


DebugScript2::
# 20 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 28 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 31 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 32 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 33 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 37 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 41 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 42 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 47 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 53 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 54 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 55 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 57 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 58 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 59 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 66 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 69 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 70 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 38 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 43 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 44 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 45 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 48 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 49 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 50 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 60 "data/scripts/general_scripts.pory"
	lockall
# 61 "data/scripts/general_scripts.pory"
	waitmoncry
# 62 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 63 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 64 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 67 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 82 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 86 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 87 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 88 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 89 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 90 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 95 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 96 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 100 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 101 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 97 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 110 "data/scripts/general_scripts.pory"
	lock
# 111 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 112 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 113 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 125 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 126 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 127 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 128 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 129 "data/scripts/general_scripts.pory"
	hidemonpic
# 130 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 131 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 136 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 137 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 138 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 139 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 140 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 140 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 147 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 148 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 149 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 151 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 115 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 116 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 117 "data/scripts/general_scripts.pory"
	waitse
# 118 "data/scripts/general_scripts.pory"
	waitmessage
# 119 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 120 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 121 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 122 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 133 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 142 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 143 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 144 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 163 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 164 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 165 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 163 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 169 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 170 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 171 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 169 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 175 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 176 "data/scripts/general_scripts.pory"
	counteggs
# 177 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 181 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 182 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 187 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 188 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 189 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 189 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 194 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 195 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 196 "data/scripts/general_scripts.pory"
	delay 32
# 197 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 198 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 202 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 204 "data/scripts/general_scripts.pory"
	delay 48
# 205 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 206 "data/scripts/general_scripts.pory"
	waitmovement 0
# 207 "data/scripts/general_scripts.pory"
	delay 30
# 208 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 209 "data/scripts/general_scripts.pory"
	waitmovement 0
# 210 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 211 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 212 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_17
# 216 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_16:
# 218 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 219 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_22
# 220 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_22
# 222 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_23
# 223 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_23
# 225 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_24
# 226 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_24
RiverCrossingMain_20:
# 229 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 230 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 231 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 232 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossingMain_2:
# 178 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 184 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 191 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 199 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_17:
# 213 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 221 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_20

RiverCrossingMain_23:
# 224 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_20

RiverCrossingMain_24:
# 227 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_20


# 235 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 236 "data/scripts/general_scripts.pory"
	lock_anim
# 237 "data/scripts/general_scripts.pory"
	lock_facing_direction
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
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	unlock_anim
# 240 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 244 "data/scripts/general_scripts.pory"
	delay 16
# 245 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 246 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 247 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 248 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 252 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 254 "data/scripts/general_scripts.pory"
	delay 32
# 255 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 256 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 249 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 273 "data/scripts/general_scripts.pory"
	lockall
# 274 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 275 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 276 "data/scripts/general_scripts.pory"
	delay 15
# 277 "data/scripts/general_scripts.pory"
	waitse
# 278 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 279 "data/scripts/general_scripts.pory"
	delay 30
# 280 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 281 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 282 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 297 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 298 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 300 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 301 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 303 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 304 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 307 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 313 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 314 "data/scripts/general_scripts.pory"
	closemessage
# 315 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 319 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 320 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 328 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 338 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 350 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 367 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 368 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 309 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 310 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 316 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 321 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 322 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 323 "data/scripts/general_scripts.pory"
	delay 32
# 324 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 325 "data/scripts/general_scripts.pory"
	delay 32
# 326 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 327 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 329 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 330 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 331 "data/scripts/general_scripts.pory"
	delay 32
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
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 339 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
# 340 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 341 "data/scripts/general_scripts.pory"
	delay 32
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

SlipperySlopeMain_12:
# 351 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
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
# 362 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 363 "data/scripts/general_scripts.pory"
	delay 32
# 364 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 365 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 381 "data/scripts/general_scripts.pory"
	counteggs
# 382 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 391 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 392 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 393 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 397 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 399 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 400 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 401 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 402 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 403 "data/scripts/general_scripts.pory"
	delay 16
# 404 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 405 "data/scripts/general_scripts.pory"
	waitmovement 0
# 407 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 408 "data/scripts/general_scripts.pory"
	waitmovement 0
# 409 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 410 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 411 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 412 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 413 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 414 "data/scripts/general_scripts.pory"
	delay 16
# 415 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 416 "data/scripts/general_scripts.pory"
	waitmovement 0
# 418 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 419 "data/scripts/general_scripts.pory"
	waitmovement 0
# 421 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 422 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 423 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 424 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 425 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 426 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 427 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 428 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 429 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 430 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
	return

MakeBerryBridge_2:
# 383 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 384 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 388 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 394 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 447 "data/scripts/general_scripts.pory"
	counteggs
# 448 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 457 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 458 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 459 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 460 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 461 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 462 "data/scripts/general_scripts.pory"
	delay 16
# 463 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 464 "data/scripts/general_scripts.pory"
	waitmovement 0
# 466 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 467 "data/scripts/general_scripts.pory"
	waitmovement 0
# 468 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 469 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 470 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 471 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 472 "data/scripts/general_scripts.pory"
	delay 16
# 473 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 474 "data/scripts/general_scripts.pory"
	waitmovement 0
# 476 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 477 "data/scripts/general_scripts.pory"
	waitmovement 0
# 478 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 479 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 480 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 481 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 482 "data/scripts/general_scripts.pory"
	delay 16
# 483 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 484 "data/scripts/general_scripts.pory"
	waitmovement 0
# 486 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 487 "data/scripts/general_scripts.pory"
	waitmovement 0
# 488 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 489 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 490 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 491 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 492 "data/scripts/general_scripts.pory"
	delay 16
# 493 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 494 "data/scripts/general_scripts.pory"
	waitmovement 0
# 496 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 497 "data/scripts/general_scripts.pory"
	waitmovement 0
# 498 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 499 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 500 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 501 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 502 "data/scripts/general_scripts.pory"
	delay 16
# 503 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 504 "data/scripts/general_scripts.pory"
	waitmovement 0
# 506 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 507 "data/scripts/general_scripts.pory"
	waitmovement 0
# 509 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 510 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 511 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 512 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 513 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 514 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 515 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 516 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 517 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 518 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 519 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 520 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 449 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 450 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 454 "data/scripts/general_scripts.pory"
	release
	end


# 523 "data/scripts/general_scripts.pory"
Walk1Up:
# 524 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 527 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 528 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 529 "data/scripts/general_scripts.pory"
	set_visible
# 530 "data/scripts/general_scripts.pory"
	jump_up
# 531 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 532 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 548 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 549 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 550 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 554 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 555 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 556 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 560 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 561 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 562 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 566 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 567 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 568 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 572 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 573 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 574 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 578 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 579 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 580 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 584 "data/scripts/general_scripts.pory"
	random 6
# 585 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 586 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 587 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 588 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 589 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 590 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 591 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 586 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 587 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 588 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 589 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 590 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 591 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 613 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 616 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 620 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 621 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 618 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 626 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 627 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY
# 628 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_2
SetYoshiMoves_1:
# 631 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_5
SetYoshiMoves_4:
# 634 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_8
SetYoshiMoves_7:
# 640 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 645 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 646 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 647 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 629 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 632 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY_STRONG
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 636 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 642 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 643 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_15
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 637 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_7

SetYoshiMoves_15:
# 643 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10


# 199 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 199 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 199 "data/scripts/general_scripts.pory"
	jump_2_right
# 199 "data/scripts/general_scripts.pory"
	delay_16
# 199 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 199 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 202 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 202 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 202 "data/scripts/general_scripts.pory"
	jump_2_left
# 202 "data/scripts/general_scripts.pory"
	delay_16
# 202 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 202 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 249 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 249 "data/scripts/general_scripts.pory"
	set_visible
# 249 "data/scripts/general_scripts.pory"
	jump_2_right
# 249 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 252 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 252 "data/scripts/general_scripts.pory"
	set_visible
# 252 "data/scripts/general_scripts.pory"
	jump_2_left
# 252 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 321 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 321 "data/scripts/general_scripts.pory"
	walk_slow_up
# 321 "data/scripts/general_scripts.pory"
	walk_slow_up
# 321 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 329 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 329 "data/scripts/general_scripts.pory"
	walk_slow_up
# 329 "data/scripts/general_scripts.pory"
	walk_slow_up
# 329 "data/scripts/general_scripts.pory"
	walk_slow_up
# 329 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 339 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 339 "data/scripts/general_scripts.pory"
	walk_slow_up
# 339 "data/scripts/general_scripts.pory"
	walk_slow_up
# 339 "data/scripts/general_scripts.pory"
	walk_slow_up
# 339 "data/scripts/general_scripts.pory"
	walk_slow_up
# 339 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 351 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
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
# 351 "data/scripts/general_scripts.pory"
	walk_slow_up
# 351 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 506 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 506 "data/scripts/general_scripts.pory"
	walk_up
# 506 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 20 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 82 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 89 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 116 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 136 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 143 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 149 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 187 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 391 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 579 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 73 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 104 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 154 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 259 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 266 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 285 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 371 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 374 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 433 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 439 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 535 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 540 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 595 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 597 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 599 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 601 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 604 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 607 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
