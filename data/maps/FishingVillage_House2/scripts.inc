FishingVillage_House2_MapScripts::
# 2 "data/maps/FishingVillage_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FishingGuruFlag
	.byte 0


FishingGuruFlag::
# 6 "data/maps/FishingVillage_House2/scripts.pory"
	checkitem ITEM_TITANIUM_LINE
# 7 "data/maps/FishingVillage_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FishingGuruFlag_1
	return

FishingGuruFlag_1:
# 8 "data/maps/FishingVillage_House2/scripts.pory"
	setflag FLAG_TEMP_1
	return

