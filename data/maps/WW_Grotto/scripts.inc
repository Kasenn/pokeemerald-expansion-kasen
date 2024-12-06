WW_Grotto_MapScripts::
# 2 "data/maps/WW_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WW_Grotto_SetObject
# 3 "data/maps/WW_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, WW_Grotto_SetObject
	.byte 0


WW_Grotto_SetObject::
# 6 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_Grotto_SetObject_2
WW_Grotto_SetObject_1:
# 9 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 40
	goto_if_ge WW_Grotto_SetObject_6
WW_Grotto_SetObject_4:
# 12 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 55
	goto_if_ge WW_Grotto_SetObject_11
WW_Grotto_SetObject_9:
# 15 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 70
	goto_if_ge WW_Grotto_SetObject_16
WW_Grotto_SetObject_14:
# 18 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 85
	goto_if_ge WW_Grotto_SetObject_21
WW_Grotto_SetObject_19:
	end

WW_Grotto_SetObject_2:
# 7 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto WW_Grotto_SetObject_1

WW_Grotto_SetObject_5:
# 10 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOGEPI )
	goto WW_Grotto_SetObject_4

WW_Grotto_SetObject_6:
# 9 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 54
	goto_if_le WW_Grotto_SetObject_5
	goto WW_Grotto_SetObject_4

WW_Grotto_SetObject_10:
# 13 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SWABLU )
	goto WW_Grotto_SetObject_9

WW_Grotto_SetObject_11:
# 12 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 69
	goto_if_le WW_Grotto_SetObject_10
	goto WW_Grotto_SetObject_9

WW_Grotto_SetObject_15:
# 16 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( GLIGAR )
	goto WW_Grotto_SetObject_14

WW_Grotto_SetObject_16:
# 15 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 84
	goto_if_le WW_Grotto_SetObject_15
	goto WW_Grotto_SetObject_14

WW_Grotto_SetObject_20:
# 19 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNEASEL )
	goto WW_Grotto_SetObject_19

WW_Grotto_SetObject_21:
# 18 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 99
	goto_if_le WW_Grotto_SetObject_20
	goto WW_Grotto_SetObject_19


WW_GrottoInteract::
# 24 "data/maps/WW_Grotto/scripts.pory"
	faceplayer
# 25 "data/maps/WW_Grotto/scripts.pory"
	lockall
# 26 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoInteract_2
# 30 "data/maps/WW_Grotto/scripts.pory"
	goto WW_GrottoPokemon
WW_GrottoInteract_1:
	end

WW_GrottoInteract_2:
# 27 "data/maps/WW_Grotto/scripts.pory"
	goto WW_GrottoItem
	goto WW_GrottoInteract_1


WW_GrottoItem::
# 36 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 3
	goto_if_le WW_GrottoItem_2
# 39 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 4
	goto_if_ge WW_GrottoItem_37
WW_GrottoItem_35:
# 42 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 8
	goto_if_ge WW_GrottoItem_34
WW_GrottoItem_32:
# 45 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 12
	goto_if_ge WW_GrottoItem_31
WW_GrottoItem_29:
# 48 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 16
	goto_if_ge WW_GrottoItem_28
WW_GrottoItem_26:
# 51 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 20
	goto_if_ge WW_GrottoItem_25
WW_GrottoItem_23:
# 54 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 24
	goto_if_ge WW_GrottoItem_22
WW_GrottoItem_20:
# 57 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 28
	goto_if_ge WW_GrottoItem_19
WW_GrottoItem_17:
# 60 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 32
	goto_if_ge WW_GrottoItem_16
WW_GrottoItem_14:
# 63 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 36
	goto_if_ge WW_GrottoItem_13
WW_GrottoItem_12:
# 67 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_NUGGET
WW_GrottoItem_1:
# 69 "data/maps/WW_Grotto/scripts.pory"
	waitfanfare
# 70 "data/maps/WW_Grotto/scripts.pory"
	waitmessage
# 71 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 0
# 72 "data/maps/WW_Grotto/scripts.pory"
	closemessage
