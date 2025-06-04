Route11_MapScripts::
# 2 "data/maps/Route11/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route11_BrokenBridge
# 3 "data/maps/Route11/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_BrokenBridge
	.byte 0


Route11_BrokenBridge::
# 7 "data/maps/Route11/scripts.pory"
	goto_if_unset FLAG_VISITED_SANDSTONE_CITY, Route11_BrokenBridge_2
Route11_BrokenBridge_1:
# 47 "data/maps/Route11/scripts.pory"
	call Route11_TryMoveDayCareMan
# 48 "data/maps/Route11/scripts.pory"
	call SetupRivalGfxId
# 49 "data/maps/Route11/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
	end

Route11_BrokenBridge_2:
# 8 "data/maps/Route11/scripts.pory"
	setmetatile 82, 8, 0x075, TRUE
# 9 "data/maps/Route11/scripts.pory"
	setmetatile 83, 8, 0x075, TRUE
# 10 "data/maps/Route11/scripts.pory"
	setmetatile 84, 8, 0x075, TRUE
# 11 "data/maps/Route11/scripts.pory"
	setmetatile 85, 8, 0x190, TRUE
# 12 "data/maps/Route11/scripts.pory"
	setmetatile 86, 8, 0x170, TRUE
# 13 "data/maps/Route11/scripts.pory"
	setmetatile 87, 8, 0x170, TRUE
# 14 "data/maps/Route11/scripts.pory"
	setmetatile 88, 8, 0x192, TRUE
# 15 "data/maps/Route11/scripts.pory"
	setmetatile 89, 8, 0x073, TRUE
# 16 "data/maps/Route11/scripts.pory"
	setmetatile 90, 8, 0x073, TRUE
# 17 "data/maps/Route11/scripts.pory"
	setmetatile 91, 8, 0x073, TRUE
# 18 "data/maps/Route11/scripts.pory"
	setmetatile 82, 9, 0x075, TRUE
# 19 "data/maps/Route11/scripts.pory"
	setmetatile 83, 9, 0x10E, TRUE
# 20 "data/maps/Route11/scripts.pory"
	setmetatile 84, 9, 0x075, TRUE
# 21 "data/maps/Route11/scripts.pory"
	setmetatile 85, 9, 0x190, TRUE
# 22 "data/maps/Route11/scripts.pory"
	setmetatile 86, 9, 0x170, TRUE
# 23 "data/maps/Route11/scripts.pory"
	setmetatile 87, 9, 0x170, TRUE
# 24 "data/maps/Route11/scripts.pory"
	setmetatile 88, 9, 0x192, TRUE
# 25 "data/maps/Route11/scripts.pory"
	setmetatile 89, 9, 0x073, TRUE
# 26 "data/maps/Route11/scripts.pory"
	setmetatile 90, 9, 0x10E, TRUE
# 27 "data/maps/Route11/scripts.pory"
	setmetatile 91, 9, 0x073, TRUE
# 28 "data/maps/Route11/scripts.pory"
	setmetatile 83, 10, 0x116, TRUE
# 29 "data/maps/Route11/scripts.pory"
	setmetatile 84, 10, 0x10E, TRUE
# 30 "data/maps/Route11/scripts.pory"
	setmetatile 85, 10, 0x190, TRUE
# 31 "data/maps/Route11/scripts.pory"
	setmetatile 86, 10, 0x170, TRUE
# 32 "data/maps/Route11/scripts.pory"
	setmetatile 87, 10, 0x170, TRUE
# 33 "data/maps/Route11/scripts.pory"
	setmetatile 88, 10, 0x192, TRUE
# 34 "data/maps/Route11/scripts.pory"
	setmetatile 89, 10, 0x10E, TRUE
# 35 "data/maps/Route11/scripts.pory"
	setmetatile 90, 10, 0x116, TRUE
# 36 "data/maps/Route11/scripts.pory"
	setmetatile 84, 11, 0x116, TRUE
# 37 "data/maps/Route11/scripts.pory"
	setmetatile 85, 11, 0x2C0, TRUE
# 38 "data/maps/Route11/scripts.pory"
	setmetatile 86, 11, 0x2E2, TRUE
# 39 "data/maps/Route11/scripts.pory"
	setmetatile 87, 11, 0x2E2, TRUE
# 40 "data/maps/Route11/scripts.pory"
	setmetatile 88, 11, 0x2C7, TRUE
# 41 "data/maps/Route11/scripts.pory"
	setmetatile 89, 11, 0x116, TRUE
# 42 "data/maps/Route11/scripts.pory"
	setmetatile 85, 12, 0x2D0, TRUE
# 43 "data/maps/Route11/scripts.pory"
	setmetatile 86, 12, 0x2EA, TRUE
# 44 "data/maps/Route11/scripts.pory"
	setmetatile 87, 12, 0x2EA, TRUE
# 45 "data/maps/Route11/scripts.pory"
	setmetatile 88, 12, 0x2D7, TRUE
	goto Route11_BrokenBridge_1


Route11_UpdateDayCareMan::
# 54 "data/maps/Route11/scripts.pory"
	call Route11_TryMoveDayCareMan
# 55 "data/maps/Route11/scripts.pory"
	release
	return


Route11_TryMoveDayCareMan::
# 60 "data/maps/Route11/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route11_StopMoveDayCareMan
# 61 "data/maps/Route11/scripts.pory"
	setobjectxyperm 4, 68, 6
	return


Route11_StopMoveDayCareMan::
# 66 "data/maps/Route11/scripts.pory"
	setobjectxyperm 4, 68, 4
# 67 "data/maps/Route11/scripts.pory"
	release
	return


Route11_CaveManiac::
# 72 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_ITEM_ROUTE_11_TORMENT, Route11_CaveManiac_2
# 76 "data/maps/Route11/scripts.pory"
	lock
# 77 "data/maps/Route11/scripts.pory"
	faceplayer
