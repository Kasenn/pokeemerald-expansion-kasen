PearlwoodHouse2_2F_MapScripts::
	.byte 0


PearlwoodHouse2_2F_Girl::
# 4 "data/maps/PearlwoodHouse2_2F/scripts.pory"
	msgbox PearlwoodHouse2_2F_Girl_Text, MSGBOX_NPC
# 5 "data/maps/PearlwoodHouse2_2F/scripts.pory"
	turnobject 1, DIR_NORTH
	return


PearlwoodHouse2_2F_Girl_Text::
# 7 "data/maps/PearlwoodHouse2_2F/scripts.pory"
	.string "Have you heard of the Fairy type?\n"
	.string "Fairy type Pokémon are really strong\l"
	.string "against Fighting, Dark, and Dragon\l"
	.string "type Pokémon while being very weak\l"
	.string "to Steel and Poison.$"
