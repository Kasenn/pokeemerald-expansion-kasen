Kaolisle_Harbor_MapScripts::
	.byte 0


KaolisleHarbor_Attendant::
	lockall
	faceplayer
	msgbox KaolisleHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	message KaolisleHarbor_Attendant_Text_0
	waitmessage
	multichoice 23, 0, MULTI_BOATFROMKAOLISLE, 0
	switch VAR_RESULT
	case 0, KaolisleHarbor_Attendant_3
	case 1, KaolisleHarbor_Attendant_4
	case 2, KaolisleHarbor_Attendant_5
	case MULTI_B_PRESSED, KaolisleHarbor_Attendant_6
KaolisleHarbor_Attendant_1:
	waitstate
	release
	end

KaolisleHarbor_Attendant_3:
	call Harbor_BoardFerryGoingEast
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_4:
	msgbox KaolisleHarbor_Attendant_Text_1, MSGBOX_NPC
	end

KaolisleHarbor_Attendant_5:
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_6:
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_1


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
	applymovement OBJ_EVENT_ID_PLAYER, Movement_BoardFerryNorth
	waitmovement 0
	return


Movement_BoardFerryNorth:
	walk_up
	step_end

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

KaolisleHarbor_Attendant_Text_1:
	.string "This choice is not yet ready.\nSorry!$"

KaolisleHarbor_Text_GetAboard::
	.string "This ferry travels to Shoreslate City\n"
	.string "and WIP TOWN.\p"
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
