SkyPillar_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRivalPartner
	.byte 0


SetupRivalPartner::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SetupRivalPartner_2
	goto_if_set FLAG_BRENDAN_COSTUME_CHANGE, SetupRivalPartner_8
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_24
	case 1, SetupRivalPartner_25
	case 2, SetupRivalPartner_26
SetupRivalPartner_1:
	end

SetupRivalPartner_2:
	goto_if_set FLAG_MAY_COSTUME_CHANGE, SetupRivalPartner_5
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_16
	case 1, SetupRivalPartner_17
	case 2, SetupRivalPartner_18
	goto SetupRivalPartner_1

SetupRivalPartner_5:
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_12
	case 1, SetupRivalPartner_13
	case 2, SetupRivalPartner_14
	goto SetupRivalPartner_1

SetupRivalPartner_8:
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_20
	case 1, SetupRivalPartner_21
	case 2, SetupRivalPartner_22
	goto SetupRivalPartner_1

SetupRivalPartner_12:
	setvar VAR_TOWER_PARTNER, 0
	goto SetupRivalPartner_1

SetupRivalPartner_13:
	setvar VAR_TOWER_PARTNER, 1
	goto SetupRivalPartner_1

SetupRivalPartner_14:
	setvar VAR_TOWER_PARTNER, 2
	goto SetupRivalPartner_1

SetupRivalPartner_16:
	setvar VAR_TOWER_PARTNER, 3
	goto SetupRivalPartner_1

SetupRivalPartner_17:
	setvar VAR_TOWER_PARTNER, 4
	goto SetupRivalPartner_1

SetupRivalPartner_18:
	setvar VAR_TOWER_PARTNER, 5
	goto SetupRivalPartner_1

SetupRivalPartner_20:
	setvar VAR_TOWER_PARTNER, 6
	goto SetupRivalPartner_1

SetupRivalPartner_21:
	setvar VAR_TOWER_PARTNER, 7
	goto SetupRivalPartner_1

SetupRivalPartner_22:
	setvar VAR_TOWER_PARTNER, 8
	goto SetupRivalPartner_1

SetupRivalPartner_24:
	setvar VAR_TOWER_PARTNER, 9
	goto SetupRivalPartner_1

SetupRivalPartner_25:
	setvar VAR_TOWER_PARTNER, 10
	goto SetupRivalPartner_1

SetupRivalPartner_26:
	setvar VAR_TOWER_PARTNER, 11
	goto SetupRivalPartner_1


Tower_Tr1_LeftTrigger::
	checktrainerflag TRAINER_AT2F_MAN3
	goto_if 1, Tower_Tr1_LeftTrigger_2
	setvar VAR_TEMP_2, 1
	goto Tower_Tr1_Battle
	return

Tower_Tr1_LeftTrigger_2:
	release
	end


Tower_Tr1_RightTrigger::
	checktrainerflag TRAINER_AT2F_MAN3
	goto_if 1, Tower_Tr1_RightTrigger_2
	setvar VAR_TEMP_2, 2
	goto Tower_Tr1_Battle
	return

Tower_Tr1_RightTrigger_2:
	release
	end


Tower_Tr1_Battle::
	lock
	playbgm MUS_ENCOUNTER_COOL, FALSE
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_Tr1_Battle_2
	applymovement 1, Walk1Left
Tower_Tr1_Battle_1:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox Tr1_Man3Intro
	closemessage
	playbgm MUS_ENCOUNTER_COOL, FALSE
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_Tr1_Battle_6
	applymovement 2, Walk2Right
Tower_Tr1_Battle_5:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr1_Woman5Intro
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_Tr1_Battle_11
	case 1, Tower_Tr1_Battle_12
	case 2, Tower_Tr1_Battle_13
	case 3, Tower_Tr1_Battle_14
	case 4, Tower_Tr1_Battle_15
	case 5, Tower_Tr1_Battle_16
	case 6, Tower_Tr1_Battle_17
	case 7, Tower_Tr1_Battle_18
	case 8, Tower_Tr1_Battle_19
	case 9, Tower_Tr1_Battle_20
	case 10, Tower_Tr1_Battle_21
	case 11, Tower_Tr1_Battle_22
Tower_Tr1_Battle_9:
	switch VAR_RESULT
	case 1, Tower_Tr1_Battle_25
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_Tr1_Battle_2:
	applymovement 1, Walk2Left
	goto Tower_Tr1_Battle_1

Tower_Tr1_Battle_6:
	applymovement 2, Walk1Right
	goto Tower_Tr1_Battle_5

Tower_Tr1_Battle_11:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_MAY_ORAS_TORCHIC, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_12:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_MAY_ORAS_PIPLUP, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_13:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_MAY_ORAS_ROWLET, TRAINER_BACK_PIC_MAY_ORAS
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_14:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_MAY_TORCHIC, TRAINER_BACK_PIC_MAY
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_15:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_MAY_PIPLUP, TRAINER_BACK_PIC_MAY
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_16:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_MAY_ROWLET, TRAINER_BACK_PIC_MAY
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_17:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_BRENDAN_ORAS_TORCHIC, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_18:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_BRENDAN_ORAS_PIPLUP, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_19:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_BRENDAN_ORAS_ROWLET, TRAINER_BACK_PIC_BRENDAN_ORAS
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_20:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_BRENDAN_TORCHIC, TRAINER_BACK_PIC_BRENDAN
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_21:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_BRENDAN_PIPLUP, TRAINER_BACK_PIC_BRENDAN
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_22:
	multi_2_vs_2 TRAINER_AT2F_MAN3, Tr1_Man3Lost, TRAINER_AT2F_WOMAN5, Tr1_Woman5Lost, PARTNER_BRENDAN_ROWLET, TRAINER_BACK_PIC_BRENDAN
	goto Tower_Tr1_Battle_9

Tower_Tr1_Battle_25:
	settrainerflag TRAINER_AT2F_MAN3
	settrainerflag TRAINER_AT2F_WOMAN5
	release
	end


SetUpPlayerParty::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	setflag FLAG_DISABLE_PARTNER_SWITCHING
	return


Walk1Left:
	walk_left
	step_end

Walk2Left:
	walk_left
	walk_left
	step_end

Walk3Left:
	walk_left
	walk_left
	walk_left
	step_end

Walk4Left:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk1Right:
	walk_right
	step_end

Walk2Right:
	walk_right
	walk_right
	step_end

Walk3Right:
	walk_right
	walk_right
	walk_right
	step_end

Walk4Right:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk1Up:
	walk_up
	step_end

Walk2Up:
	walk_up
	walk_up
	step_end

Walk3Up:
	walk_up
	walk_up
	walk_up
	step_end

Walk4Up:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk1Down:
	walk_down
	step_end

Walk2Down:
	walk_down
	walk_down
	step_end

Walk3Down:
	walk_down
	walk_down
	walk_down
	step_end

Walk4Down:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Tr1_Man3Intro::
	.string "I'm stronk!$"

Tr1_Woman5Intro::
	.string "I'm stronker!$"

Tr1_Man3Lost::
	.string "Me lose!$"

Tr1_Woman5Lost::
	.string "Me lose stronker!$"
