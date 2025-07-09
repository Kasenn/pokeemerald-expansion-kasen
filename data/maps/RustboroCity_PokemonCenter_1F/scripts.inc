RustboroCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RustboroCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CORALGROVE_CITY
	return


RustboroCity_PokemonCenter_1F_EventScript_Man::
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	return


RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	return


RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	return


RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities::
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Sometimes you have to get off the\n"
	.string "beaten path to find some of the\l"
	.string "more elusive Pokémon.$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon::
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "They finally opened the Training Hub\n"
	.string "upstairs.\p"
	.string "I already went and trained my Pokémon\n"
	.string "to their absolute limit.$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor::
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I really want to challenge the\n"
	.string "Pokémon Gym but all I have are\l"
	.string "grass Pokémon that are weak to bugs.$"
