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


ActivateNesCutscene::
# 18 "data/maps/Nes/scripts.pory"
	callnative SetSceneDark
# 19 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
# 20 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 1, 211, 14, 217, 0, 258
# 21 "data/maps/Nes/scripts.pory"
	delay 5
# 22 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 23 "data/maps/Nes/scripts.pory"
	delay 10
# 24 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 25 "data/maps/Nes/scripts.pory"
	delay 10
# 26 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor3
# 27 "data/maps/Nes/scripts.pory"
	delay 320
# 28 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 29 "data/maps/Nes/scripts.pory"
	delay 10
# 30 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 31 "data/maps/Nes/scripts.pory"
	delay 10
# 32 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
# 34 "data/maps/Nes/scripts.pory"
	delay 10
# 35 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 267, 14, 303, 0, 231
# 36 "data/maps/Nes/scripts.pory"
	delay 10
# 37 "data/maps/Nes/scripts.pory"
	callnative SetScenePal1
# 38 "data/maps/Nes/scripts.pory"
	delay 10
# 39 "data/maps/Nes/scripts.pory"
	callnative SetScenePal2
# 40 "data/maps/Nes/scripts.pory"
	delay 10
# 41 "data/maps/Nes/scripts.pory"
	callnative SetScenePal3
# 43 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
# 44 "data/maps/Nes/scripts.pory"
	delay 10
# 45 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196, 14, 196 + 1, 0, 264
# 46 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 48 "data/maps/Nes/scripts.pory"
	delay 10
# 49 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 3, 14, 196 + 1 + 3, 0, 264
# 50 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 52 "data/maps/Nes/scripts.pory"
	delay 10
# 53 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 6, 14, 196 + 1 + 6, 0, 264
# 54 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 56 "data/maps/Nes/scripts.pory"
	delay 10
# 57 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 9, 14, 196 + 1 + 9, 0, 264
# 58 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 60 "data/maps/Nes/scripts.pory"
	delay 10
# 61 "data/maps/Nes/scripts.pory"
	drawtiles MAP_NES, 0, 196 + 12, 14, 196 + 1 + 12, 0, 264
# 62 "data/maps/Nes/scripts.pory"
	call BaseTextDelay
# 66 "data/maps/Nes/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


BaseTextDelay::
# 71 "data/maps/Nes/scripts.pory"
	delay 10
# 72 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 73 "data/maps/Nes/scripts.pory"
	delay 10
# 74 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 75 "data/maps/Nes/scripts.pory"
	delay 10
# 76 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor3
# 77 "data/maps/Nes/scripts.pory"
	delay 260
# 78 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor2
# 79 "data/maps/Nes/scripts.pory"
	delay 10
# 80 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor1
# 81 "data/maps/Nes/scripts.pory"
	delay 10
# 82 "data/maps/Nes/scripts.pory"
	callnative LoadTextColor0
	return

