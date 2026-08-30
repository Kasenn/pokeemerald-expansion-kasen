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


# 17 "data/scripts/general_scripts.pory"
FacePlayer:
# 18 "data/scripts/general_scripts.pory"
	face_player
	step_end

Common_EventScript_FindItem::
# 22 "data/scripts/general_scripts.pory"
	callnative GetObjectEventTrainerRangeFromTemplate
# 23 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT
	end


SetupRivalGfxId::
	checkplayergender
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SetupRivalGfxId_1
# 37 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalGfxId_7
# 41 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

SetupRivalGfxId_1:
# 29 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalGfxId_4
# 33 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

SetupRivalGfxId_4:
# 30 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_ORAS_NORMAL
	return

SetupRivalGfxId_7:
# 38 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_ORAS_NORMAL
	return


CountGymBadges::
# 47 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, CountGymBadges_2
# 50 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CountGymBadges_3
# 53 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, CountGymBadges_4
# 56 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, CountGymBadges_5
# 59 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CountGymBadges_6
# 62 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CountGymBadges_7
# 65 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CountGymBadges_8
# 68 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, CountGymBadges_9
# 72 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
CountGymBadges_1:
	return

CountGymBadges_2:
# 48 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 8
	goto CountGymBadges_1

CountGymBadges_3:
# 51 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 7
	goto CountGymBadges_1

CountGymBadges_4:
# 54 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 6
	goto CountGymBadges_1

CountGymBadges_5:
# 57 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 5
	goto CountGymBadges_1

CountGymBadges_6:
# 60 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 4
	goto CountGymBadges_1

CountGymBadges_7:
# 63 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 3
	goto CountGymBadges_1

CountGymBadges_8:
# 66 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 2
	goto CountGymBadges_1

CountGymBadges_9:
# 69 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 1
	goto CountGymBadges_1


EventScript_UseRockClimb::
# 77 "data/scripts/general_scripts.pory"
	lockall
# 78 "data/scripts/general_scripts.pory"
	checkpartymove MOVE_ROCK_CLIMB
# 79 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantRockClimb
# 80 "data/scripts/general_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 81 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 82 "data/scripts/general_scripts.pory"
	compare VAR_ROCK_CLIMB_USED, 2
	goto_if_lt EventScript_UseRockClimb_2
EventScript_UseRockClimb_1:
# 87 "data/scripts/general_scripts.pory"
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
# 90 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EnterPokeballMovement
# 91 "data/scripts/general_scripts.pory"
	waitmovement 0
# 92 "data/scripts/general_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 93 "data/scripts/general_scripts.pory"
	goto EventScript_EndRockClimb
	return

EventScript_UseRockClimb_2:
# 83 "data/scripts/general_scripts.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 84 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndRockClimb
# 85 "data/scripts/general_scripts.pory"
	addvar VAR_ROCK_CLIMB_USED, 1
	goto EventScript_UseRockClimb_1


EventScript_IceSmash::
# 97 "data/scripts/general_scripts.pory"
	lockall
# 98 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_IceSmash_2
EventScript_IceSmash_1:
# 101 "data/scripts/general_scripts.pory"
	checkpartymove MOVE_ROCK_SMASH
# 102 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
# 103 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 104 "data/scripts/general_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 105 "data/scripts/general_scripts.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 106 "data/scripts/general_scripts.pory"
	msgbox EventScript_IceSmash_Text_0, MSGBOX_YESNO
# 107 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
# 108 "data/scripts/general_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 109 "data/scripts/general_scripts.pory"
	closemessage
# 110 "data/scripts/general_scripts.pory"
	goto EventScript_RockSmashCommon
	return

EventScript_IceSmash_2:
# 99 "data/scripts/general_scripts.pory"
	goto EventScript_CantSmashRock
	goto EventScript_IceSmash_1


FollowerSpottedAnItemNearby::
# 114 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 115 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 116 "data/scripts/general_scripts.pory"
	waitmovement 0
# 117 "data/scripts/general_scripts.pory"
	delay 48
# 118 "data/scripts/general_scripts.pory"
	setflag FLAG_FOLLOWER_FINDER_INTRO
# 119 "data/scripts/general_scripts.pory"
	bufferlivemonnickname 0
# 120 "data/scripts/general_scripts.pory"
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_SIGN
	end


FollowerAfterFindingItem::
# 128 "data/scripts/general_scripts.pory"
	bufferlivemonnickname 0
# 129 "data/scripts/general_scripts.pory"
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_NPC
	return


CheckForTentSpecialPrize::
# 132 "data/scripts/general_scripts.pory"
	compare VAR_TENT_SPECIAL_PRIZE, 3
	goto_if_ne CheckForTentSpecialPrize_2
CheckForTentSpecialPrize_1:
# 135 "data/scripts/general_scripts.pory"
	switch VAR_TENT_SPECIAL_PRIZE
# 136 "data/scripts/general_scripts.pory"
	case 1, CheckForTentSpecialPrize_6
# 138 "data/scripts/general_scripts.pory"
	case 2, CheckForTentSpecialPrize_7
# 140 "data/scripts/general_scripts.pory"
	case 3, CheckForTentSpecialPrize_8
CheckForTentSpecialPrize_4:
# 148 "data/scripts/general_scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
	return

CheckForTentSpecialPrize_2:
# 133 "data/scripts/general_scripts.pory"
	addvar VAR_TENT_SPECIAL_PRIZE, 1
	goto CheckForTentSpecialPrize_1

CheckForTentSpecialPrize_6:
# 137 "data/scripts/general_scripts.pory"
	msgbox GainedASpecialTicket
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_7:
# 139 "data/scripts/general_scripts.pory"
	msgbox NowHaveTwoTickets
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_8:
# 141 "data/scripts/general_scripts.pory"
	msgbox TentGrandPrize
# 142 "data/scripts/general_scripts.pory"
	giveitem ITEM_FRESH_START_MOCHI
# 143 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckForTentSpecialPrize_10
CheckForTentSpecialPrize_9:
# 146 "data/scripts/general_scripts.pory"
	setvar VAR_TENT_SPECIAL_PRIZE, 0
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_10:
# 144 "data/scripts/general_scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
	goto CheckForTentSpecialPrize_9


TradeSeedsForFertilizer::
# 168 "data/scripts/general_scripts.pory"
	lock
# 169 "data/scripts/general_scripts.pory"
	faceplayer
# 170 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_MET_STRANGE_SEED_TRADER, TradeSeedsForFertilizer_2
TradeSeedsForFertilizer_1:
# 178 "data/scripts/general_scripts.pory"
	msgbox SeenAnyStrangeSeeds, MSGBOX_NPC
	checkitem ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_5
TradeSeedsForFertilizer_4:
# 191 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsForFertilizer_11
TradeSeedsForFertilizer_10:
	end

TradeSeedsForFertilizer_2:
	checkitem ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_8
TradeSeedsForFertilizer_7:
# 176 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_1

TradeSeedsForFertilizer_5:
# 180 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 181 "data/scripts/general_scripts.pory"
	safefollow
# 182 "data/scripts/general_scripts.pory"
	exclamationmark 4
# 183 "data/scripts/general_scripts.pory"
	setflag FLAG_MET_STRANGE_SEED_TRADER
	msgbox CareToTradeSeeds, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_13
# 188 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_8:
	msgbox HereToTradeMoreSeeds, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_16
	goto TradeSeedsForFertilizer_7

TradeSeedsForFertilizer_11:
# 192 "data/scripts/general_scripts.pory"
	startquest FLAG_Q12_FLOWERSHOP_STRANGESEED_START
# 193 "data/scripts/general_scripts.pory"
	special ShowJournalPopupAdd
	goto TradeSeedsForFertilizer_10

TradeSeedsForFertilizer_13:
# 185 "data/scripts/general_scripts.pory"
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_16:
# 173 "data/scripts/general_scripts.pory"
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_7


TradeSeedsMain::
# 198 "data/scripts/general_scripts.pory"
	checkitemquant ITEM_STRANGE_SEED
	msgbox TradeHowManySeeds, MSGBOX_HOWMANY
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TradeSeedsMain_1
# 203 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 204 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
TradeSeedsMain_5:
# 205 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TradeSeedsMain_6
# 209 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 210 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TradeSeedsMain_9
	msgbox TradeSeedsForFertilizer_Text_Multiple, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsMain_14
TradeSeedsMain_8:
# 232 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_1:
# 200 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_6:
# 206 "data/scripts/general_scripts.pory"
	subvar VAR_RESULT, 1
