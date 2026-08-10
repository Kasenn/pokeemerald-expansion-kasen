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
	goto_if_set FLAG_EGGBRIDGE_CREATED, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_2
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_BERRYBRIDGE_X, 0
	goto_if_ne EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 37, 0x238, FALSE
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 36, 0x238, FALSE
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 35, 0x238, FALSE
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 34, 0x238, FALSE
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 26, 33, 0x239, FALSE
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
	setobjectxyperm LOCALID_KAMEK, 40, 8
# 65 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_KAMEK, MOVEMENT_TYPE_FACE_DOWN
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


IntroSequence::
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_KAMEK
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, IntroSequence_Movement_1
# 79 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 84 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 85 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 92 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 90
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, 17, 74
# 101 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera 17, 77
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x317, FALSE
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x317, FALSE
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x317, FALSE
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x317, FALSE
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_GROUND_EFFECTS
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_1
# 120 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 121 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 124 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 125 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 131 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 132 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x311, FALSE
# 133 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x311, FALSE
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x311, FALSE
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x311, FALSE
# 136 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 137 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 138 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
# 141 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 142 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 143 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_YOSHI1, TRUE
# 144 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 145 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
# 146 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_HONCHKROW
# 147 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return


MachopIntro1::
# 151 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
# 152 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro2::
# 154 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 2
# 155 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro3::
# 157 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 3
# 158 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro4::
# 160 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 4
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntroMain::
# 164 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 166 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_1, MSGBOX_AUTOCLOSE
# 167 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 168 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MachopIntroMain_2
# 174 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_EAST
MachopIntroMain_1:
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 177 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, Common_Movement_ExclamationMark
# 178 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_2
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_3, MSGBOX_AUTOCLOSE
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_TEMP_2
# 182 "data/maps/EggIsland_Exterior/scripts.pory"
	case 1, MachopIntroMain_7
# 186 "data/maps/EggIsland_Exterior/scripts.pory"
	case 2, MachopIntroMain_8
# 192 "data/maps/EggIsland_Exterior/scripts.pory"
	case 3, MachopIntroMain_9
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	case 4, MachopIntroMain_10
MachopIntroMain_5:
# 205 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_INTRO_MURKROW
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	fadedefaultbgm
# 207 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_INTRO_MURKROW
# 208 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MACHOP1, MOVEMENT_TYPE_LOOK_AROUND
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 3
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return

MachopIntroMain_2:
# 170 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_WEST
	goto MachopIntroMain_1

MachopIntroMain_7:
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_0
# 184 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_8:
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 190 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_9:
# 193 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 196 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 197 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_10:
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_2
# 200 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
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
	setflag FLAG_MUSHROOMS_UNLOCKED
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 232 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 233 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetYoshiMoves
# 235 "data/maps/EggIsland_Exterior/scripts.pory"
	special HealPlayerParty
# 236 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
# 237 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

MachopScript1_2:
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_0
	goto MachopScript1_1


MurkrowBattle::
# 287 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, MurkrowBattle_Text_0, MurkrowBattle_Text_1, RemoveMurkrow
	end


RemoveMurkrow::
# 292 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_ALLEN
# 293 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_TIMMY
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 295 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_ObjectDisappears
# 296 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 297 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 299 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


GeodudeBattle::
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, GeodudeBattle_Text_0, MurkrowBattle_Text_1, RemoveMurkrow
	end


RemoveGeodude::
# 308 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_TIMMY
# 309 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_ObjectDisappears
# 311 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 312 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 313 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 314 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


# 317 "data/maps/EggIsland_Exterior/scripts.pory"
Movement_ObjectDisappears:
# 318 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 319 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 320 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 321 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 322 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 323 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 324 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 325 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 326 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 327 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 328 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 329 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 331 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 332 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 334 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 335 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 336 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 337 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

SkarmoryTrigger1::
# 342 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 1
# 343 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTrigger2::
# 346 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 2
# 347 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTriggerMain::
# 350 "data/maps/EggIsland_Exterior/scripts.pory"
	counteggs
# 351 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt SkarmoryTriggerMain_2
# 355 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 356 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 15
# 358 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 359 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 360 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 361 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_SKARMORY
# 362 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SkarmoryTriggerMain_5
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_1
SkarmoryTriggerMain_4:
# 368 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 370 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_SKARMORY
# 371 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 373 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_SKARMORY, VAR_0x8000
# 374 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 375 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 376 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker SkarmoryTriggerMain_Text_0
# 377 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SkarmoryTriggerMain_Text_1, MSGBOX_AUTOCLOSE
# 378 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 379 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SKARMORY_DEFEATED
# 380 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, Movement_ObjectDisappears
# 381 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 382 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SKARMORY
# 383 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 384 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_TEMP_A
	return

SkarmoryTriggerMain_2:
# 352 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SkarmoryTriggerMain_5:
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_0
	goto SkarmoryTriggerMain_4


