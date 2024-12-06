Lab2_MapScripts::
# 2 "data/maps/Lab2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Lab2_On_Transition
# 3 "data/maps/Lab2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES, Lab2_Intro
# 5 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MET_RIVAL, Lab2_Intro
# 6 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW, Lab2_DexGet
# 7 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED, Lab2_GetMegaStone
	.2byte 0


Lab2_On_Transition::
# 15 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Lab2_On_Transition_2
Lab2_On_Transition_1:
# 25 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
	goto_if_ge Lab2_On_Transition_5
Lab2_On_Transition_4:
# 30 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
	goto_if_eq Lab2_On_Transition_11
# 31 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_eq Lab2_On_Transition_11
# 36 "data/maps/Lab2/scripts.pory"
	setflag FLAG_HIDE_LAB_RIVAL
	return

Lab2_On_Transition_2:
# 16 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 17 "data/maps/Lab2/scripts.pory"
	case 0, Lab2_On_Transition_8
# 19 "data/maps/Lab2/scripts.pory"
	case 1, Lab2_On_Transition_9
# 21 "data/maps/Lab2/scripts.pory"
	case 2, Lab2_On_Transition_10
	goto Lab2_On_Transition_1

Lab2_On_Transition_5:
# 26 "data/maps/Lab2/scripts.pory"
	setobjectxyperm 1, 20, 0
# 27 "data/maps/Lab2/scripts.pory"
	setobjectxyperm 2, 20, 0
# 28 "data/maps/Lab2/scripts.pory"
	setobjectxyperm 3, 20, 0
	goto Lab2_On_Transition_4

Lab2_On_Transition_8:
# 18 "data/maps/Lab2/scripts.pory"
	setobjectxyperm 1, 20, 0
	goto Lab2_On_Transition_1

Lab2_On_Transition_9:
# 20 "data/maps/Lab2/scripts.pory"
	setobjectxyperm 2, 20, 0
	goto Lab2_On_Transition_1

Lab2_On_Transition_10:
# 22 "data/maps/Lab2/scripts.pory"
	setobjectxyperm 3, 20, 0
	goto Lab2_On_Transition_1

Lab2_On_Transition_11:
# 32 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 33 "data/maps/Lab2/scripts.pory"
	clearflag FLAG_HIDE_LAB_RIVAL
	return


Lab2_Intro::
# 41 "data/maps/Lab2/scripts.pory"
	safefollow
# 42 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
# 43 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 44 "data/maps/Lab2/scripts.pory"
	lockall
# 45 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_Intro_Speech
# 46 "data/maps/Lab2/scripts.pory"
	closemessage
# 47 "data/maps/Lab2/scripts.pory"
	delay 20
# 48 "data/maps/Lab2/scripts.pory"
	turnobject 4, DIR_EAST
# 49 "data/maps/Lab2/scripts.pory"
	delay 20
# 50 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_PresentingBalls
# 51 "data/maps/Lab2/scripts.pory"
	closemessage
# 52 "data/maps/Lab2/scripts.pory"
	delay 20
# 53 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PROF_INTRO
# 54 "data/maps/Lab2/scripts.pory"
	release
	return


Lab2_DexGet::
# 82 "data/maps/Lab2/scripts.pory"
	safefollow
# 83 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
# 84 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 85 "data/maps/Lab2/scripts.pory"
	unlockfollowermovement
# 86 "data/maps/Lab2/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_2
Lab2_DexGet_1:
# 90 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab2_DexGet_5
Lab2_DexGet_4:
# 93 "data/maps/Lab2/scripts.pory"
	closemessage
# 94 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 95 "data/maps/Lab2/scripts.pory"
	message Lab2_DexGet_Text_0
# 96 "data/maps/Lab2/scripts.pory"
	waitmessage
# 97 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 98 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 99 "data/maps/Lab2/scripts.pory"
	turnobject 5, DIR_WEST
# 100 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_1
# 101 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 102 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_2
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_8
# 107 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_4
Lab2_DexGet_7:
# 109 "data/maps/Lab2/scripts.pory"
	closemessage