# 207 "data/scripts/general_scripts.pory"
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
# 217 "data/scripts/general_scripts.pory"
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
# 218 "data/scripts/general_scripts.pory"
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_14:
	checkitemspace ITEM_FERTILIZER, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeSeedsMain_20
TradeSeedsMain_19:
# 228 "data/scripts/general_scripts.pory"
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
# 229 "data/scripts/general_scripts.pory"
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_17:
# 213 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 214 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 215 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto TradeSeedsMain_16

TradeSeedsMain_20:
# 224 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 225 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 226 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto TradeSeedsMain_19


TradeSeedsGoodbye::
# 235 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 236 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 237 "data/scripts/general_scripts.pory"
	msgbox ComeTradeWhenGetMoreSeeds, MSGBOX_NPC
# 238 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsGoodbye_3
TradeSeedsGoodbye_1:
	end

TradeSeedsGoodbye_2:
# 239 "data/scripts/general_scripts.pory"
	completequest FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE
# 240 "data/scripts/general_scripts.pory"
	special ShowJournalPopupRemove
	goto TradeSeedsGoodbye_1

TradeSeedsGoodbye_3:
# 238 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE, TradeSeedsGoodbye_2
	goto TradeSeedsGoodbye_1


ZeBagIsFull::
# 274 "data/scripts/general_scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	end


BerryTree_ItemUseFertilizer::
# 277 "data/scripts/general_scripts.pory"
	special ObjectEventInteractionGetBerryName
# 278 "data/scripts/general_scripts.pory"
	message BerryTree_Text_FertilizedTheBerry
# 279 "data/scripts/general_scripts.pory"
	waitmessage
# 280 "data/scripts/general_scripts.pory"
	special ObjectEventInteractionWaterBerryTree
# 281 "data/scripts/general_scripts.pory"
	fertilizeberry
# 282 "data/scripts/general_scripts.pory"
	special DoFertilizingBerryTreeAnim
# 283 "data/scripts/general_scripts.pory"
	waitstate
# 284 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PlantIsDelighted
# 285 "data/scripts/general_scripts.pory"
	waitmessage
# 286 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 287 "data/scripts/general_scripts.pory"
	releaseall
# 288 "data/scripts/general_scripts.pory"
	dotimebasedevents
# 289 "data/scripts/general_scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq BerryTree_ItemUseFertilizer_2
BerryTree_ItemUseFertilizer_1:
	end

BerryTree_ItemUseFertilizer_2:
# 290 "data/scripts/general_scripts.pory"
	delay 210
	goto BerryTree_ItemUseFertilizer_1


TryDropStrangeSeed_Tree::
# 294 "data/scripts/general_scripts.pory"
	trystrangeseed
# 295 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge TryDropStrangeSeed_Tree_3
TryDropStrangeSeed_Tree_1:
	return

TryDropStrangeSeed_Tree_2:
# 297 "data/scripts/general_scripts.pory"
	waitse
# 298 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 299 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 300 "data/scripts/general_scripts.pory"
	waitmovement 0
# 301 "data/scripts/general_scripts.pory"
	delay 48
# 302 "data/scripts/general_scripts.pory"
	msgbox StrangeSeedDroppedTree
# 303 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 304 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 305 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 306 "data/scripts/general_scripts.pory"
	waitmessage
# 307 "data/scripts/general_scripts.pory"
	waitfanfare
# 308 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 309 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwaySeed
# 310 "data/scripts/general_scripts.pory"
	waitmessage
# 311 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto TryDropStrangeSeed_Tree_1

TryDropStrangeSeed_Tree_3:
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_Tree_2
	goto TryDropStrangeSeed_Tree_1


TryDropStrangeSeed_BerryPlant::
# 315 "data/scripts/general_scripts.pory"
	trystrangeseed
# 316 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge TryDropStrangeSeed_BerryPlant_4
TryDropStrangeSeed_BerryPlant_3:
# 334 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwayBerry
TryDropStrangeSeed_BerryPlant_1:
	return

TryDropStrangeSeed_BerryPlant_2:
# 318 "data/scripts/general_scripts.pory"
	closemessage
# 319 "data/scripts/general_scripts.pory"
	waitse
# 320 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 321 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 322 "data/scripts/general_scripts.pory"
	waitmovement 0
# 323 "data/scripts/general_scripts.pory"
	delay 48
# 324 "data/scripts/general_scripts.pory"
	msgbox StrangeSeedDroppedBerry
# 325 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 326 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 327 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 328 "data/scripts/general_scripts.pory"
	waitmessage
# 329 "data/scripts/general_scripts.pory"
	waitfanfare
# 330 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 331 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwayBerryAndSeed
	goto TryDropStrangeSeed_BerryPlant_1

TryDropStrangeSeed_BerryPlant_4:
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_BerryPlant_2
	goto TryDropStrangeSeed_BerryPlant_3


ZygardeCell::
# 358 "data/scripts/general_scripts.pory"
	lock
# 359 "data/scripts/general_scripts.pory"
	waitse
# 360 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/scripts/general_scripts.pory"
	removeobject VAR_LAST_TALKED
# 362 "data/scripts/general_scripts.pory"
	message PlayerFoundZygardeCell
# 363 "data/scripts/general_scripts.pory"
	waitfanfare
# 364 "data/scripts/general_scripts.pory"
	waitmessage
# 365 "data/scripts/general_scripts.pory"
	msgbox gText_PutZygardeCellInCube
# 366 "data/scripts/general_scripts.pory"
	addvar VAR_ZYGARDE_CELLS, 1
# 367 "data/scripts/general_scripts.pory"
	release
	end


ZygardeCore::
# 375 "data/scripts/general_scripts.pory"
	lock
# 376 "data/scripts/general_scripts.pory"
	waitse
# 377 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 378 "data/scripts/general_scripts.pory"
	removeobject VAR_LAST_TALKED
# 379 "data/scripts/general_scripts.pory"
	message PlayerFoundZygardeCore
# 380 "data/scripts/general_scripts.pory"
	waitfanfare
# 381 "data/scripts/general_scripts.pory"
	waitmessage
# 382 "data/scripts/general_scripts.pory"
	msgbox gText_PutZygardeCoreInCube
# 383 "data/scripts/general_scripts.pory"
	addvar VAR_ZYGARDE_CORES, 1
# 384 "data/scripts/general_scripts.pory"
	release
	end


EventScript_CutGrassSeedDrop::
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutGrassSeedDrop_2
EventScript_CutGrassSeedDrop_1:
# 396 "data/scripts/general_scripts.pory"
	waitse
# 397 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 398 "data/scripts/general_scripts.pory"
	callnative RevertSeedDropMetatile
# 399 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 400 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 401 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 402 "data/scripts/general_scripts.pory"
	waitmessage
# 403 "data/scripts/general_scripts.pory"
	waitfanfare
# 404 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwaySeed
# 405 "data/scripts/general_scripts.pory"
	waitmessage
# 406 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 407 "data/scripts/general_scripts.pory"
	release
	return

EventScript_CutGrassSeedDrop_2:
# 394 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto EventScript_CutGrassSeedDrop_1


IrisBattle::
# 413 "data/scripts/general_scripts.pory"
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


DraydenBattle::
# 415 "data/scripts/general_scripts.pory"
	trainerbattle_single TRAINER_LEADER_DRAYDEN, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


MinaBattle::
# 417 "data/scripts/general_scripts.pory"
	trainerbattle_single TRAINER_ELITE_FOUR_MINA, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


Debug_Script_1::
# 485 "data/scripts/general_scripts.pory"
	lock
# 486 "data/scripts/general_scripts.pory"
	msgbox LevelSetIntro, MSGBOX_DEFAULT
# 487 "data/scripts/general_scripts.pory"
	message WhichLevelToSet
# 488 "data/scripts/general_scripts.pory"
	waitmessage
# 489 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_0, 0
# 490 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_1, 1
# 491 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_2, 2
# 492 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_3, 3
# 493 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_4, 4
# 494 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_5, 5
# 495 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_6, 6
# 496 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_7, 7
# 497 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_8, 8
# 498 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_9, 9
# 499 "data/scripts/general_scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
# 500 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 501 "data/scripts/general_scripts.pory"
	case 0, Debug_Script_1_3
# 504 "data/scripts/general_scripts.pory"
	case 1, Debug_Script_1_4
# 507 "data/scripts/general_scripts.pory"
	case 2, Debug_Script_1_5
