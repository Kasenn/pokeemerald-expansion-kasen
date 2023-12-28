CoralgroveElevatorInt2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralgroveElevatorInt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoralgroveElevatorInt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CORALGROVE_ELEVATOR, 0, CGC_ElevatorDown
	map_script_2 VAR_CORALGROVE_ELEVATOR, 1, CGC_ElevatorDown
	map_script_2 VAR_CORALGROVE_ELEVATOR, 2, CGC_ElevatorDown
	.2byte 0


CGC_ElevatorDown::
	applymovement OBJ_EVENT_ID_PLAYER, ElevatorUp_MoveUp
	waitmovement 0
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 7
	special MoveElevator
	waitstate
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, ElevatorUp_MoveDown
	waitmovement 0
	warp MAP_CORALGROVE_ELEVATOR1, 11, 1
	waitstate
	release
	end

