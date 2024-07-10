SkyPillar_5F_MapScripts::
	.byte 0


AT_5F_Up::
	checktrainerflag TRAINER_AT_5F_COOLTRAINER_M
	goto_if 1, AT_5F_Up_2
	setvar VAR_TEMP_2, 1
	goto Tower_5F_Tr1_Battle
	return

AT_5F_Up_2:
	release
	end


AT_5F_UpTalk::
	msgbox AT_5F_PostBatMale, MSGBOX_NPC
	end


AT_5F_Down::
	checktrainerflag TRAINER_AT_5F_COOLTRAINER_M
	goto_if 1, AT_5F_Down_2
	setvar VAR_TEMP_2, 2
	goto Tower_5F_Tr1_Battle
	return

AT_5F_Down_2:
	release
	end


AT_5F_DownTalk::
	msgbox AT_5F_PostBatFemale, MSGBOX_NPC
	end


Tower_5F_Tr1_Battle::
	lock
	special SavePlayerParty
	special SetPlayerParty
	playbgm MUS_ENCOUNTER_COOL, FALSE
	switch VAR_TEMP_2
	case 1, Tower_5F_Tr1_Battle_3
	case 2, Tower_5F_Tr1_Battle_4
Tower_5F_Tr1_Battle_1:
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_5F_Tr1_Battle_7
	case 1, Tower_5F_Tr1_Battle_8
	case 2, Tower_5F_Tr1_Battle_9
	case 3, Tower_5F_Tr1_Battle_10
	case 4, Tower_5F_Tr1_Battle_11
	case 5, Tower_5F_Tr1_Battle_12
	case 6, Tower_5F_Tr1_Battle_13
	case 7, Tower_5F_Tr1_Battle_14
	case 8, Tower_5F_Tr1_Battle_15
	case 9, Tower_5F_Tr1_Battle_16
	case 10, Tower_5F_Tr1_Battle_17
	case 11, Tower_5F_Tr1_Battle_18
Tower_5F_Tr1_Battle_5:
	switch VAR_RESULT
	case 1, Tower_5F_Tr1_Battle_21
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_5F_Tr1_Battle_3:
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	msgbox Tr1_5F_MaleIntro
	goto Tower_5F_Tr1_Battle_1

Tower_5F_Tr1_Battle_4:
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox Tr1_5F_FemaleIntro
	goto Tower_5F_Tr1_Battle_1

Tower_5F_Tr1_Battle_7:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_8:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_9:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_10:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_11:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_12:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_13:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_14:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_15:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_16:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_17:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_18:
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_21:
	settrainerflag TRAINER_AT_5F_COOLTRAINER_M
	settrainerflag TRAINER_AT_5F_COOLTRAINER_F
	release
	end


AT_5F_PostBatMale::
	.string "I never expected to battle anyone\n"
	.string "as strong as you two.\p"
	.string "Go, ascend the tower.$"

AT_5F_PostBatFemale::
	.string "Okay, I admit, you two are pretty good.\p"
	.string "Now go, I believe Korrina is waiting\n"
	.string "for you.$"

Tr1_5F_MaleIntro::
	.string "You're here to meet Korrina?\n"
	.string "Not unless you can defeat us!$"

Tr1_5F_FemaleIntro::
	.string "You're here to meet Korrina?\n"
	.string "Not unless you can defeat us!$"

Tr1_5F_Male_Lost::
	.string "Outstanding…$"

Tr1_5F_Female_Lost::
	.string "How is this possible?!$"
