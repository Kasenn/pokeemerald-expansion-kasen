SkyPillar_3F_MapScripts::
# 2 "data/maps/SkyPillar_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SkyPillar_3F/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SkyPillar_3F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


AT_3F_Tr1_Up::
# 10 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_Up_2
# 14 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 15 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_Up_2:
# 11 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


AT_3F_Tr1_UpTalk::
# 18 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_UpTalk_2
# 22 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 23 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_UpTalk_2:
# 19 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox AT_3F_Tr1_PostBatExpertM, MSGBOX_NPC
	end


AT_3F_Tr1_Down::
# 26 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_Down_2
# 30 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 31 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_Down_2:
# 27 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


AT_3F_Tr1_DownTalk::
# 34 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_DownTalk_2
# 38 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 4
# 39 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_DownTalk_2:
# 35 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox AT_3F_Tr1_PostBatExpertF, MSGBOX_NPC
	end


Tower_3F_Tr1_Battle::
# 50 "data/maps/SkyPillar_3F/scripts.pory"
	lock
# 51 "data/maps/SkyPillar_3F/scripts.pory"
	special SavePlayerParty
# 52 "data/maps/SkyPillar_3F/scripts.pory"
	special SetPlayerParty
# 53 "data/maps/SkyPillar_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 54 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_TEMP_2
# 55 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr1_Battle_3
# 62 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr1_Battle_4
# 65 "data/maps/SkyPillar_3F/scripts.pory"
	case 3, Tower_3F_Tr1_Battle_5
# 72 "data/maps/SkyPillar_3F/scripts.pory"
	case 4, Tower_3F_Tr1_Battle_6
Tower_3F_Tr1_Battle_1:
# 76 "data/maps/SkyPillar_3F/scripts.pory"
	closemessage
# 77 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 78 "data/maps/SkyPillar_3F/scripts.pory"
	case 0, Tower_3F_Tr1_Battle_9
# 80 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr1_Battle_10
# 82 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr1_Battle_11
# 84 "data/maps/SkyPillar_3F/scripts.pory"
	case 3, Tower_3F_Tr1_Battle_12
# 86 "data/maps/SkyPillar_3F/scripts.pory"
	case 4, Tower_3F_Tr1_Battle_13
# 88 "data/maps/SkyPillar_3F/scripts.pory"
	case 5, Tower_3F_Tr1_Battle_14
# 90 "data/maps/SkyPillar_3F/scripts.pory"
	case 6, Tower_3F_Tr1_Battle_15
# 92 "data/maps/SkyPillar_3F/scripts.pory"
	case 7, Tower_3F_Tr1_Battle_16
# 94 "data/maps/SkyPillar_3F/scripts.pory"
	case 8, Tower_3F_Tr1_Battle_17
# 96 "data/maps/SkyPillar_3F/scripts.pory"
	case 9, Tower_3F_Tr1_Battle_18
# 98 "data/maps/SkyPillar_3F/scripts.pory"
	case 10, Tower_3F_Tr1_Battle_19
# 100 "data/maps/SkyPillar_3F/scripts.pory"
	case 11, Tower_3F_Tr1_Battle_20
Tower_3F_Tr1_Battle_7:
# 103 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr1_Battle_23
# 110 "data/maps/SkyPillar_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 111 "data/maps/SkyPillar_3F/scripts.pory"
	special SetCB2WhiteOut
# 112 "data/maps/SkyPillar_3F/scripts.pory"
	waitstate
	return

Tower_3F_Tr1_Battle_3:
# 56 "data/maps/SkyPillar_3F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 57 "data/maps/SkyPillar_3F/scripts.pory"
	waitmovement 0
# 58 "data/maps/SkyPillar_3F/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 59 "data/maps/SkyPillar_3F/scripts.pory"
	waitmovement 0
# 60 "data/maps/SkyPillar_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 61 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertMIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_4:
# 63 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 64 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertMIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_5:
# 66 "data/maps/SkyPillar_3F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 67 "data/maps/SkyPillar_3F/scripts.pory"
	waitmovement 0
# 68 "data/maps/SkyPillar_3F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 69 "data/maps/SkyPillar_3F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SkyPillar_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 71 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertFIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_6:
# 73 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 74 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertFIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_9:
# 79 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_10:
# 81 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_11:
# 83 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_12:
# 85 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_13:
# 87 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_14:
# 89 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_15:
# 91 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_16:
# 93 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_17:
# 95 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_18:
# 97 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_19:
# 99 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_20:
# 101 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_23:
# 105 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_M
# 106 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_F
# 107 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


AT_3F_Tr2_Left::
# 146 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	goto_if 1, AT_3F_Tr2_Left_2
# 150 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 151 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr2_Battle
	return

AT_3F_Tr2_Left_2:
# 147 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


AT_3F_Tr2_LeftTalk::
# 154 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	goto_if 1, AT_3F_Tr2_LeftTalk_2
# 158 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 159 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr2_Battle
	return

AT_3F_Tr2_LeftTalk_2:
# 155 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox AT_3F_Tr2_PostBatHexManiac, MSGBOX_NPC
	end


