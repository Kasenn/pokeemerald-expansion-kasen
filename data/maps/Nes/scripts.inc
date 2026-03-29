Nes_MapScripts::
# 2 "data/maps/Nes/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Nes_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Nes/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Nes_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

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
# 23 "data/maps/Nes/scripts.pory"
	special DisableCutsceneSkip
# 24 "data/maps/Nes/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 25 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8001, 7
# 26 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8002, 5
# 27 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 12, 14, 23, VAR_0x8001, VAR_0x8002
# 28 "data/maps/Nes/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 29 "data/maps/Nes/scripts.pory"
	special StopMovementScript
# 30 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_PLAYER, Nes_InterruptCutscene_Movement_0
# 31 "data/maps/Nes/scripts.pory"
	waitmovement LOCALID_PLAYER
# 32 "data/maps/Nes/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 33 "data/maps/Nes/scripts.pory"
	playbgm MUS_MMTITLE2, TRUE
# 34 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8001, 7
# 35 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8002, 5
# 36 "data/maps/Nes/scripts.pory"
	special SetScenePal3
# 37 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 169, 14, 180, VAR_0x8001, VAR_0x8002
# 38 "data/maps/Nes/scripts.pory"
	special DrawWholeMapView
# 39 "data/maps/Nes/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 40 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8001, 12
# 41 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8002, 7
# 42 "data/maps/Nes/scripts.pory"
	addobject LOCALID_MEGAMAN
# 43 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_MEGAMAN, VAR_0x8001, VAR_0x8002
# 44 "data/maps/Nes/scripts.pory"
	releaseall
# 45 "data/maps/Nes/scripts.pory"
	special CreateRooftopSprites
# 46 "data/maps/Nes/scripts.pory"
Nes_Intermission:
# 47 "data/maps/Nes/scripts.pory"
	delay 10
# 48 "data/maps/Nes/scripts.pory"
	special ClearRooftopSprites
# 49 "data/maps/Nes/scripts.pory"
	waitstartpress
# 50 "data/maps/Nes/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 51 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_MEGAMAN, Nes_InterruptCutscene_Movement_1
# 52 "data/maps/Nes/scripts.pory"
	delay 44
# 53 "data/maps/Nes/scripts.pory"
	playse SE_WARP_IN
# 54 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8001, 12
# 55 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8002, 7
# 56 "data/maps/Nes/scripts.pory"
	waitmovement LOCALID_MEGAMAN
# 57 "data/maps/Nes/scripts.pory"
	delay 10
# 58 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 0, 14, 11, VAR_0x8001, VAR_0x8002
# 59 "data/maps/Nes/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 60 "data/maps/Nes/scripts.pory"
	delay 60
# 61 "data/maps/Nes/scripts.pory"
	special ClearAnims
# 62 "data/maps/Nes/scripts.pory"
	warpsilent MAP_PLAYER_HOUSE2F, 1
# 63 "data/maps/Nes/scripts.pory"
	waitstate
	return


Nes_InterruptCutscene2::
# 67 "data/maps/Nes/scripts.pory"
	releaseall
# 68 "data/maps/Nes/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 69 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8001, 7
# 70 "data/maps/Nes/scripts.pory"
	subvar VAR_0x8002, 5
# 71 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 169, 14, 180, VAR_0x8001, VAR_0x8002
# 72 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8001, 12
# 73 "data/maps/Nes/scripts.pory"
	addvar VAR_0x8002, 7
# 74 "data/maps/Nes/scripts.pory"
	goto Nes_Intermission
	return


ActivateNesCutscene::
# 79 "data/maps/Nes/scripts.pory"
	special SetSceneDark
# 80 "data/maps/Nes/scripts.pory"
	special LoadTextColor0
# 81 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 1, 211, 14, 217, 0, 258
# 82 "data/maps/Nes/scripts.pory"
	delay 20
# 83 "data/maps/Nes/scripts.pory"
	special LoadTextColor1