# 510 "data/scripts/general_scripts.pory"
	case 3, Debug_Script_1_6
# 513 "data/scripts/general_scripts.pory"
	case 4, Debug_Script_1_7
# 516 "data/scripts/general_scripts.pory"
	case 5, Debug_Script_1_8
# 519 "data/scripts/general_scripts.pory"
	case 6, Debug_Script_1_9
# 522 "data/scripts/general_scripts.pory"
	case 7, Debug_Script_1_10
# 525 "data/scripts/general_scripts.pory"
	case 8, Debug_Script_1_11
# 528 "data/scripts/general_scripts.pory"
	case 9, Debug_Script_1_12
# 529 "data/scripts/general_scripts.pory"
	case MULTI_B_PRESSED, Debug_Script_1_12
Debug_Script_1_1:
# 532 "data/scripts/general_scripts.pory"
	release
	end

Debug_Script_1_3:
# 502 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_10
# 503 "data/scripts/general_scripts.pory"
	setpartylevel 14
	goto Debug_Script_1_1

Debug_Script_1_4:
# 505 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_11
# 506 "data/scripts/general_scripts.pory"
	setpartylevel 22
	goto Debug_Script_1_1

Debug_Script_1_5:
# 508 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_12
# 509 "data/scripts/general_scripts.pory"
	setpartylevel 24
	goto Debug_Script_1_1

Debug_Script_1_6:
# 511 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_13
# 512 "data/scripts/general_scripts.pory"
	setpartylevel 29
	goto Debug_Script_1_1

Debug_Script_1_7:
# 514 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_14
# 515 "data/scripts/general_scripts.pory"
	setpartylevel 34
	goto Debug_Script_1_1

Debug_Script_1_8:
# 517 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_15
# 518 "data/scripts/general_scripts.pory"
	setpartylevel 38
	goto Debug_Script_1_1

Debug_Script_1_9:
# 520 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_16
# 521 "data/scripts/general_scripts.pory"
	setpartylevel 40
	goto Debug_Script_1_1

Debug_Script_1_10:
# 523 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_17
# 524 "data/scripts/general_scripts.pory"
	setpartylevel 45
	goto Debug_Script_1_1

Debug_Script_1_11:
# 526 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_18
# 527 "data/scripts/general_scripts.pory"
	setpartylevel 53
	goto Debug_Script_1_1

Debug_Script_1_12:
# 530 "data/scripts/general_scripts.pory"
	closemessage
	goto Debug_Script_1_1


Debug_Script_2::
# 536 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_PERMA_NIGHT, Debug_Script_2_2
# 544 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_2, MSGBOX_YESNO
# 545 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_2_7
Debug_Script_2_1:
# 550 "data/scripts/general_scripts.pory"
	release
	return

Debug_Script_2_2:
# 537 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_0, MSGBOX_YESNO
# 538 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_2_5
	goto Debug_Script_2_1

Debug_Script_2_5:
# 539 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_1, MSGBOX_AUTOCLOSE
# 540 "data/scripts/general_scripts.pory"
	clearflag FLAG_PERMA_NIGHT
	goto Debug_Script_2_1

Debug_Script_2_7:
# 546 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_3, MSGBOX_AUTOCLOSE
# 547 "data/scripts/general_scripts.pory"
	setflag FLAG_PERMA_NIGHT
	goto Debug_Script_2_1


Debug_Script_3::
# 554 "data/scripts/general_scripts.pory"
	special TrySkyBattle
# 555 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_3_2
Debug_Script_3_1:
# 558 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_3_Text_0
# 559 "data/scripts/general_scripts.pory"
	closemessage
# 560 "data/scripts/general_scripts.pory"
	release
# 561 "data/scripts/general_scripts.pory"
	end
	return

Debug_Script_3_2:
# 556 "data/scripts/general_scripts.pory"
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	goto Debug_Script_3_1


Debug_Script_4::
# 565 "data/scripts/general_scripts.pory"
	setpartylevel 100
	return


Debug_Script_5::
# 572 "data/scripts/general_scripts.pory"
	warp MAP_NES, 0
	return


Debug_Script_6::
# 580 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, Debug_Script_6_Movement_0
# 581 "data/scripts/general_scripts.pory"
	delay 200
# 582 "data/scripts/general_scripts.pory"
	callnative StopMovementScript
# 584 "data/scripts/general_scripts.pory"
	waitmovement 0
# 585 "data/scripts/general_scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 586 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8001
# 587 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8002
# 588 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_6_Text_0, MSGBOX_AUTOCLOSE
# 589 "data/scripts/general_scripts.pory"
	special SpawnCameraObject
# 590 "data/scripts/general_scripts.pory"
	getobjectxy LOCALID_CAMERA
# 591 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8001
# 592 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8002
# 593 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_6_Text_0, MSGBOX_AUTOCLOSE
# 594 "data/scripts/general_scripts.pory"
	addvar VAR_0x8001, 2
# 595 "data/scripts/general_scripts.pory"
	teleportcamera VAR_0x8001, VAR_0x8002
	return


Debug_Script_7::
	return


Debug_Script_8::
# 602 "data/scripts/general_scripts.pory"
	special EnterCode
# 603 "data/scripts/general_scripts.pory"
	waitstate
# 604 "data/scripts/general_scripts.pory"
	special GetCodeFeedback
# 605 "data/scripts/general_scripts.pory"
	release
# 606 "data/scripts/general_scripts.pory"
	end
	return


Debug_Script_81::
# 611 "data/scripts/general_scripts.pory"
	special EnterCode
# 612 "data/scripts/general_scripts.pory"
	waitstate
# 613 "data/scripts/general_scripts.pory"
	special GetCodeFeedback
# 614 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Debug_Script_81_2
Debug_Script_81_1:
# 617 "data/scripts/general_scripts.pory"
	release
# 618 "data/scripts/general_scripts.pory"
	end
	return

Debug_Script_81_2:
# 615 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_81_Text_0
	goto Debug_Script_81_1


ResetAdamantTower::
	checkitem ITEM_MEGA_RING
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_2
# 646 "data/scripts/general_scripts.pory"
	lock
# 647 "data/scripts/general_scripts.pory"
	faceplayer
	msgbox ResetAdamantTower_YesNo, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_5
# 652 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_MAN3
# 653 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_WOMAN5
# 654 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_PSYCHIC
# 655 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_MAN5
# 656 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_EXPERT_M
# 657 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_EXPERT_F
# 658 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_HEXMANIAC
# 659 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_PSYCHICF
# 660 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_BLACKBELT
# 661 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_HEXMANIAC
# 662 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_LASS
# 663 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_YOUNGSTER
# 664 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_BATTLEGIRL
# 665 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_BLACKBELT2
# 666 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_M
# 667 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_F
# 668 "data/scripts/general_scripts.pory"
	removeitem ITEM_MEGA_RING
# 669 "data/scripts/general_scripts.pory"
	clearflag FLAG_OBTAINED_MEGA_RING
# 670 "data/scripts/general_scripts.pory"
	clearflag FLAG_REUNITE_WITH_RIVAL
# 671 "data/scripts/general_scripts.pory"
	setflag FLAG_DISABLE_SAVING
# 672 "data/scripts/general_scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	msgbox ResetAdamantTower_ResetTeam, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_8
# 677 "data/scripts/general_scripts.pory"
	setpartylevel 38
# 678 "data/scripts/general_scripts.pory"
	msgbox PartyHasBeenReset, MSGBOX_NPC
	end

ResetAdamantTower_2:
# 643 "data/scripts/general_scripts.pory"
	msgbox ThisIsForTesting, MSGBOX_NPC
	end

ResetAdamantTower_5:
# 649 "data/scripts/general_scripts.pory"
	release
	end

ResetAdamantTower_8:
# 674 "data/scripts/general_scripts.pory"
	release
	end


EndOfBetaBlock::
# 709 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_BETA_BLOCK, EndOfBetaBlock_2
EndOfBetaBlock_1:
# 714 "data/scripts/general_scripts.pory"
	release
	end

EndOfBetaBlock_2:
# 710 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta, MSGBOX_AUTOCLOSE
# 711 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Up
# 712 "data/scripts/general_scripts.pory"
	waitmovement 0
	goto EndOfBetaBlock_1


BarrenWastes_Block1::
# 725 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta2, MSGBOX_SIGN
# 726 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Right
# 727 "data/scripts/general_scripts.pory"
	waitmovement 0
