RanchHouse_MapScripts::
	.byte 0


RanchHouseMan::
	lockall
	faceplayer
	msgbox RanchHouseManText, MSGBOX_DEFAULT
	release
	end


RanchHouseWoman::
	lockall
	faceplayer
	msgbox RanchHouseWomanText, MSGBOX_DEFAULT
	release
	end


RanchHouseManText::
	.string "You must be the trainer who was helping\n"
	.string "our farm alongside Jasmine and Volkner.\l"
	.string "Thank you so much!\p"
	.string "I wish I had something to offer\n"
	.string "in return but it'll take us a while to\l"
	.string "recover from these troubles that\l"
	.string "have been plaguing us recently…$"

RanchHouseWomanText::
	.string "Our farm has gone through\n"
	.string "a lot recently.\p"
	.string "Still, I'm sure the future\n"
	.string "will be bright.$"
