Route15_MapScripts::
# 2 "data/maps/Route15/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, R15_FlagControl
# 3 "data/maps/Route15/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, R15_ClearBlockade
	.byte 0


R15_FlagControl::
# 6 "data/maps/Route15/scripts.pory"
	special SetRoute123Weather
# 7 "data/maps/Route15/scripts.pory"
	switch VAR_ROUTE14_ROCKET_EVENT
# 8 "data/maps/Route15/scripts.pory"
	case 4, R15_FlagControl_2
# 9 "data/maps/Route15/scripts.pory"
	case 5, R15_FlagControl_2
# 12 "data/maps/Route15/scripts.pory"
	case 6, R15_FlagControl_3
# 13 "data/maps/Route15/scripts.pory"
	case 7, R15_FlagControl_3
	return

R15_FlagControl_2:
# 10 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_2
# 11 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_1
	return

R15_FlagControl_3:
# 14 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_4
# 15 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_3
# 16 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_1
	return


R15_ClearBlockade::
# 21 "data/maps/Route15/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge R15_ClearBlockade_1
	return

R15_ClearBlockade_1:
# 22 "data/maps/Route15/scripts.pory"
	setmetatile 34, 44, 0x001, FALSE
# 23 "data/maps/Route15/scripts.pory"
	setmetatile 35, 44, 0x001, FALSE
# 24 "data/maps/Route15/scripts.pory"
	setmetatile 34, 45, 0x001, FALSE
# 25 "data/maps/Route15/scripts.pory"
	setmetatile 35, 45, 0x001, FALSE
	return


R15_Acerola::
# 30 "data/maps/Route15/scripts.pory"
	setflag FLAG_ACEROLA_TALKED_TO
# 31 "data/maps/Route15/scripts.pory"
	goto_if_set FLAG_TEMP_5, R15_Acerola_2
# 35 "data/maps/Route15/scripts.pory"
	lock
# 36 "data/maps/Route15/scripts.pory"
	faceplayer
# 37 "data/maps/Route15/scripts.pory"
	checkplayergender
# 38 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R15_Acerola_5
# 42 "data/maps/Route15/scripts.pory"
	bufferstring STR_VAR_1, R15_Acerola_Text_1
R15_Acerola_4:
# 44 "data/maps/Route15/scripts.pory"
	msgbox R15_Acerola_Text, MSGBOX_YESNO
# 45 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R15_Acerola_9
# 49 "data/maps/Route15/scripts.pory"
	msgbox AcerolaYouMustBeBusy
# 50 "data/maps/Route15/scripts.pory"
	closemessage
# 53 "data/maps/Route15/scripts.pory"
	safefollow
# 54 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_QuestionMark
# 55 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 56 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq R15_Acerola_13
# 64 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq R15_Acerola_14
# 72 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq R15_Acerola_15
# 81 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 82 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_EAST
# 83 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route15/scripts.pory"
	delay 100
# 85 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 86 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_WEST
R15_Acerola_12:
# 88 "data/maps/Route15/scripts.pory"
	delay 48
# 89 "data/maps/Route15/scripts.pory"
	msgbox AcerolaThatWay
R15_Acerola_8:
# 91 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_5
# 92 "data/maps/Route15/scripts.pory"
	release
	end

R15_Acerola_2:
# 32 "data/maps/Route15/scripts.pory"
	msgbox AcerolaThatWay, MSGBOX_NPC
	end

R15_Acerola_5:
# 39 "data/maps/Route15/scripts.pory"
	bufferstring STR_VAR_1, R15_Acerola_Text_0
	goto R15_Acerola_4

R15_Acerola_9:
# 46 "data/maps/Route15/scripts.pory"
	msgbox AcerolaShame
	goto R15_Acerola_8

R15_Acerola_13:
# 57 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 58 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
# 59 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route15/scripts.pory"
	delay 100
# 61 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 62 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
	goto R15_Acerola_12

R15_Acerola_14:
# 65 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 66 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
# 67 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route15/scripts.pory"
	delay 100
