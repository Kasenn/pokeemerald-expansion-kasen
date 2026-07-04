EggIsland_Exterior_MapScripts::
# 2 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
	return


EventScript_FollowerEgg::
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 20 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 21 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 25 "data/maps/EggIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, 0xFF
# 26 "data/maps/EggIsland_Exterior/scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 22 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg::
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	lock
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 37 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 53 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 71 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 65 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


EventScript_FollowerEgg_Text_0:
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Your party has been fully healed.$"

Script_TryLootEgg_Text_0:
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RetreatWithDiglett_Text::
# 29 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg, but it's\n"
	.string "already carrying more than enough.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with the new one?$"
