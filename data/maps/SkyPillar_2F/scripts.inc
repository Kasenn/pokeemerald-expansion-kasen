SkyPillar_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetRivalTowerLoc
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SkyPillar_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_RIVAL_AROUND_SANDSTONE, 0, MeetingRivalInTheTower
	map_script_2 VAR_RIVAL_AROUND_SANDSTONE, 1, MeetingRivalInTheTower
	map_script_2 VAR_RIVAL_AROUND_SANDSTONE, 2, MeetingRivalInTheTower
	map_script_2 VAR_RIVAL_AROUND_SANDSTONE, 4, UnitedWithRival
	.2byte 0


SetRivalTowerLoc::
	compare VAR_RIVAL_AROUND_SANDSTONE, 2
	goto_if_le SetRivalTowerLoc_2
SetRivalTowerLoc_1:
	end

SetRivalTowerLoc_2:
	setobjectxyperm 6, 12, 3
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto SetRivalTowerLoc_1


AT_2F_Tr2_Left::
	checktrainerflag TRAINER_AT_2F_TR2_MAN3
	goto_if 1, AT_2F_Tr2_Left_2
	setvar VAR_TEMP_2, 1
	goto Tower_2F_Tr2_Battle
	return

AT_2F_Tr2_Left_2:
	release
	end


AT_2F_Tr2_Right::
	checktrainerflag TRAINER_AT_2F_TR2_MAN3
	goto_if 1, AT_2F_Tr2_Right_2
	setvar VAR_TEMP_2, 2
	goto Tower_2F_Tr2_Battle
	return

AT_2F_Tr2_Right_2:
	release
	end


Tower_2F_Tr2_Battle::
	lock
	playbgm MUS_ENCOUNTER_COOL, FALSE
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr2_Battle_2
	applymovement 1, Walk1Left
Tower_2F_Tr2_Battle_1:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox Tr2_2F_Man3Intro
	closemessage
	playbgm MUS_ENCOUNTER_COOL, FALSE
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr2_Battle_6
	applymovement 2, Walk2Right
Tower_2F_Tr2_Battle_5:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr2_2F_Woman5Intro
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_2F_Tr2_Battle_11
	case 1, Tower_2F_Tr2_Battle_12
	case 2, Tower_2F_Tr2_Battle_13
	case 3, Tower_2F_Tr2_Battle_14
	case 4, Tower_2F_Tr2_Battle_15
	case 5, Tower_2F_Tr2_Battle_16
	case 6, Tower_2F_Tr2_Battle_17
	case 7, Tower_2F_Tr2_Battle_18
	case 8, Tower_2F_Tr2_Battle_19
	case 9, Tower_2F_Tr2_Battle_20
	case 10, Tower_2F_Tr2_Battle_21
	case 11, Tower_2F_Tr2_Battle_22
Tower_2F_Tr2_Battle_9:
	switch VAR_RESULT
	case 1, Tower_2F_Tr2_Battle_25
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_2F_Tr2_Battle_2:
	applymovement 1, Walk2Left
	goto Tower_2F_Tr2_Battle_1

Tower_2F_Tr2_Battle_6:
	applymovement 2, Walk1Right
	goto Tower_2F_Tr2_Battle_5

Tower_2F_Tr2_Battle_11:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_TORCHIC, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_12:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_PIPLUP, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_13:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_ROWLET, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_14:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_TORCHIC, TRAINER_BACK_PIC_MAY
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_15:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_PIPLUP, TRAINER_BACK_PIC_MAY
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_16:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ROWLET, TRAINER_BACK_PIC_MAY
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_17:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_TORCHIC, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_18:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_PIPLUP, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_19:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_ROWLET, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_20:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_TORCHIC, TRAINER_BACK_PIC_BRENDAN
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_21:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_PIPLUP, TRAINER_BACK_PIC_BRENDAN
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_22:
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ROWLET, TRAINER_BACK_PIC_BRENDAN
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_25:
	settrainerflag TRAINER_AT_2F_TR2_MAN3
	settrainerflag TRAINER_AT_2F_TR2_WOMAN5
	release
	end


Tr2_2F_Woman5::
	msgbox Tr2_2F_Woman5_PosBat, MSGBOX_NPC
	end


