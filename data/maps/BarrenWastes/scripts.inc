BarrenWastes_MapScripts::
# 2 "data/maps/BarrenWastes/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BarrenWastes/scripts.pory"
	setescapewarp MAP_BARREN_WASTES, 14, 6
	return


Wastes_Hiker::
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/maps/BarrenWastes/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Wastes_Hiker_2
# 12 "data/maps/BarrenWastes/scripts.pory"
	lock
# 13 "data/maps/BarrenWastes/scripts.pory"
	faceplayer
# 14 "data/maps/BarrenWastes/scripts.pory"
	msgbox Wastes_Hiker_NoRope
# 15 "data/maps/BarrenWastes/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 16 "data/maps/BarrenWastes/scripts.pory"
	release
	end

Wastes_Hiker_2:
# 9 "data/maps/BarrenWastes/scripts.pory"
	msgbox Wastes_Hiker_YesRope, MSGBOX_NPC
	end


PryceEscortedOut1::
# 34 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 1
# 35 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut2::
# 38 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 2
# 39 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut3::
# 42 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 3
# 43 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut4::
# 46 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 4
# 47 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut5::
# 50 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 5
# 51 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut6::
# 54 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 6
# 55 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut7::
# 58 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 7
# 59 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut8::
# 62 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 8
# 63 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOutMain::
# 67 "data/maps/BarrenWastes/scripts.pory"
	lock
# 68 "data/maps/BarrenWastes/scripts.pory"
	delay 30
# 69 "data/maps/BarrenWastes/scripts.pory"
	facefollowernpc
# 70 "data/maps/BarrenWastes/scripts.pory"
	delay 10
# 71 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_0x8004, 10
	checkplayergender
# 0 "data/maps/BarrenWastes/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PryceEscortedOutMain_2
# 76 "data/maps/BarrenWastes/scripts.pory"
	bufferstring STR_VAR_1, PryceEscortedOutMain_Text_1
PryceEscortedOutMain_1:
# 78 "data/maps/BarrenWastes/scripts.pory"
	goto_if_set FLAG_FIND_PRYCE_QUEST, PryceEscortedOutMain_6
# 84 "data/maps/BarrenWastes/scripts.pory"
	msgbox OldManGivesReward
# 85 "data/maps/BarrenWastes/scripts.pory"
	call RewardBP
# 86 "data/maps/BarrenWastes/scripts.pory"
	msgbox ThanksForEscortingOldManOut, MSGBOX_AUTOCLOSE
PryceEscortedOutMain_5:
# 88 "data/maps/BarrenWastes/scripts.pory"
	switch VAR_TEMP_2
# 89 "data/maps/BarrenWastes/scripts.pory"
	case 1, PryceEscortedOutMain_11
# 92 "data/maps/BarrenWastes/scripts.pory"
	case 2, PryceEscortedOutMain_12
# 95 "data/maps/BarrenWastes/scripts.pory"
	case 3, PryceEscortedOutMain_13
# 98 "data/maps/BarrenWastes/scripts.pory"
	case 4, PryceEscortedOutMain_14
# 101 "data/maps/BarrenWastes/scripts.pory"
	case 5, PryceEscortedOutMain_15
# 104 "data/maps/BarrenWastes/scripts.pory"
	case 6, PryceEscortedOutMain_16
# 107 "data/maps/BarrenWastes/scripts.pory"
	case 7, PryceEscortedOutMain_17
# 110 "data/maps/BarrenWastes/scripts.pory"
	case 8, PryceEscortedOutMain_18
PryceEscortedOutMain_9:
# 114 "data/maps/BarrenWastes/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 115 "data/maps/BarrenWastes/scripts.pory"
	destroyfollowernpc
# 116 "data/maps/BarrenWastes/scripts.pory"
	delay 60
# 117 "data/maps/BarrenWastes/scripts.pory"
	clearflag FLAG_ESCORTING_PRYCE
# 118 "data/maps/BarrenWastes/scripts.pory"
	clearflag FLAG_TEMP_1
