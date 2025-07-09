AmberockTown_PlayerPier_MapScripts::
# 2 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	setflag FLAG_TEMP_A
	return


ClayTooStrong::
# 10 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	msgbox ClayTooStrong_Text, MSGBOX_NPC
	return


ClayTooStrong2::
# 13 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	msgbox ClayTooStrong2_Text, MSGBOX_NPC
	return


ClayTooStrong3::
# 22 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	msgbox ClayTooStrong3_Text, MSGBOX_NPC
	return


ClayTooStrong4::
# 29 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	msgbox ClayTooStrong4_Text, MSGBOX_NPC
	return


ClayTooStrong5::
# 35 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	msgbox ClayTooStrong5_Text, MSGBOX_NPC
	return


GiovanniEscapesFactory::
# 41 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	lock
# 42 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	safefollow
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	applymovement LOCALID_PLAYER, GiovanniEscapesFactory_Movement_0
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	applymovement 2, GiovanniEscapesFactory_Movement_1
# 45 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	delay 16
# 46 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	applymovement 1, GiovanniEscapesFactory_Movement_1
# 47 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	waitmovement LOCALID_PLAYER
# 48 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	waitmovement 1
# 49 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	msgbox ClayWasTooLate, MSGBOX_AUTOCLOSE
# 50 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	delay 8
# 51 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 52 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	turnobject 5, DIR_NORTH
# 53 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	delay 8
# 54 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	msgbox ClayWillTakeRockets, MSGBOX_AUTOCLOSE
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	applymovement 5, GiovanniEscapesFactory_Movement_2
# 56 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	waitmovement 0
# 57 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	removeobjectbyflag FLAG_TEMP_A
# 58 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
# 59 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	release
	return


# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
GiovanniEscapesFactory_Movement_0:
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_left
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_left
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_left
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_left
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_left
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_up
# 43 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_left
	step_end

# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
GiovanniEscapesFactory_Movement_1:
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_slow_left
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_slow_left
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_slow_left
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_slow_left
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_slow_left
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_slow_left
# 44 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_slow_left
	step_end

# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
GiovanniEscapesFactory_Movement_2:
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
# 55 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	walk_right
	step_end

ClayTooStrong_Text::
# 15 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	.string "Who was that guy?$"

ClayTooStrong2_Text::
# 18 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	.string "Way too strong…$"

ClayTooStrong3_Text::
# 24 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	.string "We did our duty, and\n"
	.string "that's all that matters.$"

ClayTooStrong4_Text::
# 31 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	.string "We never stood a chance…$"

ClayTooStrong5_Text::
# 37 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	.string "Hahah! You're too late!$"

ClayWasTooLate::
# 61 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	.string "Clay: Tried stopping them,\n"
	.string "but they just kept throwing\l"
	.string "all their weak grunts at me\l"
	.string "like they were nothing but pawns.$"

ClayWillTakeRockets::
# 67 "data/maps/AmberockTown_PlayerPier/scripts.pory"
	.string "I reckon the cops'll be\n"
	.string "here soon.\p"
	.string "I'll make sure these scoundrels\n"
	.string "get what they deserve.\p"
	.string "I assume you found those papers\n"
	.string "you were lookin' for?\p"
	.string "You should return them with haste.\p"
	.string "Maybe the scientists might figure\n"
	.string "out a clue about Team Rocket's\l"
	.string "next destination.$"
