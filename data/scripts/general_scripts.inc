RopeBridgeScript::
# 4 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 5 "data/scripts/general_scripts.pory"
	applymovement 0xFF, RopeBridgeScript_Movement_0
# 6 "data/scripts/general_scripts.pory"
	waitmovement 0
# 7 "data/scripts/general_scripts.pory"
	release
	return


Script_SinkOrRisePlayer::
# 10 "data/scripts/general_scripts.pory"
	playersinkinsnow
# 11 "data/scripts/general_scripts.pory"
	release
	return


SetupRivalGfxId::
	checkplayergender
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SetupRivalGfxId_1
# 27 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalGfxId_7
# 31 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

SetupRivalGfxId_1:
# 19 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalGfxId_4
# 23 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

SetupRivalGfxId_4:
# 20 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL_ORAS
	return

SetupRivalGfxId_7:
# 28 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL_ORAS
	return


CountGymBadges::
# 37 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, CountGymBadges_2
# 40 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CountGymBadges_3
# 43 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, CountGymBadges_4
# 46 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, CountGymBadges_5
# 49 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CountGymBadges_6
# 52 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CountGymBadges_7
# 55 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CountGymBadges_8
# 58 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, CountGymBadges_9
# 62 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
CountGymBadges_1:
	return

CountGymBadges_2:
# 38 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 8
	goto CountGymBadges_1

CountGymBadges_3:
# 41 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 7
	goto CountGymBadges_1

CountGymBadges_4:
# 44 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 6
	goto CountGymBadges_1

CountGymBadges_5:
# 47 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 5
	goto CountGymBadges_1

CountGymBadges_6:
# 50 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 4
	goto CountGymBadges_1

CountGymBadges_7:
# 53 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 3
	goto CountGymBadges_1

CountGymBadges_8:
# 56 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 2
	goto CountGymBadges_1

CountGymBadges_9:
# 59 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 1
	goto CountGymBadges_1


EventScript_UseRockClimb::
# 67 "data/scripts/general_scripts.pory"
	lockall
# 68 "data/scripts/general_scripts.pory"
	checkpartymove MOVE_ROCK_CLIMB
# 69 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantRockClimb
# 70 "data/scripts/general_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 71 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 72 "data/scripts/general_scripts.pory"
	compare VAR_ROCK_CLIMB_USED, 2
	goto_if_lt EventScript_UseRockClimb_2
EventScript_UseRockClimb_1:
# 77 "data/scripts/general_scripts.pory"
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
# 80 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EnterPokeballMovement
# 81 "data/scripts/general_scripts.pory"
	waitmovement 0
# 82 "data/scripts/general_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 83 "data/scripts/general_scripts.pory"
	goto EventScript_EndRockClimb
	return

EventScript_UseRockClimb_2:
# 73 "data/scripts/general_scripts.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 74 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndRockClimb
# 75 "data/scripts/general_scripts.pory"
	addvar VAR_ROCK_CLIMB_USED, 1
	goto EventScript_UseRockClimb_1


EventScript_IceSmash::
# 87 "data/scripts/general_scripts.pory"
	lockall
# 88 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_IceSmash_2
EventScript_IceSmash_1:
# 91 "data/scripts/general_scripts.pory"
	checkpartymove MOVE_ROCK_SMASH
# 92 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
# 93 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 94 "data/scripts/general_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 95 "data/scripts/general_scripts.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 96 "data/scripts/general_scripts.pory"
	msgbox EventScript_IceSmash_Text_0, MSGBOX_YESNO
# 97 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
# 98 "data/scripts/general_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 99 "data/scripts/general_scripts.pory"
	closemessage
# 100 "data/scripts/general_scripts.pory"
	goto EventScript_RockSmashCommon
	return

EventScript_IceSmash_2:
# 89 "data/scripts/general_scripts.pory"
	goto EventScript_CantSmashRock
	goto EventScript_IceSmash_1


FollowerSpottedAnItemNearby::
# 104 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 105 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 106 "data/scripts/general_scripts.pory"
	waitmovement 0
# 107 "data/scripts/general_scripts.pory"
	delay 48
# 108 "data/scripts/general_scripts.pory"
	setflag FLAG_FOLLOWER_FINDER_INTRO
# 109 "data/scripts/general_scripts.pory"
	bufferlivemonnickname 0
# 110 "data/scripts/general_scripts.pory"
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_SIGN
	end


FollowerAfterFindingItem::
# 118 "data/scripts/general_scripts.pory"
	bufferlivemonnickname 0
# 119 "data/scripts/general_scripts.pory"
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_NPC
	return


CheckForTentSpecialPrize::
# 122 "data/scripts/general_scripts.pory"
	compare VAR_TENT_SPECIAL_PRIZE, 3
	goto_if_ne CheckForTentSpecialPrize_2
CheckForTentSpecialPrize_1:
# 125 "data/scripts/general_scripts.pory"
	switch VAR_TENT_SPECIAL_PRIZE
# 126 "data/scripts/general_scripts.pory"
	case 1, CheckForTentSpecialPrize_6
# 128 "data/scripts/general_scripts.pory"
	case 2, CheckForTentSpecialPrize_7
# 130 "data/scripts/general_scripts.pory"
	case 3, CheckForTentSpecialPrize_8
CheckForTentSpecialPrize_4:
# 138 "data/scripts/general_scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
	return

CheckForTentSpecialPrize_2:
# 123 "data/scripts/general_scripts.pory"
	addvar VAR_TENT_SPECIAL_PRIZE, 1
	goto CheckForTentSpecialPrize_1

CheckForTentSpecialPrize_6:
# 127 "data/scripts/general_scripts.pory"
	msgbox GainedASpecialTicket
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_7:
# 129 "data/scripts/general_scripts.pory"
	msgbox NowHaveTwoTickets
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_8:
# 131 "data/scripts/general_scripts.pory"
	msgbox TentGrandPrize
# 132 "data/scripts/general_scripts.pory"
	giveitem ITEM_FRESH_START_MOCHI
# 133 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckForTentSpecialPrize_10
CheckForTentSpecialPrize_9:
# 136 "data/scripts/general_scripts.pory"
	setvar VAR_TENT_SPECIAL_PRIZE, 0
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_10:
# 134 "data/scripts/general_scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
	goto CheckForTentSpecialPrize_9


TradeSeedsForFertilizer::
# 158 "data/scripts/general_scripts.pory"
	lock
# 159 "data/scripts/general_scripts.pory"
	faceplayer
# 160 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_MET_STRANGE_SEED_TRADER, TradeSeedsForFertilizer_2
TradeSeedsForFertilizer_1:
# 168 "data/scripts/general_scripts.pory"
	msgbox SeenAnyStrangeSeeds, MSGBOX_NPC
	checkitem ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_5
TradeSeedsForFertilizer_4:
# 183 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsForFertilizer_11
TradeSeedsForFertilizer_10:
	end

TradeSeedsForFertilizer_2:
	checkitem ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_8
TradeSeedsForFertilizer_7:
# 166 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_1

TradeSeedsForFertilizer_5:
# 170 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 171 "data/scripts/general_scripts.pory"
	safefollow
# 172 "data/scripts/general_scripts.pory"
	applymovement 4, ExclamationMark
# 173 "data/scripts/general_scripts.pory"
	waitmovement 0
# 174 "data/scripts/general_scripts.pory"
	delay 48
# 175 "data/scripts/general_scripts.pory"
	setflag FLAG_MET_STRANGE_SEED_TRADER
	msgbox CareToTradeSeeds, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_13