# 78 "data/maps/Route11/scripts.pory"
	msgbox LeaveMeAlone_Torment, MSGBOX_DEFAULT
	checkitemspace ITEM_TM_TORMENT
# 0 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route11_CaveManiac_5
Route11_CaveManiac_4:
# 82 "data/maps/Route11/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 83 "data/maps/Route11/scripts.pory"
	waitse
# 84 "data/maps/Route11/scripts.pory"
	waitmessage
# 85 "data/maps/Route11/scripts.pory"
	setflag FLAG_ITEM_ROUTE_11_TORMENT
# 86 "data/maps/Route11/scripts.pory"
	closemessage
# 87 "data/maps/Route11/scripts.pory"
	release
	end

Route11_CaveManiac_2:
# 73 "data/maps/Route11/scripts.pory"
	msgbox LeaveThisCave, MSGBOX_NPC
	end

Route11_CaveManiac_5:
# 80 "data/maps/Route11/scripts.pory"
	goto ZeBagIsFull
	goto Route11_CaveManiac_4


Route11_RepairGuy::
# 100 "data/maps/Route11/scripts.pory"
	msgbox Route11_RepairGuy_Text, MSGBOX_NPC
	end


Route11_Tr1_Lass::
# 110 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR1_LASS, R11Tr1_Intro, R11Tr1_Lose, IncreaseR11Var
# 111 "data/maps/Route11/scripts.pory"
	msgbox R11Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr2_Birdkeeper::
# 127 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR2_BIRDKEEPER, R11Tr2_Intro, R11Tr2_Lose, IncreaseR11Var
# 128 "data/maps/Route11/scripts.pory"
	msgbox R11Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr3_Bugcatcher::
# 144 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR3_BUGCATCHER, R11Tr3_Intro, R11Tr3_Lose, IncreaseR11Var
# 145 "data/maps/Route11/scripts.pory"
	msgbox R11Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr4_Ninjaboy::
# 166 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR4_NINJABOY, R11Tr4_Intro, R11Tr4_Lose, IncreaseR11Var
# 167 "data/maps/Route11/scripts.pory"
	msgbox R11Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr5_Pokemaniac::
# 183 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR5_POKEMANIAC, R11Tr5_Intro, R11Tr5_Lose, IncreaseR11Var
# 184 "data/maps/Route11/scripts.pory"
	msgbox R11Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr6_Triathlete_F::
# 201 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR6_TRIATHLETE_F, R11Tr6_Intro, R11Tr6_Lose, IncreaseR11Var
# 202 "data/maps/Route11/scripts.pory"
	msgbox R11Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr7_Hiker::
# 218 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR7_HIKER, R11Tr7_Intro, R11Tr7_Lose, IncreaseR11Var
# 219 "data/maps/Route11/scripts.pory"
	msgbox R11Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr8_Ninjaboy_2::
# 237 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR8_NINJABOY_2, R11Tr8_Intro, R11Tr8_Lose
# 238 "data/maps/Route11/scripts.pory"
	msgbox R11Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr9_Ninjaboy_3::
# 255 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR9_NINJABOY_3, R11Tr9_Intro, R11Tr9_Lose
# 256 "data/maps/Route11/scripts.pory"
	msgbox R11Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr10_Cycler_M::
# 271 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR10_CYCLER_M, R11Tr10_Intro, R11Tr10_Lose, IncreaseR11Var
# 272 "data/maps/Route11/scripts.pory"
	msgbox R11Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr11_Blackbelt::
# 287 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR11_BLACKBELT, R11Tr11_Intro, R11Tr11_Lose, IncreaseR11Var
# 288 "data/maps/Route11/scripts.pory"
	msgbox R11Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr12_Expert::
# 303 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR12_EXPERT, R11Tr12_Intro, R11Tr12_Lose, IncreaseR11Var
# 304 "data/maps/Route11/scripts.pory"
	msgbox R11Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr13_Psychic_F::
# 321 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_R11_TR13_PSYCHIC_F, R11Tr13_Intro, R11Tr13_Lose, IncreaseR11Var
# 322 "data/maps/Route11/scripts.pory"
	msgbox R11Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr14_Acetrainer_F::
# 338 "data/maps/Route11/scripts.pory"
	compare VAR_R11_TRAINERS, 12
	goto_if_eq Route11_Tr14_Acetrainer_F_1
# 342 "data/maps/Route11/scripts.pory"
	compare VAR_R11_TRAINERS, 10
	goto_if_le Route11_Tr14_Acetrainer_F_4
Route11_Tr14_Acetrainer_F_3:
# 350 "data/maps/Route11/scripts.pory"
	goto R11_Ace_EligibleForBattle
	return

Route11_Tr14_Acetrainer_F_1:
# 339 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_PostBattle, MSGBOX_NPC
	end

Route11_Tr14_Acetrainer_F_2:
# 346 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_DefeatMoreTrainers, MSGBOX_NPC
	end

Route11_Tr14_Acetrainer_F_4:
# 343 "data/maps/Route11/scripts.pory"
	checktrainerflag TRAINER_R11_TR8_NINJABOY_2
	goto_if 1, Route11_Tr14_Acetrainer_F_6
	goto Route11_Tr14_Acetrainer_F_3

Route11_Tr14_Acetrainer_F_6:
# 344 "data/maps/Route11/scripts.pory"
	checktrainerflag TRAINER_R11_TR9_NINJABOY_3
	goto_if 1, Route11_Tr14_Acetrainer_F_2
	goto Route11_Tr14_Acetrainer_F_3


R11_Ace_EligibleForBattle::
# 355 "data/maps/Route11/scripts.pory"
	lock
# 356 "data/maps/Route11/scripts.pory"
	faceplayer
# 357 "data/maps/Route11/scripts.pory"
	checktrainerflag TRAINER_R11_TR14_ACETRAINER_F
	goto_if 1, R11_Ace_EligibleForBattle_2
