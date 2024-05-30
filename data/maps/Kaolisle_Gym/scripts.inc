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


KaolGymQuake::
	msgbox KaolGymQuake_Text_0, MSGBOX_NPC
	playse SE_SWITCH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 10
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	return


Kaolisle_Gym_Switch1::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_2
	setflag FLAG_KAOLISLE_GYM_SWITCH1
	playse SE_SWITCH
	setmetatile 39, 46, 0x219, FALSE
	setmetatile 39, 47, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_7
Kaolisle_Gym_Switch1_6:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch1_4:
	waitse
	release
	end

Kaolisle_Gym_Switch1_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch1_5:
	call KaolGymQuake
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
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch2_4:
	waitse
	release
	end

Kaolisle_Gym_Switch2_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch2_5:
	call KaolGymQuake
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
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch3_4:
	waitse
	release
	end

Kaolisle_Gym_Switch3_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch3_5:
	call KaolGymQuake
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
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch4_4:
	waitse
	release
	end

Kaolisle_Gym_Switch4_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch4_5:
	call KaolGymQuake
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
	lockall
	faceplayer
	msgbox KaolisleGym_Trainer3_Hiker1_PostBattle, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleGym_Trainer3_Hiker1_2
KaolisleGym_Trainer3_Hiker1_1:
	closemessage
	release
	end

KaolisleGym_Trainer3_Hiker1_2:
	msgbox KaolisleGym_Trainer3_Hiker1_Secret, MSGBOX_NPC
	goto KaolisleGym_Trainer3_Hiker1_1


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
	setvar VAR_BADGES_OBTAINED, 3
	setvar VAR_KAOLISLE_HOTEL_STATE, 1
	clearflag FLAG_HIDEJASMINE_HOTEL
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	special RemoveCameraObject
	giveitem ITEM_TM_STOMPING_TANTRUM
	msgbox KaolGym_ExplainTM, MSGBOX_DEFAULT
	release
	end


KaolGym_Guide::
	goto_if_set FLAG_BADGE03_GET, KaolGym_Guide_2
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, KaolGym_Guide_7
KaolGym_Guide_6:
	msgbox KaolGym_GuideAdvice, MSGBOX_NPC
	end

KaolGym_Guide_2:
	msgbox KaolGym_GuidePostVictory, MSGBOX_NPC
	end

KaolGym_Guide_5:
	msgbox KaolGym_GuideHalfwayThrough, MSGBOX_NPC
	end

KaolGym_Guide_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, KaolGym_Guide_9
	goto KaolGym_Guide_6

KaolGym_Guide_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, KaolGym_Guide_11
	goto KaolGym_Guide_6

KaolGym_Guide_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, KaolGym_Guide_5
	goto KaolGym_Guide_6


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
	special SpawnCameraObject
	compare VAR_BADGES_OBTAINED, 3
	goto_if_eq GymStartingMovement_2
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 1, DIR_WEST
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Right
GymStartingMovement_1:
	waitmovement 0
	delay 10
	special RemoveCameraObject
	return

GymStartingMovement_2:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	turnobject 1, DIR_EAST
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Left
	goto GymStartingMovement_1


GymMovementAfter::
	special SpawnCameraObject
	delay 30
	compare VAR_BADGES_OBTAINED, 3
	goto_if_eq GymMovementAfter_2
	applymovement 1, Walk3Left
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Right
GymMovementAfter_1:
	waitmovement 0
	delay 15
	return

GymMovementAfter_2:
	applymovement 1, Walk3Right
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Left
	goto GymMovementAfter_1


SetBadgesAndTrainers::
	addvar VAR_BADGES_OBTAINED, 1
	copyvar VAR_0x8008, VAR_BADGES_OBTAINED
	call Common_EventScript_SetGymTrainers
	return


KaolGymQuake_Text_0:
	.string "{PLAYER} pressed the button.\nAll buttons have been pressed.$"

Kaolisle_Gym_Switch1_Text_0:
	.string "This button has already been pressed.$"

Kaolisle_Gym_Switch1_Text_1:
	.string "{PLAYER} pressed the button.$"

KaolisleGym_Trainer1_Camper1_Intro::
	.string "I'm your first obstacle in this gym.\n"
	.string "Don't think I'll go down easy though!$"

