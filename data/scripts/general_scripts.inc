DebugScript1::
# 11 "data/scripts/general_scripts.pory"
	callnative TestSpeciesBST2
# 12 "data/scripts/general_scripts.pory"
	callnative TestSpeciesBST3
	return


DebugScript2::
# 16 "data/scripts/general_scripts.pory"
	trainerbattle_double TRAINER_GABBY_AND_TY_1, DebugScript2_Text_0, DebugScript2_Text_0, DebugScript2_Text_0
	return


SetupMushroom::
# 24 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 27 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 28 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 29 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 33 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 37 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 38 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 1
	goto_if_eq EventScript_LootMushroom_5
# 43 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_LOCATION, 3
	goto_if_eq EventScript_LootMushroom_6
# 49 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 50 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 51 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
EventScript_LootMushroom_4:
# 53 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 54 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP2
# 55 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_11
EventScript_LootMushroom_10:
# 62 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_14
EventScript_LootMushroom_13:
# 65 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 66 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_LootMushroom_2:
# 34 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 39 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR
# 40 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 41 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_6:
# 44 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM_INTERIOR_2
# 45 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 46 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM_INTERIOR_2, VAR_MUSHROOM2_X, VAR_MUSHROOM2_Y
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_11:
# 56 "data/scripts/general_scripts.pory"
	lockall
# 57 "data/scripts/general_scripts.pory"
	waitmoncry
# 58 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 59 "data/scripts/general_scripts.pory"
	call SetYoshiMoves
# 60 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_10

EventScript_LootMushroom_14:
# 63 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_13


EventScript_FollowerEgg::
# 78 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 82 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 83 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 84 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 85 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 86 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 91 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 92 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 96 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 97 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 93 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 106 "data/scripts/general_scripts.pory"
	lockall
# 107 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 108 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 109 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 121 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 122 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 123 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 124 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 125 "data/scripts/general_scripts.pory"
	hidemonpic
# 126 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 127 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 132 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 133 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 134 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 135 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 136 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 136 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 143 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 144 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 145 "data/scripts/general_scripts.pory"
	clearflag FLAG_TURBOBOOST_ENCOUNTERS
# 146 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 148 "data/scripts/general_scripts.pory"
	releaseall
	return

Script_TryLootEgg_2:
# 111 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 112 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 113 "data/scripts/general_scripts.pory"
	waitse
# 114 "data/scripts/general_scripts.pory"
	waitmessage
# 115 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 116 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 117 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 118 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 129 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 138 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 139 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 140 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 160 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_2
# 161 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_1:
# 162 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing1_2:
# 160 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_1


RiverCrossing2::
# 166 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing2_2
# 167 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_2
RiverCrossing2_1:
# 168 "data/scripts/general_scripts.pory"
	call RiverCrossingMain
	return

RiverCrossing2_2:
# 166 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_2
	goto RiverCrossing2_1


RiverCrossingMain::
# 172 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 173 "data/scripts/general_scripts.pory"
	counteggs
# 174 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossingMain_2
# 178 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 179 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossingMain_5
# 184 "data/scripts/general_scripts.pory"
	msgbox RiverCrossingMain_Text_0
# 185 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 186 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossingMain_8
# 186 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossingMain_8
# 191 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 192 "data/scripts/general_scripts.pory"
	call HideEggs
# 193 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 194 "data/scripts/general_scripts.pory"
	delay 32
# 195 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 196 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_13
# 200 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_1
RiverCrossingMain_12:
# 202 "data/scripts/general_scripts.pory"
	delay 48
# 203 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 204 "data/scripts/general_scripts.pory"
	waitmovement 0
# 205 "data/scripts/general_scripts.pory"
	delay 30
# 206 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 207 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 208 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_18
# 209 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_19
# 210 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_20
RiverCrossingMain_16:
# 212 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 213 "data/scripts/general_scripts.pory"
	waitmovement 0
# 214 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 215 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossingMain_22
# 219 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_0, 2
RiverCrossingMain_21:
# 221 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_1
# 222 "data/scripts/general_scripts.pory"
	case 48, RiverCrossingMain_27
# 223 "data/scripts/general_scripts.pory"
	case 67, RiverCrossingMain_27
# 225 "data/scripts/general_scripts.pory"
	case 49, RiverCrossingMain_28
# 226 "data/scripts/general_scripts.pory"
	case 68, RiverCrossingMain_28
# 228 "data/scripts/general_scripts.pory"
	case 50, RiverCrossingMain_29
