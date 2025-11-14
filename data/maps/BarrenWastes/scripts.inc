BarrenWastes_MapScripts::
# 2 "data/maps/BarrenWastes/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BarrenWastes/scripts.pory"
	setescapewarp MAP_BARREN_WASTES, 14, 6
# 4 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_HOUR_OVERRIDE, 0
# 5 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_MINUTE_OVERRIDE, 0
	return


Wastes_Hiker::
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/maps/BarrenWastes/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Wastes_Hiker_2
# 14 "data/maps/BarrenWastes/scripts.pory"
	lock
# 15 "data/maps/BarrenWastes/scripts.pory"
	faceplayer
# 16 "data/maps/BarrenWastes/scripts.pory"
	msgbox Wastes_Hiker_NoRope
# 17 "data/maps/BarrenWastes/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 18 "data/maps/BarrenWastes/scripts.pory"
	release
	end

Wastes_Hiker_2:
# 11 "data/maps/BarrenWastes/scripts.pory"
	msgbox Wastes_Hiker_YesRope, MSGBOX_NPC
	end


PryceEscortedOut1::
# 36 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 1
# 37 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut2::
# 40 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 2
# 41 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut3::
# 44 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 3
# 45 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut4::
# 48 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 4
# 49 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut5::
# 52 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 5
# 53 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut6::
# 56 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 6
# 57 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut7::
# 60 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 7
# 61 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOut8::
# 64 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_TEMP_2, 8
# 65 "data/maps/BarrenWastes/scripts.pory"
	goto PryceEscortedOutMain
	return


PryceEscortedOutMain::
# 69 "data/maps/BarrenWastes/scripts.pory"
	lock
# 70 "data/maps/BarrenWastes/scripts.pory"
	delay 30
# 71 "data/maps/BarrenWastes/scripts.pory"
	facefollowernpc
# 72 "data/maps/BarrenWastes/scripts.pory"
	delay 10
# 73 "data/maps/BarrenWastes/scripts.pory"
	setvar VAR_0x8004, 10
	checkplayergender
# 0 "data/maps/BarrenWastes/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PryceEscortedOutMain_2
# 78 "data/maps/BarrenWastes/scripts.pory"
	bufferstring STR_VAR_1, PryceEscortedOutMain_Text_1
PryceEscortedOutMain_1:
# 80 "data/maps/BarrenWastes/scripts.pory"
	goto_if_set FLAG_FIND_PRYCE_QUEST, PryceEscortedOutMain_6
# 86 "data/maps/BarrenWastes/scripts.pory"
	msgbox OldManGivesReward
# 87 "data/maps/BarrenWastes/scripts.pory"
	call RewardBP
# 88 "data/maps/BarrenWastes/scripts.pory"
	msgbox ThanksForEscortingOldManOut, MSGBOX_AUTOCLOSE
PryceEscortedOutMain_5:
# 90 "data/maps/BarrenWastes/scripts.pory"
	switch VAR_TEMP_2
# 91 "data/maps/BarrenWastes/scripts.pory"
	case 1, PryceEscortedOutMain_11
# 94 "data/maps/BarrenWastes/scripts.pory"
	case 2, PryceEscortedOutMain_12
# 97 "data/maps/BarrenWastes/scripts.pory"
	case 3, PryceEscortedOutMain_13
# 100 "data/maps/BarrenWastes/scripts.pory"
	case 4, PryceEscortedOutMain_14
# 103 "data/maps/BarrenWastes/scripts.pory"
	case 5, PryceEscortedOutMain_15
# 106 "data/maps/BarrenWastes/scripts.pory"
	case 6, PryceEscortedOutMain_16
# 109 "data/maps/BarrenWastes/scripts.pory"
	case 7, PryceEscortedOutMain_17
# 112 "data/maps/BarrenWastes/scripts.pory"
	case 8, PryceEscortedOutMain_18
PryceEscortedOutMain_9:
# 116 "data/maps/BarrenWastes/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 117 "data/maps/BarrenWastes/scripts.pory"
	destroyfollowernpc
# 118 "data/maps/BarrenWastes/scripts.pory"
	delay 60
# 119 "data/maps/BarrenWastes/scripts.pory"
	clearflag FLAG_ESCORTING_PRYCE
# 120 "data/maps/BarrenWastes/scripts.pory"
	clearflag FLAG_TEMP_1
# 121 "data/maps/BarrenWastes/scripts.pory"
	setflag FLAG_PRYCE_ESCORTED
