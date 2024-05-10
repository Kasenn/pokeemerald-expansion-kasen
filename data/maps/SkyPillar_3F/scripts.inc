SkyPillar_3F_MapScripts::
	.byte 0


AT_3F_Tr1_Up::
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_Up_2
	setvar VAR_TEMP_2, 1
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_Up_2:
	release
	end


AT_3F_Tr1_UpTalk::
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_UpTalk_2
	setvar VAR_TEMP_2, 2
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_UpTalk_2:
	msgbox AT_3F_Tr1_PostBatExpertM, MSGBOX_NPC
	end


AT_3F_Tr1_Down::
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_Down_2
	setvar VAR_TEMP_2, 3
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_Down_2:
	release
	end


AT_3F_Tr1_DownTalk::
	checktrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	goto_if 1, AT_3F_Tr1_DownTalk_2
	setvar VAR_TEMP_2, 4
	goto Tower_3F_Tr1_Battle
	return

AT_3F_Tr1_DownTalk_2:
	msgbox AT_3F_Tr1_PostBatExpertF, MSGBOX_NPC
	end


Tower_3F_Tr1_Battle::
	lock
	special SavePlayerParty
	special SetPlayerParty
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
	switch VAR_TEMP_2
	case 1, Tower_3F_Tr1_Battle_3
	case 2, Tower_3F_Tr1_Battle_4
	case 3, Tower_3F_Tr1_Battle_5
	case 4, Tower_3F_Tr1_Battle_6
Tower_3F_Tr1_Battle_1:
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_3F_Tr1_Battle_9
	case 1, Tower_3F_Tr1_Battle_10
	case 2, Tower_3F_Tr1_Battle_11
	case 3, Tower_3F_Tr1_Battle_12
	case 4, Tower_3F_Tr1_Battle_13
	case 5, Tower_3F_Tr1_Battle_14
	case 6, Tower_3F_Tr1_Battle_15
	case 7, Tower_3F_Tr1_Battle_16
	case 8, Tower_3F_Tr1_Battle_17
	case 9, Tower_3F_Tr1_Battle_18
	case 10, Tower_3F_Tr1_Battle_19
	case 11, Tower_3F_Tr1_Battle_20
Tower_3F_Tr1_Battle_7:
	switch VAR_RESULT
	case 1, Tower_3F_Tr1_Battle_23
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_3F_Tr1_Battle_3:
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr1_3F_ExpertMIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_4:
	faceplayer
	msgbox Tr1_3F_ExpertMIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_5:
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr1_3F_ExpertFIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_6:
	faceplayer
	msgbox Tr1_3F_ExpertFIntro
	goto Tower_3F_Tr1_Battle_1

Tower_3F_Tr1_Battle_9:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_TORCHIC, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_10:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_PIPLUP, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_11:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ORAS_ROWLET, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_12:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_TORCHIC, TRAINER_BACK_PIC_MAY
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_13:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_PIPLUP, TRAINER_BACK_PIC_MAY
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_14:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_MAY_ROWLET, TRAINER_BACK_PIC_MAY
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_15:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_TORCHIC, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_16:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_PIPLUP, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_17:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ORAS_ROWLET, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_18:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_TORCHIC, TRAINER_BACK_PIC_BRENDAN
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_19:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_PIPLUP, TRAINER_BACK_PIC_BRENDAN
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_20:
	multi_2_vs_2 TRAINER_AT_3F_TR1_EXPERT_M, Tr1_3F_ExpertM_Lost, TRAINER_AT_3F_TR1_EXPERT_F, Tr1_3F_ExpertF_Lost, PARTNER_BRENDAN_ROWLET, TRAINER_BACK_PIC_BRENDAN
	goto Tower_3F_Tr1_Battle_7

Tower_3F_Tr1_Battle_23:
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_F
	release
	end


AT_3F_Tr2_Left::
	checktrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	goto_if 1, AT_3F_Tr2_Left_2
	setvar VAR_TEMP_2, 1
	goto Tower_3F_Tr2_Battle
	return

AT_3F_Tr2_Left_2:
	release
	end


AT_3F_Tr2_LeftTalk::
	checktrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	goto_if 1, AT_3F_Tr2_LeftTalk_2
	setvar VAR_TEMP_2, 2
	goto Tower_3F_Tr2_Battle
	return

AT_3F_Tr2_LeftTalk_2:
	msgbox AT_3F_Tr2_PostBatHexManiac, MSGBOX_NPC
	end


