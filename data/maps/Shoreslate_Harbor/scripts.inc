Shoreslate_Harbor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ShoreslateHarborSetFlags
	.byte 0


ShoreslateHarborSetFlags::
	goto_if_set FLAG_HELPED_DEVON_CORP, ShoreslateHarborSetFlags_2
	setflag FLAG_HIDE_SHORESLATE_BOAT
	end

ShoreslateHarborSetFlags_2:
	end


ShoreslateHarbor_Attendant::
	lockall
	faceplayer
	goto_if_unset FLAG_HELPED_DEVON_CORP, ShoreslateHarbor_Attendant_2
	msgbox ShoreslateHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	message ShoreslateHarbor_Attendant_Text_0
	waitmessage
	multichoice 23, 0, MULTI_BOATFROMSHORESLATE, 0
	switch VAR_RESULT
	case 0, ShoreslateHarbor_Attendant_6
	case 1, ShoreslateHarbor_Attendant_7
	case 2, ShoreslateHarbor_Attendant_8
	case MULTI_B_PRESSED, ShoreslateHarbor_Attendant_9
ShoreslateHarbor_Attendant_4:
	waitstate
	release
	end

ShoreslateHarbor_Attendant_2:
	msgbox ShoreslateHarbor_BoatJustLeft, MSGBOX_NPC
	end

ShoreslateHarbor_Attendant_6:
	call Harbor_BoardFerryGoingWest
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_7:
	goto_if_unset FLAG_BADGE03_GET, ShoreslateHarbor_Attendant_11
ShoreslateHarbor_Attendant_10:
	call Harbor_BoardFerryGoingWest
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_8:
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_9:
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_4

ShoreslateHarbor_Attendant_11:
	msgbox SailToKaolisleInstead, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq ShoreslateHarbor_Attendant_14
ShoreslateHarbor_Attendant_13:
	call Harbor_BoardFerryGoingWest
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_10

ShoreslateHarbor_Attendant_14:
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_13


Harbor_BoardFerryGoingWest::
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 30
	hideobjectat 2, MAP_SHORESLATE_HARBOR
	call_if_eq VAR_FACING, DIR_NORTH, ShoreslateHarbor_EventScript_BoardFerryNorth
	call_if_eq VAR_FACING, DIR_WEST, ShoreslateHarbor_EventScript_BoardFerryWest
	delay 30
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	call Common2_EventScript_FerryDepart4
	return


Common2_EventScript_FerryDepart4::
	delay 60
	applymovement 3, Movement_FerryDepart3
	waitmovement 0
	return


ShoreslateHarbor_EventScript_ComeAgain::
	msgbox Harbor_ComeAgain_Text, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	releaseall
	end


ShoreslateHarbor_EventScript_BoardFerryWest::
	applymovement OBJ_EVENT_ID_PLAYER, CoastTownHarbor_Movement_BoardFerryWest
	waitmovement 0
	return


ShoreslateHarbor_EventScript_BoardFerryNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	return


ShoreslateHarbor_Boy::
	msgbox ShoreslateHarbor_Boy_Text, MSGBOX_NPC
	end


ShoreslateHarbor_Sailor::
	msgbox ShoreslateHarbor_Sailor_Text, MSGBOX_NPC
	end


ShoreslateHarbor_Attendant_Text_0:
	.string "Where would you like to sail?$"

SailToKaolisleInstead::
	.string "I'm sorry, but the harbor at Rockliffe\n"
	.string "Town is currently having some technical\l"
	.string "difficulties, making it impossible for\l"
	.string "the ferry to dock there.\p"
	.string "Would you like to sail to Kaolisle\n"
	.string "City instead?$"

ShoreslateHarbor_BoatJustLeft::
	.string "I'm sorry, but the ferry to Kaolisle\n"
	.string "City has just departed.\p"
	.string "It will take some time before\n"
	.string "the ferry returns.$"

ShoreslateHarbor_Text_GetAboard::
	.string "This ferry travels to Kaolisle City\n"
	.string "and Rockliffe Town.\p"
	.string "Would you like to board the ferry?$"

ShoreslateHarbor_Boy_Text::
	.string "I'm on a quest to fish in every\n"
	.string "unique location across Sinko.\p"
	.string "I heard Kaolisle City has some of the\n"
	.string "most unique species imaginable!$"

ShoreslateHarbor_Sailor_Text::
	.string "Have you been to the Shoreslate Market?\n"
	.string "I plan to head there myself as soon as\l"
	.string "I've given my old bones a moment's rest.$"
