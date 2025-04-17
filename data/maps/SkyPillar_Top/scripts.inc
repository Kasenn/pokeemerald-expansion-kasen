SkyPillar_Top_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AT_Top
	.byte 0


AT_Top::
	setflag FLAG_TEMP_8
	goto_if_unset FLAG_PLACED_STEEL_SPHERE, AT_Top_2
AT_Top_1:
	goto_if_unset FLAG_PLACED_VERDANT_SPHERE, AT_Top_5
AT_Top_4:
	goto_if_unset FLAG_PLACED_STONE_SPHERE, AT_Top_8
AT_Top_7:
	checkitem ITEM_MEGA_RING
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Top_11
AT_Top_10:
	goto_if_unset FLAG_OBTAINED_MEGA_RING, AT_Top_14
AT_Top_13:
	setvar VAR_TEMP_6, 1
	end

AT_Top_2:
	setflag FLAG_TEMP_7
	goto AT_Top_1

AT_Top_5:
	setflag FLAG_TEMP_6
	goto AT_Top_4

AT_Top_8:
	setflag FLAG_TEMP_5
	goto AT_Top_7

AT_Top_11:
	setflag FLAG_TEMP_1
	goto AT_Top_10

AT_Top_14:
	setflag FLAG_TEMP_HIDE_FOLLOWER
	goto AT_Top_13


AT_Pedestal_Stone::
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Pedestal_Stone_3
AT_Pedestal_Stone_1:
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end

AT_Pedestal_Stone_2:
	lock
	msgbox AT_Pedestal_Text2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Pedestal_Stone_7
	removeitem ITEM_STONE_SPHERE
	clearflag FLAG_PLACED_STONE_SPHERE
	addobject 8
	removeobject 5
	msgbox PlacedStoneSphere, MSGBOX_SIGN
	call CheckSphereEvent
	end

AT_Pedestal_Stone_3:
	checkitem ITEM_STONE_SPHERE
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Pedestal_Stone_2
	goto AT_Pedestal_Stone_1

AT_Pedestal_Stone_7:
	release
	end


AT_Pedestal_SteelSphere::
	msgbox AT_Pedestal_SteelSphere_Text, MSGBOX_SIGN
	return


AT_Pedestal_StoneSphere::
	msgbox AT_Pedestal_StoneSphere_Text, MSGBOX_SIGN
	return


AT_Pedestal_VerdantSphere::
	msgbox AT_Pedestal_VerdantSphere_Text, MSGBOX_SIGN
	return


AT_Pedestal_Steel::
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Pedestal_Steel_3
AT_Pedestal_Steel_1:
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end

AT_Pedestal_Steel_2:
	lock
	msgbox AT_Pedestal_Text2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Pedestal_Steel_7
	removeallitem ITEM_STEEL_SPHERE
	clearflag FLAG_PLACED_STEEL_SPHERE
	addobject 6
	removeobject 3
	msgbox PlacedSteelSphere, MSGBOX_SIGN
	call CheckSphereEvent
	end

AT_Pedestal_Steel_3:
	checkitem ITEM_STEEL_SPHERE
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Pedestal_Steel_2
	goto AT_Pedestal_Steel_1

AT_Pedestal_Steel_7:
	release
	end


AT_Pedestal_Verdant::
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Pedestal_Verdant_3
AT_Pedestal_Verdant_1:
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end

AT_Pedestal_Verdant_2:
	lock
	msgbox AT_Pedestal_Text2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Pedestal_Verdant_7
	removeitem ITEM_VERDANT_SPHERE
	clearflag FLAG_PLACED_VERDANT_SPHERE
	addobject 7
	removeobject 4
	msgbox PlacedVerdantSphere, MSGBOX_SIGN
	call CheckSphereEvent
	end

AT_Pedestal_Verdant_3:
	checkitem ITEM_VERDANT_SPHERE
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Pedestal_Verdant_2
	goto AT_Pedestal_Verdant_1

AT_Pedestal_Verdant_7:
	release
	end


