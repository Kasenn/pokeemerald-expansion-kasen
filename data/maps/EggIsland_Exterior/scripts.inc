EggIsland_Exterior_MapScripts::
# 6 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 24 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 12 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetupMushroom
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaOne
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaTwo
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	call SetUpAreaFinal
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 11 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 10 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 9 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 8 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_1, 54
	goto_if_eq EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 17 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 0, EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 18 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 8, MAP_EGG_ISLAND_EXTERIOR
# 19 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 20 "data/maps/EggIsland_Exterior/scripts.pory"
	hideplayer
# 21 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 1
	return

EggIsland_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/EggIsland_Exterior/scripts.pory"
	map_script_2 VAR_STORY, 1, IntroSequence
	.2byte 0


IntroSequence::
# 30 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 15, 0x273, FALSE
# 31 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 16, 0x273, FALSE
# 32 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 19, 0x273, FALSE
# 33 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 20, 0x273, FALSE
# 34 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 21, 0x273, FALSE
# 35 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 40, 22, 0x273, FALSE
# 36 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_DISABLE_GROUND_EFFECTS
# 37 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 38 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_0
# 41 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 42 "data/maps/EggIsland_Exterior/scripts.pory"
	addobject 9
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 9, IntroSequence_Movement_1
# 44 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 45 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 46 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 47 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 48 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 49 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 50 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 51 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 52 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 53 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 8, IntroSequence_Movement_2
# 55 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 56 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 8
# 57 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 8
# 58 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_3
# 60 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 90
# 61 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 62 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 63 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, 17, 74
# 64 "data/maps/EggIsland_Exterior/scripts.pory"
	teleportcamera 17, 74
# 65 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 68 "data/maps/EggIsland_Exterior/scripts.pory"
	hideobjectat 10, MAP_EGG_ISLAND_EXTERIOR
# 69 "data/maps/EggIsland_Exterior/scripts.pory"
	special SpawnCameraObject
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IntroSequence_Movement_4
# 71 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 72 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 73 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 74 "data/maps/EggIsland_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 76 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_TELEPORT
# 77 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x317, FALSE
# 78 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x317, FALSE
# 79 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x317, FALSE
# 80 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x317, FALSE
# 81 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_0
# 83 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_GROUND_EFFECTS
# 85 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 160
# 86 "data/maps/EggIsland_Exterior/scripts.pory"
	showplayer
# 87 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IntroSequence_Movement_1
# 89 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 90 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 1
# 91 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8005, 2
# 92 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8006, 8
# 93 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_0x8007, 5
# 94 "data/maps/EggIsland_Exterior/scripts.pory"
	special ShakeCamera
# 95 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 96 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_FIRST_ANIM_OVER
# 97 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 98 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_M_MINIMIZE
# 99 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement 10, IntroSequence_Movement_2
# 100 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_SECOND_ANIM_OVER
# 101 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 74, 0x311, FALSE
# 102 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 75, 0x311, FALSE
# 103 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 76, 0x311, FALSE
# 104 "data/maps/EggIsland_Exterior/scripts.pory"
	setmetatile 17, 77, 0x311, FALSE
# 105 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 10
# 106 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject 10
# 107 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 30
# 108 "data/maps/EggIsland_Exterior/scripts.pory"
	special RemoveCameraObject
# 109 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 2
# 110 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FIRST_ANIM_OVER
# 111 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_SECOND_ANIM_OVER
# 112 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_YOSHI1, TRUE
# 113 "data/maps/EggIsland_Exterior/scripts.pory"
	release
# 114 "data/maps/EggIsland_Exterior/scripts.pory"
	releaseall
	return


SetUpAreaOne::
# 118 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 0
# 119 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetUpAreaTwo::
# 122 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 2
# 123 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 2
	return


SetUpAreaFinal::
# 126 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_AI_FLAGS, 4
# 127 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_MUSHROOM_LOCATION, 0
	return


