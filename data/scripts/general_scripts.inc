CheckForTentSpecialPrize::
	compare VAR_TENT_SPECIAL_PRIZE, 3
	goto_if_ne CheckForTentSpecialPrize_2
CheckForTentSpecialPrize_1:
	switch VAR_TENT_SPECIAL_PRIZE
	case 1, CheckForTentSpecialPrize_6
	case 2, CheckForTentSpecialPrize_7
	case 3, CheckForTentSpecialPrize_8
CheckForTentSpecialPrize_4:
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
	return

CheckForTentSpecialPrize_2:
	addvar VAR_TENT_SPECIAL_PRIZE, 1
	goto CheckForTentSpecialPrize_1

CheckForTentSpecialPrize_6:
	msgbox GainedASpecialTicket
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_7:
	msgbox NowHaveTwoTickets
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_8:
	msgbox TentGrandPrize
	giveitem ITEM_FRESH_START_MOCHI
	compare VAR_RESULT, FALSE
	goto_if_eq CheckForTentSpecialPrize_10
CheckForTentSpecialPrize_9:
	setvar VAR_TENT_SPECIAL_PRIZE, 0
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_10:
	goto SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
	goto CheckForTentSpecialPrize_9


TradeSeedsForFertilizer::
	lock
	faceplayer
	goto_if_set FLAG_MET_STRANGE_SEED_TRADER, TradeSeedsForFertilizer_2
TradeSeedsForFertilizer_1:
	msgbox SeenAnyStrangeSeeds
	checkitem ITEM_STRANGE_SEED
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_4
	return

TradeSeedsForFertilizer_2:
	checkitem ITEM_STRANGE_SEED
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_7
TradeSeedsForFertilizer_6:
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_1

TradeSeedsForFertilizer_4:
	playse SE_PIN
	safefollow
	applymovement 4, ExclamationMark
	waitmovement 0
	delay 48
	setflag FLAG_MET_STRANGE_SEED_TRADER
	msgbox CareToTradeSeeds, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_9
	goto TradeSeedsGoodbye
	return

TradeSeedsForFertilizer_7:
	msgbox HereToTradeMoreSeeds, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_12
	goto TradeSeedsForFertilizer_6

TradeSeedsForFertilizer_9:
	goto TradeSeedsMain
	return

TradeSeedsForFertilizer_12:
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_6


TradeSeedsMain::
	checkitemquant ITEM_STRANGE_SEED
	msgbox TradeHowManySeeds, MSGBOX_HOWMANY
	compare VAR_RESULT, 0
	goto_if_eq TradeSeedsMain_1
	copyvar VAR_TEMP_2, VAR_RESULT
	buffernumberstring STR_VAR_1, VAR_TEMP_2
TradeSeedsMain_5:
	compare VAR_RESULT, 0
	goto_if_ne TradeSeedsMain_6
	buffernumberstring STR_VAR_2, VAR_TEMP_1
	compare VAR_TEMP_2, 1
	goto_if_eq TradeSeedsMain_9
	msgbox TradeSeedsForFertilizer_Text_Multiple, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsMain_14
TradeSeedsMain_8:
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_1:
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_6:
	subvar VAR_RESULT, 1
	addvar VAR_TEMP_1, 2
	goto TradeSeedsMain_5

TradeSeedsMain_9:
	msgbox TradeSeedsForFertilizer_Text_Single, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsMain_12
	goto TradeSeedsMain_8

TradeSeedsMain_12:
	checkitemspace ITEM_FERTILIZER, VAR_TEMP_1
	compare VAR_RESULT, FALSE
	goto_if_eq TradeSeedsMain_17
TradeSeedsMain_16:
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_14:
	checkitemspace ITEM_FERTILIZER, VAR_TEMP_1
	compare VAR_RESULT, FALSE
	goto_if_eq TradeSeedsMain_20
TradeSeedsMain_19:
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_17:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	goto ZeBagIsFull
	goto TradeSeedsMain_16

TradeSeedsMain_20:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	goto ZeBagIsFull
	goto TradeSeedsMain_19


TradeSeedsGoodbye::
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	msgbox ComeTradeWhenGetMoreSeeds, MSGBOX_NPC
	end


ZeBagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	end


BerryTree_ItemUseFertilizer::
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_FertilizedTheBerry
	waitmessage
	special ObjectEventInteractionWaterBerryTree
	fertilizeberry
	special DoFertilizingBerryTreeAnim
	waitstate
	message BerryTree_Text_PlantIsDelighted
	waitmessage
	waitbuttonpress
	releaseall
	dotimebasedevents
	compare VAR_0x800A, TRUE
	goto_if_eq BerryTree_ItemUseFertilizer_2
BerryTree_ItemUseFertilizer_1:
	end

BerryTree_ItemUseFertilizer_2:
	delay 210
	goto BerryTree_ItemUseFertilizer_1


TryDropStrangeSeed_Tree::
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge TryDropStrangeSeed_Tree_3
TryDropStrangeSeed_Tree_1:
	return

TryDropStrangeSeed_Tree_2:
	waitse
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox StrangeSeedDroppedTree
	additem ITEM_STRANGE_SEED
	message BerryTree_Text_PickedTheSeed
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwaySeed
	waitmessage
	waitbuttonpress
	goto TryDropStrangeSeed_Tree_1

