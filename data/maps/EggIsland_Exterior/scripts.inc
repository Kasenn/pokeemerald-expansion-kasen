EggIsland_Exterior_MapScripts::
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD
# 27 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	hasmonitem 0, ITEM_STRENGTH_GLOVES
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 22 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_OUTSIDEBOULDER_X, 0
	goto_if_ne EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 25 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetupMushroom
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 16 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaFinal
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 16 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 54
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 20 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_19

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 23 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_OUTSIDEBOULDER, VAR_OUTSIDEBOULDER_X, VAR_OUTSIDEBOULDER_Y
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD:
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_EGGBRIDGE_CREATED, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 33, 0x238, FALSE
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 28 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 0, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 29 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 8, MAP_EGG_ISLAND_EXTERIOR
# 30 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 31 "data/maps/EggIsland_Exterior/scripts.pory"
	hideplayer
# 32 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 1
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 1, IntroSequence
	.2byte 0


SetUpAreaOne::
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_KAMEK, 40, 8
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_KAMEK, MOVEMENT_TYPE_FACE_DOWN
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


IntroSequence::
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 71 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_KAMEK
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, IntroSequence_Movement_1
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 79 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 84 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 85 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 90
# 92 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 94 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, 17, 74
# 95 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera 17, 74
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IntroSequence_Movement_4
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 101 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x317, FALSE
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x317, FALSE
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x317, FALSE
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x317, FALSE
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_GROUND_EFFECTS
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_1
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 120 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 121 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 124 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 125 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x311, FALSE
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x311, FALSE
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x311, FALSE
# 131 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x311, FALSE
# 132 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 133 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 136 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
# 137 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 138 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_YOSHI1, TRUE
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 141 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
# 142 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_HONCHKROW
# 143 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return


MachopIntro1::
# 147 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
# 148 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro2::
# 150 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 2
# 151 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro3::
# 153 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 3
# 154 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro4::
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 4
# 157 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntroMain::
# 160 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 162 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_1, MSGBOX_AUTOCLOSE
# 163 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 164 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MachopIntroMain_2
# 170 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_EAST
MachopIntroMain_1:
# 172 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 173 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, Common_Movement_ExclamationMark
# 174 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 175 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_2
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_3, MSGBOX_AUTOCLOSE
# 177 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_TEMP_2
# 178 "data/maps/EggIsland_Exterior/scripts.pory"
	case 1, MachopIntroMain_7
# 182 "data/maps/EggIsland_Exterior/scripts.pory"
	case 2, MachopIntroMain_8
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	case 3, MachopIntroMain_9
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	case 4, MachopIntroMain_10
MachopIntroMain_5:
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_INTRO_MURKROW
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	fadedefaultbgm
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_INTRO_MURKROW
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MACHOP1, MOVEMENT_TYPE_LOOK_AROUND
# 205 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 3
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_MUSHROOMS_UNLOCKED
# 207 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 208 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return

MachopIntroMain_2:
# 166 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_WEST
	goto MachopIntroMain_1

MachopIntroMain_7:
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_0
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_8:
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 184 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 186 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_9:
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 190 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 192 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 193 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_10:
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_2
# 196 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 197 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5


MachopScript1::
# 214 "data/maps/EggIsland_Exterior/scripts.pory"
	faceplayer
# 215 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 216 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text1
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopScript1_Text_0
# 218 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text2, MSGBOX_AUTOCLOSE
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MachopScript1_2
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_1
MachopScript1_1:
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_MACHOP1
# 226 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_MACHOP1
# 227 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text3
# 228 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 229 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_STOP_EXP
# 230 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetYoshiMoves
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	special HealPlayerParty
# 232 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
# 233 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

MachopScript1_2:
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_0
	goto MachopScript1_1


MurkrowBattle::
# 283 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, MurkrowBattle_Text_0, MurkrowBattle_Text_1, RemoveMurkrow
	end


RemoveMurkrow::
# 288 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_ALLEN
# 289 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 290 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_ObjectDisappears
# 291 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 292 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 293 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


GeodudeBattle::
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, GeodudeBattle_Text_0, MurkrowBattle_Text_1, RemoveMurkrow
	end