SetupMushroom::
# 131 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 134 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 135 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 136 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 140 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 144 "data/maps/EggIsland_Exterior/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 145 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 146 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative RandomizeMushroomScript
# 147 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 148 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 149 "data/maps/EggIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 154 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 157 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateMushroomPP
# 158 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 141 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 150 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmoncry
# 151 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 152 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 155 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 170 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 174 "data/maps/EggIsland_Exterior/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 175 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 177 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 182 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 183 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 187 "data/maps/EggIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, 0xFF
# 188 "data/maps/EggIsland_Exterior/scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 184 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


Script_TryLootEgg::
# 197 "data/maps/EggIsland_Exterior/scripts.pory"
	lock
# 198 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative GeneratePokemonForEgg
# 199 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 200 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 211 "data/maps/EggIsland_Exterior/scripts.pory"
	setflag FLAG_EGGPIC
# 212 "data/maps/EggIsland_Exterior/scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 213 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative BufferEggTextBasedOnType
# 214 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 215 "data/maps/EggIsland_Exterior/scripts.pory"
	hidemonpic
# 216 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_EGGPIC
# 217 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 223 "data/maps/EggIsland_Exterior/scripts.pory"
	special SavePlayerParty
# 224 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceChanseyWithEgg
# 225 "data/maps/EggIsland_Exterior/scripts.pory"
	special ChoosePartyMon
# 226 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 226 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 233 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 234 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative ReplaceEggInParty
# 235 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 237 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 202 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_ITEMFINDER
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	message Script_TryLootEgg_Text_0
# 204 "data/maps/EggIsland_Exterior/scripts.pory"
	waitse
# 205 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmessage
# 206 "data/maps/EggIsland_Exterior/scripts.pory"
	giveegg VAR_0x8000
# 207 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateEggPP
# 208 "data/maps/EggIsland_Exterior/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 219 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 228 "data/maps/EggIsland_Exterior/scripts.pory"
	special LoadPlayerParty
# 229 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 230 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	end


DebugScript1::
# 248 "data/maps/EggIsland_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 249 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_TEMP_0, 1
# 250 "data/maps/EggIsland_Exterior/scripts.pory"
	addvar VAR_TEMP_1, 1
# 251 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectxy LOCALID_PLAYER, VAR_TEMP_0, VAR_TEMP_1
	return


MachopIntro1::
# 255 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 1
# 256 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro2::
# 260 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 2
# 261 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro3::
# 265 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 3
# 266 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntro4::
# 270 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_TEMP_2, 4
# 271 "data/maps/EggIsland_Exterior/scripts.pory"
	goto MachopIntroMain
	return


MachopIntroMain::
# 275 "data/maps/EggIsland_Exterior/scripts.pory"
	playbgm MUS_HELP, FALSE
# 276 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 277 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_1, MSGBOX_AUTOCLOSE
# 278 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 10
# 279 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MachopIntroMain_2
# 285 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_EAST
MachopIntroMain_1:
# 287 "data/maps/EggIsland_Exterior/scripts.pory"
	playse SE_PIN
# 288 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, Common_Movement_ExclamationMark
# 289 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement 0
# 290 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_2
# 291 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopIntroMain_Text_3, MSGBOX_AUTOCLOSE
# 292 "data/maps/EggIsland_Exterior/scripts.pory"
	switch VAR_TEMP_2
# 293 "data/maps/EggIsland_Exterior/scripts.pory"
	case 1, MachopIntroMain_7
# 297 "data/maps/EggIsland_Exterior/scripts.pory"
	case 2, MachopIntroMain_8
# 303 "data/maps/EggIsland_Exterior/scripts.pory"
	case 3, MachopIntroMain_9
# 309 "data/maps/EggIsland_Exterior/scripts.pory"
	case 4, MachopIntroMain_10
MachopIntroMain_5:
# 316 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_INTRO_MURKROW
# 317 "data/maps/EggIsland_Exterior/scripts.pory"
	fadedefaultbgm
# 318 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_INTRO_MURKROW
# 319 "data/maps/EggIsland_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MACHOP1, MOVEMENT_TYPE_LOOK_AROUND
# 320 "data/maps/EggIsland_Exterior/scripts.pory"
	setvar VAR_STORY, 3
	return

MachopIntroMain_2:
# 281 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_INTRO_MURKROW, DIR_WEST
	goto MachopIntroMain_1

