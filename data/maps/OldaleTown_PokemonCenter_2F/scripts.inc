OldaleTown_PokemonCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0

@ The below 3 are unused and leftover from RS
OldaleTown_PokemonCenter_2F_EventScript_Colosseum::
	call CableClub_EventScript_Colosseum
	end

OldaleTown_PokemonCenter_2F_EventScript_TradeCenter::
	call CableClub_EventScript_TradeCenter
	end

OldaleTown_PokemonCenter_2F_EventScript_RecordCorner::
	call CableClub_EventScript_RecordCorner
	end

IvTraining::
	lockall
	message IvTraining_Text_0
	multichoice 0, 0, 114, 0
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq IvTraining_1
	compare VAR_RESULT, 1
	goto_if_eq IvTraining_2
	compare VAR_RESULT, 2
	goto_if_eq IvTraining_3
	compare VAR_RESULT, 3
	goto_if_eq IvTraining_4
	compare VAR_RESULT, 4
	goto_if_eq IvTraining_5
	compare VAR_RESULT, 5
	goto_if_eq IvTraining_6
	closemessage
	release
	end

IvTraining_1:
	trainerbattle_no_intro TRAINER_FELIX, IVTrainingDone
	return

IvTraining_2:
	trainerbattle_no_intro TRAINER_VIOLET, IVTrainingDone
	return

IvTraining_3:
	trainerbattle_no_intro TRAINER_ROSE_2, IVTrainingDone
	return

IvTraining_4:
	trainerbattle_no_intro TRAINER_ROSE_3, IVTrainingDone
	return

IvTraining_5:
	trainerbattle_no_intro TRAINER_ROSE_4, IVTrainingDone
	return

IvTraining_6:
	trainerbattle_no_intro TRAINER_ROSE_5, IVTrainingDone
	return


LevelTraining::
	lockall
	msgbox LevelTraining_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LevelTraining_1
	closemessage
	release
	end

LevelTraining_1:
	trainerbattle_no_intro TRAINER_DUSTY_1, IVTrainingDone
	return


IvTrainingIntro::
	lockall
	msgbox IvTrainingIntro_Text_0, MSGBOX_NPC
	closemessage
	release
	end


IvTraining_Text_0:
	.string "Which type of training would\nyou like to have?$"

LevelTraining_Text_0:
	.string "Looking for level training? The team\nin this Training Hub is set to level 5.$"

IvTrainingIntro_Text_0:
	.string "Hello, and welcome to the\nPokémon Center PokéTraining Hub.\pHere trainers may train their Pokémon\nby battling in a controlled environment.\pThe first person to my right offers\nEV training.\pShe has 5 Pokémon, with each\ngranting 10 EV in the specified stat.\pThe next person offers level training,\nemploying a team of simple Blisseys.\pI must also inform you that we may\ncharge for this service in the future.\pWith that out of the way,\nI hope you find our services useful.$"

IVTrainingDone::
	.string "Thank you, please come again.$"
