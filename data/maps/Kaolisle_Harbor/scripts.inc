Kaolisle_Harbor_MapScripts::
	.byte 0


KaolisleHarbor_Attendant::
# 4 "data/maps/Kaolisle_Harbor/scripts.pory"
	lock
# 5 "data/maps/Kaolisle_Harbor/scripts.pory"
	faceplayer
# 6 "data/maps/Kaolisle_Harbor/scripts.pory"
	call ExpandedBoatNetwork
# 7 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto_if_set FLAG_EXPANDED_BOAT_NETWORK, KaolisleHarbor_Attendant_2
KaolisleHarbor_Attendant_1:
# 10 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Text_GetAboard, MSGBOX_YESNO
# 11 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Harbor_ComeAgain
# 12 "data/maps/Kaolisle_Harbor/scripts.pory"
	message KaolisleHarbor_Attendant_Text_0
# 13 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmessage
# 14 "data/maps/Kaolisle_Harbor/scripts.pory"
	multichoice 23, 0, MULTI_BOATFROMKAOLISLE, 0
# 15 "data/maps/Kaolisle_Harbor/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 0, KaolisleHarbor_Attendant_6
# 19 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 1, KaolisleHarbor_Attendant_7
# 30 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 2, KaolisleHarbor_Attendant_8
# 32 "data/maps/Kaolisle_Harbor/scripts.pory"
	case MULTI_B_PRESSED, KaolisleHarbor_Attendant_9
KaolisleHarbor_Attendant_4:
# 35 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitstate
# 36 "data/maps/Kaolisle_Harbor/scripts.pory"
	release
	end

KaolisleHarbor_Attendant_2:
# 8 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto KaolisleHarbor_TakeAFerry
	goto KaolisleHarbor_Attendant_1

KaolisleHarbor_Attendant_6:
# 17 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 18 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_7:
# 20 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, KaolisleHarbor_Attendant_11
KaolisleHarbor_Attendant_10:
# 28 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 29 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_8:
# 31 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_9:
# 33 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_4

KaolisleHarbor_Attendant_11:
# 21 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox SailToShoreslateInstead, MSGBOX_YESNO
# 22 "data/maps/Kaolisle_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleHarbor_Attendant_14
KaolisleHarbor_Attendant_13:
# 25 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 26 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_Attendant_10

KaolisleHarbor_Attendant_14:
# 23 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto KaolisleHarbor_Attendant_13


KaolisleHarbor_TakeAFerry::
# 41 "data/maps/Kaolisle_Harbor/scripts.pory"
	call InitBoatMultichoice
# 42 "data/maps/Kaolisle_Harbor/scripts.pory"
	dynmultipush KaolisleHarbor_TakeAFerry_Text_0, 0
# 43 "data/maps/Kaolisle_Harbor/scripts.pory"
	dynmultipush KaolisleHarbor_TakeAFerry_Text_1, 1
# 44 "data/maps/Kaolisle_Harbor/scripts.pory"
	dynmultipush KaolisleHarbor_TakeAFerry_Text_2, 2
# 45 "data/maps/Kaolisle_Harbor/scripts.pory"
	dynmultipush KaolisleHarbor_TakeAFerry_Text_3, 3
# 46 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto_if_set FLAG_VISITED_FROSTHEARTH, KaolisleHarbor_TakeAFerry_2
KaolisleHarbor_TakeAFerry_1:
# 49 "data/maps/Kaolisle_Harbor/scripts.pory"
	dynmultipush KaolisleHarbor_TakeAFerry_Text_5, 5
# 50 "data/maps/Kaolisle_Harbor/scripts.pory"
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
# 51 "data/maps/Kaolisle_Harbor/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 0, KaolisleHarbor_TakeAFerry_6
# 55 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 1, KaolisleHarbor_TakeAFerry_7
# 58 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 2, KaolisleHarbor_TakeAFerry_8
# 61 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 3, KaolisleHarbor_TakeAFerry_9
# 64 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 4, KaolisleHarbor_TakeAFerry_10
# 67 "data/maps/Kaolisle_Harbor/scripts.pory"
	case 5, KaolisleHarbor_TakeAFerry_11
# 68 "data/maps/Kaolisle_Harbor/scripts.pory"
	case MULTI_B_PRESSED, KaolisleHarbor_TakeAFerry_11
KaolisleHarbor_TakeAFerry_4:
# 71 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitstate
# 72 "data/maps/Kaolisle_Harbor/scripts.pory"
	release
	end

KaolisleHarbor_TakeAFerry_2:
# 47 "data/maps/Kaolisle_Harbor/scripts.pory"
	dynmultipush KaolisleHarbor_TakeAFerry_Text_4, 4
	goto KaolisleHarbor_TakeAFerry_1

KaolisleHarbor_TakeAFerry_6:
# 53 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 54 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_7:
# 56 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 57 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_8:
# 59 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 60 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_9:
# 62 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 63 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_10:
# 65 "data/maps/Kaolisle_Harbor/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 66 "data/maps/Kaolisle_Harbor/scripts.pory"
	warp MAP_FROSTHEARTH_CITY_HARBOR, 7, 10
	goto KaolisleHarbor_TakeAFerry_4

