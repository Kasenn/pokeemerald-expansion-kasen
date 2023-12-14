Town1House1_MapScripts::
	.byte 0


Hiscript::
	lockall
	faceplayer
	msgbox Neighbour
	waitmessage
	closemessage
	releaseall
	return


Neighbour::
	.string "Hi! You must be {PLAYER}!\p"
	.string "My daughter is training on the\n"
	.string "next route.\p"
	.string "Why don't you go and say hi?\n$"
