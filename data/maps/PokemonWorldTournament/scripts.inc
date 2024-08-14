PokemonWorldTournament_MapScripts::
	.byte 0


BP_Mart::
	lock
	faceplayer
	message BP_Mart_Greetings
	waitmessage
	bpmart BP_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	return


	.align 2
BP_Mart_Items:
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_ALAKAZITE
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_TM02
	.2byte ITEM_NONE

TestDir::
	lock
	switch VAR_FACING
	case DIR_NORTH, TestDir_3
	case DIR_WEST, TestDir_4
	case DIR_EAST, TestDir_5
	case DIR_SOUTH, TestDir_6
TestDir_1:
	release
	return

TestDir_3:
	msgbox TestDir_Text_0
	goto TestDir_1

TestDir_4:
	msgbox TestDir_Text_1
	goto TestDir_1

TestDir_5:
	msgbox TestDir_Text_2
	goto TestDir_1

TestDir_6:
	msgbox TestDir_Text_3
	goto TestDir_1


TestDir_Text_0:
	.string "facing north$"

TestDir_Text_1:
	.string "facing west$"

TestDir_Text_2:
	.string "facing east$"

TestDir_Text_3:
	.string "facing south$"

BP_Mart_Greetings::
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some fabulous prizes?$"
