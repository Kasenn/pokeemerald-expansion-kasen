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
	compare VAR_BERRYBRIDGE_MAIN_X, 0
	goto_if_ne EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_2
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_BERRYBRIDGE_X, 0
	goto_if_ne EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 37, 0x238, FALSE
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 36, 0x238, FALSE
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 35, 0x238, FALSE
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 34, 0x238, FALSE
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_MAIN_X, 33, 0x239, FALSE
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_X, 54, 0x238, FALSE
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_X, 53, 0x239, FALSE
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
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 0
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 2
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 64 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_KAMEK
# 65 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_PORTAL
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_KAMEK, 40, 9
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_KAMEK, MOVEMENT_TYPE_FACE_UP
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


IntroSequence::
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 79 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_KAMEK
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, IntroSequence_Movement_1
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 84 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 85 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 92 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 94 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 95 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 90
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 101 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, 17, 74
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera 17, 77
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x317, FALSE
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x317, FALSE
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x317, FALSE
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x317, FALSE
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_GROUND_EFFECTS
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 120 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 121 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_1
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 124 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 125 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 131 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 132 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 133 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x311, FALSE
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x311, FALSE
# 136 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x311, FALSE
# 137 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x311, FALSE
# 138 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 141 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 142 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
# 143 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 144 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 145 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_YOSHI1, TRUE
# 146 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 147 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
# 148 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_HONCHKROW
# 149 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return


MachopIntro1::
# 153 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
# 154 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro2::
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 2
# 157 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro3::
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 3
# 160 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro4::
# 162 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 4
# 163 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntroMain::
# 166 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 167 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 168 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_1, MSGBOX_AUTOCLOSE
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 170 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MachopIntroMain_2
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_EAST
MachopIntroMain_1:
# 178 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, Common_Movement_ExclamationMark
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_2
# 182 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_3, MSGBOX_AUTOCLOSE
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_TEMP_2
# 184 "data/maps/EggIsland_Exterior/scripts.pory"
	case 1, MachopIntroMain_7
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	case 2, MachopIntroMain_8
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	case 3, MachopIntroMain_9
# 200 "data/maps/EggIsland_Exterior/scripts.pory"
	case 4, MachopIntroMain_10
MachopIntroMain_5:
# 207 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_INTRO_MURKROW
# 208 "data/maps/EggIsland_Exterior/scripts.pory"
	fadedefaultbgm
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_INTRO_MURKROW
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MACHOP1, MOVEMENT_TYPE_LOOK_AROUND
# 211 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 3
# 212 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return

MachopIntroMain_2:
# 172 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_WEST
	goto MachopIntroMain_1

MachopIntroMain_7:
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_0
# 186 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_8:
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 190 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 192 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 193 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_9:
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 196 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 197 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_10:
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_2
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 205 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5


MachopScript1::
# 216 "data/maps/EggIsland_Exterior/scripts.pory"
	faceplayer
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 218 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text1
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopScript1_Text_0
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text2, MSGBOX_AUTOCLOSE
# 221 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MachopScript1_2
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_1
MachopScript1_1:
# 227 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_MACHOP1
# 228 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_MACHOP1
# 229 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text3
# 230 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_STOP_EXP
# 232 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_MUSHROOMS_UNLOCKED
# 233 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 235 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 236 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetYoshiMoves
# 237 "data/maps/EggIsland_Exterior/scripts.pory"
	special HealPlayerParty
# 238 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
# 239 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

MachopScript1_2:
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_0
	goto MachopScript1_1


MurkrowBattle::
# 289 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, MurkrowBattle_Text_0, MurkrowBattle_Text_1, RemoveCustomBattler
	end


RemoveCustomBattler::
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_OVERRIDE_MON, 0
# 295 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_OVERRIDE_LEVEL, 0
# 296 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_ALLEN
# 297 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_TIMMY
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ClearNoRunningFlag
# 299 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 300 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_ObjectDisappears
# 302 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 304 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 306 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


GeodudeBattle::
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, GeodudeBattle_Text_0, MurkrowBattle_Text_1, RemoveCustomBattler
	end


# 314 "data/maps/EggIsland_Exterior/scripts.pory"
Movement_ObjectDisappears:
# 315 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 316 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 318 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 319 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 320 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 321 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 322 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 323 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 324 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 325 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 326 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 327 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 328 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 329 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 331 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 332 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 334 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 335 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

