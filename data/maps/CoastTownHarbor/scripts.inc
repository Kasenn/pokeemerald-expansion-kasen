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
	lockall
	faceplayer
	msgbox CoastTownHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CoastTownHarbor_EventScript_ComeAgain
	call CoastTownHarbor_EventScript_BoardFerry
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	waitstate
	release
	end


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
	lockall
	faceplayer
	msgbox CoastTownHarbor_Boy_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoastTownHarbor_Sailor::
	lockall
	msgbox CoastTownHarbor_Sailor_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


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
