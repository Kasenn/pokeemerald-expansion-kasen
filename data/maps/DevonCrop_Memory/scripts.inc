DevonCrop_Memory_MapScripts::
# 2 "data/maps/DevonCrop_Memory/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/DevonCrop_Memory/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/DevonCrop_Memory/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/DevonCrop_Memory/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 5 "data/maps/DevonCrop_Memory/scripts.pory"
	callnative TintWorld
	return

DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/DevonCrop_Memory/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, PlayDevonMemory
	.2byte 0


PlayDevonMemory::
# 14 "data/maps/DevonCrop_Memory/scripts.pory"
	delay 60
# 15 "data/maps/DevonCrop_Memory/scripts.pory"
	msgbox DevonProtonPostBattle, MSGBOX_DEFAULT
# 16 "data/maps/DevonCrop_Memory/scripts.pory"
	closemessage
# 17 "data/maps/DevonCrop_Memory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/DevonCrop_Memory/scripts.pory"
	removeobject 1
# 19 "data/maps/DevonCrop_Memory/scripts.pory"
	fadenewbgm MUS_SLATEPORT
# 20 "data/maps/DevonCrop_Memory/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 21 "data/maps/DevonCrop_Memory/scripts.pory"
	delay 20
# 22 "data/maps/DevonCrop_Memory/scripts.pory"
	applymovement 2, PrezMove2
# 23 "data/maps/DevonCrop_Memory/scripts.pory"
	waitmovement 0
# 24 "data/maps/DevonCrop_Memory/scripts.pory"
	msgbox DevonPrezCongratulations2, MSGBOX_DEFAULT
# 25 "data/maps/DevonCrop_Memory/scripts.pory"
	msgbox SceneEnds
# 26 "data/maps/DevonCrop_Memory/scripts.pory"
	closemessage
# 27 "data/maps/DevonCrop_Memory/scripts.pory"
	switch VAR_OBJ_GFX_ID_F
# 28 "data/maps/DevonCrop_Memory/scripts.pory"
	case 0, PlayDevonMemory_3
# 30 "data/maps/DevonCrop_Memory/scripts.pory"
	case 1, PlayDevonMemory_4
# 32 "data/maps/DevonCrop_Memory/scripts.pory"
	case 2, PlayDevonMemory_5
# 34 "data/maps/DevonCrop_Memory/scripts.pory"
	case 3, PlayDevonMemory_6
# 36 "data/maps/DevonCrop_Memory/scripts.pory"
	case 4, PlayDevonMemory_7
# 38 "data/maps/DevonCrop_Memory/scripts.pory"
	case 5, PlayDevonMemory_8
# 40 "data/maps/DevonCrop_Memory/scripts.pory"
	case 6, PlayDevonMemory_9
# 42 "data/maps/DevonCrop_Memory/scripts.pory"
	case 7, PlayDevonMemory_10
# 44 "data/maps/DevonCrop_Memory/scripts.pory"
	case 8, PlayDevonMemory_11
# 46 "data/maps/DevonCrop_Memory/scripts.pory"
	case 9, PlayDevonMemory_12
PlayDevonMemory_1:
# 49 "data/maps/DevonCrop_Memory/scripts.pory"
	waitstate
	return

PlayDevonMemory_3:
# 29 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_OLDALE_TOWN_POKEMON_CENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_4:
# 31 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_RUSTBORO_CITY_POKEMON_CENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_5:
# 33 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_DEWFORD_TOWN_POKEMON_CENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_6:
# 35 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_ALDELEAF_POKE_CENTER1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_7:
# 37 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_SHORESLATE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_8:
# 39 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_MARIGORGE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_9:
# 41 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_KAOLISLE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_10:
# 43 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_ROCKLIFFE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_11:
# 45 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_SANDSTONE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_12:
# 47 "data/maps/DevonCrop_Memory/scripts.pory"
	warpsilent MAP_DRISLEDGE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1


DevonPrezCongratulations2::
# 52 "data/maps/DevonCrop_Memory/scripts.pory"
	.string "Ah, you must be {PLAYER}.\n"
	.string "I've heard so much about you.\p"
	.string "I'm Mr. Stone, the president of\n"
	.string "the Devon Corporation.\p"
	.string "Thank you so much for driving that\n"
	.string "pesky Team Rocket away and saving\l"
	.string "our company!\p"
	.string "Unfortunately, Team Rocket did not\n"
	.string "leave here empty-handed.\p"
	.string "They didn't seem to care much for\n"
	.string "the wealth in my safe, and seemed to\l"
	.string "be more interested in our research\l"
	.string "and prototypes.\p"
	.string "I don't know what they are planning,\n"
	.string "but they are clearly preparing for\l"
	.string "something.\p"
	.string "Anywho, I don't have much to offer you\n"
	.string "seeing how we just got robbed, but I do\l"
	.string "have this thing from my personal\l"
	.string "collection.\p"
	.string "A trainer like you should find it\n"
	.string "useful.$"

SceneEnds::
# 76 "data/maps/DevonCrop_Memory/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}After this, the player is given\n"
	.string "the HM for Flash, and the scene\l"
	.string "continues normally.$"
