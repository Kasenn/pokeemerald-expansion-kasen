Route10_MapScripts::
	.byte 0


Route10_Tr2_Swimmer_F1::
# 4 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR2_SWIMMER_F1, R10Tr2_Intro, R10Tr2_Lose
# 5 "data/maps/Route10/scripts.pory"
	msgbox R10Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr3_Fisherman::
# 19 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR3_FISHERMAN, R10Tr3_Intro, R10Tr3_Lose
# 20 "data/maps/Route10/scripts.pory"
	msgbox R10Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr4_Swimmer_M1::
# 34 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR4_SWIMMER_M1, R10Tr4_Intro, R10Tr4_Lose
# 35 "data/maps/Route10/scripts.pory"
	msgbox R10Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr5_BlackBelt::
# 49 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR5_BLACKBELT, R10Tr5_Intro, R10Tr5_Lose
# 50 "data/maps/Route10/scripts.pory"
	msgbox R10Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr6_Hiker::
# 64 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR6_HIKER, R10Tr6_Intro, R10Tr6_Lose
# 65 "data/maps/Route10/scripts.pory"
	msgbox R10Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr7_Swimmer_F2::
# 79 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR7_SWIMMER_F2, R10Tr7_Intro, R10Tr7_Lose
# 80 "data/maps/Route10/scripts.pory"
	msgbox R10Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr8_Swimmer_M2::
# 94 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR8_SWIMMER_M2, R10Tr8_Intro, R10Tr8_Lose
# 95 "data/maps/Route10/scripts.pory"
	msgbox R10Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr9_BattleGirl::
# 109 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR9_BATTLEGIRL, R10Tr9_Intro, R10Tr9_Lose
# 110 "data/maps/Route10/scripts.pory"
	msgbox R10Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr10_Tuber_M::
# 124 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR10_TUBER_M, R10Tr10_Intro, R10Tr10_Lose
# 125 "data/maps/Route10/scripts.pory"
	msgbox R10Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Beachgoer_M::
# 139 "data/maps/Route10/scripts.pory"
	msgbox Route10_Beachgoer_M_Text, MSGBOX_NPC
	return


Route10_Beachgoer_F::
# 146 "data/maps/Route10/scripts.pory"
	msgbox Route10_Beachgoer_F_Text, MSGBOX_NPC
	return


Route10_Tr1_AceSwimmer::
# 153 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR1_ACESWIMMER
	goto_if 1, Route10_Tr1_AceSwimmer_1
# 156 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR2_SWIMMER_F1
	goto_if 1, Route10_Tr1_AceSwimmer_5
Route10_Tr1_AceSwimmer_3:
# 164 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_NotEligible, MSGBOX_NPC
	end

Route10_Tr1_AceSwimmer_1:
# 154 "data/maps/Route10/scripts.pory"
	goto R10_Ace_PostBattle
	return

Route10_Tr1_AceSwimmer_2:
# 161 "data/maps/Route10/scripts.pory"
	goto R10_Ace_EligibleForBattle
	return

Route10_Tr1_AceSwimmer_4:
# 158 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR7_SWIMMER_F2
	goto_if 1, Route10_Tr1_AceSwimmer_8
	goto Route10_Tr1_AceSwimmer_3

Route10_Tr1_AceSwimmer_5:
# 157 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR4_SWIMMER_M1
	goto_if 1, Route10_Tr1_AceSwimmer_4
	goto Route10_Tr1_AceSwimmer_3

Route10_Tr1_AceSwimmer_8:
# 159 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR8_SWIMMER_M2
	goto_if 1, Route10_Tr1_AceSwimmer_2
	goto Route10_Tr1_AceSwimmer_3


R10_Ace_EligibleForBattle::
# 169 "data/maps/Route10/scripts.pory"
	lockall
# 170 "data/maps/Route10/scripts.pory"
	faceplayer
# 171 "data/maps/Route10/scripts.pory"
	goto_if_unset FLAG_TEMP_5, R10_Ace_EligibleForBattle_2
