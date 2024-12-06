Route15_Grotto_MapScripts::
# 2 "data/maps/Route15_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE15_Grotto_SetObject
# 3 "data/maps/Route15_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ROUTE15_Grotto_SetObject
	.byte 0


ROUTE15_Grotto_SetObject::
# 7 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_Grotto_SetObject_2
ROUTE15_Grotto_SetObject_1:
# 10 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 40
	goto_if_ge ROUTE15_Grotto_SetObject_6
ROUTE15_Grotto_SetObject_4:
# 13 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 55
	goto_if_ge ROUTE15_Grotto_SetObject_11
ROUTE15_Grotto_SetObject_9:
# 16 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 70
	goto_if_ge ROUTE15_Grotto_SetObject_16
ROUTE15_Grotto_SetObject_14:
# 19 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 85
	goto_if_ge ROUTE15_Grotto_SetObject_21
ROUTE15_Grotto_SetObject_19:
	end

ROUTE15_Grotto_SetObject_2:
# 8 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE15_Grotto_SetObject_1

ROUTE15_Grotto_SetObject_5:
# 11 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( CLEFFA )
	goto ROUTE15_Grotto_SetObject_4

ROUTE15_Grotto_SetObject_6:
# 10 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 54
	goto_if_le ROUTE15_Grotto_SetObject_5
	goto ROUTE15_Grotto_SetObject_4

ROUTE15_Grotto_SetObject_10:
# 14 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( IGGLYBUFF )
	goto ROUTE15_Grotto_SetObject_9

ROUTE15_Grotto_SetObject_11:
# 13 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 69
	goto_if_le ROUTE15_Grotto_SetObject_10
	goto ROUTE15_Grotto_SetObject_9

ROUTE15_Grotto_SetObject_15:
# 17 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( NATU )
	goto ROUTE15_Grotto_SetObject_14

ROUTE15_Grotto_SetObject_16:
# 16 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 84
	goto_if_le ROUTE15_Grotto_SetObject_15
	goto ROUTE15_Grotto_SetObject_14

ROUTE15_Grotto_SetObject_20:
# 20 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNEASEL )
	goto ROUTE15_Grotto_SetObject_19

ROUTE15_Grotto_SetObject_21:
# 19 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 99
	goto_if_le ROUTE15_Grotto_SetObject_20
	goto ROUTE15_Grotto_SetObject_19


ROUTE15_GrottoInteract::
# 25 "data/maps/Route15_Grotto/scripts.pory"
	faceplayer
# 26 "data/maps/Route15_Grotto/scripts.pory"
	lockall
# 27 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_GrottoInteract_2
# 31 "data/maps/Route15_Grotto/scripts.pory"
	goto ROUTE15_GrottoPokemon
ROUTE15_GrottoInteract_1:
	end

ROUTE15_GrottoInteract_2:
# 28 "data/maps/Route15_Grotto/scripts.pory"
	goto ROUTE15_GrottoItem
	goto ROUTE15_GrottoInteract_1


ROUTE15_GrottoItem::
# 37 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 3
	goto_if_le ROUTE15_GrottoItem_2
# 40 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 4
	goto_if_ge ROUTE15_GrottoItem_37
ROUTE15_GrottoItem_35:
# 43 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 8
	goto_if_ge ROUTE15_GrottoItem_34
ROUTE15_GrottoItem_32:
# 46 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 12
	goto_if_ge ROUTE15_GrottoItem_31
ROUTE15_GrottoItem_29:
# 49 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 16
	goto_if_ge ROUTE15_GrottoItem_28
ROUTE15_GrottoItem_26:
# 52 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 20
	goto_if_ge ROUTE15_GrottoItem_25
ROUTE15_GrottoItem_23:
# 55 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 24
	goto_if_ge ROUTE15_GrottoItem_22
ROUTE15_GrottoItem_20:
# 58 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 28
	goto_if_ge ROUTE15_GrottoItem_19
ROUTE15_GrottoItem_17:
# 61 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 32
	goto_if_ge ROUTE15_GrottoItem_16
ROUTE15_GrottoItem_14:
# 64 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 36
	goto_if_ge ROUTE15_GrottoItem_13
ROUTE15_GrottoItem_12:
# 68 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_NUGGET
ROUTE15_GrottoItem_1:
# 70 "data/maps/Route15_Grotto/scripts.pory"
	waitfanfare
# 71 "data/maps/Route15_Grotto/scripts.pory"
	waitmessage
# 72 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_GROTTO_4, 0
# 73 "data/maps/Route15_Grotto/scripts.pory"
	closemessage
# 74 "data/maps/Route15_Grotto/scripts.pory"
	release
	end

ROUTE15_GrottoItem_2:
# 38 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_3:
# 41 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_4:
# 44 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_5:
# 47 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_6:
# 50 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_7:
# 53 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_8:
# 56 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_9:
# 59 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_10:
# 62 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_11:
# 65 "data/maps/Route15_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto ROUTE15_GrottoItem_1