# 180 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_8:
	msgbox HereToTradeMoreSeeds, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_16
	goto TradeSeedsForFertilizer_7

TradeSeedsForFertilizer_11:
# 184 "data/scripts/general_scripts.pory"
	startquest FLAG_Q12_FLOWERSHOP_STRANGESEED_START
# 185 "data/scripts/general_scripts.pory"
	special ShowJournalPopupAdd
	goto TradeSeedsForFertilizer_10

TradeSeedsForFertilizer_13:
# 177 "data/scripts/general_scripts.pory"
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_16:
# 163 "data/scripts/general_scripts.pory"
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_7


TradeSeedsMain::
# 190 "data/scripts/general_scripts.pory"
	checkitemquant ITEM_STRANGE_SEED
	msgbox TradeHowManySeeds, MSGBOX_HOWMANY
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TradeSeedsMain_1
# 195 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 196 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
TradeSeedsMain_5:
# 197 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TradeSeedsMain_6
# 201 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 202 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TradeSeedsMain_9
	msgbox TradeSeedsForFertilizer_Text_Multiple, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsMain_14
TradeSeedsMain_8:
# 224 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_1:
# 192 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_6:
# 198 "data/scripts/general_scripts.pory"
	subvar VAR_RESULT, 1
# 199 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 2
	goto TradeSeedsMain_5

TradeSeedsMain_9:
	msgbox TradeSeedsForFertilizer_Text_Single, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsMain_12
	goto TradeSeedsMain_8

TradeSeedsMain_12:
	checkitemspace ITEM_FERTILIZER, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeSeedsMain_17
TradeSeedsMain_16:
# 209 "data/scripts/general_scripts.pory"
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
# 210 "data/scripts/general_scripts.pory"
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_14:
	checkitemspace ITEM_FERTILIZER, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeSeedsMain_20
TradeSeedsMain_19:
# 220 "data/scripts/general_scripts.pory"
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
# 221 "data/scripts/general_scripts.pory"
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_17:
# 205 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 206 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 207 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto TradeSeedsMain_16

TradeSeedsMain_20:
# 216 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 217 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 218 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto TradeSeedsMain_19


TradeSeedsGoodbye::
# 227 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 228 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 229 "data/scripts/general_scripts.pory"
	msgbox ComeTradeWhenGetMoreSeeds, MSGBOX_NPC
# 230 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsGoodbye_3
TradeSeedsGoodbye_1:
	end

TradeSeedsGoodbye_2:
# 231 "data/scripts/general_scripts.pory"
	completequest FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE
# 232 "data/scripts/general_scripts.pory"
	special ShowJournalPopupRemove
	goto TradeSeedsGoodbye_1

TradeSeedsGoodbye_3:
# 230 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE, TradeSeedsGoodbye_2
	goto TradeSeedsGoodbye_1


ZeBagIsFull::
# 266 "data/scripts/general_scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	end


BerryTree_ItemUseFertilizer::
# 269 "data/scripts/general_scripts.pory"
	special ObjectEventInteractionGetBerryName
# 270 "data/scripts/general_scripts.pory"
	message BerryTree_Text_FertilizedTheBerry
# 271 "data/scripts/general_scripts.pory"
	waitmessage
# 272 "data/scripts/general_scripts.pory"
	special ObjectEventInteractionWaterBerryTree
# 273 "data/scripts/general_scripts.pory"
	fertilizeberry
# 274 "data/scripts/general_scripts.pory"
	special DoFertilizingBerryTreeAnim
# 275 "data/scripts/general_scripts.pory"
	waitstate
# 276 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PlantIsDelighted
# 277 "data/scripts/general_scripts.pory"
	waitmessage
# 278 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 279 "data/scripts/general_scripts.pory"
	releaseall
# 280 "data/scripts/general_scripts.pory"
	dotimebasedevents
# 281 "data/scripts/general_scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq BerryTree_ItemUseFertilizer_2
BerryTree_ItemUseFertilizer_1:
	end

BerryTree_ItemUseFertilizer_2:
# 282 "data/scripts/general_scripts.pory"
	delay 210
	goto BerryTree_ItemUseFertilizer_1


TryDropStrangeSeed_Tree::
# 286 "data/scripts/general_scripts.pory"
	trystrangeseed
# 287 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge TryDropStrangeSeed_Tree_3
TryDropStrangeSeed_Tree_1:
	return

TryDropStrangeSeed_Tree_2:
# 289 "data/scripts/general_scripts.pory"
	waitse
# 290 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 291 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 292 "data/scripts/general_scripts.pory"
	waitmovement 0
# 293 "data/scripts/general_scripts.pory"
	delay 48
# 294 "data/scripts/general_scripts.pory"
	msgbox StrangeSeedDroppedTree
# 295 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 296 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 297 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 298 "data/scripts/general_scripts.pory"
	waitmessage
# 299 "data/scripts/general_scripts.pory"
	waitfanfare
# 300 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 301 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwaySeed
# 302 "data/scripts/general_scripts.pory"
	waitmessage
# 303 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto TryDropStrangeSeed_Tree_1

TryDropStrangeSeed_Tree_3:
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_Tree_2
	goto TryDropStrangeSeed_Tree_1


TryDropStrangeSeed_BerryPlant::
# 307 "data/scripts/general_scripts.pory"
	trystrangeseed
# 308 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge TryDropStrangeSeed_BerryPlant_4
TryDropStrangeSeed_BerryPlant_3:
# 326 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwayBerry
TryDropStrangeSeed_BerryPlant_1:
	return

TryDropStrangeSeed_BerryPlant_2:
# 310 "data/scripts/general_scripts.pory"
	closemessage
# 311 "data/scripts/general_scripts.pory"
	waitse
# 312 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 313 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 314 "data/scripts/general_scripts.pory"
	waitmovement 0
# 315 "data/scripts/general_scripts.pory"
	delay 48
# 316 "data/scripts/general_scripts.pory"
	msgbox StrangeSeedDroppedBerry
# 317 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 318 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 319 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 320 "data/scripts/general_scripts.pory"
	waitmessage
# 321 "data/scripts/general_scripts.pory"
	waitfanfare
# 322 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 323 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwayBerryAndSeed
	goto TryDropStrangeSeed_BerryPlant_1

TryDropStrangeSeed_BerryPlant_4:
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_BerryPlant_2
	goto TryDropStrangeSeed_BerryPlant_3


ZygardeCell::
# 350 "data/scripts/general_scripts.pory"
	lock
# 351 "data/scripts/general_scripts.pory"
	waitse
# 352 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 353 "data/scripts/general_scripts.pory"
	removeobject VAR_LAST_TALKED
# 354 "data/scripts/general_scripts.pory"
	message PlayerFoundZygardeCell
# 355 "data/scripts/general_scripts.pory"
	waitfanfare
# 356 "data/scripts/general_scripts.pory"
	waitmessage
# 357 "data/scripts/general_scripts.pory"
	msgbox gText_PutZygardeCellInCube
# 358 "data/scripts/general_scripts.pory"
	addvar VAR_ZYGARDE_CELLS, 1
# 359 "data/scripts/general_scripts.pory"
	release
	end


ZygardeCore::
# 367 "data/scripts/general_scripts.pory"
	lock
# 368 "data/scripts/general_scripts.pory"
	waitse
# 369 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 370 "data/scripts/general_scripts.pory"
	removeobject VAR_LAST_TALKED
# 371 "data/scripts/general_scripts.pory"
	message PlayerFoundZygardeCore