RemoveGeodude::
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_TIMMY
# 304 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_ObjectDisappears
# 306 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 307 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 308 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 309 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


# 312 "data/maps/EggIsland_Exterior/scripts.pory"
Movement_ObjectDisappears:
# 313 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 314 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 315 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 316 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 318 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 319 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 320 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 321 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 322 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 323 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 324 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 325 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 326 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 327 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 328 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 329 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 331 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 332 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

SkarmoryTrigger1::
# 337 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 1
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTrigger2::
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 2
# 342 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTriggerMain::
# 345 "data/maps/EggIsland_Exterior/scripts.pory"
	counteggs
# 346 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 2
	goto_if_lt SkarmoryTriggerMain_2
# 350 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
# 351 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 15
# 352 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 353 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 354 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 355 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_SKARMORY
# 356 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SkarmoryTriggerMain_5
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_1
SkarmoryTriggerMain_4:
# 362 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 364 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_SKARMORY
# 365 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 367 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_SKARMORY, VAR_0x8000
# 368 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 370 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker SkarmoryTriggerMain_Text_0
# 371 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SkarmoryTriggerMain_Text_1, MSGBOX_AUTOCLOSE
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	special StartSpecialBattle
# 373 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SKARMORY_DEFEATED
# 374 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, Movement_ObjectDisappears
# 375 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 376 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SKARMORY
	return

SkarmoryTriggerMain_2:
# 347 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SkarmoryTriggerMain_5:
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_0
	goto SkarmoryTriggerMain_4


SuperMushroomUpgrade::
# 380 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 381 "data/maps/EggIsland_Exterior/scripts.pory"
	message SuperMushroomUpgrade_Text_0
# 382 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 383 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 384 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 385 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPERMUSHROOMUPGRADE
# 386 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SuperMushroomUpgrade_Text_1
# 387 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SleepingSnorlax::
# 391 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text_0
# 392 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, SleepingSnorlax_2
	msgbox SleepingSnorlax_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SleepingSnorlax_5
# 400 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 401 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 402 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_HEAL
# 403 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 404 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text2, MSGBOX_AUTOCLOSE
# 405 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SLEEPING_SNORLAX
# 406 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 407 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 408 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 409 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SleepingSnorlax_2:
# 393 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SleepingSnorlax_5:
# 397 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SleepingSnorlaxIntro::
# 426 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SLEEPING_SNORLAX_INTRO
# 427 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


ChestoBerryTree::
# 431 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_SLEEPING_SNORLAX_INTRO, ChestoBerryTree_1
# 436 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SLEEPING_SNORLAX, ChestoBerryTree_2
# 441 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_3
# 446 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_4
	return

ChestoBerryTree_1:
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_0
# 433 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_2:
# 437 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_1
# 438 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_3:
# 442 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_2
# 443 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_4:
# 447 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 448 "data/maps/EggIsland_Exterior/scripts.pory"
	message ChestoBerryTree_Text_3
# 449 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 450 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 451 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 452 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PICKED_UP_CHESTO_BERRY
# 453 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


Script_AwakeSnorlax::
# 458 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_AwakeSnorlax_Text, MSGBOX_SIGN
	return


StrGloves_ItemSparkle::
# 466 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PRIMEAPE_DEFEATED, StrGloves_ItemSparkle_2
StrGloves_ItemSparkle_1:
	hasmonitem 0, ITEM_GRIP_GLOVES
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne StrGloves_ItemSparkle_5
	msgbox GripGlovesOnGround, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq StrGloves_ItemSparkle_12
# 488 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 489 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_2
# 490 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 491 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 492 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 493 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox GripGlovesDescription
# 494 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 495 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipGripGloves
StrGloves_ItemSparkle_4:
# 497 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

StrGloves_ItemSparkle_2:
# 467 "data/maps/EggIsland_Exterior/scripts.pory"
	goto PrimeapeEncounter
	goto StrGloves_ItemSparkle_1

StrGloves_ItemSparkle_5:
	msgbox StrGlovesOnGround, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq StrGloves_ItemSparkle_9
# 474 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 475 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_0
# 476 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 477 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 478 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 479 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox StrGloves_ItemSparkle_Text_1
# 480 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 481 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipStrGloves
	goto StrGloves_ItemSparkle_4

