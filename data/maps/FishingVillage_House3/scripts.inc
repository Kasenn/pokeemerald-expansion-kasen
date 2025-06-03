FishingVillage_House3_MapScripts::
# 2 "data/maps/FishingVillage_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FishingVillageRespawn
	.byte 0


FishingVillageRespawn::
# 6 "data/maps/FishingVillage_House3/scripts.pory"
	setrespawn HEAL_LOCATION_FISHING_VILLAGE
	return

