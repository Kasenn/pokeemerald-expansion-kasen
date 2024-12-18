Amberock_PokeballFactory_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_PETREL
	goto_if_ge Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_HIDE_FOLLOWER
	setflag FLAG_SYS_USE_STRENGTH
	setflag FLAG_TEMP_2
	goto Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflag FLAG_TEMP_1
	return

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_3, 0, SetPlayerKrokorokModel
	.2byte 0

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_BOULDER_ID, 35, Factory_DoBoulderCheck
	.2byte 0


Factory_DoBoulderCheck::
	getobjectxy 35
	compare VAR_0x8002, 32
	goto_if_ne Factory_DoBoulderCheck_2
	safefollow
	compare VAR_0x8001, 20
	goto_if_eq Factory_DoBoulderCheck_6
	applymovement 35, Factory_DoBoulderCheck_Movement_1
Factory_DoBoulderCheck_5:
	waitmovement 0
	playse SE_M_STRENGTH
	setobjectxy 35, 11, 32
	setobjectxyperm 35, 11, 32
	setvar VAR_BOULDER_ID, 0
Factory_DoBoulderCheck_1:
	release
	return

Factory_DoBoulderCheck_2:
	setvar VAR_BOULDER_ID, 0
	goto Factory_DoBoulderCheck_1

Factory_DoBoulderCheck_6:
	applymovement 35, Factory_DoBoulderCheck_Movement_0
	goto Factory_DoBoulderCheck_5


Factory_BusyKrokorok::
	msgbox Factory_BusyKrokorok_Text
	release
	return


Amberock_Factory_RocketTrigger1_1::
	setvar VAR_TEMP_1, 25
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 4
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger1_2::
	setvar VAR_TEMP_1, 25
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 4
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger1_3::
	setvar VAR_TEMP_1, 25
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 4
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger1_4::
	setvar VAR_TEMP_1, 25
	setvar VAR_TEMP_2, DIR_NORTH
	setvar VAR_TEMP_3, 4
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger2_1::
	setvar VAR_TEMP_1, 24
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 5
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger2_2::
	setvar VAR_TEMP_1, 24
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 5
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger2_3::
	setvar VAR_TEMP_1, 24
	setvar VAR_TEMP_2, DIR_NORTH
	setvar VAR_TEMP_3, 5
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger3_1::
	setvar VAR_TEMP_1, 11
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 6
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger3_2::
	setvar VAR_TEMP_1, 11
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 6
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger4_1::
	setvar VAR_TEMP_1, 28
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 6
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger4_2::
	setvar VAR_TEMP_1, 28
	setvar VAR_TEMP_2, DIR_NORTH
	setvar VAR_TEMP_3, 6
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger5_1::
	setvar VAR_TEMP_1, 12
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 6
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger5_2::
	setvar VAR_TEMP_1, 12
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 6
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger6_1::
	setvar VAR_TEMP_1, 13
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 7
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger6_2::
	setvar VAR_TEMP_1, 13
	setvar VAR_TEMP_2, DIR_NORTH
	setvar VAR_TEMP_3, 7
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger6_3::
	setvar VAR_TEMP_1, 13
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 7
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger7_1::
	setvar VAR_TEMP_1, 29
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger7_2::
	setvar VAR_TEMP_1, 29
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger7_3::
	setvar VAR_TEMP_1, 29
	setvar VAR_TEMP_2, DIR_NORTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger8_1::
	setvar VAR_TEMP_1, 14
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger8_2::
	setvar VAR_TEMP_1, 14
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger9_1::
	setvar VAR_TEMP_1, 30
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger9_2::
	setvar VAR_TEMP_1, 30
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger9_3::
	setvar VAR_TEMP_1, 30
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger10_1::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger10_2::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger10_3::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, DIR_NORTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger10_4::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger11_1::
	setvar VAR_TEMP_1, 2
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger11_2::
	setvar VAR_TEMP_1, 2
	setvar VAR_TEMP_2, DIR_NORTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger11_3::
	setvar VAR_TEMP_1, 2
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger11_4::
	setvar VAR_TEMP_1, 2
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger12_1::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, DIR_WEST
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketTrigger12_2::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, DIR_SOUTH
	setvar VAR_TEMP_3, 8
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_MainRocket::
	lock
	delay 15
	playse SE_PIN
	switch VAR_TEMP_2
	case DIR_NORTH, Amberock_Factory_MainRocket_3
	case DIR_WEST, Amberock_Factory_MainRocket_4
	case DIR_EAST, Amberock_Factory_MainRocket_5
	case DIR_SOUTH, Amberock_Factory_MainRocket_6