# 69 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 70 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
	goto R15_Acerola_12

R15_Acerola_15:
# 73 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 74 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_WEST
# 75 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route15/scripts.pory"
	delay 100
# 77 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 78 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_EAST
	goto R15_Acerola_12


Route15_Sign1::
# 119 "data/maps/Route15/scripts.pory"
	msgbox Route15_Sign1_Text, MSGBOX_SIGN
	return


Route15_Sign2::
# 125 "data/maps/Route15/scripts.pory"
	msgbox Route15_Sign2_Text, MSGBOX_SIGN
	return


Route15_Sign3::
# 133 "data/maps/Route15/scripts.pory"
	msgbox Route15_Sign3_Text, MSGBOX_SIGN
	return


R15_RockBlock::
# 142 "data/maps/Route15/scripts.pory"
	msgbox R15_RockBlock_Text, MSGBOX_NPC
# 143 "data/maps/Route15/scripts.pory"
	turnobject 2, DIR_NORTH
	return


R15_RR_Escapes::
# 150 "data/maps/Route15/scripts.pory"
	lock
# 151 "data/maps/Route15/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 4
# 152 "data/maps/Route15/scripts.pory"
	turnobject 18, DIR_NORTH
# 153 "data/maps/Route15/scripts.pory"
	playse SE_PIN
# 154 "data/maps/Route15/scripts.pory"
	safefollow
# 155 "data/maps/Route15/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 156 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route15/scripts.pory"
	delay 48
# 158 "data/maps/Route15/scripts.pory"
	applymovement 18, R15_GruntEscapes
# 159 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route15/scripts.pory"
	removeobject 18
# 161 "data/maps/Route15/scripts.pory"
	removeobject 23
# 162 "data/maps/Route15/scripts.pory"
	release
	return


# 164 "data/maps/Route15/scripts.pory"
R15_GruntEscapes:
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route15/scripts.pory"
	walk_fast_right
	step_end

Route15_Tr1_Birdkeeper::
# 169 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR1_BIRDKEEPER, R15Tr1_Intro, R15Tr1_Lose
# 170 "data/maps/Route15/scripts.pory"
	msgbox R15Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr2_RangerF::
# 189 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR2_RANGERF, R15Tr2_Intro, R15Tr2_Lose
# 190 "data/maps/Route15/scripts.pory"
	msgbox R15Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr3_RangerM::
# 209 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR3_RANGERM, R15Tr3_Intro, R15Tr3_Lose
# 210 "data/maps/Route15/scripts.pory"
	msgbox R15Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr4_Gentleman::
# 228 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR4_GENTLEMAN, R15Tr4_Intro, R15Tr4_Lose
# 229 "data/maps/Route15/scripts.pory"
	msgbox R15Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr5_Ninjaboy1::
# 245 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR5_NINJABOY1, R15Tr5_Intro, R15Tr5_Lose
# 246 "data/maps/Route15/scripts.pory"
	msgbox R15Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr6_Ninjaboy2::
# 261 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR6_NINJABOY2, R15Tr6_Intro, R15Tr6_Lose
# 262 "data/maps/Route15/scripts.pory"
	msgbox R15Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr7_Bugcatcher::
# 277 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR7_BUGCATCHER, R15Tr7_Intro, R15Tr7_Lose
# 278 "data/maps/Route15/scripts.pory"
	msgbox R15Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr8_Bugcatcher2::
# 295 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR8_BUGCATCHER2, R15Tr8_Intro, R15Tr8_Lose
# 296 "data/maps/Route15/scripts.pory"
	msgbox R15Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr9_Beauty::
# 313 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR9_BEAUTY, R15Tr9_Intro, R15Tr9_Lose
# 314 "data/maps/Route15/scripts.pory"
	msgbox R15Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr10_Fisher::
# 329 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR10_FISHER, R15Tr10_Intro, R15Tr10_Lose
# 330 "data/maps/Route15/scripts.pory"
	msgbox R15Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr13_Cooltrainer::
# 370 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR13_COOLTRAINER, R15Tr13_Intro, R15Tr13_Lose
# 371 "data/maps/Route15/scripts.pory"
	msgbox R15Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr14_Lass::
