AmberockPokeCenter1F_MapScripts::
# 2 "data/maps/AmberockPokeCenter1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AmberockPokeCenter1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AmberockPokeCenter1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AmberockPokeCenter1F/scripts.pory"
	setrespawn HEAL_LOCATION_AMBEROCK_TOWN
	return


Amberock_PokeCenter_RichBoy::
# 8 "data/maps/AmberockPokeCenter1F/scripts.pory"
	msgbox Amberock_PokeCenter_RichBoy_Text, MSGBOX_NPC
	return


Amberock_PokeCenter_Woman::
# 11 "data/maps/AmberockPokeCenter1F/scripts.pory"
	msgbox Amberock_PokeCenter_Woman_Text, MSGBOX_NPC
	return


Amberock_PokeCenter_RichBoy_Text::
# 13 "data/maps/AmberockPokeCenter1F/scripts.pory"
	.string "I thought I could have these people\n"
	.string "train my Pokémon if I just paid them\l"
	.string "money, but apparently they only\l"
	.string "accept “BP”…$"

Amberock_PokeCenter_Woman_Text::
# 19 "data/maps/AmberockPokeCenter1F/scripts.pory"
	.string "My Pokémon is always super happy to\n"
	.string "visit a Pokémon Center!\p"
	.string "Everyone here is just so nice.$"
