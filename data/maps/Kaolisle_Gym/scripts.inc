Kaolisle_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Kaolisle_Gym_SetMetatiles
	.byte 0


Kaolisle_Gym_SetMetatiles::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_2
Kaolisle_Gym_SetMetatiles_1:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_5
Kaolisle_Gym_SetMetatiles_4:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_8
Kaolisle_Gym_SetMetatiles_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_11
Kaolisle_Gym_SetMetatiles_10:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_15
Kaolisle_Gym_SetMetatiles_13:
	end

Kaolisle_Gym_SetMetatiles_2:
	setmetatile 39, 46, 0x219, FALSE
	setmetatile 39, 47, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_1

Kaolisle_Gym_SetMetatiles_5:
	setmetatile 3, 35, 0x219, FALSE
	setmetatile 3, 36, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_4

Kaolisle_Gym_SetMetatiles_8:
	setmetatile 51, 24, 0x219, FALSE
	setmetatile 51, 25, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_7

Kaolisle_Gym_SetMetatiles_11:
	setmetatile 15, 2, 0x219, FALSE
	setmetatile 15, 3, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_10

Kaolisle_Gym_SetMetatiles_14:
	setmetatile 8, 63, 0x26B, FALSE
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_15:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_17
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_17:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_19
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_19:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_14
	goto Kaolisle_Gym_SetMetatiles_13


Kaolisle_Gym_Switch1::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_2
	setflag FLAG_KAOLISLE_GYM_SWITCH1
	playse SE_SWITCH
	setmetatile 39, 46, 0x219, FALSE
	setmetatile 39, 47, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_7
Kaolisle_Gym_Switch1_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch1_4:
	waitse
	release
	end

Kaolisle_Gym_Switch1_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch1_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch1_4

Kaolisle_Gym_Switch1_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch1_9
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch1_11
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch1_5
	goto Kaolisle_Gym_Switch1_6


Kaolisle_Gym_Switch2::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_2
	setflag FLAG_KAOLISLE_GYM_SWITCH2
	playse SE_SWITCH
	setmetatile 3, 35, 0x219, FALSE
	setmetatile 3, 36, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch2_7
Kaolisle_Gym_Switch2_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch2_4:
	waitse
	release
	end

Kaolisle_Gym_Switch2_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch2_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch2_4

Kaolisle_Gym_Switch2_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_9
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch2_11
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch2_5
	goto Kaolisle_Gym_Switch2_6


Kaolisle_Gym_Switch3::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_2
	setflag FLAG_KAOLISLE_GYM_SWITCH3
	playse SE_SWITCH
	setmetatile 51, 24, 0x219, FALSE
	setmetatile 51, 25, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch3_7
Kaolisle_Gym_Switch3_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch3_4:
	waitse
	release
	end

Kaolisle_Gym_Switch3_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch3_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch3_4

Kaolisle_Gym_Switch3_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch3_9
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_11
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch3_5
	goto Kaolisle_Gym_Switch3_6


Kaolisle_Gym_Switch4::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_2
	setflag FLAG_KAOLISLE_GYM_SWITCH4
	playse SE_SWITCH
	setmetatile 15, 2, 0x219, FALSE
	setmetatile 15, 3, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch4_7
Kaolisle_Gym_Switch4_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch4_4:
	waitse
	release
	end

Kaolisle_Gym_Switch4_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch4_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch4_4

Kaolisle_Gym_Switch4_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch4_9
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch4_11
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_5
	goto Kaolisle_Gym_Switch4_6


