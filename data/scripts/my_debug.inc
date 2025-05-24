Update3::
	goto_if_set FLAG_RECEIVED_TM_FLING, Update3_2
Update3_1:
	setflag FLAG_SYS_JOURNAL_GET
	waitse
	playfanfare MUS_OBTAIN_ITEM
	message PlayerFoundJournal
	waitfanfare
	waitmessage
	setvar VAR_DEBUG, 4
	call Update4
	release
	return

Update3_2:
	msgbox MixupWithTMs
	removeitem ITEM_TM_TORMENT, 1
	giveitem ITEM_TM_FLING
	checkitemquant ITEM_TM_FLING
	goto_if_set FLAG_ITEM_ROUTE_11_TORMENT, Update3_5
Update3_4:
	checkitemquant ITEM_TM_FLING
	compare VAR_0x8005, 1
	goto_if_gt Update3_8
Update3_7:
	closemessage
	goto Update3_1

Update3_5:
	compare VAR_0x8005, 0
	goto_if_eq Update3_10
	goto Update3_4

Update3_8:
	removeitem ITEM_TM_FLING
	goto Update3_7

Update3_10:
	additem ITEM_TM_TORMENT
	goto Update3_4


Update4::
	callnative FixGrottoHiddenAbility
	switch VAR_STARTER_MON
	case 0, Update4_3
	case 1, Update4_4
	case 2, Update4_5
Update4_1:
	checktrainerflag TRAINER_BROTHER_2_ROUTE28
	goto_if 1, Update4_7
Update4_6:
	checktrainerflag TRAINER_BROTHER_3_ROUTE28
	goto_if 1, Update4_10
Update4_9:
	checktrainerflag TRAINER_BROTHER_4_ROUTE28
	goto_if 1, Update4_13
Update4_12:
	checktrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto_if 1, Update4_16
Update4_15:
	checktrainerflag TRAINER_BROTHER_6_ROUTE20
	goto_if 1, Update4_19
Update4_18:
	checktrainerflag TRAINER_UNUSED_7_
	goto_if 1, Update4_22
Update4_21:
	checktrainerflag TRAINER_UNUSED_8_
	goto_if 1, Update4_25
Update4_24:
	checktrainerflag TRAINER_UNUSED_9_
	goto_if 1, Update4_28
Update4_27:
	checktrainerflag TRAINER_UNUSED_10_
	goto_if 1, Update4_31
Update4_30:
	checktrainerflag TRAINER_UNUSED_11_
	goto_if 1, Update4_34
Update4_33:
	checktrainerflag TRAINER_UNUSED_12_
	goto_if 1, Update4_37
Update4_36:
	checktrainerflag TRAINER_UNUSED_13_
	goto_if 1, Update4_40
Update4_39:
	checktrainerflag TRAINER_UNUSED_14_
	goto_if 1, Update4_43
Update4_42:
	checktrainerflag TRAINER_UNUSED_15_
	goto_if 1, Update4_46
Update4_45:
	checktrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto_if 1, Update4_49
Update4_48:
	checktrainerflag TRAINER_UNUSED_526_
	goto_if 1, Update4_52
Update4_51:
	checktrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto_if 1, Update4_55
Update4_54:
	checktrainerflag TRAINER_UNUSED_535_
	goto_if 1, Update4_58
Update4_57:
	checktrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto_if 1, Update4_61
Update4_60:
	checktrainerflag TRAINER_UNUSED_527_
	goto_if 1, Update4_64
Update4_63:
	checktrainerflag TRAINER_MAY_BASALEK_TOWN
	goto_if 1, Update4_67
Update4_66:
	checktrainerflag TRAINER_UNUSED_536_
	goto_if 1, Update4_70
Update4_69:
	checktrainerflag TRAINER_UNUSED_234_
	goto_if 1, Update4_73
Update4_72:
	checktrainerflag TRAINER_UNUSED_235_
	goto_if 1, Update4_76
Update4_75:
	checktrainerflag TRAINER_UNUSED_236_
	goto_if 1, Update4_79
Update4_78:
	checktrainerflag TRAINER_UNUSED_228_
	goto_if 1, Update4_82
Update4_81:
	checktrainerflag TRAINER_UNUSED_229_
	goto_if 1, Update4_85
Update4_84:
	checktrainerflag TRAINER_UNUSED_230_
	goto_if 1, Update4_88
Update4_87:
	checktrainerflag TRAINER_UNUSED_231_
	goto_if 1, Update4_91
Update4_90:
	checktrainerflag TRAINER_UNUSED_232_
	goto_if 1, Update4_94
Update4_93:
	checktrainerflag TRAINER_UNUSED_233_
	goto_if 1, Update4_97
Update4_96:
	checktrainerflag TRAINER_UNUSED_225_
	goto_if 1, Update4_100
Update4_99:
	checktrainerflag TRAINER_UNUSED_226_
	goto_if 1, Update4_103
Update4_102:
	checktrainerflag TRAINER_UNUSED_227_
	goto_if 1, Update4_106
Update4_105:
	checktrainerflag TRAINER_UNUSED_376_
	goto_if 1, Update4_109
Update4_108:
	checktrainerflag TRAINER_UNUSED_377_
	goto_if 1, Update4_112
Update4_111:
	checktrainerflag TRAINER_UNUSED_378_
	goto_if 1, Update4_115
Update4_114:
	checktrainerflag TRAINER_UNUSED_379_
	goto_if 1, Update4_118
Update4_117:
	checktrainerflag TRAINER_UNUSED_380_
	goto_if 1, Update4_121
Update4_120:
	checktrainerflag TRAINER_UNUSED_381_
	goto_if 1, Update4_124
Update4_123:
	msgbox GrottoUpdate
	setvar VAR_DEBUG, 4
	return

Update4_3:
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto Update4_1

Update4_4:
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto Update4_1

Update4_5:
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto Update4_1

Update4_7:
	cleartrainerflag TRAINER_BROTHER_2_ROUTE28
	settrainerflag TRAINER_BROTHER_1_PEARLWOOD
	goto Update4_6

Update4_10:
	cleartrainerflag TRAINER_BROTHER_3_ROUTE28
	settrainerflag TRAINER_BROTHER_1_PEARLWOOD
	goto Update4_9

Update4_13:
	cleartrainerflag TRAINER_BROTHER_4_ROUTE28
	settrainerflag TRAINER_BROTHER_2_ROUTE28
	goto Update4_12

Update4_16:
	cleartrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	settrainerflag TRAINER_BROTHER_2_ROUTE28
	goto Update4_15

Update4_19:
	cleartrainerflag TRAINER_BROTHER_6_ROUTE20
	settrainerflag TRAINER_BROTHER_2_ROUTE28
	goto Update4_18

Update4_22:
	cleartrainerflag TRAINER_UNUSED_7_
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_21

Update4_25:
	cleartrainerflag TRAINER_UNUSED_8_
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_24

Update4_28:
	cleartrainerflag TRAINER_UNUSED_9_
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_27

Update4_31:
	cleartrainerflag TRAINER_UNUSED_10_
	settrainerflag TRAINER_BROTHER_4_ROUTE28
	goto Update4_30

Update4_34:
	cleartrainerflag TRAINER_UNUSED_11_
	settrainerflag TRAINER_BROTHER_4_ROUTE28
	goto Update4_33

Update4_37:
	cleartrainerflag TRAINER_UNUSED_12_
	settrainerflag TRAINER_BROTHER_4_ROUTE28
	goto Update4_36

Update4_40:
	cleartrainerflag TRAINER_UNUSED_13_
	settrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto Update4_39

Update4_43:
	cleartrainerflag TRAINER_UNUSED_14_
	settrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto Update4_42

Update4_46:
	cleartrainerflag TRAINER_UNUSED_15_
	settrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto Update4_45

Update4_49:
	cleartrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	settrainerflag TRAINER_BRENDAN_PRIMROSE_MEADOW
	goto Update4_48

Update4_52:
	cleartrainerflag TRAINER_UNUSED_526_
	settrainerflag TRAINER_BRENDAN_PRIMROSE_MEADOW
	goto Update4_51

Update4_55:
	cleartrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	settrainerflag TRAINER_MAY_PRIMROSE_MEADOW
	goto Update4_54

Update4_58:
	cleartrainerflag TRAINER_UNUSED_535_
	settrainerflag TRAINER_MAY_PRIMROSE_MEADOW
	goto Update4_57

Update4_61:
	cleartrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	settrainerflag TRAINER_BRENDAN_CORALGROVE_ELEVATOR
	goto Update4_60

Update4_64:
	cleartrainerflag TRAINER_UNUSED_527_
	settrainerflag TRAINER_BRENDAN_CORALGROVE_ELEVATOR
	goto Update4_63

Update4_67:
	cleartrainerflag TRAINER_MAY_BASALEK_TOWN
	settrainerflag TRAINER_MAY_CORALGROVE_ELEVATOR
	goto Update4_66

Update4_70:
	cleartrainerflag TRAINER_UNUSED_536_
	settrainerflag TRAINER_MAY_CORALGROVE_ELEVATOR
	goto Update4_69

Update4_73:
	cleartrainerflag TRAINER_UNUSED_234_
	settrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto Update4_72

Update4_76:
	cleartrainerflag TRAINER_UNUSED_235_
	settrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto Update4_75

Update4_79:
	cleartrainerflag TRAINER_UNUSED_236_
	settrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto Update4_78

Update4_82:
	cleartrainerflag TRAINER_UNUSED_228_
	settrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto Update4_81

Update4_85:
	cleartrainerflag TRAINER_UNUSED_229_
	settrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto Update4_84

Update4_88:
	cleartrainerflag TRAINER_UNUSED_230_
	settrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto Update4_87

Update4_91:
	cleartrainerflag TRAINER_UNUSED_231_
	settrainerflag TRAINER_MAY_ROUTE_11_NORMAL
	goto Update4_90

Update4_94:
	cleartrainerflag TRAINER_UNUSED_232_
	settrainerflag TRAINER_MAY_ROUTE_11_NORMAL
	goto Update4_93

Update4_97:
	cleartrainerflag TRAINER_UNUSED_233_
	settrainerflag TRAINER_MAY_ROUTE_11_NORMAL
	goto Update4_96

Update4_100:
	cleartrainerflag TRAINER_UNUSED_225_
	settrainerflag TRAINER_BRENDAN_ROUTE_11_NORMAL
	goto Update4_99

Update4_103:
	cleartrainerflag TRAINER_UNUSED_226_
	settrainerflag TRAINER_BRENDAN_ROUTE_11_NORMAL
	goto Update4_102

Update4_106:
	cleartrainerflag TRAINER_UNUSED_227_
	settrainerflag TRAINER_BRENDAN_ROUTE_11_NORMAL
	goto Update4_105

Update4_109:
	cleartrainerflag TRAINER_UNUSED_376_
	settrainerflag TRAINER_MAY_BASALEK_TOWN
	goto Update4_108

Update4_112:
	cleartrainerflag TRAINER_UNUSED_377_
	settrainerflag TRAINER_MAY_BASALEK_TOWN
	goto Update4_111

Update4_115:
	cleartrainerflag TRAINER_UNUSED_378_
	settrainerflag TRAINER_MAY_BASALEK_TOWN
	goto Update4_114

Update4_118:
	cleartrainerflag TRAINER_UNUSED_379_
	settrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto Update4_117

Update4_121:
	cleartrainerflag TRAINER_UNUSED_380_
	settrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto Update4_120

Update4_124:
	cleartrainerflag TRAINER_UNUSED_381_
	settrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto Update4_123


UpdateGuy::
	faceplayer
	msgbox UpdateGuy_Text1
	goto_if_unset FLAG_SYS_POKEDEX_GET, UpdateGuy_2
	message WhatWouldYouLikeToDo
	waitmessage
	compare VAR_DEBUG, 4
	goto_if_lt UpdateGuy_5
UpdateGuy_4:
	dynmultipush UpdateGuy_Text_1, 1
	dynmultipush UpdateGuy_Text_2, 2
	dynmultipush UpdateGuy_Text_3, 3
	goto_if_set FLAG_OBTAINED_MEGA_RING, UpdateGuy_8
UpdateGuy_7:
	dynmultipush UpdateGuy_Text_5, 5
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
	switch VAR_RESULT
	case 0, UpdateGuy_11
	case 1, UpdateGuy_12
	case 2, UpdateGuy_13
	case 3, UpdateGuy_14
	case 4, UpdateGuy_15
	case 5, UpdateGuy_16
	case MULTI_B_PRESSED, UpdateGuy_16
	return

UpdateGuy_2:
	msgbox UpdateGuy_Text2
	release
	end

UpdateGuy_5:
	dynmultipush UpdateGuy_Text_0, 0
	goto UpdateGuy_4

UpdateGuy_8:
	dynmultipush UpdateGuy_Text_4, 4
	goto UpdateGuy_7

UpdateGuy_11:
	goto UpdateGame
	return

UpdateGuy_12:
	goto Debug_Script_1
	return

UpdateGuy_13:
	goto SkipContent
	return

UpdateGuy_14:
	goto Debug_Script_81
	return

UpdateGuy_15:
	goto TestMegaMon
	return

UpdateGuy_16:
	msgbox UpdateGuy_Text_6, MSGBOX_AUTOCLOSE
	return


UpdateGame::
	switch VAR_DEBUG
	case 2, UpdateGame_3
	case 3, UpdateGame_4
	case 4, UpdateGame_5
UpdateGame_1:
	release
	return

UpdateGame_3:
	call Update3
	msgbox GameIsUpToDate
	goto UpdateGame_1

UpdateGame_4:
	call Update4
	msgbox GameIsUpToDate
	goto UpdateGame_1

UpdateGame_5:
	msgbox GameIsUpToDate
	goto UpdateGame_1


TestMegaMon::
	message WhichMonWouldYouTest
	waitmessage
	setvar VAR_0x8008, 40
	goto_if_set FLAG_BADGE05_GET, TestMegaMon_2
TestMegaMon_1:
	goto_if_set FLAG_BADGE06_GET, TestMegaMon_5
TestMegaMon_4:
	dynmultichoice 23, 0, FALSE, 5, 0, 0, TestMegaMon_Text_0, TestMegaMon_Text_1, TestMegaMon_Text_2, TestMegaMon_Text_3, TestMegaMon_Text_4, TestMegaMon_Text_5, UpdateGuy_Text_5
	switch VAR_RESULT
	case 0, TestMegaMon_8
	case 1, TestMegaMon_9
	case 2, TestMegaMon_10
	case 3, TestMegaMon_11
	case 4, TestMegaMon_12
	case 5, TestMegaMon_13
	case 6, TestMegaMon_14
	case MULTI_B_PRESSED, TestMegaMon_14
	return

TestMegaMon_2:
	setvar VAR_0x8008, 45
	goto TestMegaMon_1

TestMegaMon_5:
	setvar VAR_0x8008, 53
	goto TestMegaMon_4

TestMegaMon_8:
	givemon SPECIES_DECIDUEYE, VAR_0x8008, ITEM_DECIDUEITE
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DECIDUEYE
	goto ReceiveMegaStarter
	return

TestMegaMon_9:
	givemon SPECIES_EMPOLEON, VAR_0x8008, ITEM_EMPOLEONITE
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EMPOLEON
	goto ReceiveMegaStarter
	return

TestMegaMon_10:
	givemon SPECIES_CHESNAUGHT, VAR_0x8008, ITEM_CHESNAUGHTITE
	bufferspeciesname STR_VAR_1, SPECIES_CHESNAUGHT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESNAUGHT
	goto ReceiveMegaStarter
	return

TestMegaMon_11:
	givemon SPECIES_INCINEROAR, VAR_0x8008, ITEM_INCINEROARITE
	bufferspeciesname STR_VAR_1, SPECIES_INCINEROAR
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_INCINEROAR
	goto ReceiveMegaStarter
	return

TestMegaMon_12:
	givemon SPECIES_PORYGON_Z, VAR_0x8008, ITEM_PROCESSOR
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON_Z
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON_Z
	goto ReceiveMegaStarter
	return

TestMegaMon_13:
	givemon SPECIES_ARIADOS, VAR_0x8008, ITEM_ARIADOSITE
	bufferspeciesname STR_VAR_1, SPECIES_ARIADOS
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARIADOS
	goto ReceiveMegaStarter
	return

TestMegaMon_14:
	msgbox TestMegaMon_Text_6, MSGBOX_AUTOCLOSE
	release
	end


UnstuckPlayer::
	msgbox UnstuckPlayer_Text, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq UnstuckPlayer_2
	warp MAP_PEARLWOOD_POINT, 14, 24
	waitstate
	release
	end

UnstuckPlayer_2:
	release
	end


SkipContent::
	goto_if_unset FLAG_TEMP_1, SkipContent_2
SkipContent_1:
	message ChooseContentToSkip
	waitmessage
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_8
	setvar VAR_TEMP_B, 0
	dynmultichoice 23, 0, FALSE, 6, VAR_TEMP_A, 0, SkipContent_Text_0, SkipContent_Text_1, SkipContent_Text_2, SkipContent_Text_3, SkipContent_Text_4, SkipContent_Text_5, SkipContent_Text_6, SkipContent_Text_7, SkipContent_Text_8, SkipContent_Text_9, SkipContent_Text_10, SkipContent_Text_11, SkipContent_Text_12, SkipContent_Text_13, SkipContent_Text_14, SkipContent_Text_15, SkipContent_Text_16, SkipContent_Text_17, SkipContent_Text_18, SkipContent_Text_19, SkipContent_Text_20, SkipContent_Text_21, SkipContent_Text_22, SkipContent_Text_23, SkipContent_Text_24, SkipContent_Text_25, SkipContent_Text_26, SkipContent_Text_27, SkipContent_Text_28, SkipContent_Text_29, SkipContent_Text_30, SkipContent_Text_31, SkipContent_Text_32, SkipContent_Text_33, SkipContent_Text_34, SkipContent_Text_35, SkipContent_Text_36, SkipContent_Text_37, SkipContent_Text_38, SkipContent_Text_39, SkipContent_Text_40, SkipContent_Text_41, SkipContent_Text_42, SkipContent_Text_43, SkipContent_Text_44
	switch VAR_RESULT
	case 0, SkipContent_5
	case 1, SkipContent_6
	case 2, SkipContent_7
	case 3, SkipContent_8
	case 4, SkipContent_9
	case 5, SkipContent_10
	case 6, SkipContent_11
	case 7, SkipContent_12
	case 8, SkipContent_13
	case 9, SkipContent_14
	case 10, SkipContent_15
	case 11, SkipContent_16
	case 12, SkipContent_17
	case 13, SkipContent_18
	case 14, SkipContent_19
	case 15, SkipContent_20
	case 16, SkipContent_21
	case 17, SkipContent_22
	case 18, SkipContent_23
	case 19, SkipContent_24
	case 20, SkipContent_25
	case 21, SkipContent_26
	case 22, SkipContent_27
	case 23, SkipContent_28
	case 24, SkipContent_29
	case 25, SkipContent_30
	case 26, SkipContent_31
	case 27, SkipContent_32
	case 28, SkipContent_33
	case 29, SkipContent_34
	case 30, SkipContent_35
	case 31, SkipContent_36
	case 32, SkipContent_37
	case 33, SkipContent_38
	case 34, SkipContent_39
	case 35, SkipContent_40
	case 36, SkipContent_41
	case 37, SkipContent_42
	case 38, SkipContent_43
	case 39, SkipContent_44
	case 40, SkipContent_45
	case 41, SkipContent_46
	case 42, SkipContent_47
	case 43, SkipContent_48
	case 44, SkipContent_49
	case 45, SkipContent_50
	case MULTI_B_PRESSED, SkipContent_50
	return

SkipContent_2:
	setflag FLAG_TEMP_1
	msgbox SkipContent_Text
	goto SkipContent_1

SkipContent_5:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route1
	return

SkipContent_6:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route2
	return

SkipContent_7:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_WindyWoods
	return

SkipContent_8:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_CoralgroveCity
	return

SkipContent_9:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_AzuretideTown
	return

SkipContent_10:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route4
	return

SkipContent_11:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_PokemonRanch
	return

SkipContent_12:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_AldeleafCity
	return

SkipContent_13:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route30
	return

SkipContent_14:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_WindplumeValley
	return

SkipContent_15:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route5
	return

SkipContent_16:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_FlowerFields
	return

SkipContent_17:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_SkylochVillage
	return

SkipContent_18:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route6
	return

SkipContent_19:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route8
	return

SkipContent_20:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_ShoreslateCity
	return

SkipContent_21:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_ScorchedDesert
	return

SkipContent_22:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route7
	return

SkipContent_23:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_MarigorgeTown
	return

SkipContent_24:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_KaolisleCity
	return

SkipContent_25:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_RockliffeTown
	return

SkipContent_26:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route11
	return

SkipContent_27:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route12
	return

SkipContent_28:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_SandstoneCity
	return

SkipContent_29:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route13
	return

SkipContent_30:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_AdamantTower
	return

SkipContent_31:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route14
	return

SkipContent_32:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route15
	return

SkipContent_33:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_FishingVillage
	return

SkipContent_34:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route23
	return

SkipContent_35:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_DrisledgeTown
	return

SkipContent_36:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_AmberockTown
	return

SkipContent_37:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route3
	return

SkipContent_38:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route9
	return

SkipContent_39:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route10
	return

SkipContent_40:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_WindplumeMountain
	return

SkipContent_41:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route16
	return

SkipContent_42:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_BasalekTown
	return

SkipContent_43:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route17
	return

SkipContent_44:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_Route18
	return

SkipContent_45:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_FrosthearthCity
	return

SkipContent_46:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_RockClimb
	return

SkipContent_47:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_DesertRuins
	return

SkipContent_48:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_SafariZone
	return

SkipContent_49:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_MiscSurfing
	return

SkipContent_50:
	copyvar VAR_TEMP_A, VAR_RESULT
	goto SkipContent_
	return


SkipContent_::
	call SkipContent_BufferChoices
	return


SkipContent_BufferChoices::
	bufferstring STR_VAR_1, SkipContent_BufferChoices_Text_0
	goto_if_set FLAG_TEMP_3, SkipContent_BufferChoices_2
	dynmultipush SkipContent_BufferChoices_Text_2, 0
SkipContent_BufferChoices_1:
	goto_if_set FLAG_TEMP_4, SkipContent_BufferChoices_6
	dynmultipush SkipContent_BufferChoices_Text_4, 1
SkipContent_BufferChoices_5:
	goto_if_set FLAG_TEMP_5, SkipContent_BufferChoices_10
	dynmultipush SkipContent_BufferChoices_Text_6, 2
SkipContent_BufferChoices_9:
	dynmultipush SkipContent_BufferChoices_Text_7, 3
	dynmultipush SkipContent_BufferChoices_Text_8, 4
	dynmultipush SkipContent_BufferChoices_Text_9, 5
	goto_if_set FLAG_TEMP_6, SkipContent_BufferChoices_14
	message SkipContent_BufferChoices_Text_11
SkipContent_BufferChoices_13:
	waitmessage
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
	setflag FLAG_TEMP_6
	switch VAR_RESULT
	case 0, SkipContent_BufferChoices_19
	case 1, SkipContent_BufferChoices_20
	case 2, SkipContent_BufferChoices_21
	case 3, SkipContent_BufferChoices_22
	case 5, SkipContent_BufferChoices_23
	case MULTI_B_PRESSED, SkipContent_BufferChoices_23
SkipContent_BufferChoices_17:
	return

SkipContent_BufferChoices_2:
	dynmultipush SkipContent_BufferChoices_Text_1, 0
	goto SkipContent_BufferChoices_1

SkipContent_BufferChoices_6:
	dynmultipush SkipContent_BufferChoices_Text_3, 1
	goto SkipContent_BufferChoices_5

SkipContent_BufferChoices_10:
	dynmultipush SkipContent_BufferChoices_Text_5, 2
	goto SkipContent_BufferChoices_9

SkipContent_BufferChoices_14:
	message SkipContent_BufferChoices_Text_10
	goto SkipContent_BufferChoices_13

SkipContent_BufferChoices_19:
	goto BufferChoices0
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_20:
	goto BufferChoices1
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_21:
	goto BufferChoices2
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_22:
	goto BufferChoices4
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_23:
	goto SkipContent
	goto SkipContent_BufferChoices_17


BufferChoices0::
	goto_if_unset FLAG_TEMP_3, BufferChoices0_2
	clearflag FLAG_TEMP_3
BufferChoices0_1:
	goto SkipContent_BufferChoices
	return

BufferChoices0_2:
	setflag FLAG_TEMP_3
	goto BufferChoices0_1


BufferChoices1::
	goto_if_unset FLAG_TEMP_4, BufferChoices1_2
	clearflag FLAG_TEMP_4
BufferChoices1_1:
	goto SkipContent_BufferChoices
	return

BufferChoices1_2:
	setflag FLAG_TEMP_4
	goto BufferChoices1_1


BufferChoices2::
	goto_if_unset FLAG_TEMP_5, BufferChoices2_2
	clearflag FLAG_TEMP_5
BufferChoices2_1:
	goto SkipContent_BufferChoices
	return

BufferChoices2_2:
	setflag FLAG_TEMP_5
	goto BufferChoices2_1


BufferChoices4::
	goto_if_unset FLAG_TEMP_3, BufferChoices4_2
	goto_if_unset FLAG_TEMP_4, BufferChoices4_2
	goto_if_unset FLAG_TEMP_5, BufferChoices4_2
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	clearflag FLAG_TEMP_5
BufferChoices4_1:
	goto SkipContent_BufferChoices
	return

BufferChoices4_2:
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	goto BufferChoices4_1


SkipContent_Route1::
	bufferstring STR_VAR_2, SkipContent_Text_0
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route1_2
SkipContent_Route1_1:
	call ContentSkipper_SkipContent_Route1
	goto SkipContentEnd
	return

SkipContent_Route1_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route1_4
	goto SkipContent_Route1_1

SkipContent_Route1_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route1_1


SkipContent_Route2::
	bufferstring STR_VAR_2, SkipContent_Text_1
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route2_2
SkipContent_Route2_1:
	call ContentSkipper_SkipContent_Route2
	goto SkipContentEnd
	return

SkipContent_Route2_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route2_4
	goto SkipContent_Route2_1

SkipContent_Route2_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route2_1


SkipContent_WindyWoods::
	bufferstring STR_VAR_2, SkipContent_Text_2
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_WindyWoods_2
SkipContent_WindyWoods_1:
	call ContentSkipper_SkipContent_WindyWoods
	goto SkipContentEnd
	return

SkipContent_WindyWoods_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_WindyWoods_4
	goto SkipContent_WindyWoods_1

SkipContent_WindyWoods_4:
	setflag FLAG_TEMP_7
	goto SkipContent_WindyWoods_1


SkipContent_CoralgroveCity::
	bufferstring STR_VAR_2, SkipContent_Text_3
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_CoralgroveCity_2
SkipContent_CoralgroveCity_1:
	call ContentSkipper_SkipContent_CoralgroveCity
	goto SkipContentEnd
	return

SkipContent_CoralgroveCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_CoralgroveCity_4
	goto SkipContent_CoralgroveCity_1

SkipContent_CoralgroveCity_4:
	setflag FLAG_TEMP_7
	goto SkipContent_CoralgroveCity_1


SkipContent_AzuretideTown::
	bufferstring STR_VAR_2, SkipContent_Text_4
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_AzuretideTown_2
SkipContent_AzuretideTown_1:
	call ContentSkipper_SkipContent_AzuretideTown
	goto SkipContentEnd
	return

SkipContent_AzuretideTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_AzuretideTown_4
	goto SkipContent_AzuretideTown_1

SkipContent_AzuretideTown_4:
	setflag FLAG_TEMP_7
	goto SkipContent_AzuretideTown_1


SkipContent_Route4::
	bufferstring STR_VAR_2, SkipContent_Text_5
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route4_2
SkipContent_Route4_1:
	call ContentSkipper_SkipContent_Route4
	goto SkipContentEnd
	return

SkipContent_Route4_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route4_4
	goto SkipContent_Route4_1

SkipContent_Route4_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route4_1


SkipContent_PokemonRanch::
	bufferstring STR_VAR_2, SkipContent_PokemonRanch_Text_0
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_PokemonRanch_2
SkipContent_PokemonRanch_1:
	call ContentSkipper_SkipContent_PokemonRanch
	goto SkipContentEnd
	return

SkipContent_PokemonRanch_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_PokemonRanch_4
	goto SkipContent_PokemonRanch_1

SkipContent_PokemonRanch_4:
	setflag FLAG_TEMP_7
	goto SkipContent_PokemonRanch_1


SkipContent_AldeleafCity::
	bufferstring STR_VAR_2, SkipContent_Text_7
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_AldeleafCity_2
SkipContent_AldeleafCity_1:
	call ContentSkipper_SkipContent_AldeleafCity
	goto SkipContentEnd
	return

SkipContent_AldeleafCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_AldeleafCity_4
	goto SkipContent_AldeleafCity_1

SkipContent_AldeleafCity_4:
	setflag FLAG_TEMP_7
	goto SkipContent_AldeleafCity_1


SkipContent_Route30::
	bufferstring STR_VAR_2, SkipContent_Text_8
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route30_2
SkipContent_Route30_1:
	call ContentSkipper_SkipContent_Route30
	goto SkipContentEnd
	return

SkipContent_Route30_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route30_4
	goto SkipContent_Route30_1

SkipContent_Route30_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route30_1


SkipContent_WindplumeValley::
	bufferstring STR_VAR_2, SkipContent_Text_9
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_WindplumeValley_2
SkipContent_WindplumeValley_1:
	call ContentSkipper_SkipContent_WindplumeValley
	goto SkipContentEnd
	return

SkipContent_WindplumeValley_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_WindplumeValley_4
	goto SkipContent_WindplumeValley_1

SkipContent_WindplumeValley_4:
	setflag FLAG_TEMP_7
	goto SkipContent_WindplumeValley_1


SkipContent_Route5::
	bufferstring STR_VAR_2, SkipContent_Text_10
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route5_2
SkipContent_Route5_1:
	call ContentSkipper_SkipContent_Route5
	goto SkipContentEnd
	return

SkipContent_Route5_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route5_4
	goto SkipContent_Route5_1

SkipContent_Route5_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route5_1


SkipContent_FlowerFields::
	bufferstring STR_VAR_2, SkipContent_Text_11
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_FlowerFields_2
SkipContent_FlowerFields_1:
	call ContentSkipper_SkipContent_FlowerFields
	goto SkipContentEnd
	return

SkipContent_FlowerFields_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_FlowerFields_4
	goto SkipContent_FlowerFields_1

