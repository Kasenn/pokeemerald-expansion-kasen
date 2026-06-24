EggIsland_Exterior_MapScripts::
# 2 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
	return


Script_TryLootEgg::
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_0, MSGBOX_AUTOCLOSE
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	return


Script_TryLootEgg_Text_0:
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "found an egg!$"
