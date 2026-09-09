ProfsGladeInterior_MapScripts::
# 10 "data/maps/ProfsGladeInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/ProfsGladeInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/ProfsGladeInterior/scripts.pory"
	clearflag FLAG_IN_HIDDEN_FOREST
# 12 "data/maps/ProfsGladeInterior/scripts.pory"
	random 250
# 13 "data/maps/ProfsGladeInterior/scripts.pory"
	copyvar VAR_HIDDEN_FOREST_STEPS, VAR_RESULT
# 14 "data/maps/ProfsGladeInterior/scripts.pory"
	addvar VAR_HIDDEN_FOREST_STEPS, 100
# 15 "data/maps/ProfsGladeInterior/scripts.pory"
	callnative GetRandomGrassTileForStarterEncounter
# 16 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_TEMP_1
# 17 "data/maps/ProfsGladeInterior/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_0, VAR_TEMP_2
# 18 "data/maps/ProfsGladeInterior/scripts.pory"
	addvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_MON
# 19 "data/maps/ProfsGladeInterior/scripts.pory"
	goto_if_set FLAG_HIDDEN_FOREST_STARTERS_UNLOCKED, ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_IN_HIDDEN_FOREST
# 21 "data/maps/ProfsGladeInterior/scripts.pory"
	addvar VAR_HIDDEN_FOREST_STEPS, 150
	return

ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_RESUME:
# 25 "data/maps/ProfsGladeInterior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 26 "data/maps/ProfsGladeInterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/ProfsGladeInterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

ProfsGladeInterior_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 28 "data/maps/ProfsGladeInterior/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


HiddenForestTriggerStarterSpawn::
# 35 "data/maps/ProfsGladeInterior/scripts.pory"
	callnative IsStarterWithinViewOfPlayer
# 36 "data/maps/ProfsGladeInterior/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiddenForestTriggerStarterSpawn_2
# 42 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_HIDDEN_FOREST_STARTERS_UNLOCKED
# 43 "data/maps/ProfsGladeInterior/scripts.pory"
	playmoncry VAR_TEMP_2, CRY_MODE_NORMAL
# 44 "data/maps/ProfsGladeInterior/scripts.pory"
	exclamationmark LOCALID_PLAYER
# 45 "data/maps/ProfsGladeInterior/scripts.pory"
	waitmoncry
# 46 "data/maps/ProfsGladeInterior/scripts.pory"
	clearflag FLAG_TEMP_1
# 47 "data/maps/ProfsGladeInterior/scripts.pory"
	msgbox HiddenForestTriggerStarterSpawn_Text_0
# 48 "data/maps/ProfsGladeInterior/scripts.pory"
	release
	return

HiddenForestTriggerStarterSpawn_2:
# 38 "data/maps/ProfsGladeInterior/scripts.pory"
	setvar VAR_HIDDEN_FOREST_STEPS, 700
# 39 "data/maps/ProfsGladeInterior/scripts.pory"
	release
	end


HiddenForestHiker::
# 52 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_IN_HIDDEN_FOREST
# 53 "data/maps/ProfsGladeInterior/scripts.pory"
	msgbox HiddenForestHiker_Text, MSGBOX_NPC
	return


HiddenForest_SetStarter::
# 65 "data/maps/ProfsGladeInterior/scripts.pory"
	random 150
# 66 "data/maps/ProfsGladeInterior/scripts.pory"
	copyvar VAR_HIDDEN_FOREST_STEPS, VAR_RESULT
# 67 "data/maps/ProfsGladeInterior/scripts.pory"
	addvar VAR_HIDDEN_FOREST_STEPS, 350
# 68 "data/maps/ProfsGladeInterior/scripts.pory"
	callnative GetRandomGrassTileForStarterEncounter
# 69 "data/maps/ProfsGladeInterior/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_0, VAR_TEMP_2
# 70 "data/maps/ProfsGladeInterior/scripts.pory"
	addvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_MON
	return


HiddenForestStarterEncounter::
# 74 "data/maps/ProfsGladeInterior/scripts.pory"
	lock
# 75 "data/maps/ProfsGladeInterior/scripts.pory"
	faceplayer
# 76 "data/maps/ProfsGladeInterior/scripts.pory"
	waitse
