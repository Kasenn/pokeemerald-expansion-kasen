Desert_MapScripts::
	.byte 0


DesertQuakesOn::
# 4 "data/maps/Desert/scripts.pory"
	setflag FLAG_DESERT_STEPS
# 5 "data/maps/Desert/scripts.pory"
	release
	end


DesertQuakesOff::
# 9 "data/maps/Desert/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 10 "data/maps/Desert/scripts.pory"
	release
	end


DesertEntrance::
# 15 "data/maps/Desert/scripts.pory"
	msgbox DesertEntrance_Text_0, MSGBOX_NPC
	end


ScorchedDesert_TriggerQuakes::
# 24 "data/maps/Desert/scripts.pory"
	lock
# 25 "data/maps/Desert/scripts.pory"
	random 9
# 26 "data/maps/Desert/scripts.pory"
	goto_if_set FLAG_DESERT_RUINS_OPENED, ScorchedDesert_TriggerQuakes_2
ScorchedDesert_TriggerQuakes_1:
# 29 "data/maps/Desert/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_le ScorchedDesert_TriggerQuakes_5
ScorchedDesert_TriggerQuakes_4:
# 97 "data/maps/Desert/scripts.pory"
	releaseall
	end

ScorchedDesert_TriggerQuakes_2:
# 27 "data/maps/Desert/scripts.pory"
	random 30
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_5:
# 30 "data/maps/Desert/scripts.pory"
	addvar VAR_TEMP_DESERTRUINSFOUND, 1
# 31 "data/maps/Desert/scripts.pory"
	switch VAR_TEMP_DESERTRUINSFOUND
# 32 "data/maps/Desert/scripts.pory"
	case 1, ScorchedDesert_TriggerQuakes_8
# 43 "data/maps/Desert/scripts.pory"
	case 2, ScorchedDesert_TriggerQuakes_9
# 54 "data/maps/Desert/scripts.pory"
	case 3, ScorchedDesert_TriggerQuakes_10
# 65 "data/maps/Desert/scripts.pory"
	case 4, ScorchedDesert_TriggerQuakes_11
# 76 "data/maps/Desert/scripts.pory"
	case 5, ScorchedDesert_TriggerQuakes_12
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_8:
# 33 "data/maps/Desert/scripts.pory"
	playse SE_SWITCH
# 34 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8004, 1
# 35 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8005, 1
# 36 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8006, 6
# 37 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8007, 6
# 38 "data/maps/Desert/scripts.pory"
	special ShakeCamera
# 39 "data/maps/Desert/scripts.pory"
	waitstate
# 40 "data/maps/Desert/scripts.pory"
	msgbox ScorchedDesert_TriggerQuakes_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/Desert/scripts.pory"
	waitmessage
# 42 "data/maps/Desert/scripts.pory"
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_9:
# 44 "data/maps/Desert/scripts.pory"
	playse SE_SWITCH
# 45 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8004, 1
# 46 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8005, 1
# 47 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8006, 10
# 48 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8007, 6
# 49 "data/maps/Desert/scripts.pory"
	special ShakeCamera
# 50 "data/maps/Desert/scripts.pory"
	waitstate
# 51 "data/maps/Desert/scripts.pory"
	msgbox ScorchedDesert_TriggerQuakes_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/Desert/scripts.pory"
	waitmessage
# 53 "data/maps/Desert/scripts.pory"
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_10:
# 55 "data/maps/Desert/scripts.pory"
	playse SE_M_STRENGTH
# 56 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8005, 1
# 58 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8006, 14
# 59 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8007, 6
# 60 "data/maps/Desert/scripts.pory"
	special ShakeCamera
# 61 "data/maps/Desert/scripts.pory"
	waitstate
# 62 "data/maps/Desert/scripts.pory"
	msgbox ScorchedDesert_TriggerQuakes_Text_2, MSGBOX_DEFAULT
# 63 "data/maps/Desert/scripts.pory"
	waitmessage
