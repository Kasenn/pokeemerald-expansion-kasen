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
# 59 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr1_Battle_4
# 62 "data/maps/SkyPillar_3F/scripts.pory"
	case 3, Tower_3F_Tr1_Battle_5
# 66 "data/maps/SkyPillar_3F/scripts.pory"
	case 4, Tower_3F_Tr1_Battle_6
Tower_3F_Tr1_Battle_1:
# 70 "data/maps/SkyPillar_3F/scripts.pory"
	closemessage
# 71 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 72 "data/maps/SkyPillar_3F/scripts.pory"
	case 0, Tower_3F_Tr1_Battle_9
# 74 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr1_Battle_10
# 76 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr1_Battle_11
# 78 "data/maps/SkyPillar_3F/scripts.pory"
	case 3, Tower_3F_Tr1_Battle_12
# 80 "data/maps/SkyPillar_3F/scripts.pory"
	case 4, Tower_3F_Tr1_Battle_13
# 82 "data/maps/SkyPillar_3F/scripts.pory"
	case 5, Tower_3F_Tr1_Battle_14
# 84 "data/maps/SkyPillar_3F/scripts.pory"
	case 6, Tower_3F_Tr1_Battle_15
# 86 "data/maps/SkyPillar_3F/scripts.pory"
	case 7, Tower_3F_Tr1_Battle_16
# 88 "data/maps/SkyPillar_3F/scripts.pory"
	case 8, Tower_3F_Tr1_Battle_17
# 90 "data/maps/SkyPillar_3F/scripts.pory"
	case 9, Tower_3F_Tr1_Battle_18
# 92 "data/maps/SkyPillar_3F/scripts.pory"
	case 10, Tower_3F_Tr1_Battle_19
# 94 "data/maps/SkyPillar_3F/scripts.pory"
	case 11, Tower_3F_Tr1_Battle_20
Tower_3F_Tr1_Battle_7:
# 97 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr1_Battle_23
# 104 "data/maps/SkyPillar_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/SkyPillar_3F/scripts.pory"
	special SetCB2WhiteOut
# 106 "data/maps/SkyPillar_3F/scripts.pory"
	waitstate
	return

Tower_3F_Tr1_Battle_3:
# 56 "data/maps/SkyPillar_3F/scripts.pory"
	exclamationmark 2
# 57 "data/maps/SkyPillar_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 58 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertMIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_4:
# 60 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 61 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertMIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_5:
# 63 "data/maps/SkyPillar_3F/scripts.pory"
	exclamationmark 1
# 64 "data/maps/SkyPillar_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 65 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertFIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_6:
# 67 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 68 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr1_3F_ExpertFIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_9:
# 73 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_10:
# 75 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_11:
# 77 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_12:
# 79 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_13:
# 81 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_14:
# 83 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_15:
# 85 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_16:
# 87 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_17:
# 89 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_18:
# 91 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_19:
# 93 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_20:
# 95 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_23:
# 99 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_M
# 100 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_F
# 101 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


AT_3F_Tr2_Left::
# 140 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	goto_if 1, AT_3F_Tr2_Left_2
# 144 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 145 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr2_Battle
	return

AT_3F_Tr2_Left_2:
# 141 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


AT_3F_Tr2_LeftTalk::
# 148 "data/maps/SkyPillar_3F/scripts.pory"
	checktrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	goto_if 1, AT_3F_Tr2_LeftTalk_2
# 152 "data/maps/SkyPillar_3F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 153 "data/maps/SkyPillar_3F/scripts.pory"
	goto Tower_3F_Tr2_Battle
	return

AT_3F_Tr2_LeftTalk_2:
# 149 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox AT_3F_Tr2_PostBatHexManiac, MSGBOX_NPC
	end


AT_3F_Tr2_RightTalk::
# 157 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox AT_3F_Tr2_PostBatPsychicF, MSGBOX_NPC
	end


Tower_3F_Tr2_Battle::
# 167 "data/maps/SkyPillar_3F/scripts.pory"
	lock
# 168 "data/maps/SkyPillar_3F/scripts.pory"
	special SavePlayerParty
# 169 "data/maps/SkyPillar_3F/scripts.pory"
	special SetPlayerParty
# 170 "data/maps/SkyPillar_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 171 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_TEMP_2
# 172 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr2_Battle_3
# 176 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr2_Battle_4
Tower_3F_Tr2_Battle_1:
# 180 "data/maps/SkyPillar_3F/scripts.pory"
	closemessage
# 181 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 182 "data/maps/SkyPillar_3F/scripts.pory"
	case 0, Tower_3F_Tr2_Battle_7