# 372 "data/scripts/general_scripts.pory"
	waitfanfare
# 373 "data/scripts/general_scripts.pory"
	waitmessage
# 374 "data/scripts/general_scripts.pory"
	msgbox gText_PutZygardeCoreInCube
# 375 "data/scripts/general_scripts.pory"
	addvar VAR_ZYGARDE_CORES, 1
# 376 "data/scripts/general_scripts.pory"
	release
	end


EventScript_CutGrassSeedDrop::
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutGrassSeedDrop_2
EventScript_CutGrassSeedDrop_1:
# 388 "data/scripts/general_scripts.pory"
	waitse
# 389 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 390 "data/scripts/general_scripts.pory"
	callnative RevertSeedDropMetatile
# 391 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 392 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 393 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 394 "data/scripts/general_scripts.pory"
	waitmessage
# 395 "data/scripts/general_scripts.pory"
	waitfanfare
# 396 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwaySeed
# 397 "data/scripts/general_scripts.pory"
	waitmessage
# 398 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 399 "data/scripts/general_scripts.pory"
	release
	return

EventScript_CutGrassSeedDrop_2:
# 386 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto EventScript_CutGrassSeedDrop_1


IrisBattle::
# 405 "data/scripts/general_scripts.pory"
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


DraydenBattle::
# 407 "data/scripts/general_scripts.pory"
	trainerbattle_single TRAINER_LEADER_DRAYDEN, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


MinaBattle::
# 409 "data/scripts/general_scripts.pory"
	trainerbattle_single TRAINER_ELITE_FOUR_MINA, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


Debug_Script_1::
# 477 "data/scripts/general_scripts.pory"
	lock
# 478 "data/scripts/general_scripts.pory"
	msgbox LevelSetIntro, MSGBOX_DEFAULT
# 479 "data/scripts/general_scripts.pory"
	message WhichLevelToSet
# 480 "data/scripts/general_scripts.pory"
	waitmessage
# 481 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_0, 0
# 482 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_1, 1
# 483 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_2, 2
# 484 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_3, 3
# 485 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_4, 4
# 486 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_5, 5
# 487 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_6, 6
# 488 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_7, 7
# 489 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_8, 8
# 490 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_9, 9
# 491 "data/scripts/general_scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
# 492 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 493 "data/scripts/general_scripts.pory"
	case 0, Debug_Script_1_3
# 496 "data/scripts/general_scripts.pory"
	case 1, Debug_Script_1_4
# 499 "data/scripts/general_scripts.pory"
	case 2, Debug_Script_1_5
# 502 "data/scripts/general_scripts.pory"
	case 3, Debug_Script_1_6
# 505 "data/scripts/general_scripts.pory"
	case 4, Debug_Script_1_7
# 508 "data/scripts/general_scripts.pory"
	case 5, Debug_Script_1_8
# 511 "data/scripts/general_scripts.pory"
	case 6, Debug_Script_1_9
# 514 "data/scripts/general_scripts.pory"
	case 7, Debug_Script_1_10
# 517 "data/scripts/general_scripts.pory"
	case 8, Debug_Script_1_11
# 520 "data/scripts/general_scripts.pory"
	case 9, Debug_Script_1_12
# 521 "data/scripts/general_scripts.pory"
	case MULTI_B_PRESSED, Debug_Script_1_12
Debug_Script_1_1:
# 524 "data/scripts/general_scripts.pory"
	release
	end

Debug_Script_1_3:
# 494 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_10
# 495 "data/scripts/general_scripts.pory"
	setpartylevel 14
	goto Debug_Script_1_1

Debug_Script_1_4:
# 497 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_11
# 498 "data/scripts/general_scripts.pory"
	setpartylevel 22
	goto Debug_Script_1_1

Debug_Script_1_5:
# 500 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_12
# 501 "data/scripts/general_scripts.pory"
	setpartylevel 24
	goto Debug_Script_1_1

Debug_Script_1_6:
# 503 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_13
# 504 "data/scripts/general_scripts.pory"
	setpartylevel 29
	goto Debug_Script_1_1

Debug_Script_1_7:
# 506 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_14
# 507 "data/scripts/general_scripts.pory"
	setpartylevel 34
	goto Debug_Script_1_1

Debug_Script_1_8:
# 509 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_15
# 510 "data/scripts/general_scripts.pory"
	setpartylevel 38
	goto Debug_Script_1_1

Debug_Script_1_9:
# 512 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_16
# 513 "data/scripts/general_scripts.pory"
	setpartylevel 40
	goto Debug_Script_1_1

Debug_Script_1_10:
# 515 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_17
# 516 "data/scripts/general_scripts.pory"
	setpartylevel 45
	goto Debug_Script_1_1

Debug_Script_1_11:
# 518 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_18
# 519 "data/scripts/general_scripts.pory"
	setpartylevel 53
	goto Debug_Script_1_1

Debug_Script_1_12:
# 522 "data/scripts/general_scripts.pory"
	closemessage
	goto Debug_Script_1_1


Debug_Script_2::
# 528 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_PERMA_NIGHT, Debug_Script_2_2
# 536 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_2, MSGBOX_YESNO
# 537 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_2_7
Debug_Script_2_1:
# 542 "data/scripts/general_scripts.pory"
	release
	return

Debug_Script_2_2:
# 529 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_0, MSGBOX_YESNO
# 530 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_2_5
	goto Debug_Script_2_1

Debug_Script_2_5:
# 531 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_1, MSGBOX_AUTOCLOSE
# 532 "data/scripts/general_scripts.pory"
	clearflag FLAG_PERMA_NIGHT
	goto Debug_Script_2_1

Debug_Script_2_7:
# 538 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_3, MSGBOX_AUTOCLOSE
# 539 "data/scripts/general_scripts.pory"
	setflag FLAG_PERMA_NIGHT
	goto Debug_Script_2_1


Debug_Script_3::
# 546 "data/scripts/general_scripts.pory"
	clearflag FLAG_NO_WILD_ENCOUNTERS
# 547 "data/scripts/general_scripts.pory"
	special LatiRide
	return


Debug_Script_4::
# 550 "data/scripts/general_scripts.pory"
	callnative ResetAnimCounter
	return


Debug_Script_5::
	return


Debug_Script_6::
	return


Debug_Script_7::
	return


Debug_Script_8::
# 563 "data/scripts/general_scripts.pory"
	special EnterCode
# 564 "data/scripts/general_scripts.pory"
	waitstate
# 565 "data/scripts/general_scripts.pory"
	special GetCodeFeedback
# 566 "data/scripts/general_scripts.pory"
	release
# 567 "data/scripts/general_scripts.pory"
	end
	return


Debug_Script_81::
# 572 "data/scripts/general_scripts.pory"
	special EnterCode
# 573 "data/scripts/general_scripts.pory"
	waitstate
# 574 "data/scripts/general_scripts.pory"
	special GetCodeFeedback
# 575 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Debug_Script_81_2
Debug_Script_81_1:
# 578 "data/scripts/general_scripts.pory"
	release
# 579 "data/scripts/general_scripts.pory"
	end
	return

Debug_Script_81_2:
# 576 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_81_Text_0
	goto Debug_Script_81_1


ResetAdamantTower::
	checkitem ITEM_MEGA_RING
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_2
# 607 "data/scripts/general_scripts.pory"
	lock
# 608 "data/scripts/general_scripts.pory"
	faceplayer
	msgbox ResetAdamantTower_YesNo, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_5
