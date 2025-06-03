BerryFields_MapScripts::
# 2 "data/maps/BerryFields/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BerryFields_FlagControl
	.byte 0


BerryFields_FlagControl::
# 6 "data/maps/BerryFields/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 5
	goto_if_ge BerryFields_FlagControl_1
	return

BerryFields_FlagControl_1:
# 7 "data/maps/BerryFields/scripts.pory"
	setflag FLAG_TEMP_1
	return


BerryFields_Rocket::
# 12 "data/maps/BerryFields/scripts.pory"
	lock
# 13 "data/maps/BerryFields/scripts.pory"
	faceplayer
# 14 "data/maps/BerryFields/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 15 "data/maps/BerryFields/scripts.pory"
	msgbox BerryFields_GruntIntro
# 16 "data/maps/BerryFields/scripts.pory"
	trainerbattle_no_intro TRAINER_R15_TR18_BERRYROCKET, BerryFields_GruntDefeat
# 17 "data/maps/BerryFields/scripts.pory"
	msgbox IWasDecoy
# 18 "data/maps/BerryFields/scripts.pory"
	closemessage
# 19 "data/maps/BerryFields/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq BerryFields_Rocket_2
# 23 "data/maps/BerryFields/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq BerryFields_Rocket_3
# 28 "data/maps/BerryFields/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BerryFields_PushPlayerAsideForGrunt2
# 29 "data/maps/BerryFields/scripts.pory"
	applymovement 13, GruntEscapesNorth
BerryFields_Rocket_1:
# 31 "data/maps/BerryFields/scripts.pory"
	waitmovement 0
# 32 "data/maps/BerryFields/scripts.pory"
	removeobject 13
# 33 "data/maps/BerryFields/scripts.pory"
	removeobject 14
# 34 "data/maps/BerryFields/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 5
# 35 "data/maps/BerryFields/scripts.pory"
	release
	return

BerryFields_Rocket_2:
# 20 "data/maps/BerryFields/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BerryFields_PushPlayerAsideForGrunt
# 21 "data/maps/BerryFields/scripts.pory"
	applymovement 13, GruntEscapesNorth
	goto BerryFields_Rocket_1

BerryFields_Rocket_3:
# 24 "data/maps/BerryFields/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BerryFields_PushPlayerAsideForGrunt
# 25 "data/maps/BerryFields/scripts.pory"
	applymovement 13, GruntEscapesNorth
	goto BerryFields_Rocket_1


# 37 "data/maps/BerryFields/scripts.pory"
BerryFields_PushPlayerAsideForGrunt:
# 38 "data/maps/BerryFields/scripts.pory"
	face_right
# 39 "data/maps/BerryFields/scripts.pory"
	lock_facing_direction
# 40 "data/maps/BerryFields/scripts.pory"
	walk_left
# 41 "data/maps/BerryFields/scripts.pory"
	unlock_facing_direction
# 42 "data/maps/BerryFields/scripts.pory"
	step_end

# 44 "data/maps/BerryFields/scripts.pory"
BerryFields_PushPlayerAsideForGrunt2:
# 45 "data/maps/BerryFields/scripts.pory"
	face_left
# 46 "data/maps/BerryFields/scripts.pory"
	lock_facing_direction
# 47 "data/maps/BerryFields/scripts.pory"
	walk_right
# 48 "data/maps/BerryFields/scripts.pory"
	unlock_facing_direction
# 49 "data/maps/BerryFields/scripts.pory"
	walk_in_place_faster_up
# 50 "data/maps/BerryFields/scripts.pory"
	walk_in_place_faster_right
# 51 "data/maps/BerryFields/scripts.pory"
	step_end

# 76 "data/maps/BerryFields/scripts.pory"
GruntEscapesNorth:
# 77 "data/maps/BerryFields/scripts.pory"
	walk_fast_up
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
# 78 "data/maps/BerryFields/scripts.pory"
	walk_fast_right
	step_end

Berryfields_Poochyena::
# 82 "data/maps/BerryFields/scripts.pory"
	lock
# 83 "data/maps/BerryFields/scripts.pory"
	faceplayer
# 84 "data/maps/BerryFields/scripts.pory"
	waitse
# 85 "data/maps/BerryFields/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 86 "data/maps/BerryFields/scripts.pory"
	msgbox BerryFields_Poochyena_Text, MSGBOX_DEFAULT
# 87 "data/maps/BerryFields/scripts.pory"
	waitmoncry
# 88 "data/maps/BerryFields/scripts.pory"
	release
	end


Berryfields_Blockade1::
# 100 "data/maps/BerryFields/scripts.pory"
	setvar VAR_TEMP_1, 1
# 101 "data/maps/BerryFields/scripts.pory"
	goto Berryfields_Blockade
	return


Berryfields_Blockade2::
# 104 "data/maps/BerryFields/scripts.pory"
	setvar VAR_TEMP_1, 2
# 105 "data/maps/BerryFields/scripts.pory"
	goto Berryfields_Blockade
	return


Berryfields_Blockade::
# 108 "data/maps/BerryFields/scripts.pory"
	lock
# 109 "data/maps/BerryFields/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Berryfields_Blockade_2
# 113 "data/maps/BerryFields/scripts.pory"
	turnobject 14, DIR_EAST
Berryfields_Blockade_1:
# 115 "data/maps/BerryFields/scripts.pory"
	playse SE_PIN
# 116 "data/maps/BerryFields/scripts.pory"
	safefollow
# 117 "data/maps/BerryFields/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 118 "data/maps/BerryFields/scripts.pory"
	waitmovement 0
# 119 "data/maps/BerryFields/scripts.pory"
	delay 48
# 120 "data/maps/BerryFields/scripts.pory"
	waitse
# 121 "data/maps/BerryFields/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 122 "data/maps/BerryFields/scripts.pory"
	msgbox BerryFields_Poochyena_Text, MSGBOX_DEFAULT
# 123 "data/maps/BerryFields/scripts.pory"
	closemessage
# 124 "data/maps/BerryFields/scripts.pory"
	waitmoncry
# 125 "data/maps/BerryFields/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 126 "data/maps/BerryFields/scripts.pory"
	waitmovement 0
# 127 "data/maps/BerryFields/scripts.pory"
	turnobject 14, DIR_NORTH
# 128 "data/maps/BerryFields/scripts.pory"
	release
	end

Berryfields_Blockade_2:
# 110 "data/maps/BerryFields/scripts.pory"
	turnobject 14, DIR_WEST
	goto Berryfields_Blockade_1


BerryFields_GruntIntro::
# 54 "data/maps/BerryFields/scripts.pory"
	.string "How did you find me?!\p"
	.string "Grr, it doesn't matter!\p"
	.string "I'll teach you not to meddle in other\n"
	.string "people's business!$"

BerryFields_GruntDefeat::
# 60 "data/maps/BerryFields/scripts.pory"
	.string "No!\n"
	.string "This isn't possible!$"

IWasDecoy::
# 64 "data/maps/BerryFields/scripts.pory"
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
# 92 "data/maps/BerryFields/scripts.pory"
	.string "Poochyena: Bow! Bowwow!\p"
	.string "… … … …\p"
	.string "Looks like the Poochyena isn't letting\n"
	.string "anyone through…$"
