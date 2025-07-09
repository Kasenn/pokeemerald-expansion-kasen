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
	checkfollowernpc
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
	exclamationmark 1
# 47 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr2_Battle_2
# 51 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 1, Walk1Left
Tower_2F_Tr2_Battle_1:
# 53 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 55 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Man3Intro
# 56 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 57 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 58 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark 2
# 59 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr2_Battle_6
# 63 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 2, Walk2Right
Tower_2F_Tr2_Battle_5:
# 65 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 67 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Woman5Intro
# 68 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 69 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 70 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, Tower_2F_Tr2_Battle_11
# 72 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr2_Battle_12
# 74 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, Tower_2F_Tr2_Battle_13
# 76 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, Tower_2F_Tr2_Battle_14
# 78 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, Tower_2F_Tr2_Battle_15
# 80 "data/maps/SkyPillar_2F/scripts.pory"
	case 5, Tower_2F_Tr2_Battle_16
# 82 "data/maps/SkyPillar_2F/scripts.pory"
	case 6, Tower_2F_Tr2_Battle_17
# 84 "data/maps/SkyPillar_2F/scripts.pory"
	case 7, Tower_2F_Tr2_Battle_18
# 86 "data/maps/SkyPillar_2F/scripts.pory"
	case 8, Tower_2F_Tr2_Battle_19
# 88 "data/maps/SkyPillar_2F/scripts.pory"
	case 9, Tower_2F_Tr2_Battle_20
# 90 "data/maps/SkyPillar_2F/scripts.pory"
	case 10, Tower_2F_Tr2_Battle_21
# 92 "data/maps/SkyPillar_2F/scripts.pory"
	case 11, Tower_2F_Tr2_Battle_22
Tower_2F_Tr2_Battle_9:
# 95 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr2_Battle_25
# 102 "data/maps/SkyPillar_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/SkyPillar_2F/scripts.pory"
	special SetCB2WhiteOut
# 104 "data/maps/SkyPillar_2F/scripts.pory"
	waitstate
	return

Tower_2F_Tr2_Battle_2:
# 48 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 1, Walk2Left
	goto Tower_2F_Tr2_Battle_1

Tower_2F_Tr2_Battle_6:
# 60 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 2, Walk1Right
	goto Tower_2F_Tr2_Battle_5

Tower_2F_Tr2_Battle_11:
# 71 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_12:
# 73 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_13:
# 75 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_14:
# 77 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_15:
# 79 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_16:
# 81 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_MAY_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_17:
# 83 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_18:
# 85 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_19:
# 87 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_20:
# 89 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_21:
# 91 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_22:
# 93 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR2_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_TR2_WOMAN5, Tr2_2F_Woman5Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_2F_Tr2_Battle_9

Tower_2F_Tr2_Battle_25:
# 97 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_MAN3
# 98 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_WOMAN5
# 99 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tr2_2F_Woman5::
# 126 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Woman5_PosBat, MSGBOX_NPC
	end


Tr2_2F_Man3::
# 136 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Man3_PosBat, MSGBOX_NPC
	end


AT_2F_Tr1_Left::
# 149 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	goto_if 1, AT_2F_Tr1_Left_2
# 153 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 154 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Left_2:
# 150 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


AT_2F_Tr1_Right::
# 157 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	goto_if 1, AT_2F_Tr1_Right_2
# 161 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 162 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Right_2:
# 158 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tower_2F_Tr1_Battle::
# 165 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 166 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 167 "data/maps/SkyPillar_2F/scripts.pory"
	special SavePlayerParty
# 168 "data/maps/SkyPillar_2F/scripts.pory"
	special SetPlayerParty
# 169 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark 4
# 170 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr1_Battle_2
Tower_2F_Tr1_Battle_1:
# 173 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 174 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 175 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_PsychicIntro
# 176 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 177 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 178 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark 5
# 179 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Tower_2F_Tr1_Battle_5
Tower_2F_Tr1_Battle_4:
# 182 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
# 183 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 184 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Man5Intro
# 185 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 186 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 187 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, Tower_2F_Tr1_Battle_9
# 189 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr1_Battle_10
# 191 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, Tower_2F_Tr1_Battle_11
# 193 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, Tower_2F_Tr1_Battle_12
# 195 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, Tower_2F_Tr1_Battle_13
# 197 "data/maps/SkyPillar_2F/scripts.pory"
	case 5, Tower_2F_Tr1_Battle_14
