Nes_MapScripts::
# 10 "data/maps/Nes/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Nes_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Nes/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Nes_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Nes/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Nes_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Nes_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Nes/scripts.pory"
	clearflag FLAG_TEMP_1
	return

Nes_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Nes/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ActivateNesCutscene
	.2byte 0

Nes_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Nes/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Nes_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Nes_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 7 "data/maps/Nes/scripts.pory"
	hideplayer
	return


Nes_InterruptCutscene::
# 26 "data/maps/Nes/scripts.pory"
	callnative DisableCutsceneSkip
# 27 "data/maps/Nes/scripts.pory"
	delay 1
# 28 "data/maps/Nes/scripts.pory"
	callnative StopMovementScript
# 29 "data/maps/Nes/scripts.pory"
	delay 1
# 30 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_PLAYER, Nes_InterruptCutscene_Movement_0
# 31 "data/maps/Nes/scripts.pory"
	waitmovement LOCALID_PLAYER
# 32 "data/maps/Nes/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 33 "data/maps/Nes/scripts.pory"
	delay 1
# 34 "data/maps/Nes/scripts.pory"
	playbgm MUS_MMTITLE2, TRUE
# 35 "data/maps/Nes/scripts.pory"
	teleportcamera VAR_0x8001, VAR_0x8002
# 36 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8001, 7
# 37 "data/maps/Nes/scripts.pory"
	callnative SetScenePal3
# 38 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8002, 5
# 39 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 169, 14, 180, VAR_0x8001, VAR_0x8002
# 40 "data/maps/Nes/scripts.pory"
	special DrawWholeMapView
# 41 "data/maps/Nes/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 42 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8001, 12
# 43 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8002, 7
# 44 "data/maps/Nes/scripts.pory"
	addobject LOCALID_MEGAMAN
# 45 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_MEGAMAN, VAR_0x8001, VAR_0x8002
# 46 "data/maps/Nes/scripts.pory"
	callnative CreateRooftopSprites
# 47 "data/maps/Nes/scripts.pory"
	releaseall
# 48 "data/maps/Nes/scripts.pory"
Nes_Intermission:
# 49 "data/maps/Nes/scripts.pory"
	releaseall
# 50 "data/maps/Nes/scripts.pory"
	delay 10
# 51 "data/maps/Nes/scripts.pory"
	callnative ClearRooftopSprites
# 52 "data/maps/Nes/scripts.pory"
	waitstartpress
# 53 "data/maps/Nes/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 54 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_MEGAMAN, Nes_InterruptCutscene_Movement_1
# 55 "data/maps/Nes/scripts.pory"
	delay 44
# 56 "data/maps/Nes/scripts.pory"
	playse SE_WARP_IN
# 57 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8001, 12
# 58 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8002, 7
# 59 "data/maps/Nes/scripts.pory"
	waitmovement LOCALID_MEGAMAN
# 60 "data/maps/Nes/scripts.pory"
	delay 10
# 61 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 0, 14, 11, VAR_0x8001, VAR_0x8002
# 62 "data/maps/Nes/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 63 "data/maps/Nes/scripts.pory"
	delay 60
# 64 "data/maps/Nes/scripts.pory"
	warpsilent MAP_PLAYER_HOUSE2F, 1
# 65 "data/maps/Nes/scripts.pory"
	waitstate
	return


Nes_InterruptCutscene2::
# 69 "data/maps/Nes/scripts.pory"
	releaseall
# 70 "data/maps/Nes/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 71 "data/maps/Nes/scripts.pory"
	playbgm MUS_MMTITLE2, TRUE
# 72 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8001, 7
# 73 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8002, 5
# 74 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 169, 14, 180, VAR_0x8001, VAR_0x8002
# 75 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8001, 12
# 76 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8002, 7
# 77 "data/maps/Nes/scripts.pory"
	goto Nes_Intermission
	return


ActivateNesCutscene::
# 82 "data/maps/Nes/scripts.pory"
	callnative SetSceneDark
# 83 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
# 84 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 1, 211, 14, 217, 0, 258
# 85 "data/maps/Nes/scripts.pory"
	delay 20
# 86 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 87 "data/maps/Nes/scripts.pory"
	delay 8
# 88 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 89 "data/maps/Nes/scripts.pory"
	delay 8
# 90 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor3
# 91 "data/maps/Nes/scripts.pory"
	delay 320
# 92 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 93 "data/maps/Nes/scripts.pory"
	delay 8
# 94 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 95 "data/maps/Nes/scripts.pory"
	delay 8
# 96 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
# 98 "data/maps/Nes/scripts.pory"
	delay 8
# 99 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 267, 14, 303, 0, 231
# 100 "data/maps/Nes/scripts.pory"
	delay 8
# 101 "data/maps/Nes/scripts.pory"
	callnative SetScenePal1
# 102 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW1, DIR_NORTH
# 103 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW2, DIR_NORTH
# 104 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW3, DIR_NORTH
# 105 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW4, DIR_NORTH
# 106 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_RAILING1, DIR_NORTH
# 107 "data/maps/Nes/scripts.pory"
	delay 8
