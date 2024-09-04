Route7_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE7_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, ROUTE7_Grotto_SetObject
	.byte 0


ROUTE7_Grotto_SetObject::
	compare VAR_GROTTO_2, 39
	goto_if_le ROUTE7_Grotto_SetObject_2
ROUTE7_Grotto_SetObject_1:
	compare VAR_GROTTO_2, 40
	goto_if_ge ROUTE7_Grotto_SetObject_6
ROUTE7_Grotto_SetObject_4:
	compare VAR_GROTTO_2, 55
	goto_if_ge ROUTE7_Grotto_SetObject_11
ROUTE7_Grotto_SetObject_9:
	compare VAR_GROTTO_2, 70
	goto_if_ge ROUTE7_Grotto_SetObject_16
ROUTE7_Grotto_SetObject_14:
	compare VAR_GROTTO_2, 85
	goto_if_ge ROUTE7_Grotto_SetObject_21
ROUTE7_Grotto_SetObject_19:
	end

ROUTE7_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE7_Grotto_SetObject_1

ROUTE7_Grotto_SetObject_5:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ABSOL )
	goto ROUTE7_Grotto_SetObject_4

ROUTE7_Grotto_SetObject_6:
	compare VAR_GROTTO_2, 54
	goto_if_le ROUTE7_Grotto_SetObject_5
	goto ROUTE7_Grotto_SetObject_4

ROUTE7_Grotto_SetObject_10:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( VULPIX_ALOLAN )
	goto ROUTE7_Grotto_SetObject_9

ROUTE7_Grotto_SetObject_11:
	compare VAR_GROTTO_2, 69
	goto_if_le ROUTE7_Grotto_SetObject_10
	goto ROUTE7_Grotto_SetObject_9

ROUTE7_Grotto_SetObject_15:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SKORUPI )
	goto ROUTE7_Grotto_SetObject_14

ROUTE7_Grotto_SetObject_16:
	compare VAR_GROTTO_2, 84
	goto_if_le ROUTE7_Grotto_SetObject_15
	goto ROUTE7_Grotto_SetObject_14

ROUTE7_Grotto_SetObject_20:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNEASEL )
	goto ROUTE7_Grotto_SetObject_19

ROUTE7_Grotto_SetObject_21:
	compare VAR_GROTTO_2, 99
	goto_if_le ROUTE7_Grotto_SetObject_20
	goto ROUTE7_Grotto_SetObject_19


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
	compare VAR_GROTTO_3, 3
	goto_if_le ROUTE7_GrottoItem_2
	compare VAR_GROTTO_3, 4
	goto_if_ge ROUTE7_GrottoItem_37
ROUTE7_GrottoItem_35:
	compare VAR_GROTTO_3, 8
	goto_if_ge ROUTE7_GrottoItem_34
ROUTE7_GrottoItem_32:
	compare VAR_GROTTO_3, 12
	goto_if_ge ROUTE7_GrottoItem_31
ROUTE7_GrottoItem_29:
	compare VAR_GROTTO_3, 16
	goto_if_ge ROUTE7_GrottoItem_28
ROUTE7_GrottoItem_26:
	compare VAR_GROTTO_3, 20
	goto_if_ge ROUTE7_GrottoItem_25
ROUTE7_GrottoItem_23:
	compare VAR_GROTTO_3, 24
	goto_if_ge ROUTE7_GrottoItem_22
ROUTE7_GrottoItem_20:
	compare VAR_GROTTO_3, 28
	goto_if_ge ROUTE7_GrottoItem_19
ROUTE7_GrottoItem_17:
	compare VAR_GROTTO_3, 32
	goto_if_ge ROUTE7_GrottoItem_16
ROUTE7_GrottoItem_14:
	compare VAR_GROTTO_3, 36
	goto_if_ge ROUTE7_GrottoItem_13
ROUTE7_GrottoItem_12:
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

