AldeleafGym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AldeleafGymSetUpFromLoad
	map_script MAP_SCRIPT_ON_TRANSITION, AldeleafGymSetUpFromLoad
	.byte 0


AldeleafGymSetUpFromLoad::
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSetUpFromLoad_2
AldeleafGymSetUpFromLoad_1:
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSetUpFromLoad_5
AldeleafGymSetUpFromLoad_4:
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSetUpFromLoad_7
	return

AldeleafGymSetUpFromLoad_2:
	setmetatile 1, 73, 0x206, FALSE
	goto AldeleafGymSetUpFromLoad_1

AldeleafGymSetUpFromLoad_5:
	setmetatile 1, 64, 0x206, FALSE
	goto AldeleafGymSetUpFromLoad_4

AldeleafGymSetUpFromLoad_7:
	setmetatile 1, 55, 0x206, FALSE
	return


AldeleafGymTriggerFlagSet::
	setflag FLAG_SYSTEM_TOGGLE_DOUBLE_WILDS
	setflag FLAG_SYSTEM_NO_CATCHING
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
	release
	end


AldeleafGymTriggerFlagClear::
	clearflag FLAG_SYSTEM_TOGGLE_DOUBLE_WILDS
	clearflag FLAG_SYSTEM_NO_CATCHING
	clearflag FLAG_SYSTEM_NO_WILD_RUNNING
	release
	end


AldeleafGymSwitch1::
	goto_if_unset FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch1_1
	release
	end

AldeleafGymSwitch1_1:
	lockall
	playse SE_SWITCH
	setmetatile 1, 73, 0x206, FALSE
	special DrawWholeMapView
	setflag FLAG_ALDELEAF_SWITCH1
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch1_7
AldeleafGymSwitch1_6:
	msgbox AldeleafGymSwitch1_Text_1, MSGBOX_SIGN
AldeleafGymSwitch1_4:
	release
	end

AldeleafGymSwitch1_5:
	msgbox AldeleafGymSwitch1_Text_0, MSGBOX_SIGN
	setflag FLAG_ALDELEAF_SWITCH_ALL
	goto AldeleafGymSwitch1_4

AldeleafGymSwitch1_7:
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch1_9
	goto AldeleafGymSwitch1_6

AldeleafGymSwitch1_9:
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch1_5
	goto AldeleafGymSwitch1_6


AldeleafGymSwitch2::
	goto_if_unset FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch2_1
	release
	end

AldeleafGymSwitch2_1:
	lockall
	playse SE_SWITCH
	setmetatile 1, 64, 0x206, FALSE
	special DrawWholeMapView
	setflag FLAG_ALDELEAF_SWITCH2
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch2_7
AldeleafGymSwitch2_6:
	msgbox AldeleafGymSwitch2_Text_1, MSGBOX_SIGN
AldeleafGymSwitch2_4:
	release
	end

AldeleafGymSwitch2_5:
	msgbox AldeleafGymSwitch2_Text_0, MSGBOX_SIGN
	setflag FLAG_ALDELEAF_SWITCH_ALL
	goto AldeleafGymSwitch2_4

AldeleafGymSwitch2_7:
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch2_9
	goto AldeleafGymSwitch2_6

AldeleafGymSwitch2_9:
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch2_5
	goto AldeleafGymSwitch2_6


AldeleafGymSwitch3::
	goto_if_unset FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch3_1
	release
	end

AldeleafGymSwitch3_1:
	lockall
	playse SE_SWITCH
	setmetatile 1, 55, 0x206, FALSE
	special DrawWholeMapView
	setflag FLAG_ALDELEAF_SWITCH3
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch3_7
AldeleafGymSwitch3_6:
	msgbox AldeleafGymSwitch3_Text_1, MSGBOX_SIGN
AldeleafGymSwitch3_4:
	release
	end

AldeleafGymSwitch3_5:
	msgbox AldeleafGymSwitch3_Text_0, MSGBOX_SIGN
	setflag FLAG_ALDELEAF_SWITCH_ALL
	goto AldeleafGymSwitch3_4

