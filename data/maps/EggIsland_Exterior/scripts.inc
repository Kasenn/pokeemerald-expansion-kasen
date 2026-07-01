EggIsland_Exterior_MapScripts::
# 2 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
	return


Script_StartMenuRest::
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 16 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 21 "data/maps/EggIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, 0xFF
# 22 "data/maps/EggIsland_Exterior/scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 18 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg::
# 31 "data/maps/EggIsland_Exterior/scripts.pory"
	lock
# 32 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 33 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 37 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_StartMenuRest_Text_0:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Your party has been fully healed.$"

Script_TryLootEgg_Text_0:
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RetreatWithDiglett_Text::
# 25 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg, but it's\n"
	.string "already carrying more than enough.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with the new one?$"
