DevonCrop_Memory_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_0, 0, DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	callnative TintWorld
	return

DevonCrop_Memory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, PlayDevonMemory
	.2byte 0


PlayDevonMemory::
	delay 60
	msgbox DevonProtonPostBattle, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 1
	fadenewbgm MUS_SLATEPORT
	fadescreen FADE_FROM_BLACK
	delay 20
	applymovement 2, PrezMove2
	waitmovement 0
	msgbox DevonPrezCongratulations2, MSGBOX_DEFAULT
	msgbox SceneEnds
	closemessage
	switch VAR_OBJ_GFX_ID_F
	case 0, PlayDevonMemory_3
	case 1, PlayDevonMemory_4
	case 2, PlayDevonMemory_5
	case 3, PlayDevonMemory_6
	case 4, PlayDevonMemory_7
	case 5, PlayDevonMemory_8
	case 6, PlayDevonMemory_9
	case 7, PlayDevonMemory_10
	case 8, PlayDevonMemory_11
	case 9, PlayDevonMemory_12
PlayDevonMemory_1:
	waitstate
	return

PlayDevonMemory_3:
	warpsilent MAP_OLDALE_TOWN_POKEMON_CENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_4:
	warpsilent MAP_RUSTBORO_CITY_POKEMON_CENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_5:
	warpsilent MAP_DEWFORD_TOWN_POKEMON_CENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_6:
	warpsilent MAP_ALDELEAF_POKE_CENTER1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_7:
	warpsilent MAP_SHORESLATE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_8:
	warpsilent MAP_MARIGORGE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_9:
	warpsilent MAP_KAOLISLE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_10:
	warpsilent MAP_ROCKLIFFE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_11:
	warpsilent MAP_SANDSTONE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1

PlayDevonMemory_12:
	warpsilent MAP_DRISLEDGE_POKECENTER_1F, VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	goto PlayDevonMemory_1


DevonPrezCongratulations2::
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
	.string "{COLOR RED}{SHADOW LIGHT_RED}After this, the player is given\n"
	.string "the HM for Flash, and the scene\l"
	.string "continues normally.$"
