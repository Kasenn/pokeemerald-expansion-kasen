SkyPillar_4F_MapScripts::
# 2 "data/maps/SkyPillar_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SkyPillar_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SkyPillar_4F/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SkyPillar_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SkyPillar_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SkyPillar_4F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


AT_4F_Tr1::
# 10 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR1_BLACKBELT
	goto_if 1, AT_4F_Tr1_2
# 14 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr1_Battle
	return

AT_4F_Tr1_2:
# 11 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr1_LeftTalk::
# 17 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr1_PostBatHexManiac, MSGBOX_NPC
	end


AT_4F_Tr1_RightTalk::
# 21 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr1_PostBatBlackBelt, MSGBOX_NPC
	end


Tower_4F_Tr1_Battle::
# 27 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 28 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 29 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 30 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 31 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 32 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 33 "data/maps/SkyPillar_4F/scripts.pory"
	delay 48
# 34 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 35 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr1_4F_BlackbeltIntro
# 36 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 37 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 38 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 39 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 40 "data/maps/SkyPillar_4F/scripts.pory"
	delay 48
# 41 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 42 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr1_4F_HexManiacIntro
# 43 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 44 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 45 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr1_Battle_3
# 47 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr1_Battle_4
# 49 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr1_Battle_5
# 51 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr1_Battle_6
# 53 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr1_Battle_7
# 55 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr1_Battle_8
# 57 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr1_Battle_9
# 59 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr1_Battle_10
# 61 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr1_Battle_11
# 63 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr1_Battle_12
# 65 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr1_Battle_13
# 67 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr1_Battle_14
Tower_4F_Tr1_Battle_1:
# 70 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr1_Battle_17
# 77 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
# 79 "data/maps/SkyPillar_4F/scripts.pory"
	waitstate
	return

Tower_4F_Tr1_Battle_3:
# 46 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_4:
# 48 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_5:
# 50 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_6:
# 52 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_7:
# 54 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_8:
# 56 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_9:
# 58 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_10:
# 60 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_11:
# 62 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_12:
# 64 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_13:
# 66 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_14:
# 68 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_17:
# 72 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_BLACKBELT
# 73 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
# 74 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_Right::
# 111 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_Right_2
# 115 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 116 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Right_2:
# 112 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_RightTalk::
# 119 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatLass, MSGBOX_NPC
	end


AT_4F_Tr2_Left::
# 123 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_Left_2
# 127 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 128 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Left_2:
# 124 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_LeftTalk::
# 131 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_LeftTalk_2
# 135 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 136 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_LeftTalk_2:
# 132 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatYoungster, MSGBOX_NPC
	end


Tower_4F_Tr2_Battle::
# 141 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 142 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 143 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 144 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 145 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_3
# 153 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr2_Battle_4
# 161 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr2_Battle_5
Tower_4F_Tr2_Battle_1:
# 166 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 167 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 168 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr2_Battle_8
# 170 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_9
# 172 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr2_Battle_10
# 174 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr2_Battle_11
# 176 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr2_Battle_12
# 178 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr2_Battle_13
# 180 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr2_Battle_14
# 182 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr2_Battle_15
# 184 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr2_Battle_16
# 186 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr2_Battle_17
# 188 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr2_Battle_18
# 190 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr2_Battle_19
Tower_4F_Tr2_Battle_6:
# 193 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_22
# 200 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 201 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
# 202 "data/maps/SkyPillar_4F/scripts.pory"
	waitstate
	return

Tower_4F_Tr2_Battle_3:
# 146 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 147 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 148 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 149 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 150 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 151 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 152 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_LassIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_4:
# 154 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_FEMALE, FALSE
# 155 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 156 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 157 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 158 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 159 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 160 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_5:
# 162 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 163 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 164 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_8:
# 169 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_9:
# 171 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_10:
# 173 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_11:
# 175 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_12:
# 177 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_13:
# 179 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_14:
# 181 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_15:
# 183 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_16:
# 185 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_17:
# 187 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_18:
# 189 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_19:
# 191 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_22:
# 195 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_LASS
# 196 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
# 197 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_Up::
# 238 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Up_2
# 242 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 243 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Up_2:
# 239 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_UpTalk::
# 246 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_UpTalk_2
# 250 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 251 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_UpTalk_2:
# 247 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBlackbelt, MSGBOX_NPC
	end