R11_Ace_EligibleForBattle_1:
# 360 "data/maps/Route11/scripts.pory"
	goto_if_unset FLAG_TEMP_5, R11_Ace_EligibleForBattle_5
# 365 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_ReadyForBattleShort, MSGBOX_YESNO
R11_Ace_EligibleForBattle_4:
# 367 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R11_Ace_EligibleForBattle_9
R11_Ace_EligibleForBattle_8:
# 372 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_DeclineBattle, MSGBOX_NPC
	end

R11_Ace_EligibleForBattle_2:
# 358 "data/maps/Route11/scripts.pory"
	goto R11_Ace_PostBattleScript
	goto R11_Ace_EligibleForBattle_1

R11_Ace_EligibleForBattle_5:
# 361 "data/maps/Route11/scripts.pory"
	setflag FLAG_TEMP_5
# 362 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R11_Ace_EligibleForBattle_4

R11_Ace_EligibleForBattle_9:
# 368 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_BeginBattle, MSGBOX_DEFAULT
# 369 "data/maps/Route11/scripts.pory"
	trainerbattle_no_intro TRAINER_R11_TR14_ACETRAINER_F, R11_Ace_Lose
# 370 "data/maps/Route11/scripts.pory"
	goto R11_Ace_PostBattleScript
	goto R11_Ace_EligibleForBattle_8


R11_Ace_PostBattleScript::
# 377 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_LUCKY_EGG
# 0 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R11_Ace_PostBattleScript_2
R11_Ace_PostBattleScript_1:
# 381 "data/maps/Route11/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 382 "data/maps/Route11/scripts.pory"
	waitfanfare
# 383 "data/maps/Route11/scripts.pory"
	msgbox R11_Ace_ExplainReward
# 384 "data/maps/Route11/scripts.pory"
	setvar VAR_R11_TRAINERS, 12
# 385 "data/maps/Route11/scripts.pory"
	setvar VAR_0x8004, 25
# 386 "data/maps/Route11/scripts.pory"
	call RewardBP
# 387 "data/maps/Route11/scripts.pory"
	release
	end

R11_Ace_PostBattleScript_2:
# 379 "data/maps/Route11/scripts.pory"
	goto ZeBagIsFull
	goto R11_Ace_PostBattleScript_1


RewardBP::
# 452 "data/maps/Route11/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8004
# 453 "data/maps/Route11/scripts.pory"
	special GiveFrontierBattlePoints
# 454 "data/maps/Route11/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 455 "data/maps/Route11/scripts.pory"
	message RewardBP_Text_0
# 456 "data/maps/Route11/scripts.pory"
	waitfanfare
# 457 "data/maps/Route11/scripts.pory"
	goto_if_unset FLAG_INTRO_TO_BP, RewardBP_2
RewardBP_1:
# 461 "data/maps/Route11/scripts.pory"
	waitmessage
# 462 "data/maps/Route11/scripts.pory"
	closemessage
	return

RewardBP_2:
# 458 "data/maps/Route11/scripts.pory"
	msgbox ExplainBP, MSGBOX_DEFAULT
# 459 "data/maps/Route11/scripts.pory"
	setflag FLAG_INTRO_TO_BP
	goto RewardBP_1


IncreaseR11Var::
# 466 "data/maps/Route11/scripts.pory"
	addvar VAR_R11_TRAINERS, 1
	end


R11_RivalTrigger1::
# 471 "data/maps/Route11/scripts.pory"
	setvar VAR_TEMP_1, 1
# 472 "data/maps/Route11/scripts.pory"
	goto R11_RivalEvent
	end


R11_RivalTrigger2::
# 476 "data/maps/Route11/scripts.pory"
	setvar VAR_TEMP_1, 2
# 477 "data/maps/Route11/scripts.pory"
	goto R11_RivalEvent
	end


R11_RivalEvent::
# 481 "data/maps/Route11/scripts.pory"
	lock
# 482 "data/maps/Route11/scripts.pory"
	checkplayergender
# 483 "data/maps/Route11/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 484 "data/maps/Route11/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 485 "data/maps/Route11/scripts.pory"
	safefollow
# 486 "data/maps/Route11/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 487 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 488 "data/maps/Route11/scripts.pory"
	playse SE_PIN
# 489 "data/maps/Route11/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 490 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route11/scripts.pory"
	turnobject 9, DIR_SOUTH
# 492 "data/maps/Route11/scripts.pory"
	delay 70
# 493 "data/maps/Route11/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq R11_RivalEvent_2
# 497 "data/maps/Route11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
R11_RivalEvent_1:
# 499 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 500 "data/maps/Route11/scripts.pory"
	checkplayergender
# 501 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, R11_RivalEvent_5
# 505 "data/maps/Route11/scripts.pory"
	goto R11_RivalNotAngry
	return

R11_RivalEvent_2:
# 494 "data/maps/Route11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, R11_Move1
	goto R11_RivalEvent_1

R11_RivalEvent_5:
# 502 "data/maps/Route11/scripts.pory"
	goto R11_RivalAngry
	return


# 509 "data/maps/Route11/scripts.pory"
R11_Move1:
# 510 "data/maps/Route11/scripts.pory"
	walk_up
# 511 "data/maps/Route11/scripts.pory"
	walk_right
# 512 "data/maps/Route11/scripts.pory"
	walk_up
	step_end

# 514 "data/maps/Route11/scripts.pory"
KorrinaMove1:
# 515 "data/maps/Route11/scripts.pory"
	walk_down
# 516 "data/maps/Route11/scripts.pory"
	walk_in_place_right
# 517 "data/maps/Route11/scripts.pory"
	face_right
	step_end

# 519 "data/maps/Route11/scripts.pory"
KorrinaInPlace:
# 520 "data/maps/Route11/scripts.pory"
	walk_in_place_right
# 521 "data/maps/Route11/scripts.pory"
	face_right
	step_end