StrGloves_ItemSparkle_9:
# 471 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

StrGloves_ItemSparkle_12:
# 485 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


PrimeapeEncounter::
# 522 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker PrimeapeEncounter_Text_0
# 523 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox PrimeapeEncounter_Text_1, MSGBOX_AUTOCLOSE
# 524 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 525 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 526 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PRIMEAPE
# 527 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_FACING
# 528 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_NORTH, PrimeapeEncounter_3
# 536 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_EAST, PrimeapeEncounter_4
# 545 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_WEST, PrimeapeEncounter_5
PrimeapeEncounter_1:
# 553 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 554 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 555 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 556 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 557 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_PRIMEAPE, VAR_0x8000
# 558 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 559 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 560 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker PrimeapeEncounter_Text_2
# 561 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox PrimeapeEncounter_Text_3, MSGBOX_AUTOCLOSE
# 562 "data/maps/EggIsland_Exterior/scripts.pory"
	special StartSpecialBattle
# 563 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PRIMEAPE_DEFEATED
# 564 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, Movement_ObjectDisappears
# 565 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 566 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_PRIMEAPE
	return

PrimeapeEncounter_3:
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_0
# 530 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 531 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 532 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 533 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 534 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 535 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1

PrimeapeEncounter_4:
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_1
# 538 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 539 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 540 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 541 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 542 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 543 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 544 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1

PrimeapeEncounter_5:
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_2
# 547 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 548 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 549 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 550 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 551 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1


HonchkrowScript::
# 570 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 571 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker HonchkrowScript_Text_0
# 572 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 573 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_HONCHKROW, VAR_0x8000
# 574 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox HonchkrowScript_Text_1, MSGBOX_AUTOCLOSE
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1
# 576 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 577 "data/maps/EggIsland_Exterior/scripts.pory"
	special StartSpecialBattle
# 578 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_HONCHKROW, Movement_ObjectDisappears
# 579 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 580 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_HONCHKROW
	return


FinaleTrigger::
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 585 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 586 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 587 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, Common_Movement_ExclamationMark
# 588 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 589 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 590 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_KAMEK, TRUE
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 594 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_KO_ANIM
# 595 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateExtraStrongMon
# 596 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, VAR_0x8000
# 597 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KameBattleIntro, MSGBOX_AUTOCLOSE
# 598 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2, 2, 2
# 599 "data/maps/EggIsland_Exterior/scripts.pory"
	special StartRegiBattle
	return


# 69 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 72 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 83 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 90 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 99 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_4:
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
	step_end

# 179 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_0:
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 183 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_1:
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 195 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_2:
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 220 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_0:
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 223 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_1:
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 357 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_0:
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 360 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_1:
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 529 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_0:
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_left
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
	step_end

# 537 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_1:
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	face_left
	step_end

# 546 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_2:
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
	step_end

MachopIntroMain_Text_0:
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Lean Man$"

MachopIntroMain_Text_1:
# 162 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "You there!\nYou've come at the perfect time!\pCome help me deal with\nthis scoundrel!$"

MachopIntroMain_Text_2:
# 175 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Dark Bird$"

MachopIntroMain_Text_3:
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Reinforcements!?\nI'm out of here!$"

MachopScript1_Text_0:
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Macho$"

MurkrowBattle_Text_0:
# 283 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "This is our turf! Leave!$"

MurkrowBattle_Text_1:
# 283 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "N/A$"

GeodudeBattle_Text_0:
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The underground belongs to us!\nOff with you!$"

SkarmoryTriggerMain_Text_0:
# 370 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Skarmory$"

SkarmoryTriggerMain_Text_1:
# 371 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "What delicious lookings eggs\nyou have there.\lHand them over!$"

SuperMushroomUpgrade_Text_0:
# 381 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nSuper Mushroom Upgrade!$"

SuperMushroomUpgrade_Text_1:
# 386 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Super Mushrooms now recover\nup to 50% more HP.$"

SleepingSnorlax_Text_0:
# 391 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It looks to be\na sleeping Snorlax.$"

ChestoBerryTree_Text_0:
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.$"

