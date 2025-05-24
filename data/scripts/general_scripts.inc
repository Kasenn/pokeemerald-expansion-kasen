RopeBridgeScript::
	playse SE_LEDGE
	applymovement 0xFF, RopeBridgeScript_Movement_0
	waitmovement 0
	release
	return


Script_SinkOrRisePlayer::
	playersinkinsnow
	release
	return


CountGymBadges::
	goto_if_set FLAG_BADGE08_GET, CountGymBadges_2
	goto_if_set FLAG_BADGE07_GET, CountGymBadges_3
	goto_if_set FLAG_BADGE06_GET, CountGymBadges_4
	goto_if_set FLAG_BADGE05_GET, CountGymBadges_5
	goto_if_set FLAG_BADGE04_GET, CountGymBadges_6
	goto_if_set FLAG_BADGE03_GET, CountGymBadges_7
	goto_if_set FLAG_BADGE02_GET, CountGymBadges_8
	goto_if_set FLAG_BADGE01_GET, CountGymBadges_9
	setvar VAR_RESULT, 0
CountGymBadges_1:
	return

CountGymBadges_2:
	setvar VAR_RESULT, 8
	goto CountGymBadges_1

CountGymBadges_3:
	setvar VAR_RESULT, 7
	goto CountGymBadges_1

CountGymBadges_4:
	setvar VAR_RESULT, 6
	goto CountGymBadges_1

CountGymBadges_5:
	setvar VAR_RESULT, 5
	goto CountGymBadges_1

CountGymBadges_6:
	setvar VAR_RESULT, 4
	goto CountGymBadges_1

CountGymBadges_7:
	setvar VAR_RESULT, 3
	goto CountGymBadges_1

CountGymBadges_8:
	setvar VAR_RESULT, 2
	goto CountGymBadges_1

CountGymBadges_9:
	setvar VAR_RESULT, 1
	goto CountGymBadges_1


EventScript_UseRockClimb::
	lockall
	checkpartymove MOVE_ROCK_CLIMB
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantRockClimb
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	compare VAR_ROCK_CLIMB_USED, 2
	goto_if_lt EventScript_UseRockClimb_2
EventScript_UseRockClimb_1:
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
	call FollowerIntoPlayerScript
	callnative HideFollower
	applymovement OBJ_EVENT_ID_FOLLOWER, EnterPokeballMovement
	waitmovement 0
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
	callnative FollowMe_WarpSetEnd
	goto EventScript_EndRockClimb
	return

EventScript_UseRockClimb_2:
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndRockClimb
	addvar VAR_ROCK_CLIMB_USED, 1
	goto EventScript_UseRockClimb_1


EventScript_IceSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_IceSmash_2
EventScript_IceSmash_1:
	checkpartymove MOVE_ROCK_SMASH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox EventScript_IceSmash_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	goto EventScript_RockSmashCommon
	return

EventScript_IceSmash_2:
	goto EventScript_CantSmashRock
	goto EventScript_IceSmash_1


FollowerSpottedAnItemNearby::
	playse SE_PIN
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	setflag FLAG_FOLLOWER_FINDER_INTRO
	bufferlivemonnickname 0
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_SIGN
	end


FollowerAfterFindingItem::
	bufferlivemonnickname 0
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_NPC
	return


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
	msgbox SeenAnyStrangeSeeds, MSGBOX_NPC
	checkitem ITEM_STRANGE_SEED
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_5
TradeSeedsForFertilizer_4:
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsForFertilizer_11
TradeSeedsForFertilizer_10:
	end

TradeSeedsForFertilizer_2:
	checkitem ITEM_STRANGE_SEED
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_8
TradeSeedsForFertilizer_7:
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_1

TradeSeedsForFertilizer_5:
	playse SE_PIN
	safefollow
	applymovement 4, ExclamationMark
	waitmovement 0
	delay 48
	setflag FLAG_MET_STRANGE_SEED_TRADER
	msgbox CareToTradeSeeds, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_13
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_8:
	msgbox HereToTradeMoreSeeds, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_16
	goto TradeSeedsForFertilizer_7

