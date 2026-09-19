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
	checktrainerflag TRAINER_AT_2F_MAN3
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
	checktrainerflag TRAINER_AT_2F_MAN3
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
	multi_2_vs_2 TRAINER_AT_2F_MAN3, Tr2_2F_Man3Lost, TRAINER_AT_2F_WOMAN5, Tr2_2F_Woman5Lost, VAR_TOWER_PARTNER
# 70 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, Tower_2F_Tr2_Battle_11
# 77 "data/maps/SkyPillar_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/SkyPillar_2F/scripts.pory"
	special SetCB2WhiteOut
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
# 72 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_MAN3
# 73 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_WOMAN5
# 74 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tr2_2F_Woman5::
# 100 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Woman5_PosBat, MSGBOX_NPC
	end


Tr2_2F_Man3::
# 110 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr2_2F_Man3_PosBat, MSGBOX_NPC
	end


AT_2F_Tr1_Left::
# 123 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_PSYCHIC
	goto_if 1, AT_2F_Tr1_Left_2
# 127 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 128 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Left_2:
# 124 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


AT_2F_Tr1_Right::
# 131 "data/maps/SkyPillar_2F/scripts.pory"
	checktrainerflag TRAINER_AT_2F_PSYCHIC
	goto_if 1, AT_2F_Tr1_Right_2
# 135 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 136 "data/maps/SkyPillar_2F/scripts.pory"
	goto Tower_2F_Tr1_Battle
	return

AT_2F_Tr1_Right_2:
# 132 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tower_2F_Tr1_Battle::
# 139 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 140 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 141 "data/maps/SkyPillar_2F/scripts.pory"
	special SavePlayerParty
# 142 "data/maps/SkyPillar_2F/scripts.pory"
	special SetPlayerParty
# 143 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark LOCALID_ATOWER_1F_MAN5
# 144 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Tower_2F_Tr1_Battle_2
Tower_2F_Tr1_Battle_1:
# 145 "data/maps/SkyPillar_2F/scripts.pory"
	turnplayer DIR_EAST
# 146 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_PsychicIntro, MSGBOX_AUTOCLOSE
# 147 "data/maps/SkyPillar_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 148 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark LOCALID_ATOWER_1F_PSYCHIC_M
# 149 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Tower_2F_Tr1_Battle_5
Tower_2F_Tr1_Battle_4:
# 150 "data/maps/SkyPillar_2F/scripts.pory"
	turnplayer DIR_WEST
# 151 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Man5Intro, MSGBOX_AUTOCLOSE
# 152 "data/maps/SkyPillar_2F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_2F_PSYCHIC, Tr1_2F_PsychicLost, TRAINER_AT_2F_MAN5, Tr1_2F_Man5Lost, VAR_TOWER_PARTNER
# 153 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/SkyPillar_2F/scripts.pory"
	case B_OUTCOME_WON, Tower_2F_Tr1_Battle_9
# 160 "data/maps/SkyPillar_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/SkyPillar_2F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_2F_Tr1_Battle_2:
# 144 "data/maps/SkyPillar_2F/scripts.pory"
	waitmove LOCALID_ATOWER_1F_MAN5, Walk1Left
	goto Tower_2F_Tr1_Battle_1

Tower_2F_Tr1_Battle_5:
# 149 "data/maps/SkyPillar_2F/scripts.pory"
	waitmove LOCALID_ATOWER_1F_PSYCHIC_M, Walk1Right
	goto Tower_2F_Tr1_Battle_4

Tower_2F_Tr1_Battle_9:
# 155 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_PSYCHIC
# 156 "data/maps/SkyPillar_2F/scripts.pory"
	settrainerflag TRAINER_AT_2F_MAN5
# 157 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


Tr1_2F_Man5::
# 179 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Man5_PosBat, MSGBOX_NPC
	end


Tr1_2F_Psychic::
# 188 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox Tr1_2F_Psychic_PosBat, MSGBOX_NPC
	end


AT_2F_DefeatedTrainer::
# 202 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox AT_2F_DefeatedTrainer_Text, MSGBOX_NPC
	end


TestFollower::
# 213 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 214 "data/maps/SkyPillar_2F/scripts.pory"
	faceplayer
