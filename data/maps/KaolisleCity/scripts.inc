KaolisleCity_MapScripts::
# 2 "data/maps/KaolisleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RandomizeBrother
	.byte 0


RandomizeBrother::
# 6 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_VISITED_KAOLISLE
# 7 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, RandomizeBrother_2
# 10 "data/maps/KaolisleCity/scripts.pory"
	random 8
# 11 "data/maps/KaolisleCity/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 12 "data/maps/KaolisleCity/scripts.pory"
	switch VAR_TEMP_3
# 13 "data/maps/KaolisleCity/scripts.pory"
	case 0, RandomizeBrother_5
# 16 "data/maps/KaolisleCity/scripts.pory"
	case 1, RandomizeBrother_6
# 19 "data/maps/KaolisleCity/scripts.pory"
	case 2, RandomizeBrother_7
# 22 "data/maps/KaolisleCity/scripts.pory"
	case 3, RandomizeBrother_8
# 25 "data/maps/KaolisleCity/scripts.pory"
	case 4, RandomizeBrother_9
# 28 "data/maps/KaolisleCity/scripts.pory"
	case 5, RandomizeBrother_10
# 31 "data/maps/KaolisleCity/scripts.pory"
	case 6, RandomizeBrother_11
# 34 "data/maps/KaolisleCity/scripts.pory"
	case 7, RandomizeBrother_12
	return

RandomizeBrother_2:
	end

RandomizeBrother_5:
# 14 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 33, 3
# 15 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_6:
# 17 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 29, 26
# 18 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_7:
# 20 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 19, 43
# 21 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_8:
# 23 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 25, 51
# 24 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_DOWN
	return

RandomizeBrother_9:
# 26 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 53, 52
# 27 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_10:
# 29 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 52, 61
# 30 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
	return

RandomizeBrother_11:
# 32 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 18, 15
# 33 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_LOOK_AROUND
	return

RandomizeBrother_12:
# 35 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 53, 25
# 36 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
	return


Kaolisle_Brother::
# 41 "data/maps/KaolisleCity/scripts.pory"
	lock
# 42 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 43 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_KAOLISLE_BROTHER_INTRO, Kaolisle_Brother_2
Kaolisle_Brother_1:
# 47 "data/maps/KaolisleCity/scripts.pory"
	switch VAR_TEMP_3
# 48 "data/maps/KaolisleCity/scripts.pory"
	case 0, Kaolisle_Brother_6
# 53 "data/maps/KaolisleCity/scripts.pory"
	case 1, Kaolisle_Brother_7
# 55 "data/maps/KaolisleCity/scripts.pory"
	case 2, Kaolisle_Brother_8
# 57 "data/maps/KaolisleCity/scripts.pory"
	case 3, Kaolisle_Brother_9
# 59 "data/maps/KaolisleCity/scripts.pory"
	case 4, Kaolisle_Brother_10
# 61 "data/maps/KaolisleCity/scripts.pory"
	case 5, Kaolisle_Brother_11
# 63 "data/maps/KaolisleCity/scripts.pory"
	case 6, Kaolisle_Brother_12
# 65 "data/maps/KaolisleCity/scripts.pory"
	case 7, Kaolisle_Brother_13
Kaolisle_Brother_4:
	end

Kaolisle_Brother_2:
# 44 "data/maps/KaolisleCity/scripts.pory"
	msgbox Kaolisle_BrotherIntro, MSGBOX_DEFAULT
# 45 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_KAOLISLE_BROTHER_INTRO
	goto Kaolisle_Brother_1

Kaolisle_Brother_6:
# 49 "data/maps/KaolisleCity/scripts.pory"
	turnobject 30, DIR_NORTH
# 50 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_LookingTowardsPearlwood, MSGBOX_DEFAULT
# 51 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 52 "data/maps/KaolisleCity/scripts.pory"
	release
	goto Kaolisle_Brother_4

Kaolisle_Brother_7:
# 54 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_VisitingGym, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_8:
# 56 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_PokeFanClub, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_9:
# 58 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_LesserBeach, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_10:
# 60 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_Hotel, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_11:
# 62 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_GreaterBeach, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_12:
# 64 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_BoringPlace, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_13:
# 66 "data/maps/KaolisleCity/scripts.pory"
	turnobject 30, DIR_EAST