TradeSeedsForFertilizer_11:
	startquest FLAG_Q12_FLOWERSHOP_STRANGESEED_START
	special ShowJournalPopupAdd
	goto TradeSeedsForFertilizer_10

TradeSeedsForFertilizer_13:
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_16:
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_7


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
	goto_if_set FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsGoodbye_3
TradeSeedsGoodbye_1:
	end

TradeSeedsGoodbye_2:
	completequest FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE
	special ShowJournalPopupRemove
	goto TradeSeedsGoodbye_1

TradeSeedsGoodbye_3:
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE, TradeSeedsGoodbye_2
	goto TradeSeedsGoodbye_1


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


EventScript_CutGrassSeedDrop::
	checkitemspace ITEM_STRANGE_SEED
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutGrassSeedDrop_2
EventScript_CutGrassSeedDrop_1:
	waitse
	additem ITEM_STRANGE_SEED
	callnative RevertSeedDropMetatile
	special DrawWholeMapView
	message BerryTree_Text_PickedTheSeed
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	message BerryTree_Text_PutAwaySeed
	waitmessage
	waitbuttonpress
	release
	return

EventScript_CutGrassSeedDrop_2:
	goto ZeBagIsFull
	goto EventScript_CutGrassSeedDrop_1


IrisBattle::
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


DraydenBattle::
	trainerbattle_single TRAINER_LEADER_DRAYDEN, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


MinaBattle::
	trainerbattle_single TRAINER_ELITE_FOUR_MINA, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


Debug_Script_1::
	lock
	msgbox LevelSetIntro, MSGBOX_DEFAULT
	message WhichLevelToSet
	waitmessage
	dynmultipush Debug_Script_1_Text_0, 0
	dynmultipush Debug_Script_1_Text_1, 1
	dynmultipush Debug_Script_1_Text_2, 2
	dynmultipush Debug_Script_1_Text_3, 3
	dynmultipush Debug_Script_1_Text_4, 4
	dynmultipush Debug_Script_1_Text_5, 5
	dynmultipush Debug_Script_1_Text_6, 6
	dynmultipush Debug_Script_1_Text_7, 7
	dynmultipush Debug_Script_1_Text_8, 8
	dynmultipush Debug_Script_1_Text_9, 9
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Debug_Script_1_3
	case 1, Debug_Script_1_4
	case 2, Debug_Script_1_5
	case 3, Debug_Script_1_6
	case 4, Debug_Script_1_7
	case 5, Debug_Script_1_8
	case 6, Debug_Script_1_9
	case 7, Debug_Script_1_10
	case 8, Debug_Script_1_11
	case 9, Debug_Script_1_12
	case MULTI_B_PRESSED, Debug_Script_1_12
Debug_Script_1_1:
	release
	end

Debug_Script_1_3:
	msgbox Debug_Script_1_Text_10
	setpartylevel 14
	goto Debug_Script_1_1

Debug_Script_1_4:
	msgbox Debug_Script_1_Text_11
	setpartylevel 22
	goto Debug_Script_1_1

Debug_Script_1_5:
	msgbox Debug_Script_1_Text_12
	setpartylevel 24
	goto Debug_Script_1_1

Debug_Script_1_6:
	msgbox Debug_Script_1_Text_13
	setpartylevel 29
	goto Debug_Script_1_1

Debug_Script_1_7:
	msgbox Debug_Script_1_Text_14
	setpartylevel 34
	goto Debug_Script_1_1

Debug_Script_1_8:
	msgbox Debug_Script_1_Text_15
	setpartylevel 38
	goto Debug_Script_1_1

Debug_Script_1_9:
	msgbox Debug_Script_1_Text_16
	setpartylevel 40
	goto Debug_Script_1_1

Debug_Script_1_10:
	msgbox Debug_Script_1_Text_17
	setpartylevel 45
	goto Debug_Script_1_1

Debug_Script_1_11:
	msgbox Debug_Script_1_Text_18
	setpartylevel 53
	goto Debug_Script_1_1

Debug_Script_1_12:
	closemessage
	goto Debug_Script_1_1


Debug_Script_2::
	return


Debug_Script_3::
	return


Debug_Script_4::
	return


Debug_Script_5::
	return


Debug_Script_6::
	return


Debug_Script_7::
	return


