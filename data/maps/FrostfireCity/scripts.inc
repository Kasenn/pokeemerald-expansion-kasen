FrostfireCity_MapScripts::
# 6 "data/maps/FrostfireCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 50 "data/maps/FrostfireCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FrostfireCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_3
# 8 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_VISITED_FROSTFIRE
# 9 "data/maps/FrostfireCity/scripts.pory"
	switch VAR_FROSTHEARTH_RUFFLET
# 10 "data/maps/FrostfireCity/scripts.pory"
	case 2, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 12 "data/maps/FrostfireCity/scripts.pory"
	case 3, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 14 "data/maps/FrostfireCity/scripts.pory"
	case 4, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 16 "data/maps/FrostfireCity/scripts.pory"
	case 5, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 18 "data/maps/FrostfireCity/scripts.pory"
	case 6, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 21 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 0
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 21 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 10
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 24 "data/maps/FrostfireCity/scripts.pory"
	switch VAR_FROSTHEARTH_HARD_ROCK
# 25 "data/maps/FrostfireCity/scripts.pory"
	case 0, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 27 "data/maps/FrostfireCity/scripts.pory"
	case 1, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 29 "data/maps/FrostfireCity/scripts.pory"
	case 2, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 31 "data/maps/FrostfireCity/scripts.pory"
	case 3, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 34 "data/maps/FrostfireCity/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 35 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_WINS_AT_PWT, 3
	goto_if_ge FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 11 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 37, 11
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 47, 29
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 39, 41
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 17 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 7, 27
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 10, 43
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 22 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_2
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 26 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_1
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 28 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 28, 42, 40
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 30 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 28, 46, 40
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 32 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_1
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 36 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_TEMP_5, 1
# 37 "data/maps/FrostfireCity/scripts.pory"
	goto_if_set FLAG_BOTTLECAPS_WAITING, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 35 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 24
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 38 "data/maps/FrostfireCity/scripts.pory"
	copyvar VAR_TEMP_7, VAR_WINS_AT_PWT
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 39 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_7, 3
	goto_if_ge FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
# 43 "data/maps/FrostfireCity/scripts.pory"
	checkitemspace ITEM_BOTTLE_CAP, VAR_TEMP_6
# 44 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 40 "data/maps/FrostfireCity/scripts.pory"
	subvar VAR_TEMP_7, 3
# 41 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_TEMP_6, 1
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 45 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 51 "data/maps/FrostfireCity/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, FrosthearthBottleCapReward
	.2byte 0


FrostHearth_Sign1::
# 56 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign1_Text, MSGBOX_SIGN
	return


FrostHearth_Sign2::
# 59 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign2_Text, MSGBOX_SIGN
	return


FrostHearth_Sign3::
# 62 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign3_Text, MSGBOX_SIGN
	return


FrostHearth_Sign4::
# 65 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign4_Text, MSGBOX_SIGN
	return


FrostHearth_Sign5::
# 68 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign5_Text, MSGBOX_SIGN
	return


FrostHearth_Sign6::
# 71 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign6_Text, MSGBOX_SIGN
	return


FrostHearth_Sign7::
# 74 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign7_Text, MSGBOX_SIGN
	return


Frosthearth_GymUnavailable::
# 104 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_GymUnavailable_Text, MSGBOX_NPC
# 105 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_FIND_PRYCE_QUEST
	return


Frosthearth_Maniac::
# 116 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Maniac_Text, MSGBOX_NPC
	return


Frosthearth_Man5::
# 126 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Man5_Text, MSGBOX_NPC
	return


Frosthearth_NinjaBoy::
# 135 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_NinjaBoy_Text, MSGBOX_NPC
	return


Frosthearth_Sailor::
# 143 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Sailor_Text, MSGBOX_NPC
	return


Frosthearth_FilmingCrew::
# 153 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_FilmingCrew_Text, MSGBOX_SIGN
	return


Frosthearth_Lass1::
# 160 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Lass1_Text, MSGBOX_NPC
	return


Frosthearth_Lass2::
# 163 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Lass2_Text, MSGBOX_NPC
	return


Frosthearth_OldMan::
# 176 "data/maps/FrostfireCity/scripts.pory"
	goto_if_set FLAG_CHOCOLATE_FROM_OLD_MAN, Frosthearth_OldMan_2