# 199 "data/maps/SkyPillar_2F/scripts.pory"
	case 6, Tower_2F_Tr1_Battle_15
# 201 "data/maps/SkyPillar_2F/scripts.pory"
	case 7, Tower_2F_Tr1_Battle_16
# 203 "data/maps/SkyPillar_2F/scripts.pory"
	case 8, Tower_2F_Tr1_Battle_17
# 205 "data/maps/SkyPillar_2F/scripts.pory"
	case 9, Tower_2F_Tr1_Battle_18
# 207 "data/maps/SkyPillar_2F/scripts.pory"
	case 10, Tower_2F_Tr1_Battle_19
# 209 "data/maps/SkyPillar_2F/scripts.pory"
	case 11, Tower_2F_Tr1_Battle_20
Tower_2F_Tr1_Battle_7:
# 212 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 213 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr1_Battle_23
# 219 "data/maps/SkyPillar_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/SkyPillar_2F/scripts.pory"
	special SetCB2WhiteOut
# 221 "data/maps/SkyPillar_2F/scripts.pory"
	waitstate
	return

Tower_2F_Tr1_Battle_2:
# 171 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 4, Walk1Left
	goto Tower_2F_Tr1_Battle_1

Tower_2F_Tr1_Battle_5:
# 180 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 5, Walk1Right
	goto Tower_2F_Tr1_Battle_4

Tower_2F_Tr1_Battle_9:
# 188 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_10:
# 190 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_11:
# 192 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_12:
# 194 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_13:
# 196 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_14:
# 198 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_MAY_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_15:
# 200 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_16:
# 202 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_17:
# 204 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_18:
# 206 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_19:
# 208 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_20:
# 210 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_TR1_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_TR1_MAN5, Tr1_2F_Man5Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_2F_Tr1_Battle_7

Tower_2F_Tr1_Battle_23:
# 214 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_PSYCHIC
# 215 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_MAN5
# 216 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tr1_2F_Man5::
# 239 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Man5_PosBat, MSGBOX_NPC
	end


Tr1_2F_Psychic::
# 248 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Psychic_PosBat, MSGBOX_NPC
	end


AT_2F_DefeatedTrainer::
# 262 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox AT_2F_DefeatedTrainer_Text, MSGBOX_NPC
	end


TestFollower::
# 273 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 274 "data/maps/SkyPillar_2F/scripts.pory"
	faceplayer
# 279 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox TestFollower_Text_0
# 280 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 281 "data/maps/SkyPillar_2F/scripts.pory"
	setfollowernpc 6, FOLLOWER_NPC_FLAG_ALL, MakeNewTeam
# 282 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


MakeNewTeam::
# 287 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 288 "data/maps/SkyPillar_2F/scripts.pory"
	facefollowernpc
# 289 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_FIRST_MON
# 290 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_3
# 292 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_4
# 300 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_5
# 302 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_6
# 304 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_7
MakeNewTeam_1:
# 314 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_SECOND_MON
# 315 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_10
# 317 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_11
# 325 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_12
# 327 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_13
# 329 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_14
MakeNewTeam_8:
# 339 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_THIRD_MON
# 340 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_24
# 342 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_25
# 350 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_26
# 352 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_27
# 354 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_28
MakeNewTeam_22:
# 364 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox CurrentlyUsing, MSGBOX_YESNO
# 365 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_37
# 369 "data/maps/SkyPillar_2F/scripts.pory"
	goto MakeNewTeam_Setup
	return

MakeNewTeam_3:
# 291 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto MakeNewTeam_1

MakeNewTeam_4:
# 293 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 294 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_15
# 298 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto MakeNewTeam_1

MakeNewTeam_5:
# 301 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto MakeNewTeam_1

MakeNewTeam_6:
# 303 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto MakeNewTeam_1

