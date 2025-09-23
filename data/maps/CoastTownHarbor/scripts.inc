CoastTownHarbor_MapScripts::
# 2 "data/maps/CoastTownHarbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HarborSetFlags
# 3 "data/maps/CoastTownHarbor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/CoastTownHarbor/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 5 "data/maps/CoastTownHarbor/scripts.pory"
	goto_if_set FLAG_Q02_ELEVATOR_RIVAL_START, CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 9 "data/maps/CoastTownHarbor/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 6 "data/maps/CoastTownHarbor/scripts.pory"
	completequest FLAG_Q02_ELEVATOR_RIVAL_COMPLETE
# 7 "data/maps/CoastTownHarbor/scripts.pory"
	special ShowJournalPopupRemove
	goto CoastTownHarbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


HarborSetFlags::
# 15 "data/maps/CoastTownHarbor/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RIVAL_HARBOR, HarborSetFlags_1
	return

HarborSetFlags_1:
# 16 "data/maps/CoastTownHarbor/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 17 "data/maps/CoastTownHarbor/scripts.pory"
	setflag FLAG_RIVAL_HARBOR_ANGRY
# 18 "data/maps/CoastTownHarbor/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


CoastTownHarbor_Attendant::
# 23 "data/maps/CoastTownHarbor/scripts.pory"
	lock
# 24 "data/maps/CoastTownHarbor/scripts.pory"
	faceplayer
# 25 "data/maps/CoastTownHarbor/scripts.pory"
	call ExpandedBoatNetwork
# 26 "data/maps/CoastTownHarbor/scripts.pory"
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, CoastTownHarbor_Attendant_2
CoastTownHarbor_Attendant_1:
# 29 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Text_GetAboard, MSGBOX_YESNO
# 30 "data/maps/CoastTownHarbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CoastTownHarbor_EventScript_ComeAgain
# 31 "data/maps/CoastTownHarbor/scripts.pory"
	call CoastTownHarbor_EventScript_BoardFerry
# 32 "data/maps/CoastTownHarbor/scripts.pory"
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
# 33 "data/maps/CoastTownHarbor/scripts.pory"
	waitstate
# 34 "data/maps/CoastTownHarbor/scripts.pory"
	release
	end

CoastTownHarbor_Attendant_2:
# 27 "data/maps/CoastTownHarbor/scripts.pory"
	goto AzuretideHarbor_TakeAFerry
	goto CoastTownHarbor_Attendant_1


AzuretideHarbor_TakeAFerry::
# 38 "data/maps/CoastTownHarbor/scripts.pory"
	call InitBoatMultichoice
# 39 "data/maps/CoastTownHarbor/scripts.pory"
	dynmultipush AzuretideHarbor_TakeAFerry_Text_0, 0
# 40 "data/maps/CoastTownHarbor/scripts.pory"
	dynmultipush AzuretideHarbor_TakeAFerry_Text_1, 1
# 41 "data/maps/CoastTownHarbor/scripts.pory"
	dynmultipush AzuretideHarbor_TakeAFerry_Text_2, 2
# 42 "data/maps/CoastTownHarbor/scripts.pory"
	dynmultipush AzuretideHarbor_TakeAFerry_Text_3, 3
# 43 "data/maps/CoastTownHarbor/scripts.pory"
	goto_if_set FLAG_VISITED_FROSTHEARTH, AzuretideHarbor_TakeAFerry_2
AzuretideHarbor_TakeAFerry_1:
# 46 "data/maps/CoastTownHarbor/scripts.pory"
	dynmultipush AzuretideHarbor_TakeAFerry_Text_5, 5
# 47 "data/maps/CoastTownHarbor/scripts.pory"
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
# 48 "data/maps/CoastTownHarbor/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/CoastTownHarbor/scripts.pory"
	case 0, AzuretideHarbor_TakeAFerry_6
# 52 "data/maps/CoastTownHarbor/scripts.pory"
	case 1, AzuretideHarbor_TakeAFerry_7
# 55 "data/maps/CoastTownHarbor/scripts.pory"
	case 2, AzuretideHarbor_TakeAFerry_8
# 58 "data/maps/CoastTownHarbor/scripts.pory"
	case 3, AzuretideHarbor_TakeAFerry_9
# 61 "data/maps/CoastTownHarbor/scripts.pory"
	case 4, AzuretideHarbor_TakeAFerry_10
# 64 "data/maps/CoastTownHarbor/scripts.pory"
	case 5, AzuretideHarbor_TakeAFerry_11
# 65 "data/maps/CoastTownHarbor/scripts.pory"
	case MULTI_B_PRESSED, AzuretideHarbor_TakeAFerry_11
AzuretideHarbor_TakeAFerry_4:
# 68 "data/maps/CoastTownHarbor/scripts.pory"
	waitstate
# 69 "data/maps/CoastTownHarbor/scripts.pory"
	release
	end

AzuretideHarbor_TakeAFerry_2:
# 44 "data/maps/CoastTownHarbor/scripts.pory"
	dynmultipush AzuretideHarbor_TakeAFerry_Text_4, 4
	goto AzuretideHarbor_TakeAFerry_1

AzuretideHarbor_TakeAFerry_6:
# 50 "data/maps/CoastTownHarbor/scripts.pory"
	call CoastTownHarbor_EventScript_BoardFerry
# 51 "data/maps/CoastTownHarbor/scripts.pory"
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_7:
# 53 "data/maps/CoastTownHarbor/scripts.pory"
	call CoastTownHarbor_EventScript_BoardFerry
# 54 "data/maps/CoastTownHarbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_8:
# 56 "data/maps/CoastTownHarbor/scripts.pory"
	call CoastTownHarbor_EventScript_BoardFerry
