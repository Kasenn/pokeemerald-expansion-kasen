BarrenWastes_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setescapewarp MAP_BARREN_WASTES, 14, 6
	return


Wastes_Hiker::
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, TRUE
	goto_if_eq Wastes_Hiker_2
	lock
	faceplayer
	msgbox Wastes_Hiker_NoRope
	giveitem ITEM_ESCAPE_ROPE
	release
	end

Wastes_Hiker_2:
	msgbox Wastes_Hiker_YesRope, MSGBOX_NPC
	end


PryceEscortedOut1::
	setvar VAR_TEMP_2, 1
	goto PryceEscortedOutMain
	return


PryceEscortedOut2::
	setvar VAR_TEMP_2, 2
	goto PryceEscortedOutMain
	return


PryceEscortedOut3::
	setvar VAR_TEMP_2, 3
	goto PryceEscortedOutMain
	return


PryceEscortedOut4::
	setvar VAR_TEMP_2, 4
	goto PryceEscortedOutMain
	return


PryceEscortedOut5::
	setvar VAR_TEMP_2, 5
	goto PryceEscortedOutMain
	return


PryceEscortedOut6::
	setvar VAR_TEMP_2, 6
	goto PryceEscortedOutMain
	return


PryceEscortedOut7::
	setvar VAR_TEMP_2, 7
	goto PryceEscortedOutMain
	return


PryceEscortedOut8::
	setvar VAR_TEMP_2, 8
	goto PryceEscortedOutMain
	return


PryceEscortedOutMain::
	lock
	delay 30
	facefollowernpc
	delay 10
	setvar VAR_0x8004, 10
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PryceEscortedOutMain_2
	bufferstring STR_VAR_1, PryceEscortedOutMain_Text_1
PryceEscortedOutMain_1:
	goto_if_set FLAG_FIND_PRYCE_QUEST, PryceEscortedOutMain_6
	msgbox OldManGivesReward
	call RewardBP
	msgbox ThanksForEscortingOldManOut, MSGBOX_AUTOCLOSE
PryceEscortedOutMain_5:
	switch VAR_TEMP_2
	case 1, PryceEscortedOutMain_11
	case 2, PryceEscortedOutMain_12
	case 3, PryceEscortedOutMain_13
	case 4, PryceEscortedOutMain_14
	case 5, PryceEscortedOutMain_15
	case 6, PryceEscortedOutMain_16
	case 7, PryceEscortedOutMain_17
	case 8, PryceEscortedOutMain_18
PryceEscortedOutMain_9:
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	destroyfollowernpc
	delay 60
	clearflag FLAG_ESCORTING_PRYCE
	clearflag FLAG_TEMP_1
	setflag FLAG_PRYCE_ESCORTED
	release
	return

PryceEscortedOutMain_2:
	bufferstring STR_VAR_1, PryceEscortedOutMain_Text_0
	goto PryceEscortedOutMain_1

PryceEscortedOutMain_6:
	msgbox OldManGivesReward
	call RewardBP
	msgbox ThanksForEscortingPryceOut, MSGBOX_AUTOCLOSE
	goto PryceEscortedOutMain_5

PryceEscortedOutMain_11:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_0
	applymovement 0xFF, PryceEscortedOutMain_Movement_1
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_12:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_0
	applymovement 0xFF, PryceEscortedOutMain_Movement_1
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_13:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_2
	applymovement 0xFF, PryceEscortedOutMain_Movement_3
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_14:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_2
	applymovement 0xFF, PryceEscortedOutMain_Movement_3
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_15:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_4
	applymovement 0xFF, PryceEscortedOutMain_Movement_5
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_16:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_4
	applymovement 0xFF, PryceEscortedOutMain_Movement_5
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_17:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_6
	applymovement 0xFF, PryceEscortedOutMain_Movement_7
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_18:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_6
	applymovement 0xFF, PryceEscortedOutMain_Movement_7
	goto PryceEscortedOutMain_9


PryceEscortedOutMain_Movement_0:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PryceEscortedOutMain_Movement_1:
	delay_16
	walk_in_place_up
	delay_16
	walk_in_place_right
	step_end

PryceEscortedOutMain_Movement_2:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PryceEscortedOutMain_Movement_3:
	delay_16
	walk_in_place_down
	delay_16
	walk_in_place_right
	step_end

PryceEscortedOutMain_Movement_4:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PryceEscortedOutMain_Movement_5:
	delay_16
	walk_in_place_right
	delay_16
	walk_in_place_down
	step_end

PryceEscortedOutMain_Movement_6:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PryceEscortedOutMain_Movement_7:
	delay_16
	walk_in_place_left
	delay_16
	walk_in_place_down
	step_end

PryceEscortedOutMain_Text_0:
	.string "lad$"

PryceEscortedOutMain_Text_1:
	.string "lass$"

Wastes_Hiker_NoRope::
	.string "It can be easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Take this, and don't be afraid to\n"
	.string "use it if you ever find yourself lost.$"

Wastes_Hiker_YesRope::
	.string "It's easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Make sure you have an Escape Rope or\n"
	.string "a Pokémon with the move Fly with you.$"

ThanksForEscortingPryceOut::
	.string "I believe you were looking to\n"
	.string "challenge our gym over at\l"
	.string "Frosthearth City, yes?\p"
	.string "I'll head back to the gym and get\n"
	.string "all set up.\p"
	.string "Drop by when you're ready, and let's\n"
	.string "see if these old bones can still\l"
	.string "keep up with a brisk {STR_VAR_1} like you.$"

OldManGivesReward::
	.string "Old man: Looks like we managed to\n"
	.string "make our way out of that maze.\p"
	.string "Thank you {STR_VAR_1}.\p"
	.string "I don't know how long I would've\n"
	.string "been stuck there without your aid.\p"
	.string "I don't have much I can offer you\n"
	.string "as a reward, but hopefully this\l"
	.string "will suffice.$"

ThanksForEscortingOldManOut::
	.string "I need to head back home now.\n"
	.string "Thank you again for the help.\p"
	.string "Maybe we'll meet again one day\n"
	.string "in a less hostile environment.$"
