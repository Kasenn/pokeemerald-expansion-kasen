FrostfireCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_FROSTFIRE
	switch VAR_FROSTHEARTH_RUFFLET
	case 2, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	case 5, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	case 6, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_FROSTHEARTH_RUFFLET, 0
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	compare VAR_FROSTHEARTH_RUFFLET, 10
	goto_if_eq FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	switch VAR_FROSTHEARTH_HARD_ROCK
	case 0, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	case 1, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	case 2, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	case 3, FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setobjectxyperm 25, 37, 11
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setobjectxyperm 25, 47, 29
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setobjectxyperm 25, 39, 41
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	setobjectxyperm 25, 7, 27
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setobjectxyperm 25, 10, 43
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
	setflag FLAG_TEMP_2
	goto FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
	setflag FLAG_TEMP_1
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
	setobjectxyperm 28, 42, 40
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
	setobjectxyperm 28, 46, 40
	return

FrostfireCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
	setflag FLAG_TEMP_1
	return


FrostHearth_Sign1::
	msgbox FrostHearth_Sign1_Text, MSGBOX_SIGN
	return


FrostHearth_Sign2::
	msgbox FrostHearth_Sign2_Text, MSGBOX_SIGN
	return


FrostHearth_Sign3::
	msgbox FrostHearth_Sign3_Text, MSGBOX_SIGN
	return


FrostHearth_Sign4::
	msgbox FrostHearth_Sign4_Text, MSGBOX_SIGN
	return


FrostHearth_Sign5::
	msgbox FrostHearth_Sign5_Text, MSGBOX_SIGN
	return


FrostHearth_Sign6::
	msgbox FrostHearth_Sign6_Text, MSGBOX_SIGN
	return


FrostHearth_Sign7::
	msgbox FrostHearth_Sign7_Text, MSGBOX_SIGN
	return


Frosthearth_GymUnavailable::
	msgbox Frosthearth_GymUnavailable_Text, MSGBOX_NPC
	setflag FLAG_FIND_PRYCE_QUEST
	return


Frosthearth_Maniac::
	msgbox Frosthearth_Maniac_Text, MSGBOX_NPC
	return


Frosthearth_Man5::
	msgbox Frosthearth_Man5_Text, MSGBOX_NPC
	return


Frosthearth_NinjaBoy::
	msgbox Frosthearth_NinjaBoy_Text, MSGBOX_NPC
	return


Frosthearth_Sailor::
	msgbox Frosthearth_Sailor_Text, MSGBOX_NPC
	return


Frosthearth_FilmingCrew::
	msgbox Frosthearth_FilmingCrew_Text, MSGBOX_SIGN
	return


Frosthearth_Lass1::
	msgbox Frosthearth_Lass1_Text, MSGBOX_NPC
	return


Frosthearth_Lass2::
	msgbox Frosthearth_Lass2_Text, MSGBOX_NPC
	return


Frosthearth_OldMan::
	goto_if_set FLAG_CHOCOLATE_FROM_OLD_MAN, Frosthearth_OldMan_2
	lock
	faceplayer
	msgbox Frosthearth_OldMan_Text2
	giveitem ITEM_RAGE_CANDY_BAR
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_OldMan_5
Frosthearth_OldMan_4:
	setflag FLAG_CHOCOLATE_FROM_OLD_MAN
	release
	return

Frosthearth_OldMan_2:
	msgbox Frosthearth_OldMan_Text, MSGBOX_NPC
	end

Frosthearth_OldMan_5:
	goto ZeBagIsFull
	goto Frosthearth_OldMan_4


Frosthearth_Twin::
	msgbox Frosthearth_Twin_Text, MSGBOX_NPC
	return


Frosthearth_Girl::
	msgbox Frosthearth_Girl_Text, MSGBOX_NPC
	return


Frosthearth_HoundourTrainer::
	msgbox Frosthearth_HoundourTrainer_Text, MSGBOX_NPC
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	return


Frosthearth_Houndour1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HOUNDOUR, CRY_MODE_NORMAL
	msgbox Frosthearth_Houndour1_Text, MSGBOX_DEFAULT
	waitmoncry
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	release
	end


Frosthearth_Houndour2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HOUNDOUR, CRY_MODE_NORMAL
	msgbox Frosthearth_Houndour2_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Frosthearth_OldWomanSand::
	msgbox Frosthearth_OldWomanSand_Text, MSGBOX_SIGN
	return


