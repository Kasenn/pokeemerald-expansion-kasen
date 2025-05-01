WW_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WW_Grotto_SetObject
	.byte 0


WW_Grotto_SetObject::
	compare VAR_GROTTO_1, 39
	goto_if_le WW_Grotto_SetObject_1
	compare VAR_GROTTO_1, 59
	goto_if_le WW_Grotto_SetObject_2
	compare VAR_GROTTO_1, 79
	goto_if_le WW_Grotto_SetObject_3
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( GLIGAR )
	return

WW_Grotto_SetObject_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

WW_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOGEPI )
	return

WW_Grotto_SetObject_3:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDYBA )
	return


WW_GrottoInteract::
	faceplayer
	lock
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoInteract_2
	goto WW_GrottoPokemon
WW_GrottoInteract_1:
	end

WW_GrottoInteract_2:
	goto WW_GrottoItem
	goto WW_GrottoInteract_1


WW_GrottoItem::
	compare VAR_GROTTO_1, 3
	goto_if_le WW_GrottoItem_2
	compare VAR_GROTTO_1, 7
	goto_if_le WW_GrottoItem_3
	compare VAR_GROTTO_1, 11
	goto_if_le WW_GrottoItem_4
	compare VAR_GROTTO_1, 15
	goto_if_le WW_GrottoItem_5
	compare VAR_GROTTO_1, 19
	goto_if_le WW_GrottoItem_6
	compare VAR_GROTTO_1, 23
	goto_if_le WW_GrottoItem_7
	compare VAR_GROTTO_1, 27
	goto_if_le WW_GrottoItem_8
	compare VAR_GROTTO_1, 31
	goto_if_le WW_GrottoItem_9
	compare VAR_GROTTO_1, 35
	goto_if_le WW_GrottoItem_10
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoItem_11
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


WW_GrottoPokemon::
	lock
	compare VAR_GROTTO_1, 59
	goto_if_le WW_GrottoPokemon_2
	compare VAR_GROTTO_1, 79
	goto_if_le WW_GrottoPokemon_3
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_GLIGAR, 6, ITEM_NONE, SPECIES_NONE, 7
WW_GrottoPokemon_1:
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
	setwildbattlelevelrange SPECIES_TOGEPI, 6, ITEM_NONE, SPECIES_NONE, 7
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_3:
	playmoncry SPECIES_LEDYBA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_LEDYBA, 6, ITEM_NONE, SPECIES_NONE, 7
	goto WW_GrottoPokemon_1

