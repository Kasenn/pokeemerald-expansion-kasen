EggIsland_Exterior_MapScripts::
# 5 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
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

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 16 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 8, MAP_EGG_ISLAND_EXTERIOR
# 18 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


SetUpAreaOne::
# 24 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 25 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 28 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 29 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 32 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 4
# 33 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetupMushroom::
# 37 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 53 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateMushroomPP
# 64 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, 0xFF
# 94 "data/maps/EggIsland_Exterior/scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg::
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	lock
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 120 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 121 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 129 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 131 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 132 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 132 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 141 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 143 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 125 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 136 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


DebugScript1::
# 154 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 155 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, DebugScript1_Movement_0
# 157 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 158 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, DebugScript1_Movement_1
# 160 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
	return


# 156 "data/maps/EggIsland_Exterior/scripts.pory"
DebugScript1_Movement_0:
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 159 "data/maps/EggIsland_Exterior/scripts.pory"
DebugScript1_Movement_1:
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

EventScript_FollowerEgg_Text_0:
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Your party has been fully healed.$"

Script_TryLootEgg_Text_0:
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 128 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 141 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

EventScript_LootMushroom_Text::
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 146 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg, but it's\n"
	.string "already carrying more than enough.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with the new one?$"
