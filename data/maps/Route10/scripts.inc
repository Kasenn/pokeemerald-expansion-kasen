Route10_MapScripts::
	.byte 0


Route10_Tr2_Swimmer_F1::
	trainerbattle_single TRAINER_R10_TR2_SWIMMER_F1, R10Tr2_Intro, R10Tr2_Lose
	msgbox R10Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr3_Fisherman::
	trainerbattle_single TRAINER_R10_TR3_FISHERMAN, R10Tr3_Intro, R10Tr3_Lose
	msgbox R10Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr4_Swimmer_M1::
	trainerbattle_single TRAINER_R10_TR4_SWIMMER_M1, R10Tr4_Intro, R10Tr4_Lose
	msgbox R10Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr5_BlackBelt::
	trainerbattle_single TRAINER_R10_TR5_BLACKBELT, R10Tr5_Intro, R10Tr5_Lose
	msgbox R10Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr6_Hiker::
	trainerbattle_single TRAINER_R10_TR6_HIKER, R10Tr6_Intro, R10Tr6_Lose
	msgbox R10Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr7_Swimmer_F2::
	trainerbattle_single TRAINER_R10_TR7_SWIMMER_F2, R10Tr7_Intro, R10Tr7_Lose
	msgbox R10Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr8_Swimmer_M2::
	trainerbattle_single TRAINER_R10_TR8_SWIMMER_M2, R10Tr8_Intro, R10Tr8_Lose
	msgbox R10Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr9_BattleGirl::
	trainerbattle_single TRAINER_R10_TR9_BATTLEGIRL, R10Tr9_Intro, R10Tr9_Lose
	msgbox R10Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr10_Tuber_M::
	trainerbattle_single TRAINER_R10_TR10_TUBER_M, R10Tr10_Intro, R10Tr10_Lose
	msgbox R10Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Beachgoer_M::
	msgbox Route10_Beachgoer_M_Text, MSGBOX_NPC
	return


Route10_Beachgoer_F::
	msgbox Route10_Beachgoer_F_Text, MSGBOX_NPC
	return


Route10_Tr1_AceSwimmer::
	checktrainerflag TRAINER_R10_TR1_ACESWIMMER
	goto_if 1, Route10_Tr1_AceSwimmer_1
	checktrainerflag TRAINER_R10_TR2_SWIMMER_F1
	goto_if 1, Route10_Tr1_AceSwimmer_5
Route10_Tr1_AceSwimmer_3:
	msgbox R10_Ace_NotEligible, MSGBOX_NPC
	end

Route10_Tr1_AceSwimmer_1:
	goto R10_Ace_PostBattle
	return

Route10_Tr1_AceSwimmer_2:
	goto R10_Ace_EligibleForBattle
	return

Route10_Tr1_AceSwimmer_4:
	checktrainerflag TRAINER_R10_TR7_SWIMMER_F2
	goto_if 1, Route10_Tr1_AceSwimmer_8
	goto Route10_Tr1_AceSwimmer_3

Route10_Tr1_AceSwimmer_5:
	checktrainerflag TRAINER_R10_TR4_SWIMMER_M1
	goto_if 1, Route10_Tr1_AceSwimmer_4
	goto Route10_Tr1_AceSwimmer_3

Route10_Tr1_AceSwimmer_8:
	checktrainerflag TRAINER_R10_TR8_SWIMMER_M2
	goto_if 1, Route10_Tr1_AceSwimmer_2
	goto Route10_Tr1_AceSwimmer_3


R10_Ace_EligibleForBattle::
	lockall
	faceplayer
	goto_if_unset FLAG_TEMP_5, R10_Ace_EligibleForBattle_2
	msgbox R10_Ace_ReadyForBattleShort, MSGBOX_YESNO
R10_Ace_EligibleForBattle_1:
	compare VAR_RESULT, TRUE
	goto_if_eq R10_Ace_EligibleForBattle_6
R10_Ace_EligibleForBattle_5:
	msgbox R10_Ace_DeclineBattle, MSGBOX_NPC
	end

R10_Ace_EligibleForBattle_2:
	setflag FLAG_TEMP_5
	msgbox R10_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R10_Ace_EligibleForBattle_1

R10_Ace_EligibleForBattle_6:
	msgbox R10_Ace_BeginBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_R10_TR1_ACESWIMMER, R10_Ace_Lose
	goto R10_Ace_PostBattle
	goto R10_Ace_EligibleForBattle_5


R10_Ace_PostBattle::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_ASSAULT_VEST, R10_Ace_PostBattle_2
	msgbox R10_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_ASSAULT_VEST
	compare VAR_RESULT, FALSE
	goto_if_eq R10_Ace_PostBattle_5
R10_Ace_PostBattle_4:
	giveitem ITEM_ASSAULT_VEST
	waitfanfare
	msgbox R10_Ace_ExplainReward
	setflag FLAG_OBTAINED_ASSAULT_VEST
	setvar VAR_0x8004, 30
	call RewardBP
	release
	end

R10_Ace_PostBattle_2:
	msgbox R10_Ace_PostBattle_Text, MSGBOX_NPC
	end

R10_Ace_PostBattle_5:
	goto ZeBagIsFull
	goto R10_Ace_PostBattle_4


R10Tr2_Intro::
	.string "$"

R10Tr2_Lose::
	.string "$"

R10Tr2_PostBattle::
	.string "$"

R10Tr3_Intro::
	.string "$"

R10Tr3_Lose::
	.string "$"

R10Tr3_PostBattle::
	.string "$"

R10Tr4_Intro::
	.string "$"

R10Tr4_Lose::
	.string "$"

R10Tr4_PostBattle::
	.string "$"

R10Tr5_Intro::
	.string "$"

R10Tr5_Lose::
	.string "$"

R10Tr5_PostBattle::
	.string "$"

R10Tr6_Intro::
	.string "$"

R10Tr6_Lose::
	.string "$"

R10Tr6_PostBattle::
	.string "$"

R10Tr7_Intro::
	.string "$"

R10Tr7_Lose::
	.string "$"

R10Tr7_PostBattle::
	.string "$"

R10Tr8_Intro::
	.string "$"

R10Tr8_Lose::
	.string "$"

R10Tr8_PostBattle::
	.string "$"

R10Tr9_Intro::
	.string "$"

R10Tr9_Lose::
	.string "$"

R10Tr9_PostBattle::
	.string "$"

R10Tr10_Intro::
	.string "$"

R10Tr10_Lose::
	.string "$"

R10Tr10_PostBattle::
	.string "$"

Route10_Beachgoer_M_Text::
	.string "$"

Route10_Beachgoer_F_Text::
	.string "$"

R10_Ace_NotEligible::
	.string "$"

R10_Ace_ReadyForBattle::
	.string "$"

R10_Ace_ReadyForBattleShort::
	.string "$"

R10_Ace_BeginBattle::
	.string "$"

R10_Ace_Lose::
	.string "$"

R10_Ace_DeclineBattle::
	.string "$"

R10_Ace_PostBattle_Text::
	.string "$"

R10_Ace_Reward::
	.string "$"

R10_Ace_ExplainReward::
	.string "$"