# 176 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_ReadyForBattleShort, MSGBOX_YESNO
R10_Ace_EligibleForBattle_1:
# 178 "data/maps/Route10/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R10_Ace_EligibleForBattle_6
R10_Ace_EligibleForBattle_5:
# 183 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_DeclineBattle, MSGBOX_NPC
	end

R10_Ace_EligibleForBattle_2:
# 172 "data/maps/Route10/scripts.pory"
	setflag FLAG_TEMP_5
# 173 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R10_Ace_EligibleForBattle_1

R10_Ace_EligibleForBattle_6:
# 179 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_BeginBattle, MSGBOX_DEFAULT
# 180 "data/maps/Route10/scripts.pory"
	trainerbattle_no_intro TRAINER_R10_TR1_ACESWIMMER, R10_Ace_Lose
# 181 "data/maps/Route10/scripts.pory"
	goto R10_Ace_PostBattle
	goto R10_Ace_EligibleForBattle_5


R10_Ace_PostBattle::
# 188 "data/maps/Route10/scripts.pory"
	lock
# 189 "data/maps/Route10/scripts.pory"
	faceplayer
# 190 "data/maps/Route10/scripts.pory"
	goto_if_set FLAG_OBTAINED_ASSAULT_VEST, R10_Ace_PostBattle_2
# 194 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_ASSAULT_VEST
# 0 "data/maps/Route10/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R10_Ace_PostBattle_5
R10_Ace_PostBattle_4:
# 198 "data/maps/Route10/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 199 "data/maps/Route10/scripts.pory"
	waitfanfare
# 200 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_ExplainReward
# 201 "data/maps/Route10/scripts.pory"
	setflag FLAG_OBTAINED_ASSAULT_VEST
# 202 "data/maps/Route10/scripts.pory"
	setvar VAR_0x8004, 30
# 203 "data/maps/Route10/scripts.pory"
	call RewardBP
# 204 "data/maps/Route10/scripts.pory"
	release
	end

R10_Ace_PostBattle_2:
# 191 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_PostBattle_Text, MSGBOX_NPC
	end

R10_Ace_PostBattle_5:
# 196 "data/maps/Route10/scripts.pory"
	goto ZeBagIsFull
	goto R10_Ace_PostBattle_4


R10Tr2_Intro::
# 8 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr2_Lose::
# 11 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr2_PostBattle::
# 14 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr3_Intro::
# 23 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr3_Lose::
# 26 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr3_PostBattle::
# 29 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr4_Intro::
# 38 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr4_Lose::
# 41 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr4_PostBattle::
# 44 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr5_Intro::
# 53 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr5_Lose::
# 56 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr5_PostBattle::
# 59 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr6_Intro::
# 68 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr6_Lose::
# 71 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr6_PostBattle::
# 74 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr7_Intro::
# 83 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr7_Lose::
# 86 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr7_PostBattle::
# 89 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr8_Intro::
# 98 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr8_Lose::
# 101 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr8_PostBattle::
# 104 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr9_Intro::
# 113 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr9_Lose::
# 116 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr9_PostBattle::
# 119 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr10_Intro::
# 128 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr10_Lose::
# 131 "data/maps/Route10/scripts.pory"
	.string "$"

R10Tr10_PostBattle::
# 134 "data/maps/Route10/scripts.pory"
	.string "$"

Route10_Beachgoer_M_Text::
# 141 "data/maps/Route10/scripts.pory"
	.string "$"

Route10_Beachgoer_F_Text::
# 148 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_NotEligible::
# 208 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_ReadyForBattle::
# 211 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_ReadyForBattleShort::
# 214 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_BeginBattle::
# 217 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_Lose::
# 220 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_DeclineBattle::
# 223 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_PostBattle_Text::
# 226 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_Reward::
# 229 "data/maps/Route10/scripts.pory"
	.string "$"

R10_Ace_ExplainReward::
# 232 "data/maps/Route10/scripts.pory"
	.string "$"
