SetHiddenGrottoGfx::
# 6 "data/town_scripts/hiddengrotto.pory"
	getmapnum
# 7 "data/town_scripts/hiddengrotto.pory"
	switch VAR_RESULT
# 8 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE7_GROTTO ), SetHiddenGrottoGfx_2
# 13 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE14_GROTTO ), SetHiddenGrottoGfx_3
# 18 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_AZURETIDE_GROTTO ), SetHiddenGrottoGfx_4
# 23 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_WW_GROTTO ), SetHiddenGrottoGfx_5
# 28 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE15_GROTTO ), SetHiddenGrottoGfx_6
# 33 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE21_GROTTO ), SetHiddenGrottoGfx_7
	return

SetHiddenGrottoGfx_2:
# 9 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_2, 39
	goto_if_le SetHiddenGrottoGfx_8
# 10 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_2, 59
	goto_if_le SetHiddenGrottoGfx_9
# 11 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_2, 79
	goto_if_le SetHiddenGrottoGfx_10
# 12 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SKORUPI )
	return

SetHiddenGrottoGfx_3:
# 14 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le SetHiddenGrottoGfx_15
# 15 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_3, 59
	goto_if_le SetHiddenGrottoGfx_16
# 16 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_3, 79
	goto_if_le SetHiddenGrottoGfx_17
# 17 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDIAN )
	return

SetHiddenGrottoGfx_4:
# 19 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_5, 39
	goto_if_le SetHiddenGrottoGfx_22
# 20 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_5, 59
	goto_if_le SetHiddenGrottoGfx_23
# 21 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_5, 79
	goto_if_le SetHiddenGrottoGfx_24
# 22 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDIAN )
	return

SetHiddenGrottoGfx_5:
# 24 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le SetHiddenGrottoGfx_29
# 25 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_1, 59
	goto_if_le SetHiddenGrottoGfx_30
# 26 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_1, 79
	goto_if_le SetHiddenGrottoGfx_31
# 27 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( GLIGAR )
	return

SetHiddenGrottoGfx_6:
# 29 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le SetHiddenGrottoGfx_36
# 30 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_4, 59
	goto_if_le SetHiddenGrottoGfx_37
# 31 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_4, 79
	goto_if_le SetHiddenGrottoGfx_38
# 32 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( NATU )
	return

SetHiddenGrottoGfx_7:
# 34 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_6, 39
	goto_if_le SetHiddenGrottoGfx_43
# 35 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_6, 59
	goto_if_le SetHiddenGrottoGfx_44
# 36 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_6, 79
	goto_if_le SetHiddenGrottoGfx_45
# 37 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SEVIPER )
	return

SetHiddenGrottoGfx_8:
# 9 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

SetHiddenGrottoGfx_9:
# 10 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDYBA )
	return

SetHiddenGrottoGfx_10:
# 11 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( VULPIX_ALOLAN )
	return

SetHiddenGrottoGfx_15:
# 14 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

SetHiddenGrottoGfx_16:
# 15 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( KLEFKI )
	return

SetHiddenGrottoGfx_17:
# 16 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOXEL )
	return

SetHiddenGrottoGfx_22:
# 19 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

SetHiddenGrottoGfx_23:
# 20 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( MUNNA )
	return

SetHiddenGrottoGfx_24:
# 21 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ELEKID )
	return

SetHiddenGrottoGfx_29:
# 24 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

SetHiddenGrottoGfx_30:
# 25 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( TOGEPI )
	return

SetHiddenGrottoGfx_31:
# 26 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDYBA )
	return

SetHiddenGrottoGfx_36:
# 29 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

SetHiddenGrottoGfx_37:
# 30 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( CLEFFA )
	return

SetHiddenGrottoGfx_38:
# 31 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( IGGLYBUFF )
	return

SetHiddenGrottoGfx_43:
# 34 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_BALL
	return

SetHiddenGrottoGfx_44:
# 35 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( MARILL )
	return

SetHiddenGrottoGfx_45:
# 36 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( LEDIAN )
	return


RemoveStaticEncounter::
# 42 "data/town_scripts/hiddengrotto.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, RemoveStaticEncounter_1
	return

RemoveStaticEncounter_1:
# 43 "data/town_scripts/hiddengrotto.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RemoveStaticEncounter_3
	return

RemoveStaticEncounter_3:
# 45 "data/town_scripts/hiddengrotto.pory"
	removeobject VAR_LAST_TALKED
	return


GrottoInteract::
# 51 "data/town_scripts/hiddengrotto.pory"
	faceplayer
# 52 "data/town_scripts/hiddengrotto.pory"
	lock
