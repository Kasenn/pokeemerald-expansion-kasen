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
# 53 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 1
# 54 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish2::
# 57 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 2
# 58 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish3::
# 61 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 3
# 62 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish4::
# 65 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 4
# 66 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish5::
# 69 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_1, 5
# 70 "data/maps/Route20_RaceCourse/scripts.pory"
	goto Route20_RaceCourse_Finish
	return


Route20_RaceCourse_Finish::
# 74 "data/maps/Route20_RaceCourse/scripts.pory"
	lock
# 75 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative FinishGogoatRace
# 76 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative BufferGogoatRecordTime
# 77 "data/maps/Route20_RaceCourse/scripts.pory"
	playse SE_PIN
# 78 "data/maps/Route20_RaceCourse/scripts.pory"
	exclamationmark 1
# 79 "data/maps/Route20_RaceCourse/scripts.pory"
	switch VAR_TEMP_1
# 80 "data/maps/Route20_RaceCourse/scripts.pory"
	case 1, Route20_RaceCourse_Finish_3
# 82 "data/maps/Route20_RaceCourse/scripts.pory"
	case 2, Route20_RaceCourse_Finish_4
# 84 "data/maps/Route20_RaceCourse/scripts.pory"
	case 3, Route20_RaceCourse_Finish_5
# 86 "data/maps/Route20_RaceCourse/scripts.pory"
	case 4, Route20_RaceCourse_Finish_6
Route20_RaceCourse_Finish_1:
# 89 "data/maps/Route20_RaceCourse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 90 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox BackFromRace
# 93 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_REWARD_EARNED
	goto_if_ge Route20_RaceCourse_Finish_7
# 122 "data/maps/Route20_RaceCourse/scripts.pory"
	goto_if_set FLAG_TEMP_C, Route20_RaceCourse_Finish_13
# 131 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_YouLost
	msgbox Race2_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RaceCourse_Finish_19
# 142 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox GiveUsASecond
# 143 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
# 144 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 145 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnBikeToGogoat
# 146 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_3:
# 81 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk4Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_4:
# 83 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk3Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_5:
# 85 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk2Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_6:
# 87 "data/maps/Route20_RaceCourse/scripts.pory"
	waitmove 1, Walk1Left
	goto Route20_RaceCourse_Finish_1

Route20_RaceCourse_Finish_7:
# 94 "data/maps/Route20_RaceCourse/scripts.pory"
	goto_if_set FLAG_TEMP_D, Route20_RaceCourse_Finish_10
# 102 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_FailedToImprove
	msgbox Race2_TryAgain, MSGBOX_YESNO
# 0 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RaceCourse_Finish_16
# 112 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox LetsGetGogoatRacing2
# 113 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 114 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnBikeToGogoat
# 115 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_10:
# 95 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_YouWonAgain
# 96 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 97 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 98 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 99 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_13:
# 123 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
# 124 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_YouWon
# 125 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 126 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 127 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 128 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
	return

Route20_RaceCourse_Finish_16:
# 104 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_LetsGetYouOff
# 105 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 106 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 107 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
# 108 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	end

Route20_RaceCourse_Finish_19:
# 133 "data/maps/Route20_RaceCourse/scripts.pory"
	msgbox Race2_LetsGetYouOff
# 134 "data/maps/Route20_RaceCourse/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
	goto_if_eq Route20_RaceCourse_Finish_23
Route20_RaceCourse_Finish_22:
# 135 "data/maps/Route20_RaceCourse/scripts.pory"
	warp MAP_ROUTE20, 2
# 136 "data/maps/Route20_RaceCourse/scripts.pory"
	callnative TurnGogoatToBike
# 137 "data/maps/Route20_RaceCourse/scripts.pory"
	waitstate
# 138 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	end

Route20_RaceCourse_Finish_23:
# 134 "data/maps/Route20_RaceCourse/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_FAILED
	goto Route20_RaceCourse_Finish_22


Route20_RaceCourse_Flag::
# 179 "data/maps/Route20_RaceCourse/scripts.pory"
	removeobject 2
# 180 "data/maps/Route20_RaceCourse/scripts.pory"
	playse SE_SUCCESS
# 181 "data/maps/Route20_RaceCourse/scripts.pory"
	release
	return


ReadyToRace::
# 40 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Alright, are you ready to race?$"

ForfeitRace::
# 43 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "What's that?\n"
	.string "You'd rather forfeit?$"

GetSetReadyGo::
# 47 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Ready…{PAUSE 60} Set…{PAUSE 60}\n"
	.string "GO!!{PAUSE 60}$"

BackFromRace::
# 152 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Back with the flag I see.\p"
	.string "Let's see how fast you raced\n"
	.string "through the course…$"

Race2_YouWon::
# 157 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "{STR_VAR_3}?!\n"
	.string "That's a new record!\p"
	.string "I did promise a reward for beating\n"
	.string "the record, but first, let's get back\l"
	.string "to the farm…$"

Race2_YouLost::
# 164 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "{STR_VAR_1}{STR_VAR_2}{STR_VAR_3}.\n"
	.string "I'm sorry, but that's not good enough\l"
	.string "to beat the record.$"

GiveUsASecond::
# 169 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Sure thing. Give us a second so we\n"
	.string "can get the flag back to its place.$"

TakingYouBack::
# 173 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Understood. Follow me and\n"
	.string "we'll get back to the farm.$"

Race2_YouWonAgain::
# 184 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "{STR_VAR_3}?!\n"
	.string "You beat the record again!\l"
	.string "Now it feels like you're just\l"
	.string "showing off!\p"
	.string "Come on, let's get back to the farm.$"

Race2_FailedToImprove::
# 191 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "{STR_VAR_3}…\p"
	.string "Hmm… Looks like you failed to\n"
	.string "improve your record…$"

Race2_TryAgain::
# 196 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Would you like to give the course\n"
	.string "another try?$"

Race2_LetsGetYouOff::
# 200 "data/maps/Route20_RaceCourse/scripts.pory"
	.string "Okay then, let's head back\n"
	.string "to the farm…$"
