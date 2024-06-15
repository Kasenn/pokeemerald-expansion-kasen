BerryFields_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BerryFields_FlagControl
	.byte 0


BerryFields_FlagControl::
	compare VAR_ROUTE14_ROCKET_EVENT, 5
	goto_if_ge BerryFields_FlagControl_1
	return

BerryFields_FlagControl_1:
	setflag FLAG_TEMP_1
	return


BerryFields_Rocket::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox BerryFields_GruntIntro
	trainerbattle_no_intro TRAINER_R15_TR18_BERRYROCKET, BerryFields_GruntDefeat
	msgbox IWasDecoy
	closemessage
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq BerryFields_Rocket_2
	compare VAR_FACING, DIR_EAST
	goto_if_eq BerryFields_Rocket_3
	applymovement OBJ_EVENT_ID_PLAYER, BerryFields_PushPlayerAsideForGrunt2
	applymovement 13, GruntEscapesNorth
BerryFields_Rocket_1:
	waitmovement 0
	removeobject 13
	removeobject 14
	setvar VAR_ROUTE14_ROCKET_EVENT, 5
	release
	return

BerryFields_Rocket_2:
	applymovement OBJ_EVENT_ID_PLAYER, BerryFields_PushPlayerAsideForGrunt
	applymovement 13, GruntEscapesNorth
	goto BerryFields_Rocket_1

BerryFields_Rocket_3:
	applymovement OBJ_EVENT_ID_PLAYER, BerryFields_PushPlayerAsideForGrunt
	applymovement 13, GruntEscapesNorth
	goto BerryFields_Rocket_1


BerryFields_PushPlayerAsideForGrunt:
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

BerryFields_PushPlayerAsideForGrunt2:
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	walk_in_place_faster_up
	walk_in_place_faster_right
	step_end

GruntEscapesNorth:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Berryfields_Poochyena::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox BerryFields_Poochyena_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Berryfields_Blockade1::
	setvar VAR_TEMP_1, 1
	goto Berryfields_Blockade
	return


Berryfields_Blockade2::
	setvar VAR_TEMP_1, 2
	goto Berryfields_Blockade
	return


Berryfields_Blockade::
	lock
	compare VAR_TEMP_1, 1
	goto_if_eq Berryfields_Blockade_2
	turnobject 14, DIR_EAST
Berryfields_Blockade_1:
	playse SE_PIN
	applymovement 14, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox BerryFields_Poochyena_Text, MSGBOX_DEFAULT
	closemessage
	waitmoncry
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	turnobject 14, DIR_NORTH
	release
	end

Berryfields_Blockade_2:
	turnobject 14, DIR_WEST
	goto Berryfields_Blockade_1


BerryFields_GruntIntro::
	.string "How did you find me?!\p"
	.string "Grr, it doesn't matter!\p"
	.string "I'll teach you not to meddle in other\n"
	.string "people's business!$"

BerryFields_GruntDefeat::
	.string "No!\n"
	.string "This isn't possible!$"

IWasDecoy::
	.string "Hahaha!\p"
	.string "Jokes on you, but I was merely\n"
	.string "a decoy!\p"
	.string "See? I have nothing on me!\p"
	.string "If you're looking for the real culprit,\n"
	.string "then I'm sorry to disappoint you\l"
	.string "because they've already made their\l"
	.string "way to Amberock Town.\p"
	.string "You'll never find them in there!$"

BerryFields_Poochyena_Text::
	.string "Poochyena: Bow! Bowwow!\p"
	.string "… … … …\p"
	.string "Looks like the Poochyena isn't letting\n"
	.string "anyone through…$"