# 391 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR14_LASS, R15Tr14_Intro, R15Tr14_Lose
# 392 "data/maps/Route15/scripts.pory"
	msgbox R15Tr14_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr15_Scientist::
# 409 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR15_SCIENTIST, R15Tr15_Intro, R15Tr15_Lose
# 410 "data/maps/Route15/scripts.pory"
	msgbox R15Tr15_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr16_Aromalady::
# 429 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR16_AROMALADY, R15Tr16_Intro, R15Tr16_Lose
# 430 "data/maps/Route15/scripts.pory"
	msgbox R15Tr16_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr17_Ninjaboy3::
# 446 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR17_NINJABOY3, R15Tr17_Intro, R15Tr17_Lose
# 447 "data/maps/Route15/scripts.pory"
	msgbox R15Tr17_PostBattle, MSGBOX_AUTOCLOSE
	end


R15_AceTrainerF::
# 467 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_1, FEMALE
# 468 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerInteraction
	return


R15_AceTrainerM::
# 473 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_1, MALE
# 474 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerInteraction
	return


R15_AceTrainerInteraction::
# 478 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_M
	goto_if 1, R15_AceTrainerInteraction_1
# 478 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_F
	goto_if 1, R15_AceTrainerInteraction_1
# 481 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR1_BIRDKEEPER
	goto_if 1, R15_AceTrainerInteraction_4
R15_AceTrainerInteraction_3:
# 499 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerNotEligible
	return

R15_AceTrainerInteraction_1:
# 479 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerPostBattle
	return

R15_AceTrainerInteraction_2:
# 496 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerBattle
	return

R15_AceTrainerInteraction_4:
# 482 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR2_RANGERF
	goto_if 1, R15_AceTrainerInteraction_6
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_6:
# 483 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR3_RANGERM
	goto_if 1, R15_AceTrainerInteraction_8
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_8:
# 484 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR4_GENTLEMAN
	goto_if 1, R15_AceTrainerInteraction_10
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_10:
# 485 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR5_NINJABOY1
	goto_if 1, R15_AceTrainerInteraction_12
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_12:
# 486 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR6_NINJABOY2
	goto_if 1, R15_AceTrainerInteraction_14
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_14:
# 487 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR7_BUGCATCHER
	goto_if 1, R15_AceTrainerInteraction_16
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_16:
# 488 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR8_BUGCATCHER2
	goto_if 1, R15_AceTrainerInteraction_18
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_18:
# 489 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR9_BEAUTY
	goto_if 1, R15_AceTrainerInteraction_20
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_20:
# 490 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR10_FISHER
	goto_if 1, R15_AceTrainerInteraction_22
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_22:
# 491 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR13_COOLTRAINER
	goto_if 1, R15_AceTrainerInteraction_24
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_24:
# 492 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR14_LASS
	goto_if 1, R15_AceTrainerInteraction_26
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_26:
# 493 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR15_SCIENTIST
	goto_if 1, R15_AceTrainerInteraction_28
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_28:
# 494 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR16_AROMALADY
	goto_if 1, R15_AceTrainerInteraction_30
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_30:
# 495 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR17_NINJABOY3
	goto_if 1, R15_AceTrainerInteraction_2
	goto R15_AceTrainerInteraction_3


R15_AceTrainerPostBattle::
# 504 "data/maps/Route15/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 7
	goto_if_eq R15_AceTrainerPostBattle_2
# 515 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerPostBattle_5
# 519 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_RewardFemale, MSGBOX_DEFAULT
R15_AceTrainerPostBattle_4:
	checkitemspace ITEM_ROCKY_HELMET
# 0 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R15_AceTrainerPostBattle_13
R15_AceTrainerPostBattle_12:
# 524 "data/maps/Route15/scripts.pory"
	giveitem ITEM_ROCKY_HELMET
# 525 "data/maps/Route15/scripts.pory"
	waitfanfare