# 64 "data/maps/Desert/scripts.pory"
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_11:
# 66 "data/maps/Desert/scripts.pory"
	playse SE_M_STRENGTH
# 67 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8004, 1
# 68 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8005, 1
# 69 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8006, 20
# 70 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8007, 4
# 71 "data/maps/Desert/scripts.pory"
	special ShakeCamera
# 72 "data/maps/Desert/scripts.pory"
	waitstate
# 73 "data/maps/Desert/scripts.pory"
	msgbox ScorchedDesert_TriggerQuakes_Text_3, MSGBOX_DEFAULT
# 74 "data/maps/Desert/scripts.pory"
	waitmessage
# 75 "data/maps/Desert/scripts.pory"
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_12:
# 77 "data/maps/Desert/scripts.pory"
	playse SE_M_EARTHQUAKE
# 78 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8004, 2
# 79 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8005, 2
# 80 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8006, 30
# 81 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8007, 3
# 82 "data/maps/Desert/scripts.pory"
	special ShakeCamera
# 83 "data/maps/Desert/scripts.pory"
	waitstate
# 84 "data/maps/Desert/scripts.pory"
	waitse
# 85 "data/maps/Desert/scripts.pory"
	delay 30
# 86 "data/maps/Desert/scripts.pory"
	closemessage
# 87 "data/maps/Desert/scripts.pory"
	setvar VAR_TEMP_DESERTRUINSFOUND, 0
# 88 "data/maps/Desert/scripts.pory"
	delay 10
# 89 "data/maps/Desert/scripts.pory"
	playse SE_SWITCH
# 90 "data/maps/Desert/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 91 "data/maps/Desert/scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, 0x3DF, FALSE
# 92 "data/maps/Desert/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, VAR_TEMP_1, VAR_TEMP_2
# 93 "data/maps/Desert/scripts.pory"
	special DrawWholeMapView
# 94 "data/maps/Desert/scripts.pory"
	goto ScorchedDesert_FallThroughFloor
	goto ScorchedDesert_TriggerQuakes_4


ScorchedDesert_FallThroughFloor::
# 101 "data/maps/Desert/scripts.pory"
	lock
# 102 "data/maps/Desert/scripts.pory"
	delay 20
# 103 "data/maps/Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedDesert_FallThroughFloorMovement
# 104 "data/maps/Desert/scripts.pory"
	waitmovement 0
# 105 "data/maps/Desert/scripts.pory"
	playse SE_FALL
# 106 "data/maps/Desert/scripts.pory"
	delay 60
# 107 "data/maps/Desert/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 108 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_16
ScorchedDesert_FallThroughFloor_14:
# 111 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_13
ScorchedDesert_FallThroughFloor_11:
# 114 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_10
ScorchedDesert_FallThroughFloor_8:
# 117 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_7
ScorchedDesert_FallThroughFloor_6:
# 121 "data/maps/Desert/scripts.pory"
	msgbox ScorchedDesert_FallThroughFloor_Text_0
ScorchedDesert_FallThroughFloor_1:
# 123 "data/maps/Desert/scripts.pory"
	waitstate
	end

ScorchedDesert_FallThroughFloor_2:
# 109 "data/maps/Desert/scripts.pory"
	warpholexy MAP_UNDERGROUND_RUINS, 5, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_3:
# 112 "data/maps/Desert/scripts.pory"
	warpholexy MAP_UNDERGROUND_RUINS, 79, 57
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_4:
# 115 "data/maps/Desert/scripts.pory"
	warpholexy MAP_UNDERGROUND_RUINS, 24, 63
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_5:
# 118 "data/maps/Desert/scripts.pory"
	warpholexy MAP_UNDERGROUND_RUINS, 73, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_7:
# 117 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_5
	goto ScorchedDesert_FallThroughFloor_6

ScorchedDesert_FallThroughFloor_10:
# 114 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_4
	goto ScorchedDesert_FallThroughFloor_8

ScorchedDesert_FallThroughFloor_13:
# 111 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_3
	goto ScorchedDesert_FallThroughFloor_11