Tr2_2F_Man3::
	msgbox Tr2_2F_Man3_PosBat, MSGBOX_NPC
	end


AT_2F_Tr1_Left::
	checktrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	goto_if 1, AT_2F_Tr1_Left_2
	setvar VAR_TEMP_2, 1
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Left_2:
	release
	end


AT_2F_Tr1_Right::
	checktrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	goto_if 1, AT_2F_Tr1_Right_2
	setvar VAR_TEMP_2, 2
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Right_2:
	release
	end


Tower_2F_Tr1_Battle::
	lock
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
	special SavePlayerParty
	special SetPlayerParty
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr1_Battle_2
Tower_2F_Tr1_Battle_1:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox Tr1_2F_PsychicIntro
	closemessage
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
	compare VAR_TEMP_2, 2
	goto_if_eq Tower_2F_Tr1_Battle_5
Tower_2F_Tr1_Battle_4:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr1_2F_Man5Intro
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_2F_Tr1_Battle_9
	case 1, Tower_2F_Tr1_Battle_10
	case 2, Tower_2F_Tr1_Battle_11
	case 3, Tower_2F_Tr1_Battle_12
	case 4, Tower_2F_Tr1_Battle_13
	case 5, Tower_2F_Tr1_Battle_14
	case 6, Tower_2F_Tr1_Battle_15
	case 7, Tower_2F_Tr1_Battle_16
	case 8, Tower_2F_Tr1_Battle_17
	case 9, Tower_2F_Tr1_Battle_18
	case 10, Tower_2F_Tr1_Battle_19
	case 11, Tower_2F_Tr1_Battle_20
Tower_2F_Tr1_Battle_7:
	switch VAR_RESULT
	case 1, Tower_2F_Tr1_Battle_23
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_2F_Tr1_Battle_2:
	applymovement 4, Walk1Left
	goto Tower_2F_Tr1_Battle_1

Tower_2F_Tr1_Battle_5:
	applymovement 5, Walk1Right
	goto Tower_2F_Tr1_Battle_4

Tower_2F_Tr1_Battle_9:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_TORCHIC, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_10:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_PIPLUP, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_11:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_ROWLET, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_12:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_TORCHIC, TRAINER_BACK_PIC_MAY
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_13:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_PIPLUP, TRAINER_BACK_PIC_MAY
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_14:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ROWLET, TRAINER_BACK_PIC_MAY
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_15:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_TORCHIC, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_16:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_PIPLUP, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_17:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_ROWLET, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_18:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_TORCHIC, TRAINER_BACK_PIC_BRENDAN
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_19:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_PIPLUP, TRAINER_BACK_PIC_BRENDAN
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_20:
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ROWLET, TRAINER_BACK_PIC_BRENDAN
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_23:
	settrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	settrainerflag TRAINER_AT_2F_TR1_MAN5
	release
	end


Tr1_2F_Man5::
	msgbox Tr1_2F_Man5_PosBat, MSGBOX_NPC
	end


Tr1_2F_Psychic::
	msgbox Tr1_2F_Psychic_PosBat, MSGBOX_NPC
	end


AT_2F_DefeatedTrainer::
	msgbox AT_2F_DefeatedTrainer_Text, MSGBOX_NPC
	end


TestFollower::
	lock
	faceplayer
	msgbox TestFollower_Text_0
	closemessage
	loadword 0, MakeNewTeam
	setfollower 6, FOLLOWER_FLAG_ALL
	release
	end


MakeNewTeam::
	lock
	facefollower
	switch VAR_FIRST_MON
	case 0, MakeNewTeam_3
	case 1, MakeNewTeam_4
	case 2, MakeNewTeam_5
	case 3, MakeNewTeam_6
	case 4, MakeNewTeam_7
MakeNewTeam_1:
	switch VAR_SECOND_MON
	case 0, MakeNewTeam_10
	case 1, MakeNewTeam_11
	case 2, MakeNewTeam_12
	case 3, MakeNewTeam_13
	case 4, MakeNewTeam_14
MakeNewTeam_8:
	switch VAR_THIRD_MON
	case 0, MakeNewTeam_24
	case 1, MakeNewTeam_25
	case 2, MakeNewTeam_26
	case 3, MakeNewTeam_27
	case 4, MakeNewTeam_28
