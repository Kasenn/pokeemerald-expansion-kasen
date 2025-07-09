HoundoomCave_MapScripts::
# 2 "data/maps/HoundoomCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME
# 19 "data/maps/HoundoomCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/HoundoomCave/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/HoundoomCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 5 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 6 "data/maps/HoundoomCave/scripts.pory"
	switch VAR_HOUNDOOMS_DEFEATED
# 7 "data/maps/HoundoomCave/scripts.pory"
	case 0, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 9 "data/maps/HoundoomCave/scripts.pory"
	case 1, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_7
# 11 "data/maps/HoundoomCave/scripts.pory"
	case 2, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_8
# 13 "data/maps/HoundoomCave/scripts.pory"
	case 3, HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_9
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 8 "data/maps/HoundoomCave/scripts.pory"
	removeobject 1
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 10 "data/maps/HoundoomCave/scripts.pory"
	removeobject 2
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 12 "data/maps/HoundoomCave/scripts.pory"
	removeobject 3
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/HoundoomCave/scripts.pory"
	removeobject 4
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_LANDMARK_BELLOWING_CAVE
# 21 "data/maps/HoundoomCave/scripts.pory"
	switch VAR_HOUNDOOMS_DEFEATED
# 22 "data/maps/HoundoomCave/scripts.pory"
	case 1, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 25 "data/maps/HoundoomCave/scripts.pory"
	case 2, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 29 "data/maps/HoundoomCave/scripts.pory"
	case 3, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 34 "data/maps/HoundoomCave/scripts.pory"
	case 4, HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 24 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_1
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 26 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_1
# 28 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_2
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 30 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 31 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_1
# 32 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_2
# 33 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_3
	return

HoundoomCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 35 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 36 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_1
# 38 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_2
# 39 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_3
# 40 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_TEMP_4
	return


HoundoomWarning::
# 46 "data/maps/HoundoomCave/scripts.pory"
	msgbox HoundoomWarning_Text, MSGBOX_SIGN
# 47 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


HoundoomTrigger::
# 56 "data/maps/HoundoomCave/scripts.pory"
	lockall
# 57 "data/maps/HoundoomCave/scripts.pory"
	safefollow
# 58 "data/maps/HoundoomCave/scripts.pory"
	delay 30
# 59 "data/maps/HoundoomCave/scripts.pory"
	playse SE_PIN
# 60 "data/maps/HoundoomCave/scripts.pory"
	turnobject 1, DIR_SOUTH
# 61 "data/maps/HoundoomCave/scripts.pory"
	turnobject 2, DIR_SOUTH
# 62 "data/maps/HoundoomCave/scripts.pory"
	turnobject 3, DIR_SOUTH
# 63 "data/maps/HoundoomCave/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 64 "data/maps/HoundoomCave/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 65 "data/maps/HoundoomCave/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 66 "data/maps/HoundoomCave/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 67 "data/maps/HoundoomCave/scripts.pory"
	waitmovement 0
# 68 "data/maps/HoundoomCave/scripts.pory"
	delay 48
# 69 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
# 70 "data/maps/HoundoomCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 71 "data/maps/HoundoomCave/scripts.pory"
	switch VAR_HOUNDOOMS_DEFEATED
# 72 "data/maps/HoundoomCave/scripts.pory"
	case 0, HoundoomTrigger_2
# 74 "data/maps/HoundoomCave/scripts.pory"
	case 1, HoundoomTrigger_3
# 76 "data/maps/HoundoomCave/scripts.pory"
	case 2, HoundoomTrigger_4
# 78 "data/maps/HoundoomCave/scripts.pory"
	case 3, HoundoomTrigger_5
	return

HoundoomTrigger_2:
# 73 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleFirst
	return

HoundoomTrigger_3:
# 75 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleSecond
	return

HoundoomTrigger_4:
# 77 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleThird
	return

HoundoomTrigger_5:
# 79 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleFourth
	return


HoundoomBattleFirst::
# 84 "data/maps/HoundoomCave/scripts.pory"
	call HoundoomCry
