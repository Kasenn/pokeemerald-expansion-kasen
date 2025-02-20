FrosthearthCity_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_PokeCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrosthearthCity_PokeCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_FROSTFIRE_CITY
	return


Frosthearth_PokeCenter_Woman::
	msgbox Frosthearth_PokeCenter_Woman_Text, MSGBOX_NPC
	return


Frosthearth_PokeCenter_Man::
	msgbox Frosthearth_PokeCenter_Man_Text, MSGBOX_NPC
	return


Frosthearth_Mart_Man::
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge Frosthearth_Mart_Man_1
	msgbox Frosthearth_Mart_Man_Text, MSGBOX_NPC
	return

Frosthearth_Mart_Man_1:
	msgbox Frosthearth_Mart_Man_Legendary, MSGBOX_NPC
	return


Frosthearth_Mart_Lass::
	msgbox Frosthearth_Mart_Lass_Text, MSGBOX_NPC
	return


Frosthearth_Mart_Bounsweet::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
	msgbox Frosthearth_Mart_Bounsweet_Text_0
	waitmoncry
	release
	end


FrosthearthPokeCenter_EventScript_Nurse::
	setvar VAR_0x800B, 3
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


Frosthearth_Mart_Bounsweet_Text_0:
	.string "Bounsweet: Beleleen!$"

Frosthearth_PokeCenter_Woman_Text::
	.string "I brought my newly-hatched Pokémon\n"
	.string "to train here, and the speed at which\l"
	.string "it grew is astounding!$"

Frosthearth_PokeCenter_Man_Text::
	.string "As convenient as Pokémon Centers\n"
	.string "are as a place of healing,\l"
	.string "they just can't beat the feeling\l"
	.string "you get from taking a dip in a\l"
	.string "hot spring.$"

Frosthearth_Mart_Man_Legendary::
	.string "On my way here, I saw this majestic\n"
	.string "looking Pokémon leaping over the\l"
	.string "trees and the mountains.\p"
	.string "I think I saw it heading towards\n"
	.string "the huge mountain just north of\l"
	.string "Route 18.$"

Frosthearth_Mart_Man_Text::
	.string "I swear I've never seen a single\n"
	.string "store selling Ethers.\p"
	.string "Where do they come from?\p"
	.string "How come they're so hard to\n"
	.string "come by?$"

Frosthearth_Mart_Lass_Text::
	.string "My Pokémon has been working\n"
	.string "extra hard, so I'm rewarding it by\l"
	.string "letting it pick any treat it wants.$"
