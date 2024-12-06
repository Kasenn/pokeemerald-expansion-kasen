SkyPillar_2F_MapScripts::
# 2 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetRivalTowerLoc
# 3 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SkyPillar_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SkyPillar_2F/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, MeetingRivalInTheTower
# 5 "data/maps/SkyPillar_2F/scripts.pory"
	map_script_2 VAR_TEMP_0, 2, UnitedWithRival
	.2byte 0


SetRivalTowerLoc::
# 10 "data/maps/SkyPillar_2F/scripts.pory"
	checkfollower
# 11 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetRivalTowerLoc_1
	return

SetRivalTowerLoc_1:
# 12 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, SetRivalTowerLoc_3
# 15 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_REUNITE_WITH_RIVAL, SetRivalTowerLoc_4
# 20 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 21 "data/maps/SkyPillar_2F/scripts.pory"
	setobjectxyperm 6, 12, 3
# 22 "data/maps/SkyPillar_2F/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	return

SetRivalTowerLoc_3:
# 13 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

SetRivalTowerLoc_4:
# 16 "data/maps/SkyPillar_2F/scripts.pory"
	clearflag FLAG_REUNITE_WITH_RIVAL
# 17 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 2
	return


AT_2F_Tr2_Left::
# 28 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_TR2_MAN3
	goto_if 1, AT_2F_Tr2_Left_2
# 32 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 33 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr2_Battle
	return

AT_2F_Tr2_Left_2:
# 29 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


AT_2F_Tr2_Right::
# 36 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_TR2_MAN3
	goto_if 1, AT_2F_Tr2_Right_2
# 40 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 41 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr2_Battle
	return

AT_2F_Tr2_Right_2:
# 37 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tower_2F_Tr2_Battle::
# 44 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 45 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 46 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 47 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 49 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr2_Battle_2
# 54 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 1, Walk1Left
Tower_2F_Tr2_Battle_1:
# 56 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 58 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Man3Intro
# 59 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 60 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 61 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 62 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 64 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr2_Battle_6
# 69 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 2, Walk2Right
Tower_2F_Tr2_Battle_5:
# 71 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 73 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Woman5Intro
# 74 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 75 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 76 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, Tower_2F_Tr2_Battle_11
# 78 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr2_Battle_12
# 80 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, Tower_2F_Tr2_Battle_13
# 82 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, Tower_2F_Tr2_Battle_14
# 84 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, Tower_2F_Tr2_Battle_15
# 86 "data/maps/SkyPillar_2F/scripts.pory"
	case 5, Tower_2F_Tr2_Battle_16
# 88 "data/maps/SkyPillar_2F/scripts.pory"
	case 6, Tower_2F_Tr2_Battle_17
# 90 "data/maps/SkyPillar_2F/scripts.pory"
	case 7, Tower_2F_Tr2_Battle_18
# 92 "data/maps/SkyPillar_2F/scripts.pory"
	case 8, Tower_2F_Tr2_Battle_19
# 94 "data/maps/SkyPillar_2F/scripts.pory"
	case 9, Tower_2F_Tr2_Battle_20
# 96 "data/maps/SkyPillar_2F/scripts.pory"
	case 10, Tower_2F_Tr2_Battle_21
# 98 "data/maps/SkyPillar_2F/scripts.pory"
	case 11, Tower_2F_Tr2_Battle_22
Tower_2F_Tr2_Battle_9:
# 101 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr2_Battle_25
# 108 "data/maps/SkyPillar_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/SkyPillar_2F/scripts.pory"
	special SetCB2WhiteOut
# 110 "data/maps/SkyPillar_2F/scripts.pory"
	waitstate
	return

Tower_2F_Tr2_Battle_2:
# 51 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 1, Walk2Left
	goto Tower_2F_Tr2_Battle_1

Tower_2F_Tr2_Battle_6:
# 66 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 2, Walk1Right
	goto Tower_2F_Tr2_Battle_5

Tower_2F_Tr2_Battle_11:
# 77 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_12:
# 79 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_13:
# 81 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_14:
# 83 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_15:
# 85 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_16:
# 87 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_17:
# 89 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_18:
# 91 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_19:
# 93 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_20:
# 95 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_21:
# 97 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_22:
# 99 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_25:
# 103 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_MAN3
# 104 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_WOMAN5
# 105 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tr2_2F_Woman5::
# 132 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Woman5_PosBat, MSGBOX_NPC
	end


