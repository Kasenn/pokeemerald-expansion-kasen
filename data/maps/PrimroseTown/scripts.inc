PrimroseTown_MapScripts::
	.byte 0


PrimroseTown_Sign::
	msgbox PrimroseSign, MSGBOX_SIGN
	return


Primrose_FlowerGirl::
	msgbox Primrose_FlowerGirl_Text_0, MSGBOX_NPC
	end


Primrose_FatMan::
	msgbox Primrose_FatMan_Text_0, MSGBOX_NPC
	end


Primrose_Hiker::
	lockall
	msgbox Primrose_Hiker_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	releaseall
	end


PrimroseBlocked::
	lockall
	applymovement 3, Primrose_FaceRight
	waitmovement 0
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, Primrose_FaceLeft
	waitmovement 0
	msgbox Primrose_Storm, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PrimroseWalkDown
	waitmovement 0
	applymovement 3, Primrose_FaceUp
	waitmovement 0
	releaseall
	end


Primrose_FaceUp:
	face_up
	step_end

Primrose_FaceRight:
	face_right
	step_end

Primrose_FaceLeft:
	face_left
	step_end

PrimroseWalkDown:
	walk_down
	step_end

Primrose_FlowerGirl_Text_0:
	.string "Look at all those pretty flowers!\pI'd like to pick a few of them but\nI'm scared I might get attacked\lby a bug Pokémon…$"

Primrose_FatMan_Text_0:
	.string "This place is real pretty.\pWould be a real shame to be allergic\nto all this pollen though…\p…\lsniff…$"

Primrose_Hiker_Text_0:
	.string "I don't like the look of that storm…$"

PrimroseSign::
	.string "PRIMROSE TOWN\n“The town where sweet nectar flows.”\p{UP_ARROW} Route 2\n{RIGHT_ARROW} PRIMROSE MEADOW$"

Primrose_Storm::
	.string "There's a massive storm raging\nabove the next island.\pIt's too dangerous to cross\nthe bridge at this moment.$"
