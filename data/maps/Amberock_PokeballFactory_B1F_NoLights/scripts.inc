Amberock_PokeballFactory_B1F_NoLights_MapScripts::
# 2 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setflashlevel 0
# 5 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setweather WEATHER_SHADE
# 6 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setobjectxyperm 4, 14, 6
# 8 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	return

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Amberock_PokeballFactory_B1F_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 13, 3, 0x2D8, TRUE
# 14 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 14, 3, 0x2D9, TRUE
# 15 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 15, 3, 0x2DA, TRUE
# 16 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 16, 3, 0x2DB, TRUE
# 17 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 13, 4, 0x2E0, TRUE
# 18 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 14, 4, 0x2E1, TRUE
# 19 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 15, 4, 0x2E2, TRUE
# 20 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	setmetatile 16, 4, 0x2E3, TRUE
	return


BasementGrunts::
# 26 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	msgbox BasementGrunts_Text
# 27 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	msgbox BasementGrunts_Text2
# 28 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	release
	return


FactoryEmployee_Basement2::
# 41 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	msgbox FactoryEmployee_Basement2_Text, MSGBOX_NPC
# 42 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	turnobject 4, DIR_NORTH
	return


BasementGrunts_Text::
# 30 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	.string "Grunt 1: What do we do?\n"
	.string "We're going to be so fired.$"

BasementGrunts_Text2::
# 34 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	.string "Grunt 2: We're not at fault here.\p"
	.string "Whoever is meant to control that\n"
	.string "Krokorok is the one getting fired!$"

FactoryEmployee_Basement2_Text::
# 44 "data/maps/Amberock_PokeballFactory_B1F_NoLights/scripts.pory"
	.string "It'll take us a while to get\n"
	.string "everything back to working\l"
	.string "condition, but at least we got\l"
	.string "enough power to get some light\l"
	.string "in here!$"