# 67 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_IslandToTheEast, MSGBOX_DEFAULT
# 68 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 69 "data/maps/KaolisleCity/scripts.pory"
	release
	goto Kaolisle_Brother_4


KaolisleCity_Sailor::
# 148 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Sailor_Text, MSGBOX_NPC
	end


KaolisleCity_NinjaBoy::
# 159 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_NinjaBoy_Text, MSGBOX_NPC
	end


KaolisleCity_Woman2::
# 172 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Woman2_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3::
# 183 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Boy3_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3_Couple::
# 192 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Boy3_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_Lass_Couple::
# 203 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Lass_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_MysteryMan::
# 214 "data/maps/KaolisleCity/scripts.pory"
	lock
# 215 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_TEMP_4, KaolisleCity_MysteryMan_2
# 220 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Text, MSGBOX_DEFAULT
# 221 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 222 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Text2, MSGBOX_YESNO
KaolisleCity_MysteryMan_1:
# 224 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleCity_MysteryMan_6
# 230 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, KaolisleCity_MysteryMan_9
# 233 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolisleCity_MysteryMan_10
# 237 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_2Badges, MSGBOX_NPC
KaolisleCity_MysteryMan_8:
# 239 "data/maps/KaolisleCity/scripts.pory"
	turnobject 7, DIR_NORTH
	end

KaolisleCity_MysteryMan_2:
# 216 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 217 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_TextShort, MSGBOX_YESNO
	goto KaolisleCity_MysteryMan_1

KaolisleCity_MysteryMan_6:
# 225 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Decline, MSGBOX_NPC
# 226 "data/maps/KaolisleCity/scripts.pory"
	turnobject 7, DIR_NORTH
# 227 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_4
	end

KaolisleCity_MysteryMan_9:
# 231 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_4Badges, MSGBOX_NPC
	goto KaolisleCity_MysteryMan_8

KaolisleCity_MysteryMan_10:
# 234 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_3Badges, MSGBOX_NPC
	goto KaolisleCity_MysteryMan_8


KaolisleCity_ExpertM::
# 290 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_REVEAL_PEARLSTRING, KaolisleCity_ExpertM_2
KaolisleCity_ExpertM_1:
# 293 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_ExpertM_Text, MSGBOX_NPC
# 294 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_REVEAL_PEARLSTRING
	end

KaolisleCity_ExpertM_2:
# 291 "data/maps/KaolisleCity/scripts.pory"
	clearflag FLAG_OLDMAN_PEARLSTRING
	goto KaolisleCity_ExpertM_1


KaolisleCity_Zigzagoon_Child::
# 312 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Zigzagoon_Child_Text, MSGBOX_NPC
	end


KaolisleCity_OldMan::
# 323 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_OldMan_Text, MSGBOX_NPC
	end


KaolisleCity_Gentleman::
# 334 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Gentleman_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher1::
# 345 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, KaolisleCity_Fisher1_2
# 349 "data/maps/KaolisleCity/scripts.pory"
	checkitem ITEM_LURE
# 350 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleCity_Fisher1_5
# 361 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_QUEST_FOR_GOOD_ROD, KaolisleCity_Fisher1_8
# 365 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher1_Text, MSGBOX_NPC
# 366 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_QUEST_FOR_GOOD_ROD
	end

KaolisleCity_Fisher1_2:
# 346 "data/maps/KaolisleCity/scripts.pory"
	msgbox HopeYouGetAlotOfFish, MSGBOX_NPC
	end

KaolisleCity_Fisher1_5:
# 351 "data/maps/KaolisleCity/scripts.pory"
	lock
# 352 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 353 "data/maps/KaolisleCity/scripts.pory"
	removeitem ITEM_LURE
# 354 "data/maps/KaolisleCity/scripts.pory"
	msgbox MyLure, MSGBOX_DEFAULT
# 355 "data/maps/KaolisleCity/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 356 "data/maps/KaolisleCity/scripts.pory"
	waitfanfare
# 357 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 358 "data/maps/KaolisleCity/scripts.pory"
	msgbox HopeYouGetAlotOfFish, MSGBOX_NPC
	end

KaolisleCity_Fisher1_8:
# 362 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher1_Text2, MSGBOX_NPC
	end


