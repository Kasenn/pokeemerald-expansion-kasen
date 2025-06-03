SkyPillar_5F_MapScripts::
# 2 "data/maps/SkyPillar_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SkyPillar_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SkyPillar_5F/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SkyPillar_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SkyPillar_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SkyPillar_5F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


AT_5F_Up::
# 10 "data/maps/SkyPillar_5F/scripts.pory"
	checktrainerflag TRAINER_AT_5F_COOLTRAINER_M
	goto_if 1, AT_5F_Up_2
# 14 "data/maps/SkyPillar_5F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 15 "data/maps/SkyPillar_5F/scripts.pory"
	goto Tower_5F_Tr1_Battle
	return

AT_5F_Up_2:
# 11 "data/maps/SkyPillar_5F/scripts.pory"
	release
	end


AT_5F_UpTalk::
# 18 "data/maps/SkyPillar_5F/scripts.pory"
	msgbox AT_5F_PostBatMale, MSGBOX_NPC
	end


AT_5F_Down::
# 22 "data/maps/SkyPillar_5F/scripts.pory"
	checktrainerflag TRAINER_AT_5F_COOLTRAINER_M
	goto_if 1, AT_5F_Down_2
# 26 "data/maps/SkyPillar_5F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 27 "data/maps/SkyPillar_5F/scripts.pory"
	goto Tower_5F_Tr1_Battle
	return

AT_5F_Down_2:
# 23 "data/maps/SkyPillar_5F/scripts.pory"
	release
	end


AT_5F_DownTalk::
# 30 "data/maps/SkyPillar_5F/scripts.pory"
	msgbox AT_5F_PostBatFemale, MSGBOX_NPC
	end


Tower_5F_Tr1_Battle::
# 36 "data/maps/SkyPillar_5F/scripts.pory"
	lock
# 37 "data/maps/SkyPillar_5F/scripts.pory"
	special SavePlayerParty
# 38 "data/maps/SkyPillar_5F/scripts.pory"
	special SetPlayerParty
# 39 "data/maps/SkyPillar_5F/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 40 "data/maps/SkyPillar_5F/scripts.pory"
	switch VAR_TEMP_2
# 41 "data/maps/SkyPillar_5F/scripts.pory"
	case 1, Tower_5F_Tr1_Battle_3
# 47 "data/maps/SkyPillar_5F/scripts.pory"
	case 2, Tower_5F_Tr1_Battle_4
Tower_5F_Tr1_Battle_1:
# 54 "data/maps/SkyPillar_5F/scripts.pory"
	closemessage
# 55 "data/maps/SkyPillar_5F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 56 "data/maps/SkyPillar_5F/scripts.pory"
	case 0, Tower_5F_Tr1_Battle_7
# 58 "data/maps/SkyPillar_5F/scripts.pory"
	case 1, Tower_5F_Tr1_Battle_8
# 60 "data/maps/SkyPillar_5F/scripts.pory"
	case 2, Tower_5F_Tr1_Battle_9
# 62 "data/maps/SkyPillar_5F/scripts.pory"
	case 3, Tower_5F_Tr1_Battle_10
# 64 "data/maps/SkyPillar_5F/scripts.pory"
	case 4, Tower_5F_Tr1_Battle_11
# 66 "data/maps/SkyPillar_5F/scripts.pory"
	case 5, Tower_5F_Tr1_Battle_12
# 68 "data/maps/SkyPillar_5F/scripts.pory"
	case 6, Tower_5F_Tr1_Battle_13
# 70 "data/maps/SkyPillar_5F/scripts.pory"
	case 7, Tower_5F_Tr1_Battle_14
# 72 "data/maps/SkyPillar_5F/scripts.pory"
	case 8, Tower_5F_Tr1_Battle_15
# 74 "data/maps/SkyPillar_5F/scripts.pory"
	case 9, Tower_5F_Tr1_Battle_16
# 76 "data/maps/SkyPillar_5F/scripts.pory"
	case 10, Tower_5F_Tr1_Battle_17
# 78 "data/maps/SkyPillar_5F/scripts.pory"
	case 11, Tower_5F_Tr1_Battle_18
Tower_5F_Tr1_Battle_5:
# 81 "data/maps/SkyPillar_5F/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/SkyPillar_5F/scripts.pory"
	case 1, Tower_5F_Tr1_Battle_21
# 88 "data/maps/SkyPillar_5F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/SkyPillar_5F/scripts.pory"
	special SetCB2WhiteOut
# 90 "data/maps/SkyPillar_5F/scripts.pory"
	waitstate
	return

Tower_5F_Tr1_Battle_3:
# 42 "data/maps/SkyPillar_5F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 43 "data/maps/SkyPillar_5F/scripts.pory"
	waitmovement 0
# 44 "data/maps/SkyPillar_5F/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 45 "data/maps/SkyPillar_5F/scripts.pory"
	waitmovement 0
# 46 "data/maps/SkyPillar_5F/scripts.pory"
	msgbox Tr1_5F_MaleIntro
	goto Tower_5F_Tr1_Battle_1

Tower_5F_Tr1_Battle_4:
# 48 "data/maps/SkyPillar_5F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 49 "data/maps/SkyPillar_5F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SkyPillar_5F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 51 "data/maps/SkyPillar_5F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SkyPillar_5F/scripts.pory"
	msgbox Tr1_5F_FemaleIntro
	goto Tower_5F_Tr1_Battle_1

Tower_5F_Tr1_Battle_7:
# 57 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_8:
# 59 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_9:
# 61 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_10:
# 63 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_11:
# 65 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_12:
# 67 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_MAY_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_13:
# 69 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_14:
# 71 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_15:
# 73 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_16:
# 75 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_17:
# 77 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_18:
# 79 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_5F_Tr1_Battle_5

Tower_5F_Tr1_Battle_21:
# 83 "data/maps/SkyPillar_5F/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_M
# 84 "data/maps/SkyPillar_5F/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_F
# 85 "data/maps/SkyPillar_5F/scripts.pory"
	release
	end


AT_5F_PostBatMale::
# 93 "data/maps/SkyPillar_5F/scripts.pory"
	.string "I never expected to battle anyone\n"
	.string "as strong as you two.\p"
	.string "Go, ascend the tower.$"

AT_5F_PostBatFemale::
# 98 "data/maps/SkyPillar_5F/scripts.pory"
	.string "Okay, I admit, you two are pretty good.\p"
	.string "Now go, I believe Korrina is waiting\n"
	.string "for you.$"

Tr1_5F_MaleIntro::
# 103 "data/maps/SkyPillar_5F/scripts.pory"
	.string "You're here to meet Korrina?\n"
	.string "Not unless you can defeat us!$"

Tr1_5F_FemaleIntro::
# 107 "data/maps/SkyPillar_5F/scripts.pory"
	.string "You're here to meet Korrina?\n"
	.string "Not unless you can defeat us!$"

Tr1_5F_Male_Lost::
# 111 "data/maps/SkyPillar_5F/scripts.pory"
	.string "Outstanding…$"

Tr1_5F_Female_Lost::
# 114 "data/maps/SkyPillar_5F/scripts.pory"
	.string "How is this possible?!$"