# 526 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_ExplainReward
# 527 "data/maps/Route15/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 7
# 528 "data/maps/Route15/scripts.pory"
	setvar VAR_0x8004, 25
# 529 "data/maps/Route15/scripts.pory"
	call RewardBP
# 530 "data/maps/Route15/scripts.pory"
	release
	end

R15_AceTrainerPostBattle_2:
# 505 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerPostBattle_9
# 509 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_PostBattleFemale, MSGBOX_NPC
R15_AceTrainerPostBattle_8:
# 511 "data/maps/Route15/scripts.pory"
	turnobject 27, DIR_WEST
# 512 "data/maps/Route15/scripts.pory"
	turnobject 28, DIR_WEST
	end

R15_AceTrainerPostBattle_5:
# 516 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_RewardMale, MSGBOX_DEFAULT
	goto R15_AceTrainerPostBattle_4

R15_AceTrainerPostBattle_9:
# 506 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_PostBattleMale, MSGBOX_NPC
	goto R15_AceTrainerPostBattle_8

R15_AceTrainerPostBattle_13:
# 522 "data/maps/Route15/scripts.pory"
	goto ZeBagIsFull
	goto R15_AceTrainerPostBattle_12


R15_AceTrainerBattle::
# 569 "data/maps/Route15/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 570 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq R15_AceTrainerBattle_2
R15_AceTrainerBattle_1:
# 573 "data/maps/Route15/scripts.pory"
	checkplayergender
# 574 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R15_AceTrainerBattle_5
# 578 "data/maps/Route15/scripts.pory"
	bufferstring STR_VAR_1, R15_AceTrainerBattle_Text_1
R15_AceTrainerBattle_4:
# 580 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattle_8
# 584 "data/maps/Route15/scripts.pory"
	msgbox R15GetMoreMonsFemale, MSGBOX_NPC
	return

R15_AceTrainerBattle_2:
# 571 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerBattleEnoughMons
	goto R15_AceTrainerBattle_1

R15_AceTrainerBattle_5:
# 575 "data/maps/Route15/scripts.pory"
	bufferstring STR_VAR_1, R15_AceTrainerBattle_Text_0
	goto R15_AceTrainerBattle_4

R15_AceTrainerBattle_8:
# 581 "data/maps/Route15/scripts.pory"
	msgbox R15GetMoreMonsMale, MSGBOX_NPC
	return


R15_AceTrainerBattleEnoughMons::
# 607 "data/maps/Route15/scripts.pory"
	lock
# 608 "data/maps/Route15/scripts.pory"
	faceplayer
# 609 "data/maps/Route15/scripts.pory"
	goto_if_unset FLAG_TEMP_8, R15_AceTrainerBattleEnoughMons_2
# 619 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_11
# 623 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleFemaleShort, MSGBOX_YESNO
R15_AceTrainerBattleEnoughMons_1:
# 626 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R15_AceTrainerBattleEnoughMons_6
R15_AceTrainerBattleEnoughMons_5:
# 631 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_15
# 635 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_DeclineBattleFemale, MSGBOX_NPC
R15_AceTrainerBattleEnoughMons_14:
# 637 "data/maps/Route15/scripts.pory"
	turnobject 27, DIR_WEST
# 638 "data/maps/Route15/scripts.pory"
	turnobject 28, DIR_WEST
	end

R15_AceTrainerBattleEnoughMons_2:
# 610 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_8
# 611 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_8
# 615 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleFemale, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_6:
# 627 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_BeginBattle, MSGBOX_DEFAULT
# 628 "data/maps/Route15/scripts.pory"
	trainerbattle_two_trainers TRAINER_R15_ACETRAINER_M, R15_AceM_Lose, TRAINER_R15_ACETRAINER_F, R15_AceF_Lose
# 629 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerPostBattle
	goto R15_AceTrainerBattleEnoughMons_5

R15_AceTrainerBattleEnoughMons_8:
# 612 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleMale, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_11:
# 620 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleMaleShort, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_15:
# 632 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_DeclineBattleMale, MSGBOX_NPC
	goto R15_AceTrainerBattleEnoughMons_14


