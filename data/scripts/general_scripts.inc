DebugScript1::
# 16 "data/scripts/general_scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, 5, move1 = MOVE_ILLUSION, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE
# 17 "data/scripts/general_scripts.pory"
	dowildbattle
	return


DebugScript2::
# 21 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 29 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 32 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 33 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 34 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 38 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 42 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 43 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 48 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 54 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 55 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 56 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 58 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 59 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 60 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 67 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 70 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 71 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 39 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 44 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 45 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 46 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 49 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 50 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 51 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 61 "data/scripts/general_scripts.pory"
	lockall
# 62 "data/scripts/general_scripts.pory"
	waitmoncry
# 63 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 64 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 65 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 68 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 83 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 87 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 88 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 89 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 90 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 91 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 96 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, Script_RetreatWithDiglett_2
# 106 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 107 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_5
# 111 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 112 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 97 "data/scripts/general_scripts.pory"
	compare VAR_AI_FLAGS, 2
	goto_if_eq Script_RetreatWithDiglett_8
# 101 "data/scripts/general_scripts.pory"
	msgbox DiglettHeatText
Script_RetreatWithDiglett_7:
# 103 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_5:
# 108 "data/scripts/general_scripts.pory"
	release
	end

Script_RetreatWithDiglett_8:
# 98 "data/scripts/general_scripts.pory"
	msgbox DiglettRockText
	goto Script_RetreatWithDiglett_7


Script_TryLootEgg::
# 132 "data/scripts/general_scripts.pory"
	lockall
# 133 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 134 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 135 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 147 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 148 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 149 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 150 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 151 "data/scripts/general_scripts.pory"
	hidemonpic
# 152 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 153 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 158 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 159 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 160 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 161 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 162 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 163 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 163 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 170 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 171 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 172 "data/scripts/general_scripts.pory"
	delay 1
# 173 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 174 "data/scripts/general_scripts.pory"
	delay 1
# 175 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
# 176 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 177 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 179 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 137 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 138 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 139 "data/scripts/general_scripts.pory"
	waitse
# 140 "data/scripts/general_scripts.pory"
	waitmessage
# 141 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 142 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 143 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 144 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 155 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 165 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 166 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 167 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 191 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 192 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 193 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 191 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 197 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 198 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 199 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 197 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 203 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 204 "data/scripts/general_scripts.pory"
	counteggs
# 205 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 209 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 210 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 215 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 216 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 217 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 217 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 222 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 223 "data/scripts/general_scripts.pory"
	call HideEggs
# 224 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 225 "data/scripts/general_scripts.pory"
	delay 32
# 226 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 227 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 231 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 233 "data/scripts/general_scripts.pory"
	delay 48
# 234 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 235 "data/scripts/general_scripts.pory"
	waitmovement 0
# 236 "data/scripts/general_scripts.pory"
	delay 30
# 237 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 238 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 239 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 240 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 241 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 243 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 244 "data/scripts/general_scripts.pory"
	waitmovement 0
# 245 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 246 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 250 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 252 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 253 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 254 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 256 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 257 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 259 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 260 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 263 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 264 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 266 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 206 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 212 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 219 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 228 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 239 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 240 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 241 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 247 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 255 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 258 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 261 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 269 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 270 "data/scripts/general_scripts.pory"
	lock_anim
# 271 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 272 "data/scripts/general_scripts.pory"
	walk_fast_down
# 272 "data/scripts/general_scripts.pory"
	walk_fast_down
# 272 "data/scripts/general_scripts.pory"
	walk_fast_down
# 272 "data/scripts/general_scripts.pory"
	walk_fast_down
# 272 "data/scripts/general_scripts.pory"
	walk_fast_down
# 272 "data/scripts/general_scripts.pory"
	walk_fast_down
# 272 "data/scripts/general_scripts.pory"
	walk_fast_down
# 273 "data/scripts/general_scripts.pory"
	unlock_anim
# 274 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 278 "data/scripts/general_scripts.pory"
	delay 16
# 279 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 280 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 281 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 282 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 286 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 288 "data/scripts/general_scripts.pory"
	delay 32
# 289 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 290 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 283 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 307 "data/scripts/general_scripts.pory"
	lockall
# 308 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 309 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 310 "data/scripts/general_scripts.pory"
	delay 15
# 311 "data/scripts/general_scripts.pory"
	waitse
# 312 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 313 "data/scripts/general_scripts.pory"
	delay 30
# 314 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 315 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 316 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 331 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 332 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 334 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 335 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 337 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 338 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 341 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 347 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 348 "data/scripts/general_scripts.pory"
	closemessage
