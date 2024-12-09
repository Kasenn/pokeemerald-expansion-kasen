Route14_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE14_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, ROUTE14_Grotto_SetObject
	.byte 0


ROUTE14_Grotto_SetObject::
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_Grotto_SetObject_2
	compare VAR_GROTTO_3, 59
	goto_if_le ROUTE14_Grotto_SetObject_3
	compare VAR_GROTTO_3, 79
	goto_if_le ROUTE14_Grotto_SetObject_4
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( CUBCHOO )
ROUTE14_Grotto_SetObject_1:
	end

ROUTE14_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE14_Grotto_SetObject_1

ROUTE14_Grotto_SetObject_3:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( KLEFKI )
	goto ROUTE14_Grotto_SetObject_1

ROUTE14_Grotto_SetObject_4:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOXEL )
	goto ROUTE14_Grotto_SetObject_1


ROUTE14_GrottoInteract::
	faceplayer
	lockall
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_GrottoInteract_2
	goto ROUTE14_GrottoPokemon
ROUTE14_GrottoInteract_1:
	end

ROUTE14_GrottoInteract_2:
	goto ROUTE14_GrottoItem
	goto ROUTE14_GrottoInteract_1


ROUTE14_GrottoItem::
	compare VAR_GROTTO_3, 3
	goto_if_le ROUTE14_GrottoItem_2
	compare VAR_GROTTO_3, 7
	goto_if_le ROUTE14_GrottoItem_3
	compare VAR_GROTTO_3, 11
	goto_if_le ROUTE14_GrottoItem_4
	compare VAR_GROTTO_3, 15
	goto_if_le ROUTE14_GrottoItem_5
	compare VAR_GROTTO_3, 19
	goto_if_le ROUTE14_GrottoItem_6
	compare VAR_GROTTO_3, 23
	goto_if_le ROUTE14_GrottoItem_7
	compare VAR_GROTTO_3, 27
	goto_if_le ROUTE14_GrottoItem_8
	compare VAR_GROTTO_3, 31
	goto_if_le ROUTE14_GrottoItem_9
	compare VAR_GROTTO_3, 35
	goto_if_le ROUTE14_GrottoItem_10
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_GrottoItem_11
	finditem ITEM_NUGGET
ROUTE14_GrottoItem_1:
	waitfanfare
	waitmessage
	setvar VAR_GROTTO_3, 0
	closemessage
	release
	end

ROUTE14_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_3:
	finditem ITEM_SUPER_REPEL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_4:
	finditem ITEM_SUPER_POTION
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_5:
	finditem ITEM_ULTRA_BALL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_6:
	finditem ITEM_FULL_HEAL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_7:
	finditem ITEM_HYPER_POTION
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_8:
	finditem ITEM_FIRE_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_9:
	finditem ITEM_THUNDER_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_10:
	finditem ITEM_WATER_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_11:
	finditem ITEM_LEAF_STONE
	goto ROUTE14_GrottoItem_1


ROUTE14_GrottoPokemon::
	lockall
	compare VAR_GROTTO_3, 59
	goto_if_le ROUTE14_GrottoPokemon_2
	compare VAR_GROTTO_3, 79
	goto_if_le ROUTE14_GrottoPokemon_3
	playmoncry SPECIES_CUBCHOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_CUBCHOO, 30, ITEM_NONE, SPECIES_NONE, 33
ROUTE14_GrottoPokemon_1:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DAILY_GROTTO_3
	setvar VAR_GROTTO_3, 0
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

ROUTE14_GrottoPokemon_2:
	playmoncry SPECIES_KLEFKI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_KLEFKI, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_1

ROUTE14_GrottoPokemon_3:
	playmoncry SPECIES_TOXEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_TOXEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_1

