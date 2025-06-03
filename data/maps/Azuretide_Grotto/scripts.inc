Azuretide_Grotto_MapScripts::
# 2 "data/maps/Azuretide_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Azuretide_Grotto_SetObject
# 3 "data/maps/Azuretide_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Azuretide_Grotto_SetObject
	.byte 0


Azuretide_Grotto_SetObject::
# 7 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 39
	goto_if_le Azuretide_Grotto_SetObject_1
# 10 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 54
	goto_if_le Azuretide_Grotto_SetObject_2
# 13 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 69
	goto_if_le Azuretide_Grotto_SetObject_3
# 16 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 84
	goto_if_le Azuretide_Grotto_SetObject_4
# 20 "data/maps/Azuretide_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNEASEL )
	return

Azuretide_Grotto_SetObject_1:
# 8 "data/maps/Azuretide_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

Azuretide_Grotto_SetObject_2:
# 11 "data/maps/Azuretide_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( MUNNA )
	return

Azuretide_Grotto_SetObject_3:
# 14 "data/maps/Azuretide_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ELEKID )
	return

Azuretide_Grotto_SetObject_4:
# 17 "data/maps/Azuretide_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDIAN )
	return


Azuretide_GrottoInteract::
# 24 "data/maps/Azuretide_Grotto/scripts.pory"
	faceplayer
# 25 "data/maps/Azuretide_Grotto/scripts.pory"
	lock
# 26 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 39
	goto_if_le Azuretide_GrottoInteract_2
# 30 "data/maps/Azuretide_Grotto/scripts.pory"
	goto Azuretide_GrottoPokemon
Azuretide_GrottoInteract_1:
	end

Azuretide_GrottoInteract_2:
# 27 "data/maps/Azuretide_Grotto/scripts.pory"
	goto Azuretide_GrottoItem
	goto Azuretide_GrottoInteract_1


Azuretide_GrottoItem::
# 36 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 3
	goto_if_le Azuretide_GrottoItem_2
# 39 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 7
	goto_if_le Azuretide_GrottoItem_3
# 42 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 11
	goto_if_le Azuretide_GrottoItem_4
# 45 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 15
	goto_if_le Azuretide_GrottoItem_5
# 48 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 19
	goto_if_le Azuretide_GrottoItem_6
# 51 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 23
	goto_if_le Azuretide_GrottoItem_7
# 54 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 27
	goto_if_le Azuretide_GrottoItem_8
# 57 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 31
	goto_if_le Azuretide_GrottoItem_9
# 60 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 35
	goto_if_le Azuretide_GrottoItem_10
# 63 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 39
	goto_if_le Azuretide_GrottoItem_11
# 67 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_NUGGET
Azuretide_GrottoItem_1:
# 69 "data/maps/Azuretide_Grotto/scripts.pory"
	setvar VAR_GROTTO_5, 0
# 70 "data/maps/Azuretide_Grotto/scripts.pory"
	release
	return

Azuretide_GrottoItem_2:
# 37 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_3:
# 40 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_4:
# 43 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_5:
# 46 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_6:
# 49 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_7:
# 52 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_8:
# 55 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_9:
# 58 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_10:
# 61 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto Azuretide_GrottoItem_1

Azuretide_GrottoItem_11:
# 64 "data/maps/Azuretide_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto Azuretide_GrottoItem_1


Azuretide_GrottoPokemon::
# 74 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 54
	goto_if_le Azuretide_GrottoPokemon_2
# 80 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 69
	goto_if_le Azuretide_GrottoPokemon_3
# 86 "data/maps/Azuretide_Grotto/scripts.pory"
	compare VAR_GROTTO_5, 84
	goto_if_le Azuretide_GrottoPokemon_4
# 93 "data/maps/Azuretide_Grotto/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 94 "data/maps/Azuretide_Grotto/scripts.pory"
	delay 40
# 95 "data/maps/Azuretide_Grotto/scripts.pory"
	waitmoncry
# 96 "data/maps/Azuretide_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_SNEASEL, 33, ITEM_NONE, SPECIES_NONE, 36
Azuretide_GrottoPokemon_1:
# 98 "data/maps/Azuretide_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 99 "data/maps/Azuretide_Grotto/scripts.pory"
	dowildbattle
# 100 "data/maps/Azuretide_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/Azuretide_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_5
# 102 "data/maps/Azuretide_Grotto/scripts.pory"
	setvar VAR_GROTTO_5, 0
# 103 "data/maps/Azuretide_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 104 "data/maps/Azuretide_Grotto/scripts.pory"
	release
	end

Azuretide_GrottoPokemon_2:
# 75 "data/maps/Azuretide_Grotto/scripts.pory"
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
# 76 "data/maps/Azuretide_Grotto/scripts.pory"
	delay 40
# 77 "data/maps/Azuretide_Grotto/scripts.pory"
	waitmoncry
# 78 "data/maps/Azuretide_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_MUNNA, 33, ITEM_NONE, SPECIES_NONE, 36
	goto Azuretide_GrottoPokemon_1

Azuretide_GrottoPokemon_3:
# 81 "data/maps/Azuretide_Grotto/scripts.pory"
	playmoncry SPECIES_ELEKID, CRY_MODE_ENCOUNTER
# 82 "data/maps/Azuretide_Grotto/scripts.pory"
	delay 40
# 83 "data/maps/Azuretide_Grotto/scripts.pory"
	waitmoncry
# 84 "data/maps/Azuretide_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_ELEKID, 33, ITEM_NONE, SPECIES_NONE, 36
	goto Azuretide_GrottoPokemon_1

Azuretide_GrottoPokemon_4:
# 87 "data/maps/Azuretide_Grotto/scripts.pory"
	playmoncry SPECIES_LEDIAN, CRY_MODE_ENCOUNTER
# 88 "data/maps/Azuretide_Grotto/scripts.pory"
	delay 40
# 89 "data/maps/Azuretide_Grotto/scripts.pory"
	waitmoncry
# 90 "data/maps/Azuretide_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_LEDIAN, 33, ITEM_NONE, SPECIES_NONE, 36
	goto Azuretide_GrottoPokemon_1

