Route20_RaceCourse_MapScripts::
# 4 "data/maps/Route20_RaceCourse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route20_RaceCourse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Route20_RaceCourse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route20_RaceCourse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route20_RaceCourse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/Route20_RaceCourse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Route20_RaceCourse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route20_RaceCourse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 6 "data/maps/Route20_RaceCourse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return

Route20_RaceCourse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Route20_RaceCourse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Route20RaceCourseStart
	.2byte 0


Route20RaceCourseStart::
# 15 "data/maps/Route20_RaceCourse/scripts.pory"
	delay 30
# 16 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox ReadyToRace, MSGBOX_YESNO
# 17 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20RaceCourseStart_2
Route20RaceCourseStart_1:
# 30 "data/maps/Route20_RaceCourse/scripts.pory"
	setobjectxyperm 1, 11, 113
# 31 "data/maps/Route20_RaceCourse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 32 "data/maps/Route20_RaceCourse/scripts.pory"
	message GetSetReadyGo
# 33 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmessage
# 34 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 35 "data/maps/Route20_RaceCourse/scripts.pory"
	playbgm MUS_CYCLING, TRUE
# 36 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative StartRecordingRace
# 37 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	return

Route20RaceCourseStart_2:
# 18 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox ForfeitRace, MSGBOX_YESNO
# 19 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20RaceCourseStart_5
# 23 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 24 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 25 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 0
# 26 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
Route20RaceCourseStart_4:
# 28 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	goto Route20RaceCourseStart_1

Route20RaceCourseStart_5:
# 20 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20RaceCourseStart
	goto Route20RaceCourseStart_4


Route20_RaceCourse_Finish1::
# 52 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 1
# 53 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish2::
# 56 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 2
# 57 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish3::
# 60 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 3
# 61 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish4::
# 64 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 4
# 65 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish5::
# 68 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 5
# 69 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish::
# 73 "data/maps/Route20_RaceCourse/scripts.pory"
	lock
# 74 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative FinishGogoatRace
# 75 "data/maps/Route20_RaceCourse/scripts.pory"
	playse SE_PIN
# 76 "data/maps/Route20_RaceCourse/scripts.pory"
	exclamationmark 1
# 77 "data/maps/Route20_RaceCourse/scripts.pory"
	switch VAR_TEMP_1
# 78 "data/maps/Route20_RaceCourse/scripts.pory"
	case 1, Route20_RaceCourse_Finish_3
# 80 "data/maps/Route20_RaceCourse/scripts.pory"
	case 2, Route20_RaceCourse_Finish_4
# 82 "data/maps/Route20_RaceCourse/scripts.pory"
	case 3, Route20_RaceCourse_Finish_5
# 84 "data/maps/Route20_RaceCourse/scripts.pory"
	case 4, Route20_RaceCourse_Finish_6
Route20_RaceCourse_Finish_1:
# 87 "data/maps/Route20_RaceCourse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 88 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox BackFromRace
# 91 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_REWARD_EARNED
	goto_if_ge Route20_RaceCourse_Finish_7
# 120 "data/maps/Route20_RaceCourse/scripts.pory"
	goto_if_set FLAG_TEMP_C, Route20_RaceCourse_Finish_13
# 129 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_YouLost
	msgbox Race2_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RaceCourse_Finish_19
# 140 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox GiveUsASecond
# 141 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
# 142 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 143 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnBikeToGogoat
# 144 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_3:
# 79 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk4Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_4:
# 81 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk3Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_5:
# 83 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk2Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_6:
# 85 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk1Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_7:
# 92 "data/maps/Route20_RaceCourse/scripts.pory"
	goto_if_set FLAG_TEMP_D, Route20_RaceCourse_Finish_10
# 100 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_FailedToImprove
	msgbox Race2_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RaceCourse_Finish_16
# 110 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox LetsGetGogoatRacing2
# 111 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 112 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnBikeToGogoat
# 113 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_10:
# 93 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_YouWonAgain
# 94 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 95 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 96 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 97 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_13:
# 121 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
# 122 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_YouWon
# 123 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 124 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 125 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 126 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_16:
# 102 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_LetsGetYouOff
# 103 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 104 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 105 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
# 106 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	end

Route20_RaceCourse_Finish_19:
# 131 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_LetsGetYouOff
# 132 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
	goto_if_eq Route20_RaceCourse_Finish_23
Route20_RaceCourse_Finish_22:
# 133 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 134 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 135 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
# 136 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	end

Route20_RaceCourse_Finish_23:
# 132 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_FAILED
	goto Route20_RaceCourse_Finish_22


Route20_RaceCourse_Flag::
# 177 "data/maps/Route20_RaceCourse/scripts.pory"
	removeobject 2
# 178 "data/maps/Route20_RaceCourse/scripts.pory"
	playse SE_SUCCESS
# 179 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	return


ReadyToRace::
# 40 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "wip$"

ForfeitRace::
# 43 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "wip$"

GetSetReadyGo::
# 46 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Ready…{PAUSE 60} Set…{PAUSE 60}\n"
	.string "GO!!{PAUSE 60}$"

BackFromRace::
# 150 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Back with the flag I see.\p"
	.string "Let's see how fast you raced\n"
	.string "through the course…$"

Race2_YouWon::
# 155 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "{STR_VAR_3}?!\n"
	.string "That's a new record!\p"
	.string "wip$"

Race2_YouLost::
# 160 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "{STR_VAR_1}{STR_VAR_2}{STR_VAR_3}.\n"
	.string "I'm sorry, but that's not good enough\l"
	.string "to beat the record.\p"
	.string "Would you like to try again?"
	.string "wip$"

GiveUsASecond::
# 167 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Sure thing. Give us a second so we\n"
	.string "can get the flag back to its place.$"

TakingYouBack::
# 171 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Understood. Follow me and\n"
	.string "we'll get back to the farm.$"

Race2_YouWonAgain::
# 182 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "wip$"

Race2_FailedToImprove::
# 185 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "wip$"

Race2_TryAgain::
# 188 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "wip$"

Race2_LetsGetYouOff::
# 191 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "wip$"
