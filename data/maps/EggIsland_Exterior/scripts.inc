EggIsland_Exterior_MapScripts::
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
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
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 71
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_X, 54, 0x23B, FALSE
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile VAR_BERRYBRIDGE_X, 53, 0x23C, FALSE
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_DISABLE_KO_ANIM, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_1
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_1:
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative QueuePortalAffineAnim
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
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 0
# 64 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 65 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_ENCOUNTER_TABLE, 2
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 1
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_KAMEK
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_PORTAL
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_KAMEK, 40, 9
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_KAMEK, MOVEMENT_TYPE_FACE_UP
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


IntroSequence::
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 84 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 85 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_KAMEK
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, IntroSequence_Movement_1
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 92 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 94 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 95 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 101 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 90
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, 17, 74
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera 17, 77
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 121 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x317, FALSE
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x317, FALSE
# 124 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x317, FALSE
# 125 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x317, FALSE
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_GROUND_EFFECTS
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_1
# 131 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 132 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 133 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 136 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 137 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 138 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 141 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 142 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 143 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x311, FALSE
# 144 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x311, FALSE
# 145 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x311, FALSE
# 146 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x311, FALSE
# 147 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 148 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 149 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 150 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 151 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
# 152 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 153 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 154 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_YOSHI1, TRUE
# 155 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
# 157 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_HONCHKROW
# 158 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return


MachopIntro1::
# 162 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
# 163 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro2::
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 2
# 166 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro3::
# 168 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 3
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro4::
# 171 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 4
# 172 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntroMain::
# 175 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 177 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_1, MSGBOX_AUTOCLOSE
# 178 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MachopIntroMain_2
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_EAST
MachopIntroMain_1:
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, Common_Movement_ExclamationMark
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 190 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_2
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_3, MSGBOX_AUTOCLOSE
# 192 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_TEMP_2
# 193 "data/maps/EggIsland_Exterior/scripts.pory"
	case 1, MachopIntroMain_7
# 197 "data/maps/EggIsland_Exterior/scripts.pory"
	case 2, MachopIntroMain_8
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	case 3, MachopIntroMain_9
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	case 4, MachopIntroMain_10
MachopIntroMain_5:
# 216 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_INTRO_MURKROW
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	fadedefaultbgm
# 218 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_INTRO_MURKROW
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MACHOP1, MOVEMENT_TYPE_LOOK_AROUND
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 3
# 221 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return

MachopIntroMain_2:
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_WEST
	goto MachopIntroMain_1

MachopIntroMain_7:
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_0
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 196 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_8:
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 200 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_9:
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 205 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 207 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 208 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_10:
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_2
# 211 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 212 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 213 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 214 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5


MachopScript1::
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	faceplayer
# 226 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 227 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text1
# 228 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopScript1_Text_0
# 229 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text2, MSGBOX_AUTOCLOSE
# 230 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MachopScript1_2
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_1
MachopScript1_1:
# 236 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_MACHOP1
# 237 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_MACHOP1
# 238 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text3
# 239 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 240 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_STOP_EXP
# 241 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_MUSHROOMS_UNLOCKED
# 242 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 243 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 244 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 245 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetYoshiMoves
# 246 "data/maps/EggIsland_Exterior/scripts.pory"
	special HealPlayerParty
# 247 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
# 248 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

MachopScript1_2:
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_0
	goto MachopScript1_1


MurkrowBattle::
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, MurkrowBattle_Text_0, MurkrowBattle_Text_1, RemoveCustomBattler
	end


RemoveCustomBattler::
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_OVERRIDE_MON, 0
# 304 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_OVERRIDE_LEVEL, 0
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_ALLEN
# 306 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_TIMMY
# 307 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ClearNoRunningFlag
# 308 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 309 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_ObjectDisappears
# 311 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 312 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 313 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 314 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 315 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


GeodudeBattle::
# 319 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, GeodudeBattle_Text_0, MurkrowBattle_Text_1, RemoveCustomBattler
	end