R15_AceTrainerNotEligible::
# 688 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, FEMALE
	goto_if_eq R15_AceTrainerNotEligible_2
# 692 "data/maps/Route15/scripts.pory"
	msgbox R15DefeatMoreTrainersMale, MSGBOX_NPC
R15_AceTrainerNotEligible_1:
# 694 "data/maps/Route15/scripts.pory"
	turnobject 27, DIR_WEST
# 695 "data/maps/Route15/scripts.pory"
	turnobject 28, DIR_WEST
	end

R15_AceTrainerNotEligible_2:
# 689 "data/maps/Route15/scripts.pory"
	msgbox R15DefeatMoreTrainersFemale, MSGBOX_NPC
	goto R15_AceTrainerNotEligible_1


Route15_Grotto_Entrance::
# 711 "data/maps/Route15/scripts.pory"
	lock
# 712 "data/maps/Route15/scripts.pory"
	msgbox GoInsideGrotto, MSGBOX_YESNO
# 713 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route15_Grotto_Entrance_2
# 717 "data/maps/Route15/scripts.pory"
	warp MAP_ROUTE15_GROTTO, 6, 19
# 718 "data/maps/Route15/scripts.pory"
	waitstate
# 719 "data/maps/Route15/scripts.pory"
	release
	return

Route15_Grotto_Entrance_2:
# 714 "data/maps/Route15/scripts.pory"
	release
	end


R15_Acerola_Text_0:
# 39 "data/maps/Route15/scripts.pory"
	.string "mister$"

R15_Acerola_Text_1:
# 42 "data/maps/Route15/scripts.pory"
	.string "miss$"

R15_AceTrainerBattle_Text_0:
# 575 "data/maps/Route15/scripts.pory"
	.string "lad$"

R15_AceTrainerBattle_Text_1:
# 578 "data/maps/Route15/scripts.pory"
	.string "lass$"

AcerolaThatWay::
# 95 "data/maps/Route15/scripts.pory"
	.string "Acerola: If you're looking for the guy\n"
	.string "in black clothes, I saw him heading\l"
	.string "south towards Amberock Town.$"

AcerolaShame::
# 100 "data/maps/Route15/scripts.pory"
	.string "Aww, that's a shame…\p"
	.string "Oh, I get it! You must be playing tag\n"
	.string "with the guy in black, right?\p"
	.string "I saw him running south towards\n"
	.string "Amberock Town.$"

AcerolaYouMustBeBusy::
# 107 "data/maps/Route15/scripts.pory"
	.string "Hee hee, so many new friends to\n"
	.string "play with!\p"
	.string "…Oh?\p"
	.string "The person behind you is saying that\n"
	.string "you're busy chasing down a bad guy…$"

R15_Acerola_Text::
# 114 "data/maps/Route15/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\n"
	.string "Are you here to play with Acerola?$"

Route15_Sign1_Text::
# 121 "data/maps/Route15/scripts.pory"
	.string "Move Reminder's House$"

Route15_Sign2_Text::
# 127 "data/maps/Route15/scripts.pory"
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town$"

Route15_Sign3_Text::
# 135 "data/maps/Route15/scripts.pory"
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town\l"
	.string "{RIGHT_ARROW} Berry Fields$"

R15_RockBlock_Text::
# 145 "data/maps/Route15/scripts.pory"
	.string "As a Pokémon Ranger, it is my duty to\n"
	.string "clear this path as fast as possible!$"

R15Tr1_Intro::
# 173 "data/maps/Route15/scripts.pory"
	.string "My Pokémon have so much room to\n"
	.string "move here.\p"
	.string "There's nowhere your Pokémon can hide!$"

R15Tr1_Lose::
# 178 "data/maps/Route15/scripts.pory"
	.string "We got too ambitious…$"

R15Tr1_PostBattle::
# 181 "data/maps/Route15/scripts.pory"
	.string "My Pokémon have been scouting the\n"
	.string "nearby trees.\p"
	.string "They seem to be drawn towards\n"
	.string "something in the southeast.$"

