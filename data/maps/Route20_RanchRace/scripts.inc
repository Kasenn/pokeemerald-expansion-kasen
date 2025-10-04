Route20_RanchRace_MapScripts::
# 6 "data/maps/Route20_RanchRace/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route20_RanchRace_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/Route20_RanchRace/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route20_RanchRace_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route20_RanchRace_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Route20_RanchRace/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route20_RanchRace_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route20_RanchRace_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 8 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return

Route20_RanchRace_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route20_RanchRace/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Race1_Start
	.2byte 0


Race1_Start::
# 17 "data/maps/Route20_RanchRace/scripts.pory"
	delay 30
	msgbox ReadyToRace1, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Race1_Start_2
Race1_Start_1:
# 30 "data/maps/Route20_RanchRace/scripts.pory"
	message GetSetReadyGo
# 31 "data/maps/Route20_RanchRace/scripts.pory"
	waitmessage
# 32 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/Route20_RanchRace/scripts.pory"
	playbgm MUS_CYCLING, TRUE
# 34 "data/maps/Route20_RanchRace/scripts.pory"
	callnative StartRecordingRace
# 35 "data/maps/Route20_RanchRace/scripts.pory"
	release
	return

Race1_Start_2:
	msgbox ForfeitRace1, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Race1_Start_5
# 23 "data/maps/Route20_RanchRace/scripts.pory"
	clearflag FLAG_GOGOAT_RIDING
# 24 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 26 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
Race1_Start_4:
# 28 "data/maps/Route20_RanchRace/scripts.pory"
	release
	goto Race1_Start_1

Race1_Start_5:
# 20 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Start
	goto Race1_Start_4


StartMenu_GiveUpGogoatRace::
	msgbox ForfeitGogoatRaceMenu, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq StartMenu_GiveUpGogoatRace_2
StartMenu_GiveUpGogoatRace_1:
# 51 "data/maps/Route20_RanchRace/scripts.pory"
	release
	return

StartMenu_GiveUpGogoatRace_2:
	iscurrentmap MAP_ROUTE20_RANCH_RACE
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne StartMenu_GiveUpGogoatRace_5
# 45 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_IN_PROGRESS
	goto_if_eq StartMenu_GiveUpGogoatRace_12
StartMenu_GiveUpGogoatRace_11:
# 46 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 2
StartMenu_GiveUpGogoatRace_4:
# 48 "data/maps/Route20_RanchRace/scripts.pory"
	clearflag FLAG_GOGOAT_RIDING
# 49 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	goto StartMenu_GiveUpGogoatRace_1

StartMenu_GiveUpGogoatRace_5:
# 41 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_IN_PROGRESS
	goto_if_eq StartMenu_GiveUpGogoatRace_9
StartMenu_GiveUpGogoatRace_8:
# 42 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
	goto StartMenu_GiveUpGogoatRace_4

StartMenu_GiveUpGogoatRace_9:
# 41 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_FAILED
	goto StartMenu_GiveUpGogoatRace_8

StartMenu_GiveUpGogoatRace_12:
# 45 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_FAILED
	goto StartMenu_GiveUpGogoatRace_11


Race1_GiveUp::
# 59 "data/maps/Route20_RanchRace/scripts.pory"
	lock
# 60 "data/maps/Route20_RanchRace/scripts.pory"
	faceplayer
	msgbox Race1_InProgress, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Race1_GiveUp_2
Race1_GiveUp_1:
# 68 "data/maps/Route20_RanchRace/scripts.pory"
	release
	return

Race1_GiveUp_2:
# 62 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_LetsGetYouOff
# 63 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_IN_PROGRESS
	goto_if_eq Race1_GiveUp_5
Race1_GiveUp_4:
# 64 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 65 "data/maps/Route20_RanchRace/scripts.pory"
	clearflag FLAG_GOGOAT_RIDING
# 66 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	goto Race1_GiveUp_1

Race1_GiveUp_5:
# 63 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_FAILED
	goto Race1_GiveUp_4


RanchRace_Flag1::
# 82 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_1
# 83 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag2::
# 85 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_2
# 86 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag3::
# 88 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_3
# 89 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag4::
# 91 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_4
# 92 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag5::
# 94 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_5
# 95 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag6::
# 97 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_6
# 98 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag7::
# 100 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_7
# 101 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag8::
# 103 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_8
# 104 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag9::
# 106 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_9
# 107 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag10::
# 109 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_10
# 110 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


Race1_Flag_Main::
# 112 "data/maps/Route20_RanchRace/scripts.pory"
	addvar VAR_TEMP_0, 1
# 113 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_TEMP_0, 10
	goto_if_eq Race1_Flag_Main_2
# 117 "data/maps/Route20_RanchRace/scripts.pory"
	playse SE_PIN
Race1_Flag_Main_1:
# 119 "data/maps/Route20_RanchRace/scripts.pory"
	release
	return

Race1_Flag_Main_2:
# 114 "data/maps/Route20_RanchRace/scripts.pory"
	playse SE_SUCCESS
	goto Race1_Flag_Main_1