AldeleafGymSwitch3_7:
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch3_9
	goto AldeleafGymSwitch3_6

AldeleafGymSwitch3_9:
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch3_5
	goto AldeleafGymSwitch3_6


AldeleafGymFloor1::
	goto_if_unset FLAG_ALDELEAF_SWITCH1, AldeleafGymFloor1_1
	release
	end

AldeleafGymFloor1_1:
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloor2::
	goto_if_unset FLAG_ALDELEAF_SWITCH2, AldeleafGymFloor2_1
	release
	end

AldeleafGymFloor2_1:
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloor3::
	goto_if_unset FLAG_ALDELEAF_SWITCH3, AldeleafGymFloor3_1
	release
	end

AldeleafGymFloor3_1:
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloor4::
	goto_if_unset FLAG_ALDELEAF_SWITCH_ALL, AldeleafGymFloor4_1
	release
	end

AldeleafGymFloor4_1:
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloorTriggered::
	compare VAR_ALDELEAF_GYM_STEPS, 3
	goto_if_le AldeleafGymFloorTriggered_1
	setvar VAR_ALDELEAF_GYM_STEPS, 0
	random 10
	compare VAR_RESULT, 1
	goto_if_le AldeleafGymFloorTriggered_5
	compare VAR_RESULT, 2
	goto_if_ge AldeleafGymFloorTriggered_7
	return

AldeleafGymFloorTriggered_1:
	addvar VAR_ALDELEAF_GYM_STEPS, 1
	release
	end

AldeleafGymFloorTriggered_5:
	release
	end

AldeleafGymFloorTriggered_7:
	random 10
	compare VAR_RESULT, 0
	goto_if_eq AldeleafGymFloorTriggered_10
AldeleafGymFloorTriggered_9:
	compare VAR_RESULT, 1
	goto_if_eq AldeleafGymFloorTriggered_13
AldeleafGymFloorTriggered_12:
	compare VAR_RESULT, 2
	goto_if_eq AldeleafGymFloorTriggered_16
AldeleafGymFloorTriggered_15:
	compare VAR_RESULT, 3
	goto_if_eq AldeleafGymFloorTriggered_19
AldeleafGymFloorTriggered_18:
	compare VAR_RESULT, 4
	goto_if_eq AldeleafGymFloorTriggered_22
AldeleafGymFloorTriggered_21:
	compare VAR_RESULT, 5
	goto_if_eq AldeleafGymFloorTriggered_25
AldeleafGymFloorTriggered_24:
	compare VAR_RESULT, 6
	goto_if_eq AldeleafGymFloorTriggered_28
AldeleafGymFloorTriggered_27:
	compare VAR_RESULT, 7
	goto_if_eq AldeleafGymFloorTriggered_31
AldeleafGymFloorTriggered_30:
	compare VAR_RESULT, 8
	goto_if_eq AldeleafGymFloorTriggered_34
AldeleafGymFloorTriggered_33:
	compare VAR_RESULT, 9
	goto_if_eq AldeleafGymFloorTriggered_37
AldeleafGymFloorTriggered_36:
	dowildbattle
	return

AldeleafGymFloorTriggered_10:
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_MAGNEMITE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_9

AldeleafGymFloorTriggered_13:
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_VOLTORB, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_12

AldeleafGymFloorTriggered_16:
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_HELIOPTILE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_15

AldeleafGymFloorTriggered_19:
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_18

AldeleafGymFloorTriggered_22:
	setwildbattlelevelrange SPECIES_VOLTORB, 11, ITEM_NONE, SPECIES_VOLTORB, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_21

AldeleafGymFloorTriggered_25:
	setwildbattlelevelrange SPECIES_VOLTORB, 11, ITEM_NONE, SPECIES_HELIOPTILE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_24

AldeleafGymFloorTriggered_28:
	setwildbattlelevelrange SPECIES_VOLTORB, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_27

AldeleafGymFloorTriggered_31:
	setwildbattlelevelrange SPECIES_HELIOPTILE, 11, ITEM_NONE, SPECIES_HELIOPTILE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_30

