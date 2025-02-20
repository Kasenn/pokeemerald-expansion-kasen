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
	case MULTI_B_PRESSED, Debug_Script_1_12
Debug_Script_1_1:
	release
	end

Debug_Script_1_3:
	msgbox Debug_Script_1_Text_9
	setpartylevel 14
	goto Debug_Script_1_1

Debug_Script_1_4:
	msgbox Debug_Script_1_Text_10
	setpartylevel 22
	goto Debug_Script_1_1

Debug_Script_1_5:
	msgbox Debug_Script_1_Text_11
	setpartylevel 24
	goto Debug_Script_1_1

Debug_Script_1_6:
	msgbox Debug_Script_1_Text_12
	setpartylevel 29
	goto Debug_Script_1_1

Debug_Script_1_7:
	msgbox Debug_Script_1_Text_13
	setpartylevel 34
	goto Debug_Script_1_1

Debug_Script_1_8:
	msgbox Debug_Script_1_Text_14
	setpartylevel 38
	goto Debug_Script_1_1

Debug_Script_1_9:
	msgbox Debug_Script_1_Text_15
	setpartylevel 40
	goto Debug_Script_1_1

Debug_Script_1_10:
	msgbox Debug_Script_1_Text_16
	setpartylevel 45
	goto Debug_Script_1_1

Debug_Script_1_11:
	closemessage
	goto Debug_Script_1_1

Debug_Script_1_12:
	closemessage
	goto Debug_Script_1_1


Debug_Script_2::
	callnative ZeroStrangeSeedIndex
	msgbox Debug_Script_2_Text_0
	release
	end


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
	return


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
	msgbox EndOfBeta, MSGBOX_AUTOCLOSE
	applymovement 0xFF, Walk1Up
	waitmovement 0
	release
	end


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


RopeBridgeScript_Movement_0:
	lock_anim
	lock_facing_direction
	jump_right
	unlock_anim
	unlock_facing_direction
	step_end

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
	.string "Cancel$"

Debug_Script_1_Text_9:
	.string "Team set to level 14.$"

Debug_Script_1_Text_10:
	.string "Team set to level 22.$"

Debug_Script_1_Text_11:
	.string "Team set to level 24.$"

Debug_Script_1_Text_12:
	.string "Team set to level 29.$"

Debug_Script_1_Text_13:
	.string "Team set to level 34.$"

Debug_Script_1_Text_14:
	.string "Team set to level 38.$"

Debug_Script_1_Text_15:
	.string "Team set to level 40.$"

Debug_Script_1_Text_16:
	.string "Team set to level 45.$"

Debug_Script_2_Text_0:
	.string "game ready for update.\nremember to save!$"

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
