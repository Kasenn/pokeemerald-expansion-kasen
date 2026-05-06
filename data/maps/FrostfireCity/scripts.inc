FrostfireCity_MapScripts::
# 6 "data/maps/FrostfireCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 55 "data/maps/FrostfireCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FrostfireCity_MapScripts_MAP_SCRIPT_ON_RESUME
# 52 "data/maps/FrostfireCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FrostfireCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_3
# 8 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_HOUR_OVERRIDE, 0
# 9 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_MINUTE_OVERRIDE, 0
# 10 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_VISITED_FROSTHEARTH
# 11 "data/maps/FrostfireCity/scripts.pory"
	switch VAR_FROSTHEARTH_RUFFLET
# 12 "data/maps/FrostfireCity/scripts.pory"
	case 2, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 14 "data/maps/FrostfireCity/scripts.pory"
	case 3, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 16 "data/maps/FrostfireCity/scripts.pory"
	case 4, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 18 "data/maps/FrostfireCity/scripts.pory"
	case 5, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 20 "data/maps/FrostfireCity/scripts.pory"
	case 6, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 0
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 23 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 10
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 26 "data/maps/FrostfireCity/scripts.pory"
	switch VAR_FROSTHEARTH_HARD_ROCK
# 27 "data/maps/FrostfireCity/scripts.pory"
	case 0, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 29 "data/maps/FrostfireCity/scripts.pory"
	case 1, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 31 "data/maps/FrostfireCity/scripts.pory"
	case 2, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 33 "data/maps/FrostfireCity/scripts.pory"
	case 3, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 36 "data/maps/FrostfireCity/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 37 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_WINS_AT_PWT, 3
	goto_if_ge FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 13 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 37, 11
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 47, 29
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 17 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 39, 41
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 19 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 7, 27
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 21 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 10, 43
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 24 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_2
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 28 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_1
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 30 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 28, 42, 40
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 32 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 28, 46, 40
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 34 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_TEMP_1
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 38 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_TEMP_5, 1
# 39 "data/maps/FrostfireCity/scripts.pory"
	goto_if_set FLAG_BOTTLECAPS_WAITING, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 37 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 24
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 40 "data/maps/FrostfireCity/scripts.pory"
	copyvar VAR_TEMP_7, VAR_WINS_AT_PWT
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 41 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_7, 3
	goto_if_ge FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
# 45 "data/maps/FrostfireCity/scripts.pory"
	checkitemspace ITEM_BOTTLE_CAP, VAR_TEMP_6
# 46 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 42 "data/maps/FrostfireCity/scripts.pory"
	subvar VAR_TEMP_7, 3
# 43 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_TEMP_6, 1
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 47 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 56 "data/maps/FrostfireCity/scripts.pory"
	setstepcallback STEP_CB_DUMMY
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 53 "data/maps/FrostfireCity/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, FrosthearthBottleCapReward
	.2byte 0


FrostHearth_Sign1::
# 62 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign1_Text, MSGBOX_SIGN
	return


FrostHearth_Sign2::
# 65 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign2_Text, MSGBOX_SIGN
	return


FrostHearth_Sign3::
# 68 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign3_Text, MSGBOX_SIGN
	return


FrostHearth_Sign4::
# 71 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign4_Text, MSGBOX_SIGN
	return


FrostHearth_Sign5::
# 74 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign5_Text, MSGBOX_SIGN
	return


FrostHearth_Sign6::
# 77 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign6_Text, MSGBOX_SIGN
	return


FrostHearth_Sign7::
# 80 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrostHearth_Sign7_Text, MSGBOX_SIGN
	return


Frosthearth_GymUnavailable::
# 110 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_GymUnavailable_Text, MSGBOX_NPC
# 111 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_FIND_PRYCE_QUEST
	return


Frosthearth_Maniac::
# 122 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Maniac_Text, MSGBOX_NPC
	return


