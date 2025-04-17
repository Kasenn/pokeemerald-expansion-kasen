KaolisleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RandomizeBrother
	.byte 0


RandomizeBrother::
	compare VAR_KAOLISLE_BIRDS, 100
	goto_if_lt RandomizeBrother_2
RandomizeBrother_1:
	switch VAR_KAOLISLE_BIRDS
	case 101, RandomizeBrother_6
	case 102, RandomizeBrother_7
	case 103, RandomizeBrother_8
	case 104, RandomizeBrother_9
	case 105, RandomizeBrother_10
	case 106, RandomizeBrother_11
	case 107, RandomizeBrother_12
	case 108, RandomizeBrother_13
	case 109, RandomizeBrother_14
	case 110, RandomizeBrother_15
	case 111, RandomizeBrother_16
	case 112, RandomizeBrother_17
	case 113, RandomizeBrother_18
	case 114, RandomizeBrother_19
	case 115, RandomizeBrother_20
	case 116, RandomizeBrother_21
	case 117, RandomizeBrother_22
	case 118, RandomizeBrother_23
	case 119, RandomizeBrother_24
	case 120, RandomizeBrother_25
	case 121, RandomizeBrother_26
	case 122, RandomizeBrother_27
	case 123, RandomizeBrother_28
	case 124, RandomizeBrother_29
	case 125, RandomizeBrother_30
	case 126, RandomizeBrother_31
	case 127, RandomizeBrother_32
	case 128, RandomizeBrother_33
	case 129, RandomizeBrother_34
	case 130, RandomizeBrother_35
	case 131, RandomizeBrother_36
RandomizeBrother_4:
	setflag FLAG_VISITED_KAOLISLE
	goto_if_set FLAG_BADGE03_GET, RandomizeBrother_38
	random 8
	copyvar VAR_TEMP_3, VAR_RESULT
	switch VAR_TEMP_3
	case 0, RandomizeBrother_41
	case 1, RandomizeBrother_42
	case 2, RandomizeBrother_43
	case 3, RandomizeBrother_44
	case 4, RandomizeBrother_45
	case 5, RandomizeBrother_46
	case 6, RandomizeBrother_47
	case 7, RandomizeBrother_48
	return

RandomizeBrother_2:
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	goto RandomizeBrother_1

RandomizeBrother_6:
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_7:
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_8:
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_9:
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_10:
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_11:
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_12:
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_13:
	setflag FLAG_TEMP_8
	goto RandomizeBrother_4

RandomizeBrother_14:
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_8
	goto RandomizeBrother_4

RandomizeBrother_15:
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_16:
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_17:
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_18:
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_19:
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_20:
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_21:
	setflag FLAG_TEMP_9
	goto RandomizeBrother_4

RandomizeBrother_22:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_23:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_24:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_25:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_26:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_27:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_28:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_29:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	goto RandomizeBrother_4

RandomizeBrother_30:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_31:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_32:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_33:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_34:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_35:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_36:
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_38:
	end

RandomizeBrother_41:
	setobjectxyperm 30, 33, 3
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_42:
	setobjectxyperm 30, 29, 26
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_43:
	setobjectxyperm 30, 19, 43
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_44:
	setobjectxyperm 30, 25, 51
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_DOWN
	return

RandomizeBrother_45:
	setobjectxyperm 30, 53, 52
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_46:
	setobjectxyperm 30, 52, 61
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
	return

RandomizeBrother_47:
	setobjectxyperm 30, 18, 15
	setobjectmovementtype 30, MOVEMENT_TYPE_LOOK_AROUND
	return

RandomizeBrother_48:
	setobjectxyperm 30, 53, 25
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
	return


Kaolisle_Brother::
	lock
	faceplayer
	goto_if_unset FLAG_KAOLISLE_BROTHER_INTRO, Kaolisle_Brother_2
Kaolisle_Brother_1:
	switch VAR_TEMP_3
	case 0, Kaolisle_Brother_6
	case 1, Kaolisle_Brother_7
	case 2, Kaolisle_Brother_8
	case 3, Kaolisle_Brother_9
	case 4, Kaolisle_Brother_10
	case 5, Kaolisle_Brother_11
	case 6, Kaolisle_Brother_12
	case 7, Kaolisle_Brother_13
Kaolisle_Brother_4:
	end

