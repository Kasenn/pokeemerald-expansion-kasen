CoralgroveHarvorInterior_MapScripts::
	.byte 0


CoralgroveHarbor_Attendant::
	lock
	faceplayer
	call ExpandedBoatNetwork
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, CoralgroveHarbor_Attendant_2
CoralgroveHarbor_Attendant_1:
	msgbox CoralgroveHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	call Harbor_BoardFerryGoingEast
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	waitstate
	release
	end

CoralgroveHarbor_Attendant_2:
	goto CoralgroveHarbor_TakeAFerry
	goto CoralgroveHarbor_Attendant_1


CoralgroveHarbor_TakeAFerry::
	call InitBoatMultichoice
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_0, 0
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_1, 1
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_2, 2
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_3, 3
	goto_if_set FLAG_VISITED_FROSTFIRE, CoralgroveHarbor_TakeAFerry_2
CoralgroveHarbor_TakeAFerry_1:
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_5, 5
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
	switch VAR_RESULT
	case 0, CoralgroveHarbor_TakeAFerry_6
	case 1, CoralgroveHarbor_TakeAFerry_7
	case 2, CoralgroveHarbor_TakeAFerry_8
	case 3, CoralgroveHarbor_TakeAFerry_9
	case 4, CoralgroveHarbor_TakeAFerry_10
	case 5, CoralgroveHarbor_TakeAFerry_11
	case MULTI_B_PRESSED, CoralgroveHarbor_TakeAFerry_11
CoralgroveHarbor_TakeAFerry_4:
	waitstate
	release
	end

CoralgroveHarbor_TakeAFerry_2:
	dynmultipush CoralgroveHarbor_TakeAFerry_Text_4, 4
	goto CoralgroveHarbor_TakeAFerry_1

CoralgroveHarbor_TakeAFerry_6:
	call Harbor_BoardFerryGoingEast
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_7:
	call Harbor_BoardFerryGoingEast
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_8:
	call Harbor_BoardFerryGoingEast
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_9:
	call Harbor_BoardFerryGoingEast
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_10:
	call Harbor_BoardFerryGoingEast
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto CoralgroveHarbor_TakeAFerry_4

CoralgroveHarbor_TakeAFerry_11:
	goto Harbor_ComeAgain
	goto CoralgroveHarbor_TakeAFerry_4


InitBoatMultichoice::
	msgbox Frosthearth_Text_GetAboard, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq InitBoatMultichoice_2
InitBoatMultichoice_1:
	message InitBoatMultichoice_Text_0
	waitmessage
	return

InitBoatMultichoice_2:
	goto Harbor_ComeAgain
	goto InitBoatMultichoice_1


ExpandedBoatNetwork::
	goto_if_set FLAG_BADGE03_GET, ExpandedBoatNetwork_2
ExpandedBoatNetwork_1:
	return

ExpandedBoatNetwork_2:
	goto_if_unset FLAG_EXPANDED_BOAT_NETWORK, ExpandedBoatNetwork_4
	goto ExpandedBoatNetwork_1

ExpandedBoatNetwork_4:
	msgbox WeHaveExpandedOurNetwork
	setflag FLAG_EXPANDED_BOAT_NETWORK
	goto ExpandedBoatNetwork_1


CoralgroveHarvorInterior_LittleGirl::
	lock
	faceplayer
	msgbox CoralgroveHarvorInterior_LittleGirl_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoralgroveHarvorInterior_Sailor::
	lock
	faceplayer
	msgbox CoralgroveHarvorInterior_Sailor_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoralgroveHarbor_TakeAFerry_Text_0:
	.string "Azuretide Town$"

CoralgroveHarbor_TakeAFerry_Text_1:
	.string "Shoreslate City$"

CoralgroveHarbor_TakeAFerry_Text_2:
	.string "Kaolisle City$"

CoralgroveHarbor_TakeAFerry_Text_3:
	.string "Rockliffe Town$"

CoralgroveHarbor_TakeAFerry_Text_4:
	.string "Frosthearth City$"

CoralgroveHarbor_TakeAFerry_Text_5:
	.string "Nevermind$"

InitBoatMultichoice_Text_0:
	.string "Where would you like to sail?$"

CoralgroveHarvorInterior_LittleGirl_Text_0:
	.string "What a big ship!\pWish I could ride it but I can't go\nunless my parents are with me…$"

CoralgroveHarvorInterior_Sailor_Text_0:
	.string "This ferry is the only way\nto access the mainland.\pAs such, its maintenance is essential\nand must be carried out without delay.$"

CoralgroveHarbor_Text_GetAboard::
	.string "We are just about to depart for the\n"
	.string "small mainland town of Azuretide.\p"
	.string "Would you like to board the ferry?$"

WeHaveExpandedOurNetwork::
	.string "We have recently expanded our\n"
	.string "operations, and the ferry will\l"
	.string "now travel to a wider selection of\l"
	.string "locations.\p"
	.string "Now, with that out of the way…$"
