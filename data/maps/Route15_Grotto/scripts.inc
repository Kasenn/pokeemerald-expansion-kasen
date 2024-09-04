Route15_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE15_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, ROUTE15_Grotto_SetObject
	.byte 0


ROUTE15_Grotto_SetObject::
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_Grotto_SetObject_2
ROUTE15_Grotto_SetObject_1:
	compare VAR_GROTTO_4, 40
	goto_if_ge ROUTE15_Grotto_SetObject_6
ROUTE15_Grotto_SetObject_4:
	compare VAR_GROTTO_4, 55
	goto_if_ge ROUTE15_Grotto_SetObject_11
ROUTE15_Grotto_SetObject_9:
	compare VAR_GROTTO_4, 70
	goto_if_ge ROUTE15_Grotto_SetObject_16
ROUTE15_Grotto_SetObject_14:
	compare VAR_GROTTO_4, 85
	goto_if_ge ROUTE15_Grotto_SetObject_21
ROUTE15_Grotto_SetObject_19:
	end

ROUTE15_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE15_Grotto_SetObject_1

ROUTE15_Grotto_SetObject_5:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( CLEFFA )
	goto ROUTE15_Grotto_SetObject_4

ROUTE15_Grotto_SetObject_6:
	compare VAR_GROTTO_4, 54
	goto_if_le ROUTE15_Grotto_SetObject_5
	goto ROUTE15_Grotto_SetObject_4

ROUTE15_Grotto_SetObject_10:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( IGGLYBUFF )
	goto ROUTE15_Grotto_SetObject_9

ROUTE15_Grotto_SetObject_11:
	compare VAR_GROTTO_4, 69
	goto_if_le ROUTE15_Grotto_SetObject_10
	goto ROUTE15_Grotto_SetObject_9

ROUTE15_Grotto_SetObject_15:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( NATU )
	goto ROUTE15_Grotto_SetObject_14

ROUTE15_Grotto_SetObject_16:
	compare VAR_GROTTO_4, 84
	goto_if_le ROUTE15_Grotto_SetObject_15
	goto ROUTE15_Grotto_SetObject_14

ROUTE15_Grotto_SetObject_20:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNEASEL )
	goto ROUTE15_Grotto_SetObject_19

ROUTE15_Grotto_SetObject_21:
	compare VAR_GROTTO_4, 99
	goto_if_le ROUTE15_Grotto_SetObject_20
	goto ROUTE15_Grotto_SetObject_19


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
	compare VAR_GROTTO_4, 4
	goto_if_ge ROUTE15_GrottoItem_37
ROUTE15_GrottoItem_35:
	compare VAR_GROTTO_4, 8
	goto_if_ge ROUTE15_GrottoItem_34
ROUTE15_GrottoItem_32:
	compare VAR_GROTTO_4, 12
	goto_if_ge ROUTE15_GrottoItem_31
ROUTE15_GrottoItem_29:
	compare VAR_GROTTO_4, 16
	goto_if_ge ROUTE15_GrottoItem_28
ROUTE15_GrottoItem_26:
	compare VAR_GROTTO_4, 20
	goto_if_ge ROUTE15_GrottoItem_25
ROUTE15_GrottoItem_23:
	compare VAR_GROTTO_4, 24
	goto_if_ge ROUTE15_GrottoItem_22
ROUTE15_GrottoItem_20:
	compare VAR_GROTTO_4, 28
	goto_if_ge ROUTE15_GrottoItem_19
ROUTE15_GrottoItem_17:
	compare VAR_GROTTO_4, 32
	goto_if_ge ROUTE15_GrottoItem_16
ROUTE15_GrottoItem_14:
	compare VAR_GROTTO_4, 36
	goto_if_ge ROUTE15_GrottoItem_13
ROUTE15_GrottoItem_12:
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

ROUTE15_GrottoItem_13:
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_GrottoItem_11
	goto ROUTE15_GrottoItem_12

ROUTE15_GrottoItem_16:
	compare VAR_GROTTO_4, 35
	goto_if_le ROUTE15_GrottoItem_10
	goto ROUTE15_GrottoItem_14

ROUTE15_GrottoItem_19:
	compare VAR_GROTTO_4, 31
	goto_if_le ROUTE15_GrottoItem_9
	goto ROUTE15_GrottoItem_17

ROUTE15_GrottoItem_22:
	compare VAR_GROTTO_4, 27
	goto_if_le ROUTE15_GrottoItem_8
	goto ROUTE15_GrottoItem_20

ROUTE15_GrottoItem_25:
	compare VAR_GROTTO_4, 23
	goto_if_le ROUTE15_GrottoItem_7
	goto ROUTE15_GrottoItem_23

ROUTE15_GrottoItem_28:
	compare VAR_GROTTO_4, 19
	goto_if_le ROUTE15_GrottoItem_6
	goto ROUTE15_GrottoItem_26

ROUTE15_GrottoItem_31:
	compare VAR_GROTTO_4, 15
	goto_if_le ROUTE15_GrottoItem_5
	goto ROUTE15_GrottoItem_29

ROUTE15_GrottoItem_34:
	compare VAR_GROTTO_4, 11
	goto_if_le ROUTE15_GrottoItem_4
	goto ROUTE15_GrottoItem_32

ROUTE15_GrottoItem_37:
	compare VAR_GROTTO_4, 7
	goto_if_le ROUTE15_GrottoItem_3
	goto ROUTE15_GrottoItem_35


ROUTE15_GrottoPokemon::
	lockall
	compare VAR_GROTTO_4, 40
	goto_if_ge ROUTE15_GrottoPokemon_3
ROUTE15_GrottoPokemon_1:
	compare VAR_GROTTO_4, 55
	goto_if_ge ROUTE15_GrottoPokemon_8
ROUTE15_GrottoPokemon_6:
	compare VAR_GROTTO_4, 70
	goto_if_ge ROUTE15_GrottoPokemon_13
ROUTE15_GrottoPokemon_11:
	compare VAR_GROTTO_4, 85
	goto_if_ge ROUTE15_GrottoPokemon_18
ROUTE15_GrottoPokemon_16:
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
	compare VAR_GROTTO_4, 54
	goto_if_le ROUTE15_GrottoPokemon_2
	goto ROUTE15_GrottoPokemon_1

ROUTE15_GrottoPokemon_7:
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_IGGLYBUFF, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_6

ROUTE15_GrottoPokemon_8:
	compare VAR_GROTTO_4, 69
	goto_if_le ROUTE15_GrottoPokemon_7
	goto ROUTE15_GrottoPokemon_6

ROUTE15_GrottoPokemon_12:
	playmoncry SPECIES_NATU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_NATU, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_11

ROUTE15_GrottoPokemon_13:
	compare VAR_GROTTO_4, 84
	goto_if_le ROUTE15_GrottoPokemon_12
	goto ROUTE15_GrottoPokemon_11

ROUTE15_GrottoPokemon_17:
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_SNEASEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_16

ROUTE15_GrottoPokemon_18:
	compare VAR_GROTTO_4, 99
	goto_if_le ROUTE15_GrottoPokemon_17
	goto ROUTE15_GrottoPokemon_16

