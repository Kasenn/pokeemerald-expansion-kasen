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
ROUTE14_Grotto_SetObject_1:
# 10 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 40
	goto_if_ge ROUTE14_Grotto_SetObject_6
ROUTE14_Grotto_SetObject_4:
# 13 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 55
	goto_if_ge ROUTE14_Grotto_SetObject_11
ROUTE14_Grotto_SetObject_9:
# 16 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 70
	goto_if_ge ROUTE14_Grotto_SetObject_16
ROUTE14_Grotto_SetObject_14:
# 19 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 85
	goto_if_ge ROUTE14_Grotto_SetObject_21
ROUTE14_Grotto_SetObject_19:
	end

ROUTE14_Grotto_SetObject_2:
# 8 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE14_Grotto_SetObject_1

ROUTE14_Grotto_SetObject_5:
# 11 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( KLEFKI )
	goto ROUTE14_Grotto_SetObject_4

ROUTE14_Grotto_SetObject_6:
# 10 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 54
	goto_if_le ROUTE14_Grotto_SetObject_5
	goto ROUTE14_Grotto_SetObject_4

ROUTE14_Grotto_SetObject_10:
# 14 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOXEL )
	goto ROUTE14_Grotto_SetObject_9

ROUTE14_Grotto_SetObject_11:
# 13 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 69
	goto_if_le ROUTE14_Grotto_SetObject_10
	goto ROUTE14_Grotto_SetObject_9

ROUTE14_Grotto_SetObject_15:
# 17 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( CUBCHOO )
	goto ROUTE14_Grotto_SetObject_14

ROUTE14_Grotto_SetObject_16:
# 16 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 84
	goto_if_le ROUTE14_Grotto_SetObject_15
	goto ROUTE14_Grotto_SetObject_14

ROUTE14_Grotto_SetObject_20:
# 20 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNEASEL )
	goto ROUTE14_Grotto_SetObject_19

ROUTE14_Grotto_SetObject_21:
# 19 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 99
	goto_if_le ROUTE14_Grotto_SetObject_20
	goto ROUTE14_Grotto_SetObject_19


ROUTE14_GrottoInteract::
# 25 "data/maps/Route14_Grotto/scripts.pory"
	faceplayer
# 26 "data/maps/Route14_Grotto/scripts.pory"
	lockall
# 27 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_GrottoInteract_2
# 31 "data/maps/Route14_Grotto/scripts.pory"
	goto ROUTE14_GrottoPokemon
ROUTE14_GrottoInteract_1:
	end

ROUTE14_GrottoInteract_2:
# 28 "data/maps/Route14_Grotto/scripts.pory"
	goto ROUTE14_GrottoItem
	goto ROUTE14_GrottoInteract_1


ROUTE14_GrottoItem::
# 37 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 3
	goto_if_le ROUTE14_GrottoItem_2
# 40 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 4
	goto_if_ge ROUTE14_GrottoItem_37
ROUTE14_GrottoItem_35:
# 43 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 8
	goto_if_ge ROUTE14_GrottoItem_34
ROUTE14_GrottoItem_32:
# 46 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 12
	goto_if_ge ROUTE14_GrottoItem_31
ROUTE14_GrottoItem_29:
# 49 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 16
	goto_if_ge ROUTE14_GrottoItem_28
ROUTE14_GrottoItem_26:
# 52 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 20
	goto_if_ge ROUTE14_GrottoItem_25
ROUTE14_GrottoItem_23:
# 55 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 24
	goto_if_ge ROUTE14_GrottoItem_22
ROUTE14_GrottoItem_20:
# 58 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 28
	goto_if_ge ROUTE14_GrottoItem_19
ROUTE14_GrottoItem_17:
# 61 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 32
	goto_if_ge ROUTE14_GrottoItem_16
ROUTE14_GrottoItem_14:
# 64 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 36
	goto_if_ge ROUTE14_GrottoItem_13
ROUTE14_GrottoItem_12:
# 68 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_NUGGET
ROUTE14_GrottoItem_1:
# 70 "data/maps/Route14_Grotto/scripts.pory"
	waitfanfare
# 71 "data/maps/Route14_Grotto/scripts.pory"
	waitmessage
# 72 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_GROTTO_3, 0
# 73 "data/maps/Route14_Grotto/scripts.pory"
	closemessage
# 74 "data/maps/Route14_Grotto/scripts.pory"
	release
	end

ROUTE14_GrottoItem_2:
# 38 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_3:
# 41 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_4:
# 44 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_5:
# 47 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_6:
# 50 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_7:
# 53 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_8:
# 56 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_9:
# 59 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_10:
# 62 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_11:
# 65 "data/maps/Route14_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_13:
# 64 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le ROUTE14_GrottoItem_11
	goto ROUTE14_GrottoItem_12

