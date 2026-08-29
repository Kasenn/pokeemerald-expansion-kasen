HighInTheSky_MapScripts::
# 6 "data/maps/HighInTheSky/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/HighInTheSky/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME
# 16 "data/maps/HighInTheSky/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HighInTheSky_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_DONT_FADE
# 8 "data/maps/HighInTheSky/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 13 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_TEMP_2, DIR_EAST
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_TEMP_2, DIR_WEST
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME:
# 21 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 22 "data/maps/HighInTheSky/scripts.pory"
	removeobject 5
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/HighInTheSky/scripts.pory"
	map_script_2 VAR_TEMP_2, DIR_WEST, MoveDrifballoonLeftToRight
# 18 "data/maps/HighInTheSky/scripts.pory"
	map_script_2 VAR_TEMP_2, DIR_EAST, MoveDrifballoonRightToLeft
	.2byte 0


MoveDrifballoonLeftToRight::
# 28 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_FADE
# 29 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_DONT_DESPAWN_OBJECTS
# 30 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/HighInTheSky/scripts.pory"
	addobject 2
# 32 "data/maps/HighInTheSky/scripts.pory"
	addobject 4
# 33 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy LOCALID_PLAYER, 3, 10
# 34 "data/maps/HighInTheSky/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_HIGH_IN_THE_SKY, 0
# 35 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsRight
# 36 "data/maps/HighInTheSky/scripts.pory"
	applymovement 2, MoveDrifblimEventsRight
# 37 "data/maps/HighInTheSky/scripts.pory"
	applymovement 4, MoveDrifblimEventsRight
# 38 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonLeftToRight_Movement_0
# 39 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 41 "data/maps/HighInTheSky/scripts.pory"
	delay 480
# 42 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 43 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 44 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 45 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_ROUTE3, 84, 11
	return


MoveDrifballoonRightToLeft::
# 49 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_FADE
# 50 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_DONT_DESPAWN_OBJECTS
# 51 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 52 "data/maps/HighInTheSky/scripts.pory"
	addobject 1
# 53 "data/maps/HighInTheSky/scripts.pory"
	addobject 3
# 54 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy LOCALID_PLAYER, 63, 10
# 55 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeft
# 56 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeft
# 57 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeft
# 58 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_0
# 59 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 60 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 61 "data/maps/HighInTheSky/scripts.pory"
	savebgm MUS_CYCLING
# 62 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 64 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 65 "data/maps/HighInTheSky/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 66 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 67 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifballoonRightToLeft_Movement_1
# 68 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 69 "data/maps/HighInTheSky/scripts.pory"
	waitmoncry
# 70 "data/maps/HighInTheSky/scripts.pory"
	delay 16
# 71 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/HighInTheSky/scripts.pory"
	setwildbattle SPECIES_PIDGEOT, 40
# 73 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SKY_BATTLE
# 74 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 1
# 75 "data/maps/HighInTheSky/scripts.pory"
	special TrySkyBattle
# 76 "data/maps/HighInTheSky/scripts.pory"
	doscriptedbattle
# 78 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 80 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 81 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeft2
# 82 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeft2
# 83 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeft2
# 84 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_0
# 85 "data/maps/HighInTheSky/scripts.pory"
	delay 240
# 86 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 87 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 88 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 89 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_ROUTE2, 72, 17
	return


# 92 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsRight:
# 93 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 94 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 95 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 96 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 97 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 100 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsLeft:
# 101 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 102 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 103 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 104 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 105 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 108 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsLeft2:
# 109 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 110 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 111 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 112 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 113 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 38 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_0:
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 38 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
	step_end

# 58 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_0:
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 58 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
	step_end

# 67 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_1:
# 67 "data/maps/HighInTheSky/scripts.pory"
	walk_in_place_fast_left
	step_end
