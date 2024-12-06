Kaolisle_Gym_MapScripts::
# 2 "data/maps/Kaolisle_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Kaolisle_Gym_SetMetatiles
	.byte 0


Kaolisle_Gym_SetMetatiles::
# 6 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_2
Kaolisle_Gym_SetMetatiles_1:
# 10 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_5
Kaolisle_Gym_SetMetatiles_4:
# 14 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_8
Kaolisle_Gym_SetMetatiles_7:
# 18 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_11
Kaolisle_Gym_SetMetatiles_10:
# 22 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_15
Kaolisle_Gym_SetMetatiles_13:
	end

Kaolisle_Gym_SetMetatiles_2:
# 7 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 46, 0x219, FALSE
# 8 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 47, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_1

Kaolisle_Gym_SetMetatiles_5:
# 11 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 35, 0x219, FALSE
# 12 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 36, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_4

Kaolisle_Gym_SetMetatiles_8:
# 15 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 24, 0x219, FALSE
# 16 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 25, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_7

Kaolisle_Gym_SetMetatiles_11:
# 19 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 2, 0x219, FALSE
# 20 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 3, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_10

Kaolisle_Gym_SetMetatiles_14:
# 26 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 8, 63, 0x26B, FALSE
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_15:
# 23 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_17
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_17:
# 24 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_19
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_19:
# 25 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_14
	goto Kaolisle_Gym_SetMetatiles_13


KaolGymQuake::
# 31 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGymQuake_Text_0, MSGBOX_NPC
# 32 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 33 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 34 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 35 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8006, 10
# 36 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8007, 6
# 37 "data/maps/Kaolisle_Gym/scripts.pory"
	special ShakeCamera
# 38 "data/maps/Kaolisle_Gym/scripts.pory"
	waitstate
	return


Kaolisle_Gym_Switch1::
# 42 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_2
# 46 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH1
# 47 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 48 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 46, 0x219, FALSE
# 49 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 39, 47, 0x221, TRUE
# 50 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_7
Kaolisle_Gym_Switch1_6:
# 55 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch1_4:
# 57 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 58 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch1_2:
# 43 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch1_5:
# 52 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch1_4

Kaolisle_Gym_Switch1_7:
# 51 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch1_9
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_9:
# 51 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch1_11
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_11:
# 51 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch1_5
	goto Kaolisle_Gym_Switch1_6


Kaolisle_Gym_Switch2::
# 63 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_2
# 67 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH2
# 68 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 69 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 35, 0x219, FALSE
# 70 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 3, 36, 0x221, TRUE
# 71 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch2_7
Kaolisle_Gym_Switch2_6:
# 76 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch2_4:
# 78 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 79 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch2_2:
# 64 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch2_5:
# 73 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch2_4

Kaolisle_Gym_Switch2_7:
# 72 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_9
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_9:
# 72 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch2_11
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_11:
# 72 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch2_5
	goto Kaolisle_Gym_Switch2_6


Kaolisle_Gym_Switch3::
# 84 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_2
# 88 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH3
# 89 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 90 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 24, 0x219, FALSE
# 91 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 51, 25, 0x221, TRUE
# 92 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 93 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch3_7
Kaolisle_Gym_Switch3_6:
# 97 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch3_4:
# 99 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 100 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch3_2:
# 85 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch3_5:
# 94 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch3_4

Kaolisle_Gym_Switch3_7:
# 93 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch3_9
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_9:
# 93 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_11
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_11:
# 93 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch3_5
	goto Kaolisle_Gym_Switch3_6


Kaolisle_Gym_Switch4::
# 105 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_2
# 109 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH4
# 110 "data/maps/Kaolisle_Gym/scripts.pory"
	playse SE_SWITCH
# 111 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 2, 0x219, FALSE
# 112 "data/maps/Kaolisle_Gym/scripts.pory"
	setmetatile 15, 3, 0x221, TRUE
# 113 "data/maps/Kaolisle_Gym/scripts.pory"
	special DrawWholeMapView
# 114 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch4_7
Kaolisle_Gym_Switch4_6:
# 118 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
Kaolisle_Gym_Switch4_4:
# 120 "data/maps/Kaolisle_Gym/scripts.pory"
	waitse
