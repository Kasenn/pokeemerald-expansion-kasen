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

BP_Mart_Greetings::
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some fabulous prizes?$"
