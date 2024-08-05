SkyPillar_Top_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AT_Top
	.byte 0


AT_Top::
	goto_if_unset FLAG_OBTAINED_MEGA_RING, AT_Top_2
AT_Top_1:
	setvar VAR_TEMP_6, 1
	end

AT_Top_2:
	setflag FLAG_TEMP_HIDE_FOLLOWER
	goto AT_Top_1


AT_Pedestal::
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end


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
	waitmovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER
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
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, Walk1Left
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
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	destroyfollower
	waitfieldeffect FLDEFF_NPCFLY_OUT
	delay 30
	setvar VAR_RIVAL_AROUND_SANDSTONE, 5
	setvar VAR_PEARLWOOD_TOWN_STATE, 10
	clearflag FLAG_KORRINA_LEAVESGYM
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
	end

AT_TopEvent_3:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement1
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, AT_Top_Movement1Follower
	goto AT_TopEvent_1

AT_TopEvent_4:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement2
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, AT_Top_Movement2Follower
	goto AT_TopEvent_1

AT_TopEvent_5:
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, AT_Top_Movement3Follower
	goto AT_TopEvent_1

AT_TopEvent_6:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement4
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, AT_Top_Movement4Follower
	goto AT_TopEvent_1

AT_TopEvent_7:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement5
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, AT_Top_Movement5Follower
	goto AT_TopEvent_1

AT_TopEvent_8:
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement6
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, AT_Top_Movement6Follower
	goto AT_TopEvent_1

AT_TopEvent_10:
	msgbox LetsGoMeetDadBrendan
	goto AT_TopEvent_9

AT_TopEvent_14:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, Common_Movement_ExclamationMark
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
	applymovement OBJ_EVENT_ID_FOLLOWME_FOLLOWER, Common_Movement_QuestionMark
	waitmovement 0
	delay 48
	msgbox NotHaveFly
	closemessage
	goto AT_TopEvent_16

AT_TopEvent_20:
	msgbox YouMetDadBrendan
	goto AT_TopEvent_19


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
	compare VAR_SPHERES_FOUND, 2
	goto_if_eq AT_Custodian_2
	compare VAR_SPHERES_FOUND, 1
	goto_if_eq AT_Custodian_5
	msgbox ImTheCaretaker
	closemessage
	checkitem ITEM_STONE_SPHERE
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Custodian_8
AT_Custodian_7:
	release
	end

AT_Custodian_2:
	msgbox LookForVerdantSphere, MSGBOX_NPC
	end

AT_Custodian_5:
	checkitem ITEM_STEEL_SPHERE
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Custodian_11
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox ThatsSteelSphere
	setvar VAR_SPHERES_FOUND, 2
	release
	closemessage
	end

AT_Custodian_8:
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox ThatsStoneSphere
	setvar VAR_SPHERES_FOUND, 1
	goto AT_Custodian_7

AT_Custodian_11:
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


AT_Pedestal_Text::
	.string "It's a small pedestal, which looks\n"
	.string "like it's meant to house something.$"

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
