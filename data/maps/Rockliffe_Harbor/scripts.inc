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
	lockall
# 16 "data/maps/Rockliffe_Harbor/scripts.pory"
	faceplayer
# 17 "data/maps/Rockliffe_Harbor/scripts.pory"
	msgbox RockliffeHarbor_Text_GetAboard, MSGBOX_YESNO
# 18 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 19 "data/maps/Rockliffe_Harbor/scripts.pory"
	message RockliffeHarbor_Attendant_Text_0
# 20 "data/maps/Rockliffe_Harbor/scripts.pory"
	waitmessage
# 21 "data/maps/Rockliffe_Harbor/scripts.pory"
	multichoice 23, 0, MULTI_BOATFROMROCKLIFFE, 0
# 22 "data/maps/Rockliffe_Harbor/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 0, RockliffeHarbor_Attendant_3
# 26 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 1, RockliffeHarbor_Attendant_4
# 29 "data/maps/Rockliffe_Harbor/scripts.pory"
	case 2, RockliffeHarbor_Attendant_5
# 31 "data/maps/Rockliffe_Harbor/scripts.pory"
	case MULTI_B_PRESSED, RockliffeHarbor_Attendant_6
RockliffeHarbor_Attendant_1:
# 34 "data/maps/Rockliffe_Harbor/scripts.pory"
	waitstate
# 35 "data/maps/Rockliffe_Harbor/scripts.pory"
	release
	end

RockliffeHarbor_Attendant_3:
# 24 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 25 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_4:
# 27 "data/maps/Rockliffe_Harbor/scripts.pory"
	call RockliffeHarbor_FerryScript
# 28 "data/maps/Rockliffe_Harbor/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_5:
# 30 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_6:
# 32 "data/maps/Rockliffe_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_1


RockliffeHarbor_Attendant_Text_0:
# 19 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "Where would you like to sail?$"

RockliffeHarbor_Text_GetAboard::
# 39 "data/maps/Rockliffe_Harbor/scripts.pory"
	.string "This ferry travels to Shoreslate City\n"
	.string "and Kaolisle City.\p"
	.string "Would you like to board the ferry?$"
