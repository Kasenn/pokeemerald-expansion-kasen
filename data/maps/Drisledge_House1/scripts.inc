Drisledge_House1_MapScripts::
# 2 "data/maps/Drisledge_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DrisHouse1_FlagControl
# 3 "data/maps/Drisledge_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DrisHouse1_FlagControl
	.byte 0


DrisHouse1_FlagControl::
# 7 "data/maps/Drisledge_House1/scripts.pory"
	setflag FLAG_TEMP_3
# 8 "data/maps/Drisledge_House1/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisHouse1_FlagControl_2
DrisHouse1_FlagControl_1:
# 12 "data/maps/Drisledge_House1/scripts.pory"
	gettime
# 13 "data/maps/Drisledge_House1/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 14 "data/maps/Drisledge_House1/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisHouse1_FlagControl_4
# 14 "data/maps/Drisledge_House1/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisHouse1_FlagControl_4
	return

DrisHouse1_FlagControl_2:
# 9 "data/maps/Drisledge_House1/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/Drisledge_House1/scripts.pory"
	setweather WEATHER_SHADE
	goto DrisHouse1_FlagControl_1

DrisHouse1_FlagControl_4:
# 15 "data/maps/Drisledge_House1/scripts.pory"
	clearflag FLAG_TEMP_3
	return