CheckSphereEvent::
	goto_if_set FLAG_PLACED_STEEL_SPHERE, CheckSphereEvent_2
	goto_if_set FLAG_PLACED_STONE_SPHERE, CheckSphereEvent_2
	goto_if_set FLAG_PLACED_VERDANT_SPHERE, CheckSphereEvent_2
	delay 30
	getplayerxy VAR_TEMP_7, VAR_TEMP_8
	compare VAR_TEMP_7, 9 -1
	goto_if_eq CheckSphereEvent_51
CheckSphereEvent_49:
	compare VAR_TEMP_7, 9 + 1
	goto_if_eq CheckSphereEvent_48
CheckSphereEvent_46:
	compare VAR_TEMP_7, 9
	goto_if_eq CheckSphereEvent_45
CheckSphereEvent_43:
	compare VAR_TEMP_7, 9
	goto_if_eq CheckSphereEvent_42
CheckSphereEvent_40:
	compare VAR_TEMP_7, 11 -1
	goto_if_eq CheckSphereEvent_39
CheckSphereEvent_37:
	compare VAR_TEMP_7, 11 + 1
	goto_if_eq CheckSphereEvent_36
CheckSphereEvent_34:
	compare VAR_TEMP_7, 11
	goto_if_eq CheckSphereEvent_33
CheckSphereEvent_31:
	compare VAR_TEMP_7, 11
	goto_if_eq CheckSphereEvent_30
CheckSphereEvent_28:
	compare VAR_TEMP_7, 13 -1
	goto_if_eq CheckSphereEvent_27
CheckSphereEvent_25:
	compare VAR_TEMP_7, 13 + 1
	goto_if_eq CheckSphereEvent_24
CheckSphereEvent_22:
	compare VAR_TEMP_7, 13
	goto_if_eq CheckSphereEvent_21
CheckSphereEvent_20:
	applymovement 0xFF, CheckSphereEvent_Movement_11
CheckSphereEvent_8:
	waitmovement 0
	fadeoutbgm 0
	delay 48
	playse SE_ORB
	fadescreenspeed FADE_TO_WHITE, 6
	addobject 10
	addobject 9
	addobject 11
	waitse
	fadescreenspeed FADE_FROM_WHITE, 6
	delay 48
	playmoncry SPECIES_VIRIZION, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_TERRAKION, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_COBALION, CRY_MODE_NORMAL
	waitmoncry
	delay 60
	applymovement 11, CheckSphereEvent_Movement_12
	applymovement 9, CheckSphereEvent_Movement_13
	applymovement 10, CheckSphereEvent_Movement_14
	playse SE_BIKE_HOP
	delay 16
	playse SE_BIKE_HOP
	delay 16
	playse SE_BIKE_HOP
	delay 16
	playse SE_BIKE_HOP
	delay 16
	playse SE_BIKE_HOP
	delay 16
	playse SE_BIKE_HOP
	waitmovement 11
	waitmovement 9
	waitmovement 10
	removeobject 11
	removeobject 9
	removeobject 10
	fadeinbgm 0
	delay 120
	setvar VAR_SPHERES_FOUND, 4
	end

CheckSphereEvent_2:
	return

CheckSphereEvent_9:
	applymovement 0xFF, CheckSphereEvent_Movement_0
	goto CheckSphereEvent_8

CheckSphereEvent_10:
	applymovement 0xFF, CheckSphereEvent_Movement_1
	goto CheckSphereEvent_8

CheckSphereEvent_11:
	applymovement 0xFF, CheckSphereEvent_Movement_2
	goto CheckSphereEvent_8

CheckSphereEvent_12:
	applymovement 0xFF, CheckSphereEvent_Movement_3
	goto CheckSphereEvent_8

CheckSphereEvent_13:
	applymovement 0xFF, CheckSphereEvent_Movement_4
	goto CheckSphereEvent_8

CheckSphereEvent_14:
	applymovement 0xFF, CheckSphereEvent_Movement_5
	goto CheckSphereEvent_8

CheckSphereEvent_15:
	applymovement 0xFF, CheckSphereEvent_Movement_6
	goto CheckSphereEvent_8

