Route14_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ROUTE14_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, ROUTE14_Grotto_SetObject
	.byte 0


ROUTE14_Grotto_SetObject::
	compare VAR_ROUTE14_GROTTO, 39
	goto_if_le ROUTE14_Grotto_SetObject_2
ROUTE14_Grotto_SetObject_1:
	compare VAR_ROUTE14_GROTTO, 40
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
	compare VAR_ROUTE14_GROTTO, 39
	goto_if_le ROUTE14_GrottoInteract_2
	goto ROUTE14_GrottoPokemon
ROUTE14_GrottoInteract_1:
	end

ROUTE14_GrottoInteract_2:
	goto ROUTE14_GrottoItem
	goto ROUTE14_GrottoInteract_1


ROUTE14_GrottoItem::
	compare VAR_ROUTE14_GROTTO, 3
	goto_if_le ROUTE14_GrottoItem_2
ROUTE14_GrottoItem_1:
	compare VAR_ROUTE14_GROTTO, 4
	goto_if_ge ROUTE14_GrottoItem_6
ROUTE14_GrottoItem_4:
	compare VAR_ROUTE14_GROTTO, 8
	goto_if_ge ROUTE14_GrottoItem_11
ROUTE14_GrottoItem_9:
	compare VAR_ROUTE14_GROTTO, 12
	goto_if_ge ROUTE14_GrottoItem_16
ROUTE14_GrottoItem_14:
	compare VAR_ROUTE14_GROTTO, 16
	goto_if_ge ROUTE14_GrottoItem_21
ROUTE14_GrottoItem_19:
	compare VAR_ROUTE14_GROTTO, 20
	goto_if_ge ROUTE14_GrottoItem_26
ROUTE14_GrottoItem_24:
	compare VAR_ROUTE14_GROTTO, 24
	goto_if_ge ROUTE14_GrottoItem_31
ROUTE14_GrottoItem_29:
	compare VAR_ROUTE14_GROTTO, 28
	goto_if_ge ROUTE14_GrottoItem_36
ROUTE14_GrottoItem_34:
	compare VAR_ROUTE14_GROTTO, 32
	goto_if_ge ROUTE14_GrottoItem_41
ROUTE14_GrottoItem_39:
	compare VAR_ROUTE14_GROTTO, 36
	goto_if_ge ROUTE14_GrottoItem_46
ROUTE14_GrottoItem_44:
	waitfanfare
	waitmessage
	closemessage
	release
	end

ROUTE14_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto ROUTE14_GrottoItem_1

ROUTE14_GrottoItem_5:
	finditem ITEM_SUPER_REPEL
	goto ROUTE14_GrottoItem_4

ROUTE14_GrottoItem_6:
	compare VAR_ROUTE14_GROTTO, 7
	goto_if_le ROUTE14_GrottoItem_5
	goto ROUTE14_GrottoItem_4

ROUTE14_GrottoItem_10:
	finditem ITEM_SUPER_POTION
	goto ROUTE14_GrottoItem_9

ROUTE14_GrottoItem_11:
	compare VAR_ROUTE14_GROTTO, 11
	goto_if_le ROUTE14_GrottoItem_10
	goto ROUTE14_GrottoItem_9

ROUTE14_GrottoItem_15:
	finditem ITEM_ULTRA_BALL
	goto ROUTE14_GrottoItem_14

ROUTE14_GrottoItem_16:
	compare VAR_ROUTE14_GROTTO, 15
	goto_if_le ROUTE14_GrottoItem_15
	goto ROUTE14_GrottoItem_14

ROUTE14_GrottoItem_20:
	finditem ITEM_FULL_HEAL
	goto ROUTE14_GrottoItem_19

ROUTE14_GrottoItem_21:
	compare VAR_ROUTE14_GROTTO, 19
	goto_if_le ROUTE14_GrottoItem_20
	goto ROUTE14_GrottoItem_19

ROUTE14_GrottoItem_25:
	finditem ITEM_HYPER_POTION
	goto ROUTE14_GrottoItem_24

