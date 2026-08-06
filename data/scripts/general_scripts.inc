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
# 65 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 68 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 69 "data/scripts/general_scripts.pory"
	release
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
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 60 "data/scripts/general_scripts.pory"
	waitmoncry
# 61 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 62 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 63 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 66 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 81 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 85 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 86 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 87 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 88 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 89 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 94 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 95 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 99 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 100 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 96 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 109 "data/scripts/general_scripts.pory"
	lock
# 110 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 111 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 112 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 124 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 125 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 126 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 127 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 128 "data/scripts/general_scripts.pory"
	hidemonpic
# 129 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 130 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 135 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 136 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 137 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 138 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 139 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 139 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 146 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 147 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 148 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 150 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 114 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 115 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 116 "data/scripts/general_scripts.pory"
	waitse
# 117 "data/scripts/general_scripts.pory"
	waitmessage
# 118 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 119 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 120 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 121 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 132 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 141 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 142 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 143 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 162 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 163 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 164 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 162 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 168 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 169 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 170 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 168 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 174 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 175 "data/scripts/general_scripts.pory"
	counteggs
# 176 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 180 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 181 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 186 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 187 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 188 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 188 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 193 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 194 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 195 "data/scripts/general_scripts.pory"
	delay 32
# 196 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 197 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 201 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 203 "data/scripts/general_scripts.pory"
	delay 48
# 204 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 205 "data/scripts/general_scripts.pory"
	waitmovement 0
# 206 "data/scripts/general_scripts.pory"
	delay 30
# 207 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 208 "data/scripts/general_scripts.pory"
	waitmovement 0
# 209 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 210 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 211 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_17
# 215 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_16:
# 217 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 218 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_22
# 219 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_22
# 221 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_23
# 222 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_23
# 224 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_24
# 225 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_24
RiverCrossingMain_20:
# 228 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 229 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 230 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 231 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossingMain_2:
# 177 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 183 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 190 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 198 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_17:
# 212 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 220 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_20

RiverCrossingMain_23:
# 223 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_20

RiverCrossingMain_24:
# 226 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_20


# 234 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 235 "data/scripts/general_scripts.pory"
	lock_anim
# 236 "data/scripts/general_scripts.pory"
	lock_facing_direction
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
	walk_fast_down
# 237 "data/scripts/general_scripts.pory"
	walk_fast_down
# 238 "data/scripts/general_scripts.pory"
	unlock_anim
# 239 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 243 "data/scripts/general_scripts.pory"
	delay 16
# 244 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 245 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 246 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 247 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 251 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 253 "data/scripts/general_scripts.pory"
	delay 32
# 254 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 255 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 248 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 272 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 273 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 274 "data/scripts/general_scripts.pory"
	delay 15
# 275 "data/scripts/general_scripts.pory"
	waitse
# 276 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 277 "data/scripts/general_scripts.pory"
	delay 30
# 278 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 279 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 280 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 295 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 296 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 298 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 299 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 301 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 302 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 310 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 311 "data/scripts/general_scripts.pory"
	closemessage
# 312 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 316 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 317 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 318 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 319 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 320 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 322 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 323 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 324 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 306 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 307 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 313 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 317 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 318 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 319 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 320 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 337 "data/scripts/general_scripts.pory"
	counteggs
# 338 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 347 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 348 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 349 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 350 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 351 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 352 "data/scripts/general_scripts.pory"
	delay 16
# 353 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 354 "data/scripts/general_scripts.pory"
	waitmovement 0
# 356 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 357 "data/scripts/general_scripts.pory"
	waitmovement 0
# 358 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 359 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 360 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 361 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 362 "data/scripts/general_scripts.pory"
	delay 16
# 363 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 364 "data/scripts/general_scripts.pory"
	waitmovement 0
# 366 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 367 "data/scripts/general_scripts.pory"
	waitmovement 0
# 368 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 369 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 370 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 371 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 372 "data/scripts/general_scripts.pory"
	delay 16
# 373 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 374 "data/scripts/general_scripts.pory"
	waitmovement 0
# 376 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 377 "data/scripts/general_scripts.pory"
	waitmovement 0