# 219 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox TestFollower_Text_0
# 220 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 221 "data/maps/SkyPillar_2F/scripts.pory"
	setfollowernpc 6, FOLLOWER_NPC_FLAG_ALL, MakeNewTeam
# 222 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end


MakeNewTeam::
# 227 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 228 "data/maps/SkyPillar_2F/scripts.pory"
	facefollowernpc
# 229 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_FIRST_MON
# 230 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_3
# 232 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_4
# 240 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_5
# 242 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_6
# 244 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_7
MakeNewTeam_1:
# 254 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_SECOND_MON
# 255 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_10
# 257 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_11
# 265 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_12
# 267 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_13
# 269 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_14
MakeNewTeam_8:
# 279 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_THIRD_MON
# 280 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, MakeNewTeam_24
# 282 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, MakeNewTeam_25
# 290 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, MakeNewTeam_26
# 292 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, MakeNewTeam_27
# 294 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, MakeNewTeam_28
MakeNewTeam_22:
# 304 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox CurrentlyUsing, MSGBOX_YESNO
# 305 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_37
# 309 "data/maps/SkyPillar_2F/scripts.pory"
	goto MakeNewTeam_Setup
	return

MakeNewTeam_3:
# 231 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto MakeNewTeam_1

MakeNewTeam_4:
# 233 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 234 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_15
# 238 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto MakeNewTeam_1

MakeNewTeam_5:
# 241 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto MakeNewTeam_1

MakeNewTeam_6:
# 243 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto MakeNewTeam_1

MakeNewTeam_7:
# 245 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 246 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, MakeNewTeam_19
# 248 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, MakeNewTeam_20
# 250 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, MakeNewTeam_21
	goto MakeNewTeam_1

MakeNewTeam_10:
# 256 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto MakeNewTeam_8

MakeNewTeam_11:
# 258 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 259 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_29
# 263 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto MakeNewTeam_8

MakeNewTeam_12:
# 266 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto MakeNewTeam_8

MakeNewTeam_13:
# 268 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto MakeNewTeam_8

MakeNewTeam_14:
# 270 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 271 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, MakeNewTeam_33
# 273 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, MakeNewTeam_34
# 275 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, MakeNewTeam_35
	goto MakeNewTeam_8

MakeNewTeam_15:
# 235 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto MakeNewTeam_1

MakeNewTeam_19:
# 247 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto MakeNewTeam_1

MakeNewTeam_20:
# 249 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto MakeNewTeam_1

MakeNewTeam_21:
# 251 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto MakeNewTeam_1

MakeNewTeam_24:
# 281 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto MakeNewTeam_22

MakeNewTeam_25:
# 283 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 284 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MakeNewTeam_39
# 288 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto MakeNewTeam_22

MakeNewTeam_26:
# 291 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto MakeNewTeam_22

MakeNewTeam_27:
# 293 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto MakeNewTeam_22

MakeNewTeam_28:
# 295 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 296 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, MakeNewTeam_43
# 298 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, MakeNewTeam_44
# 300 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, MakeNewTeam_45
	goto MakeNewTeam_22

MakeNewTeam_29:
# 260 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto MakeNewTeam_8

MakeNewTeam_33:
# 272 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto MakeNewTeam_8

MakeNewTeam_34:
# 274 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto MakeNewTeam_8

MakeNewTeam_35:
# 276 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto MakeNewTeam_8

MakeNewTeam_37:
# 306 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MakeNewTeam_Text_0, MSGBOX_NPC
	end

MakeNewTeam_39:
# 285 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto MakeNewTeam_22

MakeNewTeam_43:
# 297 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto MakeNewTeam_22

MakeNewTeam_44:
# 299 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto MakeNewTeam_22

MakeNewTeam_45:
# 301 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto MakeNewTeam_22


BeginPartnerSetupLoop2::
# 312 "data/maps/SkyPillar_2F/scripts.pory"
	goto MakeNewTeam_Setup
	return


MakeNewTeam_Setup::
# 315 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 10
# 316 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 11
# 317 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 12
# 318 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_0
# 319 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 320 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalFirstPokemon
# 321 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_1
# 322 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 323 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalSecondPokemon
# 324 "data/maps/SkyPillar_2F/scripts.pory"
	message MakeNewTeam_Setup_Text_2