CheckSphereEvent_16:
	applymovement 0xFF, CheckSphereEvent_Movement_7
	goto CheckSphereEvent_8

CheckSphereEvent_17:
	applymovement 0xFF, CheckSphereEvent_Movement_8
	goto CheckSphereEvent_8

CheckSphereEvent_18:
	applymovement 0xFF, CheckSphereEvent_Movement_9
	goto CheckSphereEvent_8

CheckSphereEvent_19:
	applymovement 0xFF, CheckSphereEvent_Movement_10
	goto CheckSphereEvent_8

CheckSphereEvent_21:
	compare VAR_TEMP_8, 7 -1
	goto_if_eq CheckSphereEvent_19
	goto CheckSphereEvent_20

CheckSphereEvent_24:
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_18
	goto CheckSphereEvent_22

CheckSphereEvent_27:
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_17
	goto CheckSphereEvent_25

CheckSphereEvent_30:
	compare VAR_TEMP_8, 8 + 1
	goto_if_eq CheckSphereEvent_16
	goto CheckSphereEvent_28

CheckSphereEvent_33:
	compare VAR_TEMP_8, 8 -1
	goto_if_eq CheckSphereEvent_15
	goto CheckSphereEvent_31

CheckSphereEvent_36:
	compare VAR_TEMP_8, 8
	goto_if_eq CheckSphereEvent_14
	goto CheckSphereEvent_34

CheckSphereEvent_39:
	compare VAR_TEMP_8, 8
	goto_if_eq CheckSphereEvent_13
	goto CheckSphereEvent_37

CheckSphereEvent_42:
	compare VAR_TEMP_8, 7 + 1
	goto_if_eq CheckSphereEvent_12
	goto CheckSphereEvent_40

CheckSphereEvent_45:
	compare VAR_TEMP_8, 7 -1
	goto_if_eq CheckSphereEvent_11
	goto CheckSphereEvent_43

CheckSphereEvent_48:
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_10
	goto CheckSphereEvent_46

CheckSphereEvent_51:
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_9
	goto CheckSphereEvent_49


AT_TopTrigger1::
	setvar VAR_TEMP_5, 1
	goto AT_TopEvent
	return


AT_TopTrigger2::
	setvar VAR_TEMP_5, 2
	goto AT_TopEvent
	return


AT_TopTrigger3::
	setvar VAR_TEMP_5, 3
	goto AT_TopEvent
	return


AT_TopTrigger4::
	setvar VAR_TEMP_5, 4
	goto AT_TopEvent
	return


AT_TopTrigger5::
	setvar VAR_TEMP_5, 5
	goto AT_TopEvent
	return


AT_TopTrigger6::
	setvar VAR_TEMP_5, 6
	goto AT_TopEvent
	return


AT_TopEvent::
	lock
	switch VAR_TEMP_5
	case 1, AT_TopEvent_3
	case 2, AT_TopEvent_4
	case 3, AT_TopEvent_5
	case 4, AT_TopEvent_6
	case 5, AT_TopEvent_7
	case 6, AT_TopEvent_8
AT_TopEvent_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement OBJ_EVENT_ID_FOLLOW_ME
	delay 30
	applymovement 2, TurnKorrina
	waitmovement 0
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	msgbox YouTwoMadeIt
	closemessage
	applymovement 2, KorrinaGoesToRival
	waitmovement 0
	delay 100
	applymovement 2, KorrinaGoesToPlayer
	waitmovement 0
	delay 15
	giveitem ITEM_MEGA_RING
	setflag FLAG_TEMP_1
	waitfanfare
	closemessage
	delay 48
	applymovement 2, KorrinaGoesBack
	waitmovement 0
	msgbox IDontHaveStones
	msgbox ReturnToGym
	closemessage
	fadescreen FADE_TO_BLACK
	delay 15
	removeobject 2
	fadescreen FADE_FROM_BLACK
	delay 48
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Walk1Left
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq AT_TopEvent_10
	msgbox LetsGoMeetDadMay
AT_TopEvent_9:
	closemessage
	goto_if_set FLAG_HIDE_LIBRARY_BIRCH, AT_TopEvent_14
