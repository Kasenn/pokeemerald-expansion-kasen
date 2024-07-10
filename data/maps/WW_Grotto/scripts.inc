WW_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WW_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, WW_Grotto_SetObject
	.byte 0


WW_Grotto_SetObject::
	compare VAR_GROTTO_1, 39
	goto_if_le WW_Grotto_SetObject_2
WW_Grotto_SetObject_1:
	compare VAR_GROTTO_1, 40
	goto_if_ge WW_Grotto_SetObject_5
WW_Grotto_SetObject_4:
	end

WW_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto WW_Grotto_SetObject_1

WW_Grotto_SetObject_5:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TRICK_HOUSE_STATUE
	goto WW_Grotto_SetObject_4


WW_GrottoInteract::
	lockall
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoInteract_2
	goto WW_GrottoPokemon
WW_GrottoInteract_1:
	end

WW_GrottoInteract_2:
	goto WW_GrottoItem
	goto WW_GrottoInteract_1


WW_GrottoItem::
	compare VAR_GROTTO_3, 3
	goto_if_le WW_GrottoItem_2
	compare VAR_GROTTO_3, 4
	goto_if_ge WW_GrottoItem_37
WW_GrottoItem_35:
	compare VAR_GROTTO_3, 8
	goto_if_ge WW_GrottoItem_34
WW_GrottoItem_32:
	compare VAR_GROTTO_3, 12
	goto_if_ge WW_GrottoItem_31
WW_GrottoItem_29:
	compare VAR_GROTTO_3, 16
	goto_if_ge WW_GrottoItem_28
WW_GrottoItem_26:
	compare VAR_GROTTO_3, 20
	goto_if_ge WW_GrottoItem_25
WW_GrottoItem_23:
	compare VAR_GROTTO_3, 24
	goto_if_ge WW_GrottoItem_22
WW_GrottoItem_20:
	compare VAR_GROTTO_3, 28
	goto_if_ge WW_GrottoItem_19
WW_GrottoItem_17:
	compare VAR_GROTTO_3, 32
	goto_if_ge WW_GrottoItem_16
WW_GrottoItem_14:
	compare VAR_GROTTO_3, 36
	goto_if_ge WW_GrottoItem_13
WW_GrottoItem_12:
	finditem ITEM_NUGGET
WW_GrottoItem_1:
	waitfanfare
	waitmessage
	setvar VAR_GROTTO_1, 0
	closemessage
	release
	end

WW_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_3:
	finditem ITEM_SUPER_REPEL
	goto WW_GrottoItem_1

WW_GrottoItem_4:
	finditem ITEM_SUPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_5:
	finditem ITEM_ULTRA_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_6:
	finditem ITEM_FULL_HEAL
	goto WW_GrottoItem_1

WW_GrottoItem_7:
	finditem ITEM_HYPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_8:
	finditem ITEM_FIRE_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_9:
	finditem ITEM_THUNDER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_10:
	finditem ITEM_WATER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_11:
	finditem ITEM_LEAF_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_13:
	compare VAR_GROTTO_3, 39
	goto_if_le WW_GrottoItem_11
	goto WW_GrottoItem_12

WW_GrottoItem_16:
	compare VAR_GROTTO_3, 35
	goto_if_le WW_GrottoItem_10
	goto WW_GrottoItem_14

WW_GrottoItem_19:
	compare VAR_GROTTO_3, 31
	goto_if_le WW_GrottoItem_9
	goto WW_GrottoItem_17

WW_GrottoItem_22:
	compare VAR_GROTTO_3, 27
	goto_if_le WW_GrottoItem_8
	goto WW_GrottoItem_20

WW_GrottoItem_25:
	compare VAR_GROTTO_3, 23
	goto_if_le WW_GrottoItem_7
	goto WW_GrottoItem_23

WW_GrottoItem_28:
	compare VAR_GROTTO_3, 19
	goto_if_le WW_GrottoItem_6
	goto WW_GrottoItem_26

WW_GrottoItem_31:
	compare VAR_GROTTO_3, 15
	goto_if_le WW_GrottoItem_5
	goto WW_GrottoItem_29

WW_GrottoItem_34:
	compare VAR_GROTTO_3, 11
	goto_if_le WW_GrottoItem_4
	goto WW_GrottoItem_32

WW_GrottoItem_37:
	compare VAR_GROTTO_3, 7
	goto_if_le WW_GrottoItem_3
	goto WW_GrottoItem_35


WW_GrottoPokemon::
	lockall
	compare VAR_GROTTO_1, 40
	goto_if_ge WW_GrottoPokemon_3
WW_GrottoPokemon_1:
	compare VAR_GROTTO_1, 55
	goto_if_ge WW_GrottoPokemon_8
WW_GrottoPokemon_6:
	compare VAR_GROTTO_1, 70
	goto_if_ge WW_GrottoPokemon_13
WW_GrottoPokemon_11:
	compare VAR_GROTTO_1, 85
	goto_if_ge WW_GrottoPokemon_18
WW_GrottoPokemon_16:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DAILY_GROTTO_1
	setvar VAR_GROTTO_1, 0
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

WW_GrottoPokemon_2:
	playmoncry SPECIES_TOGEPI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_TOGEPI, 7
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_3:
	compare VAR_GROTTO_1, 54
	goto_if_le WW_GrottoPokemon_2
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_7:
	playmoncry SPECIES_SWABLU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SWABLU, 7
	goto WW_GrottoPokemon_6

WW_GrottoPokemon_8:
	compare VAR_GROTTO_1, 69
	goto_if_le WW_GrottoPokemon_7
	goto WW_GrottoPokemon_6

WW_GrottoPokemon_12:
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GLIGAR, 7
	goto WW_GrottoPokemon_11

WW_GrottoPokemon_13:
	compare VAR_GROTTO_1, 84
	goto_if_le WW_GrottoPokemon_12
	goto WW_GrottoPokemon_11

WW_GrottoPokemon_17:
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SNEASEL, 7
	goto WW_GrottoPokemon_16

WW_GrottoPokemon_18:
	compare VAR_GROTTO_1, 99
	goto_if_le WW_GrottoPokemon_17
	goto WW_GrottoPokemon_16

