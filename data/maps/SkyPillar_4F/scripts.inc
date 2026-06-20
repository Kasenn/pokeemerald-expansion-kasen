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
	checktrainerflag TRAINER_AT_4F_BLACKBELT
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
	exclamationmark 6
# 32 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 33 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr1_4F_BlackbeltIntro
# 34 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 35 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 36 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 5
# 37 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 38 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr1_4F_HexManiacIntro
# 39 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 40 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 41 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr1_Battle_3
# 43 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr1_Battle_4
# 45 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr1_Battle_5
# 47 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr1_Battle_6
# 49 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr1_Battle_7
# 51 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr1_Battle_8
# 53 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr1_Battle_9
# 55 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr1_Battle_10
# 57 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr1_Battle_11
# 59 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr1_Battle_12
# 61 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr1_Battle_13
# 63 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr1_Battle_14
Tower_4F_Tr1_Battle_1:
# 66 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr1_Battle_17
# 73 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_4F_Tr1_Battle_3:
# 42 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_4:
# 44 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_5:
# 46 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_6:
# 48 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_7:
# 50 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_8:
# 52 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_9:
# 54 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_10:
# 56 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_11:
# 58 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_12:
# 60 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_13:
# 62 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_14:
# 64 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_17:
# 68 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_BLACKBELT
# 69 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_HEXMANIAC
# 70 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_Right::
# 106 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_LASS
	goto_if 1, AT_4F_Tr2_Right_2
# 110 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 111 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Right_2:
# 107 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_RightTalk::
# 114 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatLass, MSGBOX_NPC
	end


AT_4F_Tr2_Left::
# 118 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_LASS
	goto_if 1, AT_4F_Tr2_Left_2
# 122 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 123 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Left_2:
# 119 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_LeftTalk::
# 126 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_LASS
	goto_if 1, AT_4F_Tr2_LeftTalk_2
# 130 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 131 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_LeftTalk_2:
# 127 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatYoungster, MSGBOX_NPC
	end


Tower_4F_Tr2_Battle::
# 136 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 137 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 138 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 139 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 140 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_3
# 145 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr2_Battle_4
# 150 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr2_Battle_5
Tower_4F_Tr2_Battle_1:
# 155 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 156 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 157 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr2_Battle_8
# 159 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_9
# 161 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr2_Battle_10
# 163 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr2_Battle_11
# 165 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr2_Battle_12
# 167 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr2_Battle_13
# 169 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr2_Battle_14
# 171 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr2_Battle_15
# 173 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr2_Battle_16
# 175 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr2_Battle_17
# 177 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr2_Battle_18
# 179 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr2_Battle_19
Tower_4F_Tr2_Battle_6:
# 182 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 183 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_22
# 189 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 190 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_4F_Tr2_Battle_3:
# 141 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 142 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 3
# 143 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 144 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_LassIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_4:
# 146 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_FEMALE, FALSE
# 147 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 4
# 148 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 149 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_5:
# 151 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 152 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 153 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_8:
# 158 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_9:
# 160 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_10:
# 162 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_11:
# 164 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_12:
# 166 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_13:
# 168 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_14:
# 170 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_15:
# 172 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_16:
# 174 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_17:
# 176 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_18:
# 178 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_19:
# 180 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_22:
# 184 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_LASS
# 185 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_YOUNGSTER
# 186 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_Up::
# 226 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Up_2
# 230 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 231 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Up_2:
# 227 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_UpTalk::
# 234 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_UpTalk_2
# 238 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 239 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_UpTalk_2:
# 235 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBlackbelt, MSGBOX_NPC
	end


AT_4F_Tr3_Down::
# 242 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Down_2
# 246 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 247 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Down_2:
# 243 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_DownTalk::
# 250 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBattleGirl, MSGBOX_NPC
	end


Tower_4F_Tr3_Battle::
# 256 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 257 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 258 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 259 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 260 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 261 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_3
# 265 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr3_Battle_4
# 268 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr3_Battle_5
Tower_4F_Tr3_Battle_1:
# 273 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 274 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 275 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr3_Battle_8
# 277 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_9
# 279 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr3_Battle_10
# 281 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr3_Battle_11
# 283 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr3_Battle_12
# 285 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr3_Battle_13
# 287 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr3_Battle_14
# 289 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr3_Battle_15
# 291 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr3_Battle_16
# 293 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr3_Battle_17
# 295 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr3_Battle_18
# 297 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr3_Battle_19
Tower_4F_Tr3_Battle_6:
# 300 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 301 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_22
# 307 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 308 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_4F_Tr3_Battle_3:
# 262 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 1
# 263 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 264 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_4:
# 266 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 267 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_5:
# 269 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 2
# 270 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 271 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BattleGirlIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_8:
# 276 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_9:
# 278 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_10:
# 280 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_11:
# 282 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_12:
# 284 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_13:
# 286 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_14:
# 288 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_15:
# 290 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_16:
# 292 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_17:
# 294 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_18:
# 296 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_19:
# 298 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_22:
# 302 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_BATTLEGIRL
# 303 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_BLACKBELT2
# 304 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr1_PostBatHexManiac::
# 77 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Leave me be…$"

AT_4F_Tr1_PostBatBlackBelt::
# 81 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Maybe I should go back to the gym.\n"
	.string "To be defeated by newcomers so easily…$"

Tr1_4F_BlackbeltIntro::
# 85 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I was trained by Korrina herself.\n"
	.string "You stand no chance!$"

Tr1_4F_HexManiacIntro::
# 89 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Show me your Pokémon…$"

Tr1_4F_Blackbelt_Lost::
# 93 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I have failed you, master!$"

Tr1_4F_HexManiac_Lost::
# 96 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Stop showing me your Pokémon…$"

AT_4F_Tr2_PostBatLass::
# 193 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!\p"
	.string "We just wanted to catch some strong\n"
	.string "Pokémon!$"

AT_4F_Tr2_PostBatYoungster::
# 198 "data/maps/SkyPillar_4F/scripts.pory"
	.string "We heard there were strong Pokémon\n"
	.string "here, so we snuck past the guard.$"

Tr2_4F_LassIntro::
# 202 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Eek!\n"
	.string "Not a trainer battle!$"

Tr2_4F_YoungsterIntro::
# 206 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I'm the luckiest guy alive.\n"
	.string "Think you stand a chance?$"

Tr2_4F_Lass_Lost::
# 210 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!$"

Tr2_4F_Youngster_Lost::
# 213 "data/maps/SkyPillar_4F/scripts.pory"
	.string "All I wanted was to catch strong\n"
	.string "Pokemon…$"

LassMegaRing::
# 217 "data/maps/SkyPillar_4F/scripts.pory"
	.string "No way am I fighting against someone\n"
	.string "with a Mega Ring!$"

AT_4F_Tr3_PostBatBlackbelt::
# 311 "data/maps/SkyPillar_4F/scripts.pory"
	.string "You are almost to the top.\n"
	.string "Keep pushing!$"

AT_4F_Tr3_PostBatBattleGirl::
# 315 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Next time we will win!$"

Tr3_4F_BlackBeltIntro::
# 318 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“The best offense is a good defense”.\n"
	.string "That's how the saying goes, right?$"

Tr3_4F_BattleGirlIntro::
# 322 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“Strength over speed,”\n"
	.string "that's my motto!$"

Tr3_4F_BattleGirl_Lost::
# 326 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I couldn't break your defense…$"

Tr3_4F_Blackbelt_Lost::
# 329 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Even together, we still lose…$"