Kaolisle_Brother_2:
	msgbox Kaolisle_BrotherIntro, MSGBOX_DEFAULT
	setflag FLAG_KAOLISLE_BROTHER_INTRO
	goto Kaolisle_Brother_1

Kaolisle_Brother_6:
	turnobject 30, DIR_NORTH
	msgbox KB_LookingTowardsPearlwood, MSGBOX_DEFAULT
	closemessage
	release
	goto Kaolisle_Brother_4

Kaolisle_Brother_7:
	msgbox KB_VisitingGym, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_8:
	msgbox KB_PokeFanClub, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_9:
	msgbox KB_LesserBeach, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_10:
	msgbox KB_Hotel, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_11:
	msgbox KB_GreaterBeach, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_12:
	msgbox KB_BoringPlace, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_13:
	turnobject 30, DIR_EAST
	msgbox KB_IslandToTheEast, MSGBOX_DEFAULT
	closemessage
	release
	goto Kaolisle_Brother_4


KaolisleCity_Sailor::
	msgbox KaolisleCity_Sailor_Text, MSGBOX_NPC
	end


KaolisleCity_NinjaBoy::
	msgbox KaolisleCity_NinjaBoy_Text, MSGBOX_NPC
	end


KaolisleCity_Woman2::
	msgbox KaolisleCity_Woman2_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3::
	msgbox KaolisleCity_Boy3_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3_Couple::
	msgbox KaolisleCity_Boy3_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_Lass_Couple::
	msgbox KaolisleCity_Lass_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_MysteryMan::
	checktrainerflag TRAINER_KAOLISLE_CELEBI_TR2
	goto_if 1, KaolisleCity_MysteryMan_2
	lock
	goto_if_set FLAG_TEMP_4, KaolisleCity_MysteryMan_5
	msgbox KaolisleCity_MysteryMan_Text, MSGBOX_DEFAULT
	faceplayer
	msgbox KaolisleCity_MysteryMan_Text2, MSGBOX_YESNO
KaolisleCity_MysteryMan_4:
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleCity_MysteryMan_8
	call CountGymBadges
	switch VAR_RESULT
	case 0, KaolisleCity_MysteryMan_12
	case 1, KaolisleCity_MysteryMan_12
	case 2, KaolisleCity_MysteryMan_12
	case 3, KaolisleCity_MysteryMan_13
	case 4, KaolisleCity_MysteryMan_14
	case 5, KaolisleCity_MysteryMan_14
	case 6, KaolisleCity_MysteryMan_15
	case 7, KaolisleCity_MysteryMan_15
	case 8, KaolisleCity_MysteryMan_15
	return

KaolisleCity_MysteryMan_2:
	msgbox KaolisleCity_MysteryMan_AfterBattleGossip, MSGBOX_NPC
	end

KaolisleCity_MysteryMan_5:
	faceplayer
	msgbox KaolisleCity_MysteryMan_TextShort, MSGBOX_YESNO
	goto KaolisleCity_MysteryMan_4

KaolisleCity_MysteryMan_8:
	msgbox KaolisleCity_MysteryMan_Decline, MSGBOX_NPC
	turnobject 7, DIR_NORTH
	setflag FLAG_TEMP_4
	end

KaolisleCity_MysteryMan_12:
	msgbox KaolisleCity_MysteryMan_2Badges, MSGBOX_NPC
	turnobject 7, DIR_NORTH
	goto_if_unset FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_17
KaolisleCity_MysteryMan_16:
	end

KaolisleCity_MysteryMan_13:
	msgbox KaolisleCity_MysteryMan_3Badges, MSGBOX_NPC
	turnobject 7, DIR_NORTH
	goto_if_unset FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_20
KaolisleCity_MysteryMan_19:
	end

KaolisleCity_MysteryMan_14:
	msgbox KaolisleCity_MysteryMan_4Badges, MSGBOX_NPC
	turnobject 7, DIR_NORTH
	goto_if_unset FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_23
KaolisleCity_MysteryMan_22:
	end

KaolisleCity_MysteryMan_15:
	goto KaolisleCity_MysteryMan_Battle
	return

KaolisleCity_MysteryMan_17:
	startquest FLAG_Q20_KAOLISLE_OLD_MAN_START
	special ShowJournalPopupAdd
	goto KaolisleCity_MysteryMan_16