# 53 "data/town_scripts/hiddengrotto.pory"
	getmapnum
# 54 "data/town_scripts/hiddengrotto.pory"
	switch VAR_RESULT
# 55 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_WW_GROTTO ), GrottoInteract_3
# 56 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE7_GROTTO ), GrottoInteract_4
# 57 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE14_GROTTO ), GrottoInteract_5
# 58 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE15_GROTTO ), GrottoInteract_6
# 59 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_AZURETIDE_GROTTO ), GrottoInteract_7
# 60 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE21_GROTTO ), GrottoInteract_8
GrottoInteract_1:
# 62 "data/town_scripts/hiddengrotto.pory"
	goto_if_set FLAG_TEMP_1, GrottoInteract_10
# 63 "data/town_scripts/hiddengrotto.pory"
	goto GrottoInteract_Pokemon
GrottoInteract_9:
	end

GrottoInteract_3:
# 55 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_1, 39
	goto_if_le GrottoInteract_13
	goto GrottoInteract_1

GrottoInteract_4:
# 56 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_2, 39
	goto_if_le GrottoInteract_15
	goto GrottoInteract_1

GrottoInteract_5:
# 57 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_3, 39
	goto_if_le GrottoInteract_17
	goto GrottoInteract_1

GrottoInteract_6:
# 58 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_4, 39
	goto_if_le GrottoInteract_19
	goto GrottoInteract_1

GrottoInteract_7:
# 59 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_5, 39
	goto_if_le GrottoInteract_21
	goto GrottoInteract_1

GrottoInteract_8:
# 60 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_6, 39
	goto_if_le GrottoInteract_23
	goto GrottoInteract_1

GrottoInteract_10:
# 62 "data/town_scripts/hiddengrotto.pory"
	goto GrottoInteract_Item
	goto GrottoInteract_9

GrottoInteract_13:
# 55 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_TEMP_1
	goto GrottoInteract_1

GrottoInteract_15:
# 56 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_TEMP_1
	goto GrottoInteract_1

GrottoInteract_17:
# 57 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_TEMP_1
	goto GrottoInteract_1

GrottoInteract_19:
# 58 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_TEMP_1
	goto GrottoInteract_1

GrottoInteract_21:
# 59 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_TEMP_1
	goto GrottoInteract_1

GrottoInteract_23:
# 60 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_TEMP_1
	goto GrottoInteract_1


GrottoInteract_Item::
# 68 "data/town_scripts/hiddengrotto.pory"
	getmapnum
# 69 "data/town_scripts/hiddengrotto.pory"
	switch VAR_RESULT
# 70 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_WW_GROTTO ), GrottoInteract_Item_3
# 71 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE7_GROTTO ), GrottoInteract_Item_4
# 72 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE14_GROTTO ), GrottoInteract_Item_5
# 73 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE15_GROTTO ), GrottoInteract_Item_6
# 74 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_AZURETIDE_GROTTO ), GrottoInteract_Item_7
# 75 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE21_GROTTO ), GrottoInteract_Item_8
GrottoInteract_Item_1:
# 77 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 3
	goto_if_le GrottoInteract_Item_10
# 78 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 7
	goto_if_le GrottoInteract_Item_11
# 79 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 11
	goto_if_le GrottoInteract_Item_12
# 80 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 15
	goto_if_le GrottoInteract_Item_13
# 81 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 19
	goto_if_le GrottoInteract_Item_14
# 82 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 23
	goto_if_le GrottoInteract_Item_15
# 83 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 27
	goto_if_le GrottoInteract_Item_16
# 84 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 31
	goto_if_le GrottoInteract_Item_17
# 85 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 35
	goto_if_le GrottoInteract_Item_18
# 86 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, 39
	goto_if_le GrottoInteract_Item_19
# 87 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_NUGGET
GrottoInteract_Item_9:
# 88 "data/town_scripts/hiddengrotto.pory"
	waitfanfare
# 89 "data/town_scripts/hiddengrotto.pory"
	waitmessage
# 90 "data/town_scripts/hiddengrotto.pory"
	call SetGrottoCompleted
# 91 "data/town_scripts/hiddengrotto.pory"
	closemessage
# 92 "data/town_scripts/hiddengrotto.pory"
	release
	end

GrottoInteract_Item_3:
# 70 "data/town_scripts/hiddengrotto.pory"
	copyvar VAR_RESULT, VAR_GROTTO_1
	goto GrottoInteract_Item_1

GrottoInteract_Item_4:
# 71 "data/town_scripts/hiddengrotto.pory"
	copyvar VAR_RESULT, VAR_GROTTO_2
	goto GrottoInteract_Item_1

