CoralgroveElevatorInt2_MapScripts::
# 2 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralgroveElevatorInt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoralgroveElevatorInt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, CGC_ElevatorDown
	.2byte 0


CGC_ElevatorDown::
# 8 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ElevatorUp_MoveUp
# 9 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	waitmovement 0
# 10 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	setvar VAR_0x8005, 1
# 11 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	setvar VAR_0x8006, 7
# 12 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	special MoveElevator
# 13 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	waitstate
# 14 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	waitse
# 15 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 16 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	waitmovement 0
# 17 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	warp MAP_CORALGROVE_ELEVATOR1, 11, 1
# 18 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	waitstate
# 19 "data/maps/CoralgroveElevatorInt2/scripts.pory"
	release
	end

