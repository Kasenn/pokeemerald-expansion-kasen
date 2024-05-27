OldaleTown_PokemonCenter_2F_MapScripts::
	.byte 0


IvTraining_2::
	msgbox IvTraining_2_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	special ShowBattlePointsWindow
	message IvTraining_2_Text_1
	waitmessage
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
	msgbox Level4Team, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTraining_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTraining_Setup_1:
	checkpartylevel 12
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTraining_Setup_5
LevelTraining_Setup_4:
	setvar VAR_POKECENTER_TRAINING, 1
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_DUSTY_1, IVTrainingDone
	setvar VAR_POKECENTER_TRAINING, 0
	return

LevelTraining_Setup_5:
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTraining_Setup_7
	goto LevelTraining_Setup_4

LevelTraining_Setup_7:
	release
	special CloseBattlePointsWindow
	end


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
	msgbox Level5Team, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTraining2_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTraining2_Setup_1:
	checkpartylevel 14
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTraining2_Setup_5
LevelTraining2_Setup_4:
	setvar VAR_POKECENTER_TRAINING, 2
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_GABBY_AND_TY_2, IVTrainingDone
	setvar VAR_POKECENTER_TRAINING, 0
	return

LevelTraining2_Setup_5:
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTraining2_Setup_7
	goto LevelTraining2_Setup_4

LevelTraining2_Setup_7:
	release
	special CloseBattlePointsWindow
	end


LevelTrainingAldeleaf::
	lockall
	setvar VAR_0x8008, 3
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
	msgbox Level9Team, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingAldeleaf_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTrainingAldeleaf_Setup_1:
	checkpartylevel 22
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTrainingAldeleaf_Setup_5
LevelTrainingAldeleaf_Setup_4:
	setvar VAR_POKECENTER_TRAINING, 3
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_RANDALL, IVTrainingDone
	setvar VAR_POKECENTER_TRAINING, 0
	return

LevelTrainingAldeleaf_Setup_5:
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTrainingAldeleaf_Setup_7
	goto LevelTrainingAldeleaf_Setup_4

LevelTrainingAldeleaf_Setup_7:
	release
	special CloseBattlePointsWindow
	end


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
	msgbox Level18Team, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingShoreslate_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTrainingShoreslate_Setup_1:
	checkpartylevel 29
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTrainingShoreslate_Setup_5
LevelTrainingShoreslate_Setup_4:
	setvar VAR_POKECENTER_TRAINING, 4
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_SHORESLATE_NURSE, IVTrainingDone
	setvar VAR_POKECENTER_TRAINING, 0
	return

LevelTrainingShoreslate_Setup_5:
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTrainingShoreslate_Setup_7
	goto LevelTrainingShoreslate_Setup_4

LevelTrainingShoreslate_Setup_7:
	release
	special CloseBattlePointsWindow
	end


LevelTrainingMarigorge::
	lockall
	setvar VAR_0x8008, 7
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingMarigorge_Setup
	msgbox IVTraining_HaventGotEnoughPoints7BP, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTrainingMarigorge_Setup::
	lockall
	special ShowBattlePointsWindow
	msgbox LevelTrainingMarigorge_Setup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingMarigorge_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTrainingMarigorge_Setup_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_MARIGORGE_NURSE, IVTrainingDone
	return


LevelTrainingRockliffe::
	lockall
	setvar VAR_0x8008, 9
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingRockliffe_Setup
	msgbox IVTraining_HaventGotEnoughPoints9BP, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTrainingRockliffe_Setup::
	lockall
	special ShowBattlePointsWindow
	msgbox LevelTrainingRockliffe_Setup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingRockliffe_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTrainingRockliffe_Setup_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_ROCKLIFFE_NURSE, IVTrainingDone
	return


LevelTrainingSandstone::
	lockall
	setvar VAR_0x8008, 10
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingSandstone_Setup
	msgbox IVTraining_HaventGotEnoughPoints10BP, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


LevelTrainingSandstone_Setup::
	lockall
	special ShowBattlePointsWindow
	msgbox LevelTrainingSandstone_Setup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingSandstone_Setup_1
	closemessage
	special CloseBattlePointsWindow
	release
	end

LevelTrainingSandstone_Setup_1:
	special CloseBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	trainerbattle_no_intro TRAINER_SANDSTONE_NURSE, IVTrainingDone
	return


IvTraining_2_Text_0:
	.string "This is the EV Training Service.\nEach round of training costs\l5 Battle Points.$"

IvTraining_2_Text_1:
	.string "Which type of training would\nyou like to have?$"

IvTrainingIntro_Text_0:
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

LevelTrainingMarigorge_Setup_Text_0:
	.string "This is the Level Training Service.\nEach use of the service\lcosts 7 Battle Points.\pWould you like to use the service?\nThe team in this Training Hub is\lset to level 18.$"

LevelTrainingRockliffe_Setup_Text_0:
	.string "This is the Level Training Service.\nEach use of the service\lcosts 9 Battle Points.\pWould you like to use the service?\nThe team in this Training Hub is\lset to level 23.$"

LevelTrainingSandstone_Setup_Text_0:
	.string "This is the Level Training Service.\nEach use of the service\lcosts 10 Battle Points.\pWould you like to use the service?\nThe team in this Training Hub is\lset to level 25.$"

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

IVTraining_HaventGotEnoughPoints7BP::
	.string "This service costs\n"
	.string "7 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

IVTraining_HaventGotEnoughPoints9BP::
	.string "This service costs\n"
	.string "9 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

IVTraining_HaventGotEnoughPoints10BP::
	.string "This service costs\n"
	.string "10 Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

Level4Team::
	.string "This is the Level Training Service.\p"
	.string "The team in this Training Hub is set\n"
	.string "to level 6 and is intended for teams\l"
	.string "up to level 11.\p"
	.string "Would you like to use the service?\p"
	.string "Each use of the service costs\n"
	.string "2 Battle Points.$"

Level5Team::
	.string "This is the Level Training Service.\p"
	.string "The team in this Training Hub is set\n"
	.string "to level 8 and is intended for teams\l"
	.string "up to level 13.\p"
	.string "Would you like to use the service?\p"
	.string "Each use of the service costs\n"
	.string "3 Battle Points.$"

Level9Team::
	.string "This is the Level Training Service.\p"
	.string "The team in this Training Hub is set\n"
	.string "to level 16 and is intended for teams\l"
	.string "up to level 21.\p"
	.string "Would you like to use the service?\p"
	.string "Each use of the service costs\n"
	.string "3 Battle Points.$"

IVTrainingDone::
	.string "Thank you, please come again.$"

YourPokemonIsAboveLevel::
	.string "You have Pokémon that are above the\n"
	.string "level cap of this Training Hub and\l"
	.string "thus do not gain any experience.\p"
	.string "Are you sure you want to continue?$"

Level18Team::
	.string "This is the Level Training Service.\p"
	.string "The team in this Training Hub is set\n"
	.string "to level 25 and is intended for teams\l"
	.string "up to level 28.\p"
	.string "Would you like to use the service?\p"
	.string "Each use of the service costs\n"
	.string "5 Battle Points.$"