# 323 "data/maps/EggIsland_Exterior/scripts.pory"
Movement_ObjectDisappears:
# 324 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 325 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 326 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 327 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 328 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 329 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 331 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 332 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 334 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 335 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 336 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 337 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 339 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 340 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 342 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 343 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 344 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

SkarmoryTrigger1::
# 348 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 1
# 349 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTrigger2::
# 352 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_5, 2
# 353 "data/maps/EggIsland_Exterior/scripts.pory"
	goto SkarmoryTriggerMain
	return


SkarmoryTriggerMain::
# 356 "data/maps/EggIsland_Exterior/scripts.pory"
	counteggs
# 357 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt SkarmoryTriggerMain_2
# 361 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 362 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 15
# 364 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 365 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 366 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 367 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_SKARMORY
# 368 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SkarmoryTriggerMain_5
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_1
SkarmoryTriggerMain_4:
# 374 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 375 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 376 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_SKARMORY
# 377 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 378 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 379 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 380 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_SKARMORY, VAR_0x8000
# 381 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 382 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 383 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker SkarmoryTriggerMain_Text_0
# 384 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SkarmoryTriggerMain_Text_1, MSGBOX_AUTOCLOSE
# 385 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 386 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SKARMORY_DEFEATED
# 387 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, Movement_ObjectDisappears
# 388 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 389 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SKARMORY
# 390 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 391 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_TEMP_A
	return

SkarmoryTriggerMain_2:
# 358 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SkarmoryTriggerMain_5:
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_SKARMORY, SkarmoryTriggerMain_Movement_0
	goto SkarmoryTriggerMain_4


SpawnSkarmory::
# 395 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_TEMP_A
# 396 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SuperMushroomUpgrade::
# 400 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 401 "data/maps/EggIsland_Exterior/scripts.pory"
	message SuperMushroomUpgrade_Text_0
# 402 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 403 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPERMUSHROOMUPGRADE
# 404 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 405 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 406 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SuperMushroomUpgrade_Text_1
# 407 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


BaitItem::
# 411 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 412 "data/maps/EggIsland_Exterior/scripts.pory"
	message BaitItem_Text_0
# 413 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 414 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 415 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 416 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 417 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox BaitItem_Text_1
# 418 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


TongueUpgrade::
# 422 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 423 "data/maps/EggIsland_Exterior/scripts.pory"
	message TongueUpgrade_Text_0
# 424 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 425 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 426 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 427 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 428 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TongueUpgrade_Text_1
# 429 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


SleepingSnorlax::
# 433 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text_0
# 434 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, SleepingSnorlax_2
	msgbox SleepingSnorlax_Text, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SleepingSnorlax_5
# 442 "data/maps/EggIsland_Exterior/scripts.pory"
	closemessage
# 443 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 444 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 445 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_HEAL
# 446 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 447 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox SleepingSnorlax_Text2, MSGBOX_AUTOCLOSE
# 448 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SLEEPING_SNORLAX
# 449 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SNORLAXNINJA1
# 450 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SNORLAXNINJA2
# 451 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 452 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_AWAKE_SNORLAX
# 453 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 455 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SleepingSnorlax_2:
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

SleepingSnorlax_5:
# 439 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SleepingSnorlaxIntro::
# 473 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SLEEPING_SNORLAX_INTRO
# 474 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return


ChestoBerryTree::
# 478 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_SLEEPING_SNORLAX_INTRO, ChestoBerryTree_1
# 483 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SLEEPING_SNORLAX, ChestoBerryTree_2
# 488 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_3
# 493 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_PICKED_UP_CHESTO_BERRY, ChestoBerryTree_4
	return

ChestoBerryTree_1:
# 479 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_0
# 480 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_2:
# 484 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_1
# 485 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_3:
# 489 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_2
# 490 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

ChestoBerryTree_4:
# 494 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox ChestoBerryTree_Text_3, MSGBOX_YESNO
# 495 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ChestoBerryTree_10
# 499 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 500 "data/maps/EggIsland_Exterior/scripts.pory"
	message ChestoBerryTree_Text_4