SkipContent_FlowerFields_4:
	setflag FLAG_TEMP_7
	goto SkipContent_FlowerFields_1


SkipContent_SkylochVillage::
	bufferstring STR_VAR_2, SkipContent_Text_12
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_SkylochVillage_2
SkipContent_SkylochVillage_1:
	call ContentSkipper_SkipContent_SkylochVillage
	goto SkipContentEnd
	return

SkipContent_SkylochVillage_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_SkylochVillage_4
	goto SkipContent_SkylochVillage_1

SkipContent_SkylochVillage_4:
	setflag FLAG_TEMP_7
	goto SkipContent_SkylochVillage_1


SkipContent_Route6::
	bufferstring STR_VAR_2, SkipContent_Text_13
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route6_2
SkipContent_Route6_1:
	call ContentSkipper_SkipContent_Route6
	goto SkipContentEnd
	return

SkipContent_Route6_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route6_4
	goto SkipContent_Route6_1

SkipContent_Route6_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route6_1


SkipContent_Route8::
	bufferstring STR_VAR_2, SkipContent_Text_14
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route8_2
SkipContent_Route8_1:
	call ContentSkipper_SkipContent_Route8
	goto SkipContentEnd
	return

SkipContent_Route8_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route8_4
	goto SkipContent_Route8_1

SkipContent_Route8_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route8_1


SkipContent_ShoreslateCity::
	bufferstring STR_VAR_2, SkipContent_Text_15
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_ShoreslateCity_2
SkipContent_ShoreslateCity_1:
	call ContentSkipper_SkipContent_ShoreslateCity
	goto SkipContentEnd
	return

SkipContent_ShoreslateCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_ShoreslateCity_4
	goto SkipContent_ShoreslateCity_1

SkipContent_ShoreslateCity_4:
	setflag FLAG_TEMP_7
	goto SkipContent_ShoreslateCity_1


SkipContent_ScorchedDesert::
	bufferstring STR_VAR_2, SkipContent_Text_16
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_ScorchedDesert_2
SkipContent_ScorchedDesert_1:
	call ContentSkipper_SkipContent_ScorchedDesert
	goto SkipContentEnd
	return

SkipContent_ScorchedDesert_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_ScorchedDesert_4
	goto SkipContent_ScorchedDesert_1

SkipContent_ScorchedDesert_4:
	setflag FLAG_TEMP_7
	goto SkipContent_ScorchedDesert_1


SkipContent_Route7::
	bufferstring STR_VAR_2, SkipContent_Text_17
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route7_2
SkipContent_Route7_1:
	call ContentSkipper_SkipContent_Route7
	goto SkipContentEnd
	return

SkipContent_Route7_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route7_4
	goto SkipContent_Route7_1

SkipContent_Route7_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route7_1


SkipContent_MarigorgeTown::
	bufferstring STR_VAR_2, SkipContent_Text_18
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_MarigorgeTown_2
SkipContent_MarigorgeTown_1:
	call ContentSkipper_SkipContent_MarigorgeTown
	goto SkipContentEnd
	return

SkipContent_MarigorgeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_MarigorgeTown_4
	goto SkipContent_MarigorgeTown_1

SkipContent_MarigorgeTown_4:
	setflag FLAG_TEMP_7
	goto SkipContent_MarigorgeTown_1


SkipContent_KaolisleCity::
	bufferstring STR_VAR_2, SkipContent_Text_19
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_KaolisleCity_2
SkipContent_KaolisleCity_1:
	call ContentSkipper_SkipContent_KaolisleCity
	goto SkipContentEnd
	return

SkipContent_KaolisleCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_KaolisleCity_4
	goto SkipContent_KaolisleCity_1

SkipContent_KaolisleCity_4:
	setflag FLAG_TEMP_7
	goto SkipContent_KaolisleCity_1


SkipContent_RockliffeTown::
	bufferstring STR_VAR_2, SkipContent_Text_20
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_RockliffeTown_2
SkipContent_RockliffeTown_1:
	call ContentSkipper_SkipContent_RockliffeTown
	goto SkipContentEnd
	return

SkipContent_RockliffeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_RockliffeTown_4
	goto SkipContent_RockliffeTown_1

SkipContent_RockliffeTown_4:
	setflag FLAG_TEMP_7
	goto SkipContent_RockliffeTown_1


SkipContent_Route11::
	bufferstring STR_VAR_2, SkipContent_Text_21
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route11_2
SkipContent_Route11_1:
	call ContentSkipper_SkipContent_Route11
	goto SkipContentEnd
	return

SkipContent_Route11_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route11_4
	goto SkipContent_Route11_1

SkipContent_Route11_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route11_1


SkipContent_Route12::
	bufferstring STR_VAR_2, SkipContent_Text_22
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route12_2
SkipContent_Route12_1:
	call ContentSkipper_SkipContent_Route12
	goto SkipContentEnd
	return

SkipContent_Route12_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route12_4
	goto SkipContent_Route12_1

SkipContent_Route12_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route12_1


SkipContent_SandstoneCity::
	bufferstring STR_VAR_2, SkipContent_SandstoneCity_Text_0
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_SandstoneCity_2
SkipContent_SandstoneCity_1:
	call ContentSkipper_SkipContent_SandstoneCity
	goto SkipContentEnd
	return

SkipContent_SandstoneCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_SandstoneCity_4
	goto SkipContent_SandstoneCity_1

SkipContent_SandstoneCity_4:
	setflag FLAG_TEMP_7
	goto SkipContent_SandstoneCity_1


SkipContent_Route13::
	bufferstring STR_VAR_2, SkipContent_Route13_Text_0
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route13_2
SkipContent_Route13_1:
	call ContentSkipper_SkipContent_Route13
	goto SkipContentEnd
	return

SkipContent_Route13_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route13_4
	goto SkipContent_Route13_1

SkipContent_Route13_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route13_1


SkipContent_AdamantTower::
	bufferstring STR_VAR_2, SkipContent_Text_24
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_AdamantTower_2
SkipContent_AdamantTower_1:
	call ContentSkipper_SkipContent_AdamantTower
	goto SkipContentEnd
	return

SkipContent_AdamantTower_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_AdamantTower_4
	goto SkipContent_AdamantTower_1

SkipContent_AdamantTower_4:
	setflag FLAG_TEMP_7
	goto SkipContent_AdamantTower_1


SkipContent_Route14::
	bufferstring STR_VAR_2, SkipContent_Text_25
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route14_2
SkipContent_Route14_1:
	call ContentSkipper_SkipContent_Route14
	goto SkipContentEnd
	return

SkipContent_Route14_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route14_4
	goto SkipContent_Route14_1

SkipContent_Route14_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route14_1


SkipContent_Route15::
	bufferstring STR_VAR_2, SkipContent_Text_26
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route15_2
SkipContent_Route15_1:
	call ContentSkipper_SkipContent_Route15
	goto SkipContentEnd
	return

SkipContent_Route15_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route15_4
	goto SkipContent_Route15_1

SkipContent_Route15_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route15_1


SkipContent_FishingVillage::
	bufferstring STR_VAR_2, SkipContent_Text_27
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_FishingVillage_2
SkipContent_FishingVillage_1:
	call ContentSkipper_SkipContent_FishingVillage
	goto SkipContentEnd
	return

SkipContent_FishingVillage_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_FishingVillage_4
	goto SkipContent_FishingVillage_1

SkipContent_FishingVillage_4:
	setflag FLAG_TEMP_7
	goto SkipContent_FishingVillage_1


SkipContent_Route23::
	bufferstring STR_VAR_2, SkipContent_Text_28
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route23_2
SkipContent_Route23_1:
	call ContentSkipper_SkipContent_Route23
	goto SkipContentEnd
	return

SkipContent_Route23_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route23_4
	goto SkipContent_Route23_1

SkipContent_Route23_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route23_1


SkipContent_DrisledgeTown::
	bufferstring STR_VAR_2, SkipContent_Text_29
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_DrisledgeTown_2
SkipContent_DrisledgeTown_1:
	call ContentSkipper_SkipContent_DrisledgeTown
	goto SkipContentEnd
	return

SkipContent_DrisledgeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_DrisledgeTown_4
	goto SkipContent_DrisledgeTown_1

SkipContent_DrisledgeTown_4:
	setflag FLAG_TEMP_7
	goto SkipContent_DrisledgeTown_1


SkipContent_AmberockTown::
	bufferstring STR_VAR_2, SkipContent_Text_30
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_AmberockTown_2
SkipContent_AmberockTown_1:
	call ContentSkipper_SkipContent_AmberockTown
	goto SkipContentEnd
	return

SkipContent_AmberockTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_AmberockTown_4
	goto SkipContent_AmberockTown_1

SkipContent_AmberockTown_4:
	setflag FLAG_TEMP_7
	goto SkipContent_AmberockTown_1


SkipContent_Route3::
	bufferstring STR_VAR_2, SkipContent_Text_31
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route3_2
SkipContent_Route3_1:
	call ContentSkipper_SkipContent_Route3
	goto SkipContentEnd
	return

SkipContent_Route3_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route3_4
	goto SkipContent_Route3_1

SkipContent_Route3_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route3_1


SkipContent_Route9::
	bufferstring STR_VAR_2, SkipContent_Text_32
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route9_2
SkipContent_Route9_1:
	call ContentSkipper_SkipContent_Route9
	goto SkipContentEnd
	return

SkipContent_Route9_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route9_4
	goto SkipContent_Route9_1

SkipContent_Route9_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route9_1


SkipContent_Route10::
	bufferstring STR_VAR_2, SkipContent_Text_33
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route10_2
SkipContent_Route10_1:
	call ContentSkipper_SkipContent_Route10
	goto SkipContentEnd
	return

SkipContent_Route10_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route10_4
	goto SkipContent_Route10_1

SkipContent_Route10_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route10_1


SkipContent_WindplumeMountain::
	bufferstring STR_VAR_2, SkipContent_Text_34
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_WindplumeMountain_2
SkipContent_WindplumeMountain_1:
	call ContentSkipper_SkipContent_WindplumeMountain
	goto SkipContentEnd
	return

SkipContent_WindplumeMountain_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_WindplumeMountain_4
	goto SkipContent_WindplumeMountain_1

SkipContent_WindplumeMountain_4:
	setflag FLAG_TEMP_7
	goto SkipContent_WindplumeMountain_1


SkipContent_Route16::
	bufferstring STR_VAR_2, SkipContent_Text_35
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route16_2
SkipContent_Route16_1:
	call ContentSkipper_SkipContent_Route16
	goto SkipContentEnd
	return

SkipContent_Route16_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route16_4
	goto SkipContent_Route16_1

SkipContent_Route16_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route16_1


SkipContent_BasalekTown::
	bufferstring STR_VAR_2, SkipContent_Text_36
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_BasalekTown_2
SkipContent_BasalekTown_1:
	call ContentSkipper_SkipContent_BasalekTown
	goto SkipContentEnd
	return

SkipContent_BasalekTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_BasalekTown_4
	goto SkipContent_BasalekTown_1

SkipContent_BasalekTown_4:
	setflag FLAG_TEMP_7
	goto SkipContent_BasalekTown_1


SkipContent_Route17::
	bufferstring STR_VAR_2, SkipContent_Text_37
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route17_2
SkipContent_Route17_1:
	call ContentSkipper_SkipContent_Route17
	goto SkipContentEnd
	return

SkipContent_Route17_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route17_4
	goto SkipContent_Route17_1

SkipContent_Route17_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route17_1


SkipContent_Route18::
	bufferstring STR_VAR_2, SkipContent_Text_38
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_Route18_2
SkipContent_Route18_1:
	call ContentSkipper_SkipContent_Route18
	goto SkipContentEnd
	return

SkipContent_Route18_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_Route18_4
	goto SkipContent_Route18_1

SkipContent_Route18_4:
	setflag FLAG_TEMP_7
	goto SkipContent_Route18_1


SkipContent_FrosthearthCity::
	bufferstring STR_VAR_2, SkipContent_Text_39
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_FrosthearthCity_2
SkipContent_FrosthearthCity_1:
	call ContentSkipper_SkipContent_FrosthearthCity
	goto SkipContentEnd
	return

SkipContent_FrosthearthCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_FrosthearthCity_4
	goto SkipContent_FrosthearthCity_1

SkipContent_FrosthearthCity_4:
	setflag FLAG_TEMP_7
	goto SkipContent_FrosthearthCity_1


SkipContent_RockClimb::
	bufferstring STR_VAR_2, SkipContent_Text_40
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_RockClimb_2
SkipContent_RockClimb_1:
	call ContentSkipper_SkipContent_RockClimb
	goto SkipContentEnd
	return

SkipContent_RockClimb_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_RockClimb_4
	goto SkipContent_RockClimb_1

SkipContent_RockClimb_4:
	setflag FLAG_TEMP_7
	goto SkipContent_RockClimb_1


SkipContent_DesertRuins::
	bufferstring STR_VAR_2, SkipContent_Text_41
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_DesertRuins_2
SkipContent_DesertRuins_1:
	call ContentSkipper_SkipContent_DesertRuins
	goto SkipContentEnd
	return

SkipContent_DesertRuins_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_DesertRuins_4
	goto SkipContent_DesertRuins_1

SkipContent_DesertRuins_4:
	setflag FLAG_TEMP_7
	goto SkipContent_DesertRuins_1


SkipContent_SafariZone::
	bufferstring STR_VAR_2, SkipContent_Text_42
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_SafariZone_2
SkipContent_SafariZone_1:
	call ContentSkipper_SkipContent_SafariZone
	goto SkipContentEnd
	return

SkipContent_SafariZone_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_SafariZone_4
	goto SkipContent_SafariZone_1

SkipContent_SafariZone_4:
	setflag FLAG_TEMP_7
	goto SkipContent_SafariZone_1


SkipContent_MiscSurfing::
	bufferstring STR_VAR_2, SkipContent_Text_43
	call SkipContent_BufferChoices
	compare VAR_RESULT, 5
	goto_if_eq SkipContent_MiscSurfing_2
SkipContent_MiscSurfing_1:
	call ContentSkipper_SkipContent_MiscSurfing
	goto SkipContentEnd
	return

SkipContent_MiscSurfing_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkipContent_MiscSurfing_4
	goto SkipContent_MiscSurfing_1

SkipContent_MiscSurfing_4:
	setflag FLAG_TEMP_7
	goto SkipContent_MiscSurfing_1


SkipContentEnd::
	msgbox ContentHasBeenSkipped
	release
	end


ContentSkipper_SkipContent_Route1::
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route1_2
	call CompleteArea_Route_1
ContentSkipper_SkipContent_Route1_1:
	return

ContentSkipper_SkipContent_Route1_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route1_1


ContentSkipper_SkipContent_Route2::
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route2_2
	call CompleteArea_Route_2
ContentSkipper_SkipContent_Route2_1:
	return

ContentSkipper_SkipContent_Route2_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route2_1


ContentSkipper_SkipContent_WindyWoods::
	setvar VAR_TEMP_B, 1
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindyWoods_2
	call CompleteArea_Windy_Woods
ContentSkipper_SkipContent_WindyWoods_1:
	return

ContentSkipper_SkipContent_WindyWoods_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindyWoods_1


ContentSkipper_SkipContent_CoralgroveCity::
	setvar VAR_TEMP_B, 2
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_CoralgroveCity_2
	call CompleteArea_Coralgrove_City
ContentSkipper_SkipContent_CoralgroveCity_1:
	return

ContentSkipper_SkipContent_CoralgroveCity_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_CoralgroveCity_1


ContentSkipper_SkipContent_AzuretideTown::
	setvar VAR_TEMP_B, 2
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AzuretideTown_2
	call CompleteArea_Azuretide_Town
ContentSkipper_SkipContent_AzuretideTown_1:
	return

ContentSkipper_SkipContent_AzuretideTown_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AzuretideTown_1


ContentSkipper_SkipContent_Route4::
	setvar VAR_TEMP_B, 2
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route4_2
	call CompleteArea_Route_4
ContentSkipper_SkipContent_Route4_1:
	return

ContentSkipper_SkipContent_Route4_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route4_1


ContentSkipper_SkipContent_PokemonRanch::
	setvar VAR_TEMP_B, 3
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_PokemonRanch_2
	call CompleteArea_Pokemon_Ranch
ContentSkipper_SkipContent_PokemonRanch_1:
	return

ContentSkipper_SkipContent_PokemonRanch_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_PokemonRanch_1


ContentSkipper_SkipContent_AldeleafCity::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AldeleafCity_2
	call CompleteArea_Aldeleaf_City
ContentSkipper_SkipContent_AldeleafCity_1:
	return

ContentSkipper_SkipContent_AldeleafCity_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AldeleafCity_1


ContentSkipper_SkipContent_Route30::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route30_2
	call CompleteArea_Route_30
ContentSkipper_SkipContent_Route30_1:
	return

ContentSkipper_SkipContent_Route30_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route30_1


ContentSkipper_SkipContent_WindplumeValley::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindplumeValley_2
	call CompleteArea_Windplume_Valley
ContentSkipper_SkipContent_WindplumeValley_1:
	return

ContentSkipper_SkipContent_WindplumeValley_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindplumeValley_1


ContentSkipper_SkipContent_Route5::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route5_2
	call CompleteArea_Route_5
ContentSkipper_SkipContent_Route5_1:
	return

ContentSkipper_SkipContent_Route5_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route5_1


ContentSkipper_SkipContent_FlowerFields::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FlowerFields_2
	call CompleteArea_Flower_Fields
ContentSkipper_SkipContent_FlowerFields_1:
	return

ContentSkipper_SkipContent_FlowerFields_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FlowerFields_1


ContentSkipper_SkipContent_SkylochVillage::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_SkylochVillage_2
	call CompleteArea_Skyloch_Village
ContentSkipper_SkipContent_SkylochVillage_1:
	return

ContentSkipper_SkipContent_SkylochVillage_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_SkylochVillage_1


ContentSkipper_SkipContent_Route6::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route6_2
	call CompleteArea_Route_6
ContentSkipper_SkipContent_Route6_1:
	return

ContentSkipper_SkipContent_Route6_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route6_1


ContentSkipper_SkipContent_Route8::
	setvar VAR_TEMP_B, 4
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route8_2
	call CompleteArea_Route_8
ContentSkipper_SkipContent_Route8_1:
	return

ContentSkipper_SkipContent_Route8_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route8_1


ContentSkipper_SkipContent_ShoreslateCity::
	setvar VAR_TEMP_B, 5
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_ShoreslateCity_2
	call CompleteArea_Shoreslate_City
ContentSkipper_SkipContent_ShoreslateCity_1:
	return

ContentSkipper_SkipContent_ShoreslateCity_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_ShoreslateCity_1


ContentSkipper_SkipContent_ScorchedDesert::
	setvar VAR_TEMP_B, 5
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_ScorchedDesert_2
	call CompleteArea_Scorched_Desert
ContentSkipper_SkipContent_ScorchedDesert_1:
	return

ContentSkipper_SkipContent_ScorchedDesert_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_ScorchedDesert_1


ContentSkipper_SkipContent_Route7::
	setvar VAR_TEMP_B, 5
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route7_2
	call CompleteArea_Route_7
ContentSkipper_SkipContent_Route7_1:
	return

ContentSkipper_SkipContent_Route7_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route7_1


ContentSkipper_SkipContent_MarigorgeTown::
	setvar VAR_TEMP_B, 5
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_MarigorgeTown_2
	call CompleteArea_Marigorge_Town
ContentSkipper_SkipContent_MarigorgeTown_1:
	return

ContentSkipper_SkipContent_MarigorgeTown_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_MarigorgeTown_1


ContentSkipper_SkipContent_KaolisleCity::
	setvar VAR_TEMP_B, 6
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_KaolisleCity_2
	call CompleteArea_Kaolisle_City
ContentSkipper_SkipContent_KaolisleCity_1:
	return

ContentSkipper_SkipContent_KaolisleCity_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_KaolisleCity_1


ContentSkipper_SkipContent_RockliffeTown::
	setvar VAR_TEMP_B, 6
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_RockliffeTown_2
	call CompleteArea_Rockliffe_Town
ContentSkipper_SkipContent_RockliffeTown_1:
	return

ContentSkipper_SkipContent_RockliffeTown_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_RockliffeTown_1


ContentSkipper_SkipContent_Route11::
	setvar VAR_TEMP_B, 7
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route11_2
	call CompleteArea_Route_11
ContentSkipper_SkipContent_Route11_1:
	return

ContentSkipper_SkipContent_Route11_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route11_1


ContentSkipper_SkipContent_Route12::
	setvar VAR_TEMP_B, 7
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route12_2
	call CompleteArea_Route_12
ContentSkipper_SkipContent_Route12_1:
	return

ContentSkipper_SkipContent_Route12_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route12_1


ContentSkipper_SkipContent_SandstoneCity::
	setvar VAR_TEMP_B, 8
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_SandstoneCity_2
	call CompleteArea_Sandstone_City
ContentSkipper_SkipContent_SandstoneCity_1:
	return

ContentSkipper_SkipContent_SandstoneCity_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_SandstoneCity_1


ContentSkipper_SkipContent_Route13::
	setvar VAR_TEMP_B, 8
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route13_2
	call CompleteArea_Route_13
ContentSkipper_SkipContent_Route13_1:
	return

ContentSkipper_SkipContent_Route13_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route13_1


ContentSkipper_SkipContent_AdamantTower::
	setvar VAR_TEMP_B, 9
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AdamantTower_2
	call CompleteArea_Adamant_Tower
ContentSkipper_SkipContent_AdamantTower_1:
	return

ContentSkipper_SkipContent_AdamantTower_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AdamantTower_1


ContentSkipper_SkipContent_Route14::
	setvar VAR_TEMP_B, 10
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route14_2
	call CompleteArea_Route_14
ContentSkipper_SkipContent_Route14_1:
	return

ContentSkipper_SkipContent_Route14_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route14_1


ContentSkipper_SkipContent_Route15::
	setvar VAR_TEMP_B, 11
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route15_2
	call CompleteArea_Route_15
ContentSkipper_SkipContent_Route15_1:
	return

ContentSkipper_SkipContent_Route15_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route15_1


ContentSkipper_SkipContent_FishingVillage::
	setvar VAR_TEMP_B, 11
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FishingVillage_2
	call CompleteArea_Fishing_Village
ContentSkipper_SkipContent_FishingVillage_1:
	return

ContentSkipper_SkipContent_FishingVillage_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FishingVillage_1


ContentSkipper_SkipContent_Route23::
	setvar VAR_TEMP_B, 11
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route23_2
	call CompleteArea_Route_23
ContentSkipper_SkipContent_Route23_1:
	return

ContentSkipper_SkipContent_Route23_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route23_1


ContentSkipper_SkipContent_DrisledgeTown::
	setvar VAR_TEMP_B, 12
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_DrisledgeTown_2
	call CompleteArea_Drisledge_Town
ContentSkipper_SkipContent_DrisledgeTown_1:
	return

ContentSkipper_SkipContent_DrisledgeTown_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_DrisledgeTown_1


ContentSkipper_SkipContent_AmberockTown::
	setvar VAR_TEMP_B, 13
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AmberockTown_2
	call CompleteArea_Amberock_Town
ContentSkipper_SkipContent_AmberockTown_1:
	return

ContentSkipper_SkipContent_AmberockTown_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AmberockTown_1


ContentSkipper_SkipContent_Route3::
	setvar VAR_TEMP_B, 13
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route3_2
	call CompleteArea_Route_3
ContentSkipper_SkipContent_Route3_1:
	return

ContentSkipper_SkipContent_Route3_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route3_1


ContentSkipper_SkipContent_Route9::
	setvar VAR_TEMP_B, 13
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route9_2
	call CompleteArea_Route_9
ContentSkipper_SkipContent_Route9_1:
	return

ContentSkipper_SkipContent_Route9_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route9_1


ContentSkipper_SkipContent_Route10::
	setvar VAR_TEMP_B, 13
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route10_2
	call CompleteArea_Route_10
ContentSkipper_SkipContent_Route10_1:
	return

ContentSkipper_SkipContent_Route10_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route10_1


ContentSkipper_SkipContent_WindplumeMountain::
	setvar VAR_TEMP_B, 13
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindplumeMountain_2
	call CompleteArea_Windplume_Mountain
ContentSkipper_SkipContent_WindplumeMountain_1:
	return

ContentSkipper_SkipContent_WindplumeMountain_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindplumeMountain_1


ContentSkipper_SkipContent_Route16::
	setvar VAR_TEMP_B, 13
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route16_2
	call CompleteArea_Route_16
ContentSkipper_SkipContent_Route16_1:
	return

ContentSkipper_SkipContent_Route16_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route16_1


ContentSkipper_SkipContent_BasalekTown::
	setvar VAR_TEMP_B, 14
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_BasalekTown_2
	call CompleteArea_Basalek_Town
ContentSkipper_SkipContent_BasalekTown_1:
	return

ContentSkipper_SkipContent_BasalekTown_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_BasalekTown_1


ContentSkipper_SkipContent_Route17::
	setvar VAR_TEMP_B, 14
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route17_2
	call CompleteArea_Route_17
ContentSkipper_SkipContent_Route17_1:
	return

ContentSkipper_SkipContent_Route17_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route17_1


ContentSkipper_SkipContent_Route18::
	setvar VAR_TEMP_B, 14
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route18_2
	call CompleteArea_Route_18
ContentSkipper_SkipContent_Route18_1:
	return

ContentSkipper_SkipContent_Route18_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route18_1


ContentSkipper_SkipContent_FrosthearthCity::
	setvar VAR_TEMP_B, 15
	call SkipStory
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FrosthearthCity_2
	call CompleteArea_Frosthearth_City
ContentSkipper_SkipContent_FrosthearthCity_1:
	return

ContentSkipper_SkipContent_FrosthearthCity_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FrosthearthCity_1


ContentSkipper_SkipContent_RockClimb::
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_RockClimb_2
	call CompleteArea_Rock_Climb
ContentSkipper_SkipContent_RockClimb_1:
	return

ContentSkipper_SkipContent_RockClimb_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_RockClimb_1


ContentSkipper_SkipContent_DesertRuins::
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_DesertRuins_2
	call CompleteArea_Desert_Ruins
ContentSkipper_SkipContent_DesertRuins_1:
	return

ContentSkipper_SkipContent_DesertRuins_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_DesertRuins_1


ContentSkipper_SkipContent_SafariZone::
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_SafariZone_2
	call CompleteArea_Safari_Zone
ContentSkipper_SkipContent_SafariZone_1:
	return

ContentSkipper_SkipContent_SafariZone_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_SafariZone_1


ContentSkipper_SkipContent_MiscSurfing::
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_MiscSurfing_2
	call CompleteArea_Misc_Surfing
ContentSkipper_SkipContent_MiscSurfing_1:
	return

ContentSkipper_SkipContent_MiscSurfing_2:
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_MiscSurfing_1


SkipStory::
	goto_if_set FLAG_TEMP_8, SkipStory_2
	compare VAR_TEMP_B, 1
	goto_if_ge SkipStory_5
SkipStory_4:
	compare VAR_TEMP_B, 2
	goto_if_ge SkipStory_8
SkipStory_7:
	compare VAR_TEMP_B, 3
	goto_if_ge SkipStory_14
SkipStory_13:
	compare VAR_TEMP_B, 4
	goto_if_ge SkipStory_20
SkipStory_19:
	compare VAR_TEMP_B, 5
	goto_if_ge SkipStory_29
SkipStory_28:
	compare VAR_TEMP_B, 6
	goto_if_ge SkipStory_38
SkipStory_37:
	compare VAR_TEMP_B, 7
	goto_if_ge SkipStory_48
SkipStory_47:
	compare VAR_TEMP_B, 8
	goto_if_ge SkipStory_56
SkipStory_55:
	compare VAR_TEMP_B, 9
	goto_if_ge SkipStory_66
SkipStory_65:
	compare VAR_TEMP_B, 10
	goto_if_ge SkipStory_81
SkipStory_80:
	compare VAR_TEMP_B, 11
	goto_if_ge SkipStory_90
SkipStory_89:
	compare VAR_TEMP_B, 12
	goto_if_ge SkipStory_93
SkipStory_92:
	compare VAR_TEMP_B, 13
	goto_if_ge SkipStory_96
SkipStory_95:
	compare VAR_TEMP_B, 14
	goto_if_ge SkipStory_102
SkipStory_101:
	compare VAR_TEMP_B, 15
	goto_if_ge SkipStory_111
SkipStory_110:
	setflag FLAG_TEMP_8
	return

SkipStory_2:
	return

SkipStory_5:
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	goto_if_lt SkipStory_11
SkipStory_10:
	defeattrainer TRAINER_SHELLY_SEAFLOOR_CAVERN
	setflag FLAG_LANDMARK_WINDY_WOODS
	setflag FLAG_LANDMARK_LOST_GLADE
	goto SkipStory_4

SkipStory_8:
	compare VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	goto_if_lt SkipStory_17
SkipStory_16:
	setflag FLAG_VISITED_RUSTBORO_CITY
	defeattrainer TRAINER_CHIP
	defeattrainer TRAINER_FOSTER
	defeattrainer TRAINER_DUSTY_2
	defeattrainer TRAINER_DUSTY_3
	defeattrainer TRAINER_DUSTY_4
	defeattrainer TRAINER_DUSTY_5
	defeattrainer TRAINER_LEADER_AARON
	checkitem ITEM_TM_U_TURN
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_26
SkipStory_25:
	setflag FLAG_BADGE01_GET
	setflag FLAG_DEFEATED_RIVAL_HARBOR
	msgbox SkipStory_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq SkipStory_34
	setflag FLAG_RIVAL_HARBOR_ANGRY
	goto SkipStory_7

SkipStory_11:
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	additem ITEM_LETTER
	goto SkipStory_10

SkipStory_14:
	setflag FLAG_RANCH_EVENT_NPC
	setflag FLAG_LANDMARK_POKE_RANCH
	setflag FLAG_RANCH_HELPED
	clearflag FLAG_HIDE_RANCH_OWNER
	setflag FLAG_HIDE_VOLKNER_2
	checkitem ITEM_HM01
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_23
SkipStory_22:
	setflag FLAG_HIDE_VOLKNER_1
	setflag FLAG_RECEIVED_HM_CUT
	setflag FLAG_VOLKNER_HELPED
	setflag FLAG_JASMINE_HELPED
	setvar VAR_POKERANCH, 1
	defeattrainer TRAINER_RICKY_4
	defeattrainer TRAINER_RICKY_5
	goto SkipStory_13

SkipStory_17:
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	goto SkipStory_16

