AmberockPokeCenter1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AmberockPokeCenter1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AmberockPokeCenter1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_AMBEROCK_TOWN
	return


Amberock_PokeCenter_RichBoy::
	msgbox Amberock_PokeCenter_RichBoy_Text, MSGBOX_NPC
	return


Amberock_PokeCenter_Woman::
	msgbox Amberock_PokeCenter_Woman_Text, MSGBOX_NPC
	return


Amberock_PokeCenter_RichBoy_Text::
	.string "I thought I could have these people\n"
	.string "train my Pokémon if I just paid them\l"
	.string "money, but apparently they only\l"
	.string "accept “BP”…$"

Amberock_PokeCenter_Woman_Text::
	.string "My Pokémon is always super happy to\n"
	.string "visit a Pokémon Center!\p"
	.string "Everyone here is just so nice.$"