ScorchedDesert_FallThroughFloor_16:
# 108 "data/maps/Desert/scripts.pory"
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_2
	goto ScorchedDesert_FallThroughFloor_14


# 126 "data/maps/Desert/scripts.pory"
ScorchedDesert_FallThroughFloorMovement:
# 127 "data/maps/Desert/scripts.pory"
	set_invisible
# 128 "data/maps/Desert/scripts.pory"
	step_end

DesertItem1::
# 132 "data/maps/Desert/scripts.pory"
	finditem ITEM_TM_ROCK_SLIDE
	end


DesertItem2::
# 136 "data/maps/Desert/scripts.pory"
	finditem ITEM_HEART_SCALE
	end


DesertItem3::
# 140 "data/maps/Desert/scripts.pory"
	finditem ITEM_ELIXIR
	end


Desert_Trainer1_Camper::
# 145 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR1_CAMPER, Desert_Trainer1_Camper_Intro, Desert_Trainer1_Camper_Defeat, DesertTrainer_IncreaseVar
# 146 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer1_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer2_Camper2::
# 163 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR2_CAMPER2, Desert_Trainer2_Camper2_Intro, Desert_Trainer2_Camper2_Defeat, DesertTrainer_IncreaseVar
# 164 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer2_Camper2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer3_Picnicker::
# 184 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR3_PICNICKER, Desert_Trainer3_Picnicker_Intro, Desert_Trainer3_Picnicker_Defeat, DesertTrainer_IncreaseVar
# 185 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer3_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer4_Picnicker2::
# 203 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR4_PICNICKER2, Desert_Trainer4_Picnicker2_Intro, Desert_Trainer4_Picnicker2_Defeat, DesertTrainer_IncreaseVar
# 204 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer4_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer5_Hiker::
# 224 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR5_HIKER, Desert_Trainer5_Hiker_Intro, Desert_Trainer5_Hiker_Defeat, DesertTrainer_IncreaseVar
# 225 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer5_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer6_Blackbelt::
# 245 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR6_BLACKBELT, Desert_Trainer6_Blackbelt_Intro, Desert_Trainer6_Blackbelt_Defeat, DesertTrainer_IncreaseVar
# 246 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer6_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer7_Picnicker3::
# 265 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR7_PICNICKER3, Desert_Trainer7_Picnicker3_Intro, Desert_Trainer7_Picnicker3_Defeat, DesertTrainer_IncreaseVar
# 266 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer7_Picnicker3_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer8_Hiker2::
# 285 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR8_HIKER2, Desert_Trainer8_Hiker2_Intro, Desert_Trainer8_Hiker2_Defeat, DesertTrainer_IncreaseVar
# 286 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer8_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer9_Hiker3::
# 308 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR9_HIKER3, Desert_Trainer9_Hiker3_Intro, Desert_Trainer9_Hiker3_Defeat, DesertTrainer_IncreaseVar
# 309 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer9_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer10_Firebreather::
# 326 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR10_FIREBREATHER, Desert_Trainer10_Firebreather_Intro, Desert_Trainer10_Firebreather_Defeat, DesertTrainer_IncreaseVar
# 327 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer10_Firebreather_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer11_Blackbelt2::
# 347 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR11_BLACKBELT2, Desert_Trainer11_Blackbelt2_Intro, Desert_Trainer11_Blackbelt2_Defeat, DesertTrainer_IncreaseVar
# 348 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer11_Blackbelt2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer12_Hiker4::
# 367 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR12_HIKER4, Desert_Trainer12_Hiker4_Intro, Desert_Trainer12_Hiker4_Defeat, DesertTrainer_IncreaseVar
# 368 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer12_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer13_Psychic_F::
# 391 "data/maps/Desert/scripts.pory"
	trainerbattle_single TRAINER_DESERT_TR13_PSYCHIC_F, Desert_Trainer13_Psychic_F_Intro, Desert_Trainer13_Psychic_F_Defeat, DesertTrainer_IncreaseVar
