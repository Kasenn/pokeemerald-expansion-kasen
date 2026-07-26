EggIsland_Exterior_MapScripts::
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 27 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 15 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetupMushroom
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaFinal
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 13 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 54
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 20 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 0, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 21 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 8, MAP_EGG_ISLAND_EXTERIOR
# 22 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 23 "data/maps/EggIsland_Exterior/scripts.pory"
	hideplayer
# 24 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 1
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 1, IntroSequence
	.2byte 0


IntroSequence::
# 33 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 15, 0x273, FALSE
# 34 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 16, 0x273, FALSE
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 19, 0x273, FALSE
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 20, 0x273, FALSE
# 37 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 21, 0x273, FALSE
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 22, 0x273, FALSE
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 40 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject 9
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 9, IntroSequence_Movement_1
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 53 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 90
# 64 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 65 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 66 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, 17, 74
# 67 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera 17, 74
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 71 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IntroSequence_Movement_4
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 75 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 79 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x317, FALSE
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x317, FALSE
# 82 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x317, FALSE
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x317, FALSE
# 84 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_GROUND_EFFECTS
# 88 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_1
# 92 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 94 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 95 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 101 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x311, FALSE
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x311, FALSE
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x311, FALSE
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x311, FALSE
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 115 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_YOSHI1, TRUE
# 116 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 117 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return


SetUpAreaOne::
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 130 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 4
# 131 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetupMushroom::
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 138 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 139 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 144 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 148 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 149 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 150 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 151 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 152 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 153 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 158 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateMushroomPP
# 162 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 145 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 154 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 155 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 156 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 159 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 174 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 178 "data/maps/EggIsland_Exterior/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 179 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 181 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 186 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, 0xFF
# 192 "data/maps/EggIsland_Exterior/scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg::
# 201 "data/maps/EggIsland_Exterior/scripts.pory"
	lock
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 216 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 218 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 220 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 221 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 227 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 228 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 229 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 230 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 231 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 238 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 239 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 240 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 242 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 207 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 208 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 209 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 210 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 211 "data/maps/EggIsland_Exterior/scripts.pory"
	special CalculatePlayerPartyCount
# 212 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 213 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 224 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 233 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 235 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


DebugScript1::
# 254 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 255 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_TEMP_0, 3
# 256 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_TEMP_1, 2
# 257 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, VAR_TEMP_0, VAR_TEMP_1
# 258 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera VAR_TEMP_0, VAR_TEMP_1
	return


MachopIntro1::
# 262 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
# 263 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro2::
# 267 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 2
# 268 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro3::
# 272 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 3
# 273 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro4::
# 277 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 4
# 278 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntroMain::
# 282 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 283 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 284 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_1, MSGBOX_AUTOCLOSE
# 285 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 286 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MachopIntroMain_2
# 292 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_EAST
MachopIntroMain_1:
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 295 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, Common_Movement_ExclamationMark
# 296 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 297 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_2
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_3, MSGBOX_AUTOCLOSE
# 299 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_TEMP_2
# 300 "data/maps/EggIsland_Exterior/scripts.pory"
	case 1, MachopIntroMain_7
# 304 "data/maps/EggIsland_Exterior/scripts.pory"
	case 2, MachopIntroMain_8
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	case 3, MachopIntroMain_9
# 316 "data/maps/EggIsland_Exterior/scripts.pory"
	case 4, MachopIntroMain_10
MachopIntroMain_5:
# 323 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_INTRO_MURKROW
# 324 "data/maps/EggIsland_Exterior/scripts.pory"
	fadedefaultbgm
# 325 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_INTRO_MURKROW
# 326 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MACHOP1, MOVEMENT_TYPE_LOOK_AROUND
# 327 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 3
# 328 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
	return

MachopIntroMain_2:
# 288 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_WEST
	goto MachopIntroMain_1

MachopIntroMain_7:
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_0
# 302 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_8:
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 306 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 307 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 308 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 309 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_9:
# 311 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 312 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 313 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 314 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 315 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_10:
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_2
# 318 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 319 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 320 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 321 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5


MachopScript1::
# 332 "data/maps/EggIsland_Exterior/scripts.pory"
	faceplayer
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 334 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text1
# 335 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopScript1_Text_0
# 336 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text2, MSGBOX_AUTOCLOSE
# 337 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MachopScript1_2
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_1
MachopScript1_1:
# 343 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_MACHOP1
# 344 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_MACHOP1
# 345 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text3
# 346 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 347 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_STOP_EXP
# 348 "data/maps/EggIsland_Exterior/scripts.pory"
	setmonmove 0, 0, MOVE_CHUCK_EGG
# 349 "data/maps/EggIsland_Exterior/scripts.pory"
	setmonmove 0, 1, MOVE_LICK_BERRY
# 350 "data/maps/EggIsland_Exterior/scripts.pory"
	special HealPlayerParty
# 351 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative DoInitialSave
# 352 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

MachopScript1_2:
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_0
	goto MachopScript1_1


