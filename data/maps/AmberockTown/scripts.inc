AmberockTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_FlagControl
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PaperVisibility
	.byte 0


Amberock_FlagControl::
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_2
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_FlagControl_2
Amberock_FlagControl_1:
	goto_if_set FLAG_BADGE05_GET, Amberock_FlagControl_5
	return

Amberock_FlagControl_2:
	setflag FLAG_TEMP_1
	goto Amberock_FlagControl_1

Amberock_FlagControl_4:
	setobjectxyperm 1, 33, 11
	clearflag FLAG_TEMP_2
	return

Amberock_FlagControl_5:
	goto_if_unset FLAG_RECEIVED_HM_SURF, Amberock_FlagControl_4
	return


Amberock_PaperVisibility::
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_PaperVisibility_1
	return

Amberock_PaperVisibility_1:
	setmetatile 27, 10, 0x128, FALSE
	setmetatile 27, 12, 0x189, FALSE
	setmetatile 26, 12, 0x189, FALSE
	setmetatile 25, 13, 0x170, FALSE
	setmetatile 24, 13, 0x170, FALSE
	setmetatile 23, 13, 0x170, FALSE
	return


Amberock_SurfScientist::
	lock
	faceplayer
	msgbox HereIsSurfHM
	giveitem ITEM_HM03
	msgbox GoGetBackPapers
	closemessage
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Amberock_SurfScientist_2
	applymovement 1, ScientistLeavesStraight
Amberock_SurfScientist_1:
	waitmovement 0
	removeobject 1
	setflag FLAG_RECEIVED_HM_SURF
	release
	return

Amberock_SurfScientist_2:
	applymovement 1, ScientistLeavesDetour
	goto Amberock_SurfScientist_1


ScientistLeavesDetour:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

ScientistLeavesStraight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Amberock_Papers::
	lock
	msgbox PapersOnGround
	removeobject 3
	setmetatile 27, 10, 0x128, FALSE
	special DrawWholeMapView
	closemessage
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	addobject 1
	addobject 2
	delay 60
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_3
	case DIR_WEST, Amberock_Papers_4
	case DIR_EAST, Amberock_Papers_5
Amberock_Papers_1:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 24
	msgbox OurPapers
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_8
	case DIR_WEST, Amberock_Papers_9
	case DIR_EAST, Amberock_Papers_10
Amberock_Papers_6:
	waitmovement 0
	delay 60
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_13
	case DIR_WEST, Amberock_Papers_14
	case DIR_EAST, Amberock_Papers_15
Amberock_Papers_11:
	waitmovement 0
	delay 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_Papers_17
	bufferstring STR_VAR_1, Amberock_Papers_Text_1
Amberock_Papers_16:
	msgbox AcerolaVisitGym
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_22
	case DIR_WEST, Amberock_Papers_23
	case DIR_EAST, Amberock_Papers_24
Amberock_Papers_20:
	waitmovement 0
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
	removeobject 1
	removeobject 2
	delay 15
	release
	return

Amberock_Papers_3:
	applymovement 1, MoveScientist2
	goto Amberock_Papers_1

Amberock_Papers_4:
	setobjectxy 1, 28, 4
	applymovement 1, Walk5Down
	goto Amberock_Papers_1

Amberock_Papers_5:
	setobjectxy 1, 28, 4
	applymovement 1, MoveScientist1
	goto Amberock_Papers_1

Amberock_Papers_8:
	applymovement 1, ScientistLeave2
	goto Amberock_Papers_6

Amberock_Papers_9:
	applymovement 1, Walk5Up
	goto Amberock_Papers_6

Amberock_Papers_10:
	applymovement 1, ScientistLeave1
	goto Amberock_Papers_6

Amberock_Papers_13:
	applymovement 2, MoveScientist2
	goto Amberock_Papers_11

Amberock_Papers_14:
	setobjectxy 2, 28, 4
	applymovement 2, Walk5Down
	goto Amberock_Papers_11

Amberock_Papers_15:
	setobjectxy 2, 28, 4
	applymovement 2, MoveScientist1
	goto Amberock_Papers_11

Amberock_Papers_17:
	bufferstring STR_VAR_1, Amberock_Papers_Text_0
	goto Amberock_Papers_16

Amberock_Papers_22:
	applymovement 2, ScientistLeave2
	goto Amberock_Papers_20

Amberock_Papers_23:
	applymovement 2, Walk5Up
	goto Amberock_Papers_20

Amberock_Papers_24:
	applymovement 2, ScientistLeave1
	goto Amberock_Papers_20


MoveScientist1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

MoveScientist2:
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

ScientistLeave2:
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

ScientistLeave1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

Amberock_Papers_Text_0:
	.string "mister$"

Amberock_Papers_Text_1:
	.string "miss$"

HereIsSurfHM::
	.string "Ah, perfect timing!\p"
	.string "I was able to get my hands on the\n"
	.string "perfect Hidden Machine for this job.\p"
	.string "Here, you should take it.$"

GoGetBackPapers::
	.string "As much as I would like to help you on\n"
	.string "this, I'm just a scientist after all.\p"
	.string "I mean, I don't even have my own\n"
	.string "Pokémon!\p"
	.string "I know this is a lot to ask from\n"
	.string "someone you barely even know,\l"
	.string "but please, recover our research\l"
	.string "material from Team Rocket!\p"
	.string "I had a talk with my colleagues and we\n"
	.string "have unanimously decided that if you\l"
	.string "do this, we'll reward you with\l"
	.string "something special.\p"
	.string "With that said, I need to get back to\n"
	.string "my research.\p"
	.string "When you're done, come meet me back at\n"
	.string "the research center on Route 14.$"

PapersOnGround::
	.string "There seems to be some papers on\n"
	.string "the ground here.\p"
	.string "{PLAYER} picked up the papers.$"

OurPapers::
	.string "Can I see those papers?\p"
	.string "{PLAYER} handed the papers to the\n"
	.string "scientist.\p"
	.string "… … … …\p"
	.string "Yes, these are definitely some of\n"
	.string "the papers that were stolen.\p"
	.string "The culprit must have fled to Amberock\n"
	.string "Town and cut the bridge behind him,\l"
	.string "giving him ample time to hide.\p"
	.string "That scoundrel!\p"
	.string "It would take too long to wait for\n"
	.string "the bridge to be repaired.\p"
	.string "You should prepare your team for\n"
	.string "what lies ahead.\p"
	.string "In the meantime, I'll try to get my\n"
	.string "hands on a Hidden Machine that can\l"
	.string "teach your Pokémon how to carry people\l"
	.string "across water.\p"
	.string "I'll meet you back here once we're\n"
	.string "both ready.$"

AcerolaVisitGym::
	.string "Acerola: I couldn't help overhearing\n"
	.string "parts of your conversation.\p"
	.string "If you're looking to strengthen your\n"
	.string "Pokémon, you should totally check the\l"
	.string "Pokémon Gym over in Drisledge Town!\p"
	.string "I hear it's one of the best gyms in\n"
	.string "all of Sinko!\p"
	.string "Anyway, I need to head back home now.\n"
	.string "See you again, {STR_VAR_1}!$"