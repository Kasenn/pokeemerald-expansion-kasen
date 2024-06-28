Drisledge_House2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DrisHouse2_FlagControl
	.byte 0


DrisHouse2_FlagControl::
	setflag FLAG_TEMP_2
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisHouse2_FlagControl_1
	return

DrisHouse2_FlagControl_1:
	setweather WEATHER_SHADE
	setflag FLAG_TEMP_1
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	compare VAR_TEMP_0, 6
	goto_if_le DrisHouse2_FlagControl_3
	compare VAR_TEMP_0, 18
	goto_if_ge DrisHouse2_FlagControl_3
	return

DrisHouse2_FlagControl_3:
	clearflag FLAG_TEMP_2
	return


Drisledge_Mismagius1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_NORMAL
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
	waitmoncry
	goto_if_unset FLAG_DRISLEDGE_ITEM5, Drisledge_Mismagius1_2
Drisledge_Mismagius1_1:
	release
	end

Drisledge_Mismagius1_2:
	giveitem ITEM_KASIB_BERRY
	setflag FLAG_DRISLEDGE_ITEM5
	goto Drisledge_Mismagius1_1

