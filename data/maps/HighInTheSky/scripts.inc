HighInTheSky_MapScripts::
# 7 "data/maps/HighInTheSky/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/HighInTheSky/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME
# 25 "data/maps/HighInTheSky/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HighInTheSky_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_DONT_FADE
# 9 "data/maps/HighInTheSky/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 10 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_TEMP_2, DIR_EAST
# 16 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_TEMP_0, 9
HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	random 64
# 0 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 21 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_TEMP_2, DIR_WEST
# 12 "data/maps/HighInTheSky/scripts.pory"
	subvar VAR_TEMP_0, 9
	goto HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 19 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SKY_BATTLE
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 22 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_TEMP_3
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME:
# 30 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 31 "data/maps/HighInTheSky/scripts.pory"
	removeobject 5
# 32 "data/maps/HighInTheSky/scripts.pory"
	removeobject 6
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/HighInTheSky/scripts.pory"
	map_script_2 VAR_TEMP_2, DIR_WEST, MoveDrifballoonLeftToRight
# 27 "data/maps/HighInTheSky/scripts.pory"
	map_script_2 VAR_TEMP_2, DIR_EAST, MoveDrifballoonRightToLeft
	.2byte 0


TrySetUpSkyBattle::
# 38 "data/maps/HighInTheSky/scripts.pory"
	goto_if_unset FLAG_SKY_BATTLE, TrySetUpSkyBattle_2
# 42 "data/maps/HighInTheSky/scripts.pory"
	special TrySkyBattle
# 43 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TrySetUpSkyBattle_4
# 51 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SKY_BATTLE
# 52 "data/maps/HighInTheSky/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
	return

TrySetUpSkyBattle_2:
# 39 "data/maps/HighInTheSky/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
	return

TrySetUpSkyBattle_4:
# 44 "data/maps/HighInTheSky/scripts.pory"
	callnative TrySpawnSkyBattle
# 45 "data/maps/HighInTheSky/scripts.pory"
	delay 1
# 46 "data/maps/HighInTheSky/scripts.pory"
	createmon 1, 0, VAR_0x8000, VAR_0x8001
# 47 "data/maps/HighInTheSky/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_0, VAR_0x8000
# 48 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_MON
	return


SetupDrifblimObjects::
# 57 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_FADE
# 58 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_DONT_DESPAWN_OBJECTS
# 59 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 60 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy LOCALID_PLAYER, VAR_TEMP_0, VAR_TEMP_1
	return


MoveDrifballoonLeftToRight::
# 65 "data/maps/HighInTheSky/scripts.pory"
	call TrySetUpSkyBattle
# 66 "data/maps/HighInTheSky/scripts.pory"
	call SetupDrifblimObjects
# 68 "data/maps/HighInTheSky/scripts.pory"
	addobject 2
# 69 "data/maps/HighInTheSky/scripts.pory"
	addobject 4
# 71 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_SKY_BATTLE, MoveDrifballoonLeftToRight_1
# 113 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsRight
# 114 "data/maps/HighInTheSky/scripts.pory"
	applymovement 2, MoveDrifblimEventsRight
# 115 "data/maps/HighInTheSky/scripts.pory"
	applymovement 4, MoveDrifblimEventsRight
# 116 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonLeftToRight_Movement_2
# 118 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 121 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_TEMP_3, MoveDrifballoonLeftToRight_5
# 139 "data/maps/HighInTheSky/scripts.pory"
	delay 480
MoveDrifballoonLeftToRight_4:
# 142 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_DESPAWN_OBJECTS
# 143 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 0
# 144 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SKY_BATTLE
# 145 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_TEMP_3
# 146 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 147 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 148 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 149 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 150 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonLeftToRight_1:
# 72 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsRightShort
# 73 "data/maps/HighInTheSky/scripts.pory"
	applymovement 2, MoveDrifblimEventsRightShort
# 74 "data/maps/HighInTheSky/scripts.pory"
	applymovement 4, MoveDrifblimEventsRightShort
# 75 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonLeftToRight_Movement_0
# 77 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 78 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 79 "data/maps/HighInTheSky/scripts.pory"
	savebgm MUS_CYCLING
# 81 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 82 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 83 "data/maps/HighInTheSky/scripts.pory"
	playmoncry VAR_0x8000, CRY_MODE_NORMAL
# 84 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 85 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifballoonLeftToRight_Movement_1
# 86 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 87 "data/maps/HighInTheSky/scripts.pory"
	waitmoncry
# 88 "data/maps/HighInTheSky/scripts.pory"
	delay 16
# 89 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 90 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SKY_BATTLE
# 91 "data/maps/HighInTheSky/scripts.pory"
	doscriptedbattle
# 93 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 94 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 95 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 96 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsRightShort
# 97 "data/maps/HighInTheSky/scripts.pory"
	applymovement 2, MoveDrifblimEventsRightShort
# 98 "data/maps/HighInTheSky/scripts.pory"
	applymovement 4, MoveDrifblimEventsRightShort
# 99 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonLeftToRight_Movement_0
# 100 "data/maps/HighInTheSky/scripts.pory"
	delay 240
# 102 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_DESPAWN_OBJECTS
# 103 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 0
# 104 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SKY_BATTLE
# 105 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_TEMP_3
# 106 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 107 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 108 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 109 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 110 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonLeftToRight_5:
# 122 "data/maps/HighInTheSky/scripts.pory"
	delay 200
