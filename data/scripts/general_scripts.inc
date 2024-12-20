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
	clearflag FLAG_MSG_FROM_CLAY
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
	setflag FLAG_ZYGARDE_CORE_5
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
	goto_if_set FLAG_INTERMEDIATE_PATCH, AutomaticUpdate5_5
AutomaticUpdate5_4:
	setvar VAR_DEBUG, 13
	goto_if_set FLAG_VISITED_ROCKLIFFE, AutomaticUpdate5_12
AutomaticUpdate5_11:
	goto_if_set FLAG_HELPED_DEVON_CORP, AutomaticUpdate5_15
AutomaticUpdate5_14:
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
	call ReturnTMs
	clearflag FLAG_INTERMEDIATE_PATCH
	goto AutomaticUpdate5_4

AutomaticUpdate5_8:
	setvar VAR_0x8004, MALE
	goto AutomaticUpdate5_7

AutomaticUpdate5_12:
	msgbox BattleTentInRockliffe
	goto AutomaticUpdate5_11

AutomaticUpdate5_15:
	msgbox SceneAltered, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq AutomaticUpdate5_17
	goto AutomaticUpdate5_14

AutomaticUpdate5_17:
	callnative StorePCLocation
	getplayerxy VAR_OBJ_GFX_ID_D, VAR_OBJ_GFX_ID_E
	closemessage
	warpsilent MAP_DEVON_CROP_MEMORY, 0
	waitstate
	goto AutomaticUpdate5_14


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
	release
	return


Debug_Script_6::
	return


Debug_Script_7::
	return


Debug_Script_8::
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


IntermediaryUpdateScript::
	lock
	faceplayer
	msgbox IntermediaryUpdateScript_Text, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq IntermediaryUpdateScript_2
	setflag FLAG_INTERMEDIATE_PATCH
	call BackUpTMs
	msgbox TMsAreNowSecured
	removeobject VAR_LAST_TALKED
	release
	return

IntermediaryUpdateScript_2:
	release
	end


BackUpTMs::
	checkitem ITEM_TM01
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_2
BackUpTMs_1:
	checkitem ITEM_TM02
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_5
BackUpTMs_4:
	checkitem ITEM_TM03
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_8
BackUpTMs_7:
	checkitem ITEM_TM04
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_11
BackUpTMs_10:
	checkitem ITEM_TM05
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_14
BackUpTMs_13:
	checkitem ITEM_TM06
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_17
BackUpTMs_16:
	checkitem ITEM_TM07
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_20
BackUpTMs_19:
	checkitem ITEM_TM08
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_23
BackUpTMs_22:
	checkitem ITEM_TM09
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_26
BackUpTMs_25:
	checkitem ITEM_TM10
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_29
BackUpTMs_28:
	checkitem ITEM_TM11
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_32
BackUpTMs_31:
	checkitem ITEM_TM12
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_35
BackUpTMs_34:
	checkitem ITEM_TM13
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_38
BackUpTMs_37:
	checkitem ITEM_TM14
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_41
BackUpTMs_40:
	checkitem ITEM_TM15
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_44
BackUpTMs_43:
	checkitem ITEM_TM16
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_47
BackUpTMs_46:
	checkitem ITEM_TM17
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_50
BackUpTMs_49:
	checkitem ITEM_TM18
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_53
BackUpTMs_52:
	checkitem ITEM_TM19
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_56
BackUpTMs_55:
	checkitem ITEM_TM20
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_59
BackUpTMs_58:
	checkitem ITEM_TM21
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_62
BackUpTMs_61:
	checkitem ITEM_TM22
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_65
BackUpTMs_64:
	checkitem ITEM_TM23
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_68
BackUpTMs_67:
	checkitem ITEM_TM24
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_71
BackUpTMs_70:
	checkitem ITEM_TM25
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_74
BackUpTMs_73:
	checkitem ITEM_TM26
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_77
BackUpTMs_76:
	checkitem ITEM_TM27
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_80
BackUpTMs_79:
	checkitem ITEM_TM28
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_83
BackUpTMs_82:
	checkitem ITEM_TM29
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_86
BackUpTMs_85:
	checkitem ITEM_TM30
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_89
BackUpTMs_88:
	checkitem ITEM_TM31
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_92
BackUpTMs_91:
	checkitem ITEM_TM32
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_95
BackUpTMs_94:
	checkitem ITEM_TM33
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_98
BackUpTMs_97:
	checkitem ITEM_TM34
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_101
BackUpTMs_100:
	checkitem ITEM_TM35
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_104
BackUpTMs_103:
	checkitem ITEM_TM36
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_107
BackUpTMs_106:
	checkitem ITEM_TM37
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_110
BackUpTMs_109:
	checkitem ITEM_TM38
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_113
BackUpTMs_112:
	checkitem ITEM_TM39
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_116
BackUpTMs_115:
	checkitem ITEM_TM40
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_119
BackUpTMs_118:
	checkitem ITEM_TM41
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_122
BackUpTMs_121:
	checkitem ITEM_TM42
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_125
BackUpTMs_124:
	checkitem ITEM_TM43
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_128
BackUpTMs_127:
	checkitem ITEM_TM44
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_131
BackUpTMs_130:
	checkitem ITEM_TM45
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_134
BackUpTMs_133:
	checkitem ITEM_TM46
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_137
BackUpTMs_136:
	checkitem ITEM_TM47
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_140
BackUpTMs_139:
	checkitem ITEM_TM48
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_143
BackUpTMs_142:
	checkitem ITEM_TM49
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_146
BackUpTMs_145:
	checkitem ITEM_TM50
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_149
BackUpTMs_148:
	checkitem ITEM_TM51
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_152
BackUpTMs_151:
	checkitem ITEM_TM52
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_155
BackUpTMs_154:
	checkitem ITEM_TM53
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_158
BackUpTMs_157:
	checkitem ITEM_TM54
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_161
BackUpTMs_160:
	checkitem ITEM_TM55
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_164
BackUpTMs_163:
	checkitem ITEM_TM56
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_167
BackUpTMs_166:
	checkitem ITEM_TM57
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_170
BackUpTMs_169:
	checkitem ITEM_TM58
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_173
BackUpTMs_172:
	checkitem ITEM_TM59
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_176
BackUpTMs_175:
	checkitem ITEM_TM60
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_179
BackUpTMs_178:
	checkitem ITEM_TM61
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_182
BackUpTMs_181:
	checkitem ITEM_TM62
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_185
BackUpTMs_184:
	checkitem ITEM_TM63
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_188
BackUpTMs_187:
	checkitem ITEM_TM64
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_191
BackUpTMs_190:
	checkitem ITEM_TM65
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_194
BackUpTMs_193:
	checkitem ITEM_TM66
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_197
BackUpTMs_196:
	checkitem ITEM_TM67
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_200
BackUpTMs_199:
	checkitem ITEM_TM68
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_203
BackUpTMs_202:
	checkitem ITEM_TM69
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_206
BackUpTMs_205:
	checkitem ITEM_TM70
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_209
BackUpTMs_208:
	checkitem ITEM_TM71
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_212
BackUpTMs_211:
	checkitem ITEM_TM72
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_215
BackUpTMs_214:
	checkitem ITEM_TM73
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_218
BackUpTMs_217:
	checkitem ITEM_TM74
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_221
BackUpTMs_220:
	checkitem ITEM_TM75
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_224
BackUpTMs_223:
	checkitem ITEM_TM76
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_227
BackUpTMs_226:
	checkitem ITEM_TM77
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_230
BackUpTMs_229:
	checkitem ITEM_TM78
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_233
BackUpTMs_232:
	checkitem ITEM_TM79
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_236
BackUpTMs_235:
	checkitem ITEM_TM80
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_239
BackUpTMs_238:
	checkitem ITEM_TM81
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_242
BackUpTMs_241:
	checkitem ITEM_TM82
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_245
BackUpTMs_244:
	checkitem ITEM_TM83
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_248
BackUpTMs_247:
	checkitem ITEM_TM84
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_251
BackUpTMs_250:
	checkitem ITEM_TM85
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_254
BackUpTMs_253:
	checkitem ITEM_TM86
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_257
BackUpTMs_256:
	checkitem ITEM_TM87
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_260
BackUpTMs_259:
	checkitem ITEM_TM88
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_263
BackUpTMs_262:
	checkitem ITEM_TM89
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_266
BackUpTMs_265:
	checkitem ITEM_TM90
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_269
BackUpTMs_268:
	checkitem ITEM_TM91
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_272
BackUpTMs_271:
	checkitem ITEM_TM92
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_275
BackUpTMs_274:
	checkitem ITEM_TM93
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_278
BackUpTMs_277:
	checkitem ITEM_TM94
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_281
BackUpTMs_280:
	checkitem ITEM_TM95
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_284
BackUpTMs_283:
	checkitem ITEM_TM96
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_287
BackUpTMs_286:
	checkitem ITEM_TM97
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_290
BackUpTMs_289:
	checkitem ITEM_TM98
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_293
BackUpTMs_292:
	checkitem ITEM_TM99
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_296
BackUpTMs_295:
	checkitem ITEM_TM100
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_299
BackUpTMs_298:
	checkitem ITEM_HM01
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_302
BackUpTMs_301:
	checkitem ITEM_HM02
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_305
BackUpTMs_304:
	checkitem ITEM_HM03
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_308
BackUpTMs_307:
	checkitem ITEM_HM04
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_311
BackUpTMs_310:
	checkitem ITEM_HM05
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_314
BackUpTMs_313:
	checkitem ITEM_HM06
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_317
BackUpTMs_316:
	checkitem ITEM_HM07
	compare VAR_RESULT, TRUE
	goto_if_eq BackUpTMs_319
	return