Frosthearth_Man5::
# 132 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Man5_Text, MSGBOX_NPC
	return


Frosthearth_NinjaBoy::
# 141 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_NinjaBoy_Text, MSGBOX_NPC
	return


Frosthearth_Sailor::
# 149 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Sailor_Text, MSGBOX_NPC
	return


Frosthearth_FilmingCrew::
# 159 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_FilmingCrew_Text, MSGBOX_SIGN
	return


Frosthearth_Lass1::
# 166 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Lass1_Text, MSGBOX_NPC
	return


Frosthearth_Lass2::
# 169 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Lass2_Text, MSGBOX_NPC
	return


Frosthearth_OldMan::
# 182 "data/maps/FrostfireCity/scripts.pory"
	goto_if_set FLAG_CHOCOLATE_FROM_OLD_MAN, Frosthearth_OldMan_2
# 186 "data/maps/FrostfireCity/scripts.pory"
	lock
# 187 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 188 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_OldMan_Text2
# 189 "data/maps/FrostfireCity/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
# 190 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_OldMan_5
Frosthearth_OldMan_4:
# 193 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_CHOCOLATE_FROM_OLD_MAN
# 194 "data/maps/FrostfireCity/scripts.pory"
	release
	return

Frosthearth_OldMan_2:
# 183 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_OldMan_Text, MSGBOX_NPC
	end

Frosthearth_OldMan_5:
# 191 "data/maps/FrostfireCity/scripts.pory"
	goto ZeBagIsFull
	goto Frosthearth_OldMan_4


Frosthearth_Twin::
# 206 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Twin_Text, MSGBOX_NPC
	return


Frosthearth_Girl::
# 216 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Girl_Text, MSGBOX_NPC
	return


Frosthearth_HoundourTrainer::
# 223 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_HoundourTrainer_Text, MSGBOX_NPC
# 224 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	return


Frosthearth_Houndour1::
# 232 "data/maps/FrostfireCity/scripts.pory"
	lock
# 233 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 234 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 235 "data/maps/FrostfireCity/scripts.pory"
	playmoncry SPECIES_HOUNDOUR, CRY_MODE_NORMAL
# 236 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Houndour1_Text, MSGBOX_DEFAULT
# 237 "data/maps/FrostfireCity/scripts.pory"
	waitmoncry
# 238 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
# 239 "data/maps/FrostfireCity/scripts.pory"
	release
	end


Frosthearth_Houndour2::
# 249 "data/maps/FrostfireCity/scripts.pory"
	lock
# 250 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 251 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 252 "data/maps/FrostfireCity/scripts.pory"
	playmoncry SPECIES_HOUNDOUR, CRY_MODE_NORMAL
# 253 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Houndour2_Text, MSGBOX_DEFAULT
# 254 "data/maps/FrostfireCity/scripts.pory"
	waitmoncry
# 255 "data/maps/FrostfireCity/scripts.pory"
	release
	end


Frosthearth_OldWomanSand::
# 265 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_OldWomanSand_Text, MSGBOX_SIGN
	return


Frosthearth_ExpertSand::
# 271 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_ExpertSand_Text, MSGBOX_SIGN
	return


Frosthearth_Girl3::
# 280 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_Girl3_Text, MSGBOX_NPC
	return


Frosthearth_OldWomanSprings1::
# 289 "data/maps/FrostfireCity/scripts.pory"
	msgbox DoIKnowYou, MSGBOX_NPC
# 290 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	return


Frosthearth_OldWomanSprings2::
# 293 "data/maps/FrostfireCity/scripts.pory"
	msgbox DoIKnowYou, MSGBOX_NPC
# 294 "data/maps/FrostfireCity/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	return


Frosthearth_LoneOldWoman::
# 300 "data/maps/FrostfireCity/scripts.pory"
	msgbox Frosthearth_LoneOldWoman_Text, MSGBOX_NPC
	return