# 501 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 502 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 503 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 504 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PICKED_UP_CHESTO_BERRY
# 505 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

ChestoBerryTree_10:
# 496 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_AwakeSnorlax::
# 510 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_AwakeSnorlax_Text, MSGBOX_SIGN
	return


StrGloves_ItemSparkle::
# 519 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 541 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 542 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_2
# 543 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 544 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 545 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 546 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox GripGlovesDescription
# 547 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_USE_STRENGTH
# 548 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipGripGloves
StrGloves_ItemSparkle_4:
# 550 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

StrGloves_ItemSparkle_2:
# 520 "data/maps/EggIsland_Exterior/scripts.pory"
	goto PrimeapeEncounter
	goto StrGloves_ItemSparkle_1

StrGloves_ItemSparkle_5:
	msgbox StrGlovesOnGround, MSGBOX_YESNO
# 0 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq StrGloves_ItemSparkle_9
# 527 "data/maps/EggIsland_Exterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 528 "data/maps/EggIsland_Exterior/scripts.pory"
	message StrGloves_ItemSparkle_Text_0
# 529 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 530 "data/maps/EggIsland_Exterior/scripts.pory"
	waitfanfare
# 531 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 532 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox StrGloves_ItemSparkle_Text_1
# 533 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 534 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative EquipStrGloves
	goto StrGloves_ItemSparkle_4

StrGloves_ItemSparkle_9:
# 524 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

StrGloves_ItemSparkle_12:
# 538 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


PrimeapeEncounter::
# 573 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 574 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker PrimeapeEncounter_Text_0
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox PrimeapeEncounter_Text_1, MSGBOX_AUTOCLOSE
# 576 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 577 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 578 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 579 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 580 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 581 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PRIMEAPE
# 582 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_FACING
# 583 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_NORTH, PrimeapeEncounter_3
# 591 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_EAST, PrimeapeEncounter_4
# 599 "data/maps/EggIsland_Exterior/scripts.pory"
	case DIR_WEST, PrimeapeEncounter_5
PrimeapeEncounter_1:
# 607 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 608 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 609 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 610 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 611 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateStrongMon
# 612 "data/maps/EggIsland_Exterior/scripts.pory"
	subvar VAR_0x8000, 3
# 613 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_PRIMEAPE, VAR_0x8000, abilityNum = 0
# 614 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 615 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 616 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker PrimeapeEncounter_Text_2
# 617 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox PrimeapeEncounter_Text_3, MSGBOX_AUTOCLOSE
# 618 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 619 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_PRIMEAPE_DEFEATED
# 620 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, Movement_ObjectDisappears
# 621 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 622 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_PRIMEAPE
# 623 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
	return

PrimeapeEncounter_3:
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_0
# 585 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 80
# 586 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 587 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 588 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 589 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 590 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1

PrimeapeEncounter_4:
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_1
# 593 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 80
# 594 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 595 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 596 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 597 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 598 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1

PrimeapeEncounter_5:
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PRIMEAPE, PrimeapeEncounter_Movement_2
# 601 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 80
# 602 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 603 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 604 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 605 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
	goto PrimeapeEncounter_1


HonchkrowScript::
# 627 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 628 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_KO_ANIM
# 629 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker HonchkrowScript_Text_0
# 630 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateDefaultLevelMon
# 631 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 632 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_HONCHKROW, VAR_0x8000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
# 633 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox HonchkrowScript_Text_1, MSGBOX_AUTOCLOSE
# 634 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1
# 635 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 636 "data/maps/EggIsland_Exterior/scripts.pory"
	setwilddoubleflag
# 637 "data/maps/EggIsland_Exterior/scripts.pory"
	dowildbattle
# 638 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DONT_DESPAWN_PORTAL
# 639 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PORTAL1
# 640 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 641 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_HONCHKROW, Movement_ObjectDisappears
# 642 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 643 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_HONCHKROW
# 644 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
	return