# 85 "data/maps/HoundoomCave/scripts.pory"
	createmon 1, 0, SPECIES_HOUNDOOM, 45, move1 = MOVE_BITE, move2 = MOVE_EMBER, move3 = MOVE_BEAT_UP, move4 = MOVE_NASTY_PLOT
# 86 "data/maps/HoundoomCave/scripts.pory"
	dowildbattle
# 87 "data/maps/HoundoomCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 88 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleFirst_2
HoundoomBattleFirst_1:
# 94 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleFirst_4
	return

HoundoomBattleFirst_2:
# 89 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_HOUNDOOMS_DEFEATED, 1
# 90 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 91 "data/maps/HoundoomCave/scripts.pory"
	call RemoveHoundoom
# 92 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleSecond
	goto HoundoomBattleFirst_1

HoundoomBattleFirst_4:
# 95 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomLoop
	return


HoundoomBattleSecond::
# 99 "data/maps/HoundoomCave/scripts.pory"
	safefollow
# 100 "data/maps/HoundoomCave/scripts.pory"
	applymovement 2, MoveHoundoom2
# 101 "data/maps/HoundoomCave/scripts.pory"
	waitmovement 0
# 102 "data/maps/HoundoomCave/scripts.pory"
	call HoundoomCry
# 103 "data/maps/HoundoomCave/scripts.pory"
	createmon 1, 0, SPECIES_HOUNDOOM, 50, move1 = MOVE_BITE, move2 = MOVE_EMBER, move3 = MOVE_FOUL_PLAY, move4 = MOVE_NASTY_PLOT
# 104 "data/maps/HoundoomCave/scripts.pory"
	dowildbattle
# 105 "data/maps/HoundoomCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleSecond_2
HoundoomBattleSecond_1:
# 112 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleSecond_4
	return

HoundoomBattleSecond_2:
# 107 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_HOUNDOOMS_DEFEATED, 2
# 108 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 109 "data/maps/HoundoomCave/scripts.pory"
	call RemoveHoundoom
# 110 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleThird
	goto HoundoomBattleSecond_1

HoundoomBattleSecond_4:
# 113 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomLoop
	return


HoundoomBattleThird::
# 117 "data/maps/HoundoomCave/scripts.pory"
	safefollow
# 118 "data/maps/HoundoomCave/scripts.pory"
	applymovement 3, MoveHoundoom3
# 119 "data/maps/HoundoomCave/scripts.pory"
	waitmovement 0
# 120 "data/maps/HoundoomCave/scripts.pory"
	call HoundoomCry
# 121 "data/maps/HoundoomCave/scripts.pory"
	createmon 1, 0, SPECIES_HOUNDOOM, 55, move1 = MOVE_BITE, move2 = MOVE_FLAMETHROWER, move3 = MOVE_FOUL_PLAY, move4 = MOVE_NASTY_PLOT
# 122 "data/maps/HoundoomCave/scripts.pory"
	dowildbattle
# 123 "data/maps/HoundoomCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 124 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleThird_2
HoundoomBattleThird_1:
# 130 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleThird_4
	return

HoundoomBattleThird_2:
# 125 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_HOUNDOOMS_DEFEATED, 3
# 126 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 127 "data/maps/HoundoomCave/scripts.pory"
	call RemoveHoundoom
# 128 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleFourth
	goto HoundoomBattleThird_1

HoundoomBattleThird_4:
# 131 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomLoop
	return


HoundoomBattleFourth::
# 135 "data/maps/HoundoomCave/scripts.pory"
	safefollow
# 136 "data/maps/HoundoomCave/scripts.pory"
	applymovement 4, MoveHoundoom4
# 137 "data/maps/HoundoomCave/scripts.pory"
	waitmovement 0
# 138 "data/maps/HoundoomCave/scripts.pory"
	call HoundoomCry
# 139 "data/maps/HoundoomCave/scripts.pory"
	createmon 1, 0, SPECIES_HOUNDOOM, 60, move1 = MOVE_DARK_PULSE, move2 = MOVE_FLAMETHROWER, move3 = MOVE_FOUL_PLAY, move4 = MOVE_NASTY_PLOT