# 77 "data/maps/ProfsGladeInterior/scripts.pory"
	playmoncry VAR_TEMP_2, CRY_MODE_ENCOUNTER
# 78 "data/maps/ProfsGladeInterior/scripts.pory"
	delay 40
# 79 "data/maps/ProfsGladeInterior/scripts.pory"
	waitmoncry
# 80 "data/maps/ProfsGladeInterior/scripts.pory"
	random 4
# 81 "data/maps/ProfsGladeInterior/scripts.pory"
	addvar VAR_RESULT, 2
# 82 "data/maps/ProfsGladeInterior/scripts.pory"
	createmon 1, 0, VAR_TEMP_2, VAR_RESULT
# 83 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 84 "data/maps/ProfsGladeInterior/scripts.pory"
	doscriptedbattle
# 85 "data/maps/ProfsGladeInterior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/ProfsGladeInterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 87 "data/maps/ProfsGladeInterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HiddenForestStarterEncounter_2
# 95 "data/maps/ProfsGladeInterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq HiddenForestStarterEncounter_5
# 95 "data/maps/ProfsGladeInterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq HiddenForestStarterEncounter_5
HiddenForestStarterEncounter_4:
# 103 "data/maps/ProfsGladeInterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq HiddenForestStarterEncounter_10
HiddenForestStarterEncounter_9:
# 113 "data/maps/ProfsGladeInterior/scripts.pory"
	call HiddenForest_SetStarter
# 114 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_TEMP_1
# 115 "data/maps/ProfsGladeInterior/scripts.pory"
	release
	end

HiddenForestStarterEncounter_2:
# 88 "data/maps/ProfsGladeInterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 89 "data/maps/ProfsGladeInterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 90 "data/maps/ProfsGladeInterior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data/maps/ProfsGladeInterior/scripts.pory"
	call HiddenForest_SetStarter
# 92 "data/maps/ProfsGladeInterior/scripts.pory"
	release
	end

HiddenForestStarterEncounter_5:
# 96 "data/maps/ProfsGladeInterior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_2
# 97 "data/maps/ProfsGladeInterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 98 "data/maps/ProfsGladeInterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 99 "data/maps/ProfsGladeInterior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 100 "data/maps/ProfsGladeInterior/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 101 "data/maps/ProfsGladeInterior/scripts.pory"
	msgbox gText_LegendaryRanAway
	goto HiddenForestStarterEncounter_4

HiddenForestStarterEncounter_10:
# 104 "data/maps/ProfsGladeInterior/scripts.pory"
	switch VAR_TEMP_2
# 105 "data/maps/ProfsGladeInterior/scripts.pory"
	case SPECIES_ROWLET, HiddenForestStarterEncounter_13
# 107 "data/maps/ProfsGladeInterior/scripts.pory"
	case SPECIES_TORCHIC, HiddenForestStarterEncounter_14
# 109 "data/maps/ProfsGladeInterior/scripts.pory"
	case SPECIES_PIPLUP, HiddenForestStarterEncounter_15
	goto HiddenForestStarterEncounter_9

HiddenForestStarterEncounter_13:
# 106 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_CAUGHT_ROWLET
	goto HiddenForestStarterEncounter_9

HiddenForestStarterEncounter_14:
# 108 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_CAUGHT_TORCHIC
	goto HiddenForestStarterEncounter_9

HiddenForestStarterEncounter_15:
# 110 "data/maps/ProfsGladeInterior/scripts.pory"
	setflag FLAG_CAUGHT_PIPLUP
	goto HiddenForestStarterEncounter_9


HiddenForestTriggerStarterSpawn_Text_0:
# 47 "data/maps/ProfsGladeInterior/scripts.pory"
	.string "The sound of a rare Pokémon can be\nheard echoing in the distance.$"

HiddenForestHiker_Text::
# 55 "data/maps/ProfsGladeInterior/scripts.pory"
	.string "Sometimes when I'm walking around\n"
	.string "I think I can hear the sound of\l"
	.string "a rare Pokémon nearby.\p"
	.string "So far though, all the Pokémon I've\n"
	.string "managed to find have been nothing to\l"
	.string "write home about.$"
