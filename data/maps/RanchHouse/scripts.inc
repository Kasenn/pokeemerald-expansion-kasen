RanchHouse_MapScripts::
	.byte 0


RanchHouseMan::
	goto_if_set FLAG_OBTAINED_MEGA_RING, RanchHouseMan_2
	msgbox RanchHouseManText, MSGBOX_NPC
	end

RanchHouseMan_2:
	goto_if_set FLAG_OBTAINED_AMPHAROSITE, RanchHouseMan_5
	lock
	faceplayer
	msgbox RanchHouseItsYou, MSGBOX_NPC
	checkitemspace ITEM_AMPHAROSITE
	compare VAR_RESULT, FALSE
	goto_if_eq RanchHouseMan_8
	giveitem ITEM_AMPHAROSITE
	waitfanfare
	setflag FLAG_OBTAINED_AMPHAROSITE
	closemessage
	release
	end

RanchHouseMan_5:
	msgbox RanchTakeGoodCare, MSGBOX_NPC
	end

RanchHouseMan_8:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


RanchHouseWoman::
	msgbox RanchHouseWomanText, MSGBOX_NPC
	end


RanchHouseItsYou::
	.string "Ah, it's you!\p"
	.string "One of our Mareeps found this peculiar\n"
	.string "stone the other day.\p"
	.string "I have no idea what it does, but I\n"
	.string "never got to thank you before,\l"
	.string "so I hope this stone will suffice.$"

RanchTakeGoodCare::
	.string "Take good care now!$"

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