AT_TopEvent_13:
	checkitem ITEM_HM02
	compare VAR_RESULT, FALSE
	goto_if_eq AT_TopEvent_17
AT_TopEvent_16:
	delay 10
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	destroyfollower
	waitfieldeffect FLDEFF_NPCFLY_OUT
	delay 30
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	clearflag FLAG_KORRINA_LEAVESGYM
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	clearflag FLAG_HIDE_LAB_RIVAL
	setflag FLAG_HIDE_LIBRARY_BIRCH
	clearflag FLAG_PARTNER_HEALS
	settrainerflag TRAINER_AT_2F_TR2_MAN3
	settrainerflag TRAINER_AT_2F_TR2_WOMAN5
	settrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	settrainerflag TRAINER_AT_2F_TR1_MAN5
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_F
	settrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	settrainerflag TRAINER_AT_3F_TR2_PSYCHICF
	settrainerflag TRAINER_AT_4F_TR1_BLACKBELT
	settrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
	settrainerflag TRAINER_AT_4F_TR2_LASS
	settrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
	settrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	settrainerflag TRAINER_AT_4F_TR3_BLACKBELT
	settrainerflag TRAINER_AT_5F_COOLTRAINER_M
	settrainerflag TRAINER_AT_5F_COOLTRAINER_F
	delay 30
	release
	goto_if_unset FLAG_Q33_PROF_BIRCH_MEGASTONE_START, AT_TopEvent_24
AT_TopEvent_23:
	end

AT_TopEvent_3:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement1
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement1Follower
	goto AT_TopEvent_1

AT_TopEvent_4:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement2
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement2Follower
	goto AT_TopEvent_1

AT_TopEvent_5:
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement3Follower
	goto AT_TopEvent_1

AT_TopEvent_6:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement4
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement4Follower
	goto AT_TopEvent_1

AT_TopEvent_7:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement5
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement5Follower
	goto AT_TopEvent_1

AT_TopEvent_8:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement6
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement6Follower
	goto AT_TopEvent_1

AT_TopEvent_10:
	msgbox LetsGoMeetDadBrendan
	goto AT_TopEvent_9

AT_TopEvent_14:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	compare VAR_RESULT, MALE
	goto_if_eq AT_TopEvent_20
	msgbox YouMetDadMay
AT_TopEvent_19:
	closemessage
	goto AT_TopEvent_13

AT_TopEvent_17:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Common_Movement_QuestionMark
	waitmovement 0
	delay 48
	msgbox NotHaveFly
	closemessage
	goto AT_TopEvent_16

AT_TopEvent_20:
	msgbox YouMetDadBrendan
	goto AT_TopEvent_19

AT_TopEvent_24:
	startquest FLAG_Q33_PROF_BIRCH_MEGASTONE_START
	special ShowJournalPopupAdd
	goto AT_TopEvent_23


AT_Top_Movement1:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

AT_Top_Movement2:
	walk_up
	walk_right
	walk_right
	walk_up
	step_end

AT_Top_Movement4:
	walk_up
	walk_left
	walk_left
	walk_up
	step_end

AT_Top_Movement5:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

AT_Top_Movement6:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

TurnKorrina:
	walk_in_place_faster_down
	walk_in_place_faster_down
	face_down
	step_end

KorrinaGoesToRival:
	walk_down
	walk_right
	walk_in_place_faster_down
	walk_in_place_faster_down
	face_down
	step_end

KorrinaGoesToPlayer:
	walk_left
	walk_left
	walk_in_place_faster_down
	walk_in_place_faster_down
	face_down
	step_end

KorrinaGoesBack:
	walk_right
	walk_up
	walk_in_place_faster_down
	walk_in_place_faster_down
	face_down
	step_end

AT_Top_Movement1Follower:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

AT_Top_Movement2Follower:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

AT_Top_Movement3Follower:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	step_end

AT_Top_Movement4Follower:
	walk_up
	walk_up
	walk_up
	step_end

AT_Top_Movement5Follower:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	step_end

AT_Top_Movement6Follower:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

