Route7_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route7_GrottoFlags
	.byte 0


Route7_GrottoFlags::
	goto_if_unset FLAG_DAILY_ROUTE7_GROTTO, Route7_GrottoFlags_2
Route7_GrottoFlags_1:
	setflag FLAG_DAILY_ROUTE7_GROTTO
	goto ROUTE7_Grotto_SetObject
	end

Route7_GrottoFlags_2:
	clearflag FLAG_ROUTE7_GROTTO_CLEARED
	random 100
	copyvar VAR_ROUTE7_GROTTO, VAR_RESULT
	goto Route7_GrottoFlags_1


ROUTE7_Grotto_SetObject::
	compare VAR_ROUTE7_GROTTO, 39
	goto_if_le ROUTE7_Grotto_SetObject_2
ROUTE7_Grotto_SetObject_1:
	compare VAR_ROUTE7_GROTTO, 40
	goto_if_ge ROUTE7_Grotto_SetObject_5
ROUTE7_Grotto_SetObject_4:
	end

ROUTE7_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	goto ROUTE7_Grotto_SetObject_1

ROUTE7_Grotto_SetObject_5:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TRICK_HOUSE_STATUE
	goto ROUTE7_Grotto_SetObject_4


ROUTE7_GrottoInteract::
	lockall
	compare VAR_ROUTE7_GROTTO, 39
	goto_if_le ROUTE7_GrottoInteract_2
	goto ROUTE7_GrottoPokemon
ROUTE7_GrottoInteract_1:
	end

ROUTE7_GrottoInteract_2:
	goto ROUTE7_GrottoItem
	goto ROUTE7_GrottoInteract_1


ROUTE7_GrottoItem::
	compare VAR_ROUTE7_GROTTO, 3
	goto_if_le ROUTE7_GrottoItem_2
ROUTE7_GrottoItem_1:
	compare VAR_ROUTE7_GROTTO, 4
	goto_if_ge ROUTE7_GrottoItem_6
ROUTE7_GrottoItem_4:
	compare VAR_ROUTE7_GROTTO, 8
	goto_if_ge ROUTE7_GrottoItem_11
ROUTE7_GrottoItem_9:
	compare VAR_ROUTE7_GROTTO, 12
	goto_if_ge ROUTE7_GrottoItem_16
ROUTE7_GrottoItem_14:
	compare VAR_ROUTE7_GROTTO, 16
	goto_if_ge ROUTE7_GrottoItem_21
ROUTE7_GrottoItem_19:
	compare VAR_ROUTE7_GROTTO, 20
	goto_if_ge ROUTE7_GrottoItem_26
ROUTE7_GrottoItem_24:
	compare VAR_ROUTE7_GROTTO, 24
	goto_if_ge ROUTE7_GrottoItem_31
ROUTE7_GrottoItem_29:
	compare VAR_ROUTE7_GROTTO, 28
	goto_if_ge ROUTE7_GrottoItem_36
ROUTE7_GrottoItem_34:
	compare VAR_ROUTE7_GROTTO, 32
	goto_if_ge ROUTE7_GrottoItem_41
ROUTE7_GrottoItem_39:
	compare VAR_ROUTE7_GROTTO, 36
	goto_if_ge ROUTE7_GrottoItem_46
ROUTE7_GrottoItem_44:
	waitfanfare
	waitmessage
	closemessage
	release
	end

ROUTE7_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto ROUTE7_GrottoItem_1

ROUTE7_GrottoItem_5:
	finditem ITEM_SUPER_REPEL
	goto ROUTE7_GrottoItem_4

ROUTE7_GrottoItem_6:
	compare VAR_ROUTE7_GROTTO, 7
	goto_if_le ROUTE7_GrottoItem_5
	goto ROUTE7_GrottoItem_4

ROUTE7_GrottoItem_10:
	finditem ITEM_SUPER_POTION
	goto ROUTE7_GrottoItem_9

ROUTE7_GrottoItem_11:
	compare VAR_ROUTE7_GROTTO, 11
	goto_if_le ROUTE7_GrottoItem_10
	goto ROUTE7_GrottoItem_9

ROUTE7_GrottoItem_15:
	finditem ITEM_ULTRA_BALL
	goto ROUTE7_GrottoItem_14

ROUTE7_GrottoItem_16:
	compare VAR_ROUTE7_GROTTO, 15
	goto_if_le ROUTE7_GrottoItem_15
	goto ROUTE7_GrottoItem_14

ROUTE7_GrottoItem_20:
	finditem ITEM_FULL_HEAL
	goto ROUTE7_GrottoItem_19

ROUTE7_GrottoItem_21:
	compare VAR_ROUTE7_GROTTO, 19
	goto_if_le ROUTE7_GrottoItem_20
	goto ROUTE7_GrottoItem_19

ROUTE7_GrottoItem_25:
	finditem ITEM_HYPER_POTION
	goto ROUTE7_GrottoItem_24

