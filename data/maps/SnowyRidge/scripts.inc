SnowyRidge_MapScripts::
# 2 "data/maps/SnowyRidge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowyRidge_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SnowyRidge/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SnowyRidge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SnowyRidge/scripts.pory"
	setflag FLAG_LANDMARK_SNOWY_RIDGE
# 4 "data/maps/SnowyRidge/scripts.pory"
	setescapewarp MAP_SNOWY_RIDGE, 28, 61
	return

SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME:
# 7 "data/maps/SnowyRidge/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/SnowyRidge/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 9 "data/maps/SnowyRidge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 10 "data/maps/SnowyRidge/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


SnowyRidge_Virizion::
# 17 "data/maps/SnowyRidge/scripts.pory"
	lock
# 18 "data/maps/SnowyRidge/scripts.pory"
	faceplayer
# 19 "data/maps/SnowyRidge/scripts.pory"
	waitse
# 20 "data/maps/SnowyRidge/scripts.pory"
	playmoncry SPECIES_VIRIZION, CRY_MODE_ENCOUNTER
# 21 "data/maps/SnowyRidge/scripts.pory"
	delay 40
# 22 "data/maps/SnowyRidge/scripts.pory"
	waitmoncry
# 23 "data/maps/SnowyRidge/scripts.pory"
	setwildbattle SPECIES_VIRIZION, 50
# 24 "data/maps/SnowyRidge/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 25 "data/maps/SnowyRidge/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 26 "data/maps/SnowyRidge/scripts.pory"
	waitstate
# 27 "data/maps/SnowyRidge/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/SnowyRidge/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/SnowyRidge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SnowyRidge_Virizion_2
# 37 "data/maps/SnowyRidge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SnowyRidge_Virizion_5
SnowyRidge_Virizion_4:
# 41 "data/maps/SnowyRidge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SnowyRidge_Virizion_8
SnowyRidge_Virizion_7:
# 45 "data/maps/SnowyRidge/scripts.pory"
	setflag FLAG_DEFEATED_VIRIZION
# 46 "data/maps/SnowyRidge/scripts.pory"
	release
	end

SnowyRidge_Virizion_2:
# 30 "data/maps/SnowyRidge/scripts.pory"
	setflag FLAG_DEFEATED_VIRIZION
# 31 "data/maps/SnowyRidge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 32 "data/maps/SnowyRidge/scripts.pory"
	removeobject VAR_LAST_TALKED
# 33 "data/maps/SnowyRidge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 34 "data/maps/SnowyRidge/scripts.pory"
	release
	end

SnowyRidge_Virizion_5:
# 38 "data/maps/SnowyRidge/scripts.pory"
	setvar VAR_0x8004, SPECIES_VIRIZION
# 39 "data/maps/SnowyRidge/scripts.pory"
	goto Common_EventScript_LegendaryRanAway
	goto SnowyRidge_Virizion_4

SnowyRidge_Virizion_8:
# 42 "data/maps/SnowyRidge/scripts.pory"
	setvar VAR_0x8004, SPECIES_VIRIZION
# 43 "data/maps/SnowyRidge/scripts.pory"
	goto Common_EventScript_LegendaryRanAway
	goto SnowyRidge_Virizion_7

