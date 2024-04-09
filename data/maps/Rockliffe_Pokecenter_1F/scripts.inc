Rockliffe_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RockliffePokeCenter1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


RockliffePokeCenter1F_OnTransition::
	setrespawn HEAL_LOCATION_ROCKLIFFE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end


RockliffePokeCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


RockliffePokeCenter1F_Man::
	lockall
	msgbox RockliffePokeCenter1F_Man_Text, MSGBOX_DEFAULT
	release
	end


RockliffePokeCenter1F_Expert::
	msgbox RockliffePokeCenter1F_Expert_Text, MSGBOX_NPC
	end


RockliffePokeCenter1F_Man_Text::
	.string "So I'm currently there.\n"
	.string "So my next step should be…$"

RockliffePokeCenter1F_Expert_Text::
	.string "Back when I was a kid, we had to\n"
	.string "build our own Poké Balls!\p"
	.string "Kids these days sure have things easy…$"