MakeNewTeam_7:
# 305 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 306 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, MakeNewTeam_19
# 308 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, MakeNewTeam_20
# 310 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, MakeNewTeam_21
	goto MakeNewTeam_1

MakeNewTeam_10:
# 316 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto MakeNewTeam_8

MakeNewTeam_11:
# 318 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 319 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_29
# 323 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto MakeNewTeam_8

MakeNewTeam_12:
# 326 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto MakeNewTeam_8

MakeNewTeam_13:
# 328 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto MakeNewTeam_8

MakeNewTeam_14:
# 330 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 331 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, MakeNewTeam_33
# 333 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, MakeNewTeam_34
# 335 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, MakeNewTeam_35
	goto MakeNewTeam_8

MakeNewTeam_15:
# 295 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto MakeNewTeam_1

MakeNewTeam_19:
# 307 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto MakeNewTeam_1

MakeNewTeam_20:
# 309 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto MakeNewTeam_1

MakeNewTeam_21:
# 311 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto MakeNewTeam_1

MakeNewTeam_24:
# 341 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto MakeNewTeam_22

MakeNewTeam_25:
# 343 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 344 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_39
# 348 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto MakeNewTeam_22

MakeNewTeam_26:
# 351 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto MakeNewTeam_22

MakeNewTeam_27:
# 353 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto MakeNewTeam_22

MakeNewTeam_28:
# 355 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 356 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, MakeNewTeam_43
# 358 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, MakeNewTeam_44
# 360 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, MakeNewTeam_45
	goto MakeNewTeam_22

MakeNewTeam_29:
# 320 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto MakeNewTeam_8

MakeNewTeam_33:
# 332 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto MakeNewTeam_8

MakeNewTeam_34:
# 334 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto MakeNewTeam_8

MakeNewTeam_35:
# 336 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto MakeNewTeam_8

MakeNewTeam_37:
# 366 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MakeNewTeam_Text_0, MSGBOX_NPC
	end

MakeNewTeam_39:
# 345 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto MakeNewTeam_22

MakeNewTeam_43:
# 357 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto MakeNewTeam_22

MakeNewTeam_44:
# 359 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto MakeNewTeam_22

MakeNewTeam_45:
# 361 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto MakeNewTeam_22


BeginPartnerSetupLoop2::
# 372 "data/maps/SkyPillar_2F/scripts.pory"
	goto MakeNewTeam_Setup
	return


MakeNewTeam_Setup::
# 375 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 10
# 376 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 11
# 377 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 12
# 378 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_0
# 379 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 380 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalFirstPokemon
# 381 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_1
# 382 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 383 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalSecondPokemon
# 384 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_2
# 385 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 386 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalThirdPokemon
# 387 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox WantMeToUse, MSGBOX_YESNO
# 388 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_Setup_2
MakeNewTeam_Setup_1:
# 391 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox OkayRivalLetsGo, MSGBOX_NPC
# 392 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

MakeNewTeam_Setup_2:
# 389 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetupLoop2
	goto MakeNewTeam_Setup_1


UnitedWithRival::
# 424 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 425 "data/maps/SkyPillar_2F/scripts.pory"
	delay 24
# 426 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject 6, DIR_NORTH
# 427 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_PIN
# 428 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark 6
# 429 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 430 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq UnitedWithRival_2
# 434 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox YoureBackBrendan
UnitedWithRival_1:
# 436 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 437 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 438 "data/maps/SkyPillar_2F/scripts.pory"
	setflag FLAG_PARTNER_HEALS
# 439 "data/maps/SkyPillar_2F/scripts.pory"
	special HealPlayerParty
# 440 "data/maps/SkyPillar_2F/scripts.pory"
	setfollowernpc 6, FOLLOWER_NPC_FLAG_ALL, MakeNewTeam
# 441 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

UnitedWithRival_2:
# 431 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox YoureBackMay
	goto UnitedWithRival_1


MeetingRivalInTheTower::
# 446 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 447 "data/maps/SkyPillar_2F/scripts.pory"
	delay 24