# 229 "data/scripts/general_scripts.pory"
	case 69, RiverCrossingMain_29
RiverCrossingMain_25:
# 232 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 233 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 234 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 236 "data/scripts/general_scripts.pory"
	releaseall
	return

RiverCrossingMain_2:
# 175 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossingMain_5:
# 181 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_8:
# 188 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossingMain_13:
# 197 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossingMain_Movement_0
	goto RiverCrossingMain_12

RiverCrossingMain_18:
# 208 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_2
	goto RiverCrossingMain_16

RiverCrossingMain_19:
# 209 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_3
	goto RiverCrossingMain_16

RiverCrossingMain_20:
# 210 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, RiverCrossingMain_Movement_4
	goto RiverCrossingMain_16

RiverCrossingMain_22:
# 216 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 2
	goto RiverCrossingMain_21

RiverCrossingMain_27:
# 224 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto RiverCrossingMain_25

RiverCrossingMain_28:
# 227 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 2
	goto RiverCrossingMain_25

RiverCrossingMain_29:
# 230 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 3
	goto RiverCrossingMain_25


# 239 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 240 "data/scripts/general_scripts.pory"
	lock_anim
# 241 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 242 "data/scripts/general_scripts.pory"
	walk_fast_down
# 242 "data/scripts/general_scripts.pory"
	walk_fast_down
# 242 "data/scripts/general_scripts.pory"
	walk_fast_down
# 242 "data/scripts/general_scripts.pory"
	walk_fast_down
# 242 "data/scripts/general_scripts.pory"
	walk_fast_down
# 242 "data/scripts/general_scripts.pory"
	walk_fast_down
# 242 "data/scripts/general_scripts.pory"
	walk_fast_down
# 243 "data/scripts/general_scripts.pory"
	unlock_anim
# 244 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 248 "data/scripts/general_scripts.pory"
	delay 16
# 249 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 250 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 251 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 252 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DoWaterEggMovement_2
# 256 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 258 "data/scripts/general_scripts.pory"
	delay 32
# 259 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 260 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 253 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 277 "data/scripts/general_scripts.pory"
	lockall
# 278 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 279 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 280 "data/scripts/general_scripts.pory"
	delay 15
# 281 "data/scripts/general_scripts.pory"
	waitse
# 282 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 283 "data/scripts/general_scripts.pory"
	delay 30
# 284 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 285 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
# 286 "data/scripts/general_scripts.pory"
	releaseall
	return


SlipperySlope2::
# 301 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 2
# 302 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope3::
# 304 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 3
# 305 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlope4::
# 307 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_4, 4
# 308 "data/scripts/general_scripts.pory"
	goto SlipperySlopeMain
	return


SlipperySlopeMain::
# 311 "data/scripts/general_scripts.pory"
	lockall
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlipperySlopeMain_2
# 317 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text2, MSGBOX_YESNO
# 318 "data/scripts/general_scripts.pory"
	closemessage
# 319 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlipperySlopeMain_5
# 323 "data/scripts/general_scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 324 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_4
# 325 "data/scripts/general_scripts.pory"
	case 2, SlipperySlopeMain_9
# 333 "data/scripts/general_scripts.pory"
	case 3, SlipperySlopeMain_10
# 343 "data/scripts/general_scripts.pory"
	case 4, SlipperySlopeMain_11
# 355 "data/scripts/general_scripts.pory"
	case 6, SlipperySlopeMain_12
SlipperySlopeMain_7:
# 372 "data/scripts/general_scripts.pory"
	waitmovement LOCALID_PLAYER
# 373 "data/scripts/general_scripts.pory"
	releaseall
	return

SlipperySlopeMain_2:
# 313 "data/scripts/general_scripts.pory"
	msgbox SlipperySlopeMain_Text
# 314 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_5:
# 320 "data/scripts/general_scripts.pory"
	release
	end

SlipperySlopeMain_9:
# 326 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_0
# 327 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 328 "data/scripts/general_scripts.pory"
	delay 32
# 329 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 330 "data/scripts/general_scripts.pory"
	delay 32
# 331 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 332 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_10:
# 334 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_1
# 335 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 336 "data/scripts/general_scripts.pory"
	delay 32
# 337 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 338 "data/scripts/general_scripts.pory"
	delay 32
# 339 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 340 "data/scripts/general_scripts.pory"
	delay 32
# 341 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 342 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_11:
# 344 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_2
# 345 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 346 "data/scripts/general_scripts.pory"
	delay 32