AnimatePortal::
# 648 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_HIDE_HONCHKROW, AnimatePortal_2
# 652 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DONT_DESPAWN_PORTAL
# 653 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PORTAL1
# 654 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, AnimatePortal_Movement_0
# 655 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 1
# 656 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

AnimatePortal_2:
# 649 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


FinaleTrigger::
# 661 "data/maps/EggIsland_Exterior/scripts.pory"
	fadenewbgm MUS_KAMEK
# 662 "data/maps/EggIsland_Exterior/scripts.pory"
	savebgm MUS_KAMEK
# 663 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 664 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 665 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 666 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, Common_Movement_ExclamationMark
# 667 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 668 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 669 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 670 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 671 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 673 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative CreateDefaultLevelMon
# 674 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_0x8000, 3
# 675 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ZeroEnemyPartyMons
# 676 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_KO_ANIM
# 677 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_YOSHI_LEVELED, FinaleTrigger_2
FinaleTrigger_1:
# 680 "data/maps/EggIsland_Exterior/scripts.pory"
	createmon 1, 0, SPECIES_KAMEK, VAR_0x8000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
# 681 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 682 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekBattleIntro, MSGBOX_AUTOCLOSE
# 683 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 684 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 685 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 686 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_UNLOCK_PORTAL
# 687 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PORTAL1, IntroSequence_Movement_2
# 688 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 2
# 689 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 690 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 691 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 692 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_PORTAL1
# 693 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 694 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 695 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 696 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, Common_Movement_ExclamationMark
# 697 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 698 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 699 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 64
# 700 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 701 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 702 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 703 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekBattleIntro2, MSGBOX_AUTOCLOSE
# 704 "data/maps/EggIsland_Exterior/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2, 2, 2
# 705 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 706 "data/maps/EggIsland_Exterior/scripts.pory"
	setwilddoubleflag
# 707 "data/maps/EggIsland_Exterior/scripts.pory"
	special StartSpecialBattle
# 709 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 710 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekPostBattle, MSGBOX_AUTOCLOSE
# 711 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 712 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 713 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 714 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 715 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 716 "data/maps/EggIsland_Exterior/scripts.pory"
	bufferpartymonnickname STR_VAR_1, 1
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_1
# 718 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekPostBattle2, MSGBOX_AUTOCLOSE
# 719 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 720 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 721 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 722 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 723 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject LOCALID_PORTAL1
# 724 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 725 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 726 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 727 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_SOUTH
# 728 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 729 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker FinaleTrigger_Text_0
# 730 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox KamekPostBattle3, MSGBOX_AUTOCLOSE
# 731 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 732 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_KAMEK, DIR_NORTH
# 733 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 734 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_KAMEK, FinaleTrigger_Movement_0
# 735 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, FinaleTrigger_Movement_1
# 736 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER1, FinaleTrigger_Movement_2
# 737 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER2, FinaleTrigger_Movement_2
# 738 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER3, FinaleTrigger_Movement_2
# 739 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER4, FinaleTrigger_Movement_2
# 740 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER5, FinaleTrigger_Movement_2
# 741 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovementall
# 742 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 743 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 60
# 744 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 10
# 745 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_FADEOUT_SPEED, 6
# 746 "data/maps/EggIsland_Exterior/scripts.pory"
	warpsilent MAP_YOSHI_INTRO, 0
	return

FinaleTrigger_2:
# 678 "data/maps/EggIsland_Exterior/scripts.pory"
	subvar VAR_0x8000, 1
	goto FinaleTrigger_1


SetSave3EscapeWarp::
# 793 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_3_REACHED, SetSave3EscapeWarp_2
# 793 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_4_REACHED, SetSave3EscapeWarp_2
# 793 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_5_REACHED, SetSave3EscapeWarp_2
# 797 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_3_REACHED
# 798 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_EXTERIOR, 24, 57
# 799 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SetSave3EscapeWarp_2:
# 794 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SetSave4EscapeWarp::
# 803 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_4_REACHED, SetSave4EscapeWarp_2
# 803 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_5_REACHED, SetSave4EscapeWarp_2
# 807 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_4_REACHED
# 808 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_EXTERIOR, 54, 32
# 809 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SetSave4EscapeWarp_2:
# 804 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


