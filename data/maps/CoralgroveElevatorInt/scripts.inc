CoralgroveElevatorInt_MapScripts::
# 2 "data/maps/CoralgroveElevatorInt/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralgroveElevatorInt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoralgroveElevatorInt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CoralgroveElevatorInt/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, CGC_ElevatorUp
	.2byte 0


CGC_ElevatorUp::
# 8 "data/maps/CoralgroveElevatorInt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ElevatorUp_MoveUp
# 9 "data/maps/CoralgroveElevatorInt/scripts.pory"
	waitmovement 0
# 10 "data/maps/CoralgroveElevatorInt/scripts.pory"
	setvar VAR_0x8005, 7
# 11 "data/maps/CoralgroveElevatorInt/scripts.pory"
	setvar VAR_0x8006, 1
# 12 "data/maps/CoralgroveElevatorInt/scripts.pory"
	special MoveElevator
# 13 "data/maps/CoralgroveElevatorInt/scripts.pory"
	waitstate
# 14 "data/maps/CoralgroveElevatorInt/scripts.pory"
	waitse
# 15 "data/maps/CoralgroveElevatorInt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 16 "data/maps/CoralgroveElevatorInt/scripts.pory"
	waitmovement 0
# 17 "data/maps/CoralgroveElevatorInt/scripts.pory"
	warp MAP_CORALGROVE_ELEVATOR2, 1, 9
# 18 "data/maps/CoralgroveElevatorInt/scripts.pory"
	waitstate
# 19 "data/maps/CoralgroveElevatorInt/scripts.pory"
	release
	end


# 22 "data/maps/CoralgroveElevatorInt/scripts.pory"
ElevatorUp_MoveUp:
# 23 "data/maps/CoralgroveElevatorInt/scripts.pory"
	walk_up
# 24 "data/maps/CoralgroveElevatorInt/scripts.pory"
	walk_in_place_down
	step_end