Tr2_2F_Man3::
# 142 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Man3_PosBat, MSGBOX_NPC
	end


AT_2F_Tr1_Left::
# 155 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	goto_if 1, AT_2F_Tr1_Left_2
# 159 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 160 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Left_2:
# 156 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


AT_2F_Tr1_Right::
# 163 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	goto_if 1, AT_2F_Tr1_Right_2
# 167 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 168 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Right_2:
# 164 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tower_2F_Tr1_Battle::
# 171 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 172 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 173 "data/maps/SkyPillar_2F/scripts.pory"
	special SavePlayerParty
# 174 "data/maps/SkyPillar_2F/scripts.pory"
	special SetPlayerParty
# 175 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 176 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 177 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 178 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 179 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr1_Battle_2
Tower_2F_Tr1_Battle_1:
# 182 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 183 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 184 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_PsychicIntro
# 185 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 186 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 187 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 188 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 189 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 190 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 191 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Tower_2F_Tr1_Battle_5
Tower_2F_Tr1_Battle_4:
# 194 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 195 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 196 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Man5Intro
# 197 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 198 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 199 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, Tower_2F_Tr1_Battle_9
# 201 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr1_Battle_10
# 203 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, Tower_2F_Tr1_Battle_11
# 205 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, Tower_2F_Tr1_Battle_12
# 207 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, Tower_2F_Tr1_Battle_13
# 209 "data/maps/SkyPillar_2F/scripts.pory"
	case 5, Tower_2F_Tr1_Battle_14
# 211 "data/maps/SkyPillar_2F/scripts.pory"
	case 6, Tower_2F_Tr1_Battle_15
# 213 "data/maps/SkyPillar_2F/scripts.pory"
	case 7, Tower_2F_Tr1_Battle_16
# 215 "data/maps/SkyPillar_2F/scripts.pory"
	case 8, Tower_2F_Tr1_Battle_17
# 217 "data/maps/SkyPillar_2F/scripts.pory"
	case 9, Tower_2F_Tr1_Battle_18
# 219 "data/maps/SkyPillar_2F/scripts.pory"
	case 10, Tower_2F_Tr1_Battle_19
# 221 "data/maps/SkyPillar_2F/scripts.pory"
	case 11, Tower_2F_Tr1_Battle_20
Tower_2F_Tr1_Battle_7:
# 224 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr1_Battle_23
# 231 "data/maps/SkyPillar_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 232 "data/maps/SkyPillar_2F/scripts.pory"
	special SetCB2WhiteOut
# 233 "data/maps/SkyPillar_2F/scripts.pory"
	waitstate
	return

Tower_2F_Tr1_Battle_2:
# 180 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 4, Walk1Left
	goto Tower_2F_Tr1_Battle_1

Tower_2F_Tr1_Battle_5:
# 192 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 5, Walk1Right
	goto Tower_2F_Tr1_Battle_4

Tower_2F_Tr1_Battle_9:
# 200 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_10:
# 202 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_11:
# 204 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_12:
# 206 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_13:
# 208 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_14:
# 210 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_15:
# 212 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_16:
# 214 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_17:
# 216 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_18:
# 218 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_19:
# 220 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_20:
# 222 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_23:
# 226 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_PSYCHIC
# 227 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_MAN5
# 228 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tr1_2F_Man5::
# 251 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Man5_PosBat, MSGBOX_NPC
	end


Tr1_2F_Psychic::
# 260 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Psychic_PosBat, MSGBOX_NPC
	end


AT_2F_DefeatedTrainer::
# 274 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox AT_2F_DefeatedTrainer_Text, MSGBOX_NPC
	end


TestFollower::
# 285 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 286 "data/maps/SkyPillar_2F/scripts.pory"
	faceplayer
# 291 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox TestFollower_Text_0
# 292 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 293 "data/maps/SkyPillar_2F/scripts.pory"
	setfollower 6, FOLLOWER_FLAG_ALL, MakeNewTeam
# 294 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


MakeNewTeam::
# 299 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 300 "data/maps/SkyPillar_2F/scripts.pory"
	facefollower