# 180 "data/maps/FrostfireCity/scripts.pory"
	lock
# 181 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 182 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_OldMan_Text2
# 183 "data/maps/FrostfireCity/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
# 184 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_OldMan_5
Frosthearth_OldMan_4:
# 187 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_CHOCOLATE_FROM_OLD_MAN
# 188 "data/maps/FrostfireCity/scripts.pory"
	release
	return

Frosthearth_OldMan_2:
# 177 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_OldMan_Text, MSGBOX_NPC
	end

Frosthearth_OldMan_5:
# 185 "data/maps/FrostfireCity/scripts.pory"
	goto ZeBagIsFull
	goto Frosthearth_OldMan_4


Frosthearth_Twin::
# 200 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Twin_Text, MSGBOX_NPC
	return


Frosthearth_Girl::
# 210 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Girl_Text, MSGBOX_NPC
	return


Frosthearth_HoundourTrainer::
# 217 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_HoundourTrainer_Text, MSGBOX_NPC
# 218 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	return


Frosthearth_Houndour1::
# 226 "data/maps/FrostfireCity/scripts.pory"
	lock
# 227 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 228 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 229 "data/maps/FrostfireCity/scripts.pory"
	playmoncry SPECIES_HOUNDOUR, CRY_MODE_NORMAL
# 230 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Houndour1_Text, MSGBOX_DEFAULT
# 231 "data/maps/FrostfireCity/scripts.pory"
	waitmoncry
# 232 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
# 233 "data/maps/FrostfireCity/scripts.pory"
	release
	end


Frosthearth_Houndour2::
# 243 "data/maps/FrostfireCity/scripts.pory"
	lock
# 244 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 245 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 246 "data/maps/FrostfireCity/scripts.pory"
	playmoncry SPECIES_HOUNDOUR, CRY_MODE_NORMAL
# 247 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Houndour2_Text, MSGBOX_DEFAULT
# 248 "data/maps/FrostfireCity/scripts.pory"
	waitmoncry
# 249 "data/maps/FrostfireCity/scripts.pory"
	release
	end


Frosthearth_OldWomanSand::
# 259 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_OldWomanSand_Text, MSGBOX_SIGN
	return


Frosthearth_ExpertSand::
# 265 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_ExpertSand_Text, MSGBOX_SIGN
	return


Frosthearth_Girl3::
# 274 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Girl3_Text, MSGBOX_NPC
	return


Frosthearth_OldWomanSprings1::
# 283 "data/maps/FrostfireCity/scripts.pory"
	msgbox DoIKnowYou, MSGBOX_NPC
# 284 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	return


Frosthearth_OldWomanSprings2::
# 287 "data/maps/FrostfireCity/scripts.pory"
	msgbox DoIKnowYou, MSGBOX_NPC
# 288 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	return


Frosthearth_LoneOldWoman::
# 294 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_LoneOldWoman_Text, MSGBOX_NPC
	return


Frosthearth_Swimmer::
# 304 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_HARD_ROCK, 0
	goto_if_eq Frosthearth_Swimmer_1
# 328 "data/maps/FrostfireCity/scripts.pory"
	msgbox FeelingMuchBetter, MSGBOX_SIGN
	end

Frosthearth_Swimmer_1:
# 305 "data/maps/FrostfireCity/scripts.pory"
	lock
# 306 "data/maps/FrostfireCity/scripts.pory"
	msgbox RestingOnSomethingHard
# 307 "data/maps/FrostfireCity/scripts.pory"
	closemessage
# 308 "data/maps/FrostfireCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 309 "data/maps/FrostfireCity/scripts.pory"
	addobject 28
# 310 "data/maps/FrostfireCity/scripts.pory"
	playse SE_FALL
# 311 "data/maps/FrostfireCity/scripts.pory"
	safefollow
# 312 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_0, 45
	goto_if_eq Frosthearth_Swimmer_5
# 317 "data/maps/FrostfireCity/scripts.pory"
	applymovement 28, Frosthearth_Swimmer_Movement_1
# 318 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 2
Frosthearth_Swimmer_4:
# 320 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 322 "data/maps/FrostfireCity/scripts.pory"
	delay 30