# 108 "data/maps/Nes/scripts.pory"
	callnative SetScenePal2
# 109 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW1, DIR_WEST
# 110 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW2, DIR_WEST
# 111 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW3, DIR_WEST
# 112 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW4, DIR_WEST
# 113 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_RAILING1, DIR_WEST
# 114 "data/maps/Nes/scripts.pory"
	delay 8
# 115 "data/maps/Nes/scripts.pory"
	callnative SetScenePal3
# 116 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW1, DIR_EAST
# 117 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW2, DIR_EAST
# 118 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW3, DIR_EAST
# 119 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW4, DIR_EAST
# 120 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_RAILING1, DIR_EAST
# 121 "data/maps/Nes/scripts.pory"
	playbgm MUS_MMTITLE1, TRUE
# 123 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
# 124 "data/maps/Nes/scripts.pory"
	delay 8
# 125 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196, 14, 196 + 1, 0, 264
# 126 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 128 "data/maps/Nes/scripts.pory"
	delay 8
# 129 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 3, 14, 196 + 1 + 3, 0, 264
# 130 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 132 "data/maps/Nes/scripts.pory"
	delay 8
# 133 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 6, 14, 196 + 1 + 6, 0, 264
# 134 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 136 "data/maps/Nes/scripts.pory"
	delay 8
# 137 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 9, 14, 196 + 1 + 9, 0, 264
# 138 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 140 "data/maps/Nes/scripts.pory"
	delay 8
# 141 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 12, 14, 196 + 1 + 12, 0, 264
# 142 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 143 "data/maps/Nes/scripts.pory"
	delay 8
# 146 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_PLAYER, ActivateNesCutscene_Movement_0
# 147 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW1, MoveNesObjects
# 148 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW2, MoveNesObjects
# 149 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW3, MoveNesObjects
# 150 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW4, MoveNesObjects
# 151 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING1, MoveNesObjects
# 153 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING2, MoveNesObjects
# 154 "data/maps/Nes/scripts.pory"
	delay 16
# 155 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW5, MoveNesObjects
# 156 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW6, MoveNesObjects
# 157 "data/maps/Nes/scripts.pory"
	delay 16
# 158 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING3, MoveNesObjects2
# 159 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING4, MoveNesObjects2
# 160 "data/maps/Nes/scripts.pory"
	delay 16
# 161 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW7, MoveNesObjects
# 162 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW8, MoveNesObjects
# 163 "data/maps/Nes/scripts.pory"
	delay 48
# 164 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253
# 165 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW1, 11, 251
# 166 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW2, 14, 251
# 167 "data/maps/Nes/scripts.pory"
	delay 32
# 168 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING2, 8, 253 - 2
# 169 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW3, 11, 251 - 2
# 170 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW4, 14, 251 - 2
# 171 "data/maps/Nes/scripts.pory"
	delay 32
# 172 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING3, 8, 253 - 4
# 173 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW5, 11, 251 - 4
# 174 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW6, 14, 251 - 4
# 175 "data/maps/Nes/scripts.pory"
	delay 32
# 176 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING4, 8, 253 - 6
# 177 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW7, 11, 251 - 6
# 178 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW8, 14, 251 - 6
# 179 "data/maps/Nes/scripts.pory"
	delay 48
# 180 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253 - 7
# 181 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW1, 11, 251 - 7
# 182 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW2, 14, 251 - 7
# 183 "data/maps/Nes/scripts.pory"
	delay 32
# 184 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING2, 8, 253 - 9
# 185 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW3, 11, 251 - 9
# 186 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW4, 14, 251 - 9
# 187 "data/maps/Nes/scripts.pory"
	delay 48
# 188 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING3, 8, 253 - 10
# 189 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW5, 11, 251 - 10
# 190 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW6, 14, 251 - 10
# 191 "data/maps/Nes/scripts.pory"
	delay 48
# 192 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING4, 8, 253 - 11
# 193 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW7, 11, 251 - 11
# 194 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW8, 14, 251 - 11
# 195 "data/maps/Nes/scripts.pory"
	delay 48
# 196 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253 - 12
# 197 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW1, 11, 251 - 12
# 198 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW2, 14, 251 - 12
# 199 "data/maps/Nes/scripts.pory"
	delay 32
# 200 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING2, 8, 253 - 14
# 201 "data/maps/Nes/scripts.pory"
	delay 16
# 202 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW3, 11, 251 - 13
# 203 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW4, 14, 251 - 13
# 204 "data/maps/Nes/scripts.pory"
	delay 32
# 205 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING3, 8, 253 - 15
# 206 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW5, 11, 251 - 15
# 207 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW6, 14, 251 - 15
# 208 "data/maps/Nes/scripts.pory"
	delay 32
# 209 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING4, 8, 253 - 17
# 210 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW7, 11, 251 - 17
# 211 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW8, 14, 251 - 17
# 212 "data/maps/Nes/scripts.pory"
	delay 32
# 213 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253 - 19
# 222 "data/maps/Nes/scripts.pory"
	callnative DisableCutsceneSkip
# 223 "data/maps/Nes/scripts.pory"
	setflag FLAG_TEMP_2
