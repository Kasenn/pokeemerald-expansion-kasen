GalewindCity_Gym_MapScripts::
# 13 "data/maps/GalewindCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GalewindCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GalewindCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_TEMP_4
# 16 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 17 "data/maps/GalewindCity_Gym/scripts.pory"
	call Amberock_SetPlayerModel
	return


GalewindGym_ToggleBetweenAmphy::
# 22 "data/maps/GalewindCity_Gym/scripts.pory"
	lockall
# 23 "data/maps/GalewindCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_2, GalewindGym_ToggleBetweenAmphy_2
# 65 "data/maps/GalewindCity_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 66 "data/maps/GalewindCity_Gym/scripts.pory"
	specialvar VAR_TEMP_4, GetPlayerFacingDirection
# 69 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_GYM_FAKEPLAYER, VAR_TEMP_0, VAR_TEMP_1
# 70 "data/maps/GalewindCity_Gym/scripts.pory"
	switch VAR_TEMP_4
# 71 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_NORTH, GalewindGym_ToggleBetweenAmphy_13
# 72 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_SOUTH, GalewindGym_ToggleBetweenAmphy_14
# 73 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_WEST, GalewindGym_ToggleBetweenAmphy_15
# 74 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_EAST, GalewindGym_ToggleBetweenAmphy_16
GalewindGym_ToggleBetweenAmphy_11:
# 76 "data/maps/GalewindCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
# 77 "data/maps/GalewindCity_Gym/scripts.pory"
	addobject LOCALID_GYM_FAKEPLAYER
# 78 "data/maps/GalewindCity_Gym/scripts.pory"
	hideplayer
# 81 "data/maps/GalewindCity_Gym/scripts.pory"
	special SpawnCameraObject
# 82 "data/maps/GalewindCity_Gym/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 83 "data/maps/GalewindCity_Gym/scripts.pory"
	teleportcamera VAR_TEMP_2, VAR_TEMP_3
# 84 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectxy LOCALID_PLAYER, VAR_TEMP_2, VAR_TEMP_3
# 85 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 88 "data/maps/GalewindCity_Gym/scripts.pory"
	removeobject LOCALID_GYM_AMPHY
# 89 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_GYM_AMPHY_CONTROLLED, VAR_TEMP_2, VAR_TEMP_3
# 90 "data/maps/GalewindCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
# 91 "data/maps/GalewindCity_Gym/scripts.pory"
	addobject LOCALID_GYM_AMPHY_CONTROLLED
# 92 "data/maps/GalewindCity_Gym/scripts.pory"
	delay 1
# 95 "data/maps/GalewindCity_Gym/scripts.pory"
	switch VAR_TEMP_5
# 96 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_NORTH, GalewindGym_ToggleBetweenAmphy_25
# 99 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_SOUTH, GalewindGym_ToggleBetweenAmphy_26
# 102 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_WEST, GalewindGym_ToggleBetweenAmphy_27
# 105 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_EAST, GalewindGym_ToggleBetweenAmphy_28
GalewindGym_ToggleBetweenAmphy_23:
# 111 "data/maps/GalewindCity_Gym/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 112 "data/maps/GalewindCity_Gym/scripts.pory"
	special RemoveCameraObject
# 115 "data/maps/GalewindCity_Gym/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 116 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_NO_TRAINER_SEE
# 117 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_TEMP_2
GalewindGym_ToggleBetweenAmphy_1:
# 119 "data/maps/GalewindCity_Gym/scripts.pory"
	releaseall
	return

GalewindGym_ToggleBetweenAmphy_2:
# 25 "data/maps/GalewindCity_Gym/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 26 "data/maps/GalewindCity_Gym/scripts.pory"
	specialvar VAR_TEMP_5, GetPlayerFacingDirection
# 29 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_GYM_AMPHY, VAR_TEMP_2, VAR_TEMP_3
# 30 "data/maps/GalewindCity_Gym/scripts.pory"
	switch VAR_TEMP_5
# 31 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_NORTH, GalewindGym_ToggleBetweenAmphy_7
# 32 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_SOUTH, GalewindGym_ToggleBetweenAmphy_8
# 33 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_WEST, GalewindGym_ToggleBetweenAmphy_9
# 34 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_EAST, GalewindGym_ToggleBetweenAmphy_10
GalewindGym_ToggleBetweenAmphy_5:
# 36 "data/maps/GalewindCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_5
# 37 "data/maps/GalewindCity_Gym/scripts.pory"
	addobject LOCALID_GYM_AMPHY
# 38 "data/maps/GalewindCity_Gym/scripts.pory"
	removeobject LOCALID_GYM_AMPHY_CONTROLLED