Frosthearth_Swimmer::
# 310 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_HARD_ROCK, 0
	goto_if_eq Frosthearth_Swimmer_1
# 334 "data/maps/FrostfireCity/scripts.pory"
	msgbox FeelingMuchBetter, MSGBOX_SIGN
	end

Frosthearth_Swimmer_1:
# 311 "data/maps/FrostfireCity/scripts.pory"
	lock
# 312 "data/maps/FrostfireCity/scripts.pory"
	msgbox RestingOnSomethingHard
# 313 "data/maps/FrostfireCity/scripts.pory"
	closemessage
# 314 "data/maps/FrostfireCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 315 "data/maps/FrostfireCity/scripts.pory"
	addobject 28
# 316 "data/maps/FrostfireCity/scripts.pory"
	playse SE_FALL
# 317 "data/maps/FrostfireCity/scripts.pory"
	safefollow
# 318 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_0, 45
	goto_if_eq Frosthearth_Swimmer_5
# 323 "data/maps/FrostfireCity/scripts.pory"
	applymovement 28, Frosthearth_Swimmer_Movement_1
# 324 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 2
Frosthearth_Swimmer_4:
# 326 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 328 "data/maps/FrostfireCity/scripts.pory"
	delay 30
# 329 "data/maps/FrostfireCity/scripts.pory"
	msgbox NowThatsBetter
# 330 "data/maps/FrostfireCity/scripts.pory"
	release
	end

Frosthearth_Swimmer_5:
# 319 "data/maps/FrostfireCity/scripts.pory"
	applymovement 28, Frosthearth_Swimmer_Movement_0
# 320 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 1
	goto Frosthearth_Swimmer_4


Frosthearth_HardRock::
	checkitemspace ITEM_HARD_STONE
# 0 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Frosthearth_HardRock_2
Frosthearth_HardRock_1:
# 357 "data/maps/FrostfireCity/scripts.pory"
	finditem ITEM_HARD_STONE
	return

Frosthearth_HardRock_2:
# 355 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 3
	goto Frosthearth_HardRock_1


Frosthearth_Boy2::
# 361 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 0
	goto_if_eq Frosthearth_Boy2_1
# 371 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_lt Frosthearth_Boy2_2
# 379 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_eq Frosthearth_Boy2_3
# 396 "data/maps/FrostfireCity/scripts.pory"
	msgbox ThankYouForFindingRufflet, MSGBOX_NPC
	return

Frosthearth_Boy2_1:
# 362 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_RUFFLET, 1
# 363 "data/maps/FrostfireCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 364 "data/maps/FrostfireCity/scripts.pory"
	msgbox MissingRuffletStart, MSGBOX_NPC
# 365 "data/maps/FrostfireCity/scripts.pory"
	goto_if_unset FLAG_Q40_FROSTHEARTH_RUFFLET_START, Frosthearth_Boy2_9
Frosthearth_Boy2_8:
	end

Frosthearth_Boy2_2:
# 372 "data/maps/FrostfireCity/scripts.pory"
	msgbox PleaseFindRufflet, MSGBOX_NPC
# 373 "data/maps/FrostfireCity/scripts.pory"
	goto_if_unset FLAG_Q40_FROSTHEARTH_RUFFLET_START, Frosthearth_Boy2_12
Frosthearth_Boy2_11:
	end

Frosthearth_Boy2_3:
# 380 "data/maps/FrostfireCity/scripts.pory"
	lock
# 381 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 382 "data/maps/FrostfireCity/scripts.pory"
	msgbox FindRuffletReward
# 383 "data/maps/FrostfireCity/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 384 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_Boy2_15
Frosthearth_Boy2_14:
# 387 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_FROSTHEARTH_RUFFLET, 10
# 388 "data/maps/FrostfireCity/scripts.pory"
	release
# 389 "data/maps/FrostfireCity/scripts.pory"
	goto_if_set FLAG_Q40_FROSTHEARTH_RUFFLET_START, Frosthearth_Boy2_18