# 728 "data/scripts/general_scripts.pory"
	release
	end


BarrenWastes_Block2::
# 732 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta2, MSGBOX_SIGN
# 733 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Down
# 734 "data/scripts/general_scripts.pory"
	waitmovement 0
# 735 "data/scripts/general_scripts.pory"
	release
	end


SkipToShoreslate::
# 745 "data/scripts/general_scripts.pory"
	call ClearRoute1
# 746 "data/scripts/general_scripts.pory"
	call ClearRoute2
# 747 "data/scripts/general_scripts.pory"
	call ClearWindyWoods
# 748 "data/scripts/general_scripts.pory"
	call ClearCoralgrove
# 749 "data/scripts/general_scripts.pory"
	call ClearAzuretide
# 750 "data/scripts/general_scripts.pory"
	call ClearRoute4
# 751 "data/scripts/general_scripts.pory"
	call ClearRanch
# 752 "data/scripts/general_scripts.pory"
	call ClearAldeleaf
# 753 "data/scripts/general_scripts.pory"
	call ClearRoute28
# 754 "data/scripts/general_scripts.pory"
	call ClearWindplume
# 755 "data/scripts/general_scripts.pory"
	call ClearRoute5
# 756 "data/scripts/general_scripts.pory"
	call ClearFlowerFields
# 757 "data/scripts/general_scripts.pory"
	call ClearSkyloch
# 758 "data/scripts/general_scripts.pory"
	call ClearRoute6
# 759 "data/scripts/general_scripts.pory"
	call ClearRoute8
# 760 "data/scripts/general_scripts.pory"
	call ClearShoreslate
	return


ClearRoute1::
# 764 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_COOLTRAINER
# 765 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_YOUNGSTER
# 766 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_FISHER
# 767 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_BUG_CATCHER
# 768 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_TUBER
# 769 "data/scripts/general_scripts.pory"
	addbp 10
# 770 "data/scripts/general_scripts.pory"
	additem ITEM_EXP_SHARE
# 771 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRO_TO_BP
# 772 "data/scripts/general_scripts.pory"
	msgbox ClearRoute1_Text_0
	return


ClearRoute2::
# 775 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL1
# 776 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
# 777 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL
# 778 "data/scripts/general_scripts.pory"
	additem ITEM_BIG_PEARL
# 779 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_FISHER
# 780 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_LASS
# 781 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_BLACKBELT
# 782 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_YOUNGSTER
# 783 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_SCHOOL_KID_F
# 784 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE2_X_ATTACK
# 785 "data/scripts/general_scripts.pory"
	additem ITEM_X_ATTACK
# 786 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_ORAN, BERRY_ID_ORAN, BERRY_STAGE_NO_BERRY
# 787 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_PECHA, BERRY_ID_PECHA, BERRY_STAGE_NO_BERRY
# 788 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_CHERI, BERRY_ID_CHERI, BERRY_STAGE_NO_BERRY
# 789 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY, 2
# 790 "data/scripts/general_scripts.pory"
	additem ITEM_CHERI_BERRY, 2
# 791 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 792 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL
# 793 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 794 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE2_REVIVE
# 795 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 796 "data/scripts/general_scripts.pory"
	trystrangeseed
# 797 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_2
ClearRoute2_1:
# 800 "data/scripts/general_scripts.pory"
	trystrangeseed
# 801 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_5
ClearRoute2_4:
# 804 "data/scripts/general_scripts.pory"
	trystrangeseed
# 805 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_8
ClearRoute2_7:
	return

ClearRoute2_2:
# 798 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_1

ClearRoute2_5:
# 802 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_4

ClearRoute2_8:
# 806 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_7


ClearWindyWoods::
# 811 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_WW_PARLYZ
# 812 "data/scripts/general_scripts.pory"
	additem ITEM_PARLYZ_HEAL
# 813 "data/scripts/general_scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
# 814 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_BUGCATCHER
# 815 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_LADY
# 816 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_BUGCATCHER_2
# 817 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_CAMPER
# 818 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_LASS
# 819 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_YOUNGSTER
# 820 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_ACE_TRAINER
# 821 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_ROCKET
# 822 "data/scripts/general_scripts.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 823 "data/scripts/general_scripts.pory"
	switch VAR_STARTER_MON
# 824 "data/scripts/general_scripts.pory"
	case SPECIES_ROWLET, ClearWindyWoods_3
# 826 "data/scripts/general_scripts.pory"
	case SPECIES_TORCHIC, ClearWindyWoods_4
# 828 "data/scripts/general_scripts.pory"
	case SPECIES_PIPLUP, ClearWindyWoods_5
ClearWindyWoods_1:
# 831 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_WINDY_WOODS
# 832 "data/scripts/general_scripts.pory"
	setflag FLAG_GLADE_PUZZLE
# 833 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
# 834 "data/scripts/general_scripts.pory"
	addbp 10
	return

ClearWindyWoods_3:
# 825 "data/scripts/general_scripts.pory"
	additem ITEM_MIRACLE_SEED
	goto ClearWindyWoods_1

ClearWindyWoods_4:
# 827 "data/scripts/general_scripts.pory"
	additem ITEM_CHARCOAL
	goto ClearWindyWoods_1

ClearWindyWoods_5:
# 829 "data/scripts/general_scripts.pory"
	additem ITEM_MYSTIC_WATER
	goto ClearWindyWoods_1


ClearCoralgrove::
# 838 "data/scripts/general_scripts.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
# 839 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_CORALGROVE_CITY
# 840 "data/scripts/general_scripts.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 841 "data/scripts/general_scripts.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 842 "data/scripts/general_scripts.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
# 843 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY
# 844 "data/scripts/general_scripts.pory"
	additem ITEM_RARE_CANDY
# 845 "data/scripts/general_scripts.pory"
	setflag FLAG_CORAL_GREATBALL
# 846 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 847 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_1
# 848 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_2
# 849 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_3
# 850 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_4
# 851 "data/scripts/general_scripts.pory"
	additem ITEM_TM_FALSE_SWIPE
# 852 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CORALGYM_1
# 853 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CORALGYM_2
# 854 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CORALGYM_3
# 855 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CORALGYM_4
# 856 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CORALGYM_5
# 857 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CORALGYM_6
# 858 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEADER_AARON
# 859 "data/scripts/general_scripts.pory"
	setflag FLAG_BADGE01_GET
# 860 "data/scripts/general_scripts.pory"
	additem ITEM_TM_U_TURN
	checkplayergender
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ClearCoralgrove_2
# 865 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BRENDAN_CORALGROVE_ELEVATOR
ClearCoralgrove_1:
# 867 "data/scripts/general_scripts.pory"
	msgbox ClearCoralgrove_Text_0, MSGBOX_YESNO
# 868 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ClearCoralgrove_6
# 872 "data/scripts/general_scripts.pory"
	setflag FLAG_RIVAL_HARBOR_ANGRY
ClearCoralgrove_5:
# 874 "data/scripts/general_scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 875 "data/scripts/general_scripts.pory"
	additem ITEM_TM_REST
# 876 "data/scripts/general_scripts.pory"
	additem ITEM_OLD_ROD
# 877 "data/scripts/general_scripts.pory"
	setflag FLAG_HARBOR_GREATBALL
# 878 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 879 "data/scripts/general_scripts.pory"
	setflag FLAG_HARBOR_PEARL
# 880 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
	return

ClearCoralgrove_2:
# 862 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_MAY_CORALGROVE_ELEVATOR
	goto ClearCoralgrove_1

ClearCoralgrove_6:
# 869 "data/scripts/general_scripts.pory"
	additem ITEM_ITEMFINDER
	goto ClearCoralgrove_5


ClearAzuretide::
# 884 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_AZURETIDE
# 885 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY, 3
# 886 "data/scripts/general_scripts.pory"
	setflag FLAG_AZURETIDE_HONEY
# 887 "data/scripts/general_scripts.pory"
	additem ITEM_TOWN_MAP
# 888 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_PEARL
# 889 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_REDSHARD
# 890 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_HEATROCK
# 891 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
# 892 "data/scripts/general_scripts.pory"
	additem ITEM_RED_SHARD
# 893 "data/scripts/general_scripts.pory"
	additem ITEM_HEAT_ROCK
	return


