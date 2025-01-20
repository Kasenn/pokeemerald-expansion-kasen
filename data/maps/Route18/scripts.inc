Route18_MapScripts::
	.byte 0


Route18_Tr1_Hiker1::
	trainerbattle_single TRAINER_R18_TR1_HIKER1, R18Tr1_Intro, R18Tr1_Lose
	msgbox R18Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr2_RangerM::
	trainerbattle_single TRAINER_R18_TR2_RANGER_M, R18Tr2_Intro, R18Tr2_Lose
	msgbox R18Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr3_Kindler::
	trainerbattle_single TRAINER_R18_TR3_KINDLER, R18Tr3_Intro, R18Tr3_Lose
	msgbox R18Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr4_Hiker2::
	trainerbattle_single TRAINER_R18_TR4_HIKER2, R18Tr4_Intro, R18Tr4_Lose
	msgbox R18Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr5_RangerF::
	trainerbattle_single TRAINER_R18_TR5_RANGER_F, R18Tr5_Intro, R18Tr5_Lose
	msgbox R18Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr6_Scientist::
	trainerbattle_single TRAINER_R18_TR6_SCIENTIST, R18Tr6_Intro, R18Tr6_Lose
	msgbox R18Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr7_Pokemaniac::
	trainerbattle_single TRAINER_R18_TR7_POKEMANIAC, R18Tr7_Intro, R18Tr7_Lose
	msgbox R18Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr8_BreederM::
	trainerbattle_single TRAINER_R18_TR8_BREEDER_M, R18Tr8_Intro, R18Tr8_Lose
	msgbox R18Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr9_AceTrainerM::
	checktrainerflag TRAINER_R18_TR9_ACE_TRAINER_M
	goto_if 1, Route18_Tr9_AceTrainerM_1
	checktrainerflag TRAINER_R18_TR1_HIKER1
	goto_if 1, Route18_Tr9_AceTrainerM_5
Route18_Tr9_AceTrainerM_3:
	msgbox R18_Ace_NotEligible, MSGBOX_NPC
	end

Route18_Tr9_AceTrainerM_1:
	goto R18_Ace_PostBattle
	return

Route18_Tr9_AceTrainerM_2:
	goto R18_Ace_EligibleForBattle
	return

Route18_Tr9_AceTrainerM_4:
	checktrainerflag TRAINER_R18_TR3_KINDLER
	goto_if 1, Route18_Tr9_AceTrainerM_9
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_5:
	checktrainerflag TRAINER_R18_TR2_RANGER_M
	goto_if 1, Route18_Tr9_AceTrainerM_4
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_8:
	checktrainerflag TRAINER_R18_TR5_RANGER_F
	goto_if 1, Route18_Tr9_AceTrainerM_13
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_9:
	checktrainerflag TRAINER_R18_TR4_HIKER2
	goto_if 1, Route18_Tr9_AceTrainerM_8
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_12:
	checktrainerflag TRAINER_R18_TR7_POKEMANIAC
	goto_if 1, Route18_Tr9_AceTrainerM_2
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_13:
	checktrainerflag TRAINER_R18_TR6_SCIENTIST
	goto_if 1, Route18_Tr9_AceTrainerM_12
	goto Route18_Tr9_AceTrainerM_3


R18_Ace_EligibleForBattle::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_5, R18_Ace_EligibleForBattle_2
	msgbox R18_Ace_ReadyForBattleShort, MSGBOX_YESNO
R18_Ace_EligibleForBattle_1:
	compare VAR_RESULT, TRUE
	goto_if_eq R18_Ace_EligibleForBattle_6
R18_Ace_EligibleForBattle_5:
	msgbox R18_Ace_DeclineBattle, MSGBOX_NPC
	end

R18_Ace_EligibleForBattle_2:
	setflag FLAG_TEMP_5
	msgbox R18_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R18_Ace_EligibleForBattle_1

R18_Ace_EligibleForBattle_6:
	msgbox R18_Ace_BeginBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_R18_TR9_ACE_TRAINER_M, R18_Ace_Lose
	goto R18_Ace_PostBattle
	goto R18_Ace_EligibleForBattle_5


R18_Ace_PostBattle::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_LOADED_DICE, R18_Ace_PostBattle_2
	msgbox R18_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_LOADED_DICE
	compare VAR_RESULT, FALSE
	goto_if_eq R18_Ace_PostBattle_5
R18_Ace_PostBattle_4:
	giveitem ITEM_LOADED_DICE
	waitfanfare
	msgbox R18_Ace_ExplainReward
	setflag FLAG_OBTAINED_LOADED_DICE
	setvar VAR_0x8004, 30
	call RewardBP
	release
	end

R18_Ace_PostBattle_2:
	msgbox R18_Ace_PostBattle_Text, MSGBOX_NPC
	end

R18_Ace_PostBattle_5:
	goto ZeBagIsFull
	goto R18_Ace_PostBattle_4


R18Tr1_Intro::
	.string "My legs are solid from pounding up\n"
	.string "and down the mountains.\p"
	.string "They're not going to buckle easily,\n"
	.string "friend!$"

R18Tr1_Lose::
	.string "Ouch! My legs cramped up!$"

R18Tr1_PostBattle::
	.string "Try hiking, and I mean really\n"
	.string "pounding, on these mountain trails\l"
	.string "with a heavy pack weighing dozens of\l"
	.string "pounds.\p"
	.string "That, my friend, will get your body\n"
	.string "into serious shape.$"

R18Tr2_Intro::
	.string "Freeze!\n"
	.string "Show me how you battle!$"

R18Tr2_Lose::
	.string "$"

R18Tr2_PostBattle::
	.string "$"

R18Tr3_Intro::
	.string "$"

R18Tr3_Lose::
	.string "$"

R18Tr3_PostBattle::
	.string "$"

R18Tr4_Intro::
	.string "Hahahaha!\n"
	.string "How about we have a battle?\l"
	.string "You and me!\l"
	.string "Hahahaha!$"

R18Tr4_Lose::
	.string "I lost!\n"
	.string "Hahahaha!$"

R18Tr4_PostBattle::
	.string "Hahahahaha! Something flew up my nose!\n"
	.string "Hahahaha-hatchoo!$"

R18Tr5_Intro::
	.string "$"

R18Tr5_Lose::
	.string "$"

R18Tr5_PostBattle::
	.string "$"

R18Tr6_Intro::
	.string "$"

R18Tr6_Lose::
	.string "$"

R18Tr6_PostBattle::
	.string "$"

R18Tr7_Intro::
	.string "$"

R18Tr7_Lose::
	.string "$"

R18Tr7_PostBattle::
	.string "$"

R18Tr8_Intro::
	.string "$"

R18Tr8_Lose::
	.string "$"

R18Tr8_PostBattle::
	.string "$"

R18_Ace_NotEligible::
	.string "$"

R18_Ace_ReadyForBattle::
	.string "$"

R18_Ace_ReadyForBattleShort::
	.string "$"

R18_Ace_BeginBattle::
	.string "$"

R18_Ace_DeclineBattle::
	.string "$"

R18_Ace_PostBattle_Text::
	.string "$"

R18_Ace_Reward::
	.string "$"

R18_Ace_ExplainReward::
	.string "$"

R18_Ace_Lose::
	.string "$"
