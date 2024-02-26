Desert_MapScripts::
	.byte 0


DesertQuakesOn::
	setflag FLAG_DESERT_STEPS
	release
	end


DesertQuakesOff::
	clearflag FLAG_DESERT_STEPS
	release
	end


DesertEntrance::
	msgbox DesertEntrance_Text_0, MSGBOX_NPC
	end


ScorchedDesert_TriggerQuakes::
	lockall
	random 9
	goto_if_set FLAG_DESERT_RUINS_OPENED, ScorchedDesert_TriggerQuakes_2
ScorchedDesert_TriggerQuakes_1:
	compare VAR_RESULT, 5
	goto_if_le ScorchedDesert_TriggerQuakes_5
ScorchedDesert_TriggerQuakes_4:
	releaseall
	end

ScorchedDesert_TriggerQuakes_2:
	random 30
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_5:
	addvar VAR_TEMP_DESERTRUINSFOUND, 1
	switch VAR_TEMP_DESERTRUINSFOUND
	case 1, ScorchedDesert_TriggerQuakes_8
	case 2, ScorchedDesert_TriggerQuakes_9
	case 3, ScorchedDesert_TriggerQuakes_10
	case 4, ScorchedDesert_TriggerQuakes_11
	case 5, ScorchedDesert_TriggerQuakes_12
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_8:
	message ScorchedDesert_TriggerQuakes_Text_0
	waitmessage
	playse SE_SWITCH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 6
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_9:
	message ScorchedDesert_TriggerQuakes_Text_1
	waitmessage
	playse SE_SWITCH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 10
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_10:
	message ScorchedDesert_TriggerQuakes_Text_2
	waitmessage
	playse SE_M_STRENGTH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 14
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_11:
	message ScorchedDesert_TriggerQuakes_Text_3
	waitmessage
	playse SE_M_STRENGTH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 20
	setvar VAR_0x8007, 4
	special ShakeCamera
	waitstate
	delay 30
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_12:
	message ScorchedDesert_TriggerQuakes_Text_4
	waitmessage
	playse SE_M_EARTHQUAKE
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 30
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	waitse
	delay 30
	closemessage
	setvar VAR_TEMP_DESERTRUINSFOUND, 0
	delay 10
	playse SE_SWITCH
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	setmetatile VAR_TEMP_1, VAR_TEMP_2, 0x3DF, FALSE
	setobjectxy OBJ_EVENT_ID_PLAYER, VAR_TEMP_1, VAR_TEMP_2
	special DrawWholeMapView
	goto ScorchedDesert_FallThroughFloor
	goto ScorchedDesert_TriggerQuakes_4


ScorchedDesert_FallThroughFloor::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedDesert_FallThroughFloorMovement
	waitmovement 0
	playse SE_FALL
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_16
ScorchedDesert_FallThroughFloor_14:
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_13
ScorchedDesert_FallThroughFloor_11:
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_10
ScorchedDesert_FallThroughFloor_8:
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_7
ScorchedDesert_FallThroughFloor_6:
	msgbox ScorchedDesert_FallThroughFloor_Text_0
ScorchedDesert_FallThroughFloor_1:
	waitstate
	end

ScorchedDesert_FallThroughFloor_2:
	warpholexy MAP_UNDERGROUND_RUINS, 5, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_3:
	warpholexy MAP_UNDERGROUND_RUINS, 79, 57
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_4:
	warpholexy MAP_UNDERGROUND_RUINS, 24, 63
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_5:
	warpholexy MAP_UNDERGROUND_RUINS, 73, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_7:
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_5
	goto ScorchedDesert_FallThroughFloor_6

ScorchedDesert_FallThroughFloor_10:
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_4
	goto ScorchedDesert_FallThroughFloor_8

ScorchedDesert_FallThroughFloor_13:
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_3
	goto ScorchedDesert_FallThroughFloor_11

ScorchedDesert_FallThroughFloor_16:
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_2
	goto ScorchedDesert_FallThroughFloor_14


ScorchedDesert_FallThroughFloorMovement:
	set_invisible
	step_end

DesertItem1::
	finditem ITEM_TM49
	end


DesertItem2::
	finditem ITEM_HEART_SCALE
	end


DesertItem3::
	finditem ITEM_ELIXIR
	end