AldeleafGymFloorTriggered_34:
	setwildbattlelevelrange SPECIES_HELIOPTILE, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_33

AldeleafGymFloorTriggered_37:
	setwildbattlelevelrange SPECIES_CHARJABUG, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_36


Aldeleaf_Gym_Volkner_Talk::
	lockall
	faceplayer
	checktrainerflag TRAINER_MARY
	goto_if 1, Aldeleaf_Gym_Volkner_Talk_2
	msgbox Aldeleaf_Gym_Volkner_Talk_Text_0
	waitmessage
	closemessage
	turnobject 18, DIR_WEST
Aldeleaf_Gym_Volkner_Talk_1:
	release
	end

Aldeleaf_Gym_Volkner_Talk_2:
	msgbox Aldeleaf_Gym_Text_VolknerPostBattle, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto Aldeleaf_Gym_Volkner_Talk_1


Aldeleaf_Gym_EventScript_Volkner::
	lockall
	delay 10
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 18, DIR_WEST
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Right
	waitmovement 0
	delay 10
	special RemoveCameraObject
	trainerbattle_single TRAINER_MARY, Aldeleaf_Gym_Text_VolknerIntro, Aldeleaf_Gym_Text_VolknerDefeat, Aldeleaf_Gym_EventScript_VolknerDefeated, NO_MUSIC
	goto Aldeleaf_Gym_EventScript_GiveWildCharge
	msgbox Aldeleaf_Gym_Text_VolknerPostBattle, MSGBOX_DEFAULT
	release
	end


Aldeleaf_Gym_EventScript_VolknerDefeated::
	special SpawnCameraObject
	delay 30
	applymovement 18, Walk3Left
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Right
	waitmovement 0
	delay 15
	message Aldeleaf_Gym_Text_ReceivedThunderBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Aldeleaf_Gym_Text_ThunderBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	setflag FLAG_ALDELEAF_SWITCH_ALL
	addvar VAR_ALDELEAF_GYM_STATE, 1
	setvar VAR_BADGES_OBTAINED, 2
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	special RemoveCameraObject
	goto Aldeleaf_Gym_EventScript_GiveWildCharge
	end


Aldeleaf_Gym_EventScript_GiveWildCharge::
	giveitem ITEM_TM_WILD_CHARGE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Aldeleaf_Gym_Text_ExplainWildCharge, MSGBOX_DEFAULT
	release
	end


Aldeleaf_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Aldeleaf_Gym_EventScript_GymGuide_2
	msgbox Aldeleaf_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
Aldeleaf_Gym_EventScript_GymGuide_1:
	release
	end

Aldeleaf_Gym_EventScript_GymGuide_2:
	msgbox Aldeleaf_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	goto Aldeleaf_Gym_EventScript_GymGuide_1


Aldeleaf_Gym_EventScript_Statue::
	lockall
	goto_if_set FLAG_BADGE02_GET, Aldeleaf_Gym_EventScript_Statue_2
	msgbox Aldeleaf_Gym_Text_GymStatue, MSGBOX_SIGN
Aldeleaf_Gym_EventScript_Statue_1:
	end

Aldeleaf_Gym_EventScript_Statue_2:
	msgbox Aldeleaf_Gym_Text_GymStatueCertified, MSGBOX_SIGN
	goto Aldeleaf_Gym_EventScript_Statue_1


AldeleafGym_Man::
	msgbox AldeleafGym_Man_Text, MSGBOX_NPC
	end