# 325 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 326 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalThirdPokemon
# 327 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox WantMeToUse, MSGBOX_YESNO
# 328 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MakeNewTeam_Setup_2
MakeNewTeam_Setup_1:
# 331 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox OkayRivalLetsGo, MSGBOX_NPC
# 332 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

MakeNewTeam_Setup_2:
# 329 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetupLoop2
	goto MakeNewTeam_Setup_1


UnitedWithRival::
# 364 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 365 "data/maps/SkyPillar_2F/scripts.pory"
	delay 24
# 366 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject 6, DIR_NORTH
# 367 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_PIN
# 368 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark 6
# 369 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 370 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq UnitedWithRival_2
# 374 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox YoureBackBrendan
UnitedWithRival_1:
# 376 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 377 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 378 "data/maps/SkyPillar_2F/scripts.pory"
	setflag FLAG_PARTNER_HEALS
# 379 "data/maps/SkyPillar_2F/scripts.pory"
	special HealPlayerParty
# 380 "data/maps/SkyPillar_2F/scripts.pory"
	setfollowernpc 6, FOLLOWER_NPC_FLAG_ALL, MakeNewTeam
# 381 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

UnitedWithRival_2:
# 371 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox YoureBackMay
	goto UnitedWithRival_1


MeetingRivalInTheTower::
# 386 "data/maps/SkyPillar_2F/scripts.pory"
	lock
# 387 "data/maps/SkyPillar_2F/scripts.pory"
	delay 24
# 388 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_PIN
# 389 "data/maps/SkyPillar_2F/scripts.pory"
	turnobject 6, DIR_WEST
# 390 "data/maps/SkyPillar_2F/scripts.pory"
	exclamationmark 6
# 391 "data/maps/SkyPillar_2F/scripts.pory"
	applymovement 6, Tower2FRival
# 392 "data/maps/SkyPillar_2F/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeetingRivalInTheTower_2
# 402 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, MeetingRivalInTheTower_8
# 406 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox BrendanNotHappyToSee
MeetingRivalInTheTower_1:
# 409 "data/maps/SkyPillar_2F/scripts.pory"
	closemessage
# 410 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 411 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 412 "data/maps/SkyPillar_2F/scripts.pory"
	setflag FLAG_PARTNER_HEALS
# 413 "data/maps/SkyPillar_2F/scripts.pory"
	special HealPlayerParty
# 414 "data/maps/SkyPillar_2F/scripts.pory"
	setfollowernpc 6, FOLLOWER_NPC_FLAG_ALL, MakeNewTeam
# 415 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox InitialPartnerSetup
# 416 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetup
	return

MeetingRivalInTheTower_2:
# 394 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, MeetingRivalInTheTower_5
# 398 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MayNotHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_5:
# 395 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MayHappyToSee
	goto MeetingRivalInTheTower_1

MeetingRivalInTheTower_8:
# 403 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox BrendanHappyToSee
	goto MeetingRivalInTheTower_1


BeginPartnerSetup::
# 420 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 10
# 421 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 11
# 422 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 12
# 423 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseFirst
# 424 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 425 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalFirstPokemon
# 426 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseSecond
# 427 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 428 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalSecondPokemon
# 429 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseThird
# 430 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 431 "data/maps/SkyPillar_2F/scripts.pory"
	call RivalThirdPokemon
# 432 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalUses, MSGBOX_YESNO
# 433 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BeginPartnerSetup_2
BeginPartnerSetup_1:
# 436 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 437 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BeginPartnerSetup_5
# 441 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SpeakToBrendanAgain
BeginPartnerSetup_4:
# 443 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_TEMP_3, 0
# 444 "data/maps/SkyPillar_2F/scripts.pory"
	release
	end

BeginPartnerSetup_2:
# 434 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetupLoop
	goto BeginPartnerSetup_1

BeginPartnerSetup_5:
# 438 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SpeakToMayAgain
	goto BeginPartnerSetup_4


BeginPartnerSetupLoop::
# 448 "data/maps/SkyPillar_2F/scripts.pory"
	goto BeginPartnerSetup
	return