Debug_Script_8::
	special EnterCode
	waitstate
	special GetCodeFeedback
	release
	end
	return


Debug_Script_81::
	special EnterCode
	waitstate
	special GetCodeFeedback
	compare VAR_RESULT, FALSE
	goto_if_eq Debug_Script_81_2
Debug_Script_81_1:
	release
	end
	return

Debug_Script_81_2:
	msgbox Debug_Script_81_Text_0
	goto Debug_Script_81_1


ResetAdamantTower::
	checkitem ITEM_MEGA_RING
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_2
	lock
	faceplayer
	msgbox ResetAdamantTower_YesNo, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_5
	cleartrainerflag TRAINER_AT_2F_TR2_MAN3
	cleartrainerflag TRAINER_AT_2F_TR2_WOMAN5
	cleartrainerflag TRAINER_AT_2F_TR1_PSYCHIC
	cleartrainerflag TRAINER_AT_2F_TR1_MAN5
	cleartrainerflag TRAINER_AT_3F_TR1_EXPERT_M
	cleartrainerflag TRAINER_AT_3F_TR1_EXPERT_F
	cleartrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
	cleartrainerflag TRAINER_AT_3F_TR2_PSYCHICF
	cleartrainerflag TRAINER_AT_4F_TR1_BLACKBELT
	cleartrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
	cleartrainerflag TRAINER_AT_4F_TR2_LASS
	cleartrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
	cleartrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
	cleartrainerflag TRAINER_AT_4F_TR3_BLACKBELT
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_M
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_F
	removeitem ITEM_MEGA_RING
	clearflag FLAG_OBTAINED_MEGA_RING
	clearflag FLAG_REUNITE_WITH_RIVAL
	setflag FLAG_DISABLE_SAVING
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	msgbox ResetAdamantTower_ResetTeam, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_8
	setpartylevel 38
	msgbox PartyHasBeenReset, MSGBOX_NPC
	end

ResetAdamantTower_2:
	msgbox ThisIsForTesting, MSGBOX_NPC
	end

ResetAdamantTower_5:
	release
	end

ResetAdamantTower_8:
	release
	end


EndOfBetaBlock::
	goto_if_unset FLAG_BETA_BLOCK, EndOfBetaBlock_2
EndOfBetaBlock_1:
	release
	end

EndOfBetaBlock_2:
	msgbox EndOfBeta, MSGBOX_AUTOCLOSE
	applymovement 0xFF, Walk1Up
	waitmovement 0
	goto EndOfBetaBlock_1


BarrenWastes_Block1::
	msgbox EndOfBeta2, MSGBOX_SIGN
	applymovement 0xFF, Walk1Right
	waitmovement 0
	release
	end


BarrenWastes_Block2::
	msgbox EndOfBeta2, MSGBOX_SIGN
	applymovement 0xFF, Walk1Down
	waitmovement 0
	release
	end


SkipToShoreslate::
	call ClearRoute1
	call ClearRoute2
	call ClearWindyWoods
	call ClearCoralgrove
	call ClearAzuretide
	call ClearRoute4
	call ClearRanch
	call ClearAldeleaf
	call ClearRoute28
	call ClearWindplume
	call ClearRoute5
	call ClearFlowerFields
	call ClearSkyloch
	call ClearRoute6
	call ClearRoute8
	call ClearShoreslate
	return


ClearRoute1::
	defeattrainer TRAINER_R1_COOLTRAINER
	defeattrainer TRAINER_R1_YOUNGSTER
	defeattrainer TRAINER_R1_FISHER
	defeattrainer TRAINER_R1_BUG_CATCHER
	defeattrainer TRAINER_R1_TUBER
	addbp 10
	additem ITEM_EXP_SHARE
	setflag FLAG_INTRO_TO_BP
	msgbox ClearRoute1_Text_0
	return


