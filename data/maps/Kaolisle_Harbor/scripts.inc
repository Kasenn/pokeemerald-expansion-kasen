Kaolisle_Harbor_MapScripts::
	.byte 0


KaolisleHarbor_Attendant::
# 4 "data/maps/Kaolisle_Harbor/scripts.pory"
	lockall
# 5 "data/maps/Kaolisle_Harbor/scripts.pory"
	faceplayer
# 6 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Text_GetAboard, MSGBOX_YESNO
# 7 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 8 "data/maps/Kaolisle_Harbor/scripts.pory"
	message KaolisleHarbor_Attendant_Text_0
# 9 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmessage
# 10 "data/maps/Kaolisle_Harbor/scripts.pory"
	multichoice 23, 0, MULTI_BOATFROMKAOLISLE, 0
# 11 "data/maps/Kaolisle_Harbor/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 0, KaolisleHarbor_Attendant_3
# 15 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 1, KaolisleHarbor_Attendant_4
# 26 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 2, KaolisleHarbor_Attendant_5
# 28 "data/maps/Kaolisle_Harbor/scripts.pory"
	case MULTI_B_PRESSED, KaolisleHarbor_Attendant_6
KaolisleHarbor_Attendant_1:
# 31 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitstate
# 32 "data/maps/Kaolisle_Harbor/scripts.pory"
	release
	end

KaolisleHarbor_Attendant_3:
# 13 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 14 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_4:
# 16 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, KaolisleHarbor_Attendant_8
KaolisleHarbor_Attendant_7:
# 24 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 25 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_5:
# 27 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_6:
# 29 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_8:
# 17 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox SailToShoreslateInstead, MSGBOX_YESNO
# 18 "data/maps/Kaolisle_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleHarbor_Attendant_11
KaolisleHarbor_Attendant_10:
# 21 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 22 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_Attendant_7

KaolisleHarbor_Attendant_11:
# 19 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_10


KaolisleHarbor_Man::
# 51 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Man_Text, MSGBOX_NPC
	end


KaolisleHarbor_Boy::
# 61 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Boy_Text, MSGBOX_NPC
	end


KaolisleHarbor_Lass::
# 69 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Lass_Text, MSGBOX_NPC
	end


Harbor_BoardFerryGoingEast::
# 81 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
# 82 "data/maps/Kaolisle_Harbor/scripts.pory"
	closemessage
# 83 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 84 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
# 85 "data/maps/Kaolisle_Harbor/scripts.pory"
	delay 30
# 86 "data/maps/Kaolisle_Harbor/scripts.pory"
	hideobjectat 3, MAP_KAOLISLE_HARBOR
# 87 "data/maps/Kaolisle_Harbor/scripts.pory"
	hideobjectat 3, MAP_CORALGROVE_HARVOR_INTERIOR
# 88 "data/maps/Kaolisle_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Harbor_BoardFerryNorth
# 89 "data/maps/Kaolisle_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Harbor_BoardFerryEast
# 90 "data/maps/Kaolisle_Harbor/scripts.pory"
	delay 30
# 91 "data/maps/Kaolisle_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 92 "data/maps/Kaolisle_Harbor/scripts.pory"
	call FerryDepart_East
	return


Harbor_ComeAgain::
# 96 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox Harbor_ComeAgain_Text, MSGBOX_NPC
	end


Harbor_BoardFerryEast::
# 107 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_BoardFerryEast
# 108 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
	return


# 111 "data/maps/Kaolisle_Harbor/scripts.pory"
Movement_BoardFerryEast:
# 112 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 113 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_in_place_faster_up
# 114 "data/maps/Kaolisle_Harbor/scripts.pory"
	step_end

Harbor_BoardFerryNorth::
# 117 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 118 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
	return


FerryDepart_East::
# 122 "data/maps/Kaolisle_Harbor/scripts.pory"
	delay 60
# 123 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement 4, Movement_FerryDepart_East
# 124 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
	return


# 127 "data/maps/Kaolisle_Harbor/scripts.pory"
Movement_FerryDepart_East:
# 128 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_slow_right
# 128 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_slow_right
# 128 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_slow_right
# 129 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 129 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 129 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 129 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 130 "data/maps/Kaolisle_Harbor/scripts.pory"
	step_end

KaolisleHarbor_Attendant_Text_0:
# 8 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Where would you like to sail?$"

SailToShoreslateInstead::
# 36 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "I'm sorry, but the harbor at Rockliffe\n"
	.string "Town is currently having some technical\l"
	.string "difficulties, making it impossible for\l"
	.string "the ferry to dock there.\p"
	.string "Would you like to sail to Shoreslate\n"
	.string "City instead?$"

KaolisleHarbor_Text_GetAboard::
# 44 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "This ferry travels to Shoreslate City\n"
	.string "and Rockliffe Town.\p"
	.string "Would you like to board the ferry?$"

KaolisleHarbor_Man_Text::
# 54 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "My wife works in Shoreslate City.\p"
	.string "Thanks to the ferry service, moving\n"
	.string "back and forth is astoundingly easy.$"

KaolisleHarbor_Boy_Text::
# 64 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "We're waiting for mom!$"

KaolisleHarbor_Lass_Text::
# 72 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "I love taking the ferry!\p"
	.string "Unlike riding on a Pokémon, I can just\n"
	.string "stay inside all day and never have to\l"
	.string "worry about the salty sea air\l"
	.string "frizzing up my hair.$"

Harbor_ComeAgain_Text::
# 99 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Let me know if you change your mind.$"

PleaseBoardFerry_Text::
# 102 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Very well.\n"
	.string "Right this way to the ferry.$"