RiverCrossing1::
# 402 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 403 "data/maps/EggIsland_Exterior/scripts.pory"
	counteggs
# 404 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 408 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 409 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 414 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RiverCrossing1_Text_0
# 415 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyEgg
# 416 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 416 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 421 "data/maps/EggIsland_Exterior/scripts.pory"
	removeegg VAR_0x8004
# 422 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 426 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 428 "data/maps/EggIsland_Exterior/scripts.pory"
	call DoWaterEggMovement
# 429 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 430 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 431 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 437 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 438 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_LEDGE
# 439 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 440 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 441 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 442 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 443 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 444 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 445 "data/maps/EggIsland_Exterior/scripts.pory"
	special CalculatePlayerPartyCount
# 446 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 447 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 405 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 411 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

RiverCrossing1_8:
# 418 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

RiverCrossing1_13:
# 423 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


# 451 "data/maps/EggIsland_Exterior/scripts.pory"
MoveWaterEggAway:
# 452 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 453 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 454 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 455 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 456 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 460 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 461 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject VAR_TEMP_3
# 462 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 463 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_JUMP_KICK
# 464 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 468 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 470 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 471 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_DIVE
# 472 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 465 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


# 42 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 46 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 57 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 62 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_4:
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
	step_end

# 301 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_0:
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 305 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_1:
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 317 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_2:
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 338 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_0:
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 341 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_1:
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 341 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 432 "data/maps/EggIsland_Exterior/scripts.pory"
RiverCrossing1_Movement_0:
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	disable_jump_landing_ground_effect
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_2_right
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	enable_jump_landing_ground_effect
# 432 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_2_right
	step_end

# 435 "data/maps/EggIsland_Exterior/scripts.pory"
RiverCrossing1_Movement_1:
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	disable_jump_landing_ground_effect
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_2_left
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	enable_jump_landing_ground_effect
# 435 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_2_left
	step_end

# 465 "data/maps/EggIsland_Exterior/scripts.pory"
DoWaterEggMovement_Movement_0:
# 465 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 465 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_2_right
# 465 "data/maps/EggIsland_Exterior/scripts.pory"
	nurse_joy_bow
	step_end

# 468 "data/maps/EggIsland_Exterior/scripts.pory"
DoWaterEggMovement_Movement_1:
# 468 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 468 "data/maps/EggIsland_Exterior/scripts.pory"
	jump_2_left
# 468 "data/maps/EggIsland_Exterior/scripts.pory"
	nurse_joy_bow
	step_end

EventScript_FollowerEgg_Text_0:
# 174 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 180 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Your party has been fully healed.$"

Script_TryLootEgg_Text_0:
# 207 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 227 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 240 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

MachopIntroMain_Text_0:
# 283 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Lean Man$"

MachopIntroMain_Text_1:
# 284 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "You there!\nYou've come at the perfect time!\pCome help me deal with\nthis scoundrel!$"

MachopIntroMain_Text_2:
# 297 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Dark Bird$"

MachopIntroMain_Text_3:
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Reinforcements!?\nI'm out of here!$"

MachopScript1_Text_0:
# 335 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Macho$"

RiverCrossing1_Text_0:
# 414 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 165 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 195 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 245 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

MachopScript1_Text1::
# 355 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Thank you stranger.\n"
	.string "I'm not sure I could've beaten\l"
	.string "that Murkrow without your\l"
	.string "intervention.\p"
	.string "I must say, they've been\n"
	.string "getting rowdy as of late…$"

MachopScript1_Text2::
# 363 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "I am Macho the Machop.\n"
	.string "And you are… Yoshi?\p"
	.string "Hm, can't say I've met one\n"
	.string "like yourself before.\l"
	.string "And you say you're looking\l"
	.string "for something called a Kamek?\l"
	.string "Yet another weird name I've not\l"
	.string "heard of.\p"
	.string "Anyway Yoshi, If you want to\n"
	.string "survive here, you need to\l"
	.string "be able to defend yourself.\p"
	.string "Your form doesn't really strike\n"
	.string "me as someone physical…\p"
	.string "I know! This island is known as\n"
	.string "the “Egg Island” due to the\l"
	.string "overabundance of eggs\l"
	.string "everywhere.\p"
	.string "Why don't you try grabbing\n"
	.string "some of those eggs and\l"
	.string "chucking them at your foes?\p"
	.string "Once you've grabbed a few eggs,\n"
	.string "see if you can get across that\l"
	.string "river to the east.$"

MachopScript1_Text3::
# 388 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_RED}Yoshi can now collect eggs\n"
	.string "to help it on its journey!\p"
	.string "Look for eggs in the tall grass,\n"
	.string "deep sand, or rocky patches.\l"
	.string "Some eggs are going to\l"
	.string "hurt more than others,\l"
	.string "and some may have special\l"
	.string "attributes when thrown.\p"
	.string "But beware, as these areas are\n"
	.string "also inhabited by Pokémon!$"

CantCrossRiver::
# 475 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 482 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"