SpawnSkarmory::
# 388 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_TEMP_A
# 389 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SuperMushroomUpgrade::
# 393 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 394 "data/maps/EggIsland_Exterior/scripts.pory"
	message SuperMushroomUpgrade_Text_0
# 395 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 396 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPERMUSHROOMUPGRADE
# 397 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 398 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 399 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SuperMushroomUpgrade_Text_1
# 400 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


BaitItem::
# 404 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 405 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox BaitItem_Text_0
# 406 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


TongueUpgrade::
# 410 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 411 "data/maps/EggIsland_Exterior/scripts.pory"
	message TongueUpgrade_Text_0
# 412 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 413 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 414 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 415 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 416 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TongueUpgrade_Text_1
# 417 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SleepingSnorlax::
# 421 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text_0
# 422 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, SleepingSnorlax_2
	msgbox SleepingSnorlax_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SleepingSnorlax_5
# 430 "data/maps/EggIsland_Exterior/scripts.pory"
	closemessage
# 431 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 433 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_HEAL
# 434 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text2, MSGBOX_AUTOCLOSE
# 436 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SLEEPING_SNORLAX
# 437 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SNORLAXNINJA1
# 438 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SNORLAXNINJA2
# 439 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 440 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_AWAKE_SNORLAX
# 441 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 442 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 443 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SleepingSnorlax_2:
# 423 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SleepingSnorlax_5:
# 427 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SleepingSnorlaxIntro::
# 461 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SLEEPING_SNORLAX_INTRO
# 462 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


ChestoBerryTree::
# 466 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_SLEEPING_SNORLAX_INTRO, ChestoBerryTree_1
# 471 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SLEEPING_SNORLAX, ChestoBerryTree_2
# 476 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_3
# 481 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_4
	return

ChestoBerryTree_1:
# 467 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_0
# 468 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_2:
# 472 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_1
# 473 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_3:
# 477 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_2
# 478 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_4:
# 482 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_3, MSGBOX_YESNO
# 483 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ChestoBerryTree_10
# 487 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 488 "data/maps/EggIsland_Exterior/scripts.pory"
	message ChestoBerryTree_Text_4
# 489 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 490 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 491 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 492 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PICKED_UP_CHESTO_BERRY
# 493 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

ChestoBerryTree_10:
# 484 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_AwakeSnorlax::
# 498 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_AwakeSnorlax_Text, MSGBOX_SIGN
	return


StrGloves_ItemSparkle::
# 507 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 530 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_2
# 531 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 532 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 533 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 534 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox GripGlovesDescription
# 535 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 536 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipGripGloves
StrGloves_ItemSparkle_4:
# 538 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

StrGloves_ItemSparkle_2:
# 508 "data/maps/EggIsland_Exterior/scripts.pory"
	goto PrimeapeEncounter
	goto StrGloves_ItemSparkle_1

StrGloves_ItemSparkle_5:
	msgbox StrGlovesOnGround, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq StrGloves_ItemSparkle_9
# 515 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 516 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_0
# 517 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 518 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 519 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 520 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox StrGloves_ItemSparkle_Text_1
# 521 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 522 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipStrGloves
	goto StrGloves_ItemSparkle_4

StrGloves_ItemSparkle_9:
# 512 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

StrGloves_ItemSparkle_12:
# 526 "data/maps/EggIsland_Exterior/scripts.pory"
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
	callnative CreateStrongMon
# 602 "data/maps/EggIsland_Exterior/scripts.pory"
	subvar VAR_0x8000, 3
# 603 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_PRIMEAPE, VAR_0x8000, abilityNum = 0
# 604 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 605 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 606 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker PrimeapeEncounter_Text_2
# 607 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox PrimeapeEncounter_Text_3, MSGBOX_AUTOCLOSE
# 608 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 609 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PRIMEAPE_DEFEATED
# 610 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, Movement_ObjectDisappears
# 611 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 612 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_PRIMEAPE
# 613 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 617 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 618 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker HonchkrowScript_Text_0
# 619 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 620 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_HONCHKROW, VAR_0x8000
# 621 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox HonchkrowScript_Text_1, MSGBOX_AUTOCLOSE
# 622 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1
# 623 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 624 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 625 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_HONCHKROW, Movement_ObjectDisappears
# 626 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 627 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_HONCHKROW
# 628 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
	return


FinaleTrigger::
# 632 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 633 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 634 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 635 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, Common_Movement_ExclamationMark
# 636 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 637 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 638 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_KAMEK, TRUE
# 639 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 640 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 642 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_KO_ANIM
# 643 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateExtraStrongMon
# 644 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, VAR_0x8000
# 645 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekBattleIntro, MSGBOX_AUTOCLOSE
# 647 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2, 2, 2
# 648 "data/maps/EggIsland_Exterior/scripts.pory"
	special StartSpecialBattle
	return


SetSave3EscapeWarp::
# 675 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_3_REACHED
# 676 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_EXTERIOR, 24, 57
# 677 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SetSave4EscapeWarp::
# 681 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_4_REACHED
# 682 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_EXTERIOR, 54, 32
# 683 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SetSave5EscapeWarp::
# 687 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_5_REACHED
# 688 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_INTERIOR, 60, 4
# 689 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