ROUTE7_GrottoItem_13:
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE7_GrottoItem_11
	goto ROUTE7_GrottoItem_12

ROUTE7_GrottoItem_16:
	compare VAR_GROTTO_3, 35
	goto_if_le ROUTE7_GrottoItem_10
	goto ROUTE7_GrottoItem_14

ROUTE7_GrottoItem_19:
	compare VAR_GROTTO_3, 31
	goto_if_le ROUTE7_GrottoItem_9
	goto ROUTE7_GrottoItem_17

ROUTE7_GrottoItem_22:
	compare VAR_GROTTO_3, 27
	goto_if_le ROUTE7_GrottoItem_8
	goto ROUTE7_GrottoItem_20

ROUTE7_GrottoItem_25:
	compare VAR_GROTTO_3, 23
	goto_if_le ROUTE7_GrottoItem_7
	goto ROUTE7_GrottoItem_23

ROUTE7_GrottoItem_28:
	compare VAR_GROTTO_3, 19
	goto_if_le ROUTE7_GrottoItem_6
	goto ROUTE7_GrottoItem_26

ROUTE7_GrottoItem_31:
	compare VAR_GROTTO_3, 15
	goto_if_le ROUTE7_GrottoItem_5
	goto ROUTE7_GrottoItem_29

ROUTE7_GrottoItem_34:
	compare VAR_GROTTO_3, 11
	goto_if_le ROUTE7_GrottoItem_4
	goto ROUTE7_GrottoItem_32

ROUTE7_GrottoItem_37:
	compare VAR_GROTTO_3, 7
	goto_if_le ROUTE7_GrottoItem_3
	goto ROUTE7_GrottoItem_35


ROUTE7_GrottoPokemon::
	lockall
	compare VAR_GROTTO_2, 40
	goto_if_ge ROUTE7_GrottoPokemon_3
ROUTE7_GrottoPokemon_1:
	compare VAR_GROTTO_2, 55
	goto_if_ge ROUTE7_GrottoPokemon_8
ROUTE7_GrottoPokemon_6:
	compare VAR_GROTTO_2, 70
	goto_if_ge ROUTE7_GrottoPokemon_13
ROUTE7_GrottoPokemon_11:
	compare VAR_GROTTO_2, 85
	goto_if_ge ROUTE7_GrottoPokemon_18
ROUTE7_GrottoPokemon_16:
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

ROUTE7_GrottoPokemon_3:
	compare VAR_GROTTO_2, 54
	goto_if_le ROUTE7_GrottoPokemon_2
	goto ROUTE7_GrottoPokemon_1

ROUTE7_GrottoPokemon_7:
	playmoncry SPECIES_VULPIX_ALOLAN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_VULPIX_ALOLAN, 15, ITEM_NONE, SPECIES_NONE, 19
	goto ROUTE7_GrottoPokemon_6

ROUTE7_GrottoPokemon_8:
	compare VAR_GROTTO_2, 69
	goto_if_le ROUTE7_GrottoPokemon_7
	goto ROUTE7_GrottoPokemon_6

ROUTE7_GrottoPokemon_12:
	playmoncry SPECIES_SKORUPI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_SKORUPI, 15, ITEM_NONE, SPECIES_NONE, 19
	goto ROUTE7_GrottoPokemon_11

ROUTE7_GrottoPokemon_13:
	compare VAR_GROTTO_2, 84
	goto_if_le ROUTE7_GrottoPokemon_12
	goto ROUTE7_GrottoPokemon_11

ROUTE7_GrottoPokemon_17:
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_SNEASEL, 15, ITEM_NONE, SPECIES_NONE, 19
	goto ROUTE7_GrottoPokemon_16

ROUTE7_GrottoPokemon_18:
	compare VAR_GROTTO_2, 99
	goto_if_le ROUTE7_GrottoPokemon_17
	goto ROUTE7_GrottoPokemon_16

