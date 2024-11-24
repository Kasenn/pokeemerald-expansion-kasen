SerpentCave_B3F_MapScripts::
	.byte 0


SCB3F::
	addvar VAR_SERPENTCAVE_WATER_LEVEL, 1
	compare VAR_SERPENTCAVE_WATER_LEVEL, 5
	goto_if_ge SCB3F_1
	return

SCB3F_1:
	setvar VAR_SERPENTCAVE_WATER_LEVEL, 0
	return

