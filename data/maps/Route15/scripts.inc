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
# 51 "data/maps/Route15/scripts.pory"
	checkfollower
# 52 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R15_Acerola_13
# 90 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 91 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq R15_Acerola_23
# 97 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq R15_Acerola_24
# 103 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq R15_Acerola_25
# 110 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 111 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route15/scripts.pory"
	delay 100
# 113 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
R15_Acerola_12:
# 116 "data/maps/Route15/scripts.pory"
	delay 48
# 117 "data/maps/Route15/scripts.pory"
	msgbox AcerolaThatWay
R15_Acerola_8:
# 119 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_5
# 120 "data/maps/Route15/scripts.pory"
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
# 53 "data/maps/Route15/scripts.pory"
	safefollow
# 54 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 55 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_QuestionMark
# 56 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq R15_Acerola_16
# 64 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq R15_Acerola_17
# 72 "data/maps/Route15/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq R15_Acerola_18
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
	goto R15_Acerola_12

R15_Acerola_16:
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

R15_Acerola_17:
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

R15_Acerola_18:
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

R15_Acerola_23:
# 92 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 93 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route15/scripts.pory"
	delay 100
# 95 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto R15_Acerola_12

R15_Acerola_24:
# 98 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 99 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route15/scripts.pory"
	delay 100
# 101 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto R15_Acerola_12

R15_Acerola_25:
# 104 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 105 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route15/scripts.pory"
	delay 100
# 107 "data/maps/Route15/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto R15_Acerola_12


Route15_Sign1::
# 147 "data/maps/Route15/scripts.pory"
	msgbox Route15_Sign1_Text, MSGBOX_SIGN
	return


Route15_Sign2::
# 153 "data/maps/Route15/scripts.pory"
	msgbox Route15_Sign2_Text, MSGBOX_SIGN
	return


Route15_Sign3::
# 161 "data/maps/Route15/scripts.pory"
	msgbox Route15_Sign3_Text, MSGBOX_SIGN
	return


R15_RockBlock::
# 170 "data/maps/Route15/scripts.pory"
	msgbox R15_RockBlock_Text, MSGBOX_NPC
# 171 "data/maps/Route15/scripts.pory"
	turnobject 2, DIR_NORTH
	return


R15_RR_Escapes::
# 178 "data/maps/Route15/scripts.pory"
	lock
# 179 "data/maps/Route15/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 4
# 180 "data/maps/Route15/scripts.pory"
	turnobject 18, DIR_NORTH
# 181 "data/maps/Route15/scripts.pory"
	playse SE_PIN
# 182 "data/maps/Route15/scripts.pory"
	safefollow
# 183 "data/maps/Route15/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 184 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route15/scripts.pory"
	delay 48
# 186 "data/maps/Route15/scripts.pory"
	applymovement 18, R15_GruntEscapes
# 187 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route15/scripts.pory"
	removeobject 18
# 189 "data/maps/Route15/scripts.pory"
	removeobject 23
# 190 "data/maps/Route15/scripts.pory"
	release
	return


# 192 "data/maps/Route15/scripts.pory"
R15_GruntEscapes:
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route15/scripts.pory"
	walk_fast_right
	step_end

Route15_Tr1_Birdkeeper::
# 197 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR1_BIRDKEEPER, R15Tr1_Intro, R15Tr1_Lose
# 198 "data/maps/Route15/scripts.pory"
	msgbox R15Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr2_RangerF::
# 217 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR2_RANGERF, R15Tr2_Intro, R15Tr2_Lose
# 218 "data/maps/Route15/scripts.pory"
	msgbox R15Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr3_RangerM::
# 237 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR3_RANGERM, R15Tr3_Intro, R15Tr3_Lose
# 238 "data/maps/Route15/scripts.pory"
	msgbox R15Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr4_Gentleman::
# 256 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR4_GENTLEMAN, R15Tr4_Intro, R15Tr4_Lose
# 257 "data/maps/Route15/scripts.pory"
	msgbox R15Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr5_Ninjaboy1::
# 273 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR5_NINJABOY1, R15Tr5_Intro, R15Tr5_Lose
# 274 "data/maps/Route15/scripts.pory"
	msgbox R15Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr6_Ninjaboy2::