# 57 "data/maps/CoastTownHarbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_9:
# 59 "data/maps/CoastTownHarbor/scripts.pory"
	call CoastTownHarbor_EventScript_BoardFerry
# 60 "data/maps/CoastTownHarbor/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_10:
# 62 "data/maps/CoastTownHarbor/scripts.pory"
	call CoastTownHarbor_EventScript_BoardFerry
# 63 "data/maps/CoastTownHarbor/scripts.pory"
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto AzuretideHarbor_TakeAFerry_4

AzuretideHarbor_TakeAFerry_11:
# 66 "data/maps/CoastTownHarbor/scripts.pory"
	goto Harbor_ComeAgain
	goto AzuretideHarbor_TakeAFerry_4


CoastTownHarbor_EventScript_BoardFerry::
# 73 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 74 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 75 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 76 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
# 77 "data/maps/CoastTownHarbor/scripts.pory"
	delay 30
# 78 "data/maps/CoastTownHarbor/scripts.pory"
	hideobjectat 1, MAP_COAST_TOWN_HARBOR
# 79 "data/maps/CoastTownHarbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, CoastTownHarbor_EventScript_BoardFerryNorth
# 80 "data/maps/CoastTownHarbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CoastTownHarbor_EventScript_BoardFerryWest
# 81 "data/maps/CoastTownHarbor/scripts.pory"
	delay 30
# 82 "data/maps/CoastTownHarbor/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 83 "data/maps/CoastTownHarbor/scripts.pory"
	call Common2_EventScript_FerryDepart3
	return


CoastTownHarbor_EventScript_ComeAgain::
# 88 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Text_ComeAgain, MSGBOX_DEFAULT
# 89 "data/maps/CoastTownHarbor/scripts.pory"
	waitmessage
# 90 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 91 "data/maps/CoastTownHarbor/scripts.pory"
	release
# 92 "data/maps/CoastTownHarbor/scripts.pory"
	releaseall
	end


CoastTownHarbor_EventScript_BoardFerryWest::
# 97 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement LOCALID_PLAYER, CoastTownHarbor_Movement_BoardFerryWest
# 98 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
	return


CoastTownHarbor_EventScript_BoardFerryNorth::
# 102 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 103 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
	return


# 106 "data/maps/CoastTownHarbor/scripts.pory"
CoastTownHarbor_Movement_BoardFerryWest:
# 107 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 108 "data/maps/CoastTownHarbor/scripts.pory"
	walk_in_place_faster_up
# 109 "data/maps/CoastTownHarbor/scripts.pory"
	step_end

Common2_EventScript_FerryDepart3::
# 113 "data/maps/CoastTownHarbor/scripts.pory"
	delay 60
# 114 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement 2, Movement_FerryDepart3
# 115 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
	return


# 118 "data/maps/CoastTownHarbor/scripts.pory"
Movement_FerryDepart3:
# 119 "data/maps/CoastTownHarbor/scripts.pory"
	walk_slow_left
# 119 "data/maps/CoastTownHarbor/scripts.pory"
	walk_slow_left
# 119 "data/maps/CoastTownHarbor/scripts.pory"
	walk_slow_left
# 120 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 120 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 120 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 120 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 121 "data/maps/CoastTownHarbor/scripts.pory"
	step_end

CoastTownHarbor_Boy::
# 137 "data/maps/CoastTownHarbor/scripts.pory"
	lock
# 138 "data/maps/CoastTownHarbor/scripts.pory"
	faceplayer
# 139 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Boy_Text_0, MSGBOX_NPC
# 140 "data/maps/CoastTownHarbor/scripts.pory"
	waitmessage
# 141 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 142 "data/maps/CoastTownHarbor/scripts.pory"
	release
	end


CoastTownHarbor_Sailor::
# 147 "data/maps/CoastTownHarbor/scripts.pory"
	lock
# 148 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Sailor_Text_0, MSGBOX_DEFAULT
# 149 "data/maps/CoastTownHarbor/scripts.pory"
	waitmessage
# 150 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 151 "data/maps/CoastTownHarbor/scripts.pory"
	release
	end


AzuretideHarbor_TakeAFerry_Text_0:
# 39 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Coralgrove City$"

AzuretideHarbor_TakeAFerry_Text_1:
# 40 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Shoreslate City$"

AzuretideHarbor_TakeAFerry_Text_2:
# 41 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Kaolisle City$"

AzuretideHarbor_TakeAFerry_Text_3:
# 42 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Rockliffe Town$"

AzuretideHarbor_TakeAFerry_Text_4:
# 44 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Frosthearth City$"

AzuretideHarbor_TakeAFerry_Text_5:
# 46 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Never mind$"

CoastTownHarbor_Boy_Text_0:
# 139 "data/maps/CoastTownHarbor/scripts.pory"
	.string "This is my first time stepping\non the mainland.\pIs this how the astronauts felt when\nthey first stepped on the Moon?$"

CoastTownHarbor_Sailor_Text_0:
# 148 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Ahh, what a fine ship!\nMaybe one day I'll be a captain of one.$"

CoastTownHarbor_Text_GetAboard::
# 124 "data/maps/CoastTownHarbor/scripts.pory"
	.string "We are just about to depart for\n"
	.string "Coralgrove Harbor.\p"
	.string "Would you like to board the ferry?$"

CoastTownHarbor_Text_ComeAgain::
# 129 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Let me know if you change your mind.$"

CoastTownHarbor_Text_PleaseBoardFerry::
# 132 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Very well.\nRight this way to the ferry.$"