ClearRoute4::
# 897 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_104_ORAN_1, BERRY_ID_ORAN, BERRY_STAGE_NO_BERRY
# 898 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_103_LEPPA, BERRY_ID_PECHA, BERRY_STAGE_NO_BERRY
# 899 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_103_CHERI_2, BERRY_ID_CHERI, BERRY_STAGE_NO_BERRY
# 900 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY, 2
# 901 "data/scripts/general_scripts.pory"
	additem ITEM_LEPPA_BERRY, 2
# 902 "data/scripts/general_scripts.pory"
	additem ITEM_CHERI_BERRY, 2
# 903 "data/scripts/general_scripts.pory"
	trystrangeseed
# 904 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_2
ClearRoute4_1:
# 905 "data/scripts/general_scripts.pory"
	trystrangeseed
# 906 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_5
ClearRoute4_4:
# 907 "data/scripts/general_scripts.pory"
	trystrangeseed
# 908 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_8
ClearRoute4_7:
# 909 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL
# 910 "data/scripts/general_scripts.pory"
	additem ITEM_POKE_BALL
# 911 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE3_ANTIDOTE
# 912 "data/scripts/general_scripts.pory"
	additem ITEM_ANTIDOTE
# 913 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE3_GIGADRAIN
# 914 "data/scripts/general_scripts.pory"
	additem ITEM_TM_GRASS_KNOT
# 915 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_REVIVE
# 916 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 917 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_ETHER
# 918 "data/scripts/general_scripts.pory"
	additem ITEM_ETHER
# 919 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL
# 920 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_REPEL
# 921 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_HIKER
# 922 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_POKEMANIAC
# 923 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BUGCATCHER
# 924 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TWINS
# 925 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TRIATHLETE
# 926 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_CAMPER
# 927 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_COOL_F
# 928 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_COOL_M
# 929 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER
# 930 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_YOUNGSTER
# 931 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER2
# 932 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_LASS
# 933 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_YOUNGSTER2
# 934 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TRIATHLETE2
	return

ClearRoute4_2:
# 904 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_1

ClearRoute4_5:
# 906 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_4

ClearRoute4_8:
# 908 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_7


ClearRanch::
# 938 "data/scripts/general_scripts.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 939 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_POKE_RANCH
# 940 "data/scripts/general_scripts.pory"
	setflag FLAG_RANCH_HELPED
# 941 "data/scripts/general_scripts.pory"
	clearflag FLAG_HIDE_RANCH_OWNER
# 942 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_VOLKNER_2
# 943 "data/scripts/general_scripts.pory"
	additem ITEM_HM01
# 944 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 945 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 946 "data/scripts/general_scripts.pory"
	setflag FLAG_VOLKNER_HELPED
# 947 "data/scripts/general_scripts.pory"
	setflag FLAG_JASMINE_HELPED
# 948 "data/scripts/general_scripts.pory"
	setvar VAR_POKERANCH, 1
# 949 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_RANCH_ROCKET
# 950 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_RANCH_ROCKET2
	return


ClearAldeleaf::
# 954 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_WIP_CITY1
# 955 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
# 956 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDELEAF_MANIAC
# 957 "data/scripts/general_scripts.pory"
	setflag FLAG_SHELL_BELL_RECEIVED
# 958 "data/scripts/general_scripts.pory"
	additem ITEM_SHELL_BELL
# 959 "data/scripts/general_scripts.pory"
	additem ITEM_QUICK_BALL, 1
# 960 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_QUICK_BALL
# 961 "data/scripts/general_scripts.pory"
	setflag FLAG_KEY_RETURNED
# 962 "data/scripts/general_scripts.pory"
	additem ITEM_BLACK_FLUTE, 1
# 963 "data/scripts/general_scripts.pory"
	setflag FLAG_WHITEFLUTE_RECEIVED
# 964 "data/scripts/general_scripts.pory"
	additem ITEM_LAVA_COOKIE
# 965 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_LAVA_COOKIE
# 966 "data/scripts/general_scripts.pory"
	setflag FLAG_TOUCHPOKEBALL
# 967 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH1
# 968 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH2
# 969 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH3
# 970 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
# 971 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_MUSHROOM2
# 972 "data/scripts/general_scripts.pory"
	additem ITEM_TINY_MUSHROOM
# 973 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_LOST_KEY
# 974 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_1
# 975 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_2
# 976 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_3
# 977 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_4
# 978 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_5
# 979 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_6
# 980 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_7
# 981 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_8
# 982 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_9
# 983 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_10
# 984 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_11
# 985 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_12
# 986 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_13
# 987 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_14
# 988 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_15
# 989 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALDEGYM_16
# 990 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEADER_VOLKNER
# 991 "data/scripts/general_scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 992 "data/scripts/general_scripts.pory"
	setflag FLAG_BADGE02_GET
# 993 "data/scripts/general_scripts.pory"
	additem ITEM_TM_CHARGE_BEAM
# 994 "data/scripts/general_scripts.pory"
	setflag FLAG_ANGEREDGUYINALDELEAF
# 995 "data/scripts/general_scripts.pory"
	msgbox ClearAldeleaf_Text_0
	return


ClearRoute28::
# 998 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 999 "data/scripts/general_scripts.pory"
	msgbox ClearRoute28_Text_0, MSGBOX_YESNO
# 1000 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ClearRoute28_2
ClearRoute28_1:
# 1003 "data/scripts/general_scripts.pory"
	additem ITEM_TM_SECRET_POWER
# 1004 "data/scripts/general_scripts.pory"
	additem ITEM_FULL_HEAL
# 1005 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R30_BUGCATCHER
# 1006 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R30_HIKER
# 1007 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R30_NINJABOY
# 1008 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R30_PSYCHIC
# 1009 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_TM
# 1010 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_ITEMBALL
# 1011 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_HIDDENBALL
# 1012 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
	return

ClearRoute28_2:
# 1001 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BROTHER_4_ROUTE28
	goto ClearRoute28_1


ClearWindplume::
# 1015 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_WINDPLUME_VALLEY
# 1016 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER
# 1017 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TRIATH
# 1018 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_BATTLEGIRL
# 1019 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_CAMPER
# 1020 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER2
# 1021 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_MANIAC
# 1022 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER3
# 1023 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_NINJABOY
# 1024 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_LASS
# 1025 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TRIATH2
# 1026 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER4
# 1027 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_BATTLEGIRL2
# 1028 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER5
# 1029 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR14_SKYLA
# 1030 "data/scripts/general_scripts.pory"
	additem ITEM_HM02
# 1031 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 1032 "data/scripts/general_scripts.pory"
	additem ITEM_PRETTY_FEATHER, 6
# 1033 "data/scripts/general_scripts.pory"
	additem ITEM_HYPER_POTION
# 1034 "data/scripts/general_scripts.pory"
	additem ITEM_IRON_BALL
# 1035 "data/scripts/general_scripts.pory"
	additem ITEM_ELIXIR
# 1036 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_HYPER_POTION
# 1037 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER3
# 1038 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER1
# 1039 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER2
# 1040 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER4
# 1041 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_IRON_BALL
# 1042 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_ELIXIR
# 1043 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER5
# 1044 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER6
	return


ClearRoute5::
# 1048 "data/scripts/general_scripts.pory"
	setberrytree 31, BERRY_ID_ORAN, BERRY_STAGE_NO_BERRY
# 1049 "data/scripts/general_scripts.pory"
	setberrytree 21, BERRY_ID_PECHA, BERRY_STAGE_NO_BERRY
# 1050 "data/scripts/general_scripts.pory"
	setberrytree 13, BERRY_ID_CHERI, BERRY_STAGE_NO_BERRY
# 1051 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 1052 "data/scripts/general_scripts.pory"
	additem ITEM_RAWST_BERRY, 2
# 1053 "data/scripts/general_scripts.pory"
	additem ITEM_SITRUS_BERRY, 2
# 1054 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1055 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_2
ClearRoute5_1:
# 1058 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1059 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_5
ClearRoute5_4:
# 1062 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1063 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_8
ClearRoute5_7:
# 1066 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1067 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_11
ClearRoute5_10:
# 1068 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1069 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_14
ClearRoute5_13:
# 1070 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1071 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_17
ClearRoute5_16:
# 1072 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1073 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_20
ClearRoute5_19:
# 1074 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM1
# 1075 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM2
# 1076 "data/scripts/general_scripts.pory"
	additem ITEM_TINY_MUSHROOM, 2
# 1077 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_REPEL
# 1078 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 1079 "data/scripts/general_scripts.pory"
	additem ITEM_TM_ROCK_TOMB
