UndergroundRuins_5F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_HIDE_RUINS_TYRANITAR, UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

UndergroundRuins_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 3, 38, 18
	return


Ttar_Trigger1::
	setvar VAR_TEMP_1, 1
	goto Ttar_MainEvent
	return


Ttar_Trigger2::
	setvar VAR_TEMP_1, 2
	goto Ttar_MainEvent
	return


Ttar_Trigger3::
	setvar VAR_TEMP_1, 3
	goto Ttar_MainEvent
	return


Ttar_MainEvent::
	delay 30
	switch VAR_TEMP_1
	case 1, Ttar_MainEvent_3
	case 3, Ttar_MainEvent_4
Ttar_MainEvent_1:
	playse SE_FALL
	safefollow
	applymovement 1, Ttar_MainEvent_Movement_0
	waitmovement 0
	playse SE_M_EARTHQUAKE
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 30
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	waitse
	delay 30
	playmoncry SPECIES_TYRANITAR, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_TYRANITAR, 55
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
	dowildbattlenorunning
	waitstate
	clearflag FLAG_SYSTEM_NO_WILD_RUNNING
	fadescreen FADE_TO_BLACK
	removeobject 1
	switch VAR_TEMP_1
	case 1, Ttar_MainEvent_7
	case 2, Ttar_MainEvent_8
	case 3, Ttar_MainEvent_9
Ttar_MainEvent_5:
	fadescreen FADE_FROM_BLACK
	release
	end

Ttar_MainEvent_3:
	setobjectxy 1, 37, 12
	goto Ttar_MainEvent_1

Ttar_MainEvent_4:
	setobjectxy 1, 39, 12
	goto Ttar_MainEvent_1

Ttar_MainEvent_7:
	setobjectxy 3, 37, 18
	setobjectxyperm 3, 37, 18
	goto Ttar_MainEvent_5

Ttar_MainEvent_8:
	setobjectxy 3, 38, 18
	setobjectxyperm 3, 38, 18
	goto Ttar_MainEvent_5

Ttar_MainEvent_9:
	setobjectxy 3, 39, 18
	setobjectxyperm 3, 39, 18
	goto Ttar_MainEvent_5


Ruins_OminousPresence::
	msgbox OverwhelmingAura
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
	waitmovement 0
	release
	return


Ttar_MainEvent_Movement_0:
	lock_anim
	delay_16
	delay_16
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

OverwhelmingAura::
	.string "An overwhelming aura compels you\n"
	.string "to turn back…$"
