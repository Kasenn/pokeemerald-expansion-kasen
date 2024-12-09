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
	lockall
	faceplayer
	msgbox RockliffeHarbor_Text_GetAboard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
	message RockliffeHarbor_Attendant_Text_0
	waitmessage
	multichoice 23, 0, MULTI_BOATFROMROCKLIFFE, 0
	switch VAR_RESULT
	case 0, RockliffeHarbor_Attendant_3
	case 1, RockliffeHarbor_Attendant_4
	case 2, RockliffeHarbor_Attendant_5
	case MULTI_B_PRESSED, RockliffeHarbor_Attendant_6
RockliffeHarbor_Attendant_1:
	waitstate
	release
	end

RockliffeHarbor_Attendant_3:
	call RockliffeHarbor_FerryScript
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_4:
	call RockliffeHarbor_FerryScript
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_5:
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_1

RockliffeHarbor_Attendant_6:
	goto Harbor_ComeAgain
	goto RockliffeHarbor_Attendant_1


RockliffeHarbor_Attendant_Text_0:
	.string "Where would you like to sail?$"

RockliffeHarbor_Text_GetAboard::
	.string "This ferry travels to Shoreslate City\n"
	.string "and Kaolisle City.\p"
	.string "Would you like to board the ferry?$"