# 448 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_PIN
# 449 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject 6, DIR_WEST
# 450 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark 6
# 451 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 6, Tower2FRival
# 452 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeetingRivalInTheTower_2
# 462 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, MeetingRivalInTheTower_8
# 466 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox BrendanNotHappyToSee
MeetingRivalInTheTower_1:
# 469 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 470 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 471 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 472 "data/maps/SkyPillar_2F/scripts.pory"
	setflag FLAG_PARTNER_HEALS
# 473 "data/maps/SkyPillar_2F/scripts.pory"
	special HealPlayerParty
# 474 "data/maps/SkyPillar_2F/scripts.pory"
	setfollowernpc 6, FOLLOWER_NPC_FLAG_ALL, MakeNewTeam
# 475 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox InitialPartnerSetup
# 476 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetup
	return

MeetingRivalInTheTower_2:
# 454 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, MeetingRivalInTheTower_5
# 458 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MayNotHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_5:
# 455 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MayHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_8:
# 463 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox BrendanHappyToSee
	goto MeetingRivalInTheTower_1


BeginPartnerSetup::
# 480 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 10
# 481 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 11
# 482 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 12
# 483 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseFirst
# 484 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 485 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalFirstPokemon
# 486 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseSecond
# 487 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 488 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalSecondPokemon
# 489 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseThird
# 490 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 491 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalThirdPokemon
# 492 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalUses, MSGBOX_YESNO
# 493 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BeginPartnerSetup_2
BeginPartnerSetup_1:
# 496 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 497 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BeginPartnerSetup_5
# 501 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SpeakToBrendanAgain
BeginPartnerSetup_4:
# 503 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_3, 0
# 504 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

BeginPartnerSetup_2:
# 494 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetupLoop
	goto BeginPartnerSetup_1

BeginPartnerSetup_5:
# 498 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SpeakToMayAgain
	goto BeginPartnerSetup_4


BeginPartnerSetupLoop::
# 508 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetup
	return


RivalFirstPokemon::
# 512 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 513 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 514 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 515 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalFirstPokemon_3
# 518 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalFirstPokemon_4
# 527 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalFirstPokemon_5
# 530 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalFirstPokemon_6
# 533 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalFirstPokemon_7
RivalFirstPokemon_1:
	return

RivalFirstPokemon_3:
# 516 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 0
# 517 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto RivalFirstPokemon_1

RivalFirstPokemon_4:
# 519 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 520 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 1
# 521 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalFirstPokemon_8
# 525 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto RivalFirstPokemon_1

RivalFirstPokemon_5:
# 528 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 2
# 529 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto RivalFirstPokemon_1

RivalFirstPokemon_6:
# 531 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 3
# 532 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto RivalFirstPokemon_1

RivalFirstPokemon_7:
# 534 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 4
# 535 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 536 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, RivalFirstPokemon_12
# 538 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, RivalFirstPokemon_13
# 540 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, RivalFirstPokemon_14
	goto RivalFirstPokemon_1

RivalFirstPokemon_8:
# 522 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto RivalFirstPokemon_1

RivalFirstPokemon_12:
# 537 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto RivalFirstPokemon_1

RivalFirstPokemon_13:
# 539 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto RivalFirstPokemon_1

RivalFirstPokemon_14:
# 541 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto RivalFirstPokemon_1


RivalSecondPokemon::
# 548 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 549 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 550 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 551 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalSecondPokemon_3
# 554 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalSecondPokemon_4
# 563 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalSecondPokemon_5
# 566 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalSecondPokemon_6
# 569 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalSecondPokemon_7
RivalSecondPokemon_1:
# 580 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, VAR_SECOND_MON
	goto_if_eq RivalSecondPokemon_9
RivalSecondPokemon_8:
	return

RivalSecondPokemon_3:
# 552 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 0
# 553 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto RivalSecondPokemon_1

RivalSecondPokemon_4:
# 555 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 556 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 1
# 557 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalSecondPokemon_11
# 561 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto RivalSecondPokemon_1

RivalSecondPokemon_5:
# 564 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 2
# 565 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto RivalSecondPokemon_1