BackUpTMs_2:
	setflag FLAG_ITEM_TM01
	removeitem ITEM_TM01
	goto BackUpTMs_1

BackUpTMs_5:
	setflag FLAG_ITEM_TM02
	removeitem ITEM_TM02
	goto BackUpTMs_4

BackUpTMs_8:
	setflag FLAG_ITEM_TM03
	removeitem ITEM_TM03
	goto BackUpTMs_7

BackUpTMs_11:
	setflag FLAG_ITEM_TM04
	removeitem ITEM_TM04
	goto BackUpTMs_10

BackUpTMs_14:
	setflag FLAG_ITEM_TM05
	removeitem ITEM_TM05
	goto BackUpTMs_13

BackUpTMs_17:
	setflag FLAG_ITEM_TM06
	removeitem ITEM_TM06
	goto BackUpTMs_16

BackUpTMs_20:
	setflag FLAG_ITEM_TM07
	removeitem ITEM_TM07
	goto BackUpTMs_19

BackUpTMs_23:
	setflag FLAG_ITEM_TM08
	removeitem ITEM_TM08
	goto BackUpTMs_22

BackUpTMs_26:
	setflag FLAG_ITEM_TM09
	removeitem ITEM_TM09
	goto BackUpTMs_25

BackUpTMs_29:
	setflag FLAG_ITEM_TM10
	removeitem ITEM_TM10
	goto BackUpTMs_28

BackUpTMs_32:
	setflag FLAG_ITEM_TM11
	removeitem ITEM_TM11
	goto BackUpTMs_31

BackUpTMs_35:
	setflag FLAG_ITEM_TM12
	removeitem ITEM_TM12
	goto BackUpTMs_34

BackUpTMs_38:
	setflag FLAG_ITEM_TM13
	removeitem ITEM_TM13
	goto BackUpTMs_37

BackUpTMs_41:
	setflag FLAG_ITEM_TM14
	removeitem ITEM_TM14
	goto BackUpTMs_40

BackUpTMs_44:
	setflag FLAG_ITEM_TM15
	removeitem ITEM_TM15
	goto BackUpTMs_43

BackUpTMs_47:
	setflag FLAG_ITEM_TM16
	removeitem ITEM_TM16
	goto BackUpTMs_46

BackUpTMs_50:
	setflag FLAG_ITEM_TM17
	removeitem ITEM_TM17
	goto BackUpTMs_49

BackUpTMs_53:
	setflag FLAG_ITEM_TM18
	removeitem ITEM_TM18
	goto BackUpTMs_52

BackUpTMs_56:
	setflag FLAG_ITEM_TM19
	removeitem ITEM_TM19
	goto BackUpTMs_55

BackUpTMs_59:
	setflag FLAG_ITEM_TM20
	removeitem ITEM_TM20
	goto BackUpTMs_58

BackUpTMs_62:
	setflag FLAG_ITEM_TM21
	removeitem ITEM_TM21
	goto BackUpTMs_61

BackUpTMs_65:
	setflag FLAG_ITEM_TM22
	removeitem ITEM_TM22
	goto BackUpTMs_64

BackUpTMs_68:
	setflag FLAG_ITEM_TM23
	removeitem ITEM_TM23
	goto BackUpTMs_67

