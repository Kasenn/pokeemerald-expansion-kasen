Sandstone_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ResetCheckpoint
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandstoneGetPorted
	map_script MAP_SCRIPT_ON_RESUME, SetTeleportFloor
	.byte 0


SetTeleportFloor::
	setstepcallback STEP_CB_TELEPORT_FLOOR
	end


ResetCheckpoint::
	goto_if_unset FLAG_BADGE04_GET, ResetCheckpoint_2
ResetCheckpoint_1:
	copyvar VAR_ICE_STEP_COUNT, 1
	end

ResetCheckpoint_2:
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 0
	goto ResetCheckpoint_1


SandstoneGetPorted::
	map_script_2 VAR_ICE_STEP_COUNT, 0, SandstoneGym_Warp
	end


SandstoneGym_Warp::
	lockall
	playse SE_FAILURE
	waitse
	delay 10
	switch VAR_SANDSTONE_GYM_CHECKPOINTS
	case 0, SandstoneGym_Warp_3
	case 1, SandstoneGym_Warp_4
	case 2, SandstoneGym_Warp_5
SandstoneGym_Warp_1:
	waitstate
	end

SandstoneGym_Warp_3:
	warp MAP_SANDSTONE_GYM_1F, 9
	goto SandstoneGym_Warp_1

SandstoneGym_Warp_4:
	warp MAP_SANDSTONE_GYM_1F, 10
	goto SandstoneGym_Warp_1

SandstoneGym_Warp_5:
	warp MAP_SANDSTONE_GYM_1F, 11
	goto SandstoneGym_Warp_1


SetSandstoneBike::
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, SandStoneNoBike
	setflag FLAG_SYS_CYCLING_ROAD
	release
	end


SandStoneNoBike::
	lockall
	msgbox SandStoneNoBike_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MoveDown1
	waitmovement 0
	release
	end


MoveDown1:
	walk_down
	step_end

SandstoneCheckpoint0::
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 8, 36
	release
	end


SandstoneCheckpoint1::
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 21, 9
	compare VAR_SANDSTONE_GYM_CHECKPOINTS, 0
	goto_if_eq SandstoneCheckpoint1_2
SandstoneCheckpoint1_1:
	release
	end

SandstoneCheckpoint1_2:
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 1
	goto SandstoneCheckpoint1_1


SandstoneCheckpoint2::
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 36, 17
	compare VAR_SANDSTONE_GYM_CHECKPOINTS, 1
	goto_if_eq SandstoneCheckpoint2_2
SandstoneCheckpoint2_1:
	release
	end

SandstoneCheckpoint2_2:
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 2
	goto SandstoneCheckpoint2_1


PrintIceStep::
	buffernumberstring STR_VAR_1, VAR_ICE_STEP_COUNT
	msgbox PrintIceStep_Text_0
	release
	end


SandStoneNoBike_Text_0:
	.string "You have no bike.$"

PrintIceStep_Text_0:
	.string "{STR_VAR_1}$"
