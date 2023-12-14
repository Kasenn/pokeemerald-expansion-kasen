PlayerHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Player2F_HideMom
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse2F_Start
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 0, PlayerHouse2F_MomTalk
	.2byte 0


Player2F_HideMom::
	hideobjectat 1, MAP_PLAYER_HOUSE2F
	return


PlayerHouse2F_Start::
	goto_if_set PEARLWOOD_MOM_TALKED_TO, PlayerHouse2F_Start_1
	setvar VAR_PEARLWOOD_TOWN_STATE, 0
	setflag FLAG_UNUSED_LOSTTOBROTHER
	hideobjectat 1, MAP_PLAYER_HOUSE2F
	setrespawn HEAL_LOCATION_PLAYER_HOUSE2F
	return

PlayerHouse2F_Start_1:
	end


PlayerHouse2F_MomTalk::
	goto_if_set PEARLWOOD_MOM_TALKED_TO, PlayerHouse2F_MomTalk_1
	lock
	clearflag PEARLWOOD_MOM_TALKED_TO
	delay 120
	setobjectxy 1, 7, 1
	showobjectat 1, MAP_PLAYER_HOUSE2F
	delay 60
	applymovement 1, Player2FMomWalk
	waitmovement 0
	msgbox Player2FMomIntro
	waitmessage
	delay 30
	closemessage
	applymovement 1, Player2FMomWalk2
	waitmovement 0
	hideobjectat 1, MAP_PLAYER_HOUSE2F
	applymovement 1, Player2FMomWalk2
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, OutOfBed
	waitmovement 0
	setflag PEARLWOOD_MOM_TALKED_TO
	setvar VAR_PEARLWOOD_TOWN_STATE, 1
	releaseall
	return

PlayerHouse2F_MomTalk_1:
	end


PlayerHouse2F_ClockReminder::
	lockall
	msgbox PlayerHouse2F_ClockReminder_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, ClockStop
	waitmovement 0
	releaseall
	return


ClockStop:
	walk_left
	step_end

Player2FMomWalk:
	walk_down
	face_left
	step_end

Player2FMomWalk2:
	walk_up
	step_end

OutOfBed:
	walk_right
	step_end

Player2FSetClock::
	goto_if_set FLAG_SET_WALL_CLOCK, Players2FCheckClock
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	call Player2FSetWallClock
	delay 30
	setvar VAR_PEARLWOOD_TOWN_STATE, 2
	setflag FLAG_SET_WALL_CLOCK
	releaseall
	end


Players2FCheckClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end


Player2FSetWallClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	return


waitsdas::
	return


PlayerHouse2F_ClockReminder_Text_0:
	.string "Better set the clock before\nheading downstairs.$"

Player2FMomIntro::
	.string "Mom: Rise and shine,\n{PLAYER}!\pToday's a very special day so\nwhen you're ready, come on\ldownstairs.\pOh but first, don't forget to\nset your new clock!$"