RivalSecondPokemon_6:
# 567 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 3
# 568 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto RivalSecondPokemon_1

RivalSecondPokemon_7:
# 570 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 4
# 571 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 572 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, RivalSecondPokemon_15
# 574 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, RivalSecondPokemon_16
# 576 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, RivalSecondPokemon_17
	goto RivalSecondPokemon_1

RivalSecondPokemon_9:
# 581 "data/maps/SkyPillar_2F/scripts.pory"
	goto InvalidSecondMon
	goto RivalSecondPokemon_8

RivalSecondPokemon_11:
# 558 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto RivalSecondPokemon_1

RivalSecondPokemon_15:
# 573 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto RivalSecondPokemon_1

RivalSecondPokemon_16:
# 575 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto RivalSecondPokemon_1

RivalSecondPokemon_17:
# 577 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto RivalSecondPokemon_1


InvalidSecondMon::
# 587 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidSecondMon_2
# 594 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalMonChosen
# 595 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichOneIChooseSecond
InvalidSecondMon_1:
# 597 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 598 "data/maps/SkyPillar_2F/scripts.pory"
	goto RivalSecondPokemon
	return

InvalidSecondMon_2:
# 588 "data/maps/SkyPillar_2F/scripts.pory"
	waitse
# 589 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_FAILURE
# 590 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MonAlreadyChosen
# 591 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseSecond
	goto InvalidSecondMon_1


RivalThirdPokemon::
# 602 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 603 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 604 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 605 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalThirdPokemon_3
# 608 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalThirdPokemon_4
# 617 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalThirdPokemon_5
# 620 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalThirdPokemon_6
# 623 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalThirdPokemon_7
RivalThirdPokemon_1:
# 634 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
# 634 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
RivalThirdPokemon_8:
	return

RivalThirdPokemon_3:
# 606 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 0
# 607 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto RivalThirdPokemon_1

RivalThirdPokemon_4:
# 609 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 610 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 1
# 611 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalThirdPokemon_13
# 615 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto RivalThirdPokemon_1

RivalThirdPokemon_5:
# 618 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 2
# 619 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto RivalThirdPokemon_1

RivalThirdPokemon_6:
# 621 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 3
# 622 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto RivalThirdPokemon_1

RivalThirdPokemon_7:
# 624 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 4
# 625 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 626 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, RivalThirdPokemon_17
# 628 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, RivalThirdPokemon_18
# 630 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, RivalThirdPokemon_19
	goto RivalThirdPokemon_1

RivalThirdPokemon_9:
# 635 "data/maps/SkyPillar_2F/scripts.pory"
	goto InvalidThirdMon
	goto RivalThirdPokemon_8

RivalThirdPokemon_13:
# 612 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto RivalThirdPokemon_1

RivalThirdPokemon_17:
# 627 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto RivalThirdPokemon_1

RivalThirdPokemon_18:
# 629 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto RivalThirdPokemon_1

RivalThirdPokemon_19:
# 631 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto RivalThirdPokemon_1


InvalidThirdMon::
# 640 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidThirdMon_2
# 647 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalMonChosen
# 648 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichOneIChooseThird
InvalidThirdMon_1:
# 650 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 651 "data/maps/SkyPillar_2F/scripts.pory"
	goto RivalThirdPokemon
	return

InvalidThirdMon_2:
# 641 "data/maps/SkyPillar_2F/scripts.pory"
	waitse
# 642 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_FAILURE
# 643 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MonAlreadyChosen
# 644 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseThird
	goto InvalidThirdMon_1


DynMultiPartner::
# 655 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 0
	goto_if_eq DynMultiPartner_2
# 655 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 0
	goto_if_eq DynMultiPartner_2
# 659 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_1, 0
DynMultiPartner_1:
# 661 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 662 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DynMultiPartner_8
# 671 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_22
# 671 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_22
# 675 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_5, 1
DynMultiPartner_7:
# 678 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 2
	goto_if_eq DynMultiPartner_12
# 678 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 2
	goto_if_eq DynMultiPartner_12
