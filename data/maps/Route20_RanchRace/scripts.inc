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
	callnative TurnGogoatToBike
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
	compare VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
	goto_if_eq StartMenu_GiveUpGogoatRace_12
StartMenu_GiveUpGogoatRace_11:
# 46 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 2
StartMenu_GiveUpGogoatRace_4:
# 48 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnGogoatToBike
# 49 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	goto StartMenu_GiveUpGogoatRace_1

StartMenu_GiveUpGogoatRace_5:
# 41 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
	goto_if_eq StartMenu_GiveUpGogoatRace_9
StartMenu_GiveUpGogoatRace_8:
# 42 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
	goto StartMenu_GiveUpGogoatRace_4

StartMenu_GiveUpGogoatRace_9:
# 41 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_FAILED
	goto StartMenu_GiveUpGogoatRace_8

StartMenu_GiveUpGogoatRace_12:
# 45 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_FAILED
	goto StartMenu_GiveUpGogoatRace_11


Race1_GiveUp::
# 60 "data/maps/Route20_RanchRace/scripts.pory"
	lock
# 61 "data/maps/Route20_RanchRace/scripts.pory"
	faceplayer
	msgbox Race1_InProgress, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Race1_GiveUp_2
Race1_GiveUp_1:
# 69 "data/maps/Route20_RanchRace/scripts.pory"
	release
	return

Race1_GiveUp_2:
# 63 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_LetsGetYouOff
# 64 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
	goto_if_eq Race1_GiveUp_5
Race1_GiveUp_4:
# 65 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 66 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnGogoatToBike
# 67 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	goto Race1_GiveUp_1

Race1_GiveUp_5:
# 64 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_FAILED
	goto Race1_GiveUp_4


RanchRace_Flag1::
# 86 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_1
# 87 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag2::
# 89 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_2
# 90 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag3::
# 92 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_3
# 93 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag4::
# 95 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_4
# 96 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag5::
# 98 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_5
# 99 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag6::
# 101 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_6
# 102 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag7::
# 104 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_7
# 105 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag8::
# 107 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_8
# 108 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag9::
# 110 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_9
# 111 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


RanchRace_Flag10::
# 113 "data/maps/Route20_RanchRace/scripts.pory"
	removeobject LOCALID_FLAG_10
# 114 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_Flag_Main
	return


Race1_Flag_Main::
# 116 "data/maps/Route20_RanchRace/scripts.pory"
	addvar VAR_TEMP_0, 1
# 117 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_TEMP_0, 10
	goto_if_eq Race1_Flag_Main_2
# 121 "data/maps/Route20_RanchRace/scripts.pory"
	playse SE_PIN
Race1_Flag_Main_1:
# 123 "data/maps/Route20_RanchRace/scripts.pory"
	release
	return

Race1_Flag_Main_2:
# 118 "data/maps/Route20_RanchRace/scripts.pory"
	playse SE_SUCCESS
	goto Race1_Flag_Main_1


Race1_FinishNorth::
# 127 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_NORTH
# 128 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishEast::
# 130 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_EAST
# 131 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishSouth::
# 133 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_SOUTH
# 134 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishWest::
# 136 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_2, DIR_WEST
# 137 "data/maps/Route20_RanchRace/scripts.pory"
	goto Race1_FinishMain
	return


Race1_FinishMain::
# 141 "data/maps/Route20_RanchRace/scripts.pory"
	lock
# 142 "data/maps/Route20_RanchRace/scripts.pory"
	callnative FinishGogoatRace
# 143 "data/maps/Route20_RanchRace/scripts.pory"
	switch VAR_TEMP_2
# 144 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_NORTH, Race1_FinishMain_3
# 145 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_EAST, Race1_FinishMain_4
# 146 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_WEST, Race1_FinishMain_5
# 147 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_SOUTH, Race1_FinishMain_6
Race1_FinishMain_1:
# 149 "data/maps/Route20_RanchRace/scripts.pory"
	playse SE_PIN
# 150 "data/maps/Route20_RanchRace/scripts.pory"
	exclamationmark 1
# 151 "data/maps/Route20_RanchRace/scripts.pory"
	switch VAR_TEMP_2
# 152 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_NORTH, Race1_FinishMain_9
# 153 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_EAST, Race1_FinishMain_10
# 154 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_WEST, Race1_FinishMain_11
# 155 "data/maps/Route20_RanchRace/scripts.pory"
	case DIR_SOUTH, Race1_FinishMain_12
Race1_FinishMain_7:
# 157 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox FinishRace1_CalculateScore
# 160 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_REWARD_EARNED
	goto_if_ge Race1_FinishMain_13
# 191 "data/maps/Route20_RanchRace/scripts.pory"
	goto_if_set FLAG_TEMP_C, Race1_FinishMain_19
# 200 "data/maps/Route20_RanchRace/scripts.pory"
	callnative BufferGogoatRecordTime
# 201 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_YouLostTheRace
	msgbox Race1_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Race1_FinishMain_25