# 523 "data/maps/Route11/scripts.pory"
KorrinaMoveBack:
# 524 "data/maps/Route11/scripts.pory"
	walk_left
# 524 "data/maps/Route11/scripts.pory"
	walk_left
# 525 "data/maps/Route11/scripts.pory"
	walk_in_place_right
# 526 "data/maps/Route11/scripts.pory"
	face_right
	step_end

# 528 "data/maps/Route11/scripts.pory"
KorrinaMoveForward:
# 529 "data/maps/Route11/scripts.pory"
	walk_right
# 529 "data/maps/Route11/scripts.pory"
	walk_right
# 530 "data/maps/Route11/scripts.pory"
	face_right
	step_end

# 532 "data/maps/Route11/scripts.pory"
R11KorrinaLeaves:
# 533 "data/maps/Route11/scripts.pory"
	walk_up
# 533 "data/maps/Route11/scripts.pory"
	walk_up
# 534 "data/maps/Route11/scripts.pory"
	walk_left
# 535 "data/maps/Route11/scripts.pory"
	walk_up
# 535 "data/maps/Route11/scripts.pory"
	walk_up
# 535 "data/maps/Route11/scripts.pory"
	walk_up
# 535 "data/maps/Route11/scripts.pory"
	walk_up
	step_end

# 537 "data/maps/Route11/scripts.pory"
R11RivalLeaves:
# 538 "data/maps/Route11/scripts.pory"
	walk_up
# 539 "data/maps/Route11/scripts.pory"
	walk_left
# 539 "data/maps/Route11/scripts.pory"
	walk_left
# 540 "data/maps/Route11/scripts.pory"
	walk_up
# 540 "data/maps/Route11/scripts.pory"
	walk_up
# 540 "data/maps/Route11/scripts.pory"
	walk_up
# 540 "data/maps/Route11/scripts.pory"
	walk_up
# 540 "data/maps/Route11/scripts.pory"
	walk_up
	step_end

R11_RivalAngry::
# 544 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalAngry_2
# 548 "data/maps/Route11/scripts.pory"
	msgbox BrendanAngryIntro, MSGBOX_DEFAULT
R11_RivalAngry_1:
# 550 "data/maps/Route11/scripts.pory"
	call KorrinaIntro
# 551 "data/maps/Route11/scripts.pory"
	msgbox RivalAngry_Text, MSGBOX_DEFAULT
# 552 "data/maps/Route11/scripts.pory"
	call KorrinaMovesBack
# 553 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalAngry_6
# 557 "data/maps/Route11/scripts.pory"
	goto R11_AngryBrendanBattleSetup
R11_RivalAngry_5:
	end

R11_RivalAngry_2:
# 545 "data/maps/Route11/scripts.pory"
	msgbox MayAngryIntro, MSGBOX_DEFAULT
	goto R11_RivalAngry_1

R11_RivalAngry_6:
# 554 "data/maps/Route11/scripts.pory"
	goto R11_AngryMayBattleSetup
	goto R11_RivalAngry_5


R11_RivalNotAngry::
# 562 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalNotAngry_2
# 566 "data/maps/Route11/scripts.pory"
	msgbox BrendanNotAngryIntro, MSGBOX_DEFAULT
R11_RivalNotAngry_1:
# 568 "data/maps/Route11/scripts.pory"
	call KorrinaIntro
# 569 "data/maps/Route11/scripts.pory"
	msgbox RivalNotAngry_Text, MSGBOX_DEFAULT
# 570 "data/maps/Route11/scripts.pory"
	call KorrinaMovesBack
# 571 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalNotAngry_6
# 575 "data/maps/Route11/scripts.pory"
	goto R11_BrendanBattleSetup
R11_RivalNotAngry_5:
	end

R11_RivalNotAngry_2:
# 563 "data/maps/Route11/scripts.pory"
	msgbox MayNotAngryIntro, MSGBOX_DEFAULT
	goto R11_RivalNotAngry_1

R11_RivalNotAngry_6:
# 572 "data/maps/Route11/scripts.pory"
	goto R11_MayBattleSetup
	goto R11_RivalNotAngry_5


KorrinaIntro::
# 581 "data/maps/Route11/scripts.pory"
	closemessage
# 582 "data/maps/Route11/scripts.pory"
	playse SE_PIN
# 583 "data/maps/Route11/scripts.pory"
	safefollow
# 584 "data/maps/Route11/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 585 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 586 "data/maps/Route11/scripts.pory"
	delay 40
# 587 "data/maps/Route11/scripts.pory"
	turnobject 8, DIR_WEST
# 588 "data/maps/Route11/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 589 "data/maps/Route11/scripts.pory"
	delay 30
# 590 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, KorrinaIntro_2
# 594 "data/maps/Route11/scripts.pory"
	msgbox ThisPersonIs, MSGBOX_DEFAULT
KorrinaIntro_1:
# 596 "data/maps/Route11/scripts.pory"
	closemessage
# 597 "data/maps/Route11/scripts.pory"
	applymovement 9, KorrinaMove1
# 598 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 599 "data/maps/Route11/scripts.pory"
	delay 30
# 600 "data/maps/Route11/scripts.pory"
	msgbox KorrinaIntro_Text, MSGBOX_DEFAULT
# 601 "data/maps/Route11/scripts.pory"
	closemessage
# 602 "data/maps/Route11/scripts.pory"
	delay 30
# 603 "data/maps/Route11/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 604 "data/maps/Route11/scripts.pory"
	turnobject 8, DIR_SOUTH
# 605 "data/maps/Route11/scripts.pory"
	delay 30
	return

KorrinaIntro_2:
# 591 "data/maps/Route11/scripts.pory"
	msgbox ThisPersonIsAngry, MSGBOX_DEFAULT
	goto KorrinaIntro_1


KorrinaMovesBack::
# 609 "data/maps/Route11/scripts.pory"
	closemessage