ROUTE14_GrottoItem_16:
# 61 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 35
	goto_if_le ROUTE14_GrottoItem_10
	goto ROUTE14_GrottoItem_14

ROUTE14_GrottoItem_19:
# 58 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 31
	goto_if_le ROUTE14_GrottoItem_9
	goto ROUTE14_GrottoItem_17

ROUTE14_GrottoItem_22:
# 55 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 27
	goto_if_le ROUTE14_GrottoItem_8
	goto ROUTE14_GrottoItem_20

ROUTE14_GrottoItem_25:
# 52 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 23
	goto_if_le ROUTE14_GrottoItem_7
	goto ROUTE14_GrottoItem_23

ROUTE14_GrottoItem_28:
# 49 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 19
	goto_if_le ROUTE14_GrottoItem_6
	goto ROUTE14_GrottoItem_26

ROUTE14_GrottoItem_31:
# 46 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 15
	goto_if_le ROUTE14_GrottoItem_5
	goto ROUTE14_GrottoItem_29

ROUTE14_GrottoItem_34:
# 43 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 11
	goto_if_le ROUTE14_GrottoItem_4
	goto ROUTE14_GrottoItem_32

ROUTE14_GrottoItem_37:
# 40 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 7
	goto_if_le ROUTE14_GrottoItem_3
	goto ROUTE14_GrottoItem_35


ROUTE14_GrottoPokemon::
# 79 "data/maps/Route14_Grotto/scripts.pory"
	lockall
# 80 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 40
	goto_if_ge ROUTE14_GrottoPokemon_3
ROUTE14_GrottoPokemon_1:
# 86 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 55
	goto_if_ge ROUTE14_GrottoPokemon_8
ROUTE14_GrottoPokemon_6:
# 92 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 70
	goto_if_ge ROUTE14_GrottoPokemon_13
ROUTE14_GrottoPokemon_11:
# 98 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 85
	goto_if_ge ROUTE14_GrottoPokemon_18
ROUTE14_GrottoPokemon_16:
# 104 "data/maps/Route14_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 105 "data/maps/Route14_Grotto/scripts.pory"
	dowildbattle
# 106 "data/maps/Route14_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 107 "data/maps/Route14_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_3
# 108 "data/maps/Route14_Grotto/scripts.pory"
	setvar VAR_GROTTO_3, 0
# 109 "data/maps/Route14_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 110 "data/maps/Route14_Grotto/scripts.pory"
	release
	end

ROUTE14_GrottoPokemon_2:
# 81 "data/maps/Route14_Grotto/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_ENCOUNTER
# 82 "data/maps/Route14_Grotto/scripts.pory"
	delay 40
# 83 "data/maps/Route14_Grotto/scripts.pory"
	waitmoncry
# 84 "data/maps/Route14_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_KLEFKI, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_1

ROUTE14_GrottoPokemon_3:
# 80 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 54
	goto_if_le ROUTE14_GrottoPokemon_2
	goto ROUTE14_GrottoPokemon_1

ROUTE14_GrottoPokemon_7:
# 87 "data/maps/Route14_Grotto/scripts.pory"
	playmoncry SPECIES_TOXEL, CRY_MODE_ENCOUNTER
# 88 "data/maps/Route14_Grotto/scripts.pory"
	delay 40
# 89 "data/maps/Route14_Grotto/scripts.pory"
	waitmoncry
# 90 "data/maps/Route14_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_TOXEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_6

ROUTE14_GrottoPokemon_8:
# 86 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 69
	goto_if_le ROUTE14_GrottoPokemon_7
	goto ROUTE14_GrottoPokemon_6

ROUTE14_GrottoPokemon_12:
# 93 "data/maps/Route14_Grotto/scripts.pory"
	playmoncry SPECIES_CUBCHOO, CRY_MODE_ENCOUNTER
# 94 "data/maps/Route14_Grotto/scripts.pory"
	delay 40
# 95 "data/maps/Route14_Grotto/scripts.pory"
	waitmoncry
# 96 "data/maps/Route14_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_CUBCHOO, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_11

ROUTE14_GrottoPokemon_13:
# 92 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 84
	goto_if_le ROUTE14_GrottoPokemon_12
	goto ROUTE14_GrottoPokemon_11

ROUTE14_GrottoPokemon_17:
# 99 "data/maps/Route14_Grotto/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 100 "data/maps/Route14_Grotto/scripts.pory"
	delay 40
# 101 "data/maps/Route14_Grotto/scripts.pory"
	waitmoncry
# 102 "data/maps/Route14_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_SNEASEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_16

ROUTE14_GrottoPokemon_18:
# 98 "data/maps/Route14_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 99
	goto_if_le ROUTE14_GrottoPokemon_17
	goto ROUTE14_GrottoPokemon_16