# 84 "data/maps/Nes/scripts.pory"
	delay 8
# 85 "data/maps/Nes/scripts.pory"
	special LoadTextColor2
# 86 "data/maps/Nes/scripts.pory"
	delay 8
# 87 "data/maps/Nes/scripts.pory"
	special LoadTextColor3
# 88 "data/maps/Nes/scripts.pory"
	delay 320
# 89 "data/maps/Nes/scripts.pory"
	special LoadTextColor2
# 90 "data/maps/Nes/scripts.pory"
	delay 8
# 91 "data/maps/Nes/scripts.pory"
	special LoadTextColor1
# 92 "data/maps/Nes/scripts.pory"
	delay 8
# 93 "data/maps/Nes/scripts.pory"
	special LoadTextColor0
# 95 "data/maps/Nes/scripts.pory"
	delay 8
# 96 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 267, 14, 303, 0, 231
# 97 "data/maps/Nes/scripts.pory"
	delay 8
# 98 "data/maps/Nes/scripts.pory"
	special SetScenePal1
# 99 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW1, DIR_NORTH
# 100 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW2, DIR_NORTH
# 101 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW3, DIR_NORTH
# 102 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW4, DIR_NORTH
# 103 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_RAILING1, DIR_NORTH
# 104 "data/maps/Nes/scripts.pory"
	delay 8
# 105 "data/maps/Nes/scripts.pory"
	special SetScenePal2
# 106 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW1, DIR_WEST
# 107 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW2, DIR_WEST
# 108 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW3, DIR_WEST
# 109 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW4, DIR_WEST
# 110 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_RAILING1, DIR_WEST
# 111 "data/maps/Nes/scripts.pory"
	delay 8
# 112 "data/maps/Nes/scripts.pory"
	special SetScenePal3
# 113 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW1, DIR_EAST
# 114 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW2, DIR_EAST
# 115 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW3, DIR_EAST
# 116 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_WINDOW4, DIR_EAST
# 117 "data/maps/Nes/scripts.pory"
	turnobject LOCALID_RAILING1, DIR_EAST
# 118 "data/maps/Nes/scripts.pory"
	playbgm MUS_MMTITLE1, TRUE
# 120 "data/maps/Nes/scripts.pory"
	special LoadTextColor0
# 121 "data/maps/Nes/scripts.pory"
	delay 8
# 122 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196, 14, 196 + 1, 0, 264
# 123 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 125 "data/maps/Nes/scripts.pory"
	delay 8
# 126 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 3, 14, 196 + 1 + 3, 0, 264
# 127 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 129 "data/maps/Nes/scripts.pory"
	delay 8
# 130 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 6, 14, 196 + 1 + 6, 0, 264
# 131 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 133 "data/maps/Nes/scripts.pory"
	delay 8
# 134 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 9, 14, 196 + 1 + 9, 0, 264
# 135 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 137 "data/maps/Nes/scripts.pory"
	delay 8
# 138 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 12, 14, 196 + 1 + 12, 0, 264
# 139 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 140 "data/maps/Nes/scripts.pory"
	delay 8
# 142 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_PLAYER, ActivateNesCutscene_Movement_0
# 143 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW1, MoveNesObjects
# 144 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW2, MoveNesObjects
# 145 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW3, MoveNesObjects
# 146 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW4, MoveNesObjects
# 147 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING1, MoveNesObjects
# 148 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING2, MoveNesObjects
# 149 "data/maps/Nes/scripts.pory"
	delay 16
# 150 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW5, MoveNesObjects
# 151 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW6, MoveNesObjects
# 152 "data/maps/Nes/scripts.pory"
	delay 16
# 153 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING3, MoveNesObjects2
# 154 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_RAILING4, MoveNesObjects2
# 155 "data/maps/Nes/scripts.pory"
	delay 16
# 156 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW7, MoveNesObjects
# 157 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_WINDOW8, MoveNesObjects
# 158 "data/maps/Nes/scripts.pory"
	delay 48