RivalFirstPokemon::
# 452 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 453 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 454 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 455 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalFirstPokemon_3
# 458 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalFirstPokemon_4
# 467 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalFirstPokemon_5
# 470 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalFirstPokemon_6
# 473 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalFirstPokemon_7
RivalFirstPokemon_1:
	return

RivalFirstPokemon_3:
# 456 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 0
# 457 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	goto RivalFirstPokemon_1

RivalFirstPokemon_4:
# 459 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 460 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 1
# 461 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalFirstPokemon_8
# 465 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	goto RivalFirstPokemon_1

RivalFirstPokemon_5:
# 468 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 2
# 469 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLODSIRE
	goto RivalFirstPokemon_1

RivalFirstPokemon_6:
# 471 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 3
# 472 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRUSTLE
	goto RivalFirstPokemon_1

RivalFirstPokemon_7:
# 474 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_FIRST_MON, 4
# 475 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 476 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, RivalFirstPokemon_12
# 478 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, RivalFirstPokemon_13
# 480 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, RivalFirstPokemon_14
	goto RivalFirstPokemon_1

RivalFirstPokemon_8:
# 462 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GALLADE
	goto RivalFirstPokemon_1

RivalFirstPokemon_12:
# 477 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	goto RivalFirstPokemon_1

RivalFirstPokemon_13:
# 479 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	goto RivalFirstPokemon_1

RivalFirstPokemon_14:
# 481 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	goto RivalFirstPokemon_1


RivalSecondPokemon::
# 488 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 489 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 490 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 491 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalSecondPokemon_3
# 494 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalSecondPokemon_4
# 503 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalSecondPokemon_5
# 506 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalSecondPokemon_6
# 509 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalSecondPokemon_7
RivalSecondPokemon_1:
# 520 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, VAR_SECOND_MON
	goto_if_eq RivalSecondPokemon_9
RivalSecondPokemon_8:
	return

RivalSecondPokemon_3:
# 492 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 0
# 493 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STARAPTOR
	goto RivalSecondPokemon_1

RivalSecondPokemon_4:
# 495 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 496 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 1
# 497 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalSecondPokemon_11
# 501 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GARDEVOIR
	goto RivalSecondPokemon_1

RivalSecondPokemon_5:
# 504 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 2
# 505 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CLODSIRE
	goto RivalSecondPokemon_1

RivalSecondPokemon_6:
# 507 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 3
# 508 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRUSTLE
	goto RivalSecondPokemon_1

RivalSecondPokemon_7:
# 510 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_SECOND_MON, 4
# 511 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 512 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, RivalSecondPokemon_15
# 514 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, RivalSecondPokemon_16
# 516 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, RivalSecondPokemon_17
	goto RivalSecondPokemon_1

RivalSecondPokemon_9:
# 521 "data/maps/SkyPillar_2F/scripts.pory"
	goto InvalidSecondMon
	goto RivalSecondPokemon_8

RivalSecondPokemon_11:
# 498 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GALLADE
	goto RivalSecondPokemon_1

RivalSecondPokemon_15:
# 513 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BLAZIKEN
	goto RivalSecondPokemon_1

RivalSecondPokemon_16:
# 515 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EMPOLEON
	goto RivalSecondPokemon_1

RivalSecondPokemon_17:
# 517 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DECIDUEYE
	goto RivalSecondPokemon_1


InvalidSecondMon::
# 527 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidSecondMon_2
# 534 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalMonChosen
# 535 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichOneIChooseSecond
InvalidSecondMon_1:
# 537 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 538 "data/maps/SkyPillar_2F/scripts.pory"
	goto RivalSecondPokemon
	return

InvalidSecondMon_2:
# 528 "data/maps/SkyPillar_2F/scripts.pory"
	waitse
# 529 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_FAILURE
# 530 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MonAlreadyChosen
# 531 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseSecond
	goto InvalidSecondMon_1


RivalThirdPokemon::
# 542 "data/maps/SkyPillar_2F/scripts.pory"
	call DynMultiPartner
# 543 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultistack 23, 0, TRUE, 5, FALSE, 0, NULL
# 544 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_RESULT
# 545 "data/maps/SkyPillar_2F/scripts.pory"
	case 0, RivalThirdPokemon_3