GrottoInteract_Item_5:
# 72 "data/town_scripts/hiddengrotto.pory"
	copyvar VAR_RESULT, VAR_GROTTO_3
	goto GrottoInteract_Item_1

GrottoInteract_Item_6:
# 73 "data/town_scripts/hiddengrotto.pory"
	copyvar VAR_RESULT, VAR_GROTTO_4
	goto GrottoInteract_Item_1

GrottoInteract_Item_7:
# 74 "data/town_scripts/hiddengrotto.pory"
	copyvar VAR_RESULT, VAR_GROTTO_5
	goto GrottoInteract_Item_1

GrottoInteract_Item_8:
# 75 "data/town_scripts/hiddengrotto.pory"
	copyvar VAR_RESULT, VAR_GROTTO_6
	goto GrottoInteract_Item_1

GrottoInteract_Item_10:
# 77 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_GREAT_BALL
	goto GrottoInteract_Item_9

GrottoInteract_Item_11:
# 78 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_SUPER_REPEL
	goto GrottoInteract_Item_9

GrottoInteract_Item_12:
# 79 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_SUPER_POTION
	goto GrottoInteract_Item_9

GrottoInteract_Item_13:
# 80 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_ULTRA_BALL
	goto GrottoInteract_Item_9

GrottoInteract_Item_14:
# 81 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_FULL_HEAL
	goto GrottoInteract_Item_9

GrottoInteract_Item_15:
# 82 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_HYPER_POTION
	goto GrottoInteract_Item_9

GrottoInteract_Item_16:
# 83 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_FIRE_STONE
	goto GrottoInteract_Item_9

GrottoInteract_Item_17:
# 84 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_THUNDER_STONE
	goto GrottoInteract_Item_9

GrottoInteract_Item_18:
# 85 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_WATER_STONE
	goto GrottoInteract_Item_9

GrottoInteract_Item_19:
# 86 "data/town_scripts/hiddengrotto.pory"
	finditem ITEM_LEAF_STONE
	goto GrottoInteract_Item_9


GrottoInteract_Pokemon::
# 97 "data/town_scripts/hiddengrotto.pory"
	lock
# 98 "data/town_scripts/hiddengrotto.pory"
	getmapnum
# 99 "data/town_scripts/hiddengrotto.pory"
	switch VAR_RESULT
# 100 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_WW_GROTTO ), GrottoInteract_Pokemon_3
# 106 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE7_GROTTO ), GrottoInteract_Pokemon_4
# 112 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE14_GROTTO ), GrottoInteract_Pokemon_5
# 118 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE15_GROTTO ), GrottoInteract_Pokemon_6
# 124 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_AZURETIDE_GROTTO ), GrottoInteract_Pokemon_7
# 130 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE21_GROTTO ), GrottoInteract_Pokemon_8
GrottoInteract_Pokemon_1:
# 137 "data/town_scripts/hiddengrotto.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_ENCOUNTER
# 138 "data/town_scripts/hiddengrotto.pory"
	delay 40
# 139 "data/town_scripts/hiddengrotto.pory"
	waitmoncry
# 140 "data/town_scripts/hiddengrotto.pory"
	setwildbattlelevelrange VAR_TEMP_0, VAR_TEMP_1, ITEM_NONE, SPECIES_NONE, VAR_TEMP_2
# 141 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 142 "data/town_scripts/hiddengrotto.pory"
	doscriptedgrottobattle
# 143 "data/town_scripts/hiddengrotto.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 144 "data/town_scripts/hiddengrotto.pory"
	call SetGrottoCompleted
# 145 "data/town_scripts/hiddengrotto.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 146 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GrottoInteract_Pokemon_10
GrottoInteract_Pokemon_9:
# 151 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq GrottoInteract_Pokemon_43
# 151 "data/town_scripts/hiddengrotto.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq GrottoInteract_Pokemon_43
GrottoInteract_Pokemon_42:
# 157 "data/town_scripts/hiddengrotto.pory"
	release
	end

GrottoInteract_Pokemon_3:
# 101 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_1, 5
# 102 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_2, 7
# 103 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_1, 59
	goto_if_le GrottoInteract_Pokemon_12
# 104 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_1, 79
	goto_if_le GrottoInteract_Pokemon_13
# 105 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_GLIGAR
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_4:
# 107 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_1, 15
# 108 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_2, 18
# 109 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_2, 59
	goto_if_le GrottoInteract_Pokemon_17
# 110 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_2, 79
	goto_if_le GrottoInteract_Pokemon_18