Desert_Trainer1_Camper::
	trainerbattle_single TRAINER_DESERT_TR1_CAMPER, Desert_Trainer1_Camper_Intro, Desert_Trainer1_Camper_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer1_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer2_Camper2::
	trainerbattle_single TRAINER_DESERT_TR2_CAMPER2, Desert_Trainer2_Camper2_Intro, Desert_Trainer2_Camper2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer2_Camper2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer3_Picnicker::
	trainerbattle_single TRAINER_DESERT_TR3_PICNICKER, Desert_Trainer3_Picnicker_Intro, Desert_Trainer3_Picnicker_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer3_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer4_Picnicker2::
	trainerbattle_single TRAINER_DESERT_TR4_PICNICKER2, Desert_Trainer4_Picnicker2_Intro, Desert_Trainer4_Picnicker2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer4_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer5_Hiker::
	trainerbattle_single TRAINER_DESERT_TR5_HIKER, Desert_Trainer5_Hiker_Intro, Desert_Trainer5_Hiker_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer5_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer6_Blackbelt::
	trainerbattle_single TRAINER_DESERT_TR6_BLACKBELT, Desert_Trainer6_Blackbelt_Intro, Desert_Trainer6_Blackbelt_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer6_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer7_Picnicker3::
	trainerbattle_single TRAINER_DESERT_TR7_PICNICKER3, Desert_Trainer7_Picnicker3_Intro, Desert_Trainer7_Picnicker3_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer7_Picnicker3_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer8_Hiker2::
	trainerbattle_single TRAINER_DESERT_TR8_HIKER2, Desert_Trainer8_Hiker2_Intro, Desert_Trainer8_Hiker2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer8_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer9_Hiker3::
	trainerbattle_single TRAINER_DESERT_TR9_HIKER3, Desert_Trainer9_Hiker3_Intro, Desert_Trainer9_Hiker3_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer9_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer10_Firebreather::
	trainerbattle_single TRAINER_DESERT_TR10_FIREBREATHER, Desert_Trainer10_Firebreather_Intro, Desert_Trainer10_Firebreather_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer10_Firebreather_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer11_Blackbelt2::
	trainerbattle_single TRAINER_DESERT_TR11_BLACKBELT2, Desert_Trainer11_Blackbelt2_Intro, Desert_Trainer11_Blackbelt2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer11_Blackbelt2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer12_Hiker4::
	trainerbattle_single TRAINER_DESERT_TR12_HIKER4, Desert_Trainer12_Hiker4_Intro, Desert_Trainer12_Hiker4_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer12_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer13_Psychic_F::
	trainerbattle_single TRAINER_DESERT_TR13_PSYCHIC_F, Desert_Trainer13_Psychic_F_Intro, Desert_Trainer13_Psychic_F_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer13_Psychic_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer14_Cooltrainer::
	trainerbattle_single TRAINER_DESERT_TR14_COOLTRAINER, Desert_Trainer14_Cooltrainer_Intro, Desert_Trainer14_Cooltrainer_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer14_Cooltrainer_PostBattle, MSGBOX_AUTOCLOSE
	end


DesertEntrance_Text_0:
	.string "This place is still work in progress.\n"
	.string "You're free to explore, though there's\l"
	.string "no trainers here and even the terrain\l"
	.string "is still under construction in places.\p"
	.string "Wild encounters should be working.$"

ScorchedDesert_TriggerQuakes_Text_0:
	.string "You can feel the ground\nshaking slightly.$"

ScorchedDesert_TriggerQuakes_Text_1:
	.string "The shaking seems to be growing\nin magnitude.$"

ScorchedDesert_TriggerQuakes_Text_2:
	.string "You notice the sand shifting below\nyour feet as the shaking continues.$"

ScorchedDesert_TriggerQuakes_Text_3:
	.string "The shaking seems to be intensifying.$"

ScorchedDesert_TriggerQuakes_Text_4:
	.string "It's an earthquake!$"

ScorchedDesert_FallThroughFloor_Text_0:
	.string "something borked$"

Desert_Trainer1_Camper_Intro::
	.string "$"

Desert_Trainer1_Camper_Defeat::
	.string "$"

Desert_Trainer1_Camper_PostBattle::
	.string "$"

Desert_Trainer2_Camper2_Intro::
	.string "$"

Desert_Trainer2_Camper2_Defeat::
	.string "$"

Desert_Trainer2_Camper2_PostBattle::
	.string "$"

Desert_Trainer3_Picnicker_Intro::
	.string "$"

Desert_Trainer3_Picnicker_Defeat::
	.string "$"

Desert_Trainer3_Picnicker_PostBattle::
	.string "$"

Desert_Trainer4_Picnicker2_Intro::
	.string "$"

Desert_Trainer4_Picnicker2_Defeat::
	.string "$"

Desert_Trainer4_Picnicker2_PostBattle::
	.string "$"

Desert_Trainer5_Hiker_Intro::
	.string "$"

Desert_Trainer5_Hiker_Defeat::
	.string "$"

Desert_Trainer5_Hiker_PostBattle::
	.string "$"

Desert_Trainer6_Blackbelt_Intro::
	.string "$"

Desert_Trainer6_Blackbelt_Defeat::
	.string "$"

Desert_Trainer6_Blackbelt_PostBattle::
	.string "$"

Desert_Trainer7_Picnicker3_Intro::
	.string "$"

Desert_Trainer7_Picnicker3_Defeat::
	.string "$"

Desert_Trainer7_Picnicker3_PostBattle::
	.string "$"

Desert_Trainer8_Hiker2_Intro::
	.string "$"

Desert_Trainer8_Hiker2_Defeat::
	.string "$"

Desert_Trainer8_Hiker2_PostBattle::
	.string "$"

Desert_Trainer9_Hiker3_Intro::
	.string "$"

Desert_Trainer9_Hiker3_Defeat::
	.string "$"

Desert_Trainer9_Hiker3_PostBattle::
	.string "$"

Desert_Trainer10_Firebreather_Intro::
	.string "$"

Desert_Trainer10_Firebreather_Defeat::
	.string "$"

Desert_Trainer10_Firebreather_PostBattle::
	.string "$"

Desert_Trainer11_Blackbelt2_Intro::
	.string "$"

Desert_Trainer11_Blackbelt2_Defeat::
	.string "$"

Desert_Trainer11_Blackbelt2_PostBattle::
	.string "$"

Desert_Trainer12_Hiker4_Intro::
	.string "$"

Desert_Trainer12_Hiker4_Defeat::
	.string "$"

Desert_Trainer12_Hiker4_PostBattle::
	.string "$"

Desert_Trainer13_Psychic_F_Intro::
	.string "$"

Desert_Trainer13_Psychic_F_Defeat::
	.string "$"

Desert_Trainer13_Psychic_F_PostBattle::
	.string "$"

Desert_Trainer14_Cooltrainer_Intro::
	.string "$"

Desert_Trainer14_Cooltrainer_Defeat::
	.string "$"

Desert_Trainer14_Cooltrainer_PostBattle::
	.string "$"
