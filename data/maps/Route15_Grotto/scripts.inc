Route15_Grotto_MapScripts::
# 2 "data/maps/Route15_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE15_Grotto_SetObject
	.byte 0


ROUTE15_Grotto_SetObject::
# 6 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_Grotto_SetObject_2
# 9 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 59
	goto_if_le ROUTE15_Grotto_SetObject_3
# 12 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 79
	goto_if_le ROUTE15_Grotto_SetObject_4
# 16 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( NATU )
ROUTE15_Grotto_SetObject_1:
	end

ROUTE15_Grotto_SetObject_2:
# 7 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE15_Grotto_SetObject_1

ROUTE15_Grotto_SetObject_3:
# 10 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( CLEFFA )
	goto ROUTE15_Grotto_SetObject_1

ROUTE15_Grotto_SetObject_4:
# 13 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( IGGLYBUFF )
	goto ROUTE15_Grotto_SetObject_1


ROUTE15_GrottoInteract::
# 21 "data/maps/Route15_Grotto/scripts.pory"
	faceplayer
# 22 "data/maps/Route15_Grotto/scripts.pory"
	lock
# 23 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_GrottoInteract_2
# 27 "data/maps/Route15_Grotto/scripts.pory"
	goto ROUTE15_GrottoPokemon
ROUTE15_GrottoInteract_1:
	end

ROUTE15_GrottoInteract_2:
# 24 "data/maps/Route15_Grotto/scripts.pory"
	goto ROUTE15_GrottoItem
	goto ROUTE15_GrottoInteract_1


ROUTE15_GrottoItem::
# 33 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 3
	goto_if_le ROUTE15_GrottoItem_2
# 36 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 7
	goto_if_le ROUTE15_GrottoItem_3
# 39 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 11
	goto_if_le ROUTE15_GrottoItem_4
# 42 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 15
	goto_if_le ROUTE15_GrottoItem_5
# 45 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 19
	goto_if_le ROUTE15_GrottoItem_6
# 48 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 23
	goto_if_le ROUTE15_GrottoItem_7
# 51 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 27
	goto_if_le ROUTE15_GrottoItem_8
# 54 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 31
	goto_if_le ROUTE15_GrottoItem_9
# 57 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 35
	goto_if_le ROUTE15_GrottoItem_10
# 60 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_GrottoItem_11
# 64 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_NUGGET
ROUTE15_GrottoItem_1:
# 66 "data/maps/Route15_Grotto/scripts.pory"
	waitfanfare
# 67 "data/maps/Route15_Grotto/scripts.pory"
	waitmessage
# 68 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_GROTTO_4, 0
# 69 "data/maps/Route15_Grotto/scripts.pory"
	closemessage
# 70 "data/maps/Route15_Grotto/scripts.pory"
	release
	end

ROUTE15_GrottoItem_2:
# 34 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_3:
# 37 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_4:
# 40 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_5:
# 43 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_6:
# 46 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_7:
# 49 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_8:
# 52 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_9:
# 55 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_10:
# 58 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_11:
# 61 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto ROUTE15_GrottoItem_1


ROUTE15_GrottoPokemon::
# 75 "data/maps/Route15_Grotto/scripts.pory"
	lock
# 76 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 59
	goto_if_le ROUTE15_GrottoPokemon_2
# 82 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 79
	goto_if_le ROUTE15_GrottoPokemon_3
# 89 "data/maps/Route15_Grotto/scripts.pory"
	playmoncry SPECIES_NATU, CRY_MODE_ENCOUNTER
# 90 "data/maps/Route15_Grotto/scripts.pory"
	delay 40
# 91 "data/maps/Route15_Grotto/scripts.pory"
	waitmoncry
# 92 "data/maps/Route15_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_NATU, 30, ITEM_NONE, SPECIES_NONE, 33
ROUTE15_GrottoPokemon_1:
# 94 "data/maps/Route15_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 95 "data/maps/Route15_Grotto/scripts.pory"
	dowildbattle
# 96 "data/maps/Route15_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 97 "data/maps/Route15_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_4
# 98 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_GROTTO_4, 0
# 99 "data/maps/Route15_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 100 "data/maps/Route15_Grotto/scripts.pory"
	release
	end

ROUTE15_GrottoPokemon_2:
# 77 "data/maps/Route15_Grotto/scripts.pory"
	playmoncry SPECIES_CLEFFA, CRY_MODE_ENCOUNTER
# 78 "data/maps/Route15_Grotto/scripts.pory"
	delay 40
# 79 "data/maps/Route15_Grotto/scripts.pory"
	waitmoncry
# 80 "data/maps/Route15_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_CLEFFA, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_1

ROUTE15_GrottoPokemon_3:
# 83 "data/maps/Route15_Grotto/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_ENCOUNTER
# 84 "data/maps/Route15_Grotto/scripts.pory"
	delay 40
# 85 "data/maps/Route15_Grotto/scripts.pory"
	waitmoncry
# 86 "data/maps/Route15_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_IGGLYBUFF, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_1