# 41 "data/maps/GalewindCity_Gym/scripts.pory"
	special SpawnCameraObject
# 42 "data/maps/GalewindCity_Gym/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 43 "data/maps/GalewindCity_Gym/scripts.pory"
	teleportcamera VAR_TEMP_0, VAR_TEMP_1
# 44 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectxy LOCALID_PLAYER, VAR_TEMP_0, VAR_TEMP_1
# 47 "data/maps/GalewindCity_Gym/scripts.pory"
	removeobject LOCALID_GYM_FAKEPLAYER
# 48 "data/maps/GalewindCity_Gym/scripts.pory"
	showplayer
# 49 "data/maps/GalewindCity_Gym/scripts.pory"
	switch VAR_TEMP_4
# 50 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_NORTH, GalewindGym_ToggleBetweenAmphy_19
# 51 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_SOUTH, GalewindGym_ToggleBetweenAmphy_20
# 52 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_WEST, GalewindGym_ToggleBetweenAmphy_21
# 53 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_EAST, GalewindGym_ToggleBetweenAmphy_22
GalewindGym_ToggleBetweenAmphy_17:
# 56 "data/maps/GalewindCity_Gym/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 57 "data/maps/GalewindCity_Gym/scripts.pory"
	special RemoveCameraObject
# 59 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 60 "data/maps/GalewindCity_Gym/scripts.pory"
	clearflag FLAG_NO_TRAINER_SEE
# 61 "data/maps/GalewindCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
	goto GalewindGym_ToggleBetweenAmphy_1

GalewindGym_ToggleBetweenAmphy_7:
# 31 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_AMPHY, MOVEMENT_TYPE_FACE_UP
	goto GalewindGym_ToggleBetweenAmphy_5

GalewindGym_ToggleBetweenAmphy_8:
# 32 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_AMPHY, MOVEMENT_TYPE_FACE_DOWN
	goto GalewindGym_ToggleBetweenAmphy_5

GalewindGym_ToggleBetweenAmphy_9:
# 33 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_AMPHY, MOVEMENT_TYPE_FACE_LEFT
	goto GalewindGym_ToggleBetweenAmphy_5

GalewindGym_ToggleBetweenAmphy_10:
# 34 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_AMPHY, MOVEMENT_TYPE_FACE_RIGHT
	goto GalewindGym_ToggleBetweenAmphy_5

GalewindGym_ToggleBetweenAmphy_13:
# 71 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_FAKEPLAYER, MOVEMENT_TYPE_FACE_UP
	goto GalewindGym_ToggleBetweenAmphy_11

GalewindGym_ToggleBetweenAmphy_14:
# 72 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_FAKEPLAYER, MOVEMENT_TYPE_FACE_DOWN
	goto GalewindGym_ToggleBetweenAmphy_11

GalewindGym_ToggleBetweenAmphy_15:
# 73 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_FAKEPLAYER, MOVEMENT_TYPE_FACE_LEFT
	goto GalewindGym_ToggleBetweenAmphy_11

GalewindGym_ToggleBetweenAmphy_16:
# 74 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_GYM_FAKEPLAYER, MOVEMENT_TYPE_FACE_RIGHT
	goto GalewindGym_ToggleBetweenAmphy_11

GalewindGym_ToggleBetweenAmphy_19:
# 50 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto GalewindGym_ToggleBetweenAmphy_17

GalewindGym_ToggleBetweenAmphy_20:
# 51 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto GalewindGym_ToggleBetweenAmphy_17

GalewindGym_ToggleBetweenAmphy_21:
# 52 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	goto GalewindGym_ToggleBetweenAmphy_17

GalewindGym_ToggleBetweenAmphy_22:
# 53 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto GalewindGym_ToggleBetweenAmphy_17

GalewindGym_ToggleBetweenAmphy_25:
# 97 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 98 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_GYM_AMPHY_CONTROLLED, DIR_NORTH
	goto GalewindGym_ToggleBetweenAmphy_23

GalewindGym_ToggleBetweenAmphy_26:
# 100 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 101 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_GYM_AMPHY_CONTROLLED, DIR_SOUTH
	goto GalewindGym_ToggleBetweenAmphy_23

GalewindGym_ToggleBetweenAmphy_27:
# 103 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 104 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_GYM_AMPHY_CONTROLLED, DIR_WEST
	goto GalewindGym_ToggleBetweenAmphy_23

GalewindGym_ToggleBetweenAmphy_28:
# 106 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 107 "data/maps/GalewindCity_Gym/scripts.pory"
	turnobject LOCALID_GYM_AMPHY_CONTROLLED, DIR_EAST
	goto GalewindGym_ToggleBetweenAmphy_23