# 184 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr2_Battle_8
# 186 "data/maps/SkyPillar_3F/scripts.pory"
	case 2, Tower_3F_Tr2_Battle_9
# 188 "data/maps/SkyPillar_3F/scripts.pory"
	case 3, Tower_3F_Tr2_Battle_10
# 190 "data/maps/SkyPillar_3F/scripts.pory"
	case 4, Tower_3F_Tr2_Battle_11
# 192 "data/maps/SkyPillar_3F/scripts.pory"
	case 5, Tower_3F_Tr2_Battle_12
# 194 "data/maps/SkyPillar_3F/scripts.pory"
	case 6, Tower_3F_Tr2_Battle_13
# 196 "data/maps/SkyPillar_3F/scripts.pory"
	case 7, Tower_3F_Tr2_Battle_14
# 198 "data/maps/SkyPillar_3F/scripts.pory"
	case 8, Tower_3F_Tr2_Battle_15
# 200 "data/maps/SkyPillar_3F/scripts.pory"
	case 9, Tower_3F_Tr2_Battle_16
# 202 "data/maps/SkyPillar_3F/scripts.pory"
	case 10, Tower_3F_Tr2_Battle_17
# 204 "data/maps/SkyPillar_3F/scripts.pory"
	case 11, Tower_3F_Tr2_Battle_18
Tower_3F_Tr2_Battle_5:
# 207 "data/maps/SkyPillar_3F/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/SkyPillar_3F/scripts.pory"
	case 1, Tower_3F_Tr2_Battle_21
# 214 "data/maps/SkyPillar_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 215 "data/maps/SkyPillar_3F/scripts.pory"
	special SetCB2WhiteOut
# 216 "data/maps/SkyPillar_3F/scripts.pory"
	waitstate
	return

Tower_3F_Tr2_Battle_3:
# 173 "data/maps/SkyPillar_3F/scripts.pory"
	exclamationmark 3
# 174 "data/maps/SkyPillar_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 175 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr2_3F_HexManiacIntro
	goto Tower_3F_Tr2_Battle_1

Tower_3F_Tr2_Battle_4:
# 177 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 178 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox Tr2_3F_HexManiacIntro
	goto Tower_3F_Tr2_Battle_1

Tower_3F_Tr2_Battle_7:
# 183 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_8:
# 185 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_9:
# 187 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_10:
# 189 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_11:
# 191 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_12:
# 193 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_13:
# 195 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_14:
# 197 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_15:
# 199 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_16:
# 201 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_17:
# 203 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_18:
# 205 "data/maps/SkyPillar_3F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_21:
# 209 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
# 210 "data/maps/SkyPillar_3F/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_PSYCHICF
# 211 "data/maps/SkyPillar_3F/scripts.pory"
	release
	end


ExpertMegaRing::
# 42 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I see that Mega Ring of yours.\p"
	.string "It would be foolish of us to\n"
	.string "challenge you.$"

Tr1_3F_ExpertMIntro::
# 109 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Never underestimate old people, for\n"
	.string "we are the ones with most experience!$"

Tr1_3F_ExpertM_Lost::
# 113 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Never underestimate young people's\n"
	.string "vigor…$"

AT_3F_Tr1_PostBatExpertM::
# 117 "data/maps/SkyPillar_3F/scripts.pory"
	.string "It is great to see the new generation\n"
	.string "be even more passionate then we were\l"
	.string "in our youth.$"

Tr1_3F_ExpertFIntro::
# 122 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Sometimes the young need to be put in\n"
	.string "their place!$"

Tr1_3F_ExpertF_Lost::
# 126 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Enough! I yield!$"

AT_3F_Tr1_PostBatExpertF::
# 129 "data/maps/SkyPillar_3F/scripts.pory"
	.string "You are meant to respect your elders!\p"
	.string "In Pokémon battles, that means you\n"
	.string "should let us win!$"

ManiacMegaRing::
# 161 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Please…no…$"

Tr2_3F_HexManiacIntro::
# 219 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Are you afraid of ghosts?$"

Tr2_3F_HexManiac_Lost::
# 222 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Not like this…$"

AT_3F_Tr2_PostBatHexManiac::
# 225 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I don't want to talk to you anymore.$"

Tr2_3F_PsychicF_Lost::
# 228 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Oh now look at what you've done.\n"
	.string "You've made her sad!$"

AT_3F_Tr2_PostBatPsychicF::
# 232 "data/maps/SkyPillar_3F/scripts.pory"
	.string "She doesn't talk much, but I can\n"
	.string "feel she's feeling miserable now.$"