KaolisleCity_Fisher2::
# 404 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher2_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher3::
# 415 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher3_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher4::
# 425 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher4_Text, MSGBOX_NPC
	end


KaolisleCity_TriathleteF::
# 438 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TriathleteF_Text, MSGBOX_NPC
	end


KaolisleCity_LittleGirl::
# 448 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_LittleGirl_Text, MSGBOX_NPC
	end


KaolisleCity_Sailor2::
# 457 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Sailor2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing1::
# 469 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberChasing1_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing2::
# 480 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberChasing2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberTalking1::
# 488 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_OBTAINED_BEACHBALL, KaolisleCity_TuberTalking1_2
# 492 "data/maps/KaolisleCity/scripts.pory"
	lockall
# 493 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 494 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_TEMP_3, KaolisleCity_TuberTalking1_5
# 498 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberTalking1_Text, MSGBOX_DEFAULT
KaolisleCity_TuberTalking1_4:
# 500 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_3
# 501 "data/maps/KaolisleCity/scripts.pory"
	multichoice 23, 0, MULTI_WHICHONEWOULDWIN, 1
# 502 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KaolisleCity_TuberTalking1_9
# 509 "data/maps/KaolisleCity/scripts.pory"
	waitse
# 510 "data/maps/KaolisleCity/scripts.pory"
	playse SE_SUCCESS
# 511 "data/maps/KaolisleCity/scripts.pory"
	msgbox BeachCorrectAnswer, MSGBOX_DEFAULT
# 512 "data/maps/KaolisleCity/scripts.pory"
	giveitem ITEM_DIVE_BALL
# 513 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_OBTAINED_BEACHBALL
# 515 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 516 "data/maps/KaolisleCity/scripts.pory"
	release
	end

KaolisleCity_TuberTalking1_2:
# 489 "data/maps/KaolisleCity/scripts.pory"
	msgbox WasFunGame, MSGBOX_NPC
	end

KaolisleCity_TuberTalking1_5:
# 495 "data/maps/KaolisleCity/scripts.pory"
	msgbox CareToTryAgain, MSGBOX_DEFAULT
	goto KaolisleCity_TuberTalking1_4

KaolisleCity_TuberTalking1_9:
# 503 "data/maps/KaolisleCity/scripts.pory"
	waitse
# 504 "data/maps/KaolisleCity/scripts.pory"
	playse SE_FAILURE
# 505 "data/maps/KaolisleCity/scripts.pory"
	msgbox BeachWrongAnswer, MSGBOX_NPC
	end


KaolisleCity_TuberTalking2::
# 544 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberTalking2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberLearning::
# 552 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberLearning_Text, MSGBOX_NPC
	end


KaolisleCity_SwimTeacher::
# 559 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SwimTeacher_Text, MSGBOX_NPC
	end


KaolisleCity_Father::
# 569 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Father_Text, MSGBOX_NPC
	end


KaolisleCity_Mother::
# 579 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Mother_Text, MSGBOX_NPC
	end


KaolisleCity_Swimmer::
# 590 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Swimmer_Text, MSGBOX_NPC
	end


KaolisleCity_Scott::
# 599 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Scott_Text, MSGBOX_NPC
	end


KaolisleCity_Zigzagoon::
# 613 "data/maps/KaolisleCity/scripts.pory"
	lock
# 614 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 615 "data/maps/KaolisleCity/scripts.pory"
	waitse
# 616 "data/maps/KaolisleCity/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 617 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 618 "data/maps/KaolisleCity/scripts.pory"
	waitmoncry
# 619 "data/maps/KaolisleCity/scripts.pory"
	release
	end


KaolisleCity_SignHarbor::
# 624 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignHarbor_Text, MSGBOX_SIGN
	end


KaolisleCity_SignGym::
# 628 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignGym_Text, MSGBOX_SIGN
	end


KaolisleCity_SignHotel::
# 632 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignHotel_Text, MSGBOX_SIGN
	end


KaolisleCity_SignFanClub::
# 636 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignFanClub_Text, MSGBOX_SIGN
	end


KaolisleCity_SignIntro::
# 640 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignIntro_Text, MSGBOX_SIGN
	end


KaolisleCity_Zigzagoon_Text_0:
# 617 "data/maps/KaolisleCity/scripts.pory"
	.string "Zigzagoon: Guguuh!$"