# 289 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR6_NINJABOY2, R15Tr6_Intro, R15Tr6_Lose
# 290 "data/maps/Route15/scripts.pory"
	msgbox R15Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr7_Bugcatcher::
# 305 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR7_BUGCATCHER, R15Tr7_Intro, R15Tr7_Lose
# 306 "data/maps/Route15/scripts.pory"
	msgbox R15Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr8_Bugcatcher2::
# 323 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR8_BUGCATCHER2, R15Tr8_Intro, R15Tr8_Lose
# 324 "data/maps/Route15/scripts.pory"
	msgbox R15Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr9_Beauty::
# 341 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR9_BEAUTY, R15Tr9_Intro, R15Tr9_Lose
# 342 "data/maps/Route15/scripts.pory"
	msgbox R15Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr10_Fisher::
# 357 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR10_FISHER, R15Tr10_Intro, R15Tr10_Lose
# 358 "data/maps/Route15/scripts.pory"
	msgbox R15Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr13_Cooltrainer::
# 398 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR13_COOLTRAINER, R15Tr13_Intro, R15Tr13_Lose
# 399 "data/maps/Route15/scripts.pory"
	msgbox R15Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr14_Lass::
# 419 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR14_LASS, R15Tr14_Intro, R15Tr14_Lose
# 420 "data/maps/Route15/scripts.pory"
	msgbox R15Tr14_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr15_Scientist::
# 437 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR15_SCIENTIST, R15Tr15_Intro, R15Tr15_Lose
# 438 "data/maps/Route15/scripts.pory"
	msgbox R15Tr15_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr16_Aromalady::
# 457 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR16_AROMALADY, R15Tr16_Intro, R15Tr16_Lose
# 458 "data/maps/Route15/scripts.pory"
	msgbox R15Tr16_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr17_Ninjaboy3::
# 474 "data/maps/Route15/scripts.pory"
	trainerbattle_single TRAINER_R15_TR17_NINJABOY3, R15Tr17_Intro, R15Tr17_Lose
# 475 "data/maps/Route15/scripts.pory"
	msgbox R15Tr17_PostBattle, MSGBOX_AUTOCLOSE
	end


R15_AceTrainerF::
# 495 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_1, FEMALE
# 496 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerInteraction
	return


R15_AceTrainerM::
# 501 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_1, MALE
# 502 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerInteraction
	return


R15_AceTrainerInteraction::
# 506 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_M
	goto_if 1, R15_AceTrainerInteraction_1
# 506 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_F
	goto_if 1, R15_AceTrainerInteraction_1
# 509 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR1_BIRDKEEPER
	goto_if 1, R15_AceTrainerInteraction_4
R15_AceTrainerInteraction_3:
# 527 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerNotEligible
	return

R15_AceTrainerInteraction_1:
# 507 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerPostBattle
	return

R15_AceTrainerInteraction_2:
# 524 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerBattle
	return

R15_AceTrainerInteraction_4:
# 510 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR2_RANGERF
	goto_if 1, R15_AceTrainerInteraction_6
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_6:
# 511 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR3_RANGERM
	goto_if 1, R15_AceTrainerInteraction_8
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_8:
# 512 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR4_GENTLEMAN
	goto_if 1, R15_AceTrainerInteraction_10
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_10:
# 513 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR5_NINJABOY1
	goto_if 1, R15_AceTrainerInteraction_12
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_12:
# 514 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR6_NINJABOY2
	goto_if 1, R15_AceTrainerInteraction_14
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_14:
# 515 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR7_BUGCATCHER
	goto_if 1, R15_AceTrainerInteraction_16
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_16:
# 516 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR8_BUGCATCHER2
	goto_if 1, R15_AceTrainerInteraction_18
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_18:
# 517 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR9_BEAUTY
	goto_if 1, R15_AceTrainerInteraction_20
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_20:
# 518 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR10_FISHER
	goto_if 1, R15_AceTrainerInteraction_22
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_22:
# 519 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR13_COOLTRAINER
	goto_if 1, R15_AceTrainerInteraction_24
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_24:
# 520 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR14_LASS
	goto_if 1, R15_AceTrainerInteraction_26
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_26:
# 521 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR15_SCIENTIST
	goto_if 1, R15_AceTrainerInteraction_28
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_28:
# 522 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR16_AROMALADY
	goto_if 1, R15_AceTrainerInteraction_30
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_30:
# 523 "data/maps/Route15/scripts.pory"
	checktrainerflag TRAINER_R15_TR17_NINJABOY3
	goto_if 1, R15_AceTrainerInteraction_2
	goto R15_AceTrainerInteraction_3