# 392 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer13_Psychic_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_QuakesAbout::
# 411 "data/maps/Desert/scripts.pory"
	goto_if_set FLAG_DESERT_RUINS_OPENED, Desert_QuakesAbout_2
# 415 "data/maps/Desert/scripts.pory"
	msgbox Desert_QuakesAbout_Text, MSGBOX_NPC
	end

Desert_QuakesAbout_2:
# 412 "data/maps/Desert/scripts.pory"
	msgbox Desert_QuakesAbout_LessQuakes, MSGBOX_NPC
	end


DesertTrainer_IncreaseVar::
# 437 "data/maps/Desert/scripts.pory"
	addvar VAR_DESERT_TRAINERS, 1
# 438 "data/maps/Desert/scripts.pory"
	release
	end


Desert_Trainer14_Cooltrainer::
# 445 "data/maps/Desert/scripts.pory"
	compare VAR_DESERT_TRAINERS, 14
	goto_if_ge Desert_Trainer14_Cooltrainer_1
# 449 "data/maps/Desert/scripts.pory"
	compare VAR_DESERT_TRAINERS, 12
	goto_if_le Desert_Trainer14_Cooltrainer_2
# 454 "data/maps/Desert/scripts.pory"
	goto Desert_Trainer14_CooltrainerEligibleForBattle
	return

Desert_Trainer14_Cooltrainer_1:
# 446 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_Cooltrainer_PostBattle, MSGBOX_NPC
	end

Desert_Trainer14_Cooltrainer_2:
# 450 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_Cooltrainer_DefeatMoreTrainers, MSGBOX_NPC
	end


Desert_Trainer14_CooltrainerEligibleForBattle::
# 458 "data/maps/Desert/scripts.pory"
	lock
# 459 "data/maps/Desert/scripts.pory"
	faceplayer
# 460 "data/maps/Desert/scripts.pory"
	goto_if_unset FLAG_TEMP_5, Desert_Trainer14_CooltrainerEligibleForBattle_2
# 465 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_Cooltrainer_ReadyForBattleShort, MSGBOX_YESNO
Desert_Trainer14_CooltrainerEligibleForBattle_1:
# 467 "data/maps/Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Desert_Trainer14_CooltrainerEligibleForBattle_6
# 473 "data/maps/Desert/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Desert_Trainer14_CooltrainerEligibleForBattle_8
	return

Desert_Trainer14_CooltrainerEligibleForBattle_2:
# 461 "data/maps/Desert/scripts.pory"
	setflag FLAG_TEMP_5
# 462 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_Cooltrainer_ReadyForBattle, MSGBOX_YESNO
	goto Desert_Trainer14_CooltrainerEligibleForBattle_1

Desert_Trainer14_CooltrainerEligibleForBattle_6:
# 468 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_CooltrainerEligibleForBattle_Text_0, MSGBOX_DEFAULT
# 469 "data/maps/Desert/scripts.pory"
	trainerbattle_no_intro TRAINER_DESERT_TR14_COOLTRAINER, Desert_Trainer14_CooltrainerDefeated
# 470 "data/maps/Desert/scripts.pory"
	goto Desert_Trainer14_CooltrainerPostBattle
	end

Desert_Trainer14_CooltrainerEligibleForBattle_8:
# 474 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_Cooltrainer_DeclineBattle, MSGBOX_NPC
	end


Desert_Trainer14_CooltrainerPostBattle::
# 479 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_CooltrainerReward, MSGBOX_DEFAULT
# 480 "data/maps/Desert/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 481 "data/maps/Desert/scripts.pory"
	waitfanfare
# 482 "data/maps/Desert/scripts.pory"
	msgbox Desert_ExplainReward, MSGBOX_DEFAULT
# 483 "data/maps/Desert/scripts.pory"
	call Desert_GiveBP
# 484 "data/maps/Desert/scripts.pory"
	setvar VAR_DESERT_TRAINERS, 14
# 485 "data/maps/Desert/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 486 "data/maps/Desert/scripts.pory"
	msgbox Desert_Trainer14_CooltrainerPostBattle_Text_0, MSGBOX_DEFAULT