Amberock_Factory_MainRocket_1:
	applymovement VAR_TEMP_1, ExclamationMark
	waitmovement 0
	delay 60
	msgbox GetBackToWork
	closemessage
	switch VAR_TEMP_3
	case 2, Amberock_Factory_MainRocket_9
	case 4, Amberock_Factory_MainRocket_10
	case 5, Amberock_Factory_MainRocket_11
	case 6, Amberock_Factory_MainRocket_12
	case 7, Amberock_Factory_MainRocket_13
	case 8, Amberock_Factory_MainRocket_14
Amberock_Factory_MainRocket_7:
	waitstate
	return

Amberock_Factory_MainRocket_3:
	turnobject VAR_TEMP_1, DIR_NORTH
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_4:
	turnobject VAR_TEMP_1, DIR_WEST
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_5:
	turnobject VAR_TEMP_1, DIR_EAST
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_6:
	turnobject VAR_TEMP_1, DIR_SOUTH
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_9:
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 2
	goto Amberock_Factory_MainRocket_7

Amberock_Factory_MainRocket_10:
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 4
	goto Amberock_Factory_MainRocket_7

Amberock_Factory_MainRocket_11:
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 5
	goto Amberock_Factory_MainRocket_7

Amberock_Factory_MainRocket_12:
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 6
	goto Amberock_Factory_MainRocket_7

Amberock_Factory_MainRocket_13:
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 7
	goto Amberock_Factory_MainRocket_7

Amberock_Factory_MainRocket_14:
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 8
	goto Amberock_Factory_MainRocket_7


FactoryEmployee_Basement::
	msgbox FactoryEmployee_Basement_Text, MSGBOX_SIGN
	return


TooCloseToProton::
	setvar VAR_TEMP_1, 4
	setvar VAR_TEMP_2, DIR_EAST
	setvar VAR_TEMP_3, 2
	goto Amberock_Factory_MainRocket
	return


Factory_KrokorokPetrelCutScene::
	lock
	delay 15
	addobject 39
	applymovement 39, Factory_KrokorokPetrelCutScene_Movement_0
	waitmovement 0
	delay 16
	msgbox Petrel_MoveItGuys
	turnobject 38, DIR_WEST
	msgbox Sorry_Petrel
	closemessage
	delay 16
	applymovement 39, Factory_KrokorokPetrelCutScene_Movement_1
	applymovement 37, Factory_RocketGuardLeaves2
	applymovement 38, Factory_RocketGuardLeaves
	waitmovement 0
	removeobject 39
	removeobject 37
	removeobject 38
	delay 16
	msgbox ThatsPetrel
	msgbox AfterPapers
	release
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_PETREL
	return


Factory_RocketGuardLeaves:
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	delay_4
	set_invisible
	step_end

Factory_RocketGuardLeaves2:
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	delay_4
	set_invisible
	step_end

Amberock_Factory_Generator::
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, Amberock_Factory_Generator_1
	msgbox BustedGenerator, MSGBOX_SIGN
	return

Amberock_Factory_Generator_1:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_GIOVANNI
	goto_if_ge Amberock_Factory_Generator_4
	msgbox CompleteClaysObjective, MSGBOX_SIGN
	return

Amberock_Factory_Generator_4:
	msgbox OrderKrokorokDestroy, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_Factory_Generator_8
Amberock_Factory_Generator_7:
	release
	end