R15_AceTrainerPostBattle::
# 532 "data/maps/Route15/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 7
	goto_if_eq R15_AceTrainerPostBattle_2
# 543 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerPostBattle_5
# 547 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_RewardFemale, MSGBOX_DEFAULT
R15_AceTrainerPostBattle_4:
	checkitemspace ITEM_ROCKY_HELMET
# 0 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R15_AceTrainerPostBattle_13
R15_AceTrainerPostBattle_12:
# 552 "data/maps/Route15/scripts.pory"
	giveitem ITEM_ROCKY_HELMET
# 553 "data/maps/Route15/scripts.pory"
	waitfanfare
# 554 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_ExplainReward
# 555 "data/maps/Route15/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 7
# 556 "data/maps/Route15/scripts.pory"
	setvar VAR_0x8004, 25
# 557 "data/maps/Route15/scripts.pory"
	call RewardBP
# 558 "data/maps/Route15/scripts.pory"
	release
	end

R15_AceTrainerPostBattle_2:
# 533 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerPostBattle_9
# 537 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_PostBattleFemale, MSGBOX_NPC
R15_AceTrainerPostBattle_8:
# 539 "data/maps/Route15/scripts.pory"
	turnobject 27, DIR_WEST
# 540 "data/maps/Route15/scripts.pory"
	turnobject 28, DIR_WEST
	end

R15_AceTrainerPostBattle_5:
# 544 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_RewardMale, MSGBOX_DEFAULT
	goto R15_AceTrainerPostBattle_4

R15_AceTrainerPostBattle_9:
# 534 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_PostBattleMale, MSGBOX_NPC
	goto R15_AceTrainerPostBattle_8

R15_AceTrainerPostBattle_13:
# 550 "data/maps/Route15/scripts.pory"
	goto ZeBagIsFull
	goto R15_AceTrainerPostBattle_12


R15_AceTrainerBattle::
# 597 "data/maps/Route15/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 598 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq R15_AceTrainerBattle_2
R15_AceTrainerBattle_1:
# 601 "data/maps/Route15/scripts.pory"
	checkplayergender
# 602 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq R15_AceTrainerBattle_5
# 606 "data/maps/Route15/scripts.pory"
	bufferstring STR_VAR_1, R15_AceTrainerBattle_Text_1
R15_AceTrainerBattle_4:
# 608 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattle_8
# 612 "data/maps/Route15/scripts.pory"
	msgbox R15GetMoreMonsFemale, MSGBOX_NPC
	return

R15_AceTrainerBattle_2:
# 599 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerBattleEnoughMons
	goto R15_AceTrainerBattle_1

R15_AceTrainerBattle_5:
# 603 "data/maps/Route15/scripts.pory"
	bufferstring STR_VAR_1, R15_AceTrainerBattle_Text_0
	goto R15_AceTrainerBattle_4

R15_AceTrainerBattle_8:
# 609 "data/maps/Route15/scripts.pory"
	msgbox R15GetMoreMonsMale, MSGBOX_NPC
	return


R15_AceTrainerBattleEnoughMons::
# 635 "data/maps/Route15/scripts.pory"
	lock
# 636 "data/maps/Route15/scripts.pory"
	faceplayer
# 637 "data/maps/Route15/scripts.pory"
	goto_if_unset FLAG_TEMP_8, R15_AceTrainerBattleEnoughMons_2
# 647 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_11
# 651 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleFemaleShort, MSGBOX_YESNO
R15_AceTrainerBattleEnoughMons_1:
# 654 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R15_AceTrainerBattleEnoughMons_6
R15_AceTrainerBattleEnoughMons_5:
# 659 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_15
# 663 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_DeclineBattleFemale, MSGBOX_NPC
R15_AceTrainerBattleEnoughMons_14:
# 665 "data/maps/Route15/scripts.pory"
	turnobject 27, DIR_WEST
# 666 "data/maps/Route15/scripts.pory"
	turnobject 28, DIR_WEST
	end

R15_AceTrainerBattleEnoughMons_2:
# 638 "data/maps/Route15/scripts.pory"
	setflag FLAG_TEMP_8
