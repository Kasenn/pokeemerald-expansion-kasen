gText_HowMayIServeYou::
	.string "Welcome!\p"
	.string "How may I serve you?$"

gText_PleaseComeAgain::
	.string "Please come again!$"

gText_PlayerWhatCanIDoForYou::
	.string "{PLAYER}{STRING 5}, welcome!\p"
	.string "What can I do for you?$"

BPMart::
	lock
	faceplayer
	message gText_HowMayIServeYouBp
	waitmessage
	bpmart BPmart_Items
	msgbox gText_PleaseComeAgainBp, MSGBOX_DEFAULT
	release
	end

gText_HowMayIServeYouBp::
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some fabulous prizes?$"

gText_PleaseComeAgainBp::
	.string "Please save some BP\n"
	.string "and come see us again.$"

	.align 2
BPmart_Items:
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
	.2byte ITEM_TM98
	.2byte ITEM_NONE
	release
	end