CoralgroveHarvorInterior_MapScripts::
	.byte 0


CoralgroveHarvorInterior_Attendant::
	lockall
	faceplayer
	msgbox CoralgroveHarvorInterior_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CoralgroveHarvorInterior_EventScript_ComeAgain
	call CoralgroveHarvorInterior_EventScript_BoardFerry
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	waitstate
	release
	end


CoralgroveHarvorInterior_EventScript_BoardFerry::
	msgbox CoralgroveHarvorInterior_Text_PleaseBoardFerry, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 30
	hideobjectat 3, MAP_CORALGROVE_HARVOR_INTERIOR
	call_if_eq VAR_FACING, DIR_NORTH, CoralgroveHarvorInterior_EventScript_BoardFerryNorth
	call_if_eq VAR_FACING, DIR_EAST, CoralgroveHarvorInterior_EventScript_BoardFerryEast
	delay 30
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	call Common2_EventScript_FerryDepart
	return


CoralgroveHarvorInterior_EventScript_ComeAgain::
	msgbox CoralgroveHarvorInterior_Text_ComeAgain, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	releaseall
	end


CoralgroveHarvorInterior_EventScript_BoardFerryEast::
	applymovement OBJ_EVENT_ID_PLAYER, CoralgroveHarvorInterior_Movement_BoardFerryEast
	waitmovement 0
	return


CoralgroveHarvorInterior_EventScript_BoardFerryNorth::
	applymovement OBJ_EVENT_ID_PLAYER, CoralgroveHarvorInterior_Movement_BoardFerryNorth
	waitmovement 0
	return


CoralgroveHarvorInterior_Movement_BoardFerryEast:
	walk_right
	walk_in_place_faster_up
	step_end

CoralgroveHarvorInterior_Movement_BoardFerryNorth:
	walk_up
	step_end

Common2_EventScript_FerryDepart::
	delay 60
	applymovement 4, Movement_FerryDepart2
	waitmovement 0
	return


Movement_FerryDepart2:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

CoralgroveHarvorInterior_LittleGirl::
	lockall
	faceplayer
	msgbox CoralgroveHarvorInterior_LittleGirl_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoralgroveHarvorInterior_Sailor::
	lockall
	faceplayer
	msgbox CoralgroveHarvorInterior_Sailor_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoralgroveHarvorInterior_LittleGirl_Text_0:
	.string "What a big ship!\pWish I could ride it but I can't go\nunless my parents are with me…$"

CoralgroveHarvorInterior_Sailor_Text_0:
	.string "This ferry is the only way\nto access the mainland.\pAs such, its maintenance is essential\nand must be carried out without delay.$"

CoralgroveHarvorInterior_Text_GetAboard::
	.string "We are just about to depart for the\n"
	.string "small mainland town of Azuretide.\p"
	.string "Would you like to board the ferry?$"

CoralgroveHarvorInterior_Text_ComeAgain::
	.string "Let me know if you change your mind.$"

CoralgroveHarvorInterior_Text_PleaseBoardFerry::
	.string "Very well.\nRight this way to the ferry.$"