# 301 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_FIRST_MON
# 302 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_3
# 304 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_4
# 312 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_5
# 314 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_6
# 316 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_7
MakeNewTeam_1:
# 326 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_SECOND_MON
# 327 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_10
# 329 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_11
# 337 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_12
# 339 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_13
# 341 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_14
MakeNewTeam_8:
# 351 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_THIRD_MON
# 352 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_24
# 354 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_25
# 362 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_26
# 364 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_27
# 366 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_28
MakeNewTeam_22:
# 376 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox CurrentlyUsing, MSGBOX_YESNO
# 377 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_37
# 381 "data/maps/SkyPillar_2F/scripts.pory"
	goto MakeNewTeam_Setup
	return

MakeNewTeam_3:
# 303 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto MakeNewTeam_1

MakeNewTeam_4:
# 305 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 306 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_15
# 310 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto MakeNewTeam_1

MakeNewTeam_5:
# 313 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto MakeNewTeam_1

MakeNewTeam_6:
# 315 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto MakeNewTeam_1

MakeNewTeam_7:
# 317 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 318 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_19
# 320 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_20
# 322 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_21
	goto MakeNewTeam_1

MakeNewTeam_10:
# 328 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto MakeNewTeam_8

MakeNewTeam_11:
# 330 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 331 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_29
# 335 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto MakeNewTeam_8

MakeNewTeam_12:
# 338 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto MakeNewTeam_8

MakeNewTeam_13:
# 340 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto MakeNewTeam_8

MakeNewTeam_14:
# 342 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 343 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_33
# 345 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_34
# 347 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_35
	goto MakeNewTeam_8

MakeNewTeam_15:
# 307 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto MakeNewTeam_1

MakeNewTeam_19:
# 319 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto MakeNewTeam_1

MakeNewTeam_20:
# 321 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto MakeNewTeam_1

MakeNewTeam_21:
# 323 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto MakeNewTeam_1

MakeNewTeam_24:
# 353 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto MakeNewTeam_22

MakeNewTeam_25:
# 355 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 356 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_39
# 360 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto MakeNewTeam_22

MakeNewTeam_26:
# 363 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto MakeNewTeam_22

MakeNewTeam_27:
# 365 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto MakeNewTeam_22

MakeNewTeam_28:
# 367 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 368 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_43
# 370 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_44
# 372 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_45
	goto MakeNewTeam_22

MakeNewTeam_29:
# 332 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto MakeNewTeam_8

MakeNewTeam_33:
# 344 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto MakeNewTeam_8

MakeNewTeam_34:
# 346 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto MakeNewTeam_8

MakeNewTeam_35:
# 348 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto MakeNewTeam_8

MakeNewTeam_37:
# 378 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MakeNewTeam_Text_0, MSGBOX_NPC
	end

MakeNewTeam_39:
# 357 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto MakeNewTeam_22

MakeNewTeam_43:
# 369 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto MakeNewTeam_22

MakeNewTeam_44:
# 371 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto MakeNewTeam_22

MakeNewTeam_45:
# 373 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto MakeNewTeam_22


BeginPartnerSetupLoop2::
# 384 "data/maps/SkyPillar_2F/scripts.pory"
	goto MakeNewTeam_Setup
	return


MakeNewTeam_Setup::
# 387 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 10
# 388 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 11
# 389 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 12
# 390 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_0
# 391 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 392 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalFirstPokemon
# 393 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_1
# 394 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 395 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalSecondPokemon
# 396 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_2
# 397 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 398 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalThirdPokemon
# 399 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox WantMeToUse, MSGBOX_YESNO
# 400 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_Setup_2
MakeNewTeam_Setup_1:
# 403 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox OkayRivalLetsGo, MSGBOX_NPC
# 404 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

MakeNewTeam_Setup_2:
# 401 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetupLoop2
	goto MakeNewTeam_Setup_1


UnitedWithRival::
# 436 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 437 "data/maps/SkyPillar_2F/scripts.pory"
	delay 24
# 438 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject 6, DIR_NORTH
# 439 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_PIN
# 440 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 441 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 442 "data/maps/SkyPillar_2F/scripts.pory"
	delay 48
# 443 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 444 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq UnitedWithRival_2
# 448 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox YoureBackBrendan
UnitedWithRival_1:
# 450 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 451 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 452 "data/maps/SkyPillar_2F/scripts.pory"
	setflag FLAG_PARTNER_HEALS
