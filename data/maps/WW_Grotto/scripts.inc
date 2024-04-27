WW_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WW_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, WW_Grotto_SetObject
	.byte 0


WW_Grotto_SetObject::
	compare VAR_WW_GROTTO, 39
	goto_if_le WW_Grotto_SetObject_2
WW_Grotto_SetObject_1:
	compare VAR_WW_GROTTO, 40
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
	compare VAR_WW_GROTTO, 39
	goto_if_le WW_GrottoInteract_2
	goto WW_GrottoPokemon
WW_GrottoInteract_1:
	end

WW_GrottoInteract_2:
	goto WW_GrottoItem
	goto WW_GrottoInteract_1


WW_GrottoItem::
	compare VAR_WW_GROTTO, 3
	goto_if_le WW_GrottoItem_2
WW_GrottoItem_1:
	compare VAR_WW_GROTTO, 4
	goto_if_ge WW_GrottoItem_6
WW_GrottoItem_4:
	compare VAR_WW_GROTTO, 8
	goto_if_ge WW_GrottoItem_11
WW_GrottoItem_9:
	compare VAR_WW_GROTTO, 12
	goto_if_ge WW_GrottoItem_16
WW_GrottoItem_14:
	compare VAR_WW_GROTTO, 16
	goto_if_ge WW_GrottoItem_21
WW_GrottoItem_19:
	compare VAR_WW_GROTTO, 20
	goto_if_ge WW_GrottoItem_26
WW_GrottoItem_24:
	compare VAR_WW_GROTTO, 24
	goto_if_ge WW_GrottoItem_31
WW_GrottoItem_29:
	compare VAR_WW_GROTTO, 28
	goto_if_ge WW_GrottoItem_36
WW_GrottoItem_34:
	compare VAR_WW_GROTTO, 32
	goto_if_ge WW_GrottoItem_41
WW_GrottoItem_39:
	compare VAR_WW_GROTTO, 36
	goto_if_ge WW_GrottoItem_46
WW_GrottoItem_44:
	waitfanfare
	waitmessage
	closemessage
	release
	end

WW_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_5:
	finditem ITEM_SUPER_REPEL
	goto WW_GrottoItem_4

WW_GrottoItem_6:
	compare VAR_WW_GROTTO, 7
	goto_if_le WW_GrottoItem_5
	goto WW_GrottoItem_4

WW_GrottoItem_10:
	finditem ITEM_SUPER_POTION
	goto WW_GrottoItem_9

WW_GrottoItem_11:
	compare VAR_WW_GROTTO, 11
	goto_if_le WW_GrottoItem_10
	goto WW_GrottoItem_9

WW_GrottoItem_15:
	finditem ITEM_ULTRA_BALL
	goto WW_GrottoItem_14

WW_GrottoItem_16:
	compare VAR_WW_GROTTO, 15
	goto_if_le WW_GrottoItem_15
	goto WW_GrottoItem_14

WW_GrottoItem_20:
	finditem ITEM_FULL_HEAL
	goto WW_GrottoItem_19

WW_GrottoItem_21:
	compare VAR_WW_GROTTO, 19
	goto_if_le WW_GrottoItem_20
	goto WW_GrottoItem_19

WW_GrottoItem_25:
	finditem ITEM_HYPER_POTION
	goto WW_GrottoItem_24

WW_GrottoItem_26:
	compare VAR_WW_GROTTO, 23
	goto_if_le WW_GrottoItem_25
	goto WW_GrottoItem_24

WW_GrottoItem_30:
	finditem ITEM_FIRE_STONE
	goto WW_GrottoItem_29

WW_GrottoItem_31:
	compare VAR_WW_GROTTO, 27
	goto_if_le WW_GrottoItem_30
	goto WW_GrottoItem_29

WW_GrottoItem_35:
	finditem ITEM_THUNDER_STONE
	goto WW_GrottoItem_34

WW_GrottoItem_36:
	compare VAR_WW_GROTTO, 31
	goto_if_le WW_GrottoItem_35
	goto WW_GrottoItem_34

WW_GrottoItem_40:
	finditem ITEM_WATER_STONE
	goto WW_GrottoItem_39

WW_GrottoItem_41:
	compare VAR_WW_GROTTO, 35
	goto_if_le WW_GrottoItem_40
	goto WW_GrottoItem_39

WW_GrottoItem_45:
	finditem ITEM_LEAF_STONE
	goto WW_GrottoItem_44

WW_GrottoItem_46:
	compare VAR_WW_GROTTO, 39
	goto_if_le WW_GrottoItem_45
	goto WW_GrottoItem_44


WW_GrottoPokemon::
	lockall
	compare VAR_WW_GROTTO, 40
	goto_if_ge WW_GrottoPokemon_3
WW_GrottoPokemon_1:
	compare VAR_WW_GROTTO, 52
	goto_if_ge WW_GrottoPokemon_8
WW_GrottoPokemon_6:
	compare VAR_WW_GROTTO, 64
	goto_if_ge WW_GrottoPokemon_13
WW_GrottoPokemon_11:
	compare VAR_WW_GROTTO, 76
	goto_if_ge WW_GrottoPokemon_18
WW_GrottoPokemon_16:
	compare VAR_WW_GROTTO, 88
	goto_if_ge WW_GrottoPokemon_23
WW_GrottoPokemon_21:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DAILY_WW_GROTTO
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

WW_GrottoPokemon_2:
	playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_DUNSPARCE, 9
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_3:
	compare VAR_WW_GROTTO, 51
	goto_if_le WW_GrottoPokemon_2
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_7:
	playmoncry SPECIES_SWABLU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SWABLU, 9
	goto WW_GrottoPokemon_6

WW_GrottoPokemon_8:
	compare VAR_WW_GROTTO, 63
	goto_if_le WW_GrottoPokemon_7
	goto WW_GrottoPokemon_6

WW_GrottoPokemon_12:
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GLIGAR, 9
	goto WW_GrottoPokemon_11

WW_GrottoPokemon_13:
	compare VAR_WW_GROTTO, 75
	goto_if_le WW_GrottoPokemon_12
	goto WW_GrottoPokemon_11

WW_GrottoPokemon_17:
	playmoncry SPECIES_SPHEAL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SPHEAL, 9
	goto WW_GrottoPokemon_16

WW_GrottoPokemon_18:
	compare VAR_WW_GROTTO, 87
	goto_if_le WW_GrottoPokemon_17
	goto WW_GrottoPokemon_16

WW_GrottoPokemon_22:
	playmoncry SPECIES_SKORUPI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SKORUPI, 9
	goto WW_GrottoPokemon_21

WW_GrottoPokemon_23:
	compare VAR_WW_GROTTO, 99
	goto_if_le WW_GrottoPokemon_22
	goto WW_GrottoPokemon_21