TryDropStrangeSeed_Tree_3:
	checkitemspace ITEM_STRANGE_SEED
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_Tree_2
	goto TryDropStrangeSeed_Tree_1


TryDropStrangeSeed_BerryPlant::
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge TryDropStrangeSeed_BerryPlant_4
TryDropStrangeSeed_BerryPlant_3:
	message BerryTree_Text_PutAwayBerry
TryDropStrangeSeed_BerryPlant_1:
	return

TryDropStrangeSeed_BerryPlant_2:
	closemessage
	waitse
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox StrangeSeedDroppedBerry
	additem ITEM_STRANGE_SEED
	message BerryTree_Text_PickedTheSeed
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerryAndSeed
	goto TryDropStrangeSeed_BerryPlant_1

TryDropStrangeSeed_BerryPlant_4:
	checkitemspace ITEM_STRANGE_SEED
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_BerryPlant_2
	goto TryDropStrangeSeed_BerryPlant_3


ZygardeCell::
	lock
	waitse
	playfanfare MUS_OBTAIN_ITEM
	removeobject VAR_LAST_TALKED
	message PlayerFoundZygardeCell
	waitfanfare
	waitmessage
	msgbox gText_PutZygardeCellInCube
	addvar VAR_ZYGARDE_CELLS, 1
	release
	end


ZygardeCore::
	lock
	waitse
	playfanfare MUS_OBTAIN_ITEM
	removeobject VAR_LAST_TALKED
	message PlayerFoundZygardeCore
	waitfanfare
	waitmessage
	msgbox gText_PutZygardeCoreInCube
	addvar VAR_ZYGARDE_CORES, 1
	release
	end


IrisBattle::
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


DraydenBattle::
	trainerbattle_single TRAINER_LEADER_DRAYDEN, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


MinaBattle::
	trainerbattle_single TRAINER_ELITE_FOUR_MINA, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


AutomaticUpdate::
	setvar VAR_DEBUG, 9
	clearflag FLAG_SERPENTCAVE_DRAGONFANG
	clearflag FLAG_OBTAINED_TYRANITARITE
	clearflag FLAG_OBTAINED_BLUNDER_POLICY
	callnative DefaultFollower
	closemessage
	release
	end


AutomaticUpdate2::
	setvar VAR_DEBUG, 10
	end


AutomaticUpdate3::
	callnative InitStrangeSeeds
	setvar VAR_DEBUG, 11
	setvar VAR_SHINY_MULTIPLIER, 0
	setvar VAR_MINA_INTRO_QUEST, 0
	setvar VAR_AMBEROCK_STORY, 0
	setvar VAR_GROTTO_5, 0
	setvar VAR_ZYGARDE_CORES, 0
	setvar VAR_TENT_SPECIAL_PRIZE, 0
	setvar VAR_SERPENTCAVE_STORY, 0
	clearflag FLAG_REUNITE_WITH_RIVAL
	clearflag FLAG_INTRODUCED_TO_BERRY_TRADER
	clearflag FLAG_RIVAL_MET_IN_SANDSTONE
	clearflag FLAG_KAOLISLE_ITEM8
	clearflag FLAG_SANDSTONE_HIDDENITEM_1
	clearflag FLAG_SANDSTONE_HIDDENITEM_2
	clearflag FLAG_UNUSED_SYS_0x22
	clearflag FLAG_KAOLISLE_ITEM9
	clearflag FLAG_SERPENTCAVE_BOULDER_1
	clearflag FLAG_SERPENTCAVE_BOULDER_2
	clearflag FLAG_SERPENTCAVE_BOULDER_3
	clearflag FLAG_SERPENTCAVE_BOULDER_4
	clearflag FLAG_R14_ITEM6
	clearflag FLAG_UNDERGROUNDRUINS_FULLRESTORE
	clearflag FLAG_WW_WATERSTONE
	clearflag FLAG_COAST_TOMB_OPENED
	clearflag FLAG_SERPENTCAVE_ITEM4
	clearflag FLAG_SAFARIMOUNTAIN_ITEM1
	clearflag FLAG_SAFARIMOUNTAIN_ITEM2
	clearflag FLAG_FLOWERFIELDS_ITEM_1
	clearflag FLAG_FLOWERFIELDS_ITEM_2
	clearflag FLAG_FLOWERFIELDS_ITEM_3
	clearflag FLAG_REPAIR_AMBEROCK_BRIDGE
	clearflag FLAG_AMBEROCK_ITEM2
	clearflag FLAG_ORICORIO_SHOWN_TO_MANIAC
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_gt AutomaticUpdate3_3
AutomaticUpdate3_1:
	release
	end

AutomaticUpdate3_2:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto AutomaticUpdate3_1

AutomaticUpdate3_3:
	compare VAR_PEARLWOOD_TOWN_STATE, 20
	goto_if_lt AutomaticUpdate3_2
	goto AutomaticUpdate3_1


