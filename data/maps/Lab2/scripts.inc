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
	case SPECIES_ROWLET, Lab2_On_Transition_8
# 19 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab2_On_Transition_9
# 21 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab2_On_Transition_10
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
	lock
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
	lock
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_2
Lab2_DexGet_1:
# 97 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab2_DexGet_5
Lab2_DexGet_4:
# 107 "data/maps/Lab2/scripts.pory"
	closemessage
# 108 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 109 "data/maps/Lab2/scripts.pory"
	message Lab2_DexGet_Text_0
# 110 "data/maps/Lab2/scripts.pory"
	waitmessage
# 111 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 112 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 113 "data/maps/Lab2/scripts.pory"
	turnobject 5, DIR_WEST
# 114 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_1
# 115 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 116 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_2
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_8
# 121 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_4
Lab2_DexGet_7:
# 123 "data/maps/Lab2/scripts.pory"
	closemessage
# 124 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Lab2FaceDown
# 125 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Lab2FaceDown
# 126 "data/maps/Lab2/scripts.pory"
	applymovement 5, Lab2_Movement_RivalExit1
# 127 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 128 "data/maps/Lab2/scripts.pory"
	delay 60
# 129 "data/maps/Lab2/scripts.pory"
	removeobject 5
# 130 "data/maps/Lab2/scripts.pory"
	savebgm MUS_DUMMY
# 131 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
# 132 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 133 "data/maps/Lab2/scripts.pory"
	fadedefaultbgm
# 134 "data/maps/Lab2/scripts.pory"
	delay 25
# 135 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_5, MSGBOX_DEFAULT
# 136 "data/maps/Lab2/scripts.pory"
	special SetUnlockedPokedexFlags
# 137 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 138 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
# 139 "data/maps/Lab2/scripts.pory"
	release
	end

Lab2_DexGet_2:
# 88 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayA
# 89 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayB
# 90 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayC
# 91 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayD
# 92 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayE
# 93 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayF
# 94 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayG
# 95 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkMayH
	goto Lab2_DexGet_1

Lab2_DexGet_5:
# 98 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanA
# 99 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanB
# 100 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanC
# 101 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanD
# 102 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanE
# 103 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanF
# 104 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanG
# 105 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexTalkBrendanH
	goto Lab2_DexGet_4

Lab2_DexGet_8:
# 118 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_DexGet_Text_3
	goto Lab2_DexGet_7


Lab2_GetMegaStone::
# 230 "data/maps/Lab2/scripts.pory"
	safefollow
# 231 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
# 232 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 233 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_2
# 237 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStones
Lab2_GetMegaStone_1:
# 239 "data/maps/Lab2/scripts.pory"
	closemessage
# 240 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, Lab2_GetMegaStone_6
Lab2_GetMegaStone_5:
	checkitemspace ITEM_DECIDUEITE
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_GetMegaStone_9
# 258 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 259 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab2_GetMegaStone_21
# 261 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab2_GetMegaStone_22
# 263 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab2_GetMegaStone_23
Lab2_GetMegaStone_19:
# 266 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
# 267 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_GetMegaStone_33
Lab2_GetMegaStone_31:
# 271 "data/maps/Lab2/scripts.pory"
	waitse
Lab2_GetMegaStone_8:
# 273 "data/maps/Lab2/scripts.pory"
	goto_if_unset FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_13
Lab2_GetMegaStone_12:
# 307 "data/maps/Lab2/scripts.pory"
	release
# 308 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_Q33_PROF_BIRCH_MEGASTONE_START, Lab2_GetMegaStone_25
Lab2_GetMegaStone_24:
	end

Lab2_GetMegaStone_2:
# 234 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStonesWithoutRival
	goto Lab2_GetMegaStone_1

Lab2_GetMegaStone_6:
# 241 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 242 "data/maps/Lab2/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 243 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 244 "data/maps/Lab2/scripts.pory"
	delay 30
# 245 "data/maps/Lab2/scripts.pory"
	msgbox TradedAwayStarter
# 246 "data/maps/Lab2/scripts.pory"
	closemessage
	goto Lab2_GetMegaStone_5

Lab2_GetMegaStone_9:
# 249 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_16
# 253 "data/maps/Lab2/scripts.pory"
	msgbox ComeGetYourStoneLater
Lab2_GetMegaStone_15:
# 255 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto Lab2_GetMegaStone_8

Lab2_GetMegaStone_13:
# 274 "data/maps/Lab2/scripts.pory"
	closemessage