KaolisleGym_Trainer1_Camper1_Defeat::
	.string "You're stronger than I expected…$"

KaolisleGym_Trainer1_Camper1_PostBattle::
	.string "Here's a tip that works with any maze:\n"
	.string "put your right hand on the wall\l"
	.string "and never let go.\p"
	.string "That way you will reach your\n"
	.string "destination eventually.$"

KaolisleGym_Trainer2_Picnicker1_Intro::
	.string "I'm not letting you press the button\n"
	.string "so easily!$"

KaolisleGym_Trainer2_Picnicker1_Defeat::
	.string "Fine, press the button then!\n"
	.string "I don't really care anymore…$"

KaolisleGym_Trainer2_Picnicker1_PostBattle::
	.string "I thought I could be clever by\n"
	.string "protecting the button directly.\p"
	.string "Wasn't expecting someone so strong\n"
	.string "to waltz in though…$"

KaolisleGym_Trainer3_Hiker1_Intro::
	.string "My Pokémon helped dig these tunnels.\n"
	.string "Let me show it to you!$"

KaolisleGym_Trainer3_Hiker1_Defeat::
	.string "Gwahaha! We've got a real\n"
	.string "contender here!$"

KaolisleGym_Trainer3_Hiker1_PostBattle::
	.string "I lost fair and square.\p"
	.string "Say, would you like to know a secret\n"
	.string "regarding a button?$"

KaolisleGym_Trainer3_Hiker1_Secret::
	.string "If you head past me to the north, you\n"
	.string "will have already gone past a button.$"

KaolisleGym_Trainer4_Camper2_Intro::
	.string "Your luck has ran out!\p"
	.string "Bar Clay,\n"
	.string "I am the strongest trainer here!$"

KaolisleGym_Trainer4_Camper2_Defeat::
	.string "What?! I lost?!$"

KaolisleGym_Trainer4_Camper2_PostBattle::
	.string "You may have beat me but Clay is miles\n"
	.string "ahead of everybody else here.\l"
	.string "Don't think you're in the clear just yet.$"

KaolisleGym_Trainer5_Hiker2_Intro::
	.string "There are no buttons in this direction.\n"
	.string "You better scram, kid!$"

KaolisleGym_Trainer5_Hiker2_Defeat::
	.string "I'm not sure which one got hurt worse;\n"
	.string "my Pokémon, or my pride…$"

KaolisleGym_Trainer5_Hiker2_PostBattle::
	.string "Hope you didn't take that pre-battle\n"
	.string "trash talk too seriously.\p"
	.string "It was just friendly banter between\n"
	.string "rivals. That's how us hikers roll.$"

KaolisleGym_Trainer6_Hiker3_Intro::
	.string "You walked right into my trap.\n"
	.string "Don't think you can escape!$"

KaolisleGym_Trainer6_Hiker3_Defeat::
	.string "My traps were completely ineffective!$"

KaolisleGym_Trainer6_Hiker3_PostBattle::
	.string "You should always be prepared\n"
	.string "for a battle in this gym.\p"
	.string "You never know when you step through\n"
	.string "a door, only to be immediately\l"
	.string "challenged to a battle.$"

KaolisleGym_Trainer7_Picnicker2_Intro::
	.string "My Pokémon are in peak condition!\n"
	.string "Let's go!$"

KaolisleGym_Trainer7_Picnicker2_Defeat::
	.string "No!\n"
	.string "We can still go on!\p"
	.string "Hold on, let me just…{PAUSE_UNTIL_PRESS} No…{PAUSE_UNTIL_PRESS}\n"
	.string "Maybe this one…?{PAUSE_UNTIL_PRESS} No…{PAUSE_UNTIL_PRESS} Hm…$"

KaolisleGym_Trainer7_Picnicker2_PostBattle::
	.string "You may be strong, but I'll keep honing\n"
	.string "my Pokémon and one day defeat you!$"

KaolisleGym_Trainer8_Camper3_Intro::
	.string "Found any buttons yet?$"

KaolisleGym_Trainer8_Camper3_Defeat::
	.string "Not bad. Not bad at all…$"

KaolisleGym_Trainer8_Camper3_PostBattle::
	.string "I do hope that you've managed to find\n"
	.string "at least one button so far.$"