KaolisleCity_MysteryMan_20:
	startquest FLAG_Q20_KAOLISLE_OLD_MAN_START
	special ShowJournalPopupAdd
	goto KaolisleCity_MysteryMan_19

KaolisleCity_MysteryMan_23:
	startquest FLAG_Q20_KAOLISLE_OLD_MAN_START
	special ShowJournalPopupAdd
	goto KaolisleCity_MysteryMan_22


KaolisleCity_ExpertM::
	goto_if_unset FLAG_REVEAL_PEARLSTRING, KaolisleCity_ExpertM_2
KaolisleCity_ExpertM_1:
	msgbox KaolisleCity_ExpertM_Text, MSGBOX_NPC
	setflag FLAG_REVEAL_PEARLSTRING
	end

KaolisleCity_ExpertM_2:
	clearflag FLAG_OLDMAN_PEARLSTRING
	goto KaolisleCity_ExpertM_1


KaolisleCity_Zigzagoon_Child::
	msgbox KaolisleCity_Zigzagoon_Child_Text, MSGBOX_NPC
	end


KaolisleCity_OldMan::
	msgbox KaolisleCity_OldMan_Text, MSGBOX_NPC
	end


KaolisleCity_Gentleman::
	msgbox KaolisleCity_Gentleman_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher1::
	goto_if_set FLAG_RECEIVED_GOOD_ROD, KaolisleCity_Fisher1_2
	checkitem ITEM_LURE
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleCity_Fisher1_5
	goto_if_set FLAG_QUEST_FOR_GOOD_ROD, KaolisleCity_Fisher1_8
	msgbox KaolisleCity_Fisher1_Text, MSGBOX_NPC
	setflag FLAG_QUEST_FOR_GOOD_ROD
	goto_if_unset FLAG_Q22_KAOLISLE_FISHERMAN_START, KaolisleCity_Fisher1_14
KaolisleCity_Fisher1_13:
	end

KaolisleCity_Fisher1_2:
	msgbox HopeYouGetAlotOfFish, MSGBOX_NPC
	end

KaolisleCity_Fisher1_5:
	lock
	faceplayer
	removeitem ITEM_LURE
	msgbox MyLure, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	waitfanfare
	setflag FLAG_RECEIVED_GOOD_ROD
	msgbox HopeYouGetAlotOfFish, MSGBOX_NPC
	goto_if_set FLAG_Q22_KAOLISLE_FISHERMAN_START, KaolisleCity_Fisher1_11
KaolisleCity_Fisher1_10:
	end

KaolisleCity_Fisher1_8:
	msgbox KaolisleCity_Fisher1_Text2, MSGBOX_NPC
	goto_if_unset FLAG_Q22_KAOLISLE_FISHERMAN_START, KaolisleCity_Fisher1_17
KaolisleCity_Fisher1_16:
	end

KaolisleCity_Fisher1_11:
	completequest FLAG_Q22_KAOLISLE_FISHERMAN_COMPLETE
	special ShowJournalPopupRemove
	goto KaolisleCity_Fisher1_10

KaolisleCity_Fisher1_14:
	startquest FLAG_Q22_KAOLISLE_FISHERMAN_START
	special ShowJournalPopupAdd
	goto KaolisleCity_Fisher1_13

KaolisleCity_Fisher1_17:
	startquest FLAG_Q22_KAOLISLE_FISHERMAN_START
	special ShowJournalPopupAdd
	goto KaolisleCity_Fisher1_16


KaolisleCity_Fisher2::
	msgbox KaolisleCity_Fisher2_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher3::
	msgbox KaolisleCity_Fisher3_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher4::
	msgbox KaolisleCity_Fisher4_Text, MSGBOX_NPC
	end


KaolisleCity_TriathleteF::
	msgbox KaolisleCity_TriathleteF_Text, MSGBOX_NPC
	end


KaolisleCity_LittleGirl::
	msgbox KaolisleCity_LittleGirl_Text, MSGBOX_NPC
	end


KaolisleCity_Sailor2::
	msgbox KaolisleCity_Sailor2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing1::
	msgbox KaolisleCity_TuberChasing1_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing2::
	msgbox KaolisleCity_TuberChasing2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberTalking1::
	goto_if_set FLAG_OBTAINED_BEACHBALL, KaolisleCity_TuberTalking1_2
	lock
	faceplayer
	goto_if_set FLAG_TEMP_3, KaolisleCity_TuberTalking1_5
	msgbox KaolisleCity_TuberTalking1_Text, MSGBOX_DEFAULT
