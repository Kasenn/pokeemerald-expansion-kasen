Route20_MapScripts::
# 2 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route20/scripts.pory"
	checktrainerflag TRAINER_BROTHER_6_ROUTE20
	goto_if 1, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_1
	return


Route20_BrotherTrigger1::
# 12 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger2::
# 16 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 2
# 17 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger3::
# 20 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 3
# 21 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger4::
# 24 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 4
# 25 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger5::
# 28 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 5
# 29 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger6::
# 32 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 6
# 33 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTriggerMain::
# 37 "data/maps/Route20/scripts.pory"
	lockall
# 38 "data/maps/Route20/scripts.pory"
	safefollow
# 39 "data/maps/Route20/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 40 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 41 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_3
# 42 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_3
# 44 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_4
# 45 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_4
# 46 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_4
# 48 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_5
Route20_BrotherTriggerMain_1:
# 51 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route20/scripts.pory"
	delay 30
# 53 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 54 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_8
# 56 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_9
# 58 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_10
# 60 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_11
# 62 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_12
# 64 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_13
Route20_BrotherTriggerMain_6:
# 67 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherIntro
# 69 "data/maps/Route20/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_6_ROUTE20, Route20_BrotherLost
# 70 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherPostBat, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 72 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_16
# 73 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_16
# 74 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_16
# 76 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_17
# 78 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_18
# 79 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_18
Route20_BrotherTriggerMain_14:
# 82 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route20/scripts.pory"
	removeobject 2
# 84 "data/maps/Route20/scripts.pory"
	savebgm MUS_DUMMY
# 85 "data/maps/Route20/scripts.pory"
	fadedefaultbgm
# 86 "data/maps/Route20/scripts.pory"
	release
	return

Route20_BrotherTriggerMain_3:
# 43 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_0
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_4:
# 47 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_1
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_5:
# 49 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_2
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_8:
# 55 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_3
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_9:
# 57 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_4
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_10:
# 59 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_5
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_11:
# 61 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_6
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_12:
# 63 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_7
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_13:
# 65 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_8
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_16:
# 75 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_9
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_17:
# 77 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_10
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_18:
# 80 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_11
	goto Route20_BrotherTriggerMain_14


Mirrortestnpc::
# 101 "data/maps/Route20/scripts.pory"
	trainerbattle_single TRAINER_CRISSY, Mirrortestnpc_Text_0, Mirrortestnpc_Text_1
# 102 "data/maps/Route20/scripts.pory"
	msgbox Mirrortestnpc_Text_1, MSGBOX_AUTOCLOSE
	return


# 43 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_0:
# 43 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
# 43 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 43 "data/maps/Route20/scripts.pory"
	delay_16
# 43 "data/maps/Route20/scripts.pory"
	delay_16
# 43 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 47 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_1:
# 47 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
# 47 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 47 "data/maps/Route20/scripts.pory"
	delay_16
# 47 "data/maps/Route20/scripts.pory"
	delay_16
# 47 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 49 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_2:
# 49 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_right
# 49 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/Route20/scripts.pory"
	delay_16
# 49 "data/maps/Route20/scripts.pory"
	delay_16
# 49 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 55 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_3:
# 55 "data/maps/Route20/scripts.pory"
	walk_left
	step_end

# 57 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_4:
# 57 "data/maps/Route20/scripts.pory"
	walk_left
# 57 "data/maps/Route20/scripts.pory"
	walk_up
# 57 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
	step_end

# 59 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_5:
# 59 "data/maps/Route20/scripts.pory"
	walk_up
# 59 "data/maps/Route20/scripts.pory"
	walk_left
# 59 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 61 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_6:
# 61 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_7:
# 63 "data/maps/Route20/scripts.pory"
	walk_up
# 63 "data/maps/Route20/scripts.pory"
	walk_right
# 63 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 65 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_8:
# 65 "data/maps/Route20/scripts.pory"
	walk_right
# 65 "data/maps/Route20/scripts.pory"
	walk_right
# 65 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 75 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_9:
# 75 "data/maps/Route20/scripts.pory"
	walk_right
# 75 "data/maps/Route20/scripts.pory"
	walk_right
# 75 "data/maps/Route20/scripts.pory"
	walk_down
# 75 "data/maps/Route20/scripts.pory"
	walk_down
# 75 "data/maps/Route20/scripts.pory"
	walk_down
# 75 "data/maps/Route20/scripts.pory"
	walk_down
# 75 "data/maps/Route20/scripts.pory"
	walk_down
# 75 "data/maps/Route20/scripts.pory"
	walk_down
# 75 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_10:
# 77 "data/maps/Route20/scripts.pory"
	walk_right
# 77 "data/maps/Route20/scripts.pory"
	walk_down
# 77 "data/maps/Route20/scripts.pory"
	walk_down
# 77 "data/maps/Route20/scripts.pory"
	walk_down
# 77 "data/maps/Route20/scripts.pory"
	walk_down
# 77 "data/maps/Route20/scripts.pory"
	walk_down
# 77 "data/maps/Route20/scripts.pory"
	walk_down
# 77 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 80 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_11:
# 80 "data/maps/Route20/scripts.pory"
	walk_down
# 80 "data/maps/Route20/scripts.pory"
	walk_down
# 80 "data/maps/Route20/scripts.pory"
	walk_down
# 80 "data/maps/Route20/scripts.pory"
	walk_down
# 80 "data/maps/Route20/scripts.pory"
	walk_down
# 80 "data/maps/Route20/scripts.pory"
	walk_down
# 80 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

Mirrortestnpc_Text_0:
# 101 "data/maps/Route20/scripts.pory"
	.string "Saw you through the mirror!$"

Mirrortestnpc_Text_1:
# 101 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_BrotherIntro::
# 89 "data/maps/Route20/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!$"

Route20_BrotherLost::
# 93 "data/maps/Route20/scripts.pory"
	.string "I lost?!$"

Route20_BrotherPostBat::
# 96 "data/maps/Route20/scripts.pory"
	.string "That was great$"
