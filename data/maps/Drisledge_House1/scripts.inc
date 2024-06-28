Drisledge_House1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DrisHouse1_FlagControl
	.byte 0


DrisHouse1_FlagControl::
	setflag FLAG_TEMP_3
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisHouse1_FlagControl_2
DrisHouse1_FlagControl_1:
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	compare VAR_TEMP_0, 6
	goto_if_le DrisHouse1_FlagControl_4
	compare VAR_TEMP_0, 18
	goto_if_ge DrisHouse1_FlagControl_4
	return

DrisHouse1_FlagControl_2:
	setflag FLAG_TEMP_2
	setweather WEATHER_SHADE
	goto DrisHouse1_FlagControl_1

DrisHouse1_FlagControl_4:
	clearflag FLAG_TEMP_3
	return

