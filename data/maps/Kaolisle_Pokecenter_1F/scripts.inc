Kaolisle_Pokecenter_1F_MapScripts::
# 2 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KaolislePokeCenter1F_OnTransition
# 3 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kaolisle_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kaolisle_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
# 5 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 9, AutomaticUpdate2
# 6 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 10, AutomaticUpdate3
# 7 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 11, AutomaticUpdate4
# 8 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 12, AutomaticUpdate5
	.2byte 0


KaolislePokeCenter1F_OnTransition::
# 14 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_KAOLISLE_CITY
# 15 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


KaolislePokeCenter1F_EventScript_Nurse::
# 20 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 3
# 21 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	release
	end


KaolislePokeCenter1F_EventScript_Man::
# 29 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	msgbox KaolislePokeCenter1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end


KaolislePokeCenter1F_EventScript_Boy::
# 33 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	msgbox KaolislePokeCenter1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end


KaolislePokeCenter1F_EventScript_Girl::
# 37 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	msgbox KaolislePokeCenter1F_Text_HMCutNextDoor, MSGBOX_NPC
	end


KaolislePokeCenter1F_Text_PokemonHavePersonalities::
# 41 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	.string "The more you walk with your Pokémon,\n"
	.string "the friendlier they grow toward you!$"

KaolislePokeCenter1F_Text_MaleAndFemalePokemon::
# 46 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	.string "Just like people, Pokémon too feel\n"
	.string "better when they're healthy.\p"
	.string "Try giving your Pokémon some vitamins to\n"
	.string "really boost your friendship with them.$"

KaolislePokeCenter1F_Text_HMCutNextDoor::
# 52 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	.string "I heard somewhere in this city lives\n"
	.string "an old karate master.\p"
	.string "They say he's willing to teach people\n"
	.string "who prove their worth to him.$"
