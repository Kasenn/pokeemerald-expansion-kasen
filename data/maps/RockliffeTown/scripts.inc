RockliffeTown_MapScripts::
# 2 "data/maps/RockliffeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedRockliffe
	.byte 0


VisitedRockliffe::
# 6 "data/maps/RockliffeTown/scripts.pory"
	setflag FLAG_VISITED_ROCKLIFFE
	end


Rockliffe_Fisher::
# 11 "data/maps/RockliffeTown/scripts.pory"
	msgbox Rockliffe_Fisher_Text, MSGBOX_NPC
	end


Rockliffe_Man::
# 22 "data/maps/RockliffeTown/scripts.pory"
	msgbox Rockliffe_Man_Text, MSGBOX_NPC
	end


Rockliffe_Girl::
# 34 "data/maps/RockliffeTown/scripts.pory"
	msgbox Rockliffe_Girl_Text, MSGBOX_NPC
	end


Rockliffe_Sign::
# 44 "data/maps/RockliffeTown/scripts.pory"
	msgbox Rockliffe_Sign_Text, MSGBOX_SIGN
	end


RockliffeHarbor_Sailor::
# 53 "data/maps/RockliffeTown/scripts.pory"
	msgbox RockliffeHarbor_Sailor_Text, MSGBOX_NPC
	end


Rockliffe_Mart_Girl::
# 64 "data/maps/RockliffeTown/scripts.pory"
	msgbox Rockliffe_Mart_Girl_Text, MSGBOX_NPC
	end


Rockliffe_Mart_Man::
# 77 "data/maps/RockliffeTown/scripts.pory"
	msgbox Rockliffe_Mart_Man_Text, MSGBOX_NPC
	end


Rockliffe_Fisher_Text::
# 14 "data/maps/RockliffeTown/scripts.pory"
	.string "Lots of folks seem to be passing\n"
	.string "through Rockliffe.\p"
	.string "Guess using the ferry beats taking\n"
	.string "the long way around the north.$"

Rockliffe_Man_Text::
# 25 "data/maps/RockliffeTown/scripts.pory"
	.string "I heard that in the past, Rockliffe\n"
	.string "used to be a huge city.\p"
	.string "However, due to the erosion caused by\n"
	.string "the seawater, much of what once was\l"
	.string "has been washed away into the ocean.$"

Rockliffe_Girl_Text::
# 37 "data/maps/RockliffeTown/scripts.pory"
	.string "Have you heard of Pokémon Day Care?\p"
	.string "It's a great way to train Pokémon that\n"
	.string "would otherwise be too weak to fight.$"

Rockliffe_Sign_Text::
# 47 "data/maps/RockliffeTown/scripts.pory"
	.string "ROCKLIFFE TOWN\n"
	.string "“The busiest port town in the world.”$"

RockliffeHarbor_Sailor_Text::
# 56 "data/maps/RockliffeTown/scripts.pory"
	.string "A fine ship, ain't it?\p"
	.string "I hear it was built by the legendary\n"
	.string "shipwrights of Slateport and brought\l"
	.string "here all the way from Hoenn.$"

Rockliffe_Mart_Girl_Text::
# 67 "data/maps/RockliffeTown/scripts.pory"
	.string "You never know what'll happen when\n"
	.string "you're on the road.\p"
	.string "That's why I like to fill my bag so\n"
	.string "full that trying to cram in any more\l"
	.string "stuff would cause it to burst from\l"
	.string "its seams.$"

Rockliffe_Mart_Man_Text::
# 80 "data/maps/RockliffeTown/scripts.pory"
	.string "It seems some Poké Marts stock more\n"
	.string "than just your regular trainer items.$"
