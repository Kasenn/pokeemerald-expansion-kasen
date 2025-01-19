SnowyRidge_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SnowyRidge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SnowyRidge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_LANDMARK_SNOWY_RIDGE
	setescapewarp MAP_SNOWY_RIDGE, 28, 61
	return

SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

SnowyRidge_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	removeobject VAR_LAST_TALKED
	return


SnowyRidge_Virizion::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VIRIZION, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_VIRIZION, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SnowyRidge_Virizion_2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SnowyRidge_Virizion_5
SnowyRidge_Virizion_4:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SnowyRidge_Virizion_8
SnowyRidge_Virizion_7:
	setflag FLAG_DEFEATED_VIRIZION
	release
	end

SnowyRidge_Virizion_2:
	setflag FLAG_DEFEATED_VIRIZION
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

SnowyRidge_Virizion_5:
	setvar VAR_0x8004, SPECIES_VIRIZION
	goto Common_EventScript_LegendaryRanAway
	goto SnowyRidge_Virizion_4

SnowyRidge_Virizion_8:
	setvar VAR_0x8004, SPECIES_VIRIZION
	goto Common_EventScript_LegendaryRanAway
	goto SnowyRidge_Virizion_7

