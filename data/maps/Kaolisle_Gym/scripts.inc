Kaolisle_Gym_MapScripts::
# 2 "data/maps/Kaolisle_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Kaolisle_Gym_SetMetatiles
# 3 "data/maps/Kaolisle_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_STORY_COMPLETE
	goto_if_ge Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_TEMP_1
	goto Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Kaolisle_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/Kaolisle_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
	return


Kaolisle_Gym_SetMetatiles::
# 14 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_2
Kaolisle_Gym_SetMetatiles_1:
# 18 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_5
Kaolisle_Gym_SetMetatiles_4:
# 22 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_8
Kaolisle_Gym_SetMetatiles_7:
# 26 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_11
Kaolisle_Gym_SetMetatiles_10:
# 30 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_15
Kaolisle_Gym_SetMetatiles_13:
	end

Kaolisle_Gym_SetMetatiles_2:
# 15 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 46, 0x219, FALSE
# 16 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 47, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_1

Kaolisle_Gym_SetMetatiles_5:
# 19 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 35, 0x219, FALSE
# 20 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 36, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_4

Kaolisle_Gym_SetMetatiles_8:
# 23 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 24, 0x219, FALSE
# 24 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 25, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_7

Kaolisle_Gym_SetMetatiles_11:
# 27 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 2, 0x219, FALSE
# 28 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 3, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_10

Kaolisle_Gym_SetMetatiles_14:
# 34 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 8, 63, 0x26B, FALSE
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_15:
# 31 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_17
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_17:
# 32 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_19
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_19:
# 33 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_14
	goto Kaolisle_Gym_SetMetatiles_13


KaolGymQuake::
# 39 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGymQuake_Text_0, MSGBOX_NPC
# 40 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 41 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 42 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 43 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8006, 10
# 44 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8007, 6
# 45 "data/maps/Kaolisle_Gym/scripts.pory"
	special ShakeCamera
# 46 "data/maps/Kaolisle_Gym/scripts.pory"
	waitstate
	return


Kaolisle_Gym_Switch1::
# 50 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_2
# 54 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH1
# 55 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 56 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 46, 0x219, FALSE
# 57 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 47, 0x221, TRUE
# 58 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 59 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_7
Kaolisle_Gym_Switch1_6:
# 63 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch1_4:
# 65 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 66 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch1_2:
# 51 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch1_5:
# 60 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch1_4

Kaolisle_Gym_Switch1_7:
# 59 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch1_9
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_9:
# 59 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch1_11
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_11:
# 59 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch1_5
	goto Kaolisle_Gym_Switch1_6


Kaolisle_Gym_Switch2::
# 71 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_2
# 75 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH2
# 76 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 77 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 35, 0x219, FALSE
# 78 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 36, 0x221, TRUE
# 79 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 80 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch2_7
Kaolisle_Gym_Switch2_6:
# 84 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch2_4:
# 86 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 87 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch2_2:
# 72 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch2_5:
# 81 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch2_4

Kaolisle_Gym_Switch2_7:
# 80 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_9
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_9:
# 80 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch2_11
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_11:
# 80 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch2_5
	goto Kaolisle_Gym_Switch2_6


Kaolisle_Gym_Switch3::
# 92 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_2
# 96 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH3
# 97 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 24, 0x219, FALSE
# 99 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 25, 0x221, TRUE
# 100 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 101 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch3_7
Kaolisle_Gym_Switch3_6:
# 105 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch3_4:
# 107 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 108 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch3_2:
# 93 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch3_5:
# 102 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch3_4

Kaolisle_Gym_Switch3_7:
# 101 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch3_9
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_9:
# 101 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_11
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_11:
# 101 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch3_5
	goto Kaolisle_Gym_Switch3_6


Kaolisle_Gym_Switch4::
# 113 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_2
# 117 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH4
# 118 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 119 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 2, 0x219, FALSE
# 120 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 3, 0x221, TRUE
# 121 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 122 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch4_7
Kaolisle_Gym_Switch4_6:
# 126 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch4_4:
# 128 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 129 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch4_2:
# 114 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch4_5:
# 123 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch4_4