# 487 "data/maps/Desert/scripts.pory"
	waitfanfare
# 488 "data/maps/Desert/scripts.pory"
	goto_if_unset FLAG_INTRO_TO_BP, Desert_Trainer14_CooltrainerPostBattle_2
Desert_Trainer14_CooltrainerPostBattle_1:
# 492 "data/maps/Desert/scripts.pory"
	waitmessage
# 493 "data/maps/Desert/scripts.pory"
	closemessage
# 494 "data/maps/Desert/scripts.pory"
	release
	end

Desert_Trainer14_CooltrainerPostBattle_2:
# 489 "data/maps/Desert/scripts.pory"
	msgbox ExplainBP, MSGBOX_DEFAULT
# 490 "data/maps/Desert/scripts.pory"
	setflag FLAG_INTRO_TO_BP
	goto Desert_Trainer14_CooltrainerPostBattle_1


Desert_GiveBP::
# 498 "data/maps/Desert/scripts.pory"
	buffernumberstring STR_VAR_1, 20
# 499 "data/maps/Desert/scripts.pory"
	setvar VAR_0x8004, 20
# 500 "data/maps/Desert/scripts.pory"
	special GiveFrontierBattlePoints
	return


TestVarDesert::
# 561 "data/maps/Desert/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DESERT_TRAINERS
# 562 "data/maps/Desert/scripts.pory"
	msgbox TestVarDesert_Text_0, MSGBOX_NPC
	end


Desert_EventScript_SandstormTrigger::
# 567 "data/maps/Desert/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, Desert_EventScript_SandstormTrigger2
# 568 "data/maps/Desert/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, Desert_EventScript_SandstormTrigger2
# 569 "data/maps/Desert/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, Desert_EventScript_SandstormTrigger2
# 570 "data/maps/Desert/scripts.pory"
	setweather WEATHER_SANDSTORM
# 571 "data/maps/Desert/scripts.pory"
	fadenewbgm MUS_DESERT
# 572 "data/maps/Desert/scripts.pory"
	doweather
	end


Desert_EventScript_SandstormTrigger2::
	end


BlockSouthernDesert::
# 581 "data/maps/Desert/scripts.pory"
	msgbox StrongSandstorm
# 582 "data/maps/Desert/scripts.pory"
	closemessage
# 583 "data/maps/Desert/scripts.pory"
	safefollow
# 584 "data/maps/Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 585 "data/maps/Desert/scripts.pory"
	waitmovement 0
# 586 "data/maps/Desert/scripts.pory"
	release
	return


DesertEntrance_Text_0:
# 15 "data/maps/Desert/scripts.pory"
	.string "This place is still work in progress.\n"
	.string "You're free to explore, though there's\l"
	.string "no trainers here and even the terrain\l"
	.string "is still under construction in places.\p"
	.string "Wild encounters should be working.$"

ScorchedDesert_TriggerQuakes_Text_0:
# 40 "data/maps/Desert/scripts.pory"
	.string "You can feel the ground\nshaking slightly.$"

ScorchedDesert_TriggerQuakes_Text_1:
# 51 "data/maps/Desert/scripts.pory"
	.string "The shaking seems to be growing\nin magnitude.$"

ScorchedDesert_TriggerQuakes_Text_2:
# 62 "data/maps/Desert/scripts.pory"
	.string "You notice the sand shifting below\nyour feet as the shaking intensifies.$"

ScorchedDesert_TriggerQuakes_Text_3:
# 73 "data/maps/Desert/scripts.pory"
	.string "The shaking is getting intense.$"

ScorchedDesert_FallThroughFloor_Text_0:
# 121 "data/maps/Desert/scripts.pory"
	.string "something borked$"

Desert_Trainer14_CooltrainerEligibleForBattle_Text_0:
# 468 "data/maps/Desert/scripts.pory"
	.string "Yay! Let's go!$"

