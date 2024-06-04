PlayerHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse2F_Start
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 0, PlayerHouse2F_MomTalk
	.2byte 0


PlayerHouse2F_Start::
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerHouse2F_Start_1
	return

PlayerHouse2F_Start_1:
	setmaplayoutindex LAYOUT_PLAYER_HOUSE2F_MAY
	return


PlayerHouse2F_MomTalk::
	lock
	delay 60
	setobjectxy 1, 7, 1
	showobjectat 1, MAP_PLAYER_HOUSE2F
	delay 60
	applymovement 1, Walk1Down
	waitmovement 0
	turnobject 1, DIR_WEST
	delay 10
	msgbox Player2FMomIntro
	closemessage
	delay 30
	applymovement 1, Walk1Up
	waitmovement 0
	removeobject 1
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	setflag FLAG_PEARLWOOD_MOM_TALKED_TO
	setvar VAR_PEARLWOOD_TOWN_STATE, 1
	setrespawn HEAL_LOCATION_PLAYER_HOUSE2F
	release
	return


PlayerHouse2F_ClockReminder::
	goto_if_set FLAG_SET_WALL_CLOCK, PlayerHouse2F_ClockReminder_2
	lockall
	msgbox PlayerHouse2F_ClockReminder_Text
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	release
	return

PlayerHouse2F_ClockReminder_2:
	release
	end


Player2FSetClock::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Player2FSetClock_2
	setvar VAR_0x8004, FEMALE
Player2FSetClock_1:
	goto_if_set FLAG_SET_WALL_CLOCK, Players2FCheckClock
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	delay 30
	setvar VAR_PEARLWOOD_TOWN_STATE, 1
	setflag FLAG_SET_WALL_CLOCK
	release
	return

Player2FSetClock_2:
	setvar VAR_0x8004, MALE
	goto Player2FSetClock_1


Players2FCheckClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	release
	return


PlayerHouse2F_ClockReminder_Text::
	.string "Better set the clock before\n"
	.string "heading downstairs.$"

Player2FMomIntro::
	.string "Mom: Rise and shine,\n"
	.string "{PLAYER}!\p"
	.string "Today's a very special day so\n"
	.string "when you're ready, come on\l"
	.string "downstairs.\p"
	.string "Oh but first, don't forget to\n"
	.string "set your new clock!$"
