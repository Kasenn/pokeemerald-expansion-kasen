EggIsland_Exterior_MapScripts::
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 27 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetupMushroom
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaFinal
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 54
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 20 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 0, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 21 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 8, MAP_EGG_ISLAND_EXTERIOR
# 22 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 23 "data/maps/EggIsland_Exterior/scripts.pory"
	hideplayer
# 24 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 1
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 1, IntroSequence
	.2byte 0


SetUpAreaOne::
# 33 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 34 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 37 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 4
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


IntroSequence::
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 15, 0x273, FALSE
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 16, 0x273, FALSE
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 19, 0x273, FALSE
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 20, 0x273, FALSE
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 21, 0x273, FALSE
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 22, 0x273, FALSE
# 53 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject 9
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 9, IntroSequence_Movement_1
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 64 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 65 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 71 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 90
# 79 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, 17, 74
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera 17, 74
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 84 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 85 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IntroSequence_Movement_4
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 94 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x317, FALSE
# 95 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x317, FALSE
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x317, FALSE
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x317, FALSE
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_GROUND_EFFECTS
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 101 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_1
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x311, FALSE
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x311, FALSE
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x311, FALSE
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x311, FALSE
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 120 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 121 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
# 124 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 125 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_YOSHI1, TRUE
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return


MachopIntro1::
# 133 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro2::
# 136 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 2
# 137 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro3::
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 3
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro4::
# 142 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 4
# 143 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntroMain::
# 146 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 147 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 148 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_1, MSGBOX_AUTOCLOSE
# 149 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 150 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MachopIntroMain_2
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_EAST
MachopIntroMain_1:
# 158 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, Common_Movement_ExclamationMark
# 160 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_2
# 162 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_3, MSGBOX_AUTOCLOSE
# 163 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_TEMP_2
# 164 "data/maps/EggIsland_Exterior/scripts.pory"
	case 1, MachopIntroMain_7
# 168 "data/maps/EggIsland_Exterior/scripts.pory"
	case 2, MachopIntroMain_8
# 174 "data/maps/EggIsland_Exterior/scripts.pory"
	case 3, MachopIntroMain_9
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	case 4, MachopIntroMain_10
MachopIntroMain_5:
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_INTRO_MURKROW
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	fadedefaultbgm
# 189 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_INTRO_MURKROW
# 190 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MACHOP1, MOVEMENT_TYPE_LOOK_AROUND
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 3
# 192 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_MUSHROOMS_UNLOCKED
# 193 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 196 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return

MachopIntroMain_2:
# 152 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_WEST
	goto MachopIntroMain_1

MachopIntroMain_7:
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_0
# 166 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 167 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_8:
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 170 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 171 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 172 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 173 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_9:
# 175 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 177 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 178 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_10:
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_2
# 182 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 184 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5


MachopScript1::
# 200 "data/maps/EggIsland_Exterior/scripts.pory"
	faceplayer
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text1
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopScript1_Text_0
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text2, MSGBOX_AUTOCLOSE
# 205 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MachopScript1_2
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_1
MachopScript1_1:
# 211 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_MACHOP1
# 212 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_MACHOP1
# 213 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text3
# 214 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 215 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_STOP_EXP
# 216 "data/maps/EggIsland_Exterior/scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY
# 218 "data/maps/EggIsland_Exterior/scripts.pory"
	special HealPlayerParty
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

MachopScript1_2:
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_0
	goto MachopScript1_1


MurkrowBattle::
# 270 "data/maps/EggIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, MurkrowBattle_Text_0, MurkrowBattle_Text_1, RemoveMurkrow
	end


RemoveMurkrow::
# 275 "data/maps/EggIsland_Exterior/scripts.pory"
	cleartrainerflag TRAINER_ALLEN
# 276 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 277 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_MurkrowDisappears
# 278 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 279 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 280 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 281 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


# 284 "data/maps/EggIsland_Exterior/scripts.pory"
Movement_MurkrowDisappears:
# 285 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 286 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 287 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 288 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 289 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 290 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 291 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 292 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_4
# 293 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 295 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 296 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 297 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 299 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 300 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_8
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
# 302 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 304 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	set_invisible
	step_end

# 56 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 59 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 70 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 77 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 86 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_4:
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
	step_end

# 165 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_0:
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 169 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_1:
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 181 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_2:
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 206 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_0:
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 209 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_1:
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

MachopIntroMain_Text_0:
# 147 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Lean Man$"

MachopIntroMain_Text_1:
# 148 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "You there!\nYou've come at the perfect time!\pCome help me deal with\nthis scoundrel!$"

MachopIntroMain_Text_2:
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Dark Bird$"

MachopIntroMain_Text_3:
# 162 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Reinforcements!?\nI'm out of here!$"

MachopScript1_Text_0:
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Macho$"

MurkrowBattle_Text_0:
# 270 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "This is our turf! Leave!$"

MurkrowBattle_Text_1:
# 270 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "N/A$"

MachopScript1_Text1::
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Thank you stranger.\n"
	.string "I'm not sure I could've beaten\l"
	.string "that Murkrow without your\l"
	.string "intervention.\p"
	.string "I must say, they've been\n"
	.string "getting rowdy as of late…$"

MachopScript1_Text2::
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 256 "data/maps/EggIsland_Exterior/scripts.pory"
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