# 123 "data/maps/HighInTheSky/scripts.pory"
	addobject 7
# 124 "data/maps/HighInTheSky/scripts.pory"
	random 7
# 125 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
# 126 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoveDrifballoonLeftToRight_9
# 126 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoveDrifballoonLeftToRight_9
# 129 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MoveDrifballoonLeftToRight_10
MoveDrifballoonLeftToRight_8:
# 132 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy 7, 3, VAR_RESULT
# 133 "data/maps/HighInTheSky/scripts.pory"
	applymovement 7, MoveDrifballoonLeftToRight_Movement_3
# 134 "data/maps/HighInTheSky/scripts.pory"
	delay 140
# 135 "data/maps/HighInTheSky/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 136 "data/maps/HighInTheSky/scripts.pory"
	delay 140
	goto MoveDrifballoonLeftToRight_4

MoveDrifballoonLeftToRight_9:
# 127 "data/maps/HighInTheSky/scripts.pory"
	subvar VAR_RESULT, 2
	goto MoveDrifballoonLeftToRight_8

MoveDrifballoonLeftToRight_10:
# 130 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
	goto MoveDrifballoonLeftToRight_8


MoveDrifballoonRightToLeft::
# 155 "data/maps/HighInTheSky/scripts.pory"
	call TrySetUpSkyBattle
# 156 "data/maps/HighInTheSky/scripts.pory"
	call SetupDrifblimObjects
# 158 "data/maps/HighInTheSky/scripts.pory"
	addobject 1
# 159 "data/maps/HighInTheSky/scripts.pory"
	addobject 3
# 161 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_SKY_BATTLE, MoveDrifballoonRightToLeft_1
# 203 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeft
# 204 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeft
# 205 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeft
# 206 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_2
# 208 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 209 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 211 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_TEMP_3, MoveDrifballoonRightToLeft_5
# 229 "data/maps/HighInTheSky/scripts.pory"
	delay 480
MoveDrifballoonRightToLeft_4:
# 232 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_DESPAWN_OBJECTS
# 233 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 0
# 234 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SKY_BATTLE
# 235 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_TEMP_3
# 236 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 237 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 238 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 239 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 240 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonRightToLeft_1:
# 162 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeftShort
# 163 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeftShort
# 164 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeftShort
# 165 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_0
# 167 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 168 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 169 "data/maps/HighInTheSky/scripts.pory"
	savebgm MUS_CYCLING
# 171 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 172 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 173 "data/maps/HighInTheSky/scripts.pory"
	playmoncry VAR_0x8000, CRY_MODE_NORMAL
# 174 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 175 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifballoonRightToLeft_Movement_1
# 176 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 177 "data/maps/HighInTheSky/scripts.pory"
	waitmoncry
# 178 "data/maps/HighInTheSky/scripts.pory"
	delay 16
# 179 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 180 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SKY_BATTLE
# 181 "data/maps/HighInTheSky/scripts.pory"
	doscriptedbattle
# 183 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 184 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 185 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 186 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeftShort
# 187 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeftShort
# 188 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeftShort
# 189 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_0
# 190 "data/maps/HighInTheSky/scripts.pory"
	delay 240
# 192 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_DESPAWN_OBJECTS
# 193 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 0
# 194 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SKY_BATTLE
# 195 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_TEMP_3
# 196 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 197 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 198 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 199 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 200 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonRightToLeft_5:
# 212 "data/maps/HighInTheSky/scripts.pory"
	delay 200
# 213 "data/maps/HighInTheSky/scripts.pory"
	addobject 8
# 214 "data/maps/HighInTheSky/scripts.pory"
	random 8
# 215 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
# 216 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoveDrifballoonRightToLeft_9
# 216 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoveDrifballoonRightToLeft_9
# 219 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MoveDrifballoonRightToLeft_10
MoveDrifballoonRightToLeft_8:
# 222 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy 8, 99, VAR_RESULT
# 223 "data/maps/HighInTheSky/scripts.pory"
	applymovement 8, MoveDrifballoonRightToLeft_Movement_3
# 224 "data/maps/HighInTheSky/scripts.pory"
	delay 140
# 225 "data/maps/HighInTheSky/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 226 "data/maps/HighInTheSky/scripts.pory"
	delay 140
	goto MoveDrifballoonRightToLeft_4

MoveDrifballoonRightToLeft_9:
# 217 "data/maps/HighInTheSky/scripts.pory"
	subvar VAR_RESULT, 2
	goto MoveDrifballoonRightToLeft_8

MoveDrifballoonRightToLeft_10:
# 220 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
	goto MoveDrifballoonRightToLeft_8


# 244 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsRight:
# 245 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 246 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 247 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 248 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 249 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 252 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsRightShort:
# 253 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 254 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 255 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 256 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 257 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 260 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsLeft:
# 261 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 262 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 263 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 264 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 265 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 268 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsLeftShort:
# 269 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 270 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 271 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 272 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 273 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 75 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_0:
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 75 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
	step_end

# 85 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_1:
# 85 "data/maps/HighInTheSky/scripts.pory"
	walk_in_place_fast_right
	step_end

# 116 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_2:
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 116 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
	step_end

# 133 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_3:
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 133 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
	step_end

# 165 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_0:
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 165 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
	step_end

# 175 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_1:
# 175 "data/maps/HighInTheSky/scripts.pory"
	walk_in_place_fast_left
	step_end

# 206 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_2:
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 206 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
	step_end

# 223 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_3:
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 223 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
	step_end