# 110 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Lab2FaceDown
# 111 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Lab2FaceDown
# 112 "data/maps/Lab2/scripts.pory"
	applymovement 5, Lab2_Movement_RivalExit1
# 113 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 114 "data/maps/Lab2/scripts.pory"
	delay 60
# 115 "data/maps/Lab2/scripts.pory"
	removeobject 5
# 116 "data/maps/Lab2/scripts.pory"
	savebgm MUS_DUMMY
# 117 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
# 118 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 119 "data/maps/Lab2/scripts.pory"
	fadedefaultbgm
# 120 "data/maps/Lab2/scripts.pory"
	delay 25
# 121 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_5, MSGBOX_DEFAULT
# 122 "data/maps/Lab2/scripts.pory"
	special SetUnlockedPokedexFlags
# 123 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 124 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
# 125 "data/maps/Lab2/scripts.pory"
	release
	end

Lab2_DexGet_2:
# 88 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMay
	goto Lab2_DexGet_1

Lab2_DexGet_5:
# 91 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendan
	goto Lab2_DexGet_4

Lab2_DexGet_8:
# 104 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_3
	goto Lab2_DexGet_7


Lab2_GetMegaStone::
# 157 "data/maps/Lab2/scripts.pory"
	safefollow
# 158 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
# 159 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 160 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_2
# 164 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStones
Lab2_GetMegaStone_1:
# 166 "data/maps/Lab2/scripts.pory"
	closemessage
# 167 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, Lab2_GetMegaStone_6
Lab2_GetMegaStone_5:
	checkitemspace ITEM_DECIDUEITE
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_GetMegaStone_9
# 185 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 186 "data/maps/Lab2/scripts.pory"
	case 0, Lab2_GetMegaStone_21
# 188 "data/maps/Lab2/scripts.pory"
	case 1, Lab2_GetMegaStone_22
# 190 "data/maps/Lab2/scripts.pory"
	case 2, Lab2_GetMegaStone_23
Lab2_GetMegaStone_19:
# 193 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
# 194 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_GetMegaStone_30
Lab2_GetMegaStone_28:
# 198 "data/maps/Lab2/scripts.pory"
	waitse
Lab2_GetMegaStone_8:
# 200 "data/maps/Lab2/scripts.pory"
	goto_if_unset FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_13
Lab2_GetMegaStone_12:
# 234 "data/maps/Lab2/scripts.pory"
	release
	end

Lab2_GetMegaStone_2:
# 161 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStonesWithoutRival
	goto Lab2_GetMegaStone_1

Lab2_GetMegaStone_6:
# 168 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 169 "data/maps/Lab2/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 170 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 171 "data/maps/Lab2/scripts.pory"
	delay 30
# 172 "data/maps/Lab2/scripts.pory"
	msgbox TradedAwayStarter
# 173 "data/maps/Lab2/scripts.pory"
	closemessage
	goto Lab2_GetMegaStone_5

Lab2_GetMegaStone_9:
# 176 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_16
# 180 "data/maps/Lab2/scripts.pory"
	msgbox ComeGetYourStoneLater
Lab2_GetMegaStone_15:
# 182 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto Lab2_GetMegaStone_8

Lab2_GetMegaStone_13:
# 201 "data/maps/Lab2/scripts.pory"
	closemessage
# 202 "data/maps/Lab2/scripts.pory"
	delay 24
# 203 "data/maps/Lab2/scripts.pory"
	applymovement 4, ProfBackAndForth
# 204 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 205 "data/maps/Lab2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 206 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 208 "data/maps/Lab2/scripts.pory"
	checkplayergender
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_GetMegaStone_25
# 218 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_GetMegaStone_36
# 222 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_Brendan
Lab2_GetMegaStone_24:
# 225 "data/maps/Lab2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 226 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 227 "data/maps/Lab2/scripts.pory"
	msgbox ThanksDadBirch
# 228 "data/maps/Lab2/scripts.pory"
	closemessage
# 229 "data/maps/Lab2/scripts.pory"
	applymovement 5, RivalLeavesLab
