DebugScript1::
# 12 "data/scripts/general_scripts.pory"
	callnative ZeroEnemyPartyMons
# 13 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION
# 14 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 15 "data/scripts/general_scripts.pory"
	dowildbattle
	return


DebugScript2::
# 19 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 27 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 30 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 31 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 32 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 36 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 40 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 41 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 42 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 43 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 44 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 45 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 52 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 55 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 56 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 37 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 46 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 47 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 48 "data/scripts/general_scripts.pory"
	waitmoncry
# 49 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 50 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 53 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 68 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 72 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 73 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 74 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 75 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 76 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 81 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 82 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 86 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 87 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 83 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 96 "data/scripts/general_scripts.pory"
	lock
# 97 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 98 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 99 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 111 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 112 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 113 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 114 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 115 "data/scripts/general_scripts.pory"
	hidemonpic
# 116 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 117 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 122 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 123 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 124 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 125 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 126 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 126 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 133 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 134 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 135 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 137 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 101 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 102 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 103 "data/scripts/general_scripts.pory"
	waitse
# 104 "data/scripts/general_scripts.pory"
	waitmessage
# 105 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 106 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 107 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 108 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 119 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 128 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 129 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 130 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 149 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 150 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 151 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 149 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 155 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 156 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 157 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 155 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 161 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 162 "data/scripts/general_scripts.pory"
	counteggs
# 163 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 167 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 168 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 173 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 174 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 175 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 175 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 180 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 181 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 182 "data/scripts/general_scripts.pory"
	delay 32
# 183 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 184 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 188 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 190 "data/scripts/general_scripts.pory"
	delay 48
# 191 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 192 "data/scripts/general_scripts.pory"
	waitmovement 0
# 193 "data/scripts/general_scripts.pory"
	delay 30
# 194 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 195 "data/scripts/general_scripts.pory"
	waitmovement 0
# 196 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 197 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 198 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_17
# 202 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_16:
# 204 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 205 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_22
# 206 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_22
# 208 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_23
# 209 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_23
# 211 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_24
# 212 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_24
RiverCrossingMain_20:
# 215 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 216 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 217 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 218 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossingMain_2:
# 164 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 170 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 177 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 185 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_17:
# 199 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 207 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_20

RiverCrossingMain_23:
# 210 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_20

RiverCrossingMain_24:
# 213 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_20


# 221 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 222 "data/scripts/general_scripts.pory"
	lock_anim
# 223 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 224 "data/scripts/general_scripts.pory"
	walk_fast_down
# 224 "data/scripts/general_scripts.pory"
	walk_fast_down
# 224 "data/scripts/general_scripts.pory"
	walk_fast_down
# 224 "data/scripts/general_scripts.pory"
	walk_fast_down
# 224 "data/scripts/general_scripts.pory"
	walk_fast_down
# 224 "data/scripts/general_scripts.pory"
	walk_fast_down
# 224 "data/scripts/general_scripts.pory"
	walk_fast_down
# 225 "data/scripts/general_scripts.pory"
	unlock_anim
# 226 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 230 "data/scripts/general_scripts.pory"
	delay 16
# 231 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 232 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 233 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 234 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 238 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 240 "data/scripts/general_scripts.pory"
	delay 32
# 241 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 242 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 235 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 259 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 260 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 261 "data/scripts/general_scripts.pory"
	delay 15
# 262 "data/scripts/general_scripts.pory"
	waitse
# 263 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 264 "data/scripts/general_scripts.pory"
	delay 30
# 265 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 266 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 267 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 282 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 283 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 285 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 286 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 288 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 289 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 297 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 298 "data/scripts/general_scripts.pory"
	closemessage
# 299 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 303 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 304 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 305 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 306 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 307 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 309 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 310 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 311 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 293 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 294 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 300 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 304 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 305 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 306 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 307 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 324 "data/scripts/general_scripts.pory"
	counteggs
# 325 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 334 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 335 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 336 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 337 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 338 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 339 "data/scripts/general_scripts.pory"
	delay 16
