CoralgroveHarvorInterior_MapScripts::
	.byte 0


CoralgroveHarbor_Attendant::
# 4 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	lockall
# 5 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	faceplayer
# 6 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	msgbox CoralgroveHarbor_Text_GetAboard, MSGBOX_YESNO
# 7 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 8 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 9 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	warp MAP_COAST_TOWN_HARBOR, 16, 10
# 10 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitstate
# 11 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	release
	end


CoralgroveHarvorInterior_LittleGirl::
# 21 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	lockall
# 22 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	faceplayer
# 23 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	msgbox CoralgroveHarvorInterior_LittleGirl_Text_0, MSGBOX_NPC
# 24 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitmessage
# 25 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	closemessage
# 26 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	release
	end


CoralgroveHarvorInterior_Sailor::
# 31 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	lockall
# 32 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	faceplayer
# 33 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	msgbox CoralgroveHarvorInterior_Sailor_Text_0, MSGBOX_NPC
# 34 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitmessage
# 35 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	closemessage
# 36 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	release
	end


CoralgroveHarvorInterior_LittleGirl_Text_0:
# 23 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "What a big ship!\pWish I could ride it but I can't go\nunless my parents are with me…$"

CoralgroveHarvorInterior_Sailor_Text_0:
# 33 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "This ferry is the only way\nto access the mainland.\pAs such, its maintenance is essential\nand must be carried out without delay.$"

CoralgroveHarbor_Text_GetAboard::
# 14 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "We are just about to depart for the\n"
	.string "small mainland town of Azuretide.\p"
	.string "Would you like to board the ferry?$"
