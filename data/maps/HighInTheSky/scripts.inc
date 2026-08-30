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
# 19 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SKY_BATTLE
	return

HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_TEMP_2, DIR_WEST
# 12 "data/maps/HighInTheSky/scripts.pory"
	subvar VAR_TEMP_0, 9
	goto HighInTheSky_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

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
# 52 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SKY_BATTLE
# 53 "data/maps/HighInTheSky/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
	return

TrySetUpSkyBattle_2:
# 39 "data/maps/HighInTheSky/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
	return

TrySetUpSkyBattle_4:
# 44 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 1
# 45 "data/maps/HighInTheSky/scripts.pory"
	callnative TrySpawnSkyBattle
# 46 "data/maps/HighInTheSky/scripts.pory"
	delay 1
# 47 "data/maps/HighInTheSky/scripts.pory"
	createmon 1, 0, VAR_0x8000, VAR_0x8001
# 48 "data/maps/HighInTheSky/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_0, VAR_0x8000
# 49 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_MON
	return


SetupDrifblimObjects::
# 58 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_DONT_FADE
# 59 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_DONT_DESPAWN_OBJECTS
# 60 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 61 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy LOCALID_PLAYER, VAR_TEMP_0, VAR_TEMP_1
	return


MoveDrifballoonLeftToRight::
# 66 "data/maps/HighInTheSky/scripts.pory"
	call TrySetUpSkyBattle
# 67 "data/maps/HighInTheSky/scripts.pory"
	call SetupDrifblimObjects
# 69 "data/maps/HighInTheSky/scripts.pory"
	addobject 2
# 70 "data/maps/HighInTheSky/scripts.pory"
	addobject 4
# 72 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_SKY_BATTLE, MoveDrifballoonLeftToRight_1
# 110 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsRight
# 111 "data/maps/HighInTheSky/scripts.pory"
	applymovement 2, MoveDrifblimEventsRight
# 112 "data/maps/HighInTheSky/scripts.pory"
	applymovement 4, MoveDrifblimEventsRight
# 113 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonLeftToRight_Movement_2
# 115 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 116 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 118 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_TEMP_3, MoveDrifballoonLeftToRight_5
# 136 "data/maps/HighInTheSky/scripts.pory"
	delay 480
MoveDrifballoonLeftToRight_4:
# 139 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 140 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 141 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 142 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonLeftToRight_1:
# 73 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsRightShort
# 74 "data/maps/HighInTheSky/scripts.pory"
	applymovement 2, MoveDrifblimEventsRightShort
# 75 "data/maps/HighInTheSky/scripts.pory"
	applymovement 4, MoveDrifblimEventsRightShort
# 76 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonLeftToRight_Movement_0
# 78 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 79 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 80 "data/maps/HighInTheSky/scripts.pory"
	savebgm MUS_CYCLING
# 82 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 83 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/HighInTheSky/scripts.pory"
	playmoncry VAR_0x8000, CRY_MODE_NORMAL
# 85 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 86 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifballoonLeftToRight_Movement_1
# 87 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 88 "data/maps/HighInTheSky/scripts.pory"
	waitmoncry
# 89 "data/maps/HighInTheSky/scripts.pory"
	delay 16
# 90 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 91 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SKY_BATTLE
# 92 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 1
# 93 "data/maps/HighInTheSky/scripts.pory"
	doscriptedbattle
# 95 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 96 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 97 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 98 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsRightShort
# 99 "data/maps/HighInTheSky/scripts.pory"
	applymovement 2, MoveDrifblimEventsRightShort
# 100 "data/maps/HighInTheSky/scripts.pory"
	applymovement 4, MoveDrifblimEventsRightShort
# 101 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonLeftToRight_Movement_0
# 102 "data/maps/HighInTheSky/scripts.pory"
	delay 240
# 104 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 105 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 106 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 107 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonLeftToRight_5:
# 119 "data/maps/HighInTheSky/scripts.pory"
	delay 200
