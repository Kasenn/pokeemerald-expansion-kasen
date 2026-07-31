DebugScript1::
# 19 "data/scripts/general_scripts.pory"
	callnative ZeroEnemyPartyMons
# 20 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION
# 21 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 22 "data/scripts/general_scripts.pory"
	dowildbattle
	return


SetupMushroom::
# 26 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 29 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 30 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 31 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 35 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 39 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 40 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 41 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 42 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 43 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 44 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 51 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 54 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 55 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 36 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 45 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 46 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 47 "data/scripts/general_scripts.pory"
	waitmoncry
# 48 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 49 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 52 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 67 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 71 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 72 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 73 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 74 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 75 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 80 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 81 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 85 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 86 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 82 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 95 "data/scripts/general_scripts.pory"
	lock
# 96 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 97 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 98 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 110 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 111 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 112 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 113 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 114 "data/scripts/general_scripts.pory"
	hidemonpic
# 115 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 116 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 121 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 122 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 123 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 124 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 125 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 125 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 132 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 133 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 134 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 136 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 100 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 101 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 102 "data/scripts/general_scripts.pory"
	waitse
# 103 "data/scripts/general_scripts.pory"
	waitmessage
# 104 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 105 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 106 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 107 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 118 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 127 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 128 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 129 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 148 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 149 "data/scripts/general_scripts.pory"
	counteggs
# 150 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 154 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 155 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 160 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 161 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 162 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 162 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 167 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 168 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 172 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 174 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 175 "data/scripts/general_scripts.pory"
	delay 32
# 176 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 177 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 181 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 183 "data/scripts/general_scripts.pory"
	delay 48
# 184 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 185 "data/scripts/general_scripts.pory"
	waitmovement 0
# 186 "data/scripts/general_scripts.pory"
	delay 30
# 187 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 188 "data/scripts/general_scripts.pory"
	waitmovement 0
# 189 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 190 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 191 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 192 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 193 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 151 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 157 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 164 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 169 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 178 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


RiverCrossing2::
	return


# 200 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 201 "data/scripts/general_scripts.pory"
	lock_anim
# 202 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 203 "data/scripts/general_scripts.pory"
	walk_fast_down
# 203 "data/scripts/general_scripts.pory"
	walk_fast_down
# 203 "data/scripts/general_scripts.pory"
	walk_fast_down
# 203 "data/scripts/general_scripts.pory"
	walk_fast_down
# 203 "data/scripts/general_scripts.pory"
	walk_fast_down
# 203 "data/scripts/general_scripts.pory"
	walk_fast_down
# 203 "data/scripts/general_scripts.pory"
	walk_fast_down
# 204 "data/scripts/general_scripts.pory"
	unlock_anim
# 205 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 209 "data/scripts/general_scripts.pory"
	delay 16
# 210 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 211 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 212 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 213 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 217 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 219 "data/scripts/general_scripts.pory"
	delay 32
# 220 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 221 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 214 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 238 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 239 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 240 "data/scripts/general_scripts.pory"
	delay 15
# 241 "data/scripts/general_scripts.pory"
	waitse
# 242 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 243 "data/scripts/general_scripts.pory"
	delay 30
# 244 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 245 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 246 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 261 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 262 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 264 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 265 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 267 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 268 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 276 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 277 "data/scripts/general_scripts.pory"
	closemessage
# 278 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 282 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 283 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 284 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 285 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 286 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 288 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 289 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 290 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 272 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 273 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 279 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 283 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 284 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 285 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 286 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 303 "data/scripts/general_scripts.pory"
	counteggs
# 304 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 313 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 314 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 315 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 316 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 317 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 318 "data/scripts/general_scripts.pory"
	delay 16
# 319 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 320 "data/scripts/general_scripts.pory"
	waitmovement 0
# 322 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 323 "data/scripts/general_scripts.pory"
	waitmovement 0
# 324 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 325 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 326 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 327 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 328 "data/scripts/general_scripts.pory"
	delay 16
# 329 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 330 "data/scripts/general_scripts.pory"
	waitmovement 0
# 332 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 333 "data/scripts/general_scripts.pory"
	waitmovement 0
# 334 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 335 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 336 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 337 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 338 "data/scripts/general_scripts.pory"
	delay 16
# 339 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 340 "data/scripts/general_scripts.pory"
	waitmovement 0
# 342 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 343 "data/scripts/general_scripts.pory"
	waitmovement 0
# 344 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 345 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 346 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 347 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 348 "data/scripts/general_scripts.pory"
	delay 16
# 349 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 350 "data/scripts/general_scripts.pory"
	waitmovement 0
# 352 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 353 "data/scripts/general_scripts.pory"
	waitmovement 0
# 354 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 355 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 356 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 357 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 358 "data/scripts/general_scripts.pory"
	delay 16
# 359 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 360 "data/scripts/general_scripts.pory"
	waitmovement 0
# 362 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 363 "data/scripts/general_scripts.pory"
	waitmovement 0
# 365 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 366 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 367 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 368 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 369 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 370 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 371 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 372 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 373 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 374 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 375 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 376 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 305 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 306 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 310 "data/scripts/general_scripts.pory"
	release
	end


# 379 "data/scripts/general_scripts.pory"
Walk1Up:
# 380 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 383 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 384 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 385 "data/scripts/general_scripts.pory"
	set_visible
# 386 "data/scripts/general_scripts.pory"
	jump_up
# 387 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 388 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 178 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
# 178 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 178 "data/scripts/general_scripts.pory"
	jump_2_right
# 178 "data/scripts/general_scripts.pory"
	delay_16
# 178 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 178 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 181 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_1:
# 181 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 181 "data/scripts/general_scripts.pory"
	jump_2_left
# 181 "data/scripts/general_scripts.pory"
	delay_16
# 181 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 181 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 214 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 214 "data/scripts/general_scripts.pory"
	set_visible
# 214 "data/scripts/general_scripts.pory"
	jump_2_right
# 214 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 217 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 217 "data/scripts/general_scripts.pory"
	set_visible
# 217 "data/scripts/general_scripts.pory"
	jump_2_left
# 217 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 283 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 283 "data/scripts/general_scripts.pory"
	walk_slow_up
# 283 "data/scripts/general_scripts.pory"
	walk_slow_up
# 283 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 284 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 284 "data/scripts/general_scripts.pory"
	walk_slow_up
# 284 "data/scripts/general_scripts.pory"
	walk_slow_up
# 284 "data/scripts/general_scripts.pory"
	walk_slow_up
# 284 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 285 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 285 "data/scripts/general_scripts.pory"
	walk_slow_up
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
SlipperySlopeMain_Movement_3:
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
# 286 "data/scripts/general_scripts.pory"
	walk_slow_up
# 286 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 362 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 362 "data/scripts/general_scripts.pory"
	walk_up
# 362 "data/scripts/general_scripts.pory"
	walk_up
	step_end

EventScript_FollowerEgg_Text_0:
# 67 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 74 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 101 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 121 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 128 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 134 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossing1_Text_0:
# 160 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 58 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 89 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 139 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 224 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 231 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 249 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 293 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 296 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 391 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 396 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
