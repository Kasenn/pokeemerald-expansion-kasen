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
	multi_2_vs_2 TRAINER_AT_4F_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_HEXMANIAC, Tr1_4F_HexManiac_Lost, VAR_TOWER_PARTNER
# 41 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr1_Battle_3
# 48 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_4F_Tr1_Battle_3:
# 43 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_BLACKBELT
# 44 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_HEXMANIAC
# 45 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_Right::
# 81 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_LASS
	goto_if 1, AT_4F_Tr2_Right_2
# 85 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 86 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Right_2:
# 82 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_RightTalk::
# 89 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatLass, MSGBOX_NPC
	end


AT_4F_Tr2_Left::
# 93 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_LASS
	goto_if 1, AT_4F_Tr2_Left_2
# 97 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 98 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Left_2:
# 94 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr2_LeftTalk::
# 101 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_LASS
	goto_if 1, AT_4F_Tr2_LeftTalk_2
# 105 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 106 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_LeftTalk_2:
# 102 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr2_PostBatYoungster, MSGBOX_NPC
	end


Tower_4F_Tr2_Battle::
# 111 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 112 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 113 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 114 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 115 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_3
# 120 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr2_Battle_4
# 125 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr2_Battle_5
Tower_4F_Tr2_Battle_1:
# 130 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 131 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_YOUNGSTER, Tr2_4F_Youngster_Lost, VAR_TOWER_PARTNER
# 132 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr2_Battle_8
# 139 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_4F_Tr2_Battle_3:
# 116 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 117 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 3
# 118 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 119 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_LassIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_4:
# 121 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_FEMALE, FALSE
# 122 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 4
# 123 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 124 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_5:
# 126 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 127 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 128 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_8:
# 134 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_LASS
# 135 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_YOUNGSTER
# 136 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_Up::
# 176 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Up_2
# 180 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 181 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Up_2:
# 177 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_UpTalk::
# 184 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_UpTalk_2
# 188 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 189 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_UpTalk_2:
# 185 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBlackbelt, MSGBOX_NPC
	end


AT_4F_Tr3_Down::
# 192 "data/maps/SkyPillar_4F/scripts.pory"
	checktrainerflag TRAINER_AT_4F_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Down_2
# 196 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 197 "data/maps/SkyPillar_4F/scripts.pory"
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Down_2:
# 193 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr3_DownTalk::
# 200 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox AT_4F_Tr3_PostBatBattleGirl, MSGBOX_NPC
	end


Tower_4F_Tr3_Battle::
# 206 "data/maps/SkyPillar_4F/scripts.pory"
	lock
# 207 "data/maps/SkyPillar_4F/scripts.pory"
	special SavePlayerParty
# 208 "data/maps/SkyPillar_4F/scripts.pory"
	special SetPlayerParty
# 209 "data/maps/SkyPillar_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 210 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_TEMP_2
# 211 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_3
# 215 "data/maps/SkyPillar_4F/scripts.pory"
	case 2, Tower_4F_Tr3_Battle_4
# 218 "data/maps/SkyPillar_4F/scripts.pory"
	case 3, Tower_4F_Tr3_Battle_5
Tower_4F_Tr3_Battle_1:
# 223 "data/maps/SkyPillar_4F/scripts.pory"
	closemessage
# 224 "data/maps/SkyPillar_4F/scripts.pory"
	multi_2_vs_2 TRAINER_AT_4F_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_BLACKBELT2, Tr3_4F_Blackbelt_Lost, VAR_TOWER_PARTNER
# 225 "data/maps/SkyPillar_4F/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/SkyPillar_4F/scripts.pory"
	case 1, Tower_4F_Tr3_Battle_8
# 232 "data/maps/SkyPillar_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/SkyPillar_4F/scripts.pory"
	special SetCB2WhiteOut
	return

Tower_4F_Tr3_Battle_3:
# 212 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 1
# 213 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 214 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_4:
# 216 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 217 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_5:
# 219 "data/maps/SkyPillar_4F/scripts.pory"
	exclamationmark 2
# 220 "data/maps/SkyPillar_4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 221 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox Tr3_4F_BattleGirlIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_8:
# 227 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_BATTLEGIRL
# 228 "data/maps/SkyPillar_4F/scripts.pory"
	settrainerflag TRAINER_AT_4F_BLACKBELT2
# 229 "data/maps/SkyPillar_4F/scripts.pory"
	release
	end


AT_4F_Tr1_PostBatHexManiac::
# 52 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Leave me be…$"

AT_4F_Tr1_PostBatBlackBelt::
# 56 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Maybe I should go back to the gym.\n"
	.string "To be defeated by newcomers so easily…$"

Tr1_4F_BlackbeltIntro::
# 60 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I was trained by Korrina herself.\n"
	.string "You stand no chance!$"

Tr1_4F_HexManiacIntro::
# 64 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Show me your Pokémon…$"

Tr1_4F_Blackbelt_Lost::
# 68 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I have failed you, master!$"

Tr1_4F_HexManiac_Lost::
# 71 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please…\n"
	.string "Stop showing me your Pokémon…$"

AT_4F_Tr2_PostBatLass::
# 143 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!\p"
	.string "We just wanted to catch some strong\n"
	.string "Pokémon!$"

AT_4F_Tr2_PostBatYoungster::
# 148 "data/maps/SkyPillar_4F/scripts.pory"
	.string "We heard there were strong Pokémon\n"
	.string "here, so we snuck past the guard.$"

Tr2_4F_LassIntro::
# 152 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Eek!\n"
	.string "Not a trainer battle!$"

Tr2_4F_YoungsterIntro::
# 156 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I'm the luckiest guy alive.\n"
	.string "Think you stand a chance?$"

Tr2_4F_Lass_Lost::
# 160 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Please don't tell anyone we're here!$"

Tr2_4F_Youngster_Lost::
# 163 "data/maps/SkyPillar_4F/scripts.pory"
	.string "All I wanted was to catch strong\n"
	.string "Pokemon…$"

LassMegaRing::
# 167 "data/maps/SkyPillar_4F/scripts.pory"
	.string "No way am I fighting against someone\n"
	.string "with a Mega Ring!$"

AT_4F_Tr3_PostBatBlackbelt::
# 236 "data/maps/SkyPillar_4F/scripts.pory"
	.string "You are almost to the top.\n"
	.string "Keep pushing!$"

AT_4F_Tr3_PostBatBattleGirl::
# 240 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Next time we will win!$"

Tr3_4F_BlackBeltIntro::
# 243 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“The best offense is a good defense”.\n"
	.string "That's how the saying goes, right?$"

Tr3_4F_BattleGirlIntro::
# 247 "data/maps/SkyPillar_4F/scripts.pory"
	.string "“Strength over speed,”\n"
	.string "that's my motto!$"

Tr3_4F_BattleGirl_Lost::
# 251 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I couldn't break your defense…$"

Tr3_4F_Blackbelt_Lost::
# 254 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Even together, we still lose…$"