# 347 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 348 "data/scripts/general_scripts.pory"
	delay 32
# 349 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 350 "data/scripts/general_scripts.pory"
	delay 32
# 351 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 352 "data/scripts/general_scripts.pory"
	delay 32
# 353 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 354 "data/scripts/general_scripts.pory"
	delay 32
	goto SlipperySlopeMain_7

SlipperySlopeMain_12:
# 356 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, SlipperySlopeMain_Movement_3
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
# 363 "data/scripts/general_scripts.pory"
	playse SE_M_ROCK_THROW
# 364 "data/scripts/general_scripts.pory"
	delay 32
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
	goto SlipperySlopeMain_7


MakeBerryBridge::
# 386 "data/scripts/general_scripts.pory"
	counteggs
# 387 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt MakeBerryBridge_2
	msgbox MakeBerryEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_5
# 396 "data/scripts/general_scripts.pory"
	msgbox MakeBerryBridge_Text_0, MSGBOX_AUTOCLOSE
# 397 "data/scripts/general_scripts.pory"
	special ChooseHalfPartyForBattle
# 398 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeBerryBridge_8
# 402 "data/scripts/general_scripts.pory"
	callnative RemoveTwoEggs
# 403 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 404 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 405 "data/scripts/general_scripts.pory"
	callnative RemoveLast2Followers
# 406 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 407 "data/scripts/general_scripts.pory"
	delay 32
# 409 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 410 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 411 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 412 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_1, ThrowBridgeEgg
# 413 "data/scripts/general_scripts.pory"
	delay 16
# 414 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 415 "data/scripts/general_scripts.pory"
	waitmovement 0
# 417 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 418 "data/scripts/general_scripts.pory"
	waitmovement 0
# 419 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 420 "data/scripts/general_scripts.pory"
	copyvar VAR_BERRYBRIDGE_X, VAR_TEMP_0
# 421 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BERRYBRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 422 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 423 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BERRYBRIDGEEGG_2, ThrowBridgeEgg
# 424 "data/scripts/general_scripts.pory"
	delay 16
# 425 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 426 "data/scripts/general_scripts.pory"
	waitmovement 0
# 428 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 429 "data/scripts/general_scripts.pory"
	waitmovement 0
# 431 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 54, 0x238, FALSE
# 432 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_0, 53, 0x239, FALSE
# 433 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 434 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_1
# 435 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGEEGG_2
# 436 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA1
# 437 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA2
# 438 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA3
# 439 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA4
# 440 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BERRYBRIDGE_NINJA5
# 441 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeBerryBridge_2:
# 388 "data/scripts/general_scripts.pory"
	msgbox MakeBerryEggBridge_Text
# 389 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_5:
# 393 "data/scripts/general_scripts.pory"
	release
	end

MakeBerryBridge_8:
# 399 "data/scripts/general_scripts.pory"
	release
	end


MakeEggBridge::
# 458 "data/scripts/general_scripts.pory"
	counteggs
# 459 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt MakeEggBridge_2
	msgbox MakeEggBridge_Text2, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeEggBridge_5
# 468 "data/scripts/general_scripts.pory"
	closemessage
# 469 "data/scripts/general_scripts.pory"
	callnative RemoveAllEggs
# 470 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 471 "data/scripts/general_scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR, 0xFF
# 472 "data/scripts/general_scripts.pory"
	delay 32
# 473 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_1, VAR_TEMP_0, VAR_TEMP_1
# 474 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 475 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_1, ThrowBridgeEgg
# 476 "data/scripts/general_scripts.pory"
	delay 16
# 477 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 478 "data/scripts/general_scripts.pory"
	waitmovement 0
# 480 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 481 "data/scripts/general_scripts.pory"
	waitmovement 0
# 482 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 483 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_2, VAR_TEMP_0, VAR_TEMP_1
# 484 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 485 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_2, ThrowBridgeEgg
# 486 "data/scripts/general_scripts.pory"
	delay 16
# 487 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 488 "data/scripts/general_scripts.pory"
	waitmovement 0
# 490 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 491 "data/scripts/general_scripts.pory"
	waitmovement 0
# 492 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 493 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_3, VAR_TEMP_0, VAR_TEMP_1
# 494 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 495 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_3, ThrowBridgeEgg
# 496 "data/scripts/general_scripts.pory"
	delay 16
# 497 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 498 "data/scripts/general_scripts.pory"
	waitmovement 0
