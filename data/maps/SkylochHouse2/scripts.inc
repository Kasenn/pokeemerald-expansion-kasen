SkylochHouse2_MapScripts::
# 2 "data/maps/SkylochHouse2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetSkylochRespawn
	.byte 0


SetSkylochRespawn::
# 6 "data/maps/SkylochHouse2/scripts.pory"
	setrespawn HEAL_LOCATION_SKYLOCH_VILLAGE
	return