BackUpTMs_71:
	setflag FLAG_ITEM_TM24
	removeitem ITEM_TM24
	goto BackUpTMs_70

BackUpTMs_74:
	setflag FLAG_ITEM_TM25
	removeitem ITEM_TM25
	goto BackUpTMs_73

BackUpTMs_77:
	setflag FLAG_ITEM_TM26
	removeitem ITEM_TM26
	goto BackUpTMs_76

BackUpTMs_80:
	setflag FLAG_ITEM_TM27
	removeitem ITEM_TM27
	goto BackUpTMs_79

BackUpTMs_83:
	setflag FLAG_ITEM_TM28
	removeitem ITEM_TM28
	goto BackUpTMs_82

BackUpTMs_86:
	setflag FLAG_ITEM_TM29
	removeitem ITEM_TM29
	goto BackUpTMs_85

BackUpTMs_89:
	setflag FLAG_ITEM_TM30
	removeitem ITEM_TM30
	goto BackUpTMs_88

BackUpTMs_92:
	setflag FLAG_ITEM_TM31
	removeitem ITEM_TM31
	goto BackUpTMs_91

BackUpTMs_95:
	setflag FLAG_ITEM_TM32
	removeitem ITEM_TM32
	goto BackUpTMs_94

BackUpTMs_98:
	setflag FLAG_ITEM_TM33
	removeitem ITEM_TM33
	goto BackUpTMs_97

BackUpTMs_101:
	setflag FLAG_ITEM_TM34
	removeitem ITEM_TM34
	goto BackUpTMs_100

BackUpTMs_104:
	setflag FLAG_ITEM_TM35
	removeitem ITEM_TM35
	goto BackUpTMs_103

BackUpTMs_107:
	setflag FLAG_ITEM_TM36
	removeitem ITEM_TM36
	goto BackUpTMs_106

BackUpTMs_110:
	setflag FLAG_ITEM_TM37
	removeitem ITEM_TM37
	goto BackUpTMs_109

BackUpTMs_113:
	setflag FLAG_ITEM_TM38
	removeitem ITEM_TM38
	goto BackUpTMs_112

BackUpTMs_116:
	setflag FLAG_ITEM_TM39
	removeitem ITEM_TM39
	goto BackUpTMs_115

BackUpTMs_119:
	setflag FLAG_ITEM_TM40
	removeitem ITEM_TM40
	goto BackUpTMs_118

BackUpTMs_122:
	setflag FLAG_ITEM_TM41
	removeitem ITEM_TM41
	goto BackUpTMs_121

BackUpTMs_125:
	setflag FLAG_ITEM_TM42
	removeitem ITEM_TM42
	goto BackUpTMs_124

BackUpTMs_128:
	setflag FLAG_ITEM_TM43
	removeitem ITEM_TM43
	goto BackUpTMs_127

BackUpTMs_131:
	setflag FLAG_ITEM_TM44
	removeitem ITEM_TM44
	goto BackUpTMs_130

BackUpTMs_134:
	setflag FLAG_ITEM_TM45
	removeitem ITEM_TM45
	goto BackUpTMs_133

BackUpTMs_137:
	setflag FLAG_ITEM_TM46
	removeitem ITEM_TM46
	goto BackUpTMs_136

BackUpTMs_140:
	setflag FLAG_ITEM_TM47
	removeitem ITEM_TM47
	goto BackUpTMs_139

BackUpTMs_143:
	setflag FLAG_ITEM_TM48
	removeitem ITEM_TM48
	goto BackUpTMs_142

BackUpTMs_146:
	setflag FLAG_ITEM_TM49
	removeitem ITEM_TM49
	goto BackUpTMs_145

BackUpTMs_149:
	setflag FLAG_ITEM_TM50
	removeitem ITEM_TM50
	goto BackUpTMs_148

BackUpTMs_152:
	setflag FLAG_ITEM_TM51
	removeitem ITEM_TM51
	goto BackUpTMs_151

BackUpTMs_155:
	setflag FLAG_ITEM_TM52
	removeitem ITEM_TM52
	goto BackUpTMs_154

BackUpTMs_158:
	setflag FLAG_ITEM_TM53
	removeitem ITEM_TM53
	goto BackUpTMs_157

BackUpTMs_161:
	setflag FLAG_ITEM_TM54
	removeitem ITEM_TM54
	goto BackUpTMs_160

BackUpTMs_164:
	setflag FLAG_ITEM_TM55
	removeitem ITEM_TM55
	goto BackUpTMs_163

BackUpTMs_167:
	setflag FLAG_ITEM_TM56
	removeitem ITEM_TM56
	goto BackUpTMs_166

BackUpTMs_170:
	setflag FLAG_ITEM_TM57
	removeitem ITEM_TM57
	goto BackUpTMs_169

BackUpTMs_173:
	setflag FLAG_ITEM_TM58
	removeitem ITEM_TM58
	goto BackUpTMs_172

BackUpTMs_176:
	setflag FLAG_ITEM_TM59
	removeitem ITEM_TM59
	goto BackUpTMs_175

BackUpTMs_179:
	setflag FLAG_ITEM_TM60
	removeitem ITEM_TM60
	goto BackUpTMs_178

BackUpTMs_182:
	setflag FLAG_ITEM_TM61
	removeitem ITEM_TM61
	goto BackUpTMs_181

BackUpTMs_185:
	setflag FLAG_ITEM_TM62
	removeitem ITEM_TM62
	goto BackUpTMs_184

BackUpTMs_188:
	setflag FLAG_ITEM_TM63
	removeitem ITEM_TM63
	goto BackUpTMs_187

BackUpTMs_191:
	setflag FLAG_ITEM_TM64
	removeitem ITEM_TM64
	goto BackUpTMs_190

BackUpTMs_194:
	setflag FLAG_ITEM_TM65
	removeitem ITEM_TM65
	goto BackUpTMs_193

BackUpTMs_197:
	setflag FLAG_ITEM_TM66
	removeitem ITEM_TM66
	goto BackUpTMs_196

BackUpTMs_200:
	setflag FLAG_ITEM_TM67
	removeitem ITEM_TM67
	goto BackUpTMs_199

BackUpTMs_203:
	setflag FLAG_ITEM_TM68
	removeitem ITEM_TM68
	goto BackUpTMs_202

BackUpTMs_206:
	setflag FLAG_ITEM_TM69
	removeitem ITEM_TM69
	goto BackUpTMs_205