# 224 "data/maps/Nes/scripts.pory"
	delay 32
# 226 "data/maps/Nes/scripts.pory"
	callnative CreateRooftopSprites
# 227 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_MEGAMAN, ActivateNesCutscene_Movement_1
# 231 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW1
# 232 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW2
# 233 "data/maps/Nes/scripts.pory"
	delay 16
# 234 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_RAILING2
# 235 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW3
# 236 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW4
# 237 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 - 1
# 238 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 - 2
# 239 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235
# 240 "data/maps/Nes/scripts.pory"
	delay 16
# 241 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 1
# 242 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_RAILING3
# 243 "data/maps/Nes/scripts.pory"
	delay 16
# 244 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 2
# 245 "data/maps/Nes/scripts.pory"
	delay 16
# 246 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 3
# 247 "data/maps/Nes/scripts.pory"
	delay 16
# 248 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 4
# 262 "data/maps/Nes/scripts.pory"
	waitmovement LOCALID_PLAYER
# 263 "data/maps/Nes/scripts.pory"
	goto_if_set FLAG_TEMP_2, ActivateNesCutscene_2
# 267 "data/maps/Nes/scripts.pory"
	call Nes_InterruptCutscene
ActivateNesCutscene_1:
# 269 "data/maps/Nes/scripts.pory"
	setvar VAR_TEMP_0, 1
	end

ActivateNesCutscene_2:
# 264 "data/maps/Nes/scripts.pory"
	call Nes_InterruptCutscene2
	goto ActivateNesCutscene_1


# 273 "data/maps/Nes/scripts.pory"
MoveNesObjects:
# 274 "data/maps/Nes/scripts.pory"
	unlock_anim
# 275 "data/maps/Nes/scripts.pory"
	lock_anim
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
# 277 "data/maps/Nes/scripts.pory"
	walk_down
	step_end

# 280 "data/maps/Nes/scripts.pory"
MoveNesObjects2:
# 281 "data/maps/Nes/scripts.pory"
	unlock_anim
# 282 "data/maps/Nes/scripts.pory"
	lock_anim
# 283 "data/maps/Nes/scripts.pory"
	walk_fast_down
# 283 "data/maps/Nes/scripts.pory"
	walk_fast_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
# 285 "data/maps/Nes/scripts.pory"
	walk_down
	step_end

BaseTextDelay::
# 289 "data/maps/Nes/scripts.pory"
	delay 8
# 290 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 291 "data/maps/Nes/scripts.pory"
	delay 8
# 292 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 293 "data/maps/Nes/scripts.pory"
	delay 8
# 294 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor3
# 295 "data/maps/Nes/scripts.pory"
	delay 235
# 296 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 297 "data/maps/Nes/scripts.pory"
	delay 8
# 298 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 299 "data/maps/Nes/scripts.pory"
	delay 8
# 300 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
	return


# 30 "data/maps/Nes/scripts.pory"
Nes_InterruptCutscene_Movement_0:
# 30 "data/maps/Nes/scripts.pory"
	face_down
	step_end

# 54 "data/maps/Nes/scripts.pory"
Nes_InterruptCutscene_Movement_1:
# 54 "data/maps/Nes/scripts.pory"
	nurse_joy_bow
# 54 "data/maps/Nes/scripts.pory"
	slide_up
# 54 "data/maps/Nes/scripts.pory"
	slide_up
# 54 "data/maps/Nes/scripts.pory"
	slide_up
# 54 "data/maps/Nes/scripts.pory"
	slide_up
# 54 "data/maps/Nes/scripts.pory"
	slide_up
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
# 54 "data/maps/Nes/scripts.pory"
	delay_16
	step_end

# 146 "data/maps/Nes/scripts.pory"
ActivateNesCutscene_Movement_0:
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 146 "data/maps/Nes/scripts.pory"
	delay_16
# 146 "data/maps/Nes/scripts.pory"
	delay_16
# 146 "data/maps/Nes/scripts.pory"
	delay_16
# 146 "data/maps/Nes/scripts.pory"
	delay_16
# 146 "data/maps/Nes/scripts.pory"
	delay_16
# 146 "data/maps/Nes/scripts.pory"
	delay_16
	step_end

# 227 "data/maps/Nes/scripts.pory"
ActivateNesCutscene_Movement_1:
# 227 "data/maps/Nes/scripts.pory"
	lock_facing_direction
# 227 "data/maps/Nes/scripts.pory"
	delay_16
# 227 "data/maps/Nes/scripts.pory"
	walk_down
# 227 "data/maps/Nes/scripts.pory"
	walk_down
# 227 "data/maps/Nes/scripts.pory"
	walk_down
# 227 "data/maps/Nes/scripts.pory"
	walk_down
# 227 "data/maps/Nes/scripts.pory"
	walk_down
# 227 "data/maps/Nes/scripts.pory"
	walk_down
# 227 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 227 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 227 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 227 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 227 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 227 "data/maps/Nes/scripts.pory"
	walk_in_place_faster_down
# 227 "data/maps/Nes/scripts.pory"
	unlock_facing_direction
	step_end