Desert_Trainer14_CooltrainerPostBattle_Text_0:
# 486 "data/maps/Desert/scripts.pory"
	.string "Earned {STR_VAR_1} BP!$"

TestVarDesert_Text_0:
# 562 "data/maps/Desert/scripts.pory"
	.string "{STR_VAR_1}$"

Desert_Trainer1_Camper_Intro::
# 149 "data/maps/Desert/scripts.pory"
	.string "The desert climate can be tough,\n"
	.string "but I'm even tougher.$"

Desert_Trainer1_Camper_Defeat::
# 153 "data/maps/Desert/scripts.pory"
	.string "Not… tough… enough…$"

Desert_Trainer1_Camper_PostBattle::
# 156 "data/maps/Desert/scripts.pory"
	.string "Take care when exploring the desert.\n"
	.string "The sandstorm can be vicious\l"
	.string "and the land treacherous.$"

Desert_Trainer2_Camper2_Intro::
# 168 "data/maps/Desert/scripts.pory"
	.string "I'm looking for desert treasures,\n"
	.string "but looks like I found a trainer battle\l"
	.string "instead!$"

Desert_Trainer2_Camper2_Defeat::
# 173 "data/maps/Desert/scripts.pory"
	.string "I should probably stick to\n"
	.string "treasure hunting…$"

Desert_Trainer2_Camper2_PostBattle::
# 177 "data/maps/Desert/scripts.pory"
	.string "There can be all sorts of treasures\n"
	.string "buried in the sand.\l"
	.string "You never know what you'll find.$"

Desert_Trainer3_Picnicker_Intro::
# 189 "data/maps/Desert/scripts.pory"
	.string "I'm on a patrol.\n"
	.string "I'll check your strength as well!$"

Desert_Trainer3_Picnicker_Defeat::
# 193 "data/maps/Desert/scripts.pory"
	.string "You were so strong\n"
	.string "that I couldn't help falling back!$"

Desert_Trainer3_Picnicker_PostBattle::
# 197 "data/maps/Desert/scripts.pory"
	.string "Nothing scares me\n"
	.string "when I patrol with my Pokémon!$"

Desert_Trainer4_Picnicker2_Intro::
# 208 "data/maps/Desert/scripts.pory"
	.string "Straying off the beaten path…\n"
	.string "You must be searching for a battle!$"

Desert_Trainer4_Picnicker2_Defeat::
# 212 "data/maps/Desert/scripts.pory"
	.string "How could I lose…\n"
	.string "This is ridiculous!$"

Desert_Trainer4_Picnicker2_PostBattle::
# 216 "data/maps/Desert/scripts.pory"
	.string "The desert can be hard to navigate.\p"
	.string "If you ever become lost, try to find\n"
	.string "other people and follow the path\l"
	.string "they're taking.$"

Desert_Trainer5_Hiker_Intro::
# 229 "data/maps/Desert/scripts.pory"
	.string "How tough are you?\n"
	.string "We shall expose that secret!$"

Desert_Trainer5_Hiker_Defeat::
# 233 "data/maps/Desert/scripts.pory"
	.string "Oh! Your strength!\n"
	.string "It is shrouded in mystery!$"

Desert_Trainer5_Hiker_PostBattle::
# 238 "data/maps/Desert/scripts.pory"
	.string "This desert hoards mysteries in\n"
	.string "its shifting sands!$"

Desert_Trainer6_Blackbelt_Intro::
# 250 "data/maps/Desert/scripts.pory"
	.string "I will crush any who dare\n"
	.string "challenge me!$"

Desert_Trainer6_Blackbelt_Defeat::
# 254 "data/maps/Desert/scripts.pory"
	.string "My strength wanes…$"

Desert_Trainer6_Blackbelt_PostBattle::
# 257 "data/maps/Desert/scripts.pory"
	.string "This little sandstorm doesn't\n"
	.string "intimidate me.\p"
	.string "Sand is just tiny rocks, and I'm\n"
	.string "the master of breaking rocks.$"