ClearRoute2::
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL1
	additem ITEM_PEARL
	setflag FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL
	additem ITEM_BIG_PEARL
	defeattrainer TRAINER_R2_FISHER
	defeattrainer TRAINER_R2_LASS
	defeattrainer TRAINER_R2_BLACKBELT
	defeattrainer TRAINER_R2_YOUNGSTER
	defeattrainer TRAINER_R2_SCHOOL_KID_F
	setflag FLAG_ITEM_ROUTE2_X_ATTACK
	additem ITEM_X_ATTACK
	setberrytree BERRY_TREE_ROUTE_2_ORAN, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree BERRY_TREE_ROUTE_2_PECHA, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree BERRY_TREE_ROUTE_2_CHERI, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
	additem ITEM_ORAN_BERRY, 2
	additem ITEM_CHERI_BERRY, 2
	additem ITEM_PECHA_BERRY, 2
	setflag FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL
	additem ITEM_GREAT_BALL
	setflag FLAG_ITEM_ROUTE2_REVIVE
	additem ITEM_REVIVE
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_2
ClearRoute2_1:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_5
ClearRoute2_4:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_8
ClearRoute2_7:
	return

ClearRoute2_2:
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_1

ClearRoute2_5:
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_4

ClearRoute2_8:
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_7


ClearWindyWoods::
	setflag FLAG_ITEM_WW_PARLYZ
	additem ITEM_PARLYZ_HEAL
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	defeattrainer TRAINER_WW_BUGCATCHER
	defeattrainer TRAINER_WW_LADY
	defeattrainer TRAINER_WW_BUGCATCHER_2
	defeattrainer TRAINER_WW_CAMPER
	defeattrainer TRAINER_WW_LASS
	defeattrainer TRAINER_WW_YOUNGSTER
	defeattrainer TRAINER_WW_ACE_TRAINER
	defeattrainer TRAINER_SHELLY_SEAFLOOR_CAVERN
	setflag FLAG_WW_COOLTRAINERREWARD
	switch VAR_STARTER_MON
	case SPECIES_ROWLET, ClearWindyWoods_3
	case SPECIES_TORCHIC, ClearWindyWoods_4
	case SPECIES_PIPLUP, ClearWindyWoods_5
ClearWindyWoods_1:
	setflag FLAG_LANDMARK_WINDY_WOODS
	setflag FLAG_GLADE_PUZZLE
	setflag FLAG_LANDMARK_LOST_GLADE
	addbp 10
	return

ClearWindyWoods_3:
	additem ITEM_MIRACLE_SEED
	goto ClearWindyWoods_1

ClearWindyWoods_4:
	additem ITEM_CHARCOAL
	goto ClearWindyWoods_1

ClearWindyWoods_5:
	additem ITEM_MYSTIC_WATER
	goto ClearWindyWoods_1


ClearCoralgrove::
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_0x267_CG_HIDEGHOST
	setflag FLAG_CORALGROVE_CUTSCENE
	clearflag FLAG_OBTAINED_PIDGEOTITE
	setflag FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY
	additem ITEM_RARE_CANDY
	setflag FLAG_CORAL_GREATBALL
	additem ITEM_GREAT_BALL
	defeattrainer TRAINER_SCHOOLHALL_1
	defeattrainer TRAINER_SCHOOLHALL_2
	defeattrainer TRAINER_SCHOOLHALL_3
	defeattrainer TRAINER_SCHOOLHALL_4
	additem ITEM_TM_FALSE_SWIPE
	defeattrainer TRAINER_CHIP
	defeattrainer TRAINER_FOSTER
	defeattrainer TRAINER_DUSTY_2
	defeattrainer TRAINER_DUSTY_3
	defeattrainer TRAINER_DUSTY_4
	defeattrainer TRAINER_DUSTY_5
	defeattrainer TRAINER_LEADER_AARON
	setflag FLAG_BADGE01_GET
	additem ITEM_TM_U_TURN
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq ClearCoralgrove_2
	defeattrainer TRAINER_BRENDAN_CORALGROVE_ELEVATOR
ClearCoralgrove_1:
	msgbox ClearCoralgrove_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq ClearCoralgrove_6
	setflag FLAG_RIVAL_HARBOR_ANGRY
ClearCoralgrove_5:
	setflag FLAG_DEFEATED_RIVAL_HARBOR
	additem ITEM_TM_REST
	additem ITEM_OLD_ROD
	setflag FLAG_HARBOR_GREATBALL
	additem ITEM_GREAT_BALL
	setflag FLAG_HARBOR_PEARL
	additem ITEM_PEARL
	return