# 323 "data/maps/FrostfireCity/scripts.pory"
	msgbox NowThatsBetter
# 324 "data/maps/FrostfireCity/scripts.pory"
	release
	end

Frosthearth_Swimmer_5:
# 313 "data/maps/FrostfireCity/scripts.pory"
	applymovement 28, Frosthearth_Swimmer_Movement_0
# 314 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 1
	goto Frosthearth_Swimmer_4


Frosthearth_HardRock::
	checkitemspace ITEM_HARD_STONE
# 0 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Frosthearth_HardRock_2
Frosthearth_HardRock_1:
# 351 "data/maps/FrostfireCity/scripts.pory"
	finditem ITEM_HARD_STONE
	return

Frosthearth_HardRock_2:
# 349 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 3
	goto Frosthearth_HardRock_1


Frosthearth_Boy2::
# 355 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 0
	goto_if_eq Frosthearth_Boy2_1
# 365 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_lt Frosthearth_Boy2_2
# 373 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_eq Frosthearth_Boy2_3
# 390 "data/maps/FrostfireCity/scripts.pory"
	msgbox ThankYouForFindingRufflet, MSGBOX_NPC
	return

Frosthearth_Boy2_1:
# 356 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_RUFFLET, 1
# 357 "data/maps/FrostfireCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 358 "data/maps/FrostfireCity/scripts.pory"
	msgbox MissingRuffletStart, MSGBOX_NPC
# 359 "data/maps/FrostfireCity/scripts.pory"
	goto_if_unset FLAG_Q40_FROSTHEARTH_RUFFLET_START, Frosthearth_Boy2_9
Frosthearth_Boy2_8:
	end

Frosthearth_Boy2_2:
# 366 "data/maps/FrostfireCity/scripts.pory"
	msgbox PleaseFindRufflet, MSGBOX_NPC
# 367 "data/maps/FrostfireCity/scripts.pory"
	goto_if_unset FLAG_Q40_FROSTHEARTH_RUFFLET_START, Frosthearth_Boy2_12
Frosthearth_Boy2_11:
	end

Frosthearth_Boy2_3:
# 374 "data/maps/FrostfireCity/scripts.pory"
	lock
# 375 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 376 "data/maps/FrostfireCity/scripts.pory"
	msgbox FindRuffletReward
# 377 "data/maps/FrostfireCity/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 378 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_Boy2_15
Frosthearth_Boy2_14:
# 381 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_RUFFLET, 10
# 382 "data/maps/FrostfireCity/scripts.pory"
	release
# 383 "data/maps/FrostfireCity/scripts.pory"
	goto_if_set FLAG_Q40_FROSTHEARTH_RUFFLET_START, Frosthearth_Boy2_18
Frosthearth_Boy2_17:
	end

Frosthearth_Boy2_9:
# 360 "data/maps/FrostfireCity/scripts.pory"
	startquest FLAG_Q40_FROSTHEARTH_RUFFLET_START
# 361 "data/maps/FrostfireCity/scripts.pory"
	special ShowJournalPopupAdd
	goto Frosthearth_Boy2_8

Frosthearth_Boy2_12:
# 368 "data/maps/FrostfireCity/scripts.pory"
	startquest FLAG_Q40_FROSTHEARTH_RUFFLET_START
# 369 "data/maps/FrostfireCity/scripts.pory"
	special ShowJournalPopupAdd
	goto Frosthearth_Boy2_11

Frosthearth_Boy2_15:
# 379 "data/maps/FrostfireCity/scripts.pory"
	goto ZeBagIsFull
	goto Frosthearth_Boy2_14

Frosthearth_Boy2_18:
# 384 "data/maps/FrostfireCity/scripts.pory"
	completequest FLAG_Q40_FROSTHEARTH_RUFFLET_COMPLETE
# 385 "data/maps/FrostfireCity/scripts.pory"
	special ShowJournalPopupRemove
	goto Frosthearth_Boy2_17


Frosthearth_Rufflet::
# 417 "data/maps/FrostfireCity/scripts.pory"
	lock
# 418 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 419 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 420 "data/maps/FrostfireCity/scripts.pory"
	safefollow