ChestoBerryTree_Text_1:
# 437 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou don't really like\nhow dry they are.$"

ChestoBerryTree_Text_2:
# 442 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou are already carrying\na handful of them.$"

ChestoBerryTree_Text_3:
# 448 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Picked up a handful of\nChesto berries!$"

StrGloves_ItemSparkle_Text_0:
# 475 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Grip Gloves to\nStrength Gloves!$"

StrGloves_ItemSparkle_Text_1:
# 479 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Strength gloves increase\nthe power of your moves,\land allows you to push around\lheavy boulders.$"

StrGloves_ItemSparkle_Text_2:
# 489 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Strength Gloves to\nGrip Gloves!$"

PrimeapeEncounter_Text_0:
# 522 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "???$"

PrimeapeEncounter_Text_1:
# 523 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "MY SPARKLY!$"

PrimeapeEncounter_Text_2:
# 560 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Primeape$"

PrimeapeEncounter_Text_3:
# 561 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "I SAW IT FIRST!\nGET BACK!$"

HonchkrowScript_Text_0:
# 571 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Honchkrow$"

HonchkrowScript_Text_1:
# 574 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The new boss man says to\nnot let anybody through!$"

FinaleTrigger_Text_0:
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Kamek$"

MachopScript1_Text1::
# 236 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Thank you stranger.\n"
	.string "I'm not sure I could've beaten\l"
	.string "that Murkrow without your\l"
	.string "intervention.\p"
	.string "I must say, they've been\n"
	.string "getting rowdy as of late…$"

MachopScript1_Text2::
# 244 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "I am Macho the Machop.\n"
	.string "And you are… Yoshi?\p"
	.string "Hm, can't say I've met one\n"
	.string "like yourself before.\l"
	.string "And you say you're looking\l"
	.string "for something called a Kamek?\l"
	.string "Yet another weird name I've not\l"
	.string "heard of.\p"
	.string "Anyway Yoshi, If you want to\n"
	.string "survive here, you need to\l"
	.string "be able to defend yourself.\p"
	.string "Your form doesn't really strike\n"
	.string "me as someone physical…\p"
	.string "I know! This island is known as\n"
	.string "the “Egg Island” due to the\l"
	.string "overabundance of eggs\l"
	.string "everywhere.\p"
	.string "Why don't you try grabbing\n"
	.string "some of those eggs and\l"
	.string "chucking them at your foes?\p"
	.string "Once you've grabbed a few eggs,\n"
	.string "see if you can get across that\l"
	.string "river to the east.$"

MachopScript1_Text3::
# 269 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}Yoshi can now collect eggs\n"
	.string "to help it on its journey!\p"
	.string "Look for eggs in the tall grass,\n"
	.string "deep sand, or rocky patches.\l"
	.string "Some eggs are going to\l"
	.string "hurt more than others,\l"
	.string "and some may have special\l"
	.string "attributes when thrown.\p"
	.string "But beware, as these areas are\n"
	.string "also inhabited by Pokémon!$"

SleepingSnorlax_Text::
# 412 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The sleeping Snorlax's nose\n"
	.string "starts to twitch as it smells\l"
	.string "the Chesto berries on you.\p"
	.string "Feed the Chesto berries\n"
	.string "to the Snorlax?$"

SleepingSnorlax_Text2::
# 420 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax wakes up and rushes out\n"
	.string "in search of more berries.$"

Script_AwakeSnorlax_Text::
# 460 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax is too busy chowing\n"
	.string "down Chesto berries to notice you.$"

GripGlovesDescription::
# 500 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Grip Gloves boosts\n"
	.string "the likelihood of added effects\l"
	.string "appearing when attacking,\l"
	.string "increases your speed,\l"
	.string "and allows you to climb up\l"
	.string "muddy slopes.$"

StrGlovesOnGround::
# 509 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "There seems to be a pair of\n"
	.string "gloves on the ground.\l"
	.string "Switch out your Grip Gloves?$"

GripGlovesOnGround::
# 515 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "There seems to be a pair of\n"
	.string "gloves on the ground.\l"
	.string "Switch out your Strength Gloves?$"

KameBattleIntro::
# 602 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "$"