MachopIntroMain_7:
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_0
# 295 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 16
# 296 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_8:
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 299 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 24
# 300 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 301 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 302 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_9:
# 304 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_1
# 305 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 32
# 306 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 307 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 308 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5

MachopIntroMain_10:
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_INTRO_MURKROW, MachopIntroMain_Movement_2
# 311 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 48
# 312 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 313 "data/maps/EggIsland_Exterior/scripts.pory"
	delay 8
# 314 "data/maps/EggIsland_Exterior/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	goto MachopIntroMain_5


MachopScript1::
# 324 "data/maps/EggIsland_Exterior/scripts.pory"
	faceplayer
# 325 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopIntroMain_Text_0
# 326 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text1
# 327 "data/maps/EggIsland_Exterior/scripts.pory"
	setspeaker MachopScript1_Text_0
# 328 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text2, MSGBOX_AUTOCLOSE
# 329 "data/maps/EggIsland_Exterior/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MachopScript1_2
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_1
MachopScript1_1:
# 335 "data/maps/EggIsland_Exterior/scripts.pory"
	waitmovement LOCALID_MACHOP1
# 336 "data/maps/EggIsland_Exterior/scripts.pory"
	removeobject LOCALID_MACHOP1
# 337 "data/maps/EggIsland_Exterior/scripts.pory"
	msgbox MachopScript1_Text3
# 338 "data/maps/EggIsland_Exterior/scripts.pory"
	clearflag FLAG_DISABLE_ENCOUNTERS
# 339 "data/maps/EggIsland_Exterior/scripts.pory"
	release
	return

MachopScript1_2:
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	applymovement LOCALID_MACHOP1, MachopScript1_Movement_0
	goto MachopScript1_1


# 39 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_0:
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	init_affine_anim
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	set_visible
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_start_affine
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 39 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 43 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_1:
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_anim
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	lock_facing_direction
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_faster_down
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_anim
# 43 "data/maps/EggIsland_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 54 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_2:
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down_affine
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
# 54 "data/maps/EggIsland_Exterior/scripts.pory"
	delay_16
	step_end

# 59 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_3:
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 70 "data/maps/EggIsland_Exterior/scripts.pory"
IntroSequence_Movement_4:
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
# 70 "data/maps/EggIsland_Exterior/scripts.pory"
	player_run_down
	step_end

# 294 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_0:
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 294 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 298 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_1:
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 298 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 310 "data/maps/EggIsland_Exterior/scripts.pory"
MachopIntroMain_Movement_2:
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_down
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
# 310 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_fast_right
	step_end

# 330 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_0:
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 330 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

# 333 "data/maps/EggIsland_Exterior/scripts.pory"
MachopScript1_Movement_1:
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_down
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
# 333 "data/maps/EggIsland_Exterior/scripts.pory"
	walk_right
	step_end

EventScript_FollowerEgg_Text_0:
# 170 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 176 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Your party has been fully healed.$"

Script_TryLootEgg_Text_0:
# 203 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 222 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 229 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 235 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

MachopIntroMain_Text_0:
# 276 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Burly Man$"

MachopIntroMain_Text_1:
# 277 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "You there!\nYou've come at the perfect time!\pCome help me deal with\nthis scoundrel!$"

MachopIntroMain_Text_2:
# 290 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Dark Bird$"

MachopIntroMain_Text_3:
# 291 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Reinforcements!?\nI'm out of here!$"

MachopScript1_Text_0:
# 327 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Macho$"

EventScript_LootMushroom_Text::
# 161 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 191 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 240 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Yoshi found an egg, but it's\n"
	.string "already carrying more than enough.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with the new one?$"

MachopScript1_Text1::
# 342 "data/maps/EggIsland_Exterior/scripts.pory"
	.string "Thank you stranger.\n"
	.string "I'm not sure I could've beaten\l"
	.string "that Murkrow without your\l"
	.string "intervention.\p"
	.string "I must say, they've been\n"
	.string "getting rowdy as of late…$"

MachopScript1_Text2::
# 350 "data/maps/EggIsland_Exterior/scripts.pory"
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
# 375 "data/maps/EggIsland_Exterior/scripts.pory"
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