ROUTE14_GrottoItem_26:
	compare VAR_ROUTE14_GROTTO, 23
	goto_if_le ROUTE14_GrottoItem_25
	goto ROUTE14_GrottoItem_24

ROUTE14_GrottoItem_30:
	finditem ITEM_FIRE_STONE
	goto ROUTE14_GrottoItem_29

ROUTE14_GrottoItem_31:
	compare VAR_ROUTE14_GROTTO, 27
	goto_if_le ROUTE14_GrottoItem_30
	goto ROUTE14_GrottoItem_29

ROUTE14_GrottoItem_35:
	finditem ITEM_THUNDER_STONE
	goto ROUTE14_GrottoItem_34

ROUTE14_GrottoItem_36:
	compare VAR_ROUTE14_GROTTO, 31
	goto_if_le ROUTE14_GrottoItem_35
	goto ROUTE14_GrottoItem_34

ROUTE14_GrottoItem_40:
	finditem ITEM_WATER_STONE
	goto ROUTE14_GrottoItem_39

ROUTE14_GrottoItem_41:
	compare VAR_ROUTE14_GROTTO, 35
	goto_if_le ROUTE14_GrottoItem_40
	goto ROUTE14_GrottoItem_39

ROUTE14_GrottoItem_45:
	finditem ITEM_LEAF_STONE
	goto ROUTE14_GrottoItem_44

ROUTE14_GrottoItem_46:
	compare VAR_ROUTE14_GROTTO, 39
	goto_if_le ROUTE14_GrottoItem_45
	goto ROUTE14_GrottoItem_44


ROUTE14_GrottoPokemon::
	lockall
	compare VAR_ROUTE14_GROTTO, 40
	goto_if_ge ROUTE14_GrottoPokemon_3
ROUTE14_GrottoPokemon_1:
	compare VAR_ROUTE14_GROTTO, 52
	goto_if_ge ROUTE14_GrottoPokemon_8
ROUTE14_GrottoPokemon_6:
	compare VAR_ROUTE14_GROTTO, 64
	goto_if_ge ROUTE14_GrottoPokemon_13
ROUTE14_GrottoPokemon_11:
	compare VAR_ROUTE14_GROTTO, 76
	goto_if_ge ROUTE14_GrottoPokemon_18
ROUTE14_GrottoPokemon_16:
	compare VAR_ROUTE14_GROTTO, 88
	goto_if_ge ROUTE14_GrottoPokemon_23
ROUTE14_GrottoPokemon_21:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DAILY_ROUTE14_GROTTO
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
	compare VAR_ROUTE14_GROTTO, 51
	goto_if_le ROUTE14_GrottoPokemon_2
	goto ROUTE14_GrottoPokemon_1

ROUTE14_GrottoPokemon_7:
	playmoncry SPECIES_TOXEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_TOXEL, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_6

ROUTE14_GrottoPokemon_8:
	compare VAR_ROUTE14_GROTTO, 63
	goto_if_le ROUTE14_GrottoPokemon_7
	goto ROUTE14_GrottoPokemon_6

ROUTE14_GrottoPokemon_12:
	playmoncry SPECIES_TOGEPI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_TOGEPI, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_11

ROUTE14_GrottoPokemon_13:
	compare VAR_ROUTE14_GROTTO, 75
	goto_if_le ROUTE14_GrottoPokemon_12
	goto ROUTE14_GrottoPokemon_11

ROUTE14_GrottoPokemon_17:
	playmoncry SPECIES_INKAY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_INKAY, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_16

ROUTE14_GrottoPokemon_18:
	compare VAR_ROUTE14_GROTTO, 87
	goto_if_le ROUTE14_GrottoPokemon_17
	goto ROUTE14_GrottoPokemon_16

ROUTE14_GrottoPokemon_22:
	playmoncry SPECIES_DRAMPA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_DRAMPA, 30, ITEM_NONE, SPECIES_NONE, 33
	goto ROUTE14_GrottoPokemon_21

ROUTE14_GrottoPokemon_23:
	compare VAR_ROUTE14_GROTTO, 99
	goto_if_le ROUTE14_GrottoPokemon_22
	goto ROUTE14_GrottoPokemon_21