Desert_Trainer7_Picnicker3_Intro::
# 270 "data/maps/Desert/scripts.pory"
	.string "Are you here to train?\n"
	.string "Care to train against me?$"

Desert_Trainer7_Picnicker3_Defeat::
# 274 "data/maps/Desert/scripts.pory"
	.string "Good hustle.$"

Desert_Trainer7_Picnicker3_PostBattle::
# 277 "data/maps/Desert/scripts.pory"
	.string "Training here is great, just be\n"
	.string "careful of the wild Trapinch.\p"
	.string "They like to surprise you and\n"
	.string "bite at your ankles.$"

Desert_Trainer8_Hiker2_Intro::
# 290 "data/maps/Desert/scripts.pory"
	.string "Who might you be?\p"
	.string "Are you perhaps searching for\n"
	.string "ancient ruins?\n$"

Desert_Trainer8_Hiker2_Defeat::
# 296 "data/maps/Desert/scripts.pory"
	.string "What a disgraceful setback…$"

Desert_Trainer8_Hiker2_PostBattle::
# 300 "data/maps/Desert/scripts.pory"
	.string "There's a set of small ancient ruins to\n"
	.string "the northeast of us but I believe\l"
	.string "the sands might be hiding even more\l"
	.string "ruins beneath.$"

Desert_Trainer9_Hiker3_Intro::
# 313 "data/maps/Desert/scripts.pory"
	.string "The sand erodes mountains,\n"
	.string "but my Pokémon still stand!$"

Desert_Trainer9_Hiker3_Defeat::
# 317 "data/maps/Desert/scripts.pory"
	.string "Such power…!$"

Desert_Trainer9_Hiker3_PostBattle::
# 320 "data/maps/Desert/scripts.pory"
	.string "I have no doubt your Pokémon could\n"
	.string "withstand even a tsunami!$"

Desert_Trainer10_Firebreather_Intro::
# 331 "data/maps/Desert/scripts.pory"
	.string "Help, I can't see anything\n"
	.string "in this storm!\l"
	.string "Are you a trainer?\l"
	.string "Want to have a battle?$"

Desert_Trainer10_Firebreather_Defeat::
# 337 "data/maps/Desert/scripts.pory"
	.string "I can't see! Is it over?\n"
	.string "Did we lose?$"

Desert_Trainer10_Firebreather_PostBattle::
# 341 "data/maps/Desert/scripts.pory"
	.string "I should have never come to this\n"
	.string "stinking desert without eyewear!$"

Desert_Trainer11_Blackbelt2_Intro::
# 352 "data/maps/Desert/scripts.pory"
	.string "A punch from my Pokémon can shift\n"
	.string "even the mountains!$"

Desert_Trainer11_Blackbelt2_Defeat::
# 356 "data/maps/Desert/scripts.pory"
	.string "Impossible!$"

Desert_Trainer11_Blackbelt2_PostBattle::
# 359 "data/maps/Desert/scripts.pory"
	.string "We must train even harder!\n"
	.string "Hundred push-ups, Hundred sit-ups,\l"
	.string "Hundred squats, ten kilometer run!\l"
	.string "Every day!!$"

Desert_Trainer12_Hiker4_Intro::
# 372 "data/maps/Desert/scripts.pory"
	.string "For thirty years I have searched for\n"
	.string "ancient ruins!\l"
	.string "I am to be challenged?$"

Desert_Trainer12_Hiker4_Defeat::
# 378 "data/maps/Desert/scripts.pory"
	.string "While I have searched for ruins,\n"
	.string "I've not searched for strong Pokémon.$"

Desert_Trainer12_Hiker4_PostBattle::
# 383 "data/maps/Desert/scripts.pory"
	.string "For thirty years I have searched for\n"
	.string "ancient ruins!\p"
	.string "No, wait, was that forty years?\n"
	.string "Which was it now?$"

Desert_Trainer13_Psychic_F_Intro::
# 396 "data/maps/Desert/scripts.pory"
	.string "I see a Pokémon battle defeat\n"
	.string "in your future.$"