# 230 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnPlayer
# 231 "data/maps/Lab2/scripts.pory"
	waitmovement 5
# 232 "data/maps/Lab2/scripts.pory"
	removeobject 5
	goto Lab2_GetMegaStone_12

Lab2_GetMegaStone_16:
# 177 "data/maps/Lab2/scripts.pory"
	msgbox ComeGetYourStoneLaterWithoutRival
	goto Lab2_GetMegaStone_15

Lab2_GetMegaStone_21:
# 187 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_22:
# 189 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_23:
# 191 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_25:
# 210 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_GetMegaStone_33
# 214 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_May
	goto Lab2_GetMegaStone_24

Lab2_GetMegaStone_29:
# 196 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab2_GetMegaStone_28

Lab2_GetMegaStone_30:
# 195 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab2_GetMegaStone_29
	goto Lab2_GetMegaStone_28

Lab2_GetMegaStone_33:
# 211 "data/maps/Lab2/scripts.pory"
	msgbox GonnaGoAhead_May
	goto Lab2_GetMegaStone_24

Lab2_GetMegaStone_36:
# 219 "data/maps/Lab2/scripts.pory"
	msgbox GonnaGoAhead_Brendan
	goto Lab2_GetMegaStone_24


Lab2_Birch::
# 382 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PROF_INTRO
	goto_if_eq Lab2_Birch_2
# 385 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	goto_if_le Lab2_Birch_3
# 388 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_Birch_4
# 391 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_Birch_5
# 417 "data/maps/Lab2/scripts.pory"
	call ProfBirch_EventScript_RatePokedexOrRegister
Lab2_Birch_1:
# 419 "data/maps/Lab2/scripts.pory"
	release
	end

Lab2_Birch_2:
# 383 "data/maps/Lab2/scripts.pory"
	msgbox PickABall, MSGBOX_NPC
	goto Lab2_Birch_1

Lab2_Birch_3:
# 386 "data/maps/Lab2/scripts.pory"
	msgbox TakeCareOfPokemon, MSGBOX_NPC
	goto Lab2_Birch_1

Lab2_Birch_4:
# 389 "data/maps/Lab2/scripts.pory"
	msgbox YourFatherIsInTown, MSGBOX_NPC
	goto Lab2_Birch_1

Lab2_Birch_5:
# 392 "data/maps/Lab2/scripts.pory"
	lock
# 393 "data/maps/Lab2/scripts.pory"
	faceplayer
# 394 "data/maps/Lab2/scripts.pory"
	msgbox HeresYourStoneNow
	checkitemspace ITEM_DECIDUEITE
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_Birch_11
# 400 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 401 "data/maps/Lab2/scripts.pory"
	case 0, Lab2_Birch_16
# 403 "data/maps/Lab2/scripts.pory"
	case 1, Lab2_Birch_17
# 405 "data/maps/Lab2/scripts.pory"
	case 2, Lab2_Birch_18
Lab2_Birch_14:
# 408 "data/maps/Lab2/scripts.pory"
	waitse
# 409 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
# 410 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_Birch_20
	goto Lab2_Birch_1

Lab2_Birch_11:
# 396 "data/maps/Lab2/scripts.pory"
	msgbox ComeGetYourStoneLaterShort, MSGBOX_NPC
	end

Lab2_Birch_16:
# 402 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab2_Birch_14

Lab2_Birch_17:
# 404 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab2_Birch_14

Lab2_Birch_18:
# 406 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab2_Birch_14

Lab2_Birch_19:
# 412 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab2_Birch_1

Lab2_Birch_20:
# 411 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab2_Birch_19
	goto Lab2_Birch_1


Lab2_Ball1::
# 424 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
# 425 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab2_Ball2::
# 428 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
# 429 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab2_Ball3::
# 432 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
# 433 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab_BallMain::
# 436 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Lab_BallMain_2
# 440 "data/maps/Lab2/scripts.pory"
	lock
# 441 "data/maps/Lab2/scripts.pory"
	waitse
