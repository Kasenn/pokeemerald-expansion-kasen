AmberockMart_MapScripts::
	.byte 0


Amberock_MartMother::
# 6 "data/maps/AmberockMart/scripts.pory"
	msgbox Amberock_MartMother_Text, MSGBOX_NPC
	return


Amberock_MartChild::
# 9 "data/maps/AmberockMart/scripts.pory"
	lock
# 10 "data/maps/AmberockMart/scripts.pory"
	msgbox Amberock_MartChild_Text
# 11 "data/maps/AmberockMart/scripts.pory"
	release
	end


Amberock_MartGrandpa::
# 15 "data/maps/AmberockMart/scripts.pory"
	lock
# 16 "data/maps/AmberockMart/scripts.pory"
	msgbox Amberock_MartGrandpa_Text
# 17 "data/maps/AmberockMart/scripts.pory"
	release
	end


Amberock_MartMother_Text::
# 21 "data/maps/AmberockMart/scripts.pory"
	.string "I don't like how much my father\n"
	.string "spoils my daughter, but they get to\l"
	.string "meet so rarely that I think it's\l"
	.string "fine when it happens.$"

Amberock_MartChild_Text::
# 27 "data/maps/AmberockMart/scripts.pory"
	.string "Candy!$"

Amberock_MartGrandpa_Text::
# 30 "data/maps/AmberockMart/scripts.pory"
	.string "That's right.\n"
	.string "Pick any you want!$"
