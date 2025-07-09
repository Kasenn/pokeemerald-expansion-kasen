PrimroseTown_MapScripts::
# 2 "data/maps/PrimroseTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PrimroseTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PrimroseTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PrimroseTown/scripts.pory"
	setflag FLAG_VISITED_PRIMROSE_TOWN
	return


PrimroseTown_Sign::
# 8 "data/maps/PrimroseTown/scripts.pory"
	msgbox PrimroseSign, MSGBOX_SIGN
	return


Primrose_FlowerGirl::
# 16 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_FlowerGirl_Text_0, MSGBOX_NPC
	return


Primrose_FatMan::
# 20 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_FatMan_Text_0, MSGBOX_NPC
	return


Primrose_Hiker::
# 24 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_Hiker_Text_0, MSGBOX_AUTOCLOSE
	return


PrimroseBlocked::
# 28 "data/maps/PrimroseTown/scripts.pory"
	lock
# 29 "data/maps/PrimroseTown/scripts.pory"
	safefollow
# 30 "data/maps/PrimroseTown/scripts.pory"
	turnobject 3, DIR_EAST
# 31 "data/maps/PrimroseTown/scripts.pory"
	playse SE_PIN
# 32 "data/maps/PrimroseTown/scripts.pory"
	exclamationmark 3
# 33 "data/maps/PrimroseTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 34 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_Storm, MSGBOX_AUTOCLOSE
# 35 "data/maps/PrimroseTown/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Down
# 36 "data/maps/PrimroseTown/scripts.pory"
	turnobject 3, DIR_NORTH
# 37 "data/maps/PrimroseTown/scripts.pory"
	release
	return


Primrose_FlowerGirl_Text_0:
# 16 "data/maps/PrimroseTown/scripts.pory"
	.string "Look at all those pretty flowers!\pI'd like to pick a few of them but\nI'm scared I might get attacked\lby a bug Pokémon…$"

Primrose_FatMan_Text_0:
# 20 "data/maps/PrimroseTown/scripts.pory"
	.string "This place is real pretty.\pWould be a real shame to be allergic\nto all this pollen though…\p…\psniff…$"

Primrose_Hiker_Text_0:
# 24 "data/maps/PrimroseTown/scripts.pory"
	.string "I don't like the look of that storm…$"

PrimroseSign::
# 11 "data/maps/PrimroseTown/scripts.pory"
	.string "PRIMROSE TOWN\n“The town where sweet nectar flows.”\p{UP_ARROW} Route 2\n{RIGHT_ARROW} PRIMROSE MEADOW$"

Primrose_Storm::
# 40 "data/maps/PrimroseTown/scripts.pory"
	.string "There's a massive storm raging\nabove the next island.\pIt's too dangerous to cross\nthe bridge at this moment.$"