# 349 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 353 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 354 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 355 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 363 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 373 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 385 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 402 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 403 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 343 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 344 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 350 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 356 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 357 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 358 "data/scripts/general_scripts.pory"
	delay 32
# 359 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 360 "data/scripts/general_scripts.pory"
	delay 32
# 361 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 362 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 364 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 365 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 366 "data/scripts/general_scripts.pory"
	delay 32
# 367 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 368 "data/scripts/general_scripts.pory"
	delay 32
# 369 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 370 "data/scripts/general_scripts.pory"
	delay 32
# 371 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 372 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 374 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
# 375 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 376 "data/scripts/general_scripts.pory"
	delay 32
# 377 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 378 "data/scripts/general_scripts.pory"
	delay 32
# 379 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 380 "data/scripts/general_scripts.pory"
	delay 32
# 381 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 382 "data/scripts/general_scripts.pory"
	delay 32
# 383 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 384 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 386 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
# 387 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 388 "data/scripts/general_scripts.pory"
	delay 32
# 389 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 390 "data/scripts/general_scripts.pory"
	delay 32
# 391 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 392 "data/scripts/general_scripts.pory"
	delay 32
# 393 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 394 "data/scripts/general_scripts.pory"
	delay 32
# 395 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 396 "data/scripts/general_scripts.pory"
	delay 32
# 397 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 398 "data/scripts/general_scripts.pory"
	delay 32
# 399 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 400 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 416 "data/scripts/general_scripts.pory"
	counteggs
# 417 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 426 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 427 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 428 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 432 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 433 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 434 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 435 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 436 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 437 "data/scripts/general_scripts.pory"
	delay 32
# 439 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 440 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 441 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 442 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 443 "data/scripts/general_scripts.pory"
	delay 16
# 444 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 445 "data/scripts/general_scripts.pory"
	waitmovement 0
# 447 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 448 "data/scripts/general_scripts.pory"
	waitmovement 0
# 449 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 450 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 451 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 452 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 453 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 454 "data/scripts/general_scripts.pory"
	delay 16
# 455 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 456 "data/scripts/general_scripts.pory"
	waitmovement 0
# 458 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 459 "data/scripts/general_scripts.pory"
	waitmovement 0
# 461 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 462 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 463 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 464 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 465 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 466 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 467 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 468 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 469 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 470 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 471 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 418 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 419 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 423 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 429 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 488 "data/scripts/general_scripts.pory"
	counteggs
# 489 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 498 "data/scripts/general_scripts.pory"
	closemessage
# 499 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 500 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 501 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 502 "data/scripts/general_scripts.pory"
	delay 32
# 503 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 504 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 505 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 506 "data/scripts/general_scripts.pory"
	delay 16
# 507 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 508 "data/scripts/general_scripts.pory"
	waitmovement 0
# 510 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 511 "data/scripts/general_scripts.pory"
	waitmovement 0
# 512 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 513 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 514 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 515 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 516 "data/scripts/general_scripts.pory"
	delay 16
# 517 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 518 "data/scripts/general_scripts.pory"
	waitmovement 0
# 520 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 521 "data/scripts/general_scripts.pory"
	waitmovement 0
# 522 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 523 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 524 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 525 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 526 "data/scripts/general_scripts.pory"
	delay 16
# 527 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 528 "data/scripts/general_scripts.pory"
	waitmovement 0
# 530 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 531 "data/scripts/general_scripts.pory"
	waitmovement 0
# 532 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 533 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 534 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 535 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
# 536 "data/scripts/general_scripts.pory"
	delay 16
# 537 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 538 "data/scripts/general_scripts.pory"
	waitmovement 0
# 540 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 541 "data/scripts/general_scripts.pory"
	waitmovement 0
# 542 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 543 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 544 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 545 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 546 "data/scripts/general_scripts.pory"
	delay 16
# 547 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 548 "data/scripts/general_scripts.pory"
	waitmovement 0
# 550 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 551 "data/scripts/general_scripts.pory"
	waitmovement 0
# 553 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 554 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 555 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 556 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 557 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 558 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 559 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 560 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 561 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 562 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 563 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 564 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 565 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 490 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 491 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 495 "data/scripts/general_scripts.pory"
	release
	end


# 568 "data/scripts/general_scripts.pory"
Walk1Up:
# 569 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 572 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 573 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 574 "data/scripts/general_scripts.pory"
	set_visible
# 575 "data/scripts/general_scripts.pory"
	jump_up
