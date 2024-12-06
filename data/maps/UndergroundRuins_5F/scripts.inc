UndergroundRuins_5F_MapScripts::
# 2 "data/maps/UndergroundRuins_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/UndergroundRuins_5F/scripts.pory"
	goto_if_set FLAG_HIDE_RUINS_TYRANITAR, UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxyperm 3, 38, 18
	return


Ttar_Trigger1::
# 10 "data/maps/UndergroundRuins_5F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 11 "data/maps/UndergroundRuins_5F/scripts.pory"
	goto Ttar_MainEvent
	return


Ttar_Trigger2::
# 14 "data/maps/UndergroundRuins_5F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 15 "data/maps/UndergroundRuins_5F/scripts.pory"
	goto Ttar_MainEvent
	return


Ttar_Trigger3::
# 18 "data/maps/UndergroundRuins_5F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 19 "data/maps/UndergroundRuins_5F/scripts.pory"
	goto Ttar_MainEvent
	return


Ttar_MainEvent::
# 23 "data/maps/UndergroundRuins_5F/scripts.pory"
	delay 30
# 24 "data/maps/UndergroundRuins_5F/scripts.pory"
	switch VAR_TEMP_1
# 25 "data/maps/UndergroundRuins_5F/scripts.pory"
	case 1, Ttar_MainEvent_3
# 27 "data/maps/UndergroundRuins_5F/scripts.pory"
	case 3, Ttar_MainEvent_4
Ttar_MainEvent_1:
# 30 "data/maps/UndergroundRuins_5F/scripts.pory"
	playse SE_FALL
# 31 "data/maps/UndergroundRuins_5F/scripts.pory"
	safefollow
# 32 "data/maps/UndergroundRuins_5F/scripts.pory"
	applymovement 1, Ttar_MainEvent_Movement_0
# 37 "data/maps/UndergroundRuins_5F/scripts.pory"
	waitmovement 0
# 38 "data/maps/UndergroundRuins_5F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 39 "data/maps/UndergroundRuins_5F/scripts.pory"
	setvar VAR_0x8004, 2
# 40 "data/maps/UndergroundRuins_5F/scripts.pory"
	setvar VAR_0x8005, 2
# 41 "data/maps/UndergroundRuins_5F/scripts.pory"
	setvar VAR_0x8006, 30
# 42 "data/maps/UndergroundRuins_5F/scripts.pory"
	setvar VAR_0x8007, 3
# 43 "data/maps/UndergroundRuins_5F/scripts.pory"
	special ShakeCamera
# 44 "data/maps/UndergroundRuins_5F/scripts.pory"
	waitstate
# 45 "data/maps/UndergroundRuins_5F/scripts.pory"
	waitse
# 46 "data/maps/UndergroundRuins_5F/scripts.pory"
	delay 30
# 47 "data/maps/UndergroundRuins_5F/scripts.pory"
	playmoncry SPECIES_TYRANITAR, CRY_MODE_ENCOUNTER
# 48 "data/maps/UndergroundRuins_5F/scripts.pory"
	waitmoncry
# 49 "data/maps/UndergroundRuins_5F/scripts.pory"
	setwildbattle SPECIES_TYRANITAR, 55
# 50 "data/maps/UndergroundRuins_5F/scripts.pory"
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
# 51 "data/maps/UndergroundRuins_5F/scripts.pory"
	dowildbattlenorunning
# 52 "data/maps/UndergroundRuins_5F/scripts.pory"
	waitstate
# 53 "data/maps/UndergroundRuins_5F/scripts.pory"
	clearflag FLAG_SYSTEM_NO_WILD_RUNNING
# 54 "data/maps/UndergroundRuins_5F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/UndergroundRuins_5F/scripts.pory"
	removeobject 1
# 56 "data/maps/UndergroundRuins_5F/scripts.pory"
	switch VAR_TEMP_1
# 57 "data/maps/UndergroundRuins_5F/scripts.pory"
	case 1, Ttar_MainEvent_7
# 60 "data/maps/UndergroundRuins_5F/scripts.pory"
	case 2, Ttar_MainEvent_8
# 63 "data/maps/UndergroundRuins_5F/scripts.pory"
	case 3, Ttar_MainEvent_9
Ttar_MainEvent_5:
# 67 "data/maps/UndergroundRuins_5F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/UndergroundRuins_5F/scripts.pory"
	release
	end

Ttar_MainEvent_3:
# 26 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxy 1, 37, 12
	goto Ttar_MainEvent_1

Ttar_MainEvent_4:
# 28 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxy 1, 39, 12
	goto Ttar_MainEvent_1

Ttar_MainEvent_7:
# 58 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxy 3, 37, 18
# 59 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxyperm 3, 37, 18
	goto Ttar_MainEvent_5

Ttar_MainEvent_8:
# 61 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxy 3, 38, 18
# 62 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxyperm 3, 38, 18
	goto Ttar_MainEvent_5

Ttar_MainEvent_9:
# 64 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxy 3, 39, 18
# 65 "data/maps/UndergroundRuins_5F/scripts.pory"
	setobjectxyperm 3, 39, 18
	goto Ttar_MainEvent_5


Ruins_OminousPresence::
# 73 "data/maps/UndergroundRuins_5F/scripts.pory"
	msgbox OverwhelmingAura
# 74 "data/maps/UndergroundRuins_5F/scripts.pory"
	closemessage
# 75 "data/maps/UndergroundRuins_5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 76 "data/maps/UndergroundRuins_5F/scripts.pory"
	waitmovement 0
# 77 "data/maps/UndergroundRuins_5F/scripts.pory"
	release
	return


# 32 "data/maps/UndergroundRuins_5F/scripts.pory"
Ttar_MainEvent_Movement_0:
# 33 "data/maps/UndergroundRuins_5F/scripts.pory"
	lock_anim
# 34 "data/maps/UndergroundRuins_5F/scripts.pory"
	delay_16
# 34 "data/maps/UndergroundRuins_5F/scripts.pory"
	delay_16
# 35 "data/maps/UndergroundRuins_5F/scripts.pory"
	walk_fast_down
# 35 "data/maps/UndergroundRuins_5F/scripts.pory"
	walk_fast_down
# 35 "data/maps/UndergroundRuins_5F/scripts.pory"
	walk_fast_down
# 35 "data/maps/UndergroundRuins_5F/scripts.pory"
	walk_fast_down
# 35 "data/maps/UndergroundRuins_5F/scripts.pory"
	walk_fast_down
# 35 "data/maps/UndergroundRuins_5F/scripts.pory"
	walk_fast_down
	step_end

OverwhelmingAura::
# 80 "data/maps/UndergroundRuins_5F/scripts.pory"
	.string "An overwhelming aura compels you\n"
	.string "to turn back…$"