Frosthearth_ExpertSand::
	msgbox Frosthearth_ExpertSand_Text, MSGBOX_SIGN
	return


Frosthearth_Girl3::
	msgbox Frosthearth_Girl3_Text, MSGBOX_NPC
	return


Frosthearth_OldWomanSprings1::
	msgbox DoIKnowYou, MSGBOX_NPC
	turnobject VAR_LAST_TALKED, DIR_EAST
	return


Frosthearth_OldWomanSprings2::
	msgbox DoIKnowYou, MSGBOX_NPC
	turnobject VAR_LAST_TALKED, DIR_WEST
	return


Frosthearth_LoneOldWoman::
	msgbox Frosthearth_LoneOldWoman_Text, MSGBOX_NPC
	return


Frosthearth_Swimmer::
	compare VAR_FROSTHEARTH_HARD_ROCK, 0
	goto_if_eq Frosthearth_Swimmer_1
	msgbox FeelingMuchBetter, MSGBOX_SIGN
	end

Frosthearth_Swimmer_1:
	lock
	msgbox RestingOnSomethingHard
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addobject 28
	playse SE_FALL
	safefollow
	compare VAR_TEMP_0, 45
	goto_if_eq Frosthearth_Swimmer_5
	applymovement 28, Frosthearth_Swimmer_Movement_1
	setvar VAR_FROSTHEARTH_HARD_ROCK, 2
Frosthearth_Swimmer_4:
	waitmovement 0
	waitse
	delay 30
	msgbox NowThatsBetter
	release
	end

Frosthearth_Swimmer_5:
	applymovement 28, Frosthearth_Swimmer_Movement_0
	setvar VAR_FROSTHEARTH_HARD_ROCK, 1
	goto Frosthearth_Swimmer_4


Frosthearth_HardRock::
	checkitemspace ITEM_HARD_STONE
	compare VAR_RESULT, TRUE
	goto_if_eq Frosthearth_HardRock_2
Frosthearth_HardRock_1:
	finditem ITEM_HARD_STONE
	return

Frosthearth_HardRock_2:
	setvar VAR_FROSTHEARTH_HARD_ROCK, 3
	goto Frosthearth_HardRock_1


Frosthearth_Boy2::
	compare VAR_FROSTHEARTH_RUFFLET, 0
	goto_if_eq Frosthearth_Boy2_1
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_lt Frosthearth_Boy2_2
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_eq Frosthearth_Boy2_3
	msgbox ThankYouForFindingRufflet, MSGBOX_NPC
	return

Frosthearth_Boy2_1:
	setvar VAR_FROSTHEARTH_RUFFLET, 1
	clearflag FLAG_TEMP_2
	msgbox MissingRuffletStart, MSGBOX_NPC
	end

Frosthearth_Boy2_2:
	msgbox PleaseFindRufflet, MSGBOX_NPC
	end

Frosthearth_Boy2_3:
	lock
	faceplayer
	msgbox FindRuffletReward
	giveitem ITEM_HEART_SCALE
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_Boy2_9
Frosthearth_Boy2_8:
	setvar VAR_FROSTHEARTH_RUFFLET, 10
	release
	end

Frosthearth_Boy2_9:
	goto ZeBagIsFull
	goto Frosthearth_Boy2_8


Frosthearth_Rufflet::
	lock
	faceplayer
	waitse
	safefollow
	playmoncry SPECIES_RUFFLET, CRY_MODE_NORMAL
	waitmoncry
	compare VAR_FROSTHEARTH_RUFFLET, 6
	goto_if_ge Frosthearth_Rufflet_2
	delay 30
	addvar VAR_FROSTHEARTH_RUFFLET, 1
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
	switch VAR_FROSTHEARTH_RUFFLET
	case 2, Frosthearth_Rufflet_6
	case 3, Frosthearth_Rufflet_7
	case 4, Frosthearth_Rufflet_8
	case 5, Frosthearth_Rufflet_9
	case 6, Frosthearth_Rufflet_10
Frosthearth_Rufflet_4:
	delay 48
	release
	end

Frosthearth_Rufflet_2:
	release
	end

Frosthearth_Rufflet_6:
	compare VAR_TEMP_3, 12
	goto_if_eq Frosthearth_Rufflet_12
	applymovement 25, Frosthearth_Rufflet_Movement_1