# 120 "data/maps/HighInTheSky/scripts.pory"
	addobject 7
# 121 "data/maps/HighInTheSky/scripts.pory"
	random 7
# 122 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
# 123 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoveDrifballoonLeftToRight_9
# 123 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoveDrifballoonLeftToRight_9
# 126 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MoveDrifballoonLeftToRight_10
MoveDrifballoonLeftToRight_8:
# 129 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy 7, 3, VAR_RESULT
# 130 "data/maps/HighInTheSky/scripts.pory"
	applymovement 7, MoveDrifballoonLeftToRight_Movement_3
# 131 "data/maps/HighInTheSky/scripts.pory"
	delay 140
# 132 "data/maps/HighInTheSky/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 133 "data/maps/HighInTheSky/scripts.pory"
	delay 140
	goto MoveDrifballoonLeftToRight_4

MoveDrifballoonLeftToRight_9:
# 124 "data/maps/HighInTheSky/scripts.pory"
	subvar VAR_RESULT, 2
	goto MoveDrifballoonLeftToRight_8

MoveDrifballoonLeftToRight_10:
# 127 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
	goto MoveDrifballoonLeftToRight_8


MoveDrifballoonRightToLeft::
# 147 "data/maps/HighInTheSky/scripts.pory"
	call TrySetUpSkyBattle
# 148 "data/maps/HighInTheSky/scripts.pory"
	call SetupDrifblimObjects
# 150 "data/maps/HighInTheSky/scripts.pory"
	addobject 1
# 151 "data/maps/HighInTheSky/scripts.pory"
	addobject 3
# 153 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_SKY_BATTLE, MoveDrifballoonRightToLeft_1
# 191 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeft
# 192 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeft
# 193 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeft
# 194 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_2
# 196 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 197 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 199 "data/maps/HighInTheSky/scripts.pory"
	goto_if_set FLAG_TEMP_3, MoveDrifballoonRightToLeft_5
# 217 "data/maps/HighInTheSky/scripts.pory"
	delay 480
MoveDrifballoonRightToLeft_4:
# 220 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 221 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 222 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 223 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonRightToLeft_1:
# 154 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeftShort
# 155 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeftShort
# 156 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeftShort
# 157 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_0
# 159 "data/maps/HighInTheSky/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 160 "data/maps/HighInTheSky/scripts.pory"
	fadenewbgm MUS_CYCLING
# 161 "data/maps/HighInTheSky/scripts.pory"
	savebgm MUS_CYCLING
# 163 "data/maps/HighInTheSky/scripts.pory"
	waitmovementall
# 164 "data/maps/HighInTheSky/scripts.pory"
	special RemoveCameraObject
# 165 "data/maps/HighInTheSky/scripts.pory"
	playmoncry VAR_0x8000, CRY_MODE_NORMAL
# 166 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 167 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifballoonRightToLeft_Movement_1
# 168 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 169 "data/maps/HighInTheSky/scripts.pory"
	waitmoncry
# 170 "data/maps/HighInTheSky/scripts.pory"
	delay 16
# 171 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 172 "data/maps/HighInTheSky/scripts.pory"
	setflag FLAG_SKY_BATTLE
# 173 "data/maps/HighInTheSky/scripts.pory"
	setvar VAR_SKY_BATTLE, 1
# 174 "data/maps/HighInTheSky/scripts.pory"
	doscriptedbattle
# 176 "data/maps/HighInTheSky/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 177 "data/maps/HighInTheSky/scripts.pory"
	special SpawnCameraObject
# 178 "data/maps/HighInTheSky/scripts.pory"
	delay 8
# 179 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_PLAYER, MoveDrifblimEventsLeftShort
# 180 "data/maps/HighInTheSky/scripts.pory"
	applymovement 1, MoveDrifblimEventsLeftShort
# 181 "data/maps/HighInTheSky/scripts.pory"
	applymovement 3, MoveDrifblimEventsLeftShort
