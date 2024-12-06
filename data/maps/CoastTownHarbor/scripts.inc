CoastTownHarbor_MapScripts::
# 2 "data/maps/CoastTownHarbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HarborSetFlags
	.byte 0


HarborSetFlags::
# 6 "data/maps/CoastTownHarbor/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RIVAL_HARBOR, HarborSetFlags_1
	return

HarborSetFlags_1:
# 7 "data/maps/CoastTownHarbor/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 8 "data/maps/CoastTownHarbor/scripts.pory"
	setflag FLAG_RIVAL_HARBOR_ANGRY
	return


CoastTownHarbor_Attendant::
# 13 "data/maps/CoastTownHarbor/scripts.pory"
	lockall
# 14 "data/maps/CoastTownHarbor/scripts.pory"
	faceplayer
# 15 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Text_GetAboard, MSGBOX_YESNO
# 16 "data/maps/CoastTownHarbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CoastTownHarbor_EventScript_ComeAgain
# 17 "data/maps/CoastTownHarbor/scripts.pory"
	call CoastTownHarbor_EventScript_BoardFerry
# 18 "data/maps/CoastTownHarbor/scripts.pory"
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
# 19 "data/maps/CoastTownHarbor/scripts.pory"
	waitstate
# 20 "data/maps/CoastTownHarbor/scripts.pory"
	release
	end


CoastTownHarbor_EventScript_BoardFerry::
# 24 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 25 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 26 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 27 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
# 28 "data/maps/CoastTownHarbor/scripts.pory"
	delay 30
# 29 "data/maps/CoastTownHarbor/scripts.pory"
	hideobjectat 1, MAP_COAST_TOWN_HARBOR
# 30 "data/maps/CoastTownHarbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, CoastTownHarbor_EventScript_BoardFerryNorth
# 31 "data/maps/CoastTownHarbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CoastTownHarbor_EventScript_BoardFerryWest
# 32 "data/maps/CoastTownHarbor/scripts.pory"
	delay 30
# 33 "data/maps/CoastTownHarbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 34 "data/maps/CoastTownHarbor/scripts.pory"
	call Common2_EventScript_FerryDepart3
	return


CoastTownHarbor_EventScript_ComeAgain::
# 39 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Text_ComeAgain, MSGBOX_DEFAULT
# 40 "data/maps/CoastTownHarbor/scripts.pory"
	waitmessage
# 41 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 42 "data/maps/CoastTownHarbor/scripts.pory"
	release
# 43 "data/maps/CoastTownHarbor/scripts.pory"
	releaseall
	end


CoastTownHarbor_EventScript_BoardFerryWest::
# 48 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CoastTownHarbor_Movement_BoardFerryWest
# 49 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
	return


CoastTownHarbor_EventScript_BoardFerryNorth::
# 53 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 54 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
	return


# 57 "data/maps/CoastTownHarbor/scripts.pory"
CoastTownHarbor_Movement_BoardFerryWest:
# 58 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 59 "data/maps/CoastTownHarbor/scripts.pory"
	walk_in_place_faster_up
# 60 "data/maps/CoastTownHarbor/scripts.pory"
	step_end

Common2_EventScript_FerryDepart3::
# 64 "data/maps/CoastTownHarbor/scripts.pory"
	delay 60
# 65 "data/maps/CoastTownHarbor/scripts.pory"
	applymovement 2, Movement_FerryDepart3
# 66 "data/maps/CoastTownHarbor/scripts.pory"
	waitmovement 0
	return


# 69 "data/maps/CoastTownHarbor/scripts.pory"
Movement_FerryDepart3:
# 70 "data/maps/CoastTownHarbor/scripts.pory"
	walk_slow_left
# 70 "data/maps/CoastTownHarbor/scripts.pory"
	walk_slow_left
# 70 "data/maps/CoastTownHarbor/scripts.pory"
	walk_slow_left
# 71 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 71 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 71 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 71 "data/maps/CoastTownHarbor/scripts.pory"
	walk_left
# 72 "data/maps/CoastTownHarbor/scripts.pory"
	step_end

CoastTownHarbor_Boy::
# 88 "data/maps/CoastTownHarbor/scripts.pory"
	lockall
# 89 "data/maps/CoastTownHarbor/scripts.pory"
	faceplayer
# 90 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Boy_Text_0, MSGBOX_NPC
# 91 "data/maps/CoastTownHarbor/scripts.pory"
	waitmessage
# 92 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 93 "data/maps/CoastTownHarbor/scripts.pory"
	release
	end


CoastTownHarbor_Sailor::
# 98 "data/maps/CoastTownHarbor/scripts.pory"
	lockall
# 99 "data/maps/CoastTownHarbor/scripts.pory"
	msgbox CoastTownHarbor_Sailor_Text_0, MSGBOX_DEFAULT
# 100 "data/maps/CoastTownHarbor/scripts.pory"
	waitmessage
# 101 "data/maps/CoastTownHarbor/scripts.pory"
	closemessage
# 102 "data/maps/CoastTownHarbor/scripts.pory"
	release
	end


CoastTownHarbor_Boy_Text_0:
# 90 "data/maps/CoastTownHarbor/scripts.pory"
	.string "This is my first time stepping\non the mainland.\pIs this how the astronauts felt when\nthey first stepped on the Moon?$"

CoastTownHarbor_Sailor_Text_0:
# 99 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Ahh, what a fine ship!\nMaybe one day I'll be a captain of one.$"

CoastTownHarbor_Text_GetAboard::
# 75 "data/maps/CoastTownHarbor/scripts.pory"
	.string "We are just about to depart for\n"
	.string "Coralgrove Harbor.\p"
	.string "Would you like to board the ferry?$"

CoastTownHarbor_Text_ComeAgain::
# 80 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Let me know if you change your mind.$"

CoastTownHarbor_Text_PleaseBoardFerry::
# 83 "data/maps/CoastTownHarbor/scripts.pory"
	.string "Very well.\nRight this way to the ferry.$"
