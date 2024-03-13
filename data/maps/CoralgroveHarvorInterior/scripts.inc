CoralgroveHarvorInterior_MapScripts::
	.byte 0


CoralgroveHarbor_Attendant::
	lockall
	faceplayer
	msgbox CoralgroveHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	call Harbor_BoardFerryGoingEast
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	waitstate
	release
	end


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

CoralgroveHarbor_Text_GetAboard::
	.string "We are just about to depart for the\n"
	.string "small mainland town of Azuretide.\p"
	.string "Would you like to board the ferry?$"