KaolisleHarbor_TakeAFerry_11:
# 69 "data/maps/Kaolisle_Harbor/scripts.pory"
	goto Harbor_ComeAgain
	goto KaolisleHarbor_TakeAFerry_4


KaolisleHarbor_Man::
# 91 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Man_Text, MSGBOX_NPC
	end


KaolisleHarbor_Boy::
# 101 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Boy_Text, MSGBOX_NPC
	end


KaolisleHarbor_Lass::
# 109 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox KaolisleHarbor_Lass_Text, MSGBOX_NPC
	end


Harbor_BoardFerryGoingEast::
# 121 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox PleaseBoardFerry_Text, MSGBOX_DEFAULT
# 122 "data/maps/Kaolisle_Harbor/scripts.pory"
	closemessage
# 123 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 124 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
# 125 "data/maps/Kaolisle_Harbor/scripts.pory"
	delay 30
# 126 "data/maps/Kaolisle_Harbor/scripts.pory"
	hideobjectat 3, MAP_KAOLISLE_HARBOR
# 127 "data/maps/Kaolisle_Harbor/scripts.pory"
	hideobjectat 3, MAP_CORALGROVE_HARVOR_INTERIOR
# 128 "data/maps/Kaolisle_Harbor/scripts.pory"
	hideobjectat 3, MAP_FROSTHEARTH_CITY_HARBOR
# 129 "data/maps/Kaolisle_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Harbor_BoardFerryNorth
# 130 "data/maps/Kaolisle_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Harbor_BoardFerryEast
# 131 "data/maps/Kaolisle_Harbor/scripts.pory"
	delay 30
# 132 "data/maps/Kaolisle_Harbor/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 133 "data/maps/Kaolisle_Harbor/scripts.pory"
	call FerryDepart_East
	return


Harbor_ComeAgain::
# 137 "data/maps/Kaolisle_Harbor/scripts.pory"
	msgbox Harbor_ComeAgain_Text, MSGBOX_NPC
	end


Harbor_BoardFerryEast::
# 148 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_BoardFerryEast
# 149 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
	return


# 152 "data/maps/Kaolisle_Harbor/scripts.pory"
Movement_BoardFerryEast:
# 153 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 154 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_in_place_faster_up
# 155 "data/maps/Kaolisle_Harbor/scripts.pory"
	step_end

Harbor_BoardFerryNorth::
# 158 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 159 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
	return


FerryDepart_East::
# 163 "data/maps/Kaolisle_Harbor/scripts.pory"
	delay 60
# 164 "data/maps/Kaolisle_Harbor/scripts.pory"
	applymovement 4, Movement_FerryDepart_East
# 165 "data/maps/Kaolisle_Harbor/scripts.pory"
	waitmovement 0
	return


# 168 "data/maps/Kaolisle_Harbor/scripts.pory"
Movement_FerryDepart_East:
# 169 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_slow_right
# 169 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_slow_right
# 169 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_slow_right
# 170 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 170 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 170 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 170 "data/maps/Kaolisle_Harbor/scripts.pory"
	walk_right
# 171 "data/maps/Kaolisle_Harbor/scripts.pory"
	step_end

KaolisleHarbor_Attendant_Text_0:
# 12 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Where would you like to sail?$"

KaolisleHarbor_TakeAFerry_Text_0:
# 42 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Coralgrove City$"

KaolisleHarbor_TakeAFerry_Text_1:
# 43 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Azuretide Town$"

KaolisleHarbor_TakeAFerry_Text_2:
# 44 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Shoreslate City$"

KaolisleHarbor_TakeAFerry_Text_3:
# 45 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Rockliffe Town$"

KaolisleHarbor_TakeAFerry_Text_4:
# 47 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Frosthearth City$"

KaolisleHarbor_TakeAFerry_Text_5:
# 49 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Never mind$"

SailToShoreslateInstead::
# 76 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "I'm sorry, but the harbor at Rockliffe\n"
	.string "Town is currently having some technical\l"
	.string "difficulties, making it impossible for\l"
	.string "the ferry to dock there.\p"
	.string "Would you like to sail to Shoreslate\n"
	.string "City instead?$"

KaolisleHarbor_Text_GetAboard::
# 84 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "This ferry travels to Shoreslate City\n"
	.string "and Rockliffe Town.\p"
	.string "Would you like to board the ferry?$"

KaolisleHarbor_Man_Text::
# 94 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "My wife works in Shoreslate City.\p"
	.string "Thanks to the ferry service, moving\n"
	.string "back and forth is astoundingly easy.$"

KaolisleHarbor_Boy_Text::
# 104 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "We're waiting for mom!$"

KaolisleHarbor_Lass_Text::
# 112 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "I love taking the ferry!\p"
	.string "Unlike riding on a Pokémon, I can just\n"
	.string "stay inside all day and never have to\l"
	.string "worry about the salty sea air\l"
	.string "frizzing up my hair.$"

Harbor_ComeAgain_Text::
# 140 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Let me know if you change your mind.$"

PleaseBoardFerry_Text::
# 143 "data/maps/Kaolisle_Harbor/scripts.pory"
	.string "Very well.\n"
	.string "Right this way to the ferry.$"