# 275 "data/maps/Lab2/scripts.pory"
	delay 24
# 276 "data/maps/Lab2/scripts.pory"
	applymovement 4, ProfBackAndForth
# 277 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 278 "data/maps/Lab2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 279 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 280 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 281 "data/maps/Lab2/scripts.pory"
	checkplayergender
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_GetMegaStone_28
# 291 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_GetMegaStone_39
# 295 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_Brendan
Lab2_GetMegaStone_27:
# 298 "data/maps/Lab2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 299 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 300 "data/maps/Lab2/scripts.pory"
	msgbox ThanksDadBirch
# 301 "data/maps/Lab2/scripts.pory"
	closemessage
# 302 "data/maps/Lab2/scripts.pory"
	applymovement 5, RivalLeavesLab
# 303 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnPlayer
# 304 "data/maps/Lab2/scripts.pory"
	waitmovement 5
# 305 "data/maps/Lab2/scripts.pory"
	removeobject 5
	goto Lab2_GetMegaStone_12

Lab2_GetMegaStone_16:
# 250 "data/maps/Lab2/scripts.pory"
	msgbox ComeGetYourStoneLaterWithoutRival
	goto Lab2_GetMegaStone_15

Lab2_GetMegaStone_21:
# 260 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_22:
# 262 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_23:
# 264 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_25:
# 309 "data/maps/Lab2/scripts.pory"
	completequest FLAG_Q33_PROF_BIRCH_MEGASTONE_COMPLETE
# 310 "data/maps/Lab2/scripts.pory"
	special ShowJournalPopupRemove
	goto Lab2_GetMegaStone_24

Lab2_GetMegaStone_28:
# 283 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_GetMegaStone_36
# 287 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_May
	goto Lab2_GetMegaStone_27

Lab2_GetMegaStone_32:
# 269 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab2_GetMegaStone_31

Lab2_GetMegaStone_33:
# 268 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab2_GetMegaStone_32
	goto Lab2_GetMegaStone_31

Lab2_GetMegaStone_36:
# 284 "data/maps/Lab2/scripts.pory"
	msgbox GonnaGoAhead_May
	goto Lab2_GetMegaStone_27

Lab2_GetMegaStone_39:
# 292 "data/maps/Lab2/scripts.pory"
	msgbox GonnaGoAhead_Brendan
	goto Lab2_GetMegaStone_27


Lab2_Birch::
# 459 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PROF_INTRO
	goto_if_eq Lab2_Birch_2
# 462 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	goto_if_le Lab2_Birch_3
# 465 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_Birch_4
# 472 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_Birch_5
# 498 "data/maps/Lab2/scripts.pory"
	call ProfBirch_EventScript_RatePokedexOrRegister
Lab2_Birch_1:
# 500 "data/maps/Lab2/scripts.pory"
	release
	end

Lab2_Birch_2:
# 460 "data/maps/Lab2/scripts.pory"
	msgbox PickABall, MSGBOX_NPC
	goto Lab2_Birch_1

Lab2_Birch_3:
# 463 "data/maps/Lab2/scripts.pory"
	msgbox TakeCareOfPokemon, MSGBOX_NPC
	goto Lab2_Birch_1

Lab2_Birch_4:
# 466 "data/maps/Lab2/scripts.pory"
	msgbox YourFatherIsInTown, MSGBOX_NPC
# 467 "data/maps/Lab2/scripts.pory"
	goto_if_unset FLAG_Q34_DADS_HOME_START, Lab2_Birch_11
	goto Lab2_Birch_1

Lab2_Birch_5:
# 473 "data/maps/Lab2/scripts.pory"
	lock
# 474 "data/maps/Lab2/scripts.pory"
	faceplayer
# 475 "data/maps/Lab2/scripts.pory"
	msgbox HeresYourStoneNow
	checkitemspace ITEM_DECIDUEITE
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_Birch_13
# 481 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 482 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab2_Birch_18
# 484 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab2_Birch_19
# 486 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab2_Birch_20
Lab2_Birch_16:
# 489 "data/maps/Lab2/scripts.pory"
	waitse
# 490 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
# 491 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_Birch_22
	goto Lab2_Birch_1

Lab2_Birch_11:
# 468 "data/maps/Lab2/scripts.pory"
	startquest FLAG_Q34_DADS_HOME_START
# 469 "data/maps/Lab2/scripts.pory"
	special ShowJournalPopupAdd
	goto Lab2_Birch_1