KaolisleCity_TuberTalking1_4:
	setflag FLAG_TEMP_3
	multichoice 23, 0, MULTI_WHICHONEWOULDWIN, 1
	compare VAR_RESULT, 0
	goto_if_eq KaolisleCity_TuberTalking1_9
	waitse
	playse SE_SUCCESS
	msgbox BeachCorrectAnswer, MSGBOX_DEFAULT
	giveitem ITEM_DIVE_BALL
	setflag FLAG_OBTAINED_BEACHBALL
	closemessage
	release
	end

KaolisleCity_TuberTalking1_2:
	msgbox WasFunGame, MSGBOX_NPC
	end

KaolisleCity_TuberTalking1_5:
	msgbox CareToTryAgain, MSGBOX_DEFAULT
	goto KaolisleCity_TuberTalking1_4

KaolisleCity_TuberTalking1_9:
	waitse
	playse SE_FAILURE
	msgbox BeachWrongAnswer, MSGBOX_NPC
	end


KaolisleCity_TuberTalking2::
	msgbox KaolisleCity_TuberTalking2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberLearning::
	msgbox KaolisleCity_TuberLearning_Text, MSGBOX_NPC
	end


KaolisleCity_SwimTeacher::
	msgbox KaolisleCity_SwimTeacher_Text, MSGBOX_NPC
	end


KaolisleCity_Father::
	msgbox KaolisleCity_Father_Text, MSGBOX_NPC
	end


KaolisleCity_Mother::
	msgbox KaolisleCity_Mother_Text, MSGBOX_NPC
	end


KaolisleCity_Swimmer::
	msgbox KaolisleCity_Swimmer_Text, MSGBOX_NPC
	end


KaolisleCity_Scott::
	msgbox KaolisleCity_Scott_Text, MSGBOX_NPC
	end


KaolisleCity_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox KaolisleCity_Zigzagoon_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


KaolisleCity_SignHarbor::
	msgbox KaolisleCity_SignHarbor_Text, MSGBOX_SIGN
	end


KaolisleCity_SignGym::
	msgbox KaolisleCity_SignGym_Text, MSGBOX_SIGN
	end


KaolisleCity_SignHotel::
	msgbox KaolisleCity_SignHotel_Text, MSGBOX_SIGN
	end


KaolisleCity_SignFanClub::
	msgbox KaolisleCity_SignFanClub_Text, MSGBOX_SIGN
	end


KaolisleCity_SignIntro::
	msgbox KaolisleCity_SignIntro_Text, MSGBOX_SIGN
	end


Pikipek1::
	addvar VAR_KAOLISLE_BIRDS, 1
	setvar VAR_TEMP_9, SPECIES_PIKIPEK
	goto KaolisleBirdMain
	return


Pikipek2::
	addvar VAR_KAOLISLE_BIRDS, 2
	setvar VAR_TEMP_9, SPECIES_PIKIPEK
	goto KaolisleBirdMain
	return


Pikipek4::
	addvar VAR_KAOLISLE_BIRDS, 4
	setvar VAR_TEMP_9, SPECIES_PIKIPEK
	goto KaolisleBirdMain
	return


Trumbeak8::
	addvar VAR_KAOLISLE_BIRDS, 8
	setvar VAR_TEMP_9, SPECIES_TRUMBEAK
	goto KaolisleBirdMain
	return


Trumbeak16::
	addvar VAR_KAOLISLE_BIRDS, 16
	setvar VAR_TEMP_9, SPECIES_TRUMBEAK
	goto KaolisleBirdMain
	return


KaolisleBirdMain::
	lock
	faceplayer
	waitse
	bufferspeciesname STR_VAR_1, VAR_TEMP_9
	playmoncry VAR_TEMP_9, CRY_MODE_NORMAL
	waitmoncry
	msgbox KaolisleBirdMain_Text_0
	closemessage
	fadescreen FADE_TO_BLACK
	delay 15
	msgbox NudgeMon
	closemessage
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	release
	return


