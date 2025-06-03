BerryFieldHouse_MapScripts::
# 2 "data/maps/BerryFieldHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetBerryFieldLandmark
	.byte 0


SetBerryFieldLandmark::
# 5 "data/maps/BerryFieldHouse/scripts.pory"
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
	return

