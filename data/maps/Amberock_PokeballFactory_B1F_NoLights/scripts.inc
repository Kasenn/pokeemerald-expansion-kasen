Amberock_PokeballFactory_B1F_NoLights_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflashlevel 0
	setweather WEATHER_SHADE
	setflag FLAG_TEMP_1
	setobjectxyperm 4, 14, 6
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	return

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 13, 3, 0x2D8, TRUE
	setmetatile 14, 3, 0x2D9, TRUE
	setmetatile 15, 3, 0x2DA, TRUE
	setmetatile 16, 3, 0x2DB, TRUE
	setmetatile 13, 4, 0x2E0, TRUE
	setmetatile 14, 4, 0x2E1, TRUE
	setmetatile 15, 4, 0x2E2, TRUE
	setmetatile 16, 4, 0x2E3, TRUE
	return


BasementGrunts::
	msgbox BasementGrunts_Text
	release
	return


FactoryEmployee_Basement2::
	msgbox FactoryEmployee_Basement2_Text, MSGBOX_NPC
	turnobject 4, DIR_NORTH
	return


BasementGrunts_Text::
	.string "Grunt 1: What do we do?\n"
	.string "We're going to be so fired.\p"
	.string "Grunt 2: We're not at fault here.\n"
	.string "Whoever is meant to control that\l"
	.string "Krokorok is the one getting fired!$"

FactoryEmployee_Basement2_Text::
	.string "It'll take us a while to get\n"
	.string "everything back to working\l"
	.string "condition, but at least we got\l"
	.string "enough power to get some light\l"
	.string "in here!$"