KaolisleGym_Trainer1_Camper1::
	trainerbattle_single TRAINER_KAOLGYM_TR1_CAMPER1, KaolisleGym_Trainer1_Camper1_Intro, KaolisleGym_Trainer1_Camper1_Defeat
	msgbox KaolisleGym_Trainer1_Camper1_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer2_Picnicker1::
	trainerbattle_single TRAINER_KAOLGYM_TR2_PICNICKER1, KaolisleGym_Trainer2_Picnicker1_Intro, KaolisleGym_Trainer2_Picnicker1_Defeat
	msgbox KaolisleGym_Trainer2_Picnicker1_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer3_Hiker1::
	trainerbattle_single TRAINER_KAOLGYM_TR3_HIKER1, KaolisleGym_Trainer3_Hiker1_Intro, KaolisleGym_Trainer3_Hiker1_Defeat
	msgbox KaolisleGym_Trainer3_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer4_Camper2::
	trainerbattle_single TRAINER_KAOLGYM_TR4_CAMPER2, KaolisleGym_Trainer4_Camper2_Intro, KaolisleGym_Trainer4_Camper2_Defeat
	msgbox KaolisleGym_Trainer4_Camper2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer5_Hiker2::
	trainerbattle_single TRAINER_KAOLGYM_TR5_HIKER2, KaolisleGym_Trainer5_Hiker2_Intro, KaolisleGym_Trainer5_Hiker2_Defeat
	msgbox KaolisleGym_Trainer5_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer6_Hiker3::
	trainerbattle_single TRAINER_KAOLGYM_TR6_HIKER3, KaolisleGym_Trainer6_Hiker3_Intro, KaolisleGym_Trainer6_Hiker3_Defeat
	msgbox KaolisleGym_Trainer6_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer7_Picnicker2::
	trainerbattle_single TRAINER_KAOLGYM_TR7_PICNICKER2, KaolisleGym_Trainer7_Picnicker2_Intro, KaolisleGym_Trainer7_Picnicker2_Defeat
	msgbox KaolisleGym_Trainer7_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer8_Camper3::
	trainerbattle_single TRAINER_KAOLGYM_TR8_CAMPER3, KaolisleGym_Trainer8_Camper3_Intro, KaolisleGym_Trainer8_Camper3_Defeat
	msgbox KaolisleGym_Trainer8_Camper3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer9_Picnicker3::
	trainerbattle_single TRAINER_KAOLGYM_TR9_PICNICKER3, KaolisleGym_Trainer9_Picnicker3_Intro, KaolisleGym_Trainer9_Picnicker3_Defeat
	msgbox KaolisleGym_Trainer9_Picnicker3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer10_Hiker4::
	trainerbattle_single TRAINER_KAOLGYM_TR10_HIKER4, KaolisleGym_Trainer10_Hiker4_Intro, KaolisleGym_Trainer10_Hiker4_Defeat
	msgbox KaolisleGym_Trainer10_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolGym_ClayTalk::
	goto_if_set FLAG_BADGE03_GET, KaolGym_ClayTalk_2
	msgbox KaolGym_YouArrived, MSGBOX_NPC
	turnobject 1, DIR_WEST
KaolGym_ClayTalk_1:
	end

KaolGym_ClayTalk_2:
	msgbox KaolGym_ClayPosBat, MSGBOX_NPC
	goto KaolGym_ClayTalk_1


KaolGym_LeaderScript::
	goto_if_set FLAG_BADGE03_GET, KaolGym_LeaderScript_2
	call GymStartingMovement
	trainerbattle_single TRAINER_KAOLGYM_CLAY, KaolGym_ClayInt, KaolGym_ClayDef, KaolGym_ClayEvent, NO_MUSIC
	end

KaolGym_LeaderScript_2:
	release
	end


KaolGym_ClayEvent::
	call GymMovementAfter
	message KaolGym_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox KaolGym_TakeThis, MSGBOX_DEFAULT
	setflag FLAG_BADGE03_GET
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	special RemoveCameraObject
	giveitem ITEM_TM_WILD_CHARGE
	msgbox KaolGym_ExplainTM, MSGBOX_DEFAULT
	release
	end


KaolGym_Guide::
	goto_if_set FLAG_BADGE03_GET, KaolGym_Guide_2
	msgbox KaolGym_GuideAdvice, MSGBOX_NPC
KaolGym_Guide_1:
	end

KaolGym_Guide_2:
	msgbox KaolGym_GuidePostVictory, MSGBOX_NPC
	goto KaolGym_Guide_1