Amberock_Factory_Generator_8:
	msgbox KrokorokBeginsRampage
	closemessage
	fadescreen FADE_TO_BLACK
	msgbox KrokorokDestroysGenerator
	closemessage
	clearflag FLAG_DISGUISED_AS_KROKOROK
	setflag FLAG_SYS_B_DASH
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	warpsilentnofadeout MAP_AMBEROCK_TOWN, 30, 21
	waitstate
	goto Amberock_Factory_Generator_7


MsgFromClay::
	msgbox MsgFromClay_Text, MSGBOX_SIGN
	setflag FLAG_MSG_FROM_CLAY
	release
	return


Amberock_Crate::
	msgbox Amberock_Crate_Text, MSGBOX_SIGN
	return


KrokBall1::
	setvar VAR_TEMP_4, ITEM_MAX_ELIXIR
	goto KrokBallMain
	return


KrokBall2::
	setvar VAR_TEMP_4, ITEM_X_ATTACK
	goto KrokBallMain
	return


KrokBall3::
	setvar VAR_TEMP_4, ITEM_HYPER_POTION
	goto KrokBallMain
	return


KrokBallMain::
	lock
	waitse
	playfanfare MUS_OBTAIN_ITEM
	removeobject VAR_LAST_TALKED
	bufferitemname STR_VAR_2, VAR_TEMP_4
	message KrokorokFoundItem
	delay 10
	waitfanfare
	waitmessage
	msgbox KrokorokCarriesItem
	release
	end


Factory_DoBoulderCheck_Movement_0:
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

Factory_DoBoulderCheck_Movement_1:
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

Factory_KrokorokPetrelCutScene_Movement_0:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fast_right
	step_end

Factory_KrokorokPetrelCutScene_Movement_1:
	walk_up
	set_invisible
	step_end

Factory_BusyKrokorok_Text::
	.string "The Krokorok seems busy scavenging\n"
	.string "through the boxes.$"

GetBackToWork::
	.string "Where do you think you're going?\n"
	.string "Get back to work!$"

FactoryEmployee_Basement_Text::
	.string "These look to be employees\n"
	.string "of the factory.\p"
	.string "They seem unharmed.$"

Petrel_MoveItGuys::
	.string "???: Hey, you two knuckleheads!\p"
	.string "Come with me to the office and see\n"
	.string "if you can figure out what these\l"
	.string "fancy research papers say!$"

Sorry_Petrel::
	.string "Yes boss!\n"
	.string "Right away, boss!$"

ThatsPetrel::
	.string "Clay: That's Petrel,\n"
	.string "one of the Rocket Executives.\p"
	.string "He stands above grunts, but I doubt\n"
	.string "he's the mastermind of this operation.\p"
	.string "Let's keep looking.$"

AfterPapers::
	.string "You're here because you were tasked\n"
	.string "with retrieving those papers?\p"
	.string "Don't worry, you can get them\n"
	.string "once we're done.\l"
	.string "I doubt they're going anywhere.$"

MsgFromClay_Text::
	.string "Clay: Oh, while we're here,\n"
	.string "you may wanna grab any items\l"
	.string "you see lying around.\p"
	.string "It's better we confiscate everything\n"
	.string "now, rather than letting Team Rocket\l"
	.string "simply take them with 'em.$"

OrderKrokorokDestroy::
	.string "Order the Krokorok to disable\n"
	.string "the generator?$"

KrokorokBeginsRampage::
	.string "The Krokorok starts gnawing\n"
	.string "on the cables…$"

KrokorokDestroysGenerator::
	.string "The entire facility goes dark, and\n"
	.string "Krokorok returns back to the group.$"

CompleteClaysObjective::
	.string "Volkner: This is the main\n"
	.string "generator of the facility.\p"
	.string "We can command the Krokorok to gnaw\n"
	.string "on some cables to cause a blackout,\l"
	.string "but first, we should finish the other\l"
	.string "objectives.$"

BustedGenerator::
	.string "(UNUSED)its a busted gen$"

Amberock_Crate_Text::
	.string "It's a light enough crate the\n"
	.string "Krokorok can push around with ease.$"

KrokorokFoundItem::
	.string "The Krokorok found one {STR_VAR_2}!$"

KrokorokCarriesItem::
	.string "The Krokorok is carrying the\n"
	.string "{STR_VAR_2} in its hands for now.$"
