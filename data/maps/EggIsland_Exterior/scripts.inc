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
	lock
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 21 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 22 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 23 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 24 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 25 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 26 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 27 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 32 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 33 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 34 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 16 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 18 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 29 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg_Text_0:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Chansey found an egg!$"

Script_TryLootEgg_Text_1:
# 32 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Chansey left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Chansey replaced an older egg\nwith the new one.$"

TooManyEggs::
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Chansey found an egg, but she's\n"
	.string "already carrying more than enough.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with the new one?$"