SkipStory_20:
	setflag FLAG_VISITED_WIP_CITY1
	setflag FLAG_HIDE_AMPHAROS
	setflag FLAG_ALDELEAF_SWITCH1
	setflag FLAG_ALDELEAF_SWITCH2
	setflag FLAG_ALDELEAF_SWITCH3
	setflag FLAG_ALDELEAF_SWITCH_ALL
	defeattrainer TRAINER_PARKER
	defeattrainer TRAINER_GEORGE
	defeattrainer TRAINER_BERKE
	defeattrainer TRAINER_BRAXTON
	defeattrainer TRAINER_VINCENT
	defeattrainer TRAINER_LEROY
	defeattrainer TRAINER_WILTON_1
	defeattrainer TRAINER_EDGAR
	defeattrainer TRAINER_ALBERT
	defeattrainer TRAINER_SAMUEL
	defeattrainer TRAINER_OWEN
	defeattrainer TRAINER_WILTON_2
	defeattrainer TRAINER_WILTON_3
	defeattrainer TRAINER_WILTON_4
	defeattrainer TRAINER_WILTON_5
	defeattrainer TRAINER_WARREN
	defeattrainer TRAINER_LEADER_VOLKNER
	setflag FLAG_DEFEATED_DEWFORD_GYM
	checkitem ITEM_TM_CHARGE_BEAM
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_32
SkipStory_31:
	setflag FLAG_BADGE02_GET
	goto SkipStory_19

SkipStory_23:
	giveitem ITEM_HM01
	goto SkipStory_22

SkipStory_26:
	additem ITEM_TM_U_TURN
	goto SkipStory_25

SkipStory_29:
	setflag FLAG_VISITED_SHORESLATE
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	defeattrainer TRAINER_SHORESLATE_ROCKET
	setvar VAR_DESERT_BYPASS, 1
	defeattrainer TRAINER_DC1F_ROCKET_1
	defeattrainer TRAINER_DC1F_ROCKET_2
	defeattrainer TRAINER_DC_BASEROCKET_1
	defeattrainer TRAINER_DC_BASEROCKET_2
	defeattrainer TRAINER_DC_BASEROCKET_3
	defeattrainer TRAINER_DC_BASEROCKET_4
	defeattrainer TRAINER_DC2F_ROCKET_1
	defeattrainer TRAINER_DC2F_ROCKET_2
	defeattrainer TRAINER_DC2F_ROCKET_3
	defeattrainer TRAINER_DC2F_ROCKET_4
	defeattrainer TRAINER_DC2F_ROCKET_5
	defeattrainer TRAINER_DC3F_ROCKET_1
	setflag FLAG_DEVON_UNDER_ATTACK
	setflag FLAG_HELPED_DEVON_CORP
	clearflag FLAG_HIDE_SHORESLATE_BOAT
	checkitem ITEM_GO_GOGGLES
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_41
SkipStory_40:
	checkitem ITEM_HM05
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_51
SkipStory_50:
	goto_if_unset FLAG_RECEIVED_BIKE, SkipStory_63
SkipStory_62:
	setflag FLAG_RECEIVED_BIKE
	goto SkipStory_28

SkipStory_32:
	additem ITEM_TM_CHARGE_BEAM
	goto SkipStory_31

SkipStory_34:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_44
	defeattrainer TRAINER_BRENDAN_CORALGROVE_ELEVATOR
SkipStory_43:
	checkitem ITEM_ITEMFINDER
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_53
	goto SkipStory_7

SkipStory_38:
	setflag FLAG_KAOLISLE_GYM_SWITCH1
	setflag FLAG_KAOLISLE_GYM_SWITCH2
	setflag FLAG_KAOLISLE_GYM_SWITCH3
	setflag FLAG_KAOLISLE_GYM_SWITCH4
	defeattrainer TRAINER_KAOLGYM_TR1_CAMPER1
	defeattrainer TRAINER_KAOLGYM_TR2_PICNICKER1
	defeattrainer TRAINER_KAOLGYM_TR3_HIKER1
	defeattrainer TRAINER_KAOLGYM_TR4_CAMPER2
	defeattrainer TRAINER_KAOLGYM_TR5_HIKER2
	defeattrainer TRAINER_KAOLGYM_TR6_HIKER3
	defeattrainer TRAINER_KAOLGYM_TR7_PICNICKER2
	defeattrainer TRAINER_KAOLGYM_TR8_CAMPER3
	defeattrainer TRAINER_KAOLGYM_TR9_PICNICKER3
	defeattrainer TRAINER_KAOLGYM_TR10_HIKER4
	defeattrainer TRAINER_KAOLGYM_CLAY
	setflag FLAG_BADGE03_GET
	setvar VAR_KAOLISLE_HOTEL_STATE, 1
	clearflag FLAG_HIDEJASMINE_HOTEL
	additem ITEM_TM_STOMPING_TANTRUM
	setflag FLAG_VISITED_KAOLISLE
	setflag FLAG_KAOLISLE_BROTHER_INTRO
	goto SkipStory_37

SkipStory_41:
	giveitem ITEM_GO_GOGGLES
	removeitem ITEM_LETTER
	goto SkipStory_40

SkipStory_44:
	defeattrainer TRAINER_MAY_CORALGROVE_ELEVATOR
	goto SkipStory_43

SkipStory_48:
	setflag FLAG_VISITED_SANDSTONE_CITY
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_59
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, SkipStory_77
	defeattrainer TRAINER_BRENDAN_ROUTE_11_NORMAL
SkipStory_58:
	checkitem ITEM_ITEMFINDER
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_72
SkipStory_71:
	setflag FLAG_HIDE_ROUTE_110_RIVAL
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	setvar VAR_GYM_TELEPORT, 1
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	goto SkipStory_47

SkipStory_51:
	giveitem ITEM_HM05
	goto SkipStory_50

SkipStory_53:
	additem ITEM_ITEMFINDER
	goto SkipStory_7

SkipStory_56:
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SkipStory_69
SkipStory_68:
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 2
	goto_if_unset FLAG_BADGE04_GET, SkipStory_87
SkipStory_86:
	setflag FLAG_BADGE04_GET
	defeattrainer TRAINER_LEADER_KORRINA
	defeattrainer TRAINER_SANDGYM_TR1_CYCLISTM1
	defeattrainer TRAINER_SANDGYM_TR2_CYCLISTF1
	defeattrainer TRAINER_SANDGYM_TR3_CYCLISTF2
	defeattrainer TRAINER_SANDGYM_TR4_CYCLISTM2
	defeattrainer TRAINER_SANDGYM_TR5_CYCLISTF3
	defeattrainer TRAINER_SANDGYM_TR6_CYCLISTM3
	defeattrainer TRAINER_SANDGYM_TR7_CYCLISTM4
	goto SkipStory_55

SkipStory_59:
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, SkipStory_74
	defeattrainer TRAINER_MAY_ROUTE_11_NORMAL
	goto SkipStory_58

SkipStory_63:
	giveitem ITEM_ACRO_BIKE
	goto SkipStory_62

SkipStory_66:
	defeattrainer TRAINER_AT_2F_TR2_MAN3
	defeattrainer TRAINER_AT_2F_TR2_WOMAN5
	defeattrainer TRAINER_AT_2F_TR1_PSYCHIC
	defeattrainer TRAINER_AT_2F_TR1_MAN5
	defeattrainer TRAINER_AT_3F_TR1_EXPERT_M
	defeattrainer TRAINER_AT_3F_TR1_EXPERT_F
	defeattrainer TRAINER_AT_3F_TR2_HEXMANIAC
	defeattrainer TRAINER_AT_3F_TR2_PSYCHICF
	defeattrainer TRAINER_AT_4F_TR1_BLACKBELT
	defeattrainer TRAINER_AT_4F_TR1_HEXMANIAC
	defeattrainer TRAINER_AT_4F_TR2_LASS
	defeattrainer TRAINER_AT_4F_TR2_YOUNGSTER
	defeattrainer TRAINER_AT_4F_TR3_BATTLEGIRL
	defeattrainer TRAINER_AT_4F_TR3_BLACKBELT
	defeattrainer TRAINER_AT_5F_COOLTRAINER_M
	defeattrainer TRAINER_AT_5F_COOLTRAINER_F
	checkitem ITEM_MEGA_RING
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_84
SkipStory_83:
	setflag FLAG_OBTAINED_MEGA_RING
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	clearflag FLAG_KORRINA_LEAVESGYM
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	clearflag FLAG_HIDE_LAB_RIVAL
	setflag FLAG_HIDE_LIBRARY_BIRCH
	goto SkipStory_65

SkipStory_69:
	setflag FLAG_KORRINA_LEAVESGYM
	goto SkipStory_68

SkipStory_72:
	giveitem ITEM_ITEMFINDER
	goto SkipStory_71

SkipStory_74:
	defeattrainer TRAINER_MAY_ROUTE_11_ANGRY
	goto SkipStory_58

SkipStory_77:
	defeattrainer TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto SkipStory_58

SkipStory_81:
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	setflag FLAG_HIDE_LAB_RIVAL
	setvar VAR_ROUTE14_ROCKET_EVENT, 3
	goto SkipStory_80

SkipStory_84:
	giveitem ITEM_MEGA_RING
	goto SkipStory_83

SkipStory_87:
	additem ITEM_TM_POWER_UP_PUNCH
	goto SkipStory_86

SkipStory_90:
	setflag FLAG_ACEROLA_TALKED_TO
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
	defeattrainer TRAINER_R15_TR18_BERRYROCKET
	defeattrainer TRAINER_BROTHER_5_FISHINGVILLAGE
	setflag FLAG_VISITED_FISHING_VILLAGE
	goto SkipStory_89

SkipStory_93:
	setflag FLAG_BADGE05_GET
	checkitem ITEM_TM_SHADOW_CLAW
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_99
SkipStory_98:
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_lt SkipStory_108
SkipStory_107:
	defeattrainer TRAINER_DRISLEDGEGYM_TRAINER1
	defeattrainer TRAINER_DRISLEDGEGYM_TRAINER2
	defeattrainer TRAINER_DRISLEDGEGYM_TRAINER3
	defeattrainer TRAINER_DRISLEDGEGYM_TRAINER4
	defeattrainer TRAINER_DRISLEDGEGYM_TRAINER5
	defeattrainer TRAINER_DRISLEDGEGYM_TRAINER6
	defeattrainer TRAINER_LEADER_ACEROLA
	checkitem ITEM_HM03
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_120
SkipStory_119:
	setflag FLAG_RECEIVED_HM_SURF
	goto SkipStory_92

SkipStory_96:
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_STORY_COMPLETE
	defeattrainer TRAINER_FACTORY_ROCKET_1
	defeattrainer TRAINER_FACTORY_ROCKET_2
	defeattrainer TRAINER_FACTORY_ROCKET_3
	defeattrainer TRAINER_FACTORY_ROCKET_4
	defeattrainer TRAINER_FACTORY_ROCKET_5
	defeattrainer TRAINER_FACTORY_ROCKET_PETREL
	goto_if_unset FLAG_FACTORY_ITEM_1, SkipStory_105
SkipStory_104:
	goto_if_unset FLAG_FACTORY_ITEM_2, SkipStory_117
SkipStory_116:
	goto_if_unset FLAG_FACTORY_ITEM_3, SkipStory_125
SkipStory_124:
	removeitem ITEM_RESEARCH_PAPERS
	giveitem ITEM_ZYGARDE_CUBE
	goto SkipStory_95

SkipStory_99:
	additem ITEM_TM_SHADOW_CLAW
	goto SkipStory_98

SkipStory_102:
	setflag FLAG_RIVAL_MET_IN_BASALEK
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_113
	defeattrainer TRAINER_BRENDAN_BASALEK_TOWN
	goto SkipStory_101

SkipStory_105:
	setflag FLAG_FACTORY_ITEM_1
	additem ITEM_MAX_ELIXIR
	goto SkipStory_104

SkipStory_108:
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
	goto SkipStory_107

SkipStory_111:
	setflag FLAG_PRYCE_ESCORTED
	addbp 10
	defeattrainer TRAINER_LEADER_PRYCE
	defeattrainer TRAINER_LEADER_BLAINE
	defeattrainer TRAINER_FROSTGYM_TR1_HIKER1
	defeattrainer TRAINER_FROSTGYM_TR2_KINDLER1
	defeattrainer TRAINER_FROSTGYM_TR3_SENIOR
	defeattrainer TRAINER_FROSTGYM_TR4_JUNIOR
	defeattrainer TRAINER_FROSTGYM_TR5_RANGER_M
	defeattrainer TRAINER_FROSTGYM_TR6_RANGER_F
	defeattrainer TRAINER_FROSTGYM_TR7_MANIAC
	defeattrainer TRAINER_FROSTGYM_TR8_COLLECTOR
	defeattrainer TRAINER_FROSTGYM_TR9_KINDLER2
	defeattrainer TRAINER_FROSTGYM_TR10_RANGER_F2
	setflag FLAG_BADGE06_GET
	checkitem ITEM_TM_ICE_BURN
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_122
	goto SkipStory_110

SkipStory_113:
	defeattrainer TRAINER_MAY_BASALEK_TOWN
	goto SkipStory_101

SkipStory_117:
	setflag FLAG_FACTORY_ITEM_1
	additem ITEM_X_ATTACK
	goto SkipStory_116

SkipStory_120:
	giveitem ITEM_HM03
	goto SkipStory_119

SkipStory_122:
	additem ITEM_TM_ICE_BURN
	goto SkipStory_110

SkipStory_125:
	setflag FLAG_FACTORY_ITEM_1
	additem ITEM_HYPER_POTION
	goto SkipStory_124


CompleteAllAreas::
	call CompleteArea_Route_1
	compare VAR_TEMP_A, 0
	goto_if_eq CompleteAllAreas_2
	call CompleteArea_Route_2
	compare VAR_TEMP_A, 1
	goto_if_eq CompleteAllAreas_5
	call CompleteArea_Windy_Woods
	compare VAR_TEMP_A, 2
	goto_if_eq CompleteAllAreas_8
	call CompleteArea_Coralgrove_City
	compare VAR_TEMP_A, 3
	goto_if_eq CompleteAllAreas_11
	call CompleteArea_Azuretide_Town
	compare VAR_TEMP_A, 4
	goto_if_eq CompleteAllAreas_14
	call CompleteArea_Route_4
	compare VAR_TEMP_A, 5
	goto_if_eq CompleteAllAreas_17
	call CompleteArea_Pokemon_Ranch
	compare VAR_TEMP_A, 6
	goto_if_eq CompleteAllAreas_20
	call CompleteArea_Aldeleaf_City
	compare VAR_TEMP_A, 7
	goto_if_eq CompleteAllAreas_23
	call CompleteArea_Route_30
	compare VAR_TEMP_A, 8
	goto_if_eq CompleteAllAreas_26
	call CompleteArea_Windplume_Valley
	compare VAR_TEMP_A, 9
	goto_if_eq CompleteAllAreas_29
	call CompleteArea_Route_5
	compare VAR_TEMP_A, 10
	goto_if_eq CompleteAllAreas_32
	call CompleteArea_Flower_Fields
	compare VAR_TEMP_A, 11
	goto_if_eq CompleteAllAreas_35
	call CompleteArea_Skyloch_Village
	compare VAR_TEMP_A, 12
	goto_if_eq CompleteAllAreas_38
	call CompleteArea_Route_6
	compare VAR_TEMP_A, 13
	goto_if_eq CompleteAllAreas_41
	call CompleteArea_Route_8
	compare VAR_TEMP_A, 14
	goto_if_eq CompleteAllAreas_44
	call CompleteArea_Shoreslate_City
	compare VAR_TEMP_A, 15
	goto_if_eq CompleteAllAreas_47
	call CompleteArea_Scorched_Desert
	compare VAR_TEMP_A, 16
	goto_if_eq CompleteAllAreas_50
	call CompleteArea_Route_7
	compare VAR_TEMP_A, 17
	goto_if_eq CompleteAllAreas_53
	call CompleteArea_Marigorge_Town
	compare VAR_TEMP_A, 18
	goto_if_eq CompleteAllAreas_56
	call CompleteArea_Kaolisle_City
	compare VAR_TEMP_A, 19
	goto_if_eq CompleteAllAreas_59
	call CompleteArea_Rockliffe_Town
	compare VAR_TEMP_A, 20
	goto_if_eq CompleteAllAreas_62
	call CompleteArea_Route_11
	compare VAR_TEMP_A, 21
	goto_if_eq CompleteAllAreas_65
	call CompleteArea_Route_12
	compare VAR_TEMP_A, 22
	goto_if_eq CompleteAllAreas_68
	call CompleteArea_Sandstone_City
	compare VAR_TEMP_A, 23
	goto_if_eq CompleteAllAreas_71
	call CompleteArea_Route_13
	compare VAR_TEMP_A, 24
	goto_if_eq CompleteAllAreas_74
	call CompleteArea_Adamant_Tower
	compare VAR_TEMP_A, 25
	goto_if_eq CompleteAllAreas_77
	call CompleteArea_Route_14
	compare VAR_TEMP_A, 26
	goto_if_eq CompleteAllAreas_80
	call CompleteArea_Route_15
	compare VAR_TEMP_A, 27
	goto_if_eq CompleteAllAreas_83
	call CompleteArea_Fishing_Village
	compare VAR_TEMP_A, 28
	goto_if_eq CompleteAllAreas_86
	call CompleteArea_Route_23
	compare VAR_TEMP_A, 29
	goto_if_eq CompleteAllAreas_89
	call CompleteArea_Drisledge_Town
	compare VAR_TEMP_A, 30
	goto_if_eq CompleteAllAreas_92
	call CompleteArea_Amberock_Town
	compare VAR_TEMP_A, 31
	goto_if_eq CompleteAllAreas_95
	call CompleteArea_Route_3
	compare VAR_TEMP_A, 32
	goto_if_eq CompleteAllAreas_98
	call CompleteArea_Route_9
	compare VAR_TEMP_A, 33
	goto_if_eq CompleteAllAreas_101
	call CompleteArea_Route_10
	compare VAR_TEMP_A, 34
	goto_if_eq CompleteAllAreas_104
	call CompleteArea_Windplume_Mountain
	compare VAR_TEMP_A, 35
	goto_if_eq CompleteAllAreas_107
	call CompleteArea_Route_16
	compare VAR_TEMP_A, 36
	goto_if_eq CompleteAllAreas_110
	call CompleteArea_Basalek_Town
	compare VAR_TEMP_A, 37
	goto_if_eq CompleteAllAreas_113
	call CompleteArea_Route_17
	compare VAR_TEMP_A, 38
	goto_if_eq CompleteAllAreas_116
	call CompleteArea_Route_18
	compare VAR_TEMP_A, 39
	goto_if_eq CompleteAllAreas_119
	call CompleteArea_Frosthearth_City
	compare VAR_TEMP_A, 40
	goto_if_eq CompleteAllAreas_122
	call CompleteArea_Rock_Climb
	compare VAR_TEMP_A, 41
	goto_if_eq CompleteAllAreas_125
	call CompleteArea_Desert_Ruins
	compare VAR_TEMP_A, 42
	goto_if_eq CompleteAllAreas_128
	call CompleteArea_Safari_Zone
	compare VAR_TEMP_A, 43
	goto_if_eq CompleteAllAreas_131
	call CompleteArea_Misc_Surfing
	compare VAR_TEMP_A, 44
	goto_if_eq CompleteAllAreas_133
	return

CompleteAllAreas_2:
	return

CompleteAllAreas_5:
	return

CompleteAllAreas_8:
	return

CompleteAllAreas_11:
	return

CompleteAllAreas_14:
	return

CompleteAllAreas_17:
	return

CompleteAllAreas_20:
	return

CompleteAllAreas_23:
	return

CompleteAllAreas_26:
	return

CompleteAllAreas_29:
	return

CompleteAllAreas_32:
	return

CompleteAllAreas_35:
	return

CompleteAllAreas_38:
	return

CompleteAllAreas_41:
	return

CompleteAllAreas_44:
	return

CompleteAllAreas_47:
	return

CompleteAllAreas_50:
	return

CompleteAllAreas_53:
	return

CompleteAllAreas_56:
	return

CompleteAllAreas_59:
	return

CompleteAllAreas_62:
	return

CompleteAllAreas_65:
	return

CompleteAllAreas_68:
	return

CompleteAllAreas_71:
	return

CompleteAllAreas_74:
	return

CompleteAllAreas_77:
	return

CompleteAllAreas_80:
	return

CompleteAllAreas_83:
	return

CompleteAllAreas_86:
	return

CompleteAllAreas_89:
	return

CompleteAllAreas_92:
	return

CompleteAllAreas_95:
	return

CompleteAllAreas_98:
	return

CompleteAllAreas_101:
	return

CompleteAllAreas_104:
	return

CompleteAllAreas_107:
	return

CompleteAllAreas_110:
	return

CompleteAllAreas_113:
	return

CompleteAllAreas_116:
	return

CompleteAllAreas_119:
	return

CompleteAllAreas_122:
	return

CompleteAllAreas_125:
	return

CompleteAllAreas_128:
	return

CompleteAllAreas_131:
	return

CompleteAllAreas_133:
	return


CompleteArea_Route_1::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_1_2
CompleteArea_Route_1_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_1_5
CompleteArea_Route_1_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_1_10
CompleteArea_Route_1_9:
	return

CompleteArea_Route_1_2:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE1_SUPERPOTION, CompleteArea_Route_1_7
	goto CompleteArea_Route_1_1

CompleteArea_Route_1_5:
	defeattrainer TRAINER_R1_YOUNGSTER
	defeattrainer TRAINER_R1_FISHER
	defeattrainer TRAINER_R1_BUG_CATCHER
	defeattrainer TRAINER_R1_TUBER
	checktrainerflag TRAINER_R1_COOLTRAINER
	goto_if 0, CompleteArea_Route_1_12
	goto CompleteArea_Route_1_4

CompleteArea_Route_1_7:
	setflag FLAG_HIDDEN_ITEM_ROUTE1_SUPERPOTION
	additem ITEM_POTION
	goto CompleteArea_Route_1_1

CompleteArea_Route_1_10:
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, CompleteArea_Route_1_14
	goto CompleteArea_Route_1_9

CompleteArea_Route_1_12:
	defeattrainer TRAINER_R1_COOLTRAINER
	addbp 10
	giveitem ITEM_EXP_SHARE
	goto CompleteArea_Route_1_4

CompleteArea_Route_1_14:
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
	goto CompleteArea_Route_1_9


CompleteArea_Route_2::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_2_2
CompleteArea_Route_2_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_2_5
CompleteArea_Route_2_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_2_11
CompleteArea_Route_2_10:
	return

CompleteArea_Route_2_2:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_PEARL1, CompleteArea_Route_2_8
CompleteArea_Route_2_7:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL, CompleteArea_Route_2_14
CompleteArea_Route_2_13:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_PEARL2, CompleteArea_Route_2_19
CompleteArea_Route_2_18:
	goto_if_unset FLAG_ITEM_ROUTE2_X_ATTACK, CompleteArea_Route_2_22
CompleteArea_Route_2_21:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL, CompleteArea_Route_2_25
CompleteArea_Route_2_24:
	goto_if_unset FLAG_ITEM_ROUTE2_REVIVE, CompleteArea_Route_2_28
CompleteArea_Route_2_27:
	pickberrytree BERRY_TREE_ROUTE_2_PECHA
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_2_ORAN
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_2_CHERI
	call TryLootingStrangeSeed
	goto CompleteArea_Route_2_1

CompleteArea_Route_2_5:
	defeattrainer TRAINER_R2_FISHER
	defeattrainer TRAINER_R2_LASS
	defeattrainer TRAINER_R2_BLACKBELT
	defeattrainer TRAINER_R2_YOUNGSTER
	defeattrainer TRAINER_R2_SCHOOL_KID_F
	goto CompleteArea_Route_2_4

CompleteArea_Route_2_8:
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL1
	additem ITEM_PEARL
	goto CompleteArea_Route_2_7

CompleteArea_Route_2_11:
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, CompleteArea_Route_2_16
	goto CompleteArea_Route_2_10

CompleteArea_Route_2_14:
	setflag FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_2_13

CompleteArea_Route_2_16:
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
	goto CompleteArea_Route_2_10

CompleteArea_Route_2_19:
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL2
	additem ITEM_PEARL
	goto CompleteArea_Route_2_18

CompleteArea_Route_2_22:
	setflag FLAG_ITEM_ROUTE2_X_ATTACK
	additem ITEM_X_ATTACK
	goto CompleteArea_Route_2_21

CompleteArea_Route_2_25:
	setflag FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_2_24

CompleteArea_Route_2_28:
	setflag FLAG_ITEM_ROUTE2_REVIVE
	additem ITEM_REVIVE
	goto CompleteArea_Route_2_27


CompleteArea_Windy_Woods::
	goto_if_set FLAG_TEMP_3, CompleteArea_Windy_Woods_2
CompleteArea_Windy_Woods_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Windy_Woods_5
CompleteArea_Windy_Woods_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Windy_Woods_11
CompleteArea_Windy_Woods_10:
	return

CompleteArea_Windy_Woods_2:
	goto_if_unset FLAG_ITEM_WW_PARLYZ, CompleteArea_Windy_Woods_8
CompleteArea_Windy_Woods_7:
	goto_if_unset FLAG_HIDDEN_ITEM_WW_DAMP_ROCK, CompleteArea_Windy_Woods_16
CompleteArea_Windy_Woods_15:
	goto_if_unset FLAG_ITEM_WW_CARBOS, CompleteArea_Windy_Woods_23
CompleteArea_Windy_Woods_22:
	goto_if_unset FLAG_HIDDEN_ITEM_WW_RARE_CANDY, CompleteArea_Windy_Woods_26
CompleteArea_Windy_Woods_25:
	goto_if_unset FLAG_HIDDEN_ITEM_WW_ETHER, CompleteArea_Windy_Woods_28
	goto CompleteArea_Windy_Woods_1

CompleteArea_Windy_Woods_5:
	defeattrainer TRAINER_WW_BUGCATCHER
	defeattrainer TRAINER_WW_LADY
	defeattrainer TRAINER_WW_BUGCATCHER_2
	defeattrainer TRAINER_WW_CAMPER
	defeattrainer TRAINER_WW_LASS
	defeattrainer TRAINER_WW_YOUNGSTER
	checktrainerflag TRAINER_WW_ACE_TRAINER
	goto_if 0, CompleteArea_Windy_Woods_13
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_8:
	setflag FLAG_ITEM_WW_PARLYZ
	additem ITEM_PARALYZE_HEAL
	goto CompleteArea_Windy_Woods_7

CompleteArea_Windy_Woods_11:
	setflag FLAG_LANDMARK_LOST_GLADE
	setflag FLAG_GLADE_PUZZLE
	goto CompleteArea_Windy_Woods_10

CompleteArea_Windy_Woods_13:
	defeattrainer TRAINER_WW_ACE_TRAINER
	setflag FLAG_WW_COOLTRAINERREWARD
	addbp 10
	switch VAR_STARTER_MON
	case SPECIES_ROWLET, CompleteArea_Windy_Woods_19
	case SPECIES_TORCHIC, CompleteArea_Windy_Woods_20
	case SPECIES_PIPLUP, CompleteArea_Windy_Woods_21
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_16:
	setflag FLAG_HIDDEN_ITEM_WW_DAMP_ROCK
	additem ITEM_DAMP_ROCK
	goto CompleteArea_Windy_Woods_15

CompleteArea_Windy_Woods_19:
	additem ITEM_MIRACLE_SEED
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_20:
	additem ITEM_CHARCOAL
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_21:
	additem ITEM_MYSTIC_WATER
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_23:
	setflag FLAG_ITEM_WW_CARBOS
	additem ITEM_CARBOS
	goto CompleteArea_Windy_Woods_22

CompleteArea_Windy_Woods_26:
	setflag FLAG_HIDDEN_ITEM_WW_RARE_CANDY
	additem ITEM_RARE_CANDY
	goto CompleteArea_Windy_Woods_25

CompleteArea_Windy_Woods_28:
	setflag FLAG_HIDDEN_ITEM_WW_ETHER
	additem ITEM_ETHER
	goto CompleteArea_Windy_Woods_1


CompleteArea_Coralgrove_City::
	goto_if_set FLAG_TEMP_3, CompleteArea_Coralgrove_City_2
CompleteArea_Coralgrove_City_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Coralgrove_City_5
CompleteArea_Coralgrove_City_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Coralgrove_City_11
CompleteArea_Coralgrove_City_10:
	return

CompleteArea_Coralgrove_City_2:
	goto_if_unset FLAG_CORAL_GREATBALL, CompleteArea_Coralgrove_City_8
CompleteArea_Coralgrove_City_7:
	goto_if_unset FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY, CompleteArea_Coralgrove_City_16
CompleteArea_Coralgrove_City_15:
	goto_if_unset FLAG_HARBOR_GREATBALL, CompleteArea_Coralgrove_City_22
CompleteArea_Coralgrove_City_21:
	goto_if_unset FLAG_HARBOR_PEARL, CompleteArea_Coralgrove_City_27
	goto CompleteArea_Coralgrove_City_1

CompleteArea_Coralgrove_City_5:
	defeattrainer TRAINER_SCHOOLHALL_1
	defeattrainer TRAINER_SCHOOLHALL_2
	defeattrainer TRAINER_SCHOOLHALL_3
	defeattrainer TRAINER_SCHOOLHALL_4
	checkitem ITEM_TM_FALSE_SWIPE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Coralgrove_City_13
	goto CompleteArea_Coralgrove_City_4

CompleteArea_Coralgrove_City_8:
	setflag FLAG_CORAL_GREATBALL
	additem ITEM_GREAT_BALL
	goto CompleteArea_Coralgrove_City_7

CompleteArea_Coralgrove_City_11:
	setflag FLAG_0x267_CG_HIDEGHOST
	goto_if_unset FLAG_CORALGROVE_CUTSCENE, CompleteArea_Coralgrove_City_19
CompleteArea_Coralgrove_City_18:
	checkitem ITEM_TM_REST
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Coralgrove_City_25
CompleteArea_Coralgrove_City_24:
	checkitem ITEM_OLD_ROD
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Coralgrove_City_29
	goto CompleteArea_Coralgrove_City_10

CompleteArea_Coralgrove_City_13:
	additem ITEM_TM_FALSE_SWIPE
	goto CompleteArea_Coralgrove_City_4

CompleteArea_Coralgrove_City_16:
	setflag FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY
	additem ITEM_RARE_CANDY
	goto CompleteArea_Coralgrove_City_15

