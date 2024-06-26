OldaleTown_PokemonCenter_2F_MapScripts::
	.byte 0


IvTraining::
	goto_if_unset FLAG_CORAL_FLAG_1, IvTraining_2
	lockall
	setvar VAR_0x8008, 5
	buffernumberstring STR_VAR_1, VAR_0x8008
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, EvTraining_Setup
	msgbox Training_NotEnoughPoints
	release
	end

IvTraining_2:
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
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
	goto_if_unset FLAG_CORAL_FLAG_1, LevelTraining1_2
	setvar VAR_POKECENTER_TRAINING, 1
	setvar VAR_0x8008, 2
	goto LevelTrainingCheck
	return

LevelTraining1_2:
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
	end


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


LevelTraining8::
	setvar VAR_POKECENTER_TRAINING, 8
	setvar VAR_0x8008, 10
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
	case 8, LevelTrainingMain_10
LevelTrainingMain_1:
	msgbox RecommendedLevel, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingMain_11
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
	buffernumberstring STR_VAR_3, 100
	buffernumberstring STR_VAR_2, 100
	goto LevelTrainingMain_1

LevelTrainingMain_11:
	switch VAR_POKECENTER_TRAINING
	case 1, LevelTrainingMain_16
	case 2, LevelTrainingMain_17
	case 3, LevelTrainingMain_18
	case 4, LevelTrainingMain_19
	case 5, LevelTrainingMain_20
	case 6, LevelTrainingMain_21
	case 7, LevelTrainingMain_22
	case 8, LevelTrainingMain_23
LevelTrainingMain_14:
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTrainingMain_25
LevelTrainingMain_24:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	switch VAR_POKECENTER_TRAINING
	case 1, LevelTrainingMain_29
	case 2, LevelTrainingMain_30
	case 3, LevelTrainingMain_31
	case 4, LevelTrainingMain_32
	case 5, LevelTrainingMain_33
	case 6, LevelTrainingMain_34
	case 7, LevelTrainingMain_35
	case 8, LevelTrainingMain_36
LevelTrainingMain_27:
	setvar VAR_POKECENTER_TRAINING, 0
	end

LevelTrainingMain_16:
	checkpartylevel 12
	goto LevelTrainingMain_14

LevelTrainingMain_17:
	checkpartylevel 14
	goto LevelTrainingMain_14

LevelTrainingMain_18:
	checkpartylevel 22
	goto LevelTrainingMain_14

LevelTrainingMain_19:
	checkpartylevel 29
	goto LevelTrainingMain_14

LevelTrainingMain_20:
	checkpartylevel 34
	goto LevelTrainingMain_14

LevelTrainingMain_21:
	checkpartylevel 34
	goto LevelTrainingMain_14

LevelTrainingMain_22:
	checkpartylevel 38
	goto LevelTrainingMain_14

LevelTrainingMain_23:
	checkpartylevel 100
	goto LevelTrainingMain_14

LevelTrainingMain_25:
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTrainingMain_37
	goto LevelTrainingMain_24

LevelTrainingMain_29:
	trainerbattle_no_intro TRAINER_DUSTY_1, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_30:
	trainerbattle_no_intro TRAINER_GABBY_AND_TY_2, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_31:
	trainerbattle_no_intro TRAINER_RANDALL, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_32:
	trainerbattle_no_intro TRAINER_SHORESLATE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_33:
	trainerbattle_no_intro TRAINER_MARIGORGE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_34:
	trainerbattle_no_intro TRAINER_ROCKLIFFE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_35:
	trainerbattle_no_intro TRAINER_SANDSTONE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_36:
	trainerbattle_no_intro TRAINER_DRISLEDGE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_37:
	setvar VAR_POKECENTER_TRAINING, 0
	release
	special CloseBattlePointsWindow
	end


IvTrainingIntro::
	goto_if_unset FLAG_CORAL_FLAG_1, IvTrainingIntro_2
	lock
	msgbox WelcomeToTrainingClub
	goto TrainingClubNpc
	return

IvTrainingIntro_2:
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
	end


TrainingClubNpc::
	message TrainingClubMessage
	waitmessage
	dynmultipush TrainingClubNpc_Text_0, 0
	dynmultipush TrainingClubNpc_Text_1, 1
	dynmultipush TrainingClubNpc_Text_2, 2
	dynmultistack 23, 0, FALSE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, TrainingClubNpc_2
	case 1, TrainingClubNpc_3
	case 2, TrainingClubNpc_4
	case MULTI_B_PRESSED, TrainingClubNpc_5
	return

TrainingClubNpc_2:
	goto EVTrainingDescription
	return

TrainingClubNpc_3:
	goto LevelTrainingDescription
	return

TrainingClubNpc_4:
	goto TrainingClubGoodbye
	return

TrainingClubNpc_5:
	goto TrainingClubGoodbye
	return


EVTrainingDescription::
	msgbox EVTrainingDescription_Text
	goto TrainingClubNpc
	return


LevelTrainingDescription::
	msgbox LevelTrainingDescription_Text
	goto TrainingClubNpc
	return


TrainingClubGoodbye::
	msgbox TrainingClubGoodbye_Text
	release
	return


TrainingClubNpc_Text_0:
	.string "EV Training$"

TrainingClubNpc_Text_1:
	.string "Level Training$"

TrainingClubNpc_Text_2:
	.string "Nevermind$"

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
	.string "The team in this Training Club is set\n"
	.string "to level {STR_VAR_3} and is intended for teams\l"
	.string "up to level {STR_VAR_2}.\p"
	.string "Would you like to use the service?\p"
	.string "Each use of the service costs\n"
	.string "{STR_VAR_1} Battle Points.$"

YourPokemonIsAboveLevel::
	.string "You have Pokémon that are above the\n"
	.string "level cap of this Training Club and\l"
	.string "thus do not gain any experience.\p"
	.string "Are you sure you want to continue?$"

WelcomeToTrainingClub::
	.string "Hello, and welcome to the\n"
	.string "Pokémon Center PokéTraining Club.\p"
	.string "Here trainers may train their Pokémon\n"
	.string "by battling in a controlled environment.$"

TrainingClubMessage::
	.string "Would you like to know more about\n"
	.string "our services?$"

EVTrainingDescription_Text::
	.string "The person to my left offers\n"
	.string "EV training.\p"
	.string "She has 5 training bots, with each\n"
	.string "granting 10 EV in the specified stat.\p"
	.string "The cost of this service and the\n"
	.string "quality of the bots is consistent\l"
	.string "between every training club, so you're\l"
	.string "free to use the service as you see fit.$"

LevelTrainingDescription_Text::
	.string "The person to my right offers\n"
	.string "level training, employing a team\l"
	.string "of bots that are tuned for quickly\l"
	.string "training your weaker party members.\p"
	.string "Do note that the level of the robots\n"
	.string "may vary between training clubs,\l"
	.string "and the higher the level, the costlier\l"
	.string "the training will become.\p"
	.string "Every training club also has a limit\n"
	.string "on how far it is able to train your\l"
	.string "Pokémon, so you may need to visit\l"
	.string "another training club to progress.$"

TrainingClubGoodbye_Text::
	.string "I hope you find our services useful.$"