# 442 "data/maps/Lab2/scripts.pory"
	playmoncry VAR_TEMP_3, CRY_MODE_NORMAL
# 443 "data/maps/Lab2/scripts.pory"
	showmonpic VAR_TEMP_3, 10, 3
# 444 "data/maps/Lab2/scripts.pory"
	waitmoncry
# 445 "data/maps/Lab2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 446 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_1, MSGBOX_YESNO
# 447 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab_BallMain_5
# 453 "data/maps/Lab2/scripts.pory"
	givemon VAR_TEMP_3, 5
# 454 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 455 "data/maps/Lab2/scripts.pory"
	message Lab_BallMain_Text_2
# 456 "data/maps/Lab2/scripts.pory"
	waitmessage
# 457 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 458 "data/maps/Lab2/scripts.pory"
	setobjectxy VAR_LAST_TALKED, 20, 0
# 459 "data/maps/Lab2/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 20, 0
# 460 "data/maps/Lab2/scripts.pory"
	applymovement VAR_LAST_TALKED, Walk1Up
# 461 "data/maps/Lab2/scripts.pory"
	switch VAR_TEMP_3
# 462 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_BallMain_9
# 464 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_BallMain_10
# 466 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_BallMain_11
Lab_BallMain_7:
# 469 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 470 "data/maps/Lab2/scripts.pory"
	setflag FLAG_HEAL_AFTER_BATTLE
# 471 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 472 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PKMN_OBTAINED
# 473 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_3, MSGBOX_YESNO
# 474 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 475 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Lab_BallMain_13
Lab_BallMain_12:
# 479 "data/maps/Lab2/scripts.pory"
	callnative UpdateFollowingPokemon
# 480 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_BallMain_2:
# 437 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_0, MSGBOX_SIGN
	end

Lab_BallMain_5:
# 448 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 449 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_NotChosen
# 450 "data/maps/Lab2/scripts.pory"
	release
	end

Lab_BallMain_9:
# 463 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Lab_BallMain_7

Lab_BallMain_10:
# 465 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Lab_BallMain_7

Lab_BallMain_11:
# 467 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Lab_BallMain_7

Lab_BallMain_13:
# 476 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 477 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Lab_BallMain_12


Lab_FollowerEvent2::
# 483 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_10
# 484 "data/maps/Lab2/scripts.pory"
	goto Lab_FollowerEvent
	return


Lab_FollowerEvent::
# 487 "data/maps/Lab2/scripts.pory"
	safefollow
# 488 "data/maps/Lab2/scripts.pory"
	unlockfollowermovement
# 489 "data/maps/Lab2/scripts.pory"
	lockall
# 490 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 491 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_TEMP_10, Lab_FollowerEvent_2
# 495 "data/maps/Lab2/scripts.pory"
	turnobject 4, DIR_EAST
Lab_FollowerEvent_1:
# 497 "data/maps/Lab2/scripts.pory"
	applymovement 4, ExclamationMark
# 498 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 499 "data/maps/Lab2/scripts.pory"
	delay 48
# 500 "data/maps/Lab2/scripts.pory"
	msgbox BirchSurprised
# 501 "data/maps/Lab2/scripts.pory"
	msgbox Lab_FollowerEvent_Text_0
# 502 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_5, 0
# 503 "data/maps/Lab2/scripts.pory"
	clearflag FLAG_HEAL_AFTER_BATTLE
# 504 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_FollowerEvent_2:
# 492 "data/maps/Lab2/scripts.pory"
	turnobject 4, DIR_NORTH
	goto Lab_FollowerEvent_1


Lab2_NoLeave::
# 520 "data/maps/Lab2/scripts.pory"
	lock
# 521 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_NoLeave_Text_0
# 522 "data/maps/Lab2/scripts.pory"
	closemessage
# 523 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 524 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 525 "data/maps/Lab2/scripts.pory"
	release
	return


# 528 "data/maps/Lab2/scripts.pory"
SpawnFollower:
# 529 "data/maps/Lab2/scripts.pory"
	set_visible
# 530 "data/maps/Lab2/scripts.pory"
	exit_pokeball
	step_end