CompleteArea_Coralgrove_City_19:
	setflag FLAG_CORALGROVE_CUTSCENE
	clearflag FLAG_OBTAINED_PIDGEOTITE
	goto CompleteArea_Coralgrove_City_18

CompleteArea_Coralgrove_City_22:
	setflag FLAG_HARBOR_GREATBALL
	additem ITEM_GREAT_BALL
	goto CompleteArea_Coralgrove_City_21

CompleteArea_Coralgrove_City_25:
	additem ITEM_TM_REST
	goto CompleteArea_Coralgrove_City_24

CompleteArea_Coralgrove_City_27:
	setflag FLAG_HARBOR_PEARL
	additem ITEM_PEARL
	goto CompleteArea_Coralgrove_City_1

CompleteArea_Coralgrove_City_29:
	additem ITEM_OLD_ROD
	goto CompleteArea_Coralgrove_City_10


CompleteArea_Azuretide_Town::
	goto_if_set FLAG_TEMP_3, CompleteArea_Azuretide_Town_2
CompleteArea_Azuretide_Town_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Azuretide_Town_5
CompleteArea_Azuretide_Town_4:
	return

CompleteArea_Azuretide_Town_2:
	goto_if_unset FLAG_COASTTOWN_PEARL, CompleteArea_Azuretide_Town_8
CompleteArea_Azuretide_Town_7:
	goto_if_unset FLAG_COASTTOWN_REDSHARD, CompleteArea_Azuretide_Town_14
CompleteArea_Azuretide_Town_13:
	goto_if_unset FLAG_COASTTOWN_HEATROCK, CompleteArea_Azuretide_Town_18
	goto CompleteArea_Azuretide_Town_1

CompleteArea_Azuretide_Town_5:
	goto_if_unset FLAG_AZURETIDE_HONEY, CompleteArea_Azuretide_Town_11
CompleteArea_Azuretide_Town_10:
	checkitem ITEM_TOWN_MAP
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Azuretide_Town_16
	goto CompleteArea_Azuretide_Town_4

CompleteArea_Azuretide_Town_8:
	setflag FLAG_COASTTOWN_PEARL
	additem ITEM_PEARL
	goto CompleteArea_Azuretide_Town_7

CompleteArea_Azuretide_Town_11:
	additem ITEM_HONEY, 3
	setflag FLAG_AZURETIDE_HONEY
	goto CompleteArea_Azuretide_Town_10

CompleteArea_Azuretide_Town_14:
	setflag FLAG_COASTTOWN_REDSHARD
	additem ITEM_RED_SHARD
	goto CompleteArea_Azuretide_Town_13

CompleteArea_Azuretide_Town_16:
	additem ITEM_TOWN_MAP
	removemoney 2000
	goto CompleteArea_Azuretide_Town_4

CompleteArea_Azuretide_Town_18:
	setflag FLAG_COASTTOWN_HEATROCK
	additem ITEM_HEAT_ROCK
	goto CompleteArea_Azuretide_Town_1


CompleteArea_Route_4::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_4_2
CompleteArea_Route_4_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_4_5
CompleteArea_Route_4_4:
	return

CompleteArea_Route_4_2:
	goto_if_unset FLAG_ITEM_ROUTE3_ANTIDOTE, CompleteArea_Route_4_8
CompleteArea_Route_4_7:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL, CompleteArea_Route_4_11
CompleteArea_Route_4_10:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL, CompleteArea_Route_4_14
CompleteArea_Route_4_13:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_REVIVE, CompleteArea_Route_4_17
CompleteArea_Route_4_16:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_ETHER, CompleteArea_Route_4_20
CompleteArea_Route_4_19:
	goto_if_unset FLAG_ITEM_ROUTE3_GIGADRAIN, CompleteArea_Route_4_23
CompleteArea_Route_4_22:
	pickberrytree 4
	call TryLootingStrangeSeed
	pickberrytree 6
	call TryLootingStrangeSeed
	pickberrytree 7
	call TryLootingStrangeSeed
	goto CompleteArea_Route_4_1

CompleteArea_Route_4_5:
	defeattrainer TRAINER_R4_HIKER
	defeattrainer TRAINER_R4_POKEMANIAC
	defeattrainer TRAINER_R4_BUGCATCHER
	defeattrainer TRAINER_R4_TWINS
	defeattrainer TRAINER_R4_TRIATHLETE
	defeattrainer TRAINER_R4_CAMPER
	defeattrainer TRAINER_R4_COOL_F
	defeattrainer TRAINER_R4_COOL_M
	defeattrainer TRAINER_R4_BIRDKEEPER
	defeattrainer TRAINER_R4_YOUNGSTER
	defeattrainer TRAINER_R4_BIRDKEEPER_2
	defeattrainer TRAINER_R4_DOUBLE_LASS
	defeattrainer TRAINER_R4_DOUBLE_YOUNGSTER
	defeattrainer TRAINER_R4_TRIATHLETE_2
	goto CompleteArea_Route_4_4

CompleteArea_Route_4_8:
	setflag FLAG_ITEM_ROUTE3_ANTIDOTE
	additem ITEM_ANTIDOTE
	goto CompleteArea_Route_4_7

CompleteArea_Route_4_11:
	setflag FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL
	additem ITEM_POKE_BALL
	goto CompleteArea_Route_4_10

CompleteArea_Route_4_14:
	setflag FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_4_13

CompleteArea_Route_4_17:
	setflag FLAG_HIDDEN_ITEM_ROUTE3_REVIVE
	additem ITEM_REVIVE
	goto CompleteArea_Route_4_16

CompleteArea_Route_4_20:
	setflag FLAG_HIDDEN_ITEM_ROUTE3_ETHER
	additem ITEM_ETHER
	goto CompleteArea_Route_4_19

CompleteArea_Route_4_23:
	setflag FLAG_ITEM_ROUTE3_GIGADRAIN
	additem ITEM_TM_GRASS_KNOT
	goto CompleteArea_Route_4_22


CompleteArea_Pokemon_Ranch::
	goto_if_set FLAG_TEMP_3, CompleteArea_Pokemon_Ranch_2
CompleteArea_Pokemon_Ranch_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Pokemon_Ranch_5
CompleteArea_Pokemon_Ranch_4:
	return

CompleteArea_Pokemon_Ranch_2:
	goto_if_unset FLAG_HIDDEN_ITEM_RANCH, CompleteArea_Pokemon_Ranch_7
	goto CompleteArea_Pokemon_Ranch_1

CompleteArea_Pokemon_Ranch_5:
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Pokemon_Ranch_10
	goto CompleteArea_Pokemon_Ranch_4

CompleteArea_Pokemon_Ranch_7:
	setflag FLAG_HIDDEN_ITEM_RANCH
	additem ITEM_RARE_CANDY
	goto CompleteArea_Pokemon_Ranch_1

CompleteArea_Pokemon_Ranch_9:
	additem ITEM_AMPHAROSITE
	setflag FLAG_OBTAINED_AMPHAROSITE
	goto CompleteArea_Pokemon_Ranch_4

CompleteArea_Pokemon_Ranch_10:
	goto_if_unset FLAG_OBTAINED_AMPHAROSITE, CompleteArea_Pokemon_Ranch_9
	goto CompleteArea_Pokemon_Ranch_4


CompleteArea_Aldeleaf_City::
	goto_if_set FLAG_TEMP_3, CompleteArea_Aldeleaf_City_2
CompleteArea_Aldeleaf_City_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Aldeleaf_City_5
CompleteArea_Aldeleaf_City_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Aldeleaf_City_11
CompleteArea_Aldeleaf_City_10:
	return

CompleteArea_Aldeleaf_City_2:
	goto_if_unset FLAG_ALDELEAF_LOST_KEY, CompleteArea_Aldeleaf_City_8
CompleteArea_Aldeleaf_City_7:
	goto_if_unset FLAG_ALDELEAF_MUSHROOM2, CompleteArea_Aldeleaf_City_16
CompleteArea_Aldeleaf_City_15:
	goto_if_unset FLAG_ALDELEAF_MUSHROOM, CompleteArea_Aldeleaf_City_21
	goto CompleteArea_Aldeleaf_City_1

CompleteArea_Aldeleaf_City_5:
	checktrainerflag TRAINER_VITO
	goto_if 0, CompleteArea_Aldeleaf_City_13
	goto CompleteArea_Aldeleaf_City_4

CompleteArea_Aldeleaf_City_8:
	setflag FLAG_ALDELEAF_LOST_KEY
	additem ITEM_LOST_KEY
	goto CompleteArea_Aldeleaf_City_7

CompleteArea_Aldeleaf_City_11:
	removeitem ITEM_LOST_KEY
	setflag FLAG_ALDELEAF_LOST_KEY
	setflag FLAG_KEY_RETURNED
	goto_if_set FLAG_Q04_ALDELEAF_LOST_KEYS_START, CompleteArea_Aldeleaf_City_19
CompleteArea_Aldeleaf_City_18:
	goto_if_unset FLAG_WHITEFLUTE_RECEIVED, CompleteArea_Aldeleaf_City_24
CompleteArea_Aldeleaf_City_23:
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Aldeleaf_City_27
CompleteArea_Aldeleaf_City_26:
	goto_if_unset FLAG_ALDELEAF_QUICK_BALL, CompleteArea_Aldeleaf_City_30
CompleteArea_Aldeleaf_City_29:
	goto_if_unset FLAG_RECEIVED_LAVA_COOKIE, CompleteArea_Aldeleaf_City_34
	goto CompleteArea_Aldeleaf_City_10

CompleteArea_Aldeleaf_City_13:
	defeattrainer TRAINER_VITO
	additem ITEM_SHELL_BELL
	setflag FLAG_SHELL_BELL_RECEIVED
	goto CompleteArea_Aldeleaf_City_4

CompleteArea_Aldeleaf_City_16:
	setflag FLAG_ALDELEAF_MUSHROOM2
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Aldeleaf_City_15

CompleteArea_Aldeleaf_City_19:
	completequest FLAG_Q04_ALDELEAF_LOST_KEYS_COMPLETE
	goto CompleteArea_Aldeleaf_City_18

CompleteArea_Aldeleaf_City_21:
	setflag FLAG_ALDELEAF_MUSHROOM
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Aldeleaf_City_1

CompleteArea_Aldeleaf_City_24:
	additem ITEM_BLACK_FLUTE, 1
	setflag FLAG_WHITEFLUTE_RECEIVED
	goto CompleteArea_Aldeleaf_City_23

CompleteArea_Aldeleaf_City_27:
	goto_if_unset FLAG_OBTAINED_PAINTBRUSH, CompleteArea_Aldeleaf_City_32
	goto CompleteArea_Aldeleaf_City_26

CompleteArea_Aldeleaf_City_30:
	additem ITEM_QUICK_BALL, 1
	setflag FLAG_ALDELEAF_QUICK_BALL
	goto CompleteArea_Aldeleaf_City_29

CompleteArea_Aldeleaf_City_32:
	additem ITEM_PAINTBRUSH
	setflag FLAG_OBTAINED_PAINTBRUSH
	goto_if_set FLAG_Q06_MUSEUM_SMEARGLE_START, CompleteArea_Aldeleaf_City_36
	goto CompleteArea_Aldeleaf_City_26

CompleteArea_Aldeleaf_City_34:
	additem ITEM_LAVA_COOKIE, 1
	setflag FLAG_RECEIVED_LAVA_COOKIE
	goto CompleteArea_Aldeleaf_City_10

CompleteArea_Aldeleaf_City_36:
	completequest FLAG_Q06_MUSEUM_SMEARGLE_COMPLETE
	goto CompleteArea_Aldeleaf_City_26


CompleteArea_Route_30::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_30_2
CompleteArea_Route_30_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_30_5
CompleteArea_Route_30_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_30_11
CompleteArea_Route_30_10:
	return

CompleteArea_Route_30_2:
	pickberrytree 8
	call TryLootingStrangeSeed
	pickberrytree 10
	call TryLootingStrangeSeed
	pickberrytree 11
	call TryLootingStrangeSeed
	call TryCuttingStrangeSeedTree
	goto_if_unset FLAG_ROUTE28_TM, CompleteArea_Route_30_8
CompleteArea_Route_30_7:
	goto_if_unset FLAG_ROUTE28_ITEMBALL, CompleteArea_Route_30_14
CompleteArea_Route_30_13:
	goto_if_unset FLAG_ROUTE28_HIDDENBALL, CompleteArea_Route_30_16
	goto CompleteArea_Route_30_1

CompleteArea_Route_30_5:
	defeattrainer TRAINER_R28_TR1_BUGCATCHER
	defeattrainer TRAINER_R28_TR2_HIKER
	defeattrainer TRAINER_R28_TR3_NINJABOY
	defeattrainer TRAINER_R28_TR4_PSYCHIC
	goto CompleteArea_Route_30_4

CompleteArea_Route_30_8:
	setflag FLAG_ROUTE28_TM
	additem ITEM_TM_SECRET_POWER
	goto CompleteArea_Route_30_7

CompleteArea_Route_30_11:
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	defeattrainer TRAINER_BROTHER_4_ROUTE28
	goto CompleteArea_Route_30_10

CompleteArea_Route_30_14:
	setflag FLAG_ROUTE28_ITEMBALL
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_30_13

CompleteArea_Route_30_16:
	setflag FLAG_ROUTE28_HIDDENBALL
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_30_1


CompleteArea_Windplume_Valley::
	goto_if_set FLAG_TEMP_3, CompleteArea_Windplume_Valley_2
CompleteArea_Windplume_Valley_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Windplume_Valley_5
CompleteArea_Windplume_Valley_4:
	return

CompleteArea_Windplume_Valley_2:
	goto_if_unset FLAG_WPV_FEATHER1, CompleteArea_Windplume_Valley_8
CompleteArea_Windplume_Valley_7:
	goto_if_unset FLAG_WPV_HYPER_POTION, CompleteArea_Windplume_Valley_13
CompleteArea_Windplume_Valley_12:
	goto_if_unset FLAG_WPV_FEATHER2, CompleteArea_Windplume_Valley_16
CompleteArea_Windplume_Valley_15:
	goto_if_unset FLAG_WPV_FEATHER3, CompleteArea_Windplume_Valley_19
CompleteArea_Windplume_Valley_18:
	goto_if_unset FLAG_WPV_FEATHER4, CompleteArea_Windplume_Valley_22
CompleteArea_Windplume_Valley_21:
	goto_if_unset FLAG_WPV_ELIXIR, CompleteArea_Windplume_Valley_25
CompleteArea_Windplume_Valley_24:
	goto_if_unset FLAG_WPV_IRON_BALL, CompleteArea_Windplume_Valley_28
CompleteArea_Windplume_Valley_27:
	goto_if_unset FLAG_WPV_FEATHER5, CompleteArea_Windplume_Valley_31
CompleteArea_Windplume_Valley_30:
	goto_if_unset FLAG_WPV_FEATHER6, CompleteArea_Windplume_Valley_33
	goto CompleteArea_Windplume_Valley_1

CompleteArea_Windplume_Valley_5:
	defeattrainer TRAINER_WPV_TR1_BIRDKEEPER
	defeattrainer TRAINER_WPV_TR2_TRIATH
	defeattrainer TRAINER_WPV_TR3_BATTLEGIRL
	defeattrainer TRAINER_WPV_TR4_CAMPER
	defeattrainer TRAINER_WPV_TR5_BIRDKEEPER
	defeattrainer TRAINER_WPV_TR6_MANIAC
	defeattrainer TRAINER_WPV_TR7_BIRDKEEPER
	defeattrainer TRAINER_WPV_TR8_NINJABOY
	defeattrainer TRAINER_WPV_TR9_LASS
	defeattrainer TRAINER_WPV_TR10_TRIATH
	defeattrainer TRAINER_WPV_TR11_BIRDKEEPER
	defeattrainer TRAINER_WPV_TR12_BATTLEGIRL
	defeattrainer TRAINER_WPV_TR13_BIRDKEEPER
	checktrainerflag TRAINER_WPV_TR14_SKYLA
	goto_if 0, CompleteArea_Windplume_Valley_10
	goto CompleteArea_Windplume_Valley_4

CompleteArea_Windplume_Valley_8:
	setflag FLAG_WPV_FEATHER1
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_7

CompleteArea_Windplume_Valley_10:
	giveitem ITEM_HM02
	defeattrainer TRAINER_WPV_TR14_SKYLA
	setflag FLAG_RECEIVED_HM_FLY
	goto CompleteArea_Windplume_Valley_4

CompleteArea_Windplume_Valley_13:
	setflag FLAG_WPV_HYPER_POTION
	additem ITEM_HYPER_POTION
	goto CompleteArea_Windplume_Valley_12

CompleteArea_Windplume_Valley_16:
	setflag FLAG_WPV_FEATHER2
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_15

CompleteArea_Windplume_Valley_19:
	setflag FLAG_WPV_FEATHER3
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_18

CompleteArea_Windplume_Valley_22:
	setflag FLAG_WPV_FEATHER4
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_21

CompleteArea_Windplume_Valley_25:
	setflag FLAG_WPV_ELIXIR
	additem ITEM_ELIXIR
	goto CompleteArea_Windplume_Valley_24

CompleteArea_Windplume_Valley_28:
	setflag FLAG_WPV_IRON_BALL
	additem ITEM_IRON_BALL
	goto CompleteArea_Windplume_Valley_27

CompleteArea_Windplume_Valley_31:
	setflag FLAG_WPV_FEATHER5
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_30

CompleteArea_Windplume_Valley_33:
	setflag FLAG_WPV_FEATHER6
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_1


CompleteArea_Route_5::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_5_2
CompleteArea_Route_5_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_5_5
CompleteArea_Route_5_4:
	return

CompleteArea_Route_5_2:
	goto_if_unset FLAG_ROUTE5_ITEM1, CompleteArea_Route_5_8
CompleteArea_Route_5_7:
	goto_if_unset FLAG_ROUTE5_ITEM2, CompleteArea_Route_5_13
CompleteArea_Route_5_12:
	goto_if_unset FLAG_ROUTE5_ITEM3, CompleteArea_Route_5_16
CompleteArea_Route_5_15:
	goto_if_unset FLAG_ROUTE5_HIDDENITEM1, CompleteArea_Route_5_19
CompleteArea_Route_5_18:
	goto_if_unset FLAG_ROUTE5_HIDDENITEM2, CompleteArea_Route_5_22
CompleteArea_Route_5_21:
	goto_if_unset FLAG_ROUTE5_HIDDENITEM3, CompleteArea_Route_5_25
CompleteArea_Route_5_24:
	goto_if_unset FLAG_ROUTE5_HIDDENITEM4, CompleteArea_Route_5_28
CompleteArea_Route_5_27:
	goto_if_unset FLAG_ROUTE5_HIDDENITEM5, CompleteArea_Route_5_31
CompleteArea_Route_5_30:
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	pickberrytree 13
	call TryLootingStrangeSeed
	pickberrytree 21
	call TryLootingStrangeSeed
	pickberrytree 31
	call TryLootingStrangeSeed
	goto CompleteArea_Route_5_1

CompleteArea_Route_5_5:
	defeattrainer TRAINER_R5_TR1_FISHER
	defeattrainer TRAINER_R5_TR2_BEAUTY
	defeattrainer TRAINER_R5_TR3_YOUNGCOUPLE
	defeattrainer TRAINER_R5_TR4_LASS1
	defeattrainer TRAINER_R5_TR5_POKEFAN_F
	defeattrainer TRAINER_R5_TR6_LASS2
	defeattrainer TRAINER_R5_TR7_GENTLEMAN
	defeattrainer TRAINER_R5_TR8_YOUNGSTER
	defeattrainer TRAINER_R5_TR9_TRIATHLETE
	defeattrainer TRAINER_R5_TR10_RICHBOY
	defeattrainer TRAINER_R5_TR11_MAN_5
	defeattrainer TRAINER_R5_TR12_BUGCATCHER
	defeattrainer TRAINER_R5_TR13_NINJABOY
	defeattrainer TRAINER_R5_TR14_HIKER
	checktrainerflag TRAINER_R5_TR15_COOLTRAINER
	goto_if 0, CompleteArea_Route_5_10
	goto CompleteArea_Route_5_4

CompleteArea_Route_5_8:
	setflag FLAG_ROUTE5_ITEM1
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_5_7

CompleteArea_Route_5_10:
	defeattrainer TRAINER_R5_TR15_COOLTRAINER
	additem ITEM_EVIOLITE
	addbp 20
	goto CompleteArea_Route_5_4

CompleteArea_Route_5_13:
	setflag FLAG_ROUTE5_ITEM2
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_5_12

CompleteArea_Route_5_16:
	setflag FLAG_ROUTE5_ITEM3
	additem ITEM_TM_ROCK_TOMB
	goto CompleteArea_Route_5_15

CompleteArea_Route_5_19:
	setflag FLAG_ROUTE5_HIDDENITEM1
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_18

CompleteArea_Route_5_22:
	setflag FLAG_ROUTE5_HIDDENITEM2
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_21

CompleteArea_Route_5_25:
	setflag FLAG_ROUTE5_HIDDENITEM3
	additem ITEM_MAX_ETHER
	goto CompleteArea_Route_5_24

CompleteArea_Route_5_28:
	setflag FLAG_ROUTE5_HIDDENITEM4
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_27

CompleteArea_Route_5_31:
	setflag FLAG_ROUTE5_HIDDENITEM5
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_30


CompleteArea_Flower_Fields::
	goto_if_set FLAG_TEMP_3, CompleteArea_Flower_Fields_2
CompleteArea_Flower_Fields_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Flower_Fields_5
CompleteArea_Flower_Fields_4:
	return

CompleteArea_Flower_Fields_2:
	goto_if_unset FLAG_HERACRONITE_OBTAINED, CompleteArea_Flower_Fields_9
CompleteArea_Flower_Fields_7:
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_1, CompleteArea_Flower_Fields_15
CompleteArea_Flower_Fields_14:
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_3, CompleteArea_Flower_Fields_20
CompleteArea_Flower_Fields_19:
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_2, CompleteArea_Flower_Fields_22
	goto CompleteArea_Flower_Fields_1

CompleteArea_Flower_Fields_5:
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto_if_lt CompleteArea_Flower_Fields_12
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_8:
	setflag FLAG_HERACRONITE_OBTAINED
	additem ITEM_HERACRONITE
	goto CompleteArea_Flower_Fields_7

CompleteArea_Flower_Fields_9:
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Flower_Fields_8
	goto CompleteArea_Flower_Fields_7

CompleteArea_Flower_Fields_12:
	additem ITEM_RARE_CANDY
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto_if_set FLAG_Q08_FLOWER_FIELDS_GRANBULL_START, CompleteArea_Flower_Fields_17
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_15:
	setflag FLAG_FLOWERFIELDS_ITEM_1
	additem ITEM_ORAN_BERRY
	goto CompleteArea_Flower_Fields_14

CompleteArea_Flower_Fields_17:
	completequest FLAG_Q08_FLOWER_FIELDS_GRANBULL_COMPLETE
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_20:
	setflag FLAG_FLOWERFIELDS_ITEM_3
	additem ITEM_HONEY
	goto CompleteArea_Flower_Fields_19

CompleteArea_Flower_Fields_22:
	setflag FLAG_FLOWERFIELDS_ITEM_2
	additem ITEM_HONEY
	goto CompleteArea_Flower_Fields_1


CompleteArea_Skyloch_Village::
	goto_if_set FLAG_TEMP_3, CompleteArea_Skyloch_Village_2
CompleteArea_Skyloch_Village_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Skyloch_Village_5
CompleteArea_Skyloch_Village_4:
	return

CompleteArea_Skyloch_Village_2:
	goto_if_unset FLAG_SKYLOCH_JUICE, CompleteArea_Skyloch_Village_7
	goto CompleteArea_Skyloch_Village_1

CompleteArea_Skyloch_Village_5:
	goto_if_unset FLAG_SKYLOCH_CASTELIACONE, CompleteArea_Skyloch_Village_10
CompleteArea_Skyloch_Village_9:
	goto_if_unset FLAG_RECEIVED_LIGHTBALL, CompleteArea_Skyloch_Village_12
	goto CompleteArea_Skyloch_Village_4

CompleteArea_Skyloch_Village_7:
	setflag FLAG_SKYLOCH_JUICE
	additem ITEM_BERRY_JUICE
	goto CompleteArea_Skyloch_Village_1

CompleteArea_Skyloch_Village_10:
	additem ITEM_OCCA_BERRY, 1
	setflag FLAG_SKYLOCH_CASTELIACONE
	goto_if_set FLAG_Q10_SKYLOCH_ICECREAM_START, CompleteArea_Skyloch_Village_14
	goto CompleteArea_Skyloch_Village_9

CompleteArea_Skyloch_Village_12:
	additem ITEM_LIGHT_BALL
	setflag FLAG_RECEIVED_LIGHTBALL
	goto_if_set FLAG_Q11_SKYLOCH_RAICHUS_START, CompleteArea_Skyloch_Village_16
	goto CompleteArea_Skyloch_Village_4

CompleteArea_Skyloch_Village_14:
	completequest FLAG_Q10_SKYLOCH_ICECREAM_COMPLETE
	goto CompleteArea_Skyloch_Village_9

CompleteArea_Skyloch_Village_16:
	completequest FLAG_Q11_SKYLOCH_RAICHUS_COMPLETE
	goto CompleteArea_Skyloch_Village_4


CompleteArea_Route_6::
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_6_2
CompleteArea_Route_6_1:
	return

CompleteArea_Route_6_2:
	defeattrainer TRAINER_R6_TR1_RANGER_M
	defeattrainer TRAINER_R6_TR3_CAMPER_F
	defeattrainer TRAINER_R6_TR5_HIKER
	defeattrainer TRAINER_R6_TR6_CAMPER_M2
	defeattrainer TRAINER_R6_TR7_KINDLER
	goto CompleteArea_Route_6_1


CompleteArea_Route_8::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_8_2
CompleteArea_Route_8_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_8_5
CompleteArea_Route_8_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_8_11
CompleteArea_Route_8_10:
	return

CompleteArea_Route_8_2:
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	goto_if_unset FLAG_ROUTE8_ITEM2, CompleteArea_Route_8_8
CompleteArea_Route_8_7:
	goto_if_unset FLAG_ROUTE8_ITEM6, CompleteArea_Route_8_14
CompleteArea_Route_8_13:
	goto_if_unset FLAG_ROUTE8_ITEM3, CompleteArea_Route_8_19
CompleteArea_Route_8_18:
	goto_if_unset FLAG_ROUTE8_ITEM1, CompleteArea_Route_8_22
CompleteArea_Route_8_21:
	goto_if_unset FLAG_ROUTE8_ITEM5, CompleteArea_Route_8_25
CompleteArea_Route_8_24:
	pickberrytree 15
	call TryLootingStrangeSeed
	pickberrytree 22
	call TryLootingStrangeSeed
	pickberrytree 24
	call TryLootingStrangeSeed
	pickberrytree 33
	call TryLootingStrangeSeed
	goto CompleteArea_Route_8_1

CompleteArea_Route_8_5:
	defeattrainer TRAINER_R8_TR1_PARASOLLADY
	defeattrainer TRAINER_R8_TR2_SRJR
	defeattrainer TRAINER_R8_TR3_AROMALADY
	defeattrainer TRAINER_R8_TR4_YOUNGSTER
	defeattrainer TRAINER_R8_TR5_PSYCHIC_F
	defeattrainer TRAINER_R8_TR6_ENTHUSIAST
	defeattrainer TRAINER_R8_TR7_TRIATHLETE_M
	defeattrainer TRAINER_R8_TR8_GENTLEMAN
	defeattrainer TRAINER_R8_TR9_HIKER
	defeattrainer TRAINER_R8_TR10_OLDCOUPLE
	defeattrainer TRAINER_R8_TR11_BIRDKEEPER
	goto CompleteArea_Route_8_4

CompleteArea_Route_8_8:
	setflag FLAG_ROUTE8_ITEM2
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_8_7

CompleteArea_Route_8_11:
	setflag FLAG_LANDMARK_FLOWER_SHOP
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, CompleteArea_Route_8_16
	goto CompleteArea_Route_8_10

CompleteArea_Route_8_14:
	setflag FLAG_ROUTE8_ITEM6
	additem ITEM_TM_ROCK_POLISH
	goto CompleteArea_Route_8_13

CompleteArea_Route_8_16:
	additem ITEM_WAILMER_PAIL
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto CompleteArea_Route_8_10

CompleteArea_Route_8_19:
	setflag FLAG_ROUTE8_ITEM3
	additem ITEM_REVIVE
	goto CompleteArea_Route_8_18

CompleteArea_Route_8_22:
	setflag FLAG_ROUTE8_ITEM1
	additem ITEM_ORAN_BERRY
	goto CompleteArea_Route_8_21

CompleteArea_Route_8_25:
	setflag FLAG_ROUTE8_ITEM5
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_8_24


CompleteArea_Shoreslate_City::
	goto_if_set FLAG_TEMP_3, CompleteArea_Shoreslate_City_2
CompleteArea_Shoreslate_City_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Shoreslate_City_5
CompleteArea_Shoreslate_City_4:
	return

CompleteArea_Shoreslate_City_2:
	goto_if_unset FLAG_SHORESLATE_ITEM1, CompleteArea_Shoreslate_City_8
CompleteArea_Shoreslate_City_7:
	goto_if_unset FLAG_BASEMENT_SUPERPOTION, CompleteArea_Shoreslate_City_16
CompleteArea_Shoreslate_City_15:
	goto_if_unset FLAG_DEVONCORP_BASEMENT_BALL, CompleteArea_Shoreslate_City_23
	goto CompleteArea_Shoreslate_City_1

CompleteArea_Shoreslate_City_5:
	goto_if_unset FLAG_OBTAINED_LUCARIONITE, CompleteArea_Shoreslate_City_12
CompleteArea_Shoreslate_City_10:
	goto_if_unset FLAG_RECEIVED_SHORESLATE_POTION, CompleteArea_Shoreslate_City_19
CompleteArea_Shoreslate_City_18:
	goto_if_unset FLAG_GIVEN_CASTELIATOGIRL, CompleteArea_Shoreslate_City_25
	goto CompleteArea_Shoreslate_City_4

CompleteArea_Shoreslate_City_8:
	setflag FLAG_SHORESLATE_ITEM1
	additem ITEM_FULL_HEAL
	goto CompleteArea_Shoreslate_City_7

CompleteArea_Shoreslate_City_11:
	additem ITEM_LUCARIONITE
	setflag FLAG_OBTAINED_LUCARIONITE
	goto_if_set FLAG_Q15_SHORESLATE_TOUGHGUY_START, CompleteArea_Shoreslate_City_21
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_12:
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Shoreslate_City_11
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_16:
	setflag FLAG_BASEMENT_SUPERPOTION
	additem ITEM_SUPER_POTION
	goto CompleteArea_Shoreslate_City_15