MakeNewTeam_22:
	msgbox CurrentlyUsing, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_37
	goto MakeNewTeam_Setup
	return

MakeNewTeam_3:
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto MakeNewTeam_1

MakeNewTeam_4:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_15
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto MakeNewTeam_1

MakeNewTeam_5:
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto MakeNewTeam_1

MakeNewTeam_6:
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto MakeNewTeam_1

MakeNewTeam_7:
	switch VAR_STARTER_MON
	case 0, MakeNewTeam_19
	case 1, MakeNewTeam_20
	case 2, MakeNewTeam_21
	goto MakeNewTeam_1

MakeNewTeam_10:
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto MakeNewTeam_8

MakeNewTeam_11:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_29
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto MakeNewTeam_8

MakeNewTeam_12:
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto MakeNewTeam_8

MakeNewTeam_13:
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto MakeNewTeam_8

MakeNewTeam_14:
	switch VAR_STARTER_MON
	case 0, MakeNewTeam_33
	case 1, MakeNewTeam_34
	case 2, MakeNewTeam_35
	goto MakeNewTeam_8

MakeNewTeam_15:
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto MakeNewTeam_1

MakeNewTeam_19:
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto MakeNewTeam_1

MakeNewTeam_20:
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto MakeNewTeam_1

MakeNewTeam_21:
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto MakeNewTeam_1

MakeNewTeam_24:
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto MakeNewTeam_22

MakeNewTeam_25:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_39
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto MakeNewTeam_22

MakeNewTeam_26:
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto MakeNewTeam_22

MakeNewTeam_27:
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto MakeNewTeam_22

MakeNewTeam_28:
	switch VAR_STARTER_MON
	case 0, MakeNewTeam_43
	case 1, MakeNewTeam_44
	case 2, MakeNewTeam_45
	goto MakeNewTeam_22

MakeNewTeam_29:
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto MakeNewTeam_8

MakeNewTeam_33:
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto MakeNewTeam_8

MakeNewTeam_34:
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto MakeNewTeam_8

MakeNewTeam_35:
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto MakeNewTeam_8

MakeNewTeam_37:
	msgbox MakeNewTeam_Text_0, MSGBOX_NPC
	end

MakeNewTeam_39:
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto MakeNewTeam_22

MakeNewTeam_43:
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto MakeNewTeam_22

MakeNewTeam_44:
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto MakeNewTeam_22

MakeNewTeam_45:
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto MakeNewTeam_22


BeginPartnerSetupLoop2::
	goto MakeNewTeam_Setup
	return


MakeNewTeam_Setup::
	setvar VAR_FIRST_MON, 10
	setvar VAR_SECOND_MON, 11
	setvar VAR_THIRD_MON, 12
	message MakeNewTeam_Setup_Text_0
	waitmessage
	call RivalFirstPokemon
	message MakeNewTeam_Setup_Text_1
	waitmessage
	call RivalSecondPokemon
	message MakeNewTeam_Setup_Text_2
	waitmessage
	call RivalThirdPokemon
	msgbox WantMeToUse, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_Setup_2
MakeNewTeam_Setup_1:
	msgbox OkayRivalLetsGo, MSGBOX_NPC
	release
	end

MakeNewTeam_Setup_2:
	goto BeginPartnerSetupLoop2
	goto MakeNewTeam_Setup_1


UnitedWithRival::
	lock
	delay 24
	turnobject 6, DIR_NORTH
	playse SE_PIN
	applymovement 6, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq UnitedWithRival_2
	msgbox YoureBackBrendan
UnitedWithRival_1:
	closemessage
	setvar VAR_RIVAL_AROUND_SANDSTONE, 3
	setflag FLAG_PARTNER_HEALS
	loadword 0, MakeNewTeam
	special HealPlayerParty
	setfollower 6, FOLLOWER_FLAG_ALL
	release
	end

UnitedWithRival_2:
	msgbox YoureBackMay
	goto UnitedWithRival_1


MeetingRivalInTheTower::
	lock
	delay 24
	playse SE_PIN
	turnobject 6, DIR_WEST
	applymovement 6, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	applymovement 6, Tower2FRival
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeetingRivalInTheTower_2
	compare VAR_RIVAL_AROUND_SANDSTONE, 1
	goto_if_eq MeetingRivalInTheTower_10
	compare VAR_RIVAL_AROUND_SANDSTONE, 2
	goto_if_eq MeetingRivalInTheTower_11
	msgbox BrendanLongTimeNoSee