# 1080 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM1
# 1081 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM2
# 1082 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM3
# 1083 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM5
# 1084 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM4
# 1085 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM3
# 1086 "data/scripts/general_scripts.pory"
	additem ITEM_MAX_ETHER
# 1087 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_ACETRAINER
# 1088 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_FISHER
# 1089 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_BEAUTY
# 1090 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_YOUNGCOUPLE
# 1091 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_LASS1
# 1092 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_POKEFAN_F
# 1093 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_LASS2
# 1094 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_GENTLEMAN
# 1095 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_YOUNGSTER
# 1096 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TRIATHLETE
# 1097 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_RICHBOY
# 1098 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_KINDLER
# 1099 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_BUGCATCHER
# 1100 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_NINJABOY
# 1101 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_HIKER
# 1102 "data/scripts/general_scripts.pory"
	additem ITEM_EVIOLITE
# 1103 "data/scripts/general_scripts.pory"
	addbp 20
	return

ClearRoute5_2:
# 1056 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_1

ClearRoute5_5:
# 1060 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_4

ClearRoute5_8:
# 1064 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_7

ClearRoute5_11:
# 1067 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_10

ClearRoute5_14:
# 1069 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_13

ClearRoute5_17:
# 1071 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_16

ClearRoute5_20:
# 1073 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_19


ClearFlowerFields::
# 1107 "data/scripts/general_scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_INTRODUCED
# 1108 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_1
# 1109 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_2
# 1110 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_3
# 1111 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY
# 1112 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY
# 1113 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY
# 1114 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_FIELDS
# 1115 "data/scripts/general_scripts.pory"
	additem ITEM_RARE_CANDY
	return


ClearSkyloch::
# 1119 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_WIP_TOWN2
# 1120 "data/scripts/general_scripts.pory"
	additem ITEM_OCCA_BERRY, 1
# 1121 "data/scripts/general_scripts.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 1122 "data/scripts/general_scripts.pory"
	additem ITEM_BERRY_JUICE, 1
# 1123 "data/scripts/general_scripts.pory"
	setflag FLAG_SKYLOCH_JUICE
	return


ClearRoute6::
# 1127 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVON_RESCUED
# 1128 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_RANGER_M
# 1129 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_CAMPER_F
# 1130 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_HIKER
# 1131 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_CAMPER_M2
# 1132 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_KINDLER
	return


ClearRoute8::
# 1136 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 1137 "data/scripts/general_scripts.pory"
	additem ITEM_TM_ROCK_POLISH
# 1138 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_PARASOLLADY
# 1139 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_SRJR
# 1140 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_AROMALADY
# 1141 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_YOUNGSTER
# 1142 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_PSYCHIC_F
# 1143 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_ENTHUSIAST
# 1144 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TRIATHLETE_M
# 1145 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_GENTLEMAN
# 1146 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_HIKER
# 1147 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_OLDCOUPLE
# 1148 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_BIRDKEEPER
# 1149 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM1
# 1150 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM2
# 1151 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM3
# 1152 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM5
# 1153 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM6
# 1154 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 1155 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY
# 1156 "data/scripts/general_scripts.pory"
	additem ITEM_FULL_HEAL
# 1157 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 1158 "data/scripts/general_scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 1159 "data/scripts/general_scripts.pory"
	additem ITEM_WAILMER_PAIL
# 1160 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 1161 "data/scripts/general_scripts.pory"
	setberrytree 15, BERRY_ID_ORAN, BERRY_STAGE_NO_BERRY
# 1162 "data/scripts/general_scripts.pory"
	setberrytree 22, BERRY_ID_PECHA, BERRY_STAGE_NO_BERRY
# 1163 "data/scripts/general_scripts.pory"
	setberrytree 24, BERRY_ID_CHERI, BERRY_STAGE_NO_BERRY
# 1164 "data/scripts/general_scripts.pory"
	setberrytree 33, BERRY_ID_CHERI, BERRY_STAGE_NO_BERRY
# 1165 "data/scripts/general_scripts.pory"
	additem ITEM_POMEG_BERRY, 2
# 1166 "data/scripts/general_scripts.pory"
	additem ITEM_RAWST_BERRY, 2
# 1167 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 1168 "data/scripts/general_scripts.pory"
	additem ITEM_SITRUS_BERRY, 2
# 1169 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1170 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_2
ClearRoute8_1:
# 1173 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1174 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_5
ClearRoute8_4:
# 1177 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1178 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_8
ClearRoute8_7:
# 1181 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1182 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_11
ClearRoute8_10:
# 1185 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1186 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_14
ClearRoute8_13:
# 1189 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1190 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_17
ClearRoute8_16:
# 1194 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1195 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_20
ClearRoute8_19:
# 1199 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1200 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_23
ClearRoute8_22:
# 1204 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1205 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_26
ClearRoute8_25:
# 1209 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1210 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_29
ClearRoute8_28:
	return

ClearRoute8_2:
# 1171 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_1

ClearRoute8_5:
# 1175 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_4

ClearRoute8_8:
# 1179 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_7

ClearRoute8_11:
# 1183 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_10

ClearRoute8_14:
# 1187 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_13

ClearRoute8_17:
# 1191 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_16

ClearRoute8_20:
# 1196 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_19

ClearRoute8_23:
# 1201 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_22

ClearRoute8_26:
# 1206 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_25

ClearRoute8_29:
# 1211 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_28


ClearShoreslate::
# 1216 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_POTION
# 1217 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_SHORESLATE_POTION
# 1218 "data/scripts/general_scripts.pory"
	setrespawn HEAL_LOCATION_SHORESLATE_CITY
# 1219 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_SHORESLATE
# 1220 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 1221 "data/scripts/general_scripts.pory"
	additem ITEM_AIR_BALLOON
# 1222 "data/scripts/general_scripts.pory"
	setflag FLAG_GIVEN_CASTELIATOGIRL
# 1223 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SHORESLATE_ROCKET
# 1224 "data/scripts/general_scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 1225 "data/scripts/general_scripts.pory"
	setvar VAR_DESERT_BYPASS, 1
# 1226 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC1F_ROCKET_1
# 1227 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC1F_ROCKET_2
# 1228 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_1
# 1229 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_2
# 1230 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_3
# 1231 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_4
# 1232 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_1
# 1233 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_2
# 1234 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_3
# 1235 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_4
# 1236 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_5
# 1237 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC3F_ROCKET_1
# 1238 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_POTION
# 1239 "data/scripts/general_scripts.pory"
	setflag FLAG_BASEMENT_SUPERPOTION
# 1240 "data/scripts/general_scripts.pory"
	additem ITEM_QUICK_BALL
# 1241 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVONCORP_BASEMENT_BALL
# 1242 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVON_UNDER_ATTACK
# 1243 "data/scripts/general_scripts.pory"
	setflag FLAG_HELPED_DEVON_CORP
# 1244 "data/scripts/general_scripts.pory"
	clearflag FLAG_HIDE_SHORESLATE_BOAT
# 1245 "data/scripts/general_scripts.pory"
	additem ITEM_HM05
# 1246 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 1247 "data/scripts/general_scripts.pory"
	additem ITEM_ACRO_BIKE
	return


Pearlwood_Debug::
# 1252 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Pearlwood_Debug_2
# 1258 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Pearlwood_Debug_5
# 1263 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_2
# 1264 "data/scripts/general_scripts.pory"
	call SkipToShoreslate
# 1265 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_3, MSGBOX_YESNO
# 1266 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Pearlwood_Debug_8
# 1272 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_4
# 1273 "data/scripts/general_scripts.pory"
	removeobject 7
Pearlwood_Debug_7:
# 1275 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_2:
# 1253 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_0
# 1254 "data/scripts/general_scripts.pory"
	removeobject 7
# 1255 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_5:
# 1259 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_1
# 1260 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_8:
# 1267 "data/scripts/general_scripts.pory"
	setflag FLAG_OPENED_MAP_FROM_SIGN
# 1268 "data/scripts/general_scripts.pory"
	fadescreen FADE_TO_BLACK
# 1269 "data/scripts/general_scripts.pory"
	callnative OpenFlyMapFromSign
	goto Pearlwood_Debug_7


UnlockFlightpoint_1::
# 1280 "data/scripts/general_scripts.pory"
	setflag FLAG_FLIGHTPOINT1
# 1281 "data/scripts/general_scripts.pory"
	release
	return


DriftblimExpress::
# 1285 "data/scripts/general_scripts.pory"
	faceplayer