Frosthearth_Boy2_17:
	end

Frosthearth_Boy2_9:
# 366 "data/maps/FrostfireCity/scripts.pory"
	startquest FLAG_Q40_FROSTHEARTH_RUFFLET_START
# 367 "data/maps/FrostfireCity/scripts.pory"
	special ShowJournalPopupAdd
	goto Frosthearth_Boy2_8

Frosthearth_Boy2_12:
# 374 "data/maps/FrostfireCity/scripts.pory"
	startquest FLAG_Q40_FROSTHEARTH_RUFFLET_START
# 375 "data/maps/FrostfireCity/scripts.pory"
	special ShowJournalPopupAdd
	goto Frosthearth_Boy2_11

Frosthearth_Boy2_15:
# 385 "data/maps/FrostfireCity/scripts.pory"
	goto ZeBagIsFull
	goto Frosthearth_Boy2_14

Frosthearth_Boy2_18:
# 390 "data/maps/FrostfireCity/scripts.pory"
	completequest FLAG_Q40_FROSTHEARTH_RUFFLET_COMPLETE
# 391 "data/maps/FrostfireCity/scripts.pory"
	special ShowJournalPopupRemove
	goto Frosthearth_Boy2_17


Frosthearth_Rufflet::
# 423 "data/maps/FrostfireCity/scripts.pory"
	lock
# 424 "data/maps/FrostfireCity/scripts.pory"
	faceplayer
# 425 "data/maps/FrostfireCity/scripts.pory"
	waitse
# 426 "data/maps/FrostfireCity/scripts.pory"
	safefollow
# 427 "data/maps/FrostfireCity/scripts.pory"
	playmoncry SPECIES_RUFFLET, CRY_MODE_NORMAL
# 428 "data/maps/FrostfireCity/scripts.pory"
	waitmoncry
# 429 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_ge Frosthearth_Rufflet_2
# 433 "data/maps/FrostfireCity/scripts.pory"
	delay 30
# 434 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_FROSTHEARTH_RUFFLET, 1
# 435 "data/maps/FrostfireCity/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 436 "data/maps/FrostfireCity/scripts.pory"
	switch VAR_FROSTHEARTH_RUFFLET
# 437 "data/maps/FrostfireCity/scripts.pory"
	case 2, Frosthearth_Rufflet_6
# 447 "data/maps/FrostfireCity/scripts.pory"
	case 3, Frosthearth_Rufflet_7
# 457 "data/maps/FrostfireCity/scripts.pory"
	case 4, Frosthearth_Rufflet_8
# 467 "data/maps/FrostfireCity/scripts.pory"
	case 5, Frosthearth_Rufflet_9
# 477 "data/maps/FrostfireCity/scripts.pory"
	case 6, Frosthearth_Rufflet_10
Frosthearth_Rufflet_4:
# 488 "data/maps/FrostfireCity/scripts.pory"
	delay 48
# 489 "data/maps/FrostfireCity/scripts.pory"
	release
	end

Frosthearth_Rufflet_2:
# 430 "data/maps/FrostfireCity/scripts.pory"
	release
	end

Frosthearth_Rufflet_6:
# 438 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Frosthearth_Rufflet_12
# 442 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_1
Frosthearth_Rufflet_11:
# 444 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 37, 11
# 446 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 37, 11
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_7:
# 448 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 37
	goto_if_eq Frosthearth_Rufflet_16
# 452 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_3
Frosthearth_Rufflet_15:
# 454 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 455 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 47, 29
# 456 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 47, 29
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_8:
# 458 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 46
	goto_if_eq Frosthearth_Rufflet_20
# 462 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_5
Frosthearth_Rufflet_19:
# 464 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 465 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 39, 41
# 466 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 39, 41
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_9:
# 468 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 38
	goto_if_eq Frosthearth_Rufflet_24
