DebugScript1::
# 18 "data/scripts/general_scripts.pory"
	callnative ZeroEnemyPartyMons
# 19 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION
# 20 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 21 "data/scripts/general_scripts.pory"
	dowildbattle
	return


DebugScript2::
# 25 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 33 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 36 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 37 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 38 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 42 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 46 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 47 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 48 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 49 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 50 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 51 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 58 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 61 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 62 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 43 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 52 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 53 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 54 "data/scripts/general_scripts.pory"
	waitmoncry
# 55 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 56 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 59 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 74 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 78 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 79 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 80 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 81 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 82 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 87 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 88 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 92 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 93 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 89 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 102 "data/scripts/general_scripts.pory"
	lock
# 103 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 104 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 105 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 117 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 118 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 119 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 120 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 121 "data/scripts/general_scripts.pory"
	hidemonpic
# 122 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 123 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 128 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 129 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 130 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 131 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 132 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 132 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 139 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 140 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 141 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 143 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 107 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 108 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 109 "data/scripts/general_scripts.pory"
	waitse
# 110 "data/scripts/general_scripts.pory"
	waitmessage
# 111 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 112 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 113 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 114 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 125 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 134 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 135 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 136 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 155 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 156 "data/scripts/general_scripts.pory"
	counteggs
# 157 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 161 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 162 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 167 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 168 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 169 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 169 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 174 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 175 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 179 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 181 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 182 "data/scripts/general_scripts.pory"
	delay 32
# 183 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 184 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 188 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
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
	setobjectxy VAR_TEMP_3, 36, 66
# 198 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 199 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 200 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 158 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 164 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 171 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 176 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 185 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


RiverCrossing2::
	return


# 207 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 208 "data/scripts/general_scripts.pory"
	lock_anim
# 209 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 210 "data/scripts/general_scripts.pory"
	walk_fast_down
# 210 "data/scripts/general_scripts.pory"
	walk_fast_down
# 210 "data/scripts/general_scripts.pory"
	walk_fast_down
# 210 "data/scripts/general_scripts.pory"
	walk_fast_down
# 210 "data/scripts/general_scripts.pory"
	walk_fast_down
# 210 "data/scripts/general_scripts.pory"
	walk_fast_down
# 210 "data/scripts/general_scripts.pory"
	walk_fast_down
# 211 "data/scripts/general_scripts.pory"
	unlock_anim
# 212 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 216 "data/scripts/general_scripts.pory"
	delay 16
# 217 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 218 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 219 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 220 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 224 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 226 "data/scripts/general_scripts.pory"
	delay 32
# 227 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 228 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 221 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 245 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 246 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 247 "data/scripts/general_scripts.pory"
	delay 15
# 248 "data/scripts/general_scripts.pory"
	waitse
# 249 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 250 "data/scripts/general_scripts.pory"
	delay 30
# 251 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 252 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 253 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 268 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 269 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 271 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 272 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 274 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 275 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 283 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 284 "data/scripts/general_scripts.pory"
	closemessage
# 285 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 289 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 290 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 291 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 292 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 293 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 295 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 296 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 297 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 279 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 280 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 286 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 290 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 291 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 292 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 293 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 310 "data/scripts/general_scripts.pory"
	counteggs
# 311 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 320 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 321 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 322 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 323 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 324 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 325 "data/scripts/general_scripts.pory"
	delay 16
# 326 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 327 "data/scripts/general_scripts.pory"
	waitmovement 0
# 329 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 330 "data/scripts/general_scripts.pory"
	waitmovement 0
# 331 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 332 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 333 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 334 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 335 "data/scripts/general_scripts.pory"
	delay 16
# 336 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 337 "data/scripts/general_scripts.pory"
	waitmovement 0
# 339 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 340 "data/scripts/general_scripts.pory"
	waitmovement 0
# 341 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 342 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 343 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 344 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 345 "data/scripts/general_scripts.pory"
	delay 16
# 346 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 347 "data/scripts/general_scripts.pory"
	waitmovement 0
# 349 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 350 "data/scripts/general_scripts.pory"
	waitmovement 0
# 351 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 352 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 353 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 354 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 355 "data/scripts/general_scripts.pory"
	delay 16
# 356 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 357 "data/scripts/general_scripts.pory"
	waitmovement 0
# 359 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 360 "data/scripts/general_scripts.pory"
	waitmovement 0
# 361 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 362 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 363 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 364 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 365 "data/scripts/general_scripts.pory"
	delay 16
# 366 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 367 "data/scripts/general_scripts.pory"
	waitmovement 0
# 369 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 370 "data/scripts/general_scripts.pory"
	waitmovement 0
# 372 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 373 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 374 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 375 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 376 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 377 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 378 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 379 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 380 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 381 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 382 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 383 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 312 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 313 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 317 "data/scripts/general_scripts.pory"
	release
	end


# 386 "data/scripts/general_scripts.pory"
Walk1Up:
# 387 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 390 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 391 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 392 "data/scripts/general_scripts.pory"
	set_visible
# 393 "data/scripts/general_scripts.pory"
	jump_up
# 394 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 395 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 185 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
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
RiverCrossing1_Movement_1:
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

# 221 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 221 "data/scripts/general_scripts.pory"
	set_visible
# 221 "data/scripts/general_scripts.pory"
	jump_2_right
# 221 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 224 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 224 "data/scripts/general_scripts.pory"
	set_visible
# 224 "data/scripts/general_scripts.pory"
	jump_2_left
# 224 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 290 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
# 290 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 291 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
# 291 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 292 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 292 "data/scripts/general_scripts.pory"
	walk_slow_up
# 292 "data/scripts/general_scripts.pory"
	walk_slow_up
# 292 "data/scripts/general_scripts.pory"
	walk_slow_up
# 292 "data/scripts/general_scripts.pory"
	walk_slow_up
# 292 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 293 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 293 "data/scripts/general_scripts.pory"
	walk_slow_up
# 293 "data/scripts/general_scripts.pory"
	walk_slow_up
# 293 "data/scripts/general_scripts.pory"
	walk_slow_up
# 293 "data/scripts/general_scripts.pory"
	walk_slow_up
# 293 "data/scripts/general_scripts.pory"
	walk_slow_up
# 293 "data/scripts/general_scripts.pory"
	walk_slow_up
# 293 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 369 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 369 "data/scripts/general_scripts.pory"
	walk_up
# 369 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 25 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 74 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 81 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 108 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 128 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 135 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 141 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossing1_Text_0:
# 167 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 65 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 96 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 146 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 231 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 238 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 256 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 300 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 303 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 398 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 403 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
