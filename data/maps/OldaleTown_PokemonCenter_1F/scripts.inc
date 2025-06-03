OldaleTown_PokemonCenter_1F_MapScripts::
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OldaleTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PRIMROSE_TOWN
	return


OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	return


OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	return


OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_NPC
	return


OldaleTown_PokemonCenter_1F_EventScript_Teala::
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
	return


OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC::
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thanks to the advances in science,\n"
	.string "TMs have become much more durable.\p"
	.string "Trainers no longer have to fear their\n"
	.string "TMs breaking and can use\l"
	.string "them as many times as they want.$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat::
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokémon Centers are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable::
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon Training Club on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"

OldaleTown_PokemonCenter_1F_Text_Train::
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm sorry, but the Pokémon Training\n"
	.string "Club is not quite ready yet.\p"
	.string "Please come back later.$"
