PrimroseTown_MapScripts::
# 2 "data/maps/PrimroseTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Primrose_Visited
	.byte 0


Primrose_Visited::
# 6 "data/maps/PrimroseTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
	end


PrimroseTown_Sign::
# 11 "data/maps/PrimroseTown/scripts.pory"
	msgbox PrimroseSign, MSGBOX_SIGN
	return


Primrose_FlowerGirl::
# 19 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_FlowerGirl_Text_0, MSGBOX_NPC
	end


Primrose_FatMan::
# 24 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_FatMan_Text_0, MSGBOX_NPC
	end


Primrose_Hiker::
# 29 "data/maps/PrimroseTown/scripts.pory"
	lock
# 30 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_Hiker_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/PrimroseTown/scripts.pory"
	waitmessage
# 32 "data/maps/PrimroseTown/scripts.pory"
	closemessage
# 33 "data/maps/PrimroseTown/scripts.pory"
	releaseall
	end


PrimroseBlocked::
# 38 "data/maps/PrimroseTown/scripts.pory"
	lock
# 39 "data/maps/PrimroseTown/scripts.pory"
	safefollow
# 40 "data/maps/PrimroseTown/scripts.pory"
	applymovement 3, Primrose_FaceRight
# 41 "data/maps/PrimroseTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/PrimroseTown/scripts.pory"
	playse SE_PIN
# 43 "data/maps/PrimroseTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 44 "data/maps/PrimroseTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/PrimroseTown/scripts.pory"
	delay 40
# 46 "data/maps/PrimroseTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Primrose_FaceLeft
# 47 "data/maps/PrimroseTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/PrimroseTown/scripts.pory"
	msgbox Primrose_Storm, MSGBOX_DEFAULT
# 49 "data/maps/PrimroseTown/scripts.pory"
	waitmessage
# 50 "data/maps/PrimroseTown/scripts.pory"
	closemessage
# 51 "data/maps/PrimroseTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 52 "data/maps/PrimroseTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/PrimroseTown/scripts.pory"
	applymovement 3, Primrose_FaceUp
# 54 "data/maps/PrimroseTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/PrimroseTown/scripts.pory"
	releaseall
	end


# 59 "data/maps/PrimroseTown/scripts.pory"
Primrose_FaceUp:
# 60 "data/maps/PrimroseTown/scripts.pory"
	face_up
	step_end

# 63 "data/maps/PrimroseTown/scripts.pory"
Primrose_FaceRight:
# 64 "data/maps/PrimroseTown/scripts.pory"
	face_right
	step_end

# 66 "data/maps/PrimroseTown/scripts.pory"
Primrose_FaceLeft:
# 67 "data/maps/PrimroseTown/scripts.pory"
	face_left
	step_end

Primrose_FlowerGirl_Text_0:
# 19 "data/maps/PrimroseTown/scripts.pory"
	.string "Look at all those pretty flowers!\pI'd like to pick a few of them but\nI'm scared I might get attacked\lby a bug Pokémon…$"

Primrose_FatMan_Text_0:
# 24 "data/maps/PrimroseTown/scripts.pory"
	.string "This place is real pretty.\pWould be a real shame to be allergic\nto all this pollen though…\p…\psniff…$"

Primrose_Hiker_Text_0:
# 30 "data/maps/PrimroseTown/scripts.pory"
	.string "I don't like the look of that storm…$"

PrimroseSign::
# 14 "data/maps/PrimroseTown/scripts.pory"
	.string "PRIMROSE TOWN\n“The town where sweet nectar flows.”\p{UP_ARROW} Route 2\n{RIGHT_ARROW} PRIMROSE MEADOW$"

Primrose_Storm::
# 70 "data/maps/PrimroseTown/scripts.pory"
	.string "There's a massive storm raging\nabove the next island.\pIt's too dangerous to cross\nthe bridge at this moment.$"
