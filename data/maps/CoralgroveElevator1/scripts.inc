CoralgroveElevator1_MapScripts::
	.byte 0


ElevatorBlock::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox ElevatorBlock_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, EleLeft
	waitmovement 0
	releaseall
	end


EleLeft:
	walk_left
	step_end

ElevatorBlock_Text_0:
	.string "I'm sorry but there has been\nan accident in the harbor area.\pAs such we cannot let the public\naccess it right now.$"