Lab2_Birch_13:
# 477 "data/maps/Lab2/scripts.pory"
	msgbox ComeGetYourStoneLaterShort, MSGBOX_NPC
	end

Lab2_Birch_18:
# 483 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab2_Birch_16

Lab2_Birch_19:
# 485 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab2_Birch_16

Lab2_Birch_20:
# 487 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab2_Birch_16

Lab2_Birch_21:
# 493 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab2_Birch_1

Lab2_Birch_22:
# 492 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab2_Birch_21
	goto Lab2_Birch_1


Lab2_Ball1::
# 505 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
# 506 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab2_Ball2::
# 509 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
# 510 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab2_Ball3::
# 513 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
# 514 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab_BallMain::
# 517 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Lab_BallMain_2
# 521 "data/maps/Lab2/scripts.pory"
	lock
# 522 "data/maps/Lab2/scripts.pory"
	waitse
# 523 "data/maps/Lab2/scripts.pory"
	playmoncry VAR_TEMP_3, CRY_MODE_NORMAL
# 524 "data/maps/Lab2/scripts.pory"
	showmonpic VAR_TEMP_3, 10, 3
# 525 "data/maps/Lab2/scripts.pory"
	waitmoncry
# 526 "data/maps/Lab2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 527 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_1, MSGBOX_YESNO
# 528 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab_BallMain_5
# 534 "data/maps/Lab2/scripts.pory"
	givemon VAR_TEMP_3, 5
# 535 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 536 "data/maps/Lab2/scripts.pory"
	message Lab_BallMain_Text_2
# 537 "data/maps/Lab2/scripts.pory"
	waitmessage
# 538 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 539 "data/maps/Lab2/scripts.pory"
	setobjectxy VAR_LAST_TALKED, 20, 0
# 540 "data/maps/Lab2/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 20, 0
# 541 "data/maps/Lab2/scripts.pory"
	applymovement VAR_LAST_TALKED, Walk1Up
# 542 "data/maps/Lab2/scripts.pory"
	switch VAR_TEMP_3
# 543 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_BallMain_9
# 545 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_BallMain_10
# 547 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_BallMain_11
Lab_BallMain_7:
# 550 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 551 "data/maps/Lab2/scripts.pory"
	setflag FLAG_HEAL_AFTER_BATTLE
# 552 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 553 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PKMN_OBTAINED
# 554 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_3, MSGBOX_YESNO
# 555 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 556 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Lab_BallMain_13
Lab_BallMain_12:
# 560 "data/maps/Lab2/scripts.pory"
	callnative UpdateFollowingPokemon
# 561 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_BallMain_2:
# 518 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_0, MSGBOX_SIGN
	end

Lab_BallMain_5:
# 529 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 530 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_NotChosen
# 531 "data/maps/Lab2/scripts.pory"
	release
	end

Lab_BallMain_9:
# 544 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto Lab_BallMain_7

Lab_BallMain_10:
# 546 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto Lab_BallMain_7

Lab_BallMain_11:
# 548 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto Lab_BallMain_7

Lab_BallMain_13:
# 557 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 558 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Lab_BallMain_12


Lab_FollowerEvent2::
# 564 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_10
# 565 "data/maps/Lab2/scripts.pory"
	goto Lab_FollowerEvent
	return


Lab_FollowerEvent::
# 568 "data/maps/Lab2/scripts.pory"
	safefollow
# 569 "data/maps/Lab2/scripts.pory"
	unlockfollowermovement
# 570 "data/maps/Lab2/scripts.pory"
	lock
# 571 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 572 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_TEMP_10, Lab_FollowerEvent_2
# 576 "data/maps/Lab2/scripts.pory"
	turnobject 4, DIR_EAST
Lab_FollowerEvent_1:
# 578 "data/maps/Lab2/scripts.pory"
	applymovement 4, ExclamationMark
# 579 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 580 "data/maps/Lab2/scripts.pory"
	delay 48
# 581 "data/maps/Lab2/scripts.pory"
	msgbox BirchSurprised
# 582 "data/maps/Lab2/scripts.pory"
	msgbox Lab_FollowerEvent_Text_0
# 583 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_5, 0
# 584 "data/maps/Lab2/scripts.pory"
	clearflag FLAG_HEAL_AFTER_BATTLE
# 585 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_FollowerEvent_2:
# 573 "data/maps/Lab2/scripts.pory"
	turnobject 4, DIR_NORTH
	goto Lab_FollowerEvent_1