ClearCoralgrove_2:
	defeattrainer TRAINER_MAY_CORALGROVE_ELEVATOR
	goto ClearCoralgrove_1

ClearCoralgrove_6:
	additem ITEM_ITEMFINDER
	goto ClearCoralgrove_5


ClearAzuretide::
	setflag FLAG_VISITED_AZURETIDE
	additem ITEM_HONEY, 3
	setflag FLAG_AZURETIDE_HONEY
	additem ITEM_TOWN_MAP
	setflag FLAG_COASTTOWN_PEARL
	setflag FLAG_COASTTOWN_REDSHARD
	setflag FLAG_COASTTOWN_HEATROCK
	additem ITEM_PEARL
	additem ITEM_RED_SHARD
	additem ITEM_HEAT_ROCK
	return


ClearRoute4::
	setberrytree BERRY_TREE_ROUTE_104_ORAN_1, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree BERRY_TREE_ROUTE_103_LEPPA, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree BERRY_TREE_ROUTE_103_CHERI_2, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
	additem ITEM_ORAN_BERRY, 2
	additem ITEM_LEPPA_BERRY, 2
	additem ITEM_CHERI_BERRY, 2
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_2
ClearRoute4_1:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_5
ClearRoute4_4:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_8
ClearRoute4_7:
	setflag FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL
	additem ITEM_POKE_BALL
	setflag FLAG_ITEM_ROUTE3_ANTIDOTE
	additem ITEM_ANTIDOTE
	setflag FLAG_ITEM_ROUTE3_GIGADRAIN
	additem ITEM_TM_GRASS_KNOT
	setflag FLAG_HIDDEN_ITEM_ROUTE3_REVIVE
	additem ITEM_REVIVE
	setflag FLAG_HIDDEN_ITEM_ROUTE3_ETHER
	additem ITEM_ETHER
	setflag FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL
	additem ITEM_SUPER_REPEL
	defeattrainer TRAINER_R4_HIKER
	defeattrainer TRAINER_UNUSED_54_
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
	return

ClearRoute4_2:
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_1

ClearRoute4_5:
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_4

ClearRoute4_8:
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_7


ClearRanch::
	setflag FLAG_RANCH_EVENT_NPC
	setflag FLAG_LANDMARK_POKE_RANCH
	setflag FLAG_RANCH_HELPED
	clearflag FLAG_HIDE_RANCH_OWNER
	setflag FLAG_HIDE_VOLKNER_2
	additem ITEM_HM01
	setflag FLAG_HIDE_VOLKNER_1
	setflag FLAG_RECEIVED_HM_CUT
	setflag FLAG_VOLKNER_HELPED
	setflag FLAG_JASMINE_HELPED
	setvar VAR_POKERANCH, 1
	defeattrainer TRAINER_RICKY_4
	defeattrainer TRAINER_RICKY_5
	return


ClearAldeleaf::
	setflag FLAG_VISITED_WIP_CITY1
	setflag FLAG_HIDE_AMPHAROS
	defeattrainer TRAINER_VITO
	setflag FLAG_SHELL_BELL_RECEIVED
	additem ITEM_SHELL_BELL
	additem ITEM_QUICK_BALL, 1
	setflag FLAG_ALDELEAF_QUICK_BALL
	setflag FLAG_KEY_RETURNED
	additem ITEM_BLACK_FLUTE, 1
	setflag FLAG_WHITEFLUTE_RECEIVED
	additem ITEM_LAVA_COOKIE
	setflag FLAG_RECEIVED_LAVA_COOKIE
	setflag FLAG_TOUCHPOKEBALL
	setflag FLAG_ALDELEAF_SWITCH1
	setflag FLAG_ALDELEAF_SWITCH2
	setflag FLAG_ALDELEAF_SWITCH3
	setflag FLAG_ALDELEAF_SWITCH_ALL
	setflag FLAG_ALDELEAF_MUSHROOM2
	additem ITEM_TINY_MUSHROOM
	setflag FLAG_ALDELEAF_LOST_KEY
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
	setflag FLAG_BADGE02_GET
	additem ITEM_TM_CHARGE_BEAM
	setflag FLAG_ANGEREDGUYINALDELEAF
	msgbox ClearAldeleaf_Text_0
	return