# 500 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 501 "data/scripts/general_scripts.pory"
	waitmovement 0
# 502 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 503 "data/scripts/general_scripts.pory"
	setobjectxy LOCALID_BRIDGEEGG_4, VAR_TEMP_0, VAR_TEMP_1
# 504 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 505 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_4, ThrowBridgeEgg
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
	setobjectxy LOCALID_BRIDGEEGG_5, VAR_TEMP_0, VAR_TEMP_1
# 514 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 515 "data/scripts/general_scripts.pory"
	applymovement LOCALID_BRIDGEEGG_5, ThrowBridgeEgg
# 516 "data/scripts/general_scripts.pory"
	delay 16
# 517 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 518 "data/scripts/general_scripts.pory"
	waitmovement 0
# 520 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, MakeBerryBridge_Movement_0
# 521 "data/scripts/general_scripts.pory"
	waitmovement 0
# 523 "data/scripts/general_scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 524 "data/scripts/general_scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 525 "data/scripts/general_scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 526 "data/scripts/general_scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 527 "data/scripts/general_scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
# 528 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 529 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_1
# 530 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_2
# 531 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_3
# 532 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_4
# 533 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGEEGG_5
# 534 "data/scripts/general_scripts.pory"
	removeobject LOCALID_BRIDGE_NINJA
# 535 "data/scripts/general_scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_EGG_ISLAND_EXTERIOR
	return

MakeEggBridge_2:
# 460 "data/scripts/general_scripts.pory"
	msgbox MakeEggBridge_Text
# 461 "data/scripts/general_scripts.pory"
	release
	end

MakeEggBridge_5:
# 465 "data/scripts/general_scripts.pory"
	release
	end


# 538 "data/scripts/general_scripts.pory"
Walk1Up:
# 539 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 542 "data/scripts/general_scripts.pory"
ThrowBridgeEgg:
# 543 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 544 "data/scripts/general_scripts.pory"
	set_visible
# 545 "data/scripts/general_scripts.pory"
	jump_up
# 546 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 547 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

EventScript_Follower1::
# 563 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 564 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 1
# 565 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower2::
# 569 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 570 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 2
# 571 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower3::
# 575 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 576 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 3
# 577 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower4::
# 581 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 582 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 4
# 583 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


EventScript_Follower5::
# 587 "data/scripts/general_scripts.pory"
	call FollowerEggScript
# 588 "data/scripts/general_scripts.pory"
	setvar VAR_FOLLOWER_MON, 5
# 589 "data/scripts/general_scripts.pory"
	goto FollowerMainScript
	return


FollowerMainScript::
# 593 "data/scripts/general_scripts.pory"
	bufferpartymonnickname STR_VAR_1, VAR_FOLLOWER_MON
# 594 "data/scripts/general_scripts.pory"
	setspeaker FollowerMainScript_Text_0
# 595 "data/scripts/general_scripts.pory"
	call FollowerRandomMessage
	return


FollowerRandomMessage::
# 599 "data/scripts/general_scripts.pory"
	random 6
# 600 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 601 "data/scripts/general_scripts.pory"
	case 0, FollowerRandomMessage_2
# 602 "data/scripts/general_scripts.pory"
	case 1, FollowerRandomMessage_3
# 603 "data/scripts/general_scripts.pory"
	case 2, FollowerRandomMessage_4
# 604 "data/scripts/general_scripts.pory"
	case 3, FollowerRandomMessage_5
# 605 "data/scripts/general_scripts.pory"
	case 4, FollowerRandomMessage_6
# 606 "data/scripts/general_scripts.pory"
	case 5, FollowerRandomMessage_7
	return

FollowerRandomMessage_2:
# 601 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage0, MSGBOX_NPC
	return

FollowerRandomMessage_3:
# 602 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage1, MSGBOX_NPC
	return

FollowerRandomMessage_4:
# 603 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage2, MSGBOX_NPC
	return

FollowerRandomMessage_5:
# 604 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage3, MSGBOX_NPC
	return

FollowerRandomMessage_6:
# 605 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage4, MSGBOX_NPC
	return

FollowerRandomMessage_7:
# 606 "data/scripts/general_scripts.pory"
	msgbox FollowerMessage5, MSGBOX_NPC
	return


FollowerEggScript::
# 628 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, FollowerEggScript_2
# 631 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	checkmetatileat VAR_TEMP_0, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MB_STRENGTH_BUTTON
	goto_if_eq FollowerEggScript_5