KaolisleCity_MysteryMan_Battle::
	checkpartylevel 55
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleCity_MysteryMan_Battle_2
KaolisleCity_MysteryMan_Battle_1:
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleCity_MysteryMan_Battle_5
	msgbox KaolisleCity_MysteryMan_Battle_Intro
	trainerbattle_no_intro TRAINER_KAOLISLE_CELEBI_TR2, KaolisleCity_MysteryMan_Battle_Lose
	msgbox KaolisleCity_MysteryMan_PostBattle
	msgbox KaolisleCity_MysteryMan_PostBattle2
	giveitem ITEM_DISC_FRAGMENT
	checkitem ITEM_DISC_FRAGMENT, 2
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleCity_MysteryMan_Battle_8
	msgbox Kaolisle_ExplainFragment
KaolisleCity_MysteryMan_Battle_7:
	release
	goto_if_set FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_Battle_12
KaolisleCity_MysteryMan_Battle_11:
	end

KaolisleCity_MysteryMan_Battle_2:
	msgbox Kaolisle_AbsolutelyCertain, MSGBOX_YESNO
	goto KaolisleCity_MysteryMan_Battle_1

KaolisleCity_MysteryMan_Battle_5:
	msgbox KaolisleCity_MysteryMan_Decline, MSGBOX_NPC
	turnobject 7, DIR_NORTH
	setflag FLAG_TEMP_4
	end

KaolisleCity_MysteryMan_Battle_8:
	msgbox Kaolisle_ExplainFragmentShort
	goto KaolisleCity_MysteryMan_Battle_7

KaolisleCity_MysteryMan_Battle_12:
	completequest FLAG_Q20_KAOLISLE_OLD_MAN_COMPLETE
	special ShowJournalPopupRemove
	goto KaolisleCity_MysteryMan_Battle_11


KaolisleCity_Zigzagoon_Text_0:
	.string "Zigzagoon: Guguuh!$"

KaolisleBirdMain_Text_0:
	.string "This looks to be one of the\nlost {STR_VAR_1}s.$"

Kaolisle_BrotherIntro::
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "You finally caught up!\p"
	.string "I've already defeated the Gym Leader\n"
	.string "here and obtained my next badge.\p"
	.string "I was going to take the ferry to\n"
	.string "Rockliffe Town but apparently\l"
	.string "there are some technical difficulties\l"
	.string "which makes it impossible for the ferry\l"
	.string "to currently dock in the harbor there.\p"
	.string "To pass the time, I thought I'd tour\n"
	.string "the city and see if there's anything\l"
	.string "interesting going on.\p"
	.string "Speaking of interesting…$"

KB_LookingTowardsPearlwood::
	.string "{BROTHER}: If I look real close, I think\n"
	.string "I can see Pearlwood in the horizon.\p"
	.string "We're so far away from home,\n"
	.string "yet it feels like we only just left.$"

KB_VisitingGym::
	.string "{BROTHER}: This is the Kaolisle City\n"
	.string "Pokémon Gym.\p"
	.string "I know, it doesn't look like your\n"
	.string "average gym but I assure you,\l"
	.string "the trainers there are no pushovers.$"

KB_PokeFanClub::
	.string "{BROTHER}: Apparently this is some kind\n"
	.string "of Pokémon Fan Club?\l"
	.string "I don't really get the point.\p"
	.string "Why coop up inside and talk about\n"
	.string "Pokémon when you could be out there,\l"
	.string "catching them and training them?$"

KB_LesserBeach::
	.string "{BROTHER}: This beach seems a bit\n"
	.string "overgrown.\p"
	.string "I don't mind it though.\p"
	.string "It seems peaceful enough to\n"
	.string "where you can have a relaxing time.$"

KB_Hotel::
	.string "{BROTHER}: So, this is the Grand Resort.\n"
	.string "Talk of the town.\p"
	.string "There seem to be a lot of people here\n"
	.string "this time of year.\p"
	.string "I bet the prices are through the roof,\n"
	.string "assuming you can even get a room.$"

KB_GreaterBeach::
	.string "{BROTHER}: This looks like a nice beach.\n"
	.string "Not a fan of the crowd though.\p"
	.string "You know, if you have an Itemfinder,\n"
	.string "it may not be a bad idea to comb through\l"
	.string "the beach with it.\p"
	.string "You never know what treasures the\n"
	.string "ocean may have washed ashore.$"

