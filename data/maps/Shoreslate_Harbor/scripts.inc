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
	lock
	faceplayer
	call ExpandedBoatNetwork
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, ShoreslateHarbor_Attendant_2
ShoreslateHarbor_Attendant_1:
	goto_if_unset FLAG_HELPED_DEVON_CORP, ShoreslateHarbor_Attendant_5
	msgbox ShoreslateHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	message ShoreslateHarbor_Attendant_Text_0
	waitmessage
	multichoice 23, 0, MULTI_BOATFROMSHORESLATE, 0
	switch VAR_RESULT
	case 0, ShoreslateHarbor_Attendant_9
	case 1, ShoreslateHarbor_Attendant_10
	case 2, ShoreslateHarbor_Attendant_11
	case MULTI_B_PRESSED, ShoreslateHarbor_Attendant_12
ShoreslateHarbor_Attendant_7:
	waitstate
	release
	end

ShoreslateHarbor_Attendant_2:
	goto ShoreslateHarbor_TakeAFerry
	goto ShoreslateHarbor_Attendant_1

ShoreslateHarbor_Attendant_5:
	msgbox ShoreslateHarbor_BoatJustLeft, MSGBOX_NPC
	end

ShoreslateHarbor_Attendant_9:
	call Harbor_BoardFerryGoingWest
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_10:
	goto_if_unset FLAG_BADGE03_GET, ShoreslateHarbor_Attendant_14
ShoreslateHarbor_Attendant_13:
	call Harbor_BoardFerryGoingWest
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_11:
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_12:
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_14:
	msgbox SailToKaolisleInstead, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq ShoreslateHarbor_Attendant_17
ShoreslateHarbor_Attendant_16:
	call Harbor_BoardFerryGoingWest
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_13

ShoreslateHarbor_Attendant_17:
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_16


ShoreslateHarbor_TakeAFerry::
	call InitBoatMultichoice
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_0, 0
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_1, 1
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_2, 2
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_3, 3
	goto_if_set FLAG_VISITED_FROSTFIRE, ShoreslateHarbor_TakeAFerry_2
ShoreslateHarbor_TakeAFerry_1:
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_5, 5
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
	switch VAR_RESULT
	case 0, ShoreslateHarbor_TakeAFerry_6
	case 1, ShoreslateHarbor_TakeAFerry_7
	case 2, ShoreslateHarbor_TakeAFerry_8
	case 3, ShoreslateHarbor_TakeAFerry_9
	case 4, ShoreslateHarbor_TakeAFerry_10
	case 5, ShoreslateHarbor_TakeAFerry_11
	case MULTI_B_PRESSED, ShoreslateHarbor_TakeAFerry_11
ShoreslateHarbor_TakeAFerry_4:
	waitstate
	release
	end

ShoreslateHarbor_TakeAFerry_2:
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_4, 4
	goto ShoreslateHarbor_TakeAFerry_1

ShoreslateHarbor_TakeAFerry_6:
	call Harbor_BoardFerryGoingWest
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_7:
	call Harbor_BoardFerryGoingWest
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_8:
	call Harbor_BoardFerryGoingWest
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_9:
	call Harbor_BoardFerryGoingWest
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_10:
	call Harbor_BoardFerryGoingWest
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_11:
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_TakeAFerry_4


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

ShoreslateHarbor_TakeAFerry_Text_0:
	.string "Coralgrove City$"

ShoreslateHarbor_TakeAFerry_Text_1:
	.string "Azuretide Town$"

ShoreslateHarbor_TakeAFerry_Text_2:
	.string "Kaolisle City$"

ShoreslateHarbor_TakeAFerry_Text_3:
	.string "Rockliffe Town$"

ShoreslateHarbor_TakeAFerry_Text_4:
	.string "Frosthearth City$"

ShoreslateHarbor_TakeAFerry_Text_5:
	.string "Nevermind$"

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
