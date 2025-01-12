Route12_SideArea_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_TRANSITION, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	removeobject VAR_LAST_TALKED
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_LANDMARK_HIDDEN_CLEARING
	setflag FLAG_HIDE_COBALION
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_A
	goto_if_unset FLAG_DEFEATED_COBALION, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	clearflag FLAG_HIDE_COBALION
	return


StrengthWoman::
	goto_if_set FLAG_RECEIVED_HM_STRENGTH, StrengthWoman_2
	lock
	faceplayer
	msgbox R12FoundMyHideout, MSGBOX_DEFAULT
	giveitem ITEM_HM_STRENGTH
	setflag FLAG_RECEIVED_HM_STRENGTH
	waitfanfare
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end

StrengthWoman_2:
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end


Route12_SideArea_Cobalion::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_COBALION, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_COBALION, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route12_SideArea_Cobalion_2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route12_SideArea_Cobalion_5
Route12_SideArea_Cobalion_4:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route12_SideArea_Cobalion_8
Route12_SideArea_Cobalion_7:
	setflag FLAG_DEFEATED_COBALION
	release
	end

Route12_SideArea_Cobalion_2:
	setflag FLAG_DEFEATED_COBALION
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Route12_SideArea_Cobalion_5:
	setvar VAR_0x8004, SPECIES_COBALION
	goto Common_EventScript_LegendaryRanAway
	goto Route12_SideArea_Cobalion_4

Route12_SideArea_Cobalion_8:
	setvar VAR_0x8004, SPECIES_COBALION
	goto Common_EventScript_LegendaryRanAway
	goto Route12_SideArea_Cobalion_7


R12FoundMyHideout::
	.string "I see you've managed to reach my small\n"
	.string "getaway.\p"
	.string "That must mean you're strong,\n"
	.string "but are you strong enough for this?$"

Need4BadgesFirst::
	.string "That Hidden Machine contains the move\n"
	.string "Strength.\p"
	.string "Strength packs a real punch, but be\n"
	.string "careful, as it will also leave your\l"
	.string "Pokémon weak to counter-attacks.\p"
	.string "It also lets you push certain boulders\n"
	.string "out of your way, but in order to use it,\l"
	.string "you must first obtain the badge from\l"
	.string "Sandstone City Pokémon Gym.$"