# 182 "data/maps/HighInTheSky/scripts.pory"
	applymovement LOCALID_CAMERA, MoveDrifballoonRightToLeft_Movement_0
# 183 "data/maps/HighInTheSky/scripts.pory"
	delay 240
# 185 "data/maps/HighInTheSky/scripts.pory"
	callnative ForceFadeOutBGM
# 186 "data/maps/HighInTheSky/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 187 "data/maps/HighInTheSky/scripts.pory"
	waitmovement 0
# 188 "data/maps/HighInTheSky/scripts.pory"
	warpsilentnofadeout MAP_DYNAMIC, 0, 0
	return

MoveDrifballoonRightToLeft_5:
# 200 "data/maps/HighInTheSky/scripts.pory"
	delay 200
# 201 "data/maps/HighInTheSky/scripts.pory"
	addobject 8
# 202 "data/maps/HighInTheSky/scripts.pory"
	random 8
# 203 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
# 204 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoveDrifballoonRightToLeft_9
# 204 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoveDrifballoonRightToLeft_9
# 207 "data/maps/HighInTheSky/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MoveDrifballoonRightToLeft_10
MoveDrifballoonRightToLeft_8:
# 210 "data/maps/HighInTheSky/scripts.pory"
	setobjectxy 8, 99, VAR_RESULT
# 211 "data/maps/HighInTheSky/scripts.pory"
	applymovement 8, MoveDrifballoonRightToLeft_Movement_3
# 212 "data/maps/HighInTheSky/scripts.pory"
	delay 140
# 213 "data/maps/HighInTheSky/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 214 "data/maps/HighInTheSky/scripts.pory"
	delay 140
	goto MoveDrifballoonRightToLeft_4

MoveDrifballoonRightToLeft_9:
# 205 "data/maps/HighInTheSky/scripts.pory"
	subvar VAR_RESULT, 2
	goto MoveDrifballoonRightToLeft_8

MoveDrifballoonRightToLeft_10:
# 208 "data/maps/HighInTheSky/scripts.pory"
	addvar VAR_RESULT, 2
	goto MoveDrifballoonRightToLeft_8


# 227 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsRight:
# 228 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 229 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 230 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 231 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 232 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 235 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsRightShort:
# 236 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 237 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 238 "data/maps/HighInTheSky/scripts.pory"
	walk_right
# 239 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 240 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 243 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsLeft:
# 244 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 245 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 246 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 247 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 248 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 251 "data/maps/HighInTheSky/scripts.pory"
MoveDrifblimEventsLeftShort:
# 252 "data/maps/HighInTheSky/scripts.pory"
	lock_facing_direction
# 253 "data/maps/HighInTheSky/scripts.pory"
	lock_anim
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 254 "data/maps/HighInTheSky/scripts.pory"
	walk_left
# 255 "data/maps/HighInTheSky/scripts.pory"
	unlock_anim
# 256 "data/maps/HighInTheSky/scripts.pory"
	unlock_facing_direction
	step_end

# 76 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_0:
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 76 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
	step_end

# 86 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_1:
# 86 "data/maps/HighInTheSky/scripts.pory"
	walk_in_place_fast_right
	step_end

# 113 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_2:
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
# 113 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_right
	step_end

# 130 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonLeftToRight_Movement_3:
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
# 130 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_right
	step_end

# 157 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_0:
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 157 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
	step_end

# 167 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_1:
# 167 "data/maps/HighInTheSky/scripts.pory"
	walk_in_place_fast_left
	step_end

# 194 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_2:
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
# 194 "data/maps/HighInTheSky/scripts.pory"
	walk_slow_left
	step_end

# 211 "data/maps/HighInTheSky/scripts.pory"
MoveDrifballoonRightToLeft_Movement_3:
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
# 211 "data/maps/HighInTheSky/scripts.pory"
	walk_fast_left
	step_end