# 532 "data/maps/Lab2/scripts.pory"
Lab2_Movement_RivalExit1:
# 533 "data/maps/Lab2/scripts.pory"
	player_run_down
# 533 "data/maps/Lab2/scripts.pory"
	player_run_down
# 533 "data/maps/Lab2/scripts.pory"
	player_run_down
# 534 "data/maps/Lab2/scripts.pory"
	player_run_left
# 535 "data/maps/Lab2/scripts.pory"
	player_run_down
# 535 "data/maps/Lab2/scripts.pory"
	player_run_down
# 535 "data/maps/Lab2/scripts.pory"
	player_run_down
# 535 "data/maps/Lab2/scripts.pory"
	player_run_down
# 535 "data/maps/Lab2/scripts.pory"
	player_run_down
	step_end

# 537 "data/maps/Lab2/scripts.pory"
Lab2FaceDown:
# 538 "data/maps/Lab2/scripts.pory"
	delay_16
# 539 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

# 541 "data/maps/Lab2/scripts.pory"
ProfBackAndForth:
# 542 "data/maps/Lab2/scripts.pory"
	walk_right
# 543 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 544 "data/maps/Lab2/scripts.pory"
	delay_16
# 544 "data/maps/Lab2/scripts.pory"
	delay_16
# 544 "data/maps/Lab2/scripts.pory"
	delay_16
# 544 "data/maps/Lab2/scripts.pory"
	delay_16
# 544 "data/maps/Lab2/scripts.pory"
	delay_16
# 544 "data/maps/Lab2/scripts.pory"
	delay_16
# 545 "data/maps/Lab2/scripts.pory"
	walk_left
# 546 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 547 "data/maps/Lab2/scripts.pory"
	step_end

# 549 "data/maps/Lab2/scripts.pory"
RivalLeavesLab:
# 550 "data/maps/Lab2/scripts.pory"
	walk_down
# 550 "data/maps/Lab2/scripts.pory"
	walk_down
# 550 "data/maps/Lab2/scripts.pory"
	walk_down
# 550 "data/maps/Lab2/scripts.pory"
	walk_down
# 550 "data/maps/Lab2/scripts.pory"
	walk_down
# 550 "data/maps/Lab2/scripts.pory"
	walk_down
# 550 "data/maps/Lab2/scripts.pory"
	walk_down
	step_end

# 552 "data/maps/Lab2/scripts.pory"
TurnPlayer:
# 553 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_right
# 554 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

Lab2_DexGet_Text_0:
# 95 "data/maps/Lab2/scripts.pory"
	.string "Obtained the Pokédex!$"

Lab2_DexGet_Text_1:
# 100 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Here, you can have\nthese as well.$"

Lab2_DexGet_Text_2:
# 102 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Now you can start catching\nyour own Pokémon and we can see which\lof us can fill our Pokédex faster!$"

Lab2_DexGet_Text_3:
# 104 "data/maps/Lab2/scripts.pory"
	.string "Last one out the door is a rotten egg!$"

Lab2_DexGet_Text_4:
# 107 "data/maps/Lab2/scripts.pory"
	.string "Come on, let's go catch some Pokémon!$"

Lab2_DexGet_Text_5:
# 121 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Sigh…\pSometimes I wonder\nwhere {RIVAL} gets all that energy…$"

Lab_BallMain_Text_0:
# 437 "data/maps/Lab2/scripts.pory"
	.string "You already received a Pokémon.$"

Lab_BallMain_Text_1:
# 446 "data/maps/Lab2/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Lab_BallMain_Text_2:
# 455 "data/maps/Lab2/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Lab_BallMain_Text_3:
# 473 "data/maps/Lab2/scripts.pory"
	.string "Do you want to give a nickname\nto your new Pokémon?$"

Lab_FollowerEvent_Text_0:
# 501 "data/maps/Lab2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You can use the party menu to set\na preferred Pokémon, withdraw your\lcurrent one, or let another one out.$"

Lab2_NoLeave_Text_0:
# 521 "data/maps/Lab2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You haven't chosen a Pokémon yet!$"