SetSave5EscapeWarp::
# 813 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SAVE_5_REACHED, SetSave5EscapeWarp_2
# 817 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SAVE_5_REACHED
# 818 "data/maps/EggIsland_Exterior/scripts.pory"
	setescapewarp MAP_EGG_ISLAND_INTERIOR, 60, 4
# 819 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

SetSave5EscapeWarp_2:
# 814 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


# 86 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 89 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 100 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 107 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_0:
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 198 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_1:
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 210 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_2:
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 231 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_0:
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 234 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_1:
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 369 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_0:
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 369 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 372 "data/maps/EggIsland_Exterior/scripts.pory"
SkarmoryTriggerMain_Movement_1:
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 372 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 584 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_0:
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_left
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 584 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
	step_end

# 592 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_1:
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 592 "data/maps/EggIsland_Exterior/scripts.pory"
	face_left
	step_end

# 600 "data/maps/EggIsland_Exterior/scripts.pory"
PrimeapeEncounter_Movement_2:
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_down
# 600 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
	step_end

# 654 "data/maps/EggIsland_Exterior/scripts.pory"
AnimatePortal_Movement_0:
# 654 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 654 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
	step_end

# 734 "data/maps/EggIsland_Exterior/scripts.pory"
FinaleTrigger_Movement_0:
# 734 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 734 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 734 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 734 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 734 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

# 735 "data/maps/EggIsland_Exterior/scripts.pory"
FinaleTrigger_Movement_1:
# 735 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 735 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 735 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 735 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_up
# 735 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

# 736 "data/maps/EggIsland_Exterior/scripts.pory"
FinaleTrigger_Movement_2:
# 736 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 736 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 736 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 736 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 736 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

MachopIntroMain_Text_0:
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Lean Man$"

MachopIntroMain_Text_1:
# 177 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "You there! You've come\nat the perfect time!\pCome help me deal with\nthis scoundrel!$"

MachopIntroMain_Text_2:
# 190 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Dark Bird$"

MachopIntroMain_Text_3:
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Reinforcements!?\nI'm out of here!$"

MachopScript1_Text_0:
# 228 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Macho$"

MurkrowBattle_Text_0:
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "This is our turf! Leave!$"

MurkrowBattle_Text_1:
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "N/A$"

GeodudeBattle_Text_0:
# 319 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The underground belongs to us!\nOff with you!$"

SkarmoryTriggerMain_Text_0:
# 383 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Skarmory$"

SkarmoryTriggerMain_Text_1:
# 384 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "What delicious lookings eggs\nyou have there.\lHand them over!$"

SuperMushroomUpgrade_Text_0:
# 401 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nSuper Mushroom Upgrade!$"

SuperMushroomUpgrade_Text_1:
# 406 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Super Mushrooms now recover\nup to 50% more HP.$"

BaitItem_Text_0:
# 412 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nJumping Diglett Upgrade!$"

BaitItem_Text_1:
# 417 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call Diglett can now hit\nFlying-type opponents.$"

TongueUpgrade_Text_0:
# 423 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi obtained the\nTongue Upgrade!$"

TongueUpgrade_Text_1:
# 428 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Tongue Attack's Power\nis greatly increased.$"

SleepingSnorlax_Text_0:
# 433 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It looks to be\na sleeping Snorlax.$"

ChestoBerryTree_Text_0:
# 479 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.$"

ChestoBerryTree_Text_1:
# 484 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou don't really like\nhow dry they are.$"

ChestoBerryTree_Text_2:
# 489 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\pYou are already carrying\na handful of them.$"

ChestoBerryTree_Text_3:
# 494 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a tree full of\nChesto berries.\lPick a few berries?$"

