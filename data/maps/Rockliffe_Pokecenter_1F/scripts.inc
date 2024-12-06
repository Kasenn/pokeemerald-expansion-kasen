Rockliffe_Pokecenter_1F_MapScripts::
# 2 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockliffePokeCenter1F_OnTransition
# 3 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rockliffe_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rockliffe_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
# 5 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 9, AutomaticUpdate2
# 6 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 10, AutomaticUpdate3
# 7 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 11, AutomaticUpdate4
# 8 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 12, AutomaticUpdate5
	.2byte 0


RockliffePokeCenter1F_OnTransition::
# 14 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROCKLIFFE_TOWN
# 15 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


RockliffePokeCenter1F_EventScript_Nurse::
# 20 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 21 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	release
	end


RockliffePokeCenter1F_Man::
# 29 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	lockall
# 30 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	msgbox RockliffePokeCenter1F_Man_Text, MSGBOX_DEFAULT
# 31 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	release
	end


RockliffePokeCenter1F_Expert::
# 40 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	msgbox RockliffePokeCenter1F_Expert_Text, MSGBOX_NPC
	end


RockliffePokeCenter1F_Man_Text::
# 34 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	.string "So I'm currently there.\n"
	.string "So my next step should be…$"

RockliffePokeCenter1F_Expert_Text::
# 43 "data/maps/Rockliffe_Pokecenter_1F/scripts.pory"
	.string "Back when I was a kid, we had to\n"
	.string "build our own Poké Balls!\p"
	.string "Kids these days sure have things easy…$"
