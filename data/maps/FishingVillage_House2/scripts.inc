FishingVillage_House2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FishingGuruFlag
	.byte 0


FishingGuruFlag::
	checkitem ITEM_TITANIUM_LINE
	compare VAR_RESULT, TRUE
	goto_if_eq FishingGuruFlag_1
	return

FishingGuruFlag_1:
	setflag FLAG_TEMP_1
	return