AutomaticUpdate4::
	setvar VAR_ZYGARDE_CELLS, 0
	clearflag FLAG_SAFARIMOUNTAIN_ITEM3
	clearflag FLAG_SAFARIMOUNTAIN_ITEM6
	setflag FLAG_ZYGARDE_CELL_1
	setflag FLAG_ZYGARDE_CELL_2
	setflag FLAG_ZYGARDE_CELL_3
	setflag FLAG_ZYGARDE_CELL_4
	setflag FLAG_ZYGARDE_CELL_5
	setflag FLAG_ZYGARDE_CELL_6
	setflag FLAG_ZYGARDE_CELL_7
	setflag FLAG_ZYGARDE_CELL_8
	setflag FLAG_ZYGARDE_CELL_9
	setflag FLAG_ZYGARDE_CELL_10
	setflag FLAG_ZYGARDE_CELL_11
	setflag FLAG_ZYGARDE_CELL_12
	setflag FLAG_ZYGARDE_CELL_13
	setflag FLAG_ZYGARDE_CELL_14
	setflag FLAG_ZYGARDE_CELL_15
	setflag FLAG_ZYGARDE_CELL_16
	setflag FLAG_ZYGARDE_CELL_17
	setflag FLAG_ZYGARDE_CELL_18
	setflag FLAG_ZYGARDE_CELL_19
	setflag FLAG_ZYGARDE_CELL_20
	setflag FLAG_ZYGARDE_CELL_21
	setflag FLAG_ZYGARDE_CELL_22
	setflag FLAG_ZYGARDE_CELL_23
	setflag FLAG_ZYGARDE_CELL_24
	setflag FLAG_ZYGARDE_CELL_25
	setflag FLAG_ZYGARDE_CELL_26
	setflag FLAG_ZYGARDE_CELL_27
	setflag FLAG_ZYGARDE_CELL_28
	setflag FLAG_ZYGARDE_CELL_29
	setflag FLAG_ZYGARDE_CELL_30
	setflag FLAG_ZYGARDE_CELL_31
	setflag FLAG_ZYGARDE_CELL_32
	setflag FLAG_ZYGARDE_CELL_33
	setflag FLAG_ZYGARDE_CELL_34
	setflag FLAG_ZYGARDE_CELL_35
	setflag FLAG_ZYGARDE_CELL_36
	setflag FLAG_ZYGARDE_CELL_37
	setflag FLAG_ZYGARDE_CELL_38
	setflag FLAG_ZYGARDE_CELL_39
	setflag FLAG_ZYGARDE_CELL_40
	setflag FLAG_ZYGARDE_CELL_41
	setflag FLAG_ZYGARDE_CELL_42
	setflag FLAG_ZYGARDE_CELL_43
	setflag FLAG_ZYGARDE_CELL_44
	setflag FLAG_ZYGARDE_CELL_45
	setflag FLAG_ZYGARDE_CELL_46
	setflag FLAG_ZYGARDE_CELL_47
	setflag FLAG_ZYGARDE_CELL_48
	setflag FLAG_ZYGARDE_CELL_49
	setflag FLAG_ZYGARDE_CELL_50
	clearflag FLAG_SHORESLATE_ITEM2
	clearflag FLAG_ROUTE9_ITEM1
	clearflag FLAG_ROUTE9_ITEM2
	clearflag FLAG_ROUTE9_ITEM3
	clearflag FLAG_ROUTE9_ITEM4
	clearflag FLAG_ROUTE9_ITEM5
	clearflag FLAG_ROUTE9_ITEM6
	clearflag FLAG_ROUTE9_ITEM7
	clearflag FLAG_ROUTE9_ITEM8
	clearflag FLAG_COAST_ITEM1
	clearflag FLAG_COAST_ITEM2
	clearflag FLAG_COAST_ITEM3
	clearflag FLAG_COAST_ITEM4
	clearflag FLAG_COAST_ITEM5
	clearflag FLAG_COAST_ITEM6
	clearflag FLAG_ROUTE10_ITEM1
	clearflag FLAG_ROUTE10_ITEM2
	clearflag FLAG_ROUTE10_ITEM3
	clearflag FLAG_ROUTE10_ITEM4
	clearflag FLAG_ROUTE10_ITEM5
	clearflag FLAG_ROUTE10_ITEM6
	clearflag FLAG_ROUTE10_ITEM7
	clearflag FLAG_ROUTE10_ITEM8
	clearflag FLAG_SERPENTCAVE_ITEM1
	clearflag FLAG_SERPENTCAVE_ITEM2
	clearflag FLAG_SERPENTCAVE_ITEM3
	clearflag FLAG_OBTAINED_AGGRONITE
	clearflag FLAG_FLOODEDCAVE_FOSSIL
	setvar VAR_SERPENTCAVE_WATER_LEVEL, 0
	setvar VAR_DEBUG, 12
	release
	end


AutomaticUpdate5::
	msgbox AutomaticUpdate_Text1
	msgbox AutomaticUpdate2_Text2
	msgbox AutomaticUpdate2_Text, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq AutomaticUpdate5_2