Lab2_NoLeave::
# 601 "data/maps/Lab2/scripts.pory"
	lock
# 602 "data/maps/Lab2/scripts.pory"
	msgbox Lab2_NoLeave_Text_0
# 603 "data/maps/Lab2/scripts.pory"
	closemessage
# 604 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 605 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 606 "data/maps/Lab2/scripts.pory"
	release
	return


# 609 "data/maps/Lab2/scripts.pory"
SpawnFollower:
# 610 "data/maps/Lab2/scripts.pory"
	set_visible
# 611 "data/maps/Lab2/scripts.pory"
	exit_pokeball
	step_end

# 613 "data/maps/Lab2/scripts.pory"
Lab2_Movement_RivalExit1:
# 614 "data/maps/Lab2/scripts.pory"
	player_run_down
# 614 "data/maps/Lab2/scripts.pory"
	player_run_down
# 614 "data/maps/Lab2/scripts.pory"
	player_run_down
# 615 "data/maps/Lab2/scripts.pory"
	player_run_left
# 616 "data/maps/Lab2/scripts.pory"
	player_run_down
# 616 "data/maps/Lab2/scripts.pory"
	player_run_down
# 616 "data/maps/Lab2/scripts.pory"
	player_run_down
# 616 "data/maps/Lab2/scripts.pory"
	player_run_down
# 616 "data/maps/Lab2/scripts.pory"
	player_run_down
	step_end

# 618 "data/maps/Lab2/scripts.pory"
Lab2FaceDown:
# 619 "data/maps/Lab2/scripts.pory"
	delay_16
# 620 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

# 622 "data/maps/Lab2/scripts.pory"
ProfBackAndForth:
# 623 "data/maps/Lab2/scripts.pory"
	walk_right
# 624 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 625 "data/maps/Lab2/scripts.pory"
	delay_16
# 625 "data/maps/Lab2/scripts.pory"
	delay_16
# 625 "data/maps/Lab2/scripts.pory"
	delay_16
# 625 "data/maps/Lab2/scripts.pory"
	delay_16
# 625 "data/maps/Lab2/scripts.pory"
	delay_16
# 625 "data/maps/Lab2/scripts.pory"
	delay_16
# 626 "data/maps/Lab2/scripts.pory"
	walk_left
# 627 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 628 "data/maps/Lab2/scripts.pory"
	step_end

# 630 "data/maps/Lab2/scripts.pory"
RivalLeavesLab:
# 631 "data/maps/Lab2/scripts.pory"
	walk_down
# 631 "data/maps/Lab2/scripts.pory"
	walk_down
# 631 "data/maps/Lab2/scripts.pory"
	walk_down
# 631 "data/maps/Lab2/scripts.pory"
	walk_down
# 631 "data/maps/Lab2/scripts.pory"
	walk_down
# 631 "data/maps/Lab2/scripts.pory"
	walk_down
# 631 "data/maps/Lab2/scripts.pory"
	walk_down
	step_end

# 633 "data/maps/Lab2/scripts.pory"
TurnPlayer:
# 634 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_right
# 635 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

Lab2_DexGet_Text_0:
# 109 "data/maps/Lab2/scripts.pory"
	.string "Obtained the Pokédex!$"

Lab2_DexGet_Text_1:
# 114 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Here, you can have\nthese as well.$"

Lab2_DexGet_Text_2:
# 116 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Now you can start catching\nyour own Pokémon and we can see which\lof us can fill our Pokédex faster!$"

Lab2_DexGet_Text_3:
# 118 "data/maps/Lab2/scripts.pory"
	.string "Last one out the door is a rotten egg!$"

Lab2_DexGet_Text_4:
# 121 "data/maps/Lab2/scripts.pory"
	.string "Come on, let's go catch some Pokémon!$"

Lab2_DexGet_Text_5:
# 135 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Sigh…\pSometimes I wonder\nwhere {RIVAL} gets all that energy…$"

Lab_BallMain_Text_0:
# 518 "data/maps/Lab2/scripts.pory"
	.string "You already received a Pokémon.$"

Lab_BallMain_Text_1:
# 527 "data/maps/Lab2/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Lab_BallMain_Text_2:
# 536 "data/maps/Lab2/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Lab_BallMain_Text_3:
# 554 "data/maps/Lab2/scripts.pory"
	.string "Do you want to give a nickname\nto your new Pokémon?$"