# 548 "data/maps/SkyPillar_2F/scripts.pory"
	case 1, RivalThirdPokemon_4
# 557 "data/maps/SkyPillar_2F/scripts.pory"
	case 2, RivalThirdPokemon_5
# 560 "data/maps/SkyPillar_2F/scripts.pory"
	case 3, RivalThirdPokemon_6
# 563 "data/maps/SkyPillar_2F/scripts.pory"
	case 4, RivalThirdPokemon_7
RivalThirdPokemon_1:
# 574 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
# 574 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, VAR_THIRD_MON
	goto_if_eq RivalThirdPokemon_9
RivalThirdPokemon_8:
	return

RivalThirdPokemon_3:
# 546 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 0
# 547 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_STARAPTOR
	goto RivalThirdPokemon_1

RivalThirdPokemon_4:
# 549 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 550 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 1
# 551 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalThirdPokemon_13
# 555 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GARDEVOIR
	goto RivalThirdPokemon_1

RivalThirdPokemon_5:
# 558 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 2
# 559 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CLODSIRE
	goto RivalThirdPokemon_1

RivalThirdPokemon_6:
# 561 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 3
# 562 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_CRUSTLE
	goto RivalThirdPokemon_1

RivalThirdPokemon_7:
# 564 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_THIRD_MON, 4
# 565 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 566 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, RivalThirdPokemon_17
# 568 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, RivalThirdPokemon_18
# 570 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, RivalThirdPokemon_19
	goto RivalThirdPokemon_1

RivalThirdPokemon_9:
# 575 "data/maps/SkyPillar_2F/scripts.pory"
	goto InvalidThirdMon
	goto RivalThirdPokemon_8

RivalThirdPokemon_13:
# 552 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_GALLADE
	goto RivalThirdPokemon_1

RivalThirdPokemon_17:
# 567 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_BLAZIKEN
	goto RivalThirdPokemon_1

RivalThirdPokemon_18:
# 569 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_EMPOLEON
	goto RivalThirdPokemon_1

RivalThirdPokemon_19:
# 571 "data/maps/SkyPillar_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DECIDUEYE
	goto RivalThirdPokemon_1


InvalidThirdMon::
# 580 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq InvalidThirdMon_2
# 587 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox RivalMonChosen
# 588 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichOneIChooseThird
InvalidThirdMon_1:
# 590 "data/maps/SkyPillar_2F/scripts.pory"
	waitmessage
# 591 "data/maps/SkyPillar_2F/scripts.pory"
	goto RivalThirdPokemon
	return

InvalidThirdMon_2:
# 581 "data/maps/SkyPillar_2F/scripts.pory"
	waitse
# 582 "data/maps/SkyPillar_2F/scripts.pory"
	playse SE_FAILURE
# 583 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox MonAlreadyChosen
# 584 "data/maps/SkyPillar_2F/scripts.pory"
	message WhichShouldRivalChooseThird
	goto InvalidThirdMon_1


DynMultiPartner::
# 595 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 0
	goto_if_eq DynMultiPartner_2
# 595 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 0
	goto_if_eq DynMultiPartner_2
# 599 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_1, 0
DynMultiPartner_1:
# 601 "data/maps/SkyPillar_2F/scripts.pory"
	checkplayergender
# 602 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DynMultiPartner_8
# 611 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_22
# 611 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_22
# 615 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_5, 1
DynMultiPartner_7:
# 618 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 2
	goto_if_eq DynMultiPartner_12
# 618 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 2
	goto_if_eq DynMultiPartner_12
# 622 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_7, 2
DynMultiPartner_11:
# 624 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 3
	goto_if_eq DynMultiPartner_28
# 624 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 3
	goto_if_eq DynMultiPartner_28
# 628 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_9, 3
DynMultiPartner_27:
# 630 "data/maps/SkyPillar_2F/scripts.pory"
	switch VAR_STARTER_MON
# 631 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_ROWLET, DynMultiPartner_35
# 638 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_TORCHIC, DynMultiPartner_36
# 645 "data/maps/SkyPillar_2F/scripts.pory"
	case SPECIES_PIPLUP, DynMultiPartner_37
DynMultiPartner_33:
	return

DynMultiPartner_2:
# 596 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_0, 0
	goto DynMultiPartner_1