Kaolisle_BrotherIntro::
# 73 "data/maps/KaolisleCity/scripts.pory"
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
# 88 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: If I look real close, I think\n"
	.string "I can see Pearlwood in the horizon.\p"
	.string "We're so far away from home,\n"
	.string "yet it feels like we only just left.$"

KB_VisitingGym::
# 94 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: This is the Kaolisle City\n"
	.string "Pokémon Gym.\p"
	.string "I know, it doesn't look like your\n"
	.string "average gym but I assure you,\l"
	.string "the trainers there are no pushovers.$"

KB_PokeFanClub::
# 101 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: Apparently this is some kind\n"
	.string "of Pokémon Fan Club?\l"
	.string "I don't really get the point.\p"
	.string "Why coop up inside and talk about\n"
	.string "Pokémon when you could be out there,\l"
	.string "catching them and training them?$"

KB_LesserBeach::
# 109 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: This beach seems a bit\n"
	.string "overgrown.\p"
	.string "I don't mind it though.\p"
	.string "It seems peaceful enough to\n"
	.string "where you can have a relaxing time.$"

KB_Hotel::
# 116 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: So, this is the Grand Resort.\n"
	.string "Talk of the town.\p"
	.string "There seem to be a lot of people here\n"
	.string "this time of year.\p"
	.string "I bet the prices are through the roof,\n"
	.string "assuming you can even get a room.$"

KB_GreaterBeach::
# 124 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: This looks like a nice beach.\n"
	.string "Not a fan of the crowd though.\p"
	.string "You know, if you have an Itemfinder,\n"
	.string "it may not be a bad idea to comb through\l"
	.string "the beach with it.\p"
	.string "You never know what treasures the\n"
	.string "ocean may have washed ashore.$"

KB_BoringPlace::
# 133 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: I have to say, there's not\n"
	.string "a whole lot going around here.\p"
	.string "Sure, you can relax at the resort,\n"
	.string "but where's all the fun stuff?\l"
	.string "Where's all the activities?$"

KB_IslandToTheEast::
# 140 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: There seems to be an island\n"
	.string "to the east of here with a house on it.\p"
	.string "Wonder who would build a house\n"
	.string "in such a hard-to-reach place…$"

KaolisleCity_Sailor_Text::
# 151 "data/maps/KaolisleCity/scripts.pory"
	.string "The ocean around Kaolisle looks so huge\n"
	.string "and endless, but thanks to the great\l"
	.string "ferry system, you can get to the other\l"
	.string "cities in no time!$"

KaolisleCity_NinjaBoy_Text::
# 162 "data/maps/KaolisleCity/scripts.pory"
	.string "You can fit absolutely anything inside\n"
	.string "of a trainer's bag, huh!\p"
	.string "If it was me, I'd sure like to tuck\n"
	.string "myself in a bag and tag along on\l"
	.string "someone's adventure!$"

KaolisleCity_Woman2_Text::
# 175 "data/maps/KaolisleCity/scripts.pory"
	.string "Looking for the Pokémon Gym?\p"
	.string "Just look for a way downstairs to the\n"
	.string "giant quarry in the middle of the city.\l"
	.string "You can't miss it!$"

KaolisleCity_Boy3_Text::
# 186 "data/maps/KaolisleCity/scripts.pory"
	.string "If you're buying Poké Balls at a Poké\n"
	.string "Mart, you should buy them in sets of 10!$"

KaolisleCity_Boy3_Couple_Text::
# 195 "data/maps/KaolisleCity/scripts.pory"
	.string "I've never been that great of\n"
	.string "a trainer.\p"
	.string "I hope that by enrolling in the\n"
	.string "Trainers' School, I can change that.$"

KaolisleCity_Lass_Couple_Text::
# 206 "data/maps/KaolisleCity/scripts.pory"
	.string "Have you heard of the Coralgrove\n"
	.string "Trainers' School?\p"
	.string "My boyfriend and I are planning on\n"
	.string "enrolling there!$"

KaolisleCity_MysteryMan_Text::
# 242 "data/maps/KaolisleCity/scripts.pory"
	.string "Some days I gaze in Its direction,\n"
	.string "wondering, if It still remembers us…\p"
	.string "… … … …$"