BackUpTMs_209:
	setflag FLAG_ITEM_TM70
	removeitem ITEM_TM70
	goto BackUpTMs_208

BackUpTMs_212:
	setflag FLAG_ITEM_TM71
	removeitem ITEM_TM71
	goto BackUpTMs_211

BackUpTMs_215:
	setflag FLAG_ITEM_TM72
	removeitem ITEM_TM72
	goto BackUpTMs_214

BackUpTMs_218:
	setflag FLAG_ITEM_TM73
	removeitem ITEM_TM73
	goto BackUpTMs_217

BackUpTMs_221:
	setflag FLAG_ITEM_TM74
	removeitem ITEM_TM74
	goto BackUpTMs_220

BackUpTMs_224:
	setflag FLAG_ITEM_TM75
	removeitem ITEM_TM75
	goto BackUpTMs_223

BackUpTMs_227:
	setflag FLAG_ITEM_TM76
	removeitem ITEM_TM76
	goto BackUpTMs_226

BackUpTMs_230:
	setflag FLAG_ITEM_TM77
	removeitem ITEM_TM77
	goto BackUpTMs_229

BackUpTMs_233:
	setflag FLAG_ITEM_TM78
	removeitem ITEM_TM78
	goto BackUpTMs_232

BackUpTMs_236:
	setflag FLAG_ITEM_TM79
	removeitem ITEM_TM79
	goto BackUpTMs_235

BackUpTMs_239:
	setflag FLAG_ITEM_TM80
	removeitem ITEM_TM80
	goto BackUpTMs_238

BackUpTMs_242:
	setflag FLAG_ITEM_TM81
	removeitem ITEM_TM81
	goto BackUpTMs_241

BackUpTMs_245:
	setflag FLAG_ITEM_TM82
	removeitem ITEM_TM82
	goto BackUpTMs_244

BackUpTMs_248:
	setflag FLAG_ITEM_TM83
	removeitem ITEM_TM83
	goto BackUpTMs_247

BackUpTMs_251:
	setflag FLAG_ITEM_TM84
	removeitem ITEM_TM84
	goto BackUpTMs_250

BackUpTMs_254:
	setflag FLAG_ITEM_TM85
	removeitem ITEM_TM85
	goto BackUpTMs_253

BackUpTMs_257:
	setflag FLAG_ITEM_TM86
	removeitem ITEM_TM86
	goto BackUpTMs_256

BackUpTMs_260:
	setflag FLAG_ITEM_TM87
	removeitem ITEM_TM87
	goto BackUpTMs_259

BackUpTMs_263:
	setflag FLAG_ITEM_TM88
	removeitem ITEM_TM88
	goto BackUpTMs_262

BackUpTMs_266:
	setflag FLAG_ITEM_TM89
	removeitem ITEM_TM89
	goto BackUpTMs_265

BackUpTMs_269:
	setflag FLAG_ITEM_TM90
	removeitem ITEM_TM90
	goto BackUpTMs_268

BackUpTMs_272:
	setflag FLAG_ITEM_TM91
	removeitem ITEM_TM91
	goto BackUpTMs_271

BackUpTMs_275:
	setflag FLAG_ITEM_TM92
	removeitem ITEM_TM92
	goto BackUpTMs_274

BackUpTMs_278:
	setflag FLAG_ITEM_TM93
	removeitem ITEM_TM93
	goto BackUpTMs_277

BackUpTMs_281:
	setflag FLAG_ITEM_TM94
	removeitem ITEM_TM94
	goto BackUpTMs_280

BackUpTMs_284:
	setflag FLAG_ITEM_TM95
	removeitem ITEM_TM95
	goto BackUpTMs_283

BackUpTMs_287:
	setflag FLAG_ITEM_TM96
	removeitem ITEM_TM96
	goto BackUpTMs_286

BackUpTMs_290:
	setflag FLAG_ITEM_TM97
	removeitem ITEM_TM97
	goto BackUpTMs_289

BackUpTMs_293:
	setflag FLAG_ITEM_TM98
	removeitem ITEM_TM98
	goto BackUpTMs_292

BackUpTMs_296:
	setflag FLAG_ITEM_TM99
	removeitem ITEM_TM99
	goto BackUpTMs_295

BackUpTMs_299:
	setflag FLAG_ITEM_TM100
	removeitem ITEM_TM100
	goto BackUpTMs_298

BackUpTMs_302:
	setflag FLAG_ITEM_HM01
	removeitem ITEM_HM01
	goto BackUpTMs_301

BackUpTMs_305:
	setflag FLAG_ITEM_HM02
	removeitem ITEM_HM02
	goto BackUpTMs_304

BackUpTMs_308:
	setflag FLAG_ITEM_HM03
	removeitem ITEM_HM03
	goto BackUpTMs_307

BackUpTMs_311:
	setflag FLAG_ITEM_HM04
	removeitem ITEM_HM04
	goto BackUpTMs_310

BackUpTMs_314:
	setflag FLAG_ITEM_HM05
	removeitem ITEM_HM05
	goto BackUpTMs_313

BackUpTMs_317:
	setflag FLAG_ITEM_HM06
	removeitem ITEM_HM06
	goto BackUpTMs_316

BackUpTMs_319:
	setflag FLAG_ITEM_HM07
	removeitem ITEM_HM07
	return


ReturnTMs::
	goto_if_set FLAG_ITEM_TM01, ReturnTMs_2
ReturnTMs_1:
	goto_if_set FLAG_ITEM_TM02, ReturnTMs_5
ReturnTMs_4:
	goto_if_set FLAG_ITEM_TM03, ReturnTMs_8
ReturnTMs_7:
	goto_if_set FLAG_ITEM_TM04, ReturnTMs_11
ReturnTMs_10:
	goto_if_set FLAG_ITEM_TM05, ReturnTMs_14
ReturnTMs_13:
	goto_if_set FLAG_ITEM_TM06, ReturnTMs_17
ReturnTMs_16:
	goto_if_set FLAG_ITEM_TM07, ReturnTMs_20
ReturnTMs_19:
	goto_if_set FLAG_ITEM_TM08, ReturnTMs_23
ReturnTMs_22:
	goto_if_set FLAG_ITEM_TM09, ReturnTMs_26
ReturnTMs_25:
	goto_if_set FLAG_ITEM_TM10, ReturnTMs_29
ReturnTMs_28:
	goto_if_set FLAG_ITEM_TM11, ReturnTMs_32
