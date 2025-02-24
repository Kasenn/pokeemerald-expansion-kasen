Rockliffe_Harbor_MapScripts::
	.byte 0


RockliffeHarbor_FerryScript::
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat 1, MAP_ROCKLIFFE_HARBOR
	setvar VAR_0x8004, 2
	call Common_EventScript_FerryDepartIsland
	return


RockliffeHarbor_Attendant::
	lock
	faceplayer
	call ExpandedBoatNetwork
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, RockliffeHarbor_Attendant_2
RockliffeHarbor_Attendant_1:
	msgbox RockliffeHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	message RockliffeHarbor_Attendant_Text_0
	waitmessage
	multichoice 23, 0, MULTI_BOATFROMROCKLIFFE, 0
	switch VAR_RESULT
	case 0, RockliffeHarbor_Attendant_6
	case 1, RockliffeHarbor_Attendant_7
	case 2, RockliffeHarbor_Attendant_8
	case MULTI_B_PRESSED, RockliffeHarbor_Attendant_9
RockliffeHarbor_Attendant_4:
	waitstate
	release
	end

RockliffeHarbor_Attendant_2:
	goto RockliffeHarbor_TakeAFerry
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_6:
	call RockliffeHarbor_FerryScript
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto RockliffeHarbor_Attendant_4

RockliffeHarbor_Attendant_7:
	call RockliffeHarbor_FerryScript
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto RockliffeHarbor_Attendant_4

RockliffeHarbor_Attendant_8:
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_4

RockliffeHarbor_Attendant_9:
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_4


RockliffeHarbor_TakeAFerry::
	call InitBoatMultichoice
	dynmultipush RockliffeHarbor_TakeAFerry_Text_0, 0
	dynmultipush RockliffeHarbor_TakeAFerry_Text_1, 1
	dynmultipush RockliffeHarbor_TakeAFerry_Text_2, 2
	dynmultipush RockliffeHarbor_TakeAFerry_Text_3, 3
	goto_if_set FLAG_VISITED_FROSTFIRE, RockliffeHarbor_TakeAFerry_2
RockliffeHarbor_TakeAFerry_1:
	dynmultipush RockliffeHarbor_TakeAFerry_Text_5, 5
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
	switch VAR_RESULT
	case 0, RockliffeHarbor_TakeAFerry_6
	case 1, RockliffeHarbor_TakeAFerry_7
	case 2, RockliffeHarbor_TakeAFerry_8
	case 3, RockliffeHarbor_TakeAFerry_9
	case 4, RockliffeHarbor_TakeAFerry_10
	case 5, RockliffeHarbor_TakeAFerry_11
	case MULTI_B_PRESSED, RockliffeHarbor_TakeAFerry_11
RockliffeHarbor_TakeAFerry_4:
	waitstate
	release
	end

RockliffeHarbor_TakeAFerry_2:
	dynmultipush RockliffeHarbor_TakeAFerry_Text_4, 4
	goto RockliffeHarbor_TakeAFerry_1

RockliffeHarbor_TakeAFerry_6:
	call RockliffeHarbor_FerryScript
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_7:
	call RockliffeHarbor_FerryScript
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_8:
	call RockliffeHarbor_FerryScript
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_9:
	call RockliffeHarbor_FerryScript
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_10:
	call RockliffeHarbor_FerryScript
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_11:
	goto Harbor_ComeAgain
	goto RockliffeHarbor_TakeAFerry_4


RockliffeHarbor_Attendant_Text_0:
	.string "Where would you like to sail?$"

RockliffeHarbor_TakeAFerry_Text_0:
	.string "Coralgrove City$"

RockliffeHarbor_TakeAFerry_Text_1:
	.string "Azuretide Town$"

RockliffeHarbor_TakeAFerry_Text_2:
	.string "Shoreslate City$"

RockliffeHarbor_TakeAFerry_Text_3:
	.string "Kaolisle City$"

RockliffeHarbor_TakeAFerry_Text_4:
	.string "Frosthearth City$"

RockliffeHarbor_TakeAFerry_Text_5:
	.string "Never mind$"

RockliffeHarbor_Text_GetAboard::
	.string "This ferry travels to Shoreslate City\n"
	.string "and Kaolisle City.\p"
	.string "Would you like to board the ferry?$"