CompleteArea_Shoreslate_City_19:
	setflag FLAG_RECEIVED_SHORESLATE_POTION
	additem ITEM_SUPER_POTION
	goto CompleteArea_Shoreslate_City_18

CompleteArea_Shoreslate_City_21:
	completequest FLAG_Q15_SHORESLATE_TOUGHGUY_COMPLETE
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_23:
	setflag FLAG_DEVONCORP_BASEMENT_BALL
	additem ITEM_QUICK_BALL
	goto CompleteArea_Shoreslate_City_1

CompleteArea_Shoreslate_City_25:
	setflag FLAG_GIVEN_CASTELIATOGIRL
	additem ITEM_AIR_BALLOON
	goto_if_set FLAG_Q13_SHORESLATE_ICECREAM_START, CompleteArea_Shoreslate_City_27
	goto CompleteArea_Shoreslate_City_4

CompleteArea_Shoreslate_City_27:
	completequest FLAG_Q13_SHORESLATE_ICECREAM_COMPLETE
	goto CompleteArea_Shoreslate_City_4


CompleteArea_Scorched_Desert::
	goto_if_set FLAG_TEMP_3, CompleteArea_Scorched_Desert_2
CompleteArea_Scorched_Desert_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Scorched_Desert_5
CompleteArea_Scorched_Desert_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Scorched_Desert_11
CompleteArea_Scorched_Desert_10:
	return

CompleteArea_Scorched_Desert_2:
	goto_if_unset FLAG_DESERT_ITEM1, CompleteArea_Scorched_Desert_8
CompleteArea_Scorched_Desert_7:
	goto_if_unset FLAG_DESERT_ITEM4, CompleteArea_Scorched_Desert_16
CompleteArea_Scorched_Desert_15:
	goto_if_unset FLAG_DESERT_ITEM2, CompleteArea_Scorched_Desert_22
CompleteArea_Scorched_Desert_21:
	goto_if_unset FLAG_DESERT_ITEM3, CompleteArea_Scorched_Desert_32
CompleteArea_Scorched_Desert_31:
	goto_if_unset FLAG_DESERT_ITEM5, CompleteArea_Scorched_Desert_38
CompleteArea_Scorched_Desert_37:
	goto_if_unset FLAG_DESERT_ITEM6, CompleteArea_Scorched_Desert_44
CompleteArea_Scorched_Desert_43:
	goto_if_unset FLAG_DESERT_ITEM7, CompleteArea_Scorched_Desert_47
CompleteArea_Scorched_Desert_46:
	goto_if_unset FLAG_DESERT_ITEM8, CompleteArea_Scorched_Desert_50
CompleteArea_Scorched_Desert_49:
	goto_if_unset FLAG_DESERT_ITEM9, CompleteArea_Scorched_Desert_53
CompleteArea_Scorched_Desert_52:
	goto_if_unset FLAG_DESERT_ITEM10, CompleteArea_Scorched_Desert_56
CompleteArea_Scorched_Desert_55:
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_58
	goto CompleteArea_Scorched_Desert_1

CompleteArea_Scorched_Desert_5:
	defeattrainer TRAINER_DESERT_TR1_CAMPER
	defeattrainer TRAINER_DESERT_TR2_CAMPER2
	defeattrainer TRAINER_DESERT_TR3_PICNICKER
	defeattrainer TRAINER_DESERT_TR4_PICNICKER2
	defeattrainer TRAINER_DESERT_TR5_HIKER
	defeattrainer TRAINER_DESERT_TR6_BLACKBELT
	defeattrainer TRAINER_DESERT_TR7_PICNICKER3
	defeattrainer TRAINER_DESERT_TR8_HIKER2
	defeattrainer TRAINER_DESERT_TR9_HIKER3
	defeattrainer TRAINER_DESERT_TR10_FIREBREATHER
	defeattrainer TRAINER_DESERT_TR11_BLACKBELT2
	defeattrainer TRAINER_DESERT_TR12_HIKER4
	defeattrainer TRAINER_DESERT_TR13_PSYCHIC_F
	checktrainerflag TRAINER_DESERT_TR14_COOLTRAINER
	goto_if 0, CompleteArea_Scorched_Desert_13
	goto CompleteArea_Scorched_Desert_4

CompleteArea_Scorched_Desert_8:
	setflag FLAG_DESERT_ITEM1
	additem ITEM_TM_SANDSTORM
	goto CompleteArea_Scorched_Desert_7

CompleteArea_Scorched_Desert_11:
	goto_if_unset FLAG_WEIRDCAVESOLVED, CompleteArea_Scorched_Desert_19
CompleteArea_Scorched_Desert_18:
	setflag FLAG_RECOMMEND_LIBRARY
	setflag FLAG_DESERT_RUINS_OPENED
	goto_if_unset FLAG_Q18_DESERT_LIBRARYBOOK_START, CompleteArea_Scorched_Desert_26
CompleteArea_Scorched_Desert_24:
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_35
CompleteArea_Scorched_Desert_34:
	setflag FLAG_UNDERGROUNDRUINS_ITEM1
	setflag FLAG_UNDERGROUNDRUINS_ITEM2
	setflag FLAG_UNDERGROUNDRUINS_ITEM3
	setflag FLAG_UNDERGROUNDRUINS_ITEM4
	setflag FLAG_UNDERGROUNDRUINS_ITEM5
	setflag FLAG_UNDERGROUNDRUINS_ITEM6
	setflag FLAG_UNDERGROUNDRUINS_ITEM7
	setflag FLAG_UNDERGROUNDRUINS_ITEM8
	call GenerateRelic
	call GenerateRelic
	call GenerateRelic
	call GenerateRelic
	additem ITEM_RELIC_COPPER, 2
	additem ITEM_RELIC_SILVER, 2
	goto_if_unset FLAG_ITEM_UNDERGROUNDRUINS_TM_SANDSTORM, CompleteArea_Scorched_Desert_41
CompleteArea_Scorched_Desert_40:
	call DebugFossil
	goto CompleteArea_Scorched_Desert_10

CompleteArea_Scorched_Desert_13:
	defeattrainer TRAINER_DESERT_TR14_COOLTRAINER
	additem ITEM_SAFETY_GOGGLES
	setvar VAR_DESERT_TRAINERS, 14
	addbp 20
	goto CompleteArea_Scorched_Desert_4

CompleteArea_Scorched_Desert_16:
	setflag FLAG_DESERT_ITEM4
	additem ITEM_RARE_CANDY
	goto CompleteArea_Scorched_Desert_15

CompleteArea_Scorched_Desert_19:
	additem ITEM_STONE_SPHERE
	setflag FLAG_WEIRDCAVE_STONE
	setvar VAR_WEIRDCAVE_PART2, 3
	setflag FLAG_WEIRDCAVESOLVED
	goto_if_set FLAG_Q17_DESERT_WEIRDCAVE_START, CompleteArea_Scorched_Desert_29
	goto CompleteArea_Scorched_Desert_18

CompleteArea_Scorched_Desert_22:
	setflag FLAG_DESERT_ITEM2
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_21

CompleteArea_Scorched_Desert_25:
	startquest FLAG_Q18_DESERT_LIBRARYBOOK_START
	goto CompleteArea_Scorched_Desert_24

CompleteArea_Scorched_Desert_26:
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_25
	goto CompleteArea_Scorched_Desert_24

CompleteArea_Scorched_Desert_29:
	completequest FLAG_Q17_DESERT_WEIRDCAVE_COMPLETE
	goto CompleteArea_Scorched_Desert_18

CompleteArea_Scorched_Desert_32:
	setflag FLAG_DESERT_ITEM3
	additem ITEM_HEART_SCALE
	goto CompleteArea_Scorched_Desert_31

CompleteArea_Scorched_Desert_35:
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Scorched_Desert_34

CompleteArea_Scorched_Desert_38:
	setflag FLAG_DESERT_ITEM5
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_37

CompleteArea_Scorched_Desert_41:
	setflag FLAG_ITEM_UNDERGROUNDRUINS_TM_SANDSTORM
	additem ITEM_TM_ROCK_SLIDE
	goto CompleteArea_Scorched_Desert_40

CompleteArea_Scorched_Desert_44:
	setflag FLAG_DESERT_ITEM6
	additem ITEM_ELIXIR
	goto CompleteArea_Scorched_Desert_43

CompleteArea_Scorched_Desert_47:
	setflag FLAG_DESERT_ITEM7
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_46

CompleteArea_Scorched_Desert_50:
	setflag FLAG_DESERT_ITEM8
	additem ITEM_PP_UP
	goto CompleteArea_Scorched_Desert_49

CompleteArea_Scorched_Desert_53:
	setflag FLAG_DESERT_ITEM9
	additem ITEM_REVIVE
	goto CompleteArea_Scorched_Desert_52

CompleteArea_Scorched_Desert_56:
	setflag FLAG_DESERT_ITEM10
	additem ITEM_HYPER_POTION
	goto CompleteArea_Scorched_Desert_55

CompleteArea_Scorched_Desert_58:
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Scorched_Desert_1


CompleteArea_Route_7::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_7_2
CompleteArea_Route_7_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_7_5
CompleteArea_Route_7_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_7_11
CompleteArea_Route_7_10:
	return

CompleteArea_Route_7_2:
	goto_if_unset FLAG_ROUTE7_ITEM4, CompleteArea_Route_7_8
CompleteArea_Route_7_7:
	goto_if_unset FLAG_ROUTE7_ITEM1, CompleteArea_Route_7_14
CompleteArea_Route_7_13:
	goto_if_unset FLAG_ROUTE7_ITEM3, CompleteArea_Route_7_19
CompleteArea_Route_7_18:
	goto_if_unset FLAG_ROUTE7_ITEM2, CompleteArea_Route_7_23
	goto CompleteArea_Route_7_1

CompleteArea_Route_7_5:
	defeattrainer TRAINER_R7_TR1_CAMPER
	defeattrainer TRAINER_R7_TR2_PICNICKER
	defeattrainer TRAINER_R7_TR3_NINJABOY
	defeattrainer TRAINER_R7_TR4_BIRDKEEPER
	defeattrainer TRAINER_R7_TR5_BLACKBELT
	defeattrainer TRAINER_R7_TR6_PICNICKER2
	defeattrainer TRAINER_R7_TR7_FISHERMAN
	defeattrainer TRAINER_R7_TR8_HIKER
	defeattrainer TRAINER_R7_TR9_PARASOLLADY
	defeattrainer TRAINER_R7_TR10_NINJABOY
	goto CompleteArea_Route_7_4

CompleteArea_Route_7_8:
	setflag FLAG_ROUTE7_ITEM4
	additem ITEM_NET_BALL
	goto CompleteArea_Route_7_7

CompleteArea_Route_7_11:
	checkitem ITEM_SAMPLE_BOX
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Route_7_16
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_14:
	setflag FLAG_ROUTE7_ITEM1
	additem ITEM_HP_UP
	goto CompleteArea_Route_7_13

CompleteArea_Route_7_16:
	additem ITEM_SAMPLE_BOX
	goto_if_unset FLAG_Q19_MUDSCIENTIST_START, CompleteArea_Route_7_21
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_19:
	setflag FLAG_ROUTE7_ITEM3
	additem ITEM_RARE_BONE
	goto CompleteArea_Route_7_18

CompleteArea_Route_7_21:
	startquest FLAG_Q19_MUDSCIENTIST_START
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_23:
	setflag FLAG_ROUTE7_ITEM2
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_7_1


CompleteArea_Marigorge_Town::
	goto_if_set FLAG_TEMP_3, CompleteArea_Marigorge_Town_2
CompleteArea_Marigorge_Town_1:
	return

CompleteArea_Marigorge_Town_2:
	goto_if_unset FLAG_MARIGORGE_ITEM2, CompleteArea_Marigorge_Town_4
	goto CompleteArea_Marigorge_Town_1

CompleteArea_Marigorge_Town_4:
	setflag FLAG_MARIGORGE_ITEM2
	additem ITEM_HYPER_POTION
	goto CompleteArea_Marigorge_Town_1


CompleteArea_Kaolisle_City::
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Kaolisle_City_2
CompleteArea_Kaolisle_City_1:
	goto_if_set FLAG_TEMP_3, CompleteArea_Kaolisle_City_5
CompleteArea_Kaolisle_City_4:
	goto_if_set FLAG_TEMP_4, CompleteArea_Kaolisle_City_8
CompleteArea_Kaolisle_City_7:
	goto_if_set FLAG_TEMP_5, CompleteArea_Kaolisle_City_14
CompleteArea_Kaolisle_City_13:
	return

CompleteArea_Kaolisle_City_2:
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Kaolisle_City_1

CompleteArea_Kaolisle_City_5:
	goto_if_unset FLAG_KAOLISLE_ITEM7, CompleteArea_Kaolisle_City_11
CompleteArea_Kaolisle_City_10:
	goto_if_unset FLAG_KAOLISLE_ITEM9, CompleteArea_Kaolisle_City_17
CompleteArea_Kaolisle_City_16:
	goto_if_unset FLAG_KAOLISLE_ITEM8, CompleteArea_Kaolisle_City_23
CompleteArea_Kaolisle_City_22:
	goto_if_unset FLAG_KAOLISLE_ITEM1, CompleteArea_Kaolisle_City_31
CompleteArea_Kaolisle_City_30:
	goto_if_unset FLAG_KAOLISLE_ITEM4, CompleteArea_Kaolisle_City_37
CompleteArea_Kaolisle_City_36:
	goto_if_unset FLAG_KAOLISLE_ITEM5, CompleteArea_Kaolisle_City_45
CompleteArea_Kaolisle_City_44:
	goto_if_unset FLAG_KAOLISLE_ITEM6, CompleteArea_Kaolisle_City_51
CompleteArea_Kaolisle_City_50:
	goto_if_unset FLAG_KAOLISLE_ITEM3, CompleteArea_Kaolisle_City_57
CompleteArea_Kaolisle_City_56:
	goto_if_unset FLAG_KAOLISLE_ITEM2, CompleteArea_Kaolisle_City_63
CompleteArea_Kaolisle_City_62:
	goto_if_unset FLAG_KAOLMINES_ITEM3, CompleteArea_Kaolisle_City_71
CompleteArea_Kaolisle_City_70:
	goto_if_unset FLAG_KAOLMINES_ITEM4, CompleteArea_Kaolisle_City_79
CompleteArea_Kaolisle_City_78:
	goto_if_unset FLAG_KAOLMINES_ITEM1, CompleteArea_Kaolisle_City_84
CompleteArea_Kaolisle_City_83:
	goto_if_unset FLAG_KAOLMINES_ITEM6, CompleteArea_Kaolisle_City_89
CompleteArea_Kaolisle_City_88:
	goto_if_unset FLAG_KAOLMINES_ITEM8, CompleteArea_Kaolisle_City_92
CompleteArea_Kaolisle_City_91:
	goto_if_unset FLAG_KAOLMINES_ITEM10, CompleteArea_Kaolisle_City_95
CompleteArea_Kaolisle_City_94:
	goto_if_unset FLAG_KAOLMINES_ITEM9, CompleteArea_Kaolisle_City_98
CompleteArea_Kaolisle_City_97:
	goto_if_unset FLAG_KAOLMINES_ITEM11, CompleteArea_Kaolisle_City_101
CompleteArea_Kaolisle_City_100:
	goto_if_unset FLAG_KAOLMINES_ITEM12, CompleteArea_Kaolisle_City_104
CompleteArea_Kaolisle_City_103:
	goto_if_unset FLAG_KAOLMINES_ITEM13, CompleteArea_Kaolisle_City_107
CompleteArea_Kaolisle_City_106:
	goto_if_unset FLAG_KAOLMINES_ITEM14, CompleteArea_Kaolisle_City_110
CompleteArea_Kaolisle_City_109:
	goto_if_unset FLAG_KAOLMINES_ITEM2, CompleteArea_Kaolisle_City_113
CompleteArea_Kaolisle_City_112:
	goto_if_unset FLAG_KAOLMINES_ITEM5, CompleteArea_Kaolisle_City_116
CompleteArea_Kaolisle_City_115:
	goto_if_unset FLAG_KAOLMINES_ITEM7, CompleteArea_Kaolisle_City_118
	goto CompleteArea_Kaolisle_City_4

CompleteArea_Kaolisle_City_8:
	defeattrainer TRAINER_KM_TR1_PICNICKER
	defeattrainer TRAINER_KM_TR2_BLACKBELT
	defeattrainer TRAINER_KM_TR3_CAMPER
	defeattrainer TRAINER_KM_TR4_HIKER
	defeattrainer TRAINER_KM_TR5_HIKER
	defeattrainer TRAINER_KM_TR6_HIKER
	defeattrainer TRAINER_KM_TR7_CAMPER
	defeattrainer TRAINER_KM_TR8_PICNICKER
	defeattrainer TRAINER_KM_TR9_BLACKBELT
	defeattrainer TRAINER_KM_TR10_HIKER
	goto CompleteArea_Kaolisle_City_7

CompleteArea_Kaolisle_City_11:
	setflag FLAG_KAOLISLE_ITEM7
	additem ITEM_QUICK_BALL
	goto CompleteArea_Kaolisle_City_10

CompleteArea_Kaolisle_City_14:
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, CompleteArea_Kaolisle_City_20
CompleteArea_Kaolisle_City_19:
	setflag FLAG_REVEAL_PEARLSTRING
	goto_if_unset FLAG_OLDMAN_PEARLSTRING, CompleteArea_Kaolisle_City_26
CompleteArea_Kaolisle_City_25:
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, CompleteArea_Kaolisle_City_34
CompleteArea_Kaolisle_City_33:
	goto_if_unset FLAG_PIANOREWARD, CompleteArea_Kaolisle_City_40
CompleteArea_Kaolisle_City_39:
	goto_if_unset FLAG_OBTAINED_BEACHBALL, CompleteArea_Kaolisle_City_48
CompleteArea_Kaolisle_City_47:
	goto_if_unset FLAG_HOTEL_FLYINGGEM, CompleteArea_Kaolisle_City_54
CompleteArea_Kaolisle_City_53:
	goto_if_unset FLAG_BUFFET_COMPLETE, CompleteArea_Kaolisle_City_60
CompleteArea_Kaolisle_City_59:
	goto_if_unset FLAG_OBTAINED_TROPICALSTONE, CompleteArea_Kaolisle_City_66
CompleteArea_Kaolisle_City_65:
	goto_if_unset FLAG_OBTAINED_ECHOEDVOICE, CompleteArea_Kaolisle_City_74
CompleteArea_Kaolisle_City_73:
	goto_if_unset FLAG_OBTAINED_ROSTEBERRIES, CompleteArea_Kaolisle_City_81
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_17:
	setflag FLAG_KAOLISLE_ITEM9
	additem ITEM_CALCIUM
	goto CompleteArea_Kaolisle_City_16

CompleteArea_Kaolisle_City_20:
	setflag FLAG_QUEST_FOR_GOOD_ROD
	removeitem ITEM_LURE
	additem ITEM_GOOD_ROD
	setflag FLAG_RECEIVED_GOOD_ROD
	goto_if_set FLAG_Q22_KAOLISLE_FISHERMAN_START, CompleteArea_Kaolisle_City_28
	goto CompleteArea_Kaolisle_City_19

CompleteArea_Kaolisle_City_23:
	setflag FLAG_KAOLISLE_ITEM8
	additem ITEM_REVIVE
	goto CompleteArea_Kaolisle_City_22

CompleteArea_Kaolisle_City_26:
	setflag FLAG_OLDMAN_PEARLSTRING
	additem ITEM_PEARL_STRING
	goto CompleteArea_Kaolisle_City_25

CompleteArea_Kaolisle_City_28:
	completequest FLAG_Q22_KAOLISLE_FISHERMAN_COMPLETE
	goto CompleteArea_Kaolisle_City_19

CompleteArea_Kaolisle_City_31:
	setflag FLAG_KAOLISLE_ITEM1
	additem ITEM_STARDUST
	goto CompleteArea_Kaolisle_City_30

CompleteArea_Kaolisle_City_34:
	setflag FLAG_KAOLMINES_ITEM2
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	removeitem ITEM_LOST_MEMENTO
	goto_if_set FLAG_Q23_KAOLISLE_OLDPENDANT_START, CompleteArea_Kaolisle_City_42
	goto CompleteArea_Kaolisle_City_33

CompleteArea_Kaolisle_City_37:
	setflag FLAG_KAOLISLE_ITEM4
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_36

CompleteArea_Kaolisle_City_40:
	additem ITEM_HEART_SCALE, 2
	setflag FLAG_PIANOREWARD
	goto CompleteArea_Kaolisle_City_39

CompleteArea_Kaolisle_City_42:
	special ShowJournalPopupRemove
	goto CompleteArea_Kaolisle_City_33

CompleteArea_Kaolisle_City_45:
	setflag FLAG_KAOLISLE_ITEM5
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_44

CompleteArea_Kaolisle_City_48:
	additem ITEM_DIVE_BALL
	setflag FLAG_OBTAINED_BEACHBALL
	goto CompleteArea_Kaolisle_City_47

CompleteArea_Kaolisle_City_51:
	setflag FLAG_KAOLISLE_ITEM6
	additem ITEM_SUN_STONE
	goto CompleteArea_Kaolisle_City_50

CompleteArea_Kaolisle_City_54:
	defeattrainer TRAINER_HOTEL_BIRDKEEPER
	additem ITEM_FLYING_GEM, 1
	setflag FLAG_HOTEL_FLYINGGEM
	goto CompleteArea_Kaolisle_City_53

CompleteArea_Kaolisle_City_57:
	setflag FLAG_KAOLISLE_ITEM3
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_56

CompleteArea_Kaolisle_City_60:
	additem ITEM_LEFTOVERS
	addbp 30
	setflag FLAG_BUFFET_COMPLETE
	goto_if_set FLAG_Q24_BATTLE_BUFFET_START, CompleteArea_Kaolisle_City_68
	goto CompleteArea_Kaolisle_City_59

CompleteArea_Kaolisle_City_63:
	setflag FLAG_KAOLISLE_ITEM2
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_62

CompleteArea_Kaolisle_City_66:
	additem ITEM_TROPICAL_STONE
	setflag FLAG_OBTAINED_TROPICALSTONE
	goto_if_set FLAG_Q25_HOTEL_TROPICALSTONE_START, CompleteArea_Kaolisle_City_76
	goto CompleteArea_Kaolisle_City_65

CompleteArea_Kaolisle_City_68:
	completequest FLAG_Q24_BATTLE_BUFFET_COMPLETE
	goto CompleteArea_Kaolisle_City_59

CompleteArea_Kaolisle_City_71:
	setflag FLAG_KAOLMINES_ITEM3
	additem ITEM_DUSK_BALL
	goto CompleteArea_Kaolisle_City_70

CompleteArea_Kaolisle_City_74:
	additem ITEM_TM_ECHOED_VOICE
	setflag FLAG_OBTAINED_ECHOEDVOICE
	goto CompleteArea_Kaolisle_City_73

CompleteArea_Kaolisle_City_76:
	completequest FLAG_Q25_HOTEL_TROPICALSTONE_COMPLETE
	goto CompleteArea_Kaolisle_City_65

CompleteArea_Kaolisle_City_79:
	setflag FLAG_KAOLMINES_ITEM4
	additem ITEM_HYPER_POTION
	goto CompleteArea_Kaolisle_City_78

CompleteArea_Kaolisle_City_81:
	defeattrainer TRAINER_HOTEL_KID1
	defeattrainer TRAINER_HOTEL_KID2
	additem ITEM_ROSTE_BERRY, 2
	setflag FLAG_OBTAINED_ROSTEBERRIES
	goto_if_set FLAG_Q27_HOTEL_WILDKIDS_START, CompleteArea_Kaolisle_City_86
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_84:
	setflag FLAG_KAOLMINES_ITEM1
	additem ITEM_CALCIUM
	goto CompleteArea_Kaolisle_City_83

CompleteArea_Kaolisle_City_86:
	completequest FLAG_Q27_HOTEL_WILDKIDS_COMPLETE
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_89:
	setflag FLAG_KAOLMINES_ITEM6
	additem ITEM_RARE_CANDY
	goto CompleteArea_Kaolisle_City_88

CompleteArea_Kaolisle_City_92:
	setflag FLAG_KAOLMINES_ITEM8
	additem ITEM_PROTEIN
	goto CompleteArea_Kaolisle_City_91

CompleteArea_Kaolisle_City_95:
	setflag FLAG_KAOLMINES_ITEM10
	additem ITEM_PP_UP
	goto CompleteArea_Kaolisle_City_94

CompleteArea_Kaolisle_City_98:
	setflag FLAG_KAOLMINES_ITEM9
	additem ITEM_ZINC
	goto CompleteArea_Kaolisle_City_97

CompleteArea_Kaolisle_City_101:
	setflag FLAG_KAOLMINES_ITEM11
	additem ITEM_HP_UP
	goto CompleteArea_Kaolisle_City_100

CompleteArea_Kaolisle_City_104:
	setflag FLAG_KAOLMINES_ITEM12
	additem ITEM_GREAT_BALL
	goto CompleteArea_Kaolisle_City_103

CompleteArea_Kaolisle_City_107:
	setflag FLAG_KAOLMINES_ITEM13
	additem ITEM_CARBOS
	goto CompleteArea_Kaolisle_City_106

CompleteArea_Kaolisle_City_110:
	setflag FLAG_KAOLMINES_ITEM14
	additem ITEM_TM_DIG
	goto CompleteArea_Kaolisle_City_109

CompleteArea_Kaolisle_City_113:
	setflag FLAG_KAOLMINES_ITEM2
	additem ITEM_LOST_MEMENTO
	goto CompleteArea_Kaolisle_City_112

CompleteArea_Kaolisle_City_116:
	setflag FLAG_KAOLMINES_ITEM5
	call DebugFossil
	goto CompleteArea_Kaolisle_City_115

CompleteArea_Kaolisle_City_118:
	setflag FLAG_KAOLMINES_ITEM7
	additem ITEM_IRON
	goto CompleteArea_Kaolisle_City_4


CompleteArea_Rockliffe_Town::
	goto_if_set FLAG_TEMP_3, CompleteArea_Rockliffe_Town_2
CompleteArea_Rockliffe_Town_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Rockliffe_Town_5
CompleteArea_Rockliffe_Town_4:
	return

CompleteArea_Rockliffe_Town_2:
	goto_if_unset FLAG_ROCKLIFFE_ITEM2, CompleteArea_Rockliffe_Town_8
CompleteArea_Rockliffe_Town_7:
	goto_if_unset FLAG_ROCKLIFFE_ITEM1, CompleteArea_Rockliffe_Town_15
	goto CompleteArea_Rockliffe_Town_1

CompleteArea_Rockliffe_Town_5:
	goto_if_unset FLAG_OBTAINED_BEEDRILLITE, CompleteArea_Rockliffe_Town_12
CompleteArea_Rockliffe_Town_10:
	goto_if_unset FLAG_RECEIVED_METAL_COAT, CompleteArea_Rockliffe_Town_18
CompleteArea_Rockliffe_Town_17:
	goto_if_unset FLAG_RECEIVED_TM_FLING, CompleteArea_Rockliffe_Town_22
	goto CompleteArea_Rockliffe_Town_4

CompleteArea_Rockliffe_Town_8:
	setflag FLAG_ROCKLIFFE_ITEM2
	additem ITEM_CALCIUM
	goto CompleteArea_Rockliffe_Town_7

CompleteArea_Rockliffe_Town_11:
	additem ITEM_BEEDRILLITE
	setflag FLAG_OBTAINED_BEEDRILLITE
	goto_if_set FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, CompleteArea_Rockliffe_Town_20
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_12:
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Rockliffe_Town_11
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_15:
	setflag FLAG_ROCKLIFFE_ITEM1
	additem ITEM_SUPER_POTION
	goto CompleteArea_Rockliffe_Town_1

CompleteArea_Rockliffe_Town_18:
	additem ITEM_METAL_COAT
	setflag FLAG_RECEIVED_METAL_COAT
	goto_if_set FLAG_Q29_ROCKLIFFE_HEAVYMON_START, CompleteArea_Rockliffe_Town_24
	goto CompleteArea_Rockliffe_Town_17

CompleteArea_Rockliffe_Town_20:
	completequest FLAG_Q30_ROCKLIFFE_BEEDRILLS_COMPLETE
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_22:
	additem ITEM_TM_FLING
	setflag FLAG_RECEIVED_TM_FLING
	goto CompleteArea_Rockliffe_Town_4

CompleteArea_Rockliffe_Town_24:
	completequest FLAG_Q29_ROCKLIFFE_HEAVYMON_COMPLETE
	goto CompleteArea_Rockliffe_Town_17


CompleteArea_Route_11::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_11_2
CompleteArea_Route_11_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_11_5
CompleteArea_Route_11_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_11_11
CompleteArea_Route_11_10:
	return

CompleteArea_Route_11_2:
	goto_if_unset FLAG_ITEM_ROUTE_11_SUPER_REPEL, CompleteArea_Route_11_8
CompleteArea_Route_11_7:
	goto_if_unset FLAG_ITEM_ROUTE_11_ZINC, CompleteArea_Route_11_16
CompleteArea_Route_11_15:
	goto_if_unset FLAG_ITEM_ROUTE_11_HYPER_POTION, CompleteArea_Route_11_21
CompleteArea_Route_11_20:
	goto_if_unset FLAG_ROUTE11_GREATBALL, CompleteArea_Route_11_24
CompleteArea_Route_11_23:
	goto_if_unset FLAG_ROUTE11_HONEY, CompleteArea_Route_11_27
CompleteArea_Route_11_26:
	goto_if_unset FLAG_ROUTE11_RARECANDY, CompleteArea_Route_11_30
CompleteArea_Route_11_29:
	goto_if_unset FLAG_ITEM_ROUTE_11_ELIXIR, CompleteArea_Route_11_33
CompleteArea_Route_11_32:
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	goto CompleteArea_Route_11_1