Lab2_Intro_Speech::
# 57 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Hello!\n"
	.string "You must be {PLAYER}!\p"
	.string "As you may know, it is customary in\n"
	.string "this town for every young person to\l"
	.string "be given their very first Pokémon.\p"
	.string "Some people use this opportunity to\n"
	.string "go on a journey of self-discovery\l"
	.string "while some are content with\l"
	.string "where they are now.\p"
	.string "What you do with your Pokémon is\n"
	.string "your decision.$"

Lab2_PresentingBalls::
# 71 "data/maps/Lab2/scripts.pory"
	.string "Over there on the table lies three\n"
	.string "Poké Balls. Each of them stores\l"
	.string "some very rare Pokémon.\p"
	.string "You may now go and choose one of\n"
	.string "them as your own.\p"
	.string "You may only choose one so make\n"
	.string "sure you decide carefully!$"

Lab2_DexTalkMay::
# 129 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\nis there something you need?\p"
	.string "{RIVAL}: Oh boy, is there…\pYou gave {PLAYER} a Pokémon but\nnever gave him a Pokédex, dad!\pHow do you expect him to become\n a great trainer without one!?\p"
	.string "Prof. Birch: Oh, it must've\nslipped my mind…\p"
	.string "{RIVAL}: Slipped your mind!?\nYou're a Pokémon professor!\p"
	.string "Surely you realize that giving one to\n{PLAYER} helps your research as well?\p"
	.string "Prof. Birch: I know, I know.\nI'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\l… … … …\pAh, darn it.\pLooks like I don't have any extra\nlying around at this time…\p"
	.string "{RIVAL}: Well we can't have {PLAYER}\nleaving empty-handed, now can we!?\p"
	.string "Prof. Birch: Here, {PLAYER},\nyou can have mine.\lI'll order myself a new one.\p"
	.string "{RIVAL}: Yay! Thanks, dad!\n$"

Lab2_DexTalkBrendan::
# 142 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\nis there something you need?\p"
	.string "{RIVAL}: As a matter of fact, there is.\nYou never gave {PLAYER} a Pokédex!\p"
	.string "How do you expect her to become\n a great trainer without one?\p"
	.string "Prof. Birch: Oh, it must've\nslipped my mind…\p"
	.string "{RIVAL}: Slipped your mind?\nAren't you a Pokémon professor?\p"
	.string "Surely giving one to {PLAYER}\nhelps your research as well.\p"
	.string "Prof. Birch: I know, I know.\nI'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\l… … … …\pAh, darn it.\pLooks like I don't have any extra\nlying around at this time…\p"
	.string "{RIVAL}: Well we can't have {PLAYER}\nleaving empty-handed, now can we?\p"
	.string "Prof. Birch: Yes, I know. {PLAYER},\nyou can have mine.\lI'll order myself a new one.\p"
	.string "{RIVAL}: You're the best, dad!\n$"

LabMegaStones::
# 238 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "what a pleasant surprise.\l"
	.string "I was hoping to see you two soon.\p"
	.string "Thanks to a colleague of mine, I have\n"
	.string "been able to do a lot of research on\l"
	.string "a phenomena called “Mega Evolution.”\p"
	.string "Not much is known about it here in\n"
	.string "Sinko, but thanks to Professor\l"
	.string "Sycamore of Kalos, I have been\l"
	.string "able to greatly further my research.\p"
	.string "This is where you two come in.\p"
	.string "One day, I happened upon a mysterious\n"
	.string "set of stones. I believe these stones\l"
	.string "to be Mega Stones, special evolution\l"
	.string "stones capable of triggering a Mega\l"
	.string "Evolution within certain Pokémon.\p"
	.string "I would like you two to test out my\n"
	.string "theory, and see if your Pokémon are\l"
	.string "able to somehow interact with these\l"
	.string "Mega Stones.\p"
	.string "I want you both to have a stone that\n"
	.string "I believe is related to the Pokémon\l"
	.string "I have given you.$"