MeetingRivalInTheTower_1:
	closemessage
	setvar VAR_TEMP_3, 1
	setvar VAR_RIVAL_AROUND_SANDSTONE, 3
	setflag FLAG_PARTNER_HEALS
	loadword 0, MakeNewTeam
	special HealPlayerParty
	setfollower 6, FOLLOWER_FLAG_ALL
	msgbox InitialPartnerSetup
	goto BeginPartnerSetup
	return

MeetingRivalInTheTower_2:
	compare VAR_RIVAL_AROUND_SANDSTONE, 1
	goto_if_eq MeetingRivalInTheTower_5
	compare VAR_RIVAL_AROUND_SANDSTONE, 2
	goto_if_eq MeetingRivalInTheTower_6
	msgbox MayLongTimeNoSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_5:
	msgbox MayHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_6:
	msgbox MayNotHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_10:
	msgbox BrendanHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_11:
	msgbox BrendanNotHappyToSee
	goto MeetingRivalInTheTower_1


BeginPartnerSetup::
	setvar VAR_FIRST_MON, 10
	setvar VAR_SECOND_MON, 11
	setvar VAR_THIRD_MON, 12
	message WhichShouldRivalChooseFirst
	waitmessage
	call RivalFirstPokemon
	message WhichShouldRivalChooseSecond
	waitmessage
	call RivalSecondPokemon
	message WhichShouldRivalChooseThird
	waitmessage
	call RivalThirdPokemon
	msgbox RivalUses, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BeginPartnerSetup_2
BeginPartnerSetup_1:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BeginPartnerSetup_5
	msgbox SpeakToBrendanAgain
BeginPartnerSetup_4:
	setvar VAR_TEMP_3, 0
	release
	end

BeginPartnerSetup_2:
	goto BeginPartnerSetupLoop
	goto BeginPartnerSetup_1

BeginPartnerSetup_5:
	msgbox SpeakToMayAgain
	goto BeginPartnerSetup_4


BeginPartnerSetupLoop::
	goto BeginPartnerSetup
	return


RivalFirstPokemon::
	call DynMultiPartner
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, RivalFirstPokemon_3
	case 1, RivalFirstPokemon_4
	case 2, RivalFirstPokemon_5
	case 3, RivalFirstPokemon_6
	case 4, RivalFirstPokemon_7
RivalFirstPokemon_1:
	return

RivalFirstPokemon_3:
	setvar VAR_FIRST_MON, 0
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto RivalFirstPokemon_1

RivalFirstPokemon_4:
	checkplayergender
	setvar VAR_FIRST_MON, 1
	compare VAR_RESULT, MALE
	goto_if_eq RivalFirstPokemon_8
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto RivalFirstPokemon_1

RivalFirstPokemon_5:
	setvar VAR_FIRST_MON, 2
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto RivalFirstPokemon_1

RivalFirstPokemon_6:
	setvar VAR_FIRST_MON, 3
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto RivalFirstPokemon_1

RivalFirstPokemon_7:
	setvar VAR_FIRST_MON, 4
	switch VAR_STARTER_MON
	case 0, RivalFirstPokemon_12
	case 1, RivalFirstPokemon_13
	case 2, RivalFirstPokemon_14
	goto RivalFirstPokemon_1

RivalFirstPokemon_8:
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto RivalFirstPokemon_1

RivalFirstPokemon_12:
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto RivalFirstPokemon_1

RivalFirstPokemon_13:
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto RivalFirstPokemon_1

RivalFirstPokemon_14:
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto RivalFirstPokemon_1


RivalSecondPokemon::
	call DynMultiPartner
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, RivalSecondPokemon_3
	case 1, RivalSecondPokemon_4
	case 2, RivalSecondPokemon_5
	case 3, RivalSecondPokemon_6
	case 4, RivalSecondPokemon_7
RivalSecondPokemon_1:
	compare VAR_FIRST_MON, VAR_SECOND_MON
	goto_if_eq RivalSecondPokemon_9
RivalSecondPokemon_8:
	return

RivalSecondPokemon_3:
	setvar VAR_SECOND_MON, 0
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto RivalSecondPokemon_1

