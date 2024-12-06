WindplumeMountain_Peak_MapScripts::
# 2 "data/maps/WindplumeMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME
# 12 "data/maps/WindplumeMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/WindplumeMountain_Peak/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/WindplumeMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 5 "data/maps/WindplumeMountain_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 6 "data/maps/WindplumeMountain_Peak/scripts.pory"
	removeobject VAR_LAST_TALKED
# 7 "data/maps/WindplumeMountain_Peak/scripts.pory"
	clearflag FLAG_WINDPLUME_MT_HIDE_CHARGED_ORB
# 8 "data/maps/WindplumeMountain_Peak/scripts.pory"
	addobject 2
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/WindplumeMountain_Peak/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ZAPDOS, WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 17 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setobjectxyperm 2, 18, 12
	return

WindplumeMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/WindplumeMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
	return


Windplume_Zapdos::
# 23 "data/maps/WindplumeMountain_Peak/scripts.pory"
	lock
# 24 "data/maps/WindplumeMountain_Peak/scripts.pory"
	faceplayer
# 25 "data/maps/WindplumeMountain_Peak/scripts.pory"
	waitse
# 26 "data/maps/WindplumeMountain_Peak/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 27 "data/maps/WindplumeMountain_Peak/scripts.pory"
	delay 40
# 28 "data/maps/WindplumeMountain_Peak/scripts.pory"
	waitmoncry
# 29 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50
# 30 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 31 "data/maps/WindplumeMountain_Peak/scripts.pory"
	special StartRegiBattle
# 32 "data/maps/WindplumeMountain_Peak/scripts.pory"
	waitstate
# 33 "data/maps/WindplumeMountain_Peak/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 34 "data/maps/WindplumeMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/WindplumeMountain_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Windplume_Zapdos_2
# 45 "data/maps/WindplumeMountain_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Windplume_Zapdos_5
Windplume_Zapdos_4:
# 49 "data/maps/WindplumeMountain_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Windplume_Zapdos_8
Windplume_Zapdos_7:
# 53 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setflag FLAG_DEFEATED_ZAPDOS
# 54 "data/maps/WindplumeMountain_Peak/scripts.pory"
	release
	end

Windplume_Zapdos_2:
# 36 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setflag FLAG_DEFEATED_ZAPDOS
# 37 "data/maps/WindplumeMountain_Peak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 38 "data/maps/WindplumeMountain_Peak/scripts.pory"
	removeobject VAR_LAST_TALKED
# 39 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setobjectxy 2, 18, 12
# 40 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setobjectxyperm 2, 18, 12
# 41 "data/maps/WindplumeMountain_Peak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 42 "data/maps/WindplumeMountain_Peak/scripts.pory"
	release
	end

Windplume_Zapdos_5:
# 46 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 47 "data/maps/WindplumeMountain_Peak/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto Windplume_Zapdos_4

Windplume_Zapdos_8:
# 50 "data/maps/WindplumeMountain_Peak/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 51 "data/maps/WindplumeMountain_Peak/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto Windplume_Zapdos_7