# 610 "data/maps/Route11/scripts.pory"
	safefollow
# 611 "data/maps/Route11/scripts.pory"
	applymovement 9, KorrinaInPlace
# 612 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 613 "data/maps/Route11/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 614 "data/maps/Route11/scripts.pory"
	delay 10
# 615 "data/maps/Route11/scripts.pory"
	msgbox KorrinaGiveRoom, MSGBOX_DEFAULT
# 616 "data/maps/Route11/scripts.pory"
	closemessage
# 617 "data/maps/Route11/scripts.pory"
	applymovement 9, KorrinaMoveBack
# 618 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 619 "data/maps/Route11/scripts.pory"
	delay 20
# 620 "data/maps/Route11/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 621 "data/maps/Route11/scripts.pory"
	delay 40
	return


R11_AngryMayBattleSetup::
# 626 "data/maps/Route11/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_11_ANGRY, R11_AngryMayDefeated
# 627 "data/maps/Route11/scripts.pory"
	goto R11_RivalPostBattle
	return


R11_AngryBrendanBattleSetup::
# 630 "data/maps/Route11/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_11_ANGRY, R11_AngryBrendanDefeated
# 631 "data/maps/Route11/scripts.pory"
	goto R11_RivalPostBattle
	return


R11_MayBattleSetup::
# 634 "data/maps/Route11/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_11_NORMAL, R11_MayDefeated
# 635 "data/maps/Route11/scripts.pory"
	goto R11_RivalPostBattle
	return


R11_BrendanBattleSetup::
# 638 "data/maps/Route11/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_11_NORMAL, R11_BrendanDefeated
# 639 "data/maps/Route11/scripts.pory"
	goto R11_RivalPostBattle
	return


R11_RivalPostBattle::
# 643 "data/maps/Route11/scripts.pory"
	checkplayergender
# 644 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalPostBattle_2
# 648 "data/maps/Route11/scripts.pory"
	msgbox R11_BrendanPostText, MSGBOX_DEFAULT
R11_RivalPostBattle_1:
# 650 "data/maps/Route11/scripts.pory"
	closemessage
# 651 "data/maps/Route11/scripts.pory"
	safefollow
# 652 "data/maps/Route11/scripts.pory"
	applymovement 9, KorrinaMoveForward
# 653 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 654 "data/maps/Route11/scripts.pory"
	delay 10
# 655 "data/maps/Route11/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 656 "data/maps/Route11/scripts.pory"
	delay 30
# 657 "data/maps/Route11/scripts.pory"
	msgbox KorrinaComeChallenge, MSGBOX_DEFAULT
# 658 "data/maps/Route11/scripts.pory"
	closemessage
# 659 "data/maps/Route11/scripts.pory"
	applymovement 9, R11KorrinaLeaves
# 660 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 661 "data/maps/Route11/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 662 "data/maps/Route11/scripts.pory"
	delay 30
# 663 "data/maps/Route11/scripts.pory"
	checkitem ITEM_DOWSING_MACHINE
# 664 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R11_RivalPostBattle_6
R11_RivalPostBattle_5:
# 682 "data/maps/Route11/scripts.pory"
	goto R11_RivalExits
	return

R11_RivalPostBattle_2:
# 645 "data/maps/Route11/scripts.pory"
	msgbox R11_MayPostText, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_1

R11_RivalPostBattle_6:
# 665 "data/maps/Route11/scripts.pory"
	checkplayergender
# 666 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalPostBattle_9
# 670 "data/maps/Route11/scripts.pory"
	msgbox R11_BrendanGiveDowsingMchn, MSGBOX_DEFAULT
R11_RivalPostBattle_8:
# 672 "data/maps/Route11/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 673 "data/maps/Route11/scripts.pory"
	waitse
# 674 "data/maps/Route11/scripts.pory"
	waitmessage
# 675 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalPostBattle_12
# 679 "data/maps/Route11/scripts.pory"
	msgbox R11_BrendanDowsing, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_5

R11_RivalPostBattle_9:
# 667 "data/maps/Route11/scripts.pory"
	msgbox R11_MayGiveDowsingMchn, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_8

R11_RivalPostBattle_12:
# 676 "data/maps/Route11/scripts.pory"
	msgbox R11_MayDowsing, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_5


R11_RivalExits::
# 686 "data/maps/Route11/scripts.pory"
	checkplayergender
# 687 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalExits_2
# 693 "data/maps/Route11/scripts.pory"
	msgbox R11BrendanChallengeKorrina, MSGBOX_DEFAULT
# 694 "data/maps/Route11/scripts.pory"
	closemessage
# 695 "data/maps/Route11/scripts.pory"
	delay 15
R11_RivalExits_1:
# 697 "data/maps/Route11/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 698 "data/maps/Route11/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
# 699 "data/maps/Route11/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 700 "data/maps/Route11/scripts.pory"
	hideobjectat 8, MAP_ROUTE11
# 701 "data/maps/Route11/scripts.pory"
	addobject 28
# 702 "data/maps/Route11/scripts.pory"
	showobjectat 28, MAP_ROUTE11
# 703 "data/maps/Route11/scripts.pory"
	special DrawWholeMapView
# 704 "data/maps/Route11/scripts.pory"
	delay 40
# 705 "data/maps/Route11/scripts.pory"
	safefollow
# 706 "data/maps/Route11/scripts.pory"
	applymovement 28, R11RivalLeaves
# 707 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 708 "data/maps/Route11/scripts.pory"
	setvar VAR_GYM_TELEPORT, 1
# 709 "data/maps/Route11/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
# 710 "data/maps/Route11/scripts.pory"
	removeobject 9
# 711 "data/maps/Route11/scripts.pory"
	removeobject 8
# 712 "data/maps/Route11/scripts.pory"
	removeobject 28
# 713 "data/maps/Route11/scripts.pory"
	savebgm MUS_DUMMY