# 421 "data/maps/FrostfireCity/scripts.pory"
	playmoncry SPECIES_RUFFLET, CRY_MODE_NORMAL
# 422 "data/maps/FrostfireCity/scripts.pory"
	waitmoncry
# 423 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_ge Frosthearth_Rufflet_2
# 427 "data/maps/FrostfireCity/scripts.pory"
	delay 30
# 428 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_FROSTHEARTH_RUFFLET, 1
# 429 "data/maps/FrostfireCity/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 430 "data/maps/FrostfireCity/scripts.pory"
	switch VAR_FROSTHEARTH_RUFFLET
# 431 "data/maps/FrostfireCity/scripts.pory"
	case 2, Frosthearth_Rufflet_6
# 441 "data/maps/FrostfireCity/scripts.pory"
	case 3, Frosthearth_Rufflet_7
# 451 "data/maps/FrostfireCity/scripts.pory"
	case 4, Frosthearth_Rufflet_8
# 461 "data/maps/FrostfireCity/scripts.pory"
	case 5, Frosthearth_Rufflet_9
# 471 "data/maps/FrostfireCity/scripts.pory"
	case 6, Frosthearth_Rufflet_10
Frosthearth_Rufflet_4:
# 482 "data/maps/FrostfireCity/scripts.pory"
	delay 48
# 483 "data/maps/FrostfireCity/scripts.pory"
	release
	end

Frosthearth_Rufflet_2:
# 424 "data/maps/FrostfireCity/scripts.pory"
	release
	end

Frosthearth_Rufflet_6:
# 432 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Frosthearth_Rufflet_12
# 436 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_1
Frosthearth_Rufflet_11:
# 438 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 439 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 37, 11
# 440 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 37, 11
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_7:
# 442 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 37
	goto_if_eq Frosthearth_Rufflet_16
# 446 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_3
Frosthearth_Rufflet_15:
# 448 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 449 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 47, 29
# 450 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 47, 29
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_8:
# 452 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 46
	goto_if_eq Frosthearth_Rufflet_20
# 456 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_5
Frosthearth_Rufflet_19:
# 458 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 459 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 39, 41
# 460 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 39, 41
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_9:
# 462 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 38
	goto_if_eq Frosthearth_Rufflet_24
# 466 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_7
Frosthearth_Rufflet_23:
# 468 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 469 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 7, 27
# 470 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 7, 27
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_10:
# 472 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Frosthearth_Rufflet_28
# 476 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_9
Frosthearth_Rufflet_27:
# 478 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 479 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 10, 43
# 480 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 10, 43
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_12:
# 433 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_0
	goto Frosthearth_Rufflet_11

Frosthearth_Rufflet_16:
# 443 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_2
	goto Frosthearth_Rufflet_15

Frosthearth_Rufflet_20:
# 453 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_4
	goto Frosthearth_Rufflet_19

Frosthearth_Rufflet_24:
# 463 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_6
	goto Frosthearth_Rufflet_23

Frosthearth_Rufflet_28:
# 473 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_8
	goto Frosthearth_Rufflet_27


FrosthearthBottleCapReward::
# 488 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_TEMP_5, 0
# 489 "data/maps/FrostfireCity/scripts.pory"
	applymovement 29, FrosthearthBottleCapReward_Movement_0
# 490 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
FrosthearthBottleCapReward_2:
# 491 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_WINS_AT_PWT, 3
	goto_if_ge FrosthearthBottleCapReward_3
# 495 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_eq FrosthearthBottleCapReward_6
# 500 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_1, FrosthearthBottleCapReward_Text_2
# 501 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_2, FrosthearthBottleCapReward_Text_3
FrosthearthBottleCapReward_5:
# 503 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrosthearthBottleCapReward_Text
# 504 "data/maps/FrostfireCity/scripts.pory"
	giveitem ITEM_BOTTLE_CAP, VAR_TEMP_6
# 505 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrosthearthBottleCapReward_10
# 514 "data/maps/FrostfireCity/scripts.pory"
	goto_if_unset FLAG_BOTTLE_CAP_INTRO, FrosthearthBottleCapReward_18
FrosthearthBottleCapReward_17:
# 518 "data/maps/FrostfireCity/scripts.pory"
	msgbox BottleCapGuyCheersOn2