SkarmoryTrigger1::
# 339 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 1
# 340 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTrigger2::
# 343 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 2
# 344 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTriggerMain::
# 347 "data/maps/EggIsland_Exterior/scripts.pory"
	counteggs
# 348 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt SkarmoryTriggerMain_2
# 352 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 353 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
# 354 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 15
# 355 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 356 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 358 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_SKARMORY
# 359 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SkarmoryTriggerMain_5
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_1
SkarmoryTriggerMain_4:
# 365 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 367 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_SKARMORY
# 368 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 370 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 371 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_SKARMORY, VAR_0x8000
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 373 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 374 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker SkarmoryTriggerMain_Text_0
# 375 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SkarmoryTriggerMain_Text_1, MSGBOX_AUTOCLOSE
# 376 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 377 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SKARMORY_DEFEATED
# 378 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, Movement_ObjectDisappears
# 379 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 380 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SKARMORY
# 381 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 382 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_TEMP_A
	return

SkarmoryTriggerMain_2:
# 349 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SkarmoryTriggerMain_5:
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_0
	goto SkarmoryTriggerMain_4


SpawnSkarmory::
# 386 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_TEMP_A
# 387 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SuperMushroomUpgrade::
# 391 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 392 "data/maps/EggIsland_Exterior/scripts.pory"
	message SuperMushroomUpgrade_Text_0
# 393 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 394 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPERMUSHROOMUPGRADE
# 395 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 396 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 397 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SuperMushroomUpgrade_Text_1
# 398 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


BaitItem::
# 402 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 403 "data/maps/EggIsland_Exterior/scripts.pory"
	message BaitItem_Text_0
# 404 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 405 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 406 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 407 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 408 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox BaitItem_Text_1
# 409 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


TongueUpgrade::
# 413 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 414 "data/maps/EggIsland_Exterior/scripts.pory"
	message TongueUpgrade_Text_0
# 415 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 416 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 417 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 418 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 419 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TongueUpgrade_Text_1
# 420 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SleepingSnorlax::
# 424 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text_0
# 425 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, SleepingSnorlax_2
	msgbox SleepingSnorlax_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SleepingSnorlax_5
# 433 "data/maps/EggIsland_Exterior/scripts.pory"
	closemessage
# 434 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 436 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_HEAL
# 437 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 438 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text2, MSGBOX_AUTOCLOSE
# 439 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SLEEPING_SNORLAX
# 440 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SNORLAXNINJA1
# 441 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SNORLAXNINJA2
# 442 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 443 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_AWAKE_SNORLAX
# 444 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 445 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 446 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SleepingSnorlax_2:
# 426 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SleepingSnorlax_5:
# 430 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SleepingSnorlaxIntro::
# 464 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SLEEPING_SNORLAX_INTRO
# 465 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


ChestoBerryTree::
# 469 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_SLEEPING_SNORLAX_INTRO, ChestoBerryTree_1
# 474 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SLEEPING_SNORLAX, ChestoBerryTree_2
# 479 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_3
# 484 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_4
	return

ChestoBerryTree_1:
# 470 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_0
# 471 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_2:
# 475 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_1
# 476 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_3:
# 480 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_2
# 481 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_4:
# 485 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_3, MSGBOX_YESNO
# 486 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ChestoBerryTree_10
# 490 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 491 "data/maps/EggIsland_Exterior/scripts.pory"
	message ChestoBerryTree_Text_4
# 492 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 493 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 494 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 495 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PICKED_UP_CHESTO_BERRY
# 496 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

ChestoBerryTree_10:
# 487 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_AwakeSnorlax::
# 501 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_AwakeSnorlax_Text, MSGBOX_SIGN
	return


StrGloves_ItemSparkle::
# 510 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 532 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 533 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_2
# 534 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 535 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 536 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 537 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox GripGlovesDescription
# 538 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 539 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipGripGloves
StrGloves_ItemSparkle_4:
# 541 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

StrGloves_ItemSparkle_2:
# 511 "data/maps/EggIsland_Exterior/scripts.pory"
	goto PrimeapeEncounter
	goto StrGloves_ItemSparkle_1

StrGloves_ItemSparkle_5:
	msgbox StrGlovesOnGround, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq StrGloves_ItemSparkle_9
