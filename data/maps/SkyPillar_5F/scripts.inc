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
# 44 "data/maps/SkyPillar_5F/scripts.pory"
	case 2, Tower_5F_Tr1_Battle_4
Tower_5F_Tr1_Battle_1:
# 48 "data/maps/SkyPillar_5F/scripts.pory"
	closemessage
# 49 "data/maps/SkyPillar_5F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_5F_COOLTRAINER_M, Tr1_5F_Male_Lost, TRAINER_AT_5F_COOLTRAINER_F, Tr1_5F_Female_Lost, VAR_TOWER_PARTNER
# 50 "data/maps/SkyPillar_5F/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/SkyPillar_5F/scripts.pory"
	case 1, Tower_5F_Tr1_Battle_7
# 57 "data/maps/SkyPillar_5F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/SkyPillar_5F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_5F_Tr1_Battle_3:
# 42 "data/maps/SkyPillar_5F/scripts.pory"
	exclamationmark 2
# 43 "data/maps/SkyPillar_5F/scripts.pory"
	msgbox Tr1_5F_MaleIntro
	goto Tower_5F_Tr1_Battle_1

Tower_5F_Tr1_Battle_4:
# 45 "data/maps/SkyPillar_5F/scripts.pory"
	exclamationmark 1
# 46 "data/maps/SkyPillar_5F/scripts.pory"
	msgbox Tr1_5F_FemaleIntro
	goto Tower_5F_Tr1_Battle_1

Tower_5F_Tr1_Battle_7:
# 52 "data/maps/SkyPillar_5F/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_M
# 53 "data/maps/SkyPillar_5F/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_F
# 54 "data/maps/SkyPillar_5F/scripts.pory"
	release
	end


AT_5F_PostBatMale::
# 61 "data/maps/SkyPillar_5F/scripts.pory"
	.string "I never expected to battle anyone\n"
	.string "as strong as you two.\p"
	.string "Go, ascend the tower.$"

AT_5F_PostBatFemale::
# 66 "data/maps/SkyPillar_5F/scripts.pory"
	.string "Okay, I admit, you two are pretty good.\p"
	.string "Now go, I believe Korrina is waiting\n"
	.string "for you.$"

Tr1_5F_MaleIntro::
# 71 "data/maps/SkyPillar_5F/scripts.pory"
	.string "You're here to meet Korrina?\n"
	.string "Not unless you can defeat us!$"

Tr1_5F_FemaleIntro::
# 75 "data/maps/SkyPillar_5F/scripts.pory"
	.string "You're here to meet Korrina?\n"
	.string "Not unless you can defeat us!$"

Tr1_5F_Male_Lost::
# 79 "data/maps/SkyPillar_5F/scripts.pory"
	.string "Outstanding…$"

Tr1_5F_Female_Lost::
# 82 "data/maps/SkyPillar_5F/scripts.pory"
	.string "How is this possible?!$"
