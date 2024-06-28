Drisledge_Gym_House_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GymHouseFlag
	.byte 0


GymHouseFlag::
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	compare VAR_TEMP_0, 6
	goto_if_le GymHouseFlag_1
	compare VAR_TEMP_0, 18
	goto_if_ge GymHouseFlag_1
	return

GymHouseFlag_1:
	clearflag FLAG_TEMP_1
	return


GymHouse_Haunter::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HAUNTER, CRY_MODE_NORMAL
	msgbox DrisledgeHaunter_Text, MSGBOX_DEFAULT
	waitmoncry
	goto_if_unset FLAG_DRISLEDGE_ITEM4, GymHouse_Haunter_2
GymHouse_Haunter_1:
	release
	end

GymHouse_Haunter_2:
	giveitem ITEM_SPELL_TAG
	setflag FLAG_DRISLEDGE_ITEM4
	goto GymHouse_Haunter_1