R15Tr2_Intro::
# 193 "data/maps/Route15/scripts.pory"
	.string "We haven't had any real challenge\n"
	.string "in a while.\l"
	.string "Let's see if you can provide one!$"

R15Tr2_Lose::
# 198 "data/maps/Route15/scripts.pory"
	.string "Yep, I'd say you were adequate…$"

R15Tr2_PostBattle::
# 201 "data/maps/Route15/scripts.pory"
	.string "Us Pokémon Rangers keep routes\n"
	.string "safe from harm.\p"
	.string "That's why we must keep our Pokémon\n"
	.string "alert and prepared for anything.$"

R15Tr3_Intro::
# 213 "data/maps/Route15/scripts.pory"
	.string "You know it, I know it,\n"
	.string "there's nothing more to be said.\p"
	.string "Let's go!$"

R15Tr3_Lose::
# 218 "data/maps/Route15/scripts.pory"
	.string "Guh…$"

R15Tr3_PostBattle::
# 221 "data/maps/Route15/scripts.pory"
	.string "There's no need for words.\p"
	.string "The way you carry yourself in battle\n"
	.string "says more than any words ever could.$"

R15Tr4_Intro::
# 232 "data/maps/Route15/scripts.pory"
	.string "You there!\n"
	.string "How about a friendly competition?$"

R15Tr4_Lose::
# 236 "data/maps/Route15/scripts.pory"
	.string "Good show!$"

R15Tr4_PostBattle::
# 239 "data/maps/Route15/scripts.pory"
	.string "There's nothing more invigorating than\n"
	.string "a friendly competition!$"

R15Tr5_Intro::
# 249 "data/maps/Route15/scripts.pory"
	.string "Go ninja go!$"

R15Tr5_Lose::
# 252 "data/maps/Route15/scripts.pory"
	.string "My Pokémon were supposed to be the\n"
	.string "world's most fearsome fighting team!$"

R15Tr5_PostBattle::
# 256 "data/maps/Route15/scripts.pory"
	.string "Gimme a break.$"

R15Tr6_Intro::
# 265 "data/maps/Route15/scripts.pory"
	.string "I crush anyone who stands against me!$"

R15Tr6_Lose::
# 268 "data/maps/Route15/scripts.pory"
	.string "Um, forget what I said before\n"
	.string "the battle…$"

R15Tr6_PostBattle::
# 272 "data/maps/Route15/scripts.pory"
	.string "Can we just pretend we never met?$"

R15Tr7_Intro::
# 281 "data/maps/Route15/scripts.pory"
	.string "Let me show you just how awesome bugs\n"
	.string "can be!$"

R15Tr7_Lose::
# 285 "data/maps/Route15/scripts.pory"
	.string "This loss is entirely my and not\n"
	.string "my bugs' fault.$"

R15Tr7_PostBattle::
# 289 "data/maps/Route15/scripts.pory"
	.string "Bugs are still cool!\n"
	.string "Even if I'm not…$"

R15Tr8_Intro::
# 299 "data/maps/Route15/scripts.pory"
	.string "My bugs have reached their peak.\n"
	.string "Think you have a chance?$"

R15Tr8_Lose::
# 303 "data/maps/Route15/scripts.pory"
	.string "Even at our peak, we still lost…$"

R15Tr8_PostBattle::
# 306 "data/maps/Route15/scripts.pory"
	.string "Many people look down on Bug Pokémon.\n"
	.string "They just haven't found any of the\l"
	.string "good ones.$"

R15Tr9_Intro::
# 317 "data/maps/Route15/scripts.pory"
	.string "Think your Pokémon can outshine mine?$"

R15Tr9_Lose::
# 320 "data/maps/Route15/scripts.pory"
	.string "Outshone and outmaneuvered…$"

R15Tr9_PostBattle::
# 323 "data/maps/Route15/scripts.pory"
	.string "Your Pokémon shine like no other.\n"
	.string "Never stop cherishing them.$"