# 714 "data/maps/Route11/scripts.pory"
	fadedefaultbgm
# 715 "data/maps/Route11/scripts.pory"
	delay 60
# 716 "data/maps/Route11/scripts.pory"
	release
	end

R11_RivalExits_2:
# 688 "data/maps/Route11/scripts.pory"
	msgbox R11MayChallengeKorrina, MSGBOX_DEFAULT
# 689 "data/maps/Route11/scripts.pory"
	closemessage
# 690 "data/maps/Route11/scripts.pory"
	delay 30
	goto R11_RivalExits_1


R11VarTest::
# 906 "data/maps/Route11/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_R11_TRAINERS
# 907 "data/maps/Route11/scripts.pory"
	msgbox R11VarTest_Text_0, MSGBOX_NPC
	end


RewardBP_Text_0:
# 455 "data/maps/Route11/scripts.pory"
	.string "Earned {STR_VAR_1} BP!$"

R11VarTest_Text_0:
# 907 "data/maps/Route11/scripts.pory"
	.string "{STR_VAR_1}$"

LeaveMeAlone_Torment::
# 91 "data/maps/Route11/scripts.pory"
	.string "This is my secret hideout. Will you\n"
	.string "stop pestering me if I give you this?$"

LeaveThisCave::
# 95 "data/maps/Route11/scripts.pory"
	.string "Now leave me alone.$"

Route11_RepairGuy_Text::
# 103 "data/maps/Route11/scripts.pory"
	.string "We are working hard to get this bridge\n"
	.string "repaired as soon as possible.\p"
	.string "In the meanwhile, you'll have to take\n"
	.string "the longer route through the south.$"

R11Tr1_Intro::
# 114 "data/maps/Route11/scripts.pory"
	.string "If you don't pay attention,\n"
	.string "you could get hurt!$"

R11Tr1_Lose::
# 118 "data/maps/Route11/scripts.pory"
	.string "Ouch!\n"
	.string "I was the one to get hurt.$"

R11Tr1_PostBattle::
# 122 "data/maps/Route11/scripts.pory"
	.string "I wonder… Should I evolve my Pokémon?\n"
	.string "They're cute the way they are, though.$"

R11Tr2_Intro::
# 131 "data/maps/Route11/scripts.pory"
	.string "The vast sky holds untold promise!\p"
	.string "Nothing can compare to the sheer\n"
	.string "exhilaration of flight!$"

R11Tr2_Lose::
# 136 "data/maps/Route11/scripts.pory"
	.string "Down and out!$"

R11Tr2_PostBattle::
# 139 "data/maps/Route11/scripts.pory"
	.string "My bird Pokémon made my dreams of\n"
	.string "flying come true!$"

R11Tr3_Intro::
# 148 "data/maps/Route11/scripts.pory"
	.string "Once a bug catcher!\n"
	.string "And now a bug maniac!\p"
	.string "But my love for Pokémon remains\n"
	.string "unchanged!$"

R11Tr3_Lose::
# 154 "data/maps/Route11/scripts.pory"
	.string "My ineptitude also remains\n"
	.string "unchanged…$"

R11Tr3_PostBattle::
# 158 "data/maps/Route11/scripts.pory"
	.string "All I did was follow my heart, and now\n"
	.string "they call me a bug maniac\p"
	.string "Still, I am an expert on bug Pokémon,\n"
	.string "so it's only natural that they call me\l"
	.string "a bug maniac.$"

R11Tr4_Intro::
# 170 "data/maps/Route11/scripts.pory"
	.string "Bet you didn't see me coming!$"

R11Tr4_Lose::
# 173 "data/maps/Route11/scripts.pory"
	.string "Even with the element of surprise,\n"
	.string "I still lost…$"

R11Tr4_PostBattle::
# 177 "data/maps/Route11/scripts.pory"
	.string "This tall grass perfectly hides my\n"
	.string "presence. You never know what you'll\l"
	.string "find in it.$"

R11Tr5_Intro::
# 187 "data/maps/Route11/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …\l"
	.string "Want to battle?$"

R11Tr5_Lose::
# 192 "data/maps/Route11/scripts.pory"
	.string "Lost it…$"

R11Tr5_PostBattle::
# 195 "data/maps/Route11/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …\l"
	.string "I'll try harder…$"

R11Tr6_Intro::
# 205 "data/maps/Route11/scripts.pory"
	.string "Pokémon have many special abilities.\n"
	.string "If you want to become a first-class\l"
	.string "trainer, learn about them.$"

R11Tr6_Lose::
# 210 "data/maps/Route11/scripts.pory"
	.string "You're obviously thinking.$"

R11Tr6_PostBattle::
# 213 "data/maps/Route11/scripts.pory"
	.string "The special abilities of Pokémon\n"
	.string "will make battle styles change.$"

R11Tr7_Intro::
# 222 "data/maps/Route11/scripts.pory"
	.string "Hohoho!\n"
	.string "I like kid trainers!\l"
	.string "Let's have a good one!$"

R11Tr7_Lose::
# 227 "data/maps/Route11/scripts.pory"
	.string "You're pretty amazing!\n"
	.string "Hohoho!$"

R11Tr7_PostBattle::
# 231 "data/maps/Route11/scripts.pory"
	.string "Hohoho!\n"
	.string "I'll try emulating trainers\l"
	.string "like you!$"

R11Tr8_Intro::
# 241 "data/maps/Route11/scripts.pory"
	.string "To lurk in shadows, and live in\n"
	.string "darkness… That is my destiny.\p"
	.string "I emerge to challenge you!$"

R11Tr8_Lose::
# 246 "data/maps/Route11/scripts.pory"
	.string "I admit defeat!$"

R11Tr8_PostBattle::
# 249 "data/maps/Route11/scripts.pory"
	.string "Those defeated in battle withdraw\n"
	.string "quietly back into the shadows.\l"
	.string "That, too, is destiny…$"

