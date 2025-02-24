CoastTownHarbor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HarborSetFlags
	.byte 0


HarborSetFlags::
	goto_if_unset FLAG_DEFEATED_RIVAL_HARBOR, HarborSetFlags_1
	return

HarborSetFlags_1:
	setflag FLAG_DEFEATED_RIVAL_HARBOR
	setflag FLAG_RIVAL_HARBOR_ANGRY
	return


CoastTownHarbor_Attendant::
	lock
	faceplayer
	call ExpandedBoatNetwork
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, CoastTownHarbor_Attendant_2
CoastTownHarbor_Attendant_1:
	msgbox CoastTownHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CoastTownHarbor_EventScript_ComeAgain
	call CoastTownHarbor_EventScript_BoardFerry
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	waitstate
	release
	end

CoastTownHarbor_Attendant_2:
	goto AzuretideHarbor_TakeAFerry
	goto CoastTownHarbor_Attendant_1


AzuretideHarbor_TakeAFerry::
	call InitBoatMultichoice
	dynmultipush AzuretideHarbor_TakeAFerry_Text_0, 0
	dynmultipush AzuretideHarbor_TakeAFerry_Text_1, 1
	dynmultipush AzuretideHarbor_TakeAFerry_Text_2, 2
	dynmultipush AzuretideHarbor_TakeAFerry_Text_3, 3
	goto_if_set FLAG_VISITED_FROSTFIRE, AzuretideHarbor_TakeAFerry_2
AzuretideHarbor_TakeAFerry_1:
	dynmultipush AzuretideHarbor_TakeAFerry_Text_5, 5
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
	switch VAR_RESULT
	case 0, AzuretideHarbor_TakeAFerry_6
	case 1, AzuretideHarbor_TakeAFerry_7
	case 2, AzuretideHarbor_TakeAFerry_8
	case 3, AzuretideHarbor_TakeAFerry_9
	case 4, AzuretideHarbor_TakeAFerry_10
	case 5, AzuretideHarbor_TakeAFerry_11
	case MULTI_B_PRESSED, AzuretideHarbor_TakeAFerry_11
AzuretideHarbor_TakeAFerry_4:
	waitstate
	release
	end

AzuretideHarbor_TakeAFerry_2:
	dynmultipush AzuretideHarbor_TakeAFerry_Text_4, 4
	goto AzuretideHarbor_TakeAFerry_1

AzuretideHarbor_TakeAFerry_6:
	call CoastTownHarbor_EventScript_BoardFerry
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_7:
	call CoastTownHarbor_EventScript_BoardFerry
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_8:
	call CoastTownHarbor_EventScript_BoardFerry
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_9:
	call CoastTownHarbor_EventScript_BoardFerry
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_10:
	call CoastTownHarbor_EventScript_BoardFerry
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_11:
	goto Harbor_ComeAgain
	goto AzuretideHarbor_TakeAFerry_4


CoastTownHarbor_EventScript_BoardFerry::
	msgbox CoastTownHarbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 30
	hideobjectat 1, MAP_COAST_TOWN_HARBOR
	call_if_eq VAR_FACING, DIR_NORTH, CoastTownHarbor_EventScript_BoardFerryNorth
	call_if_eq VAR_FACING, DIR_WEST, CoastTownHarbor_EventScript_BoardFerryWest
	delay 30
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	call Common2_EventScript_FerryDepart3
	return


CoastTownHarbor_EventScript_ComeAgain::
	msgbox CoastTownHarbor_Text_ComeAgain, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	releaseall
	end


CoastTownHarbor_EventScript_BoardFerryWest::
	applymovement OBJ_EVENT_ID_PLAYER, CoastTownHarbor_Movement_BoardFerryWest
	waitmovement 0
	return


CoastTownHarbor_EventScript_BoardFerryNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	return


CoastTownHarbor_Movement_BoardFerryWest:
	walk_left
	walk_in_place_faster_up
	step_end

Common2_EventScript_FerryDepart3::
	delay 60
	applymovement 2, Movement_FerryDepart3
	waitmovement 0
	return


Movement_FerryDepart3:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

CoastTownHarbor_Boy::
	lock
	faceplayer
	msgbox CoastTownHarbor_Boy_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoastTownHarbor_Sailor::
	lock
	msgbox CoastTownHarbor_Sailor_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


AzuretideHarbor_TakeAFerry_Text_0:
	.string "Coralgrove City$"

AzuretideHarbor_TakeAFerry_Text_1:
	.string "Shoreslate City$"

AzuretideHarbor_TakeAFerry_Text_2:
	.string "Kaolisle City$"

AzuretideHarbor_TakeAFerry_Text_3:
	.string "Rockliffe Town$"

AzuretideHarbor_TakeAFerry_Text_4:
	.string "Frosthearth City$"

AzuretideHarbor_TakeAFerry_Text_5:
	.string "Never mind$"

CoastTownHarbor_Boy_Text_0:
	.string "This is my first time stepping\non the mainland.\pIs this how the astronauts felt when\nthey first stepped on the Moon?$"

CoastTownHarbor_Sailor_Text_0:
	.string "Ahh, what a fine ship!\nMaybe one day I'll be a captain of one.$"

CoastTownHarbor_Text_GetAboard::
	.string "We are just about to depart for\n"
	.string "Coralgrove Harbor.\p"
	.string "Would you like to board the ferry?$"

CoastTownHarbor_Text_ComeAgain::
	.string "Let me know if you change your mind.$"

CoastTownHarbor_Text_PleaseBoardFerry::
	.string "Very well.\nRight this way to the ferry.$"