ReturnTMs_31:
	goto_if_set FLAG_ITEM_TM12, ReturnTMs_35
ReturnTMs_34:
	goto_if_set FLAG_ITEM_TM13, ReturnTMs_38
ReturnTMs_37:
	goto_if_set FLAG_ITEM_TM14, ReturnTMs_41
ReturnTMs_40:
	goto_if_set FLAG_ITEM_TM15, ReturnTMs_44
ReturnTMs_43:
	goto_if_set FLAG_ITEM_TM16, ReturnTMs_47
ReturnTMs_46:
	goto_if_set FLAG_ITEM_TM17, ReturnTMs_50
ReturnTMs_49:
	goto_if_set FLAG_ITEM_TM18, ReturnTMs_53
ReturnTMs_52:
	goto_if_set FLAG_ITEM_TM19, ReturnTMs_56
ReturnTMs_55:
	goto_if_set FLAG_ITEM_TM20, ReturnTMs_59
ReturnTMs_58:
	goto_if_set FLAG_ITEM_TM21, ReturnTMs_62
ReturnTMs_61:
	goto_if_set FLAG_ITEM_TM22, ReturnTMs_65
ReturnTMs_64:
	goto_if_set FLAG_ITEM_TM23, ReturnTMs_68
ReturnTMs_67:
	goto_if_set FLAG_ITEM_TM24, ReturnTMs_71
ReturnTMs_70:
	goto_if_set FLAG_ITEM_TM25, ReturnTMs_74
ReturnTMs_73:
	goto_if_set FLAG_ITEM_TM26, ReturnTMs_77
ReturnTMs_76:
	goto_if_set FLAG_ITEM_TM27, ReturnTMs_80
ReturnTMs_79:
	goto_if_set FLAG_ITEM_TM28, ReturnTMs_83
ReturnTMs_82:
	goto_if_set FLAG_ITEM_TM29, ReturnTMs_86
ReturnTMs_85:
	goto_if_set FLAG_ITEM_TM30, ReturnTMs_89
ReturnTMs_88:
	goto_if_set FLAG_ITEM_TM31, ReturnTMs_92
ReturnTMs_91:
	goto_if_set FLAG_ITEM_TM32, ReturnTMs_95
ReturnTMs_94:
	goto_if_set FLAG_ITEM_TM33, ReturnTMs_98
ReturnTMs_97:
	goto_if_set FLAG_ITEM_TM34, ReturnTMs_101
ReturnTMs_100:
	goto_if_set FLAG_ITEM_TM35, ReturnTMs_104
ReturnTMs_103:
	goto_if_set FLAG_ITEM_TM36, ReturnTMs_107
ReturnTMs_106:
	goto_if_set FLAG_ITEM_TM37, ReturnTMs_110
ReturnTMs_109:
	goto_if_set FLAG_ITEM_TM38, ReturnTMs_113
ReturnTMs_112:
	goto_if_set FLAG_ITEM_TM39, ReturnTMs_116
ReturnTMs_115:
	goto_if_set FLAG_ITEM_TM40, ReturnTMs_119
ReturnTMs_118:
	goto_if_set FLAG_ITEM_TM41, ReturnTMs_122
ReturnTMs_121:
	goto_if_set FLAG_ITEM_TM42, ReturnTMs_125
ReturnTMs_124:
	goto_if_set FLAG_ITEM_TM43, ReturnTMs_128
ReturnTMs_127:
	goto_if_set FLAG_ITEM_TM44, ReturnTMs_131
ReturnTMs_130:
	goto_if_set FLAG_ITEM_TM45, ReturnTMs_134
ReturnTMs_133:
	goto_if_set FLAG_ITEM_TM46, ReturnTMs_137
ReturnTMs_136:
	goto_if_set FLAG_ITEM_TM47, ReturnTMs_140
ReturnTMs_139:
	goto_if_set FLAG_ITEM_TM48, ReturnTMs_143
ReturnTMs_142:
	goto_if_set FLAG_ITEM_TM49, ReturnTMs_146
ReturnTMs_145:
	goto_if_set FLAG_ITEM_TM50, ReturnTMs_149
ReturnTMs_148:
	goto_if_set FLAG_ITEM_TM51, ReturnTMs_152
ReturnTMs_151:
	goto_if_set FLAG_ITEM_TM52, ReturnTMs_155
ReturnTMs_154:
	goto_if_set FLAG_ITEM_TM53, ReturnTMs_158
ReturnTMs_157:
	goto_if_set FLAG_ITEM_TM54, ReturnTMs_161
ReturnTMs_160:
	goto_if_set FLAG_ITEM_TM55, ReturnTMs_164
ReturnTMs_163:
	goto_if_set FLAG_ITEM_TM56, ReturnTMs_167
ReturnTMs_166:
	goto_if_set FLAG_ITEM_TM57, ReturnTMs_170
ReturnTMs_169:
	goto_if_set FLAG_ITEM_TM58, ReturnTMs_173
ReturnTMs_172:
	goto_if_set FLAG_ITEM_TM59, ReturnTMs_176
ReturnTMs_175:
	goto_if_set FLAG_ITEM_TM60, ReturnTMs_179
ReturnTMs_178:
	goto_if_set FLAG_ITEM_TM61, ReturnTMs_182
ReturnTMs_181:
	goto_if_set FLAG_ITEM_TM62, ReturnTMs_185
ReturnTMs_184:
	goto_if_set FLAG_ITEM_TM63, ReturnTMs_188
ReturnTMs_187:
	goto_if_set FLAG_ITEM_TM64, ReturnTMs_191
ReturnTMs_190:
	goto_if_set FLAG_ITEM_TM65, ReturnTMs_194
ReturnTMs_193:
	goto_if_set FLAG_ITEM_TM66, ReturnTMs_197
ReturnTMs_196:
	goto_if_set FLAG_ITEM_TM67, ReturnTMs_200
ReturnTMs_199:
	goto_if_set FLAG_ITEM_TM68, ReturnTMs_203
ReturnTMs_202:
	goto_if_set FLAG_ITEM_TM69, ReturnTMs_206
ReturnTMs_205:
	goto_if_set FLAG_ITEM_TM70, ReturnTMs_209
ReturnTMs_208:
	goto_if_set FLAG_ITEM_TM71, ReturnTMs_212
ReturnTMs_211:
	goto_if_set FLAG_ITEM_TM72, ReturnTMs_215
ReturnTMs_214:
	goto_if_set FLAG_ITEM_TM73, ReturnTMs_218