CompleteArea_Route_11_5:
	defeattrainer TRAINER_R11_TR1_LASS
	defeattrainer TRAINER_R11_TR2_BIRDKEEPER
	defeattrainer TRAINER_R11_TR3_BUGCATCHER
	defeattrainer TRAINER_R11_TR4_NINJABOY
	defeattrainer TRAINER_R11_TR5_POKEMANIAC
	defeattrainer TRAINER_R11_TR6_TRIATHLETE_F
	defeattrainer TRAINER_R11_TR7_HIKER
	defeattrainer TRAINER_R11_TR8_NINJABOY_2
	defeattrainer TRAINER_R11_TR9_NINJABOY_3
	defeattrainer TRAINER_R11_TR10_CYCLER_M
	defeattrainer TRAINER_R11_TR11_BLACKBELT
	defeattrainer TRAINER_R11_TR12_EXPERT
	defeattrainer TRAINER_R11_TR13_PSYCHIC_F
	checktrainerflag TRAINER_R11_TR14_ACETRAINER_F
	goto_if 0, CompleteArea_Route_11_13
	goto CompleteArea_Route_11_4

CompleteArea_Route_11_8:
	setflag FLAG_ITEM_ROUTE_11_SUPER_REPEL
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_11_7

CompleteArea_Route_11_11:
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	goto_if_unset FLAG_ITEM_ROUTE_11_TORMENT, CompleteArea_Route_11_18
	goto CompleteArea_Route_11_10

CompleteArea_Route_11_13:
	defeattrainer TRAINER_R11_TR14_ACETRAINER_F
	additem ITEM_LUCKY_EGG
	setvar VAR_R11_TRAINERS, 12
	addbp 25
	goto CompleteArea_Route_11_4

CompleteArea_Route_11_16:
	setflag FLAG_ITEM_ROUTE_11_ZINC
	additem ITEM_ZINC
	goto CompleteArea_Route_11_15

CompleteArea_Route_11_18:
	additem ITEM_TM_TORMENT
	setflag FLAG_ITEM_ROUTE_11_TORMENT
	goto CompleteArea_Route_11_10

CompleteArea_Route_11_21:
	setflag FLAG_ITEM_ROUTE_11_HYPER_POTION
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_11_20

CompleteArea_Route_11_24:
	setflag FLAG_ROUTE11_GREATBALL
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_11_23

CompleteArea_Route_11_27:
	setflag FLAG_ROUTE11_HONEY
	additem ITEM_HONEY
	goto CompleteArea_Route_11_26

CompleteArea_Route_11_30:
	setflag FLAG_ROUTE11_RARECANDY
	additem ITEM_RARE_CANDY
	goto CompleteArea_Route_11_29

CompleteArea_Route_11_33:
	setflag FLAG_ITEM_ROUTE_11_ELIXIR
	additem ITEM_ELIXIR
	goto CompleteArea_Route_11_32


CompleteArea_Route_12::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_12_2
CompleteArea_Route_12_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_12_5
CompleteArea_Route_12_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_12_11
CompleteArea_Route_12_10:
	return

CompleteArea_Route_12_2:
	goto_if_unset FLAG_R12_ITEM3, CompleteArea_Route_12_8
CompleteArea_Route_12_7:
	goto_if_unset FLAG_R12_ITEM2, CompleteArea_Route_12_14
CompleteArea_Route_12_13:
	goto_if_unset FLAG_R12_ITEM1, CompleteArea_Route_12_20
CompleteArea_Route_12_19:
	goto_if_unset FLAG_FC_ITEM1, CompleteArea_Route_12_26
CompleteArea_Route_12_25:
	goto_if_unset FLAG_FC_ITEM2, CompleteArea_Route_12_34
CompleteArea_Route_12_33:
	goto_if_unset FLAG_FC_ITEM3, CompleteArea_Route_12_39
CompleteArea_Route_12_38:
	goto_if_unset FLAG_FC_ITEM4, CompleteArea_Route_12_41
	goto CompleteArea_Route_12_1

CompleteArea_Route_12_5:
	defeattrainer TRAINER_R12_TR1_TRIATHLETE_F
	defeattrainer TRAINER_R12_TR2_TRIATHLETE_M
	defeattrainer TRAINER_R12_TR3_TRIATHLETE_F2
	defeattrainer TRAINER_R12_TR4_TRIATHLETE_M2
	defeattrainer TRAINER_R12_TR5_TRIATHLETE_M3
	defeattrainer TRAINER_R12_TR6_TRIATHLETE_F3
	defeattrainer TRAINER_R12_TR9_PSYCHIC_M
	defeattrainer TRAINER_R12_TR10_HIKER
	defeattrainer TRAINER_R12_TR11_LASS
	defeattrainer TRAINER_R12_TR12_BUGMANIAC
	defeattrainer TRAINER_R12_TR13_NINJABOY
	defeattrainer TRAINER_FC_TR1_BLACKBELT
	defeattrainer TRAINER_FC_TR2_BATTLEGIRL
	defeattrainer TRAINER_FC_TR3_CAMPER
	defeattrainer TRAINER_FC_TR4_HIKER
	goto CompleteArea_Route_12_4

CompleteArea_Route_12_8:
	setflag FLAG_R12_ITEM3
	additem ITEM_PP_UP
	goto CompleteArea_Route_12_7

CompleteArea_Route_12_11:
	goto_if_unset FLAG_RECEIVED_HM_STRENGTH, CompleteArea_Route_12_17
CompleteArea_Route_12_16:
	goto_if_unset FLAG_FC_LOOTEDROCK, CompleteArea_Route_12_23
CompleteArea_Route_12_22:
	goto_if_unset FLAG_R12_XSPEED, CompleteArea_Route_12_28
	goto CompleteArea_Route_12_10

CompleteArea_Route_12_14:
	setflag FLAG_R12_ITEM2
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_12_13

CompleteArea_Route_12_17:
	giveitem ITEM_HM_STRENGTH
	setflag FLAG_RECEIVED_HM_STRENGTH
	goto CompleteArea_Route_12_16

CompleteArea_Route_12_20:
	setflag FLAG_R12_ITEM1
	additem ITEM_TM42
	goto CompleteArea_Route_12_19

CompleteArea_Route_12_23:
	setflag FLAG_HIDE_STONE_SPHERE_FC
	checkitem ITEM_STONE_SPHERE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Route_12_31
CompleteArea_Route_12_30:
	setflag FLAG_FC_LOOTEDROCK
	additem ITEM_STEEL_SPHERE
	setvar VAR_FCCAVE, 3
	goto_if_set FLAG_Q31_ROUTE12_WEIRDCAVE_START, CompleteArea_Route_12_36
	goto CompleteArea_Route_12_22

CompleteArea_Route_12_26:
	setflag FLAG_FC_ITEM1
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_12_25

CompleteArea_Route_12_28:
	additem ITEM_X_SPEED
	setflag FLAG_R12_XSPEED
	goto CompleteArea_Route_12_10

CompleteArea_Route_12_31:
	additem ITEM_STONE_SPHERE
	goto CompleteArea_Route_12_30

CompleteArea_Route_12_34:
	setflag FLAG_FC_ITEM2
	additem ITEM_PEARL
	goto CompleteArea_Route_12_33

CompleteArea_Route_12_36:
	completequest FLAG_Q31_ROUTE12_WEIRDCAVE_COMPLETE
	goto CompleteArea_Route_12_22

CompleteArea_Route_12_39:
	setflag FLAG_FC_ITEM3
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_12_38

CompleteArea_Route_12_41:
	setflag FLAG_FC_ITEM4
	additem ITEM_CARBOS
	goto CompleteArea_Route_12_1


CompleteArea_Sandstone_City::
	goto_if_set FLAG_TEMP_3, CompleteArea_Sandstone_City_2
CompleteArea_Sandstone_City_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Sandstone_City_5
CompleteArea_Sandstone_City_4:
	return

CompleteArea_Sandstone_City_2:
	goto_if_unset FLAG_SANDSTONE_HIDDENITEM_1, CompleteArea_Sandstone_City_8
CompleteArea_Sandstone_City_7:
	goto_if_unset FLAG_SANDSTONE_HIDDENITEM_2, CompleteArea_Sandstone_City_13
	goto CompleteArea_Sandstone_City_1

CompleteArea_Sandstone_City_5:
	goto_if_unset FLAG_SANDSTONE_BALLOON, CompleteArea_Sandstone_City_11
CompleteArea_Sandstone_City_10:
	goto_if_unset FLAG_SANDSTONE_ULTRABALL, CompleteArea_Sandstone_City_16
CompleteArea_Sandstone_City_15:
	goto_if_unset FLAG_SANDSTONE_LAVACOOKIE, CompleteArea_Sandstone_City_19
CompleteArea_Sandstone_City_18:
	goto_if_unset FLAG_SANDSTONE_DUSKBALLS, CompleteArea_Sandstone_City_22
CompleteArea_Sandstone_City_21:
	goto_if_unset FLAG_RECEIVED_SANDSTONE_BERRY, CompleteArea_Sandstone_City_24
	goto CompleteArea_Sandstone_City_4

CompleteArea_Sandstone_City_8:
	setflag FLAG_SANDSTONE_HIDDENITEM_1
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Sandstone_City_7

CompleteArea_Sandstone_City_11:
	additem ITEM_AIR_BALLOON
	setflag FLAG_SANDSTONE_BALLOON
	goto CompleteArea_Sandstone_City_10

CompleteArea_Sandstone_City_13:
	setflag FLAG_SANDSTONE_HIDDENITEM_2
	additem ITEM_MAX_POTION
	goto CompleteArea_Sandstone_City_1

CompleteArea_Sandstone_City_16:
	additem ITEM_ULTRA_BALL
	setflag FLAG_SANDSTONE_ULTRABALL
	goto CompleteArea_Sandstone_City_15

CompleteArea_Sandstone_City_19:
	additem ITEM_LAVA_COOKIE
	setflag FLAG_SANDSTONE_LAVACOOKIE
	goto CompleteArea_Sandstone_City_18

CompleteArea_Sandstone_City_22:
	additem ITEM_DUSK_BALL, 2
	setflag FLAG_SANDSTONE_DUSKBALLS
	goto CompleteArea_Sandstone_City_21

CompleteArea_Sandstone_City_24:
	additem ITEM_CHOPLE_BERRY
	setflag FLAG_RECEIVED_SANDSTONE_BERRY
	goto CompleteArea_Sandstone_City_4


CompleteArea_Route_13::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_13_2
CompleteArea_Route_13_1:
	return

CompleteArea_Route_13_2:
	goto_if_unset FLAG_R13_ITEM1, CompleteArea_Route_13_4
	goto CompleteArea_Route_13_1

CompleteArea_Route_13_4:
	setflag FLAG_R13_ITEM1
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_13_1


CompleteArea_Adamant_Tower::
	goto_if_set FLAG_TEMP_3, CompleteArea_Adamant_Tower_2
CompleteArea_Adamant_Tower_1:
	return

CompleteArea_Adamant_Tower_2:
	goto_if_unset FLAG_AT_ITEM1, CompleteArea_Adamant_Tower_5
CompleteArea_Adamant_Tower_4:
	goto_if_unset FLAG_AT_ITEM2, CompleteArea_Adamant_Tower_8
CompleteArea_Adamant_Tower_7:
	goto_if_unset FLAG_AT_ITEM3, CompleteArea_Adamant_Tower_10
	goto CompleteArea_Adamant_Tower_1

CompleteArea_Adamant_Tower_5:
	setflag FLAG_AT_ITEM1
	additem ITEM_NUGGET
	goto CompleteArea_Adamant_Tower_4

CompleteArea_Adamant_Tower_8:
	setflag FLAG_AT_ITEM2
	additem ITEM_HYPER_POTION
	goto CompleteArea_Adamant_Tower_7

CompleteArea_Adamant_Tower_10:
	setflag FLAG_AT_ITEM3
	additem ITEM_PP_UP
	goto CompleteArea_Adamant_Tower_1


CompleteArea_Route_14::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_14_2
CompleteArea_Route_14_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_14_5
CompleteArea_Route_14_4:
	return

CompleteArea_Route_14_2:
	goto_if_unset FLAG_R14_ITEM1, CompleteArea_Route_14_8
CompleteArea_Route_14_7:
	goto_if_unset FLAG_R14_ITEM2, CompleteArea_Route_14_11
CompleteArea_Route_14_10:
	goto_if_unset FLAG_R14_ITEM3, CompleteArea_Route_14_14
CompleteArea_Route_14_13:
	goto_if_unset FLAG_R14_ITEM4, CompleteArea_Route_14_16
	goto CompleteArea_Route_14_1

CompleteArea_Route_14_5:
	defeattrainer TRAINER_R14_TR1_RUNNING_F
	defeattrainer TRAINER_R14_TR2_HIKER
	defeattrainer TRAINER_R14_TR3_PARASOLLADY
	defeattrainer TRAINER_R14_TR4_FISHER
	defeattrainer TRAINER_R14_TR5_PARASOLLADY2
	defeattrainer TRAINER_R14_TR6_NINJABOY
	defeattrainer TRAINER_R14_TR7_ROCKER
	defeattrainer TRAINER_R14_TR8_MANIAC
	goto CompleteArea_Route_14_4

CompleteArea_Route_14_8:
	setflag FLAG_R14_ITEM1
	additem ITEM_PP_UP
	goto CompleteArea_Route_14_7

CompleteArea_Route_14_11:
	setflag FLAG_R14_ITEM2
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_14_10

CompleteArea_Route_14_14:
	setflag FLAG_R14_ITEM3
	additem ITEM_ELIXIR
	goto CompleteArea_Route_14_13

CompleteArea_Route_14_16:
	setflag FLAG_R14_ITEM4
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_14_1


CompleteArea_Route_15::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_15_2
CompleteArea_Route_15_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_15_5
CompleteArea_Route_15_4:
	return

CompleteArea_Route_15_2:
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	goto_if_unset FLAG_ROUTE15_ITEM7, CompleteArea_Route_15_8
CompleteArea_Route_15_7:
	goto_if_unset FLAG_ROUTE15_ITEM6, CompleteArea_Route_15_16
CompleteArea_Route_15_15:
	goto_if_unset FLAG_BERRYFIELDS_ITEM, CompleteArea_Route_15_21
CompleteArea_Route_15_20:
	goto_if_unset FLAG_ROUTE15_ITEM5, CompleteArea_Route_15_24
CompleteArea_Route_15_23:
	goto_if_unset FLAG_ROUTE15_ITEM4, CompleteArea_Route_15_27
CompleteArea_Route_15_26:
	goto_if_unset FLAG_ROUTE15_ITEM3, CompleteArea_Route_15_30
CompleteArea_Route_15_29:
	goto_if_unset FLAG_ROUTE15_ITEM2, CompleteArea_Route_15_33
CompleteArea_Route_15_32:
	goto_if_unset FLAG_ROUTE15_ITEM1, CompleteArea_Route_15_35
	goto CompleteArea_Route_15_1

CompleteArea_Route_15_5:
	defeattrainer TRAINER_R15_TR1_BIRDKEEPER
	defeattrainer TRAINER_R15_TR2_RANGERF
	defeattrainer TRAINER_R15_TR3_RANGERM
	defeattrainer TRAINER_R15_TR4_GENTLEMAN
	defeattrainer TRAINER_R15_TR5_NINJABOY1
	defeattrainer TRAINER_R15_TR6_NINJABOY2
	defeattrainer TRAINER_R15_TR7_BUGCATCHER
	defeattrainer TRAINER_R15_TR8_BUGCATCHER2
	defeattrainer TRAINER_R15_TR9_BEAUTY
	defeattrainer TRAINER_R15_TR10_FISHER
	defeattrainer TRAINER_R15_TR13_COOLTRAINER
	defeattrainer TRAINER_R15_TR14_LASS
	defeattrainer TRAINER_R15_TR15_SCIENTIST
	defeattrainer TRAINER_R15_TR16_AROMALADY
	defeattrainer TRAINER_R15_TR17_NINJABOY3
	checktrainerflag TRAINER_R15_ACETRAINER_F
	goto_if 0, CompleteArea_Route_15_12
CompleteArea_Route_15_10:
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_7
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_2
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_4
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_5
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_3
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_6
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_7
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_2
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_4
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_5
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_3
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_6
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_7
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_2
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_4
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_5
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_3
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_6
	call TryLootingStrangeSeed
	goto CompleteArea_Route_15_4

CompleteArea_Route_15_8:
	setflag FLAG_ROUTE15_ITEM7
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_15_7

CompleteArea_Route_15_11:
	additem ITEM_ROCKY_HELMET
	defeattrainer TRAINER_R15_ACETRAINER_F
	defeattrainer TRAINER_R15_ACETRAINER_M
	addbp 25
	compare VAR_ROUTE14_ROCKET_EVENT, 7
	goto_if_lt CompleteArea_Route_15_18
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_12:
	checktrainerflag TRAINER_R15_ACETRAINER_M
	goto_if 0, CompleteArea_Route_15_11
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_16:
	setflag FLAG_ROUTE15_ITEM6
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_15_15

CompleteArea_Route_15_18:
	setvar VAR_ROUTE14_ROCKET_EVENT, 7
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_21:
	setflag FLAG_BERRYFIELDS_ITEM
	additem ITEM_PP_UP
	goto CompleteArea_Route_15_20

CompleteArea_Route_15_24:
	setflag FLAG_ROUTE15_ITEM5
	additem ITEM_SUN_STONE
	goto CompleteArea_Route_15_23

CompleteArea_Route_15_27:
	setflag FLAG_ROUTE15_ITEM4
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_15_26

CompleteArea_Route_15_30:
	setflag FLAG_ROUTE15_ITEM3
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_15_29

CompleteArea_Route_15_33:
	setflag FLAG_ROUTE15_ITEM2
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_15_32

CompleteArea_Route_15_35:
	setflag FLAG_ROUTE15_ITEM1
	additem ITEM_ZINC
	goto CompleteArea_Route_15_1


CompleteArea_Fishing_Village::
	goto_if_set FLAG_TEMP_5, CompleteArea_Fishing_Village_2
CompleteArea_Fishing_Village_1:
	return

CompleteArea_Fishing_Village_2:
	goto_if_unset FLAG_RECEIVED_GYARADOSITE, CompleteArea_Fishing_Village_5
CompleteArea_Fishing_Village_4:
	checkitem ITEM_SUPER_POTION
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Fishing_Village_7
	goto CompleteArea_Fishing_Village_1

CompleteArea_Fishing_Village_5:
	setflag FLAG_FISHINGVILLAGE_GYARADOS_REWARD
	additem ITEM_GYARADOSITE
	setflag FLAG_RECEIVED_GYARADOSITE
	goto CompleteArea_Fishing_Village_4

CompleteArea_Fishing_Village_7:
	setflag FLAG_USED_TITANIUM_LINE
	additem ITEM_SUPER_ROD
	checkitem ITEM_TITANIUM_LINE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Fishing_Village_9
	goto CompleteArea_Fishing_Village_1

CompleteArea_Fishing_Village_9:
	additem ITEM_TITANIUM_LINE
	goto CompleteArea_Fishing_Village_1


CompleteArea_Route_23::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_23_2
CompleteArea_Route_23_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_23_5
CompleteArea_Route_23_4:
	return

CompleteArea_Route_23_2:
	goto_if_unset FLAG_ROUTE23_ITEM1, CompleteArea_Route_23_8
CompleteArea_Route_23_7:
	goto_if_unset FLAG_ROUTE23_ITEM2, CompleteArea_Route_23_13
CompleteArea_Route_23_12:
	goto_if_unset FLAG_ROUTE23_ITEM3, CompleteArea_Route_23_16
CompleteArea_Route_23_15:
	goto_if_unset FLAG_ROUTE23_ITEM4, CompleteArea_Route_23_19
CompleteArea_Route_23_18:
	pickberrytree BERRY_TREE_ROUTE_123_LEPPA_1
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_SOIL
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_123_LEPPA_2
	call TryLootingStrangeSeed
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	call TryCuttingStrangeSeedTree
	goto CompleteArea_Route_23_1

CompleteArea_Route_23_5:
	defeattrainer TRAINER_R23_TR1_BREEDER_M
	defeattrainer TRAINER_R23_TR2_MANIAC
	defeattrainer TRAINER_R23_TR3_TWINS
	defeattrainer TRAINER_R23_TR4_BREEDER_F
	defeattrainer TRAINER_R23_TR5_HEXMANIAC_1
	defeattrainer TRAINER_R23_TR6_PSYCHIC_M
	defeattrainer TRAINER_R23_TR7_HEXMANIAC_2
	defeattrainer TRAINER_R23_TR8_TRIATHLETE_F
	defeattrainer TRAINER_R23_TR9_FISHERMAN
	defeattrainer TRAINER_R23_TR10_BATTLEGIRL
	defeattrainer TRAINER_R23_TR11_NINJABOY
	checktrainerflag TRAINER_R23_TR12_ACETRAINER
	goto_if 0, CompleteArea_Route_23_10
	goto CompleteArea_Route_23_4

CompleteArea_Route_23_8:
	setflag FLAG_ROUTE23_ITEM1
	additem ITEM_REVIVAL_HERB
	goto CompleteArea_Route_23_7

CompleteArea_Route_23_10:
	defeattrainer TRAINER_R23_TR12_ACETRAINER
	additem ITEM_CHOICE_SCARF
	setflag FLAG_OBTAINED_CHOICE_SCARF
	addbp 30
	goto CompleteArea_Route_23_4

CompleteArea_Route_23_13:
	setflag FLAG_ROUTE23_ITEM2
	additem ITEM_CALCIUM
	goto CompleteArea_Route_23_12

CompleteArea_Route_23_16:
	setflag FLAG_ROUTE23_ITEM3
	additem ITEM_ELIXIR
	goto CompleteArea_Route_23_15

CompleteArea_Route_23_19:
	setflag FLAG_ROUTE23_ITEM4
	additem ITEM_PP_UP
	goto CompleteArea_Route_23_18


CompleteArea_Drisledge_Town::
	goto_if_set FLAG_TEMP_3, CompleteArea_Drisledge_Town_2
CompleteArea_Drisledge_Town_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Drisledge_Town_5
CompleteArea_Drisledge_Town_4:
	return

CompleteArea_Drisledge_Town_2:
	goto_if_unset FLAG_DRISLEDGE_ITEM1, CompleteArea_Drisledge_Town_7
	goto CompleteArea_Drisledge_Town_1

CompleteArea_Drisledge_Town_5:
	goto_if_unset FLAG_DRISLEDGE_ITEM2, CompleteArea_Drisledge_Town_10
CompleteArea_Drisledge_Town_9:
	goto_if_unset FLAG_DRISLEDGE_ITEM3, CompleteArea_Drisledge_Town_13
CompleteArea_Drisledge_Town_12:
	goto_if_unset FLAG_ACEROLA_ITEM, CompleteArea_Drisledge_Town_16
CompleteArea_Drisledge_Town_15:
	goto_if_unset FLAG_DRISLEDGE_ITEM4, CompleteArea_Drisledge_Town_19
CompleteArea_Drisledge_Town_18:
	goto_if_unset FLAG_OBTAINED_GENGARITE, CompleteArea_Drisledge_Town_21
	goto CompleteArea_Drisledge_Town_4

CompleteArea_Drisledge_Town_7:
	setflag FLAG_DRISLEDGE_ITEM1
	additem ITEM_POKE_DOLL
	goto CompleteArea_Drisledge_Town_1

CompleteArea_Drisledge_Town_10:
	additem ITEM_ORAN_BERRY
	setflag FLAG_DRISLEDGE_ITEM2
	goto CompleteArea_Drisledge_Town_9

CompleteArea_Drisledge_Town_13:
	additem ITEM_COLBUR_BERRY
	setflag FLAG_DRISLEDGE_ITEM3
	goto CompleteArea_Drisledge_Town_12

CompleteArea_Drisledge_Town_16:
	additem ITEM_TM_CAPTIVATE
	setflag FLAG_ACEROLA_ITEM
	goto CompleteArea_Drisledge_Town_15

CompleteArea_Drisledge_Town_19:
	additem ITEM_SPELL_TAG
	setflag FLAG_DRISLEDGE_ITEM4
	goto CompleteArea_Drisledge_Town_18

CompleteArea_Drisledge_Town_21:
	additem ITEM_GENGARITE
	setflag FLAG_OBTAINED_GENGARITE
	goto CompleteArea_Drisledge_Town_4


CompleteArea_Amberock_Town::
	goto_if_set FLAG_TEMP_3, CompleteArea_Amberock_Town_2
CompleteArea_Amberock_Town_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Amberock_Town_5
CompleteArea_Amberock_Town_4:
	return

CompleteArea_Amberock_Town_2:
	goto_if_unset FLAG_GAME_CORNER_TRASHITEM, CompleteArea_Amberock_Town_7
	goto CompleteArea_Amberock_Town_1

CompleteArea_Amberock_Town_5:
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Amberock_Town_9
	goto CompleteArea_Amberock_Town_4

CompleteArea_Amberock_Town_7:
	setflag FLAG_GAME_CORNER_TRASHITEM
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Amberock_Town_1

CompleteArea_Amberock_Town_9:
	additem ITEM_COIN_CASE
	goto CompleteArea_Amberock_Town_4


CompleteArea_Route_3::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_3_2
CompleteArea_Route_3_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_3_5
CompleteArea_Route_3_4:
	return

CompleteArea_Route_3_2:
	goto_if_unset FLAG_COAST_ITEM1, CompleteArea_Route_3_8
CompleteArea_Route_3_7:
	goto_if_unset FLAG_COAST_ITEM2, CompleteArea_Route_3_11
CompleteArea_Route_3_10:
	goto_if_unset FLAG_COAST_ITEM3, CompleteArea_Route_3_14
CompleteArea_Route_3_13:
	goto_if_unset FLAG_COAST_ITEM4, CompleteArea_Route_3_17
CompleteArea_Route_3_16:
	goto_if_unset FLAG_COAST_ITEM5, CompleteArea_Route_3_20
CompleteArea_Route_3_19:
	goto_if_unset FLAG_COAST_ITEM6, CompleteArea_Route_3_22
	goto CompleteArea_Route_3_1

CompleteArea_Route_3_5:
	defeattrainer TRAINER_R3_TR1_SWIMMER_F
	defeattrainer TRAINER_R3_TR2_SWIMMER_M
	defeattrainer TRAINER_R3_TR3_SWIMMER_OLDSISTER
	defeattrainer TRAINER_R3_TR4_TUBER
	defeattrainer TRAINER_R3_TR5_FISHERMAN
	defeattrainer TRAINER_R3_TR6_LANDSWIMMER_1
	defeattrainer TRAINER_R3_TR7_LANDSWIMMER_2
	defeattrainer TRAINER_R3_TR8_SAILOR
	defeattrainer TRAINER_R3_TR9_SWIMMER_M1
	defeattrainer TRAINER_R3_TR10_SWIMMER_M2
	defeattrainer TRAINER_R3_TR11_SWIMMER_F1
	goto CompleteArea_Route_3_4

CompleteArea_Route_3_8:
	setflag FLAG_COAST_ITEM1
	additem ITEM_STAR_PIECE
	goto CompleteArea_Route_3_7

CompleteArea_Route_3_11:
	setflag FLAG_COAST_ITEM2
	additem ITEM_STARDUST
	goto CompleteArea_Route_3_10

CompleteArea_Route_3_14:
	setflag FLAG_COAST_ITEM3
	additem ITEM_PEARL
	goto CompleteArea_Route_3_13

CompleteArea_Route_3_17:
	setflag FLAG_COAST_ITEM4
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_3_16

CompleteArea_Route_3_20:
	setflag FLAG_COAST_ITEM5
	additem ITEM_PP_UP
	goto CompleteArea_Route_3_19

CompleteArea_Route_3_22:
	setflag FLAG_COAST_ITEM6
	additem ITEM_PEARL
	goto CompleteArea_Route_3_1


CompleteArea_Route_9::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_9_2
CompleteArea_Route_9_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_9_5
CompleteArea_Route_9_4:
	return

CompleteArea_Route_9_2:
	goto_if_unset FLAG_ROUTE9_ITEM1, CompleteArea_Route_9_8
CompleteArea_Route_9_7:
	goto_if_unset FLAG_ROUTE9_ITEM2, CompleteArea_Route_9_11
CompleteArea_Route_9_10:
	goto_if_unset FLAG_ROUTE9_ITEM3, CompleteArea_Route_9_14
CompleteArea_Route_9_13:
	goto_if_unset FLAG_ROUTE9_ITEM4, CompleteArea_Route_9_17
CompleteArea_Route_9_16:
	goto_if_unset FLAG_ROUTE9_ITEM5, CompleteArea_Route_9_20
CompleteArea_Route_9_19:
	goto_if_unset FLAG_ROUTE9_ITEM6, CompleteArea_Route_9_23
CompleteArea_Route_9_22:
	goto_if_unset FLAG_ROUTE9_ITEM7, CompleteArea_Route_9_26
CompleteArea_Route_9_25:
	goto_if_unset FLAG_ROUTE9_ITEM8, CompleteArea_Route_9_28
	goto CompleteArea_Route_9_1

CompleteArea_Route_9_5:
	defeattrainer TRAINER_R9_TR1_SWIMMER_M
	defeattrainer TRAINER_R9_TR2_BLACKBELT
	defeattrainer TRAINER_R9_TR3_BIRDKEEPER
	defeattrainer TRAINER_R9_TR4_BATTLEGIRL
	defeattrainer TRAINER_R9_TR5_SWIMMER_F
	defeattrainer TRAINER_R9_TR6_FISHERMAN
	defeattrainer TRAINER_R9_TR7_HIKER
	defeattrainer TRAINER_R9_TR8_COLLECTOR
	defeattrainer TRAINER_R9_TR9_SWIMMER_M2
	defeattrainer TRAINER_R9_TR10_LANDSWIMMER
	goto CompleteArea_Route_9_4

CompleteArea_Route_9_8:
	setflag FLAG_ROUTE9_ITEM1
	additem ITEM_TM_FLIP_TURN
	goto CompleteArea_Route_9_7

CompleteArea_Route_9_11:
	setflag FLAG_ROUTE9_ITEM2
	additem ITEM_CARBOS
	goto CompleteArea_Route_9_10

CompleteArea_Route_9_14:
	setflag FLAG_ROUTE9_ITEM3
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Route_9_13

CompleteArea_Route_9_17:
	setflag FLAG_ROUTE9_ITEM4
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_9_16

CompleteArea_Route_9_20:
	setflag FLAG_ROUTE9_ITEM5
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_9_19

CompleteArea_Route_9_23:
	setflag FLAG_ROUTE9_ITEM6
	additem ITEM_RARE_CANDY
	goto CompleteArea_Route_9_22

CompleteArea_Route_9_26:
	setflag FLAG_ROUTE9_ITEM7
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_9_25

CompleteArea_Route_9_28:
	setflag FLAG_ROUTE9_ITEM8
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_9_1


