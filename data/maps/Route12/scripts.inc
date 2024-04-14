Route12_MapScripts::
	.byte 0


R12_Sign::
	msgbox R12_Sign_Text, MSGBOX_SIGN
	end


R12_OldWoman::
	msgbox R12_OldWoman_Text, MSGBOX_NPC
	end


Route12_Tr1_Triathlete_F::
	trainerbattle_single TRAINER_R12_TR1_TRIATHLETE_F, R12Tr1_Intro, R12Tr1_Lose
	msgbox R12Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr2_Triathlete_M::
	trainerbattle_single TRAINER_R12_TR2_TRIATHLETE_M, R12Tr2_Intro, R12Tr2_Lose
	msgbox R12Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr3_Triathlete_F2::
	trainerbattle_single TRAINER_R12_TR3_TRIATHLETE_F2, R12Tr3_Intro, R12Tr3_Lose
	msgbox R12Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr4_Triathlete_M2::
	trainerbattle_single TRAINER_R12_TR4_TRIATHLETE_M2, R12Tr4_Intro, R12Tr4_Lose
	msgbox R12Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr5_Triathlete_M3::
	trainerbattle_single TRAINER_R12_TR5_TRIATHLETE_M3, R12Tr5_Intro, R12Tr5_Lose
	msgbox R12Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr6_Triathlete_F3::
	trainerbattle_single TRAINER_R12_TR6_TRIATHLETE_F3, R12Tr6_Intro, R12Tr6_Lose
	msgbox R12Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr7_Triathlete_M4::
	trainerbattle_single TRAINER_R12_TR7_TRIATHLETE_M4, R12Tr7_Intro, R12Tr7_Lose
	msgbox R12Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr8_Triathlete_F4::
	trainerbattle_single TRAINER_R12_TR8_TRIATHLETE_F4, R12Tr8_Intro, R12Tr8_Lose
	msgbox R12Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr9_Psychic_M::
	trainerbattle_single TRAINER_R12_TR9_PSYCHIC_M, R12Tr9_Intro, R12Tr9_Lose
	msgbox R12Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr10_Hiker::
	trainerbattle_single TRAINER_R12_TR10_HIKER, R12Tr10_Intro, R12Tr10_Lose
	msgbox R12Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr11_Lass::
	trainerbattle_single TRAINER_R12_TR11_LASS, R12Tr11_Intro, R12Tr11_Lose
	msgbox R12Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr12_Bugmaniac::
	trainerbattle_single TRAINER_R12_TR12_BUGMANIAC, R12Tr12_Intro, R12Tr12_Lose
	msgbox R12Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr13_Ninjaboy::
	trainerbattle_single TRAINER_R12_TR13_NINJABOY, R12Tr13_Intro, R12Tr13_Lose
	msgbox R12Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


R12_HoneyTree::
	lockall
	checkitem ITEM_HONEY, 1
	compare VAR_RESULT, TRUE
	goto_if_eq R12_HoneyTree_1
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

R12_HoneyTree_1:
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq R12_HoneyTree_4
	waitmessage
	closemessage
	release
	end

R12_HoneyTree_4:
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
	waitmessage
	closemessage
	removeitem ITEM_HONEY, 1
	random 10
	compare VAR_RESULT, 0
	goto_if_eq R12_HoneyTree_8
R12_HoneyTree_7:
	compare VAR_RESULT, 1
	goto_if_eq R12_HoneyTree_11
R12_HoneyTree_10:
	compare VAR_RESULT, 2
	goto_if_eq R12_HoneyTree_14
R12_HoneyTree_13:
	compare VAR_RESULT, 3
	goto_if_eq R12_HoneyTree_17
R12_HoneyTree_16:
	compare VAR_RESULT, 4
	goto_if_eq R12_HoneyTree_20
R12_HoneyTree_19:
	compare VAR_RESULT, 5
	goto_if_eq R12_HoneyTree_23
