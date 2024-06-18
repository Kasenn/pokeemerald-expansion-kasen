FishingVillage_House3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FishingVillageRespawn
	.byte 0


FishingVillageRespawn::
	setrespawn HEAL_LOCATION_FISHING_VILLAGE
	return