AutomaticUpdate5_1:
	setflag FLAG_ZYGARDE_CELL_51
	setflag FLAG_ZYGARDE_CELL_52
	setflag FLAG_ZYGARDE_CELL_53
	setflag FLAG_ZYGARDE_CELL_54
	setflag FLAG_ZYGARDE_CELL_55
	setflag FLAG_ZYGARDE_CELL_56
	setflag FLAG_ZYGARDE_CELL_57
	setflag FLAG_ZYGARDE_CELL_58
	setflag FLAG_ZYGARDE_CELL_59
	setflag FLAG_ZYGARDE_CELL_60
	setflag FLAG_ZYGARDE_CELL_61
	setflag FLAG_ZYGARDE_CELL_62
	setflag FLAG_ZYGARDE_CELL_63
	setflag FLAG_ZYGARDE_CELL_64
	setflag FLAG_ZYGARDE_CELL_65
	setflag FLAG_ZYGARDE_CELL_66
	setflag FLAG_ZYGARDE_CELL_67
	setflag FLAG_ZYGARDE_CELL_68
	setflag FLAG_ZYGARDE_CELL_69
	setflag FLAG_ZYGARDE_CELL_70
	setflag FLAG_ZYGARDE_CELL_71
	setflag FLAG_ZYGARDE_CELL_72
	setflag FLAG_ZYGARDE_CELL_73
	setflag FLAG_ZYGARDE_CELL_74
	setflag FLAG_ZYGARDE_CELL_75
	setflag FLAG_ZYGARDE_CELL_76
	setflag FLAG_ZYGARDE_CELL_77
	setflag FLAG_ZYGARDE_CELL_78
	setflag FLAG_ZYGARDE_CELL_79
	setflag FLAG_ZYGARDE_CELL_80
	setflag FLAG_ZYGARDE_CELL_81
	setflag FLAG_ZYGARDE_CELL_82
	setflag FLAG_ZYGARDE_CELL_83
	setflag FLAG_ZYGARDE_CELL_84
	setflag FLAG_ZYGARDE_CELL_85
	setflag FLAG_ZYGARDE_CELL_86
	setflag FLAG_ZYGARDE_CELL_87
	setflag FLAG_ZYGARDE_CELL_88
	setflag FLAG_ZYGARDE_CELL_89
	setflag FLAG_ZYGARDE_CELL_90
	setflag FLAG_ZYGARDE_CELL_91
	setflag FLAG_ZYGARDE_CELL_92
	setflag FLAG_ZYGARDE_CELL_93
	setflag FLAG_ZYGARDE_CELL_94
	setflag FLAG_ZYGARDE_CELL_95
	setflag FLAG_ZYGARDE_CORE_1
	setflag FLAG_ZYGARDE_CORE_2
	setflag FLAG_ZYGARDE_CORE_3
	setflag FLAG_ZYGARDE_CORE_4
	setflag FLAG_FACTORY_ITEM_1_OUTSIDE
	setflag FLAG_FACTORY_ITEM_2_OUTSIDE
	setflag FLAG_FACTORY_ITEM_3_OUTSIDE
	clearflag FLAG_SAFARIMOUNTAIN_ITEM4
	clearflag FLAG_SAFARIMOUNTAIN_ITEM5
	clearflag FLAG_SAFARIMOUNTAIN_ITEM6
	clearflag FLAG_SAFARIMOUNTAIN_ITEM7
	clearflag FLAG_R14_ITEM5
	clearflag FLAG_R14_ITEM6
	clearflag FLAG_WINDPLUME_MT_HIDE_CHARGED_ORB
	setvar VAR_DEBUG, 13
	goto_if_set FLAG_VISITED_ROCKLIFFE, AutomaticUpdate5_5
AutomaticUpdate5_4:
	goto_if_set FLAG_HELPED_DEVON_CORP, AutomaticUpdate5_12
AutomaticUpdate5_11:
	release
	return

AutomaticUpdate5_2:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq AutomaticUpdate5_8
	setvar VAR_0x8004, FEMALE
AutomaticUpdate5_7:
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	goto AutomaticUpdate5_1

AutomaticUpdate5_5:
	msgbox BattleTentInRockliffe
	goto AutomaticUpdate5_4

AutomaticUpdate5_8:
	setvar VAR_0x8004, MALE
	goto AutomaticUpdate5_7

AutomaticUpdate5_12:
	msgbox SceneAltered, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq AutomaticUpdate5_14
	goto AutomaticUpdate5_11

AutomaticUpdate5_14:
	callnative StorePCLocation
	getplayerxy VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	closemessage
	warpsilent MAP_DEVON_CROP_MEMORY, 0
	waitstate
	goto AutomaticUpdate5_11


Debug_Script_1::
	compare VAR_DEBUG, 0
	goto_if_eq Debug_Script_1_2
Debug_Script_1_1:
	compare VAR_DEBUG, 1
	goto_if_eq Debug_Script_1_5
Debug_Script_1_4:
	compare VAR_DEBUG, 2
	goto_if_eq Debug_Script_1_11
Debug_Script_1_10:
	compare VAR_DEBUG, 3
	goto_if_eq Debug_Script_1_20
Debug_Script_1_19:
	compare VAR_DEBUG, 4
	goto_if_eq Debug_Script_1_29
Debug_Script_1_28:
	compare VAR_DEBUG, 5
	goto_if_eq Debug_Script_1_41
