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


RockliffePokeCenter1F_EventScript_Nurse::
# 12 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	release
	end


RockliffePokeCenter1F_Man::
# 21 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	lock
# 22 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	msgbox RockliffePokeCenter1F_Man_Text, MSGBOX_DEFAULT
# 23 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	release
	end


RockliffePokeCenter1F_Expert::
# 32 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	msgbox RockliffePokeCenter1F_Expert_Text, MSGBOX_NPC
	end


RockliffePokeCenter1F_Man_Text::
# 26 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	.string "So I'm currently there.\n"
	.string "So my next step should be…$"

RockliffePokeCenter1F_Expert_Text::
# 35 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	.string "Back when I was a kid, we had to\n"
	.string "build our own Poké Balls!\p"
	.string "Kids these days sure have things easy…$"