# 453 "data/maps/SkyPillar_2F/scripts.pory"
	special HealPlayerParty
# 454 "data/maps/SkyPillar_2F/scripts.pory"
	setfollower 6, FOLLOWER_FLAG_ALL, MakeNewTeam
# 455 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

UnitedWithRival_2:
# 445 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox YoureBackMay
	goto UnitedWithRival_1


MeetingRivalInTheTower::
# 460 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 461 "data/maps/SkyPillar_2F/scripts.pory"
	delay 24
# 462 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_PIN
# 463 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject 6, DIR_WEST
# 464 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 465 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 466 "data/maps/SkyPillar_2F/scripts.pory"
	delay 48
# 467 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 6, Tower2FRival
# 468 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeetingRivalInTheTower_2
# 478 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, MeetingRivalInTheTower_8
# 482 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox BrendanNotHappyToSee
MeetingRivalInTheTower_1:
# 485 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 486 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 487 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 488 "data/maps/SkyPillar_2F/scripts.pory"
	setflag FLAG_PARTNER_HEALS
# 489 "data/maps/SkyPillar_2F/scripts.pory"
	special HealPlayerParty
# 490 "data/maps/SkyPillar_2F/scripts.pory"
	setfollower 6, FOLLOWER_FLAG_ALL, MakeNewTeam
# 491 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox InitialPartnerSetup
# 492 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetup
	return

MeetingRivalInTheTower_2:
# 470 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, MeetingRivalInTheTower_5
# 474 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MayNotHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_5:
# 471 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MayHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_8:
# 479 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox BrendanHappyToSee
	goto MeetingRivalInTheTower_1


BeginPartnerSetup::
# 496 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 10
# 497 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 11
# 498 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 12
# 499 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseFirst
# 500 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 501 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalFirstPokemon
# 502 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseSecond
# 503 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 504 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalSecondPokemon
# 505 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseThird
# 506 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 507 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalThirdPokemon
# 508 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalUses, MSGBOX_YESNO
# 509 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BeginPartnerSetup_2
BeginPartnerSetup_1:
# 512 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 513 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BeginPartnerSetup_5
# 517 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SpeakToBrendanAgain
BeginPartnerSetup_4:
# 519 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_3, 0
# 520 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

BeginPartnerSetup_2:
# 510 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetupLoop
	goto BeginPartnerSetup_1

BeginPartnerSetup_5:
# 514 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SpeakToMayAgain
	goto BeginPartnerSetup_4


BeginPartnerSetupLoop::
# 524 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetup
	return


RivalFirstPokemon::
# 528 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 529 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 530 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 531 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalFirstPokemon_3
# 534 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalFirstPokemon_4
# 543 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalFirstPokemon_5
# 546 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalFirstPokemon_6
# 549 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalFirstPokemon_7
RivalFirstPokemon_1:
	return

RivalFirstPokemon_3:
# 532 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 0
# 533 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto RivalFirstPokemon_1

RivalFirstPokemon_4:
# 535 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 536 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 1
# 537 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalFirstPokemon_8
# 541 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto RivalFirstPokemon_1

RivalFirstPokemon_5:
# 544 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 2
# 545 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto RivalFirstPokemon_1

RivalFirstPokemon_6:
# 547 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 3
# 548 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto RivalFirstPokemon_1

RivalFirstPokemon_7:
# 550 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 4
# 551 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 552 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalFirstPokemon_12
# 554 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalFirstPokemon_13
# 556 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalFirstPokemon_14
	goto RivalFirstPokemon_1

RivalFirstPokemon_8:
# 538 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto RivalFirstPokemon_1

RivalFirstPokemon_12:
# 553 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto RivalFirstPokemon_1

RivalFirstPokemon_13:
# 555 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto RivalFirstPokemon_1

RivalFirstPokemon_14:
# 557 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto RivalFirstPokemon_1


RivalSecondPokemon::
# 564 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 565 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 566 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 567 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalSecondPokemon_3
# 570 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalSecondPokemon_4
# 579 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalSecondPokemon_5
# 582 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalSecondPokemon_6
# 585 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalSecondPokemon_7
RivalSecondPokemon_1:
# 596 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, VAR_SECOND_MON
	goto_if_eq RivalSecondPokemon_9