# 140 "data/maps/HoundoomCave/scripts.pory"
	dowildbattle
# 141 "data/maps/HoundoomCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 142 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HoundoomBattleFourth_2
# 151 "data/maps/HoundoomCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HoundoomBattleFourth_4
	return

HoundoomBattleFourth_2:
# 143 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_HOUNDOOMS_DEFEATED, 4
# 144 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 145 "data/maps/HoundoomCave/scripts.pory"
	setvar VAR_TEMP_1, 1
# 146 "data/maps/HoundoomCave/scripts.pory"
	call RemoveHoundoom
# 147 "data/maps/HoundoomCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 148 "data/maps/HoundoomCave/scripts.pory"
	release
	end

HoundoomBattleFourth_4:
# 152 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomLoop
	return


HoundoomCry::
# 157 "data/maps/HoundoomCave/scripts.pory"
	playmoncry SPECIES_HOUNDOOM, CRY_MODE_ENCOUNTER
# 158 "data/maps/HoundoomCave/scripts.pory"
	waitmoncry
# 159 "data/maps/HoundoomCave/scripts.pory"
	delay 40
	return


HoundoomLoop::
# 163 "data/maps/HoundoomCave/scripts.pory"
	switch VAR_HOUNDOOMS_DEFEATED
# 164 "data/maps/HoundoomCave/scripts.pory"
	case 0, HoundoomLoop_2
# 166 "data/maps/HoundoomCave/scripts.pory"
	case 1, HoundoomLoop_3
# 168 "data/maps/HoundoomCave/scripts.pory"
	case 2, HoundoomLoop_4
# 170 "data/maps/HoundoomCave/scripts.pory"
	case 3, HoundoomLoop_5
	return

HoundoomLoop_2:
# 165 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleFirst
	return

HoundoomLoop_3:
# 167 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleSecond
	return

HoundoomLoop_4:
# 169 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleThird
	return

HoundoomLoop_5:
# 171 "data/maps/HoundoomCave/scripts.pory"
	goto HoundoomBattleFourth
	return


RemoveHoundoom::
# 176 "data/maps/HoundoomCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 177 "data/maps/HoundoomCave/scripts.pory"
	removeobject VAR_LAST_TALKED
# 178 "data/maps/HoundoomCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 182 "data/maps/HoundoomCave/scripts.pory"
MoveHoundoom2:
# 183 "data/maps/HoundoomCave/scripts.pory"
	walk_down
# 184 "data/maps/HoundoomCave/scripts.pory"
	walk_right
# 185 "data/maps/HoundoomCave/scripts.pory"
	walk_in_place_down
# 186 "data/maps/HoundoomCave/scripts.pory"
	delay_16
	step_end

# 188 "data/maps/HoundoomCave/scripts.pory"
MoveHoundoom3:
# 189 "data/maps/HoundoomCave/scripts.pory"
	walk_down
# 190 "data/maps/HoundoomCave/scripts.pory"
	walk_left
# 191 "data/maps/HoundoomCave/scripts.pory"
	walk_in_place_down
# 192 "data/maps/HoundoomCave/scripts.pory"
	delay_16
	step_end

# 194 "data/maps/HoundoomCave/scripts.pory"
MoveHoundoom4:
# 195 "data/maps/HoundoomCave/scripts.pory"
	walk_right
# 196 "data/maps/HoundoomCave/scripts.pory"
	walk_down
# 196 "data/maps/HoundoomCave/scripts.pory"
	walk_down
# 197 "data/maps/HoundoomCave/scripts.pory"
	walk_left
# 198 "data/maps/HoundoomCave/scripts.pory"
	walk_in_place_down
# 199 "data/maps/HoundoomCave/scripts.pory"
	delay_16
	step_end

HoundoomWarning_Text::
# 49 "data/maps/HoundoomCave/scripts.pory"
	.string "A pack of Houndoom seems to be\n"
	.string "fighting over something shiny.\p"
	.string "They seem unaware of your presence\n"
	.string "for now.$"