# 212 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox LetsGetGogoatRacing
# 213 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
# 214 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 215 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnBikeToGogoat
# 216 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_3:
# 144 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_NORTH
	goto Race1_FinishMain_1

Race1_FinishMain_4:
# 145 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_EAST
	goto Race1_FinishMain_1

Race1_FinishMain_5:
# 146 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_WEST
	goto Race1_FinishMain_1

Race1_FinishMain_6:
# 147 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject 1, DIR_SOUTH
	goto Race1_FinishMain_1

Race1_FinishMain_9:
# 152 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto Race1_FinishMain_7

Race1_FinishMain_10:
# 153 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	goto Race1_FinishMain_7

Race1_FinishMain_11:
# 154 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto Race1_FinishMain_7

Race1_FinishMain_12:
# 155 "data/maps/Route20_RanchRace/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Race1_FinishMain_7

Race1_FinishMain_13:
# 161 "data/maps/Route20_RanchRace/scripts.pory"
	goto_if_set FLAG_TEMP_D, Race1_FinishMain_16
# 170 "data/maps/Route20_RanchRace/scripts.pory"
	callnative BufferGogoatRecordTime
# 171 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_FailedToImprove
	msgbox Race1_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Race1_FinishMain_22
# 181 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox LetsGetGogoatRacing
# 182 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 183 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnBikeToGogoat
# 184 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_16:
# 162 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE_AGAIN
# 163 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_YouWonAgain
# 164 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnGogoatToBike
# 165 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_1, 1
# 166 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 167 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_19:
# 192 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
# 193 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_YouWon
# 194 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnGogoatToBike
# 195 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_TEMP_1, 1
# 196 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 197 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
	return

Race1_FinishMain_22:
# 173 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_LetsGetYouOff
# 174 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 175 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnGogoatToBike
# 176 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
# 177 "data/maps/Route20_RanchRace/scripts.pory"
	release
	end

Race1_FinishMain_25:
# 203 "data/maps/Route20_RanchRace/scripts.pory"
	msgbox Race1_LetsGetYouOff
# 204 "data/maps/Route20_RanchRace/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
	goto_if_eq Race1_FinishMain_29
Race1_FinishMain_28:
# 205 "data/maps/Route20_RanchRace/scripts.pory"
	warp MAP_ROUTE20, 1
# 206 "data/maps/Route20_RanchRace/scripts.pory"
	callnative TurnGogoatToBike
# 207 "data/maps/Route20_RanchRace/scripts.pory"
	waitstate
# 208 "data/maps/Route20_RanchRace/scripts.pory"
	release
	end

Race1_FinishMain_29:
# 204 "data/maps/Route20_RanchRace/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_FAILED
	goto Race1_FinishMain_28


ForfeitGogoatRaceMenu::
# 54 "data/maps/Route20_RanchRace/scripts.pory"
	.string "Forfeit the race and\n"
	.string "return back to start?$"

Race1_InProgress::
# 72 "data/maps/Route20_RanchRace/scripts.pory"
	.string "Are you sure you want to\n"
	.string "forfeit the race?$"

ReadyToRace1::
# 76 "data/maps/Route20_RanchRace/scripts.pory"
	.string "Alright, we ready to do some\n"
	.string "Gogoat racing?$"

ForfeitRace1::
# 80 "data/maps/Route20_RanchRace/scripts.pory"
	.string "What's that?\n"
	.string "You want to quit now?$"

FinishRace1_CalculateScore::
# 222 "data/maps/Route20_RanchRace/scripts.pory"
	.string "Alright, looks like you managed\n"
	.string "to grab all the flags!\l"
	.string "Now, let's see how well you did…$"

Race1_YouWon::
# 227 "data/maps/Route20_RanchRace/scripts.pory"
	.string "{STR_VAR_1}?!\n"
	.string "That's a new record!\p"
	.string "I believe congratulations are\n"
	.string "in order, but first, let's get you\l"
	.string "off that Gogoat…$"

Race1_YouLostTheRace::
# 234 "data/maps/Route20_RanchRace/scripts.pory"
	.string "{STR_VAR_1}…\p"
	.string "I'm sorry, but that's not fast enough\n"
	.string "to break the current record of\l"
	.string "{STR_VAR_2} seconds.$"

Race1_YouWonAgain::
# 240 "data/maps/Route20_RanchRace/scripts.pory"
	.string "{STR_VAR_1}?!\n"
	.string "That's yet another new record!\p"
	.string "I believe congratulations are\n"
	.string "in order, but first, let's get you\l"
	.string "off that Gogoat…$"

Race1_FailedToImprove::
# 247 "data/maps/Route20_RanchRace/scripts.pory"
	.string "{STR_VAR_1}…\p"
	.string "It looks like you didn't manage to\n"
	.string "improve your current record of\l"
	.string "{STR_VAR_2} seconds.$"

Race1_TryAgain::
# 253 "data/maps/Route20_RanchRace/scripts.pory"
	.string "Would you like to have another try?$"

Race1_LetsGetYouOff::
# 256 "data/maps/Route20_RanchRace/scripts.pory"
	.string "Very well then.\n"
	.string "Let's get you off that Gogoat…$"
