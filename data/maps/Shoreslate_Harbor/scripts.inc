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
	msgbox ShoreslateHarbor_EndOfBeta, MSGBOX_NPC
	end

	msgbox ShoreslateHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ShoreslateHarbor_EventScript_ComeAgain
	call ShoreslateHarbor_EventScript_BoardFerry
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	waitstate
	release
	end

ShoreslateHarbor_Attendant_2:
	msgbox ShoreslateHarbor_BoatJustLeft, MSGBOX_NPC
	end


ShoreslateHarbor_EventScript_BoardFerry::
	msgbox ShoreslateHarbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 30
	hideobjectat 1, MAP_SHORESLATE_HARBOR
	call_if_eq VAR_FACING, DIR_NORTH, ShoreslateHarbor_EventScript_BoardFerryNorth
	call_if_eq VAR_FACING, DIR_WEST, ShoreslateHarbor_EventScript_BoardFerryWest
	delay 30
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	call Common2_EventScript_FerryDepart3
	return


ShoreslateHarbor_EventScript_ComeAgain::
	msgbox ShoreslateHarbor_Text_ComeAgain, MSGBOX_DEFAULT
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
	applymovement OBJ_EVENT_ID_PLAYER, CoastTownHarbor_Movement_BoardFerryNorth
	waitmovement 0
	return


ShoreslateHarbor_Boy::
	msgbox ShoreslateHarbor_Boy_Text, MSGBOX_NPC
	end


ShoreslateHarbor_Sailor::
	msgbox ShoreslateHarbor_Sailor_Text, MSGBOX_NPC
	end


ShoreslateHarbor_BoatJustLeft::
	.string "I'm sorry, but the ferry to Kaolisle\n"
	.string "City has just departed.\p"
	.string "It will take some time before\n"
	.string "the ferry returns.$"

ShoreslateHarbor_EndOfBeta::
	.string "I'm sorry, but this is the end\n"
	.string "of the current release.\p"
	.string "Please come back when the rom hack\n"
	.string "creator decides to update the project.$"

ShoreslateHarbor_Text_GetAboard::
	.string "We are just about to depart for\n"
	.string "Kaolisle City.\p"
	.string "Would you like to board the ferry?$"

ShoreslateHarbor_Text_ComeAgain::
	.string "Let me know if you change your mind.$"

ShoreslateHarbor_Text_PleaseBoardFerry::
	.string "Very well.\nRight this way to the ferry.$"

ShoreslateHarbor_Boy_Text::
	.string "I'm on a quest to fish in every\n"
	.string "unique location across Sinko.\p"
	.string "I heard Kaolisle City has some of the\n"
	.string "most unique species imaginable!$"

ShoreslateHarbor_Sailor_Text::
	.string "Have you been to the Shoreslate Market?\n"
	.string "I plan to head there myself as soon as\l"
	.string "I've given my old bones a moment's rest.$"