CompleteArea_Route_10::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_10_2
CompleteArea_Route_10_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_10_5
CompleteArea_Route_10_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_10_11
CompleteArea_Route_10_10:
	return

CompleteArea_Route_10_2:
	goto_if_unset FLAG_ROUTE10_ITEM8, CompleteArea_Route_10_8
CompleteArea_Route_10_7:
	goto_if_unset FLAG_ROUTE10_ITEM6, CompleteArea_Route_10_16
CompleteArea_Route_10_15:
	goto_if_unset FLAG_ROUTE10_ITEM7, CompleteArea_Route_10_22
CompleteArea_Route_10_21:
	goto_if_unset FLAG_ROUTE10_ITEM5, CompleteArea_Route_10_28
CompleteArea_Route_10_27:
	goto_if_unset FLAG_ROUTE10_ITEM4, CompleteArea_Route_10_34
CompleteArea_Route_10_33:
	goto_if_unset FLAG_ROUTE10_ITEM3, CompleteArea_Route_10_40
CompleteArea_Route_10_39:
	goto_if_unset FLAG_ROUTE10_ITEM2, CompleteArea_Route_10_46
CompleteArea_Route_10_45:
	goto_if_unset FLAG_ROUTE10_ITEM1, CompleteArea_Route_10_51
	goto CompleteArea_Route_10_1

CompleteArea_Route_10_5:
	defeattrainer TRAINER_R10_TR2_SWIMMER_F1
	defeattrainer TRAINER_R10_TR3_FISHERMAN
	defeattrainer TRAINER_R10_TR4_SWIMMER_M1
	defeattrainer TRAINER_R10_TR5_BLACKBELT
	defeattrainer TRAINER_R10_TR6_HIKER
	defeattrainer TRAINER_R10_TR7_SWIMMER_F2
	defeattrainer TRAINER_R10_TR8_SWIMMER_M2
	defeattrainer TRAINER_R10_TR9_BATTLEGIRL
	defeattrainer TRAINER_R10_TR10_TUBER_M
	checktrainerflag TRAINER_R10_TR1_ACESWIMMER
	goto_if 0, CompleteArea_Route_10_13
	goto CompleteArea_Route_10_4

CompleteArea_Route_10_8:
	setflag FLAG_ROUTE10_ITEM8
	additem ITEM_DIVE_BALL
	goto CompleteArea_Route_10_7

CompleteArea_Route_10_11:
	setflag FLAG_SERPENTCAVE_BOULDER_1
	setflag FLAG_SERPENTCAVE_BOULDER_2
	setflag FLAG_SERPENTCAVE_BOULDER_3
	setflag FLAG_SERPENTCAVE_BOULDER_4
	compare VAR_SERPENTCAVE_WATER_LEVEL, 4
	goto_if_lt CompleteArea_Route_10_19
CompleteArea_Route_10_18:
	goto_if_unset FLAG_SERPENTCAVE_ITEM1, CompleteArea_Route_10_25
CompleteArea_Route_10_24:
	goto_if_unset FLAG_SERPENTCAVE_ITEM2, CompleteArea_Route_10_31
CompleteArea_Route_10_30:
	goto_if_unset FLAG_SERPENTCAVE_ITEM4, CompleteArea_Route_10_37
CompleteArea_Route_10_36:
	goto_if_unset FLAG_SERPENTCAVE_ITEM3, CompleteArea_Route_10_43
CompleteArea_Route_10_42:
	goto_if_unset FLAG_SERPENTCAVE_DRAGONFANG, CompleteArea_Route_10_49
CompleteArea_Route_10_48:
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto_if_lt CompleteArea_Route_10_54
CompleteArea_Route_10_53:
	defeattrainer TRAINER_CASUAL_IRIS
	additem ITEM_GARCHOMPITE
	goto CompleteArea_Route_10_10

CompleteArea_Route_10_13:
	additem ITEM_BLUNDER_POLICY
	defeattrainer TRAINER_R10_TR1_ACESWIMMER
	setflag FLAG_OBTAINED_BLUNDER_POLICY
	addbp 30
	goto CompleteArea_Route_10_4

CompleteArea_Route_10_16:
	setflag FLAG_ROUTE10_ITEM6
	additem ITEM_TM_SCALD
	goto CompleteArea_Route_10_15

CompleteArea_Route_10_19:
	setvar VAR_SERPENTCAVE_WATER_LEVEL, 4
	goto CompleteArea_Route_10_18

CompleteArea_Route_10_22:
	setflag FLAG_ROUTE10_ITEM7
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_10_21

CompleteArea_Route_10_25:
	setflag FLAG_SERPENTCAVE_ITEM1
	additem ITEM_MOON_STONE
	goto CompleteArea_Route_10_24

CompleteArea_Route_10_28:
	setflag FLAG_ROUTE10_ITEM5
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_10_27

CompleteArea_Route_10_31:
	setflag FLAG_SERPENTCAVE_ITEM2
	additem ITEM_ETHER
	goto CompleteArea_Route_10_30

CompleteArea_Route_10_34:
	setflag FLAG_ROUTE10_ITEM4
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_10_33

CompleteArea_Route_10_37:
	setflag FLAG_SERPENTCAVE_ITEM4
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_10_36

CompleteArea_Route_10_40:
	setflag FLAG_ROUTE10_ITEM3
	additem ITEM_CALCIUM
	goto CompleteArea_Route_10_39

CompleteArea_Route_10_43:
	setflag FLAG_SERPENTCAVE_ITEM3
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_10_42

CompleteArea_Route_10_46:
	setflag FLAG_ROUTE10_ITEM2
	additem ITEM_STARDUST
	goto CompleteArea_Route_10_45

CompleteArea_Route_10_49:
	setflag FLAG_SERPENTCAVE_DRAGONFANG
	additem ITEM_DRAGON_FANG
	goto CompleteArea_Route_10_48

CompleteArea_Route_10_51:
	setflag FLAG_ROUTE10_ITEM1
	additem ITEM_BERRY_JUICE
	goto CompleteArea_Route_10_1

CompleteArea_Route_10_54:
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto CompleteArea_Route_10_53


CompleteArea_Windplume_Mountain::
	goto_if_set FLAG_TEMP_3, CompleteArea_Windplume_Mountain_2
CompleteArea_Windplume_Mountain_1:
	return

CompleteArea_Windplume_Mountain_2:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_2, CompleteArea_Windplume_Mountain_5
CompleteArea_Windplume_Mountain_4:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_4, CompleteArea_Windplume_Mountain_8
CompleteArea_Windplume_Mountain_7:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_3, CompleteArea_Windplume_Mountain_11
CompleteArea_Windplume_Mountain_10:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_5, CompleteArea_Windplume_Mountain_14
CompleteArea_Windplume_Mountain_13:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_6, CompleteArea_Windplume_Mountain_17
CompleteArea_Windplume_Mountain_16:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_7, CompleteArea_Windplume_Mountain_20
CompleteArea_Windplume_Mountain_19:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_8, CompleteArea_Windplume_Mountain_23
CompleteArea_Windplume_Mountain_22:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_9, CompleteArea_Windplume_Mountain_26
CompleteArea_Windplume_Mountain_25:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_10, CompleteArea_Windplume_Mountain_29
CompleteArea_Windplume_Mountain_28:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_11, CompleteArea_Windplume_Mountain_32
CompleteArea_Windplume_Mountain_31:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_12, CompleteArea_Windplume_Mountain_35
CompleteArea_Windplume_Mountain_34:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_13, CompleteArea_Windplume_Mountain_38
CompleteArea_Windplume_Mountain_37:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_14, CompleteArea_Windplume_Mountain_41
CompleteArea_Windplume_Mountain_40:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_15, CompleteArea_Windplume_Mountain_44
CompleteArea_Windplume_Mountain_43:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_16, CompleteArea_Windplume_Mountain_47
CompleteArea_Windplume_Mountain_46:
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_17, CompleteArea_Windplume_Mountain_49
	goto CompleteArea_Windplume_Mountain_1

CompleteArea_Windplume_Mountain_5:
	setflag FLAG_WINDPLUME_MT_ITEM_2
	additem ITEM_ETHER
	goto CompleteArea_Windplume_Mountain_4

CompleteArea_Windplume_Mountain_8:
	setflag FLAG_WINDPLUME_MT_ITEM_4
	additem ITEM_MAX_REPEL
	goto CompleteArea_Windplume_Mountain_7

CompleteArea_Windplume_Mountain_11:
	setflag FLAG_WINDPLUME_MT_ITEM_3
	additem ITEM_MOON_STONE
	goto CompleteArea_Windplume_Mountain_10

CompleteArea_Windplume_Mountain_14:
	setflag FLAG_WINDPLUME_MT_ITEM_5
	additem ITEM_ELIXIR
	goto CompleteArea_Windplume_Mountain_13

CompleteArea_Windplume_Mountain_17:
	setflag FLAG_WINDPLUME_MT_ITEM_6
	additem ITEM_TM_FOCUS_BLAST
	goto CompleteArea_Windplume_Mountain_16

CompleteArea_Windplume_Mountain_20:
	setflag FLAG_WINDPLUME_MT_ITEM_7
	additem ITEM_STARDUST
	goto CompleteArea_Windplume_Mountain_19

CompleteArea_Windplume_Mountain_23:
	setflag FLAG_WINDPLUME_MT_ITEM_8
	additem ITEM_PP_UP
	goto CompleteArea_Windplume_Mountain_22

CompleteArea_Windplume_Mountain_26:
	setflag FLAG_WINDPLUME_MT_ITEM_9
	additem ITEM_REVIVE
	goto CompleteArea_Windplume_Mountain_25

CompleteArea_Windplume_Mountain_29:
	setflag FLAG_WINDPLUME_MT_ITEM_10
	additem ITEM_NUGGET
	goto CompleteArea_Windplume_Mountain_28

CompleteArea_Windplume_Mountain_32:
	setflag FLAG_WINDPLUME_MT_ITEM_11
	additem ITEM_BLACK_GLASSES
	goto CompleteArea_Windplume_Mountain_31

CompleteArea_Windplume_Mountain_35:
	setflag FLAG_WINDPLUME_MT_ITEM_12
	additem ITEM_ULTRA_BALL
	goto CompleteArea_Windplume_Mountain_34

CompleteArea_Windplume_Mountain_38:
	setflag FLAG_WINDPLUME_MT_ITEM_13
	call DebugFossil
	goto CompleteArea_Windplume_Mountain_37

CompleteArea_Windplume_Mountain_41:
	setflag FLAG_WINDPLUME_MT_ITEM_14
	additem ITEM_MAX_POTION
	goto CompleteArea_Windplume_Mountain_40

CompleteArea_Windplume_Mountain_44:
	setflag FLAG_WINDPLUME_MT_ITEM_15
	additem ITEM_RARE_CANDY
	goto CompleteArea_Windplume_Mountain_43

CompleteArea_Windplume_Mountain_47:
	setflag FLAG_WINDPLUME_MT_ITEM_16
	additem ITEM_STARDUST
	goto CompleteArea_Windplume_Mountain_46

CompleteArea_Windplume_Mountain_49:
	setflag FLAG_WINDPLUME_MT_ITEM_17
	additem ITEM_FLOAT_STONE
	goto CompleteArea_Windplume_Mountain_1


CompleteArea_Route_16::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_16_2
CompleteArea_Route_16_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_16_5
CompleteArea_Route_16_4:
	return

CompleteArea_Route_16_2:
	goto_if_unset FLAG_ROUTE16_ITEM1, CompleteArea_Route_16_8
CompleteArea_Route_16_7:
	goto_if_unset FLAG_ROUTE16_ITEM2, CompleteArea_Route_16_11
CompleteArea_Route_16_10:
	goto_if_unset FLAG_ROUTE16_ITEM3, CompleteArea_Route_16_14
CompleteArea_Route_16_13:
	goto_if_unset FLAG_ROUTE16_ITEM4, CompleteArea_Route_16_17
CompleteArea_Route_16_16:
	goto_if_unset FLAG_ROUTE16_ITEM5, CompleteArea_Route_16_20
CompleteArea_Route_16_19:
	goto_if_unset FLAG_ROUTE16_ITEM6, CompleteArea_Route_16_22
	goto CompleteArea_Route_16_1

CompleteArea_Route_16_5:
	defeattrainer TRAINER_R16_TR1_SWIMMER_M
	defeattrainer TRAINER_R16_TR2_SWIMMER_F
	defeattrainer TRAINER_R16_TR12_NINJABOY2
	defeattrainer TRAINER_R16_TR5_SWIMMER_F
	defeattrainer TRAINER_R16_TR6_SWIMMER_F
	defeattrainer TRAINER_R16_TR7_GUITARIST
	defeattrainer TRAINER_R16_TR8_HIKER
	defeattrainer TRAINER_R16_TR9_BEAUTY
	defeattrainer TRAINER_R16_TR10_NINJABOY
	defeattrainer TRAINER_R16_TR11_EXPERT_F
	goto CompleteArea_Route_16_4

CompleteArea_Route_16_8:
	setflag FLAG_ROUTE16_ITEM1
	additem ITEM_STARDUST
	goto CompleteArea_Route_16_7

CompleteArea_Route_16_11:
	setflag FLAG_ROUTE16_ITEM2
	additem ITEM_PEARL
	goto CompleteArea_Route_16_10

CompleteArea_Route_16_14:
	setflag FLAG_ROUTE16_ITEM3
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_16_13

CompleteArea_Route_16_17:
	setflag FLAG_ROUTE16_ITEM4
	additem ITEM_NUGGET
	goto CompleteArea_Route_16_16

CompleteArea_Route_16_20:
	setflag FLAG_ROUTE16_ITEM5
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_16_19

CompleteArea_Route_16_22:
	setflag FLAG_ROUTE16_ITEM6
	additem ITEM_HP_UP
	goto CompleteArea_Route_16_1


CompleteArea_Basalek_Town::
	goto_if_set FLAG_TEMP_3, CompleteArea_Basalek_Town_2
CompleteArea_Basalek_Town_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Basalek_Town_5
CompleteArea_Basalek_Town_4:
	goto_if_set FLAG_TEMP_5, CompleteArea_Basalek_Town_11
CompleteArea_Basalek_Town_10:
	return

CompleteArea_Basalek_Town_2:
	goto_if_unset FLAG_BASALEK_ITEM2, CompleteArea_Basalek_Town_8
CompleteArea_Basalek_Town_7:
	goto_if_unset FLAG_BASALEK_ITEM1, CompleteArea_Basalek_Town_16
CompleteArea_Basalek_Town_15:
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM3, CompleteArea_Basalek_Town_23
CompleteArea_Basalek_Town_22:
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM2, CompleteArea_Basalek_Town_26
CompleteArea_Basalek_Town_25:
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM1, CompleteArea_Basalek_Town_29
CompleteArea_Basalek_Town_28:
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM4, CompleteArea_Basalek_Town_32
CompleteArea_Basalek_Town_31:
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM5, CompleteArea_Basalek_Town_34
	goto CompleteArea_Basalek_Town_1

CompleteArea_Basalek_Town_5:
	defeattrainer TRAINER_BASALTUNNEL_TR1_HIKER1
	defeattrainer TRAINER_BASALTUNNEL_TR2_BLACKBELT
	defeattrainer TRAINER_BASALTUNNEL_TR3_PICNICKER
	defeattrainer TRAINER_BASALTUNNEL_TR4_FIREBREATHER
	defeattrainer TRAINER_BASALTUNNEL_TR5_BLACKBELT2
	defeattrainer TRAINER_BASALTUNNEL_TR6_CAMPERM
	defeattrainer TRAINER_BASALTUNNEL_TR7_PICNICKER2
	defeattrainer TRAINER_BASALTUNNEL_TR8_HIKER2
	defeattrainer TRAINER_BASALTUNNEL_TR9_BEAUTY
	defeattrainer TRAINER_BASALTUNNEL_TR10_FIREBREATHER2
	defeattrainer TRAINER_BASALTUNNEL_TR11_HIKER3
	checktrainerflag TRAINER_BASALTUNNEL_TR12_BROCK
	goto_if 0, CompleteArea_Basalek_Town_13
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_8:
	setflag FLAG_BASALEK_ITEM2
	additem ITEM_ETHER
	goto CompleteArea_Basalek_Town_7

CompleteArea_Basalek_Town_11:
	goto_if_unset FLAG_BASALEK_WOMAN_LEMONADE, CompleteArea_Basalek_Town_18
	goto CompleteArea_Basalek_Town_10

CompleteArea_Basalek_Town_13:
	defeattrainer TRAINER_BASALTUNNEL_TR12_BROCK
	giveitem ITEM_HM_ROCK_CLIMB
	goto_if_set FLAG_Q38_BASALEK_TUNNELS_START, CompleteArea_Basalek_Town_20
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_16:
	setflag FLAG_BASALEK_ITEM1
	additem ITEM_BURN_HEAL
	goto CompleteArea_Basalek_Town_15

CompleteArea_Basalek_Town_18:
	additem ITEM_FRESH_WATER
	setflag FLAG_BASALEK_WOMAN_LEMONADE
	goto CompleteArea_Basalek_Town_10

CompleteArea_Basalek_Town_20:
	completequest FLAG_Q38_BASALEK_TUNNELS_COMPLETE
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_23:
	setflag FLAG_BASALEK_TUNNEL_ITEM3
	additem ITEM_HYPER_POTION
	goto CompleteArea_Basalek_Town_22

CompleteArea_Basalek_Town_26:
	setflag FLAG_BASALEK_TUNNEL_ITEM2
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Basalek_Town_25

CompleteArea_Basalek_Town_29:
	setflag FLAG_BASALEK_TUNNEL_ITEM1
	additem ITEM_STEELIXITE
	goto CompleteArea_Basalek_Town_28

CompleteArea_Basalek_Town_32:
	setflag FLAG_BASALEK_TUNNEL_ITEM4
	additem ITEM_TM_INCINERATE
	goto CompleteArea_Basalek_Town_31

CompleteArea_Basalek_Town_34:
	setflag FLAG_BASALEK_TUNNEL_ITEM5
	additem ITEM_NUGGET
	goto CompleteArea_Basalek_Town_1


CompleteArea_Route_17::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_17_2
CompleteArea_Route_17_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_17_5
CompleteArea_Route_17_4:
	return

CompleteArea_Route_17_2:
	goto_if_unset FLAG_ROUTE17_ITEM1, CompleteArea_Route_17_8
CompleteArea_Route_17_7:
	goto_if_unset FLAG_ROUTE17_ITEM2, CompleteArea_Route_17_11
CompleteArea_Route_17_10:
	goto_if_unset FLAG_ROUTE17_ITEM3, CompleteArea_Route_17_14
CompleteArea_Route_17_13:
	goto_if_unset FLAG_ROUTE17_ITEM4, CompleteArea_Route_17_16
	goto CompleteArea_Route_17_1

CompleteArea_Route_17_5:
	defeattrainer TRAINER_R17_TR1_CAMPER_M
	defeattrainer TRAINER_R17_TR2_PICNICKER1
	defeattrainer TRAINER_R17_TR3_PICNICKER2
	defeattrainer TRAINER_R17_TR4_MANIAC
	defeattrainer TRAINER_R17_TR5_SCIENTIST
	defeattrainer TRAINER_R17_TR6_HIKER1
	defeattrainer TRAINER_R17_TR7_HIKER2
	defeattrainer TRAINER_R17_TR8_COOLTRAINER
	goto CompleteArea_Route_17_4

CompleteArea_Route_17_8:
	setflag FLAG_ROUTE17_ITEM1
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_17_7

CompleteArea_Route_17_11:
	setflag FLAG_ROUTE17_ITEM2
	additem ITEM_NUGGET
	goto CompleteArea_Route_17_10

CompleteArea_Route_17_14:
	setflag FLAG_ROUTE17_ITEM3
	additem ITEM_TM_TOXIC
	goto CompleteArea_Route_17_13

CompleteArea_Route_17_16:
	setflag FLAG_ROUTE17_ITEM4
	additem ITEM_HEAVY_BALL
	goto CompleteArea_Route_17_1


CompleteArea_Route_18::
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_18_2
CompleteArea_Route_18_1:
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_18_5
CompleteArea_Route_18_4:
	return

CompleteArea_Route_18_2:
	goto_if_unset FLAG_ROUTE18_ITEM1, CompleteArea_Route_18_8
CompleteArea_Route_18_7:
	goto_if_unset FLAG_ROUTE18_ITEM3, CompleteArea_Route_18_13
CompleteArea_Route_18_12:
	goto_if_unset FLAG_ROUTE18_ITEM2, CompleteArea_Route_18_16
CompleteArea_Route_18_15:
	goto_if_unset FLAG_ROUTE18_ITEM4, CompleteArea_Route_18_19
CompleteArea_Route_18_18:
	pickberrytree BERRY_TREE_ROUTE_110_YACHE_1
	call TryLootingStrangeSeed
	pickberrytree BERRY_TREE_ROUTE_110_YACHE_2
	call TryLootingStrangeSeed
	goto CompleteArea_Route_18_1

CompleteArea_Route_18_5:
	defeattrainer TRAINER_R18_TR1_HIKER1
	defeattrainer TRAINER_R18_TR2_RANGER_M
	defeattrainer TRAINER_R18_TR3_KINDLER
	defeattrainer TRAINER_R18_TR4_HIKER2
	defeattrainer TRAINER_R18_TR5_RANGER_F
	defeattrainer TRAINER_R18_TR6_SCIENTIST
	defeattrainer TRAINER_R18_TR7_POKEMANIAC
	defeattrainer TRAINER_R18_TR8_BREEDER_M
	checktrainerflag TRAINER_R18_TR9_ACE_TRAINER_M
	goto_if 0, CompleteArea_Route_18_10
	goto CompleteArea_Route_18_4

CompleteArea_Route_18_8:
	setflag FLAG_ROUTE18_ITEM1
	additem ITEM_ICY_ROCK
	goto CompleteArea_Route_18_7

CompleteArea_Route_18_10:
	defeattrainer TRAINER_R18_TR9_ACE_TRAINER_M
	additem ITEM_LOADED_DICE
	setflag FLAG_OBTAINED_LOADED_DICE
	goto CompleteArea_Route_18_4

CompleteArea_Route_18_13:
	setflag FLAG_ROUTE18_ITEM3
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_18_12

CompleteArea_Route_18_16:
	setflag FLAG_ROUTE18_ITEM2
	additem ITEM_ICE_HEAL
	goto CompleteArea_Route_18_15

CompleteArea_Route_18_19:
	setflag FLAG_ROUTE18_ITEM4
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_18_18


CompleteArea_Frosthearth_City::
	goto_if_set FLAG_TEMP_3, CompleteArea_Frosthearth_City_2
CompleteArea_Frosthearth_City_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Frosthearth_City_5
CompleteArea_Frosthearth_City_4:
	return

CompleteArea_Frosthearth_City_2:
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM1, CompleteArea_Frosthearth_City_8
CompleteArea_Frosthearth_City_7:
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM2, CompleteArea_Frosthearth_City_14
CompleteArea_Frosthearth_City_13:
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM3, CompleteArea_Frosthearth_City_23
CompleteArea_Frosthearth_City_22:
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM4, CompleteArea_Frosthearth_City_31
CompleteArea_Frosthearth_City_30:
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM5, CompleteArea_Frosthearth_City_38
CompleteArea_Frosthearth_City_37:
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM6, CompleteArea_Frosthearth_City_41
CompleteArea_Frosthearth_City_40:
	goto_if_unset FLAG_FROSTFIRE_ITEM3, CompleteArea_Frosthearth_City_44
CompleteArea_Frosthearth_City_43:
	goto_if_unset FLAG_FROSTFIRE_ITEM2, CompleteArea_Frosthearth_City_47
CompleteArea_Frosthearth_City_46:
	goto_if_unset FLAG_FROSTFIRE_ITEM1, CompleteArea_Frosthearth_City_49
	goto CompleteArea_Frosthearth_City_1

CompleteArea_Frosthearth_City_5:
	goto_if_unset FLAG_FRIGIDCAVE_VERDANT_SPHERE, CompleteArea_Frosthearth_City_11
CompleteArea_Frosthearth_City_10:
	goto_if_unset FLAG_CHOCOLATE_FROM_OLD_MAN, CompleteArea_Frosthearth_City_17
CompleteArea_Frosthearth_City_16:
	compare VAR_FROSTHEARTH_RUFFLET, 10
	goto_if_lt CompleteArea_Frosthearth_City_26
CompleteArea_Frosthearth_City_25:
	compare VAR_FROSTHEARTH_HARD_ROCK, 3
	goto_if_lt CompleteArea_Frosthearth_City_33
	goto CompleteArea_Frosthearth_City_4

CompleteArea_Frosthearth_City_8:
	setflag FLAG_FRIGIDFRONTIER_ITEM1
	additem ITEM_TM_HAIL
	goto CompleteArea_Frosthearth_City_7

CompleteArea_Frosthearth_City_11:
	setflag FLAG_FRIGIDCAVE_VERDANT_SPHERE
	additem ITEM_VERDANT_SPHERE
	setflag FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE
	clearflag FLAG_FRIGIDCAVE_DOOR_OPEN
	goto_if_set FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_START, CompleteArea_Frosthearth_City_20
CompleteArea_Frosthearth_City_19:
	checkitem ITEM_STEEL_SPHERE
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Frosthearth_City_28
	goto CompleteArea_Frosthearth_City_10

CompleteArea_Frosthearth_City_14:
	setflag FLAG_FRIGIDFRONTIER_ITEM2
	additem ITEM_YACHE_BERRY
	goto CompleteArea_Frosthearth_City_13

CompleteArea_Frosthearth_City_17:
	additem ITEM_RAGE_CANDY_BAR
	setflag FLAG_CHOCOLATE_FROM_OLD_MAN
	goto CompleteArea_Frosthearth_City_16

CompleteArea_Frosthearth_City_20:
	completequest FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_COMPLETE
	goto CompleteArea_Frosthearth_City_19

CompleteArea_Frosthearth_City_23:
	setflag FLAG_FRIGIDFRONTIER_ITEM3
	additem ITEM_COMET_SHARD
	goto CompleteArea_Frosthearth_City_22

CompleteArea_Frosthearth_City_26:
	additem ITEM_HEART_SCALE
	setvar VAR_FROSTHEARTH_RUFFLET, 10
	goto_if_set FLAG_Q40_FROSTHEARTH_RUFFLET_START, CompleteArea_Frosthearth_City_35
	goto CompleteArea_Frosthearth_City_25

CompleteArea_Frosthearth_City_28:
	additem ITEM_STEEL_SPHERE
	goto CompleteArea_Frosthearth_City_10

CompleteArea_Frosthearth_City_31:
	setflag FLAG_FRIGIDFRONTIER_ITEM4
	additem ITEM_MAX_ELIXIR
	goto CompleteArea_Frosthearth_City_30

CompleteArea_Frosthearth_City_33:
	setvar VAR_FROSTHEARTH_HARD_ROCK, 3
	additem ITEM_HARD_STONE
	goto CompleteArea_Frosthearth_City_4

CompleteArea_Frosthearth_City_35:
	completequest FLAG_Q40_FROSTHEARTH_RUFFLET_COMPLETE
	goto CompleteArea_Frosthearth_City_25

CompleteArea_Frosthearth_City_38:
	setflag FLAG_FRIGIDFRONTIER_ITEM5
	additem ITEM_RARE_CANDY
	goto CompleteArea_Frosthearth_City_37

CompleteArea_Frosthearth_City_41:
	setflag FLAG_FRIGIDFRONTIER_ITEM6
	additem ITEM_MAX_POTION
	goto CompleteArea_Frosthearth_City_40

CompleteArea_Frosthearth_City_44:
	setflag FLAG_FROSTFIRE_ITEM3
	additem ITEM_X_SPEED
	goto CompleteArea_Frosthearth_City_43

CompleteArea_Frosthearth_City_47:
	setflag FLAG_FROSTFIRE_ITEM2
	additem ITEM_BURN_HEAL
	goto CompleteArea_Frosthearth_City_46

CompleteArea_Frosthearth_City_49:
	setflag FLAG_FROSTFIRE_ITEM1
	additem ITEM_SNOWBALL
	goto CompleteArea_Frosthearth_City_1


CompleteArea_Rock_Climb::
	goto_if_set FLAG_TEMP_3, CompleteArea_Rock_Climb_2
CompleteArea_Rock_Climb_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Rock_Climb_5
CompleteArea_Rock_Climb_4:
	return

CompleteArea_Rock_Climb_2:
	goto_if_unset FLAG_KAOLISLE_ITEM10, CompleteArea_Rock_Climb_8
CompleteArea_Rock_Climb_7:
	goto_if_unset FLAG_ROUTE12_SIDEITEM, CompleteArea_Rock_Climb_13
CompleteArea_Rock_Climb_12:
	goto_if_unset FLAG_ROUTE23_ITEM5, CompleteArea_Rock_Climb_16
CompleteArea_Rock_Climb_15:
	goto_if_unset FLAG_AMBEROCK_ITEM2, CompleteArea_Rock_Climb_19
CompleteArea_Rock_Climb_18:
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM1, CompleteArea_Rock_Climb_22
CompleteArea_Rock_Climb_21:
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM2, CompleteArea_Rock_Climb_25
CompleteArea_Rock_Climb_24:
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM3, CompleteArea_Rock_Climb_28
CompleteArea_Rock_Climb_27:
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM4, CompleteArea_Rock_Climb_31
CompleteArea_Rock_Climb_30:
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM5, CompleteArea_Rock_Climb_34
CompleteArea_Rock_Climb_33:
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM6, CompleteArea_Rock_Climb_37
CompleteArea_Rock_Climb_36:
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM7, CompleteArea_Rock_Climb_39
	goto CompleteArea_Rock_Climb_1

CompleteArea_Rock_Climb_5:
	compare VAR_HOUNDOOMS_DEFEATED, 4
	goto_if_lt CompleteArea_Rock_Climb_10
	goto CompleteArea_Rock_Climb_4

CompleteArea_Rock_Climb_8:
	setflag FLAG_KAOLISLE_ITEM10
	additem ITEM_SMOOTH_ROCK
	goto CompleteArea_Rock_Climb_7

CompleteArea_Rock_Climb_10:
	setvar VAR_HOUNDOOMS_DEFEATED, 4
	setflag FLAG_ITEM_HOUNDOOMINITE
	additem ITEM_HOUNDOOMINITE
	goto CompleteArea_Rock_Climb_4

CompleteArea_Rock_Climb_13:
	setflag FLAG_ROUTE12_SIDEITEM
	additem ITEM_TM_IRON_TAIL
	goto CompleteArea_Rock_Climb_12