FrosthearthBottleCapReward_9:
# 520 "data/maps/FrostfireCity/scripts.pory"
	closemessage
# 521 "data/maps/FrostfireCity/scripts.pory"
	applymovement 29, FrosthearthBottleCapReward_Movement_1
# 522 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/FrostfireCity/scripts.pory"
	delay 30
# 524 "data/maps/FrostfireCity/scripts.pory"
	removeobject 0
# 525 "data/maps/FrostfireCity/scripts.pory"
	release
	return

FrosthearthBottleCapReward_3:
# 492 "data/maps/FrostfireCity/scripts.pory"
	subvar VAR_WINS_AT_PWT, 3
# 493 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_TEMP_6, 1
	goto FrosthearthBottleCapReward_2

FrosthearthBottleCapReward_6:
# 496 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_1, FrosthearthBottleCapReward_Text_0
# 497 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_2, FrosthearthBottleCapReward_Text_1
	goto FrosthearthBottleCapReward_5

FrosthearthBottleCapReward_10:
# 506 "data/maps/FrostfireCity/scripts.pory"
	msgbox GiveCapsLater
FrosthearthBottleCapReward_14:
# 507 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_ne FrosthearthBottleCapReward_15
# 511 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_BOTTLECAPS_WAITING
	goto FrosthearthBottleCapReward_9

FrosthearthBottleCapReward_15:
# 508 "data/maps/FrostfireCity/scripts.pory"
	subvar VAR_TEMP_6, 1
# 509 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_WINS_AT_PWT, 3
	goto FrosthearthBottleCapReward_14

FrosthearthBottleCapReward_18:
# 515 "data/maps/FrostfireCity/scripts.pory"
	msgbox BottleCapGuyCheersOn
# 516 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_BOTTLE_CAP_INTRO
	goto FrosthearthBottleCapReward_17


# 313 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Swimmer_Movement_0:
# 313 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 313 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 317 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Swimmer_Movement_1:
# 317 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 317 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
	step_end

# 433 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_0:
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 433 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 436 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_1:
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 436 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 443 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_2:
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 443 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 446 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_3:
# 446 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 446 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 446 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 446 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 446 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 446 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 446 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 453 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_4:
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 453 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
	step_end

# 456 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_5:
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_diag_southwest
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_diag_southwest
# 456 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 463 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_6:
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 463 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 466 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_7:
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 466 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 473 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_8:
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 473 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 476 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_9:
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 476 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 489 "data/maps/FrostfireCity/scripts.pory"
FrosthearthBottleCapReward_Movement_0:
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 489 "data/maps/FrostfireCity/scripts.pory"
	walk_up
	step_end

# 521 "data/maps/FrostfireCity/scripts.pory"
FrosthearthBottleCapReward_Movement_1:
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_down
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 521 "data/maps/FrostfireCity/scripts.pory"
	walk_right
	step_end

FrosthearthBottleCapReward_Text_0:
# 496 "data/maps/FrostfireCity/scripts.pory"
	.string "this$"

FrosthearthBottleCapReward_Text_1:
# 497 "data/maps/FrostfireCity/scripts.pory"
	.string "that$"

FrosthearthBottleCapReward_Text_2:
# 500 "data/maps/FrostfireCity/scripts.pory"
	.string "these$"

FrosthearthBottleCapReward_Text_3:
# 501 "data/maps/FrostfireCity/scripts.pory"
	.string "those$"

FrostHearth_Sign1_Text::
# 77 "data/maps/FrostfireCity/scripts.pory"
	.string "Frosthearth City Pokémon Gym\n"
	.string "Leaders: Blaine & Pryce$"

FrostHearth_Sign2_Text::
# 81 "data/maps/FrostfireCity/scripts.pory"
	.string "Hearth Motel\n"
	.string "“Home is where the hearth is.”$"

FrostHearth_Sign3_Text::
# 85 "data/maps/FrostfireCity/scripts.pory"
	.string "Frosthearth Harbor$"

FrostHearth_Sign4_Text::
# 88 "data/maps/FrostfireCity/scripts.pory"
	.string "Frosthearth City Pokémon Fan Club$"

FrostHearth_Sign5_Text::
# 91 "data/maps/FrostfireCity/scripts.pory"
	.string "The Pokémon World Tournament$"