Debug_Script_1_40:
	compare VAR_DEBUG, 6
	goto_if_eq Debug_Script_1_51
Debug_Script_1_50:
	compare VAR_DEBUG, 7
	goto_if_eq Debug_Script_1_57
Debug_Script_1_56:
	call UpdateItemCheck
	msgbox FlagsAndVarsUpdated2, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_60
Debug_Script_1_59:
	closemessage
	release
	end

Debug_Script_1_2:
	checkitem ITEM_GO_GOGGLES
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_8
Debug_Script_1_7:
	goto_if_set FLAG_ROUTE15_ITEM1, Debug_Script_1_17
Debug_Script_1_16:
	goto_if_set FLAG_ROUTE15_ITEM2, Debug_Script_1_26
Debug_Script_1_25:
	goto_if_set FLAG_ROUTE15_ITEM3, Debug_Script_1_38
Debug_Script_1_37:
	clearflag FLAG_SHOWED_BADGE
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
	clearflag FLAG_OBTAINED_PAINTBRUSH
	clearflag FLAG_PARTNER_HEALS
	clearflag FLAG_TRADED_SMEARGLE
	clearflag FLAG_KORRINA_LEAVESGYM
	clearflag FLAG_HIDE_LIBRARY_BIRCH
	setflag FLAG_HIDE_STONE_SPHERE_FC
	setflag FLAG_OLDMAN_PEARLSTRING
	setflag FLAG_LANDMARK_LOST_GLADE
	setflag FLAG_LANDMARK_WINDY_WOODS
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_PEARLWOOD_POINT
	setflag FLAG_VISITED_OLDALE_TOWN
	setvar VAR_DEBUG, 1
	msgbox RenameBrother, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_48
	goto Debug_Script_1_1

Debug_Script_1_5:
	goto_if_unset FLAG_CORALGROVE_CUTSCENE, Debug_Script_1_14
Debug_Script_1_13:
	setvar VAR_DEBUG, 2
	goto Debug_Script_1_4

Debug_Script_1_8:
	setvar VAR_DESERT_BYPASS, 1
	goto Debug_Script_1_7

Debug_Script_1_11:
	checkitem ITEM_WHITE_FLUTE
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_23
Debug_Script_1_22:
	clearflag FLAG_ROUTE15_ITEM4
	clearflag FLAG_ROUTE15_ITEM5
	clearflag FLAG_ROUTE15_ITEM6
	clearflag FLAG_ROUTE15_ITEM7
	clearflag FLAG_R14_ITEM3
	goto_if_set FLAG_ROUTE15_ITEM1, Debug_Script_1_35
Debug_Script_1_34:
	goto_if_set FLAG_ROUTE15_ITEM2, Debug_Script_1_46
Debug_Script_1_45:
	goto_if_set FLAG_ROUTE15_ITEM3, Debug_Script_1_54
Debug_Script_1_53:
	setvar VAR_DEBUG, 3
	goto Debug_Script_1_10

Debug_Script_1_14:
	setflag FLAG_OBTAINED_PIDGEOTITE
	goto Debug_Script_1_13

Debug_Script_1_17:
	setvar VAR_STARTER_MON, 0
	goto Debug_Script_1_16

Debug_Script_1_20:
	checkitem ITEM_SAMPLE_BOX
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_32
Debug_Script_1_31:
	setvar VAR_DEBUG, 4
	goto Debug_Script_1_19

Debug_Script_1_23:
	msgbox ReplacedFlute
	removeitem ITEM_WHITE_FLUTE
	additem ITEM_BLACK_FLUTE
	goto Debug_Script_1_22

Debug_Script_1_26:
	setvar VAR_STARTER_MON, 1
	goto Debug_Script_1_25

Debug_Script_1_29:
	clearflag FLAG_ROUTE23_ITEM4
	clearflag FLAG_BERRYFIELDS_ITEM
	setvar VAR_DEBUG, 5
	goto Debug_Script_1_28

Debug_Script_1_32:
	compare VAR_MUD_REWARD_1, 0
	goto_if_eq Debug_Script_1_43
	goto Debug_Script_1_31

Debug_Script_1_35:
	clearflag FLAG_ROUTE15_ITEM1
	goto Debug_Script_1_34

Debug_Script_1_38:
	setvar VAR_STARTER_MON, 2
	goto Debug_Script_1_37