# 340 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 341 "data/scripts/general_scripts.pory"
	waitmovement 0
# 343 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 344 "data/scripts/general_scripts.pory"
	waitmovement 0
# 345 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 346 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 347 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 348 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 349 "data/scripts/general_scripts.pory"
	delay 16
# 350 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 351 "data/scripts/general_scripts.pory"
	waitmovement 0
# 353 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 354 "data/scripts/general_scripts.pory"
	waitmovement 0
# 355 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 356 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 357 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 358 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 359 "data/scripts/general_scripts.pory"
	delay 16
# 360 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 361 "data/scripts/general_scripts.pory"
	waitmovement 0
# 363 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 364 "data/scripts/general_scripts.pory"
	waitmovement 0
# 365 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 366 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 367 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 368 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 369 "data/scripts/general_scripts.pory"
	delay 16
# 370 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 371 "data/scripts/general_scripts.pory"
	waitmovement 0
# 373 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 374 "data/scripts/general_scripts.pory"
	waitmovement 0
# 375 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 376 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 377 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 378 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 379 "data/scripts/general_scripts.pory"
	delay 16
# 380 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 381 "data/scripts/general_scripts.pory"
	waitmovement 0
# 383 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 384 "data/scripts/general_scripts.pory"
	waitmovement 0
# 386 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 387 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 388 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 389 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 390 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 391 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 392 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 393 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 394 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 395 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 396 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 397 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 326 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 327 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 331 "data/scripts/general_scripts.pory"
	release
	end


# 400 "data/scripts/general_scripts.pory"
Walk1Up:
# 401 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 404 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 405 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 406 "data/scripts/general_scripts.pory"
	set_visible
# 407 "data/scripts/general_scripts.pory"
	jump_up
# 408 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 409 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 185 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 185 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 185 "data/scripts/general_scripts.pory"
	jump_2_right
# 185 "data/scripts/general_scripts.pory"
	delay_16
# 185 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 185 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 188 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 188 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 188 "data/scripts/general_scripts.pory"
	jump_2_left
# 188 "data/scripts/general_scripts.pory"
	delay_16
# 188 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 188 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 235 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 235 "data/scripts/general_scripts.pory"
	set_visible
# 235 "data/scripts/general_scripts.pory"
	jump_2_right
# 235 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 238 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 238 "data/scripts/general_scripts.pory"
	set_visible
# 238 "data/scripts/general_scripts.pory"
	jump_2_left
# 238 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 304 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 304 "data/scripts/general_scripts.pory"
	walk_slow_up
# 304 "data/scripts/general_scripts.pory"
	walk_slow_up
# 304 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 305 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 305 "data/scripts/general_scripts.pory"
	walk_slow_up
# 305 "data/scripts/general_scripts.pory"
	walk_slow_up
# 305 "data/scripts/general_scripts.pory"
	walk_slow_up
# 305 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 306 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 306 "data/scripts/general_scripts.pory"
	walk_slow_up
# 306 "data/scripts/general_scripts.pory"
	walk_slow_up
# 306 "data/scripts/general_scripts.pory"
	walk_slow_up
# 306 "data/scripts/general_scripts.pory"
	walk_slow_up
# 306 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 307 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 307 "data/scripts/general_scripts.pory"
	walk_slow_up
# 307 "data/scripts/general_scripts.pory"
	walk_slow_up
# 307 "data/scripts/general_scripts.pory"
	walk_slow_up
# 307 "data/scripts/general_scripts.pory"
	walk_slow_up
# 307 "data/scripts/general_scripts.pory"
	walk_slow_up
# 307 "data/scripts/general_scripts.pory"
	walk_slow_up
# 307 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 383 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 383 "data/scripts/general_scripts.pory"
	walk_up
# 383 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 19 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 68 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 75 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 102 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 122 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 129 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 135 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 173 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 59 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 90 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 140 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 245 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 252 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 270 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 314 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 317 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 412 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 417 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