RivalSecondPokemon_4:
	checkplayergender
	setvar VAR_SECOND_MON, 1
	compare VAR_RESULT, MALE
	goto_if_eq RivalSecondPokemon_11
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto RivalSecondPokemon_1

RivalSecondPokemon_5:
	setvar VAR_SECOND_MON, 2
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto RivalSecondPokemon_1

RivalSecondPokemon_6:
	setvar VAR_SECOND_MON, 3
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto RivalSecondPokemon_1

RivalSecondPokemon_7:
	setvar VAR_SECOND_MON, 4
	switch VAR_STARTER_MON
	case 0, RivalSecondPokemon_15
	case 1, RivalSecondPokemon_16
	case 2, RivalSecondPokemon_17
	goto RivalSecondPokemon_1

RivalSecondPokemon_9:
	goto InvalidSecondMon
	goto RivalSecondPokemon_8

RivalSecondPokemon_11:
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto RivalSecondPokemon_1

RivalSecondPokemon_15:
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto RivalSecondPokemon_1

RivalSecondPokemon_16:
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto RivalSecondPokemon_1

RivalSecondPokemon_17:
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto RivalSecondPokemon_1


InvalidSecondMon::
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidSecondMon_2
	msgbox RivalMonChosen
	message WhichOneIChooseSecond
InvalidSecondMon_1:
	waitmessage
	goto RivalSecondPokemon
	return

InvalidSecondMon_2:
	waitse
	playse SE_FAILURE
	msgbox MonAlreadyChosen
	message WhichShouldRivalChooseSecond
	goto InvalidSecondMon_1


RivalThirdPokemon::
	call DynMultiPartner
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, RivalThirdPokemon_3
	case 1, RivalThirdPokemon_4
	case 2, RivalThirdPokemon_5
	case 3, RivalThirdPokemon_6
	case 4, RivalThirdPokemon_7
RivalThirdPokemon_1:
	compare VAR_FIRST_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
	compare VAR_SECOND_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
RivalThirdPokemon_8:
	return

RivalThirdPokemon_3:
	setvar VAR_THIRD_MON, 0
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto RivalThirdPokemon_1

RivalThirdPokemon_4:
	checkplayergender
	setvar VAR_THIRD_MON, 1
	compare VAR_RESULT, MALE
	goto_if_eq RivalThirdPokemon_13
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto RivalThirdPokemon_1

RivalThirdPokemon_5:
	setvar VAR_THIRD_MON, 2
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto RivalThirdPokemon_1

RivalThirdPokemon_6:
	setvar VAR_THIRD_MON, 3
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto RivalThirdPokemon_1

RivalThirdPokemon_7:
	setvar VAR_THIRD_MON, 4
	switch VAR_STARTER_MON
	case 0, RivalThirdPokemon_17
	case 1, RivalThirdPokemon_18
	case 2, RivalThirdPokemon_19
	goto RivalThirdPokemon_1

RivalThirdPokemon_9:
	goto InvalidThirdMon
	goto RivalThirdPokemon_8

RivalThirdPokemon_13:
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto RivalThirdPokemon_1

RivalThirdPokemon_17:
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto RivalThirdPokemon_1

RivalThirdPokemon_18:
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto RivalThirdPokemon_1

RivalThirdPokemon_19:
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto RivalThirdPokemon_1


InvalidThirdMon::
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidThirdMon_2
	msgbox RivalMonChosen
	message WhichOneIChooseThird
InvalidThirdMon_1:
	waitmessage
	goto RivalThirdPokemon
	return

InvalidThirdMon_2:
	waitse
	playse SE_FAILURE
	msgbox MonAlreadyChosen
	message WhichShouldRivalChooseThird
	goto InvalidThirdMon_1


DynMultiPartner::
	compare VAR_FIRST_MON, 0
	goto_if_eq DynMultiPartner_2
	compare VAR_SECOND_MON, 0
	goto_if_eq DynMultiPartner_2
	dynmultipush DynMultiPartner_Text_1, 0
DynMultiPartner_1:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq DynMultiPartner_8
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_22
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_22
	dynmultipush DynMultiPartner_Text_5, 1