# 472 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_7
Frosthearth_Rufflet_23:
# 474 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 475 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 7, 27
# 476 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 7, 27
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_10:
# 478 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Frosthearth_Rufflet_28
# 482 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_9
Frosthearth_Rufflet_27:
# 484 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 485 "data/maps/FrostfireCity/scripts.pory"
	setobjectxy 25, 10, 43
# 486 "data/maps/FrostfireCity/scripts.pory"
	setobjectxyperm 25, 10, 43
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_12:
# 439 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_0
	goto Frosthearth_Rufflet_11

Frosthearth_Rufflet_16:
# 449 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_2
	goto Frosthearth_Rufflet_15

Frosthearth_Rufflet_20:
# 459 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_4
	goto Frosthearth_Rufflet_19

Frosthearth_Rufflet_24:
# 469 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_6
	goto Frosthearth_Rufflet_23

Frosthearth_Rufflet_28:
# 479 "data/maps/FrostfireCity/scripts.pory"
	applymovement 25, Frosthearth_Rufflet_Movement_8
	goto Frosthearth_Rufflet_27


FrosthearthBottleCapReward::
# 494 "data/maps/FrostfireCity/scripts.pory"
	setvar VAR_TEMP_5, 0
# 495 "data/maps/FrostfireCity/scripts.pory"
	applymovement 29, FrosthearthBottleCapReward_Movement_0
# 496 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
FrosthearthBottleCapReward_2:
# 497 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_WINS_AT_PWT, 3
	goto_if_ge FrosthearthBottleCapReward_3
# 501 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_eq FrosthearthBottleCapReward_6
# 506 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_1, FrosthearthBottleCapReward_Text_2
# 507 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_2, FrosthearthBottleCapReward_Text_3
FrosthearthBottleCapReward_5:
# 509 "data/maps/FrostfireCity/scripts.pory"
	msgbox FrosthearthBottleCapReward_Text
# 510 "data/maps/FrostfireCity/scripts.pory"
	giveitem ITEM_BOTTLE_CAP, VAR_TEMP_6
# 511 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrosthearthBottleCapReward_10
# 520 "data/maps/FrostfireCity/scripts.pory"
	goto_if_unset FLAG_BOTTLE_CAP_INTRO, FrosthearthBottleCapReward_18
FrosthearthBottleCapReward_17:
# 524 "data/maps/FrostfireCity/scripts.pory"
	msgbox BottleCapGuyCheersOn2
FrosthearthBottleCapReward_9:
# 526 "data/maps/FrostfireCity/scripts.pory"
	closemessage
# 527 "data/maps/FrostfireCity/scripts.pory"
	applymovement 29, FrosthearthBottleCapReward_Movement_1
# 528 "data/maps/FrostfireCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/FrostfireCity/scripts.pory"
	delay 30
# 530 "data/maps/FrostfireCity/scripts.pory"
	removeobject 0
# 531 "data/maps/FrostfireCity/scripts.pory"
	release
	return

FrosthearthBottleCapReward_3:
# 498 "data/maps/FrostfireCity/scripts.pory"
	subvar VAR_WINS_AT_PWT, 3
# 499 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_TEMP_6, 1
	goto FrosthearthBottleCapReward_2

FrosthearthBottleCapReward_6:
# 502 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_1, FrosthearthBottleCapReward_Text_0
# 503 "data/maps/FrostfireCity/scripts.pory"
	bufferstring STR_VAR_2, FrosthearthBottleCapReward_Text_1
	goto FrosthearthBottleCapReward_5

FrosthearthBottleCapReward_10:
# 512 "data/maps/FrostfireCity/scripts.pory"
	msgbox GiveCapsLater
FrosthearthBottleCapReward_14:
# 513 "data/maps/FrostfireCity/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_ne FrosthearthBottleCapReward_15
# 517 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_BOTTLECAPS_WAITING
	goto FrosthearthBottleCapReward_9