LabMegaStonesWithoutRival::
# 263 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, hello, {PLAYER}.\n"
	.string "what a pleasant surprise.\p"
	.string "I must say, I was expecting to see\n"
	.string "you here a bit earlier, but I digress.\p"
	.string "Thanks to a colleague of mine, I have\n"
	.string "been able to do a lot of research on\l"
	.string "a phenomena called “Mega Evolution.”\p"
	.string "Not much is known about it here in\n"
	.string "Sinko, but thanks to Professor\l"
	.string "Sycamore of Kalos, I have been\l"
	.string "able to greatly further my research.\p"
	.string "This is where you and {RIVAL} come in.\p"
	.string "One day, I happened upon a mysterious\n"
	.string "set of stones. I believe these stones\l"
	.string "to be Mega Stones, special evolution\l"
	.string "stones capable of triggering a Mega\l"
	.string "Evolution within certain Pokémon.\p"
	.string "I would like you to test out my\n"
	.string "theory, and see if your Pokémon is\l"
	.string "able to somehow interact with one of\l"
	.string "these Mega Stones.\p"
	.string "I already gave {RIVAL} a stone, and\n"
	.string "I want you to also have a stone that\n"
	.string "I believe is related to the Pokémon\l"
	.string "I have given you.$"

TradedAwayStarter::
# 290 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, you haven't traded my\n"
	.string "magnanimous gift away, have you?\p"
	.string "Don't worry, I'm just kidding.\p"
	.string "I can still give you the stone that's\n"
	.string "associated with the Pokémon I gave you,\l"
	.string "but you'll have to figure out where to\l"
	.string "get the stone for the Pokémon you\l"
	.string "currently have by yourself.\p"
	.string "Maybe you could try checking with the\n"
	.string "person who traded you it originally?\p"
	.string "In any case, here you go.$"

ComeGetYourStoneLater::
# 303 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: It seems your bag is\n"
	.string "currently too full to carry this stone.\p"
	.string "I will give {RIVAL}'s stone to them,\n"
	.string "and once you've made enough space in\l"
	.string "your bag, you too can have yours.$"

ComeGetYourStoneLaterWithoutRival::
# 310 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: It seems your bag is\n"
	.string "currently too full to carry this stone.\p"
	.string "You will need to clear some space in\n"
	.string "your bag before I can give this to you.$"

GonnaGoAhead_May::
# 316 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You make sure you grab yours as well,\n"
	.string "{PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaTakeMyLeave_May::
# 325 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You better train your Pokémon to use\n"
	.string "the stone, {PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaGoAhead_Brendan::
# 334 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "Make sure you grab yours before you\n"
	.string "leave, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

GonnaTakeMyLeave_Brendan::
# 343 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "I hope you train your Pokémon to get\n"
	.string "the most out of that stone, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

ThanksDadBirch::
# 352 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Thanks dad! I'm going to go\n"
	.string "and give this thing a try right away!$"

PickABall::
# 357 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Go on, pick one of the\n"
	.string "balls from the table.$"

TakeCareOfPokemon::
# 361 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you take\n"
	.string "good care of your new companion.$"

YourFatherIsInTown::
# 365 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, I almost forgot!\n"
	.string "Your father is currently in town.\p"
	.string "I know he's a busy man. You may want\n"
	.string "to dash on home before he leaves.$"

HeresYourStoneNow::
# 371 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you've made enough\n"
	.string "space in your bag to hold this stone.$"

ComeGetYourStoneLaterShort::
# 375 "data/maps/Lab2/scripts.pory"
	.string "No, looks like your bag is still full.\p"
	.string "You will need to make some room in your\n"
	.string "bag before I can give this to you.$"

BirchSurprised::
# 506 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh my!\p"
	.string "I knew these little fellas were\n"
	.string "energetic, but I never expected one\l"
	.string "to bust out of its ball like that!\p"
	.string "Now that you two are partners,\n"
	.string "I'm sure it will go back inside\l"
	.string "its ball if you simply ask it nicely.$"

Lab2_NotChosen::
# 516 "data/maps/Lab2/scripts.pory"
	.string "Take your time.$"
