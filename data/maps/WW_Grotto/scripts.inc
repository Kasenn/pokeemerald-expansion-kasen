WW_Grotto_MapScripts::
# 2 "data/maps/WW_Grotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WW_Grotto_SetObject
	.byte 0


WW_Grotto_SetObject::
# 5 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_TALKED_TO_AIDE
	goto_if_eq WW_Grotto_SetObject_2
WW_Grotto_SetObject_1:
# 11 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_Grotto_SetObject_4
# 14 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 59
	goto_if_le WW_Grotto_SetObject_5
# 17 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 79
	goto_if_le WW_Grotto_SetObject_6
# 21 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( GLIGAR )
	return

WW_Grotto_SetObject_2:
# 6 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_Grotto_SetObject_12
WW_Grotto_SetObject_11:
# 9 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_ENTERED_HIDDEN_GROTTO
	goto WW_Grotto_SetObject_1

WW_Grotto_SetObject_4:
# 12 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

WW_Grotto_SetObject_5:
# 15 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOGEPI )
	return

WW_Grotto_SetObject_6:
# 18 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDYBA )
	return

WW_Grotto_SetObject_12:
# 7 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 79
	goto WW_Grotto_SetObject_11


WW_GrottoInteract::
# 25 "data/maps/WW_Grotto/scripts.pory"
	faceplayer
# 26 "data/maps/WW_Grotto/scripts.pory"
	lock
# 27 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoInteract_2
# 31 "data/maps/WW_Grotto/scripts.pory"
	goto WW_GrottoPokemon
WW_GrottoInteract_1:
	end

WW_GrottoInteract_2:
# 28 "data/maps/WW_Grotto/scripts.pory"
	goto WW_GrottoItem
	goto WW_GrottoInteract_1


WW_GrottoItem::
# 37 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 3
	goto_if_le WW_GrottoItem_2
# 40 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 7
	goto_if_le WW_GrottoItem_3
# 43 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 11
	goto_if_le WW_GrottoItem_4
# 46 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 15
	goto_if_le WW_GrottoItem_5
# 49 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 19
	goto_if_le WW_GrottoItem_6
# 52 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 23
	goto_if_le WW_GrottoItem_7
# 55 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 27
	goto_if_le WW_GrottoItem_8
# 58 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 31
	goto_if_le WW_GrottoItem_9
# 61 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 35
	goto_if_le WW_GrottoItem_10
# 64 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le WW_GrottoItem_11
# 68 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_NUGGET
WW_GrottoItem_1:
# 70 "data/maps/WW_Grotto/scripts.pory"
	waitfanfare
# 71 "data/maps/WW_Grotto/scripts.pory"
	waitmessage
# 72 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 0
# 73 "data/maps/WW_Grotto/scripts.pory"
	closemessage
# 74 "data/maps/WW_Grotto/scripts.pory"
	release
	end

WW_GrottoItem_2:
# 38 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_GREAT_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_3:
# 41 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_SUPER_REPEL
	goto WW_GrottoItem_1

WW_GrottoItem_4:
# 44 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_SUPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_5:
# 47 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_ULTRA_BALL
	goto WW_GrottoItem_1

WW_GrottoItem_6:
# 50 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_FULL_HEAL
	goto WW_GrottoItem_1

WW_GrottoItem_7:
# 53 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_HYPER_POTION
	goto WW_GrottoItem_1

WW_GrottoItem_8:
# 56 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_FIRE_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_9:
# 59 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_THUNDER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_10:
# 62 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_WATER_STONE
	goto WW_GrottoItem_1

WW_GrottoItem_11:
# 65 "data/maps/WW_Grotto/scripts.pory"
	finditem ITEM_LEAF_STONE
	goto WW_GrottoItem_1


WW_GrottoPokemon::
# 79 "data/maps/WW_Grotto/scripts.pory"
	lock
# 80 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 59
	goto_if_le WW_GrottoPokemon_2
# 86 "data/maps/WW_Grotto/scripts.pory"
	compare VAR_GROTTO_1, 79
	goto_if_le WW_GrottoPokemon_3
# 93 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
# 94 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 95 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 96 "data/maps/WW_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_GLIGAR, 6, ITEM_NONE, SPECIES_NONE, 7
WW_GrottoPokemon_1:
# 98 "data/maps/WW_Grotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 99 "data/maps/WW_Grotto/scripts.pory"
	doscriptedgrottobattle
# 100 "data/maps/WW_Grotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/WW_Grotto/scripts.pory"
	setflag FLAG_DAILY_GROTTO_1
# 102 "data/maps/WW_Grotto/scripts.pory"
	setvar VAR_GROTTO_1, 0
# 103 "data/maps/WW_Grotto/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 104 "data/maps/WW_Grotto/scripts.pory"
	release
	end

WW_GrottoPokemon_2:
# 81 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_ENCOUNTER
# 82 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 83 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 84 "data/maps/WW_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_TOGEPI, 6, ITEM_NONE, SPECIES_NONE, 7
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_3:
# 87 "data/maps/WW_Grotto/scripts.pory"
	playmoncry SPECIES_LEDYBA, CRY_MODE_ENCOUNTER
# 88 "data/maps/WW_Grotto/scripts.pory"
	delay 40
# 89 "data/maps/WW_Grotto/scripts.pory"
	waitmoncry
# 90 "data/maps/WW_Grotto/scripts.pory"
	setwildbattlelevelrange SPECIES_LEDYBA, 6, ITEM_NONE, SPECIES_NONE, 7
	goto WW_GrottoPokemon_1