Lab_FollowerEvent_Text_0:
# 582 "data/maps/Lab2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You can use the party menu to set\na preferred Pokémon, withdraw your\lcurrent one, or let another one out.$"

Lab2_NoLeave_Text_0:
# 602 "data/maps/Lab2/scripts.pory"
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

Lab2_DexTalkMayA::
# 143 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab2_DexTalkMayB::
# 147 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Oh boy, is there…\p"
	.string "You gave {PLAYER} a Pokémon but\n"
	.string "never gave him a Pokédex, dad!\p"
	.string "How do you expect him to become\n"
	.string "a great trainer without one?!$"

Lab2_DexTalkMayC::
# 154 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab2_DexTalkMayD::
# 158 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Slipped your mind?!\n"
	.string "You're a Pokémon professor!\p"
	.string "Surely you realize that giving one to\n"
	.string "{PLAYER} helps your research as well?$"

Lab2_DexTalkMayE::
# 164 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab2_DexTalkMayF::
# 173 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?!$"

Lab2_DexTalkMayG::
# 177 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Here, {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab2_DexTalkMayH::
# 182 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Yay! Thanks, dad!$"

Lab2_DexTalkBrendanA::
# 186 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab2_DexTalkBrendanB::
# 190 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: As a matter of fact, there is.\n"
	.string "You never gave {PLAYER} a Pokédex!\p"
	.string "How do you expect her to become\n"
	.string "a great trainer without one?$"

Lab2_DexTalkBrendanC::
# 196 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab2_DexTalkBrendanD::
# 200 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Slipped your mind?\n"
	.string "Aren't you a Pokémon professor?\p"
	.string "Surely giving one to {PLAYER}\n"
	.string "helps your research as well.$"

Lab2_DexTalkBrendanE::
# 206 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab2_DexTalkBrendanF::
# 215 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?$"

Lab2_DexTalkBrendanG::
# 219 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Yes, I know. {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab2_DexTalkBrendanH::
# 224 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: You're the best, dad!$"

LabMegaStones::
# 315 "data/maps/Lab2/scripts.pory"
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
# 340 "data/maps/Lab2/scripts.pory"
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
# 367 "data/maps/Lab2/scripts.pory"
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
# 380 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: It seems your bag is\n"
	.string "currently too full to carry this stone.\p"
	.string "I will give {RIVAL}'s stone to them,\n"
	.string "and once you've made enough space in\l"
	.string "your bag, you too can have yours.$"

ComeGetYourStoneLaterWithoutRival::
# 387 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: It seems your bag is\n"
	.string "currently too full to carry this stone.\p"
	.string "You will need to clear some space in\n"
	.string "your bag before I can give this to you.$"

GonnaGoAhead_May::
# 393 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You make sure you grab yours as well,\n"
	.string "{PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaTakeMyLeave_May::
# 402 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You better train your Pokémon to use\n"
	.string "the stone, {PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaGoAhead_Brendan::
# 411 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "Make sure you grab yours before you\n"
	.string "leave, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

GonnaTakeMyLeave_Brendan::
# 420 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "I hope you train your Pokémon to get\n"
	.string "the most out of that stone, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

ThanksDadBirch::
# 429 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Thanks dad! I'm going to go\n"
	.string "and give this thing a try right away!$"

PickABall::
# 434 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Go on, pick one of the\n"
	.string "balls from the table.$"

TakeCareOfPokemon::
# 438 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you take\n"
	.string "good care of your new companion.$"

YourFatherIsInTown::
# 442 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, I almost forgot!\n"
	.string "Your father is currently in town.\p"
	.string "I know he's a busy man. You may want\n"
	.string "to dash on home before he leaves.$"

HeresYourStoneNow::
# 448 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you've made enough\n"
	.string "space in your bag to hold this stone.$"

ComeGetYourStoneLaterShort::
# 452 "data/maps/Lab2/scripts.pory"
	.string "No, looks like your bag is still full.\p"
	.string "You will need to make some room in your\n"
	.string "bag before I can give this to you.$"

BirchSurprised::
# 587 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh my!\p"
	.string "I knew these little fellas were\n"
	.string "energetic, but I never expected one\l"
	.string "to bust out of its ball like that!\p"
	.string "Now that you two are partners,\n"
	.string "I'm sure it will go back inside\l"
	.string "its ball if you simply ask it nicely.$"

Lab2_NotChosen::
# 597 "data/maps/Lab2/scripts.pory"
	.string "Take your time.$"