# 159 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253
# 160 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW1, 11, 251
# 161 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW2, 14, 251
# 162 "data/maps/Nes/scripts.pory"
	delay 32
# 163 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING2, 8, 253 - 2
# 164 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW3, 11, 251 - 2
# 165 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW4, 14, 251 - 2
# 166 "data/maps/Nes/scripts.pory"
	delay 32
# 167 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING3, 8, 253 - 4
# 168 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW5, 11, 251 - 4
# 169 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW6, 14, 251 - 4
# 170 "data/maps/Nes/scripts.pory"
	delay 32
# 171 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING4, 8, 253 - 6
# 172 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW7, 11, 251 - 6
# 173 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW8, 14, 251 - 6
# 174 "data/maps/Nes/scripts.pory"
	delay 48
# 175 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253 - 7
# 176 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW1, 11, 251 - 7
# 177 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW2, 14, 251 - 7
# 178 "data/maps/Nes/scripts.pory"
	delay 32
# 179 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING2, 8, 253 - 9
# 180 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW3, 11, 251 - 9
# 181 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW4, 14, 251 - 9
# 182 "data/maps/Nes/scripts.pory"
	delay 48
# 183 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING3, 8, 253 - 10
# 184 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW5, 11, 251 - 10
# 185 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW6, 14, 251 - 10
# 186 "data/maps/Nes/scripts.pory"
	delay 48
# 187 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING4, 8, 253 - 11
# 188 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW7, 11, 251 - 11
# 189 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW8, 14, 251 - 11
# 190 "data/maps/Nes/scripts.pory"
	delay 48
# 191 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253 - 12
# 192 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW1, 11, 251 - 12
# 193 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW2, 14, 251 - 12
# 194 "data/maps/Nes/scripts.pory"
	delay 32
# 195 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING2, 8, 253 - 14
# 196 "data/maps/Nes/scripts.pory"
	delay 16
# 197 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW3, 11, 251 - 13
# 198 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW4, 14, 251 - 13
# 199 "data/maps/Nes/scripts.pory"
	delay 32
# 200 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING3, 8, 253 - 15
# 201 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW5, 11, 251 - 15
# 202 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW6, 14, 251 - 15
# 203 "data/maps/Nes/scripts.pory"
	delay 32
# 204 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING4, 8, 253 - 17
# 205 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW7, 11, 251 - 17
# 206 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_WINDOW8, 14, 251 - 17
# 207 "data/maps/Nes/scripts.pory"
	delay 32
# 208 "data/maps/Nes/scripts.pory"
	setobjectxy LOCALID_RAILING1, 8, 253 - 19
# 209 "data/maps/Nes/scripts.pory"
	special DisableCutsceneSkip
# 210 "data/maps/Nes/scripts.pory"
	delay 32
# 211 "data/maps/Nes/scripts.pory"
	special CreateRooftopSprites
# 212 "data/maps/Nes/scripts.pory"
	applymovement LOCALID_MEGAMAN, ActivateNesCutscene_Movement_1
# 213 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW1
# 214 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW2
# 215 "data/maps/Nes/scripts.pory"
	delay 16
# 216 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_RAILING2
# 217 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW3
# 218 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_WINDOW4
# 219 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 - 1
# 220 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 - 2
# 221 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235
# 222 "data/maps/Nes/scripts.pory"
	delay 16
# 223 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 1
# 224 "data/maps/Nes/scripts.pory"
	removeobject LOCALID_RAILING3
# 225 "data/maps/Nes/scripts.pory"
	delay 16
# 226 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 2
# 227 "data/maps/Nes/scripts.pory"
	delay 16
# 228 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 3
# 229 "data/maps/Nes/scripts.pory"
	delay 16
# 230 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 9, 0, 14, 0, 9, 235 + 4
# 231 "data/maps/Nes/scripts.pory"
	waitmovement LOCALID_PLAYER
# 232 "data/maps/Nes/scripts.pory"
	goto Nes_InterruptCutscene2
	return