Race1_FinishNorth::
# 123 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_NORTH
# 124 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishEast::
# 126 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_EAST
# 127 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishSouth::
# 129 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_SOUTH
# 130 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishWest::
# 132 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_WEST
# 133 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishMain::
# 137 "data/maps/Route20_RanchRace/scripts.pory"
	lock
# 138 "data/maps/Route20_RanchRace/scripts.pory"
	callnative FinishGogoatRace
# 139 "data/maps/Route20_RanchRace/scripts.pory"
	switch VAR_TEMP_2
# 140 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_NORTH, Race1_FinishMain_3
# 141 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_EAST, Race1_FinishMain_4
# 142 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_WEST, Race1_FinishMain_5
# 143 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_SOUTH, Race1_FinishMain_6
Race1_FinishMain_1:
# 145 "data/maps/Route20_RanchRace/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Route20_RanchRace/scripts.pory"
	exclamationmark 1
# 147 "data/maps/Route20_RanchRace/scripts.pory"
	switch VAR_TEMP_2
# 148 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_NORTH, Race1_FinishMain_9
# 149 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_EAST, Race1_FinishMain_10
# 150 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_WEST, Race1_FinishMain_11
# 151 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_SOUTH, Race1_FinishMain_12
Race1_FinishMain_7:
# 153 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox FinishRace1_CalculateScore
# 156 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_REWARD_EARNED
	goto_if_ge Race1_FinishMain_13
# 185 "data/maps/Route20_RanchRace/scripts.pory"
	goto_if_set FLAG_TEMP_C, Race1_FinishMain_19
# 194 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_YouLost
	msgbox Race1_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Race1_FinishMain_25
# 205 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox LetsGetGogoatRacing
# 206 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_IN_PROGRESS
# 207 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 208 "data/maps/Route20_RanchRace/scripts.pory"
	setflag FLAG_GOGOAT_RIDING
# 209 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_3:
# 140 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_SOUTH
	goto Race1_FinishMain_1

Race1_FinishMain_4:
# 141 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_WEST
	goto Race1_FinishMain_1

Race1_FinishMain_5:
# 142 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_EAST
	goto Race1_FinishMain_1

Race1_FinishMain_6:
# 143 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_NORTH
	goto Race1_FinishMain_1

Race1_FinishMain_9:
# 148 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto Race1_FinishMain_7

Race1_FinishMain_10:
# 149 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	goto Race1_FinishMain_7

Race1_FinishMain_11:
# 150 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto Race1_FinishMain_7

Race1_FinishMain_12:
# 151 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Race1_FinishMain_7

Race1_FinishMain_13:
# 157 "data/maps/Route20_RanchRace/scripts.pory"
	goto_if_set FLAG_TEMP_D, Race1_FinishMain_16
# 165 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_FailedToImprove
	msgbox Race1_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Race1_FinishMain_22
# 175 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox LetsGetGogoatRacing
# 176 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 177 "data/maps/Route20_RanchRace/scripts.pory"
	setflag FLAG_GOGOAT_RIDING
# 178 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_16:
# 158 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_YouWonAgain
# 159 "data/maps/Route20_RanchRace/scripts.pory"
	clearflag FLAG_GOGOAT_RIDING
# 160 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_1, 1
# 161 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 162 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_19:
# 186 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_COMPLETE
# 187 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_YouWon
# 188 "data/maps/Route20_RanchRace/scripts.pory"
	clearflag FLAG_GOGOAT_RIDING
# 189 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_1, 1
# 190 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 191 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_22:
# 167 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_LetsGetYouOff
# 168 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 169 "data/maps/Route20_RanchRace/scripts.pory"
	clearflag FLAG_GOGOAT_RIDING
# 170 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
# 171 "data/maps/Route20_RanchRace/scripts.pory"
	release
	end

Race1_FinishMain_25:
# 196 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_LetsGetYouOff
# 197 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_IN_PROGRESS
	goto_if_eq Race1_FinishMain_29
Race1_FinishMain_28:
# 198 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 199 "data/maps/Route20_RanchRace/scripts.pory"
	clearflag FLAG_GOGOAT_RIDING
# 200 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
# 201 "data/maps/Route20_RanchRace/scripts.pory"
	release
	end

Race1_FinishMain_29:
# 197 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_FAILED
	goto Race1_FinishMain_28


ForfeitGogoatRaceMenu::
# 54 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_InProgress::
# 71 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

ReadyToRace1::
# 74 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

ForfeitRace1::
# 77 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

FinishRace1_CalculateScore::
# 215 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_YouWon::
# 218 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_YouLostTheRace::
# 221 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_GiveUsASecond::
# 224 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_TakingYouBack::
# 227 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_YouWonAgain::
# 230 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_FailedToImprove::
# 233 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_TryAgain::
# 236 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_LetsGetYouOff::
# 239 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"

Race1_YouLost::
# 242 "data/maps/Route20_RanchRace/scripts.pory"
	.string "wip$"