GalewindGym_GymGuide::
# 123 "data/maps/GalewindCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_2, GalewindGym_GymGuide_1
# 127 "data/maps/GalewindCity_Gym/scripts.pory"
	msgbox GalewindGym_GymGuide_Text_1, MSGBOX_NPC
# 128 "data/maps/GalewindCity_Gym/scripts.pory"
	goto_if_unset FLAG_AMPHAROS_CONTROLS_UNLOCKED, GalewindGym_GymGuide_5
GalewindGym_GymGuide_4:
# 134 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_AMPHAROS_CONTROLS_UNLOCKED
	return

GalewindGym_GymGuide_1:
# 124 "data/maps/GalewindCity_Gym/scripts.pory"
	msgbox GalewindGym_GymGuide_Text_0, MSGBOX_NPC
	return

GalewindGym_GymGuide_5:
# 129 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 27
# 130 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 48
# 131 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, DIR_SOUTH
# 132 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_GYM_AMPHY_CONTROLLED, VAR_TEMP_2, VAR_TEMP_3
	goto GalewindGym_GymGuide_4


GalewindGym_Trainer1::
# 139 "data/maps/GalewindCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_2, GalewindGym_Trainer1_2
# 143 "data/maps/GalewindCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_15, GalewindGym_Trainer1_Text_1, GalewindGym_Trainer1_Text_2
	return

GalewindGym_Trainer1_2:
# 140 "data/maps/GalewindCity_Gym/scripts.pory"
	msgbox GalewindGym_Trainer1_Text_0, MSGBOX_NPC
	end


GalewindGym_Amphy::
# 147 "data/maps/GalewindCity_Gym/scripts.pory"
	goto_if_unset FLAG_AMPHAROS_CONTROLS_UNLOCKED, GalewindGym_Amphy_2
# 156 "data/maps/GalewindCity_Gym/scripts.pory"
	msgbox GalewindGym_Amphy_Text_1, MSGBOX_NPC
GalewindGym_Amphy_1:
# 158 "data/maps/GalewindCity_Gym/scripts.pory"
	switch VAR_FACING
# 159 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_NORTH, GalewindGym_Amphy_6
# 160 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_SOUTH, GalewindGym_Amphy_7
# 161 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_WEST, GalewindGym_Amphy_8
# 162 "data/maps/GalewindCity_Gym/scripts.pory"
	case DIR_EAST, GalewindGym_Amphy_9
	return

GalewindGym_Amphy_2:
# 148 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 27
# 149 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 48
# 150 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, DIR_SOUTH
# 151 "data/maps/GalewindCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_GYM_AMPHY_CONTROLLED, VAR_TEMP_2, VAR_TEMP_3
# 152 "data/maps/GalewindCity_Gym/scripts.pory"
	setflag FLAG_AMPHAROS_CONTROLS_UNLOCKED
# 153 "data/maps/GalewindCity_Gym/scripts.pory"
	msgbox GalewindGym_Amphy_Text_0, MSGBOX_NPC
	goto GalewindGym_Amphy_1

GalewindGym_Amphy_6:
# 159 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, DIR_SOUTH
	return

GalewindGym_Amphy_7:
# 160 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, DIR_NORTH
	return

GalewindGym_Amphy_8:
# 161 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, DIR_EAST
	return

GalewindGym_Amphy_9:
# 162 "data/maps/GalewindCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, DIR_WEST
	return


GalewindGym_GymGuide_Text_0:
# 124 "data/maps/GalewindCity_Gym/scripts.pory"
	.string "Shouldn't you be helping our latest\nchallenger with their gym challenge?$"

GalewindGym_GymGuide_Text_1:
# 127 "data/maps/GalewindCity_Gym/scripts.pory"
	.string "Yo, champ in the making!\pPress the SELECT button to\ntake control of Amphy!$"

GalewindGym_Trainer1_Text_0:
# 140 "data/maps/GalewindCity_Gym/scripts.pory"
	.string "Hey, cut that out!\nI can't see!$"

GalewindGym_Trainer1_Text_1:
# 143 "data/maps/GalewindCity_Gym/scripts.pory"
	.string "Stop right there!$"

GalewindGym_Trainer1_Text_2:
# 143 "data/maps/GalewindCity_Gym/scripts.pory"
	.string "A$"

GalewindGym_Amphy_Text_0:
# 153 "data/maps/GalewindCity_Gym/scripts.pory"
	.string "Amphy patiently awaits your orders.\pPress the SELECT button to\ntake control of Amphy.$"

GalewindGym_Amphy_Text_1:
# 156 "data/maps/GalewindCity_Gym/scripts.pory"
	.string "Amphy patiently awaits your orders.$"