ChestoBerryTree_Text_4:
# 500 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Picked up a handful of\nChesto berries!$"

StrGloves_ItemSparkle_Text_0:
# 528 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Grip Gloves\nto Strength Gloves!$"

StrGloves_ItemSparkle_Text_1:
# 532 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Strength gloves increase\nthe power of your moves,\land allows you to push around\lheavy boulders.$"

StrGloves_ItemSparkle_Text_2:
# 542 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Switched the Strength Gloves\nto Grip Gloves!$"

PrimeapeEncounter_Text_0:
# 574 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "???$"

PrimeapeEncounter_Text_1:
# 575 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "MY SPARKLY!$"

PrimeapeEncounter_Text_2:
# 616 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Primeape$"

PrimeapeEncounter_Text_3:
# 617 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "I SAW IT FIRST!\nGET BACK!$"

HonchkrowScript_Text_0:
# 629 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Honchkrow$"

HonchkrowScript_Text_1:
# 633 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The new boss man says to\nnot let anybody through!$"

FinaleTrigger_Text_0:
# 681 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Kamek$"

FinaleTrigger_Text_1:
# 717 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "{STR_VAR_1}$"

MachopScript1_Text1::
# 251 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Thank you stranger.\n"
	.string "I'm not sure I could've beaten\l"
	.string "that Murkrow without your\l"
	.string "intervention.\p"
	.string "I must say, they've been\n"
	.string "getting rowdy as of late…$"

MachopScript1_Text2::
# 259 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 284 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 458 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The sleeping Snorlax's nose\n"
	.string "starts to twitch as it smells\l"
	.string "the Chesto berries on you.\p"
	.string "Feed the Chesto berries\n"
	.string "to the Snorlax?$"

SleepingSnorlax_Text2::
# 466 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax wakes up and\n"
	.string "rushes out in search of\l"
	.string "more berries.$"

Script_AwakeSnorlax_Text::
# 512 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Snorlax is too busy\n"
	.string "chowing down Chesto berries\l"
	.string "to notice you.$"

GripGlovesDescription::
# 553 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The Grip Gloves increase\n"
	.string "Yoshi's speed, and allows\l"
	.string "Yoshi to climb muddy slopes.$"

StrGlovesOnGround::
# 559 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "There seems to be a pair of\n"
	.string "gloves on the ground.\l"
	.string "Switch out your Grip Gloves?$"

GripGlovesOnGround::
# 565 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "There seems to be a pair of\n"
	.string "gloves on the ground.\p"
	.string "Switch out your\n"
	.string "Strength Gloves?$"

KamekPostBattle::
# 749 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Ow! You big meanie!\p"
	.string "This is not fair, what with\n"
	.string "you all grouping up against me!\p"
	.string "If I take you back home, will\n"
	.string "you please leave me alone?\p"
	.string "Here, if you let me concentrate\n"
	.string "for a while, I'll open up\l"
	.string "the portal for you again!$"

KamekPostBattle2::
# 759 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Take care, Yoshi!\n"
	.string "When you get back home,\l"
	.string "don't forget to give that\l"
	.string "Kamek guy another clobbering,\l"
	.string "make him really remember to\l"
	.string "not mess with you again!$"

KamekPostBattle3::
# 767 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "The portal is stable, but\n"
	.string "it won't stay open for long.\p"
	.string "If you want to get back home,\n"
	.string "I suggest you start moving!$"

KamekBattleIntro::
# 774 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi?!\n"
	.string "How did you get here?!\p"
	.string "I gave those birdbrains clear\n"
	.string "instructions to not let anyone\l"
	.string "through while I channel my spell!$"

KamekBattleIntro2::
# 782 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "…Oh, great! Now I lost my\n"
	.string "concentration and need to\l"
	.string "start from the beginning!\p"
	.string "THAT'S IT!\p"
	.string "You've been meddling in my\n"
	.string "business for far too long!\l"
	.string "Get ready to be clobbered!$"