AT_3F_Tr2_RightTalk::
	msgbox AT_3F_Tr2_PostBatPsychicF, MSGBOX_NPC
	end


Tower_3F_Tr2_Battle::
	lock
	special SavePlayerParty
	special SetPlayerParty
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
	switch VAR_TEMP_2
	case 1, Tower_3F_Tr2_Battle_3
	case 2, Tower_3F_Tr2_Battle_4
Tower_3F_Tr2_Battle_1:
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_3F_Tr2_Battle_7
	case 1, Tower_3F_Tr2_Battle_8
	case 2, Tower_3F_Tr2_Battle_9
	case 3, Tower_3F_Tr2_Battle_10
	case 4, Tower_3F_Tr2_Battle_11
	case 5, Tower_3F_Tr2_Battle_12
	case 6, Tower_3F_Tr2_Battle_13
	case 7, Tower_3F_Tr2_Battle_14
	case 8, Tower_3F_Tr2_Battle_15
	case 9, Tower_3F_Tr2_Battle_16
	case 10, Tower_3F_Tr2_Battle_17
	case 11, Tower_3F_Tr2_Battle_18
Tower_3F_Tr2_Battle_5:
	switch VAR_RESULT
	case 1, Tower_3F_Tr2_Battle_21
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_3F_Tr2_Battle_3:
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Tr2_3F_HexManiacIntro
	goto Tower_3F_Tr2_Battle_1

Tower_3F_Tr2_Battle_4:
	faceplayer
	msgbox Tr2_3F_HexManiacIntro
	goto Tower_3F_Tr2_Battle_1

Tower_3F_Tr2_Battle_7:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_TORCHIC, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_8:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_PIPLUP, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_9:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ORAS_ROWLET, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_10:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_TORCHIC, TRAINER_BACK_PIC_MAY
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_11:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_PIPLUP, TRAINER_BACK_PIC_MAY
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_12:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_MAY_ROWLET, TRAINER_BACK_PIC_MAY
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_13:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_TORCHIC, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_14:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_PIPLUP, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_15:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ORAS_ROWLET, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_16:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_TORCHIC, TRAINER_BACK_PIC_BRENDAN
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_17:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_PIPLUP, TRAINER_BACK_PIC_BRENDAN
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_18:
	multi_2_vs_2 TRAINER_AT_3F_TR2_HEXMANIAC, Tr2_3F_HexManiac_Lost, TRAINER_AT_3F_TR2_PSYCHICF, Tr2_3F_PsychicF_Lost, PARTNER_BRENDAN_ROWLET, TRAINER_BACK_PIC_BRENDAN
	goto Tower_3F_Tr2_Battle_5

Tower_3F_Tr2_Battle_21:
	settrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	settrainerflag TRAINER_AT_3F_TR2_PSYCHICF
	release
	end


ExpertMegaRing::
	.string "I see that Mega Ring of yours.\p"
	.string "It would be foolish of us to\n"
	.string "challenge you.$"

Tr1_3F_ExpertMIntro::
	.string "Never underestimate old people, for\n"
	.string "we are the ones with most experience!$"

Tr1_3F_ExpertM_Lost::
	.string "Never underestimate young people's\n"
	.string "vigor…$"

AT_3F_Tr1_PostBatExpertM::
	.string "It is great to see the new generation\n"
	.string "be even more passionate then we were\l"
	.string "in our youth.$"

Tr1_3F_ExpertFIntro::
	.string "Sometimes the young need to be put in\n"
	.string "their place!$"

Tr1_3F_ExpertF_Lost::
	.string "Enough! I yield!$"

AT_3F_Tr1_PostBatExpertF::
	.string "You are meant to respect your elders!\p"
	.string "In Pokémon battles, that means you\n"
	.string "should let us win!$"

ManiacMegaRing::
	.string "Please…no…$"

Tr2_3F_HexManiacIntro::
	.string "Are you afraid of ghosts?$"

Tr2_3F_HexManiac_Lost::
	.string "Not like this…$"

AT_3F_Tr2_PostBatHexManiac::
	.string "I don't want to talk to you anymore.$"

Tr2_3F_PsychicF_Lost::
	.string "Oh now look at what you've done.\n"
	.string "You've made her sad!$"

AT_3F_Tr2_PostBatPsychicF::
	.string "She doesn't talk much, but I can\n"
	.string "feel she's feeling miserable now.$"