# 1286 "data/scripts/general_scripts.pory"
	callnative SetLastVisitedDrifblimBalloon
# 1287 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRO_TO_DRIFBLIM_EXPRESS, DriftblimExpress_2
# 1292 "data/scripts/general_scripts.pory"
	msgbox DriftblimExpress_Text_0, MSGBOX_YESNO
DriftblimExpress_1:
# 1294 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DriftblimExpress_6
# 1299 "data/scripts/general_scripts.pory"
	setflag FLAG_OPENED_MAP_FROM_SIGN
# 1300 "data/scripts/general_scripts.pory"
	msgbox DriftblimExpress_Text_2
# 1301 "data/scripts/general_scripts.pory"
	fadescreen FADE_TO_BLACK
# 1302 "data/scripts/general_scripts.pory"
	callnative OpenFlyMapFromSign
# 1303 "data/scripts/general_scripts.pory"
	waitstate
# 1304 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DriftblimExpress_9
# 1309 "data/scripts/general_scripts.pory"
	msgbox DriftblimExpress_Text_3, MSGBOX_AUTOCLOSE
# 1310 "data/scripts/general_scripts.pory"
	delay 8
# 1311 "data/scripts/general_scripts.pory"
	switch VAR_FACING
# 1312 "data/scripts/general_scripts.pory"
	case DIR_NORTH, DriftblimExpress_13
# 1314 "data/scripts/general_scripts.pory"
	case DIR_WEST, DriftblimExpress_14
# 1316 "data/scripts/general_scripts.pory"
	case DIR_EAST, DriftblimExpress_15
# 1318 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, DriftblimExpress_16
DriftblimExpress_11:
# 1321 "data/scripts/general_scripts.pory"
	waitmovement 0
# 1322 "data/scripts/general_scripts.pory"
	delay 8
# 1323 "data/scripts/general_scripts.pory"
	compare VAR_0x8002, DIR_EAST
	goto_if_eq DriftblimExpress_18
# 1327 "data/scripts/general_scripts.pory"
	warpsilent MAP_HIGH_IN_THE_SKY, 1
DriftblimExpress_17:
# 1329 "data/scripts/general_scripts.pory"
	waitstate
	return

DriftblimExpress_2:
# 1288 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRO_TO_DRIFBLIM_EXPRESS
# 1289 "data/scripts/general_scripts.pory"
	msgbox DriftblimExpress_Text, MSGBOX_YESNO
	goto DriftblimExpress_1

DriftblimExpress_6:
# 1295 "data/scripts/general_scripts.pory"
	msgbox DriftblimExpress_Text_1
# 1296 "data/scripts/general_scripts.pory"
	release
	end

DriftblimExpress_9:
# 1305 "data/scripts/general_scripts.pory"
	msgbox DriftblimExpress_Text_1
# 1306 "data/scripts/general_scripts.pory"
	release
	end

DriftblimExpress_13:
# 1313 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, DriftblimExpress_Movement_0
	goto DriftblimExpress_11

DriftblimExpress_14:
# 1315 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, DriftblimExpress_Movement_1
	goto DriftblimExpress_11

DriftblimExpress_15:
# 1317 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, DriftblimExpress_Movement_2
	goto DriftblimExpress_11

DriftblimExpress_16:
# 1319 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, DriftblimExpress_Movement_3
	goto DriftblimExpress_11

DriftblimExpress_18:
# 1324 "data/scripts/general_scripts.pory"
	warpsilent MAP_HIGH_IN_THE_SKY, 0
	goto DriftblimExpress_17


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

# 580 "data/scripts/general_scripts.pory"
Debug_Script_6_Movement_0:
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
# 580 "data/scripts/general_scripts.pory"
	walk_down
	step_end

# 1313 "data/scripts/general_scripts.pory"
DriftblimExpress_Movement_0:
# 1313 "data/scripts/general_scripts.pory"
	walk_right
# 1313 "data/scripts/general_scripts.pory"
	walk_up
# 1313 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 1315 "data/scripts/general_scripts.pory"
DriftblimExpress_Movement_1:
# 1315 "data/scripts/general_scripts.pory"
	walk_in_place_fast_up
	step_end

# 1317 "data/scripts/general_scripts.pory"
DriftblimExpress_Movement_2:
# 1317 "data/scripts/general_scripts.pory"
	walk_down
# 1317 "data/scripts/general_scripts.pory"
	walk_right
# 1317 "data/scripts/general_scripts.pory"
	walk_right
# 1317 "data/scripts/general_scripts.pory"
	walk_up
# 1317 "data/scripts/general_scripts.pory"
	walk_up
	step_end

# 1319 "data/scripts/general_scripts.pory"
DriftblimExpress_Movement_3:
# 1319 "data/scripts/general_scripts.pory"
	walk_left
# 1319 "data/scripts/general_scripts.pory"
	walk_down
# 1319 "data/scripts/general_scripts.pory"
	walk_down
# 1319 "data/scripts/general_scripts.pory"
	walk_right
# 1319 "data/scripts/general_scripts.pory"
	walk_right
# 1319 "data/scripts/general_scripts.pory"
	walk_up
# 1319 "data/scripts/general_scripts.pory"
	walk_up
	step_end

EventScript_IceSmash_Text_0:
# 106 "data/scripts/general_scripts.pory"
	.string "This block of ice appears to be fragile.\nWould you like to use Rock Smash?$"

Debug_Script_1_Text_0:
# 489 "data/scripts/general_scripts.pory"
	.string "Gym 1 (lvl 14)$"

Debug_Script_1_Text_1:
# 490 "data/scripts/general_scripts.pory"
	.string "Gym 2 (lvl 22)$"

Debug_Script_1_Text_2:
# 491 "data/scripts/general_scripts.pory"
	.string "Side area (lvl 24)$"

Debug_Script_1_Text_3:
# 492 "data/scripts/general_scripts.pory"
	.string "Story 1 (lvl 29)$"

Debug_Script_1_Text_4:
# 493 "data/scripts/general_scripts.pory"
	.string "Gym 3 (lvl 34)$"

Debug_Script_1_Text_5:
# 494 "data/scripts/general_scripts.pory"
	.string "Gym 4 (lvl 38)$"

Debug_Script_1_Text_6:
# 495 "data/scripts/general_scripts.pory"
	.string "Post-Gym 4 (lvl 40)$"

Debug_Script_1_Text_7:
# 496 "data/scripts/general_scripts.pory"
	.string "Gym 5 (lvl 45)$"

Debug_Script_1_Text_8:
# 497 "data/scripts/general_scripts.pory"
	.string "Gym 6 (lvl 53)$"

Debug_Script_1_Text_9:
# 498 "data/scripts/general_scripts.pory"
	.string "Cancel$"

Debug_Script_1_Text_10:
# 502 "data/scripts/general_scripts.pory"
	.string "Team set to level 14.$"

Debug_Script_1_Text_11:
# 505 "data/scripts/general_scripts.pory"
	.string "Team set to level 22.$"

Debug_Script_1_Text_12:
# 508 "data/scripts/general_scripts.pory"
	.string "Team set to level 24.$"

Debug_Script_1_Text_13:
# 511 "data/scripts/general_scripts.pory"
	.string "Team set to level 29.$"

Debug_Script_1_Text_14:
# 514 "data/scripts/general_scripts.pory"
	.string "Team set to level 34.$"

Debug_Script_1_Text_15:
# 517 "data/scripts/general_scripts.pory"
	.string "Team set to level 38.$"

Debug_Script_1_Text_16:
# 520 "data/scripts/general_scripts.pory"
	.string "Team set to level 40.$"

Debug_Script_1_Text_17:
# 523 "data/scripts/general_scripts.pory"
	.string "Team set to level 45.$"

Debug_Script_1_Text_18:
# 526 "data/scripts/general_scripts.pory"
	.string "Team set to level 53.$"

Debug_Script_2_Text_0:
# 537 "data/scripts/general_scripts.pory"
	.string "Would you like to turn off\nthe permanent night?$"

Debug_Script_2_Text_1:
# 539 "data/scripts/general_scripts.pory"
	.string "Setting time back to normal.$"

Debug_Script_2_Text_2:
# 544 "data/scripts/general_scripts.pory"
	.string "Would you like to turn on\nthe permanent night?$"

Debug_Script_2_Text_3:
# 546 "data/scripts/general_scripts.pory"
	.string "Setting time to permanent night.$"

Debug_Script_3_Text_0:
# 558 "data/scripts/general_scripts.pory"
	.string "asd$"