# 682 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_7, 2
DynMultiPartner_11:
# 684 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 3
	goto_if_eq DynMultiPartner_28
# 684 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 3
	goto_if_eq DynMultiPartner_28
# 688 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_9, 3
DynMultiPartner_27:
# 690 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 691 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, DynMultiPartner_35
# 698 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, DynMultiPartner_36
# 705 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, DynMultiPartner_37
DynMultiPartner_33:
	return

DynMultiPartner_2:
# 656 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_0, 0
	goto DynMultiPartner_1

DynMultiPartner_8:
# 663 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_17
# 663 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_17
# 667 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_3, 1
	goto DynMultiPartner_7

DynMultiPartner_12:
# 679 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_6, 2
	goto DynMultiPartner_11

DynMultiPartner_17:
# 664 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_2, 1
	goto DynMultiPartner_7

DynMultiPartner_22:
# 672 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_4, 1
	goto DynMultiPartner_7

DynMultiPartner_28:
# 685 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_8, 3
	goto DynMultiPartner_27

DynMultiPartner_35:
# 692 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_38
# 692 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_38
# 696 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_11, 4
	goto DynMultiPartner_33

DynMultiPartner_36:
# 699 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_43
# 699 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_43
# 703 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_13, 4
	goto DynMultiPartner_33

DynMultiPartner_37:
# 706 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_48
# 706 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_48
# 710 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_15, 4
	goto DynMultiPartner_33

DynMultiPartner_38:
# 693 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_10, 4
	goto DynMultiPartner_33

DynMultiPartner_43:
# 700 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_12, 4
	goto DynMultiPartner_33

DynMultiPartner_48:
# 707 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_14, 4
	goto DynMultiPartner_33


# 900 "data/maps/SkyPillar_2F/scripts.pory"
Tower2FRival:
# 901 "data/maps/SkyPillar_2F/scripts.pory"
	walk_left
# 901 "data/maps/SkyPillar_2F/scripts.pory"
	walk_left
# 902 "data/maps/SkyPillar_2F/scripts.pory"
	walk_in_place_faster_up
# 903 "data/maps/SkyPillar_2F/scripts.pory"
	step_end

TestFollower_Text_0:
# 279 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Let's go!$"

MakeNewTeam_Text_0:
# 366 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: Okay.\nLet's go then!$"

MakeNewTeam_Setup_Text_0:
# 378 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which Pokémon should I\nlead with?$"

MakeNewTeam_Setup_Text_1:
# 381 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\nsecond Pokémon?$"

MakeNewTeam_Setup_Text_2:
# 384 "data/maps/SkyPillar_2F/scripts.pory"
	.string "And which one should I pick\nas my third Pokémon?$"

DynMultiPartner_Text_0:
# 656 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Staraptor$"

DynMultiPartner_Text_1:
# 659 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Staraptor$"

DynMultiPartner_Text_2:
# 664 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gallade$"

DynMultiPartner_Text_3:
# 667 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Gallade$"

DynMultiPartner_Text_4:
# 672 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gardevoir$"

DynMultiPartner_Text_5:
# 675 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Gardevoir$"

DynMultiPartner_Text_6:
# 679 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Clodsire$"

DynMultiPartner_Text_7:
# 682 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Clodsire$"

DynMultiPartner_Text_8:
# 685 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Crustle$"

DynMultiPartner_Text_9:
# 688 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Crustle$"

DynMultiPartner_Text_10:
# 693 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Blaziken$"

DynMultiPartner_Text_11:
# 696 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Blaziken$"

DynMultiPartner_Text_12:
# 700 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Empoleon$"

DynMultiPartner_Text_13:
# 703 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Empoleon$"

DynMultiPartner_Text_14:
# 707 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Decidueye$"

DynMultiPartner_Text_15:
# 710 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Decidueye$"

Tr2_2F_Man3Intro::
# 107 "data/maps/SkyPillar_2F/scripts.pory"
	.string "You two must be pretty good if Korrina\n"
	.string "is letting you inside this tower.\p"
	.string "But are you good enough to defeat us?$"

Tr2_2F_Woman5Intro::
# 112 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Working together during partner battles\n"
	.string "is essential.\p"
	.string "Let's see how well you do!$"