R15Tr10_Intro::
# 333 "data/maps/Route15/scripts.pory"
	.string "I'm having no luck when it comes to\n"
	.string "fishing.\p"
	.string "Maybe I'll have more luck in a Pokémon\n"
	.string "battle!$"

R15Tr10_Lose::
# 339 "data/maps/Route15/scripts.pory"
	.string "Still no luck…$"

R15Tr10_PostBattle::
# 342 "data/maps/Route15/scripts.pory"
	.string "I wanted to try fishing here but\n"
	.string "this cliff is so high that my lure\l"
	.string "doesn't even reach the ocean.$"

R15Tr13_Intro::
# 374 "data/maps/Route15/scripts.pory"
	.string "You look like a strong trainer.\n"
	.string "Are you?$"

R15Tr13_Lose::
# 378 "data/maps/Route15/scripts.pory"
	.string "I have been outmatched.\n"
	.string "Well fought.$"

R15Tr13_PostBattle::
# 382 "data/maps/Route15/scripts.pory"
	.string "Sometimes you can guess how strong\n"
	.string "a trainer is just by looking at them.\p"
	.string "I could tell that you were probably\n"
	.string "stronger than me, but I couldn't just\l"
	.string "back down from the challenge.$"

R15Tr14_Intro::
# 395 "data/maps/Route15/scripts.pory"
	.string "You seem like you'd enjoy a relaxing\n"
	.string "Pokémon battle!$"

R15Tr14_Lose::
# 399 "data/maps/Route15/scripts.pory"
	.string "Even if I lost, I still had fun!$"

R15Tr14_PostBattle::
# 402 "data/maps/Route15/scripts.pory"
	.string "I saw some creepy looking people come\n"
	.string "through this way recently.\l"
	.string "They were headed south.$"

R15Tr15_Intro::
# 413 "data/maps/Route15/scripts.pory"
	.string "You are ruining my research!$"

R15Tr15_Lose::
# 416 "data/maps/Route15/scripts.pory"
	.string "My samples…\n"
	.string "in shambles…$"

R15Tr15_PostBattle::
# 420 "data/maps/Route15/scripts.pory"
	.string "I'm out here collecting water samples\n"
	.string "for analysis.\p"
	.string "I'm hoping to find a connection\n"
	.string "between water quality and the type of\l"
	.string "Pokémon habitat it attracts.$"

R15Tr16_Intro::
# 433 "data/maps/Route15/scripts.pory"
	.string "Please, allow me to evaluate if you\n"
	.string "have raised your Pokémon properly.$"

R15Tr16_Lose::
# 437 "data/maps/Route15/scripts.pory"
	.string "Yes, they are growing properly.$"

R15Tr16_PostBattle::
# 440 "data/maps/Route15/scripts.pory"
	.string "Try raising Pokémon with more\n"
	.string "attention to their character traits.$"

R15Tr17_Intro::
# 450 "data/maps/Route15/scripts.pory"
	.string "I do my triathlon training with Pokémon,\n"
	.string "so I'm pretty confident about my speed.$"

R15Tr17_Lose::
# 454 "data/maps/Route15/scripts.pory"
	.string "I need to get more practices in,\n"
	.string "I guess.$"

R15Tr17_PostBattle::
# 459 "data/maps/Route15/scripts.pory"
	.string "Training is meaningful only if you\n"
	.string "keep it up regularly.\p"
	.string "Okay! I'll resume my training!\n"
	.string "Tomorrow!$"

R15_Ace_PostBattleMale::
# 534 "data/maps/Route15/scripts.pory"
	.string "That was a great battle.\p"
	.string "Keep growing and I bet you can even\n"
	.string "take on the Pokémon League!$"

R15_Ace_PostBattleFemale::
# 539 "data/maps/Route15/scripts.pory"
	.string "I can't believe we lost even though\n"
	.string "it was a two against one battle.$"

R15_Ace_ExplainReward::
# 543 "data/maps/Route15/scripts.pory"
	.string "The Rocky Helmet causes any Pokémon\n"
	.string "that comes in contact with the Pokémon\l"
	.string "wearing it to take damage.\p"
	.string "It's especially great if the enemy is\n"
	.string "using multi-hit moves or the Pokémon\l"
	.string "wearing the helmet is especially bulky.\p"
	.string "In addition to that,\n"
	.string "I want you to have these.$"