DynMultiPartner_7:
	compare VAR_FIRST_MON, 2
	goto_if_eq DynMultiPartner_12
	compare VAR_SECOND_MON, 2
	goto_if_eq DynMultiPartner_12
	dynmultipush DynMultiPartner_Text_7, 2
DynMultiPartner_11:
	compare VAR_FIRST_MON, 3
	goto_if_eq DynMultiPartner_28
	compare VAR_SECOND_MON, 3
	goto_if_eq DynMultiPartner_28
	dynmultipush DynMultiPartner_Text_9, 3
DynMultiPartner_27:
	switch VAR_STARTER_MON
	case 0, DynMultiPartner_35
	case 1, DynMultiPartner_36
	case 2, DynMultiPartner_37
DynMultiPartner_33:
	return

DynMultiPartner_2:
	dynmultipush DynMultiPartner_Text_0, 0
	goto DynMultiPartner_1

DynMultiPartner_8:
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_17
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_17
	dynmultipush DynMultiPartner_Text_3, 1
	goto DynMultiPartner_7

DynMultiPartner_12:
	dynmultipush DynMultiPartner_Text_6, 2
	goto DynMultiPartner_11

DynMultiPartner_17:
	dynmultipush DynMultiPartner_Text_2, 1
	goto DynMultiPartner_7

DynMultiPartner_22:
	dynmultipush DynMultiPartner_Text_4, 1
	goto DynMultiPartner_7

DynMultiPartner_28:
	dynmultipush DynMultiPartner_Text_8, 3
	goto DynMultiPartner_27

DynMultiPartner_35:
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_38
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_38
	dynmultipush DynMultiPartner_Text_11, 4
	goto DynMultiPartner_33

DynMultiPartner_36:
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_43
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_43
	dynmultipush DynMultiPartner_Text_13, 4
	goto DynMultiPartner_33

DynMultiPartner_37:
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_48
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_48
	dynmultipush DynMultiPartner_Text_15, 4
	goto DynMultiPartner_33

DynMultiPartner_38:
	dynmultipush DynMultiPartner_Text_10, 4
	goto DynMultiPartner_33

DynMultiPartner_43:
	dynmultipush DynMultiPartner_Text_12, 4
	goto DynMultiPartner_33

DynMultiPartner_48:
	dynmultipush DynMultiPartner_Text_14, 4
	goto DynMultiPartner_33


Tower2FRival:
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

TestFollower_Text_0:
	.string "Let's go!$"

MakeNewTeam_Text_0:
	.string "{RIVAL}: Okay.\nLet's go then!$"

MakeNewTeam_Setup_Text_0:
	.string "Which Pokémon should I\nlead with?$"

MakeNewTeam_Setup_Text_1:
	.string "Which one should be my\nsecond Pokémon?$"

MakeNewTeam_Setup_Text_2:
	.string "And which one should I pick\nas my third Pokémon?$"

DynMultiPartner_Text_0:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Staraptor$"

DynMultiPartner_Text_1:
	.string "Staraptor$"

DynMultiPartner_Text_2:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gallade$"

DynMultiPartner_Text_3:
	.string "Gallade$"

DynMultiPartner_Text_4:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gardevoir$"

DynMultiPartner_Text_5:
	.string "Gardevoir$"

DynMultiPartner_Text_6:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Clodsire$"

DynMultiPartner_Text_7:
	.string "Clodsire$"

DynMultiPartner_Text_8:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Crustle$"

DynMultiPartner_Text_9:
	.string "Crustle$"

DynMultiPartner_Text_10:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Blaziken$"

DynMultiPartner_Text_11:
	.string "Blaziken$"

DynMultiPartner_Text_12:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Empoleon$"

DynMultiPartner_Text_13:
	.string "Empoleon$"

DynMultiPartner_Text_14:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Decidueye$"

DynMultiPartner_Text_15:
	.string "Decidueye$"

Tr2_2F_Man3Intro::
	.string "You two must be pretty good if Korrina\n"
	.string "is letting you inside this tower.\p"
	.string "But are you good enough to defeat us?$"

Tr2_2F_Woman5Intro::
	.string "Working together during partner battles\n"
	.string "is essential.\p"
	.string "Let's see how well you do!$"

Tr2_2F_Man3Lost::
	.string "Excellent teamwork!$"

Tr2_2F_Woman5Lost::
	.string "Whoa!\n"
	.string "You two are good!$"

