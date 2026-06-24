EggIsland_Exterior_MapScripts::
	.byte 0


Script_TryLootEgg::
# 6 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 7 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
	return


Script_TryLootEgg_Text_0:
# 7 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "found an egg!$"