RivalSecondPokemon_8:
	return

RivalSecondPokemon_3:
# 568 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 0
# 569 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto RivalSecondPokemon_1

RivalSecondPokemon_4:
# 571 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 572 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 1
# 573 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalSecondPokemon_11
# 577 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto RivalSecondPokemon_1

RivalSecondPokemon_5:
# 580 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 2
# 581 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto RivalSecondPokemon_1

RivalSecondPokemon_6:
# 583 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 3
# 584 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto RivalSecondPokemon_1

RivalSecondPokemon_7:
# 586 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 4
# 587 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 588 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalSecondPokemon_15
# 590 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalSecondPokemon_16
# 592 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalSecondPokemon_17
	goto RivalSecondPokemon_1

RivalSecondPokemon_9:
# 597 "data/maps/SkyPillar_2F/scripts.pory"
	goto InvalidSecondMon
	goto RivalSecondPokemon_8

RivalSecondPokemon_11:
# 574 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto RivalSecondPokemon_1

RivalSecondPokemon_15:
# 589 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto RivalSecondPokemon_1

RivalSecondPokemon_16:
# 591 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto RivalSecondPokemon_1

RivalSecondPokemon_17:
# 593 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto RivalSecondPokemon_1


InvalidSecondMon::
# 603 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidSecondMon_2
# 610 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalMonChosen
# 611 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichOneIChooseSecond
InvalidSecondMon_1:
# 613 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 614 "data/maps/SkyPillar_2F/scripts.pory"
	goto RivalSecondPokemon
	return

InvalidSecondMon_2:
# 604 "data/maps/SkyPillar_2F/scripts.pory"
	waitse
# 605 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_FAILURE
# 606 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MonAlreadyChosen
# 607 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseSecond
	goto InvalidSecondMon_1


RivalThirdPokemon::
# 618 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 619 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 620 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 621 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalThirdPokemon_3
# 624 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalThirdPokemon_4
# 633 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalThirdPokemon_5
# 636 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalThirdPokemon_6
# 639 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalThirdPokemon_7
RivalThirdPokemon_1:
# 650 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
# 650 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
RivalThirdPokemon_8:
	return

RivalThirdPokemon_3:
# 622 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 0
# 623 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto RivalThirdPokemon_1

RivalThirdPokemon_4:
# 625 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 626 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 1
# 627 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalThirdPokemon_13
# 631 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto RivalThirdPokemon_1

RivalThirdPokemon_5:
# 634 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 2
# 635 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto RivalThirdPokemon_1

RivalThirdPokemon_6:
# 637 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 3
# 638 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto RivalThirdPokemon_1

RivalThirdPokemon_7:
# 640 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 4
# 641 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 642 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalThirdPokemon_17
# 644 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalThirdPokemon_18
# 646 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalThirdPokemon_19
	goto RivalThirdPokemon_1

RivalThirdPokemon_9:
# 651 "data/maps/SkyPillar_2F/scripts.pory"
	goto InvalidThirdMon
	goto RivalThirdPokemon_8

RivalThirdPokemon_13:
# 628 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto RivalThirdPokemon_1

RivalThirdPokemon_17:
# 643 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto RivalThirdPokemon_1

RivalThirdPokemon_18:
# 645 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto RivalThirdPokemon_1

RivalThirdPokemon_19:
# 647 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto RivalThirdPokemon_1


InvalidThirdMon::
# 656 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidThirdMon_2
# 663 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalMonChosen
# 664 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichOneIChooseThird
InvalidThirdMon_1:
# 666 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 667 "data/maps/SkyPillar_2F/scripts.pory"
	goto RivalThirdPokemon
	return

InvalidThirdMon_2:
# 657 "data/maps/SkyPillar_2F/scripts.pory"
	waitse
# 658 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_FAILURE
# 659 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MonAlreadyChosen
# 660 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseThird
	goto InvalidThirdMon_1


DynMultiPartner::
# 671 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 0
	goto_if_eq DynMultiPartner_2
# 671 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 0
	goto_if_eq DynMultiPartner_2