AT_4F_Tr3_Down::
# 254 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Down_2
# 258 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 259 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Down_2:
# 255 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_DownTalk::
# 262 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBattleGirl, MSGBOX_NPC
	end


Tower_4F_Tr3_Battle::
# 268 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 269 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 270 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 271 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 272 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 273 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_3
# 280 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr3_Battle_4
# 283 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr3_Battle_5
Tower_4F_Tr3_Battle_1:
# 291 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 292 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 293 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr3_Battle_8
# 295 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_9
# 297 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr3_Battle_10
# 299 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr3_Battle_11
# 301 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr3_Battle_12
# 303 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr3_Battle_13
# 305 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr3_Battle_14
# 307 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr3_Battle_15
# 309 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr3_Battle_16
# 311 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr3_Battle_17
# 313 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr3_Battle_18
# 315 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr3_Battle_19
Tower_4F_Tr3_Battle_6:
# 318 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 319 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_22
# 325 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 326 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
# 327 "data/maps/SkyPillar_4F/scripts.pory"
	waitstate
	return

Tower_4F_Tr3_Battle_3:
# 274 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 275 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 276 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 277 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 278 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 279 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_4:
# 281 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 282 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_5:
# 284 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 285 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 286 "data/maps/SkyPillar_4F/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 287 "data/maps/SkyPillar_4F/scripts.pory"
	waitmovement 0
# 288 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 289 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BattleGirlIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_8:
# 294 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_9:
# 296 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_10:
# 298 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_11:
# 300 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_12:
# 302 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_13:
# 304 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_14:
# 306 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_15:
# 308 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_16:
# 310 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_17:
# 312 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_18:
# 314 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_19:
# 316 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_22:
# 320 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
# 321 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BLACKBELT
# 322 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr1_PostBatHexManiac::
# 82 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Leave me be…$"

AT_4F_Tr1_PostBatBlackBelt::
# 86 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Maybe I should go back to the gym.\n"
	.string "To be defeated by newcomers so easily…$"

Tr1_4F_BlackbeltIntro::
# 90 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I was trained by Korrina herself.\n"
	.string "You stand no chance!$"

Tr1_4F_HexManiacIntro::
# 94 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Show me your Pokémon…$"

Tr1_4F_Blackbelt_Lost::
# 98 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I have failed you, master!$"

Tr1_4F_HexManiac_Lost::
# 101 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Stop showing me your Pokémon…$"

AT_4F_Tr2_PostBatLass::
# 205 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!\p"
	.string "We just wanted to catch some strong\n"
	.string "Pokémon!$"

AT_4F_Tr2_PostBatYoungster::
# 210 "data/maps/SkyPillar_4F/scripts.pory"
	.string "We heard there were strong Pokémon\n"
	.string "here, so we snuck past the guard.$"

Tr2_4F_LassIntro::
# 214 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Eek!\n"
	.string "Not a trainer battle!$"

Tr2_4F_YoungsterIntro::
# 218 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I'm the luckiest guy alive.\n"
	.string "Think you stand a chance?$"

Tr2_4F_Lass_Lost::
# 222 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!$"

Tr2_4F_Youngster_Lost::
# 225 "data/maps/SkyPillar_4F/scripts.pory"
	.string "All I wanted was to catch strong\n"
	.string "Pokemon…$"

LassMegaRing::
# 229 "data/maps/SkyPillar_4F/scripts.pory"
	.string "No way am I fighting against someone\n"
	.string "with a Mega Ring!$"

AT_4F_Tr3_PostBatBlackbelt::
# 330 "data/maps/SkyPillar_4F/scripts.pory"
	.string "You are almost to the top.\n"
	.string "Keep pushing!$"

AT_4F_Tr3_PostBatBattleGirl::
# 334 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Next time we will win!$"

Tr3_4F_BlackBeltIntro::
# 337 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“The best offense is a good defense”.\n"
	.string "That's how the saying goes, right?$"

Tr3_4F_BattleGirlIntro::
# 341 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“Strength over speed,”\n"
	.string "that's my motto!$"

Tr3_4F_BattleGirl_Lost::
# 345 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I couldn't break your defense…$"

Tr3_4F_Blackbelt_Lost::
# 348 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Even together, we still lose…$"