Frosthearth_Rufflet_11:
	waitmovement 0
	setobjectxy 25, 37, 11
	setobjectxyperm 25, 37, 11
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_7:
	compare VAR_TEMP_3, 37
	goto_if_eq Frosthearth_Rufflet_16
	applymovement 25, Frosthearth_Rufflet_Movement_3
Frosthearth_Rufflet_15:
	waitmovement 0
	setobjectxy 25, 47, 29
	setobjectxyperm 25, 47, 29
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_8:
	compare VAR_TEMP_3, 46
	goto_if_eq Frosthearth_Rufflet_20
	applymovement 25, Frosthearth_Rufflet_Movement_5
Frosthearth_Rufflet_19:
	waitmovement 0
	setobjectxy 25, 39, 41
	setobjectxyperm 25, 39, 41
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_9:
	compare VAR_TEMP_3, 38
	goto_if_eq Frosthearth_Rufflet_24
	applymovement 25, Frosthearth_Rufflet_Movement_7
Frosthearth_Rufflet_23:
	waitmovement 0
	setobjectxy 25, 7, 27
	setobjectxyperm 25, 7, 27
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_10:
	compare VAR_TEMP_3, 8
	goto_if_eq Frosthearth_Rufflet_28
	applymovement 25, Frosthearth_Rufflet_Movement_9
Frosthearth_Rufflet_27:
	waitmovement 0
	setobjectxy 25, 10, 43
	setobjectxyperm 25, 10, 43
	goto Frosthearth_Rufflet_4

Frosthearth_Rufflet_12:
	applymovement 25, Frosthearth_Rufflet_Movement_0
	goto Frosthearth_Rufflet_11

Frosthearth_Rufflet_16:
	applymovement 25, Frosthearth_Rufflet_Movement_2
	goto Frosthearth_Rufflet_15

Frosthearth_Rufflet_20:
	applymovement 25, Frosthearth_Rufflet_Movement_4
	goto Frosthearth_Rufflet_19

Frosthearth_Rufflet_24:
	applymovement 25, Frosthearth_Rufflet_Movement_6
	goto Frosthearth_Rufflet_23

Frosthearth_Rufflet_28:
	applymovement 25, Frosthearth_Rufflet_Movement_8
	goto Frosthearth_Rufflet_27


Frosthearth_Swimmer_Movement_0:
	walk_fast_left
	walk_fast_left
	step_end

Frosthearth_Swimmer_Movement_1:
	walk_fast_right
	walk_fast_right
	step_end

Frosthearth_Rufflet_Movement_0:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Frosthearth_Rufflet_Movement_1:
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Frosthearth_Rufflet_Movement_2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Frosthearth_Rufflet_Movement_3:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Frosthearth_Rufflet_Movement_4:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Frosthearth_Rufflet_Movement_5:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_diag_southwest
	walk_diag_southwest
	walk_fast_left
	step_end

Frosthearth_Rufflet_Movement_6:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Frosthearth_Rufflet_Movement_7:
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Frosthearth_Rufflet_Movement_8:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Frosthearth_Rufflet_Movement_9:
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

FrostHearth_Sign1_Text::
	.string "Frosthearth City Pokémon Gym\n"
	.string "Leaders: Blaine & Pryce$"

FrostHearth_Sign2_Text::
	.string "Hearth Motel\n"
	.string "“Home is where the hearth is.”$"

FrostHearth_Sign3_Text::
	.string "Frosthearth Harbor$"

FrostHearth_Sign4_Text::
	.string "Frosthearth City Pokémon Fan Club$"

FrostHearth_Sign5_Text::
	.string "The Pokémon World Tournament$"

FrostHearth_Sign6_Text::
	.string "Mr. Hyper's Hyper Training School\n"
	.string "“Train your Pokémon like a pro!”$"

FrostHearth_Sign7_Text::
	.string "FROSTHEARTH CITY\n"
	.string "“The capitol of the north.”$"

Frosthearth_GymUnavailable_Text::
	.string "I'm sorry, but we can't currently\n"
	.string "accept new challengers.\p"
	.string "The Gym Leader has gone to explore\n"
	.string "the Frigid Frontier, and has yet\l"
	.string "to return.$"

Frosthearth_Maniac_Text::
	.string "Pokémon World Tournament…\p"
	.string "So many great trainers have made\n"
	.string "a name for themselves here.\p"
	.string "I feel like I'm standing on\n"
	.string "holy ground here!$"

