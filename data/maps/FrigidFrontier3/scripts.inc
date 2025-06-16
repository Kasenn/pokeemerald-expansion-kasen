FrigidFrontier3_MapScripts::
# 2 "data/maps/FrigidFrontier3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrigidFrontier3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrigidFrontier3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrigidFrontier3/scripts.pory"
	setvar VAR_HOUR_OVERRIDE, 12
	return