R15_Ace_RewardMale::
# 553 "data/maps/Route15/scripts.pory"
	.string "That was a great battle!\p"
	.string "Despite going against two opponents,\n"
	.string "you still managed to secure a victory.\p"
	.string "Such great skill has to be rewarded!$"

R15_Ace_RewardFemale::
# 559 "data/maps/Route15/scripts.pory"
	.string "I'm shocked!\n"
	.string "I thought our combos were unbeatable!\p"
	.string "This feat of strength will not go\n"
	.string "unrewarded.\l"
	.string "Here, have this.$"

R15GetMoreMonsMale::
# 587 "data/maps/Route15/scripts.pory"
	.string "I've seen you battling the other\n"
	.string "trainers around here and there's\l"
	.string "no doubt you're strong,\l"
	.string "but we only fight in pairs.\p"
	.string "You'll need to have at least 2 Pokémon\n"
	.string "that are ready for battle.$"

R15GetMoreMonsFemale::
# 595 "data/maps/Route15/scripts.pory"
	.string "You seem like a nice {STR_VAR_1} and you're\n"
	.string "more than capable of defeating every\l"
	.string "other trainer on this route,\l"
	.string "but we always fight in pairs.\p"
	.string "It would be too unfair if we fought\n"
	.string "you while you only had 1 Pokémon\l"
	.string "that was ready for battle.$"

R11_Ace_ReadyForBattleMale::
# 641 "data/maps/Route15/scripts.pory"
	.string "I've seen the ease with which you\n"
	.string "defeated other trainers around here.\p"
	.string "Would you care to challenge us?\p"
	.string "This will be a double battle so you\n"
	.string "need at least two healthy Pokémon.$"

R11_Ace_ReadyForBattleFemale::
# 648 "data/maps/Route15/scripts.pory"
	.string "I saw the way you took out every\n"
	.string "other trainer in this area.\p"
	.string "You seem pretty strong.\p"
	.string "Would you like to try your hand at\n"
	.string "a double battle?\p"
	.string "I warn you, our teamwork is\n"
	.string "second to none.$"

R11_Ace_ReadyForBattleMaleShort::
# 657 "data/maps/Route15/scripts.pory"
	.string "Have you changed your mind?$"

R11_Ace_ReadyForBattleFemaleShort::
# 660 "data/maps/Route15/scripts.pory"
	.string "You're back!\p"
	.string "That must mean you've changed your\n"
	.string "mind, correct?$"

R15_Ace_BeginBattle::
# 665 "data/maps/Route15/scripts.pory"
	.string "Okay then, let's begin!$"

R15_AceM_Lose::
# 668 "data/maps/Route15/scripts.pory"
	.string "Even against two opponents, you\n"
	.string "still kept your cool…\l"
	.string "Amazing!$"

R15_AceF_Lose::
# 673 "data/maps/Route15/scripts.pory"
	.string "Even with our combined strength,\n"
	.string "we lost…$"

R15_Ace_DeclineBattleMale::
# 677 "data/maps/Route15/scripts.pory"
	.string "Well, if you change your mind,\n"
	.string "you can find us here.$"

R15_Ace_DeclineBattleFemale::
# 681 "data/maps/Route15/scripts.pory"
	.string "Oh…\p"
	.string "Well, do let us know if you change\n"
	.string "your mind, okay?$"

R15DefeatMoreTrainersFemale::
# 698 "data/maps/Route15/scripts.pory"
	.string "I'm sorry, but we don't really care\n"
	.string "to fight against anyone who hasn't\l"
	.string "proven themself yet.\p"
	.string "Try defeating more trainers first.$"

R15DefeatMoreTrainersMale::
# 704 "data/maps/Route15/scripts.pory"
	.string "You want a REAL battle?\p"
	.string "Prove that you're not a weakling first\n"
	.string "and only then come and talk to us.$"