Frosthearth_Man5_Text::
	.string "Anyone who seems themselves a\n"
	.string "worthwhile trainer must participate\l"
	.string "in the Pokémon World Tournament\l"
	.string "at least once in their lifetime!$"

Frosthearth_NinjaBoy_Text::
	.string "I've just arrived in Frosthearth,\n"
	.string "but I have no idea where I want\l"
	.string "to go first.$"

Frosthearth_Sailor_Text::
	.string "The ship here travels to other\n"
	.string "well-established harbors.\p"
	.string "If you're looking to get to Route 20,\n"
	.string "you'll need to surf across the ocean,\l"
	.string "or hire someone to ferry you over.$"

Frosthearth_FilmingCrew_Text::
	.string "The filming crew seems to be busy\n"
	.string "filming some kind of documentary.$"

Frosthearth_Lass1_Text::
	.string "Have you been to the Frosthearth\n"
	.string "Pokémon Gym?\p"
	.string "They say there's no other\n"
	.string "Pokémon Gym like it!$"

Frosthearth_Lass2_Text::
	.string "You don't look like a local.\n"
	.string "Aren't you cold in that get-up?$"

Frosthearth_OldMan_Text::
	.string "Make sure to keep you and your\n"
	.string "Pokémon warm in this weather.$"

Frosthearth_OldMan_Text2::
	.string "It's very important to keep your\n"
	.string "energy levels up in cold weather.\p"
	.string "Here, take this.$"

Frosthearth_Twin_Text::
	.string "Did you know that sometimes the sky\n"
	.string "catches on fire?\p"
	.string "It's true!\p"
	.string "The adults call it Ara…{PAUSE 48} Arora Bol…{PAUSE 48}\n"
	.string "Aura…{PAUSE 96} The northern lights.$"

Frosthearth_Girl_Text::
	.string "It's fun making snow angels\n"
	.string "in the snow!$"

Frosthearth_HoundourTrainer_Text::
	.string "I've been training my Pokémon\n"
	.string "diligently, and soon we'll be\l"
	.string "able to take on the Pokémon Gym!$"

Frosthearth_Houndour1_Text::
	.string "Houndour: Bow! Bowwow!\p"
	.string "The Houndour seems to be\n"
	.string "paying close attention to\l"
	.string "its owner's commands.$"

Frosthearth_Houndour2_Text::
	.string "Houndour: Bow! Bowwow!\p"
	.string "The Houndour seems to be\n"
	.string "having hard time following\l"
	.string "its owner's commands.$"

Frosthearth_OldWomanSand_Text::
	.string "Zzz…$"

Frosthearth_ExpertSand_Text::
	.string "It is believed that the hot springs\n"
	.string "can extend a person's life expectancy.\p"
	.string "You may not believe it,\n"
	.string "but I'm over 90 years old!$"

Frosthearth_Girl3_Text::
	.string "Coming from Basalek Town to\n"
	.string "Frosthearth can be a bit of a shock.\p"
	.string "That's why I'm acclimatizing by\n"
	.string "resting in the hot spring.$"

DoIKnowYou::
	.string "I'm sorry… Do I know you?$"

Frosthearth_LoneOldWoman_Text::
	.string "There are many hot springs in\n"
	.string "this city.\p"
	.string "Many of the people end up going to\n"
	.string "the one near the motel, so this one\l"
	.string "ends up being all peaceful and quiet.$"

RestingOnSomethingHard::
	.string "Ow ow ow!\p"
	.string "I think I'm resting on a stone\n"
	.string "or something.$"

NowThatsBetter::
	.string "Much better!$"

FeelingMuchBetter::
	.string "Ahh…\p"
	.string "Feeling much better now that\n"
	.string "the stone is gone.$"

MissingRuffletStart::
	.string "Have you seen a Rufflet\n"
	.string "wandering around the city?\p"
	.string "My pet Rufflet got spooked by\n"
	.string "something, fled, and now I can\l"
	.string "no longer find it.$"

PleaseFindRufflet::
	.string "If you spot a lost looking Rufflet,\n"
	.string "try and catch it, okay?$"

FindRuffletReward::
	.string "My Rufflet came running back to me\n"
	.string "just before you arrived!\p"
	.string "Thank you for helping me get it back!\p"
	.string "I'm not sure how else to thank you,\n"
	.string "so I hope this will suffice.$"

ThankYouForFindingRufflet::
	.string "Thank you for guiding my Rufflet\n"
	.string "back to me!$"