FrosthearthBottleCapReward_15:
# 514 "data/maps/FrostfireCity/scripts.pory"
	subvar VAR_TEMP_6, 1
# 515 "data/maps/FrostfireCity/scripts.pory"
	addvar VAR_WINS_AT_PWT, 3
	goto FrosthearthBottleCapReward_14

FrosthearthBottleCapReward_18:
# 521 "data/maps/FrostfireCity/scripts.pory"
	msgbox BottleCapGuyCheersOn
# 522 "data/maps/FrostfireCity/scripts.pory"
	setflag FLAG_BOTTLE_CAP_INTRO
	goto FrosthearthBottleCapReward_17


# 319 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Swimmer_Movement_0:
# 319 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 319 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 323 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Swimmer_Movement_1:
# 323 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 323 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
	step_end

# 439 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_0:
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 442 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_1:
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 442 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 449 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_2:
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 449 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 452 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_3:
# 452 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 452 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 452 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 452 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 452 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 452 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 452 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 459 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_4:
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 459 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
	step_end

# 462 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_5:
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_diag_southwest
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_diag_southwest
# 462 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 469 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_6:
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 469 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 472 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_7:
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_up
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
	step_end

# 479 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_8:
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_left
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 479 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 482 "data/maps/FrostfireCity/scripts.pory"
Frosthearth_Rufflet_Movement_9:
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_right
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
# 482 "data/maps/FrostfireCity/scripts.pory"
	walk_fast_down
	step_end

# 495 "data/maps/FrostfireCity/scripts.pory"
FrosthearthBottleCapReward_Movement_0:
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 495 "data/maps/FrostfireCity/scripts.pory"
	walk_up
	step_end

# 527 "data/maps/FrostfireCity/scripts.pory"
FrosthearthBottleCapReward_Movement_1:
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_down
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
# 527 "data/maps/FrostfireCity/scripts.pory"
	walk_right
	step_end

FrosthearthBottleCapReward_Text_0:
# 502 "data/maps/FrostfireCity/scripts.pory"
	.string "this$"

FrosthearthBottleCapReward_Text_1:
# 503 "data/maps/FrostfireCity/scripts.pory"
	.string "that$"

FrosthearthBottleCapReward_Text_2:
# 506 "data/maps/FrostfireCity/scripts.pory"
	.string "these$"

FrosthearthBottleCapReward_Text_3:
# 507 "data/maps/FrostfireCity/scripts.pory"
	.string "those$"

FrostHearth_Sign1_Text::
# 83 "data/maps/FrostfireCity/scripts.pory"
	.string "Frosthearth City Pokémon Gym\n"
	.string "Leaders: Blaine & Pryce$"

FrostHearth_Sign2_Text::
# 87 "data/maps/FrostfireCity/scripts.pory"
	.string "Hearth Motel\n"
	.string "“Home is where the hearth is.”$"

FrostHearth_Sign3_Text::
# 91 "data/maps/FrostfireCity/scripts.pory"
	.string "Frosthearth Harbor$"

FrostHearth_Sign4_Text::
# 94 "data/maps/FrostfireCity/scripts.pory"
	.string "Frosthearth City Pokémon Fan Club$"

FrostHearth_Sign5_Text::
# 97 "data/maps/FrostfireCity/scripts.pory"
	.string "The Pokémon World Tournament$"

FrostHearth_Sign6_Text::
# 100 "data/maps/FrostfireCity/scripts.pory"
	.string "Mr. Hyper's Hyper Training School\n"
	.string "“Train your Pokémon like a pro!”$"

FrostHearth_Sign7_Text::
# 104 "data/maps/FrostfireCity/scripts.pory"
	.string "FROSTHEARTH CITY\n"
	.string "“The capitol of the north.”$"

Frosthearth_GymUnavailable_Text::
# 113 "data/maps/FrostfireCity/scripts.pory"
	.string "I'm sorry, but we can't currently\n"
	.string "accept new challengers.\p"
	.string "The Gym Leader has gone to explore\n"
	.string "the Frigid Frontier, and has yet\l"
	.string "to return.$"