# 675 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_1, 0
DynMultiPartner_1:
# 677 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 678 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DynMultiPartner_8
# 687 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_22
# 687 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_22
# 691 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_5, 1
DynMultiPartner_7:
# 694 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 2
	goto_if_eq DynMultiPartner_12
# 694 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 2
	goto_if_eq DynMultiPartner_12
# 698 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_7, 2
DynMultiPartner_11:
# 700 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 3
	goto_if_eq DynMultiPartner_28
# 700 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 3
	goto_if_eq DynMultiPartner_28
# 704 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_9, 3
DynMultiPartner_27:
# 706 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 707 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, DynMultiPartner_35
# 714 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, DynMultiPartner_36
# 721 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, DynMultiPartner_37
DynMultiPartner_33:
	return

DynMultiPartner_2:
# 672 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_0, 0
	goto DynMultiPartner_1

DynMultiPartner_8:
# 679 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_17
# 679 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_17
# 683 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_3, 1
	goto DynMultiPartner_7

DynMultiPartner_12:
# 695 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_6, 2
	goto DynMultiPartner_11

DynMultiPartner_17:
# 680 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_2, 1
	goto DynMultiPartner_7

DynMultiPartner_22:
# 688 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_4, 1
	goto DynMultiPartner_7

DynMultiPartner_28:
# 701 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_8, 3
	goto DynMultiPartner_27

DynMultiPartner_35:
# 708 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_38
# 708 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_38
# 712 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_11, 4
	goto DynMultiPartner_33

DynMultiPartner_36:
# 715 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_43
# 715 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_43
# 719 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_13, 4
	goto DynMultiPartner_33

DynMultiPartner_37:
# 722 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_48
# 722 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_48
# 726 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_15, 4
	goto DynMultiPartner_33

DynMultiPartner_38:
# 709 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_10, 4
	goto DynMultiPartner_33

DynMultiPartner_43:
# 716 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_12, 4
	goto DynMultiPartner_33

DynMultiPartner_48:
# 723 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_14, 4
	goto DynMultiPartner_33


# 916 "data/maps/SkyPillar_2F/scripts.pory"
Tower2FRival:
# 917 "data/maps/SkyPillar_2F/scripts.pory"
	walk_left
# 917 "data/maps/SkyPillar_2F/scripts.pory"
	walk_left
# 918 "data/maps/SkyPillar_2F/scripts.pory"
	walk_in_place_faster_up
# 919 "data/maps/SkyPillar_2F/scripts.pory"
	step_end

TestFollower_Text_0:
# 291 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Let's go!$"

MakeNewTeam_Text_0:
# 378 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: Okay.\nLet's go then!$"

MakeNewTeam_Setup_Text_0:
# 390 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which Pokémon should I\nlead with?$"

MakeNewTeam_Setup_Text_1:
# 393 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\nsecond Pokémon?$"

MakeNewTeam_Setup_Text_2:
# 396 "data/maps/SkyPillar_2F/scripts.pory"
	.string "And which one should I pick\nas my third Pokémon?$"

DynMultiPartner_Text_0:
# 672 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Staraptor$"

DynMultiPartner_Text_1:
# 675 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Staraptor$"

DynMultiPartner_Text_2:
# 680 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gallade$"

DynMultiPartner_Text_3:
# 683 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Gallade$"

DynMultiPartner_Text_4:
# 688 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gardevoir$"

DynMultiPartner_Text_5:
# 691 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Gardevoir$"

DynMultiPartner_Text_6:
# 695 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Clodsire$"

DynMultiPartner_Text_7:
# 698 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Clodsire$"

DynMultiPartner_Text_8:
# 701 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Crustle$"

DynMultiPartner_Text_9:
# 704 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Crustle$"

DynMultiPartner_Text_10:
# 709 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Blaziken$"

DynMultiPartner_Text_11:
# 712 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Blaziken$"

DynMultiPartner_Text_12:
# 716 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Empoleon$"

DynMultiPartner_Text_13:
# 719 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Empoleon$"

DynMultiPartner_Text_14:
# 723 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Decidueye$"

DynMultiPartner_Text_15:
# 726 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Decidueye$"

Tr2_2F_Man3Intro::
# 113 "data/maps/SkyPillar_2F/scripts.pory"
	.string "You two must be pretty good if Korrina\n"
	.string "is letting you inside this tower.\p"
	.string "But are you good enough to defeat us?$"