KaolisleGym_Trainer9_Picnicker3_Intro::
	.string "Unfortunately this is a dead end!\p"
	.string "As a consolation prize,\n"
	.string "you get to battle yours truly!$"

KaolisleGym_Trainer9_Picnicker3_Defeat::
	.string "No, I did not just lose!\n"
	.string "In fact, I let you win!$"

KaolisleGym_Trainer9_Picnicker3_PostBattle::
	.string "Hmph…\p"
	.string "Don't get cocky over one measly\n"
	.string "victory!$"

KaolisleGym_Trainer10_Hiker4_Intro::
	.string "If you want to pass through here,\n"
	.string "you must face me!$"

KaolisleGym_Trainer10_Hiker4_Defeat::
	.string "A well earned victory!$"

KaolisleGym_Trainer10_Hiker4_PostBattle::
	.string "I won't block your way any longer.\n"
	.string "Go along then.$"

KaolGym_YouArrived::
	.string "Surely ya know how we do things\n"
	.string "'round here. Don't ya, kid?\p"
	.string "Go stand on th' other side of th'\n"
	.string "arena and let's get things rollin'.$"

KaolGym_ClayInt::
	.string "I'm Clay.\n"
	.string "I'm the Gym Leader 'round here.\p"
	.string "Don't be expectin' no warm\n"
	.string "welcome, now.\p"
	.string "'Round here actions speak louder than\n"
	.string "words and as far I'm concerned,\l"
	.string "ya have yet to show me something\l"
	.string "that's worth commendin' ya for.\p"
	.string "All right, no more dilly-dallyin'.\n"
	.string "Time to see what ya can do!$"

KaolGym_ClayDef::
	.string "Phew…\n"
	.string "You're really somethin'!\p"
	.string "Li'l whippersnapper trainers\n"
	.string "who pack a real punch keep\l"
	.string "showin' up one after another.$"

KaolGym_ReceivedBadge::
	.string "{PLAYER} received the Quake Badge\n"
	.string "from Clay!$"

KaolGym_TakeThis::
	.string "So this is yer third Badge, huh?\n"
	.string "If that's so, Pokémon up to level 50\l"
	.string "will obey ya.\p"
	.string "Also, I'll give ya this TM.$"

KaolGym_ExplainTM::
	.string "That TM's for the move\n"
	.string "Stompin' Tantrum.\p"
	.string "It's a real powerful move that\n"
	.string "doubles in power whenever th' user's\l"
	.string "previous move fails to land.$"

KaolGym_ClayPosBat::
	.string "I don't know how much potential ya got,\n"
	.string "but if ya think ya can go, go wherever,\l"
	.string "and if ya think ya can do somethin',\l"
	.string "keep doin' it.\p"
	.string "Do things how ya want!\n"
	.string "Decide yer own limits!$"

KaolGym_GuideHalfwayThrough::
	.string "Well done pressing all\n"
	.string "the buttons, champ!\p"
	.string "However, you're still only halfway\n"
	.string "through the challenge.\p"
	.string "See those stairs leading down?\p"
	.string "The leader of the gym will be\n"
	.string "waiting for you there.\l"
	.string "Go show him who's the champ… champ!$"

KaolGym_GuideAdvice::
	.string "Yo, champ in the making!\p"
	.string "You may have noticed this gym looking\n"
	.string "a bit different from the norm,\l"
	.string "but fret not, because we are\l"
	.string "as legitimate as any other gym!\p"
	.string "Anyway, this gym's leader, Clay,\n"
	.string "uses Ground-type Pokémon.\p"
	.string "However, in order to reach him,\n"
	.string "you must first find four buttons\l"
	.string "inside the gym and press all of them.\p"
	.string "To add to the challenge, the gym layout\n"
	.string "can be a bit of a maze!\p"
	.string "Once you've pressed all the buttons,\n"
	.string "all you need to do is return here.\p"
	.string "Anyway, that's enough from me.\n"
	.string "Go get 'em, Champ!$"

KaolGym_GuidePostVictory::
	.string "Every now and again, I hope you look at\n"
	.string "the Quake Badge you won here and\l"
	.string "remember your battle with Clay!$"

KaolGym_GymStatue::
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{BROTHER}$"

KaolGym_GymStatueCertified::
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{BROTHER}\l"
	.string "{PLAYER}$"