R11Tr9_Intro::
# 259 "data/maps/Route11/scripts.pory"
	.string "If you're not on your guard,\n"
	.string "you're in for some pain!$"

R11Tr9_Lose::
# 263 "data/maps/Route11/scripts.pory"
	.string "You're surprisingly good!$"

R11Tr9_PostBattle::
# 266 "data/maps/Route11/scripts.pory"
	.string "My surprise attack ended in\n"
	.string "failure…$"

R11Tr10_Intro::
# 275 "data/maps/Route11/scripts.pory"
	.string "A true cycler keeps battling through\n"
	.string "even the most roughest of terrains!$"

R11Tr10_Lose::
# 279 "data/maps/Route11/scripts.pory"
	.string "Even in defeat, I never surrender!$"

R11Tr10_PostBattle::
# 282 "data/maps/Route11/scripts.pory"
	.string "It's hard to cycle with all this grass\n"
	.string "around, but I will prevail!$"

R11Tr11_Intro::
# 291 "data/maps/Route11/scripts.pory"
	.string "My Pokémon are strong!\n"
	.string "How about yours?$"

R11Tr11_Lose::
# 295 "data/maps/Route11/scripts.pory"
	.string "Your Pokémon were stronger…$"

R11Tr11_PostBattle::
# 298 "data/maps/Route11/scripts.pory"
	.string "A Pokémon that grows steadily is one\n"
	.string "you can count on.$"

R11Tr12_Intro::
# 307 "data/maps/Route11/scripts.pory"
	.string "With my Pokémon, I have traveled\n"
	.string "to the world's four corners.\p"
	.string "You might say I have some confidence\n"
	.string "in my abilities.$"

R11Tr12_Lose::
# 313 "data/maps/Route11/scripts.pory"
	.string "Ah, well played.$"

R11Tr12_PostBattle::
# 316 "data/maps/Route11/scripts.pory"
	.string "I would like to circle the globe once\n"
	.string "again with my Pokémon.$"

R11Tr13_Intro::
# 325 "data/maps/Route11/scripts.pory"
	.string "So, we finally meet! My psychic\n"
	.string "Pokémon will keep you company!$"

R11Tr13_Lose::
# 329 "data/maps/Route11/scripts.pory"
	.string "I wish we'd never met…$"

R11Tr13_PostBattle::
# 332 "data/maps/Route11/scripts.pory"
	.string "My third eye tried to warn me, yet I\n"
	.string "didn't listen…$"

R11_Ace_PostBattle::
# 391 "data/maps/Route11/scripts.pory"
	.string "I can't believe I just lost…$"

R11_Ace_DefeatMoreTrainers::
# 394 "data/maps/Route11/scripts.pory"
	.string "Heya! I've been looking for strong\n"
	.string "trainers to challenge.\p"
	.string "Think you got what it takes? Defeat all\n"
	.string "the other trainers in this area first\l"
	.string "and seek me out then.\p"
	.string "Having issues finding everyone?\p"
	.string "I heard people talking of some ninjas\n"
	.string "hiding in the tall grass.$"

R11_Ace_Lose::
# 404 "data/maps/Route11/scripts.pory"
	.string "No way that just happened…$"

R11_Ace_ReadyForBattle::
# 407 "data/maps/Route11/scripts.pory"
	.string "Heya! I've been looking for strong\n"
	.string "trainers to challenge, and I think you\l"
	.string "might fit the bill!\p"
	.string "How about it? Feel like having\n"
	.string "a Pokémon battle?\p"
	.string "My canine companions are getting\n"
	.string "restless.$"

R11_Ace_ReadyForBattleShort::
# 416 "data/maps/Route11/scripts.pory"
	.string "You're back!\p"
	.string "How about it? Feel like having\n"
	.string "a Pokémon battle?$"

R11_Ace_BeginBattle::
# 421 "data/maps/Route11/scripts.pory"
	.string "Cool! Let's get this show\n"
	.string "on the road!$"

R11_Ace_DeclineBattle::
# 425 "data/maps/Route11/scripts.pory"
	.string "Oh…\n"
	.string "Okay…\p"
	.string "Well, let me know if you change\n"
	.string "your mind…$"

R11_Ace_Reward::
# 431 "data/maps/Route11/scripts.pory"
	.string "I'm still a bit shocked to find someone\n"
	.string "so strong in this area.\p"
	.string "Oh well…\p"
	.string "You beat me fair and square so I think\n"
	.string "the only course of action is for you\l"
	.string "to have this.$"

R11_Ace_ExplainReward::
# 439 "data/maps/Route11/scripts.pory"
	.string "Having a Pokémon hold that Lucky Egg\n"
	.string "greatly increases the experience it\l"
	.string "earns from battles.\p"
	.string "If you're ever trying to level up\n"
	.string "a weaker Pokémon, just give that egg\l"
	.string "to it and watch it grow!\p"
	.string "…Oh, and before I forget, take these\n"
	.string "as well.$"

R11_BrendanDowsing::
# 720 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "You can use it to root around for items\n"
	.string "that aren't usually visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.$"

R11_MayDowsing::
# 727 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p$"

MayAngryIntro::
# 733 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Well, well, well.\n"
	.string "Look who finally showed up!\p"
	.string "I waited for you at the Coralgrove\n"
	.string "Harbor and you just bailed on me!\p"
	.string "Why, if we weren't in the middle\n"
	.string "of something, I'd…$"

BrendanAngryIntro::
# 741 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh? Look who just\n"
	.string "waltzed in.\p"
	.string "You know, I'm really disappointed\n"
	.string "in you, {PLAYER}.\p"
	.string "I kept waiting for you at the\n"
	.string "Coralgrove Harbor but you just\l"
	.string "walked on me…\p"
	.string "If we weren't in the middle of\n"
	.string "something, I'd…$"

