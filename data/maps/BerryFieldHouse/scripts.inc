BerryFieldHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetBerryFieldLandmark
	.byte 0


SetBerryFieldLandmark::
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
	return

