OldaleTown_PokemonCenter_2F_MapScripts::
	.byte 0


IvTraining::
	lockall
	setvar VAR_0x8008, 5
	buffernumberstring STR_VAR_1, VAR_0x8008
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, EvTraining_Setup
	msgbox Training_NotEnoughPoints
	release
	end


EvTraining_Setup::
	msgbox EVTraining_Intro
	special ShowBattlePointsWindow
	message EVTraining_Type
	waitmessage
	multichoice 21, 0, 114, 0
	closemessage
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	compare VAR_RESULT, 0
	goto_if_eq EvTraining_Setup_1
	compare VAR_RESULT, 1
	goto_if_eq EvTraining_Setup_2
	compare VAR_RESULT, 2
	goto_if_eq EvTraining_Setup_3
	compare VAR_RESULT, 3
	goto_if_eq EvTraining_Setup_4
	compare VAR_RESULT, 4
	goto_if_eq EvTraining_Setup_5
	compare VAR_RESULT, 5
	goto_if_eq EvTraining_Setup_6
	release
	end

EvTraining_Setup_1:
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_FELIX, TrainingFinished
	return

EvTraining_Setup_2:
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_VIOLET, TrainingFinished
	return

EvTraining_Setup_3:
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_2, TrainingFinished
	return

EvTraining_Setup_4:
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_3, TrainingFinished
	return

EvTraining_Setup_5:
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_4, TrainingFinished
	return

EvTraining_Setup_6:
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_5, TrainingFinished
	return


LevelTraining1::
	setvar VAR_POKECENTER_TRAINING, 1
	setvar VAR_0x8008, 2
	goto LevelTrainingCheck
	return


LevelTraining2::
	setvar VAR_POKECENTER_TRAINING, 2
	setvar VAR_0x8008, 3
	goto LevelTrainingCheck
	return


LevelTraining3::
	setvar VAR_POKECENTER_TRAINING, 3
	setvar VAR_0x8008, 3
	goto LevelTrainingCheck
	return


LevelTraining4::
	setvar VAR_POKECENTER_TRAINING, 4
	setvar VAR_0x8008, 5
	goto LevelTrainingCheck
	return


LevelTraining5::
	setvar VAR_POKECENTER_TRAINING, 5
	setvar VAR_0x8008, 7
	goto LevelTrainingCheck
	return


LevelTraining6::
	setvar VAR_POKECENTER_TRAINING, 6
	setvar VAR_0x8008, 7
	goto LevelTrainingCheck
	return


LevelTraining7::
	setvar VAR_POKECENTER_TRAINING, 7
	setvar VAR_0x8008, 9
	goto LevelTrainingCheck
	return


LevelTrainingCheck::
	lock
	buffernumberstring STR_VAR_1, VAR_0x8008
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingMain
	msgbox Training_NotEnoughPoints, MSGBOX_DEFAULT
	setvar VAR_POKECENTER_TRAINING, 0
	release
	end


LevelTrainingMain::
	special ShowBattlePointsWindow
	switch VAR_POKECENTER_TRAINING
	case 1, LevelTrainingMain_3
	case 2, LevelTrainingMain_4
	case 3, LevelTrainingMain_5
	case 4, LevelTrainingMain_6
	case 5, LevelTrainingMain_7
	case 6, LevelTrainingMain_8
	case 7, LevelTrainingMain_9
LevelTrainingMain_1:
	msgbox RecommendedLevel, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingMain_10
	setvar VAR_POKECENTER_TRAINING, 0
	special CloseBattlePointsWindow
	release
	end

LevelTrainingMain_3:
	buffernumberstring STR_VAR_3, 6
	buffernumberstring STR_VAR_2, 11
	goto LevelTrainingMain_1

LevelTrainingMain_4:
	buffernumberstring STR_VAR_3, 8
	buffernumberstring STR_VAR_2, 13
	goto LevelTrainingMain_1

LevelTrainingMain_5:
	buffernumberstring STR_VAR_3, 16
	buffernumberstring STR_VAR_2, 21
	goto LevelTrainingMain_1

LevelTrainingMain_6:
	buffernumberstring STR_VAR_3, 25
	buffernumberstring STR_VAR_2, 28
	goto LevelTrainingMain_1

LevelTrainingMain_7:
	buffernumberstring STR_VAR_3, 30
	buffernumberstring STR_VAR_2, 33
	goto LevelTrainingMain_1

LevelTrainingMain_8:
	buffernumberstring STR_VAR_3, 30
	buffernumberstring STR_VAR_2, 33
	goto LevelTrainingMain_1

LevelTrainingMain_9:
	buffernumberstring STR_VAR_3, 33
	buffernumberstring STR_VAR_2, 37
	goto LevelTrainingMain_1

