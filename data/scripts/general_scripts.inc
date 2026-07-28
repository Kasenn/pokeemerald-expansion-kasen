DebugScript1::
# 11 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROCKPLATE_1
# 12 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ROCKPLATE_2
# 13 "data/scripts/general_scripts.pory"
	msgbox DebugScript1_Text_0
	return


SetupMushroom::
# 17 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 20 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 21 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 22 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 26 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 30 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 31 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 32 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 33 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 34 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 35 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 42 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 45 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 46 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 27 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 36 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 37 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 38 "data/scripts/general_scripts.pory"
	waitmoncry
# 39 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 40 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 43 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 58 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 62 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 63 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 64 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 65 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 66 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 71 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 72 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 76 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 77 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 73 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 86 "data/scripts/general_scripts.pory"
	lock
# 87 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 88 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 89 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 101 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 102 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 103 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 104 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 105 "data/scripts/general_scripts.pory"
	hidemonpic
# 106 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 107 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 112 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 113 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 114 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 115 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 116 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 116 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 123 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 124 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 125 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 127 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 91 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 92 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 93 "data/scripts/general_scripts.pory"
	waitse
# 94 "data/scripts/general_scripts.pory"
	waitmessage
# 95 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 96 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 97 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 98 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 109 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 118 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 119 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 120 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 139 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 140 "data/scripts/general_scripts.pory"
	counteggs
# 141 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 145 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 146 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 151 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 152 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 153 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 153 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 158 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 159 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 163 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 165 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 166 "data/scripts/general_scripts.pory"
	delay 32
# 167 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 168 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 172 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 174 "data/scripts/general_scripts.pory"
	delay 48
# 175 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 176 "data/scripts/general_scripts.pory"
	waitmovement 0
# 177 "data/scripts/general_scripts.pory"
	delay 30
# 178 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 179 "data/scripts/general_scripts.pory"
	waitmovement 0
# 180 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 181 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 182 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 183 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 184 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 142 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 148 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 155 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 160 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 169 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


RiverCrossing2::
	return


# 191 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 192 "data/scripts/general_scripts.pory"
	lock_anim
# 193 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 194 "data/scripts/general_scripts.pory"
	walk_fast_down
# 194 "data/scripts/general_scripts.pory"
	walk_fast_down
# 194 "data/scripts/general_scripts.pory"
	walk_fast_down
# 194 "data/scripts/general_scripts.pory"
	walk_fast_down
# 194 "data/scripts/general_scripts.pory"
	walk_fast_down
# 194 "data/scripts/general_scripts.pory"
	walk_fast_down
# 194 "data/scripts/general_scripts.pory"
	walk_fast_down
# 195 "data/scripts/general_scripts.pory"
	unlock_anim
# 196 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 200 "data/scripts/general_scripts.pory"
	delay 16
# 201 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 202 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 203 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 204 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 208 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 210 "data/scripts/general_scripts.pory"
	delay 32
# 211 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 212 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 205 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 229 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 230 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 231 "data/scripts/general_scripts.pory"
	delay 15
# 232 "data/scripts/general_scripts.pory"
	waitse
# 233 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 234 "data/scripts/general_scripts.pory"
	delay 30
# 235 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 236 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 237 "data/scripts/general_scripts.pory"
	release
	return


SlipperySlope2::
# 252 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 253 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 255 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 256 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 258 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 259 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 267 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 268 "data/scripts/general_scripts.pory"
	closemessage
# 269 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 273 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 274 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 275 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 276 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 277 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 279 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 280 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 281 "data/scripts/general_scripts.pory"
	release
	return

SlipperySlopeMain_2:
# 263 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 264 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 270 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 274 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 275 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 276 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 277 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
	goto SlipperySlopeMain_7


MakeEggBridge::
# 294 "data/scripts/general_scripts.pory"
	counteggs
# 295 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 304 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 305 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 306 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 307 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 308 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 309 "data/scripts/general_scripts.pory"
	delay 16
# 310 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 311 "data/scripts/general_scripts.pory"
	waitmovement 0
# 313 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 314 "data/scripts/general_scripts.pory"
	waitmovement 0
# 315 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 316 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 317 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 318 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 327 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 328 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 337 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 338 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 347 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 348 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 349 "data/scripts/general_scripts.pory"
	delay 16
# 350 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 351 "data/scripts/general_scripts.pory"
	waitmovement 0
# 353 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeEggBridge_Movement_0
# 354 "data/scripts/general_scripts.pory"
	waitmovement 0
# 356 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 357 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 358 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 359 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 360 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
# 361 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 362 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 363 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 364 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 365 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 366 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 367 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
	return

MakeEggBridge_2:
# 296 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 297 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 301 "data/scripts/general_scripts.pory"
	release
	end


# 370 "data/scripts/general_scripts.pory"
Walk1Up:
# 371 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 374 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 375 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 376 "data/scripts/general_scripts.pory"
	set_visible
# 377 "data/scripts/general_scripts.pory"
	jump_up
# 378 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 379 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 169 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
# 169 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 169 "data/scripts/general_scripts.pory"
	jump_2_right
# 169 "data/scripts/general_scripts.pory"
	delay_16
# 169 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 169 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 172 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_1:
# 172 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 172 "data/scripts/general_scripts.pory"
	jump_2_left
# 172 "data/scripts/general_scripts.pory"
	delay_16
# 172 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 172 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 205 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 205 "data/scripts/general_scripts.pory"
	set_visible
# 205 "data/scripts/general_scripts.pory"
	jump_2_right
# 205 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 208 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 208 "data/scripts/general_scripts.pory"
	set_visible
# 208 "data/scripts/general_scripts.pory"
	jump_2_left
# 208 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 274 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 274 "data/scripts/general_scripts.pory"
	walk_slow_up
# 274 "data/scripts/general_scripts.pory"
	walk_slow_up
# 274 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 275 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
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
SlipperySlopeMain_Movement_2:
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

# 277 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 277 "data/scripts/general_scripts.pory"
	walk_slow_up
# 277 "data/scripts/general_scripts.pory"
	walk_slow_up
# 277 "data/scripts/general_scripts.pory"
	walk_slow_up
# 277 "data/scripts/general_scripts.pory"
	walk_slow_up
# 277 "data/scripts/general_scripts.pory"
	walk_slow_up
# 277 "data/scripts/general_scripts.pory"
	walk_slow_up
# 277 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 353 "data/scripts/general_scripts.pory"
MakeEggBridge_Movement_0:
# 353 "data/scripts/general_scripts.pory"
	walk_up
# 353 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript1_Text_0:
# 13 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}\n{STR_VAR_2}$"

EventScript_FollowerEgg_Text_0:
# 58 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 65 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 92 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 112 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 119 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 125 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossing1_Text_0:
# 151 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 49 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 80 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 130 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 215 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 222 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 240 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 284 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 287 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeEggBridge_Text::
# 382 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 387 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"