R12_HoneyTree_22:
	compare VAR_RESULT, 6
	goto_if_eq R12_HoneyTree_26
R12_HoneyTree_25:
	compare VAR_RESULT, 7
	goto_if_eq R12_HoneyTree_29
R12_HoneyTree_28:
	compare VAR_RESULT, 8
	goto_if_eq R12_HoneyTree_32
R12_HoneyTree_31:
	compare VAR_RESULT, 9
	goto_if_eq R12_HoneyTree_35
R12_HoneyTree_34:
	dowildbattle
	release
	end

R12_HoneyTree_8:
	setwildbattlelevelrange SPECIES_COMFEY, 31, ITEM_NONE, SPECIES_NONE, 24
	goto R12_HoneyTree_7

R12_HoneyTree_11:
	setwildbattlelevelrange SPECIES_EMOLGA, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_10

R12_HoneyTree_14:
	setwildbattlelevelrange SPECIES_EMOLGA, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_13

R12_HoneyTree_17:
	setwildbattlelevelrange SPECIES_EMOLGA, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_16

R12_HoneyTree_20:
	setwildbattlelevelrange SPECIES_CUTIEFLY, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_19

R12_HoneyTree_23:
	setwildbattlelevelrange SPECIES_CUTIEFLY, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_22

R12_HoneyTree_26:
	setwildbattlelevelrange SPECIES_RIBOMBEE, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_25

R12_HoneyTree_29:
	setwildbattlelevelrange SPECIES_COMFEY, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_28

R12_HoneyTree_32:
	setwildbattlelevelrange SPECIES_COMFEY, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_31

R12_HoneyTree_35:
	setwildbattlelevelrange SPECIES_MUNCHLAX, 31, ITEM_NONE, SPECIES_NONE, 35
	goto R12_HoneyTree_34


R12_Sign_Text::
	.string "Cycling Road$"

R12_OldWoman_Text::
	.string "I don't have a bike, so I guess I need\n"
	.string "to trek through the lower route…$"

R12Tr1_Intro::
	.string "$"

R12Tr1_Lose::
	.string "$"

R12Tr1_PostBattle::
	.string "$"

R12Tr2_Intro::
	.string "$"

R12Tr2_Lose::
	.string "$"

R12Tr2_PostBattle::
	.string "$"

R12Tr3_Intro::
	.string "$"

R12Tr3_Lose::
	.string "$"

R12Tr3_PostBattle::
	.string "$"

R12Tr4_Intro::
	.string "$"

R12Tr4_Lose::
	.string "$"

R12Tr4_PostBattle::
	.string "$"

R12Tr5_Intro::
	.string "$"

R12Tr5_Lose::
	.string "$"

R12Tr5_PostBattle::
	.string "$"

R12Tr6_Intro::
	.string "$"

R12Tr6_Lose::
	.string "$"

R12Tr6_PostBattle::
	.string "$"

R12Tr7_Intro::
	.string "$"

R12Tr7_Lose::
	.string "$"

R12Tr7_PostBattle::
	.string "$"

R12Tr8_Intro::
	.string "$"

R12Tr8_Lose::
	.string "$"

R12Tr8_PostBattle::
	.string "$"

R12Tr9_Intro::
	.string "$"

R12Tr9_Lose::
	.string "$"

R12Tr9_PostBattle::
	.string "$"

R12Tr10_Intro::
	.string "$"

R12Tr10_Lose::
	.string "$"

R12Tr10_PostBattle::
	.string "$"

R12Tr11_Intro::
	.string "$"

R12Tr11_Lose::
	.string "$"

R12Tr11_PostBattle::
	.string "$"

R12Tr12_Intro::
	.string "$"

R12Tr12_Lose::
	.string "$"

R12Tr12_PostBattle::
	.string "$"

R12Tr13_Intro::
	.string "$"

R12Tr13_Lose::
	.string "$"

R12Tr13_PostBattle::
	.string "$"