# 613 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR2_MAN3
# 614 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR2_WOMAN5
# 615 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR1_PSYCHIC
# 616 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR1_MAN5
# 617 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR1_EXPERT_M
# 618 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR1_EXPERT_F
# 619 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
# 620 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR2_PSYCHICF
# 621 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR1_BLACKBELT
# 622 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
# 623 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR2_LASS
# 624 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
# 625 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
# 626 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR3_BLACKBELT
# 627 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_M
# 628 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_F
# 629 "data/scripts/general_scripts.pory"
	removeitem ITEM_MEGA_RING
# 630 "data/scripts/general_scripts.pory"
	clearflag FLAG_OBTAINED_MEGA_RING
# 631 "data/scripts/general_scripts.pory"
	clearflag FLAG_REUNITE_WITH_RIVAL
# 632 "data/scripts/general_scripts.pory"
	setflag FLAG_DISABLE_SAVING
# 633 "data/scripts/general_scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	msgbox ResetAdamantTower_ResetTeam, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_8
# 638 "data/scripts/general_scripts.pory"
	setpartylevel 38
# 639 "data/scripts/general_scripts.pory"
	msgbox PartyHasBeenReset, MSGBOX_NPC
	end

ResetAdamantTower_2:
# 604 "data/scripts/general_scripts.pory"
	msgbox ThisIsForTesting, MSGBOX_NPC
	end

ResetAdamantTower_5:
# 610 "data/scripts/general_scripts.pory"
	release
	end

ResetAdamantTower_8:
# 635 "data/scripts/general_scripts.pory"
	release
	end


EndOfBetaBlock::
# 670 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_BETA_BLOCK, EndOfBetaBlock_2
EndOfBetaBlock_1:
# 675 "data/scripts/general_scripts.pory"
	release
	end

EndOfBetaBlock_2:
# 671 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta, MSGBOX_AUTOCLOSE
# 672 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Up
# 673 "data/scripts/general_scripts.pory"
	waitmovement 0
	goto EndOfBetaBlock_1


BarrenWastes_Block1::
# 686 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta2, MSGBOX_SIGN
# 687 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Right
# 688 "data/scripts/general_scripts.pory"
	waitmovement 0
# 689 "data/scripts/general_scripts.pory"
	release
	end


BarrenWastes_Block2::
# 693 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta2, MSGBOX_SIGN
# 694 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Down
# 695 "data/scripts/general_scripts.pory"
	waitmovement 0
# 696 "data/scripts/general_scripts.pory"
	release
	end


SkipToShoreslate::
# 706 "data/scripts/general_scripts.pory"
	call ClearRoute1
# 707 "data/scripts/general_scripts.pory"
	call ClearRoute2
# 708 "data/scripts/general_scripts.pory"
	call ClearWindyWoods
# 709 "data/scripts/general_scripts.pory"
	call ClearCoralgrove
# 710 "data/scripts/general_scripts.pory"
	call ClearAzuretide
# 711 "data/scripts/general_scripts.pory"
	call ClearRoute4
# 712 "data/scripts/general_scripts.pory"
	call ClearRanch
# 713 "data/scripts/general_scripts.pory"
	call ClearAldeleaf
# 714 "data/scripts/general_scripts.pory"
	call ClearRoute28
# 715 "data/scripts/general_scripts.pory"
	call ClearWindplume
# 716 "data/scripts/general_scripts.pory"
	call ClearRoute5
# 717 "data/scripts/general_scripts.pory"
	call ClearFlowerFields
# 718 "data/scripts/general_scripts.pory"
	call ClearSkyloch
# 719 "data/scripts/general_scripts.pory"
	call ClearRoute6
# 720 "data/scripts/general_scripts.pory"
	call ClearRoute8
# 721 "data/scripts/general_scripts.pory"
	call ClearShoreslate
	return


ClearRoute1::
# 725 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_COOLTRAINER
# 726 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_YOUNGSTER
# 727 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_FISHER
# 728 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_BUG_CATCHER
# 729 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_TUBER
# 730 "data/scripts/general_scripts.pory"
	addbp 10
# 731 "data/scripts/general_scripts.pory"
	additem ITEM_EXP_SHARE
# 732 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRO_TO_BP
# 733 "data/scripts/general_scripts.pory"
	msgbox ClearRoute1_Text_0
	return


ClearRoute2::
# 736 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL1
# 737 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
# 738 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL
# 739 "data/scripts/general_scripts.pory"
	additem ITEM_BIG_PEARL
# 740 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_FISHER
# 741 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_LASS
# 742 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_BLACKBELT
# 743 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_YOUNGSTER
# 744 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_SCHOOL_KID_F
# 745 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE2_X_ATTACK
# 746 "data/scripts/general_scripts.pory"
	additem ITEM_X_ATTACK
# 747 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_ORAN, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 748 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_PECHA, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 749 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_CHERI, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 750 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY, 2
# 751 "data/scripts/general_scripts.pory"
	additem ITEM_CHERI_BERRY, 2
# 752 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 753 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL
# 754 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 755 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE2_REVIVE
# 756 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 757 "data/scripts/general_scripts.pory"
	trystrangeseed
# 758 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_2
ClearRoute2_1:
# 761 "data/scripts/general_scripts.pory"
	trystrangeseed
# 762 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_5
ClearRoute2_4:
# 765 "data/scripts/general_scripts.pory"
	trystrangeseed
# 766 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_8
ClearRoute2_7:
	return

ClearRoute2_2:
# 759 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_1

ClearRoute2_5:
# 763 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_4

ClearRoute2_8:
# 767 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_7


ClearWindyWoods::
# 772 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_WW_PARLYZ
# 773 "data/scripts/general_scripts.pory"
	additem ITEM_PARLYZ_HEAL
# 774 "data/scripts/general_scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
# 775 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_BUGCATCHER
# 776 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_LADY
# 777 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_BUGCATCHER_2
# 778 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_CAMPER
# 779 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_LASS
# 780 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_YOUNGSTER
# 781 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_ACE_TRAINER
# 782 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SHELLY_SEAFLOOR_CAVERN
# 783 "data/scripts/general_scripts.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 784 "data/scripts/general_scripts.pory"
	switch VAR_STARTER_MON
# 785 "data/scripts/general_scripts.pory"
	case SPECIES_ROWLET, ClearWindyWoods_3
# 787 "data/scripts/general_scripts.pory"
	case SPECIES_TORCHIC, ClearWindyWoods_4
# 789 "data/scripts/general_scripts.pory"
	case SPECIES_PIPLUP, ClearWindyWoods_5
ClearWindyWoods_1:
# 792 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_WINDY_WOODS
# 793 "data/scripts/general_scripts.pory"
	setflag FLAG_GLADE_PUZZLE
# 794 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
# 795 "data/scripts/general_scripts.pory"
	addbp 10
	return

ClearWindyWoods_3:
# 786 "data/scripts/general_scripts.pory"
	additem ITEM_MIRACLE_SEED
	goto ClearWindyWoods_1

ClearWindyWoods_4:
# 788 "data/scripts/general_scripts.pory"
	additem ITEM_CHARCOAL
	goto ClearWindyWoods_1

ClearWindyWoods_5:
# 790 "data/scripts/general_scripts.pory"
	additem ITEM_MYSTIC_WATER
	goto ClearWindyWoods_1


ClearCoralgrove::
# 799 "data/scripts/general_scripts.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
# 800 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 801 "data/scripts/general_scripts.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 802 "data/scripts/general_scripts.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 803 "data/scripts/general_scripts.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
# 804 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY
# 805 "data/scripts/general_scripts.pory"
	additem ITEM_RARE_CANDY