# 73 "data/maps/WW_Grotto/scripts.pory"
	release
	end

WW_GrottoItem_2:
# 37 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_3:
# 40 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto WW_GrottoItem_1

WW_GrottoItem_4:
# 43 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_5:
# 46 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_6:
# 49 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto WW_GrottoItem_1

WW_GrottoItem_7:
# 52 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_8:
# 55 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_9:
# 58 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_10:
# 61 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_11:
# 64 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_13:
# 63 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le WW_GrottoItem_11
	goto WW_GrottoItem_12

WW_GrottoItem_16:
# 60 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 35
	goto_if_le WW_GrottoItem_10
	goto WW_GrottoItem_14

WW_GrottoItem_19:
# 57 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 31
	goto_if_le WW_GrottoItem_9
	goto WW_GrottoItem_17

WW_GrottoItem_22:
# 54 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 27
	goto_if_le WW_GrottoItem_8
	goto WW_GrottoItem_20

WW_GrottoItem_25:
# 51 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 23
	goto_if_le WW_GrottoItem_7
	goto WW_GrottoItem_23

WW_GrottoItem_28:
# 48 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 19
	goto_if_le WW_GrottoItem_6
	goto WW_GrottoItem_26

WW_GrottoItem_31:
# 45 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 15
	goto_if_le WW_GrottoItem_5
	goto WW_GrottoItem_29

WW_GrottoItem_34:
# 42 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 11
	goto_if_le WW_GrottoItem_4
	goto WW_GrottoItem_32

WW_GrottoItem_37:
# 39 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_3, 7
	goto_if_le WW_GrottoItem_3
	goto WW_GrottoItem_35


WW_GrottoPokemon::
# 78 "data/maps/WW_Grotto/scripts.pory"
	lockall
# 79 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 40
	goto_if_ge WW_GrottoPokemon_3
WW_GrottoPokemon_1:
# 85 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 55
	goto_if_ge WW_GrottoPokemon_8
WW_GrottoPokemon_6:
# 91 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 70
	goto_if_ge WW_GrottoPokemon_13
WW_GrottoPokemon_11:
# 97 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 85
	goto_if_ge WW_GrottoPokemon_18
WW_GrottoPokemon_16:
# 103 "data/maps/WW_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/WW_Grotto/scripts.pory"
	dowildbattle
# 105 "data/maps/WW_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 106 "data/maps/WW_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_1
# 107 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 0
# 108 "data/maps/WW_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 109 "data/maps/WW_Grotto/scripts.pory"
	release
	end

WW_GrottoPokemon_2:
# 80 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_ENCOUNTER
# 81 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 82 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 83 "data/maps/WW_Grotto/scripts.pory"
	setwildbattle SPECIES_TOGEPI, 7
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_3:
# 79 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 54
	goto_if_le WW_GrottoPokemon_2
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_7:
# 86 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_SWABLU, CRY_MODE_ENCOUNTER
# 87 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 88 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 89 "data/maps/WW_Grotto/scripts.pory"
	setwildbattle SPECIES_SWABLU, 7
	goto WW_GrottoPokemon_6

WW_GrottoPokemon_8:
# 85 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 69
	goto_if_le WW_GrottoPokemon_7
	goto WW_GrottoPokemon_6

WW_GrottoPokemon_12:
# 92 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
# 93 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 94 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 95 "data/maps/WW_Grotto/scripts.pory"
	setwildbattle SPECIES_GLIGAR, 7
	goto WW_GrottoPokemon_11

WW_GrottoPokemon_13:
# 91 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 84
	goto_if_le WW_GrottoPokemon_12
	goto WW_GrottoPokemon_11

WW_GrottoPokemon_17:
# 98 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 99 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 100 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 101 "data/maps/WW_Grotto/scripts.pory"
	setwildbattle SPECIES_SNEASEL, 7
	goto WW_GrottoPokemon_16

WW_GrottoPokemon_18:
# 97 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 99
	goto_if_le WW_GrottoPokemon_17
	goto WW_GrottoPokemon_16

