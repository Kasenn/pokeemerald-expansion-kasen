CoralgroveElevator1_MapScripts::
	.byte 0


ElevatorBlock::
# 4 "data/maps/CoralgroveElevator1/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ElevatorBlock_2
ElevatorBlock_1:
# 14 "data/maps/CoralgroveElevator1/scripts.pory"
	releaseall
	end

ElevatorBlock_2:
# 5 "data/maps/CoralgroveElevator1/scripts.pory"
	lock
# 6 "data/maps/CoralgroveElevator1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 7 "data/maps/CoralgroveElevator1/scripts.pory"
	msgbox ElevatorBlock_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/CoralgroveElevator1/scripts.pory"
	waitmessage
# 9 "data/maps/CoralgroveElevator1/scripts.pory"
	closemessage
# 10 "data/maps/CoralgroveElevator1/scripts.pory"
	safefollow
# 11 "data/maps/CoralgroveElevator1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
# 12 "data/maps/CoralgroveElevator1/scripts.pory"
	waitmovement 0
	goto ElevatorBlock_1


CoralGrove_ElevatorEmployee::
# 19 "data/maps/CoralgroveElevator1/scripts.pory"
	lockall
# 20 "data/maps/CoralgroveElevator1/scripts.pory"
	faceplayer
# 21 "data/maps/CoralgroveElevator1/scripts.pory"
	msgbox CoralGrove_ElevatorEmployee_Text_0, MSGBOX_NPC
# 22 "data/maps/CoralgroveElevator1/scripts.pory"
	waitmessage
# 23 "data/maps/CoralgroveElevator1/scripts.pory"
	closemessage
	end


ElevatorBlock_Text_0:
# 7 "data/maps/CoralgroveElevator1/scripts.pory"
	.string "I'm sorry but there has been\nan accident in the harbor area.\pAs such we cannot let the public\naccess it right now.$"

CoralGrove_ElevatorEmployee_Text_0:
# 21 "data/maps/CoralgroveElevator1/scripts.pory"
	.string "The situation at the harbor has been\nresolved and the public can\lonce again freely move about.\pThank you for your patience.$"
