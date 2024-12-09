SafariZone_Northwest_MapScripts::
	.byte 0


SafariZone_NW_Youngster::
	msgbox SafariZone_NW_Youngster_Text, MSGBOX_NPC
	end


SafariZone_NW_Lass::
	msgbox SafariZone_NW_Lass_Text, MSGBOX_NPC
	end


SafariZone_NW_Man::
	msgbox SafariZone_NW_Man_Text, MSGBOX_NPC
	end


SafariZone_NW_Ball1::
	finditem ITEM_HYPER_POTION
	return


SafariZone_NW_Ball2::
	finditem ITEM_MAX_REVIVE
	return


SafariZone_NW_Ball3::
	finditem ITEM_GREAT_BALL
	return


SafariZone_NW_Youngster_Text::
	.string "Wonder what sort of crazy Pokémon can\n"
	.string "be found on the other side of the river.$"

SafariZone_NW_Lass_Text::
	.string "Glad to finally be out of\n"
	.string "all of that mud.\p"
	.string "It's so much nicer here and the Pokémon\n"
	.string "are much more interesting as well.$"

SafariZone_NW_Man_Text::
	.string "I've come all this way but I'm not sure\n"
	.string "I have enough stamina left to go\l"
	.string "catching Pokémon…$"