# 806 "data/scripts/general_scripts.pory"
	setflag FLAG_CORAL_GREATBALL
# 807 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 808 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_1
# 809 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_2
# 810 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_3
# 811 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_4
# 812 "data/scripts/general_scripts.pory"
	additem ITEM_TM_FALSE_SWIPE
# 813 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CHIP
# 814 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_FOSTER
# 815 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_2
# 816 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_3
# 817 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_4
# 818 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_5
# 819 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEADER_AARON
# 820 "data/scripts/general_scripts.pory"
	setflag FLAG_BADGE01_GET
# 821 "data/scripts/general_scripts.pory"
	additem ITEM_TM_U_TURN
	checkplayergender
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ClearCoralgrove_2
# 826 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BRENDAN_CORALGROVE_ELEVATOR
ClearCoralgrove_1:
# 828 "data/scripts/general_scripts.pory"
	msgbox ClearCoralgrove_Text_0, MSGBOX_YESNO
# 829 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ClearCoralgrove_6
# 833 "data/scripts/general_scripts.pory"
	setflag FLAG_RIVAL_HARBOR_ANGRY
ClearCoralgrove_5:
# 835 "data/scripts/general_scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 836 "data/scripts/general_scripts.pory"
	additem ITEM_TM_REST
# 837 "data/scripts/general_scripts.pory"
	additem ITEM_OLD_ROD
# 838 "data/scripts/general_scripts.pory"
	setflag FLAG_HARBOR_GREATBALL
# 839 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 840 "data/scripts/general_scripts.pory"
	setflag FLAG_HARBOR_PEARL
# 841 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
	return

ClearCoralgrove_2:
# 823 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_MAY_CORALGROVE_ELEVATOR
	goto ClearCoralgrove_1

ClearCoralgrove_6:
# 830 "data/scripts/general_scripts.pory"
	additem ITEM_ITEMFINDER
	goto ClearCoralgrove_5


ClearAzuretide::
# 845 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_AZURETIDE
# 846 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY, 3
# 847 "data/scripts/general_scripts.pory"
	setflag FLAG_AZURETIDE_HONEY
# 848 "data/scripts/general_scripts.pory"
	additem ITEM_TOWN_MAP
# 849 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_PEARL
# 850 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_REDSHARD
# 851 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_HEATROCK
# 852 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
# 853 "data/scripts/general_scripts.pory"
	additem ITEM_RED_SHARD
# 854 "data/scripts/general_scripts.pory"
	additem ITEM_HEAT_ROCK
	return


ClearRoute4::
# 858 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_104_ORAN_1, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 859 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_103_LEPPA, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 860 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_103_CHERI_2, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 861 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY, 2
# 862 "data/scripts/general_scripts.pory"
	additem ITEM_LEPPA_BERRY, 2
# 863 "data/scripts/general_scripts.pory"
	additem ITEM_CHERI_BERRY, 2
# 864 "data/scripts/general_scripts.pory"
	trystrangeseed
# 865 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_2
ClearRoute4_1:
# 866 "data/scripts/general_scripts.pory"
	trystrangeseed
# 867 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_5
ClearRoute4_4:
# 868 "data/scripts/general_scripts.pory"
	trystrangeseed
# 869 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_8
ClearRoute4_7:
# 870 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL
# 871 "data/scripts/general_scripts.pory"
	additem ITEM_POKE_BALL
# 872 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE3_ANTIDOTE
# 873 "data/scripts/general_scripts.pory"
	additem ITEM_ANTIDOTE
# 874 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE3_GIGADRAIN
# 875 "data/scripts/general_scripts.pory"
	additem ITEM_TM_GRASS_KNOT
# 876 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_REVIVE
# 877 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 878 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_ETHER
# 879 "data/scripts/general_scripts.pory"
	additem ITEM_ETHER
# 880 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL
# 881 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_REPEL
# 882 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_HIKER
# 883 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_UNUSED_54_
# 884 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_POKEMANIAC
# 885 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BUGCATCHER
# 886 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TWINS
# 887 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TRIATHLETE
# 888 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_CAMPER
# 889 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_COOL_F
# 890 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_COOL_M
# 891 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER
# 892 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_YOUNGSTER
# 893 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER_2
# 894 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_DOUBLE_LASS
# 895 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_DOUBLE_YOUNGSTER
# 896 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TRIATHLETE_2
	return

ClearRoute4_2:
# 865 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_1

ClearRoute4_5:
# 867 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_4

ClearRoute4_8:
# 869 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_7


ClearRanch::
# 900 "data/scripts/general_scripts.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 901 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_POKE_RANCH
# 902 "data/scripts/general_scripts.pory"
	setflag FLAG_RANCH_HELPED
# 903 "data/scripts/general_scripts.pory"
	clearflag FLAG_HIDE_RANCH_OWNER
# 904 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_VOLKNER_2
# 905 "data/scripts/general_scripts.pory"
	additem ITEM_HM01
# 906 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 907 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 908 "data/scripts/general_scripts.pory"
	setflag FLAG_VOLKNER_HELPED
# 909 "data/scripts/general_scripts.pory"
	setflag FLAG_JASMINE_HELPED
# 910 "data/scripts/general_scripts.pory"
	setvar VAR_POKERANCH, 1
# 911 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_RICKY_4
# 912 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_RICKY_5
	return


ClearAldeleaf::
# 916 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_WIP_CITY1
# 917 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
# 918 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_VITO
# 919 "data/scripts/general_scripts.pory"
	setflag FLAG_SHELL_BELL_RECEIVED
# 920 "data/scripts/general_scripts.pory"
	additem ITEM_SHELL_BELL
# 921 "data/scripts/general_scripts.pory"
	additem ITEM_QUICK_BALL, 1
# 922 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_QUICK_BALL
# 923 "data/scripts/general_scripts.pory"
	setflag FLAG_KEY_RETURNED
# 924 "data/scripts/general_scripts.pory"
	additem ITEM_BLACK_FLUTE, 1
# 925 "data/scripts/general_scripts.pory"
	setflag FLAG_WHITEFLUTE_RECEIVED
# 926 "data/scripts/general_scripts.pory"
	additem ITEM_LAVA_COOKIE
# 927 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_LAVA_COOKIE
# 928 "data/scripts/general_scripts.pory"
	setflag FLAG_TOUCHPOKEBALL
# 929 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH1
# 930 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH2
# 931 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH3
# 932 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
# 933 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_MUSHROOM2
# 934 "data/scripts/general_scripts.pory"
	additem ITEM_TINY_MUSHROOM
# 935 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_LOST_KEY
# 936 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_PARKER
# 937 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_GEORGE
# 938 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BERKE
# 939 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BRAXTON
# 940 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_VINCENT
# 941 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEROY
# 942 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_1
# 943 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_EDGAR
# 944 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALBERT
# 945 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SAMUEL
# 946 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_OWEN
# 947 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_2
# 948 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_3
# 949 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_4
# 950 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_5
# 951 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WARREN
# 952 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEADER_VOLKNER
# 953 "data/scripts/general_scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 954 "data/scripts/general_scripts.pory"
	setflag FLAG_BADGE02_GET
# 955 "data/scripts/general_scripts.pory"
	additem ITEM_TM_CHARGE_BEAM
# 956 "data/scripts/general_scripts.pory"
	setflag FLAG_ANGEREDGUYINALDELEAF