ReturnTMs_217:
	goto_if_set FLAG_ITEM_TM74, ReturnTMs_221
ReturnTMs_220:
	goto_if_set FLAG_ITEM_TM75, ReturnTMs_224
ReturnTMs_223:
	goto_if_set FLAG_ITEM_TM76, ReturnTMs_227
ReturnTMs_226:
	goto_if_set FLAG_ITEM_TM77, ReturnTMs_230
ReturnTMs_229:
	goto_if_set FLAG_ITEM_TM78, ReturnTMs_233
ReturnTMs_232:
	goto_if_set FLAG_ITEM_TM79, ReturnTMs_236
ReturnTMs_235:
	goto_if_set FLAG_ITEM_TM80, ReturnTMs_239
ReturnTMs_238:
	goto_if_set FLAG_ITEM_TM81, ReturnTMs_242
ReturnTMs_241:
	goto_if_set FLAG_ITEM_TM82, ReturnTMs_245
ReturnTMs_244:
	goto_if_set FLAG_ITEM_TM83, ReturnTMs_248
ReturnTMs_247:
	goto_if_set FLAG_ITEM_TM84, ReturnTMs_251
ReturnTMs_250:
	goto_if_set FLAG_ITEM_TM85, ReturnTMs_254
ReturnTMs_253:
	goto_if_set FLAG_ITEM_TM86, ReturnTMs_257
ReturnTMs_256:
	goto_if_set FLAG_ITEM_TM87, ReturnTMs_260
ReturnTMs_259:
	goto_if_set FLAG_ITEM_TM88, ReturnTMs_263
ReturnTMs_262:
	goto_if_set FLAG_ITEM_TM89, ReturnTMs_266
ReturnTMs_265:
	goto_if_set FLAG_ITEM_TM90, ReturnTMs_269
ReturnTMs_268:
	goto_if_set FLAG_ITEM_TM91, ReturnTMs_272
ReturnTMs_271:
	goto_if_set FLAG_ITEM_TM92, ReturnTMs_275
ReturnTMs_274:
	goto_if_set FLAG_ITEM_TM93, ReturnTMs_278
ReturnTMs_277:
	goto_if_set FLAG_ITEM_TM94, ReturnTMs_281
ReturnTMs_280:
	goto_if_set FLAG_ITEM_TM95, ReturnTMs_284
ReturnTMs_283:
	goto_if_set FLAG_ITEM_TM96, ReturnTMs_287
ReturnTMs_286:
	goto_if_set FLAG_ITEM_TM97, ReturnTMs_290
ReturnTMs_289:
	goto_if_set FLAG_ITEM_TM98, ReturnTMs_293
ReturnTMs_292:
	goto_if_set FLAG_ITEM_TM99, ReturnTMs_296
ReturnTMs_295:
	goto_if_set FLAG_ITEM_TM100, ReturnTMs_299
ReturnTMs_298:
	goto_if_set FLAG_ITEM_HM01, ReturnTMs_302
ReturnTMs_301:
	goto_if_set FLAG_ITEM_HM02, ReturnTMs_305
ReturnTMs_304:
	goto_if_set FLAG_ITEM_HM03, ReturnTMs_308
ReturnTMs_307:
	goto_if_set FLAG_ITEM_HM04, ReturnTMs_311
ReturnTMs_310:
	goto_if_set FLAG_ITEM_HM05, ReturnTMs_314
ReturnTMs_313:
	goto_if_set FLAG_ITEM_HM06, ReturnTMs_317
ReturnTMs_316:
	goto_if_set FLAG_ITEM_HM07, ReturnTMs_320
ReturnTMs_319:
	return

ReturnTMs_2:
	additem ITEM_TM01
	clearflag FLAG_ITEM_TM01
	goto ReturnTMs_1

ReturnTMs_5:
	additem ITEM_TM02
	clearflag FLAG_ITEM_TM02
	goto ReturnTMs_4

ReturnTMs_8:
	additem ITEM_TM03
	clearflag FLAG_ITEM_TM03
	goto ReturnTMs_7

ReturnTMs_11:
	additem ITEM_TM04
	clearflag FLAG_ITEM_TM04
	goto ReturnTMs_10

ReturnTMs_14:
	additem ITEM_TM05
	clearflag FLAG_ITEM_TM05
	goto ReturnTMs_13

ReturnTMs_17:
	additem ITEM_TM06
	clearflag FLAG_ITEM_TM06
	goto ReturnTMs_16

ReturnTMs_20:
	additem ITEM_TM07
	clearflag FLAG_ITEM_TM07
	goto ReturnTMs_19

ReturnTMs_23:
	additem ITEM_TM08
	clearflag FLAG_ITEM_TM08
	goto ReturnTMs_22

ReturnTMs_26:
	additem ITEM_TM09
	clearflag FLAG_ITEM_TM09
	goto ReturnTMs_25

ReturnTMs_29:
	additem ITEM_TM10
	clearflag FLAG_ITEM_TM10
	goto ReturnTMs_28

ReturnTMs_32:
	additem ITEM_TM11
	clearflag FLAG_ITEM_TM11
	goto ReturnTMs_31

ReturnTMs_35:
	additem ITEM_TM12
	clearflag FLAG_ITEM_TM12
	goto ReturnTMs_34

ReturnTMs_38:
	additem ITEM_TM13
	clearflag FLAG_ITEM_TM13
	goto ReturnTMs_37

ReturnTMs_41:
	additem ITEM_TM14
	clearflag FLAG_ITEM_TM14
	goto ReturnTMs_40

ReturnTMs_44:
	additem ITEM_TM15
	clearflag FLAG_ITEM_TM15
	goto ReturnTMs_43

ReturnTMs_47:
	additem ITEM_TM16
	clearflag FLAG_ITEM_TM16
	goto ReturnTMs_46

ReturnTMs_50:
	additem ITEM_TM17
	clearflag FLAG_ITEM_TM17
	goto ReturnTMs_49

ReturnTMs_53:
	additem ITEM_TM18
	clearflag FLAG_ITEM_TM18
	goto ReturnTMs_52

ReturnTMs_56:
	additem ITEM_TM19
	clearflag FLAG_ITEM_TM19
	goto ReturnTMs_55

ReturnTMs_59:
	additem ITEM_TM20
	clearflag FLAG_ITEM_TM20
	goto ReturnTMs_58

ReturnTMs_62:
	additem ITEM_TM21
	clearflag FLAG_ITEM_TM21
	goto ReturnTMs_61