AT_Custodian::
	lock
	faceplayer
	compare VAR_SPHERES_FOUND, 5
	goto_if_eq AT_Custodian_2
	compare VAR_SPHERES_FOUND, 4
	goto_if_eq AT_Custodian_5
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Custodian_8
	checkitem ITEM_VERDANT_SPHERE
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Custodian_11
	compare VAR_SPHERES_FOUND, 2
	goto_if_eq AT_Custodian_14
	compare VAR_SPHERES_FOUND, 1
	goto_if_eq AT_Custodian_17
	msgbox ImTheCaretaker
	closemessage
	checkitem ITEM_STONE_SPHERE
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Custodian_20
AT_Custodian_19:
	release
	end

AT_Custodian_2:
	msgbox TrackTheGuardiansShort, MSGBOX_NPC
	end

AT_Custodian_5:
	msgbox TrackTheGuardians
	msgbox TrackTheGuardians2, MSGBOX_NPC
	setvar VAR_SPHERES_FOUND, 5
	end

AT_Custodian_8:
	msgbox PutSpheresInPlace, MSGBOX_NPC
	turnobject 1, DIR_NORTH
	end

AT_Custodian_11:
	waitse
	playse SE_PIN
	safefollow
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox ThatsVerdantSphere
	setvar VAR_SPHERES_FOUND, 3
	release
	closemessage
	turnobject 1, DIR_NORTH
	end

AT_Custodian_14:
	msgbox LookForVerdantSphere, MSGBOX_NPC
	end

AT_Custodian_17:
	checkitem ITEM_STEEL_SPHERE
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Custodian_23
	playse SE_PIN
	safefollow
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox ThatsSteelSphere
	setvar VAR_SPHERES_FOUND, 2
	release
	closemessage
	end

AT_Custodian_20:
	playse SE_PIN
	safefollow
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox ThatsStoneSphere
	setvar VAR_SPHERES_FOUND, 1
	goto AT_Custodian_19

AT_Custodian_23:
	msgbox LookForSteelSphere, MSGBOX_NPC
	end


OddSensation::
	goto_if_set FLAG_STEELSPHERE_CLUE, OddSensation_2
	checkitem ITEM_STONE_SPHERE
	compare VAR_RESULT, TRUE
	goto_if_eq OddSensation_5
OddSensation_4:
	release
	end

OddSensation_2:
	release
	end

OddSensation_5:
	lock
	msgbox OddSensation_Text
	setflag FLAG_STEELSPHERE_CLUE
	goto OddSensation_4


CheckSphereEvent_Movement_0:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	step_end

CheckSphereEvent_Movement_1:
	walk_right
	walk_up
	step_end

CheckSphereEvent_Movement_2:
	walk_right
	walk_right
	walk_in_place_up
	step_end

CheckSphereEvent_Movement_3:
	walk_right
	walk_up
	walk_right
	walk_up
	step_end

CheckSphereEvent_Movement_4:
	walk_up
	walk_right
	walk_up
	step_end

CheckSphereEvent_Movement_5:
	walk_up
	walk_left
	walk_up
	step_end

CheckSphereEvent_Movement_6:
	walk_up
	step_end

CheckSphereEvent_Movement_7:
	walk_right
	walk_up
	walk_up
	walk_left
	walk_up
	step_end

CheckSphereEvent_Movement_8:
	walk_left
	walk_up
	step_end

CheckSphereEvent_Movement_9:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

CheckSphereEvent_Movement_10:
	walk_left
	walk_left
	walk_in_place_up
	step_end

CheckSphereEvent_Movement_11:
	walk_left
	walk_up
	walk_left
	walk_up
	step_end

CheckSphereEvent_Movement_12:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

CheckSphereEvent_Movement_13:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	step_end

CheckSphereEvent_Movement_14:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

AT_Pedestal_Text::
	.string "It's a small pedestal, which looks\n"
	.string "like it's meant to house something.$"

AT_Pedestal_Text2::
	.string "It's a small pedestal, which looks\n"
	.string "like it's meant to house something.\p"
	.string "Try placing one of the spheres on\n"
	.string "the pedestal?$"