KaolisleCity_MysteryMan_Text2::
# 247 "data/maps/KaolisleCity/scripts.pory"
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
# 258 "data/maps/KaolisleCity/scripts.pory"
	.string "Say, would you be interested in\n"
	.string "a Pokémon battle?\p"
	.string "I used to be quite a strong\n"
	.string "trainer in the past.$"

KaolisleCity_MysteryMan_Decline::
# 264 "data/maps/KaolisleCity/scripts.pory"
	.string "I understand. I won't bother you\n"
	.string "any further.$"

KaolisleCity_MysteryMan_2Badges::
# 268 "data/maps/KaolisleCity/scripts.pory"
	.string "Hm…\p"
	.string "I notice you only have 2 Gym Badges.\n"
	.string "I don't think this would be a fair match.\p"
	.string "If you can get a few more Badges,\n"
	.string "I might reconsider it.$"

KaolisleCity_MysteryMan_3Badges::
# 275 "data/maps/KaolisleCity/scripts.pory"
	.string "Hm…\p"
	.string "I notice you only have 3 Gym Badges.\n"
	.string "I don't think this would be a fair match.\p"
	.string "It's a good start but I would recommend\n"
	.string "you get a couple more first.$"

KaolisleCity_MysteryMan_4Badges::
# 282 "data/maps/KaolisleCity/scripts.pory"
	.string "Hm…\p"
	.string "You seem pretty strong, but I would\n"
	.string "suggest you get at least 6 badges\l"
	.string "before trying to challenge me.$"

KaolisleCity_ExpertM_Text::
# 297 "data/maps/KaolisleCity/scripts.pory"
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
# 315 "data/maps/KaolisleCity/scripts.pory"
	.string "Zigzagoon is so cute!\p"
	.string "I heard some places have really\n"
	.string "mean-looking Zigzagoons.\l"
	.string "Glad we don't have them!$"

KaolisleCity_OldMan_Text::
# 326 "data/maps/KaolisleCity/scripts.pory"
	.string "As they say…\p"
	.string "There are plenty of Pokémon in the sea.\p"
	.string "Say, how many Pokémon do you think\n"
	.string "there are in the world?$"

KaolisleCity_Gentleman_Text::
# 337 "data/maps/KaolisleCity/scripts.pory"
	.string "The Grand Resort attracts people\n"
	.string "from all walks of life.\p"
	.string "If you're patient, you might even\n"
	.string "see a glimpse of someone famous!$"

KaolisleCity_Fisher1_Text::
# 369 "data/maps/KaolisleCity/scripts.pory"
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
# 384 "data/maps/KaolisleCity/scripts.pory"
	.string "Again, You can find my house in\n"
	.string "southern part of Sandstone City.\p"
	.string "My wife probably won't give the lure\n"
	.string "to just anyone.\l"
	.string "Tell her that Clancy sent you and\l"
	.string "she'll know.$"

MyLure::
# 392 "data/maps/KaolisleCity/scripts.pory"
	.string "Ah, I see you've got the lure!\p"
	.string "Thank you so much for bringing it\n"
	.string "to me.\p"
	.string "You've been such a champ.\n"
	.string "Here, take this as your reward.$"

HopeYouGetAlotOfFish::
# 399 "data/maps/KaolisleCity/scripts.pory"
	.string "Hope your luck is better than mine!$"

KaolisleCity_Fisher2_Text::
# 407 "data/maps/KaolisleCity/scripts.pory"
	.string "This place is swarming with\n"
	.string "rare fish!\p"
	.string "I hope you brought something better\n"
	.string "than an Old Rod!$"

KaolisleCity_Fisher3_Text::
# 418 "data/maps/KaolisleCity/scripts.pory"
	.string "This is my secret spot.\p"
	.string "Shoo, before you scare all the\n"
	.string "fish away!$"

KaolisleCity_Fisher4_Text::
# 428 "data/maps/KaolisleCity/scripts.pory"
	.string "A friend of mine said they once reeled\n"
	.string "in a Finizen.\p"
	.string "I know there are some rare fish in\n"
	.string "these waters but I don't think I've\l"
	.string "ever witnessed someone actually\l"
	.string "fishing up any Paldean Pokémon.$"

KaolisleCity_TriathleteF_Text::
# 441 "data/maps/KaolisleCity/scripts.pory"
	.string "There are two beaches in Kaolisle.\p"
	.string "The other one is full to the brim\n"
	.string "with tourists, so I'd rather jog here.$"