# 75 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 78 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 89 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 96 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 183 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_0:
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
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

# 187 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_1:
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 199 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_2:
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
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

# 363 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_0:
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

# 366 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_1:
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
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

MachopIntroMain_Text_0:
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Lean Man$"

MachopIntroMain_Text_1:
# 166 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "You there! You've come\nat the perfect time!\pCome help me deal with\nthis scoundrel!$"

MachopIntroMain_Text_2:
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Dark Bird$"

MachopIntroMain_Text_3:
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Reinforcements!?\nI'm out of here!$"

MachopScript1_Text_0:
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Macho$"

MurkrowBattle_Text_0:
# 287 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "This is our turf! Leave!$"

MurkrowBattle_Text_1:
# 287 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "N/A$"

GeodudeBattle_Text_0:
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The underground belongs to us!\nOff with you!$"

SkarmoryTriggerMain_Text_0:
# 376 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Skarmory$"

SkarmoryTriggerMain_Text_1:
# 377 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "What delicious lookings eggs\nyou have there.\lHand them over!$"

SuperMushroomUpgrade_Text_0:
# 394 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nSuper Mushroom Upgrade!$"

SuperMushroomUpgrade_Text_1:
# 399 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Super Mushrooms now recover\nup to 50% more HP.$"

BaitItem_Text_0:
# 405 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Huh… Looks like it was just\nsome shiny rocks glinting in\lthe sun…$"

TongueUpgrade_Text_0:
# 411 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nTongue Upgrade!$"

TongueUpgrade_Text_1:
# 416 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Tongue Attack's Power\nis greatly increased.$"

SleepingSnorlax_Text_0:
# 421 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It looks to be\na sleeping Snorlax.$"

ChestoBerryTree_Text_0:
# 467 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.$"

ChestoBerryTree_Text_1:
# 472 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou don't really like\nhow dry they are.$"

ChestoBerryTree_Text_2:
# 477 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou are already carrying\na handful of them.$"

ChestoBerryTree_Text_3:
# 482 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\lPick a few berries?$"

ChestoBerryTree_Text_4:
# 488 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Picked up a handful of\nChesto berries!$"

StrGloves_ItemSparkle_Text_0:
# 516 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Grip Gloves\nto Strength Gloves!$"

StrGloves_ItemSparkle_Text_1:
# 520 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Strength gloves increase\nthe power of your moves,\land allows you to push around\lheavy boulders.$"

StrGloves_ItemSparkle_Text_2:
# 530 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Strength Gloves\nto Grip Gloves!$"

PrimeapeEncounter_Text_0:
# 565 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "???$"

PrimeapeEncounter_Text_1:
# 566 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "MY SPARKLY!$"

PrimeapeEncounter_Text_2:
# 606 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Primeape$"

PrimeapeEncounter_Text_3:
# 607 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "I SAW IT FIRST!\nGET BACK!$"

HonchkrowScript_Text_0:
# 618 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Honchkrow$"

HonchkrowScript_Text_1:
# 621 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The new boss man says to\nnot let anybody through!$"

FinaleTrigger_Text_0:
# 640 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Kamek$"

MachopScript1_Text1::
# 240 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Thank you stranger.\n"
	.string "I'm not sure I could've beaten\l"
	.string "that Murkrow without your\l"
	.string "intervention.\p"
	.string "I must say, they've been\n"
	.string "getting rowdy as of late…$"

MachopScript1_Text2::
# 248 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 273 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 446 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The sleeping Snorlax's nose\n"
	.string "starts to twitch as it smells\l"
	.string "the Chesto berries on you.\p"
	.string "Feed the Chesto berries\n"
	.string "to the Snorlax?$"

SleepingSnorlax_Text2::
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax wakes up and\n"
	.string "rushes out in search of\l"
	.string "more berries.$"

Script_AwakeSnorlax_Text::
# 500 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax is too busy\n"
	.string "chowing down Chesto berries\l"
	.string "to notice you.$"

GripGlovesDescription::
# 541 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Grip Gloves boosts\n"
	.string "the likelihood of added effects\l"
	.string "appearing when attacking,\l"
	.string "increases Yoshi's speed,\l"
	.string "and allows Yoshi to climb up\l"
	.string "muddy slopes.$"

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

KamekBattleIntro::
# 652 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi?!\n"
	.string "How did you get here?!\p"
	.string "I gave those birdbrains clear\n"
	.string "instructions to not let anyone\l"
	.string "through while I channel my spell!$"

KamekBattleIntro2::
# 660 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "…Oh, great! Now I lost my\n"
	.string "concentration and need to start\l"
	.string "from the beginning!\p"
	.string "THAT'S IT!\p"
	.string "You've been meddling in my\n"
	.string "business for far too long!\p"
	.string "Once I'm done with you,\n"
	.string "I can leave you and this\l"
	.string "weird world behind, and\l"
	.string "return back to the young\l"
	.string "master's side!$"