Tr2_2F_Man3Lost::
# 117 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Excellent teamwork!$"

Tr2_2F_Woman5Lost::
# 120 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Whoa!\n"
	.string "You two are good!$"

Tr2_2F_Woman5_PosBat::
# 129 "data/maps/SkyPillar_2F/scripts.pory"
	.string "There are still many floors left that\n"
	.string "are sure to test your skills.\p"
	.string "I hope you're prepared.$"

Tr2_2F_Man3_PosBat::
# 139 "data/maps/SkyPillar_2F/scripts.pory"
	.string "I see now why Korrina has decided to\n"
	.string "grant you access.$"

Tr1_2F_PsychicIntro::
# 224 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Behold the terrifying power of\n"
	.string "Psychic Pokémon!$"

Tr1_2F_PsychicLost::
# 228 "data/maps/SkyPillar_2F/scripts.pory"
	.string "What terrifying power!$"

Tr1_2F_Man5Intro::
# 231 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Let's get this show on the road!$"

Tr1_2F_Man5Lost::
# 234 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Couldn't make enough noise…$"

Tr1_2F_Man5_PosBat::
# 242 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Keep your spirit up!\n"
	.string "The way forwards will be perilous.$"

Tr1_2F_Psychic_PosBat::
# 251 "data/maps/SkyPillar_2F/scripts.pory"
	.string "I can peer into people's future, but\n"
	.string "yours is far too tumultuous to make\l"
	.string "any heads or tails out of it.$"

AT_2F_DefeatedTrainer_Text::
# 265 "data/maps/SkyPillar_2F/scripts.pory"
	.string "This place is far too hardcore\n"
	.string "for me…$"

OkayRivalLetsGo::
# 395 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Okay then, let's go!$"

WantMeToUse::
# 398 "data/maps/SkyPillar_2F/scripts.pory"
	.string "So, you want me to use {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}?$"

CurrentlyUsing::
# 402 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: My current team is {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Want me to change Pokémon?$"

KeepYouHealthy::
# 407 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: Don't worry, I'll keep your\n"
	.string "Pokémon in perfect health.$"

LetsFindKorrina::
# 411 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: We made it to the top!\n"
	.string "Let's go find Korrina!$"

RivalMonChosen::
# 716 "data/maps/SkyPillar_2F/scripts.pory"
	.string "You already picked that Pokémon once!\n"
	.string "I can't use it twice.$"

WhichOneIChooseSecond::
# 720 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\n"
	.string "second Pokémon?$"

WhichOneIChooseThird::
# 724 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\n"
	.string "third Pokémon?$"

InitialPartnerSetup::
# 728 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}While inside the tower, all trainer\n"
	.string "battles are partner battles.\p"
	.string "You will each use 3 Pokémon from your\n"
	.string "team, with your party consisting of\l"
	.string "the first 3 Pokémon in your team.\p"
	.string "Before you begin, you must choose\n"
	.string "a party for {RIVAL}.$"

RivalUses::
# 737 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{RIVAL} currently uses {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Is this correct?$"

SpeakToMayAgain::
# 743 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change her current team.$"

SpeakToBrendanAgain::
# 747 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change his current team.$"

WhichShouldRivalChooseFirst::
# 752 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s first\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseSecond::
# 756 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s second\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseThird::
# 760 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s third\n"
	.string "Pokémon be?$"

MonAlreadyChosen::
# 764 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}That Pokémon has already been\n"
	.string "chosen.$"

MayHappyToSee::
# 769 "data/maps/SkyPillar_2F/scripts.pory"
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
# 790 "data/maps/SkyPillar_2F/scripts.pory"
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
# 829 "data/maps/SkyPillar_2F/scripts.pory"
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
# 849 "data/maps/SkyPillar_2F/scripts.pory"
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
# 890 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: I've been waiting here like I\n"
	.string "said I would.\p"
	.string "Now, let's get cracking with this tower!$"

YoureBackBrendan::
# 895 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: You're back!\p"
	.string "Now, let's get on top of this tower!$"