FrostHearth_Sign6_Text::
# 94 "data/maps/FrostfireCity/scripts.pory"
	.string "Mr. Hyper's Hyper Training School\n"
	.string "“Train your Pokémon like a pro!”$"

FrostHearth_Sign7_Text::
# 98 "data/maps/FrostfireCity/scripts.pory"
	.string "FROSTHEARTH CITY\n"
	.string "“The capitol of the north.”$"

Frosthearth_GymUnavailable_Text::
# 107 "data/maps/FrostfireCity/scripts.pory"
	.string "I'm sorry, but we can't currently\n"
	.string "accept new challengers.\p"
	.string "The Gym Leader has gone to explore\n"
	.string "the Frigid Frontier, and has yet\l"
	.string "to return.$"

Frosthearth_Maniac_Text::
# 118 "data/maps/FrostfireCity/scripts.pory"
	.string "Pokémon World Tournament…\p"
	.string "So many great trainers have made\n"
	.string "a name for themselves here.\p"
	.string "I feel like I'm standing on\n"
	.string "holy ground here!$"

Frosthearth_Man5_Text::
# 128 "data/maps/FrostfireCity/scripts.pory"
	.string "Anyone who seems themselves a\n"
	.string "worthwhile trainer must participate\l"
	.string "in the Pokémon World Tournament\l"
	.string "at least once in their lifetime!$"

Frosthearth_NinjaBoy_Text::
# 137 "data/maps/FrostfireCity/scripts.pory"
	.string "I've just arrived in Frosthearth,\n"
	.string "but I have no idea where I want\l"
	.string "to go first.$"

Frosthearth_Sailor_Text::
# 145 "data/maps/FrostfireCity/scripts.pory"
	.string "The ship here travels to other\n"
	.string "well-established harbors.\p"
	.string "If you're looking to get to Route 20,\n"
	.string "you'll need to surf across the ocean,\l"
	.string "or hire someone to ferry you over.$"

Frosthearth_FilmingCrew_Text::
# 155 "data/maps/FrostfireCity/scripts.pory"
	.string "The filming crew seems to be busy\n"
	.string "filming some kind of documentary.$"

Frosthearth_Lass1_Text::
# 165 "data/maps/FrostfireCity/scripts.pory"
	.string "Have you been to the Frosthearth\n"
	.string "Pokémon Gym?\p"
	.string "They say there's no other\n"
	.string "Pokémon Gym like it!$"

Frosthearth_Lass2_Text::
# 171 "data/maps/FrostfireCity/scripts.pory"
	.string "You don't look like a local.\n"
	.string "Aren't you cold in that get-up?$"

Frosthearth_OldMan_Text::
# 190 "data/maps/FrostfireCity/scripts.pory"
	.string "Make sure to keep you and your\n"
	.string "Pokémon warm in this weather.$"

Frosthearth_OldMan_Text2::
# 194 "data/maps/FrostfireCity/scripts.pory"
	.string "It's very important to keep your\n"
	.string "energy levels up in cold weather.\p"
	.string "Here, take this.$"

Frosthearth_Twin_Text::
# 202 "data/maps/FrostfireCity/scripts.pory"
	.string "Did you know that sometimes the sky\n"
	.string "catches on fire?\p"
	.string "It's true!\p"
	.string "The adults call it Ara…{PAUSE 48} Arora Bol…{PAUSE 48}\n"
	.string "Aura…{PAUSE 96} The northern lights.$"

Frosthearth_Girl_Text::
# 212 "data/maps/FrostfireCity/scripts.pory"
	.string "It's fun making snow angels\n"
	.string "in the snow!$"

Frosthearth_HoundourTrainer_Text::
# 220 "data/maps/FrostfireCity/scripts.pory"
	.string "I've been training my Pokémon\n"
	.string "diligently, and soon we'll be\l"
	.string "able to take on the Pokémon Gym!$"

Frosthearth_Houndour1_Text::
# 236 "data/maps/FrostfireCity/scripts.pory"
	.string "Houndour: Bow! Bowwow!\p"
	.string "The Houndour seems to be\n"
	.string "paying close attention to\l"
	.string "its owner's commands.$"