ClearRoute28::
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	msgbox ClearRoute28_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq ClearRoute28_2
ClearRoute28_1:
	additem ITEM_TM_SECRET_POWER
	additem ITEM_FULL_HEAL
	defeattrainer TRAINER_R28_TR1_BUGCATCHER
	defeattrainer TRAINER_R28_TR2_HIKER
	defeattrainer TRAINER_R28_TR3_NINJABOY
	defeattrainer TRAINER_R28_TR4_PSYCHIC
	setflag FLAG_ROUTE28_TM
	setflag FLAG_ROUTE28_ITEMBALL
	setflag FLAG_ROUTE28_HIDDENBALL
	additem ITEM_GREAT_BALL
	return

ClearRoute28_2:
	defeattrainer TRAINER_BROTHER_4_ROUTE28
	goto ClearRoute28_1


ClearWindplume::
	setflag FLAG_LANDMARK_WINDPLUME_VALLEY
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
	defeattrainer TRAINER_WPV_TR14_SKYLA
	additem ITEM_HM02
	setflag FLAG_RECEIVED_HM_FLY
	additem ITEM_PRETTY_FEATHER, 6
	additem ITEM_HYPER_POTION
	additem ITEM_IRON_BALL
	additem ITEM_ELIXIR
	setflag FLAG_WPV_HYPER_POTION
	setflag FLAG_WPV_FEATHER3
	setflag FLAG_WPV_FEATHER1
	setflag FLAG_WPV_FEATHER2
	setflag FLAG_WPV_FEATHER4
	setflag FLAG_WPV_IRON_BALL
	setflag FLAG_WPV_ELIXIR
	setflag FLAG_WPV_FEATHER5
	setflag FLAG_WPV_FEATHER6
	return


ClearRoute5::
	setberrytree 31, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree 21, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree 13, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
	additem ITEM_PECHA_BERRY, 2
	additem ITEM_RAWST_BERRY, 2
	additem ITEM_SITRUS_BERRY, 2
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_2
ClearRoute5_1:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_5
ClearRoute5_4:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_8
ClearRoute5_7:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_11
ClearRoute5_10:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_14
ClearRoute5_13:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_17
ClearRoute5_16:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_20
ClearRoute5_19:
	setflag FLAG_ROUTE5_HIDDENITEM1
	setflag FLAG_ROUTE5_HIDDENITEM2
	additem ITEM_TINY_MUSHROOM, 2
	additem ITEM_SUPER_REPEL
	additem ITEM_GREAT_BALL
	additem ITEM_TM_ROCK_TOMB
	setflag FLAG_ROUTE5_ITEM1
	setflag FLAG_ROUTE5_ITEM2
	setflag FLAG_ROUTE5_ITEM3
	setflag FLAG_ROUTE5_HIDDENITEM5
	setflag FLAG_ROUTE5_HIDDENITEM4
	setflag FLAG_ROUTE5_HIDDENITEM3
	additem ITEM_MAX_ETHER
	defeattrainer TRAINER_R5_TR15_COOLTRAINER
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
	additem ITEM_EVIOLITE
	addbp 20
	return

ClearRoute5_2:
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_1

ClearRoute5_5:
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_4

ClearRoute5_8:
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_7

ClearRoute5_11:
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_10

ClearRoute5_14:
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_13

ClearRoute5_17:
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_16

ClearRoute5_20:
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_19


ClearFlowerFields::
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_INTRODUCED
	setflag FLAG_FLOWERFIELDS_ITEM_1
	setflag FLAG_FLOWERFIELDS_ITEM_2
	setflag FLAG_FLOWERFIELDS_ITEM_3
	additem ITEM_ORAN_BERRY
	additem ITEM_HONEY
	additem ITEM_HONEY
	setflag FLAG_LANDMARK_FLOWER_FIELDS
	additem ITEM_RARE_CANDY
	return


ClearSkyloch::
	setflag FLAG_VISITED_WIP_TOWN2
	additem ITEM_OCCA_BERRY, 1
	setflag FLAG_SKYLOCH_CASTELIACONE
	additem ITEM_BERRY_JUICE, 1
	setflag FLAG_SKYLOCH_JUICE
	return


