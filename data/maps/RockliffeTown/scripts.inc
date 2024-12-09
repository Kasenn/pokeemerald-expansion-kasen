RockliffeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedRockliffe
	.byte 0


VisitedRockliffe::
	setflag FLAG_VISITED_ROCKLIFFE
	end


Rockliffe_Fisher::
	msgbox Rockliffe_Fisher_Text, MSGBOX_NPC
	end


Rockliffe_Man::
	msgbox Rockliffe_Man_Text, MSGBOX_NPC
	end


Rockliffe_Girl::
	msgbox Rockliffe_Girl_Text, MSGBOX_NPC
	end


Rockliffe_Sign::
	msgbox Rockliffe_Sign_Text, MSGBOX_SIGN
	end


RockliffeHarbor_Sailor::
	msgbox RockliffeHarbor_Sailor_Text, MSGBOX_NPC
	end


Rockliffe_Mart_Girl::
	msgbox Rockliffe_Mart_Girl_Text, MSGBOX_NPC
	end


Rockliffe_Mart_Man::
	msgbox Rockliffe_Mart_Man_Text, MSGBOX_NPC
	end


Rockliffe_Fisher_Text::
	.string "Lots of folks seem to be passing\n"
	.string "through Rockliffe.\p"
	.string "Guess using the ferry beats taking\n"
	.string "the long way around the north.$"

Rockliffe_Man_Text::
	.string "I heard that in the past, Rockliffe\n"
	.string "used to be a huge city.\p"
	.string "However, due to the erosion caused by\n"
	.string "the seawater, much of what once was\l"
	.string "has been washed away into the ocean.$"

Rockliffe_Girl_Text::
	.string "Have you heard of Pokémon Day Care?\p"
	.string "It's a great way to train Pokémon that\n"
	.string "would otherwise be too weak to fight.$"

Rockliffe_Sign_Text::
	.string "ROCKLIFFE TOWN\n"
	.string "“The busiest port town in the world.”$"

RockliffeHarbor_Sailor_Text::
	.string "A fine ship, ain't it?\p"
	.string "I hear it was built by the legendary\n"
	.string "shipwrights of Slateport and brought\l"
	.string "here all the way from Hoenn.$"

Rockliffe_Mart_Girl_Text::
	.string "You never know what'll happen when\n"
	.string "you're on the road.\p"
	.string "That's why I like to fill my bag so\n"
	.string "full that trying to cram in any more\l"
	.string "stuff would cause it to burst from\l"
	.string "its seams.$"

Rockliffe_Mart_Man_Text::
	.string "It seems some Poké Marts stock more\n"
	.string "than just your regular trainer items.$"
