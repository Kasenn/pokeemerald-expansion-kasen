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
	lock
# 15 "data/maps/Shoreslate_Harbor/scripts.pory"
	faceplayer
# 16 "data/maps/Shoreslate_Harbor/scripts.pory"
	call ExpandedBoatNetwork
# 17 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, ShoreslateHarbor_Attendant_2
ShoreslateHarbor_Attendant_1:
# 20 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_unset FLAG_HELPED_DEVON_CORP, ShoreslateHarbor_Attendant_5
# 24 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_Text_GetAboard, MSGBOX_YESNO
# 25 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 26 "data/maps/Shoreslate_Harbor/scripts.pory"
	message ShoreslateHarbor_Attendant_Text_0
# 27 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmessage
# 28 "data/maps/Shoreslate_Harbor/scripts.pory"
	multichoice 23, 0, MULTI_BOATFROMSHORESLATE, 0
# 29 "data/maps/Shoreslate_Harbor/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 0, ShoreslateHarbor_Attendant_9
# 33 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 1, ShoreslateHarbor_Attendant_10
# 44 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 2, ShoreslateHarbor_Attendant_11
# 46 "data/maps/Shoreslate_Harbor/scripts.pory"
	case MULTI_B_PRESSED, ShoreslateHarbor_Attendant_12
ShoreslateHarbor_Attendant_7:
# 49 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitstate
# 50 "data/maps/Shoreslate_Harbor/scripts.pory"
	release
	end

ShoreslateHarbor_Attendant_2:
# 18 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto ShoreslateHarbor_TakeAFerry
	goto ShoreslateHarbor_Attendant_1

ShoreslateHarbor_Attendant_5:
# 21 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_BoatJustLeft, MSGBOX_NPC
	end

ShoreslateHarbor_Attendant_9:
# 31 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 32 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_10:
# 34 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ShoreslateHarbor_Attendant_14
ShoreslateHarbor_Attendant_13:
# 42 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 43 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_11:
# 45 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_12:
# 47 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_7

ShoreslateHarbor_Attendant_14:
# 35 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox SailToKaolisleInstead, MSGBOX_YESNO
# 36 "data/maps/Shoreslate_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoreslateHarbor_Attendant_17
ShoreslateHarbor_Attendant_16:
# 39 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 40 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_Attendant_13

ShoreslateHarbor_Attendant_17:
# 37 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_Attendant_16


ShoreslateHarbor_TakeAFerry::
# 55 "data/maps/Shoreslate_Harbor/scripts.pory"
	call InitBoatMultichoice
# 56 "data/maps/Shoreslate_Harbor/scripts.pory"
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_0, 0
# 57 "data/maps/Shoreslate_Harbor/scripts.pory"
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_1, 1
# 58 "data/maps/Shoreslate_Harbor/scripts.pory"
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_2, 2
# 59 "data/maps/Shoreslate_Harbor/scripts.pory"
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_3, 3
# 60 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto_if_set FLAG_VISITED_FROSTFIRE, ShoreslateHarbor_TakeAFerry_2
ShoreslateHarbor_TakeAFerry_1:
# 63 "data/maps/Shoreslate_Harbor/scripts.pory"
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_5, 5
# 64 "data/maps/Shoreslate_Harbor/scripts.pory"
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
# 65 "data/maps/Shoreslate_Harbor/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 0, ShoreslateHarbor_TakeAFerry_6
# 69 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 1, ShoreslateHarbor_TakeAFerry_7
# 72 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 2, ShoreslateHarbor_TakeAFerry_8
# 75 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 3, ShoreslateHarbor_TakeAFerry_9
# 78 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 4, ShoreslateHarbor_TakeAFerry_10
# 81 "data/maps/Shoreslate_Harbor/scripts.pory"
	case 5, ShoreslateHarbor_TakeAFerry_11
# 82 "data/maps/Shoreslate_Harbor/scripts.pory"
	case MULTI_B_PRESSED, ShoreslateHarbor_TakeAFerry_11
ShoreslateHarbor_TakeAFerry_4:
# 85 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitstate
# 86 "data/maps/Shoreslate_Harbor/scripts.pory"
	release
	end

ShoreslateHarbor_TakeAFerry_2:
# 61 "data/maps/Shoreslate_Harbor/scripts.pory"
	dynmultipush ShoreslateHarbor_TakeAFerry_Text_4, 4
	goto ShoreslateHarbor_TakeAFerry_1