ClearRoute6::
	setflag FLAG_DEVON_RESCUED
	defeattrainer TRAINER_R6_TR1_RANGER_M
	defeattrainer TRAINER_R6_TR3_CAMPER_F
	defeattrainer TRAINER_R6_TR5_HIKER
	defeattrainer TRAINER_R6_TR6_CAMPER_M2
	defeattrainer TRAINER_R6_TR7_KINDLER
	return


ClearRoute8::
	additem ITEM_GREAT_BALL
	additem ITEM_TM_ROCK_POLISH
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
	setflag FLAG_ROUTE8_ITEM1
	setflag FLAG_ROUTE8_ITEM2
	setflag FLAG_ROUTE8_ITEM3
	setflag FLAG_ROUTE8_ITEM5
	setflag FLAG_ROUTE8_ITEM6
	additem ITEM_REVIVE
	additem ITEM_ORAN_BERRY
	additem ITEM_FULL_HEAL
	setflag FLAG_LANDMARK_FLOWER_SHOP
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
	additem ITEM_WAILMER_PAIL
	setflag FLAG_RECEIVED_WAILMER_PAIL
	setberrytree 15, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree 22, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree 24, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
	setberrytree 33, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
	additem ITEM_POMEG_BERRY, 2
	additem ITEM_RAWST_BERRY, 2
	additem ITEM_PECHA_BERRY, 2
	additem ITEM_SITRUS_BERRY, 2
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_2
ClearRoute8_1:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_5
ClearRoute8_4:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_8
ClearRoute8_7:
	trystrangeseed
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_11
ClearRoute8_10:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_14
ClearRoute8_13:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_17
ClearRoute8_16:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_20
ClearRoute8_19:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_23
ClearRoute8_22:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_26
ClearRoute8_25:
	trystrangeseed
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_29
ClearRoute8_28:
	return

ClearRoute8_2:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_1

ClearRoute8_5:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_4

ClearRoute8_8:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_7

ClearRoute8_11:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_10

ClearRoute8_14:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_13

ClearRoute8_17:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_16

ClearRoute8_20:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_19

ClearRoute8_23:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_22

ClearRoute8_26:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_25

ClearRoute8_29:
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_28


ClearShoreslate::
	additem ITEM_SUPER_POTION
	setflag FLAG_RECEIVED_SHORESLATE_POTION
	setrespawn HEAL_LOCATION_SHORESLATE_CITY
	setflag FLAG_VISITED_SHORESLATE
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	additem ITEM_AIR_BALLOON
	setflag FLAG_GIVEN_CASTELIATOGIRL
	defeattrainer TRAINER_SHORESLATE_ROCKET
	giveitem ITEM_GO_GOGGLES
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
	additem ITEM_SUPER_POTION
	setflag FLAG_BASEMENT_SUPERPOTION
	additem ITEM_QUICK_BALL
	setflag FLAG_DEVONCORP_BASEMENT_BALL
	setflag FLAG_DEVON_UNDER_ATTACK
	setflag FLAG_HELPED_DEVON_CORP
	clearflag FLAG_HIDE_SHORESLATE_BOAT
	additem ITEM_HM05
	setflag FLAG_RECEIVED_BIKE
	additem ITEM_ACRO_BIKE
	return


Pearlwood_Debug::
	goto_if_set FLAG_BADGE01_GET, Pearlwood_Debug_2
	goto_if_unset FLAG_SYS_POKEDEX_GET, Pearlwood_Debug_5
	msgbox Pearlwood_Debug_Text_2
	call SkipToShoreslate
	msgbox Pearlwood_Debug_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Pearlwood_Debug_8
	msgbox Pearlwood_Debug_Text_4
	removeobject 7
Pearlwood_Debug_7:
	release
	end

Pearlwood_Debug_2:
	msgbox Pearlwood_Debug_Text_0
	removeobject 7
	release
	end

Pearlwood_Debug_5:
	msgbox Pearlwood_Debug_Text_1
	release
	end

