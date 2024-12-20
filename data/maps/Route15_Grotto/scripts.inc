Route15_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE15_Grotto_SetObject
	.byte 0


ROUTE15_Grotto_SetObject::
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_Grotto_SetObject_2
	compare VAR_GROTTO_4, 59
	goto_if_le ROUTE15_Grotto_SetObject_3
	compare VAR_GROTTO_4, 79
	goto_if_le ROUTE15_Grotto_SetObject_4
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( NATU )
ROUTE15_Grotto_SetObject_1:
	end

ROUTE15_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE15_Grotto_SetObject_1

ROUTE15_Grotto_SetObject_3:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( CLEFFA )
	goto ROUTE15_Grotto_SetObject_1

ROUTE15_Grotto_SetObject_4:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( IGGLYBUFF )
	goto ROUTE15_Grotto_SetObject_1


ROUTE15_GrottoInteract::
	faceplayer
	lockall
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_GrottoInteract_2
	goto ROUTE15_GrottoPokemon
ROUTE15_GrottoInteract_1:
	end

ROUTE15_GrottoInteract_2:
	goto ROUTE15_GrottoItem
	goto ROUTE15_GrottoInteract_1


ROUTE15_GrottoItem::
	compare VAR_GROTTO_4, 3
	goto_if_le ROUTE15_GrottoItem_2
	compare VAR_GROTTO_4, 7
	goto_if_le ROUTE15_GrottoItem_3
	compare VAR_GROTTO_4, 11
	goto_if_le ROUTE15_GrottoItem_4
	compare VAR_GROTTO_4, 15
	goto_if_le ROUTE15_GrottoItem_5
	compare VAR_GROTTO_4, 19
	goto_if_le ROUTE15_GrottoItem_6
	compare VAR_GROTTO_4, 23
	goto_if_le ROUTE15_GrottoItem_7
	compare VAR_GROTTO_4, 27
	goto_if_le ROUTE15_GrottoItem_8
	compare VAR_GROTTO_4, 31
	goto_if_le ROUTE15_GrottoItem_9
	compare VAR_GROTTO_4, 35
	goto_if_le ROUTE15_GrottoItem_10
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_GrottoItem_11
	finditem ITEM_NUGGET
ROUTE15_GrottoItem_1:
	waitfanfare
	waitmessage
	setvar VAR_GROTTO_4, 0
	closemessage
	release
	end

ROUTE15_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_3:
	finditem ITEM_SUPER_REPEL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_4:
	finditem ITEM_SUPER_POTION
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_5:
	finditem ITEM_ULTRA_BALL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_6:
	finditem ITEM_FULL_HEAL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_7:
	finditem ITEM_HYPER_POTION
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_8:
	finditem ITEM_FIRE_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_9:
	finditem ITEM_THUNDER_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_10:
	finditem ITEM_WATER_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_11:
	finditem ITEM_LEAF_STONE
	goto ROUTE15_GrottoItem_1


ROUTE15_GrottoPokemon::
	lockall
	compare VAR_GROTTO_4, 59
	goto_if_le ROUTE15_GrottoPokemon_2
	compare VAR_GROTTO_4, 79
	goto_if_le ROUTE15_GrottoPokemon_3
	playmoncry SPECIES_NATU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_NATU, 30, ITEM_NONE, SPECIES_NONE, 33
ROUTE15_GrottoPokemon_1:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DAILY_GROTTO_4
	setvar VAR_GROTTO_4, 0
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

ROUTE15_GrottoPokemon_2:
	playmoncry SPECIES_CLEFFA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_CLEFFA, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_1

ROUTE15_GrottoPokemon_3:
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_IGGLYBUFF, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_1

