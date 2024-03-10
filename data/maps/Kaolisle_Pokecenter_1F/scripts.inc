Kaolisle_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KaolislePokeCenter1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


KaolislePokeCenter1F_OnTransition::
	setrespawn HEAL_LOCATION_KAOLISLE_CITY
	call Common_EventScript_UpdateBrineyLocation
	end


KaolislePokeCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, 3
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


KaolislePokeCenter1F_EventScript_Man::
	msgbox KaolislePokeCenter1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end


KaolislePokeCenter1F_EventScript_Boy::
	msgbox KaolislePokeCenter1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end


KaolislePokeCenter1F_EventScript_Girl::
	msgbox KaolislePokeCenter1F_Text_HMCutNextDoor, MSGBOX_NPC
	end


KaolislePokeCenter1F_Text_PokemonHavePersonalities::
	.string "The more you walk with your Pokémon,\n"
	.string "the friendlier they grow toward you!$"

KaolislePokeCenter1F_Text_MaleAndFemalePokemon::
	.string "Just like people, Pokémon too feel\n"
	.string "better when they're healthy.\p"
	.string "Try giving your Pokémon some vitamins to\n"
	.string "really boost your friendship with them.$"

KaolislePokeCenter1F_Text_HMCutNextDoor::
	.string "I heard somewhere in this city lives\n"
	.string "an old karate master.\p"
	.string "They say he's willing to teach people\n"
	.string "who prove their worth to him.$"
