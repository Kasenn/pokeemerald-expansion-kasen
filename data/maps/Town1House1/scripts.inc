Town1House1_MapScripts::
	.byte 0


Hiscript::
# 4 "data/maps/Town1House1/scripts.pory"
	lock
# 5 "data/maps/Town1House1/scripts.pory"
	faceplayer
# 6 "data/maps/Town1House1/scripts.pory"
	msgbox Neighbour
# 7 "data/maps/Town1House1/scripts.pory"
	waitmessage
# 8 "data/maps/Town1House1/scripts.pory"
	closemessage
# 9 "data/maps/Town1House1/scripts.pory"
	releaseall
	return


Neighbour::
# 12 "data/maps/Town1House1/scripts.pory"
	.string "Hi! You must be {PLAYER}!\p"
	.string "My daughter is training on the\n"
	.string "next route.\p"
	.string "Why don't you go and say hi?\n$"
