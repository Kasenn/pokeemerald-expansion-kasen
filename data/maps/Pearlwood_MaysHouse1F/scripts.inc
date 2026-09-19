Pearlwood_MaysHouse1F_MapScripts::
# 2 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_MaysHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pearlwood_MaysHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
# 0 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Pearlwood_MaysHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Pearlwood_MaysHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	setmaplayoutindex LAYOUT_RIVAL_HOUSE1F_BRENDAN
	return