# 121 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

Kaolisle_Gym_Switch4_2:
# 106 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch4_5:
# 115 "data/maps/Kaolisle_Gym/scripts.pory"
	call KaolGymQuake
	goto Kaolisle_Gym_Switch4_4

Kaolisle_Gym_Switch4_7:
# 114 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch4_9
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_9:
# 114 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch4_11
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_11:
# 114 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_5
	goto Kaolisle_Gym_Switch4_6


KaolisleGym_Trainer1_Camper1::
# 126 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR1_CAMPER1, KaolisleGym_Trainer1_Camper1_Intro, KaolisleGym_Trainer1_Camper1_Defeat
# 127 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer1_Camper1_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer2_Picnicker1::
# 146 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR2_PICNICKER1, KaolisleGym_Trainer2_Picnicker1_Intro, KaolisleGym_Trainer2_Picnicker1_Defeat
# 147 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer2_Picnicker1_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer3_Hiker1::
# 166 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR3_HIKER1, KaolisleGym_Trainer3_Hiker1_Intro, KaolisleGym_Trainer3_Hiker1_Defeat
# 167 "data/maps/Kaolisle_Gym/scripts.pory"
	lockall
# 168 "data/maps/Kaolisle_Gym/scripts.pory"
	faceplayer
# 169 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer3_Hiker1_PostBattle, MSGBOX_YESNO
# 170 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleGym_Trainer3_Hiker1_2
KaolisleGym_Trainer3_Hiker1_1:
# 173 "data/maps/Kaolisle_Gym/scripts.pory"
	closemessage
# 174 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end

KaolisleGym_Trainer3_Hiker1_2:
# 171 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer3_Hiker1_Secret, MSGBOX_NPC
	goto KaolisleGym_Trainer3_Hiker1_1


KaolisleGym_Trainer4_Camper2::
# 196 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR4_CAMPER2, KaolisleGym_Trainer4_Camper2_Intro, KaolisleGym_Trainer4_Camper2_Defeat
# 197 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer4_Camper2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer5_Hiker2::
# 215 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR5_HIKER2, KaolisleGym_Trainer5_Hiker2_Intro, KaolisleGym_Trainer5_Hiker2_Defeat
# 216 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer5_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer6_Hiker3::
# 235 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR6_HIKER3, KaolisleGym_Trainer6_Hiker3_Intro, KaolisleGym_Trainer6_Hiker3_Defeat
# 236 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer6_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer7_Picnicker2::
# 255 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR7_PICNICKER2, KaolisleGym_Trainer7_Picnicker2_Intro, KaolisleGym_Trainer7_Picnicker2_Defeat
# 256 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer7_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer8_Camper3::
# 275 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR8_CAMPER3, KaolisleGym_Trainer8_Camper3_Intro, KaolisleGym_Trainer8_Camper3_Defeat
# 276 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer8_Camper3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer9_Picnicker3::
# 291 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR9_PICNICKER3, KaolisleGym_Trainer9_Picnicker3_Intro, KaolisleGym_Trainer9_Picnicker3_Defeat
# 292 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer9_Picnicker3_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolisleGym_Trainer10_Hiker4::
# 311 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_TR10_HIKER4, KaolisleGym_Trainer10_Hiker4_Intro, KaolisleGym_Trainer10_Hiker4_Defeat
# 312 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolisleGym_Trainer10_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


KaolGym_ClayTalk::
# 329 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_ClayTalk_2
# 332 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_YouArrived, MSGBOX_NPC
# 333 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 1, DIR_WEST
KaolGym_ClayTalk_1:
	end

KaolGym_ClayTalk_2:
# 330 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_ClayPosBat, MSGBOX_NPC
	goto KaolGym_ClayTalk_1


KaolGym_LeaderScript::
# 337 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_LeaderScript_2
# 341 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_TEMP_0, 2
# 342 "data/maps/Kaolisle_Gym/scripts.pory"
	call GymStartingMovement
# 343 "data/maps/Kaolisle_Gym/scripts.pory"
	trainerbattle_single TRAINER_KAOLGYM_CLAY, KaolGym_ClayInt, KaolGym_ClayDef, KaolGym_ClayEvent, NO_MUSIC
	end

