Route20_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checktrainerflag TRAINER_BROTHER_6_ROUTE20
	goto_if 1, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


Route20_BrotherTrigger1::
	setvar VAR_TEMP_0, 1
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger2::
	setvar VAR_TEMP_0, 2
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger3::
	setvar VAR_TEMP_0, 3
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger4::
	setvar VAR_TEMP_0, 4
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger5::
	setvar VAR_TEMP_0, 5
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger6::
	setvar VAR_TEMP_0, 6
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTriggerMain::
	lockall
	safefollow
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	switch VAR_TEMP_0
	case 1, Route20_BrotherTriggerMain_3
	case 2, Route20_BrotherTriggerMain_3
	case 3, Route20_BrotherTriggerMain_4
	case 4, Route20_BrotherTriggerMain_4
	case 5, Route20_BrotherTriggerMain_4
	case 6, Route20_BrotherTriggerMain_5
Route20_BrotherTriggerMain_1:
	waitmovement 0
	delay 30
	switch VAR_TEMP_0
	case 1, Route20_BrotherTriggerMain_8
	case 2, Route20_BrotherTriggerMain_9
	case 3, Route20_BrotherTriggerMain_10
	case 4, Route20_BrotherTriggerMain_11
	case 5, Route20_BrotherTriggerMain_12
	case 6, Route20_BrotherTriggerMain_13
Route20_BrotherTriggerMain_6:
	waitmovement 0
	msgbox Route20_BrotherIntro
	trainerbattle_no_intro TRAINER_BROTHER_6_ROUTE20, Route20_BrotherLost
	msgbox Route20_BrotherPostBat, MSGBOX_AUTOCLOSE
	switch VAR_TEMP_0
	case 1, Route20_BrotherTriggerMain_16
	case 2, Route20_BrotherTriggerMain_16
	case 3, Route20_BrotherTriggerMain_16
	case 4, Route20_BrotherTriggerMain_17
	case 5, Route20_BrotherTriggerMain_18
	case 6, Route20_BrotherTriggerMain_18
Route20_BrotherTriggerMain_14:
	waitmovement 0
	removeobject 2
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	return

Route20_BrotherTriggerMain_3:
	applymovement 2, Route20_BrotherTriggerMain_Movement_0
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_4:
	applymovement 2, Route20_BrotherTriggerMain_Movement_1
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_5:
	applymovement 2, Route20_BrotherTriggerMain_Movement_2
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_8:
	applymovement 2, Route20_BrotherTriggerMain_Movement_3
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_9:
	applymovement 2, Route20_BrotherTriggerMain_Movement_4
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_10:
	applymovement 2, Route20_BrotherTriggerMain_Movement_5
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_11:
	applymovement 2, Route20_BrotherTriggerMain_Movement_6
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_12:
	applymovement 2, Route20_BrotherTriggerMain_Movement_7
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_13:
	applymovement 2, Route20_BrotherTriggerMain_Movement_8
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_16:
	applymovement 2, Route20_BrotherTriggerMain_Movement_9
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_17:
	applymovement 2, Route20_BrotherTriggerMain_Movement_10
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_18:
	applymovement 2, Route20_BrotherTriggerMain_Movement_11
	goto Route20_BrotherTriggerMain_14


Route20_BrotherTriggerMain_Movement_0:
	walk_in_place_faster_left
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	step_end

Route20_BrotherTriggerMain_Movement_1:
	walk_in_place_faster_up
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	step_end

Route20_BrotherTriggerMain_Movement_2:
	walk_in_place_faster_right
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	step_end

Route20_BrotherTriggerMain_Movement_3:
	walk_left
	step_end

Route20_BrotherTriggerMain_Movement_4:
	walk_left
	walk_up
	walk_in_place_faster_left
	step_end

Route20_BrotherTriggerMain_Movement_5:
	walk_up
	walk_left
	walk_in_place_faster_up
	step_end

Route20_BrotherTriggerMain_Movement_6:
	walk_up
	step_end

Route20_BrotherTriggerMain_Movement_7:
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

Route20_BrotherTriggerMain_Movement_8:
	walk_right
	walk_right
	walk_up
	step_end

Route20_BrotherTriggerMain_Movement_9:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route20_BrotherTriggerMain_Movement_10:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route20_BrotherTriggerMain_Movement_11:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route20_BrotherIntro::
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!$"

Route20_BrotherLost::
	.string "I lost?!$"

Route20_BrotherPostBat::
	.string "That was great$"
