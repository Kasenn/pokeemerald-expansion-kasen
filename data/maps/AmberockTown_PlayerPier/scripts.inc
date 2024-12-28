AmberockTown_PlayerPier_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AmberockTown_PlayerPier_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_A
	return


ClayTooStrong::
	msgbox ClayTooStrong_Text, MSGBOX_NPC
	return


ClayTooStrong2::
	msgbox ClayTooStrong2_Text, MSGBOX_NPC
	return


ClayTooStrong3::
	msgbox ClayTooStrong3_Text, MSGBOX_NPC
	return


ClayTooStrong4::
	msgbox ClayTooStrong4_Text, MSGBOX_NPC
	return


ClayTooStrong5::
	msgbox ClayTooStrong5_Text, MSGBOX_NPC
	return


GiovanniEscapesFactory::
	lock
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, GiovanniEscapesFactory_Movement_0
	applymovement 2, GiovanniEscapesFactory_Movement_1
	delay 16
	applymovement 1, GiovanniEscapesFactory_Movement_1
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement 1
	msgbox ClayWasTooLate, MSGBOX_AUTOCLOSE
	delay 8
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	turnobject 5, DIR_NORTH
	delay 8
	msgbox ClayWillTakeRockets, MSGBOX_AUTOCLOSE
	applymovement 5, GiovanniEscapesFactory_Movement_2
	waitmovement 0
	removeobjectbyflag FLAG_TEMP_A
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	release
	return


GiovanniEscapesFactory_Movement_0:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	step_end

GiovanniEscapesFactory_Movement_1:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

GiovanniEscapesFactory_Movement_2:
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

ClayTooStrong_Text::
	.string "Who was that guy?$"

ClayTooStrong2_Text::
	.string "Way too strong…$"

ClayTooStrong3_Text::
	.string "We did our duty, and\n"
	.string "that's all that matters.$"

ClayTooStrong4_Text::
	.string "We never stood a chance…$"

ClayTooStrong5_Text::
	.string "Hahah! You're too late!$"

ClayWasTooLate::
	.string "Clay: Tried stopping them,\n"
	.string "but they just kept throwing\l"
	.string "all their weak grunts at me\l"
	.string "like they were nothing but pawns.$"

ClayWillTakeRockets::
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