KaolGym_LeaderScript_2:
# 338 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end


KaolGym_ClayEvent::
# 348 "data/maps/Kaolisle_Gym/scripts.pory"
	call GymMovementAfter
# 349 "data/maps/Kaolisle_Gym/scripts.pory"
	message KaolGym_ReceivedBadge
# 350 "data/maps/Kaolisle_Gym/scripts.pory"
	waitmessage
# 351 "data/maps/Kaolisle_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 352 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_TakeThis, MSGBOX_DEFAULT
# 353 "data/maps/Kaolisle_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 354 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 1
# 355 "data/maps/Kaolisle_Gym/scripts.pory"
	clearflag FLAG_HIDEJASMINE_HOTEL
# 356 "data/maps/Kaolisle_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 357 "data/maps/Kaolisle_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 358 "data/maps/Kaolisle_Gym/scripts.pory"
	special RemoveCameraObject
# 359 "data/maps/Kaolisle_Gym/scripts.pory"
	giveitem ITEM_TM_STOMPING_TANTRUM
# 360 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_ExplainTM, MSGBOX_DEFAULT
# 361 "data/maps/Kaolisle_Gym/scripts.pory"
	release
	end


KaolGym_Guide::
# 417 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_Guide_2
# 421 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, KaolGym_Guide_7
KaolGym_Guide_6:
# 429 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GuideAdvice, MSGBOX_NPC
	end

KaolGym_Guide_2:
# 418 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GuidePostVictory, MSGBOX_NPC
	end

KaolGym_Guide_5:
# 425 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GuideHalfwayThrough, MSGBOX_NPC
	end

KaolGym_Guide_7:
# 422 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, KaolGym_Guide_9
	goto KaolGym_Guide_6

KaolGym_Guide_9:
# 423 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, KaolGym_Guide_11
	goto KaolGym_Guide_6

KaolGym_Guide_11:
# 424 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, KaolGym_Guide_5
	goto KaolGym_Guide_6


KaolGym_Statue::
# 434 "data/maps/Kaolisle_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, KaolGym_Statue_2
# 438 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GymStatue, MSGBOX_SIGN
KaolGym_Statue_1:
	end

KaolGym_Statue_2:
# 435 "data/maps/Kaolisle_Gym/scripts.pory"
	msgbox KaolGym_GymStatueCertified, MSGBOX_SIGN
	goto KaolGym_Statue_1


GymStartingMovement::
# 492 "data/maps/Kaolisle_Gym/scripts.pory"
	lockall
# 493 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 10
# 494 "data/maps/Kaolisle_Gym/scripts.pory"
	special SpawnCameraObject
# 495 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq GymStartingMovement_2
# 500 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq GymStartingMovement_3
# 506 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 507 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 1, DIR_WEST
# 508 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Right
GymStartingMovement_1:
# 510 "data/maps/Kaolisle_Gym/scripts.pory"
	waitmovement 0
# 511 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 10
# 512 "data/maps/Kaolisle_Gym/scripts.pory"
	special RemoveCameraObject
	return

GymStartingMovement_2:
# 496 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 497 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 1, DIR_EAST
# 498 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Left
	goto GymStartingMovement_1

GymStartingMovement_3:
# 501 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 502 "data/maps/Kaolisle_Gym/scripts.pory"
	turnobject 20, DIR_EAST
# 503 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Left
	goto GymStartingMovement_1


GymMovementAfter::
# 517 "data/maps/Kaolisle_Gym/scripts.pory"
	special SpawnCameraObject
# 518 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 30
# 519 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq GymMovementAfter_2
# 523 "data/maps/Kaolisle_Gym/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq GymMovementAfter_3
# 528 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 1, Walk3Left
# 529 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Right
GymMovementAfter_1:
# 531 "data/maps/Kaolisle_Gym/scripts.pory"
	waitmovement 0
# 532 "data/maps/Kaolisle_Gym/scripts.pory"
	delay 15
	return

GymMovementAfter_2:
# 520 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 1, Walk3Right
# 521 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Left
	goto GymMovementAfter_1

