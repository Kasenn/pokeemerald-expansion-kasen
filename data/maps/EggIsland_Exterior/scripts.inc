EggIsland_Exterior_MapScripts::
# 5 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 7 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetupMushroom
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaFinal
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 7 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 54
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14


SetUpAreaOne::
# 18 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 19 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 22 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 23 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 26 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 4
# 27 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetupMushroom::
# 31 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 34 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateMushroomPP
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, 0xFF
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 84 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg::
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	lock
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 124 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 125 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 133 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 137 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


EventScript_FollowerEgg_Text_0:
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Your party has been fully healed.$"

Script_TryLootEgg_Text_0:
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

EventScript_LootMushroom_Text::
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg, but it's\n"
	.string "already carrying more than enough.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with the new one?$"