FollowerEggScript_4:
# 635 "data/scripts/general_scripts.pory"
	call EventScript_FollowerEgg
# 636 "data/scripts/general_scripts.pory"
	release
	end

FollowerEggScript_2:
	return

FollowerEggScript_5:
# 633 "data/scripts/general_scripts.pory"
	goto SetEggOnPedestal
	goto FollowerEggScript_4


SetYoshiMoves::
# 641 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 642 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK
# 643 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_2
SetYoshiMoves_1:
# 646 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_EGGS_HATCHED, SetYoshiMoves_5
SetYoshiMoves_4:
# 649 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_TONGUE_UPGRADE, SetYoshiMoves_8
SetYoshiMoves_7:
# 655 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_11
SetYoshiMoves_10:
# 661 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_INTRODUCTION_TO_MUSHROOMS, SetYoshiMoves_16
SetYoshiMoves_15:
# 666 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 667 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 668 "data/scripts/general_scripts.pory"
	callnative RestorePPs
	return

SetYoshiMoves_2:
# 644 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STATIC
	goto SetYoshiMoves_1

SetYoshiMoves_5:
# 647 "data/scripts/general_scripts.pory"
	setmonmove 0, 0, MOVE_HELPING_HAND
	goto SetYoshiMoves_4

SetYoshiMoves_8:
# 650 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG
# 651 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_STATIC_TONGUE, SetYoshiMoves_13
	goto SetYoshiMoves_7

SetYoshiMoves_11:
# 657 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_18
	goto SetYoshiMoves_10

SetYoshiMoves_13:
# 652 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_TONGUE_ATTACK_STRONG_STATIC
	goto SetYoshiMoves_7

SetYoshiMoves_16:
# 663 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_SUPER_MUSHROOM
# 664 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_DIGLETT_RESCUED, SetYoshiMoves_20
	goto SetYoshiMoves_15

SetYoshiMoves_18:
# 658 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_10

SetYoshiMoves_20:
# 664 "data/scripts/general_scripts.pory"
	setmonmove 0, 3, MOVE_CALL_DIGLETT
	goto SetYoshiMoves_15


HideEggs::
# 672 "data/scripts/general_scripts.pory"
	switch VAR_0x8001
# 673 "data/scripts/general_scripts.pory"
	case 0, HideEggs_3
# 677 "data/scripts/general_scripts.pory"
	case 1, HideEggs_4
# 682 "data/scripts/general_scripts.pory"
	case 2, HideEggs_5
# 688 "data/scripts/general_scripts.pory"
	case 3, HideEggs_6
# 695 "data/scripts/general_scripts.pory"
	case 4, HideEggs_7
HideEggs_1:
# 704 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	return

HideEggs_3:
# 674 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 675 "data/scripts/general_scripts.pory"
	waitmovement 0
# 676 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER1
	goto HideEggs_1

HideEggs_4:
# 678 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 679 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 680 "data/scripts/general_scripts.pory"
	waitmovement 0
# 681 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER2
	goto HideEggs_1

HideEggs_5:
# 683 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 684 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 685 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 686 "data/scripts/general_scripts.pory"
	waitmovement 0
# 687 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER3
	goto HideEggs_1

HideEggs_6:
# 689 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 690 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 691 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 692 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 693 "data/scripts/general_scripts.pory"
	waitmovement 0
# 694 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER4
	goto HideEggs_1

HideEggs_7:
# 696 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, EnterPokeballMovement
# 697 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, EnterPokeballMovement
# 698 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, EnterPokeballMovement
# 699 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, EnterPokeballMovement
# 700 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, EnterPokeballMovement
# 701 "data/scripts/general_scripts.pory"
	waitmovement 0
# 702 "data/scripts/general_scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER5
	goto HideEggs_1


# 197 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_0:
# 197 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 197 "data/scripts/general_scripts.pory"
	jump_2_right
# 197 "data/scripts/general_scripts.pory"
	delay_16
# 197 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 197 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 200 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_1:
# 200 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 200 "data/scripts/general_scripts.pory"
	jump_2_left
# 200 "data/scripts/general_scripts.pory"
	delay_16
# 200 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 200 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 208 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_2:
# 208 "data/scripts/general_scripts.pory"
	lock_anim
# 208 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 208 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	walk_fast_down
# 208 "data/scripts/general_scripts.pory"
	jump_down
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
	unlock_anim
# 208 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 208 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 209 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_3:
# 209 "data/scripts/general_scripts.pory"
	lock_anim
