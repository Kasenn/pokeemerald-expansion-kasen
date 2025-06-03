WW_Grotto_MapScripts::
# 2 "data/maps/WW_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WW_Grotto_SetObject
	.byte 0


WW_Grotto_SetObject::
# 5 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_Grotto_SetObject_1
# 8 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 59
	goto_if_le WW_Grotto_SetObject_2
# 11 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 79
	goto_if_le WW_Grotto_SetObject_3
# 15 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( GLIGAR )
	return

WW_Grotto_SetObject_1:
# 6 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

WW_Grotto_SetObject_2:
# 9 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOGEPI )
	return

WW_Grotto_SetObject_3:
# 12 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDYBA )
	return


WW_GrottoInteract::
# 19 "data/maps/WW_Grotto/scripts.pory"
	faceplayer
# 20 "data/maps/WW_Grotto/scripts.pory"
	lock
# 21 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoInteract_2
# 25 "data/maps/WW_Grotto/scripts.pory"
	goto WW_GrottoPokemon
WW_GrottoInteract_1:
	end

WW_GrottoInteract_2:
# 22 "data/maps/WW_Grotto/scripts.pory"
	goto WW_GrottoItem
	goto WW_GrottoInteract_1


WW_GrottoItem::
# 31 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 3
	goto_if_le WW_GrottoItem_2
# 34 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 7
	goto_if_le WW_GrottoItem_3
# 37 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 11
	goto_if_le WW_GrottoItem_4
# 40 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 15
	goto_if_le WW_GrottoItem_5
# 43 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 19
	goto_if_le WW_GrottoItem_6
# 46 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 23
	goto_if_le WW_GrottoItem_7
# 49 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 27
	goto_if_le WW_GrottoItem_8
# 52 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 31
	goto_if_le WW_GrottoItem_9
# 55 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 35
	goto_if_le WW_GrottoItem_10
# 58 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoItem_11
# 62 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_NUGGET
WW_GrottoItem_1:
# 64 "data/maps/WW_Grotto/scripts.pory"
	waitfanfare
# 65 "data/maps/WW_Grotto/scripts.pory"
	waitmessage
# 66 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 0
# 67 "data/maps/WW_Grotto/scripts.pory"
	closemessage
# 68 "data/maps/WW_Grotto/scripts.pory"
	release
	end

WW_GrottoItem_2:
# 32 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_3:
# 35 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto WW_GrottoItem_1

WW_GrottoItem_4:
# 38 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_5:
# 41 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_6:
# 44 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto WW_GrottoItem_1

WW_GrottoItem_7:
# 47 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_8:
# 50 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_9:
# 53 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_10:
# 56 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_11:
# 59 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto WW_GrottoItem_1


WW_GrottoPokemon::
# 73 "data/maps/WW_Grotto/scripts.pory"
	lock
# 74 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 59
	goto_if_le WW_GrottoPokemon_2
# 80 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 79
	goto_if_le WW_GrottoPokemon_3
# 87 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
# 88 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 89 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 90 "data/maps/WW_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_GLIGAR, 6, ITEM_NONE, SPECIES_NONE, 7
WW_GrottoPokemon_1:
# 92 "data/maps/WW_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 93 "data/maps/WW_Grotto/scripts.pory"
	dowildbattle
# 94 "data/maps/WW_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 95 "data/maps/WW_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_1
# 96 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 0
# 97 "data/maps/WW_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 98 "data/maps/WW_Grotto/scripts.pory"
	release
	end

WW_GrottoPokemon_2:
# 75 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_ENCOUNTER
# 76 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 77 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 78 "data/maps/WW_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_TOGEPI, 6, ITEM_NONE, SPECIES_NONE, 7
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_3:
# 81 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_LEDYBA, CRY_MODE_ENCOUNTER
# 82 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 83 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 84 "data/maps/WW_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_LEDYBA, 6, ITEM_NONE, SPECIES_NONE, 7
	goto WW_GrottoPokemon_1

