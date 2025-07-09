Rockliffe_Pokecenter_1F_MapScripts::
# 2 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockliffePokeCenter1F_OnTransition
	.byte 0


RockliffePokeCenter1F_OnTransition::
# 6 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROCKLIFFE_TOWN
# 7 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


RockliffePokeCenter1F_Man::
# 12 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	lock
# 13 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	msgbox RockliffePokeCenter1F_Man_Text, MSGBOX_DEFAULT
# 14 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	release
	end


RockliffePokeCenter1F_Expert::
# 23 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	msgbox RockliffePokeCenter1F_Expert_Text, MSGBOX_NPC
	end


RockliffePokeCenter1F_Man_Text::
# 17 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	.string "So I'm currently there.\n"
	.string "So my next step should be…$"

RockliffePokeCenter1F_Expert_Text::
# 26 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	.string "Back when I was a kid, we had to\n"
	.string "build our own Poké Balls!\p"
	.string "Kids these days sure have things easy…$"