# 957 "data/scripts/general_scripts.pory"
	msgbox ClearAldeleaf_Text_0
	return


ClearRoute28::
# 960 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 961 "data/scripts/general_scripts.pory"
	msgbox ClearRoute28_Text_0, MSGBOX_YESNO
# 962 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ClearRoute28_2
ClearRoute28_1:
# 965 "data/scripts/general_scripts.pory"
	additem ITEM_TM_SECRET_POWER
# 966 "data/scripts/general_scripts.pory"
	additem ITEM_FULL_HEAL
# 967 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR1_BUGCATCHER
# 968 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR2_HIKER
# 969 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR3_NINJABOY
# 970 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR4_PSYCHIC
# 971 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_TM
# 972 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_ITEMBALL
# 973 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_HIDDENBALL
# 974 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
	return

ClearRoute28_2:
# 963 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BROTHER_4_ROUTE28
	goto ClearRoute28_1


ClearWindplume::
# 977 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_WINDPLUME_VALLEY
# 978 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR1_BIRDKEEPER
# 979 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR2_TRIATH
# 980 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR3_BATTLEGIRL
# 981 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR4_CAMPER
# 982 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR5_BIRDKEEPER
# 983 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR6_MANIAC
# 984 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR7_BIRDKEEPER
# 985 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR8_NINJABOY
# 986 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR9_LASS
# 987 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR10_TRIATH
# 988 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR11_BIRDKEEPER
# 989 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR12_BATTLEGIRL
# 990 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR13_BIRDKEEPER
# 991 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR14_SKYLA
# 992 "data/scripts/general_scripts.pory"
	additem ITEM_HM02
# 993 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 994 "data/scripts/general_scripts.pory"
	additem ITEM_PRETTY_FEATHER, 6
# 995 "data/scripts/general_scripts.pory"
	additem ITEM_HYPER_POTION
# 996 "data/scripts/general_scripts.pory"
	additem ITEM_IRON_BALL
# 997 "data/scripts/general_scripts.pory"
	additem ITEM_ELIXIR
# 998 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_HYPER_POTION
# 999 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER3
# 1000 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER1
# 1001 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER2
# 1002 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER4
# 1003 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_IRON_BALL
# 1004 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_ELIXIR
# 1005 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER5
# 1006 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER6
	return


ClearRoute5::
# 1010 "data/scripts/general_scripts.pory"
	setberrytree 31, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 1011 "data/scripts/general_scripts.pory"
	setberrytree 21, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 1012 "data/scripts/general_scripts.pory"
	setberrytree 13, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 1013 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 1014 "data/scripts/general_scripts.pory"
	additem ITEM_RAWST_BERRY, 2
# 1015 "data/scripts/general_scripts.pory"
	additem ITEM_SITRUS_BERRY, 2
# 1016 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1017 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_2
ClearRoute5_1:
# 1020 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1021 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_5
ClearRoute5_4:
# 1024 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1025 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_8
ClearRoute5_7:
# 1028 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1029 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_11
ClearRoute5_10:
# 1030 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1031 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_14
ClearRoute5_13:
# 1032 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1033 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_17
ClearRoute5_16:
# 1034 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1035 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_20
ClearRoute5_19:
# 1036 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM1
# 1037 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM2
# 1038 "data/scripts/general_scripts.pory"
	additem ITEM_TINY_MUSHROOM, 2
# 1039 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_REPEL
# 1040 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 1041 "data/scripts/general_scripts.pory"
	additem ITEM_TM_ROCK_TOMB
# 1042 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM1
# 1043 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM2
# 1044 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM3
# 1045 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM5
# 1046 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM4
# 1047 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM3
# 1048 "data/scripts/general_scripts.pory"
	additem ITEM_MAX_ETHER
# 1049 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR15_COOLTRAINER
# 1050 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR1_FISHER
# 1051 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR2_BEAUTY
# 1052 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR3_YOUNGCOUPLE
# 1053 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR4_LASS1
# 1054 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR5_POKEFAN_F
# 1055 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR6_LASS2
# 1056 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR7_GENTLEMAN
# 1057 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR8_YOUNGSTER
# 1058 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR9_TRIATHLETE
# 1059 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR10_RICHBOY
# 1060 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR11_MAN_5
# 1061 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR12_BUGCATCHER
# 1062 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR13_NINJABOY
# 1063 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR14_HIKER
# 1064 "data/scripts/general_scripts.pory"
	additem ITEM_EVIOLITE
# 1065 "data/scripts/general_scripts.pory"
	addbp 20
	return

ClearRoute5_2:
# 1018 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_1

ClearRoute5_5:
# 1022 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_4

ClearRoute5_8:
# 1026 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_7

ClearRoute5_11:
# 1029 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_10

ClearRoute5_14:
# 1031 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_13

ClearRoute5_17:
# 1033 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_16

ClearRoute5_20:
# 1035 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_19


ClearFlowerFields::
# 1069 "data/scripts/general_scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_INTRODUCED
# 1070 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_1
# 1071 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_2
# 1072 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_3
# 1073 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY
# 1074 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY
# 1075 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY
# 1076 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_FIELDS
# 1077 "data/scripts/general_scripts.pory"
	additem ITEM_RARE_CANDY
	return


ClearSkyloch::
# 1081 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_WIP_TOWN2
# 1082 "data/scripts/general_scripts.pory"
	additem ITEM_OCCA_BERRY, 1
# 1083 "data/scripts/general_scripts.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 1084 "data/scripts/general_scripts.pory"
	additem ITEM_BERRY_JUICE, 1
# 1085 "data/scripts/general_scripts.pory"
	setflag FLAG_SKYLOCH_JUICE
	return


ClearRoute6::
# 1089 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVON_RESCUED
# 1090 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR1_RANGER_M
# 1091 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR3_CAMPER_F
# 1092 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR5_HIKER
# 1093 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR6_CAMPER_M2
# 1094 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR7_KINDLER
	return


ClearRoute8::
# 1098 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 1099 "data/scripts/general_scripts.pory"
	additem ITEM_TM_ROCK_POLISH
# 1100 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR1_PARASOLLADY
# 1101 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR2_SRJR
# 1102 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR3_AROMALADY
# 1103 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR4_YOUNGSTER
# 1104 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR5_PSYCHIC_F
# 1105 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR6_ENTHUSIAST
# 1106 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR7_TRIATHLETE_M
# 1107 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR8_GENTLEMAN
# 1108 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR9_HIKER
# 1109 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR10_OLDCOUPLE
# 1110 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR11_BIRDKEEPER
# 1111 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM1
# 1112 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM2
# 1113 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM3
# 1114 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM5
# 1115 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM6
# 1116 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 1117 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY
# 1118 "data/scripts/general_scripts.pory"
	additem ITEM_FULL_HEAL
# 1119 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 1120 "data/scripts/general_scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 1121 "data/scripts/general_scripts.pory"
	additem ITEM_WAILMER_PAIL
# 1122 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 1123 "data/scripts/general_scripts.pory"
	setberrytree 15, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 1124 "data/scripts/general_scripts.pory"
	setberrytree 22, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 1125 "data/scripts/general_scripts.pory"
	setberrytree 24, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 1126 "data/scripts/general_scripts.pory"
	setberrytree 33, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 1127 "data/scripts/general_scripts.pory"
	additem ITEM_POMEG_BERRY, 2
# 1128 "data/scripts/general_scripts.pory"
	additem ITEM_RAWST_BERRY, 2