PlacedStoneSphere::
	.string "{PLAYER} placed the Stone Sphere\n"
	.string "on the pedestal.$"

PlacedSteelSphere::
	.string "{PLAYER} placed the Steel Sphere\n"
	.string "on the pedestal.$"

PlacedVerdantSphere::
	.string "{PLAYER} placed the Verdant Sphere\n"
	.string "on the pedestal.$"

AT_Pedestal_SteelSphere_Text::
	.string "It's a small pedestal, with\n"
	.string "the Steel Sphere placed on top.$"

AT_Pedestal_StoneSphere_Text::
	.string "It's a small pedestal, with\n"
	.string "the Stone Sphere placed on top.$"

AT_Pedestal_VerdantSphere_Text::
	.string "It's a small pedestal, with\n"
	.string "the Verdant Sphere placed on top.$"

ThatsVerdantSphere::
	.string "That Verdant Sphere…\p"
	.string "Yes, this is undoubtedly another\n"
	.string "fragment of the Protectors!\p"
	.string "Does this mean that you've managed to\n"
	.string "gather all the fragments?\p"
	.string "Astounding!\p"
	.string "Hurry, place the spheres on the\n"
	.string "pedestals!\p"
	.string "We are about to witness the event\n"
	.string "of a lifetime!$"

PutSpheresInPlace::
	.string "Hurry, place the spheres on the\n"
	.string "pedestals!\p"
	.string "We are about to witness the event\n"
	.string "of a lifetime!$"

TrackTheGuardians::
	.string "I cannot believe it…\p"
	.string "Those were undoubtedly\n"
	.string "the Protectors!\p"
	.string "I never imagined they'd ever grace\n"
	.string "our world with their presence again!$"

TrackTheGuardians2::
	.string "Unfortunately, I don't have any\n"
	.string "clue about the new whereabouts of\l"
	.string "the Protectors.\p"
	.string "I doubt they've slinked back to the\n"
	.string "caves you found the spheres from, but,\l"
	.string "considering those places hold some\l"
	.string "sentimental value to them, I imagine\l"
	.string "they'd probably end up looking for\l"
	.string "high vantage points somewhere close by.$"

TrackTheGuardiansShort::
	.string "Unfortunately, I don't have any\n"
	.string "clue about the new whereabouts of\l"
	.string "the Protectors.\p"
	.string "If I were you, I'd try looking for\n"
	.string "a high vantage point near the places\l"
	.string "you originally found the spheres at.$"

YouTwoMadeIt::
	.string "Korrina: Oh hey, you two actually\n"
	.string "made it to the top!\p"
	.string "Sorry about not mentioning those\n"
	.string "trainers down there!\p"
	.string "After our gym battles, I wanted to\n"
	.string "see if you two were actually that\l"
	.string "strong or if you just got lucky.\p"
	.string "Glad to see it was the former!\p"
	.string "Anyways, the reason I called you here\n"
	.string "was so I could give you these:\l"
	.string "the Mega Rings!\p"
	.string "These rings are the key ingredient to\n"
	.string "a phenomena called “Mega Evolution,”\l"
	.string "which both of you got to see me\l"
	.string "perform during our battles.\p"
	.string "When I see a great trainer, I like\n"
	.string "to gift them with one of these.\p"
	.string "The only problem is, they're kinda rare\n"
	.string "here in Sinko.\p"
	.string "That's why I can only afford to give\n"
	.string "them to the truly expectional trainers.\p"
	.string "People like you!$"

IDontHaveStones::
	.string "Korrina: Now, in order to have your\n"
	.string "Pokémon Mega Evolve, they must be\l"
	.string "holding onto a specific Mega Stone.\p"
	.string "Unfortunately, these stones are\n"
	.string "like, super rare!\p"
	.string "I have no idea where one would even\n"
	.string "begin to search for one.\p"
	.string "I hate having to do this after you've\n"
	.string "come so far, but you'll need to look\l"
	.string "for those stones yourself.\p"
	.string "But anyways, to Mega Evolve a Pokémon,\n"
	.string "once you are in battle and you're\l"
	.string "deciding on which move your Pokémon\l"
	.string "should use, hit the START button and\l"
	.string "you should see the Mega Stone light up!\p"
	.string "Boom!\n"
	.string "As simple as that!\p"
	.string "Be careful you don't overexert your\n"
	.string "Pokémon though!\p"
	.string "Mega Evolution takes a huge amount of\n"
	.string "energy, causing your Pokémon to lose\l"
	.string "stamina rapidly!$"

