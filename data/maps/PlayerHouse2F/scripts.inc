PlayerHouse2F_MapScripts::
# 2 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/PlayerHouse2F/scripts.pory"
	setmaplayoutindex LAYOUT_PLAYER_HOUSE2F_MAY
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_TEMP_1
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 12 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_RECEIVED_CAPSULE
# 13 "data/maps/PlayerHouse2F/scripts.pory"
	clearflag FLAG_DAD_GIFT
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 11 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CAPSULE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 10 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_HIDE_PLAYERS_HOUSE_DAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/PlayerHouse2F/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO, PlayerHouse2F_Intro
	.2byte 0


PlayerHouse2F_Intro::
# 24 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 25 "data/maps/PlayerHouse2F/scripts.pory"
	setobjectxy 1, 7, 1
# 26 "data/maps/PlayerHouse2F/scripts.pory"
	showobjectat 1, MAP_PLAYER_HOUSE2F
# 27 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 28 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement 1, Walk1Down
# 29 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/PlayerHouse2F/scripts.pory"
	turnobject 1, DIR_WEST
# 31 "data/maps/PlayerHouse2F/scripts.pory"
	delay 10
# 32 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Intro_Text
# 33 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 34 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 35 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement 1, Walk1Up
# 36 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/PlayerHouse2F/scripts.pory"
	removeobject 1
# 38 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 39 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 40 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
# 42 "data/maps/PlayerHouse2F/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE2F
# 43 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse2F_ClockReminder::
# 56 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 57 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_ClockReminder_Text
# 58 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 59 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
# 60 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


Player2FSetClock::
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Player2FSetClock_2
# 73 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, FEMALE
Player2FSetClock_1:
# 75 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_SYS_CLOCK_SET, Player2FSetClock_6
Player2FSetClock_5:
# 78 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 79 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/PlayerHouse2F/scripts.pory"
	special StartWallClock
# 81 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 82 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return

Player2FSetClock_2:
# 70 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, MALE
	goto Player2FSetClock_1

Player2FSetClock_6:
# 76 "data/maps/PlayerHouse2F/scripts.pory"
	goto Player2FCheckClock
	goto Player2FSetClock_5


Player2FCheckClock::
# 86 "data/maps/PlayerHouse2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 87 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/PlayerHouse2F/scripts.pory"
	special Special_ViewWallClock
# 89 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 90 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse_ItemCapsule::
# 94 "data/maps/PlayerHouse2F/scripts.pory"
	finditem ITEM_ABILITY_CAPSULE
# 95 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_ge PlayerHouse_ItemCapsule_1
	return

PlayerHouse_ItemCapsule_1:
# 96 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	return


PlayerHouse2F_Intro_Text::
# 45 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Mom: Rise and shine,\n"
	.string "{PLAYER}!\p"
	.string "Today's a very special day so\n"
	.string "when you're ready, come on\l"
	.string "downstairs.\p"
	.string "Oh but first, don't forget to\n"
	.string "set your new clock!$"

PlayerHouse2F_ClockReminder_Text::
# 63 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Better set the clock before\n"
	.string "heading downstairs.$"