GymMovementAfter_3:
# 524 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement 20, Walk3Right
# 525 "data/maps/Kaolisle_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk3Left
	goto GymMovementAfter_1


KaolGymQuake_Text_0:
# 31 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "{PLAYER} pressed the button.\nAll buttons have been pressed.$"

Kaolisle_Gym_Switch1_Text_0:
# 43 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "This button has already been pressed.$"

Kaolisle_Gym_Switch1_Text_1:
# 55 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "{PLAYER} pressed the button.$"

KaolisleGym_Trainer1_Camper1_Intro::
# 130 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I'm your first obstacle in this gym.\n"
	.string "Don't think I'll go down easy though!$"

KaolisleGym_Trainer1_Camper1_Defeat::
# 134 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You're stronger than I expected…$"

KaolisleGym_Trainer1_Camper1_PostBattle::
# 137 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Here's a tip that works with any maze:\n"
	.string "put your right hand on the wall\l"
	.string "and never let go.\p"
	.string "That way you will reach your\n"
	.string "destination eventually.$"

KaolisleGym_Trainer2_Picnicker1_Intro::
# 150 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I'm not letting you press the button\n"
	.string "so easily!$"

KaolisleGym_Trainer2_Picnicker1_Defeat::
# 154 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Fine, press the button then!\n"
	.string "I don't really care anymore…$"

KaolisleGym_Trainer2_Picnicker1_PostBattle::
# 158 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I thought I could be clever by\n"
	.string "protecting the button directly.\p"
	.string "Wasn't expecting someone so strong\n"
	.string "to waltz in though…$"

KaolisleGym_Trainer3_Hiker1_Intro::
# 177 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "My Pokémon helped dig these tunnels.\n"
	.string "Let me show it to you!$"

KaolisleGym_Trainer3_Hiker1_Defeat::
# 181 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Gwahaha! We've got a real\n"
	.string "contender here!$"

KaolisleGym_Trainer3_Hiker1_PostBattle::
# 185 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I lost fair and square.\p"
	.string "Say, would you like to know a secret\n"
	.string "regarding a button?$"

KaolisleGym_Trainer3_Hiker1_Secret::
# 190 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "If you head past me to the north, you\n"
	.string "will have already gone past a button.$"

KaolisleGym_Trainer4_Camper2_Intro::
# 200 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Your luck has ran out!\p"
	.string "Bar Clay,\n"
	.string "I am the strongest trainer here!$"

KaolisleGym_Trainer4_Camper2_Defeat::
# 205 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "What?! I lost?!$"

KaolisleGym_Trainer4_Camper2_PostBattle::
# 208 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You may have beat me but Clay is miles\n"
	.string "ahead of everybody else here.\l"
	.string "Don't think you're in the clear just yet.$"

KaolisleGym_Trainer5_Hiker2_Intro::
# 219 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "There are no buttons in this direction.\n"
	.string "You better scram, kid!$"

KaolisleGym_Trainer5_Hiker2_Defeat::
# 223 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I'm not sure which one got hurt worse;\n"
	.string "my Pokémon, or my pride…$"

KaolisleGym_Trainer5_Hiker2_PostBattle::
# 227 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Hope you didn't take that pre-battle\n"
	.string "trash talk too seriously.\p"
	.string "It was just friendly banter between\n"
	.string "rivals. That's how us hikers roll.$"

KaolisleGym_Trainer6_Hiker3_Intro::
# 239 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You walked right into my trap.\n"
	.string "Don't think you can escape!$"

KaolisleGym_Trainer6_Hiker3_Defeat::
# 243 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "My traps were completely ineffective!$"

KaolisleGym_Trainer6_Hiker3_PostBattle::
# 246 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You should always be prepared\n"
	.string "for a battle in this gym.\p"
	.string "You never know when you step through\n"
	.string "a door, only to be immediately\l"
	.string "challenged to a battle.$"

KaolisleGym_Trainer7_Picnicker2_Intro::
# 259 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "My Pokémon are in peak condition!\n"
	.string "Let's go!$"