Tr2_2F_Woman5_PosBat::
	.string "There are still many floors left that\n"
	.string "are sure to test your skills.\p"
	.string "I hope you're prepared.$"

Tr2_2F_Man3_PosBat::
	.string "I see now why Korrina has decided to\n"
	.string "grant you access.$"

Tr1_2F_PsychicIntro::
	.string "Behold the terrifying power of\n"
	.string "Psychic Pokémon!$"

Tr1_2F_PsychicLost::
	.string "What terrifying power!$"

Tr1_2F_Man5Intro::
	.string "Let's get this show on the road!$"

Tr1_2F_Man5Lost::
	.string "Couldn't make enough noise…$"

Tr1_2F_Man5_PosBat::
	.string "Keep your spirit up!\n"
	.string "The way forwards will be perilous.$"

Tr1_2F_Psychic_PosBat::
	.string "I can peer into people's future, but\n"
	.string "yours is far too tumultuous to make\l"
	.string "any heads or tails out of it.$"

AT_2F_DefeatedTrainer_Text::
	.string "This place is far too hardcore\n"
	.string "for me…$"

OkayRivalLetsGo::
	.string "Okay then, let's go!$"

WantMeToUse::
	.string "So, you want me to use {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}?$"

CurrentlyUsing::
	.string "{RIVAL}: My current team is {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Want me to change Pokémon?$"

KeepYouHealthy::
	.string "{RIVAL}: Don't worry, I'll keep your\n"
	.string "Pokémon in perfect health.$"

LetsFindKorrina::
	.string "{RIVAL}: We made it to the top!\n"
	.string "Let's go find Korrina!$"

RivalMonChosen::
	.string "You already picked that Pokémon once!\n"
	.string "I can't use it twice.$"

WhichOneIChooseSecond::
	.string "Which one should be my\n"
	.string "second Pokémon?$"

WhichOneIChooseThird::
	.string "Which one should be my\n"
	.string "third Pokémon?$"

InitialPartnerSetup::
	.string "{COLOR RED}{SHADOW LIGHT_RED}While inside the tower, all trainer\n"
	.string "battles are partner battles.\p"
	.string "You will each use 3 Pokémon from your\n"
	.string "team, with your party consisting of\l"
	.string "the first 3 Pokémon in your team.\p"
	.string "Before you begin, you must choose\n"
	.string "a party for {RIVAL}.$"

RivalUses::
	.string "{COLOR RED}{SHADOW LIGHT_RED}{RIVAL} currently uses {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Is this correct?$"

SpeakToMayAgain::
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change her current team.$"

SpeakToBrendanAgain::
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change his current team.$"

WhichShouldRivalChooseFirst::
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s first\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseSecond::
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s second\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseThird::
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s third\n"
	.string "Pokémon be?$"

MonAlreadyChosen::
	.string "{COLOR RED}{SHADOW LIGHT_RED}That Pokémon has already been\n"
	.string "chosen.$"

MayHappyToSee::
	.string "{RIVAL}: Oh, hi again {PLAYER}!\p"
	.string "Didn't expect to see you here\n"
	.string "so soon.\p"
	.string "I assume you're here to climb the tower\n"
	.string "under Korrina's instructions as well?\p"
	.string "In that case, we should totally\n"
	.string "team up!\p"
	.string "Some of these trainers are real tough\n"
	.string "and many of them have also teamed up,\l"
	.string "which means that we should too.\p"
	.string "Don't worry though.\p"
	.string "I won't interfere with your wild\n"
	.string "Pokémon battles so you can catch any\l"
	.string "new Pokémon you see!\p"
	.string "I'll also make sure that your Pokémon\n"
	.string "are all topped up after every battle.\p"
	.string "Okay! with that out of the way, let's\n"
	.string "get cracking with this tower!\p"
	.string "Lead the way!$"

MayNotHappyToSee::
	.string "{RIVAL}: Oh, hey again {PLAYER}.\p"
	.string "Didn't expect to see you here\n"
	.string "so soon.\p"
	.string "I assume you're here to climb the tower\n"
	.string "under Korrina's instructions as well?\p"
	.string "In that case, I think we should\n"
	.string "team up.\p"
	.string "Some of these trainers are real tough\n"
	.string "and many of them have also teamed up,\l"
	.string "which means that we should too.\p"
	.string "Don't worry though.\p"
	.string "I won't interfere with your wild\n"
	.string "Pokémon battles so you can catch any\l"
	.string "new Pokémon you see.\p"
	.string "I'll also make sure that your Pokémon\n"
	.string "are all topped up after every battle.\p"
	.string "Here, how about you take the lead?$"