# 1129 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 1130 "data/scripts/general_scripts.pory"
	additem ITEM_SITRUS_BERRY, 2
# 1131 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1132 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_2
ClearRoute8_1:
# 1135 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1136 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_5
ClearRoute8_4:
# 1139 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1140 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_8
ClearRoute8_7:
# 1143 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1144 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_11
ClearRoute8_10:
# 1147 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1148 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_14
ClearRoute8_13:
# 1151 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1152 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_17
ClearRoute8_16:
# 1156 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1157 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_20
ClearRoute8_19:
# 1161 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1162 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_23
ClearRoute8_22:
# 1166 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1167 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_26
ClearRoute8_25:
# 1171 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1172 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_29
ClearRoute8_28:
	return

ClearRoute8_2:
# 1133 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_1

ClearRoute8_5:
# 1137 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_4

ClearRoute8_8:
# 1141 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_7

ClearRoute8_11:
# 1145 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_10

ClearRoute8_14:
# 1149 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_13

ClearRoute8_17:
# 1153 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_16

ClearRoute8_20:
# 1158 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_19

ClearRoute8_23:
# 1163 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_22

ClearRoute8_26:
# 1168 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_25

ClearRoute8_29:
# 1173 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_28


ClearShoreslate::
# 1178 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_POTION
# 1179 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_SHORESLATE_POTION
# 1180 "data/scripts/general_scripts.pory"
	setrespawn HEAL_LOCATION_SHORESLATE_CITY
# 1181 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_SHORESLATE
# 1182 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 1183 "data/scripts/general_scripts.pory"
	additem ITEM_AIR_BALLOON
# 1184 "data/scripts/general_scripts.pory"
	setflag FLAG_GIVEN_CASTELIATOGIRL
# 1185 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SHORESLATE_ROCKET
# 1186 "data/scripts/general_scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 1187 "data/scripts/general_scripts.pory"
	setvar VAR_DESERT_BYPASS, 1
# 1188 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC1F_ROCKET_1
# 1189 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC1F_ROCKET_2
# 1190 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_1
# 1191 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_2
# 1192 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_3
# 1193 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_4
# 1194 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_1
# 1195 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_2
# 1196 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_3
# 1197 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_4
# 1198 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_5
# 1199 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC3F_ROCKET_1
# 1200 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_POTION
# 1201 "data/scripts/general_scripts.pory"
	setflag FLAG_BASEMENT_SUPERPOTION
# 1202 "data/scripts/general_scripts.pory"
	additem ITEM_QUICK_BALL
# 1203 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVONCORP_BASEMENT_BALL
# 1204 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVON_UNDER_ATTACK
# 1205 "data/scripts/general_scripts.pory"
	setflag FLAG_HELPED_DEVON_CORP
# 1206 "data/scripts/general_scripts.pory"
	clearflag FLAG_HIDE_SHORESLATE_BOAT
# 1207 "data/scripts/general_scripts.pory"
	additem ITEM_HM05
# 1208 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 1209 "data/scripts/general_scripts.pory"
	additem ITEM_ACRO_BIKE
	return


Pearlwood_Debug::
# 1214 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Pearlwood_Debug_2
# 1220 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Pearlwood_Debug_5
# 1225 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_2
# 1226 "data/scripts/general_scripts.pory"
	call SkipToShoreslate
# 1227 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_3, MSGBOX_YESNO
# 1228 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Pearlwood_Debug_8
# 1234 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_4
# 1235 "data/scripts/general_scripts.pory"
	removeobject 7
Pearlwood_Debug_7:
# 1237 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_2:
# 1215 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_0
# 1216 "data/scripts/general_scripts.pory"
	removeobject 7
# 1217 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_5:
# 1221 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_1
# 1222 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_8:
# 1229 "data/scripts/general_scripts.pory"
	setflag FLAG_OPENED_MAP_FROM_SIGN
# 1230 "data/scripts/general_scripts.pory"
	fadescreen FADE_TO_BLACK
# 1231 "data/scripts/general_scripts.pory"
	callnative OpenFlyMapFromSign
	goto Pearlwood_Debug_7


# 5 "data/scripts/general_scripts.pory"
RopeBridgeScript_Movement_0:
# 5 "data/scripts/general_scripts.pory"
	lock_anim
# 5 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 5 "data/scripts/general_scripts.pory"
	jump_right
# 5 "data/scripts/general_scripts.pory"
	unlock_anim
# 5 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

EventScript_IceSmash_Text_0:
# 96 "data/scripts/general_scripts.pory"
	.string "This block of ice appears to be fragile.\nWould you like to use Rock Smash?$"

Debug_Script_1_Text_0:
# 481 "data/scripts/general_scripts.pory"
	.string "Gym 1 (lvl 14)$"

Debug_Script_1_Text_1:
# 482 "data/scripts/general_scripts.pory"
	.string "Gym 2 (lvl 22)$"

Debug_Script_1_Text_2:
# 483 "data/scripts/general_scripts.pory"
	.string "Side area (lvl 24)$"

Debug_Script_1_Text_3:
# 484 "data/scripts/general_scripts.pory"
	.string "Story 1 (lvl 29)$"

Debug_Script_1_Text_4:
# 485 "data/scripts/general_scripts.pory"
	.string "Gym 3 (lvl 34)$"

Debug_Script_1_Text_5:
# 486 "data/scripts/general_scripts.pory"
	.string "Gym 4 (lvl 38)$"

Debug_Script_1_Text_6:
# 487 "data/scripts/general_scripts.pory"
	.string "Post-Gym 4 (lvl 40)$"

Debug_Script_1_Text_7:
# 488 "data/scripts/general_scripts.pory"
	.string "Gym 5 (lvl 45)$"

Debug_Script_1_Text_8:
# 489 "data/scripts/general_scripts.pory"
	.string "Gym 6 (lvl 53)$"

Debug_Script_1_Text_9:
# 490 "data/scripts/general_scripts.pory"
	.string "Cancel$"

Debug_Script_1_Text_10:
# 494 "data/scripts/general_scripts.pory"
	.string "Team set to level 14.$"

Debug_Script_1_Text_11:
# 497 "data/scripts/general_scripts.pory"
	.string "Team set to level 22.$"

Debug_Script_1_Text_12:
# 500 "data/scripts/general_scripts.pory"
	.string "Team set to level 24.$"

Debug_Script_1_Text_13:
# 503 "data/scripts/general_scripts.pory"
	.string "Team set to level 29.$"

Debug_Script_1_Text_14:
# 506 "data/scripts/general_scripts.pory"
	.string "Team set to level 34.$"

Debug_Script_1_Text_15:
# 509 "data/scripts/general_scripts.pory"
	.string "Team set to level 38.$"

Debug_Script_1_Text_16:
# 512 "data/scripts/general_scripts.pory"
	.string "Team set to level 40.$"

Debug_Script_1_Text_17:
# 515 "data/scripts/general_scripts.pory"
	.string "Team set to level 45.$"

Debug_Script_1_Text_18:
# 518 "data/scripts/general_scripts.pory"
	.string "Team set to level 53.$"

Debug_Script_2_Text_0:
# 529 "data/scripts/general_scripts.pory"
	.string "Would you like to turn off\nthe permanent night?$"

Debug_Script_2_Text_1:
# 531 "data/scripts/general_scripts.pory"
	.string "Setting time back to normal.$"

Debug_Script_2_Text_2:
# 536 "data/scripts/general_scripts.pory"
	.string "Would you like to turn on\nthe permanent night?$"