Pearlwood_Debug_8:
	setflag FLAG_OPENED_MAP_FROM_SIGN
	fadescreen FADE_TO_BLACK
	callnative OpenFlyMapFromSign
	goto Pearlwood_Debug_7


RopeBridgeScript_Movement_0:
	lock_anim
	lock_facing_direction
	jump_right
	unlock_anim
	unlock_facing_direction
	step_end

EventScript_IceSmash_Text_0:
	.string "This block of ice appears to be fragile.\nWould you like to use Rock Smash?$"

Debug_Script_1_Text_0:
	.string "Gym 1 (lvl 14)$"

Debug_Script_1_Text_1:
	.string "Gym 2 (lvl 22)$"

Debug_Script_1_Text_2:
	.string "Side area (lvl 24)$"

Debug_Script_1_Text_3:
	.string "Story 1 (lvl 29)$"

Debug_Script_1_Text_4:
	.string "Gym 3 (lvl 34)$"

Debug_Script_1_Text_5:
	.string "Gym 4 (lvl 38)$"

Debug_Script_1_Text_6:
	.string "Post-Gym 4 (lvl 40)$"

Debug_Script_1_Text_7:
	.string "Gym 5 (lvl 45)$"

Debug_Script_1_Text_8:
	.string "Gym 6 (lvl 53)$"

Debug_Script_1_Text_9:
	.string "Cancel$"

Debug_Script_1_Text_10:
	.string "Team set to level 14.$"

Debug_Script_1_Text_11:
	.string "Team set to level 22.$"

Debug_Script_1_Text_12:
	.string "Team set to level 24.$"

Debug_Script_1_Text_13:
	.string "Team set to level 29.$"

Debug_Script_1_Text_14:
	.string "Team set to level 34.$"

Debug_Script_1_Text_15:
	.string "Team set to level 38.$"

Debug_Script_1_Text_16:
	.string "Team set to level 40.$"

Debug_Script_1_Text_17:
	.string "Team set to level 45.$"

Debug_Script_1_Text_18:
	.string "Team set to level 53.$"

Debug_Script_81_Text_0:
	.string "I'm sorry, but that's not a code\nI recognize.$"

ClearRoute1_Text_0:
	.string "Obtained Exp. Share.\nDon't forget to turn it on!$"

ClearCoralgrove_Text_0:
	.string "Was {RIVAL} defeated in\nCoralgrove Harbor?$"

ClearAldeleaf_Text_0:
	.string "Aldeleaf City has been cleared, but\nthe events with Mimikyu and Sudowoodo\lare still intact.$"

ClearRoute28_Text_0:
	.string "Has brother been defeated on the\nroute north of Aldeleaf City?$"

Pearlwood_Debug_Text_0:
	.string "Oops, I should no longer be here.\pBye!$"

Pearlwood_Debug_Text_1:
	.string "Come back after obtaining\nthe Pokédex.$"

Pearlwood_Debug_Text_2:
	.string "Hello, I am here to help you skip\na bunch of stuff you've already done.$"

Pearlwood_Debug_Text_3:
	.string "All items, trainers, and story events\nup to Shoreslate have been completed.\pYou will have to catch your own\nPokémon though.\pWould you like me to fly you\nsomewhere?$"

Pearlwood_Debug_Text_4:
	.string "Okay then.\nBye!$"

FollowerSpottedAnItemNearby_Text::
	.string "{STR_VAR_1} seems to have spotted\n"
	.string "something interesting nearby!$"

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

ThisIsForTesting::
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.$"

ResetAdamantTower_YesNo::
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.\p"
	.string "Would you like to reset the tower?$"

ResetAdamantTower_ResetTeam::
	.string "Tower progress has been reset.\p"
	.string "This could break saves, so I've\n"
	.string "disabled saving for the duration\l"
	.string "of the test.\p"
	.string "Once you're done testing, please\n"
	.string "reset the game to continue regular\l"
	.string "play.\p"
	.string "The tower is recommended for lvl 38+\n"
	.string "teams.\p"
	.string "Want me to also set your entire team\n"
	.string "to lvl 38?$"

PartyHasBeenReset::
	.string "Team has been set to lvl 38.$"

EndOfBeta::
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"

EndOfBeta2::
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"