KaolGym_Statue::
	goto_if_set FLAG_BADGE03_GET, KaolGym_Statue_2
	msgbox KaolGym_GymStatue, MSGBOX_SIGN
KaolGym_Statue_1:
	end

KaolGym_Statue_2:
	msgbox KaolGym_GymStatueCertified, MSGBOX_SIGN
	goto KaolGym_Statue_1


GymStartingMovement::
	lockall
	delay 10
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 1, DIR_WEST
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Kaolisle_Gym_MoveCamera
	waitmovement 0
	delay 10
	special RemoveCameraObject
	return


Kaolisle_Gym_MoveCamera:
	walk_right
	walk_right
	walk_right
	step_end

GymMovementAfter::
	special SpawnCameraObject
	delay 30
	applymovement 1, Kaolisle_Gym_MoveLeft
	applymovement OBJ_EVENT_ID_PLAYER, Kaolisle_Gym_MoveRight
	waitmovement 0
	delay 15
	return


Kaolisle_Gym_MoveLeft:
	walk_left
	walk_left
	walk_left
	step_end

Kaolisle_Gym_MoveRight:
	walk_right
	walk_right
	walk_right
	step_end

TestScript1::
	checkpartymon SPECIES_BLAZIKEN, 1
	compare VAR_RESULT, TRUE
	goto_if_eq TestScript1_1
	msgbox TestScript1_Text_1, MSGBOX_NPC
	return

TestScript1_1:
	msgbox TestScript1_Text_0, MSGBOX_NPC
	return


TestScript2::
	checkpartymon SPECIES_BLAZIKEN, 0
	compare VAR_RESULT, TRUE
	goto_if_eq TestScript2_1
	msgbox TestScript1_Text_1, MSGBOX_NPC
	return

TestScript2_1:
	msgbox TestScript1_Text_0, MSGBOX_NPC
	return


Kaolisle_Gym_Switch1_Text_0:
	.string "This button has already been pressed.$"

Kaolisle_Gym_Switch1_Text_1:
	.string "{PLAYER} pressed the button.\nAll buttons have been pressed.$"

Kaolisle_Gym_Switch1_Text_2:
	.string "{PLAYER} pressed the button.$"

TestScript1_Text_0:
	.string "True$"

TestScript1_Text_1:
	.string "False$"

KaolisleGym_Trainer1_Camper1_Intro::
	.string "$"

KaolisleGym_Trainer1_Camper1_Defeat::
	.string "$"

KaolisleGym_Trainer1_Camper1_PostBattle::
	.string "$"

KaolisleGym_Trainer2_Picnicker1_Intro::
	.string "$"

KaolisleGym_Trainer2_Picnicker1_Defeat::
	.string "$"

KaolisleGym_Trainer2_Picnicker1_PostBattle::
	.string "$"

KaolisleGym_Trainer3_Hiker1_Intro::
	.string "$"

KaolisleGym_Trainer3_Hiker1_Defeat::
	.string "$"

KaolisleGym_Trainer3_Hiker1_PostBattle::
	.string "$"

KaolisleGym_Trainer4_Camper2_Intro::
	.string "$"

KaolisleGym_Trainer4_Camper2_Defeat::
	.string "$"

KaolisleGym_Trainer4_Camper2_PostBattle::
	.string "$"

KaolisleGym_Trainer5_Hiker2_Intro::
	.string "$"

KaolisleGym_Trainer5_Hiker2_Defeat::
	.string "$"

KaolisleGym_Trainer5_Hiker2_PostBattle::
	.string "$"

KaolisleGym_Trainer6_Hiker3_Intro::
	.string "$"

KaolisleGym_Trainer6_Hiker3_Defeat::
	.string "$"

KaolisleGym_Trainer6_Hiker3_PostBattle::
	.string "$"

KaolisleGym_Trainer7_Picnicker2_Intro::
	.string "$"

KaolisleGym_Trainer7_Picnicker2_Defeat::
	.string "$"

