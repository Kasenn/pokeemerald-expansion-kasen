Route19_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route19_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_LOAD, Route19_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route19_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route19_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Route19_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route19_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

Route19_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	removeobject VAR_LAST_TALKED
	setmetatile 81, 3, 0x170, FALSE
	setmetatile 82, 3, 0x170, FALSE
	setmetatile 83, 3, 0x170, FALSE
	setmetatile 81, 4, 0x170, FALSE
	setmetatile 82, 4, 0x170, FALSE
	setmetatile 83, 4, 0x170, FALSE
	setmetatile 81, 5, 0x170, FALSE
	setmetatile 82, 5, 0x170, FALSE
	setmetatile 83, 5, 0x170, FALSE
	return

Route19_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_ROUTE19_BERGMITE, Route19_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route19_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 81, 3, 0x170, FALSE
	setmetatile 82, 3, 0x170, FALSE
	setmetatile 83, 3, 0x170, FALSE
	setmetatile 81, 4, 0x170, FALSE
	setmetatile 82, 4, 0x170, FALSE
	setmetatile 83, 4, 0x170, FALSE
	setmetatile 81, 5, 0x170, FALSE
	setmetatile 82, 5, 0x170, FALSE
	setmetatile 83, 5, 0x170, FALSE
	return


Route19_Tr1_SwimmerF::
	trainerbattle_single TRAINER_R19_TR1_SWIMMER_F, R19Tr1_Intro, R19Tr1_Lose
	msgbox R19Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr2_SwimmerM::
	trainerbattle_single TRAINER_R19_TR2_SWIMMER_M, R19Tr2_Intro, R19Tr2_Lose
	msgbox R19Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr3_SwimmerM::
	trainerbattle_single TRAINER_R19_TR3_SWIMMER_M, R19Tr3_Intro, R19Tr3_Lose
	msgbox R19Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleM::
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleM_Intro, Route19_Tr4_SwimmerCoupleM_Defeat, Route19_Tr4_SwimmerCoupleM_NotEnoughMons
	msgbox Route19_Tr4_SwimmerCoupleM_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleF::
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleF_Intro, Route19_Tr4_SwimmerCoupleF_Defeat, Route19_Tr4_SwimmerCoupleF_NotEnoughMons
	msgbox Route19_Tr4_SwimmerCoupleF_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr5_SwimmerF::
	trainerbattle_single TRAINER_R19_TR5_SWIMMER_F, R19Tr5_Intro, R19Tr5_Lose
	msgbox R19Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr6_SwimmerM::
	trainerbattle_single TRAINER_R19_TR6_SWIMMER_M, R19Tr6_Intro, R19Tr6_Lose
	msgbox R19Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr7_BlackBelt::
	trainerbattle_single TRAINER_R19_TR7_BLACKBELT, R19Tr7_Intro, R19Tr7_Lose
	msgbox R19Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr8_Hiker::
	trainerbattle_single TRAINER_R19_TR8_HIKER, R19Tr8_Intro, R19Tr8_Lose
	msgbox R19Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr9_Picnicker::
	trainerbattle_single TRAINER_R19_TR9_PICNICKER, R19Tr9_Intro, R19Tr9_Lose
	msgbox R19Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr10_SwimmerM::
	trainerbattle_single TRAINER_R19_TR10_SWIMMER_M, R19Tr10_Intro, R19Tr10_Lose
	msgbox R19Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Bergmite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BERGMITE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_BERGMITE, 35
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route19_Bergmite_2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route19_Bergmite_5
Route19_Bergmite_4:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route19_Bergmite_8
Route19_Bergmite_7:
	setflag FLAG_ROUTE19_BERGMITE
	release
	end

Route19_Bergmite_2:
	setflag FLAG_ROUTE19_BERGMITE
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setmetatile 81, 3, 0x170, FALSE
	setmetatile 82, 3, 0x170, FALSE
	setmetatile 83, 3, 0x170, FALSE
	setmetatile 81, 4, 0x170, FALSE
	setmetatile 82, 4, 0x170, FALSE
	setmetatile 83, 4, 0x170, FALSE
	setmetatile 81, 5, 0x170, FALSE
	setmetatile 82, 5, 0x170, FALSE
	setmetatile 83, 5, 0x170, FALSE
	special DrawWholeMapView
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Route19_Bergmite_5:
	setvar VAR_0x8004, SPECIES_BERGMITE
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setmetatile 81, 3, 0x170, FALSE
	setmetatile 82, 3, 0x170, FALSE
	setmetatile 83, 3, 0x170, FALSE
	setmetatile 81, 4, 0x170, FALSE
	setmetatile 82, 4, 0x170, FALSE
	setmetatile 83, 4, 0x170, FALSE
	setmetatile 81, 5, 0x170, FALSE
	setmetatile 82, 5, 0x170, FALSE
	setmetatile 83, 5, 0x170, FALSE
	special DrawWholeMapView
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_4

Route19_Bergmite_8:
	setvar VAR_0x8004, SPECIES_BERGMITE
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setmetatile 81, 3, 0x170, FALSE
	setmetatile 82, 3, 0x170, FALSE
	setmetatile 83, 3, 0x170, FALSE
	setmetatile 81, 4, 0x170, FALSE
	setmetatile 82, 4, 0x170, FALSE
	setmetatile 83, 4, 0x170, FALSE
	setmetatile 81, 5, 0x170, FALSE
	setmetatile 82, 5, 0x170, FALSE
	setmetatile 83, 5, 0x170, FALSE
	special DrawWholeMapView
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_7


R19Tr1_Intro::
	.string "$"

R19Tr1_Lose::
	.string "$"

R19Tr1_PostBattle::
	.string "$"

R19Tr2_Intro::
	.string "$"

R19Tr2_Lose::
	.string "$"

R19Tr2_PostBattle::
	.string "$"

R19Tr3_Intro::
	.string "$"

R19Tr3_Lose::
	.string "$"

R19Tr3_PostBattle::
	.string "$"

Route19_Tr4_SwimmerCoupleM_Intro::
	.string "$"

Route19_Tr4_SwimmerCoupleM_Defeat::
	.string "$"

Route19_Tr4_SwimmerCoupleM_NotEnoughMons::
	.string "$"

Route19_Tr4_SwimmerCoupleM_PostBattle::
	.string "$"

Route19_Tr4_SwimmerCoupleF_Intro::
	.string "$"

Route19_Tr4_SwimmerCoupleF_Defeat::
	.string "$"

Route19_Tr4_SwimmerCoupleF_NotEnoughMons::
	.string "$"

Route19_Tr4_SwimmerCoupleF_PostBattle::
	.string "$"

R19Tr5_Intro::
	.string "$"

R19Tr5_Lose::
	.string "$"

R19Tr5_PostBattle::
	.string "$"

R19Tr6_Intro::
	.string "$"

R19Tr6_Lose::
	.string "$"

R19Tr6_PostBattle::
	.string "$"

R19Tr7_Intro::
	.string "$"

R19Tr7_Lose::
	.string "$"

R19Tr7_PostBattle::
	.string "$"

R19Tr8_Intro::
	.string "$"

R19Tr8_Lose::
	.string "$"

R19Tr8_PostBattle::
	.string "$"

R19Tr9_Intro::
	.string "$"

R19Tr9_Lose::
	.string "$"

R19Tr9_PostBattle::
	.string "$"

R19Tr10_Intro::
	.string "$"

R19Tr10_Lose::
	.string "$"

R19Tr10_PostBattle::
	.string "$"
