Route15_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, R15_FlagControl
	map_script MAP_SCRIPT_ON_LOAD, R15_ClearBlockade
	.byte 0


R15_FlagControl::
	special SetRoute123Weather
	switch VAR_ROUTE14_ROCKET_EVENT
	case 4, R15_FlagControl_2
	case 5, R15_FlagControl_2
	case 6, R15_FlagControl_3
	return

R15_FlagControl_2:
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_1
	return

R15_FlagControl_3:
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_1
	return


R15_ClearBlockade::
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_eq R15_ClearBlockade_1
	return

R15_ClearBlockade_1:
	setmetatile 34, 44, 0x001, FALSE
	setmetatile 35, 44, 0x001, FALSE
	setmetatile 34, 45, 0x001, FALSE
	setmetatile 35, 45, 0x001, FALSE
	return


R15_Acerola::
	goto_if_set FLAG_TEMP_5, R15_Acerola_2
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq R15_Acerola_5
	bufferstring STR_VAR_1, R15_Acerola_Text_1
R15_Acerola_4:
	msgbox R15_Acerola_Text, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq R15_Acerola_9
	msgbox AcerolaNotBusy
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	compare VAR_FACING, DIR_NORTH
	goto_if_eq R15_Acerola_13
R15_Acerola_12:
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq R15_Acerola_16
R15_Acerola_15:
	compare VAR_FACING, DIR_EAST
	goto_if_eq R15_Acerola_19
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
R15_Acerola_18:
	delay 48
	msgbox AcerolaThatWay
R15_Acerola_8:
	setflag FLAG_TEMP_5
	release
	end

R15_Acerola_2:
	msgbox AcerolaThatWay, MSGBOX_NPC
	end

R15_Acerola_5:
	bufferstring STR_VAR_1, R15_Acerola_Text_0
	goto R15_Acerola_4

R15_Acerola_9:
	msgbox AcerolaBusy
	goto R15_Acerola_8

R15_Acerola_13:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto R15_Acerola_12

R15_Acerola_16:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto R15_Acerola_15

R15_Acerola_19:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto R15_Acerola_18


Route15_Sign1::
	msgbox Route15_Sign1_Text, MSGBOX_SIGN
	return


Route15_Sign2::
	msgbox Route15_Sign2_Text, MSGBOX_SIGN
	return


Route15_Sign3::
	msgbox Route15_Sign3_Text, MSGBOX_SIGN
	return


R15_RockBlock::
	msgbox R15_RockBlock_Text, MSGBOX_NPC
	turnobject 2, DIR_NORTH
	return


R15_RR_Escapes::
	lock
	setvar VAR_ROUTE14_ROCKET_EVENT, 4
	turnobject 19, DIR_NORTH
	playse SE_PIN
	applymovement 19, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	applymovement 19, R15_GruntEscapes
	waitmovement 0
	removeobject 19
	removeobject 23
	release
	return


R15_GruntEscapes:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route15_Tr1_Birdkeeper::
	trainerbattle_single TRAINER_R15_TR1_BIRDKEEPER, R15Tr1_Intro, R15Tr1_Lose
	msgbox R15Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr2_RangerF::
	trainerbattle_single TRAINER_R15_TR2_RANGERF, R15Tr2_Intro, R15Tr2_Lose
	msgbox R15Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr3_RangerM::
	trainerbattle_single TRAINER_R15_TR3_RANGERM, R15Tr3_Intro, R15Tr3_Lose
	msgbox R15Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr4_Gentleman::
	trainerbattle_single TRAINER_R15_TR4_GENTLEMAN, R15Tr4_Intro, R15Tr4_Lose
	msgbox R15Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr5_Ninjaboy1::
	trainerbattle_single TRAINER_R15_TR5_NINJABOY1, R15Tr5_Intro, R15Tr5_Lose
	msgbox R15Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr6_Ninjaboy2::
	trainerbattle_single TRAINER_R15_TR6_NINJABOY2, R15Tr6_Intro, R15Tr6_Lose
	msgbox R15Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr7_Bugcatcher::
	trainerbattle_single TRAINER_R15_TR7_BUGCATCHER, R15Tr7_Intro, R15Tr7_Lose
	msgbox R15Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr8_Bugcatcher2::
	trainerbattle_single TRAINER_R15_TR8_BUGCATCHER2, R15Tr8_Intro, R15Tr8_Lose
	msgbox R15Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr9_Beauty::
	trainerbattle_single TRAINER_R15_TR9_BEAUTY, R15Tr9_Intro, R15Tr9_Lose
	msgbox R15Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr10_Fisher::
	trainerbattle_single TRAINER_R15_TR10_FISHER, R15Tr10_Intro, R15Tr10_Lose
	msgbox R15Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr11_CyclingM::
	trainerbattle_single TRAINER_R15_TR11_CYCLINGM, R15Tr11_Intro, R15Tr11_Lose
	msgbox R15Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr12_CyclingF::
	trainerbattle_single TRAINER_R15_TR12_CYCLINGF, R15Tr12_Intro, R15Tr12_Lose
	msgbox R15Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr13_Cooltrainer::
	trainerbattle_single TRAINER_R15_TR13_COOLTRAINER, R15Tr13_Intro, R15Tr13_Lose
	msgbox R15Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr14_Lass::
	trainerbattle_single TRAINER_R15_TR14_LASS, R15Tr14_Intro, R15Tr14_Lose
	msgbox R15Tr14_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr15_Scientist::
	trainerbattle_single TRAINER_R15_TR15_SCIENTIST, R15Tr15_Intro, R15Tr15_Lose
	msgbox R15Tr15_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr16_Aromalady::
	trainerbattle_single TRAINER_R15_TR16_AROMALADY, R15Tr16_Intro, R15Tr16_Lose
	msgbox R15Tr16_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr17_Ninjaboy3::
	trainerbattle_single TRAINER_R15_TR17_NINJABOY3, R15Tr17_Intro, R15Tr17_Lose
	msgbox R15Tr17_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr18_BerryRocket::
	trainerbattle_single TRAINER_R15_TR18_BERRYROCKET, R15Tr18_Intro, R15Tr18_Lose
	msgbox R15Tr18_PostBattle, MSGBOX_AUTOCLOSE
	end


