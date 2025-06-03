Drisledge_House2_MapScripts::
# 2 "data/maps/Drisledge_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DrisHouse2_FlagControl
# 3 "data/maps/Drisledge_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DrisHouse2_FlagControl
	.byte 0


DrisHouse2_FlagControl::
# 7 "data/maps/Drisledge_House2/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/Drisledge_House2/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisHouse2_FlagControl_2
DrisHouse2_FlagControl_1:
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Drisledge_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisHouse2_FlagControl_4
	return

DrisHouse2_FlagControl_2:
# 9 "data/maps/Drisledge_House2/scripts.pory"
	setweather WEATHER_SHADE
# 10 "data/maps/Drisledge_House2/scripts.pory"
	setflag FLAG_TEMP_1
# 11 "data/maps/Drisledge_House2/scripts.pory"
	gettime
# 12 "data/maps/Drisledge_House2/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 13 "data/maps/Drisledge_House2/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisHouse2_FlagControl_6
# 13 "data/maps/Drisledge_House2/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisHouse2_FlagControl_6
	goto DrisHouse2_FlagControl_1

DrisHouse2_FlagControl_4:
# 18 "data/maps/Drisledge_House2/scripts.pory"
	setweather WEATHER_SHADE
# 19 "data/maps/Drisledge_House2/scripts.pory"
	clearflag FLAG_TEMP_2
# 20 "data/maps/Drisledge_House2/scripts.pory"
	setflag FLAG_TEMP_1
	return

DrisHouse2_FlagControl_6:
# 14 "data/maps/Drisledge_House2/scripts.pory"
	clearflag FLAG_TEMP_2
	goto DrisHouse2_FlagControl_1


Drisledge_Mismagius1::
# 25 "data/maps/Drisledge_House2/scripts.pory"
	lock
# 26 "data/maps/Drisledge_House2/scripts.pory"
	faceplayer
# 27 "data/maps/Drisledge_House2/scripts.pory"
	waitse
# 28 "data/maps/Drisledge_House2/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_NORMAL
# 29 "data/maps/Drisledge_House2/scripts.pory"
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
# 30 "data/maps/Drisledge_House2/scripts.pory"
	waitmoncry
# 31 "data/maps/Drisledge_House2/scripts.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM5, Drisledge_Mismagius1_2
Drisledge_Mismagius1_1:
# 35 "data/maps/Drisledge_House2/scripts.pory"
	release
	end

Drisledge_Mismagius1_2:
# 32 "data/maps/Drisledge_House2/scripts.pory"
	giveitem ITEM_KASIB_BERRY
# 33 "data/maps/Drisledge_House2/scripts.pory"
	setflag FLAG_DRISLEDGE_ITEM5
	goto Drisledge_Mismagius1_1

