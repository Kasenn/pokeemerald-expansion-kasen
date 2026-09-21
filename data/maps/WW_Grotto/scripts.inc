WW_Grotto_MapScripts::
# 2 "data/maps/WW_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WW_Grotto_SetObject
# 3 "data/maps/WW_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RemoveStaticEncounter
	.byte 0


WW_Grotto_SetObject::
# 6 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_TALKED_TO_AIDE
	goto_if_eq WW_Grotto_SetObject_2
WW_Grotto_SetObject_1:
# 12 "data/maps/WW_Grotto/scripts.pory"
	call SetHiddenGrottoGfx
	return

WW_Grotto_SetObject_2:
# 7 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_Grotto_SetObject_5
WW_Grotto_SetObject_4:
# 10 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_ENTERED_HIDDEN_GROTTO
	goto WW_Grotto_SetObject_1

WW_Grotto_SetObject_5:
# 8 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 79
	goto WW_Grotto_SetObject_4