# 518 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 519 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_0
# 520 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 521 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 522 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 523 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox StrGloves_ItemSparkle_Text_1
# 524 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 525 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipStrGloves
	goto StrGloves_ItemSparkle_4

StrGloves_ItemSparkle_9:
# 515 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

StrGloves_ItemSparkle_12:
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


PrimeapeEncounter::
# 564 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 565 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker PrimeapeEncounter_Text_0
# 566 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox PrimeapeEncounter_Text_1, MSGBOX_AUTOCLOSE
# 567 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 568 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 569 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 570 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 571 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 572 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PRIMEAPE
# 573 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_FACING
# 574 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_NORTH, PrimeapeEncounter_3
# 582 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_EAST, PrimeapeEncounter_4
# 590 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_WEST, PrimeapeEncounter_5
PrimeapeEncounter_1:
# 598 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 599 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 601 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 602 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 603 "data/maps/EggIsland_Exterior/scripts.pory"
	subvar VAR_0x8000, 3
# 604 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_PRIMEAPE, VAR_0x8000, abilityNum = 0
# 605 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 606 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 607 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker PrimeapeEncounter_Text_2
# 608 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox PrimeapeEncounter_Text_3, MSGBOX_AUTOCLOSE
# 609 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 610 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PRIMEAPE_DEFEATED
# 611 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, Movement_ObjectDisappears
# 612 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 613 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_PRIMEAPE
# 614 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
	return

PrimeapeEncounter_3:
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_0
# 576 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 80
# 577 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 578 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 579 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 580 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 581 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1

PrimeapeEncounter_4:
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_1
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 80
# 585 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 586 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 587 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 588 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 589 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1

PrimeapeEncounter_5:
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_2
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 80
# 593 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 594 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 595 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 596 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1


HonchkrowScript::
# 618 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 619 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_KO_ANIM
# 620 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker HonchkrowScript_Text_0
# 621 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateDefaultLevelMon
# 622 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 623 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_HONCHKROW, VAR_0x8000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
# 624 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox HonchkrowScript_Text_1, MSGBOX_AUTOCLOSE
# 625 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1
# 626 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 627 "data/maps/EggIsland_Exterior/scripts.pory"
	setwilddoubleflag
# 628 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 629 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DONT_DESPAWN_PORTAL
# 630 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PORTAL1
# 631 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 632 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_HONCHKROW, Movement_ObjectDisappears
# 633 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 634 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_HONCHKROW
# 635 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
	return


AnimatePortal::
# 639 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DONT_DESPAWN_PORTAL
# 640 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PORTAL1
# 641 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, AnimatePortal_Movement_0
# 642 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 1
# 643 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


FinaleTrigger::
# 647 "data/maps/EggIsland_Exterior/scripts.pory"
	lockall
# 648 "data/maps/EggIsland_Exterior/scripts.pory"
	fadenewbgm MUS_KAMEK
# 649 "data/maps/EggIsland_Exterior/scripts.pory"
	savebgm MUS_KAMEK
# 650 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 651 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 652 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 653 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, Common_Movement_ExclamationMark
# 654 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 655 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 656 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 657 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 658 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 660 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateDefaultLevelMon
# 661 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_0x8000, 3
# 662 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 663 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_KO_ANIM
# 664 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, VAR_0x8000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
# 665 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 666 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekBattleIntro, MSGBOX_AUTOCLOSE
# 667 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 668 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 669 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 670 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PORTAL1, IntroSequence_Movement_2
# 671 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 2
# 672 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 673 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 674 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 675 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_PORTAL1
# 676 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 677 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 678 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 679 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, Common_Movement_ExclamationMark
# 680 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 681 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 682 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 64
# 683 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 684 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 685 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 686 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekBattleIntro2, MSGBOX_AUTOCLOSE
# 687 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2, 2, 2
# 688 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 689 "data/maps/EggIsland_Exterior/scripts.pory"
	setwilddoubleflag
# 690 "data/maps/EggIsland_Exterior/scripts.pory"
	special StartSpecialBattle
# 692 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 693 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekPostBattle, MSGBOX_AUTOCLOSE
# 694 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 695 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 696 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 697 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 698 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 699 "data/maps/EggIsland_Exterior/scripts.pory"
	bufferpartymonnickname STR_VAR_1, 1