AldeleafGym_Trainer1::
	trainerbattle_single TRAINER_PARKER, AldeleafGym_Text_Trainer1Intro, AldeleafGym_Text_Trainer1Defeat
	msgbox AldeleafGym_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer2::
	trainerbattle_single TRAINER_GEORGE, AldeleafGym_Text_Trainer2Intro, AldeleafGym_Text_Trainer2Defeat
	msgbox AldeleafGym_Text_Trainer2PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer3::
	trainerbattle_single TRAINER_BERKE, AldeleafGym_Text_Trainer3Intro, AldeleafGym_Text_Trainer3Defeat
	msgbox AldeleafGym_Text_Trainer3PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer4::
	trainerbattle_single TRAINER_BRAXTON, AldeleafGym_Text_Trainer4Intro, AldeleafGym_Text_Trainer4Defeat
	msgbox AldeleafGym_Text_Trainer4PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer5::
	trainerbattle_single TRAINER_VINCENT, AldeleafGym_Text_Trainer5Intro, AldeleafGym_Text_Trainer5Defeat
	msgbox AldeleafGym_Text_Trainer5PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer6::
	trainerbattle_single TRAINER_LEROY, AldeleafGym_Text_Trainer6Intro, AldeleafGym_Text_Trainer6Defeat
	msgbox AldeleafGym_Text_Trainer6PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer7::
	trainerbattle_single TRAINER_WILTON_1, AldeleafGym_Text_Trainer7Intro, AldeleafGym_Text_Trainer7Defeat
	msgbox AldeleafGym_Text_Trainer7PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer8::
	trainerbattle_single TRAINER_EDGAR, AldeleafGym_Text_Trainer8Intro, AldeleafGym_Text_Trainer8Defeat
	msgbox AldeleafGym_Text_Trainer8PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer9::
	trainerbattle_single TRAINER_ALBERT, AldeleafGym_Text_Trainer9Intro, AldeleafGym_Text_Trainer9Defeat
	msgbox AldeleafGym_Text_Trainer9PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer10::
	trainerbattle_double TRAINER_SAMUEL, AldeleafGym_Text_Trainer10Intro, AldeleafGym_Text_Trainer10Defeat, AldeleafGym_Text_10NotEnoughMons
	msgbox AldeleafGym_Text_Trainer10PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer11::
	trainerbattle_double TRAINER_SAMUEL, AldeleafGym_Text_Trainer11Intro, AldeleafGym_Text_Trainer11Defeat, AldeleafGym_Text_11NotEnoughMons
	msgbox AldeleafGym_Text_Trainer11PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer12::
	trainerbattle_single TRAINER_OWEN, AldeleafGym_Text_Trainer12Intro, AldeleafGym_Text_Trainer12Defeat
	msgbox AldeleafGym_Text_Trainer12PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer13::
	trainerbattle_single TRAINER_WILTON_2, AldeleafGym_Text_Trainer13Intro, AldeleafGym_Text_Trainer13Defeat
	msgbox AldeleafGym_Text_Trainer13PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer14::
	trainerbattle_single TRAINER_WILTON_3, AldeleafGym_Text_Trainer14Intro, AldeleafGym_Text_Trainer14Defeat
	msgbox AldeleafGym_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer15::
	trainerbattle_single TRAINER_WILTON_4, AldeleafGym_Text_Trainer15Intro, AldeleafGym_Text_Trainer15Defeat
	msgbox AldeleafGym_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer16::
	trainerbattle_single TRAINER_WILTON_5, AldeleafGym_Text_Trainer16Intro, AldeleafGym_Text_Trainer16Defeat
	msgbox AldeleafGym_Text_Trainer16PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer17::
	trainerbattle_single TRAINER_WARREN, AldeleafGym_Text_Trainer17Intro, AldeleafGym_Text_Trainer17Defeat
	msgbox AldeleafGym_Text_Trainer17PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGymSwitch1_Text_0:
	.string "Switch 1 activated.\nAll switches have been activated.$"

AldeleafGymSwitch1_Text_1:
	.string "Switch 1 activated.$"

AldeleafGymSwitch2_Text_0:
	.string "Switch 2 activated.\nAll switches have been activated.$"

AldeleafGymSwitch2_Text_1:
	.string "Switch 2 activated.$"

AldeleafGymSwitch3_Text_0:
	.string "Switch 3 activated.\nAll switches have been activated.$"

AldeleafGymSwitch3_Text_1:
	.string "Switch 3 activated.$"

Aldeleaf_Gym_Volkner_Talk_Text_0:
	.string "Volkner: I see you've arrived.\pIf you're ready, go stand on the other\nside of the arena so we may begin.$"

