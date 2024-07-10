Route14_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE14_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, ROUTE14_Grotto_SetObject
	.byte 0


ROUTE14_Grotto_SetObject::
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_Grotto_SetObject_2
ROUTE14_Grotto_SetObject_1:
	compare VAR_GROTTO_3, 40
	goto_if_ge ROUTE14_Grotto_SetObject_5
ROUTE14_Grotto_SetObject_4:
	end

ROUTE14_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE14_Grotto_SetObject_1

ROUTE14_Grotto_SetObject_5:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TRICK_HOUSE_STATUE
	goto ROUTE14_Grotto_SetObject_4


ROUTE14_GrottoInteract::
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
	compare VAR_GROTTO_3, 4
	goto_if_ge ROUTE14_GrottoItem_37
ROUTE14_GrottoItem_35:
	compare VAR_GROTTO_3, 8
	goto_if_ge ROUTE14_GrottoItem_34
ROUTE14_GrottoItem_32:
	compare VAR_GROTTO_3, 12
	goto_if_ge ROUTE14_GrottoItem_31
ROUTE14_GrottoItem_29:
	compare VAR_GROTTO_3, 16
	goto_if_ge ROUTE14_GrottoItem_28
ROUTE14_GrottoItem_26:
	compare VAR_GROTTO_3, 20
	goto_if_ge ROUTE14_GrottoItem_25
ROUTE14_GrottoItem_23:
	compare VAR_GROTTO_3, 24
	goto_if_ge ROUTE14_GrottoItem_22
ROUTE14_GrottoItem_20:
	compare VAR_GROTTO_3, 28
	goto_if_ge ROUTE14_GrottoItem_19
ROUTE14_GrottoItem_17:
	compare VAR_GROTTO_3, 32
	goto_if_ge ROUTE14_GrottoItem_16
ROUTE14_GrottoItem_14:
	compare VAR_GROTTO_3, 36
	goto_if_ge ROUTE14_GrottoItem_13
ROUTE14_GrottoItem_12:
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

ROUTE14_GrottoItem_13:
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_GrottoItem_11
	goto ROUTE14_GrottoItem_12

ROUTE14_GrottoItem_16:
	compare VAR_GROTTO_3, 35
	goto_if_le ROUTE14_GrottoItem_10
	goto ROUTE14_GrottoItem_14

ROUTE14_GrottoItem_19:
	compare VAR_GROTTO_3, 31
	goto_if_le ROUTE14_GrottoItem_9
	goto ROUTE14_GrottoItem_17

ROUTE14_GrottoItem_22:
	compare VAR_GROTTO_3, 27
	goto_if_le ROUTE14_GrottoItem_8
	goto ROUTE14_GrottoItem_20

ROUTE14_GrottoItem_25:
	compare VAR_GROTTO_3, 23
	goto_if_le ROUTE14_GrottoItem_7
	goto ROUTE14_GrottoItem_23

ROUTE14_GrottoItem_28:
	compare VAR_GROTTO_3, 19
	goto_if_le ROUTE14_GrottoItem_6
	goto ROUTE14_GrottoItem_26

ROUTE14_GrottoItem_31:
	compare VAR_GROTTO_3, 15
	goto_if_le ROUTE14_GrottoItem_5
	goto ROUTE14_GrottoItem_29

ROUTE14_GrottoItem_34:
	compare VAR_GROTTO_3, 11
	goto_if_le ROUTE14_GrottoItem_4
	goto ROUTE14_GrottoItem_32

ROUTE14_GrottoItem_37:
	compare VAR_GROTTO_3, 7
	goto_if_le ROUTE14_GrottoItem_3
	goto ROUTE14_GrottoItem_35


ROUTE14_GrottoPokemon::
	lockall
	compare VAR_GROTTO_3, 40
	goto_if_ge ROUTE14_GrottoPokemon_3
ROUTE14_GrottoPokemon_1:
	compare VAR_GROTTO_3, 55
	goto_if_ge ROUTE14_GrottoPokemon_8
ROUTE14_GrottoPokemon_6:
	compare VAR_GROTTO_3, 70
	goto_if_ge ROUTE14_GrottoPokemon_13
ROUTE14_GrottoPokemon_11:
	compare VAR_GROTTO_3, 85
	goto_if_ge ROUTE14_GrottoPokemon_18
ROUTE14_GrottoPokemon_16:
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
	compare VAR_GROTTO_3, 54
	goto_if_le ROUTE14_GrottoPokemon_2
	goto ROUTE14_GrottoPokemon_1

ROUTE14_GrottoPokemon_7:
	playmoncry SPECIES_TOXEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_TOXEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_6

ROUTE14_GrottoPokemon_8:
	compare VAR_GROTTO_3, 69
	goto_if_le ROUTE14_GrottoPokemon_7
	goto ROUTE14_GrottoPokemon_6

ROUTE14_GrottoPokemon_12:
	playmoncry SPECIES_CUBCHOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_CUBCHOO, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_11

ROUTE14_GrottoPokemon_13:
	compare VAR_GROTTO_3, 84
	goto_if_le ROUTE14_GrottoPokemon_12
	goto ROUTE14_GrottoPokemon_11

ROUTE14_GrottoPokemon_17:
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_SNEASEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_16

ROUTE14_GrottoPokemon_18:
	compare VAR_GROTTO_3, 99
	goto_if_le ROUTE14_GrottoPokemon_17
	goto ROUTE14_GrottoPokemon_16

