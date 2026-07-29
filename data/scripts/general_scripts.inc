DebugScript1::
# 11 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION
# 12 "data/scripts/general_scripts.pory"
	dowildbattle
	return


SetupMushroom::
# 16 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 19 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 20 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 21 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 25 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 29 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 30 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 31 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 32 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 33 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 34 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 41 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 44 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 45 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 26 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 35 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 36 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 37 "data/scripts/general_scripts.pory"
	waitmoncry
# 38 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 39 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 42 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 57 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 61 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 62 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 63 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 64 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 65 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 70 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 71 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 75 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 76 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 72 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 85 "data/scripts/general_scripts.pory"
	lock
# 86 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 87 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 88 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 100 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 101 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 102 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 103 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 104 "data/scripts/general_scripts.pory"
	hidemonpic
# 105 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 106 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 111 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 112 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 113 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 114 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 115 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 115 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 122 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 123 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 124 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 126 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 90 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 91 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 92 "data/scripts/general_scripts.pory"
	waitse
# 93 "data/scripts/general_scripts.pory"
	waitmessage
# 94 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 95 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 96 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 97 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 108 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 117 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 118 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 119 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 138 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 139 "data/scripts/general_scripts.pory"
	counteggs
# 140 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 144 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 145 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 150 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 151 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 152 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 152 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 157 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 158 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 162 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 164 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 165 "data/scripts/general_scripts.pory"
	delay 32
# 166 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 167 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 171 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 173 "data/scripts/general_scripts.pory"
	delay 48
# 174 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 175 "data/scripts/general_scripts.pory"
	waitmovement 0
# 176 "data/scripts/general_scripts.pory"
	delay 30
# 177 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 178 "data/scripts/general_scripts.pory"
	waitmovement 0
# 179 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 180 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 181 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 182 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 183 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 141 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 147 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 154 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 159 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 168 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


RiverCrossing2::
	return


# 190 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 191 "data/scripts/general_scripts.pory"
	lock_anim
# 192 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 193 "data/scripts/general_scripts.pory"
	walk_fast_down
# 193 "data/scripts/general_scripts.pory"
	walk_fast_down
# 193 "data/scripts/general_scripts.pory"
	walk_fast_down
# 193 "data/scripts/general_scripts.pory"
	walk_fast_down
# 193 "data/scripts/general_scripts.pory"
	walk_fast_down
# 193 "data/scripts/general_scripts.pory"
	walk_fast_down
# 193 "data/scripts/general_scripts.pory"
	walk_fast_down
# 194 "data/scripts/general_scripts.pory"
	unlock_anim
# 195 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 199 "data/scripts/general_scripts.pory"
	delay 16
# 200 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 201 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 202 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 203 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 207 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 209 "data/scripts/general_scripts.pory"
	delay 32
# 210 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 211 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 204 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 228 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 229 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 230 "data/scripts/general_scripts.pory"
	delay 15
# 231 "data/scripts/general_scripts.pory"
	waitse
# 232 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 233 "data/scripts/general_scripts.pory"
	delay 30
# 234 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 235 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 236 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 251 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 252 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 254 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 255 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 257 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 258 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 266 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 267 "data/scripts/general_scripts.pory"
	closemessage
# 268 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 272 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 273 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 274 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 275 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 276 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 278 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 279 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 280 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 262 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 263 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 269 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 273 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 274 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 275 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 276 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 293 "data/scripts/general_scripts.pory"
	counteggs
# 294 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 303 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 304 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 305 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 306 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 307 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 308 "data/scripts/general_scripts.pory"
	delay 16
# 309 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 310 "data/scripts/general_scripts.pory"
	waitmovement 0
# 312 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 313 "data/scripts/general_scripts.pory"
	waitmovement 0
# 314 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 315 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 316 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 317 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 326 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 327 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 336 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 337 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 346 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 347 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 348 "data/scripts/general_scripts.pory"
	delay 16
# 349 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 350 "data/scripts/general_scripts.pory"
	waitmovement 0
# 352 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 353 "data/scripts/general_scripts.pory"
	waitmovement 0
# 355 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 356 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 357 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 358 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 359 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 360 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 361 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 362 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 363 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 364 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 365 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 366 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 295 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 296 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 300 "data/scripts/general_scripts.pory"
	release
	end


# 369 "data/scripts/general_scripts.pory"
Walk1Up:
# 370 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 373 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 374 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 375 "data/scripts/general_scripts.pory"
	set_visible
# 376 "data/scripts/general_scripts.pory"
	jump_up
# 377 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 378 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 168 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
# 168 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 168 "data/scripts/general_scripts.pory"
	jump_2_right
# 168 "data/scripts/general_scripts.pory"
	delay_16
# 168 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 168 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 171 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_1:
# 171 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 171 "data/scripts/general_scripts.pory"
	jump_2_left
# 171 "data/scripts/general_scripts.pory"
	delay_16
# 171 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 171 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 204 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 204 "data/scripts/general_scripts.pory"
	set_visible
# 204 "data/scripts/general_scripts.pory"
	jump_2_right
# 204 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 207 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 207 "data/scripts/general_scripts.pory"
	set_visible
# 207 "data/scripts/general_scripts.pory"
	jump_2_left
# 207 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 273 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 273 "data/scripts/general_scripts.pory"
	walk_slow_up
# 273 "data/scripts/general_scripts.pory"
	walk_slow_up
# 273 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 274 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 274 "data/scripts/general_scripts.pory"
	walk_slow_up
# 274 "data/scripts/general_scripts.pory"
	walk_slow_up
# 274 "data/scripts/general_scripts.pory"
	walk_slow_up
# 274 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 275 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 275 "data/scripts/general_scripts.pory"
	walk_slow_up
# 275 "data/scripts/general_scripts.pory"
	walk_slow_up
# 275 "data/scripts/general_scripts.pory"
	walk_slow_up
# 275 "data/scripts/general_scripts.pory"
	walk_slow_up
# 275 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 276 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 276 "data/scripts/general_scripts.pory"
	walk_slow_up
# 276 "data/scripts/general_scripts.pory"
	walk_slow_up
# 276 "data/scripts/general_scripts.pory"
	walk_slow_up
# 276 "data/scripts/general_scripts.pory"
	walk_slow_up
# 276 "data/scripts/general_scripts.pory"
	walk_slow_up
# 276 "data/scripts/general_scripts.pory"
	walk_slow_up
# 276 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 352 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 352 "data/scripts/general_scripts.pory"
	walk_up
# 352 "data/scripts/general_scripts.pory"
	walk_up
	step_end

EventScript_FollowerEgg_Text_0:
# 57 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 64 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 91 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 111 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 118 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 124 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossing1_Text_0:
# 150 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 48 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 79 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 129 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 214 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 221 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 239 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 283 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 286 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 381 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 386 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
