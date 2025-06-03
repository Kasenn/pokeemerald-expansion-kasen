Drisledge_Gym_House_MapScripts::
# 2 "data/maps/Drisledge_Gym_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GymHouseFlag
# 3 "data/maps/Drisledge_Gym_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GymHouseFlag
	.byte 0


GymHouseFlag::
# 7 "data/maps/Drisledge_Gym_House/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/Drisledge_Gym_House/scripts.pory"
	gettime
# 9 "data/maps/Drisledge_Gym_House/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 10 "data/maps/Drisledge_Gym_House/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le GymHouseFlag_1
# 10 "data/maps/Drisledge_Gym_House/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge GymHouseFlag_1
	return

GymHouseFlag_1:
# 11 "data/maps/Drisledge_Gym_House/scripts.pory"
	clearflag FLAG_TEMP_1
	return


GymHouse_Haunter::
# 16 "data/maps/Drisledge_Gym_House/scripts.pory"
	lock
# 17 "data/maps/Drisledge_Gym_House/scripts.pory"
	faceplayer
# 18 "data/maps/Drisledge_Gym_House/scripts.pory"
	waitse
# 19 "data/maps/Drisledge_Gym_House/scripts.pory"
	playmoncry SPECIES_HAUNTER, CRY_MODE_NORMAL
# 20 "data/maps/Drisledge_Gym_House/scripts.pory"
	msgbox DrisledgeHaunter_Text, MSGBOX_DEFAULT
# 21 "data/maps/Drisledge_Gym_House/scripts.pory"
	waitmoncry
# 22 "data/maps/Drisledge_Gym_House/scripts.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM4, GymHouse_Haunter_2
GymHouse_Haunter_1:
# 26 "data/maps/Drisledge_Gym_House/scripts.pory"
	release
	end

GymHouse_Haunter_2:
# 23 "data/maps/Drisledge_Gym_House/scripts.pory"
	giveitem ITEM_SPELL_TAG
# 24 "data/maps/Drisledge_Gym_House/scripts.pory"
	setflag FLAG_DRISLEDGE_ITEM4
	goto GymHouse_Haunter_1