ROUTE7_GrottoItem_26:
	compare VAR_ROUTE7_GROTTO, 23
	goto_if_le ROUTE7_GrottoItem_25
	goto ROUTE7_GrottoItem_24

ROUTE7_GrottoItem_30:
	finditem ITEM_FIRE_STONE
	goto ROUTE7_GrottoItem_29

ROUTE7_GrottoItem_31:
	compare VAR_ROUTE7_GROTTO, 27
	goto_if_le ROUTE7_GrottoItem_30
	goto ROUTE7_GrottoItem_29

ROUTE7_GrottoItem_35:
	finditem ITEM_THUNDER_STONE
	goto ROUTE7_GrottoItem_34

ROUTE7_GrottoItem_36:
	compare VAR_ROUTE7_GROTTO, 31
	goto_if_le ROUTE7_GrottoItem_35
	goto ROUTE7_GrottoItem_34

ROUTE7_GrottoItem_40:
	finditem ITEM_WATER_STONE
	goto ROUTE7_GrottoItem_39

ROUTE7_GrottoItem_41:
	compare VAR_ROUTE7_GROTTO, 35
	goto_if_le ROUTE7_GrottoItem_40
	goto ROUTE7_GrottoItem_39

ROUTE7_GrottoItem_45:
	finditem ITEM_LEAF_STONE
	goto ROUTE7_GrottoItem_44

ROUTE7_GrottoItem_46:
	compare VAR_ROUTE7_GROTTO, 39
	goto_if_le ROUTE7_GrottoItem_45
	goto ROUTE7_GrottoItem_44


ROUTE7_GrottoPokemon::
	lockall
	compare VAR_ROUTE7_GROTTO, 40
	goto_if_ge ROUTE7_GrottoPokemon_3
ROUTE7_GrottoPokemon_1:
	compare VAR_ROUTE7_GROTTO, 52
	goto_if_ge ROUTE7_GrottoPokemon_8
ROUTE7_GrottoPokemon_6:
	compare VAR_ROUTE7_GROTTO, 64
	goto_if_ge ROUTE7_GrottoPokemon_13
ROUTE7_GrottoPokemon_11:
	compare VAR_ROUTE7_GROTTO, 76
	goto_if_ge ROUTE7_GrottoPokemon_18
ROUTE7_GrottoPokemon_16:
	compare VAR_ROUTE7_GROTTO, 88
	goto_if_ge ROUTE7_GrottoPokemon_23
ROUTE7_GrottoPokemon_21:
	dowildbattle
	removeobject 1
	setflag FLAG_ROUTE7_GROTTO_CLEARED
	release
	end

ROUTE7_GrottoPokemon_2:
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_ABSOL, 25, ITEM_NONE, SPECIES_NONE, 30
	goto ROUTE7_GrottoPokemon_1

ROUTE7_GrottoPokemon_3:
	compare VAR_ROUTE7_GROTTO, 51
	goto_if_le ROUTE7_GrottoPokemon_2
	goto ROUTE7_GrottoPokemon_1

ROUTE7_GrottoPokemon_7:
	playmoncry SPECIES_DITTO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_DITTO, 25, ITEM_NONE, SPECIES_NONE, 30
	goto ROUTE7_GrottoPokemon_6

ROUTE7_GrottoPokemon_8:
	compare VAR_ROUTE7_GROTTO, 63
	goto_if_le ROUTE7_GrottoPokemon_7
	goto ROUTE7_GrottoPokemon_6

ROUTE7_GrottoPokemon_12:
	playmoncry SPECIES_SABLEYE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_SABLEYE, 25, ITEM_NONE, SPECIES_NONE, 30
	goto ROUTE7_GrottoPokemon_11

ROUTE7_GrottoPokemon_13:
	compare VAR_ROUTE7_GROTTO, 75
	goto_if_le ROUTE7_GrottoPokemon_12
	goto ROUTE7_GrottoPokemon_11

ROUTE7_GrottoPokemon_17:
	playmoncry SPECIES_INKAY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_INKAY, 25, ITEM_NONE, SPECIES_NONE, 30
	goto ROUTE7_GrottoPokemon_16

ROUTE7_GrottoPokemon_18:
	compare VAR_ROUTE7_GROTTO, 87
	goto_if_le ROUTE7_GrottoPokemon_17
	goto ROUTE7_GrottoPokemon_16

ROUTE7_GrottoPokemon_22:
	playmoncry SPECIES_HATENNA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_HATENNA, 25, ITEM_NONE, SPECIES_NONE, 30
	goto ROUTE7_GrottoPokemon_21

ROUTE7_GrottoPokemon_23:
	compare VAR_ROUTE7_GROTTO, 99
	goto_if_le ROUTE7_GrottoPokemon_22
	goto ROUTE7_GrottoPokemon_21

