AmberockMart_MapScripts::
	.byte 0


Amberock_MartMother::
	msgbox Amberock_MartMother_Text, MSGBOX_NPC
	return


Amberock_MartChild::
	lock
	msgbox Amberock_MartChild_Text
	release
	end


Amberock_MartGrandpa::
	lock
	msgbox Amberock_MartGrandpa_Text
	release
	end


Amberock_MartMother_Text::
	.string "I don't like how much my father\n"
	.string "spoils my daughter, but they get to\l"
	.string "meet so rarely that I think it's\l"
	.string "fine when it happens.$"

Amberock_MartChild_Text::
	.string "Candy!$"

Amberock_MartGrandpa_Text::
	.string "That's right.\n"
	.string "Pick any you want!$"