# 122 "data/maps/BarrenWastes/scripts.pory"
	release
	return

PryceEscortedOutMain_2:
# 75 "data/maps/BarrenWastes/scripts.pory"
	bufferstring STR_VAR_1, PryceEscortedOutMain_Text_0
	goto PryceEscortedOutMain_1

PryceEscortedOutMain_6:
# 81 "data/maps/BarrenWastes/scripts.pory"
	msgbox OldManGivesReward
# 82 "data/maps/BarrenWastes/scripts.pory"
	call RewardBP
# 83 "data/maps/BarrenWastes/scripts.pory"
	msgbox ThanksForEscortingPryceOut, MSGBOX_AUTOCLOSE
	goto PryceEscortedOutMain_5

PryceEscortedOutMain_11:
# 92 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_0
# 93 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_1
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_12:
# 95 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_0
# 96 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_1
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_13:
# 98 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_2
# 99 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_3
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_14:
# 101 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_2
# 102 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_3
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_15:
# 104 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_4
# 105 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_5
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_16:
# 107 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_4
# 108 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_5
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_17:
# 110 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_6
# 111 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_7
	goto PryceEscortedOutMain_9

PryceEscortedOutMain_18:
# 113 "data/maps/BarrenWastes/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceEscortedOutMain_Movement_6
# 114 "data/maps/BarrenWastes/scripts.pory"
	applymovement LOCALID_PLAYER, PryceEscortedOutMain_Movement_7
	goto PryceEscortedOutMain_9


# 92 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_0:
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_up
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 92 "data/maps/BarrenWastes/scripts.pory"
	walk_right
	step_end

# 93 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_1:
# 93 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 93 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_up
# 93 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 93 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_right
	step_end

# 98 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_2:
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 98 "data/maps/BarrenWastes/scripts.pory"
	walk_right
	step_end

# 99 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_3:
# 99 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 99 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_down
# 99 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 99 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_right
	step_end

# 104 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_4:
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_right
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 104 "data/maps/BarrenWastes/scripts.pory"
	walk_down
	step_end

# 105 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_5:
# 105 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 105 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_right
# 105 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 105 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_down
	step_end

# 110 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_6:
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_left
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
# 110 "data/maps/BarrenWastes/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/BarrenWastes/scripts.pory"
PryceEscortedOutMain_Movement_7:
# 111 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 111 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_left
# 111 "data/maps/BarrenWastes/scripts.pory"
	delay_16
# 111 "data/maps/BarrenWastes/scripts.pory"
	walk_in_place_down
	step_end

PryceEscortedOutMain_Text_0:
# 75 "data/maps/BarrenWastes/scripts.pory"
	.string "lad$"

PryceEscortedOutMain_Text_1:
# 78 "data/maps/BarrenWastes/scripts.pory"
	.string "lass$"

Wastes_Hiker_NoRope::
# 22 "data/maps/BarrenWastes/scripts.pory"
	.string "It can be easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Take this, and don't be afraid to\n"
	.string "use it if you ever find yourself lost.$"

Wastes_Hiker_YesRope::
# 28 "data/maps/BarrenWastes/scripts.pory"
	.string "It's easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Make sure you have an Escape Rope or\n"
	.string "a Pokémon with the move Fly with you.$"

ThanksForEscortingPryceOut::
# 125 "data/maps/BarrenWastes/scripts.pory"
	.string "I believe you were looking to\n"
	.string "challenge our gym over at\l"
	.string "Frosthearth City, yes?\p"
	.string "I'll head back to the gym and get\n"
	.string "all set up.\p"
	.string "Drop by when you're ready, and let's\n"
	.string "see if these old bones can still\l"
	.string "keep up with a brisk {STR_VAR_1} like you.$"

OldManGivesReward::
# 135 "data/maps/BarrenWastes/scripts.pory"
	.string "Old man: Looks like we managed to\n"
	.string "make our way out of that maze.\p"
	.string "Thank you {STR_VAR_1}.\p"
	.string "I don't know how long I would've\n"
	.string "been stuck there without your aid.\p"
	.string "I don't have much I can offer you\n"
	.string "as a reward, but hopefully this\l"
	.string "will suffice.$"

ThanksForEscortingOldManOut::
# 145 "data/maps/BarrenWastes/scripts.pory"
	.string "I need to head back home now.\n"
	.string "Thank you again for the help.\p"
	.string "Maybe we'll meet again one day\n"
	.string "in a less hostile environment.$"