ShoreslateHarbor_TakeAFerry_6:
# 67 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 68 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_7:
# 70 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 71 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_8:
# 73 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 74 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_9:
# 76 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 77 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_10:
# 79 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingWest
# 80 "data/maps/Shoreslate_Harbor/scripts.pory"
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto ShoreslateHarbor_TakeAFerry_4

ShoreslateHarbor_TakeAFerry_11:
# 83 "data/maps/Shoreslate_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto ShoreslateHarbor_TakeAFerry_4


Harbor_BoardFerryGoingWest::
# 111 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
# 112 "data/maps/Shoreslate_Harbor/scripts.pory"
	closemessage
# 113 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 114 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
# 115 "data/maps/Shoreslate_Harbor/scripts.pory"
	delay 30
# 116 "data/maps/Shoreslate_Harbor/scripts.pory"
	hideobjectat 2, MAP_SHORESLATE_HARBOR
# 117 "data/maps/Shoreslate_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, ShoreslateHarbor_EventScript_BoardFerryNorth
# 118 "data/maps/Shoreslate_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, ShoreslateHarbor_EventScript_BoardFerryWest
# 119 "data/maps/Shoreslate_Harbor/scripts.pory"
	delay 30
# 120 "data/maps/Shoreslate_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 121 "data/maps/Shoreslate_Harbor/scripts.pory"
	call Common2_EventScript_FerryDepart4
	return


Common2_EventScript_FerryDepart4::
# 126 "data/maps/Shoreslate_Harbor/scripts.pory"
	delay 60
# 127 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement 3, Movement_FerryDepart3
# 128 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
	return


ShoreslateHarbor_EventScript_ComeAgain::
# 133 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox Harbor_ComeAgain_Text, MSGBOX_DEFAULT
# 134 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmessage
# 135 "data/maps/Shoreslate_Harbor/scripts.pory"
	closemessage
# 136 "data/maps/Shoreslate_Harbor/scripts.pory"
	release
# 137 "data/maps/Shoreslate_Harbor/scripts.pory"
	releaseall
	end


ShoreslateHarbor_EventScript_BoardFerryWest::
# 142 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoastTownHarbor_Movement_BoardFerryWest
# 143 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
	return


ShoreslateHarbor_EventScript_BoardFerryNorth::
# 147 "data/maps/Shoreslate_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 148 "data/maps/Shoreslate_Harbor/scripts.pory"
	waitmovement 0
	return


ShoreslateHarbor_Boy::
# 154 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_Boy_Text, MSGBOX_NPC
	end


ShoreslateHarbor_Sailor::
# 159 "data/maps/Shoreslate_Harbor/scripts.pory"
	msgbox ShoreslateHarbor_Sailor_Text, MSGBOX_NPC
	end


ShoreslateHarbor_Attendant_Text_0:
# 26 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Where would you like to sail?$"

ShoreslateHarbor_TakeAFerry_Text_0:
# 56 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Coralgrove City$"

ShoreslateHarbor_TakeAFerry_Text_1:
# 57 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Azuretide Town$"

ShoreslateHarbor_TakeAFerry_Text_2:
# 58 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Kaolisle City$"

ShoreslateHarbor_TakeAFerry_Text_3:
# 59 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Rockliffe Town$"

ShoreslateHarbor_TakeAFerry_Text_4:
# 61 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Frosthearth City$"

ShoreslateHarbor_TakeAFerry_Text_5:
# 63 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Never mind$"

SailToKaolisleInstead::
# 90 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "I'm sorry, but the harbor at Rockliffe\n"
	.string "Town is currently having some technical\l"
	.string "difficulties, making it impossible for\l"
	.string "the ferry to dock there.\p"
	.string "Would you like to sail to Kaolisle\n"
	.string "City instead?$"

ShoreslateHarbor_BoatJustLeft::
# 98 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "I'm sorry, but the ferry to Kaolisle\n"
	.string "City has just departed.\p"
	.string "It will take some time before\n"
	.string "the ferry returns.$"

ShoreslateHarbor_Text_GetAboard::
# 104 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "This ferry travels to Kaolisle City\n"
	.string "and Rockliffe Town.\p"
	.string "Would you like to board the ferry?$"

ShoreslateHarbor_Boy_Text::
# 163 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "I'm on a quest to fish in every\n"
	.string "unique location across Sinko.\p"
	.string "I heard Kaolisle City has some of the\n"
	.string "most unique species imaginable!$"

ShoreslateHarbor_Sailor_Text::
# 169 "data/maps/Shoreslate_Harbor/scripts.pory"
	.string "Have you been to the Shoreslate Market?\n"
	.string "I plan to head there myself as soon as\l"
	.string "I've given my old bones a moment's rest.$"
