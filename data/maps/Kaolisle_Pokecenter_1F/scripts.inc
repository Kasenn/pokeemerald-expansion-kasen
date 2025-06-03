Kaolisle_Pokecenter_1F_MapScripts::
# 2 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KaolislePokeCenter1F_OnTransition
	.byte 0


KaolislePokeCenter1F_OnTransition::
# 6 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_KAOLISLE_CITY
# 7 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


KaolislePokeCenter1F_EventScript_Nurse::
# 12 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 3
# 13 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	release
	end


KaolislePokeCenter1F_EventScript_Man::
# 21 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	msgbox KaolislePokeCenter1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end


KaolislePokeCenter1F_EventScript_Boy::
# 25 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	msgbox KaolislePokeCenter1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end


KaolislePokeCenter1F_EventScript_Girl::
# 29 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	msgbox KaolislePokeCenter1F_Text_HMCutNextDoor, MSGBOX_NPC
	end


KaolislePokeCenter1F_Text_PokemonHavePersonalities::
# 33 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	.string "The more you walk with your Pokémon,\n"
	.string "the friendlier they grow toward you!$"

KaolislePokeCenter1F_Text_MaleAndFemalePokemon::
# 38 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	.string "Just like people, Pokémon too feel\n"
	.string "better when they're healthy.\p"
	.string "Try giving your Pokémon some vitamins to\n"
	.string "really boost your friendship with them.$"

KaolislePokeCenter1F_Text_HMCutNextDoor::
# 44 "data/maps/Kaolisle_Pokecenter_1F/scripts.pory"
	.string "I heard somewhere in this city lives\n"
	.string "an old karate master.\p"
	.string "They say he's willing to teach people\n"
	.string "who prove their worth to him.$"