Kaolisle_Gym_Switch4_7:
# 122 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch4_9
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_9:
# 122 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch4_11
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_11:
# 122 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_5
	goto Kaolisle_Gym_Switch4_6


KaolisleGym_Trainer1_Camper1::
# 134 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR1_CAMPER1, KaolisleGym_Trainer1_Camper1_Intro, KaolisleGym_Trainer1_Camper1_Defeat
# 135 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer1_Camper1_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer2_Picnicker1::
# 154 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR2_PICNICKER1, KaolisleGym_Trainer2_Picnicker1_Intro, KaolisleGym_Trainer2_Picnicker1_Defeat
# 155 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer2_Picnicker1_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer3_Hiker1::
# 174 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR3_HIKER1, KaolisleGym_Trainer3_Hiker1_Intro, KaolisleGym_Trainer3_Hiker1_Defeat
# 175 "data/maps/Kaolisle_Gym/scripts.pory"
	lock
# 176 "data/maps/Kaolisle_Gym/scripts.pory"
	faceplayer
# 177 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer3_Hiker1_PostBattle, MSGBOX_YESNO
# 178 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleGym_Trainer3_Hiker1_2
KaolisleGym_Trainer3_Hiker1_1:
# 181 "data/maps/Kaolisle_Gym/scripts.pory"
	closemessage
# 182 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

KaolisleGym_Trainer3_Hiker1_2:
# 179 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer3_Hiker1_Secret, MSGBOX_NPC
	goto KaolisleGym_Trainer3_Hiker1_1


KaolisleGym_Trainer4_Camper2::
# 204 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR4_CAMPER2, KaolisleGym_Trainer4_Camper2_Intro, KaolisleGym_Trainer4_Camper2_Defeat
# 205 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer4_Camper2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer5_Hiker2::
# 223 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR5_HIKER2, KaolisleGym_Trainer5_Hiker2_Intro, KaolisleGym_Trainer5_Hiker2_Defeat
# 224 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer5_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer6_Hiker3::
# 243 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR6_HIKER3, KaolisleGym_Trainer6_Hiker3_Intro, KaolisleGym_Trainer6_Hiker3_Defeat
# 244 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer6_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer7_Picnicker2::
# 263 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR7_PICNICKER2, KaolisleGym_Trainer7_Picnicker2_Intro, KaolisleGym_Trainer7_Picnicker2_Defeat
# 264 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer7_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer8_Camper3::
# 283 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR8_CAMPER3, KaolisleGym_Trainer8_Camper3_Intro, KaolisleGym_Trainer8_Camper3_Defeat
# 284 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer8_Camper3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer9_Picnicker3::
# 299 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR9_PICNICKER3, KaolisleGym_Trainer9_Picnicker3_Intro, KaolisleGym_Trainer9_Picnicker3_Defeat
# 300 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer9_Picnicker3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer10_Hiker4::
# 319 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR10_HIKER4, KaolisleGym_Trainer10_Hiker4_Intro, KaolisleGym_Trainer10_Hiker4_Defeat
# 320 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer10_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolGym_ClayTalk::
# 337 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_ClayTalk_2
# 340 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_YouArrived, MSGBOX_NPC
# 341 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 1, DIR_WEST
KaolGym_ClayTalk_1:
	end

KaolGym_ClayTalk_2:
# 338 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_ClayPosBat, MSGBOX_NPC
	goto KaolGym_ClayTalk_1


KaolGym_LeaderScript::
# 345 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_LeaderScript_2
# 349 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_TEMP_0, 2
# 350 "data/maps/Kaolisle_Gym/scripts.pory"
	call GymStartingMovement
# 351 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_CLAY, KaolGym_ClayInt, KaolGym_ClayDef, KaolGym_ClayEvent, NO_MUSIC
	end

KaolGym_LeaderScript_2:
# 346 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end


KaolGym_ClayEvent::
# 356 "data/maps/Kaolisle_Gym/scripts.pory"
	call GymMovementAfter
# 357 "data/maps/Kaolisle_Gym/scripts.pory"
	message KaolGym_ReceivedBadge
