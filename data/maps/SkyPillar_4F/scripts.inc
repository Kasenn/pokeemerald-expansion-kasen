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
# 75 "data/maps/SkyPillar_4F/scripts.pory"
	waitstate
	return

Tower_4F_Tr1_Battle_3:
# 42 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_4:
# 44 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_5:
# 46 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_6:
# 48 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_7:
# 50 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_8:
# 52 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_9:
# 54 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_10:
# 56 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_11:
# 58 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_12:
# 60 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_13:
# 62 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_14:
# 64 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_17:
# 68 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_BLACKBELT
# 69 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
# 70 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_Right::
# 107 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_Right_2
# 111 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 112 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Right_2:
# 108 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_RightTalk::
# 115 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatLass, MSGBOX_NPC
	end


AT_4F_Tr2_Left::
# 119 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_Left_2
# 123 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 124 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Left_2:
# 120 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_LeftTalk::
# 127 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_LeftTalk_2
# 131 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 132 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_LeftTalk_2:
# 128 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatYoungster, MSGBOX_NPC
	end


Tower_4F_Tr2_Battle::
# 137 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 138 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 139 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 140 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 141 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_3
# 146 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr2_Battle_4
# 151 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr2_Battle_5
Tower_4F_Tr2_Battle_1:
# 156 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 157 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 158 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr2_Battle_8
# 160 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_9
# 162 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr2_Battle_10
# 164 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr2_Battle_11
# 166 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr2_Battle_12
# 168 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr2_Battle_13
# 170 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr2_Battle_14
# 172 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr2_Battle_15
# 174 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr2_Battle_16
# 176 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr2_Battle_17
# 178 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr2_Battle_18
# 180 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr2_Battle_19
Tower_4F_Tr2_Battle_6:
# 183 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_22
# 190 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
# 192 "data/maps/SkyPillar_4F/scripts.pory"
	waitstate
	return

Tower_4F_Tr2_Battle_3:
# 142 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 143 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 3
# 144 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 145 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_LassIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_4:
# 147 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_FEMALE, FALSE
# 148 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 4
# 149 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 150 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_5:
# 152 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 153 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 154 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_8:
# 159 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_9:
# 161 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_10:
# 163 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_11:
# 165 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_12:
# 167 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_13:
# 169 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_14:
# 171 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_15:
# 173 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_16:
# 175 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_17:
# 177 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_18:
# 179 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_19:
# 181 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_22:
# 185 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_LASS
# 186 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
# 187 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_Up::
# 228 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Up_2
# 232 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 233 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Up_2:
# 229 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_UpTalk::
# 236 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_UpTalk_2
# 240 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 241 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_UpTalk_2:
# 237 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBlackbelt, MSGBOX_NPC
	end


AT_4F_Tr3_Down::
# 244 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Down_2
# 248 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 249 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Down_2:
# 245 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_DownTalk::
# 252 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBattleGirl, MSGBOX_NPC
	end


Tower_4F_Tr3_Battle::
# 258 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 259 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 260 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 261 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 262 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 263 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_3
# 267 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr3_Battle_4
# 270 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr3_Battle_5
Tower_4F_Tr3_Battle_1:
# 275 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 276 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TOWER_PARTNER
# 277 "data/maps/SkyPillar_4F/scripts.pory"
	case 0, Tower_4F_Tr3_Battle_8
# 279 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_9
# 281 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr3_Battle_10
# 283 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr3_Battle_11
# 285 "data/maps/SkyPillar_4F/scripts.pory"
	case 4, Tower_4F_Tr3_Battle_12
# 287 "data/maps/SkyPillar_4F/scripts.pory"
	case 5, Tower_4F_Tr3_Battle_13
# 289 "data/maps/SkyPillar_4F/scripts.pory"
	case 6, Tower_4F_Tr3_Battle_14
# 291 "data/maps/SkyPillar_4F/scripts.pory"
	case 7, Tower_4F_Tr3_Battle_15
# 293 "data/maps/SkyPillar_4F/scripts.pory"
	case 8, Tower_4F_Tr3_Battle_16
# 295 "data/maps/SkyPillar_4F/scripts.pory"
	case 9, Tower_4F_Tr3_Battle_17
# 297 "data/maps/SkyPillar_4F/scripts.pory"
	case 10, Tower_4F_Tr3_Battle_18
# 299 "data/maps/SkyPillar_4F/scripts.pory"
	case 11, Tower_4F_Tr3_Battle_19
Tower_4F_Tr3_Battle_6:
# 302 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 303 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_22
# 309 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 310 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
# 311 "data/maps/SkyPillar_4F/scripts.pory"
	waitstate
	return

Tower_4F_Tr3_Battle_3:
# 264 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 1
# 265 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 266 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_4:
# 268 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 269 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_5:
# 271 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 2
# 272 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 273 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BattleGirlIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_8:
# 278 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_9:
# 280 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_10:
# 282 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_11:
# 284 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_12:
# 286 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_13:
# 288 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_14:
# 290 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_15:
# 292 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_16:
# 294 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_17:
# 296 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_18:
# 298 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_19:
# 300 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_22:
# 304 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
# 305 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BLACKBELT
# 306 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr1_PostBatHexManiac::
# 78 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Leave me be…$"

AT_4F_Tr1_PostBatBlackBelt::
# 82 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Maybe I should go back to the gym.\n"
	.string "To be defeated by newcomers so easily…$"

Tr1_4F_BlackbeltIntro::
# 86 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I was trained by Korrina herself.\n"
	.string "You stand no chance!$"

Tr1_4F_HexManiacIntro::
# 90 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Show me your Pokémon…$"

Tr1_4F_Blackbelt_Lost::
# 94 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I have failed you, master!$"

Tr1_4F_HexManiac_Lost::
# 97 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Stop showing me your Pokémon…$"

AT_4F_Tr2_PostBatLass::
# 195 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!\p"
	.string "We just wanted to catch some strong\n"
	.string "Pokémon!$"

AT_4F_Tr2_PostBatYoungster::
# 200 "data/maps/SkyPillar_4F/scripts.pory"
	.string "We heard there were strong Pokémon\n"
	.string "here, so we snuck past the guard.$"

Tr2_4F_LassIntro::
# 204 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Eek!\n"
	.string "Not a trainer battle!$"

Tr2_4F_YoungsterIntro::
# 208 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I'm the luckiest guy alive.\n"
	.string "Think you stand a chance?$"

Tr2_4F_Lass_Lost::
# 212 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!$"

Tr2_4F_Youngster_Lost::
# 215 "data/maps/SkyPillar_4F/scripts.pory"
	.string "All I wanted was to catch strong\n"
	.string "Pokemon…$"

LassMegaRing::
# 219 "data/maps/SkyPillar_4F/scripts.pory"
	.string "No way am I fighting against someone\n"
	.string "with a Mega Ring!$"

AT_4F_Tr3_PostBatBlackbelt::
# 314 "data/maps/SkyPillar_4F/scripts.pory"
	.string "You are almost to the top.\n"
	.string "Keep pushing!$"

AT_4F_Tr3_PostBatBattleGirl::
# 318 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Next time we will win!$"

Tr3_4F_BlackBeltIntro::
# 321 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“The best offense is a good defense”.\n"
	.string "That's how the saying goes, right?$"

Tr3_4F_BattleGirlIntro::
# 325 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“Strength over speed,”\n"
	.string "that's my motto!$"

Tr3_4F_BattleGirl_Lost::
# 329 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I couldn't break your defense…$"

Tr3_4F_Blackbelt_Lost::
# 332 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Even together, we still lose…$"