KaolisleGym_Trainer7_Picnicker2_PostBattle::
	.string "$"

KaolisleGym_Trainer8_Camper3_Intro::
	.string "$"

KaolisleGym_Trainer8_Camper3_Defeat::
	.string "$"

KaolisleGym_Trainer8_Camper3_PostBattle::
	.string "$"

KaolisleGym_Trainer9_Picnicker3_Intro::
	.string "$"

KaolisleGym_Trainer9_Picnicker3_Defeat::
	.string "$"

KaolisleGym_Trainer9_Picnicker3_PostBattle::
	.string "$"

KaolisleGym_Trainer10_Hiker4_Intro::
	.string "$"

KaolisleGym_Trainer10_Hiker4_Defeat::
	.string "$"

KaolisleGym_Trainer10_Hiker4_PostBattle::
	.string "$"

KaolGym_YouArrived::
	.string "Clay: I see you've arrived.\p"
	.string "If you're ready, go stand on the other\n"
	.string "side of the arena so we may begin.$"

KaolGym_ClayInt::
	.string "Clay: I knew you'd be here soon.\n"
	.string "Glad to see you did not disappoint.\p"
	.string "Even though I'm grateful for\n"
	.string "your help at the ranch,\l"
	.string "I am the Leader of this Gym and\l"
	.string "you are a challenger.\p"
	.string "I assume you understand what\n"
	.string "that entails…\p"
	.string "…All right, challenger.\p"
	.string "I'm Clay, the Gym Leader.\p"
	.string "It's not often, but some Trainers\n"
	.string "manage to come and challenge me.\l"
	.string "But they've all been boring battles.\p"
	.string "Anyway, I guess we'd better get this\n"
	.string "done.\p"
	.string "I hope you're the Trainer who'll make\n"
	.string "me remember how fun it is to battle!$"

KaolGym_ClayDef::
	.string "…Hehehe.\p"
	.string "Hahahah!\p"
	.string "…That was the most fun I've had\n"
	.string "in a battle since…I don't know when!\p"
	.string "It's also made me excited to know\n"
	.string "you and your team will keep battling\l"
	.string "to greater heights!\p"
	.string "This is your second Gym Badge.\n"
	.string "You've earned this!$"

KaolGym_ReceivedBadge::
	.string "{PLAYER} received the Quake Badge\n"
	.string "from Clay!$"

KaolGym_TakeThis::
	.string "The Quake Badge makes all Pokémon\n"
	.string "up to level 50, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "It also enables them to use the HM move\n"
	.string "“Cut” outside of battle.\p"
	.string "Here, have this TM as well.$"

KaolGym_ExplainTM::
	.string "That TM contains the move Wild Charge.\p"
	.string "It's a really powerful attack where\n"
	.string "the user shrouds itself in electricity\l"
	.string "and slams against the opponent.\p"
	.string "Be careful though, as this also\n"
	.string "hurts the user!$"

KaolGym_ClayPosBat::
	.string "After witnessing your strength here,\n"
	.string "I'm starting to doubt whether you even\l"
	.string "needed our help with Team Rocket\l"
	.string "back at the ranch.$"

KaolGym_GuideAdvice::
	.string "Yo, champ in the making!\p"
	.string "The leader of this gym, Clay,\n"
	.string "is an electric-type trainer.\p"
	.string "Go against him with flying- or water-\n"
	.string "type Pokémon and you're going to have\l"
	.string "a bad time!\p"
	.string "By the by, many of the trainers\n"
	.string "here like to work in pairs!\l"
	.string "And see those peculiar floor tiles?\p"
	.string "Stepping on one might activate a trap\n"
	.string "that sends a few electric-type Pokémon\l"
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

KaolGym_GuidePostVictory::
	.string "Whoa! What a shocking outcome!\n"
	.string "You sure charged in and showed\l"
	.string "everyone who's the boss!$"

KaolGym_GymStatue::
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "Thomas\l"
	.string "{RIVAL}$"

KaolGym_GymStatueCertified::
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "Thomas\l"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"
