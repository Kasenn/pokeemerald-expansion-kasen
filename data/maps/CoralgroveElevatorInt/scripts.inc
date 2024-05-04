CoralgroveElevatorInt_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralgroveElevatorInt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoralgroveElevatorInt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CORALGROVE_ELEVATOR, 0, CGC_ElevatorUp
	map_script_2 VAR_CORALGROVE_ELEVATOR, 1, CGC_ElevatorUp
	map_script_2 VAR_CORALGROVE_ELEVATOR, 2, CGC_ElevatorUp
	.2byte 0


CGC_ElevatorUp::
	applymovement OBJ_EVENT_ID_PLAYER, ElevatorUp_MoveUp
	waitmovement 0
	setvar VAR_0x8005, 7
	setvar VAR_0x8006, 1
	special MoveElevator
	waitstate
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
	waitmovement 0
	warp MAP_CORALGROVE_ELEVATOR2, 1, 9
	waitstate
	release
	end


ElevatorUp_MoveUp:
	walk_up
	walk_in_place_down
	step_end
