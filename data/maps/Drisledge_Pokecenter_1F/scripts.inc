Drisledge_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DrisledgePokeCenter1F_OnTransition
	.byte 0


DrisledgePokeCenter1F_OnTransition::
	setrespawn HEAL_LOCATION_DRISLEDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