# 639 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_8
# 643 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleFemale, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_6:
# 655 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_BeginBattle, MSGBOX_DEFAULT
# 656 "data/maps/Route15/scripts.pory"
	trainerbattle_two_trainers TRAINER_R15_ACETRAINER_M, R15_AceM_Lose, TRAINER_R15_ACETRAINER_F, R15_AceF_Lose
# 657 "data/maps/Route15/scripts.pory"
	goto R15_AceTrainerPostBattle
	goto R15_AceTrainerBattleEnoughMons_5

R15_AceTrainerBattleEnoughMons_8:
# 640 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleMale, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_11:
# 648 "data/maps/Route15/scripts.pory"
	msgbox R11_Ace_ReadyForBattleMaleShort, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_15:
# 660 "data/maps/Route15/scripts.pory"
	msgbox R15_Ace_DeclineBattleMale, MSGBOX_NPC
	goto R15_AceTrainerBattleEnoughMons_14


R15_AceTrainerNotEligible::
# 716 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_1, FEMALE
	goto_if_eq R15_AceTrainerNotEligible_2
# 720 "data/maps/Route15/scripts.pory"
	msgbox R15DefeatMoreTrainersMale, MSGBOX_NPC
R15_AceTrainerNotEligible_1:
# 722 "data/maps/Route15/scripts.pory"
	turnobject 27, DIR_WEST
# 723 "data/maps/Route15/scripts.pory"
	turnobject 28, DIR_WEST
	end

R15_AceTrainerNotEligible_2:
# 717 "data/maps/Route15/scripts.pory"
	msgbox R15DefeatMoreTrainersFemale, MSGBOX_NPC
	goto R15_AceTrainerNotEligible_1


Route15_Grotto_Entrance::
# 739 "data/maps/Route15/scripts.pory"
	lock
# 740 "data/maps/Route15/scripts.pory"
	msgbox GoInsideGrotto, MSGBOX_YESNO
# 741 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route15_Grotto_Entrance_2
# 745 "data/maps/Route15/scripts.pory"
	warp MAP_ROUTE15_GROTTO, 6, 19
# 746 "data/maps/Route15/scripts.pory"
	waitstate
# 747 "data/maps/Route15/scripts.pory"
	release
	return

Route15_Grotto_Entrance_2:
# 742 "data/maps/Route15/scripts.pory"
	release
	end


R15_Acerola_Text_0:
# 39 "data/maps/Route15/scripts.pory"
	.string "mister$"

R15_Acerola_Text_1:
# 42 "data/maps/Route15/scripts.pory"
	.string "miss$"

R15_AceTrainerBattle_Text_0:
# 603 "data/maps/Route15/scripts.pory"
	.string "lad$"

R15_AceTrainerBattle_Text_1:
# 606 "data/maps/Route15/scripts.pory"
	.string "lass$"

AcerolaThatWay::
# 123 "data/maps/Route15/scripts.pory"
	.string "Acerola: If you're looking for the guy\n"
	.string "in black clothes, I saw him heading\l"
	.string "south towards Amberock Town.$"

AcerolaShame::
# 128 "data/maps/Route15/scripts.pory"
	.string "Aww, that's a shame…\p"
	.string "Oh, I get it! You must be playing tag\n"
	.string "with the guy in black, right?\p"
	.string "I saw him running south towards\n"
	.string "Amberock Town.$"

AcerolaYouMustBeBusy::
# 135 "data/maps/Route15/scripts.pory"
	.string "Hee hee, so many new friends to\n"
	.string "play with!\p"
	.string "…Oh?\p"
	.string "The person behind you is saying that\n"
	.string "you're busy chasing down a bad guy…$"

R15_Acerola_Text::
# 142 "data/maps/Route15/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\n"
	.string "Are you here to play with Acerola?$"

Route15_Sign1_Text::
# 149 "data/maps/Route15/scripts.pory"
	.string "Move Reminder's House$"

Route15_Sign2_Text::
# 155 "data/maps/Route15/scripts.pory"
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town$"

Route15_Sign3_Text::
# 163 "data/maps/Route15/scripts.pory"
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town\l"
	.string "{RIGHT_ARROW} Berry Fields$"

