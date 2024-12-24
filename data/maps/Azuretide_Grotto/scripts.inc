Azuretide_Grotto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Azuretide_Grotto_SetObject
	map_script MAP_SCRIPT_ON_LOAD, Azuretide_Grotto_SetObject
	.byte 0


Azuretide_Grotto_SetObject::
	compare VAR_GROTTO_5, 39
	goto_if_le Azuretide_Grotto_SetObject_1
	compare VAR_GROTTO_5, 59
	goto_if_le Azuretide_Grotto_SetObject_2
	compare VAR_GROTTO_5, 79
	goto_if_le Azuretide_Grotto_SetObject_3
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNEASEL )
	return

Azuretide_Grotto_SetObject_1:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

Azuretide_Grotto_SetObject_2:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( MUNNA )
	return

Azuretide_Grotto_SetObject_3:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ELEKID )
	return


Azuretide_GrottoInteract::
	faceplayer
	lock
	compare VAR_GROTTO_5, 39
	goto_if_le Azuretide_GrottoInteract_2
	goto Azuretide_GrottoPokemon
Azuretide_GrottoInteract_1:
	end

Azuretide_GrottoInteract_2:
	goto Azuretide_GrottoItem
	goto Azuretide_GrottoInteract_1


Azuretide_GrottoItem::
	compare VAR_GROTTO_5, 3
	goto_if_le Azuretide_GrottoItem_2
	compare VAR_GROTTO_5, 7
	goto_if_le Azuretide_GrottoItem_3
	compare VAR_GROTTO_5, 11
	goto_if_le Azuretide_GrottoItem_4
	compare VAR_GROTTO_5, 15
	goto_if_le Azuretide_GrottoItem_5
	compare VAR_GROTTO_5, 19
	goto_if_le Azuretide_GrottoItem_6
	compare VAR_GROTTO_5, 23
	goto_if_le Azuretide_GrottoItem_7
	compare VAR_GROTTO_5, 27
	goto_if_le Azuretide_GrottoItem_8
	compare VAR_GROTTO_5, 31
	goto_if_le Azuretide_GrottoItem_9
	compare VAR_GROTTO_5, 35
	goto_if_le Azuretide_GrottoItem_10
	compare VAR_GROTTO_5, 39
	goto_if_le Azuretide_GrottoItem_11
	finditem ITEM_NUGGET
Azuretide_GrottoItem_1:
	setvar VAR_GROTTO_5, 0
	release
	return

Azuretide_GrottoItem_2:
	finditem ITEM_GREAT_BALL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_3:
	finditem ITEM_SUPER_REPEL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_4:
	finditem ITEM_SUPER_POTION
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_5:
	finditem ITEM_ULTRA_BALL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_6:
	finditem ITEM_FULL_HEAL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_7:
	finditem ITEM_HYPER_POTION
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_8:
	finditem ITEM_FIRE_STONE
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_9:
	finditem ITEM_THUNDER_STONE
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_10:
	finditem ITEM_WATER_STONE
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_11:
	finditem ITEM_LEAF_STONE
	goto Azuretide_GrottoItem_1


Azuretide_GrottoPokemon::
	compare VAR_GROTTO_5, 59
	goto_if_le Azuretide_GrottoPokemon_2
	compare VAR_GROTTO_5, 79
	goto_if_le Azuretide_GrottoPokemon_3
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_SNEASEL, 33, ITEM_NONE, SPECIES_NONE, 36
Azuretide_GrottoPokemon_1:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DAILY_GROTTO_5
	setvar VAR_GROTTO_5, 0
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

Azuretide_GrottoPokemon_2:
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_MUNNA, 33, ITEM_NONE, SPECIES_NONE, 36
	goto Azuretide_GrottoPokemon_1

Azuretide_GrottoPokemon_3:
	playmoncry SPECIES_ELEKID, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattlelevelrange SPECIES_ELEKID, 33, ITEM_NONE, SPECIES_NONE, 36
	goto Azuretide_GrottoPokemon_1