DynMultiPartner_8:
# 603 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 1
	goto_if_eq DynMultiPartner_17
# 603 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 1
	goto_if_eq DynMultiPartner_17
# 607 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_3, 1
	goto DynMultiPartner_7

DynMultiPartner_12:
# 619 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_6, 2
	goto DynMultiPartner_11

DynMultiPartner_17:
# 604 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_2, 1
	goto DynMultiPartner_7

DynMultiPartner_22:
# 612 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_4, 1
	goto DynMultiPartner_7

DynMultiPartner_28:
# 625 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_8, 3
	goto DynMultiPartner_27

DynMultiPartner_35:
# 632 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_38
# 632 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_38
# 636 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_11, 4
	goto DynMultiPartner_33

DynMultiPartner_36:
# 639 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_43
# 639 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_43
# 643 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_13, 4
	goto DynMultiPartner_33

DynMultiPartner_37:
# 646 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_FIRST_MON, 4
	goto_if_eq DynMultiPartner_48
# 646 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SECOND_MON, 4
	goto_if_eq DynMultiPartner_48
# 650 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_15, 4
	goto DynMultiPartner_33

DynMultiPartner_38:
# 633 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_10, 4
	goto DynMultiPartner_33

DynMultiPartner_43:
# 640 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_12, 4
	goto DynMultiPartner_33

DynMultiPartner_48:
# 647 "data/maps/SkyPillar_2F/scripts.pory"
	dynmultipush DynMultiPartner_Text_14, 4
	goto DynMultiPartner_33


# 840 "data/maps/SkyPillar_2F/scripts.pory"
Tower2FRival:
# 841 "data/maps/SkyPillar_2F/scripts.pory"
	walk_left
# 841 "data/maps/SkyPillar_2F/scripts.pory"
	walk_left
# 842 "data/maps/SkyPillar_2F/scripts.pory"
	walk_in_place_faster_up
# 843 "data/maps/SkyPillar_2F/scripts.pory"
	step_end

TestFollower_Text_0:
# 219 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Let's go!$"

MakeNewTeam_Text_0:
# 306 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: Okay.\nLet's go then!$"

MakeNewTeam_Setup_Text_0:
# 318 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which Pokémon should I\nlead with?$"

MakeNewTeam_Setup_Text_1:
# 321 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\nsecond Pokémon?$"

MakeNewTeam_Setup_Text_2:
# 324 "data/maps/SkyPillar_2F/scripts.pory"
	.string "And which one should I pick\nas my third Pokémon?$"

DynMultiPartner_Text_0:
# 596 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Staraptor$"

DynMultiPartner_Text_1:
# 599 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Staraptor$"

DynMultiPartner_Text_2:
# 604 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gallade$"

DynMultiPartner_Text_3:
# 607 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Gallade$"

DynMultiPartner_Text_4:
# 612 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Gardevoir$"

DynMultiPartner_Text_5:
# 615 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Gardevoir$"

DynMultiPartner_Text_6:
# 619 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Clodsire$"

DynMultiPartner_Text_7:
# 622 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Clodsire$"

DynMultiPartner_Text_8:
# 625 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Crustle$"

DynMultiPartner_Text_9:
# 628 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Crustle$"

DynMultiPartner_Text_10:
# 633 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Blaziken$"

DynMultiPartner_Text_11:
# 636 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Blaziken$"

DynMultiPartner_Text_12:
# 640 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Empoleon$"

DynMultiPartner_Text_13:
# 643 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Empoleon$"

DynMultiPartner_Text_14:
# 647 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Decidueye$"

DynMultiPartner_Text_15:
# 650 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Decidueye$"

Tr2_2F_Man3Intro::
# 81 "data/maps/SkyPillar_2F/scripts.pory"
	.string "You two must be pretty good if Korrina\n"
	.string "is letting you inside this tower.\p"
	.string "But are you good enough to defeat us?$"

Tr2_2F_Woman5Intro::
# 86 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Working together during partner battles\n"
	.string "is essential.\p"
	.string "Let's see how well you do!$"

Tr2_2F_Man3Lost::
# 91 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Excellent teamwork!$"

Tr2_2F_Woman5Lost::
# 94 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Whoa!\n"
	.string "You two are good!$"

