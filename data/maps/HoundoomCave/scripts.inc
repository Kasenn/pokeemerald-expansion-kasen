HoundoomCave_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_TRANSITION, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	switch VAR_HOUNDOOMS_DEFEATED
	case 0, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_6
	case 1, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_7
	case 2, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_8
	case 3, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_9
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_6:
	removeobject 1
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_7:
	removeobject 2
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_8:
	removeobject 3
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	removeobject 4
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_LANDMARK_BELLOWING_CAVE
	switch VAR_HOUNDOOMS_DEFEATED
	case 1, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_TEMP_0, 1
	setflag FLAG_TEMP_1
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setvar VAR_TEMP_0, 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar VAR_TEMP_0, 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_TEMP_0, 1
	setvar VAR_TEMP_1, 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	return


HoundoomWarning::
	msgbox HoundoomWarning_Text, MSGBOX_SIGN
	setvar VAR_TEMP_0, 1
	return


HoundoomTrigger::
	lockall
	safefollow
	delay 30
	playse SE_PIN
	turnobject 1, DIR_SOUTH
	turnobject 2, DIR_SOUTH
	turnobject 3, DIR_SOUTH
	applymovement 1, ExclamationMark
	applymovement 2, ExclamationMark
	applymovement 3, ExclamationMark
	applymovement 4, ExclamationMark
	waitmovement 0
	delay 48
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	switch VAR_HOUNDOOMS_DEFEATED
	case 0, HoundoomTrigger_2
	case 1, HoundoomTrigger_3
	case 2, HoundoomTrigger_4
	case 3, HoundoomTrigger_5
	return

HoundoomTrigger_2:
	goto HoundoomBattleFirst
	return

HoundoomTrigger_3:
	goto HoundoomBattleSecond
	return

HoundoomTrigger_4:
	goto HoundoomBattleThird
	return

HoundoomTrigger_5:
	goto HoundoomBattleFourth
	return


HoundoomBattleFirst::
	call HoundoomCry
	createmon 1, 0, SPECIES_HOUNDOOM, 45, move1 = MOVE_BITE, move2 = MOVE_EMBER, move3 = MOVE_BEAT_UP, move4 = MOVE_NASTY_PLOT
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleFirst_2
HoundoomBattleFirst_1:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleFirst_4
	return

HoundoomBattleFirst_2:
	setvar VAR_HOUNDOOMS_DEFEATED, 1
	setvar VAR_LAST_TALKED, 1
	call RemoveHoundoom
	goto HoundoomBattleSecond
	goto HoundoomBattleFirst_1

HoundoomBattleFirst_4:
	goto HoundoomLoop
	return


HoundoomBattleSecond::
	safefollow
	applymovement 2, MoveHoundoom2
	waitmovement 0
	call HoundoomCry
	createmon 1, 0, SPECIES_HOUNDOOM, 50, move1 = MOVE_BITE, move2 = MOVE_EMBER, move3 = MOVE_FOUL_PLAY, move4 = MOVE_NASTY_PLOT
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleSecond_2
HoundoomBattleSecond_1:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleSecond_4
	return

HoundoomBattleSecond_2:
	setvar VAR_HOUNDOOMS_DEFEATED, 2
	setvar VAR_LAST_TALKED, 2
	call RemoveHoundoom
	goto HoundoomBattleThird
	goto HoundoomBattleSecond_1

HoundoomBattleSecond_4:
	goto HoundoomLoop
	return


HoundoomBattleThird::
	safefollow
	applymovement 3, MoveHoundoom3
	waitmovement 0
	call HoundoomCry
	createmon 1, 0, SPECIES_HOUNDOOM, 55, move1 = MOVE_BITE, move2 = MOVE_FLAMETHROWER, move3 = MOVE_FOUL_PLAY, move4 = MOVE_NASTY_PLOT
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleThird_2
HoundoomBattleThird_1:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleThird_4
	return

HoundoomBattleThird_2:
	setvar VAR_HOUNDOOMS_DEFEATED, 3
	setvar VAR_LAST_TALKED, 3
	call RemoveHoundoom
	goto HoundoomBattleFourth
	goto HoundoomBattleThird_1

HoundoomBattleThird_4:
	goto HoundoomLoop
	return


HoundoomBattleFourth::
	safefollow
	applymovement 4, MoveHoundoom4
	waitmovement 0
	call HoundoomCry
	createmon 1, 0, SPECIES_HOUNDOOM, 60, move1 = MOVE_DARK_PULSE, move2 = MOVE_FLAMETHROWER, move3 = MOVE_FOUL_PLAY, move4 = MOVE_NASTY_PLOT
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleFourth_2
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleFourth_4
	return

HoundoomBattleFourth_2:
	setvar VAR_HOUNDOOMS_DEFEATED, 4
	setvar VAR_LAST_TALKED, 4
	setvar VAR_TEMP_1, 1
	call RemoveHoundoom
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	release
	end

HoundoomBattleFourth_4:
	goto HoundoomLoop
	return


HoundoomCry::
	playmoncry SPECIES_HOUNDOOM, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 40
	return


HoundoomLoop::
	switch VAR_HOUNDOOMS_DEFEATED
	case 0, HoundoomLoop_2
	case 1, HoundoomLoop_3
	case 2, HoundoomLoop_4
	case 3, HoundoomLoop_5
	return

HoundoomLoop_2:
	goto HoundoomBattleFirst
	return

HoundoomLoop_3:
	goto HoundoomBattleSecond
	return

HoundoomLoop_4:
	goto HoundoomBattleThird
	return

HoundoomLoop_5:
	goto HoundoomBattleFourth
	return


RemoveHoundoom::
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	return


MoveHoundoom2:
	walk_down
	walk_right
	walk_in_place_down
	delay_16
	step_end

MoveHoundoom3:
	walk_down
	walk_left
	walk_in_place_down
	delay_16
	step_end

MoveHoundoom4:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_in_place_down
	delay_16
	step_end

HoundoomWarning_Text::
	.string "A pack of Houndoom seems to be\n"
	.string "fighting over something shiny.\p"
	.string "They seem unaware of your presence\n"
	.string "for now.$"
