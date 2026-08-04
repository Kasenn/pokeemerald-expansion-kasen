Yoshi_GameOver_MapScripts::
# 2 "data/maps/Yoshi_GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/Yoshi_GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/Yoshi_GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 15 "data/maps/Yoshi_GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Yoshi_GameOver/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative LoadTextColor0
	return

Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative LoadTextColor0
	return

Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/Yoshi_GameOver/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 11 "data/maps/Yoshi_GameOver/scripts.pory"
	hideplayer
# 12 "data/maps/Yoshi_GameOver/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Yoshi_GameOver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/Yoshi_GameOver/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, GameOverScreen
	.2byte 0


GameOverScreen::
# 21 "data/maps/Yoshi_GameOver/scripts.pory"
	delay 60
# 22 "data/maps/Yoshi_GameOver/scripts.pory"
	addobject 1
# 23 "data/maps/Yoshi_GameOver/scripts.pory"
	addobject 2
# 24 "data/maps/Yoshi_GameOver/scripts.pory"
	addobject 3
# 25 "data/maps/Yoshi_GameOver/scripts.pory"
	addobject 4
# 26 "data/maps/Yoshi_GameOver/scripts.pory"
	addobject 5
# 27 "data/maps/Yoshi_GameOver/scripts.pory"
	delay 202
# 28 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative CheckIfSaveExists
# 29 "data/maps/Yoshi_GameOver/scripts.pory"
	goto_if_set FLAG_TEMP_10, GameOverScreen_2
# 34 "data/maps/Yoshi_GameOver/scripts.pory"
	delay 202
# 35 "data/maps/Yoshi_GameOver/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GameOverScreen_Movement_0
# 36 "data/maps/Yoshi_GameOver/scripts.pory"
	delay 45
# 37 "data/maps/Yoshi_GameOver/scripts.pory"
	waitmovement 0
GameOverScreen_5:
# 38 "data/maps/Yoshi_GameOver/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_lt GameOverScreen_6
# 44 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative ResetPalSteps
# 45 "data/maps/Yoshi_GameOver/scripts.pory"
	delay 16
# 46 "data/maps/Yoshi_GameOver/scripts.pory"
	waitgameoverbutton
# 47 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative StopGameOverMusic
# 48 "data/maps/Yoshi_GameOver/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/Yoshi_GameOver/scripts.pory"
	delay 60
# 50 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative StopMusicCompletely
# 51 "data/maps/Yoshi_GameOver/scripts.pory"
	goto_if_unset FLAG_GAMEOVER_QUIT, GameOverScreen_8
# 55 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative DoSoftReset
	return

GameOverScreen_2:
# 30 "data/maps/Yoshi_GameOver/scripts.pory"
	waitbuttonpress
# 31 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative DoSoftReset
	end

GameOverScreen_6:
# 40 "data/maps/Yoshi_GameOver/scripts.pory"
	addvar VAR_TEMP_1, 1
# 41 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative LoadTextColor1
# 42 "data/maps/Yoshi_GameOver/scripts.pory"
	delay 2
	goto GameOverScreen_5

GameOverScreen_8:
# 52 "data/maps/Yoshi_GameOver/scripts.pory"
	callnative DoSpecialSoftReset
	return


WarpToGameOverScreen::
# 60 "data/maps/Yoshi_GameOver/scripts.pory"
	warpsilent MAP_YOSHI_GAME_OVER, 0
# 61 "data/maps/Yoshi_GameOver/scripts.pory"
	waitstate
	return


# 35 "data/maps/Yoshi_GameOver/scripts.pory"
GameOverScreen_Movement_0:
# 35 "data/maps/Yoshi_GameOver/scripts.pory"
	walk_slow_down
# 35 "data/maps/Yoshi_GameOver/scripts.pory"
	walk_slow_down
	step_end