KaolisleCity_LittleGirl_Text::
# 451 "data/maps/KaolisleCity/scripts.pory"
	.string "Dad told me I'm not allowed in the\n"
	.string "ocean so I'm stuck in this little pool…$"

KaolisleCity_Sailor2_Text::
# 460 "data/maps/KaolisleCity/scripts.pory"
	.string "All these rich people with their\n"
	.string "yachts…\p"
	.string "… … … …\p"
	.string "Not going to lie,\n"
	.string "I wish I could afford one…$"

KaolisleCity_TuberChasing1_Text::
# 472 "data/maps/KaolisleCity/scripts.pory"
	.string "Am I chasing my brother or is\n"
	.string "my brother chasing me?\p"
	.string "Who cares.\n"
	.string "The main thing is to have fun.$"

KaolisleCity_TuberChasing2_Text::
# 483 "data/maps/KaolisleCity/scripts.pory"
	.string "Whee!$"

CareToTryAgain::
# 519 "data/maps/KaolisleCity/scripts.pory"
	.string "Want to guess again?$"

KaolisleCity_TuberTalking1_Text::
# 522 "data/maps/KaolisleCity/scripts.pory"
	.string "We found this cool treasure\n"
	.string "in the sand.\p"
	.string "You can have it if you can answer\n"
	.string "our question correctly.\p"
	.string "The question is:\p"
	.string "Which one would win in a fight:\n"
	.string "Hyper Mega Ultra Dyna Charizard Z,\l"
	.string "or a Wobbuffet?$"

BeachWrongAnswer::
# 532 "data/maps/KaolisleCity/scripts.pory"
	.string "Wrong! The treasure is ours!$"

BeachCorrectAnswer::
# 535 "data/maps/KaolisleCity/scripts.pory"
	.string "Yay, you got it right!\n"
	.string "Here you go!$"

WasFunGame::
# 539 "data/maps/KaolisleCity/scripts.pory"
	.string "Let's play again soon!$"

KaolisleCity_TuberTalking2_Text::
# 547 "data/maps/KaolisleCity/scripts.pory"
	.string "He always does this…$"

KaolisleCity_TuberLearning_Text::
# 555 "data/maps/KaolisleCity/scripts.pory"
	.string "My big sister is teaching me to swim!$"

KaolisleCity_SwimTeacher_Text::
# 562 "data/maps/KaolisleCity/scripts.pory"
	.string "I'm teaching my little sister\n"
	.string "how to swim.\l"
	.string "I'd say it's going swimmingly.$"

KaolisleCity_Father_Text::
# 572 "data/maps/KaolisleCity/scripts.pory"
	.string "Children and Pokémon should always\n"
	.string "be full of energy.\l"
	.string "That's the way they're meant to be!$"

KaolisleCity_Mother_Text::
# 582 "data/maps/KaolisleCity/scripts.pory"
	.string "You've got a real sweet kind of face,\n"
	.string "don't you?\p"
	.string "I bet old ladies like to\n"
	.string "give you candy.$"

KaolisleCity_Swimmer_Text::
# 593 "data/maps/KaolisleCity/scripts.pory"
	.string "For some, holiday is a time of relaxing.\n"
	.string "Not for me though!$"

KaolisleCity_Scott_Text::
# 602 "data/maps/KaolisleCity/scripts.pory"
	.string "I'm a real man of the seas and I\n"
	.string "consider it my duty to keep\l"
	.string "people safe!\p"
	.string "So here's my warning to you:\p"
	.string "Most of the people you find swimming\n"
	.string "around are trainers.\l"
	.string "Stay safe and be prepared!$"

KaolisleCity_SignHarbor_Text::
# 644 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle Harbor$"

KaolisleCity_SignGym_Text::
# 647 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle City Pokémon Gym\n"
	.string "Leader: Clay$"

KaolisleCity_SignHotel_Text::
# 651 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle Grand Resort$"

KaolisleCity_SignFanClub_Text::
# 654 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle City Pokémon Fan Club$"

KaolisleCity_SignIntro_Text::
# 657 "data/maps/KaolisleCity/scripts.pory"
	.string "KAOLISLE CITY\n"
	.string "“The cleanest city in the world.”$"