RivalAngry_Text::
# 752 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Don't think I forgot how you\n"
	.string "just left me behind at Coralgrove.\p"
	.string "We were meant to have a Pokémon battle,\n"
	.string "but since that never happened,\l"
	.string "I'm challenging you here and now!\p"
	.string "I've practiced extra hard for this so\n"
	.string "I hope you haven't been slacking with\l"
	.string "your training.$"

MayNotAngryIntro::
# 762 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh, hi, {PLAYER}! Nice to see\n"
	.string "you finally caught up!\p"
	.string "I hope you've been working diligently,\n"
	.string "training your Pokémon and filling up\l"
	.string "that Pokédex of yours!\p"
	.string "Anyway, I was just having a nice\n"
	.string "chat with--$"

BrendanNotAngryIntro::
# 771 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh, hey, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "I hope you've been working hard,\n"
	.string "training your Pokémon and filling up\l"
	.string "that Pokédex my dad gave you.\p"
	.string "Anyway, we were just chatting with--$"

RivalNotAngry_Text::
# 779 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh, I know!\n"
	.string "It's been such a long time since our\l"
	.string "last meeting, I want to see how much\l"
	.string "you've grown.\p"
	.string "You may have won our last Pokémon\n"
	.string "battle, but don't think I'll be going\l"
	.string "down as easy this time!$"

ThisPersonIsAngry::
# 788 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh, I just realized how rude\n"
	.string "I was being to our guest.\p"
	.string "This person is--$"

ThisPersonIs::
# 793 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh, that's right. You two\n"
	.string "probably haven't met before.\p"
	.string "This person is--$"

KorrinaIntro_Text::
# 798 "data/maps/Route11/scripts.pory"
	.string "Heyo! I'm Korrina!\p"
	.string "I'm the leader of Sandstone City\n"
	.string "Pokémon Gym!\l"
	.string "Nice to meetcha!\p"
	.string "But enough about me, you must be\n"
	.string "{PLAYER}.\p"
	.string "{RIVAL} had all sorts of interesting\n"
	.string "things to say about you.\p"
	.string "I get you two are some sort friends,\n"
	.string "or rivals?\p"
	.string "I don't want to butt in so I'll let\n"
	.string "you two get caught up.$"

KorrinaGiveRoom::
# 812 "data/maps/Route11/scripts.pory"
	.string "Korrina: Oh, this sounds like fun!\n"
	.string "I deffo want to see this!\p"
	.string "I'll give you two some space so\n"
	.string "you can go all out.$"

R11_AngryBrendanDefeated::
# 818 "data/maps/Route11/scripts.pory"
	.string "After all the extra practice\n"
	.string "I still lost…$"

R11_AngryMayDefeated::
# 822 "data/maps/Route11/scripts.pory"
	.string "No! We practiced so hard!\n"
	.string "We can't just lose like this!$"

R11_MayDefeated::
# 826 "data/maps/Route11/scripts.pory"
	.string "We lost again! How does this\n"
	.string "keep happening!?$"

R11_BrendanDefeated::
# 830 "data/maps/Route11/scripts.pory"
	.string "I can't believe I lost again…$"

R11_MayPostText::
# 833 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Wow, {PLAYER}!\p"
	.string "I never imagined your team to have\n"
	.string "grown so much!\p"
	.string "Even if I lost, I still had a lot\n"
	.string "of fun!$"

R11_BrendanPostText::
# 840 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: What an amazing display\n"
	.string "of skill, {PLAYER}!\p"
	.string "I was so sure that I had it there, but\n"
	.string "look who turned out to be wrong.$"

KorrinaComeChallenge::
# 846 "data/maps/Route11/scripts.pory"
	.string "Korrina: From the way you two fought,\n"
	.string "I can see both of you really care\l"
	.string "for your Pokémon.\p"
	.string "I like trainers like you!\p"
	.string "You know, if it's cool with you two,\n"
	.string "I'd like to personally witness both\l"
	.string "of you in action.\p"
	.string "I need to head back to the gym now,\n"
	.string "but if you're ever in the area,\l"
	.string "I hope you guys come and take on the\l"
	.string "Sandstone City Pokémon Gym challenge!\p"
	.string "Anyways, catch you guys later!$"

R11_MayGiveDowsingMchn::
# 860 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh, that's right! There's\n"
	.string "something I was going to give to you\l"
	.string "back in Coralgrove before you bailed\l"
	.string "on me!\p"
	.string "I guess I might as well give it to\n"
	.string "you now…$"

R11_BrendanGiveDowsingMchn::
# 868 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: Oh, that's right! There's\n"
	.string "something I was going to give to you\l"
	.string "before you left me behind at\l"
	.string "Coralgrove.\p"
	.string "Guess now's as good a time as any\n"
	.string "to give it…$"

R11MayChallengeKorrina::
# 876 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: I'm not going to lie,\n"
	.string "that Korrina seemed awfully relaxed.\p"
	.string "Do you think she realized watching our\n"
	.string "battle that she has nothing to worry\l"
	.string "about?\p"
	.string "We should prepare well before taking\n"
	.string "on her gym.\p"
	.string "I'm going to head on ahead and make\n"
	.string "sure my Pokémon are well and fit by\l"
	.string "the time I take on the challenge.\p"
	.string "See you again soon!$"

R11BrendanChallengeKorrina::
# 889 "data/maps/Route11/scripts.pory"
	.string "{RIVAL}: I'm not going to lie,\n"
	.string "that Korrina seemed awfully relaxed.\p"
	.string "Maybe our battle made her realize the\n"
	.string "power gap between us, and now she\l"
	.string "thinks she has nothing to fret about?\p"
	.string "If that's the case, I think we should\n"
	.string "make sure to train our Pokémon and see\l"
	.string "that they are well and fit before we\l"
	.string "take on the gym.\p"
	.string "I'm going to go ahead and make sure\n"
	.string "my Pokémon get an ample amount of\l"
	.string "training.\p"
	.string "Hope to see you soon!$"