Debug_Script_6_Text_0:
# 588 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

Debug_Script_81_Text_0:
# 615 "data/scripts/general_scripts.pory"
	.string "I'm sorry, but that's not a code\nI recognize.$"

ClearRoute1_Text_0:
# 772 "data/scripts/general_scripts.pory"
	.string "Obtained Exp. Share.\nDon't forget to turn it on!$"

ClearCoralgrove_Text_0:
# 867 "data/scripts/general_scripts.pory"
	.string "Was {RIVAL} defeated in\nCoralgrove Harbor?$"

ClearAldeleaf_Text_0:
# 995 "data/scripts/general_scripts.pory"
	.string "Aldeleaf City has been cleared, but\nthe events with Mimikyu and Sudowoodo\lare still intact.$"

ClearRoute28_Text_0:
# 999 "data/scripts/general_scripts.pory"
	.string "Has brother been defeated on the\nroute north of Aldeleaf City?$"

Pearlwood_Debug_Text_0:
# 1253 "data/scripts/general_scripts.pory"
	.string "Oops, I should no longer be here.\pBye!$"

Pearlwood_Debug_Text_1:
# 1259 "data/scripts/general_scripts.pory"
	.string "Come back after obtaining\nthe Pokédex.$"

Pearlwood_Debug_Text_2:
# 1263 "data/scripts/general_scripts.pory"
	.string "Hello, I am here to help you skip\na bunch of stuff you've already done.$"

Pearlwood_Debug_Text_3:
# 1265 "data/scripts/general_scripts.pory"
	.string "All items, trainers, and story events\nup to Shoreslate have been completed.\pYou will have to catch your own\nPokémon though.\pWould you like me to fly you\nsomewhere?$"

Pearlwood_Debug_Text_4:
# 1272 "data/scripts/general_scripts.pory"
	.string "Okay then.\nBye!$"

DriftblimExpress_Text_0:
# 1292 "data/scripts/general_scripts.pory"
	.string "Welcome to Drifblim Express.\pWould you like to use the Drifblim\nBalloon?$"

DriftblimExpress_Text_1:
# 1295 "data/scripts/general_scripts.pory"
	.string "Let me know if there's\nsomewhere you'd like to fly.$"

DriftblimExpress_Text_2:
# 1300 "data/scripts/general_scripts.pory"
	.string "Please choose your destination.$"

DriftblimExpress_Text_3:
# 1309 "data/scripts/general_scripts.pory"
	.string "Alright, let's fly!$"

FollowerSpottedAnItemNearby_Text::
# 123 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1} seems to have spotted\n"
	.string "something interesting nearby!$"

GainedASpecialTicket::
# 150 "data/scripts/general_scripts.pory"
	.string "Due to your victory, you have\n"
	.string "earned a special victory ticket.\p"
	.string "Earn two more victory tickets, and\n"
	.string "you will get a special extra prize!$"

NowHaveTwoTickets::
# 156 "data/scripts/general_scripts.pory"
	.string "You now have two victory tickets.\p"
	.string "Earn one more ticket for a special\n"
	.string "extra prize!$"

TentGrandPrize::
# 161 "data/scripts/general_scripts.pory"
	.string "You just earned your third victory\n"
	.string "ticket.\p"
	.string "This means you are eligible for a\n"
	.string "special reward, a Fresh Start Mochi!$"

SeenAnyStrangeSeeds::
# 243 "data/scripts/general_scripts.pory"
	.string "I've been hearing some rumors about\n"
	.string "Pokémon hiding strange seeds in trees.$"

CareToTradeSeeds::
# 246 "data/scripts/general_scripts.pory"
	.string "Ah, those seeds seem to match\n"
	.string "the description!\p"
	.string "I have this special plant fertilizer\n"
	.string "that can greatly improve the growth\l"
	.string "rate of berry trees.\p"
	.string "If you'd like, I can trade you\n"
	.string "two batches of the fertilizer\l"
	.string "for a single strange seed.$"

ComeTradeWhenGetMoreSeeds::
# 255 "data/scripts/general_scripts.pory"
	.string "If you find any strange seeds, I'll\n"
	.string "gladly trade them for some fertilizer.$"

HereToTradeMoreSeeds::
# 258 "data/scripts/general_scripts.pory"
	.string "Here to trade some strange seeds?$"

TradeHowManySeeds::
# 260 "data/scripts/general_scripts.pory"
	.string "How many seeds would you\n"
	.string "like to trade?$"

TradeSeedsForFertilizer_Text_Single::
# 263 "data/scripts/general_scripts.pory"
	.string "One seed for two batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

TradeSeedsForFertilizer_Text_Multiple::
# 267 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1} seeds for {STR_VAR_2} batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

BerryTree_Text_FertilizedTheBerry::
# 337 "data/scripts/general_scripts.pory"
	.string "{PLAYER} applied the Fertilizer to\n"
	.string "the {STR_VAR_1} plant.$"

StrangeSeedDroppedBerry::
# 340 "data/scripts/general_scripts.pory"
	.string "A Strange Seed dropped from the\n"
	.string "berry tree.$"

StrangeSeedDroppedTree::
# 343 "data/scripts/general_scripts.pory"
	.string "A Strange Seed dropped from the tree.$"

BerryTree_Text_PickedTheSeed::
# 345 "data/scripts/general_scripts.pory"
	.string "{PLAYER} picked up the Strange Seed.$"

BerryTree_Text_PutAwaySeed::
# 347 "data/scripts/general_scripts.pory"
	.string "{PLAYER} put away the Strange\n"
	.string "Seed in the Items pocket.$"

BerryTree_Text_PutAwayBerryAndSeed::
# 350 "data/scripts/general_scripts.pory"
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "in the bag's berries pocket\l"
	.string "and the Strange Seed in the\l"
	.string "Items pocket.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"

PlayerFoundZygardeCell::
# 369 "data/scripts/general_scripts.pory"
	.string "{PLAYER} found a Zygarde Cell!$"

gText_PutZygardeCellInCube::
# 371 "data/scripts/general_scripts.pory"
	.string "{PLAYER} stored the Zygarde Cell\n"
	.string "in the Zygarde Cube.$"

PlayerFoundZygardeCore::
# 386 "data/scripts/general_scripts.pory"
	.string "{PLAYER} found a Zygarde Core!$"

gText_PutZygardeCoreInCube::
# 388 "data/scripts/general_scripts.pory"
	.string "{PLAYER} stored the Zygarde Core\n"
	.string "in the Zygarde Cube.$"

AutomaticUpdate_Text1::
# 421 "data/scripts/general_scripts.pory"
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
# 439 "data/scripts/general_scripts.pory"
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
# 453 "data/scripts/general_scripts.pory"
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
# 465 "data/scripts/general_scripts.pory"
	.string "10. A new battle tent has opened in\n"
	.string "Rockliffe town.\p"
	.string "11. HM moves can no longer forgotten\n"
	.string "(unless visiting a move deleter)$"

SceneAltered::
# 471 "data/scripts/general_scripts.pory"
	.string "An earlier story scene of\n"
	.string "Team Rocket's assault on Devon\l"
	.string "Corp. has had its dialogue\l"
	.string "slightly altered, which affects\l"
	.string "the upcoming story.\p"
	.string "Would you like to view the\n"
	.string "altered scene?$"

LevelSetIntro::
# 625 "data/scripts/general_scripts.pory"
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
# 636 "data/scripts/general_scripts.pory"
	.string "Which level would you like to set\n"
	.string "your team?$"

ThisIsForTesting::
# 682 "data/scripts/general_scripts.pory"
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.$"

ResetAdamantTower_YesNo::
# 686 "data/scripts/general_scripts.pory"
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.\p"
	.string "Would you like to reset the tower?$"

ResetAdamantTower_ResetTeam::
# 691 "data/scripts/general_scripts.pory"
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
# 704 "data/scripts/general_scripts.pory"
	.string "Team has been set to lvl 38.$"

EndOfBeta::
# 718 "data/scripts/general_scripts.pory"
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"

EndOfBeta2::
# 738 "data/scripts/general_scripts.pory"
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"

DriftblimExpress_Text::
# 1332 "data/scripts/general_scripts.pory"
	.string "Welcome to Drifblim Express.\p"
	.string "From here you can travel to any\n"
	.string "other Drifblim Express location\l"
	.string "you have previously discovered.\p"
	.string "Would you like to use the Drifblim\n"
	.string "Balloon?$"
