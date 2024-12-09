WindplumeMountain_Peak_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_TRANSITION, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	removeobject VAR_LAST_TALKED
	clearflag FLAG_WINDPLUME_MT_HIDE_CHARGED_ORB
	addobject 2
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_DEFEATED_ZAPDOS, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setobjectxyperm 2, 18, 12
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_HIDE_ZAPDOS
	return


Windplume_Zapdos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ZAPDOS, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Windplume_Zapdos_2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Windplume_Zapdos_5
Windplume_Zapdos_4:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Windplume_Zapdos_8
Windplume_Zapdos_7:
	setflag FLAG_DEFEATED_ZAPDOS
	release
	end

Windplume_Zapdos_2:
	setflag FLAG_DEFEATED_ZAPDOS
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setobjectxy 2, 18, 12
	setobjectxyperm 2, 18, 12
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Windplume_Zapdos_5:
	setvar VAR_0x8004, SPECIES_ZAPDOS
	goto Common_EventScript_LegendaryFlewAway
	goto Windplume_Zapdos_4

Windplume_Zapdos_8:
	setvar VAR_0x8004, SPECIES_ZAPDOS
	goto Common_EventScript_LegendaryFlewAway
	goto Windplume_Zapdos_7