R15_RockBlock_Text::
# 173 "data/maps/Route15/scripts.pory"
	.string "As a Pokémon Ranger, it is my duty to\n"
	.string "clear this path as fast as possible!$"

R15Tr1_Intro::
# 201 "data/maps/Route15/scripts.pory"
	.string "My Pokémon have so much room to\n"
	.string "move here.\p"
	.string "There's nowhere your Pokémon can hide!$"

R15Tr1_Lose::
# 206 "data/maps/Route15/scripts.pory"
	.string "We got too ambitious…$"

R15Tr1_PostBattle::
# 209 "data/maps/Route15/scripts.pory"
	.string "My Pokémon have been scouting the\n"
	.string "nearby trees.\p"
	.string "They seem to be drawn towards\n"
	.string "something in the southeast.$"

R15Tr2_Intro::
# 221 "data/maps/Route15/scripts.pory"
	.string "We haven't had any real challenge\n"
	.string "in a while.\l"
	.string "Let's see if you can provide one!$"

R15Tr2_Lose::
# 226 "data/maps/Route15/scripts.pory"
	.string "Yep, I'd say you were adequate…$"

R15Tr2_PostBattle::
# 229 "data/maps/Route15/scripts.pory"
	.string "Us Pokémon Rangers keep routes\n"
	.string "safe from harm.\p"
	.string "That's why we must keep our Pokémon\n"
	.string "alert and prepared for anything.$"

R15Tr3_Intro::
# 241 "data/maps/Route15/scripts.pory"
	.string "You know it, I know it,\n"
	.string "there's nothing more to be said.\p"
	.string "Let's go!$"

R15Tr3_Lose::
# 246 "data/maps/Route15/scripts.pory"
	.string "Guh…$"

R15Tr3_PostBattle::
# 249 "data/maps/Route15/scripts.pory"
	.string "There's no need for words.\p"
	.string "The way you carry yourself in battle\n"
	.string "says more than any words ever could.$"

R15Tr4_Intro::
# 260 "data/maps/Route15/scripts.pory"
	.string "You there!\n"
	.string "How about a friendly competition?$"

R15Tr4_Lose::
# 264 "data/maps/Route15/scripts.pory"
	.string "Good show!$"

R15Tr4_PostBattle::
# 267 "data/maps/Route15/scripts.pory"
	.string "There's nothing more invigorating than\n"
	.string "a friendly competition!$"

R15Tr5_Intro::
# 277 "data/maps/Route15/scripts.pory"
	.string "Go ninja go!$"

R15Tr5_Lose::
# 280 "data/maps/Route15/scripts.pory"
	.string "My Pokémon were supposed to be the\n"
	.string "world's most fearsome fighting team!$"

R15Tr5_PostBattle::
# 284 "data/maps/Route15/scripts.pory"
	.string "Gimme a break.$"

R15Tr6_Intro::
# 293 "data/maps/Route15/scripts.pory"
	.string "I crush anyone who stands against me!$"

R15Tr6_Lose::
# 296 "data/maps/Route15/scripts.pory"
	.string "Um, forget what I said before\n"
	.string "the battle…$"

R15Tr6_PostBattle::
# 300 "data/maps/Route15/scripts.pory"
	.string "Can we just pretend we never met?$"

R15Tr7_Intro::
# 309 "data/maps/Route15/scripts.pory"
	.string "Let me show you just how awesome bugs\n"
	.string "can be!$"

R15Tr7_Lose::
# 313 "data/maps/Route15/scripts.pory"
	.string "This loss is entirely my and not\n"
	.string "my bugs' fault.$"

R15Tr7_PostBattle::
# 317 "data/maps/Route15/scripts.pory"
	.string "Bugs are still cool!\n"
	.string "Even if I'm not…$"

R15Tr8_Intro::
# 327 "data/maps/Route15/scripts.pory"
	.string "My bugs have reached their peak.\n"
	.string "Think you have a chance?$"

R15Tr8_Lose::
# 331 "data/maps/Route15/scripts.pory"
	.string "Even at our peak, we still lost…$"

R15Tr8_PostBattle::
# 334 "data/maps/Route15/scripts.pory"
	.string "Many people look down on Bug Pokémon.\n"
	.string "They just haven't found any of the\l"
	.string "good ones.$"

R15Tr9_Intro::
# 345 "data/maps/Route15/scripts.pory"
	.string "Think your Pokémon can outshine mine?$"

