DesertCliffs_MapScripts::
# 2 "data/maps/DesertCliffs/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME
# 10 "data/maps/DesertCliffs/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/DesertCliffs/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/DesertCliffs/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 5 "data/maps/DesertCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 6 "data/maps/DesertCliffs/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/DesertCliffs/scripts.pory"
	setescapewarp MAP_DESERT_CLIFFS, 15, 79
# 12 "data/maps/DesertCliffs/scripts.pory"
	setflag FLAG_HIDE_TERRAKION
# 13 "data/maps/DesertCliffs/scripts.pory"
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/DesertCliffs/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TERRAKION, DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 15 "data/maps/DesertCliffs/scripts.pory"
	clearflag FLAG_HIDE_TERRAKION
	return


DesertCliffs_Terrakion::
# 22 "data/maps/DesertCliffs/scripts.pory"
	lock
# 23 "data/maps/DesertCliffs/scripts.pory"
	faceplayer
# 24 "data/maps/DesertCliffs/scripts.pory"
	waitse
# 25 "data/maps/DesertCliffs/scripts.pory"
	playmoncry SPECIES_TERRAKION, CRY_MODE_ENCOUNTER
# 26 "data/maps/DesertCliffs/scripts.pory"
	delay 40
# 27 "data/maps/DesertCliffs/scripts.pory"
	waitmoncry
# 28 "data/maps/DesertCliffs/scripts.pory"
	setwildbattle SPECIES_TERRAKION, 50
# 29 "data/maps/DesertCliffs/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/DesertCliffs/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/DesertCliffs/scripts.pory"
	waitstate
# 32 "data/maps/DesertCliffs/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 33 "data/maps/DesertCliffs/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/DesertCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DesertCliffs_Terrakion_2
# 42 "data/maps/DesertCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq DesertCliffs_Terrakion_5
DesertCliffs_Terrakion_4:
# 46 "data/maps/DesertCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq DesertCliffs_Terrakion_8
DesertCliffs_Terrakion_7:
# 50 "data/maps/DesertCliffs/scripts.pory"
	setflag FLAG_DEFEATED_TERRAKION
# 51 "data/maps/DesertCliffs/scripts.pory"
	release
	end

DesertCliffs_Terrakion_2:
# 35 "data/maps/DesertCliffs/scripts.pory"
	setflag FLAG_DEFEATED_TERRAKION
# 36 "data/maps/DesertCliffs/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 37 "data/maps/DesertCliffs/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/DesertCliffs/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 39 "data/maps/DesertCliffs/scripts.pory"
	release
	end

DesertCliffs_Terrakion_5:
# 43 "data/maps/DesertCliffs/scripts.pory"
	setvar VAR_0x8004, SPECIES_TERRAKION
# 44 "data/maps/DesertCliffs/scripts.pory"
	goto Common_EventScript_LegendaryRanAway
	goto DesertCliffs_Terrakion_4

DesertCliffs_Terrakion_8:
# 47 "data/maps/DesertCliffs/scripts.pory"
	setvar VAR_0x8004, SPECIES_TERRAKION
# 48 "data/maps/DesertCliffs/scripts.pory"
	goto Common_EventScript_LegendaryRanAway
	goto DesertCliffs_Terrakion_7


DesertCliff_Sign::
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/maps/DesertCliffs/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertCliff_Sign_2
# 62 "data/maps/DesertCliffs/scripts.pory"
	msgbox DesertCliff_Sign_Text, MSGBOX_SIGN
	return

DesertCliff_Sign_2:
# 57 "data/maps/DesertCliffs/scripts.pory"
	msgbox DesertCliff_Sign_TextRope
# 58 "data/maps/DesertCliffs/scripts.pory"
	finditem ITEM_ESCAPE_ROPE
# 59 "data/maps/DesertCliffs/scripts.pory"
	release
	end


DesertCliff_Sign_Text::
# 64 "data/maps/DesertCliffs/scripts.pory"
	.string "Notice from the Pokémon Rangers:\p"
	.string "The cliffs before you can be\n"
	.string "treacherous to climb.\p"
	.string "Make sure to bring an Escape Rope\n"
	.string "or a Pokémon with Fly with you!$"

DesertCliff_Sign_TextRope::
# 71 "data/maps/DesertCliffs/scripts.pory"
	.string "Notice from the Pokémon Rangers:\p"
	.string "The cliffs before you can be\n"
	.string "treacherous to climb.\p"
	.string "Make sure to bring an Escape Rope\n"
	.string "or a Pokémon with Fly with you!\p"
	.string "…\p"
	.string "There seems to be a piece of rope\n"
	.string "hanging from the sign.$"
