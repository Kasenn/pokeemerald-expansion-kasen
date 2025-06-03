Route14_Grotto_MapScripts::
# 2 "data/maps/Route14_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE14_Grotto_SetObject
# 3 "data/maps/Route14_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ROUTE14_Grotto_SetObject
	.byte 0


ROUTE14_Grotto_SetObject::
# 7 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_Grotto_SetObject_2
# 10 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 59
	goto_if_le ROUTE14_Grotto_SetObject_3
# 13 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 79
	goto_if_le ROUTE14_Grotto_SetObject_4
# 17 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDIAN )
ROUTE14_Grotto_SetObject_1:
	end

ROUTE14_Grotto_SetObject_2:
# 8 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE14_Grotto_SetObject_1

ROUTE14_Grotto_SetObject_3:
# 11 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( KLEFKI )
	goto ROUTE14_Grotto_SetObject_1

ROUTE14_Grotto_SetObject_4:
# 14 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOXEL )
	goto ROUTE14_Grotto_SetObject_1


ROUTE14_GrottoInteract::
# 22 "data/maps/Route14_Grotto/scripts.pory"
	faceplayer
# 23 "data/maps/Route14_Grotto/scripts.pory"
	lock
# 24 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_GrottoInteract_2
# 28 "data/maps/Route14_Grotto/scripts.pory"
	goto ROUTE14_GrottoPokemon
ROUTE14_GrottoInteract_1:
	end

ROUTE14_GrottoInteract_2:
# 25 "data/maps/Route14_Grotto/scripts.pory"
	goto ROUTE14_GrottoItem
	goto ROUTE14_GrottoInteract_1


ROUTE14_GrottoItem::
# 34 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 3
	goto_if_le ROUTE14_GrottoItem_2
# 37 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 7
	goto_if_le ROUTE14_GrottoItem_3
# 40 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 11
	goto_if_le ROUTE14_GrottoItem_4
# 43 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 15
	goto_if_le ROUTE14_GrottoItem_5
# 46 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 19
	goto_if_le ROUTE14_GrottoItem_6
# 49 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 23
	goto_if_le ROUTE14_GrottoItem_7
# 52 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 27
	goto_if_le ROUTE14_GrottoItem_8
# 55 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 31
	goto_if_le ROUTE14_GrottoItem_9
# 58 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 35
	goto_if_le ROUTE14_GrottoItem_10
# 61 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_GrottoItem_11
# 65 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_NUGGET
ROUTE14_GrottoItem_1:
# 67 "data/maps/Route14_Grotto/scripts.pory"
	waitfanfare
# 68 "data/maps/Route14_Grotto/scripts.pory"
	waitmessage
# 69 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_GROTTO_3, 0
# 70 "data/maps/Route14_Grotto/scripts.pory"
	closemessage
# 71 "data/maps/Route14_Grotto/scripts.pory"
	release
	end

ROUTE14_GrottoItem_2:
# 35 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_3:
# 38 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_4:
# 41 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_5:
# 44 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_6:
# 47 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_7:
# 50 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_8:
# 53 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_9:
# 56 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_10:
# 59 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_11:
# 62 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto ROUTE14_GrottoItem_1


ROUTE14_GrottoPokemon::
# 76 "data/maps/Route14_Grotto/scripts.pory"
	lock
# 77 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 59
	goto_if_le ROUTE14_GrottoPokemon_2
# 83 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 79
	goto_if_le ROUTE14_GrottoPokemon_3
# 90 "data/maps/Route14_Grotto/scripts.pory"
	playmoncry SPECIES_LEDIAN, CRY_MODE_ENCOUNTER
# 91 "data/maps/Route14_Grotto/scripts.pory"
	delay 40
# 92 "data/maps/Route14_Grotto/scripts.pory"
	waitmoncry
# 93 "data/maps/Route14_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_LEDIAN, 30, ITEM_NONE, SPECIES_NONE, 33
ROUTE14_GrottoPokemon_1:
# 95 "data/maps/Route14_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 96 "data/maps/Route14_Grotto/scripts.pory"
	dowildbattle
# 97 "data/maps/Route14_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 98 "data/maps/Route14_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_3
# 99 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_GROTTO_3, 0
# 100 "data/maps/Route14_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 101 "data/maps/Route14_Grotto/scripts.pory"
	release
	end

ROUTE14_GrottoPokemon_2:
# 78 "data/maps/Route14_Grotto/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_ENCOUNTER
# 79 "data/maps/Route14_Grotto/scripts.pory"
	delay 40
# 80 "data/maps/Route14_Grotto/scripts.pory"
	waitmoncry
# 81 "data/maps/Route14_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_KLEFKI, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_1

ROUTE14_GrottoPokemon_3:
# 84 "data/maps/Route14_Grotto/scripts.pory"
	playmoncry SPECIES_TOXEL, CRY_MODE_ENCOUNTER
# 85 "data/maps/Route14_Grotto/scripts.pory"
	delay 40
# 86 "data/maps/Route14_Grotto/scripts.pory"
	waitmoncry
# 87 "data/maps/Route14_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_TOXEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_1

