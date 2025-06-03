Route22_Part2_MapScripts::
# 5 "data/maps/Route22_Part2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route22_Part2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route22_Part2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Route22_Part2/scripts.pory"
	setflag FLAG_TIME_STOP
# 7 "data/maps/Route22_Part2/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 8 "data/maps/Route22_Part2/scripts.pory"
	compare VAR_TEMP_1, 39
	goto_if_eq Route22_Part2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route22_Part2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/Route22_Part2/scripts.pory"
	gettimeofday
# 10 "data/maps/Route22_Part2/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq Route22_Part2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 10 "data/maps/Route22_Part2/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq Route22_Part2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/Route22_Part2/scripts.pory"
	clearflag FLAG_ENCHANTED_FOREST_NIGHT
# 19 "data/maps/Route22_Part2/scripts.pory"
	callnative ScrCmd_SetupEnchantedForestFlags
	return

Route22_Part2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 12 "data/maps/Route22_Part2/scripts.pory"
	setflag FLAG_ENCHANTED_FOREST_NIGHT
# 13 "data/maps/Route22_Part2/scripts.pory"
	callnative ScrCmd_SetupEnchantedForestFlags
# 14 "data/maps/Route22_Part2/scripts.pory"
	callnative ResetAnimCounter
	return