# 576 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 577 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 593 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 594 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 595 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 599 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 600 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 601 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 605 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 606 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 607 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 611 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 612 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 613 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 617 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 618 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 619 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 623 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 624 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 625 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 629 "data/scripts/general_scripts.pory"
	random 6
# 630 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 631 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 632 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 633 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 634 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 635 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 636 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 631 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 632 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 633 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 634 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 635 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 636 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 658 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 661 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 665 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 666 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 663 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 671 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 672 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 673 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 676 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 679 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 685 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 691 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 696 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 697 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 698 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 674 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 677 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 680 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 681 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 687 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 682 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 693 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 694 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 688 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 694 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 702 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 703 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 707 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 712 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 718 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 725 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 734 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 704 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 705 "data/scripts/general_scripts.pory"
	waitmovement 0
# 706 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 708 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 709 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 710 "data/scripts/general_scripts.pory"
	waitmovement 0
# 711 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 713 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 714 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 715 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 716 "data/scripts/general_scripts.pory"
	waitmovement 0
# 717 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 719 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 720 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 721 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 722 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 723 "data/scripts/general_scripts.pory"
	waitmovement 0
# 724 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 726 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 727 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 728 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 729 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 730 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 731 "data/scripts/general_scripts.pory"
	waitmovement 0
# 732 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 228 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 228 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 228 "data/scripts/general_scripts.pory"
	jump_2_right
# 228 "data/scripts/general_scripts.pory"
	delay_16
# 228 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 228 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 231 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 231 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 231 "data/scripts/general_scripts.pory"
	jump_2_left
# 231 "data/scripts/general_scripts.pory"
	delay_16
# 231 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 231 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 239 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 239 "data/scripts/general_scripts.pory"
	lock_anim
# 239 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 239 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	jump_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	walk_fast_down
# 239 "data/scripts/general_scripts.pory"
	unlock_anim
# 239 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 239 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 240 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 240 "data/scripts/general_scripts.pory"
	lock_anim
# 240 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 240 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 240 "data/scripts/general_scripts.pory"
	walk_fast_down
# 240 "data/scripts/general_scripts.pory"
	jump_down
# 240 "data/scripts/general_scripts.pory"
	walk_fast_down
# 240 "data/scripts/general_scripts.pory"
	walk_fast_down
# 240 "data/scripts/general_scripts.pory"
	walk_fast_down
# 240 "data/scripts/general_scripts.pory"
	walk_fast_down
# 240 "data/scripts/general_scripts.pory"
	walk_fast_down
# 240 "data/scripts/general_scripts.pory"
	walk_fast_down
# 240 "data/scripts/general_scripts.pory"
	unlock_anim
# 240 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 240 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 241 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 241 "data/scripts/general_scripts.pory"
	lock_anim
# 241 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 241 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 241 "data/scripts/general_scripts.pory"
	jump_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	walk_fast_down
# 241 "data/scripts/general_scripts.pory"
	unlock_anim
# 241 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 241 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 283 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 283 "data/scripts/general_scripts.pory"
	set_visible
# 283 "data/scripts/general_scripts.pory"
	jump_2_right
# 283 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 286 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 286 "data/scripts/general_scripts.pory"
	set_visible
# 286 "data/scripts/general_scripts.pory"
	jump_2_left
# 286 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 356 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 364 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 364 "data/scripts/general_scripts.pory"
	walk_slow_up
# 364 "data/scripts/general_scripts.pory"
	walk_slow_up
# 364 "data/scripts/general_scripts.pory"
	walk_slow_up
# 364 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 374 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
# 374 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 386 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 386 "data/scripts/general_scripts.pory"
	walk_slow_up
# 386 "data/scripts/general_scripts.pory"
	walk_slow_up
# 386 "data/scripts/general_scripts.pory"
	walk_slow_up
# 386 "data/scripts/general_scripts.pory"
	walk_slow_up
# 386 "data/scripts/general_scripts.pory"
	walk_slow_up
# 386 "data/scripts/general_scripts.pory"
	walk_slow_up
# 386 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 458 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 458 "data/scripts/general_scripts.pory"
	walk_up
# 458 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 21 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 83 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 90 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 138 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 158 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 166 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 177 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 215 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 426 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 624 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 74 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

DiglettRockText::
# 115 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "hard terrain here…$"

DiglettHeatText::
# 120 "data/scripts/general_scripts.pory"
	.string "Diglett is struggling\n"
	.string "to get to you due to the\l"
	.string "intense heat here…$"

RetreatWithDiglett_Text::
# 126 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 182 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 293 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 300 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 319 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 406 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 409 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 474 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 480 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 580 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 585 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 640 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 642 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 644 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 646 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 649 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 652 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