# 111 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_SKORUPI
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_5:
# 113 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_1, 30
# 114 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_2, 33
# 115 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_3, 59
	goto_if_le GrottoInteract_Pokemon_22
# 116 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_3, 79
	goto_if_le GrottoInteract_Pokemon_23
# 117 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_LEDIAN
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_6:
# 119 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_1, 30
# 120 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_2, 33
# 121 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_4, 59
	goto_if_le GrottoInteract_Pokemon_27
# 122 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_4, 79
	goto_if_le GrottoInteract_Pokemon_28
# 123 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_NATU
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_7:
# 125 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_1, 11
# 126 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_2, 14
# 127 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_5, 59
	goto_if_le GrottoInteract_Pokemon_32
# 128 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_5, 79
	goto_if_le GrottoInteract_Pokemon_33
# 129 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_LEDIAN
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_8:
# 131 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_1, 36
# 132 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_2, 39
# 133 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_6, 59
	goto_if_le GrottoInteract_Pokemon_37
# 134 "data/town_scripts/hiddengrotto.pory"
	compare VAR_GROTTO_6, 79
	goto_if_le GrottoInteract_Pokemon_38
# 135 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_SEVIPER
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_10:
# 147 "data/town_scripts/hiddengrotto.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 148 "data/town_scripts/hiddengrotto.pory"
	removeobject VAR_LAST_TALKED
# 149 "data/town_scripts/hiddengrotto.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto GrottoInteract_Pokemon_9

GrottoInteract_Pokemon_12:
# 103 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_TOGEPI
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_13:
# 104 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_LEDYBA
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_17:
# 109 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_LEDYBA
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_18:
# 110 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_VULPIX_ALOLAN
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_22:
# 115 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_KLEFKI
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_23:
# 116 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_TOXEL
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_27:
# 121 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_28:
# 122 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_IGGLYBUFF
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_32:
# 127 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_MUNNA
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_33:
# 128 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_ELEKID
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_37:
# 133 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_MARILL
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_38:
# 134 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_TEMP_0, SPECIES_LEDIAN
	goto GrottoInteract_Pokemon_1

GrottoInteract_Pokemon_43:
# 152 "data/town_scripts/hiddengrotto.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 153 "data/town_scripts/hiddengrotto.pory"
	removeobject VAR_LAST_TALKED
# 154 "data/town_scripts/hiddengrotto.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 155 "data/town_scripts/hiddengrotto.pory"
	msgbox GrottoInteract_Pokemon_Text_0
	goto GrottoInteract_Pokemon_42


SetGrottoCompleted::
# 162 "data/town_scripts/hiddengrotto.pory"
	getmapnum
# 163 "data/town_scripts/hiddengrotto.pory"
	switch VAR_RESULT
# 164 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_WW_GROTTO ), SetGrottoCompleted_3
# 167 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE7_GROTTO ), SetGrottoCompleted_4
# 170 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE14_GROTTO ), SetGrottoCompleted_5
# 173 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE15_GROTTO ), SetGrottoCompleted_6
# 176 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_AZURETIDE_GROTTO ), SetGrottoCompleted_7
# 179 "data/town_scripts/hiddengrotto.pory"
	case MAP_NUM ( MAP_ROUTE21_GROTTO ), SetGrottoCompleted_8
SetGrottoCompleted_1:
	return

SetGrottoCompleted_3:
# 165 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_GROTTO_1, 0
# 166 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_DAILY_GROTTO_1
	goto SetGrottoCompleted_1

SetGrottoCompleted_4:
# 168 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_GROTTO_2, 0
# 169 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_DAILY_GROTTO_2
	goto SetGrottoCompleted_1

SetGrottoCompleted_5:
# 171 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_GROTTO_3, 0
# 172 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_DAILY_GROTTO_3
	goto SetGrottoCompleted_1

SetGrottoCompleted_6:
# 174 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_GROTTO_4, 0
# 175 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_DAILY_GROTTO_4
	goto SetGrottoCompleted_1

SetGrottoCompleted_7:
# 177 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_GROTTO_5, 0
# 178 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_DAILY_GROTTO_5
	goto SetGrottoCompleted_1

SetGrottoCompleted_8:
# 180 "data/town_scripts/hiddengrotto.pory"
	setvar VAR_GROTTO_6, 0
# 181 "data/town_scripts/hiddengrotto.pory"
	setflag FLAG_DAILY_GROTTO_6
	goto SetGrottoCompleted_1


GrottoInteract_Pokemon_Text_0:
# 155 "data/town_scripts/hiddengrotto.pory"
	.string "The wild Pokémon ran away!$"