KB_BoringPlace::
	.string "{BROTHER}: I have to say, there's not\n"
	.string "a whole lot going around here.\p"
	.string "Sure, you can relax at the resort,\n"
	.string "but where's all the fun stuff?\l"
	.string "Where's all the activities?$"

KB_IslandToTheEast::
	.string "{BROTHER}: There seems to be an island\n"
	.string "to the east of here with a house on it.\p"
	.string "Wonder who would build a house\n"
	.string "in such a hard-to-reach place…$"

KaolisleCity_Sailor_Text::
	.string "The ocean around Kaolisle looks so huge\n"
	.string "and endless, but thanks to the great\l"
	.string "ferry system, you can get to the other\l"
	.string "cities in no time!$"

KaolisleCity_NinjaBoy_Text::
	.string "You can fit absolutely anything inside\n"
	.string "of a trainer's bag, huh!\p"
	.string "If it was me, I'd sure like to tuck\n"
	.string "myself in a bag and tag along on\l"
	.string "someone's adventure!$"

KaolisleCity_Woman2_Text::
	.string "Looking for the Pokémon Gym?\p"
	.string "Just look for a way downstairs to the\n"
	.string "giant quarry in the middle of the city.\l"
	.string "You can't miss it!$"

KaolisleCity_Boy3_Text::
	.string "If you're buying Poké Balls at a Poké\n"
	.string "Mart, you should buy them in sets of 10!$"

KaolisleCity_Boy3_Couple_Text::
	.string "I've never been that great of\n"
	.string "a trainer.\p"
	.string "I hope that by enrolling in the\n"
	.string "Trainers' School, I can change that.$"

KaolisleCity_Lass_Couple_Text::
	.string "Have you heard of the Coralgrove\n"
	.string "Trainers' School?\p"
	.string "My boyfriend and I are planning on\n"
	.string "enrolling there!$"

KaolisleCity_MysteryMan_Text::
	.string "Some days I gaze in Its direction,\n"
	.string "wondering, if It still remembers us…\p"
	.string "… … … …$"

KaolisleCity_MysteryMan_Text2::
	.string "Oh?\p"
	.string "Don't mind me, I'm just a washed-up\n"
	.string "senior who still reminisces about\l"
	.string "the old days.\p"
	.string "I noticed you're a trainer.\n"
	.string "Say, would you be interested in\l"
	.string "a Pokémon battle?\p"
	.string "I used to be quite a strong\n"
	.string "trainer in the past.$"

KaolisleCity_MysteryMan_TextShort::
	.string "Say, would you be interested in\n"
	.string "a Pokémon battle?\p"
	.string "I used to be quite a strong\n"
	.string "trainer in the past.$"

KaolisleCity_MysteryMan_Decline::
	.string "I understand. I won't bother you\n"
	.string "any further.$"

KaolisleCity_MysteryMan_2Badges::
	.string "Hm…\p"
	.string "I notice you only have 2 Gym Badges.\n"
	.string "I don't think this would be a fair match.\p"
	.string "If you can get a few more Badges,\n"
	.string "I might reconsider it.$"

KaolisleCity_MysteryMan_3Badges::
	.string "Hm…\p"
	.string "I notice you only have 3 Gym Badges.\n"
	.string "I don't think this would be a fair match.\p"
	.string "It's a good start but I would recommend\n"
	.string "you get a couple more first.$"

KaolisleCity_MysteryMan_4Badges::
	.string "Hm…\p"
	.string "You seem pretty strong, but I would\n"
	.string "suggest you get at least 6 badges\l"
	.string "before trying to challenge me.$"

KaolisleCity_ExpertM_Text::
	.string "Oh, are you a trainer from afar?\p"
	.string "I bet you must've even traveled the\n"
	.string "Coralgrove Archipelago!\p"
	.string "Why, I remember I used to visit my\n"
	.string "friends who lived there every summer.\p"
	.string "One summer day I found this real\n"
	.string "beautiful star piece on a beach\l"
	.string "at Route 1.\p"
	.string "My mother told me it probably belonged\n"
	.string "to someone and I should leave it there.\l"
	.string "I wonder if anyone ever picked it up…$"

KaolisleCity_Zigzagoon_Child_Text::
	.string "Zigzagoon is so cute!\p"
	.string "I heard some places have really\n"
	.string "mean-looking Zigzagoons.\l"
	.string "Glad we don't have them!$"

