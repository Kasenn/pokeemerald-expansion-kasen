Route7_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE7_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, ROUTE7_Grotto_SetObject
	.byte 0


ROUTE7_Grotto_SetObject::
	compare VAR_GROTTO_2, 39
	goto_if_le ROUTE7_Grotto_SetObject_2
	compare VAR_GROTTO_2, 59
	goto_if_le ROUTE7_Grotto_SetObject_3
	compare VAR_GROTTO_2, 79
	goto_if_le ROUTE7_Grotto_SetObject_4
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SKORUPI )
ROUTE7_Grotto_SetObject_1:
	end

ROUTE7_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE7_Grotto_SetObject_1

ROUTE7_Grotto_SetObject_3:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ABSOL )
	goto ROUTE7_Grotto_SetObject_1

ROUTE7_Grotto_SetObject_4:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( VULPIX_ALOLAN )
	goto ROUTE7_Grotto_SetObject_1


ROUTE7_GrottoInteract::
	faceplayer
	lockall
	compare VAR_GROTTO_2, 39
	goto_if_le ROUTE7_GrottoInteract_2
	goto ROUTE7_GrottoPokemon
ROUTE7_GrottoInteract_1:
	end

ROUTE7_GrottoInteract_2:
	goto ROUTE7_GrottoItem
	goto ROUTE7_GrottoInteract_1


ROUTE7_GrottoItem::
	compare VAR_GROTTO_2, 3
	goto_if_le ROUTE7_GrottoItem_2
	compare VAR_GROTTO_2, 7
	goto_if_le ROUTE7_GrottoItem_3
	compare VAR_GROTTO_2, 11
	goto_if_le ROUTE7_GrottoItem_4
	compare VAR_GROTTO_2, 15
	goto_if_le ROUTE7_GrottoItem_5
	compare VAR_GROTTO_2, 19
	goto_if_le ROUTE7_GrottoItem_6
	compare VAR_GROTTO_2, 23
	goto_if_le ROUTE7_GrottoItem_7
	compare VAR_GROTTO_2, 27
	goto_if_le ROUTE7_GrottoItem_8
	compare VAR_GROTTO_2, 31
	goto_if_le ROUTE7_GrottoItem_9
	compare VAR_GROTTO_2, 35
	goto_if_le ROUTE7_GrottoItem_10
	compare VAR_GROTTO_2, 39
	goto_if_le ROUTE7_GrottoItem_11
	finditem ITEM_NUGGET
ROUTE7_GrottoItem_1:
	waitfanfare
	waitmessage
	setvar VAR_GROTTO_2, 0
	closemessage
	release
	end

ROUTE7_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_3:
	finditem ITEM_SUPER_REPEL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_4:
	finditem ITEM_SUPER_POTION
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_5:
	finditem ITEM_ULTRA_BALL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_6:
	finditem ITEM_FULL_HEAL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_7:
	finditem ITEM_HYPER_POTION
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_8:
	finditem ITEM_FIRE_STONE
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_9:
	finditem ITEM_THUNDER_STONE
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_10:
	finditem ITEM_WATER_STONE
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_11:
	finditem ITEM_LEAF_STONE
	goto ROUTE7_GrottoItem_1


ROUTE7_GrottoPokemon::
	compare VAR_GROTTO_2, 59
	goto_if_le ROUTE7_GrottoPokemon_2
ROUTE7_GrottoPokemon_1:
	compare VAR_GROTTO_2, 79
	goto_if_le ROUTE7_GrottoPokemon_5
	playmoncry SPECIES_SKORUPI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_SKORUPI, 15, ITEM_NONE, SPECIES_NONE, 19
ROUTE7_GrottoPokemon_4:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DAILY_GROTTO_2
	setvar VAR_GROTTO_2, 0
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

ROUTE7_GrottoPokemon_2:
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_ABSOL, 15, ITEM_NONE, SPECIES_NONE, 19
	goto ROUTE7_GrottoPokemon_1

ROUTE7_GrottoPokemon_5:
	playmoncry SPECIES_VULPIX_ALOLAN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_VULPIX_ALOLAN, 15, ITEM_NONE, SPECIES_NONE, 19
	goto ROUTE7_GrottoPokemon_4