# 358 "data/maps/Kaolisle_Gym/scripts.pory"
	waitmessage
# 359 "data/maps/Kaolisle_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 360 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_TakeThis, MSGBOX_DEFAULT
# 361 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 362 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 1
# 363 "data/maps/Kaolisle_Gym/scripts.pory"
	clearflag FLAG_HIDEJASMINE_HOTEL
# 364 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 365 "data/maps/Kaolisle_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 366 "data/maps/Kaolisle_Gym/scripts.pory"
	special RemoveCameraObject
# 367 "data/maps/Kaolisle_Gym/scripts.pory"
	giveitem ITEM_TM_STOMPING_TANTRUM
# 368 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_ExplainTM, MSGBOX_DEFAULT
# 369 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end


KaolGym_Guide::
# 425 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_Guide_2
# 429 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, KaolGym_Guide_7
KaolGym_Guide_6:
# 437 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GuideAdvice, MSGBOX_NPC
	end

KaolGym_Guide_2:
# 426 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GuidePostVictory, MSGBOX_NPC
	end

KaolGym_Guide_5:
# 433 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GuideHalfwayThrough, MSGBOX_NPC
	end

KaolGym_Guide_7:
# 430 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, KaolGym_Guide_9
	goto KaolGym_Guide_6

KaolGym_Guide_9:
# 431 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, KaolGym_Guide_11
	goto KaolGym_Guide_6

KaolGym_Guide_11:
# 432 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, KaolGym_Guide_5
	goto KaolGym_Guide_6


KaolGym_Statue::
# 442 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_Statue_2
# 446 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GymStatue, MSGBOX_SIGN
KaolGym_Statue_1:
	end

KaolGym_Statue_2:
# 443 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GymStatueCertified, MSGBOX_SIGN
	goto KaolGym_Statue_1


GymStartingMovement::
# 500 "data/maps/Kaolisle_Gym/scripts.pory"
	lock
# 501 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 10
# 502 "data/maps/Kaolisle_Gym/scripts.pory"
	special SpawnCameraObject
# 503 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq GymStartingMovement_2
# 508 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq GymStartingMovement_3
# 513 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GymStartingMovement_4
# 520 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 521 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 1, DIR_WEST
# 522 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Right
GymStartingMovement_1:
# 524 "data/maps/Kaolisle_Gym/scripts.pory"
	waitmovement 0
# 525 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 10
# 526 "data/maps/Kaolisle_Gym/scripts.pory"
	special RemoveCameraObject
	return

GymStartingMovement_2:
# 504 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 505 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 1, DIR_EAST
# 506 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Left
	goto GymStartingMovement_1

GymStartingMovement_3:
# 509 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 510 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 20, DIR_EAST
# 511 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Left
	goto GymStartingMovement_1

GymStartingMovement_4:
# 514 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 515 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 12, DIR_WEST
# 516 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 13, DIR_WEST
# 517 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Right
	goto GymStartingMovement_1


GymMovementAfter::
# 531 "data/maps/Kaolisle_Gym/scripts.pory"
	special SpawnCameraObject
# 532 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 30
# 533 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq GymMovementAfter_2
# 537 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq GymMovementAfter_3
# 541 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GymMovementAfter_4
# 547 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 1, Walk3Left
# 548 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Right
GymMovementAfter_1:
# 550 "data/maps/Kaolisle_Gym/scripts.pory"
	waitmovement 0
# 551 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 15
	return

GymMovementAfter_2:
# 534 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 1, Walk3Right
# 535 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Left
	goto GymMovementAfter_1

GymMovementAfter_3:
# 538 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 20, Walk3Right
# 539 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Left
	goto GymMovementAfter_1

GymMovementAfter_4:
# 542 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 13, Walk3Left
# 543 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Right
# 544 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 12, GymMovementAfter_Movement_0
	goto GymMovementAfter_1


# 544 "data/maps/Kaolisle_Gym/scripts.pory"
GymMovementAfter_Movement_0:
# 544 "data/maps/Kaolisle_Gym/scripts.pory"
	walk_left
# 544 "data/maps/Kaolisle_Gym/scripts.pory"
	walk_down
