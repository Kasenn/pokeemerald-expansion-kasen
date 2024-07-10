SkyPillar_4F_MapScripts::
	.byte 0


AT_4F_Tr1::
	checktrainerflag TRAINER_AT_4F_TR1_BLACKBELT
	goto_if 1, AT_4F_Tr1_2
	goto Tower_4F_Tr1_Battle
	return

AT_4F_Tr1_2:
	release
	end


AT_4F_Tr1_LeftTalk::
	msgbox AT_4F_Tr1_PostBatHexManiac, MSGBOX_NPC
	end


AT_4F_Tr1_RightTalk::
	msgbox AT_4F_Tr1_PostBatBlackBelt, MSGBOX_NPC
	end


Tower_4F_Tr1_Battle::
	lock
	special SavePlayerParty
	special SetPlayerParty
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
	applymovement 6, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox Tr1_4F_BlackbeltIntro
	closemessage
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr1_4F_HexManiacIntro
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_4F_Tr1_Battle_3
	case 1, Tower_4F_Tr1_Battle_4
	case 2, Tower_4F_Tr1_Battle_5
	case 3, Tower_4F_Tr1_Battle_6
	case 4, Tower_4F_Tr1_Battle_7
	case 5, Tower_4F_Tr1_Battle_8
	case 6, Tower_4F_Tr1_Battle_9
	case 7, Tower_4F_Tr1_Battle_10
	case 8, Tower_4F_Tr1_Battle_11
	case 9, Tower_4F_Tr1_Battle_12
	case 10, Tower_4F_Tr1_Battle_13
	case 11, Tower_4F_Tr1_Battle_14
Tower_4F_Tr1_Battle_1:
	switch VAR_RESULT
	case 1, Tower_4F_Tr1_Battle_17
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_4F_Tr1_Battle_3:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_4:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_5:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_6:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_7:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_8:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_9:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_10:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_11:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_12:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_13:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_14:
	multi_2_vs_2 TRAINER_AT_4F_TR1_BLACKBELT, Tr1_4F_Blackbelt_Lost, TRAINER_AT_4F_TR1_HEXMANIAC, Tr1_4F_HexManiac_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr1_Battle_1

Tower_4F_Tr1_Battle_17:
	settrainerflag TRAINER_AT_4F_TR1_BLACKBELT
	settrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
	release
	end


AT_4F_Tr2_Right::
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_Right_2
	setvar VAR_TEMP_2, 1
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Right_2:
	release
	end


AT_4F_Tr2_RightTalk::
	msgbox AT_4F_Tr2_PostBatLass, MSGBOX_NPC
	end


AT_4F_Tr2_Left::
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_Left_2
	setvar VAR_TEMP_2, 2
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_Left_2:
	release
	end


AT_4F_Tr2_LeftTalk::
	checktrainerflag TRAINER_AT_4F_TR2_LASS
	goto_if 1, AT_4F_Tr2_LeftTalk_2
	setvar VAR_TEMP_2, 3
	goto Tower_4F_Tr2_Battle
	return

AT_4F_Tr2_LeftTalk_2:
	msgbox AT_4F_Tr2_PostBatYoungster, MSGBOX_NPC
	end


Tower_4F_Tr2_Battle::
	lock
	special SavePlayerParty
	special SetPlayerParty
	switch VAR_TEMP_2
	case 1, Tower_4F_Tr2_Battle_3
	case 2, Tower_4F_Tr2_Battle_4
	case 3, Tower_4F_Tr2_Battle_5
Tower_4F_Tr2_Battle_1:
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_4F_Tr2_Battle_8
	case 1, Tower_4F_Tr2_Battle_9
	case 2, Tower_4F_Tr2_Battle_10
	case 3, Tower_4F_Tr2_Battle_11
	case 4, Tower_4F_Tr2_Battle_12
	case 5, Tower_4F_Tr2_Battle_13
	case 6, Tower_4F_Tr2_Battle_14
	case 7, Tower_4F_Tr2_Battle_15
	case 8, Tower_4F_Tr2_Battle_16
	case 9, Tower_4F_Tr2_Battle_17
	case 10, Tower_4F_Tr2_Battle_18
	case 11, Tower_4F_Tr2_Battle_19
Tower_4F_Tr2_Battle_6:
	switch VAR_RESULT
	case 1, Tower_4F_Tr2_Battle_22
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_4F_Tr2_Battle_3:
	playbgm MUS_ENCOUNTER_MALE, FALSE
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Tr2_4F_LassIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_4:
	playbgm MUS_ENCOUNTER_FEMALE, FALSE
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_5:
	playbgm MUS_ENCOUNTER_MALE, FALSE
	faceplayer
	msgbox Tr2_4F_YoungsterIntro
	goto Tower_4F_Tr2_Battle_1

Tower_4F_Tr2_Battle_8:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_9:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_10:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_11:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_12:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_13:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_14:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_15:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_16:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_17:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_18:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_19:
	multi_2_vs_2 TRAINER_AT_4F_TR2_LASS, Tr2_4F_Lass_Lost, TRAINER_AT_4F_TR2_YOUNGSTER, Tr2_4F_Youngster_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr2_Battle_6

Tower_4F_Tr2_Battle_22:
	settrainerflag TRAINER_AT_4F_TR2_LASS
	settrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
	release
	end