Frosthearth_Houndour2_Text::
# 252 "data/maps/FrostfireCity/scripts.pory"
	.string "Houndour: Bow! Bowwow!\p"
	.string "The Houndour seems to be\n"
	.string "having hard time following\l"
	.string "its owner's commands.$"

Frosthearth_OldWomanSand_Text::
# 261 "data/maps/FrostfireCity/scripts.pory"
	.string "Zzz…$"

Frosthearth_ExpertSand_Text::
# 267 "data/maps/FrostfireCity/scripts.pory"
	.string "It is believed that the hot springs\n"
	.string "can extend a person's life expectancy.\p"
	.string "You may not believe it,\n"
	.string "but I'm over 90 years old!$"

Frosthearth_Girl3_Text::
# 276 "data/maps/FrostfireCity/scripts.pory"
	.string "Coming from Basalek Town to\n"
	.string "Frosthearth can be a bit of a shock.\p"
	.string "That's why I'm acclimatizing by\n"
	.string "resting in the hot spring.$"

DoIKnowYou::
# 290 "data/maps/FrostfireCity/scripts.pory"
	.string "I'm sorry… Do I know you?$"

Frosthearth_LoneOldWoman_Text::
# 296 "data/maps/FrostfireCity/scripts.pory"
	.string "There are many hot springs in\n"
	.string "this city.\p"
	.string "Many of the people end up going to\n"
	.string "the one near the motel, so this one\l"
	.string "ends up being all peaceful and quiet.$"

RestingOnSomethingHard::
# 333 "data/maps/FrostfireCity/scripts.pory"
	.string "Ow ow ow!\p"
	.string "I think I'm resting on a stone\n"
	.string "or something.$"

NowThatsBetter::
# 338 "data/maps/FrostfireCity/scripts.pory"
	.string "Much better!$"

FeelingMuchBetter::
# 341 "data/maps/FrostfireCity/scripts.pory"
	.string "Ahh…\p"
	.string "Feeling much better now that\n"
	.string "the stone is gone.$"

MissingRuffletStart::
# 393 "data/maps/FrostfireCity/scripts.pory"
	.string "Have you seen a Rufflet\n"
	.string "wandering around the city?\p"
	.string "My pet Rufflet got spooked by\n"
	.string "something, fled, and now I can\l"
	.string "no longer find it.$"

PleaseFindRufflet::
# 400 "data/maps/FrostfireCity/scripts.pory"
	.string "If you spot a lost looking Rufflet,\n"
	.string "try and catch it, okay?$"

FindRuffletReward::
# 404 "data/maps/FrostfireCity/scripts.pory"
	.string "My Rufflet came running back to me\n"
	.string "just before you arrived!\p"
	.string "Thank you for helping me get it back!\p"
	.string "I'm not sure how else to thank you,\n"
	.string "so I hope this will suffice.$"

ThankYouForFindingRufflet::
# 411 "data/maps/FrostfireCity/scripts.pory"
	.string "Thank you for guiding my Rufflet\n"
	.string "back to me!$"

FrosthearthBottleCapReward_Text::
# 528 "data/maps/FrostfireCity/scripts.pory"
	.string "You're the kid who's been climbing\n"
	.string "ranks in the Pokémon World Tournament.\p"
	.string "Color me impressed!\p"
	.string "I was going to use {STR_VAR_1} myself,\n"
	.string "but now I want to see the heights you\l"
	.string "can reach when your potential is\l"
	.string "pushed to its limits.$"

GiveCapsLater::
# 537 "data/maps/FrostfireCity/scripts.pory"
	.string "Oh, but it looks like you don't\n"
	.string "have room in your bag…\p"
	.string "Well, you just keep on winning\n"
	.string "and the next time we meet,\l"
	.string "maybe I'll have an even bigger\l"
	.string "prize for you!$"

BottleCapGuyCheersOn::
# 545 "data/maps/FrostfireCity/scripts.pory"
	.string "There's a great Pokémon master\n"
	.string "residing in this city.\p"
	.string "You should find him and bring\n"
	.string "{STR_VAR_2} to him.$"

BottleCapGuyCheersOn2::
# 551 "data/maps/FrostfireCity/scripts.pory"
	.string "I hope you'll keep climbing the\n"
	.string "ranks!$"