ReturnToGym::
	.string "Korrina: Okay!\p"
	.string "I know that introduction was kinda\n"
	.string "short and fast, but I'm sure you two\l"
	.string "can figure it out!\p"
	.string "I am a Gym Leader after all, and you\n"
	.string "never know when another challenger is\l"
	.string "gonna show up at the gym, asking to\l"
	.string "challenge the leader.\p"
	.string "So, I must bid you two adieu!$"

LetsGoMeetDadBrendan::
	.string "{RIVAL}: Hey {PLAYER}, let's go ask\n"
	.string "my dad!\p"
	.string "Since he's a Pokémon Professor, I'm\n"
	.string "sure he knows something about this!$"

LetsGoMeetDadMay::
	.string "{RIVAL}: Hey, {PLAYER}, maybe we ought\n"
	.string "to go and ask my dad?\p"
	.string "Since he's a Pokémon Professor, I bet\n"
	.string "he can point us in the right direction!$"

YouMetDadBrendan::
	.string "{RIVAL}: You met dad in the library?\n"
	.string "And he told to come and visit?\p"
	.string "Well, all the more reason I guess.\n"
	.string "Come on, let's go!$"

YouMetDadMay::
	.string "{RIVAL}: Oh?\p"
	.string "You met him in the library?\n"
	.string "And he told us to come and visit?\p"
	.string "Well, what are we waiting for?\n"
	.string "Let's go!$"

NotHaveFly::
	.string "{RIVAL}: Wait…\p"
	.string "{PLAYER}, Don't you have a Pokémon\n"
	.string "that can fly you across the region?\p"
	.string "… … … … …\p"
	.string "Well this is a bit awkward…\n"
	.string "My Pokémon can only carry one…\p"
	.string "If you want your Pokémon to learn to\n"
	.string "fly you around, I recommend you\l"
	.string "visit Windplume Valley.\l"
	.string "It's located next to Aldeleaf City.\p"
	.string "Anyway, see you back at the lab!$"

ImTheCaretaker::
	.string "I am the current caretaker of\n"
	.string "this tower.\p"
	.string "It is said that this tower was erected\n"
	.string "by a now lost civilization, to work as\l"
	.string "a beacon to guide home the Protectors.$"

ThatsStoneSphere::
	.string "That Stone Sphere you are carrying,\n"
	.string "may I see it?\p"
	.string "… … … … …\p"
	.string "Yes, this is undoubtedly something\n"
	.string "left behind by the Protectors!\p"
	.string "Its rightful place is here on the\n"
	.string "pedestals, but according to legend,\l"
	.string "Its presence should allow the holder\l"
	.string "to sense the location of other such\l"
	.string "spheres.\p"
	.string "Please, seek the other spheres!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!$"

LookForSteelSphere::
	.string "Please, seek the other spheres!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!\p"
	.string "I would try visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

ThatsSteelSphere::
	.string "That Steel Sphere…\p"
	.string "Yes, this is undoubtedly another\n"
	.string "fragment of the Protectors!\p"
	.string "I don't know how you're doing it,\n"
	.string "but thanks to your efforts, we are\l"
	.string "closer to bringing back the Protectors\l"
	.string "than ever before!\p"
	.string "Please, I urge you,\n"
	.string "seek the final sphere!\p"
	.string "If you need more guidance, I would\n"
	.string "suggest visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

LookForVerdantSphere::
	.string "Please, seek the final sphere!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!\p"
	.string "I would try visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

OddSensation_Text::
	.string "You feel an odd sensation emanating\n"
	.string "from the Stone Sphere.$"