Frosthearth_Maniac_Text::
# 124 "data/maps/FrostfireCity/scripts.pory"
	.string "Pokémon World Tournament…\p"
	.string "So many great trainers have made\n"
	.string "a name for themselves here.\p"
	.string "I feel like I'm standing on\n"
	.string "holy ground here!$"

Frosthearth_Man5_Text::
# 134 "data/maps/FrostfireCity/scripts.pory"
	.string "Anyone who seems themselves a\n"
	.string "worthwhile trainer must participate\l"
	.string "in the Pokémon World Tournament\l"
	.string "at least once in their lifetime!$"

Frosthearth_NinjaBoy_Text::
# 143 "data/maps/FrostfireCity/scripts.pory"
	.string "I've just arrived in Frosthearth,\n"
	.string "but I have no idea where I want\l"
	.string "to go first.$"

Frosthearth_Sailor_Text::
# 151 "data/maps/FrostfireCity/scripts.pory"
	.string "The ship here travels to other\n"
	.string "well-established harbors.\p"
	.string "If you're looking to get to Route 20,\n"
	.string "you'll need to surf across the ocean,\l"
	.string "or hire someone to ferry you over.$"

Frosthearth_FilmingCrew_Text::
# 161 "data/maps/FrostfireCity/scripts.pory"
	.string "The filming crew seems to be busy\n"
	.string "filming some kind of documentary.$"

Frosthearth_Lass1_Text::
# 171 "data/maps/FrostfireCity/scripts.pory"
	.string "Have you been to the Frosthearth\n"
	.string "Pokémon Gym?\p"
	.string "They say there's no other\n"
	.string "Pokémon Gym like it!$"

Frosthearth_Lass2_Text::
# 177 "data/maps/FrostfireCity/scripts.pory"
	.string "You don't look like a local.\n"
	.string "Aren't you cold in that get-up?$"

Frosthearth_OldMan_Text::
# 196 "data/maps/FrostfireCity/scripts.pory"
	.string "Make sure to keep you and your\n"
	.string "Pokémon warm in this weather.$"

Frosthearth_OldMan_Text2::
# 200 "data/maps/FrostfireCity/scripts.pory"
	.string "It's very important to keep your\n"
	.string "energy levels up in cold weather.\p"
	.string "Here, take this.$"

Frosthearth_Twin_Text::
# 208 "data/maps/FrostfireCity/scripts.pory"
	.string "Did you know that sometimes the sky\n"
	.string "catches on fire?\p"
	.string "It's true!\p"
	.string "The adults call it Ara…{PAUSE 48} Arora Bol…{PAUSE 48}\n"
	.string "Aura…{PAUSE 96} The northern lights.$"

Frosthearth_Girl_Text::
# 218 "data/maps/FrostfireCity/scripts.pory"
	.string "It's fun making snow angels\n"
	.string "in the snow!$"

Frosthearth_HoundourTrainer_Text::
# 226 "data/maps/FrostfireCity/scripts.pory"
	.string "I've been training my Pokémon\n"
	.string "diligently, and soon we'll be\l"
	.string "able to take on the Pokémon Gym!$"

Frosthearth_Houndour1_Text::
# 242 "data/maps/FrostfireCity/scripts.pory"
	.string "Houndour: Bow! Bowwow!\p"
	.string "The Houndour seems to be\n"
	.string "paying close attention to\l"
	.string "its owner's commands.$"

Frosthearth_Houndour2_Text::
# 258 "data/maps/FrostfireCity/scripts.pory"
	.string "Houndour: Bow! Bowwow!\p"
	.string "The Houndour seems to be\n"
	.string "having hard time following\l"
	.string "its owner's commands.$"

Frosthearth_OldWomanSand_Text::
# 267 "data/maps/FrostfireCity/scripts.pory"
	.string "Zzz…$"

