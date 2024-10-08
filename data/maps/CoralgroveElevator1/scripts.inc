CoralgroveElevator1_MapScripts::
	.byte 0


ElevatorBlock::
	goto_if_unset FLAG_BADGE01_GET, ElevatorBlock_2
ElevatorBlock_1:
	releaseall
	end

ElevatorBlock_2:
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox ElevatorBlock_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	goto ElevatorBlock_1


CoralGrove_ElevatorEmployee::
	lockall
	faceplayer
	msgbox CoralGrove_ElevatorEmployee_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	end


ElevatorBlock_Text_0:
	.string "I'm sorry but there has been\nan accident in the harbor area.\pAs such we cannot let the public\naccess it right now.$"

CoralGrove_ElevatorEmployee_Text_0:
	.string "The situation at the harbor has been\nresolved and the public can\lonce again freely move about.\pThank you for your patience.$"
