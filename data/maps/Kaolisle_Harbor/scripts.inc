Kaolisle_Harbor_MapScripts::
	.byte 0


KaolisleHarbor_Attendant::
	lock
	faceplayer
	call ExpandedBoatNetwork
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, KaolisleHarbor_Attendant_2
KaolisleHarbor_Attendant_1:
	msgbox KaolisleHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	message KaolisleHarbor_Attendant_Text_0
	waitmessage
	multichoice 23, 0, MULTI_BOATFROMKAOLISLE, 0
	switch VAR_RESULT
	case 0, KaolisleHarbor_Attendant_6
	case 1, KaolisleHarbor_Attendant_7
	case 2, KaolisleHarbor_Attendant_8
	case MULTI_B_PRESSED, KaolisleHarbor_Attendant_9
KaolisleHarbor_Attendant_4:
	waitstate
	release
	end

KaolisleHarbor_Attendant_2:
	goto KaolisleHarbor_TakeAFerry
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_6:
	call Harbor_BoardFerryGoingEast
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_7:
	goto_if_unset FLAG_BADGE03_GET, KaolisleHarbor_Attendant_11
KaolisleHarbor_Attendant_10:
	call Harbor_BoardFerryGoingEast
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_8:
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_9:
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_11:
	msgbox SailToShoreslateInstead, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleHarbor_Attendant_14
KaolisleHarbor_Attendant_13:
	call Harbor_BoardFerryGoingEast
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_Attendant_10

KaolisleHarbor_Attendant_14:
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_13


KaolisleHarbor_TakeAFerry::
	call InitBoatMultichoice
	dynmultipush KaolisleHarbor_TakeAFerry_Text_0, 0
	dynmultipush KaolisleHarbor_TakeAFerry_Text_1, 1
	dynmultipush KaolisleHarbor_TakeAFerry_Text_2, 2
	dynmultipush KaolisleHarbor_TakeAFerry_Text_3, 3
	goto_if_set FLAG_VISITED_FROSTFIRE, KaolisleHarbor_TakeAFerry_2
KaolisleHarbor_TakeAFerry_1:
	dynmultipush KaolisleHarbor_TakeAFerry_Text_5, 5
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
	switch VAR_RESULT
	case 0, KaolisleHarbor_TakeAFerry_6
	case 1, KaolisleHarbor_TakeAFerry_7
	case 2, KaolisleHarbor_TakeAFerry_8
	case 3, KaolisleHarbor_TakeAFerry_9
	case 4, KaolisleHarbor_TakeAFerry_10
	case 5, KaolisleHarbor_TakeAFerry_11
	case MULTI_B_PRESSED, KaolisleHarbor_TakeAFerry_11
KaolisleHarbor_TakeAFerry_4:
	waitstate
	release
	end

KaolisleHarbor_TakeAFerry_2:
	dynmultipush KaolisleHarbor_TakeAFerry_Text_4, 4
	goto KaolisleHarbor_TakeAFerry_1

KaolisleHarbor_TakeAFerry_6:
	call Harbor_BoardFerryGoingEast
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_7:
	call Harbor_BoardFerryGoingEast
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_8:
	call Harbor_BoardFerryGoingEast
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_9:
	call Harbor_BoardFerryGoingEast
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_10:
	call Harbor_BoardFerryGoingEast
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_11:
	goto Harbor_ComeAgain
	goto KaolisleHarbor_TakeAFerry_4


KaolisleHarbor_Man::
	msgbox KaolisleHarbor_Man_Text, MSGBOX_NPC
	end


KaolisleHarbor_Boy::
	msgbox KaolisleHarbor_Boy_Text, MSGBOX_NPC
	end


KaolisleHarbor_Lass::
	msgbox KaolisleHarbor_Lass_Text, MSGBOX_NPC
	end


Harbor_BoardFerryGoingEast::
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 30
	hideobjectat 3, MAP_KAOLISLE_HARBOR
	hideobjectat 3, MAP_CORALGROVE_HARVOR_INTERIOR
	hideobjectat 3, MAP_FROSTHEARTH_CITY_HARBOR
	call_if_eq VAR_FACING, DIR_NORTH, Harbor_BoardFerryNorth
	call_if_eq VAR_FACING, DIR_EAST, Harbor_BoardFerryEast
	delay 30
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	call FerryDepart_East
	return


Harbor_ComeAgain::
	msgbox Harbor_ComeAgain_Text, MSGBOX_NPC
	end


Harbor_BoardFerryEast::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_BoardFerryEast
	waitmovement 0
	return


Movement_BoardFerryEast:
	walk_right
	walk_in_place_faster_up
	step_end

Harbor_BoardFerryNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	return


FerryDepart_East::
	delay 60
	applymovement 4, Movement_FerryDepart_East
	waitmovement 0
	return


Movement_FerryDepart_East:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

KaolisleHarbor_Attendant_Text_0:
	.string "Where would you like to sail?$"

KaolisleHarbor_TakeAFerry_Text_0:
	.string "Coralgrove City$"

KaolisleHarbor_TakeAFerry_Text_1:
	.string "Azuretide Town$"

KaolisleHarbor_TakeAFerry_Text_2:
	.string "Shoreslate City$"

KaolisleHarbor_TakeAFerry_Text_3:
	.string "Rockliffe Town$"

KaolisleHarbor_TakeAFerry_Text_4:
	.string "Frosthearth City$"

KaolisleHarbor_TakeAFerry_Text_5:
	.string "Never mind$"

SailToShoreslateInstead::
	.string "I'm sorry, but the harbor at Rockliffe\n"
	.string "Town is currently having some technical\l"
	.string "difficulties, making it impossible for\l"
	.string "the ferry to dock there.\p"
	.string "Would you like to sail to Shoreslate\n"
	.string "City instead?$"

KaolisleHarbor_Text_GetAboard::
	.string "This ferry travels to Shoreslate City\n"
	.string "and Rockliffe Town.\p"
	.string "Would you like to board the ferry?$"

KaolisleHarbor_Man_Text::
	.string "My wife works in Shoreslate City.\p"
	.string "Thanks to the ferry service, moving\n"
	.string "back and forth is astoundingly easy.$"

KaolisleHarbor_Boy_Text::
	.string "We're waiting for mom!$"

KaolisleHarbor_Lass_Text::
	.string "I love taking the ferry!\p"
	.string "Unlike riding on a Pokémon, I can just\n"
	.string "stay inside all day and never have to\l"
	.string "worry about the salty sea air\l"
	.string "frizzing up my hair.$"

Harbor_ComeAgain_Text::
	.string "Let me know if you change your mind.$"

PleaseBoardFerry_Text::
	.string "Very well.\n"
	.string "Right this way to the ferry.$"
