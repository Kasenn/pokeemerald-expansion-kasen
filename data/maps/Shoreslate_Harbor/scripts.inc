Shoreslate_Harbor_MapScripts::
# 2 "data/maps/Shoreslate_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoreslateHarborSetFlags
	.byte 0


ShoreslateHarborSetFlags::
# 6 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_set FLAG_HELPED_DEVON_CORP, ShoreslateHarborSetFlags_2
# 9 "data/maps/Shoreslate_Harbor/scripts.pory"
	setflag FLAG_HIDE_SHORESLATE_BOAT
	end

ShoreslateHarborSetFlags_2:
	end


ShoreslateHarbor_Attendant::
# 14 "data/maps/Shoreslate_Harbor/scripts.pory"
	lockall
# 15 "data/maps/Shoreslate_Harbor/scripts.pory"
	faceplayer
# 16 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_unset FLAG_HELPED_DEVON_CORP, ShoreslateHarbor_Attendant_2
# 20 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_Text_GetAboard, MSGBOX_YESNO
# 21 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 22 "data/maps/Shoreslate_Harbor/scripts.pory"
	message ShoreslateHarbor_Attendant_Text_0
# 23 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmessage
# 24 "data/maps/Shoreslate_Harbor/scripts.pory"
	multichoice 23, 0, MULTI_BOATFROMSHORESLATE, 0
# 25 "data/maps/Shoreslate_Harbor/scripts.pory"
	switch VAR_RESULT
# 26 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 0, ShoreslateHarbor_Attendant_6
# 29 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 1, ShoreslateHarbor_Attendant_7
# 40 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 2, ShoreslateHarbor_Attendant_8
# 42 "data/maps/Shoreslate_Harbor/scripts.pory"
	case MULTI_B_PRESSED, ShoreslateHarbor_Attendant_9
ShoreslateHarbor_Attendant_4:
# 45 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitstate
# 46 "data/maps/Shoreslate_Harbor/scripts.pory"
	release
	end

ShoreslateHarbor_Attendant_2:
# 17 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_BoatJustLeft, MSGBOX_NPC
	end

ShoreslateHarbor_Attendant_6:
# 27 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 28 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_7:
# 30 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ShoreslateHarbor_Attendant_11
ShoreslateHarbor_Attendant_10:
# 38 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 39 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_8:
# 41 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_9:
# 43 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_11:
# 31 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox SailToKaolisleInstead, MSGBOX_YESNO
# 32 "data/maps/Shoreslate_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoreslateHarbor_Attendant_14
ShoreslateHarbor_Attendant_13:
# 35 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 36 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_10

ShoreslateHarbor_Attendant_14:
# 33 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_13


Harbor_BoardFerryGoingWest::
# 71 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
# 72 "data/maps/Shoreslate_Harbor/scripts.pory"
	closemessage
# 73 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 74 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
# 75 "data/maps/Shoreslate_Harbor/scripts.pory"
	delay 30
# 76 "data/maps/Shoreslate_Harbor/scripts.pory"
	hideobjectat 2, MAP_SHORESLATE_HARBOR
# 77 "data/maps/Shoreslate_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, ShoreslateHarbor_EventScript_BoardFerryNorth
# 78 "data/maps/Shoreslate_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, ShoreslateHarbor_EventScript_BoardFerryWest
# 79 "data/maps/Shoreslate_Harbor/scripts.pory"
	delay 30
# 80 "data/maps/Shoreslate_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 81 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Common2_EventScript_FerryDepart4
	return


Common2_EventScript_FerryDepart4::
# 86 "data/maps/Shoreslate_Harbor/scripts.pory"
	delay 60
# 87 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement 3, Movement_FerryDepart3
# 88 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
	return


ShoreslateHarbor_EventScript_ComeAgain::
# 93 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox Harbor_ComeAgain_Text, MSGBOX_DEFAULT
# 94 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmessage
# 95 "data/maps/Shoreslate_Harbor/scripts.pory"
	closemessage
# 96 "data/maps/Shoreslate_Harbor/scripts.pory"
	release
# 97 "data/maps/Shoreslate_Harbor/scripts.pory"
	releaseall
	end


ShoreslateHarbor_EventScript_BoardFerryWest::
# 102 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoastTownHarbor_Movement_BoardFerryWest
# 103 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
	return


ShoreslateHarbor_EventScript_BoardFerryNorth::
# 107 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 108 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
	return


ShoreslateHarbor_Boy::
# 114 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_Boy_Text, MSGBOX_NPC
	end


ShoreslateHarbor_Sailor::
# 119 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_Sailor_Text, MSGBOX_NPC
	end


ShoreslateHarbor_Attendant_Text_0:
# 22 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Where would you like to sail?$"

SailToKaolisleInstead::
# 50 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "I'm sorry, but the harbor at Rockliffe\n"
	.string "Town is currently having some technical\l"
	.string "difficulties, making it impossible for\l"
	.string "the ferry to dock there.\p"
	.string "Would you like to sail to Kaolisle\n"
	.string "City instead?$"

ShoreslateHarbor_BoatJustLeft::
# 58 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "I'm sorry, but the ferry to Kaolisle\n"
	.string "City has just departed.\p"
	.string "It will take some time before\n"
	.string "the ferry returns.$"

ShoreslateHarbor_Text_GetAboard::
# 64 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "This ferry travels to Kaolisle City\n"
	.string "and Rockliffe Town.\p"
	.string "Would you like to board the ferry?$"

ShoreslateHarbor_Boy_Text::
# 123 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "I'm on a quest to fish in every\n"
	.string "unique location across Sinko.\p"
	.string "I heard Kaolisle City has some of the\n"
	.string "most unique species imaginable!$"

ShoreslateHarbor_Sailor_Text::
# 129 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Have you been to the Shoreslate Market?\n"
	.string "I plan to head there myself as soon as\l"
	.string "I've given my old bones a moment's rest.$"
