SunkernCavern_MapScripts::
# 2 "data/maps/SunkernCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunkernCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SunkernCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunkernCavern/scripts.pory"
	setflag FLAG_LANDMARK_SUNKEN_CAVERN
	return