ReturnTMs_65:
	additem ITEM_TM22
	clearflag FLAG_ITEM_TM22
	goto ReturnTMs_64

ReturnTMs_68:
	additem ITEM_TM23
	clearflag FLAG_ITEM_TM23
	goto ReturnTMs_67

ReturnTMs_71:
	additem ITEM_TM24
	clearflag FLAG_ITEM_TM24
	goto ReturnTMs_70

ReturnTMs_74:
	additem ITEM_TM25
	clearflag FLAG_ITEM_TM25
	goto ReturnTMs_73

ReturnTMs_77:
	additem ITEM_TM26
	clearflag FLAG_ITEM_TM26
	goto ReturnTMs_76

ReturnTMs_80:
	additem ITEM_TM27
	clearflag FLAG_ITEM_TM27
	goto ReturnTMs_79

ReturnTMs_83:
	additem ITEM_TM28
	clearflag FLAG_ITEM_TM28
	goto ReturnTMs_82

ReturnTMs_86:
	additem ITEM_TM29
	clearflag FLAG_ITEM_TM29
	goto ReturnTMs_85

ReturnTMs_89:
	additem ITEM_TM30
	clearflag FLAG_ITEM_TM30
	goto ReturnTMs_88

ReturnTMs_92:
	additem ITEM_TM31
	clearflag FLAG_ITEM_TM31
	goto ReturnTMs_91

ReturnTMs_95:
	additem ITEM_TM32
	clearflag FLAG_ITEM_TM32
	goto ReturnTMs_94

ReturnTMs_98:
	additem ITEM_TM33
	clearflag FLAG_ITEM_TM33
	goto ReturnTMs_97

ReturnTMs_101:
	additem ITEM_TM34
	clearflag FLAG_ITEM_TM34
	goto ReturnTMs_100

ReturnTMs_104:
	additem ITEM_TM35
	clearflag FLAG_ITEM_TM35
	goto ReturnTMs_103

ReturnTMs_107:
	additem ITEM_TM36
	clearflag FLAG_ITEM_TM36
	goto ReturnTMs_106

ReturnTMs_110:
	additem ITEM_TM37
	clearflag FLAG_ITEM_TM37
	goto ReturnTMs_109

ReturnTMs_113:
	additem ITEM_TM38
	clearflag FLAG_ITEM_TM38
	goto ReturnTMs_112

ReturnTMs_116:
	additem ITEM_TM39
	clearflag FLAG_ITEM_TM39
	goto ReturnTMs_115

ReturnTMs_119:
	additem ITEM_TM40
	clearflag FLAG_ITEM_TM40
	goto ReturnTMs_118

ReturnTMs_122:
	additem ITEM_TM41
	clearflag FLAG_ITEM_TM41
	goto ReturnTMs_121

ReturnTMs_125:
	additem ITEM_TM42
	clearflag FLAG_ITEM_TM42
	goto ReturnTMs_124

ReturnTMs_128:
	additem ITEM_TM43
	clearflag FLAG_ITEM_TM43
	goto ReturnTMs_127

ReturnTMs_131:
	additem ITEM_TM44
	clearflag FLAG_ITEM_TM44
	goto ReturnTMs_130

ReturnTMs_134:
	additem ITEM_TM45
	clearflag FLAG_ITEM_TM45
	goto ReturnTMs_133

ReturnTMs_137:
	additem ITEM_TM46
	clearflag FLAG_ITEM_TM46
	goto ReturnTMs_136

ReturnTMs_140:
	additem ITEM_TM47
	clearflag FLAG_ITEM_TM47
	goto ReturnTMs_139

ReturnTMs_143:
	additem ITEM_TM48
	clearflag FLAG_ITEM_TM48
	goto ReturnTMs_142

ReturnTMs_146:
	additem ITEM_TM49
	clearflag FLAG_ITEM_TM49
	goto ReturnTMs_145

ReturnTMs_149:
	additem ITEM_TM50
	clearflag FLAG_ITEM_TM50
	goto ReturnTMs_148

ReturnTMs_152:
	additem ITEM_TM51
	clearflag FLAG_ITEM_TM51
	goto ReturnTMs_151

ReturnTMs_155:
	additem ITEM_TM52
	clearflag FLAG_ITEM_TM52
	goto ReturnTMs_154

ReturnTMs_158:
	additem ITEM_TM53
	clearflag FLAG_ITEM_TM53
	goto ReturnTMs_157

ReturnTMs_161:
	additem ITEM_TM54
	clearflag FLAG_ITEM_TM54
	goto ReturnTMs_160

ReturnTMs_164:
	additem ITEM_TM55
	clearflag FLAG_ITEM_TM55
	goto ReturnTMs_163

ReturnTMs_167:
	additem ITEM_TM56
	clearflag FLAG_ITEM_TM56
	goto ReturnTMs_166

ReturnTMs_170:
	additem ITEM_TM57
	clearflag FLAG_ITEM_TM57
	goto ReturnTMs_169

ReturnTMs_173:
	additem ITEM_TM58
	clearflag FLAG_ITEM_TM58
	goto ReturnTMs_172

ReturnTMs_176:
	additem ITEM_TM59
	clearflag FLAG_ITEM_TM59
	goto ReturnTMs_175

ReturnTMs_179:
	additem ITEM_TM60
	clearflag FLAG_ITEM_TM60
	goto ReturnTMs_178

ReturnTMs_182:
	additem ITEM_TM61
	clearflag FLAG_ITEM_TM61
	goto ReturnTMs_181

ReturnTMs_185:
	additem ITEM_TM62
	clearflag FLAG_ITEM_TM62
	goto ReturnTMs_184

ReturnTMs_188:
	additem ITEM_TM63
	clearflag FLAG_ITEM_TM63
	goto ReturnTMs_187

ReturnTMs_191:
	additem ITEM_TM64
	clearflag FLAG_ITEM_TM64
	goto ReturnTMs_190

ReturnTMs_194:
	additem ITEM_TM65
	clearflag FLAG_ITEM_TM65
	goto ReturnTMs_193

ReturnTMs_197:
	additem ITEM_TM66
	clearflag FLAG_ITEM_TM66
	goto ReturnTMs_196

ReturnTMs_200:
	additem ITEM_TM67
	clearflag FLAG_ITEM_TM67
	goto ReturnTMs_199

ReturnTMs_203:
	additem ITEM_TM68
	clearflag FLAG_ITEM_TM68
	goto ReturnTMs_202