KaolisleGym_Trainer7_Picnicker2_Defeat::
# 263 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "No!\n"
	.string "We can still go on!\p"
	.string "Hold on, let me just…{PAUSE_UNTIL_PRESS} No…{PAUSE_UNTIL_PRESS}\n"
	.string "Maybe this one…?{PAUSE_UNTIL_PRESS} No…{PAUSE_UNTIL_PRESS} Hm…$"

KaolisleGym_Trainer7_Picnicker2_PostBattle::
# 269 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "You may be strong, but I'll keep honing\n"
	.string "my Pokémon and one day defeat you!$"

KaolisleGym_Trainer8_Camper3_Intro::
# 279 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Found any buttons yet?$"

KaolisleGym_Trainer8_Camper3_Defeat::
# 282 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Not bad. Not bad at all…$"

KaolisleGym_Trainer8_Camper3_PostBattle::
# 285 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I do hope that you've managed to find\n"
	.string "at least one button so far.$"

KaolisleGym_Trainer9_Picnicker3_Intro::
# 295 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Unfortunately this is a dead end!\p"
	.string "As a consolation prize,\n"
	.string "you get to battle yours truly!$"

KaolisleGym_Trainer9_Picnicker3_Defeat::
# 300 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "No, I did not just lose!\n"
	.string "In fact, I let you win!$"

KaolisleGym_Trainer9_Picnicker3_PostBattle::
# 304 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Hmph…\p"
	.string "Don't get cocky over one measly\n"
	.string "victory!$"

KaolisleGym_Trainer10_Hiker4_Intro::
# 315 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "If you want to pass through here,\n"
	.string "you must face me!$"

KaolisleGym_Trainer10_Hiker4_Defeat::
# 319 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "A well earned victory!$"

KaolisleGym_Trainer10_Hiker4_PostBattle::
# 322 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I won't block your way any longer.\n"
	.string "Go along then.$"

KaolGym_YouArrived::
# 365 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Surely ya know how we do things\n"
	.string "'round here. Don't ya, kid?\p"
	.string "Go stand on th' other side of th'\n"
	.string "arena and let's get things rollin'.$"

KaolGym_ClayInt::
# 371 "data/maps/Kaolisle_Gym/scripts.pory"
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
# 383 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Phew…\n"
	.string "You're really somethin'!\p"
	.string "Li'l whippersnapper trainers\n"
	.string "who pack a real punch keep\l"
	.string "showin' up one after another.$"

KaolGym_ReceivedBadge::
# 390 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "{PLAYER} received the Quake Badge\n"
	.string "from Clay!$"

KaolGym_TakeThis::
# 394 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "So this is yer third Badge, huh?\n"
	.string "If that's so, Pokémon up to level 50\l"
	.string "will obey ya.\p"
	.string "Also, I'll give ya this TM.$"

KaolGym_ExplainTM::
# 400 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "That TM's for the move\n"
	.string "Stompin' Tantrum.\p"
	.string "It's a real powerful move that\n"
	.string "doubles in power whenever th' user's\l"
	.string "previous move fails to land.$"

KaolGym_ClayPosBat::
# 407 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "I don't know how much potential ya got,\n"
	.string "but if ya think ya can go, go wherever,\l"
	.string "and if ya think ya can do somethin',\l"
	.string "keep doin' it.\p"
	.string "Do things how ya want!\n"
	.string "Decide yer own limits!$"

KaolGym_GuideHalfwayThrough::
# 442 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Well done pressing all\n"
	.string "the buttons, champ!\p"
	.string "However, you're still only halfway\n"
	.string "through the challenge.\p"
	.string "See those stairs leading down?\p"
	.string "The leader of the gym will be\n"
	.string "waiting for you there.\l"
	.string "Go show him who's the champ… champ!$"

KaolGym_GuideAdvice::
# 452 "data/maps/Kaolisle_Gym/scripts.pory"
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
# 470 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Every now and again, I hope you look at\n"
	.string "the Quake Badge you won here and\l"
	.string "remember your battle with Clay!$"

KaolGym_GymStatue::
# 475 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{BROTHER}$"

KaolGym_GymStatueCertified::
# 481 "data/maps/Kaolisle_Gym/scripts.pory"
	.string "Kaolisle City Pokémon Gym\p"
	.string "Clay's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{BROTHER}\l"
	.string "{PLAYER}$"