Aldeleaf_Gym_Text_VolknerIntro::
	.string "Volkner: I knew you'd be here soon.\n"
	.string "Glad to see you did not disappoint.\p"
	.string "Even though I'm grateful for\n"
	.string "your help at the ranch,\l"
	.string "I am the Leader of this Gym and\l"
	.string "you are a challenger.\p"
	.string "I assume you understand what\n"
	.string "that entails…\p"
	.string "…All right, challenger.\p"
	.string "I'm Volkner, the Gym Leader.\p"
	.string "It's not often, but some Trainers\n"
	.string "manage to come and challenge me.\l"
	.string "But they've all been boring battles.\p"
	.string "Anyway, I guess we'd better get this\n"
	.string "done.\p"
	.string "I hope you're the Trainer who'll make\n"
	.string "me remember how fun it is to battle!$"

Aldeleaf_Gym_Text_VolknerDefeat::
	.string "…Hehehe.\p"
	.string "Hahahah!\p"
	.string "…That was the most fun I've had\n"
	.string "in a battle since…I don't know when!\p"
	.string "It's also made me excited to know\n"
	.string "you and your team will keep battling\l"
	.string "to greater heights!\p"
	.string "This is your second Gym Badge.\n"
	.string "You've earned this!$"

Aldeleaf_Gym_Text_ReceivedThunderBadge::
	.string "{PLAYER} received the Dynamo Badge\n"
	.string "from Volkner!$"

Aldeleaf_Gym_Text_ThunderBadgeInfoTakeThis::
	.string "The Dynamo Badge makes all Pokémon\n"
	.string "up to level 40, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "It also enables them to use the HM move\n"
	.string "“Cut” outside of battle.\p"
	.string "Here, have this TM as well.$"

Aldeleaf_Gym_Text_ExplainWildCharge::
	.string "That TM contains the move Wild Charge.\p"
	.string "It's a really powerful attack where\n"
	.string "the user shrouds itself in electricity\l"
	.string "and slams against the opponent.\p"
	.string "Be careful though, as this also\n"
	.string "hurts the user!$"

Aldeleaf_Gym_Text_VolknerPostBattle::
	.string "After witnessing your strength here,\n"
	.string "I'm starting to doubt whether you even\l"
	.string "needed our help with Team Rocket\l"
	.string "back at the ranch.$"

Aldeleaf_Gym_Text_GymStatue::
	.string "Aldeleaf City Pokémon Gym\p"
	.string "Volkner's certified trainers:\n"
	.string "{BROTHER}\l"
	.string "{RIVAL}$"

Aldeleaf_Gym_Text_GymStatueCertified::
	.string "Aldeleaf City Pokémon Gym\p"
	.string "Volkner's certified trainers:\n"
	.string "{BROTHER}\l"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"

Aldeleaf_Gym_Text_GymGuideAdvice::
	.string "Yo, champ in the making!\p"
	.string "The leader of this gym, Volkner,\n"
	.string "is an Electric-type trainer.\p"
	.string "Go against him with flying- or water-\n"
	.string "type Pokémon and you're going to have\l"
	.string "a bad time!\p"
	.string "By the by, many of the trainers\n"
	.string "here like to work in pairs!\l"
	.string "And see those peculiar floor tiles?\p"
	.string "Stepping on one might activate a trap\n"
	.string "that sends a few Electric-type Pokémon\l"
	.string "flying your way, so you better be\l"
	.string "prepared!\p"
	.string "Do note that those Pokémon are\n"
	.string "actually the property of the gym and\l"
	.string "considered part of your gym trial.\p"
	.string "As such, catching them or running away\n"
	.string "from a battle is strictly prohibited!\p"
	.string "If you find the going too hard,\n"
	.string "there's always those pressure plates\l"
	.string "in the side rooms.\l"
	.string "Maybe stepping on one might\l"
	.string "tamper with the floor mechanism…\p"
	.string "Anyway, that's enough from me.\n"
	.string "Go get 'em, Champ!$"

Aldeleaf_Gym_Text_GymGuidePostVictory::
	.string "Whoa! What a shocking outcome!\n"
	.string "You sure charged in and showed\l"
	.string "everyone who's the boss!$"