# 544 "data/maps/Kaolisle_Gym/scripts.pory"
	walk_left
# 544 "data/maps/Kaolisle_Gym/scripts.pory"
	walk_left
	step_end

KaolGymQuake_Text_0:
# 39 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "{PLAYER} pressed the button.\nAll buttons have been pressed.$"

Kaolisle_Gym_Switch1_Text_0:
# 51 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "This button has already been pressed.$"

Kaolisle_Gym_Switch1_Text_1:
# 63 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "{PLAYER} pressed the button.$"

KaolisleGym_Trainer1_Camper1_Intro::
# 138 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I'm your first obstacle in this gym.\n"
	.string "Don't think I'll go down easy though!$"

KaolisleGym_Trainer1_Camper1_Defeat::
# 142 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You're stronger than I expected…$"

KaolisleGym_Trainer1_Camper1_PostBattle::
# 145 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Here's a tip that works with any maze:\n"
	.string "put your right hand on the wall\l"
	.string "and never let go.\p"
	.string "That way you will reach your\n"
	.string "destination eventually.$"

KaolisleGym_Trainer2_Picnicker1_Intro::
# 158 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I'm not letting you press the button\n"
	.string "so easily!$"

KaolisleGym_Trainer2_Picnicker1_Defeat::
# 162 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Fine, press the button then!\n"
	.string "I don't really care anymore…$"

KaolisleGym_Trainer2_Picnicker1_PostBattle::
# 166 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I thought I could be clever by\n"
	.string "protecting the button directly.\p"
	.string "Wasn't expecting someone so strong\n"
	.string "to waltz in though…$"

KaolisleGym_Trainer3_Hiker1_Intro::
# 185 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "My Pokémon helped dig these tunnels.\n"
	.string "Let me show it to you!$"

KaolisleGym_Trainer3_Hiker1_Defeat::
# 189 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Gwahaha! We've got a real\n"
	.string "contender here!$"

KaolisleGym_Trainer3_Hiker1_PostBattle::
# 193 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I lost fair and square.\p"
	.string "Say, would you like to know a secret\n"
	.string "regarding a button?$"

KaolisleGym_Trainer3_Hiker1_Secret::
# 198 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "If you head past me to the north, you\n"
	.string "will have already gone past a button.$"

KaolisleGym_Trainer4_Camper2_Intro::
# 208 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Your luck has ran out!\p"
	.string "Bar Clay,\n"
	.string "I am the strongest trainer here!$"

KaolisleGym_Trainer4_Camper2_Defeat::
# 213 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "What?! I lost?!$"

KaolisleGym_Trainer4_Camper2_PostBattle::
# 216 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You may have beat me but Clay is miles\n"
	.string "ahead of everybody else here.\l"
	.string "Don't think you're in the clear just yet.$"

KaolisleGym_Trainer5_Hiker2_Intro::
# 227 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "There are no buttons in this direction.\n"
	.string "You better scram, kid!$"

KaolisleGym_Trainer5_Hiker2_Defeat::
# 231 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I'm not sure which one got hurt worse;\n"
	.string "my Pokémon, or my pride…$"

KaolisleGym_Trainer5_Hiker2_PostBattle::
# 235 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Hope you didn't take that pre-battle\n"
	.string "trash talk too seriously.\p"
	.string "It was just friendly banter between\n"
	.string "rivals. That's how us hikers roll.$"

KaolisleGym_Trainer6_Hiker3_Intro::
# 247 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You walked right into my trap.\n"
	.string "Don't think you can escape!$"

KaolisleGym_Trainer6_Hiker3_Defeat::
# 251 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "My traps were completely ineffective!$"

KaolisleGym_Trainer6_Hiker3_PostBattle::
# 254 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You should always be prepared\n"
	.string "for a battle in this gym.\p"
	.string "You never know when you step through\n"
	.string "a door, only to be immediately\l"
	.string "challenged to a battle.$"

KaolisleGym_Trainer7_Picnicker2_Intro::
# 267 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "My Pokémon are in peak condition!\n"
	.string "Let's go!$"

