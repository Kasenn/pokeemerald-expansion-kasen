DebugScript1::
# 20 "data/scripts/general_scripts.pory"
	callnative ZeroEnemyPartyMons
# 21 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION
# 22 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 23 "data/scripts/general_scripts.pory"
	dowildbattle
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
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 150 "data/scripts/general_scripts.pory"
	counteggs
# 151 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 155 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 156 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 161 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 162 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 163 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 163 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 168 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 169 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 173 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 175 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 176 "data/scripts/general_scripts.pory"
	delay 32
# 177 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 178 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 182 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 184 "data/scripts/general_scripts.pory"
	delay 48
# 185 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 186 "data/scripts/general_scripts.pory"
	waitmovement 0
# 187 "data/scripts/general_scripts.pory"
	delay 30
# 188 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 189 "data/scripts/general_scripts.pory"
	waitmovement 0
# 190 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 191 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 192 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 193 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 194 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 152 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 158 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 165 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 170 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 179 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


RiverCrossing2::
	return


# 201 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 202 "data/scripts/general_scripts.pory"
	lock_anim
# 203 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 204 "data/scripts/general_scripts.pory"
	walk_fast_down
# 204 "data/scripts/general_scripts.pory"
	walk_fast_down
# 204 "data/scripts/general_scripts.pory"
	walk_fast_down
# 204 "data/scripts/general_scripts.pory"
	walk_fast_down
# 204 "data/scripts/general_scripts.pory"
	walk_fast_down
# 204 "data/scripts/general_scripts.pory"
	walk_fast_down
# 204 "data/scripts/general_scripts.pory"
	walk_fast_down
# 205 "data/scripts/general_scripts.pory"
	unlock_anim
# 206 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 210 "data/scripts/general_scripts.pory"
	delay 16
# 211 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 212 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 213 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 214 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 218 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 220 "data/scripts/general_scripts.pory"
	delay 32
# 221 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 222 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 215 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 239 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 240 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 241 "data/scripts/general_scripts.pory"
	delay 15
# 242 "data/scripts/general_scripts.pory"
	waitse
# 243 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 244 "data/scripts/general_scripts.pory"
	delay 30
# 245 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 246 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 247 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 262 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 263 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 265 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 266 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 268 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 269 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 277 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 278 "data/scripts/general_scripts.pory"
	closemessage
# 279 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 283 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 284 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 285 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 286 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 287 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 289 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 290 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 291 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 273 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 274 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 280 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 284 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 285 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 286 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 287 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 304 "data/scripts/general_scripts.pory"
	counteggs
# 305 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 314 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 315 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 316 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 317 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 318 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 319 "data/scripts/general_scripts.pory"
	delay 16
# 320 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 321 "data/scripts/general_scripts.pory"
	waitmovement 0
# 323 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 324 "data/scripts/general_scripts.pory"
	waitmovement 0
# 325 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 326 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 327 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 328 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 329 "data/scripts/general_scripts.pory"
	delay 16
# 330 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 331 "data/scripts/general_scripts.pory"
	waitmovement 0
# 333 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 334 "data/scripts/general_scripts.pory"
	waitmovement 0
# 335 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 336 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 337 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 338 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 347 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 348 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 357 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 358 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 359 "data/scripts/general_scripts.pory"
	delay 16
# 360 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 361 "data/scripts/general_scripts.pory"
	waitmovement 0
# 363 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 364 "data/scripts/general_scripts.pory"
	waitmovement 0
# 366 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 367 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 368 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 369 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 370 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 371 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 372 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 373 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 374 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 375 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 376 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 377 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 306 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 307 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 311 "data/scripts/general_scripts.pory"
	release
	end


# 380 "data/scripts/general_scripts.pory"
Walk1Up:
# 381 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 384 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 385 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 386 "data/scripts/general_scripts.pory"
	set_visible
# 387 "data/scripts/general_scripts.pory"
	jump_up
# 388 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 389 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 179 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
# 179 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 179 "data/scripts/general_scripts.pory"
	jump_2_right
# 179 "data/scripts/general_scripts.pory"
	delay_16
# 179 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 179 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 182 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_1:
# 182 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 182 "data/scripts/general_scripts.pory"
	jump_2_left
# 182 "data/scripts/general_scripts.pory"
	delay_16
# 182 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 182 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 215 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 215 "data/scripts/general_scripts.pory"
	set_visible
# 215 "data/scripts/general_scripts.pory"
	jump_2_right
# 215 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 218 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 218 "data/scripts/general_scripts.pory"
	set_visible
# 218 "data/scripts/general_scripts.pory"
	jump_2_left
# 218 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 284 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 284 "data/scripts/general_scripts.pory"
	walk_slow_up
# 284 "data/scripts/general_scripts.pory"
	walk_slow_up
# 284 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 285 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 285 "data/scripts/general_scripts.pory"
	walk_slow_up
# 285 "data/scripts/general_scripts.pory"
	walk_slow_up
# 285 "data/scripts/general_scripts.pory"
	walk_slow_up
# 285 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 286 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 286 "data/scripts/general_scripts.pory"
	walk_slow_up
# 286 "data/scripts/general_scripts.pory"
	walk_slow_up
# 286 "data/scripts/general_scripts.pory"
	walk_slow_up
# 286 "data/scripts/general_scripts.pory"
	walk_slow_up
# 286 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 287 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 363 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 363 "data/scripts/general_scripts.pory"
	walk_up
# 363 "data/scripts/general_scripts.pory"
	walk_up
	step_end

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

RiverCrossing1_Text_0:
# 161 "data/scripts/general_scripts.pory"
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
# 225 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 232 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 250 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 294 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 297 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 392 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 397 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
