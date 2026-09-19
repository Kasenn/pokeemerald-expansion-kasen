Pearlwood_MaysHouse2F_MapScripts::
# 2 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_MaysHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pearlwood_MaysHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
# 0 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Pearlwood_MaysHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Pearlwood_MaysHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	call SetupRivalGfxId
	return

Pearlwood_MaysHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	setmaplayoutindex LAYOUT_RIVAL_HOUSE2F_BRENDAN
	goto Pearlwood_MaysHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