ReturnTMs_206:
	additem ITEM_TM69
	clearflag FLAG_ITEM_TM69
	goto ReturnTMs_205

ReturnTMs_209:
	additem ITEM_TM70
	clearflag FLAG_ITEM_TM70
	goto ReturnTMs_208

ReturnTMs_212:
	additem ITEM_TM71
	clearflag FLAG_ITEM_TM71
	goto ReturnTMs_211

ReturnTMs_215:
	additem ITEM_TM72
	clearflag FLAG_ITEM_TM72
	goto ReturnTMs_214

ReturnTMs_218:
	additem ITEM_TM73
	clearflag FLAG_ITEM_TM73
	goto ReturnTMs_217

ReturnTMs_221:
	additem ITEM_TM74
	clearflag FLAG_ITEM_TM74
	goto ReturnTMs_220

ReturnTMs_224:
	additem ITEM_TM75
	clearflag FLAG_ITEM_TM75
	goto ReturnTMs_223

ReturnTMs_227:
	additem ITEM_TM76
	clearflag FLAG_ITEM_TM76
	goto ReturnTMs_226

ReturnTMs_230:
	additem ITEM_TM77
	clearflag FLAG_ITEM_TM77
	goto ReturnTMs_229

ReturnTMs_233:
	additem ITEM_TM78
	clearflag FLAG_ITEM_TM78
	goto ReturnTMs_232

ReturnTMs_236:
	additem ITEM_TM79
	clearflag FLAG_ITEM_TM79
	goto ReturnTMs_235

ReturnTMs_239:
	additem ITEM_TM80
	clearflag FLAG_ITEM_TM80
	goto ReturnTMs_238

ReturnTMs_242:
	additem ITEM_TM81
	clearflag FLAG_ITEM_TM81
	goto ReturnTMs_241

ReturnTMs_245:
	additem ITEM_TM82
	clearflag FLAG_ITEM_TM82
	goto ReturnTMs_244

ReturnTMs_248:
	additem ITEM_TM83
	clearflag FLAG_ITEM_TM83
	goto ReturnTMs_247

ReturnTMs_251:
	additem ITEM_TM84
	clearflag FLAG_ITEM_TM84
	goto ReturnTMs_250

ReturnTMs_254:
	additem ITEM_TM85
	clearflag FLAG_ITEM_TM85
	goto ReturnTMs_253

ReturnTMs_257:
	additem ITEM_TM86
	clearflag FLAG_ITEM_TM86
	goto ReturnTMs_256

ReturnTMs_260:
	additem ITEM_TM87
	clearflag FLAG_ITEM_TM87
	goto ReturnTMs_259

ReturnTMs_263:
	additem ITEM_TM88
	clearflag FLAG_ITEM_TM88
	goto ReturnTMs_262

ReturnTMs_266:
	additem ITEM_TM89
	clearflag FLAG_ITEM_TM89
	goto ReturnTMs_265

ReturnTMs_269:
	additem ITEM_TM90
	clearflag FLAG_ITEM_TM90
	goto ReturnTMs_268

ReturnTMs_272:
	additem ITEM_TM91
	clearflag FLAG_ITEM_TM91
	goto ReturnTMs_271

ReturnTMs_275:
	additem ITEM_TM92
	clearflag FLAG_ITEM_TM92
	goto ReturnTMs_274

ReturnTMs_278:
	additem ITEM_TM93
	clearflag FLAG_ITEM_TM93
	goto ReturnTMs_277

ReturnTMs_281:
	additem ITEM_TM94
	clearflag FLAG_ITEM_TM94
	goto ReturnTMs_280

ReturnTMs_284:
	additem ITEM_TM95
	clearflag FLAG_ITEM_TM95
	goto ReturnTMs_283

ReturnTMs_287:
	additem ITEM_TM96
	clearflag FLAG_ITEM_TM96
	goto ReturnTMs_286

ReturnTMs_290:
	additem ITEM_TM97
	clearflag FLAG_ITEM_TM97
	goto ReturnTMs_289

ReturnTMs_293:
	additem ITEM_TM98
	clearflag FLAG_ITEM_TM98
	goto ReturnTMs_292

ReturnTMs_296:
	additem ITEM_TM99
	clearflag FLAG_ITEM_TM99
	goto ReturnTMs_295

ReturnTMs_299:
	additem ITEM_TM100
	clearflag FLAG_ITEM_TM100
	goto ReturnTMs_298

ReturnTMs_302:
	additem ITEM_HM01
	clearflag FLAG_ITEM_HM01
	goto ReturnTMs_301

ReturnTMs_305:
	additem ITEM_HM02
	clearflag FLAG_ITEM_HM02
	goto ReturnTMs_304

ReturnTMs_308:
	additem ITEM_HM03
	clearflag FLAG_ITEM_HM03
	goto ReturnTMs_307

ReturnTMs_311:
	additem ITEM_HM04
	clearflag FLAG_ITEM_HM04
	goto ReturnTMs_310

ReturnTMs_314:
	additem ITEM_HM05
	clearflag FLAG_ITEM_HM05
	goto ReturnTMs_313

ReturnTMs_317:
	additem ITEM_HM06
	clearflag FLAG_ITEM_HM06
	goto ReturnTMs_316

ReturnTMs_320:
	additem ITEM_HM07
	clearflag FLAG_ITEM_HM07
	goto ReturnTMs_319


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
	.string "Rockliffe town.\p"
	.string "11. HM moves can no longer forgotten\n"
	.string "(unless visiting a move deleter)$"

SceneAltered::
	.string "An earlier story scene of\n"
	.string "Team Rocket's assault on Devon\l"
	.string "Corp. has had its dialogue\l"
	.string "slightly altered, which affects\l"
	.string "the upcoming story.\p"
	.string "Would you like to view the\n"
	.string "altered scene?$"

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

IntermediaryUpdateScript_Text::
	.string "Hello, I am here to convert your save\n"
	.string "so that it's compatible with the next\l"
	.string "major update.\p"
	.string "After converting, please do not\n"
	.string "continue playing until you've\l"
	.string "updated the game.\p"
	.string "Are you ready to convert\n"
	.string "your save?$"

TMsAreNowSecured::
	.string "The save is now prepared for the\n"
	.string "next update.\p"
	.string "Please save your game and update\n"
	.string "to the latest version of the hack.$"

SaveIsNowUpdated::
	.string "Your progress is now updated\n"
	.string "to the latest version.\p"
	.string "Don't forget to save your game!$"