Tr2_2F_Woman5Intro::
# 118 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Working together during partner battles\n"
	.string "is essential.\p"
	.string "Let's see how well you do!$"

Tr2_2F_Man3Lost::
# 123 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Excellent teamwork!$"

Tr2_2F_Woman5Lost::
# 126 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Whoa!\n"
	.string "You two are good!$"

Tr2_2F_Woman5_PosBat::
# 135 "data/maps/SkyPillar_2F/scripts.pory"
	.string "There are still many floors left that\n"
	.string "are sure to test your skills.\p"
	.string "I hope you're prepared.$"

Tr2_2F_Man3_PosBat::
# 145 "data/maps/SkyPillar_2F/scripts.pory"
	.string "I see now why Korrina has decided to\n"
	.string "grant you access.$"

Tr1_2F_PsychicIntro::
# 236 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Behold the terrifying power of\n"
	.string "Psychic Pokémon!$"

Tr1_2F_PsychicLost::
# 240 "data/maps/SkyPillar_2F/scripts.pory"
	.string "What terrifying power!$"

Tr1_2F_Man5Intro::
# 243 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Let's get this show on the road!$"

Tr1_2F_Man5Lost::
# 246 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Couldn't make enough noise…$"

Tr1_2F_Man5_PosBat::
# 254 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Keep your spirit up!\n"
	.string "The way forwards will be perilous.$"

Tr1_2F_Psychic_PosBat::
# 263 "data/maps/SkyPillar_2F/scripts.pory"
	.string "I can peer into people's future, but\n"
	.string "yours is far too tumultuous to make\l"
	.string "any heads or tails out of it.$"

AT_2F_DefeatedTrainer_Text::
# 277 "data/maps/SkyPillar_2F/scripts.pory"
	.string "This place is far too hardcore\n"
	.string "for me…$"

OkayRivalLetsGo::
# 407 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Okay then, let's go!$"

WantMeToUse::
# 410 "data/maps/SkyPillar_2F/scripts.pory"
	.string "So, you want me to use {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}?$"

CurrentlyUsing::
# 414 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: My current team is {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Want me to change Pokémon?$"

KeepYouHealthy::
# 419 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: Don't worry, I'll keep your\n"
	.string "Pokémon in perfect health.$"

LetsFindKorrina::
# 423 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: We made it to the top!\n"
	.string "Let's go find Korrina!$"

RivalMonChosen::
# 732 "data/maps/SkyPillar_2F/scripts.pory"
	.string "You already picked that Pokémon once!\n"
	.string "I can't use it twice.$"

WhichOneIChooseSecond::
# 736 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\n"
	.string "second Pokémon?$"

WhichOneIChooseThird::
# 740 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\n"
	.string "third Pokémon?$"

InitialPartnerSetup::
# 744 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}While inside the tower, all trainer\n"
	.string "battles are partner battles.\p"
	.string "You will each use 3 Pokémon from your\n"
	.string "team, with your party consisting of\l"
	.string "the first 3 Pokémon in your team.\p"
	.string "Before you begin, you must choose\n"
	.string "a party for {RIVAL}.$"

RivalUses::
# 753 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{RIVAL} currently uses {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Is this correct?$"

SpeakToMayAgain::
# 759 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change her current team.$"

SpeakToBrendanAgain::
# 763 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change his current team.$"

WhichShouldRivalChooseFirst::
# 768 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s first\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseSecond::
# 772 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s second\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseThird::
# 776 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s third\n"
	.string "Pokémon be?$"

MonAlreadyChosen::
# 780 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}That Pokémon has already been\n"
	.string "chosen.$"

MayHappyToSee::
# 785 "data/maps/SkyPillar_2F/scripts.pory"
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
# 806 "data/maps/SkyPillar_2F/scripts.pory"
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

BrendanHappyToSee::
# 845 "data/maps/SkyPillar_2F/scripts.pory"
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
# 865 "data/maps/SkyPillar_2F/scripts.pory"
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

YoureBackMay::
# 906 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: I've been waiting here like I\n"
	.string "said I would.\p"
	.string "Now, let's get cracking with this tower!$"

YoureBackBrendan::
# 911 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: You're back!\p"
	.string "Now, let's get on top of this tower!$"