Debug_Script_1_41:
	setberrytree BERRY_TREE_ROUTE_123_GREPA_5, ITEM_TO_BERRY ( ITEM_GREPA_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_POMEG_5, ITEM_TO_BERRY ( ITEM_POMEG_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_QUALOT_5, ITEM_TO_BERRY ( ITEM_QUALOT_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_GREPA_6, ITEM_TO_BERRY ( ITEM_GREPA_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_POMEG_6, ITEM_TO_BERRY ( ITEM_POMEG_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_QUALOT_6, ITEM_TO_BERRY ( ITEM_QUALOT_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_GREPA_7, ITEM_TO_BERRY ( ITEM_GREPA_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_POMEG_7, ITEM_TO_BERRY ( ITEM_POMEG_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_QUALOT_7, ITEM_TO_BERRY ( ITEM_QUALOT_BERRY ), BERRY_STAGE_BERRIES
	setvar VAR_DEBUG, 6
	goto Debug_Script_1_40

Debug_Script_1_43:
	call RandomizeMudRewards
	goto Debug_Script_1_31

Debug_Script_1_46:
	clearflag FLAG_ROUTE15_ITEM2
	goto Debug_Script_1_45

Debug_Script_1_48:
	fadescreen FADE_TO_BLACK
	special NameBrother
	waitstate
	goto Debug_Script_1_1

Debug_Script_1_51:
	clearflag FLAG_SYS_NATIONAL_DEX
	setflag FLAG_SYS_POKEDEX_GET
	setvar VAR_DEBUG, 7
	goto Debug_Script_1_50

Debug_Script_1_54:
	clearflag FLAG_ROUTE15_ITEM3
	goto Debug_Script_1_53

Debug_Script_1_57:
	setvar VAR_GROTTO_STEP_COUNT, 256
	setvar VAR_DEBUG, 8
	goto Debug_Script_1_56

Debug_Script_1_60:
	warp MAP_CORALGROVE_CITY, 26, 44
	goto Debug_Script_1_59


Debug_Script_2::
	setmonmetlocation 0, MAP_NEW_ROUTE101
	setmonmetlocation 1, MAP_NEW_ROUTE101
	setmonmetlocation 2, MAP_NEW_ROUTE101
	setmonmetlocation 3, MAP_NEW_ROUTE101
	setmonmetlocation 4, MAP_NEW_ROUTE101
	setmonmetlocation 5, MAP_NEW_ROUTE101
	return


Debug_Script_3::
	lock
	msgbox WantToSetRivalFight, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Debug_Script_3_2
	checkitem ITEM_DOWSING_MACHINE
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_3_5
	msgbox RivalFought, MSGBOX_NPC
	clearflag FLAG_RIVAL_HARBOR_ANGRY
	additem ITEM_DOWSING_MACHINE
Debug_Script_3_4:
	end

Debug_Script_3_2:
	closemessage
	release
	end

Debug_Script_3_5:
	msgbox RivalNotFought, MSGBOX_NPC
	setflag FLAG_RIVAL_HARBOR_ANGRY
	removeitem ITEM_DOWSING_MACHINE
	goto Debug_Script_3_4


Debug_Script_4::
	lock
	msgbox LevelSetIntro, MSGBOX_DEFAULT
	message WhichLevelToSet
	waitmessage
	dynmultipush Debug_Script_4_Text_0, 0
	dynmultipush Debug_Script_4_Text_1, 1
	dynmultipush Debug_Script_4_Text_2, 2
	dynmultipush Debug_Script_4_Text_3, 3
	dynmultipush Debug_Script_4_Text_4, 4
	dynmultipush Debug_Script_4_Text_5, 5
	dynmultipush Debug_Script_4_Text_6, 6
	dynmultipush Debug_Script_4_Text_7, 7
	dynmultipush Debug_Script_4_Text_8, 8
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Debug_Script_4_3
	case 1, Debug_Script_4_4
	case 2, Debug_Script_4_5
	case 3, Debug_Script_4_6
	case 4, Debug_Script_4_7
	case 5, Debug_Script_4_8
	case 6, Debug_Script_4_9
	case 7, Debug_Script_4_10
	case 8, Debug_Script_4_11
	case MULTI_B_PRESSED, Debug_Script_4_12
Debug_Script_4_1:
	release
	end

Debug_Script_4_3:
	msgbox Debug_Script_4_Text_9
	setpartylevel 14
	goto Debug_Script_4_1

Debug_Script_4_4:
	msgbox Debug_Script_4_Text_10
	setpartylevel 22
	goto Debug_Script_4_1

Debug_Script_4_5:
	msgbox Debug_Script_4_Text_11
	setpartylevel 24
	goto Debug_Script_4_1

Debug_Script_4_6:
	msgbox Debug_Script_4_Text_12
	setpartylevel 29
	goto Debug_Script_4_1

Debug_Script_4_7:
	msgbox Debug_Script_4_Text_13
	setpartylevel 34
	goto Debug_Script_4_1

Debug_Script_4_8:
	msgbox Debug_Script_4_Text_14
	setpartylevel 38
	goto Debug_Script_4_1

Debug_Script_4_9:
	msgbox Debug_Script_4_Text_15
	setpartylevel 40
	goto Debug_Script_4_1

Debug_Script_4_10:
	msgbox Debug_Script_4_Text_16
	setpartylevel 45
	goto Debug_Script_4_1

Debug_Script_4_11:
	closemessage
	goto Debug_Script_4_1

Debug_Script_4_12:
	closemessage
	goto Debug_Script_4_1


Debug_Script_5::
	givemon SPECIES_HITMONLEE, 30, ITEM_NONE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_FAKE_OUT
	release
	return


Debug_Script_6::
	trainerbattle_no_intro TRAINER_DEBRA, Debug_Script_6_Text_0
	return


Debug_Script_7::
	return


Debug_Script_8::
	return


RapidsTooStrong::
	msgbox RapidsTooStrong_Text, MSGBOX_NPC
	return


UpdateItemCheck::
	checkitem ITEM_TM_ECHOED_VOICE, 2
	compare VAR_RESULT, TRUE
	goto_if_eq UpdateItemCheck_2
UpdateItemCheck_1:
	checkitem ITEM_TM_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq UpdateItemCheck_5
UpdateItemCheck_4:
	checkitem ITEM_TM_GIGA_DRAIN
	compare VAR_RESULT, TRUE
	goto_if_eq UpdateItemCheck_7
	return

UpdateItemCheck_2:
	removeitem ITEM_TM_ECHOED_VOICE, 1
	giveitem ITEM_TM_ROCK_SLIDE
	goto UpdateItemCheck_1

UpdateItemCheck_5:
	giveitem ITEM_TM_CASE
	goto UpdateItemCheck_4

UpdateItemCheck_7:
	msgbox ReplacedGrassKnot
	removeitem ITEM_TM_GIGA_DRAIN
	additem ITEM_TM_GRASS_KNOT
	return


Walk1Left:
	walk_left
	step_end

Walk2Left:
	walk_left
	walk_left
	step_end

Walk3Left:
	walk_left
	walk_left
	walk_left
	step_end

Walk4Left:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk5Left:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk6Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk7Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk8Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk9Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk1Right:
	walk_right
	step_end

Walk2Right:
	walk_right
	walk_right
	step_end

Walk3Right:
	walk_right
	walk_right
	walk_right
	step_end

Walk4Right:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk5Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk6Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk1Up:
	walk_up
	step_end

Walk2Up:
	walk_up
	walk_up
	step_end

Walk3Up:
	walk_up
	walk_up
	walk_up
	step_end

Walk4Up:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk5Up:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk6Up:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk1Down:
	walk_down
	step_end

Walk2Down:
	walk_down
	walk_down
	step_end

Walk3Down:
	walk_down
	walk_down
	walk_down
	step_end

Walk4Down:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Walk5Down:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Walk6Down:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Walk7Down:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Debug_Script_4_Text_0:
	.string "Gym 1 (lvl 14)$"

Debug_Script_4_Text_1:
	.string "Gym 2 (lvl 22)$"

Debug_Script_4_Text_2:
	.string "Side area (lvl 24)$"

Debug_Script_4_Text_3:
	.string "Story 1 (lvl 29)$"

Debug_Script_4_Text_4:
	.string "Gym 3 (lvl 34)$"

Debug_Script_4_Text_5:
	.string "Gym 4 (lvl 38)$"

Debug_Script_4_Text_6:
	.string "Post-Gym 4 (lvl 40)$"

Debug_Script_4_Text_7:
	.string "Gym 5 (lvl 45)$"

Debug_Script_4_Text_8:
	.string "Cancel$"

Debug_Script_4_Text_9:
	.string "Team set to level 14.$"

Debug_Script_4_Text_10:
	.string "Team set to level 22.$"

Debug_Script_4_Text_11:
	.string "Team set to level 24.$"

Debug_Script_4_Text_12:
	.string "Team set to level 29.$"

Debug_Script_4_Text_13:
	.string "Team set to level 34.$"

Debug_Script_4_Text_14:
	.string "Team set to level 38.$"

Debug_Script_4_Text_15:
	.string "Team set to level 40.$"

Debug_Script_4_Text_16:
	.string "Team set to level 45.$"

Debug_Script_6_Text_0:
	.string "GG$"

GainedASpecialTicket::
	.string "Due to your victory, you have\n"
	.string "earned a special victory ticket.\p"
	.string "Earn two more victory tickets, and\n"
	.string "you will get a special extra prize!$"

NowHaveTwoTickets::
	.string "You now have two victory tickets.\p"
	.string "Earn one more ticket for a special\n"
	.string "extra prize!$"

TentGrandPrize::
	.string "You just earned your third victory\n"
	.string "ticket.\p"
	.string "This means you are eligible for a\n"
	.string "special reward, a Fresh Start Mochi!$"

SeenAnyStrangeSeeds::
	.string "I've been hearing some rumors about\n"
	.string "Pokémon hiding strange seeds in trees.$"

CareToTradeSeeds::
	.string "Ah, those seeds seem to match\n"
	.string "the description!\p"
	.string "I have this special plant fertilizer\n"
	.string "that can greatly improve the growth\l"
	.string "rate of berry trees.\p"
	.string "If you'd like, I can trade you\n"
	.string "two batches of the fertilizer\l"
	.string "for a single strange seed.$"

ComeTradeWhenGetMoreSeeds::
	.string "If you find any strange seeds, I'll\n"
	.string "gladly trade them for some fertilizer.$"

HereToTradeMoreSeeds::
	.string "Here to trade some strange seeds?$"

TradeHowManySeeds::
	.string "How many seeds would you\n"
	.string "like to trade?$"

TradeSeedsForFertilizer_Text_Single::
	.string "One seed for two batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

TradeSeedsForFertilizer_Text_Multiple::
	.string "{STR_VAR_1} seeds for {STR_VAR_2} batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

BerryTree_Text_FertilizedTheBerry::
	.string "{PLAYER} applied the Fertilizer to\n"
	.string "the {STR_VAR_1} plant.$"

StrangeSeedDroppedBerry::
	.string "A Strange Seed dropped from the\n"
	.string "berry tree.$"

StrangeSeedDroppedTree::
	.string "A Strange Seed dropped from the tree.$"

BerryTree_Text_PickedTheSeed::
	.string "{PLAYER} picked up the Strange Seed.$"

BerryTree_Text_PutAwaySeed::
	.string "{PLAYER} put away the Strange\n"
	.string "Seed in the Items pocket.$"

BerryTree_Text_PutAwayBerryAndSeed::
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "in the bag's berries pocket\l"
	.string "and the Strange Seed in the\l"
	.string "Items pocket.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"

PlayerFoundZygardeCell::
	.string "{PLAYER} found a Zygarde Cell!$"

gText_PutZygardeCellInCube::
	.string "{PLAYER} stored the Zygarde Cell\n"
	.string "in the Zygarde Cube.$"

PlayerFoundZygardeCore::
	.string "{PLAYER} found a Zygarde Core!$"

gText_PutZygardeCoreInCube::
	.string "{PLAYER} stored the Zygarde Core\n"
	.string "in the Zygarde Cube.$"

AutomaticUpdate_Text1::
	.string "A new update has been applied.\p"
	.string "Things included in this update:\p"
	.string "1. New areas to explore.\p"
	.string "2. Some old areas have been updated.\n"
	.string "Some old events may have reset as\l"
	.string "a result.\p"
	.string "3. Followers, as well as setting a\n"
	.string "preferred follower from party screen.\p"
	.string "4. An updated “Stats” page in the\n"
	.string "start menu.\p"
	.string "5. New window frames available\n"
	.string "in the options menu.\p"
	.string "6. A lot of random bug fixes.\p"
	.string "7. The EV trainer in Pokémon Centers\n"
	.string "has been nerfed from 10 EV per\l"
	.string "Pokémon to 5.$"

AutomaticUpdate2_Text2::
	.string "8. There is now a separate color\n"
	.string "switcher for the battle interface,\l"
	.string "as well as an ability to change\l"
	.string "window frames during battle.\p"
	.string "To cycle between colors, hold the\n"
	.string "START button during battle and press\l"
	.string "left and right on the D-Pad.\p"
	.string "To change window frames, hold the\n"
	.string "START button and press up and down\l"
	.string "on the D-Pad.\p"
	.string "The toggle between health numbers\n"
	.string "and bars in double battles has been\l"
	.string "moved to SELECT button.$"

AutomaticUpdate2_Text::
	.string "9. You have obtained a watch.\p"
	.string "You can now check the time by\n"
	.string "pressing the START button and can\l"
	.string "toggle between 12-hour and 24-hour\l"
	.string "modes through the options menu or\l"
	.string "by viewing a wall clock.\p"
	.string "Would you like to re-set the clock?\n"
	.string "Do note that this may have unintended\l"
	.string "consequences on time-related events,\l"
	.string "such as berry growth or daily events.$"

BattleTentInRockliffe::
	.string "10. A new battle tent has opened in\n"
	.string "Rockliffe town.$"

SceneAltered::
	.string "An earlier story scene of\n"
	.string "Team Rocket's assault on Devon\l"
	.string "Corp. has had its dialogue\l"
	.string "slightly altered, which affects\l"
	.string "the upcoming story.\p"
	.string "Would you like to view the\n"
	.string "altered scene?$"

RapidsTooStrong_Text::
	.string "These rapids are simply too strong\n"
	.string "to surf against.\p"
	.string "I'm sure they'll die down once the\n"
	.string "game dev finishes the upcoming area!$"

ReplacedFlute::
	.string "Your White Flute has been replaced\n"
	.string "with a Black Flute.$"

ReplacedGrassKnot::
	.string "Your TM for Giga Drain has been\n"
	.string "replaced with a TM for Grass Knot.$"

WantToSetRivalFight::
	.string "This option will change an upcoming\n"
	.string "rival event based on whether the rival\l"
	.string "was fought in the Coralgrove elevator.\p"
	.string "Would you like to switch the event?$"

RivalNotFought::
	.string "Rival set to NOT FOUGHT.\n"
	.string "Removed the Itemfinder.$"

RivalFought::
	.string "Rival set to FOUGHT.\n"
	.string "Added the Itemfinder.$"

LevelSetIntro::
	.string "This option will set the level of your\n"
	.string "entire team to the specified level.\p"
	.string "This is meant for testing purposes so\n"
	.string "I'd prefer you didn't exploit this for\l"
	.string "no reason.\p"
	.string "Do note that this does NOT\n"
	.string "evolve/de-evolve your Pokémon,\l"
	.string "nor does it add or remove moves.\p"
	.string "The team's stats will be recalculated.\n"
	.string "EVs earned will remain unchanged.$"

WhichLevelToSet::
	.string "Which level would you like to set\n"
	.string "your team?$"

FlagsAndVarsUpdated2::
	.string "Flags and Vars updated.\p"
	.string "Would you like to warp to Coralgrove?\n"
	.string "(Choose YES if current area is bugged)$"

RenameBrother::
	.string "Would you like to rename your brother?\n"
	.string "(Yes if haven't seen this before!)$"