Frosthearth_ExpertSand_Text::
# 273 "data/maps/FrostfireCity/scripts.pory"
	.string "It is believed that the hot springs\n"
	.string "can extend a person's life expectancy.\p"
	.string "You may not believe it,\n"
	.string "but I'm over 90 years old!$"

Frosthearth_Girl3_Text::
# 282 "data/maps/FrostfireCity/scripts.pory"
	.string "Coming from Basalek Town to\n"
	.string "Frosthearth can be a bit of a shock.\p"
	.string "That's why I'm acclimatizing by\n"
	.string "resting in the hot spring.$"

DoIKnowYou::
# 296 "data/maps/FrostfireCity/scripts.pory"
	.string "I'm sorry… Do I know you?$"

Frosthearth_LoneOldWoman_Text::
# 302 "data/maps/FrostfireCity/scripts.pory"
	.string "There are many hot springs in\n"
	.string "this city.\p"
	.string "Many of the people end up going to\n"
	.string "the one near the motel, so this one\l"
	.string "ends up being all peaceful and quiet.$"

RestingOnSomethingHard::
# 339 "data/maps/FrostfireCity/scripts.pory"
	.string "Ow ow ow!\p"
	.string "I think I'm resting on a stone\n"
	.string "or something.$"

NowThatsBetter::
# 344 "data/maps/FrostfireCity/scripts.pory"
	.string "Much better!$"

FeelingMuchBetter::
# 347 "data/maps/FrostfireCity/scripts.pory"
	.string "Ahh…\p"
	.string "Feeling much better now that\n"
	.string "the stone is gone.$"

MissingRuffletStart::
# 399 "data/maps/FrostfireCity/scripts.pory"
	.string "Have you seen a Rufflet\n"
	.string "wandering around the city?\p"
	.string "My pet Rufflet got spooked by\n"
	.string "something, fled, and now I can\l"
	.string "no longer find it.$"

PleaseFindRufflet::
# 406 "data/maps/FrostfireCity/scripts.pory"
	.string "If you spot a lost looking Rufflet,\n"
	.string "try and catch it, okay?$"

FindRuffletReward::
# 410 "data/maps/FrostfireCity/scripts.pory"
	.string "My Rufflet came running back to me\n"
	.string "just before you arrived!\p"
	.string "Thank you for helping me get it back!\p"
	.string "I'm not sure how else to thank you,\n"
	.string "so I hope this will suffice.$"

ThankYouForFindingRufflet::
# 417 "data/maps/FrostfireCity/scripts.pory"
	.string "Thank you for guiding my Rufflet\n"
	.string "back to me!$"

FrosthearthBottleCapReward_Text::
# 534 "data/maps/FrostfireCity/scripts.pory"
	.string "You're the kid who's been climbing\n"
	.string "ranks in the Pokémon World Tournament.\p"
	.string "Color me impressed!\p"
	.string "I was going to use {STR_VAR_1} myself,\n"
	.string "but now I want to see the heights you\l"
	.string "can reach when your potential is\l"
	.string "pushed to its limits.$"

GiveCapsLater::
# 543 "data/maps/FrostfireCity/scripts.pory"
	.string "Oh, but it looks like you don't\n"
	.string "have room in your bag…\p"
	.string "Well, you just keep on winning\n"
	.string "and the next time we meet,\l"
	.string "maybe I'll have an even bigger\l"
	.string "prize for you!$"

BottleCapGuyCheersOn::
# 551 "data/maps/FrostfireCity/scripts.pory"
	.string "There's a great Pokémon master\n"
	.string "residing in this city.\p"
	.string "You should find him and bring\n"
	.string "{STR_VAR_2} to him.$"

BottleCapGuyCheersOn2::
# 557 "data/maps/FrostfireCity/scripts.pory"
	.string "I hope you'll keep climbing the\n"
	.string "ranks!$"