# 700 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_1
# 701 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekPostBattle2, MSGBOX_AUTOCLOSE
# 702 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 703 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 704 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 705 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 706 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PORTAL1
# 707 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 708 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 709 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 710 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 711 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 712 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 713 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekPostBattle3, MSGBOX_AUTOCLOSE
# 714 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 715 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 716 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, FinaleTrigger_Movement_0
# 718 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, FinaleTrigger_Movement_1
# 719 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, FinaleTrigger_Movement_2
# 720 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, FinaleTrigger_Movement_2
# 721 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, FinaleTrigger_Movement_2
# 722 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, FinaleTrigger_Movement_2
# 723 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, FinaleTrigger_Movement_2
# 724 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovementall
# 725 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 726 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 60
# 727 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 10
# 728 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_FADEOUT_SPEED, 6
# 729 "data/maps/EggIsland_Exterior/scripts.pory"
	warpsilent MAP_YOSHI_INTRO, 0
	return


SetSave3EscapeWarp::
# 776 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_3_REACHED, SetSave3EscapeWarp_2
# 776 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_4_REACHED, SetSave3EscapeWarp_2
# 776 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_5_REACHED, SetSave3EscapeWarp_2
# 780 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_3_REACHED
# 781 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_EXTERIOR, 24, 57
# 782 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SetSave3EscapeWarp_2:
# 777 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SetSave4EscapeWarp::
# 786 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_4_REACHED, SetSave4EscapeWarp_2
# 786 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_5_REACHED, SetSave4EscapeWarp_2
# 790 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_4_REACHED
# 791 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_EXTERIOR, 54, 32
# 792 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SetSave4EscapeWarp_2:
# 787 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SetSave5EscapeWarp::
# 796 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_5_REACHED, SetSave5EscapeWarp_2
# 800 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_5_REACHED
# 801 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_INTERIOR, 60, 4
# 802 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SetSave5EscapeWarp_2:
# 797 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


# 77 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 80 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 91 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 98 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 185 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_0:
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 189 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_1:
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 201 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_2:
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 222 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_0:
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 225 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_1:
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 360 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_0:
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

# 363 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_1:
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 575 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_0:
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_left
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
	step_end

# 583 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_1:
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	face_left
	step_end

# 591 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_2:
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
	step_end

# 641 "data/maps/EggIsland_Exterior/scripts.pory"
AnimatePortal_Movement_0:
# 641 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 641 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
	step_end

# 717 "data/maps/EggIsland_Exterior/scripts.pory"
FinaleTrigger_Movement_0:
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

# 718 "data/maps/EggIsland_Exterior/scripts.pory"
FinaleTrigger_Movement_1:
# 718 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 718 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 718 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 718 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 718 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

# 719 "data/maps/EggIsland_Exterior/scripts.pory"
FinaleTrigger_Movement_2:
# 719 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 719 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 719 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 719 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 719 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

MachopIntroMain_Text_0:
# 167 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Lean Man$"

MachopIntroMain_Text_1:
# 168 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "You there! You've come\nat the perfect time!\pCome help me deal with\nthis scoundrel!$"

MachopIntroMain_Text_2:
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Dark Bird$"

MachopIntroMain_Text_3:
# 182 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Reinforcements!?\nI'm out of here!$"

MachopScript1_Text_0:
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Macho$"

MurkrowBattle_Text_0:
# 289 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "This is our turf! Leave!$"

MurkrowBattle_Text_1:
# 289 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "N/A$"

GeodudeBattle_Text_0:
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The underground belongs to us!\nOff with you!$"

SkarmoryTriggerMain_Text_0:
# 374 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Skarmory$"

SkarmoryTriggerMain_Text_1:
# 375 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "What delicious lookings eggs\nyou have there.\lHand them over!$"

SuperMushroomUpgrade_Text_0:
# 392 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nSuper Mushroom Upgrade!$"

SuperMushroomUpgrade_Text_1:
# 397 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Super Mushrooms now recover\nup to 50% more HP.$"

BaitItem_Text_0:
# 403 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nJumping Diglett Upgrade!$"

BaitItem_Text_1:
# 408 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call Diglett can now hit\nFlying-type opponents.$"

TongueUpgrade_Text_0:
# 414 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nTongue Upgrade!$"

TongueUpgrade_Text_1:
# 419 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Tongue Attack's Power\nis greatly increased.$"