Tr2_2F_Woman5_PosBat::
# 103 "data/maps/SkyPillar_2F/scripts.pory"
	.string "There are still many floors left that\n"
	.string "are sure to test your skills.\p"
	.string "I hope you're prepared.$"

Tr2_2F_Man3_PosBat::
# 113 "data/maps/SkyPillar_2F/scripts.pory"
	.string "I see now why Korrina has decided to\n"
	.string "grant you access.$"

Tr1_2F_PsychicIntro::
# 164 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Behold the terrifying power of\n"
	.string "Psychic Pokémon!$"

Tr1_2F_PsychicLost::
# 168 "data/maps/SkyPillar_2F/scripts.pory"
	.string "What terrifying power!$"

Tr1_2F_Man5Intro::
# 171 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Let's get this show on the road!$"

Tr1_2F_Man5Lost::
# 174 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Couldn't make enough noise…$"

Tr1_2F_Man5_PosBat::
# 182 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Keep your spirit up!\n"
	.string "The way forwards will be perilous.$"

Tr1_2F_Psychic_PosBat::
# 191 "data/maps/SkyPillar_2F/scripts.pory"
	.string "I can peer into people's future, but\n"
	.string "yours is far too tumultuous to make\l"
	.string "any heads or tails out of it.$"

AT_2F_DefeatedTrainer_Text::
# 205 "data/maps/SkyPillar_2F/scripts.pory"
	.string "This place is far too hardcore\n"
	.string "for me…$"

OkayRivalLetsGo::
# 335 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Okay then, let's go!$"

WantMeToUse::
# 338 "data/maps/SkyPillar_2F/scripts.pory"
	.string "So, you want me to use {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}?$"

CurrentlyUsing::
# 342 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: My current team is {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Want me to change Pokémon?$"

KeepYouHealthy::
# 347 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: Don't worry, I'll keep your\n"
	.string "Pokémon in perfect health.$"

LetsFindKorrina::
# 351 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: We made it to the top!\n"
	.string "Let's go find Korrina!$"

RivalMonChosen::
# 656 "data/maps/SkyPillar_2F/scripts.pory"
	.string "You already picked that Pokémon once!\n"
	.string "I can't use it twice.$"

WhichOneIChooseSecond::
# 660 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\n"
	.string "second Pokémon?$"

WhichOneIChooseThird::
# 664 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Which one should be my\n"
	.string "third Pokémon?$"

InitialPartnerSetup::
# 668 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}While inside the tower, all trainer\n"
	.string "battles are partner battles.\p"
	.string "You will each use 3 Pokémon from your\n"
	.string "team, with your party consisting of\l"
	.string "the first 3 Pokémon in your team.\p"
	.string "Before you begin, you must choose\n"
	.string "a party for {RIVAL}.$"

RivalUses::
# 677 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{RIVAL} currently uses {STR_VAR_1},\n"
	.string "{STR_VAR_2}, and {STR_VAR_3}.\p"
	.string "Is this correct?$"

SpeakToMayAgain::
# 683 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change her current team.$"

SpeakToBrendanAgain::
# 687 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You may speak with {RIVAL} anytime to\n"
	.string "change his current team.$"

WhichShouldRivalChooseFirst::
# 692 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s first\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseSecond::
# 696 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s second\n"
	.string "Pokémon be?$"

WhichShouldRivalChooseThird::
# 700 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}What should {RIVAL}'s third\n"
	.string "Pokémon be?$"

MonAlreadyChosen::
# 704 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}That Pokémon has already been\n"
	.string "chosen.$"

MayHappyToSee::
# 709 "data/maps/SkyPillar_2F/scripts.pory"
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
# 730 "data/maps/SkyPillar_2F/scripts.pory"
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
# 769 "data/maps/SkyPillar_2F/scripts.pory"
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
# 789 "data/maps/SkyPillar_2F/scripts.pory"
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
# 830 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: I've been waiting here like I\n"
	.string "said I would.\p"
	.string "Now, let's get cracking with this tower!$"

YoureBackBrendan::
# 835 "data/maps/SkyPillar_2F/scripts.pory"
	.string "{RIVAL}: You're back!\p"
	.string "Now, let's get on top of this tower!$"