KaolisleCity_OldMan_Text::
	.string "As they say…\p"
	.string "There are plenty of Pokémon in the sea.\p"
	.string "Say, how many Pokémon do you think\n"
	.string "there are in the world?$"

KaolisleCity_Gentleman_Text::
	.string "The Grand Resort attracts people\n"
	.string "from all walks of life.\p"
	.string "If you're patient, you might even\n"
	.string "see a glimpse of someone famous!$"

KaolisleCity_Fisher1_Text::
	.string "I've been fishing here for a while but\n"
	.string "so far my luck has been abysmal.\p"
	.string "I bet it's because I left my lucky\n"
	.string "lure at home.\p"
	.string "Would you do me a favor and fetch it\n"
	.string "for me? I promise I'll make it worth\l"
	.string "your while.\p"
	.string "You can find my house in southern part\n"
	.string "of Sandstone City.\p"
	.string "My wife probably won't give the rod\n"
	.string "to just anyone.\l"
	.string "Tell her that Clancy sent you and\l"
	.string "she'll know.$"

KaolisleCity_Fisher1_Text2::
	.string "Again, You can find my house in\n"
	.string "southern part of Sandstone City.\p"
	.string "My wife probably won't give the lure\n"
	.string "to just anyone.\l"
	.string "Tell her that Clancy sent you and\l"
	.string "she'll know.$"

MyLure::
	.string "Ah, I see you've got the lure!\p"
	.string "Thank you so much for bringing it\n"
	.string "to me.\p"
	.string "You've been such a champ.\n"
	.string "Here, take this as your reward.$"

HopeYouGetAlotOfFish::
	.string "Hope your luck is better than mine!$"

KaolisleCity_Fisher2_Text::
	.string "This place is swarming with\n"
	.string "rare fish!\p"
	.string "I hope you brought something better\n"
	.string "than an Old Rod!$"

KaolisleCity_Fisher3_Text::
	.string "This is my secret spot.\p"
	.string "Shoo, before you scare all the\n"
	.string "fish away!$"

KaolisleCity_Fisher4_Text::
	.string "A friend of mine said they once reeled\n"
	.string "in a Finizen.\p"
	.string "I know there are some rare fish in\n"
	.string "these waters but I don't think I've\l"
	.string "ever witnessed someone actually\l"
	.string "fishing up any Paldean Pokémon.$"

KaolisleCity_TriathleteF_Text::
	.string "There are two beaches in Kaolisle.\p"
	.string "The other one is full to the brim\n"
	.string "with tourists, so I'd rather jog here.$"

KaolisleCity_LittleGirl_Text::
	.string "Dad told me I'm not allowed in the\n"
	.string "ocean so I'm stuck in this little pool…$"

KaolisleCity_Sailor2_Text::
	.string "All these rich people with their\n"
	.string "yachts…\p"
	.string "… … … …\p"
	.string "Not going to lie,\n"
	.string "I wish I could afford one…$"

KaolisleCity_TuberChasing1_Text::
	.string "Am I chasing my brother or is\n"
	.string "my brother chasing me?\p"
	.string "Who cares.\n"
	.string "The main thing is to have fun.$"

KaolisleCity_TuberChasing2_Text::
	.string "Whee!$"

CareToTryAgain::
	.string "Want to guess again?$"

KaolisleCity_TuberTalking1_Text::
	.string "We found this cool treasure\n"
	.string "in the sand.\p"
	.string "You can have it if you can answer\n"
	.string "our question correctly.\p"
	.string "The question is:\p"
	.string "Which one would win in a fight:\n"
	.string "Hyper Mega Ultra Dyna Charizard Z,\l"
	.string "or a Wobbuffet?$"

BeachWrongAnswer::
	.string "Wrong! The treasure is ours!$"

BeachCorrectAnswer::
	.string "Yay, you got it right!\n"
	.string "Here you go!$"

WasFunGame::
	.string "Let's play again soon!$"

KaolisleCity_TuberTalking2_Text::
	.string "He always does this…$"

KaolisleCity_TuberLearning_Text::
	.string "My big sister is teaching me to swim!$"

KaolisleCity_SwimTeacher_Text::
	.string "I'm teaching my little sister\n"
	.string "how to swim.\l"
	.string "I'd say it's going swimmingly.$"

