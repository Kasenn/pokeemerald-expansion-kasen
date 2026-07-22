EggIsland_Exterior_MapScripts::
# 5 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 23 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
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
	map_script_2 VAR_STORY, 0, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 8, MAP_EGG_ISLAND_EXTERIOR
# 18 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 19 "data/maps/EggIsland_Exterior/scripts.pory"
	hideplayer
# 20 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 1
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 1, IntroSequence
	.2byte 0


IntroSequence::
# 29 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 15, 0x273, FALSE
# 30 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 16, 0x273, FALSE
# 31 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 19, 0x273, FALSE
# 32 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 20, 0x273, FALSE
# 33 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 21, 0x273, FALSE
# 34 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 22, 0x273, FALSE
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 37 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject 9
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 9, IntroSequence_Movement_1
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 60
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 53 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_4
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IntroSequence_Movement_5
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 64 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 4
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_6
# 71 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 60
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 79 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
	return


SetUpAreaOne::
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 92 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 95 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 4
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetupMushroom::
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateMushroomPP
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 120 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 121 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 124 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 143 "data/maps/EggIsland_Exterior/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 144 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 145 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 146 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 151 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 152 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, 0xFF
# 157 "data/maps/EggIsland_Exterior/scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 153 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg::
# 166 "data/maps/EggIsland_Exterior/scripts.pory"
	lock
# 167 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 168 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 169 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 182 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 184 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 185 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 186 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 192 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 193 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 194 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 171 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 172 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 173 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 174 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 175 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 177 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 197 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


DebugScript1::
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 218 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 221 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 224 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
	return


# 38 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 42 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 51 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 54 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_diag_southwest
	step_end

# 58 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_4:
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_left
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
	step_end

# 62 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_5:
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
	step_end

# 70 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_6:
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

EventScript_FollowerEgg_Text_0:
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 145 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Your party has been fully healed.$"

Script_TryLootEgg_Text_0:
# 172 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

EventScript_LootMushroom_Text::
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 160 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg, but it's\n"
	.string "already carrying more than enough.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with the new one?$"
