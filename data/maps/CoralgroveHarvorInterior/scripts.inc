CoralgroveHarvorInterior_MapScripts::
	.byte 0


CoralgroveHarbor_Attendant::
# 4 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	lock
# 5 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	faceplayer
# 6 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call ExpandedBoatNetwork
# 7 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, CoralgroveHarbor_Attendant_2
CoralgroveHarbor_Attendant_1:
# 10 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	msgbox CoralgroveHarbor_Text_GetAboard, MSGBOX_YESNO
# 11 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 12 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 13 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	warp MAP_COAST_TOWN_HARBOR, 16, 10
# 14 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitstate
# 15 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	release
	end

CoralgroveHarbor_Attendant_2:
# 8 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto CoralgroveHarbor_TakeAFerry
	goto CoralgroveHarbor_Attendant_1


CoralgroveHarbor_TakeAFerry::
# 25 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call InitBoatMultichoice
# 26 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_0, 0
# 27 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_1, 1
# 28 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_2, 2
# 29 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_3, 3
# 30 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto_if_set FLAG_VISITED_FROSTFIRE, CoralgroveHarbor_TakeAFerry_2
CoralgroveHarbor_TakeAFerry_1:
# 33 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_5, 5
# 34 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
# 35 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	case 0, CoralgroveHarbor_TakeAFerry_6
# 39 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	case 1, CoralgroveHarbor_TakeAFerry_7
# 42 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	case 2, CoralgroveHarbor_TakeAFerry_8
# 45 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	case 3, CoralgroveHarbor_TakeAFerry_9
# 48 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	case 4, CoralgroveHarbor_TakeAFerry_10
# 51 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	case 5, CoralgroveHarbor_TakeAFerry_11
# 52 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	case MULTI_B_PRESSED, CoralgroveHarbor_TakeAFerry_11
CoralgroveHarbor_TakeAFerry_4:
# 55 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitstate
# 56 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	release
	end

CoralgroveHarbor_TakeAFerry_2:
# 31 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_4, 4
	goto CoralgroveHarbor_TakeAFerry_1

CoralgroveHarbor_TakeAFerry_6:
# 37 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 38 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_7:
# 40 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 41 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_8:
# 43 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 44 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_9:
# 46 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 47 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_10:
# 49 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 50 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_11:
# 53 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto Harbor_ComeAgain
	goto CoralgroveHarbor_TakeAFerry_4


InitBoatMultichoice::
	msgbox Frosthearth_Text_GetAboard, MSGBOX_YESNO
# 0 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq InitBoatMultichoice_2
InitBoatMultichoice_1:
# 64 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	message InitBoatMultichoice_Text_0
# 65 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitmessage
	return

InitBoatMultichoice_2:
# 62 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto Harbor_ComeAgain
	goto InitBoatMultichoice_1


ExpandedBoatNetwork::
# 70 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ExpandedBoatNetwork_2
ExpandedBoatNetwork_1:
	return

ExpandedBoatNetwork_2:
# 71 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	goto_if_unset FLAG_EXPANDED_BOAT_NETWORK, ExpandedBoatNetwork_4
	goto ExpandedBoatNetwork_1

ExpandedBoatNetwork_4:
# 72 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	msgbox WeHaveExpandedOurNetwork
# 73 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	setflag FLAG_EXPANDED_BOAT_NETWORK
	goto ExpandedBoatNetwork_1


CoralgroveHarvorInterior_LittleGirl::
# 87 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	lock
# 88 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	faceplayer
# 89 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	msgbox CoralgroveHarvorInterior_LittleGirl_Text_0, MSGBOX_NPC
# 90 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitmessage
# 91 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	closemessage
# 92 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	release
	end


CoralgroveHarvorInterior_Sailor::
# 97 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	lock
# 98 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	faceplayer
# 99 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	msgbox CoralgroveHarvorInterior_Sailor_Text_0, MSGBOX_NPC
# 100 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	waitmessage
# 101 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	closemessage
# 102 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	release
	end


CoralgroveHarbor_TakeAFerry_Text_0:
# 26 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "Azuretide Town$"

CoralgroveHarbor_TakeAFerry_Text_1:
# 27 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "Shoreslate City$"

CoralgroveHarbor_TakeAFerry_Text_2:
# 28 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "Kaolisle City$"

CoralgroveHarbor_TakeAFerry_Text_3:
# 29 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "Rockliffe Town$"

CoralgroveHarbor_TakeAFerry_Text_4:
# 31 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "Frosthearth City$"

CoralgroveHarbor_TakeAFerry_Text_5:
# 33 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "Never mind$"

InitBoatMultichoice_Text_0:
# 64 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "Where would you like to sail?$"

CoralgroveHarvorInterior_LittleGirl_Text_0:
# 89 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "What a big ship!\pWish I could ride it but I can't go\nunless my parents are with me…$"

CoralgroveHarvorInterior_Sailor_Text_0:
# 99 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "This ferry is the only way\nto access the mainland.\pAs such, its maintenance is essential\nand must be carried out without delay.$"

CoralgroveHarbor_Text_GetAboard::
# 18 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "We are just about to depart for the\n"
	.string "small mainland town of Azuretide.\p"
	.string "Would you like to board the ferry?$"

WeHaveExpandedOurNetwork::
# 78 "data/maps/CoralgroveHarvorInterior/scripts.pory"
	.string "We have recently expanded our\n"
	.string "operations, and the ferry will\l"
	.string "now travel to a wider selection of\l"
	.string "locations.\p"
	.string "Now, with that out of the way…$"