R15Tr9_Lose::
# 348 "data/maps/Route15/scripts.pory"
	.string "Outshone and outmaneuvered…$"

R15Tr9_PostBattle::
# 351 "data/maps/Route15/scripts.pory"
	.string "Your Pokémon shine like no other.\n"
	.string "Never stop cherishing them.$"

R15Tr10_Intro::
# 361 "data/maps/Route15/scripts.pory"
	.string "I'm having no luck when it comes to\n"
	.string "fishing.\p"
	.string "Maybe I'll have more luck in a Pokémon\n"
	.string "battle!$"

R15Tr10_Lose::
# 367 "data/maps/Route15/scripts.pory"
	.string "Still no luck…$"

R15Tr10_PostBattle::
# 370 "data/maps/Route15/scripts.pory"
	.string "I wanted to try fishing here but\n"
	.string "this cliff is so high that my lure\l"
	.string "doesn't even reach the ocean.$"

R15Tr13_Intro::
# 402 "data/maps/Route15/scripts.pory"
	.string "You look like a strong trainer.\n"
	.string "Are you?$"

R15Tr13_Lose::
# 406 "data/maps/Route15/scripts.pory"
	.string "I have been outmatched.\n"
	.string "Well fought.$"

R15Tr13_PostBattle::
# 410 "data/maps/Route15/scripts.pory"
	.string "Sometimes you can guess how strong\n"
	.string "a trainer is just by looking at them.\p"
	.string "I could tell that you were probably\n"
	.string "stronger than me, but I couldn't just\l"
	.string "back down from the challenge.$"

R15Tr14_Intro::
# 423 "data/maps/Route15/scripts.pory"
	.string "You seem like you'd enjoy a relaxing\n"
	.string "Pokémon battle!$"

R15Tr14_Lose::
# 427 "data/maps/Route15/scripts.pory"
	.string "Even if I lost, I still had fun!$"

R15Tr14_PostBattle::
# 430 "data/maps/Route15/scripts.pory"
	.string "I saw some creepy looking people come\n"
	.string "through this way recently.\l"
	.string "They were headed south.$"

R15Tr15_Intro::
# 441 "data/maps/Route15/scripts.pory"
	.string "You are ruining my research!$"

R15Tr15_Lose::
# 444 "data/maps/Route15/scripts.pory"
	.string "My samples…\n"
	.string "in shambles…$"

R15Tr15_PostBattle::
# 448 "data/maps/Route15/scripts.pory"
	.string "I'm out here collecting water samples\n"
	.string "for analysis.\p"
	.string "I'm hoping to find a connection\n"
	.string "between water quality and the type of\l"
	.string "Pokémon habitat it attracts.$"

R15Tr16_Intro::
# 461 "data/maps/Route15/scripts.pory"
	.string "Please, allow me to evaluate if you\n"
	.string "have raised your Pokémon properly.$"

R15Tr16_Lose::
# 465 "data/maps/Route15/scripts.pory"
	.string "Yes, they are growing properly.$"

R15Tr16_PostBattle::
# 468 "data/maps/Route15/scripts.pory"
	.string "Try raising Pokémon with more\n"
	.string "attention to their character traits.$"

R15Tr17_Intro::
# 478 "data/maps/Route15/scripts.pory"
	.string "I do my triathlon training with Pokémon,\n"
	.string "so I'm pretty confident about my speed.$"

R15Tr17_Lose::
# 482 "data/maps/Route15/scripts.pory"
	.string "I need to get more practices in,\n"
	.string "I guess.$"

R15Tr17_PostBattle::
# 487 "data/maps/Route15/scripts.pory"
	.string "Training is meaningful only if you\n"
	.string "keep it up regularly.\p"
	.string "Okay! I'll resume my training!\n"
	.string "Tomorrow!$"

R15_Ace_PostBattleMale::
# 562 "data/maps/Route15/scripts.pory"
	.string "That was a great battle.\p"
	.string "Keep growing and I bet you can even\n"
	.string "take on the Pokémon League!$"

R15_Ace_PostBattleFemale::
# 567 "data/maps/Route15/scripts.pory"
	.string "I can't believe we lost even though\n"
	.string "it was a two against one battle.$"