AldeleafGym_Man_Text::
	.string "How peculiar…\p"
	.string "I don't see a plate controlling\n"
	.string "this floor…$"

AldeleafGym_Text_Trainer1Intro::
	.string "I trained under Volkner!\n"
	.string "There ain't no way I'll lose easily!$"

AldeleafGym_Text_Trainer1Defeat::
	.string "Unplugged and turned off…$"

AldeleafGym_Text_Trainer1PostBattle::
	.string "Volkner, our Gym Leader, is a really\n"
	.string "experienced trainer.\p"
	.string "There have been talks of him possibly\n"
	.string "becoming a member of the Elite Four!$"

AldeleafGym_Text_Trainer2Intro::
	.string "My electric soul, it'll shatter your\n"
	.string "dreams whole, whoa-yeahah!$"

AldeleafGym_Text_Trainer2Defeat::
	.string "That was plugged in, amped up,\n"
	.string "over-driven electric, man!$"

AldeleafGym_Text_Trainer2PostBattle::
	.string "Pokémon and rock, it's all about heart,\n"
	.string "whoa-yeah!$"

AldeleafGym_Text_Trainer3Intro::
	.string "With my charm and my Pokémon's moves,\n"
	.string "you'll be shocked!$"

AldeleafGym_Text_Trainer3Defeat::
	.string "I'm shocked by your power!$"

AldeleafGym_Text_Trainer3PostBattle::
	.string "I've heard that Volkner used to be\n"
	.string "the leader of a gym over in Sinnoh.\p"
	.string "Wonder what caused him to move over\n"
	.string "here…$"

AldeleafGym_Text_Trainer4Intro::
	.string "I love shiny things!$"

AldeleafGym_Text_Trainer4Defeat::
	.string "Oh…\n"
	.string "My eyes are frazzled…$"

AldeleafGym_Text_Trainer4PostBattle::
	.string "You shine brighter than anyone\n"
	.string "I've seen before!$"

AldeleafGym_Text_Trainer5Intro::
	.string "This Gym's got interesting mechanics!\n"
	.string "Isn't it fun?$"

AldeleafGym_Text_Trainer5Defeat::
	.string "It's no fun to lose…$"

AldeleafGym_Text_Trainer5PostBattle::
	.string "Volkner is surprisingly good at\n"
	.string "tinkering with technology.\p"
	.string "Did you know that he personally\n"
	.string "designed all those floor traps?$"

AldeleafGym_Text_Trainer6Intro::
	.string "Get ready to face the next Pokémon\n"
	.string "League Champion!$"

AldeleafGym_Text_Trainer6Defeat::
	.string "Did I say I'd be the next Champion?\n"
	.string "I meant the one after that…$"

AldeleafGym_Text_Trainer6PostBattle::
	.string "If you're goals feel unreachable,\n"
	.string "don't beat yourself up for not being\l"
	.string "able to reach them.\p"
	.string "Sometimes it's better to lower your\n"
	.string "expectations instead.$"

AldeleafGym_Text_Trainer7Intro::
	.string "Here it comes!\n"
	.string "Get ready for my trump card!$"

AldeleafGym_Text_Trainer7Defeat::
	.string "Shocking… I didn't see this coming!$"

AldeleafGym_Text_Trainer7PostBattle::
	.string "You've got me beat…\p"
	.string "Your desire and the noble way\n"
	.string "your Pokémon battled for you…\p"
	.string "I even felt thrilled during our\n"
	.string "match.\p"
	.string "That was a very good battle.$"

AldeleafGym_Text_Trainer8Intro::
	.string "Wow! I'm surprised you've come this\n"
	.string "far, but you'll have to turn back.\p"
	.string "There isn't any chance that you\n"
	.string "could ever beat me!$"

AldeleafGym_Text_Trainer8Defeat::
	.string "What makes your Pokémon\n"
	.string "so special?$"

AldeleafGym_Text_Trainer8PostBattle::
	.string "As a challenger, you're one tough\n"
	.string "Trainer.$"

AldeleafGym_Text_Trainer9Intro::
	.string "I want to win!$"