MayLongTimeNoSee::
	.string "{RIVAL}: Oh, hi {PLAYER}!\p"
	.string "Didn't expect to bump into you here.\p"
	.string "I assume you're here to climb the tower\n"
	.string "under Korrina's instructions as well?\p"
	.string "In that case, we should totally\n"
	.string "team up!\p"
	.string "Some of these trainers are real tough\n"
	.string "and many of them have also teamed up,\l"
	.string "which means that we should too.\p"
	.string "Don't worry though.\p"
	.string "I won't interfere with your wild\n"
	.string "Pokémon battles so you can catch any\l"
	.string "new Pokémon you see!\p"
	.string "I'll also make sure that your Pokémon\n"
	.string "are all topped up after every battle.\p"
	.string "Okay! with that out of the way, let's\n"
	.string "get cracking with this tower!\p"
	.string "Lead the way!$"

BrendanHappyToSee::
	.string "{RIVAL}: Oh, hey {PLAYER}!\p"
	.string "Didn't expect to bump into you so\n"
	.string "soon after our last reunion.\p"
	.string "I'm guessing Korrina sent you here\n"
	.string "to climb the tower as well?\p"
	.string "In that case, how about we team up?\n"
	.string "Some of these trainers are real tough\l"
	.string "and seeing how they've teamed up,\l"
	.string "it makes sense we do the same.\p"
	.string "Don't worry though.\p"
	.string "I won't get in the way of your wild\n"
	.string "Pokémon battles so you can catch any\l"
	.string "new Pokémon you see.\p"
	.string "I'll also make sure that your Pokémon\n"
	.string "are healthy after every battle.\p"
	.string "Okay. With that out of the way,\n"
	.string "let's get on top of this tower!\p"
	.string "I'll follow your lead.$"

BrendanNotHappyToSee::
	.string "{RIVAL}: Oh, hey {PLAYER}.\p"
	.string "You got here way earlier than\n"
	.string "I expected.\p"
	.string "I'm guessing Korrina sent you here\n"
	.string "to climb the tower as well?\p"
	.string "In that case, would you mind teaming\n"
	.string "up with me?\p"
	.string "Some of these trainers are real tough\n"
	.string "and seeing how they've teamed up,\l"
	.string "it makes sense we do the same.\p"
	.string "Don't worry though.\p"
	.string "I won't get in the way of your wild\n"
	.string "Pokémon battles so you can catch any\l"
	.string "new Pokémon you see.\p"
	.string "I'll also make sure that your Pokémon\n"
	.string "are healthy after every battle.\p"
	.string "Okay. With that out of the way,\n"
	.string "let's get on top of this tower!\p"
	.string "I'll follow your lead.$"

BrendanLongTimeNoSee::
	.string "{RIVAL}: Oh, hey {PLAYER}!\p"
	.string "Didn't expect to see you here\n"
	.string "so soon.\p"
	.string "I'm guessing Korrina sent you here\n"
	.string "to climb the tower as well?\p"
	.string "In that case, how about we team up?\n"
	.string "Some of these trainers are real tough\l"
	.string "and seeing how they've teamed up,\l"
	.string "it makes sense we do the same.\p"
	.string "Don't worry though.\p"
	.string "I won't get in the way of your wild\n"
	.string "Pokémon battles so you can catch any\l"
	.string "new Pokémon you see.\p"
	.string "I'll also make sure that your Pokémon\n"
	.string "are healthy after every battle.\p"
	.string "Okay. With that out of the way,\n"
	.string "let's get on top of this tower!\p"
	.string "I'll follow your lead.$"

YoureBackMay::
	.string "{RIVAL}: I've been waiting here like I\n"
	.string "said I would.\p"
	.string "Now, let's get cracking with this tower!$"

YoureBackBrendan::
	.string "{RIVAL}: You're back!\p"
	.string "Now, let's get on top of this tower!$"
