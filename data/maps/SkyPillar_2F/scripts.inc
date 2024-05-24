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
	compare VAR_TEMP_6, 1
	goto_if_eq MakeNewTeam_2
	msgbox KeepYouHealthy
MakeNewTeam_1:
	closemessage
	release
	end

MakeNewTeam_2:
	msgbox LetsFindKorrina
	goto MakeNewTeam_1


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
	setvar VAR_RIVAL_AROUND_SANDSTONE, 3
	setflag FLAG_PARTNER_HEALS
	loadword 0, MakeNewTeam
	special HealPlayerParty
	setfollower 6, FOLLOWER_FLAG_ALL
	release
	end

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


Tower2FRival:
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

TestFollower_Text_0:
	.string "Let's go!$"

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

KeepYouHealthy::
	.string "{RIVAL}: Don't worry, I'll keep your\n"
	.string "Pokémon in perfect health.$"

LetsFindKorrina::
	.string "{RIVAL}: We made it to the top!\n"
	.string "Let's go find Korrina!$"

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