R15_Ace_ExplainReward::
# 571 "data/maps/Route15/scripts.pory"
	.string "The Rocky Helmet causes any Pokémon\n"
	.string "that comes in contact with the Pokémon\l"
	.string "wearing it to take damage.\p"
	.string "It's especially great if the enemy is\n"
	.string "using multi-hit moves or the Pokémon\l"
	.string "wearing the helmet is especially bulky.\p"
	.string "In addition to that,\n"
	.string "I want you to have these.$"

R15_Ace_RewardMale::
# 581 "data/maps/Route15/scripts.pory"
	.string "That was a great battle!\p"
	.string "Despite going against two opponents,\n"
	.string "you still managed to secure a victory.\p"
	.string "Such great skill has to be rewarded!$"

R15_Ace_RewardFemale::
# 587 "data/maps/Route15/scripts.pory"
	.string "I'm shocked!\n"
	.string "I thought our combos were unbeatable!\p"
	.string "This feat of strength will not go\n"
	.string "unrewarded.\l"
	.string "Here, have this.$"

R15GetMoreMonsMale::
# 615 "data/maps/Route15/scripts.pory"
	.string "I've seen you battling the other\n"
	.string "trainers around here and there's\l"
	.string "no doubt you're strong,\l"
	.string "but we only fight in pairs.\p"
	.string "You'll need to have at least 2 Pokémon\n"
	.string "that are ready for battle.$"

R15GetMoreMonsFemale::
# 623 "data/maps/Route15/scripts.pory"
	.string "You seem like a nice {STR_VAR_1} and you're\n"
	.string "more than capable of defeating every\l"
	.string "other trainer on this route,\l"
	.string "but we always fight in pairs.\p"
	.string "It would be too unfair if we fought\n"
	.string "you while you only had 1 Pokémon\l"
	.string "that was ready for battle.$"

R11_Ace_ReadyForBattleMale::
# 669 "data/maps/Route15/scripts.pory"
	.string "I've seen the ease with which you\n"
	.string "defeated other trainers around here.\p"
	.string "Would you care to challenge us?\p"
	.string "This will be a double battle so you\n"
	.string "need at least two healthy Pokémon.$"

R11_Ace_ReadyForBattleFemale::
# 676 "data/maps/Route15/scripts.pory"
	.string "I saw the way you took out every\n"
	.string "other trainer in this area.\p"
	.string "You seem pretty strong.\p"
	.string "Would you like to try your hand at\n"
	.string "a double battle?\p"
	.string "I warn you, our teamwork is\n"
	.string "second to none.$"

R11_Ace_ReadyForBattleMaleShort::
# 685 "data/maps/Route15/scripts.pory"
	.string "Have you changed your mind?$"

R11_Ace_ReadyForBattleFemaleShort::
# 688 "data/maps/Route15/scripts.pory"
	.string "You're back!\p"
	.string "That must mean you've changed your\n"
	.string "mind, correct?$"

R15_Ace_BeginBattle::
# 693 "data/maps/Route15/scripts.pory"
	.string "Okay then, let's begin!$"

R15_AceM_Lose::
# 696 "data/maps/Route15/scripts.pory"
	.string "Even against two opponents, you\n"
	.string "still kept your cool…\l"
	.string "Amazing!$"

R15_AceF_Lose::
# 701 "data/maps/Route15/scripts.pory"
	.string "Even with our combined strength,\n"
	.string "we lost…$"

R15_Ace_DeclineBattleMale::
# 705 "data/maps/Route15/scripts.pory"
	.string "Well, if you change your mind,\n"
	.string "you can find us here.$"

R15_Ace_DeclineBattleFemale::
# 709 "data/maps/Route15/scripts.pory"
	.string "Oh…\p"
	.string "Well, do let us know if you change\n"
	.string "your mind, okay?$"

R15DefeatMoreTrainersFemale::
# 726 "data/maps/Route15/scripts.pory"
	.string "I'm sorry, but we don't really care\n"
	.string "to fight against anyone who hasn't\l"
	.string "proven themself yet.\p"
	.string "Try defeating more trainers first.$"

R15DefeatMoreTrainersMale::
# 732 "data/maps/Route15/scripts.pory"
	.string "You want a REAL battle?\p"
	.string "Prove that you're not a weakling first\n"
	.string "and only then come and talk to us.$"