AT_4F_Tr3_Up::
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Up_2
	setvar VAR_TEMP_2, 1
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Up_2:
	release
	end


AT_4F_Tr3_UpTalk::
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_UpTalk_2
	setvar VAR_TEMP_2, 2
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_UpTalk_2:
	msgbox AT_4F_Tr3_PostBatBlackbelt, MSGBOX_NPC
	end


AT_4F_Tr3_Down::
	checktrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	goto_if 1, AT_4F_Tr3_Down_2
	setvar VAR_TEMP_2, 3
	goto Tower_4F_Tr3_Battle
	return

AT_4F_Tr3_Down_2:
	release
	end


AT_4F_Tr3_DownTalk::
	msgbox AT_4F_Tr3_PostBatBattleGirl, MSGBOX_NPC
	end


Tower_4F_Tr3_Battle::
	lock
	special SavePlayerParty
	special SetPlayerParty
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
	switch VAR_TEMP_2
	case 1, Tower_4F_Tr3_Battle_3
	case 2, Tower_4F_Tr3_Battle_4
	case 3, Tower_4F_Tr3_Battle_5
Tower_4F_Tr3_Battle_1:
	closemessage
	switch VAR_TOWER_PARTNER
	case 0, Tower_4F_Tr3_Battle_8
	case 1, Tower_4F_Tr3_Battle_9
	case 2, Tower_4F_Tr3_Battle_10
	case 3, Tower_4F_Tr3_Battle_11
	case 4, Tower_4F_Tr3_Battle_12
	case 5, Tower_4F_Tr3_Battle_13
	case 6, Tower_4F_Tr3_Battle_14
	case 7, Tower_4F_Tr3_Battle_15
	case 8, Tower_4F_Tr3_Battle_16
	case 9, Tower_4F_Tr3_Battle_17
	case 10, Tower_4F_Tr3_Battle_18
	case 11, Tower_4F_Tr3_Battle_19
Tower_4F_Tr3_Battle_6:
	switch VAR_RESULT
	case 1, Tower_4F_Tr3_Battle_22
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	return

Tower_4F_Tr3_Battle_3:
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_4:
	faceplayer
	msgbox Tr3_4F_BlackBeltIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_5:
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox Tr3_4F_BattleGirlIntro
	goto Tower_4F_Tr3_Battle_1

Tower_4F_Tr3_Battle_8:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_9:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_10:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_11:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_12:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_13:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_MAY_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_14:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_15:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_16:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ORAS_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_17:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_TORCHIC
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_18:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_PIPLUP
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_19:
	multi_2_vs_2 TRAINER_AT_4F_TR3_BATTLEGIRL, Tr3_4F_BattleGirl_Lost, TRAINER_AT_4F_TR3_BLACKBELT, Tr3_4F_Blackbelt_Lost, PARTNER_BRENDAN_ROWLET
	goto Tower_4F_Tr3_Battle_6

Tower_4F_Tr3_Battle_22:
	settrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	settrainerflag TRAINER_AT_4F_TR3_BLACKBELT
	release
	end


AT_4F_Tr1_PostBatHexManiac::
	.string "Please…\n"
	.string "Leave me be…$"

AT_4F_Tr1_PostBatBlackBelt::
	.string "Maybe I should go back to the gym.\n"
	.string "To be defeated by newcomers so easily…$"

Tr1_4F_BlackbeltIntro::
	.string "I was trained by Korrina herself.\n"
	.string "You stand no chance!$"

Tr1_4F_HexManiacIntro::
	.string "Please…\n"
	.string "Show me your Pokémon…$"

Tr1_4F_Blackbelt_Lost::
	.string "I have failed you, master!$"

Tr1_4F_HexManiac_Lost::
	.string "Please…\n"
	.string "Stop showing me your Pokémon…$"

AT_4F_Tr2_PostBatLass::
	.string "Please don't tell anyone we're here!\p"
	.string "We just wanted to catch some strong\n"
	.string "Pokémon!$"

AT_4F_Tr2_PostBatYoungster::
	.string "We heard there were strong Pokémon\n"
	.string "here, so we snuck past the guard.$"

Tr2_4F_LassIntro::
	.string "Eek!\n"
	.string "Not a trainer battle!$"

Tr2_4F_YoungsterIntro::
	.string "I'm the luckiest guy alive.\n"
	.string "Think you stand a chance?$"

Tr2_4F_Lass_Lost::
	.string "Please don't tell anyone we're here!$"

Tr2_4F_Youngster_Lost::
	.string "All I wanted was to catch strong\n"
	.string "Pokemon…$"

LassMegaRing::
	.string "No way am I fighting against someone\n"
	.string "with a Mega Ring!$"

AT_4F_Tr3_PostBatBlackbelt::
	.string "You are almost to the top.\n"
	.string "Keep pushing!$"

AT_4F_Tr3_PostBatBattleGirl::
	.string "Next time we will win!$"

Tr3_4F_BlackBeltIntro::
	.string "“The best offense is a good defense”.\n"
	.string "That's how the saying goes, right?$"

Tr3_4F_BattleGirlIntro::
	.string "“Strength over speed,”\n"
	.string "that's my motto!$"

Tr3_4F_BattleGirl_Lost::
	.string "I couldn't break your defense…$"

Tr3_4F_Blackbelt_Lost::
	.string "Even together, we still lose…$"