AT_3F_Tr2_RightTalk::
# 163 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox AT_3F_Tr2_PostBatPsychicF, MSGBOX_NPC
	end


Tower_3F_Tr2_Battle::
# 173 "data/maps/SkyPillar_3F/scripts.pory"
	lock
# 174 "data/maps/SkyPillar_3F/scripts.pory"
	special SavePlayerParty
# 175 "data/maps/SkyPillar_3F/scripts.pory"
	special SetPlayerParty
# 176 "data/maps/SkyPillar_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 177 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_TEMP_2
# 178 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr2_Battle_3
# 185 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr2_Battle_4
Tower_3F_Tr2_Battle_1:
# 189 "data/maps/SkyPillar_3F/scripts.pory"
	closemessage
# 190 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 191 "data/maps/SkyPillar_3F/scripts.pory"
	case 0, Tower_3F_Tr2_Battle_7
# 193 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr2_Battle_8
# 195 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr2_Battle_9
# 197 "data/maps/SkyPillar_3F/scripts.pory"
	case 3, Tower_3F_Tr2_Battle_10
# 199 "data/maps/SkyPillar_3F/scripts.pory"
	case 4, Tower_3F_Tr2_Battle_11
# 201 "data/maps/SkyPillar_3F/scripts.pory"
	case 5, Tower_3F_Tr2_Battle_12
# 203 "data/maps/SkyPillar_3F/scripts.pory"
	case 6, Tower_3F_Tr2_Battle_13
# 205 "data/maps/SkyPillar_3F/scripts.pory"
	case 7, Tower_3F_Tr2_Battle_14
# 207 "data/maps/SkyPillar_3F/scripts.pory"
	case 8, Tower_3F_Tr2_Battle_15
# 209 "data/maps/SkyPillar_3F/scripts.pory"
	case 9, Tower_3F_Tr2_Battle_16
# 211 "data/maps/SkyPillar_3F/scripts.pory"
	case 10, Tower_3F_Tr2_Battle_17
# 213 "data/maps/SkyPillar_3F/scripts.pory"
	case 11, Tower_3F_Tr2_Battle_18
Tower_3F_Tr2_Battle_5:
# 216 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_RESULT
# 217 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr2_Battle_21
# 223 "data/maps/SkyPillar_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/SkyPillar_3F/scripts.pory"
	special SetCB2WhiteOut
# 225 "data/maps/SkyPillar_3F/scripts.pory"
	waitstate
	return

Tower_3F_Tr2_Battle_3:
# 179 "data/maps/SkyPillar_3F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 180 "data/maps/SkyPillar_3F/scripts.pory"
	waitmovement 0
# 181 "data/maps/SkyPillar_3F/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 182 "data/maps/SkyPillar_3F/scripts.pory"
	waitmovement 0
# 183 "data/maps/SkyPillar_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 184 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr2_3F_HexManiacIntro
	goto Tower_3F_Tr2_Battle_1

Tower_3F_Tr2_Battle_4:
# 186 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 187 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr2_3F_HexManiacIntro
	goto Tower_3F_Tr2_Battle_1

Tower_3F_Tr2_Battle_7:
# 192 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_8:
# 194 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_9:
# 196 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_10:
# 198 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_11:
# 200 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_12:
# 202 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_13:
# 204 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_14:
# 206 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_15:
# 208 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_16:
# 210 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_17:
# 212 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_18:
# 214 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_21:
# 218 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
# 219 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_PSYCHICF
# 220 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


ExpertMegaRing::
# 42 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I see that Mega Ring of yours.\p"
	.string "It would be foolish of us to\n"
	.string "challenge you.$"

Tr1_3F_ExpertMIntro::
# 115 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Never underestimate old people, for\n"
	.string "we are the ones with most experience!$"

Tr1_3F_ExpertM_Lost::
# 119 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Never underestimate young people's\n"
	.string "vigor…$"

AT_3F_Tr1_PostBatExpertM::
# 123 "data/maps/SkyPillar_3F/scripts.pory"
	.string "It is great to see the new generation\n"
	.string "be even more passionate then we were\l"
	.string "in our youth.$"

Tr1_3F_ExpertFIntro::
# 128 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Sometimes the young need to be put in\n"
	.string "their place!$"

Tr1_3F_ExpertF_Lost::
# 132 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Enough! I yield!$"

AT_3F_Tr1_PostBatExpertF::
# 135 "data/maps/SkyPillar_3F/scripts.pory"
	.string "You are meant to respect your elders!\p"
	.string "In Pokémon battles, that means you\n"
	.string "should let us win!$"

ManiacMegaRing::
# 167 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Please…no…$"

Tr2_3F_HexManiacIntro::
# 228 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Are you afraid of ghosts?$"

Tr2_3F_HexManiac_Lost::
# 231 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Not like this…$"

AT_3F_Tr2_PostBatHexManiac::
# 234 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I don't want to talk to you anymore.$"

Tr2_3F_PsychicF_Lost::
# 237 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Oh now look at what you've done.\n"
	.string "You've made her sad!$"

AT_3F_Tr2_PostBatPsychicF::
# 241 "data/maps/SkyPillar_3F/scripts.pory"
	.string "She doesn't talk much, but I can\n"
	.string "feel she's feeling miserable now.$"