KaolisleGym_Trainer7_Picnicker2_Defeat::
# 271 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "No!\n"
	.string "We can still go on!\p"
	.string "Hold on, let me just…{PAUSE_UNTIL_PRESS} No…{PAUSE_UNTIL_PRESS}\n"
	.string "Maybe this one…?{PAUSE_UNTIL_PRESS} No…{PAUSE_UNTIL_PRESS} Hm…$"

KaolisleGym_Trainer7_Picnicker2_PostBattle::
# 277 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You may be strong, but I'll keep honing\n"
	.string "my Pokémon and one day defeat you!$"

KaolisleGym_Trainer8_Camper3_Intro::
# 287 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Found any buttons yet?$"

KaolisleGym_Trainer8_Camper3_Defeat::
# 290 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Not bad. Not bad at all…$"

KaolisleGym_Trainer8_Camper3_PostBattle::
# 293 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I do hope that you've managed to find\n"
	.string "at least one button so far.$"

KaolisleGym_Trainer9_Picnicker3_Intro::
# 303 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Unfortunately this is a dead end!\p"
	.string "As a consolation prize,\n"
	.string "you get to battle yours truly!$"

KaolisleGym_Trainer9_Picnicker3_Defeat::
# 308 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "No, I did not just lose!\n"
	.string "In fact, I let you win!$"

KaolisleGym_Trainer9_Picnicker3_PostBattle::
# 312 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Hmph…\p"
	.string "Don't get cocky over one measly\n"
	.string "victory!$"

KaolisleGym_Trainer10_Hiker4_Intro::
# 323 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "If you want to pass through here,\n"
	.string "you must face me!$"

KaolisleGym_Trainer10_Hiker4_Defeat::
# 327 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "A well earned victory!$"

KaolisleGym_Trainer10_Hiker4_PostBattle::
# 330 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I won't block your way any longer.\n"
	.string "Go along then.$"

KaolGym_YouArrived::
# 373 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Surely ya know how we do things\n"
	.string "'round here. Don't ya, kid?\p"
	.string "Go stand on th' other side of th'\n"
	.string "arena and let's get things rollin'.$"

KaolGym_ClayInt::
# 379 "data/maps/Kaolisle_Gym/scripts.pory"
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
# 391 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Phew…\n"
	.string "You're really somethin'!\p"
	.string "Li'l whippersnapper trainers\n"
	.string "who pack a real punch keep\l"
	.string "showin' up one after another.$"

KaolGym_ReceivedBadge::
# 398 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "{PLAYER} received the Quake Badge\n"
	.string "from Clay!$"

KaolGym_TakeThis::
# 402 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "So this is yer third Badge, huh?\n"
	.string "If that's so, Pokémon up to level 50\l"
	.string "will obey ya.\p"
	.string "Also, I'll give ya this TM.$"

KaolGym_ExplainTM::
# 408 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "That TM's for the move\n"
	.string "Stompin' Tantrum.\p"
	.string "It's a real powerful move that\n"
	.string "doubles in power whenever th' user's\l"
	.string "previous move fails to land.$"

KaolGym_ClayPosBat::
# 415 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I don't know how much potential ya got,\n"
	.string "but if ya think ya can go, go wherever,\l"
	.string "and if ya think ya can do somethin',\l"
	.string "keep doin' it.\p"
	.string "Do things how ya want!\n"
	.string "Decide yer own limits!$"

KaolGym_GuideHalfwayThrough::
# 450 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Well done pressing all\n"
	.string "the buttons, champ!\p"
	.string "However, you're still only halfway\n"
	.string "through the challenge.\p"
	.string "See those stairs leading down?\p"
	.string "The leader of the gym will be\n"
	.string "waiting for you there.\l"
	.string "Go show him who's the champ… champ!$"

KaolGym_GuideAdvice::
# 460 "data/maps/Kaolisle_Gym/scripts.pory"
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
# 478 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Every now and again, I hope you look at\n"
	.string "the Quake Badge you won here and\l"
	.string "remember your battle with Clay!$"

KaolGym_GymStatue::
# 483 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{BROTHER}$"

KaolGym_GymStatueCertified::
# 489 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{BROTHER}\l"
	.string "{PLAYER}$"