# 235 "data/maps/Nes/scripts.pory"
MoveNesObjects:
# 236 "data/maps/Nes/scripts.pory"
	lock_anim
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
# 237 "data/maps/Nes/scripts.pory"
	walk_down
	step_end

# 240 "data/maps/Nes/scripts.pory"
MoveNesObjects2:
# 241 "data/maps/Nes/scripts.pory"
	lock_anim
# 242 "data/maps/Nes/scripts.pory"
	walk_fast_down
# 242 "data/maps/Nes/scripts.pory"
	walk_fast_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
# 243 "data/maps/Nes/scripts.pory"
	walk_down
	step_end

BaseTextDelay::
# 247 "data/maps/Nes/scripts.pory"
	delay 8
# 248 "data/maps/Nes/scripts.pory"
	special LoadTextColor1
# 249 "data/maps/Nes/scripts.pory"
	delay 8
# 250 "data/maps/Nes/scripts.pory"
	special LoadTextColor2
# 251 "data/maps/Nes/scripts.pory"
	delay 8
# 252 "data/maps/Nes/scripts.pory"
	special LoadTextColor3
# 253 "data/maps/Nes/scripts.pory"
	delay 235
# 254 "data/maps/Nes/scripts.pory"
	special LoadTextColor2
# 255 "data/maps/Nes/scripts.pory"
	delay 8
# 256 "data/maps/Nes/scripts.pory"
	special LoadTextColor1
# 257 "data/maps/Nes/scripts.pory"
	delay 8
# 258 "data/maps/Nes/scripts.pory"
	special LoadTextColor0
	return


# 30 "data/maps/Nes/scripts.pory"
Nes_InterruptCutscene_Movement_0:
# 30 "data/maps/Nes/scripts.pory"
	face_down
	step_end

# 51 "data/maps/Nes/scripts.pory"
Nes_InterruptCutscene_Movement_1:
# 51 "data/maps/Nes/scripts.pory"
	nurse_joy_bow
# 51 "data/maps/Nes/scripts.pory"
	slide_up
# 51 "data/maps/Nes/scripts.pory"
	slide_up
# 51 "data/maps/Nes/scripts.pory"
	slide_up
# 51 "data/maps/Nes/scripts.pory"
	slide_up
# 51 "data/maps/Nes/scripts.pory"
	slide_up
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
# 51 "data/maps/Nes/scripts.pory"
	delay_16
	step_end

# 142 "data/maps/Nes/scripts.pory"
ActivateNesCutscene_Movement_0:
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	walk_slow_up
# 142 "data/maps/Nes/scripts.pory"
	delay_16
# 142 "data/maps/Nes/scripts.pory"
	delay_16
# 142 "data/maps/Nes/scripts.pory"
	delay_16
# 142 "data/maps/Nes/scripts.pory"
	delay_16
# 142 "data/maps/Nes/scripts.pory"
	delay_16
# 142 "data/maps/Nes/scripts.pory"
	delay_16
	step_end

# 212 "data/maps/Nes/scripts.pory"
ActivateNesCutscene_Movement_1:
# 212 "data/maps/Nes/scripts.pory"
	lock_facing_direction
# 212 "data/maps/Nes/scripts.pory"
	delay_16
# 212 "data/maps/Nes/scripts.pory"
	walk_down
# 212 "data/maps/Nes/scripts.pory"
	walk_down
# 212 "data/maps/Nes/scripts.pory"
	walk_down
# 212 "data/maps/Nes/scripts.pory"
	walk_down
# 212 "data/maps/Nes/scripts.pory"
	walk_down
# 212 "data/maps/Nes/scripts.pory"
	walk_down
# 212 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 212 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 212 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 212 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 212 "data/maps/Nes/scripts.pory"
	walk_in_place_down
# 212 "data/maps/Nes/scripts.pory"
	walk_in_place_faster_down
# 212 "data/maps/Nes/scripts.pory"
	unlock_facing_direction
	step_end