ROUTE15_GrottoItem_13:
# 64 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le ROUTE15_GrottoItem_11
	goto ROUTE15_GrottoItem_12

ROUTE15_GrottoItem_16:
# 61 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 35
	goto_if_le ROUTE15_GrottoItem_10
	goto ROUTE15_GrottoItem_14

ROUTE15_GrottoItem_19:
# 58 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 31
	goto_if_le ROUTE15_GrottoItem_9
	goto ROUTE15_GrottoItem_17

ROUTE15_GrottoItem_22:
# 55 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 27
	goto_if_le ROUTE15_GrottoItem_8
	goto ROUTE15_GrottoItem_20

ROUTE15_GrottoItem_25:
# 52 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 23
	goto_if_le ROUTE15_GrottoItem_7
	goto ROUTE15_GrottoItem_23

ROUTE15_GrottoItem_28:
# 49 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 19
	goto_if_le ROUTE15_GrottoItem_6
	goto ROUTE15_GrottoItem_26

ROUTE15_GrottoItem_31:
# 46 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 15
	goto_if_le ROUTE15_GrottoItem_5
	goto ROUTE15_GrottoItem_29

ROUTE15_GrottoItem_34:
# 43 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 11
	goto_if_le ROUTE15_GrottoItem_4
	goto ROUTE15_GrottoItem_32

ROUTE15_GrottoItem_37:
# 40 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 7
	goto_if_le ROUTE15_GrottoItem_3
	goto ROUTE15_GrottoItem_35


ROUTE15_GrottoPokemon::
# 79 "data/maps/Route15_Grotto/scripts.pory"
	lockall
# 80 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 40
	goto_if_ge ROUTE15_GrottoPokemon_3
ROUTE15_GrottoPokemon_1:
# 86 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 55
	goto_if_ge ROUTE15_GrottoPokemon_8
ROUTE15_GrottoPokemon_6:
# 92 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 70
	goto_if_ge ROUTE15_GrottoPokemon_13
ROUTE15_GrottoPokemon_11:
# 98 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 85
	goto_if_ge ROUTE15_GrottoPokemon_18
ROUTE15_GrottoPokemon_16:
# 104 "data/maps/Route15_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 105 "data/maps/Route15_Grotto/scripts.pory"
	dowildbattle
# 106 "data/maps/Route15_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 107 "data/maps/Route15_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_4
# 108 "data/maps/Route15_Grotto/scripts.pory"
	setvar VAR_GROTTO_4, 0
# 109 "data/maps/Route15_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 110 "data/maps/Route15_Grotto/scripts.pory"
	release
	end

ROUTE15_GrottoPokemon_2:
# 81 "data/maps/Route15_Grotto/scripts.pory"
	playmoncry SPECIES_CLEFFA, CRY_MODE_ENCOUNTER
# 82 "data/maps/Route15_Grotto/scripts.pory"
	delay 40
# 83 "data/maps/Route15_Grotto/scripts.pory"
	waitmoncry
# 84 "data/maps/Route15_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_CLEFFA, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_1

ROUTE15_GrottoPokemon_3:
# 80 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 54
	goto_if_le ROUTE15_GrottoPokemon_2
	goto ROUTE15_GrottoPokemon_1

ROUTE15_GrottoPokemon_7:
# 87 "data/maps/Route15_Grotto/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_ENCOUNTER
# 88 "data/maps/Route15_Grotto/scripts.pory"
	delay 40
# 89 "data/maps/Route15_Grotto/scripts.pory"
	waitmoncry
# 90 "data/maps/Route15_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_IGGLYBUFF, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_6

ROUTE15_GrottoPokemon_8:
# 86 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 69
	goto_if_le ROUTE15_GrottoPokemon_7
	goto ROUTE15_GrottoPokemon_6

ROUTE15_GrottoPokemon_12:
# 93 "data/maps/Route15_Grotto/scripts.pory"
	playmoncry SPECIES_NATU, CRY_MODE_ENCOUNTER
# 94 "data/maps/Route15_Grotto/scripts.pory"
	delay 40
# 95 "data/maps/Route15_Grotto/scripts.pory"
	waitmoncry
# 96 "data/maps/Route15_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_NATU, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_11

ROUTE15_GrottoPokemon_13:
# 92 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 84
	goto_if_le ROUTE15_GrottoPokemon_12
	goto ROUTE15_GrottoPokemon_11

ROUTE15_GrottoPokemon_17:
# 99 "data/maps/Route15_Grotto/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 100 "data/maps/Route15_Grotto/scripts.pory"
	delay 40
# 101 "data/maps/Route15_Grotto/scripts.pory"
	waitmoncry
# 102 "data/maps/Route15_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_SNEASEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE15_GrottoPokemon_16

ROUTE15_GrottoPokemon_18:
# 98 "data/maps/Route15_Grotto/scripts.pory"
	compare VAR_GROTTO_4, 99
	goto_if_le ROUTE15_GrottoPokemon_17
	goto ROUTE15_GrottoPokemon_16

