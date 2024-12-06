RanchHouse_MapScripts::
	.byte 0


RanchHouseMan::
# 4 "data/maps/RanchHouse/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, RanchHouseMan_2
# 22 "data/maps/RanchHouse/scripts.pory"
	msgbox RanchHouseManText, MSGBOX_NPC
	end

RanchHouseMan_2:
# 5 "data/maps/RanchHouse/scripts.pory"
	goto_if_set FLAG_OBTAINED_AMPHAROSITE, RanchHouseMan_5
# 9 "data/maps/RanchHouse/scripts.pory"
	lock
# 10 "data/maps/RanchHouse/scripts.pory"
	faceplayer
# 11 "data/maps/RanchHouse/scripts.pory"
	msgbox RanchHouseItsYou, MSGBOX_NPC
	checkitemspace ITEM_AMPHAROSITE
# 0 "data/maps/RanchHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RanchHouseMan_8
RanchHouseMan_7:
# 15 "data/maps/RanchHouse/scripts.pory"
	giveitem ITEM_AMPHAROSITE
# 16 "data/maps/RanchHouse/scripts.pory"
	waitfanfare
# 17 "data/maps/RanchHouse/scripts.pory"
	setflag FLAG_OBTAINED_AMPHAROSITE
# 18 "data/maps/RanchHouse/scripts.pory"
	closemessage
# 19 "data/maps/RanchHouse/scripts.pory"
	release
	end

RanchHouseMan_5:
# 6 "data/maps/RanchHouse/scripts.pory"
	msgbox RanchTakeGoodCare, MSGBOX_NPC
	end

RanchHouseMan_8:
# 13 "data/maps/RanchHouse/scripts.pory"
	goto ZeBagIsFull
	goto RanchHouseMan_7


RanchHouseWoman::
# 39 "data/maps/RanchHouse/scripts.pory"
	msgbox RanchHouseWomanText, MSGBOX_NPC
	end


RanchHouseItsYou::
# 26 "data/maps/RanchHouse/scripts.pory"
	.string "Ah, it's you!\p"
	.string "One of our Mareeps found this peculiar\n"
	.string "stone the other day.\p"
	.string "I have no idea what it does, but I\n"
	.string "never got to thank you before,\l"
	.string "so I hope this stone will suffice.$"

RanchTakeGoodCare::
# 34 "data/maps/RanchHouse/scripts.pory"
	.string "Take good care now!$"

RanchHouseManText::
# 43 "data/maps/RanchHouse/scripts.pory"
	.string "You must be the trainer who was helping\n"
	.string "our farm alongside Jasmine and Volkner.\l"
	.string "Thank you so much!\p"
	.string "I wish I had something to offer\n"
	.string "in return but it'll take us a while to\l"
	.string "recover from these troubles that\l"
	.string "have been plaguing us recently…$"

RanchHouseWomanText::
# 53 "data/maps/RanchHouse/scripts.pory"
	.string "Our farm has gone through\n"
	.string "a lot recently.\p"
	.string "Still, I'm sure the future\n"
	.string "will be bright.$"
