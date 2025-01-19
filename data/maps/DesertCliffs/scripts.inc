DesertCliffs_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_TRANSITION, DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	removeobject VAR_LAST_TALKED
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setescapewarp MAP_DESERT_CLIFFS, 15, 79
	setflag FLAG_HIDE_TERRAKION
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_unset FLAG_DEFEATED_TERRAKION, DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

DesertCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	clearflag FLAG_HIDE_TERRAKION
	return


DesertCliffs_Terrakion::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TERRAKION, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_TERRAKION, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DesertCliffs_Terrakion_2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq DesertCliffs_Terrakion_5
DesertCliffs_Terrakion_4:
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq DesertCliffs_Terrakion_8
DesertCliffs_Terrakion_7:
	setflag FLAG_DEFEATED_TERRAKION
	release
	end

DesertCliffs_Terrakion_2:
	setflag FLAG_DEFEATED_TERRAKION
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

DesertCliffs_Terrakion_5:
	setvar VAR_0x8004, SPECIES_TERRAKION
	goto Common_EventScript_LegendaryRanAway
	goto DesertCliffs_Terrakion_4

DesertCliffs_Terrakion_8:
	setvar VAR_0x8004, SPECIES_TERRAKION
	goto Common_EventScript_LegendaryRanAway
	goto DesertCliffs_Terrakion_7


DesertCliff_Sign::
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, FALSE
	goto_if_eq DesertCliff_Sign_2
	msgbox DesertCliff_Sign_Text, MSGBOX_SIGN
	return

DesertCliff_Sign_2:
	msgbox DesertCliff_Sign_TextRope
	finditem ITEM_ESCAPE_ROPE
	release
	end


DesertCliff_Sign_Text::
	.string "Notice from the Pokémon Rangers:\p"
	.string "The cliffs before you can be\n"
	.string "treacherous to climb.\p"
	.string "Make sure to bring an Escape Rope\n"
	.string "or a Pokémon with Fly with you!$"

DesertCliff_Sign_TextRope::
	.string "Notice from the Pokémon Rangers:\p"
	.string "The cliffs before you can be\n"
	.string "treacherous to climb.\p"
	.string "Make sure to bring an Escape Rope\n"
	.string "or a Pokémon with Fly with you!\p"
	.string "…\p"
	.string "There seems to be a piece of rope\n"
	.string "hanging from the sign.$"
