OldaleTown_PokemonCenter_2F_MapScripts::
	.byte 0


IvTraining_2::
	msgbox IvTraining_2_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	special ShowBattlePointsWindow
	message IvTraining_2_Text_1
	multichoice 21, 0, 114, 0
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq IvTraining_2_1
	compare VAR_RESULT, 1
	goto_if_eq IvTraining_2_2
	compare VAR_RESULT, 2
	goto_if_eq IvTraining_2_3
	compare VAR_RESULT, 3
	goto_if_eq IvTraining_2_4
	compare VAR_RESULT, 4
	goto_if_eq IvTraining_2_5
	compare VAR_RESULT, 5
	goto_if_eq IvTraining_2_6
	special CloseBattlePointsWindow
	closemessage
	release
	end

IvTraining_2_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_FELIX, IVTrainingDone
	return

IvTraining_2_2:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_VIOLET, IVTrainingDone
	return

IvTraining_2_3:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_2, IVTrainingDone
	return

IvTraining_2_4:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_3, IVTrainingDone
	return

IvTraining_2_5:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_4, IVTrainingDone
	return

IvTraining_2_6:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROSE_5, IVTrainingDone
	return


IvTraining::
	lockall
	setvar VAR_0x8008, 5
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, IvTraining_2
	msgbox IVTraining_HaventGotEnoughPoints, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTraining::
	lockall
	setvar VAR_0x8008, 2
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTraining_Setup
	msgbox IVTraining_HaventGotEnoughPoints2BP, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTraining_Setup::
	lockall
	special ShowBattlePointsWindow
	msgbox LevelTraining_Setup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTraining_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTraining_Setup_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_DUSTY_1, IVTrainingDone
	return


LevelTraining2::
	lockall
	setvar VAR_0x8008, 3
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTraining2_Setup
	msgbox IVTraining_HaventGotEnoughPoints3BP, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTraining2_Setup::
	lockall
	special ShowBattlePointsWindow
	msgbox LevelTraining2_Setup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTraining2_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTraining2_Setup_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_GABBY_AND_TY_2, IVTrainingDone
	return


LevelTrainingAldeleaf::
	lockall
	setvar VAR_0x8008, 4
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingAldeleaf_Setup
	msgbox IVTraining_HaventGotEnoughPoints4BP, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTrainingAldeleaf_Setup::
	lockall
	special ShowBattlePointsWindow
	msgbox LevelTrainingAldeleaf_Setup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingAldeleaf_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTrainingAldeleaf_Setup_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_RANDALL, IVTrainingDone
	return


IvTrainingIntro::
	lockall
	msgbox IvTrainingIntro_Text_0, MSGBOX_NPC
	closemessage
	release
	end


LevelTrainingShoreslate::
	lockall
	setvar VAR_0x8008, 5
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingShoreslate_Setup
	msgbox IVTraining_HaventGotEnoughPoints5BP, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTrainingShoreslate_Setup::
	lockall
	special ShowBattlePointsWindow
	msgbox LevelTrainingShoreslate_Setup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingShoreslate_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTrainingShoreslate_Setup_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_SHORESLATE_NURSE, IVTrainingDone
	return


IvTraining_2_Text_0:
	.string "This is the EV Training Service.\nEach round of training costs\l5 Battle Points.$"

IvTraining_2_Text_1:
	.string "Which type of training would\nyou like to have?$"

LevelTraining_Setup_Text_0:
	.string "This is the Level Training Service.\nEach use of the service\lcosts 2 Battle Points.\pWould you like to use the service?\nThe team in this Training Hub is\lset to level 5.$"

LevelTraining2_Setup_Text_0:
	.string "This is the Level Training Service.\nEach use of the service\lcosts 3 Battle Points.\pWould you like to use the service?\nThe team in this Training Hub is\lset to level 7.$"

LevelTrainingAldeleaf_Setup_Text_0:
	.string "This is the Level Training Service.\nEach use of the service\lcosts 4 Battle Points.\pWould you like to use the service?\nThe team in this Training Hub is\lset to level 12.$"

IvTrainingIntro_Text_0:
	.string "Hello, and welcome to the\n"
	.string "Pokémon Center PokéTraining Hub.\p"
	.string "Here trainers may train their Pokémon\n"
	.string "by battling in a controlled environment.\p"
	.string "The first person to my right offers\n"
	.string "EV training.\p"
	.string "She has 5 Pokémon, with each\n"
	.string "granting 10 EV in the specified stat.\p"
	.string "The next person offers level training,\n"
	.string "employing a team of simple Blisseys.\l"
	.string "Do note that the level of the Blisseys\l"
	.string "may vary between training hubs,\l"
	.string "and the higher the level, the costlier\l"
	.string "the training will become.\p"
	.string "With that out of the way,\n"
	.string "I hope you find our services useful.$"

LevelTrainingShoreslate_Setup_Text_0:
	.string "This is the Level Training Service.\nEach use of the service\lcosts 5 Battle Points.\pWould you like to use the service?\nThe team in this Training Hub is\lset to level 20.$"

IVTraining_HaventGotEnoughPoints::
	.string "This service costs\n"
	.string "5 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

IVTraining_HaventGotEnoughPoints2BP::
	.string "This service costs\n"
	.string "2 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

IVTraining_HaventGotEnoughPoints3BP::
	.string "This service costs\n"
	.string "3 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

IVTraining_HaventGotEnoughPoints4BP::
	.string "This service costs\n"
	.string "4 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

IVTraining_HaventGotEnoughPoints5BP::
	.string "This service costs\n"
	.string "5 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

IVTrainingDone::
	.string "Thank you, please come again.$"
