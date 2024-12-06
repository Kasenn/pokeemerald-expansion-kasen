SafariZone_Northwest_MapScripts::
	.byte 0


SafariZone_NW_Youngster::
# 4 "data/maps/SafariZone_Northwest/scripts.pory"
	msgbox SafariZone_NW_Youngster_Text, MSGBOX_NPC
	end


SafariZone_NW_Lass::
# 13 "data/maps/SafariZone_Northwest/scripts.pory"
	msgbox SafariZone_NW_Lass_Text, MSGBOX_NPC
	end


SafariZone_NW_Man::
# 24 "data/maps/SafariZone_Northwest/scripts.pory"
	msgbox SafariZone_NW_Man_Text, MSGBOX_NPC
	end


SafariZone_NW_Ball1::
# 34 "data/maps/SafariZone_Northwest/scripts.pory"
	finditem ITEM_HYPER_POTION
	return


SafariZone_NW_Ball2::
# 37 "data/maps/SafariZone_Northwest/scripts.pory"
	finditem ITEM_MAX_REVIVE
	return


SafariZone_NW_Ball3::
# 40 "data/maps/SafariZone_Northwest/scripts.pory"
	finditem ITEM_GREAT_BALL
	return


SafariZone_NW_Youngster_Text::
# 7 "data/maps/SafariZone_Northwest/scripts.pory"
	.string "Wonder what sort of crazy Pokémon can\n"
	.string "be found on the other side of the river.$"

SafariZone_NW_Lass_Text::
# 16 "data/maps/SafariZone_Northwest/scripts.pory"
	.string "Glad to finally be out of\n"
	.string "all of that mud.\p"
	.string "It's so much nicer here and the Pokémon\n"
	.string "are much more interesting as well.$"

SafariZone_NW_Man_Text::
# 27 "data/maps/SafariZone_Northwest/scripts.pory"
	.string "I've come all this way but I'm not sure\n"
	.string "I have enough stamina left to go\l"
	.string "catching Pokémon…$"
