.set LOCALID_NURSE, 1

RustboroCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

RustboroCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CORALGROVE_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

RustboroCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_Man::
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Boy::
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Girl::
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
	.string "Sometimes you have to get off the\n"
	.string "beaten path to find some of the\l"
	.string "more elusive Pokémon.$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
	.string "They finally opened the Training Hub\n"
	.string "upstairs.\p"
	.string "I already went and trained my Pokémon\n"
	.string "to their absolute limit.$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
	.string "I really want to challenge the\n"
	.string "Pokémon Gym but all I have are\l"
	.string "grass Pokémon that are weak to bugs.$"