# 119 "data/maps/BarrenWastes/scripts.pory"
	setflag FLAG_PRYCE_ESCORTED
# 120 "data/maps/BarrenWastes/scripts.pory"
	release
	return

PryceEscortedOutMain_2:
# 73 "data/maps/BarrenWastes/scripts.pory"
	bufferstring STR_VAR_1, PryceEscortedOutMain_Text_0
	goto PryceEscortedOutMain_1

PryceEscortedOutMain_6:
# 79 "data/maps/BarrenWastes/scripts.pory"
	msgbox OldManGivesReward
# 80 "data/maps/BarrenWastes/scripts.pory"
	call RewardBP
# 81 "data/maps/BarrenWastes/scripts.pory"
	msgbox ThanksForEscortingPryceOut, MSGBOX_AUTOCLOSE
	goto PryceEscortedOutMain_5

PryceEscortedOutMain_11:
# 90 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_0
# 91 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_1
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_12:
# 93 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_0
# 94 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_1
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_13:
# 96 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_2
# 97 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_3
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_14:
# 99 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_2
# 100 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_3
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_15:
# 102 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_4
# 103 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_5
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_16:
# 105 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_4
# 106 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_5
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_17:
# 108 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_6
# 109 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_7
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_18:
# 111 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_6
# 112 "data/maps/BarrenWastes/scripts.pory"
	applymovement 0xFF, PryceEscortedOutMain_Movement_7
	goto PryceEscortedOutMain_9


# 90 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_0:
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_up
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 90 "data/maps/BarrenWastes/scripts.pory"
	walk_right
	step_end

# 91 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_1:
# 91 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 91 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_up
# 91 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 91 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_right
	step_end

# 96 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_2:
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 96 "data/maps/BarrenWastes/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_3:
# 97 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 97 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_down
# 97 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 97 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_right
	step_end

# 102 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_4:
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 102 "data/maps/BarrenWastes/scripts.pory"
	walk_down
	step_end

# 103 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_5:
# 103 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 103 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_right
# 103 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 103 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_down
	step_end

# 108 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_6:
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_left
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 108 "data/maps/BarrenWastes/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_7:
# 109 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 109 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_left
# 109 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 109 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_down
	step_end

PryceEscortedOutMain_Text_0:
# 73 "data/maps/BarrenWastes/scripts.pory"
	.string "lad$"

PryceEscortedOutMain_Text_1:
# 76 "data/maps/BarrenWastes/scripts.pory"
	.string "lass$"

Wastes_Hiker_NoRope::
# 20 "data/maps/BarrenWastes/scripts.pory"
	.string "It can be easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Take this, and don't be afraid to\n"
	.string "use it if you ever find yourself lost.$"

Wastes_Hiker_YesRope::
# 26 "data/maps/BarrenWastes/scripts.pory"
	.string "It's easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Make sure you have an Escape Rope or\n"
	.string "a Pokémon with the move Fly with you.$"

ThanksForEscortingPryceOut::
# 123 "data/maps/BarrenWastes/scripts.pory"
	.string "I believe you were looking to\n"
	.string "challenge our gym over at\l"
	.string "Frosthearth City, yes?\p"
	.string "I'll head back to the gym and get\n"
	.string "all set up.\p"
	.string "Drop by when you're ready, and let's\n"
	.string "see if these old bones can still\l"
	.string "keep up with a brisk {STR_VAR_1} like you.$"

OldManGivesReward::
# 133 "data/maps/BarrenWastes/scripts.pory"
	.string "Old man: Looks like we managed to\n"
	.string "make our way out of that maze.\p"
	.string "Thank you {STR_VAR_1}.\p"
	.string "I don't know how long I would've\n"
	.string "been stuck there without your aid.\p"
	.string "I don't have much I can offer you\n"
	.string "as a reward, but hopefully this\l"
	.string "will suffice.$"

ThanksForEscortingOldManOut::
# 143 "data/maps/BarrenWastes/scripts.pory"
	.string "I need to head back home now.\n"
	.string "Thank you again for the help.\p"
	.string "Maybe we'll meet again one day\n"
	.string "in a less hostile environment.$"