# 209 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 209 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	jump_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	walk_fast_down
# 209 "data/scripts/general_scripts.pory"
	unlock_anim
# 209 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 209 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 210 "data/scripts/general_scripts.pory"
RiverCrossingMain_Movement_4:
# 210 "data/scripts/general_scripts.pory"
	lock_anim
# 210 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 210 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 210 "data/scripts/general_scripts.pory"
	jump_down
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
# 210 "data/scripts/general_scripts.pory"
	unlock_anim
# 210 "data/scripts/general_scripts.pory"
	unlock_facing_direction
# 210 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
	step_end

# 253 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 253 "data/scripts/general_scripts.pory"
	set_visible
# 253 "data/scripts/general_scripts.pory"
	jump_2_right
# 253 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 256 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 256 "data/scripts/general_scripts.pory"
	set_visible
# 256 "data/scripts/general_scripts.pory"
	jump_2_left
# 256 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 326 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_0:
# 326 "data/scripts/general_scripts.pory"
	walk_slow_up
# 326 "data/scripts/general_scripts.pory"
	walk_slow_up
# 326 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 334 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_1:
# 334 "data/scripts/general_scripts.pory"
	walk_slow_up
# 334 "data/scripts/general_scripts.pory"
	walk_slow_up
# 334 "data/scripts/general_scripts.pory"
	walk_slow_up
# 334 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 344 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_2:
# 344 "data/scripts/general_scripts.pory"
	walk_slow_up
# 344 "data/scripts/general_scripts.pory"
	walk_slow_up
# 344 "data/scripts/general_scripts.pory"
	walk_slow_up
# 344 "data/scripts/general_scripts.pory"
	walk_slow_up
# 344 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 356 "data/scripts/general_scripts.pory"
SlipperySlopeMain_Movement_3:
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
# 356 "data/scripts/general_scripts.pory"
	walk_slow_up
	step_end

# 428 "data/scripts/general_scripts.pory"
MakeBerryBridge_Movement_0:
# 428 "data/scripts/general_scripts.pory"
	walk_up
# 428 "data/scripts/general_scripts.pory"
	walk_up
	step_end

DebugScript2_Text_0:
# 16 "data/scripts/general_scripts.pory"
	.string "a$"

EventScript_FollowerEgg_Text_0:
# 78 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 85 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 112 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 132 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 139 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 146 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossingMain_Text_0:
# 184 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

MakeBerryBridge_Text_0:
# 396 "data/scripts/general_scripts.pory"
	.string "Choose two eggs to toss.$"

FollowerMainScript_Text_0:
# 594 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}$"

EventScript_LootMushroom_Text::
# 69 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 100 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and return\n"
	.string "back to latest save point?$"

TooManyEggs::
# 151 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 263 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 270 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 289 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"

SlipperySlopeMain_Text::
# 376 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.$"

SlipperySlopeMain_Text2::
# 379 "data/scripts/general_scripts.pory"
	.string "It's a slippery mud slope.\p"
	.string "Use your Grip Gloves\n"
	.string "to ascend it?$"

MakeBerryEggBridge_Text::
# 444 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\l"
	.string "Maybe there's a way across?$"

MakeBerryEggBridge_Text2::
# 450 "data/scripts/general_scripts.pory"
	.string "There seems to be a small\n"
	.string "stream here.\p"
	.string "Toss in two eggs to make\n"
	.string "a bridge?$"

MakeEggBridge_Text::
# 550 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.$"

MakeEggBridge_Text2::
# 555 "data/scripts/general_scripts.pory"
	.string "There's a small island\n"
	.string "in the middle of the lake.\p"
	.string "Use all your eggs to\n"
	.string "create a bridge?$"

FollowerMessage0::
# 610 "data/scripts/general_scripts.pory"
	.string "We're with you, {PLAYER}!$"

FollowerMessage1::
# 612 "data/scripts/general_scripts.pory"
	.string "We can do this!$"

FollowerMessage2::
# 614 "data/scripts/general_scripts.pory"
	.string "Let's go kick Kamek's butt!$"

FollowerMessage3::
# 616 "data/scripts/general_scripts.pory"
	.string "Is there something\n"
	.string "on my face?$"

FollowerMessage4::
# 619 "data/scripts/general_scripts.pory"
	.string "We'll go wherever you lead,\n"
	.string "{PLAYER}!$"

FollowerMessage5::
# 622 "data/scripts/general_scripts.pory"
	.string "No more getting thrown around\n"
	.string "like a projectile!$"