AldeleafGym_Text_Trainer9Defeat::
	.string "I couldn't win…$"

AldeleafGym_Text_Trainer9PostBattle::
	.string "Next time I'll win, for sure!$"

AldeleafGym_Text_Trainer10Intro::
	.string "Teri: Yay! We're gonna battle with\n"
	.string "lots of Pokémon today!$"

AldeleafGym_Text_Trainer10Defeat::
	.string "Teri: Even with both of us, we lost.$"

AldeleafGym_Text_Trainer10PostBattle::
	.string "Teri: One day, our twin power will\n"
	.string "rule the world!$"

AldeleafGym_Text_10NotEnoughMons::
	.string "Teri: It's not a fair fight if\n"
	.string "you only have 1 Pokémon!$"

AldeleafGym_Text_Trainer11Intro::
	.string "Tia: Yay! We're gonna have a battle\n"
	.string "with three Trainers!$"

AldeleafGym_Text_Trainer11Defeat::
	.string "Tia: We two couldn't win.$"

AldeleafGym_Text_Trainer11PostBattle::
	.string "Tia: As long as we fight together,\n"
	.string "we're twice as strong!$"

AldeleafGym_Text_11NotEnoughMons::
	.string "Tia: You should have at least 2 Pokémon\n"
	.string "to make this fair!$"

AldeleafGym_Text_Trainer12Intro::
	.string "I'm not just looking for tough\n"
	.string "Trainers to battle.\p"
	.string "I've been battling here because\n"
	.string "I want to feel the rush!$"

AldeleafGym_Text_Trainer12Defeat::
	.string "Your power is thrilling...\n"
	.string "I'm thrilled down to my toes!$"

AldeleafGym_Text_Trainer12PostBattle::
	.string "I'm so glad that there are Pokémon!\p"
	.string "There isn't much else that gives me\n"
	.string "the thrill that Pokémon do!$"

AldeleafGym_Text_Trainer13Intro::
	.string "My Pikachu is the strongest\n"
	.string "in the world!$"

AldeleafGym_Text_Trainer13Defeat::
	.string "My Pikachu…$"

AldeleafGym_Text_Trainer13PostBattle::
	.string "Should I evolve my Pikachu?\n"
	.string "Will it stay cute afterwards?$"

AldeleafGym_Text_Trainer14Intro::
	.string "I'm one of the strongest trainers\n"
	.string "in this gym!\l"
	.string "You better not underestimate me!$"

AldeleafGym_Text_Trainer14Defeat::
	.string "Looks like I'm the one who\n"
	.string "underestimated YOU.$"

AldeleafGym_Text_Trainer14PostBattle::
	.string "The gap between me and Volkner is\n"
	.string "unimaginable.\l"
	.string "I hope you're prepared.$"

AldeleafGym_Text_Trainer15Intro::
	.string "Watch out, or I'll zap you!$"

AldeleafGym_Text_Trainer15Defeat::
	.string "Couldn't create a big enough spark…$"

AldeleafGym_Text_Trainer15PostBattle::
	.string "Next time I'll really zap you!$"

AldeleafGym_Text_Trainer16Intro::
	.string "Whether you're a Trainer or a\n"
	.string "Guitarist, it takes dedication to\l"
	.string "improve your mad skills!$"

AldeleafGym_Text_Trainer16Defeat::
	.string "My skills seem to have let me down.\n"
	.string "I must have been out of tune!$"

AldeleafGym_Text_Trainer16PostBattle::
	.string "The way you battle, I can feel the\n"
	.string "very heart of rock and roll.\p"
	.string "Tell me, are you maybe a fan of\n"
	.string "rocking out?$"

AldeleafGym_Text_Trainer17Intro::
	.string "You're not strong enough for Volkner!\n"
	.string "I'll take you on instead!$"

AldeleafGym_Text_Trainer17Defeat::
	.string "Okay, you are strong…$"

AldeleafGym_Text_Trainer17PostBattle::
	.string "I wasn't strong enough to block\n"
	.string "your way…\l"
	.string "I need to train more!$"