Debug_Script_2_Text_3:
# 538 "data/scripts/general_scripts.pory"
	.string "Setting time to permanent night.$"

Debug_Script_81_Text_0:
# 576 "data/scripts/general_scripts.pory"
	.string "I'm sorry, but that's not a code\nI recognize.$"

ClearRoute1_Text_0:
# 733 "data/scripts/general_scripts.pory"
	.string "Obtained Exp. Share.\nDon't forget to turn it on!$"

ClearCoralgrove_Text_0:
# 828 "data/scripts/general_scripts.pory"
	.string "Was {RIVAL} defeated in\nCoralgrove Harbor?$"

ClearAldeleaf_Text_0:
# 957 "data/scripts/general_scripts.pory"
	.string "Aldeleaf City has been cleared, but\nthe events with Mimikyu and Sudowoodo\lare still intact.$"

ClearRoute28_Text_0:
# 961 "data/scripts/general_scripts.pory"
	.string "Has brother been defeated on the\nroute north of Aldeleaf City?$"

Pearlwood_Debug_Text_0:
# 1215 "data/scripts/general_scripts.pory"
	.string "Oops, I should no longer be here.\pBye!$"

Pearlwood_Debug_Text_1:
# 1221 "data/scripts/general_scripts.pory"
	.string "Come back after obtaining\nthe Pokédex.$"

Pearlwood_Debug_Text_2:
# 1225 "data/scripts/general_scripts.pory"
	.string "Hello, I am here to help you skip\na bunch of stuff you've already done.$"

Pearlwood_Debug_Text_3:
# 1227 "data/scripts/general_scripts.pory"
	.string "All items, trainers, and story events\nup to Shoreslate have been completed.\pYou will have to catch your own\nPokémon though.\pWould you like me to fly you\nsomewhere?$"

Pearlwood_Debug_Text_4:
# 1234 "data/scripts/general_scripts.pory"
	.string "Okay then.\nBye!$"

FollowerSpottedAnItemNearby_Text::
# 113 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1} seems to have spotted\n"
	.string "something interesting nearby!$"

GainedASpecialTicket::
# 140 "data/scripts/general_scripts.pory"
	.string "Due to your victory, you have\n"
	.string "earned a special victory ticket.\p"
	.string "Earn two more victory tickets, and\n"
	.string "you will get a special extra prize!$"

NowHaveTwoTickets::
# 146 "data/scripts/general_scripts.pory"
	.string "You now have two victory tickets.\p"
	.string "Earn one more ticket for a special\n"
	.string "extra prize!$"

TentGrandPrize::
# 151 "data/scripts/general_scripts.pory"
	.string "You just earned your third victory\n"
	.string "ticket.\p"
	.string "This means you are eligible for a\n"
	.string "special reward, a Fresh Start Mochi!$"

SeenAnyStrangeSeeds::
# 235 "data/scripts/general_scripts.pory"
	.string "I've been hearing some rumors about\n"
	.string "Pokémon hiding strange seeds in trees.$"

CareToTradeSeeds::
# 238 "data/scripts/general_scripts.pory"
	.string "Ah, those seeds seem to match\n"
	.string "the description!\p"
	.string "I have this special plant fertilizer\n"
	.string "that can greatly improve the growth\l"
	.string "rate of berry trees.\p"
	.string "If you'd like, I can trade you\n"
	.string "two batches of the fertilizer\l"
	.string "for a single strange seed.$"

ComeTradeWhenGetMoreSeeds::
# 247 "data/scripts/general_scripts.pory"
	.string "If you find any strange seeds, I'll\n"
	.string "gladly trade them for some fertilizer.$"

HereToTradeMoreSeeds::
# 250 "data/scripts/general_scripts.pory"
	.string "Here to trade some strange seeds?$"

TradeHowManySeeds::
# 252 "data/scripts/general_scripts.pory"
	.string "How many seeds would you\n"
	.string "like to trade?$"

TradeSeedsForFertilizer_Text_Single::
# 255 "data/scripts/general_scripts.pory"
	.string "One seed for two batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

TradeSeedsForFertilizer_Text_Multiple::
# 259 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1} seeds for {STR_VAR_2} batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

BerryTree_Text_FertilizedTheBerry::
# 329 "data/scripts/general_scripts.pory"
	.string "{PLAYER} applied the Fertilizer to\n"
	.string "the {STR_VAR_1} plant.$"

StrangeSeedDroppedBerry::
# 332 "data/scripts/general_scripts.pory"
	.string "A Strange Seed dropped from the\n"
	.string "berry tree.$"

StrangeSeedDroppedTree::
# 335 "data/scripts/general_scripts.pory"
	.string "A Strange Seed dropped from the tree.$"

BerryTree_Text_PickedTheSeed::
# 337 "data/scripts/general_scripts.pory"
	.string "{PLAYER} picked up the Strange Seed.$"

BerryTree_Text_PutAwaySeed::
# 339 "data/scripts/general_scripts.pory"
	.string "{PLAYER} put away the Strange\n"
	.string "Seed in the Items pocket.$"

BerryTree_Text_PutAwayBerryAndSeed::
# 342 "data/scripts/general_scripts.pory"
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "in the bag's berries pocket\l"
	.string "and the Strange Seed in the\l"
	.string "Items pocket.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"

PlayerFoundZygardeCell::
# 361 "data/scripts/general_scripts.pory"
	.string "{PLAYER} found a Zygarde Cell!$"

gText_PutZygardeCellInCube::
# 363 "data/scripts/general_scripts.pory"
	.string "{PLAYER} stored the Zygarde Cell\n"
	.string "in the Zygarde Cube.$"

PlayerFoundZygardeCore::
# 378 "data/scripts/general_scripts.pory"
	.string "{PLAYER} found a Zygarde Core!$"

gText_PutZygardeCoreInCube::
# 380 "data/scripts/general_scripts.pory"
	.string "{PLAYER} stored the Zygarde Core\n"
	.string "in the Zygarde Cube.$"

AutomaticUpdate_Text1::
# 413 "data/scripts/general_scripts.pory"
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
# 431 "data/scripts/general_scripts.pory"
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
# 445 "data/scripts/general_scripts.pory"
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
# 457 "data/scripts/general_scripts.pory"
	.string "10. A new battle tent has opened in\n"
	.string "Rockliffe town.\p"
	.string "11. HM moves can no longer forgotten\n"
	.string "(unless visiting a move deleter)$"

SceneAltered::
# 463 "data/scripts/general_scripts.pory"
	.string "An earlier story scene of\n"
	.string "Team Rocket's assault on Devon\l"
	.string "Corp. has had its dialogue\l"
	.string "slightly altered, which affects\l"
	.string "the upcoming story.\p"
	.string "Would you like to view the\n"
	.string "altered scene?$"

LevelSetIntro::
# 586 "data/scripts/general_scripts.pory"
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
# 597 "data/scripts/general_scripts.pory"
	.string "Which level would you like to set\n"
	.string "your team?$"

ThisIsForTesting::
# 643 "data/scripts/general_scripts.pory"
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.$"

ResetAdamantTower_YesNo::
# 647 "data/scripts/general_scripts.pory"
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.\p"
	.string "Would you like to reset the tower?$"

ResetAdamantTower_ResetTeam::
# 652 "data/scripts/general_scripts.pory"
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
# 665 "data/scripts/general_scripts.pory"
	.string "Team has been set to lvl 38.$"

EndOfBeta::
# 679 "data/scripts/general_scripts.pory"
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"

EndOfBeta2::
# 699 "data/scripts/general_scripts.pory"
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"