LevelTrainingMain_10:
	switch VAR_POKECENTER_TRAINING
	case 1, LevelTrainingMain_15
	case 2, LevelTrainingMain_16
	case 3, LevelTrainingMain_17
	case 4, LevelTrainingMain_18
	case 5, LevelTrainingMain_19
	case 6, LevelTrainingMain_20
	case 7, LevelTrainingMain_21
LevelTrainingMain_13:
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTrainingMain_23
LevelTrainingMain_22:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	switch VAR_POKECENTER_TRAINING
	case 1, LevelTrainingMain_27
	case 2, LevelTrainingMain_28
	case 3, LevelTrainingMain_29
	case 4, LevelTrainingMain_30
	case 5, LevelTrainingMain_31
	case 6, LevelTrainingMain_32
	case 7, LevelTrainingMain_33
LevelTrainingMain_25:
	setvar VAR_POKECENTER_TRAINING, 0
	end

LevelTrainingMain_15:
	checkpartylevel 12
	goto LevelTrainingMain_13

LevelTrainingMain_16:
	checkpartylevel 14
	goto LevelTrainingMain_13

LevelTrainingMain_17:
	checkpartylevel 22
	goto LevelTrainingMain_13

LevelTrainingMain_18:
	checkpartylevel 29
	goto LevelTrainingMain_13

LevelTrainingMain_19:
	checkpartylevel 34
	goto LevelTrainingMain_13

LevelTrainingMain_20:
	checkpartylevel 34
	goto LevelTrainingMain_13

LevelTrainingMain_21:
	checkpartylevel 38
	goto LevelTrainingMain_13

LevelTrainingMain_23:
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTrainingMain_34
	goto LevelTrainingMain_22

LevelTrainingMain_27:
	trainerbattle_no_intro TRAINER_DUSTY_1, TrainingFinished
	goto LevelTrainingMain_25

LevelTrainingMain_28:
	trainerbattle_no_intro TRAINER_GABBY_AND_TY_2, TrainingFinished
	goto LevelTrainingMain_25

LevelTrainingMain_29:
	trainerbattle_no_intro TRAINER_RANDALL, TrainingFinished
	goto LevelTrainingMain_25

LevelTrainingMain_30:
	trainerbattle_no_intro TRAINER_SHORESLATE_NURSE, TrainingFinished
	goto LevelTrainingMain_25

LevelTrainingMain_31:
	trainerbattle_no_intro TRAINER_MARIGORGE_NURSE, TrainingFinished
	goto LevelTrainingMain_25

LevelTrainingMain_32:
	trainerbattle_no_intro TRAINER_ROCKLIFFE_NURSE, TrainingFinished
	goto LevelTrainingMain_25

LevelTrainingMain_33:
	trainerbattle_no_intro TRAINER_SANDSTONE_NURSE, TrainingFinished
	goto LevelTrainingMain_25

LevelTrainingMain_34:
	setvar VAR_POKECENTER_TRAINING, 0
	release
	special CloseBattlePointsWindow
	end


IvTrainingIntro::
	msgbox IvTrainingIntro_Text, MSGBOX_NPC
	return


EVTraining_Intro::
	.string "This is the EV Training Service.\n"
	.string "Each round of training costs\l"
	.string "5 Battle Points.$"

EVTraining_Type::
	.string "Which type of training would\n"
	.string "you like to have?$"

TrainingFinished::
	.string "Thank you, please come again.$"

Training_NotEnoughPoints::
	.string "This service costs\n"
	.string "{STR_VAR_1} Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

RecommendedLevel::
	.string "This is the Level Training Service.\p"
	.string "The team in this Training Hub is set\n"
	.string "to level {STR_VAR_3} and is intended for teams\l"
	.string "up to level {STR_VAR_2}.\p"
	.string "Would you like to use the service?\p"
	.string "Each use of the service costs\n"
	.string "{STR_VAR_1} Battle Points.$"

YourPokemonIsAboveLevel::
	.string "You have Pokémon that are above the\n"
	.string "level cap of this Training Hub and\l"
	.string "thus do not gain any experience.\p"
	.string "Are you sure you want to continue?$"

IvTrainingIntro_Text::
	.string "Hello, and welcome to the\n"
	.string "Pokémon Center PokéTraining Hub.\p"
	.string "Here trainers may train their Pokémon\n"
	.string "by battling in a controlled environment.\p"
	.string "The first person to my right offers\n"
	.string "EV training.\p"
	.string "She has 5 training robots, with each\n"
	.string "granting 10 EV in the specified stat.\p"
	.string "The next person offers level training,\n"
	.string "employing a team of training robots.\l"
	.string "Do note that the level of the robots\l"
	.string "may vary between training hubs,\l"
	.string "and the higher the level, the costlier\l"
	.string "the training will become.\p"
	.string "With that out of the way,\n"
	.string "I hope you find our services useful.$"