# 378 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 379 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 380 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 381 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 382 "data/scripts/general_scripts.pory"
	delay 16
# 383 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 384 "data/scripts/general_scripts.pory"
	waitmovement 0
# 386 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 387 "data/scripts/general_scripts.pory"
	waitmovement 0
# 388 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 389 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 390 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 391 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 392 "data/scripts/general_scripts.pory"
	delay 16
# 393 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 394 "data/scripts/general_scripts.pory"
	waitmovement 0
# 396 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 397 "data/scripts/general_scripts.pory"
	waitmovement 0
# 399 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 400 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 401 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 402 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 403 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 404 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 405 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 406 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 407 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 408 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 409 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 410 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 339 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 340 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 344 "data/scripts/general_scripts.pory"
	release
	end


# 413 "data/scripts/general_scripts.pory"
Walk1Up:
# 414 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 417 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 418 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 419 "data/scripts/general_scripts.pory"
	set_visible
# 420 "data/scripts/general_scripts.pory"
	jump_up
# 421 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 422 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 438 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 439 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 440 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 444 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 445 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 446 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 450 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 451 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 452 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 456 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 457 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 458 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 462 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 463 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 464 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 468 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 469 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 470 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 474 "data/scripts/general_scripts.pory"
	random 6
# 475 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 476 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 477 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 478 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 479 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 480 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 481 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 476 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 477 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 478 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 479 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 480 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 481 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 503 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 506 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 510 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 511 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 508 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 516 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 517 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY
# 518 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_2
SetYoshiMoves_1:
# 522 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_5
SetYoshiMoves_4:
# 528 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_8
SetYoshiMoves_7:
# 533 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 534 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
	return

SetYoshiMoves_2:
# 519 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
# 520 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY_STRONG
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 524 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_10
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 530 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 531 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_12
	goto SetYoshiMoves_7

SetYoshiMoves_10:
# 525 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_4

SetYoshiMoves_12:
# 531 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_7


# 198 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 198 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 198 "data/scripts/general_scripts.pory"
	jump_2_right
# 198 "data/scripts/general_scripts.pory"
	delay_16
# 198 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 198 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 201 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 201 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 201 "data/scripts/general_scripts.pory"
	jump_2_left
# 201 "data/scripts/general_scripts.pory"
	delay_16
# 201 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 201 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 248 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 248 "data/scripts/general_scripts.pory"
	set_visible
# 248 "data/scripts/general_scripts.pory"
	jump_2_right
# 248 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 251 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 251 "data/scripts/general_scripts.pory"
	set_visible
# 251 "data/scripts/general_scripts.pory"
	jump_2_left
# 251 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 317 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 317 "data/scripts/general_scripts.pory"
	walk_slow_up
# 317 "data/scripts/general_scripts.pory"
	walk_slow_up
# 317 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 318 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 318 "data/scripts/general_scripts.pory"
	walk_slow_up
# 318 "data/scripts/general_scripts.pory"
	walk_slow_up
# 318 "data/scripts/general_scripts.pory"
	walk_slow_up
# 318 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 319 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 319 "data/scripts/general_scripts.pory"
	walk_slow_up
# 319 "data/scripts/general_scripts.pory"
	walk_slow_up
# 319 "data/scripts/general_scripts.pory"
	walk_slow_up
# 319 "data/scripts/general_scripts.pory"
	walk_slow_up
# 319 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 320 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 320 "data/scripts/general_scripts.pory"
	walk_slow_up
# 320 "data/scripts/general_scripts.pory"
	walk_slow_up
# 320 "data/scripts/general_scripts.pory"
	walk_slow_up
# 320 "data/scripts/general_scripts.pory"
	walk_slow_up
# 320 "data/scripts/general_scripts.pory"
	walk_slow_up
# 320 "data/scripts/general_scripts.pory"
	walk_slow_up
# 320 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 396 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 396 "data/scripts/general_scripts.pory"
	walk_up
# 396 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 20 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 81 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 88 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 115 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 135 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 142 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 148 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 186 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

FollowerMainScript_Text_0:
# 469 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 72 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 103 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 153 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 258 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 265 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 283 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 327 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 330 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 425 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 430 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 485 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 487 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 489 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 491 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 494 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 497 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