Desert_Trainer13_Psychic_F_Defeat::
# 400 "data/maps/Desert/scripts.pory"
	.string "I guess the defeat I saw was my own…$"

Desert_Trainer13_Psychic_F_PostBattle::
# 403 "data/maps/Desert/scripts.pory"
	.string "I don't need goggles to see in this\n"
	.string "sandstorm.\p"
	.string "My mind's eye shows me all I need\n"
	.string "to see.$"

Desert_QuakesAbout_Text::
# 418 "data/maps/Desert/scripts.pory"
	.string "There have been reports of seismic\n"
	.string "activity around the desert since\l"
	.string "time immemorial.\p"
	.string "Some say these ruins are protected from\n"
	.string "these quakes while some believe\l"
	.string "that their presence is causing tension\l"
	.string "underneath the surface, amplifying\l"
	.string "the magnitude of the tremors.$"

Desert_QuakesAbout_LessQuakes::
# 428 "data/maps/Desert/scripts.pory"
	.string "Not too long ago there was a weird\n"
	.string "tremor right beneath our feet.\p"
	.string "Ever since then, the overall seismic\n"
	.string "readings seem to have gone down\l"
	.string "drastically.$"

Desert_Trainer14_Cooltrainer_ReadyForBattle::
# 502 "data/maps/Desert/scripts.pory"
	.string "I'm so bored…\p"
	.string "I came to the desert because I heard\n"
	.string "there's a lot of strong trainers\l"
	.string "training here but not one of them had\l"
	.string "a chance against me.\l"
	.string "You on the other hand look like someone\l"
	.string "who could entertain me.\p"
	.string "How about it,\n"
	.string "are you up for a Pokémon battle?\p"
	.string "I'm pretty strong so I hope\n"
	.string "you're prepared!$"

Desert_Trainer14_Cooltrainer_ReadyForBattleShort::
# 515 "data/maps/Desert/scripts.pory"
	.string "You're back!\n"
	.string "Can we please have a Pokémon battle?$"

Desert_Trainer14_Cooltrainer_DeclineBattle::
# 519 "data/maps/Desert/scripts.pory"
	.string "Aww…\p"
	.string "Please let me know if you change your\n"
	.string "mind. I'm itching for a real battle!$"

Desert_Trainer14_Cooltrainer_PostBattle::
# 524 "data/maps/Desert/scripts.pory"
	.string "My Pokémon and I need to train now.\n"
	.string "I hope we can have a rematch once we're\l"
	.string "a little bit stronger!$"

Desert_Trainer14_Cooltrainer_DefeatMoreTrainers::
# 529 "data/maps/Desert/scripts.pory"
	.string "I'm so bored…\p"
	.string "I want to fight strong trainers but\n"
	.string "none of the trainers here could match\l"
	.string "my awesomeness…\p"
	.string "You look kinda strong but I'm not\n"
	.string "so sure… $"

Desert_Trainer14_CooltrainerDefeated::
# 537 "data/maps/Desert/scripts.pory"
	.string "Even though we lost, I don't feel\n"
	.string "a single bit of resentment.\p"
	.string "That was a really fun battle!\n"
	.string "Can we go again?$"

Desert_Trainer14_CooltrainerReward::
# 543 "data/maps/Desert/scripts.pory"
	.string "That was awesome!\p"
	.string "It's been a long time since I've met\n"
	.string "anyone who could rival me!\l"
	.string "I'm so pumped!\p"
	.string "You know what? You were such an awesome\n"
	.string "sport, I want you to take these!$"

Desert_ExplainReward::
# 551 "data/maps/Desert/scripts.pory"
	.string "If you give those goggles to a Pokémon,\n"
	.string "they will be protected from powder and\l"
	.string "spore moves and will not take damage\l"
	.string "from weather effects like hail or\l"
	.string "sandstorm!\p"
	.string "…Oh, and take these as well!$"

StrongSandstorm::
# 589 "data/maps/Desert/scripts.pory"
	.string "The wind coming from the south is too\n"
	.string "strong even for your Go-goggles.$"