CompleteArea_Rock_Climb_16:
	setflag FLAG_ROUTE23_ITEM5
	additem ITEM_PP_MAX
	goto CompleteArea_Rock_Climb_15

CompleteArea_Rock_Climb_19:
	setflag FLAG_AMBEROCK_ITEM2
	additem ITEM_MAX_ELIXIR
	goto CompleteArea_Rock_Climb_18

CompleteArea_Rock_Climb_22:
	setflag FLAG_SUNKEN_CAVERN_ITEM1
	additem ITEM_MAX_REPEL
	goto CompleteArea_Rock_Climb_21

CompleteArea_Rock_Climb_25:
	setflag FLAG_SUNKEN_CAVERN_ITEM2
	additem ITEM_CARBOS
	goto CompleteArea_Rock_Climb_24

CompleteArea_Rock_Climb_28:
	setflag FLAG_SUNKEN_CAVERN_ITEM3
	additem ITEM_STAR_PIECE
	goto CompleteArea_Rock_Climb_27

CompleteArea_Rock_Climb_31:
	setflag FLAG_SUNKEN_CAVERN_ITEM4
	additem ITEM_MAX_POTION
	goto CompleteArea_Rock_Climb_30

CompleteArea_Rock_Climb_34:
	setflag FLAG_SUNKEN_CAVERN_ITEM5
	additem ITEM_NUGGET
	goto CompleteArea_Rock_Climb_33

CompleteArea_Rock_Climb_37:
	setflag FLAG_SUNKEN_CAVERN_ITEM6
	additem ITEM_TM_DARK_PULSE
	goto CompleteArea_Rock_Climb_36

CompleteArea_Rock_Climb_39:
	setflag FLAG_SUNKEN_CAVERN_ITEM7
	additem ITEM_SOUL_DEW
	goto CompleteArea_Rock_Climb_1


CompleteArea_Desert_Ruins::
	goto_if_set FLAG_TEMP_3, CompleteArea_Desert_Ruins_2
CompleteArea_Desert_Ruins_1:
	return

CompleteArea_Desert_Ruins_2:
	checkitem ITEM_HM_STRENGTH
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_5
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_4:
	goto_if_unset FLAG_RUINS_4F_ITEM1, CompleteArea_Desert_Ruins_9
CompleteArea_Desert_Ruins_8:
	goto_if_unset FLAG_RUINS_4F_ITEM2, CompleteArea_Desert_Ruins_12
CompleteArea_Desert_Ruins_11:
	goto_if_unset FLAG_RUINS_4F_ITEM3, CompleteArea_Desert_Ruins_15
CompleteArea_Desert_Ruins_14:
	goto_if_unset FLAG_RUINS_4F_ITEM4, CompleteArea_Desert_Ruins_18
CompleteArea_Desert_Ruins_17:
	goto_if_unset FLAG_RUINS_4F_ITEM5, CompleteArea_Desert_Ruins_21
CompleteArea_Desert_Ruins_20:
	call DebugFossil
	checkitem ITEM_HM_SURF
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_24
CompleteArea_Desert_Ruins_23:
	checkitem ITEM_HM_ROCK_CLIMB
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_26
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_5:
	checkitem ITEM_HM_ROCK_SMASH
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_4
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_9:
	setflag FLAG_RUINS_4F_ITEM1
	additem ITEM_RELIC_GOLD
	goto CompleteArea_Desert_Ruins_8

CompleteArea_Desert_Ruins_12:
	setflag FLAG_RUINS_4F_ITEM2
	additem ITEM_RELIC_VASE
	goto CompleteArea_Desert_Ruins_11

CompleteArea_Desert_Ruins_15:
	setflag FLAG_RUINS_4F_ITEM3
	additem ITEM_RELIC_VASE
	goto CompleteArea_Desert_Ruins_14

CompleteArea_Desert_Ruins_18:
	setflag FLAG_RUINS_4F_ITEM4
	additem ITEM_SUN_STONE
	goto CompleteArea_Desert_Ruins_17

CompleteArea_Desert_Ruins_21:
	setflag FLAG_RUINS_4F_ITEM5
	additem ITEM_RELIC_GOLD
	goto CompleteArea_Desert_Ruins_20

CompleteArea_Desert_Ruins_24:
	goto_if_unset FLAG_UNDERGROUNDRUINS_FULLRESTORE, CompleteArea_Desert_Ruins_28
	goto CompleteArea_Desert_Ruins_23

CompleteArea_Desert_Ruins_26:
	goto_if_unset FLAG_RELIC_CROWN, CompleteArea_Desert_Ruins_30
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_28:
	setflag FLAG_UNDERGROUNDRUINS_FULLRESTORE
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Desert_Ruins_23

CompleteArea_Desert_Ruins_30:
	setflag FLAG_RELIC_CROWN
	additem ITEM_RELIC_CROWN
	goto CompleteArea_Desert_Ruins_1


CompleteArea_Safari_Zone::
	goto_if_set FLAG_TEMP_3, CompleteArea_Safari_Zone_2
CompleteArea_Safari_Zone_1:
	return

CompleteArea_Safari_Zone_2:
	goto_if_unset FLAG_ITEM_SAFARI_SOUTH_RARE_CANDY, CompleteArea_Safari_Zone_5
CompleteArea_Safari_Zone_4:
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE, CompleteArea_Safari_Zone_8
CompleteArea_Safari_Zone_7:
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP, CompleteArea_Safari_Zone_11
CompleteArea_Safari_Zone_10:
	checkitem ITEM_HM_STRENGTH
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_14
CompleteArea_Safari_Zone_13:
	checkitem ITEM_HM_ROCK_SMASH
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_17
CompleteArea_Safari_Zone_16:
	checkitem ITEM_HM_SURF
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_23
CompleteArea_Safari_Zone_22:
	checkitem ITEM_HM_WATERFALL
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_31
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_5:
	setflag FLAG_ITEM_SAFARI_SOUTH_RARE_CANDY
	additem ITEM_RARE_CANDY
	goto CompleteArea_Safari_Zone_4

CompleteArea_Safari_Zone_8:
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Safari_Zone_7

CompleteArea_Safari_Zone_11:
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP
	additem ITEM_PP_UP
	goto CompleteArea_Safari_Zone_10

CompleteArea_Safari_Zone_14:
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL, CompleteArea_Safari_Zone_20
CompleteArea_Safari_Zone_19:
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE, CompleteArea_Safari_Zone_29
CompleteArea_Safari_Zone_28:
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY, CompleteArea_Safari_Zone_40
CompleteArea_Safari_Zone_39:
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC, CompleteArea_Safari_Zone_52
CompleteArea_Safari_Zone_51:
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET, CompleteArea_Safari_Zone_61
	goto CompleteArea_Safari_Zone_13

CompleteArea_Safari_Zone_17:
	goto_if_unset FLAG_SAFARI_NW_ITEM1, CompleteArea_Safari_Zone_26
CompleteArea_Safari_Zone_25:
	goto_if_unset FLAG_SAFARI_NW_ITEM2, CompleteArea_Safari_Zone_37
CompleteArea_Safari_Zone_36:
	goto_if_unset FLAG_SAFARI_NW_ITEM3, CompleteArea_Safari_Zone_49
CompleteArea_Safari_Zone_48:
	goto_if_unset FLAG_SAFARI_NW_ITEM4, CompleteArea_Safari_Zone_59
	goto CompleteArea_Safari_Zone_16

CompleteArea_Safari_Zone_20:
	setflag FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL
	additem ITEM_BIG_PEARL
	goto CompleteArea_Safari_Zone_19

CompleteArea_Safari_Zone_23:
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM7, CompleteArea_Safari_Zone_34
CompleteArea_Safari_Zone_33:
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM6, CompleteArea_Safari_Zone_46
CompleteArea_Safari_Zone_45:
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM5, CompleteArea_Safari_Zone_57
CompleteArea_Safari_Zone_56:
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM4, CompleteArea_Safari_Zone_64
CompleteArea_Safari_Zone_63:
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM3, CompleteArea_Safari_Zone_66
	goto CompleteArea_Safari_Zone_22

CompleteArea_Safari_Zone_26:
	setflag FLAG_SAFARI_NW_ITEM1
	additem ITEM_HYPER_POTION
	goto CompleteArea_Safari_Zone_25

CompleteArea_Safari_Zone_29:
	setflag FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Safari_Zone_28

CompleteArea_Safari_Zone_31:
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM2, CompleteArea_Safari_Zone_43
CompleteArea_Safari_Zone_42:
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM1, CompleteArea_Safari_Zone_54
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_34:
	setflag FLAG_SAFARIMOUNTAIN_ITEM7
	additem ITEM_PEARL
	goto CompleteArea_Safari_Zone_33

CompleteArea_Safari_Zone_37:
	setflag FLAG_SAFARI_NW_ITEM2
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Safari_Zone_36

CompleteArea_Safari_Zone_40:
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY
	additem ITEM_RARE_CANDY
	goto CompleteArea_Safari_Zone_39

CompleteArea_Safari_Zone_43:
	setflag FLAG_SAFARIMOUNTAIN_ITEM2
	additem ITEM_KINGS_ROCK
	goto CompleteArea_Safari_Zone_42

CompleteArea_Safari_Zone_46:
	setflag FLAG_SAFARIMOUNTAIN_ITEM6
	additem ITEM_TROPICAL_STONE
	goto CompleteArea_Safari_Zone_45

CompleteArea_Safari_Zone_49:
	setflag FLAG_SAFARI_NW_ITEM3
	additem ITEM_GREAT_BALL
	goto CompleteArea_Safari_Zone_48

CompleteArea_Safari_Zone_52:
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC
	additem ITEM_ZINC
	goto CompleteArea_Safari_Zone_51

CompleteArea_Safari_Zone_54:
	setflag FLAG_SAFARIMOUNTAIN_ITEM1
	additem ITEM_TM_GIGA_IMPACT
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_57:
	setflag FLAG_SAFARIMOUNTAIN_ITEM5
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Safari_Zone_56

CompleteArea_Safari_Zone_59:
	setflag FLAG_SAFARI_NW_ITEM4
	additem ITEM_ETHER
	goto CompleteArea_Safari_Zone_16

CompleteArea_Safari_Zone_61:
	setflag FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET
	additem ITEM_NUGGET
	goto CompleteArea_Safari_Zone_13

CompleteArea_Safari_Zone_64:
	setflag FLAG_SAFARIMOUNTAIN_ITEM4
	additem ITEM_SOFT_SAND
	goto CompleteArea_Safari_Zone_63

CompleteArea_Safari_Zone_66:
	setflag FLAG_SAFARIMOUNTAIN_ITEM3
	additem ITEM_IRON
	goto CompleteArea_Safari_Zone_22


CompleteArea_Misc_Surfing::
	goto_if_set FLAG_TEMP_3, CompleteArea_Misc_Surfing_2
CompleteArea_Misc_Surfing_1:
	goto_if_set FLAG_TEMP_5, CompleteArea_Misc_Surfing_5
CompleteArea_Misc_Surfing_4:
	return

CompleteArea_Misc_Surfing_2:
	goto_if_unset FLAG_ITEM_ROUTE1_TM03, CompleteArea_Misc_Surfing_8
CompleteArea_Misc_Surfing_7:
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_HARDSTONE, CompleteArea_Misc_Surfing_13
CompleteArea_Misc_Surfing_12:
	goto_if_unset FLAG_WW_WATERSTONE, CompleteArea_Misc_Surfing_18
CompleteArea_Misc_Surfing_17:
	goto_if_unset FLAG_OBTAINED_PIDGEOTITE, CompleteArea_Misc_Surfing_21
CompleteArea_Misc_Surfing_20:
	goto_if_unset FLAG_ROUTE3_ITEM1, CompleteArea_Misc_Surfing_24
CompleteArea_Misc_Surfing_23:
	goto_if_unset FLAG_ROUTE5_ITEM4, CompleteArea_Misc_Surfing_27
CompleteArea_Misc_Surfing_26:
	goto_if_unset FLAG_ROUTE7_WHITE_HERB, CompleteArea_Misc_Surfing_30
CompleteArea_Misc_Surfing_29:
	goto_if_unset FLAG_ROUTE8_ITEM4, CompleteArea_Misc_Surfing_33
CompleteArea_Misc_Surfing_32:
	goto_if_unset FLAG_SHORESLATE_ITEM2, CompleteArea_Misc_Surfing_36
CompleteArea_Misc_Surfing_35:
	goto_if_unset FLAG_ROUTE7_ITEM6, CompleteArea_Misc_Surfing_39
CompleteArea_Misc_Surfing_38:
	goto_if_unset FLAG_MARIGORGE_ITEM3, CompleteArea_Misc_Surfing_42
CompleteArea_Misc_Surfing_41:
	goto_if_unset FLAG_MARIGORGE_ITEM1, CompleteArea_Misc_Surfing_45
CompleteArea_Misc_Surfing_44:
	goto_if_unset FLAG_OBTAINED_AGGRONITE, CompleteArea_Misc_Surfing_48
CompleteArea_Misc_Surfing_47:
	goto_if_unset FLAG_ROCKLIFFE_ITEM3, CompleteArea_Misc_Surfing_51
CompleteArea_Misc_Surfing_50:
	goto_if_unset FLAG_FLOODEDCAVE_FOSSIL, CompleteArea_Misc_Surfing_54
CompleteArea_Misc_Surfing_53:
	goto_if_unset FLAG_R14_ITEM5, CompleteArea_Misc_Surfing_57
CompleteArea_Misc_Surfing_56:
	goto_if_unset FLAG_R14_ITEM6, CompleteArea_Misc_Surfing_59
	goto CompleteArea_Misc_Surfing_1

CompleteArea_Misc_Surfing_5:
	compare VAR_KAOLISLE_BIRDS, 131
	goto_if_lt CompleteArea_Misc_Surfing_10
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_8:
	setflag FLAG_ITEM_ROUTE1_TM03
	additem ITEM_TM_SMART_STRIKE
	goto CompleteArea_Misc_Surfing_7

CompleteArea_Misc_Surfing_10:
	setvar VAR_KAOLISLE_BIRDS, 131
	additem ITEM_TM_BULLET_SEED
	goto_if_set FLAG_Q28_KAOLISLE_LOSTBIRDS_START, CompleteArea_Misc_Surfing_15
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_13:
	setflag FLAG_HIDDEN_ITEM_ROUTE2_HARDSTONE
	additem ITEM_HARD_STONE
	goto CompleteArea_Misc_Surfing_12

CompleteArea_Misc_Surfing_15:
	completequest FLAG_Q28_KAOLISLE_LOSTBIRDS_COMPLETE
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_18:
	setflag FLAG_WW_WATERSTONE
	additem ITEM_WATER_STONE
	goto CompleteArea_Misc_Surfing_17

CompleteArea_Misc_Surfing_21:
	setflag FLAG_OBTAINED_PIDGEOTITE
	additem ITEM_PIDGEOTITE
	goto CompleteArea_Misc_Surfing_20

CompleteArea_Misc_Surfing_24:
	setflag FLAG_ROUTE3_ITEM1
	additem ITEM_PP_UP
	goto CompleteArea_Misc_Surfing_23

CompleteArea_Misc_Surfing_27:
	setflag FLAG_ROUTE5_ITEM4
	additem ITEM_NUGGET
	goto CompleteArea_Misc_Surfing_26

CompleteArea_Misc_Surfing_30:
	setflag FLAG_ROUTE7_WHITE_HERB
	additem ITEM_WHITE_HERB
	goto CompleteArea_Misc_Surfing_29

CompleteArea_Misc_Surfing_33:
	setflag FLAG_ROUTE8_ITEM4
	additem ITEM_HP_UP
	goto CompleteArea_Misc_Surfing_32

CompleteArea_Misc_Surfing_36:
	setflag FLAG_SHORESLATE_ITEM2
	additem ITEM_ELIXIR
	goto CompleteArea_Misc_Surfing_35

CompleteArea_Misc_Surfing_39:
	setflag FLAG_ROUTE7_ITEM6
	additem ITEM_MAX_ETHER
	goto CompleteArea_Misc_Surfing_38

CompleteArea_Misc_Surfing_42:
	setflag FLAG_MARIGORGE_ITEM3
	additem ITEM_PP_UP
	goto CompleteArea_Misc_Surfing_41

CompleteArea_Misc_Surfing_45:
	setflag FLAG_MARIGORGE_ITEM1
	additem ITEM_SUN_STONE
	goto CompleteArea_Misc_Surfing_44

CompleteArea_Misc_Surfing_48:
	setflag FLAG_OBTAINED_AGGRONITE
	additem ITEM_AGGRONITE
	goto CompleteArea_Misc_Surfing_47

CompleteArea_Misc_Surfing_51:
	setflag FLAG_ROCKLIFFE_ITEM3
	additem ITEM_RARE_CANDY
	goto CompleteArea_Misc_Surfing_50

CompleteArea_Misc_Surfing_54:
	setflag FLAG_FLOODEDCAVE_FOSSIL
	call DebugFossil
	goto CompleteArea_Misc_Surfing_53

CompleteArea_Misc_Surfing_57:
	setflag FLAG_R14_ITEM5
	additem ITEM_TM_HIDDEN_POWER
	goto CompleteArea_Misc_Surfing_56

CompleteArea_Misc_Surfing_59:
	setflag FLAG_R14_ITEM6
	additem ITEM_MAX_ETHER
	goto CompleteArea_Misc_Surfing_1


TryLootingStrangeSeed::
	compare VAR_RESULT, FALSE
	goto_if_eq TryLootingStrangeSeed_2
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge TryLootingStrangeSeed_5
TryLootingStrangeSeed_4:
	return

TryLootingStrangeSeed_2:
	return

TryLootingStrangeSeed_5:
	additem ITEM_STRANGE_SEED
	goto TryLootingStrangeSeed_4


TryCuttingStrangeSeedTree::
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge TryCuttingStrangeSeedTree_1
	return

TryCuttingStrangeSeedTree_1:
	additem ITEM_STRANGE_SEED
	return


GenerateRelic::
	random 100
	compare VAR_RESULT, 65
	goto_if_le GenerateRelic_2
	compare VAR_RESULT, 94
	goto_if_ge GenerateRelic_3
	additem ITEM_RELIC_SILVER
GenerateRelic_1:
	return

GenerateRelic_2:
	additem ITEM_RELIC_COPPER
	goto GenerateRelic_1

GenerateRelic_3:
	additem ITEM_RELIC_GOLD
	goto GenerateRelic_1


DebugFossil::
	random 11
	switch VAR_RESULT
	case 0, DebugFossil_3
	case 1, DebugFossil_4
	case 2, DebugFossil_5
	case 3, DebugFossil_6
	case 4, DebugFossil_7
	case 5, DebugFossil_8
	case 6, DebugFossil_9
	case 7, DebugFossil_10
	case 8, DebugFossil_11
	case 9, DebugFossil_12
	case 10, DebugFossil_13
DebugFossil_1:
	return

DebugFossil_3:
	goto LootHelix2
	goto DebugFossil_1

DebugFossil_4:
	goto LootDome2
	goto DebugFossil_1

DebugFossil_5:
	goto LootOldAmber2
	goto DebugFossil_1

DebugFossil_6:
	goto LootRoot2
	goto DebugFossil_1

DebugFossil_7:
	goto LootClaw2
	goto DebugFossil_1

DebugFossil_8:
	goto LootSkull2
	goto DebugFossil_1

DebugFossil_9:
	goto LootArmor2
	goto DebugFossil_1

DebugFossil_10:
	goto LootCover2
	goto DebugFossil_1

DebugFossil_11:
	goto LootPlume2
	goto DebugFossil_1

DebugFossil_12:
	goto LootJaw2
	goto DebugFossil_1

DebugFossil_13:
	goto LootSail2
	goto DebugFossil_1


LootHelix2::
	goto_if_set FLAG_OBTAINED_HELIX_FOSSIL, LootHelix2_2
LootHelix2_1:
	additem ITEM_HELIX_FOSSIL
	setflag FLAG_OBTAINED_HELIX_FOSSIL
	return

LootHelix2_2:
	goto DebugFossil
	goto LootHelix2_1


LootDome2::
	goto_if_set FLAG_OBTAINED_DOME_FOSSIL, LootDome2_2
LootDome2_1:
	additem ITEM_DOME_FOSSIL
	setflag FLAG_OBTAINED_DOME_FOSSIL
	return

LootDome2_2:
	goto DebugFossil
	goto LootDome2_1


LootOldAmber2::
	goto_if_set FLAG_OBTAINED_OLDAMBER_FOSSIL, LootOldAmber2_2
LootOldAmber2_1:
	additem ITEM_OLD_AMBER
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
	return

LootOldAmber2_2:
	goto DebugFossil
	goto LootOldAmber2_1


LootRoot2::
	goto_if_set FLAG_OBTAINED_ROOT_FOSSIL, LootRoot2_2
LootRoot2_1:
	additem ITEM_ROOT_FOSSIL
	setflag FLAG_OBTAINED_ROOT_FOSSIL
	return

LootRoot2_2:
	goto DebugFossil
	goto LootRoot2_1


LootClaw2::
	goto_if_set FLAG_OBTAINED_CLAW_FOSSIL, LootClaw2_2
LootClaw2_1:
	additem ITEM_CLAW_FOSSIL
	setflag FLAG_OBTAINED_CLAW_FOSSIL
	return

LootClaw2_2:
	goto DebugFossil
	goto LootClaw2_1


LootSkull2::
	goto_if_set FLAG_OBTAINED_SKULL_FOSSIL, LootSkull2_2
LootSkull2_1:
	additem ITEM_SKULL_FOSSIL
	setflag FLAG_OBTAINED_SKULL_FOSSIL
	return

LootSkull2_2:
	goto DebugFossil
	goto LootSkull2_1


LootArmor2::
	goto_if_set FLAG_OBTAINED_ARMOR_FOSSIL, LootArmor2_2
LootArmor2_1:
	additem ITEM_ARMOR_FOSSIL
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
	return

LootArmor2_2:
	goto DebugFossil
	goto LootArmor2_1


LootCover2::
	goto_if_set FLAG_OBTAINED_COVER_FOSSIL, LootCover2_2
LootCover2_1:
	additem ITEM_COVER_FOSSIL
	setflag FLAG_OBTAINED_COVER_FOSSIL
	return

LootCover2_2:
	goto DebugFossil
	goto LootCover2_1


LootPlume2::
	goto_if_set FLAG_OBTAINED_PLUME_FOSSIL, LootPlume2_2
LootPlume2_1:
	additem ITEM_PLUME_FOSSIL
	setflag FLAG_OBTAINED_PLUME_FOSSIL
	return

LootPlume2_2:
	goto DebugFossil
	goto LootPlume2_1


LootJaw2::
	goto_if_set FLAG_OBTAINED_JAW_FOSSIL, LootJaw2_2
LootJaw2_1:
	additem ITEM_JAW_FOSSIL
	setflag FLAG_OBTAINED_JAW_FOSSIL
	return

LootJaw2_2:
	goto DebugFossil
	goto LootJaw2_1


LootSail2::
	goto_if_set FLAG_OBTAINED_SAIL_FOSSIL, LootSail2_2
LootSail2_1:
	additem ITEM_SAIL_FOSSIL
	setflag FLAG_OBTAINED_SAIL_FOSSIL
	return

LootSail2_2:
	goto DebugFossil
	goto LootSail2_1


UpdateGuy_Text_0:
	.string "Update Game$"

UpdateGuy_Text_1:
	.string "Set Team Level$"

UpdateGuy_Text_2:
	.string "Skip Content$"

UpdateGuy_Text_3:
	.string "Enter Code$"

UpdateGuy_Text_4:
	.string "Obtain Mega Mon$"

UpdateGuy_Text_5:
	.string "Nevermind$"

UpdateGuy_Text_6:
	.string "Goodbye.$"

TestMegaMon_Text_0:
	.string "Decidueye$"

TestMegaMon_Text_1:
	.string "Empoleon$"

TestMegaMon_Text_2:
	.string "Chesnaught$"

TestMegaMon_Text_3:
	.string "Incineroar$"

TestMegaMon_Text_4:
	.string "Porygon-Z$"

TestMegaMon_Text_5:
	.string "Ariados$"

TestMegaMon_Text_6:
	.string "Goodbye$"

SkipContent_Text_0:
	.string "Route 1$"

SkipContent_Text_1:
	.string "Route 2$"

SkipContent_Text_2:
	.string "Windy Woods$"

SkipContent_Text_3:
	.string "Coralgrove City$"

SkipContent_Text_4:
	.string "Azuretide Town$"

SkipContent_Text_5:
	.string "Route 4$"

SkipContent_Text_6:
	.string "Pokémon Ranch$"

SkipContent_Text_7:
	.string "Aldeleaf City$"

SkipContent_Text_8:
	.string "Route 30$"

SkipContent_Text_9:
	.string "Windplume Valley$"

SkipContent_Text_10:
	.string "Route 5$"

SkipContent_Text_11:
	.string "Flower Fields$"

SkipContent_Text_12:
	.string "Skyloch Village$"

SkipContent_Text_13:
	.string "Route 6$"

SkipContent_Text_14:
	.string "Route 8$"

SkipContent_Text_15:
	.string "Shoreslate City$"

SkipContent_Text_16:
	.string "Scorched Desert$"

SkipContent_Text_17:
	.string "Route 7$"

SkipContent_Text_18:
	.string "Marigorge Town$"

SkipContent_Text_19:
	.string "Kaolisle City$"

SkipContent_Text_20:
	.string "Rockliffe Town$"

SkipContent_Text_21:
	.string "Route 11$"

SkipContent_Text_22:
	.string "Route 12$"

SkipContent_Text_23:
	.string "Sandstone City"
	.string "Route 13$"

SkipContent_Text_24:
	.string "Adamant Tower$"

SkipContent_Text_25:
	.string "Route 14$"

SkipContent_Text_26:
	.string "Route 15$"

SkipContent_Text_27:
	.string "Fishing Village$"

SkipContent_Text_28:
	.string "Route 23$"

SkipContent_Text_29:
	.string "Drisledge Town$"

SkipContent_Text_30:
	.string "Amberock Town$"

SkipContent_Text_31:
	.string "Route 3$"

SkipContent_Text_32:
	.string "Route 9$"

SkipContent_Text_33:
	.string "Route 10$"

SkipContent_Text_34:
	.string "Windplume Mountain$"

SkipContent_Text_35:
	.string "Route 16$"

SkipContent_Text_36:
	.string "Basalek Town$"

SkipContent_Text_37:
	.string "Route 17$"

SkipContent_Text_38:
	.string "Route 18$"

SkipContent_Text_39:
	.string "Frosthearth City$"

SkipContent_Text_40:
	.string "Rock Climb$"

SkipContent_Text_41:
	.string "Desert Ruins$"

SkipContent_Text_42:
	.string "Safari Zone$"

SkipContent_Text_43:
	.string "Misc. Surfing$"

SkipContent_Text_44:
	.string "Cancel$"

SkipContent_BufferChoices_Text_0:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}$"

SkipContent_BufferChoices_Text_1:
	.string "{STR_VAR_1}Items$"

SkipContent_BufferChoices_Text_2:
	.string "Items$"

SkipContent_BufferChoices_Text_3:
	.string "{STR_VAR_1}Trainers$"

SkipContent_BufferChoices_Text_4:
	.string "Trainers$"

SkipContent_BufferChoices_Text_5:
	.string "{STR_VAR_1}Events$"

SkipContent_BufferChoices_Text_6:
	.string "Events$"

SkipContent_BufferChoices_Text_7:
	.string "All$"

SkipContent_BufferChoices_Text_8:
	.string "Confirm$"

SkipContent_BufferChoices_Text_9:
	.string "Back$"

SkipContent_BufferChoices_Text_10:
	.string "Anything else?$"

SkipContent_BufferChoices_Text_11:
	.string "Please choose the content you\nwant to complete.$"

SkipContent_PokemonRanch_Text_0:
	.string "Pokemon Ranch$"

SkipContent_SandstoneCity_Text_0:
	.string "Sandstone City$"

SkipContent_Route13_Text_0:
	.string "Route 13$"

SkipStory_Text_0:
	.string "Was {RIVAL} defeated in\nCoralgrove Harbor?$"

MixupWithTMs::
	.string "There has been a mix-up with some\n"
	.string "TM rewards.\p"
	.string "Fixing the mix-up now.$"

NewUpdate::
	.string "A new update has been applied.$"

UpdateGuy_Text1::
	.string "Hello, I am a debug guy.\p"
	.string "I offer many services that can help\n"
	.string "you with testing this game.$"

UpdateGuy_Text2::
	.string "Before I can offer you my services,\n"
	.string "you must acquire a Pokédex.$"

WhatWouldYouLikeToDo::
	.string "What would you like to do?$"

GameIsUpToDate::
	.string "Your game is now up-to-date.\p"
	.string "If you need anything else,\n"
	.string "let me know.$"

GrottoUpdate::
	.string "Any Pokémon you have acquired from\n"
	.string "a grotto has been updated, and will\l"
	.string "now have its hidden ability.$"

UnstuckPlayer_Text::
	.string "This unstuck feature is meant to\n"
	.string "avoid softlocking in the overworld.\p"
	.string "Would you like to warp home?$"

Stor::
	.string "Story$"

Ite::
	.string "Items$"

Trai::
	.string "Trainers$"

Even::
	.string "Events$"

SkipContent_Text::
	.string "This feature allows you to skip\n"
	.string "certain content or mark certain\l"
	.string "things as completed.\p"
	.string "Any story content up to the selected\n"
	.string "area will be automatically completed.\p"
	.string "You can also choose to automatically\n"
	.string "complete other content, like looting\l"
	.string "items, defeating trainers, and\l"
	.string "completing other events in the area.\p"
	.string "Do note that skipping story content\n"
	.string "will also skip the story of all areas\l"
	.string "before it.\p"
	.string "Also, any event with a static\n"
	.string "encounter (legendaries, waking up\l"
	.string "Sudowoodo, etc.) will not be completed.$"

ChooseContentToSkip::
	.string "Choose the area you'd like to skip.$"

WantToSkipMultiple::
	.string "You've chosen to skip {STR_VAR_2}.\p"
	.string "All story content up to this area\n"
	.string "will be completed, as well as any\l"
	.string "additional content selected.\p"
	.string "Would you also like to complete any\n"
	.string "selected content from the previous\l"
	.string "areas as well?$"

ContentHasBeenSkipped::
	.string "Content has been skipped.\p"
	.string "It is recommended to check your bag\n"
	.string "for any new items.\p"
	.string "Note that this doesn't automatically\n"
	.string "catch any Pokémon for you.$"