KaolisleCity_Father_Text::
	.string "Children and Pokémon should always\n"
	.string "be full of energy.\l"
	.string "That's the way they're meant to be!$"

KaolisleCity_Mother_Text::
	.string "You've got a real sweet kind of face,\n"
	.string "don't you?\p"
	.string "I bet old ladies like to\n"
	.string "give you candy.$"

KaolisleCity_Swimmer_Text::
	.string "For some, holiday is a time of relaxing.\n"
	.string "Not for me though!$"

KaolisleCity_Scott_Text::
	.string "I'm a real man of the seas and I\n"
	.string "consider it my duty to keep\l"
	.string "people safe!\p"
	.string "So here's my warning to you:\p"
	.string "Most of the people you find swimming\n"
	.string "around are trainers.\l"
	.string "Stay safe and be prepared!$"

KaolisleCity_SignHarbor_Text::
	.string "Kaolisle Harbor$"

KaolisleCity_SignGym_Text::
	.string "Kaolisle City Pokémon Gym\n"
	.string "Leader: Clay$"

KaolisleCity_SignHotel_Text::
	.string "Kaolisle Grand Resort$"

KaolisleCity_SignFanClub_Text::
	.string "Kaolisle City Pokémon Fan Club$"

KaolisleCity_SignIntro_Text::
	.string "KAOLISLE CITY\n"
	.string "“The cleanest city in the world.”$"

NudgeMon::
	.string "You give the {STR_VAR_1} a nudge,\n"
	.string "and it starts flying towards home.$"

KaolisleCity_MysteryMan_Battle_Intro::
	.string "This is going to be fun!$"

KaolisleCity_MysteryMan_Battle_Lose::
	.string "My!\n"
	.string "Such vigor!\p"
	.string "I've never seen anything\n"
	.string "like it before!$"

KaolisleCity_MysteryMan_PostBattle::
	.string "Ah, what a fun battle that was.\p"
	.string "I'm glad an old husk like me\n"
	.string "could still enjoy the thrill\l"
	.string "of a Pokémon Battle.$"

KaolisleCity_MysteryMan_PostBattle2::
	.string "You know what, grand battles\n"
	.string "require grand prizes.\p"
	.string "I think I should have some\n"
	.string "candy in one of my pockets…\p"
	.string "…Oh!\p"
	.string "Actually, I think I may have\n"
	.string "something even better than candy.\p"
	.string "Here, take this.$"

Kaolisle_ExplainFragment::
	.string "It may look like junk now,\n"
	.string "but trust me, that thing\l"
	.string "is a key to something important.\p"
	.string "Before it can be used however,\n"
	.string "you will need to find other fragments\l"
	.string "like it.\p"
	.string "There should be four fragments.\p"
	.string "Once you have collected them all,\n"
	.string "bring them to our eldest.\p"
	.string "She may be able to piece the\n"
	.string "fragments together.\p"
	.string "My old friends should have hopefully\n"
	.string "kept their fragments safe.\p"
	.string "I don't know where they\n"
	.string "currently reside, but I remember\l"
	.string "one of them mentioning about\l"
	.string "moving somewhere very cold.$"

KaolisleCity_MysteryMan_AfterBattleGossip::
	.string "There should be four fragments.\p"
	.string "Once you have collected them all,\n"
	.string "bring them to our eldest.\p"
	.string "She may be able to piece the\n"
	.string "fragments together.\p"
	.string "My old friends should have hopefully\n"
	.string "kept their fragments safe.\p"
	.string "I don't know where they\n"
	.string "currently reside, but I remember\l"
	.string "one of them mentioning about\l"
	.string "moving somewhere very cold.$"

Kaolisle_AbsolutelyCertain::
	.string "Are you absolutely certain you want\n"
	.string "to challenge me? I'm pretty strong.$"

Kaolisle_ExplainFragmentShort::
	.string "There should be four fragments.\p"
	.string "Once you have collected them all,\n"
	.string "bring them to our eldest.\p"
	.string "She may be able to piece the\n"
	.string "fragments together.\p"
	.string "My old friends should have hopefully\n"
	.string "kept their fragments safe.\p"
	.string "I don't know where they\n"
	.string "currently reside, but I remember\l"
	.string "one of them mentioning about\l"
	.string "moving somewhere very cold.$"
