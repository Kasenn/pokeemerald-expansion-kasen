Route7_Grotto_MapScripts::
# 2 "data/maps/Route7_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE7_Grotto_SetObject
# 3 "data/maps/Route7_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ROUTE7_Grotto_SetObject
	.byte 0


ROUTE7_Grotto_SetObject::
# 7 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 39
	goto_if_le ROUTE7_Grotto_SetObject_2
# 10 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 59
	goto_if_le ROUTE7_Grotto_SetObject_3
# 13 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 79
	goto_if_le ROUTE7_Grotto_SetObject_4
# 17 "data/maps/Route7_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SKORUPI )
ROUTE7_Grotto_SetObject_1:
	end

ROUTE7_Grotto_SetObject_2:
# 8 "data/maps/Route7_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE7_Grotto_SetObject_1

ROUTE7_Grotto_SetObject_3:
# 11 "data/maps/Route7_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDYBA )
	goto ROUTE7_Grotto_SetObject_1

ROUTE7_Grotto_SetObject_4:
# 14 "data/maps/Route7_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( VULPIX_ALOLAN )
	goto ROUTE7_Grotto_SetObject_1


ROUTE7_GrottoInteract::
# 22 "data/maps/Route7_Grotto/scripts.pory"
	faceplayer
# 23 "data/maps/Route7_Grotto/scripts.pory"
	lock
# 24 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 39
	goto_if_le ROUTE7_GrottoInteract_2
# 28 "data/maps/Route7_Grotto/scripts.pory"
	goto ROUTE7_GrottoPokemon
ROUTE7_GrottoInteract_1:
	end

ROUTE7_GrottoInteract_2:
# 25 "data/maps/Route7_Grotto/scripts.pory"
	goto ROUTE7_GrottoItem
	goto ROUTE7_GrottoInteract_1


ROUTE7_GrottoItem::
# 34 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 3
	goto_if_le ROUTE7_GrottoItem_2
# 37 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 7
	goto_if_le ROUTE7_GrottoItem_3
# 40 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 11
	goto_if_le ROUTE7_GrottoItem_4
# 43 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 15
	goto_if_le ROUTE7_GrottoItem_5
# 46 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 19
	goto_if_le ROUTE7_GrottoItem_6
# 49 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 23
	goto_if_le ROUTE7_GrottoItem_7
# 52 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 27
	goto_if_le ROUTE7_GrottoItem_8
# 55 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 31
	goto_if_le ROUTE7_GrottoItem_9
# 58 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 35
	goto_if_le ROUTE7_GrottoItem_10
# 61 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 39
	goto_if_le ROUTE7_GrottoItem_11
# 65 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_NUGGET
ROUTE7_GrottoItem_1:
# 67 "data/maps/Route7_Grotto/scripts.pory"
	waitfanfare
# 68 "data/maps/Route7_Grotto/scripts.pory"
	waitmessage
# 69 "data/maps/Route7_Grotto/scripts.pory"
	setvar VAR_GROTTO_2, 0
# 70 "data/maps/Route7_Grotto/scripts.pory"
	closemessage
# 71 "data/maps/Route7_Grotto/scripts.pory"
	release
	end

ROUTE7_GrottoItem_2:
# 35 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_3:
# 38 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_4:
# 41 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_5:
# 44 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_6:
# 47 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_7:
# 50 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_8:
# 53 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_9:
# 56 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_10:
# 59 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_11:
# 62 "data/maps/Route7_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto ROUTE7_GrottoItem_1


ROUTE7_GrottoPokemon::
# 76 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 59
	goto_if_le ROUTE7_GrottoPokemon_2
# 82 "data/maps/Route7_Grotto/scripts.pory"
	compare VAR_GROTTO_2, 79
	goto_if_le ROUTE7_GrottoPokemon_3
# 89 "data/maps/Route7_Grotto/scripts.pory"
	playmoncry SPECIES_SKORUPI, CRY_MODE_ENCOUNTER
# 90 "data/maps/Route7_Grotto/scripts.pory"
	delay 40
# 91 "data/maps/Route7_Grotto/scripts.pory"
	waitmoncry
# 92 "data/maps/Route7_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_SKORUPI, 15, ITEM_NONE, SPECIES_NONE, 19
ROUTE7_GrottoPokemon_1:
# 94 "data/maps/Route7_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 95 "data/maps/Route7_Grotto/scripts.pory"
	dowildbattle
# 96 "data/maps/Route7_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 97 "data/maps/Route7_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_2
# 98 "data/maps/Route7_Grotto/scripts.pory"
	setvar VAR_GROTTO_2, 0
# 99 "data/maps/Route7_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 100 "data/maps/Route7_Grotto/scripts.pory"
	release
	end

ROUTE7_GrottoPokemon_2:
# 77 "data/maps/Route7_Grotto/scripts.pory"
	playmoncry SPECIES_LEDYBA, CRY_MODE_ENCOUNTER
# 78 "data/maps/Route7_Grotto/scripts.pory"
	delay 40
# 79 "data/maps/Route7_Grotto/scripts.pory"
	waitmoncry
# 80 "data/maps/Route7_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_LEDYBA, 15, ITEM_NONE, SPECIES_NONE, 19
	goto ROUTE7_GrottoPokemon_1

ROUTE7_GrottoPokemon_3:
# 83 "data/maps/Route7_Grotto/scripts.pory"
	playmoncry SPECIES_VULPIX_ALOLAN, CRY_MODE_ENCOUNTER
# 84 "data/maps/Route7_Grotto/scripts.pory"
	delay 40
# 85 "data/maps/Route7_Grotto/scripts.pory"
	waitmoncry
# 86 "data/maps/Route7_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_VULPIX_ALOLAN, 15, ITEM_NONE, SPECIES_NONE, 19
	goto ROUTE7_GrottoPokemon_1

