Route12_SideArea_MapScripts::
# 2 "data/maps/Route12_SideArea/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME
# 10 "data/maps/Route12_SideArea/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route12_SideArea/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Route12_SideArea/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 5 "data/maps/Route12_SideArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 6 "data/maps/Route12_SideArea/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_LANDMARK_HIDDEN_CLEARING
# 12 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_HIDE_COBALION
# 13 "data/maps/Route12_SideArea/scripts.pory"
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_TEMP_A
# 15 "data/maps/Route12_SideArea/scripts.pory"
	goto_if_unset FLAG_DEFEATED_COBALION, Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

Route12_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/Route12_SideArea/scripts.pory"
	clearflag FLAG_HIDE_COBALION
	return


StrengthWoman::
# 23 "data/maps/Route12_SideArea/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_STRENGTH, StrengthWoman_2
# 27 "data/maps/Route12_SideArea/scripts.pory"
	lock
# 28 "data/maps/Route12_SideArea/scripts.pory"
	faceplayer
# 29 "data/maps/Route12_SideArea/scripts.pory"
	msgbox R12FoundMyHideout, MSGBOX_DEFAULT
# 30 "data/maps/Route12_SideArea/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 31 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 32 "data/maps/Route12_SideArea/scripts.pory"
	waitfanfare
# 33 "data/maps/Route12_SideArea/scripts.pory"
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end

StrengthWoman_2:
# 24 "data/maps/Route12_SideArea/scripts.pory"
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end


Route12_SideArea_Cobalion::
# 57 "data/maps/Route12_SideArea/scripts.pory"
	lock
# 58 "data/maps/Route12_SideArea/scripts.pory"
	faceplayer
# 59 "data/maps/Route12_SideArea/scripts.pory"
	waitse
# 60 "data/maps/Route12_SideArea/scripts.pory"
	playmoncry SPECIES_COBALION, CRY_MODE_ENCOUNTER
# 61 "data/maps/Route12_SideArea/scripts.pory"
	delay 40
# 62 "data/maps/Route12_SideArea/scripts.pory"
	waitmoncry
# 63 "data/maps/Route12_SideArea/scripts.pory"
	setwildbattle SPECIES_COBALION, 50
# 64 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/Route12_SideArea/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 66 "data/maps/Route12_SideArea/scripts.pory"
	waitstate
# 67 "data/maps/Route12_SideArea/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 68 "data/maps/Route12_SideArea/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/Route12_SideArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route12_SideArea_Cobalion_2
# 77 "data/maps/Route12_SideArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route12_SideArea_Cobalion_5
Route12_SideArea_Cobalion_4:
# 81 "data/maps/Route12_SideArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route12_SideArea_Cobalion_8
Route12_SideArea_Cobalion_7:
# 85 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_DEFEATED_COBALION
# 86 "data/maps/Route12_SideArea/scripts.pory"
	release
	end

Route12_SideArea_Cobalion_2:
# 70 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_DEFEATED_COBALION
# 71 "data/maps/Route12_SideArea/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 72 "data/maps/Route12_SideArea/scripts.pory"
	removeobject VAR_LAST_TALKED
# 73 "data/maps/Route12_SideArea/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 74 "data/maps/Route12_SideArea/scripts.pory"
	release
	end

Route12_SideArea_Cobalion_5:
# 78 "data/maps/Route12_SideArea/scripts.pory"
	setvar VAR_0x8004, SPECIES_COBALION
# 79 "data/maps/Route12_SideArea/scripts.pory"
	goto Common_EventScript_LegendaryRanAway
	goto Route12_SideArea_Cobalion_4

Route12_SideArea_Cobalion_8:
# 82 "data/maps/Route12_SideArea/scripts.pory"
	setvar VAR_0x8004, SPECIES_COBALION
# 83 "data/maps/Route12_SideArea/scripts.pory"
	goto Common_EventScript_LegendaryRanAway
	goto Route12_SideArea_Cobalion_7


R12FoundMyHideout::
# 37 "data/maps/Route12_SideArea/scripts.pory"
	.string "I see you've managed to reach my small\n"
	.string "getaway.\p"
	.string "That must mean you're strong,\n"
	.string "but are you strong enough for this?$"

Need4BadgesFirst::
# 44 "data/maps/Route12_SideArea/scripts.pory"
	.string "That Hidden Machine contains the move\n"
	.string "Strength.\p"
	.string "Strength packs a real punch, but be\n"
	.string "careful, as it will also leave your\l"
	.string "Pokémon weak to counter-attacks.\p"
	.string "It also lets you push certain boulders\n"
	.string "out of your way, but in order to use it,\l"
	.string "you must first obtain the badge from\l"
	.string "Sandstone City Pokémon Gym.$"