R15_Acerola_Text_0:
	.string "mister$"

R15_Acerola_Text_1:
	.string "miss$"

AcerolaThatWay::
	.string "If you're looking for the guy in black\n"
	.string "clothes, I saw him heading south\l"
	.string "towards Amberock Town.$"

AcerolaBusy::
	.string "You must be looking for the guy\n"
	.string "dressed in black, yes?\p"
	.string "I saw him running south towards\n"
	.string "Amberock Town.$"

AcerolaNotBusy::
	.string "Oh, really? The person behind you\n"
	.string "seems to disagree.$"

R15_Acerola_Text::
	.string "Hiya, {STR_VAR_1}!\n"
	.string "Tell me, are you busy right now?$"

Route15_Sign1_Text::
	.string "$"

Route15_Sign2_Text::
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town\l$"

Route15_Sign3_Text::
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town\l"
	.string "{RIGHT_ARROW} Berry Fields$"

R15_RockBlock_Text::
	.string "As a Pokémon Ranger, it is my duty to\n"
	.string "clear this path as fast as possible!$"

R15Tr1_Intro::
	.string "$"

R15Tr1_Lose::
	.string "$"

R15Tr1_PostBattle::
	.string "$"

R15Tr2_Intro::
	.string "$"

R15Tr2_Lose::
	.string "$"

R15Tr2_PostBattle::
	.string "$"

R15Tr3_Intro::
	.string "$"

R15Tr3_Lose::
	.string "$"

R15Tr3_PostBattle::
	.string "$"

R15Tr4_Intro::
	.string "$"

R15Tr4_Lose::
	.string "$"

R15Tr4_PostBattle::
	.string "$"

R15Tr5_Intro::
	.string "$"

R15Tr5_Lose::
	.string "$"

R15Tr5_PostBattle::
	.string "$"

R15Tr6_Intro::
	.string "$"

R15Tr6_Lose::
	.string "$"

R15Tr6_PostBattle::
	.string "$"

R15Tr7_Intro::
	.string "$"

R15Tr7_Lose::
	.string "$"

R15Tr7_PostBattle::
	.string "$"

R15Tr8_Intro::
	.string "$"

R15Tr8_Lose::
	.string "$"

R15Tr8_PostBattle::
	.string "$"

R15Tr9_Intro::
	.string "$"

R15Tr9_Lose::
	.string "$"

R15Tr9_PostBattle::
	.string "$"

R15Tr10_Intro::
	.string "$"

R15Tr10_Lose::
	.string "$"

R15Tr10_PostBattle::
	.string "$"

R15Tr11_Intro::
	.string "$"

R15Tr11_Lose::
	.string "$"

R15Tr11_PostBattle::
	.string "$"

R15Tr12_Intro::
	.string "$"

R15Tr12_Lose::
	.string "$"

R15Tr12_PostBattle::
	.string "$"

R15Tr13_Intro::
	.string "$"

R15Tr13_Lose::
	.string "$"

R15Tr13_PostBattle::
	.string "$"

R15Tr14_Intro::
	.string "$"

R15Tr14_Lose::
	.string "$"

R15Tr14_PostBattle::
	.string "$"

R15Tr15_Intro::
	.string "$"

R15Tr15_Lose::
	.string "$"

R15Tr15_PostBattle::
	.string "$"

R15Tr16_Intro::
	.string "$"

R15Tr16_Lose::
	.string "$"

R15Tr16_PostBattle::
	.string "$"

R15Tr17_Intro::
	.string "$"

R15Tr17_Lose::
	.string "$"

R15Tr17_PostBattle::
	.string "$"

R15Tr18_Intro::
	.string "$"

R15Tr18_Lose::
	.string "$"

R15Tr18_PostBattle::
	.string "$"
