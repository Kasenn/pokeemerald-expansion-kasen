Rockliffe_Harbor_MapScripts::
	.byte 0


RockliffeHarbor_FerryScript::
# 4 "data/maps/Rockliffe_Harbor/scripts.pory"
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
# 5 "data/maps/Rockliffe_Harbor/scripts.pory"
	closemessage
# 6 "data/maps/Rockliffe_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 7 "data/maps/Rockliffe_Harbor/scripts.pory"
	waitmovement 0
# 8 "data/maps/Rockliffe_Harbor/scripts.pory"
	delay 30
# 9 "data/maps/Rockliffe_Harbor/scripts.pory"
	hideobjectat 1, MAP_ROCKLIFFE_HARBOR
# 10 "data/maps/Rockliffe_Harbor/scripts.pory"
	setvar VAR_0x8004, 2
# 11 "data/maps/Rockliffe_Harbor/scripts.pory"
	call Common_EventScript_FerryDepartIsland
	return


RockliffeHarbor_Attendant::
# 15 "data/maps/Rockliffe_Harbor/scripts.pory"
	lock
# 16 "data/maps/Rockliffe_Harbor/scripts.pory"
	faceplayer
# 17 "data/maps/Rockliffe_Harbor/scripts.pory"
	call ExpandedBoatNetwork
# 18 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, RockliffeHarbor_Attendant_2
RockliffeHarbor_Attendant_1:
# 21 "data/maps/Rockliffe_Harbor/scripts.pory"
	msgbox RockliffeHarbor_Text_GetAboard, MSGBOX_YESNO
# 22 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 23 "data/maps/Rockliffe_Harbor/scripts.pory"
	message RockliffeHarbor_Attendant_Text_0
# 24 "data/maps/Rockliffe_Harbor/scripts.pory"
	waitmessage
# 25 "data/maps/Rockliffe_Harbor/scripts.pory"
	multichoice 23, 0, MULTI_BOATFROMROCKLIFFE, 0
# 26 "data/maps/Rockliffe_Harbor/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 0, RockliffeHarbor_Attendant_6
# 30 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 1, RockliffeHarbor_Attendant_7
# 33 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 2, RockliffeHarbor_Attendant_8
# 35 "data/maps/Rockliffe_Harbor/scripts.pory"
	case MULTI_B_PRESSED, RockliffeHarbor_Attendant_9
RockliffeHarbor_Attendant_4:
# 38 "data/maps/Rockliffe_Harbor/scripts.pory"
	waitstate
# 39 "data/maps/Rockliffe_Harbor/scripts.pory"
	release
	end

RockliffeHarbor_Attendant_2:
# 19 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto RockliffeHarbor_TakeAFerry
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_6:
# 28 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 29 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto RockliffeHarbor_Attendant_4

RockliffeHarbor_Attendant_7:
# 31 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 32 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto RockliffeHarbor_Attendant_4

RockliffeHarbor_Attendant_8:
# 34 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_4

RockliffeHarbor_Attendant_9:
# 36 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_4


RockliffeHarbor_TakeAFerry::
# 44 "data/maps/Rockliffe_Harbor/scripts.pory"
	call InitBoatMultichoice
# 45 "data/maps/Rockliffe_Harbor/scripts.pory"
	dynmultipush RockliffeHarbor_TakeAFerry_Text_0, 0
# 46 "data/maps/Rockliffe_Harbor/scripts.pory"
	dynmultipush RockliffeHarbor_TakeAFerry_Text_1, 1
# 47 "data/maps/Rockliffe_Harbor/scripts.pory"
	dynmultipush RockliffeHarbor_TakeAFerry_Text_2, 2
# 48 "data/maps/Rockliffe_Harbor/scripts.pory"
	dynmultipush RockliffeHarbor_TakeAFerry_Text_3, 3
# 49 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto_if_set FLAG_VISITED_FROSTHEARTH, RockliffeHarbor_TakeAFerry_2
RockliffeHarbor_TakeAFerry_1:
# 52 "data/maps/Rockliffe_Harbor/scripts.pory"
	dynmultipush RockliffeHarbor_TakeAFerry_Text_5, 5
# 53 "data/maps/Rockliffe_Harbor/scripts.pory"
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
# 54 "data/maps/Rockliffe_Harbor/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 0, RockliffeHarbor_TakeAFerry_6
# 58 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 1, RockliffeHarbor_TakeAFerry_7
# 61 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 2, RockliffeHarbor_TakeAFerry_8
# 64 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 3, RockliffeHarbor_TakeAFerry_9
# 67 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 4, RockliffeHarbor_TakeAFerry_10
# 70 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 5, RockliffeHarbor_TakeAFerry_11
# 71 "data/maps/Rockliffe_Harbor/scripts.pory"
	case MULTI_B_PRESSED, RockliffeHarbor_TakeAFerry_11
RockliffeHarbor_TakeAFerry_4:
# 74 "data/maps/Rockliffe_Harbor/scripts.pory"
	waitstate
# 75 "data/maps/Rockliffe_Harbor/scripts.pory"
	release
	end

RockliffeHarbor_TakeAFerry_2:
# 50 "data/maps/Rockliffe_Harbor/scripts.pory"
	dynmultipush RockliffeHarbor_TakeAFerry_Text_4, 4
	goto RockliffeHarbor_TakeAFerry_1

RockliffeHarbor_TakeAFerry_6:
# 56 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 57 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_7:
# 59 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 60 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_8:
# 62 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 63 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_9:
# 65 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 66 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_10:
# 68 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 69 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto RockliffeHarbor_TakeAFerry_4

RockliffeHarbor_TakeAFerry_11:
# 72 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto RockliffeHarbor_TakeAFerry_4


RockliffeHarbor_Attendant_Text_0:
# 23 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Where would you like to sail?$"

RockliffeHarbor_TakeAFerry_Text_0:
# 45 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Coralgrove City$"

RockliffeHarbor_TakeAFerry_Text_1:
# 46 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Azuretide Town$"

RockliffeHarbor_TakeAFerry_Text_2:
# 47 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Shoreslate City$"

RockliffeHarbor_TakeAFerry_Text_3:
# 48 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Kaolisle City$"

RockliffeHarbor_TakeAFerry_Text_4:
# 50 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Frosthearth City$"

RockliffeHarbor_TakeAFerry_Text_5:
# 52 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Never mind$"

RockliffeHarbor_Text_GetAboard::
# 79 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "This ferry travels to Shoreslate City\n"
	.string "and Kaolisle City.\p"
	.string "Would you like to board the ferry?$"
