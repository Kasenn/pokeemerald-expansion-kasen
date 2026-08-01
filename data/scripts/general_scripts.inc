DebugScript1::
# 16 "data/scripts/general_scripts.pory"
	callnative ZeroEnemyPartyMons
# 17 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION
# 18 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 19 "data/scripts/general_scripts.pory"
	dowildbattle
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
	removeobject LOCALID_SUPER_MUSHROOM
# 46 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 47 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 48 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 49 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 56 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 59 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 60 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 41 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 50 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 51 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 52 "data/scripts/general_scripts.pory"
	waitmoncry
# 53 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 54 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 57 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 72 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 76 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 77 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 78 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 79 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 80 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 85 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 86 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 90 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 91 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 87 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 100 "data/scripts/general_scripts.pory"
	lock
# 101 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 102 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 103 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 115 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 116 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 117 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 118 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 119 "data/scripts/general_scripts.pory"
	hidemonpic
# 120 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 121 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 126 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 127 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 128 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 129 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 130 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 130 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 137 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 138 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 139 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 141 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 105 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 106 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 107 "data/scripts/general_scripts.pory"
	waitse
# 108 "data/scripts/general_scripts.pory"
	waitmessage
# 109 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 110 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 111 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 112 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 123 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 132 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 133 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 134 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 153 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 154 "data/scripts/general_scripts.pory"
	counteggs
# 155 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 159 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 160 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 165 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 166 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 167 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 167 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 172 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 173 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 177 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 179 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 180 "data/scripts/general_scripts.pory"
	delay 32
# 181 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 182 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 186 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 188 "data/scripts/general_scripts.pory"
	delay 48
# 189 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 190 "data/scripts/general_scripts.pory"
	waitmovement 0
# 191 "data/scripts/general_scripts.pory"
	delay 30
# 192 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 193 "data/scripts/general_scripts.pory"
	waitmovement 0
# 194 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 195 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 196 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 197 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 198 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 156 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 162 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 169 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 174 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 183 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


RiverCrossing2::
	return


# 205 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 206 "data/scripts/general_scripts.pory"
	lock_anim
# 207 "data/scripts/general_scripts.pory"
	lock_facing_direction
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
# 209 "data/scripts/general_scripts.pory"
	unlock_anim
# 210 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 214 "data/scripts/general_scripts.pory"
	delay 16
# 215 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 216 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 217 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 218 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 222 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 224 "data/scripts/general_scripts.pory"
	delay 32
# 225 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 226 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 219 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 243 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 244 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 245 "data/scripts/general_scripts.pory"
	delay 15
# 246 "data/scripts/general_scripts.pory"
	waitse
# 247 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 248 "data/scripts/general_scripts.pory"
	delay 30
# 249 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 250 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 251 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 266 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 267 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 269 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 270 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 272 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 273 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 281 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 282 "data/scripts/general_scripts.pory"
	closemessage
# 283 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 287 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 288 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 289 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 290 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 291 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 293 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 294 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 295 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 277 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 278 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 284 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 288 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 289 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 290 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 291 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 308 "data/scripts/general_scripts.pory"
	counteggs
# 309 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 318 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 319 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 320 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 321 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 322 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 323 "data/scripts/general_scripts.pory"
	delay 16
# 324 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 325 "data/scripts/general_scripts.pory"
	waitmovement 0
# 327 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 328 "data/scripts/general_scripts.pory"
	waitmovement 0
# 329 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 330 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 331 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 332 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 333 "data/scripts/general_scripts.pory"
	delay 16
# 334 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 335 "data/scripts/general_scripts.pory"
	waitmovement 0
# 337 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 338 "data/scripts/general_scripts.pory"
	waitmovement 0
# 339 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 340 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 341 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 342 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 343 "data/scripts/general_scripts.pory"
	delay 16
# 344 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 345 "data/scripts/general_scripts.pory"
	waitmovement 0
# 347 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 348 "data/scripts/general_scripts.pory"
	waitmovement 0
# 349 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 350 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 351 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 352 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 353 "data/scripts/general_scripts.pory"
	delay 16
# 354 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 355 "data/scripts/general_scripts.pory"
	waitmovement 0
# 357 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 358 "data/scripts/general_scripts.pory"
	waitmovement 0
# 359 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 360 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 361 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 362 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 363 "data/scripts/general_scripts.pory"
	delay 16
# 364 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 365 "data/scripts/general_scripts.pory"
	waitmovement 0
# 367 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 368 "data/scripts/general_scripts.pory"
	waitmovement 0
# 370 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 371 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 372 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 373 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 374 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 375 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 376 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 377 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 378 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 379 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 380 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 381 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 310 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 311 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 315 "data/scripts/general_scripts.pory"
	release
	end


# 384 "data/scripts/general_scripts.pory"
Walk1Up:
# 385 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 388 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 389 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 390 "data/scripts/general_scripts.pory"
	set_visible
# 391 "data/scripts/general_scripts.pory"
	jump_up
# 392 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 393 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 183 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
# 183 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 183 "data/scripts/general_scripts.pory"
	jump_2_right
# 183 "data/scripts/general_scripts.pory"
	delay_16
# 183 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 183 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 186 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_1:
# 186 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 186 "data/scripts/general_scripts.pory"
	jump_2_left
# 186 "data/scripts/general_scripts.pory"
	delay_16
# 186 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 186 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 219 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 219 "data/scripts/general_scripts.pory"
	set_visible
# 219 "data/scripts/general_scripts.pory"
	jump_2_right
# 219 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 222 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 222 "data/scripts/general_scripts.pory"
	set_visible
# 222 "data/scripts/general_scripts.pory"
	jump_2_left
# 222 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 288 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 288 "data/scripts/general_scripts.pory"
	walk_slow_up
# 288 "data/scripts/general_scripts.pory"
	walk_slow_up
# 288 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 289 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 289 "data/scripts/general_scripts.pory"
	walk_slow_up
# 289 "data/scripts/general_scripts.pory"
	walk_slow_up
# 289 "data/scripts/general_scripts.pory"
	walk_slow_up
# 289 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 290 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 291 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 367 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 367 "data/scripts/general_scripts.pory"
	walk_up
# 367 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 23 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 72 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 79 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 106 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 126 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 133 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 139 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossing1_Text_0:
# 165 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 63 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 94 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 144 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 229 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 236 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 254 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 298 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 301 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 396 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 401 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