SleepingSnorlax_Text_0:
# 424 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It looks to be\na sleeping Snorlax.$"

ChestoBerryTree_Text_0:
# 470 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.$"

ChestoBerryTree_Text_1:
# 475 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou don't really like\nhow dry they are.$"

ChestoBerryTree_Text_2:
# 480 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou are already carrying\na handful of them.$"

ChestoBerryTree_Text_3:
# 485 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\lPick a few berries?$"

ChestoBerryTree_Text_4:
# 491 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Picked up a handful of\nChesto berries!$"

StrGloves_ItemSparkle_Text_0:
# 519 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Grip Gloves\nto Strength Gloves!$"

StrGloves_ItemSparkle_Text_1:
# 523 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Strength gloves increase\nthe power of your moves,\land allows you to push around\lheavy boulders.$"

StrGloves_ItemSparkle_Text_2:
# 533 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Strength Gloves\nto Grip Gloves!$"

PrimeapeEncounter_Text_0:
# 565 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "???$"

PrimeapeEncounter_Text_1:
# 566 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "MY SPARKLY!$"

PrimeapeEncounter_Text_2:
# 607 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Primeape$"

PrimeapeEncounter_Text_3:
# 608 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "I SAW IT FIRST!\nGET BACK!$"

HonchkrowScript_Text_0:
# 620 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Honchkrow$"

HonchkrowScript_Text_1:
# 624 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The new boss man says to\nnot let anybody through!$"

FinaleTrigger_Text_0:
# 665 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Kamek$"

FinaleTrigger_Text_1:
# 700 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "{STR_VAR_1}$"

MachopScript1_Text1::
# 242 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Thank you stranger.\n"
	.string "I'm not sure I could've beaten\l"
	.string "that Murkrow without your\l"
	.string "intervention.\p"
	.string "I must say, they've been\n"
	.string "getting rowdy as of late…$"

MachopScript1_Text2::
# 250 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 275 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 449 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The sleeping Snorlax's nose\n"
	.string "starts to twitch as it smells\l"
	.string "the Chesto berries on you.\p"
	.string "Feed the Chesto berries\n"
	.string "to the Snorlax?$"

SleepingSnorlax_Text2::
# 457 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax wakes up and\n"
	.string "rushes out in search of\l"
	.string "more berries.$"

Script_AwakeSnorlax_Text::
# 503 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax is too busy\n"
	.string "chowing down Chesto berries\l"
	.string "to notice you.$"

GripGlovesDescription::
# 544 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Grip Gloves increase\n"
	.string "Yoshi's speed, and allows\l"
	.string "Yoshi to climb muddy slopes.$"

StrGlovesOnGround::
# 550 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "There seems to be a pair of\n"
	.string "gloves on the ground.\l"
	.string "Switch out your Grip Gloves?$"

GripGlovesOnGround::
# 556 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "There seems to be a pair of\n"
	.string "gloves on the ground.\p"
	.string "Switch out your\n"
	.string "Strength Gloves?$"

KamekPostBattle::
# 732 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Ow! You big meanie!\p"
	.string "This is not fair, what with\n"
	.string "you all grouping up against me!\p"
	.string "If I take you back home, will\n"
	.string "you please leave me alone?\p"
	.string "Here, if you let me concentrate\n"
	.string "for a while, I'll open up\l"
	.string "the portal for you again!$"

KamekPostBattle2::
# 742 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Take care, Yoshi!\n"
	.string "When you get back home,\l"
	.string "don't forget to give that\l"
	.string "Kamek guy another clobbering,\l"
	.string "make him really remember to\l"
	.string "not mess with you again!$"

KamekPostBattle3::
# 750 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The portal is stable, but\n"
	.string "it won't stay open for long.\p"
	.string "If you want to get back home,\n"
	.string "I suggest you start moving!$"

KamekBattleIntro::
# 757 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi?!\n"
	.string "How did you get here?!\p"
	.string "I gave those birdbrains clear\n"
	.string "instructions to not let anyone\l"
	.string "through while I channel my spell!$"

KamekBattleIntro2::
# 765 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "…Oh, great! Now I lost my\n"
	.string "concentration and need to\l"
	.string "start from the beginning!\p"
	.string "THAT'S IT!\p"
	.string "You've been meddling in my\n"
	.string "business for far too long!\l"
	.string "Get ready to be clobbered!$"
