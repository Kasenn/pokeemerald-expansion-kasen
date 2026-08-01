DebugScript1::
# 15 "data/scripts/general_scripts.pory"
	callnative ZeroEnemyPartyMons
# 16 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION
# 17 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 18 "data/scripts/general_scripts.pory"
	dowildbattle
	return


DebugScript2::
# 22 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 30 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 33 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 34 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 35 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 39 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 43 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 44 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 45 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 46 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 47 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 48 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 55 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 58 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 59 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 40 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 49 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 50 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 51 "data/scripts/general_scripts.pory"
	waitmoncry
# 52 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 53 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 56 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 71 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 75 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 76 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 77 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 78 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 79 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 84 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 85 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 89 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 90 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 86 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 99 "data/scripts/general_scripts.pory"
	lock
# 100 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 101 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 102 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 114 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 115 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 116 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 117 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 118 "data/scripts/general_scripts.pory"
	hidemonpic
# 119 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 120 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 125 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 126 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 127 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 128 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 129 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 129 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 136 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 137 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 138 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 140 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 104 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 105 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 106 "data/scripts/general_scripts.pory"
	waitse
# 107 "data/scripts/general_scripts.pory"
	waitmessage
# 108 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 109 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 110 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 111 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 122 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 131 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 132 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 133 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 152 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 153 "data/scripts/general_scripts.pory"
	counteggs
# 154 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 158 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 159 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 164 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 165 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 166 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 166 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 171 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 172 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 176 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 178 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 179 "data/scripts/general_scripts.pory"
	delay 32
# 180 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 181 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 185 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 187 "data/scripts/general_scripts.pory"
	delay 48
# 188 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 189 "data/scripts/general_scripts.pory"
	waitmovement 0
# 190 "data/scripts/general_scripts.pory"
	delay 30
# 191 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 192 "data/scripts/general_scripts.pory"
	waitmovement 0
# 193 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 194 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 195 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 196 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 197 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 155 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 161 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 168 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 173 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 182 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


RiverCrossing2::
	return


# 204 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 205 "data/scripts/general_scripts.pory"
	lock_anim
# 206 "data/scripts/general_scripts.pory"
	lock_facing_direction
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
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	unlock_anim
# 209 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 213 "data/scripts/general_scripts.pory"
	delay 16
# 214 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 215 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 216 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 217 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 221 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 223 "data/scripts/general_scripts.pory"
	delay 32
# 224 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 225 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 218 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 242 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 243 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 244 "data/scripts/general_scripts.pory"
	delay 15
# 245 "data/scripts/general_scripts.pory"
	waitse
# 246 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 247 "data/scripts/general_scripts.pory"
	delay 30
# 248 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 249 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 250 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 265 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 266 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 268 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 269 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 271 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 272 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 280 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 281 "data/scripts/general_scripts.pory"
	closemessage
# 282 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 286 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 287 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 288 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 289 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 290 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 292 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 293 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 294 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 276 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 277 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 283 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 287 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 288 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 289 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 290 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 307 "data/scripts/general_scripts.pory"
	counteggs
# 308 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 317 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 318 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 319 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 320 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 321 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 322 "data/scripts/general_scripts.pory"
	delay 16
# 323 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 324 "data/scripts/general_scripts.pory"
	waitmovement 0
# 326 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 327 "data/scripts/general_scripts.pory"
	waitmovement 0
# 328 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 329 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 330 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 331 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 332 "data/scripts/general_scripts.pory"
	delay 16
# 333 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 334 "data/scripts/general_scripts.pory"
	waitmovement 0
# 336 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 337 "data/scripts/general_scripts.pory"
	waitmovement 0
# 338 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 339 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 340 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 341 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 342 "data/scripts/general_scripts.pory"
	delay 16
# 343 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 344 "data/scripts/general_scripts.pory"
	waitmovement 0
# 346 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 347 "data/scripts/general_scripts.pory"
	waitmovement 0
# 348 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 349 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 350 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 351 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 360 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 361 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 362 "data/scripts/general_scripts.pory"
	delay 16
# 363 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 364 "data/scripts/general_scripts.pory"
	waitmovement 0
# 366 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 367 "data/scripts/general_scripts.pory"
	waitmovement 0
# 369 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 370 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 371 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 372 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 373 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 374 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 375 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 376 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 377 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 378 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 379 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 380 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 309 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 310 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 314 "data/scripts/general_scripts.pory"
	release
	end


# 383 "data/scripts/general_scripts.pory"
Walk1Up:
# 384 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 387 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 388 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 389 "data/scripts/general_scripts.pory"
	set_visible
# 390 "data/scripts/general_scripts.pory"
	jump_up
# 391 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 392 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 182 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
# 182 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 182 "data/scripts/general_scripts.pory"
	jump_2_right
# 182 "data/scripts/general_scripts.pory"
	delay_16
# 182 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 182 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 185 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_1:
# 185 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 185 "data/scripts/general_scripts.pory"
	jump_2_left
# 185 "data/scripts/general_scripts.pory"
	delay_16
# 185 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 185 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 218 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 218 "data/scripts/general_scripts.pory"
	set_visible
# 218 "data/scripts/general_scripts.pory"
	jump_2_right
# 218 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 221 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 221 "data/scripts/general_scripts.pory"
	set_visible
# 221 "data/scripts/general_scripts.pory"
	jump_2_left
# 221 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 287 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
# 287 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 288 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 288 "data/scripts/general_scripts.pory"
	walk_slow_up
# 288 "data/scripts/general_scripts.pory"
	walk_slow_up
# 288 "data/scripts/general_scripts.pory"
	walk_slow_up
# 288 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 289 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 289 "data/scripts/general_scripts.pory"
	walk_slow_up
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
SlipperySlopeMain_Movement_3:
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
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 366 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 366 "data/scripts/general_scripts.pory"
	walk_up
# 366 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 22 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 71 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 78 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 105 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 125 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 132 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 138 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossing1_Text_0:
# 164 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 62 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 93 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 143 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 228 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 235 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 253 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 297 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 300 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 395 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 400 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
