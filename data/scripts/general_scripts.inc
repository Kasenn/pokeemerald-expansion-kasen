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


EventScript_BufferFreeSpacePocket::
# 28 "data/scripts/general_scripts.pory"
	bufferstring STR_VAR_3, EventScript_BufferFreeSpacePocket_Text_0
# 29 "data/scripts/general_scripts.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return


SetupRivalGfxId::
	checkplayergender
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SetupRivalGfxId_1
# 43 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalGfxId_7
# 47 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

SetupRivalGfxId_1:
# 35 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalGfxId_4
# 39 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

SetupRivalGfxId_4:
# 36 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL_ORAS
	return

SetupRivalGfxId_7:
# 44 "data/scripts/general_scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL_ORAS
	return


CountGymBadges::
# 53 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, CountGymBadges_2
# 56 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CountGymBadges_3
# 59 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, CountGymBadges_4
# 62 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, CountGymBadges_5
# 65 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CountGymBadges_6
# 68 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CountGymBadges_7
# 71 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CountGymBadges_8
# 74 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, CountGymBadges_9
# 78 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
CountGymBadges_1:
	return

CountGymBadges_2:
# 54 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 8
	goto CountGymBadges_1

CountGymBadges_3:
# 57 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 7
	goto CountGymBadges_1

CountGymBadges_4:
# 60 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 6
	goto CountGymBadges_1

CountGymBadges_5:
# 63 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 5
	goto CountGymBadges_1

CountGymBadges_6:
# 66 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 4
	goto CountGymBadges_1

CountGymBadges_7:
# 69 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 3
	goto CountGymBadges_1

CountGymBadges_8:
# 72 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 2
	goto CountGymBadges_1

CountGymBadges_9:
# 75 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 1
	goto CountGymBadges_1


EventScript_UseRockClimb::
# 83 "data/scripts/general_scripts.pory"
	lockall
# 84 "data/scripts/general_scripts.pory"
	checkpartymove MOVE_ROCK_CLIMB
# 85 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantRockClimb
# 86 "data/scripts/general_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 87 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 88 "data/scripts/general_scripts.pory"
	compare VAR_ROCK_CLIMB_USED, 2
	goto_if_lt EventScript_UseRockClimb_2
EventScript_UseRockClimb_1:
# 93 "data/scripts/general_scripts.pory"
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
# 96 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EnterPokeballMovement
# 97 "data/scripts/general_scripts.pory"
	waitmovement 0
# 98 "data/scripts/general_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 99 "data/scripts/general_scripts.pory"
	goto EventScript_EndRockClimb
	return

EventScript_UseRockClimb_2:
# 89 "data/scripts/general_scripts.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 90 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndRockClimb
# 91 "data/scripts/general_scripts.pory"
	addvar VAR_ROCK_CLIMB_USED, 1
	goto EventScript_UseRockClimb_1


EventScript_IceSmash::
# 103 "data/scripts/general_scripts.pory"
	lockall
# 104 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_IceSmash_2
EventScript_IceSmash_1:
# 107 "data/scripts/general_scripts.pory"
	checkpartymove MOVE_ROCK_SMASH
# 108 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
# 109 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 110 "data/scripts/general_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 111 "data/scripts/general_scripts.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 112 "data/scripts/general_scripts.pory"
	msgbox EventScript_IceSmash_Text_0, MSGBOX_YESNO
# 113 "data/scripts/general_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
# 114 "data/scripts/general_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 115 "data/scripts/general_scripts.pory"
	closemessage
# 116 "data/scripts/general_scripts.pory"
	goto EventScript_RockSmashCommon
	return

EventScript_IceSmash_2:
# 105 "data/scripts/general_scripts.pory"
	goto EventScript_CantSmashRock
	goto EventScript_IceSmash_1


FollowerSpottedAnItemNearby::
# 120 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 121 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 122 "data/scripts/general_scripts.pory"
	waitmovement 0
# 123 "data/scripts/general_scripts.pory"
	delay 48
# 124 "data/scripts/general_scripts.pory"
	setflag FLAG_FOLLOWER_FINDER_INTRO
# 125 "data/scripts/general_scripts.pory"
	bufferlivemonnickname 0
# 126 "data/scripts/general_scripts.pory"
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_SIGN
	end


FollowerAfterFindingItem::
# 134 "data/scripts/general_scripts.pory"
	bufferlivemonnickname 0
# 135 "data/scripts/general_scripts.pory"
	msgbox FollowerSpottedAnItemNearby_Text, MSGBOX_NPC
	return


CheckForTentSpecialPrize::
# 138 "data/scripts/general_scripts.pory"
	compare VAR_TENT_SPECIAL_PRIZE, 3
	goto_if_ne CheckForTentSpecialPrize_2
CheckForTentSpecialPrize_1:
# 141 "data/scripts/general_scripts.pory"
	switch VAR_TENT_SPECIAL_PRIZE
# 142 "data/scripts/general_scripts.pory"
	case 1, CheckForTentSpecialPrize_6
# 144 "data/scripts/general_scripts.pory"
	case 2, CheckForTentSpecialPrize_7
# 146 "data/scripts/general_scripts.pory"
	case 3, CheckForTentSpecialPrize_8
CheckForTentSpecialPrize_4:
# 154 "data/scripts/general_scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
	return

CheckForTentSpecialPrize_2:
# 139 "data/scripts/general_scripts.pory"
	addvar VAR_TENT_SPECIAL_PRIZE, 1
	goto CheckForTentSpecialPrize_1

CheckForTentSpecialPrize_6:
# 143 "data/scripts/general_scripts.pory"
	msgbox GainedASpecialTicket
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_7:
# 145 "data/scripts/general_scripts.pory"
	msgbox NowHaveTwoTickets
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_8:
# 147 "data/scripts/general_scripts.pory"
	msgbox TentGrandPrize
# 148 "data/scripts/general_scripts.pory"
	giveitem ITEM_FRESH_START_MOCHI
# 149 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckForTentSpecialPrize_10
CheckForTentSpecialPrize_9:
# 152 "data/scripts/general_scripts.pory"
	setvar VAR_TENT_SPECIAL_PRIZE, 0
	goto CheckForTentSpecialPrize_4

CheckForTentSpecialPrize_10:
# 150 "data/scripts/general_scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
	goto CheckForTentSpecialPrize_9


TradeSeedsForFertilizer::
# 174 "data/scripts/general_scripts.pory"
	lock
# 175 "data/scripts/general_scripts.pory"
	faceplayer
# 176 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_MET_STRANGE_SEED_TRADER, TradeSeedsForFertilizer_2
TradeSeedsForFertilizer_1:
# 184 "data/scripts/general_scripts.pory"
	msgbox SeenAnyStrangeSeeds, MSGBOX_NPC
	checkitem ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_5
TradeSeedsForFertilizer_4:
# 197 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsForFertilizer_11
TradeSeedsForFertilizer_10:
	end

TradeSeedsForFertilizer_2:
	checkitem ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_8
TradeSeedsForFertilizer_7:
# 182 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_1

TradeSeedsForFertilizer_5:
# 186 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 187 "data/scripts/general_scripts.pory"
	safefollow
# 188 "data/scripts/general_scripts.pory"
	exclamationmark 4
# 189 "data/scripts/general_scripts.pory"
	setflag FLAG_MET_STRANGE_SEED_TRADER
	msgbox CareToTradeSeeds, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_13
# 194 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_8:
	msgbox HereToTradeMoreSeeds, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsForFertilizer_16
	goto TradeSeedsForFertilizer_7

TradeSeedsForFertilizer_11:
# 198 "data/scripts/general_scripts.pory"
	startquest FLAG_Q12_FLOWERSHOP_STRANGESEED_START
# 199 "data/scripts/general_scripts.pory"
	special ShowJournalPopupAdd
	goto TradeSeedsForFertilizer_10

TradeSeedsForFertilizer_13:
# 191 "data/scripts/general_scripts.pory"
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_4

TradeSeedsForFertilizer_16:
# 179 "data/scripts/general_scripts.pory"
	goto TradeSeedsMain
	goto TradeSeedsForFertilizer_7


TradeSeedsMain::
# 204 "data/scripts/general_scripts.pory"
	checkitemquant ITEM_STRANGE_SEED
	msgbox TradeHowManySeeds, MSGBOX_HOWMANY
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TradeSeedsMain_1
# 209 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 210 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
TradeSeedsMain_5:
# 211 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TradeSeedsMain_6
# 215 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 216 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TradeSeedsMain_9
	msgbox TradeSeedsForFertilizer_Text_Multiple, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeSeedsMain_14
TradeSeedsMain_8:
# 238 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_1:
# 206 "data/scripts/general_scripts.pory"
	goto TradeSeedsGoodbye
	return

TradeSeedsMain_6:
# 212 "data/scripts/general_scripts.pory"
	subvar VAR_RESULT, 1
# 213 "data/scripts/general_scripts.pory"
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
# 223 "data/scripts/general_scripts.pory"
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
# 224 "data/scripts/general_scripts.pory"
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_14:
	checkitemspace ITEM_FERTILIZER, VAR_TEMP_1
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeSeedsMain_20
TradeSeedsMain_19:
# 234 "data/scripts/general_scripts.pory"
	giveitem ITEM_FERTILIZER, VAR_TEMP_1
# 235 "data/scripts/general_scripts.pory"
	removeitem ITEM_STRANGE_SEED, VAR_TEMP_2
	goto TradeSeedsMain_8

TradeSeedsMain_17:
# 219 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 220 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 221 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto TradeSeedsMain_16

TradeSeedsMain_20:
# 230 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 231 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 232 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto TradeSeedsMain_19


TradeSeedsGoodbye::
# 241 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_1, 0
# 242 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_2, 0
# 243 "data/scripts/general_scripts.pory"
	msgbox ComeTradeWhenGetMoreSeeds, MSGBOX_NPC
# 244 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_Q12_FLOWERSHOP_STRANGESEED_START, TradeSeedsGoodbye_3
TradeSeedsGoodbye_1:
	end

TradeSeedsGoodbye_2:
# 245 "data/scripts/general_scripts.pory"
	completequest FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE
# 246 "data/scripts/general_scripts.pory"
	special ShowJournalPopupRemove
	goto TradeSeedsGoodbye_1

TradeSeedsGoodbye_3:
# 244 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_Q12_FLOWERSHOP_STRANGESEED_COMPLETE, TradeSeedsGoodbye_2
	goto TradeSeedsGoodbye_1


ZeBagIsFull::
# 280 "data/scripts/general_scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	end


BerryTree_ItemUseFertilizer::
# 283 "data/scripts/general_scripts.pory"
	special ObjectEventInteractionGetBerryName
# 284 "data/scripts/general_scripts.pory"
	message BerryTree_Text_FertilizedTheBerry
# 285 "data/scripts/general_scripts.pory"
	waitmessage
# 286 "data/scripts/general_scripts.pory"
	special ObjectEventInteractionWaterBerryTree
# 287 "data/scripts/general_scripts.pory"
	fertilizeberry
# 288 "data/scripts/general_scripts.pory"
	special DoFertilizingBerryTreeAnim
# 289 "data/scripts/general_scripts.pory"
	waitstate
# 290 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PlantIsDelighted
# 291 "data/scripts/general_scripts.pory"
	waitmessage
# 292 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 293 "data/scripts/general_scripts.pory"
	releaseall
# 294 "data/scripts/general_scripts.pory"
	dotimebasedevents
# 295 "data/scripts/general_scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq BerryTree_ItemUseFertilizer_2
BerryTree_ItemUseFertilizer_1:
	end

BerryTree_ItemUseFertilizer_2:
# 296 "data/scripts/general_scripts.pory"
	delay 210
	goto BerryTree_ItemUseFertilizer_1


TryDropStrangeSeed_Tree::
# 300 "data/scripts/general_scripts.pory"
	trystrangeseed
# 301 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge TryDropStrangeSeed_Tree_3
TryDropStrangeSeed_Tree_1:
	return

TryDropStrangeSeed_Tree_2:
# 303 "data/scripts/general_scripts.pory"
	waitse
# 304 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 305 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 306 "data/scripts/general_scripts.pory"
	waitmovement 0
# 307 "data/scripts/general_scripts.pory"
	delay 48
# 308 "data/scripts/general_scripts.pory"
	msgbox StrangeSeedDroppedTree
# 309 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 310 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 311 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 312 "data/scripts/general_scripts.pory"
	waitmessage
# 313 "data/scripts/general_scripts.pory"
	waitfanfare
# 314 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 315 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwaySeed
# 316 "data/scripts/general_scripts.pory"
	waitmessage
# 317 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto TryDropStrangeSeed_Tree_1

TryDropStrangeSeed_Tree_3:
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_Tree_2
	goto TryDropStrangeSeed_Tree_1


TryDropStrangeSeed_BerryPlant::
# 321 "data/scripts/general_scripts.pory"
	trystrangeseed
# 322 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge TryDropStrangeSeed_BerryPlant_4
TryDropStrangeSeed_BerryPlant_3:
# 340 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwayBerry
TryDropStrangeSeed_BerryPlant_1:
	return

TryDropStrangeSeed_BerryPlant_2:
# 324 "data/scripts/general_scripts.pory"
	closemessage
# 325 "data/scripts/general_scripts.pory"
	waitse
# 326 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 327 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 328 "data/scripts/general_scripts.pory"
	waitmovement 0
# 329 "data/scripts/general_scripts.pory"
	delay 48
# 330 "data/scripts/general_scripts.pory"
	msgbox StrangeSeedDroppedBerry
# 331 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 332 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 333 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 334 "data/scripts/general_scripts.pory"
	waitmessage
# 335 "data/scripts/general_scripts.pory"
	waitfanfare
# 336 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 337 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwayBerryAndSeed
	goto TryDropStrangeSeed_BerryPlant_1

TryDropStrangeSeed_BerryPlant_4:
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TryDropStrangeSeed_BerryPlant_2
	goto TryDropStrangeSeed_BerryPlant_3


ZygardeCell::
# 364 "data/scripts/general_scripts.pory"
	lock
# 365 "data/scripts/general_scripts.pory"
	waitse
# 366 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/scripts/general_scripts.pory"
	removeobject VAR_LAST_TALKED
# 368 "data/scripts/general_scripts.pory"
	message PlayerFoundZygardeCell
# 369 "data/scripts/general_scripts.pory"
	waitfanfare
# 370 "data/scripts/general_scripts.pory"
	waitmessage
# 371 "data/scripts/general_scripts.pory"
	msgbox gText_PutZygardeCellInCube
# 372 "data/scripts/general_scripts.pory"
	addvar VAR_ZYGARDE_CELLS, 1
# 373 "data/scripts/general_scripts.pory"
	release
	end


ZygardeCore::
# 381 "data/scripts/general_scripts.pory"
	lock
# 382 "data/scripts/general_scripts.pory"
	waitse
# 383 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 384 "data/scripts/general_scripts.pory"
	removeobject VAR_LAST_TALKED
# 385 "data/scripts/general_scripts.pory"
	message PlayerFoundZygardeCore
# 386 "data/scripts/general_scripts.pory"
	waitfanfare
# 387 "data/scripts/general_scripts.pory"
	waitmessage
# 388 "data/scripts/general_scripts.pory"
	msgbox gText_PutZygardeCoreInCube
# 389 "data/scripts/general_scripts.pory"
	addvar VAR_ZYGARDE_CORES, 1
# 390 "data/scripts/general_scripts.pory"
	release
	end


EventScript_CutGrassSeedDrop::
	checkitemspace ITEM_STRANGE_SEED
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutGrassSeedDrop_2
EventScript_CutGrassSeedDrop_1:
# 402 "data/scripts/general_scripts.pory"
	waitse
# 403 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
# 404 "data/scripts/general_scripts.pory"
	callnative RevertSeedDropMetatile
# 405 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 406 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PickedTheSeed
# 407 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 408 "data/scripts/general_scripts.pory"
	waitmessage
# 409 "data/scripts/general_scripts.pory"
	waitfanfare
# 410 "data/scripts/general_scripts.pory"
	message BerryTree_Text_PutAwaySeed
# 411 "data/scripts/general_scripts.pory"
	waitmessage
# 412 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 413 "data/scripts/general_scripts.pory"
	release
	return

EventScript_CutGrassSeedDrop_2:
# 400 "data/scripts/general_scripts.pory"
	goto ZeBagIsFull
	goto EventScript_CutGrassSeedDrop_1


IrisBattle::
# 419 "data/scripts/general_scripts.pory"
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


DraydenBattle::
# 421 "data/scripts/general_scripts.pory"
	trainerbattle_single TRAINER_LEADER_DRAYDEN, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


MinaBattle::
# 423 "data/scripts/general_scripts.pory"
	trainerbattle_single TRAINER_ELITE_FOUR_MINA, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


Debug_Script_1::
# 491 "data/scripts/general_scripts.pory"
	lock
# 492 "data/scripts/general_scripts.pory"
	msgbox LevelSetIntro, MSGBOX_DEFAULT
# 493 "data/scripts/general_scripts.pory"
	message WhichLevelToSet
# 494 "data/scripts/general_scripts.pory"
	waitmessage
# 495 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_0, 0
# 496 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_1, 1
# 497 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_2, 2
# 498 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_3, 3
# 499 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_4, 4
# 500 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_5, 5
# 501 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_6, 6
# 502 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_7, 7
# 503 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_8, 8
# 504 "data/scripts/general_scripts.pory"
	dynmultipush Debug_Script_1_Text_9, 9
# 505 "data/scripts/general_scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
# 506 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 507 "data/scripts/general_scripts.pory"
	case 0, Debug_Script_1_3
# 510 "data/scripts/general_scripts.pory"
	case 1, Debug_Script_1_4
# 513 "data/scripts/general_scripts.pory"
	case 2, Debug_Script_1_5
# 516 "data/scripts/general_scripts.pory"
	case 3, Debug_Script_1_6
# 519 "data/scripts/general_scripts.pory"
	case 4, Debug_Script_1_7
# 522 "data/scripts/general_scripts.pory"
	case 5, Debug_Script_1_8
# 525 "data/scripts/general_scripts.pory"
	case 6, Debug_Script_1_9
# 528 "data/scripts/general_scripts.pory"
	case 7, Debug_Script_1_10
# 531 "data/scripts/general_scripts.pory"
	case 8, Debug_Script_1_11
# 534 "data/scripts/general_scripts.pory"
	case 9, Debug_Script_1_12
# 535 "data/scripts/general_scripts.pory"
	case MULTI_B_PRESSED, Debug_Script_1_12
Debug_Script_1_1:
# 538 "data/scripts/general_scripts.pory"
	release
	end

Debug_Script_1_3:
# 508 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_10
# 509 "data/scripts/general_scripts.pory"
	setpartylevel 14
	goto Debug_Script_1_1

Debug_Script_1_4:
# 511 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_11
# 512 "data/scripts/general_scripts.pory"
	setpartylevel 22
	goto Debug_Script_1_1

Debug_Script_1_5:
# 514 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_12
# 515 "data/scripts/general_scripts.pory"
	setpartylevel 24
	goto Debug_Script_1_1

Debug_Script_1_6:
# 517 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_13
# 518 "data/scripts/general_scripts.pory"
	setpartylevel 29
	goto Debug_Script_1_1

Debug_Script_1_7:
# 520 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_14
# 521 "data/scripts/general_scripts.pory"
	setpartylevel 34
	goto Debug_Script_1_1

Debug_Script_1_8:
# 523 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_15
# 524 "data/scripts/general_scripts.pory"
	setpartylevel 38
	goto Debug_Script_1_1

Debug_Script_1_9:
# 526 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_16
# 527 "data/scripts/general_scripts.pory"
	setpartylevel 40
	goto Debug_Script_1_1

Debug_Script_1_10:
# 529 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_17
# 530 "data/scripts/general_scripts.pory"
	setpartylevel 45
	goto Debug_Script_1_1

Debug_Script_1_11:
# 532 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_1_Text_18
# 533 "data/scripts/general_scripts.pory"
	setpartylevel 53
	goto Debug_Script_1_1

Debug_Script_1_12:
# 536 "data/scripts/general_scripts.pory"
	closemessage
	goto Debug_Script_1_1


Debug_Script_2::
# 542 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_PERMA_NIGHT, Debug_Script_2_2
# 550 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_2, MSGBOX_YESNO
# 551 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_2_7
Debug_Script_2_1:
# 556 "data/scripts/general_scripts.pory"
	release
	return

Debug_Script_2_2:
# 543 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_0, MSGBOX_YESNO
# 544 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_2_5
	goto Debug_Script_2_1

Debug_Script_2_5:
# 545 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_1, MSGBOX_AUTOCLOSE
# 546 "data/scripts/general_scripts.pory"
	clearflag FLAG_PERMA_NIGHT
	goto Debug_Script_2_1

Debug_Script_2_7:
# 552 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_2_Text_3, MSGBOX_AUTOCLOSE
# 553 "data/scripts/general_scripts.pory"
	setflag FLAG_PERMA_NIGHT
	goto Debug_Script_2_1


Debug_Script_3::
# 560 "data/scripts/general_scripts.pory"
	callnative ScrCmd_ActivatePokeNav
# 561 "data/scripts/general_scripts.pory"
	release
	return


Debug_Script_4::
# 565 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 566 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_0, 1
# 567 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 3
# 568 "data/scripts/general_scripts.pory"
	teleportcamera VAR_TEMP_0, VAR_TEMP_1
	return


Debug_Script_5::
	return


Debug_Script_6::
	return


Debug_Script_7::
	return


Debug_Script_8::
# 581 "data/scripts/general_scripts.pory"
	special EnterCode
# 582 "data/scripts/general_scripts.pory"
	waitstate
# 583 "data/scripts/general_scripts.pory"
	special GetCodeFeedback
# 584 "data/scripts/general_scripts.pory"
	release
# 585 "data/scripts/general_scripts.pory"
	end
	return


Debug_Script_81::
# 590 "data/scripts/general_scripts.pory"
	special EnterCode
# 591 "data/scripts/general_scripts.pory"
	waitstate
# 592 "data/scripts/general_scripts.pory"
	special GetCodeFeedback
# 593 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Debug_Script_81_2
Debug_Script_81_1:
# 596 "data/scripts/general_scripts.pory"
	release
# 597 "data/scripts/general_scripts.pory"
	end
	return

Debug_Script_81_2:
# 594 "data/scripts/general_scripts.pory"
	msgbox Debug_Script_81_Text_0
	goto Debug_Script_81_1


ResetAdamantTower::
	checkitem ITEM_MEGA_RING
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_2
# 625 "data/scripts/general_scripts.pory"
	lock
# 626 "data/scripts/general_scripts.pory"
	faceplayer
	msgbox ResetAdamantTower_YesNo, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_5
# 631 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR2_MAN3
# 632 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR2_WOMAN5
# 633 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR1_PSYCHIC
# 634 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_2F_TR1_MAN5
# 635 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR1_EXPERT_M
# 636 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR1_EXPERT_F
# 637 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
# 638 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_3F_TR2_PSYCHICF
# 639 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR1_BLACKBELT
# 640 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
# 641 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR2_LASS
# 642 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
# 643 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
# 644 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_4F_TR3_BLACKBELT
# 645 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_M
# 646 "data/scripts/general_scripts.pory"
	cleartrainerflag TRAINER_AT_5F_COOLTRAINER_F
# 647 "data/scripts/general_scripts.pory"
	removeitem ITEM_MEGA_RING
# 648 "data/scripts/general_scripts.pory"
	clearflag FLAG_OBTAINED_MEGA_RING
# 649 "data/scripts/general_scripts.pory"
	clearflag FLAG_REUNITE_WITH_RIVAL
# 650 "data/scripts/general_scripts.pory"
	setflag FLAG_DISABLE_SAVING
# 651 "data/scripts/general_scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	msgbox ResetAdamantTower_ResetTeam, MSGBOX_YESNO
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ResetAdamantTower_8
# 656 "data/scripts/general_scripts.pory"
	setpartylevel 38
# 657 "data/scripts/general_scripts.pory"
	msgbox PartyHasBeenReset, MSGBOX_NPC
	end

ResetAdamantTower_2:
# 622 "data/scripts/general_scripts.pory"
	msgbox ThisIsForTesting, MSGBOX_NPC
	end

ResetAdamantTower_5:
# 628 "data/scripts/general_scripts.pory"
	release
	end

ResetAdamantTower_8:
# 653 "data/scripts/general_scripts.pory"
	release
	end


EndOfBetaBlock::
# 688 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_BETA_BLOCK, EndOfBetaBlock_2
EndOfBetaBlock_1:
# 693 "data/scripts/general_scripts.pory"
	release
	end

EndOfBetaBlock_2:
# 689 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta, MSGBOX_AUTOCLOSE
# 690 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Up
# 691 "data/scripts/general_scripts.pory"
	waitmovement 0
	goto EndOfBetaBlock_1


BarrenWastes_Block1::
# 704 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta2, MSGBOX_SIGN
# 705 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Right
# 706 "data/scripts/general_scripts.pory"
	waitmovement 0
# 707 "data/scripts/general_scripts.pory"
	release
	end


BarrenWastes_Block2::
# 711 "data/scripts/general_scripts.pory"
	msgbox EndOfBeta2, MSGBOX_SIGN
# 712 "data/scripts/general_scripts.pory"
	applymovement 0xFF, Walk1Down
# 713 "data/scripts/general_scripts.pory"
	waitmovement 0
# 714 "data/scripts/general_scripts.pory"
	release
	end


SkipToShoreslate::
# 724 "data/scripts/general_scripts.pory"
	call ClearRoute1
# 725 "data/scripts/general_scripts.pory"
	call ClearRoute2
# 726 "data/scripts/general_scripts.pory"
	call ClearWindyWoods
# 727 "data/scripts/general_scripts.pory"
	call ClearCoralgrove
# 728 "data/scripts/general_scripts.pory"
	call ClearAzuretide
# 729 "data/scripts/general_scripts.pory"
	call ClearRoute4
# 730 "data/scripts/general_scripts.pory"
	call ClearRanch
# 731 "data/scripts/general_scripts.pory"
	call ClearAldeleaf
# 732 "data/scripts/general_scripts.pory"
	call ClearRoute28
# 733 "data/scripts/general_scripts.pory"
	call ClearWindplume
# 734 "data/scripts/general_scripts.pory"
	call ClearRoute5
# 735 "data/scripts/general_scripts.pory"
	call ClearFlowerFields
# 736 "data/scripts/general_scripts.pory"
	call ClearSkyloch
# 737 "data/scripts/general_scripts.pory"
	call ClearRoute6
# 738 "data/scripts/general_scripts.pory"
	call ClearRoute8
# 739 "data/scripts/general_scripts.pory"
	call ClearShoreslate
	return


ClearRoute1::
# 743 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_COOLTRAINER
# 744 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_YOUNGSTER
# 745 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_FISHER
# 746 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_BUG_CATCHER
# 747 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R1_TUBER
# 748 "data/scripts/general_scripts.pory"
	addbp 10
# 749 "data/scripts/general_scripts.pory"
	additem ITEM_EXP_SHARE
# 750 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRO_TO_BP
# 751 "data/scripts/general_scripts.pory"
	msgbox ClearRoute1_Text_0
	return


ClearRoute2::
# 754 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL1
# 755 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
# 756 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL
# 757 "data/scripts/general_scripts.pory"
	additem ITEM_BIG_PEARL
# 758 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_FISHER
# 759 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_LASS
# 760 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_BLACKBELT
# 761 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_YOUNGSTER
# 762 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R2_SCHOOL_KID_F
# 763 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE2_X_ATTACK
# 764 "data/scripts/general_scripts.pory"
	additem ITEM_X_ATTACK
# 765 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_ORAN, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 766 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_PECHA, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 767 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_2_CHERI, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 768 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY, 2
# 769 "data/scripts/general_scripts.pory"
	additem ITEM_CHERI_BERRY, 2
# 770 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 771 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL
# 772 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 773 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE2_REVIVE
# 774 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 775 "data/scripts/general_scripts.pory"
	trystrangeseed
# 776 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_2
ClearRoute2_1:
# 779 "data/scripts/general_scripts.pory"
	trystrangeseed
# 780 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_5
ClearRoute2_4:
# 783 "data/scripts/general_scripts.pory"
	trystrangeseed
# 784 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute2_8
ClearRoute2_7:
	return

ClearRoute2_2:
# 777 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_1

ClearRoute2_5:
# 781 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_4

ClearRoute2_8:
# 785 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute2_7


ClearWindyWoods::
# 790 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_WW_PARLYZ
# 791 "data/scripts/general_scripts.pory"
	additem ITEM_PARLYZ_HEAL
# 792 "data/scripts/general_scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
# 793 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_BUGCATCHER
# 794 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_LADY
# 795 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_BUGCATCHER_2
# 796 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_CAMPER
# 797 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_LASS
# 798 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_YOUNGSTER
# 799 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WW_ACE_TRAINER
# 800 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SHELLY_SEAFLOOR_CAVERN
# 801 "data/scripts/general_scripts.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 802 "data/scripts/general_scripts.pory"
	switch VAR_STARTER_MON
# 803 "data/scripts/general_scripts.pory"
	case SPECIES_ROWLET, ClearWindyWoods_3
# 805 "data/scripts/general_scripts.pory"
	case SPECIES_TORCHIC, ClearWindyWoods_4
# 807 "data/scripts/general_scripts.pory"
	case SPECIES_PIPLUP, ClearWindyWoods_5
ClearWindyWoods_1:
# 810 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_WINDY_WOODS
# 811 "data/scripts/general_scripts.pory"
	setflag FLAG_GLADE_PUZZLE
# 812 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
# 813 "data/scripts/general_scripts.pory"
	addbp 10
	return

ClearWindyWoods_3:
# 804 "data/scripts/general_scripts.pory"
	additem ITEM_MIRACLE_SEED
	goto ClearWindyWoods_1

ClearWindyWoods_4:
# 806 "data/scripts/general_scripts.pory"
	additem ITEM_CHARCOAL
	goto ClearWindyWoods_1

ClearWindyWoods_5:
# 808 "data/scripts/general_scripts.pory"
	additem ITEM_MYSTIC_WATER
	goto ClearWindyWoods_1


ClearCoralgrove::
# 817 "data/scripts/general_scripts.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
# 818 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_CORALGROVE_CITY
# 819 "data/scripts/general_scripts.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 820 "data/scripts/general_scripts.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 821 "data/scripts/general_scripts.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
# 822 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY
# 823 "data/scripts/general_scripts.pory"
	additem ITEM_RARE_CANDY
# 824 "data/scripts/general_scripts.pory"
	setflag FLAG_CORAL_GREATBALL
# 825 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 826 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_1
# 827 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_2
# 828 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_3
# 829 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SCHOOLHALL_4
# 830 "data/scripts/general_scripts.pory"
	additem ITEM_TM_FALSE_SWIPE
# 831 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_CHIP
# 832 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_FOSTER
# 833 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_2
# 834 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_3
# 835 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_4
# 836 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DUSTY_5
# 837 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEADER_AARON
# 838 "data/scripts/general_scripts.pory"
	setflag FLAG_BADGE01_GET
# 839 "data/scripts/general_scripts.pory"
	additem ITEM_TM_U_TURN
	checkplayergender
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ClearCoralgrove_2
# 844 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BRENDAN_CORALGROVE_ELEVATOR
ClearCoralgrove_1:
# 846 "data/scripts/general_scripts.pory"
	msgbox ClearCoralgrove_Text_0, MSGBOX_YESNO
# 847 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ClearCoralgrove_6
# 851 "data/scripts/general_scripts.pory"
	setflag FLAG_RIVAL_HARBOR_ANGRY
ClearCoralgrove_5:
# 853 "data/scripts/general_scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 854 "data/scripts/general_scripts.pory"
	additem ITEM_TM_REST
# 855 "data/scripts/general_scripts.pory"
	additem ITEM_OLD_ROD
# 856 "data/scripts/general_scripts.pory"
	setflag FLAG_HARBOR_GREATBALL
# 857 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 858 "data/scripts/general_scripts.pory"
	setflag FLAG_HARBOR_PEARL
# 859 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
	return

ClearCoralgrove_2:
# 841 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_MAY_CORALGROVE_ELEVATOR
	goto ClearCoralgrove_1

ClearCoralgrove_6:
# 848 "data/scripts/general_scripts.pory"
	additem ITEM_ITEMFINDER
	goto ClearCoralgrove_5


ClearAzuretide::
# 863 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_AZURETIDE
# 864 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY, 3
# 865 "data/scripts/general_scripts.pory"
	setflag FLAG_AZURETIDE_HONEY
# 866 "data/scripts/general_scripts.pory"
	additem ITEM_TOWN_MAP
# 867 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_PEARL
# 868 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_REDSHARD
# 869 "data/scripts/general_scripts.pory"
	setflag FLAG_COASTTOWN_HEATROCK
# 870 "data/scripts/general_scripts.pory"
	additem ITEM_PEARL
# 871 "data/scripts/general_scripts.pory"
	additem ITEM_RED_SHARD
# 872 "data/scripts/general_scripts.pory"
	additem ITEM_HEAT_ROCK
	return


ClearRoute4::
# 876 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_104_ORAN_1, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 877 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_103_LEPPA, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 878 "data/scripts/general_scripts.pory"
	setberrytree BERRY_TREE_ROUTE_103_CHERI_2, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 879 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY, 2
# 880 "data/scripts/general_scripts.pory"
	additem ITEM_LEPPA_BERRY, 2
# 881 "data/scripts/general_scripts.pory"
	additem ITEM_CHERI_BERRY, 2
# 882 "data/scripts/general_scripts.pory"
	trystrangeseed
# 883 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_2
ClearRoute4_1:
# 884 "data/scripts/general_scripts.pory"
	trystrangeseed
# 885 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_5
ClearRoute4_4:
# 886 "data/scripts/general_scripts.pory"
	trystrangeseed
# 887 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute4_8
ClearRoute4_7:
# 888 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL
# 889 "data/scripts/general_scripts.pory"
	additem ITEM_POKE_BALL
# 890 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE3_ANTIDOTE
# 891 "data/scripts/general_scripts.pory"
	additem ITEM_ANTIDOTE
# 892 "data/scripts/general_scripts.pory"
	setflag FLAG_ITEM_ROUTE3_GIGADRAIN
# 893 "data/scripts/general_scripts.pory"
	additem ITEM_TM_GRASS_KNOT
# 894 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_REVIVE
# 895 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 896 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_ETHER
# 897 "data/scripts/general_scripts.pory"
	additem ITEM_ETHER
# 898 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL
# 899 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_REPEL
# 900 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_HIKER
# 901 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_UNUSED_54_
# 902 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_POKEMANIAC
# 903 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BUGCATCHER
# 904 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TWINS
# 905 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TRIATHLETE
# 906 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_CAMPER
# 907 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_COOL_F
# 908 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_COOL_M
# 909 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER
# 910 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_YOUNGSTER
# 911 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER_2
# 912 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_DOUBLE_LASS
# 913 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_DOUBLE_YOUNGSTER
# 914 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R4_TRIATHLETE_2
	return

ClearRoute4_2:
# 883 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_1

ClearRoute4_5:
# 885 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_4

ClearRoute4_8:
# 887 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute4_7


ClearRanch::
# 918 "data/scripts/general_scripts.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 919 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_POKE_RANCH
# 920 "data/scripts/general_scripts.pory"
	setflag FLAG_RANCH_HELPED
# 921 "data/scripts/general_scripts.pory"
	clearflag FLAG_HIDE_RANCH_OWNER
# 922 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_VOLKNER_2
# 923 "data/scripts/general_scripts.pory"
	additem ITEM_HM01
# 924 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 925 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 926 "data/scripts/general_scripts.pory"
	setflag FLAG_VOLKNER_HELPED
# 927 "data/scripts/general_scripts.pory"
	setflag FLAG_JASMINE_HELPED
# 928 "data/scripts/general_scripts.pory"
	setvar VAR_POKERANCH, 1
# 929 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_RICKY_4
# 930 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_RICKY_5
	return


ClearAldeleaf::
# 934 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_WIP_CITY1
# 935 "data/scripts/general_scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
# 936 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_VITO
# 937 "data/scripts/general_scripts.pory"
	setflag FLAG_SHELL_BELL_RECEIVED
# 938 "data/scripts/general_scripts.pory"
	additem ITEM_SHELL_BELL
# 939 "data/scripts/general_scripts.pory"
	additem ITEM_QUICK_BALL, 1
# 940 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_QUICK_BALL
# 941 "data/scripts/general_scripts.pory"
	setflag FLAG_KEY_RETURNED
# 942 "data/scripts/general_scripts.pory"
	additem ITEM_BLACK_FLUTE, 1
# 943 "data/scripts/general_scripts.pory"
	setflag FLAG_WHITEFLUTE_RECEIVED
# 944 "data/scripts/general_scripts.pory"
	additem ITEM_LAVA_COOKIE
# 945 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_LAVA_COOKIE
# 946 "data/scripts/general_scripts.pory"
	setflag FLAG_TOUCHPOKEBALL
# 947 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH1
# 948 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH2
# 949 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH3
# 950 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
# 951 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_MUSHROOM2
# 952 "data/scripts/general_scripts.pory"
	additem ITEM_TINY_MUSHROOM
# 953 "data/scripts/general_scripts.pory"
	setflag FLAG_ALDELEAF_LOST_KEY
# 954 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_PARKER
# 955 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_GEORGE
# 956 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BERKE
# 957 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BRAXTON
# 958 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_VINCENT
# 959 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEROY
# 960 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_1
# 961 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_EDGAR
# 962 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_ALBERT
# 963 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SAMUEL
# 964 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_OWEN
# 965 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_2
# 966 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_3
# 967 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_4
# 968 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WILTON_5
# 969 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WARREN
# 970 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_LEADER_VOLKNER
# 971 "data/scripts/general_scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 972 "data/scripts/general_scripts.pory"
	setflag FLAG_BADGE02_GET
# 973 "data/scripts/general_scripts.pory"
	additem ITEM_TM_CHARGE_BEAM
# 974 "data/scripts/general_scripts.pory"
	setflag FLAG_ANGEREDGUYINALDELEAF
# 975 "data/scripts/general_scripts.pory"
	msgbox ClearAldeleaf_Text_0
	return


ClearRoute28::
# 978 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 979 "data/scripts/general_scripts.pory"
	msgbox ClearRoute28_Text_0, MSGBOX_YESNO
# 980 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ClearRoute28_2
ClearRoute28_1:
# 983 "data/scripts/general_scripts.pory"
	additem ITEM_TM_SECRET_POWER
# 984 "data/scripts/general_scripts.pory"
	additem ITEM_FULL_HEAL
# 985 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR1_BUGCATCHER
# 986 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR2_HIKER
# 987 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR3_NINJABOY
# 988 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R28_TR4_PSYCHIC
# 989 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_TM
# 990 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_ITEMBALL
# 991 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_HIDDENBALL
# 992 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
	return

ClearRoute28_2:
# 981 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_BROTHER_4_ROUTE28
	goto ClearRoute28_1


ClearWindplume::
# 995 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_WINDPLUME_VALLEY
# 996 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR1_BIRDKEEPER
# 997 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR2_TRIATH
# 998 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR3_BATTLEGIRL
# 999 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR4_CAMPER
# 1000 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR5_BIRDKEEPER
# 1001 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR6_MANIAC
# 1002 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR7_BIRDKEEPER
# 1003 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR8_NINJABOY
# 1004 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR9_LASS
# 1005 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR10_TRIATH
# 1006 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR11_BIRDKEEPER
# 1007 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR12_BATTLEGIRL
# 1008 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR13_BIRDKEEPER
# 1009 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_WPV_TR14_SKYLA
# 1010 "data/scripts/general_scripts.pory"
	additem ITEM_HM02
# 1011 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 1012 "data/scripts/general_scripts.pory"
	additem ITEM_PRETTY_FEATHER, 6
# 1013 "data/scripts/general_scripts.pory"
	additem ITEM_HYPER_POTION
# 1014 "data/scripts/general_scripts.pory"
	additem ITEM_IRON_BALL
# 1015 "data/scripts/general_scripts.pory"
	additem ITEM_ELIXIR
# 1016 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_HYPER_POTION
# 1017 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER3
# 1018 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER1
# 1019 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER2
# 1020 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER4
# 1021 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_IRON_BALL
# 1022 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_ELIXIR
# 1023 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER5
# 1024 "data/scripts/general_scripts.pory"
	setflag FLAG_WPV_FEATHER6
	return


ClearRoute5::
# 1028 "data/scripts/general_scripts.pory"
	setberrytree 31, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 1029 "data/scripts/general_scripts.pory"
	setberrytree 21, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 1030 "data/scripts/general_scripts.pory"
	setberrytree 13, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 1031 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 1032 "data/scripts/general_scripts.pory"
	additem ITEM_RAWST_BERRY, 2
# 1033 "data/scripts/general_scripts.pory"
	additem ITEM_SITRUS_BERRY, 2
# 1034 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1035 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_2
ClearRoute5_1:
# 1038 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1039 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_5
ClearRoute5_4:
# 1042 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1043 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute5_8
ClearRoute5_7:
# 1046 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1047 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_11
ClearRoute5_10:
# 1048 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1049 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_14
ClearRoute5_13:
# 1050 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1051 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_17
ClearRoute5_16:
# 1052 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1053 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute5_20
ClearRoute5_19:
# 1054 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM1
# 1055 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM2
# 1056 "data/scripts/general_scripts.pory"
	additem ITEM_TINY_MUSHROOM, 2
# 1057 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_REPEL
# 1058 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 1059 "data/scripts/general_scripts.pory"
	additem ITEM_TM_ROCK_TOMB
# 1060 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM1
# 1061 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM2
# 1062 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_ITEM3
# 1063 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM5
# 1064 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM4
# 1065 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE5_HIDDENITEM3
# 1066 "data/scripts/general_scripts.pory"
	additem ITEM_MAX_ETHER
# 1067 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR15_COOLTRAINER
# 1068 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR1_FISHER
# 1069 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR2_BEAUTY
# 1070 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR3_YOUNGCOUPLE
# 1071 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR4_LASS1
# 1072 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR5_POKEFAN_F
# 1073 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR6_LASS2
# 1074 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR7_GENTLEMAN
# 1075 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR8_YOUNGSTER
# 1076 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR9_TRIATHLETE
# 1077 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR10_RICHBOY
# 1078 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR11_MAN_5
# 1079 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR12_BUGCATCHER
# 1080 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR13_NINJABOY
# 1081 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R5_TR14_HIKER
# 1082 "data/scripts/general_scripts.pory"
	additem ITEM_EVIOLITE
# 1083 "data/scripts/general_scripts.pory"
	addbp 20
	return

ClearRoute5_2:
# 1036 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_1

ClearRoute5_5:
# 1040 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_4

ClearRoute5_8:
# 1044 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_7

ClearRoute5_11:
# 1047 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_10

ClearRoute5_14:
# 1049 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_13

ClearRoute5_17:
# 1051 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_16

ClearRoute5_20:
# 1053 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute5_19


ClearFlowerFields::
# 1087 "data/scripts/general_scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_INTRODUCED
# 1088 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_1
# 1089 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_2
# 1090 "data/scripts/general_scripts.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_3
# 1091 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY
# 1092 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY
# 1093 "data/scripts/general_scripts.pory"
	additem ITEM_HONEY
# 1094 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_FIELDS
# 1095 "data/scripts/general_scripts.pory"
	additem ITEM_RARE_CANDY
	return


ClearSkyloch::
# 1099 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_WIP_TOWN2
# 1100 "data/scripts/general_scripts.pory"
	additem ITEM_OCCA_BERRY, 1
# 1101 "data/scripts/general_scripts.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 1102 "data/scripts/general_scripts.pory"
	additem ITEM_BERRY_JUICE, 1
# 1103 "data/scripts/general_scripts.pory"
	setflag FLAG_SKYLOCH_JUICE
	return


ClearRoute6::
# 1107 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVON_RESCUED
# 1108 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR1_RANGER_M
# 1109 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR3_CAMPER_F
# 1110 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR5_HIKER
# 1111 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR6_CAMPER_M2
# 1112 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R6_TR7_KINDLER
	return


ClearRoute8::
# 1116 "data/scripts/general_scripts.pory"
	additem ITEM_GREAT_BALL
# 1117 "data/scripts/general_scripts.pory"
	additem ITEM_TM_ROCK_POLISH
# 1118 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR1_PARASOLLADY
# 1119 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR2_SRJR
# 1120 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR3_AROMALADY
# 1121 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR4_YOUNGSTER
# 1122 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR5_PSYCHIC_F
# 1123 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR6_ENTHUSIAST
# 1124 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR7_TRIATHLETE_M
# 1125 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR8_GENTLEMAN
# 1126 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR9_HIKER
# 1127 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR10_OLDCOUPLE
# 1128 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_R8_TR11_BIRDKEEPER
# 1129 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM1
# 1130 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM2
# 1131 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM3
# 1132 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM5
# 1133 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE8_ITEM6
# 1134 "data/scripts/general_scripts.pory"
	additem ITEM_REVIVE
# 1135 "data/scripts/general_scripts.pory"
	additem ITEM_ORAN_BERRY
# 1136 "data/scripts/general_scripts.pory"
	additem ITEM_FULL_HEAL
# 1137 "data/scripts/general_scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 1138 "data/scripts/general_scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 1139 "data/scripts/general_scripts.pory"
	additem ITEM_WAILMER_PAIL
# 1140 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 1141 "data/scripts/general_scripts.pory"
	setberrytree 15, ITEM_TO_BERRY ( ITEM_ORAN_BERRY ), BERRY_STAGE_NO_BERRY
# 1142 "data/scripts/general_scripts.pory"
	setberrytree 22, ITEM_TO_BERRY ( ITEM_PECHA_BERRY ), BERRY_STAGE_NO_BERRY
# 1143 "data/scripts/general_scripts.pory"
	setberrytree 24, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 1144 "data/scripts/general_scripts.pory"
	setberrytree 33, ITEM_TO_BERRY ( ITEM_CHERI_BERRY ), BERRY_STAGE_NO_BERRY
# 1145 "data/scripts/general_scripts.pory"
	additem ITEM_POMEG_BERRY, 2
# 1146 "data/scripts/general_scripts.pory"
	additem ITEM_RAWST_BERRY, 2
# 1147 "data/scripts/general_scripts.pory"
	additem ITEM_PECHA_BERRY, 2
# 1148 "data/scripts/general_scripts.pory"
	additem ITEM_SITRUS_BERRY, 2
# 1149 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1150 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_2
ClearRoute8_1:
# 1153 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1154 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_5
ClearRoute8_4:
# 1157 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1158 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_8
ClearRoute8_7:
# 1161 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1162 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 60
	goto_if_ge ClearRoute8_11
ClearRoute8_10:
# 1165 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1166 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_14
ClearRoute8_13:
# 1169 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1170 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_17
ClearRoute8_16:
# 1174 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1175 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_20
ClearRoute8_19:
# 1179 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1180 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_23
ClearRoute8_22:
# 1184 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1185 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_26
ClearRoute8_25:
# 1189 "data/scripts/general_scripts.pory"
	trystrangeseed
# 1190 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 80
	goto_if_ge ClearRoute8_29
ClearRoute8_28:
	return

ClearRoute8_2:
# 1151 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_1

ClearRoute8_5:
# 1155 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_4

ClearRoute8_8:
# 1159 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_7

ClearRoute8_11:
# 1163 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_10

ClearRoute8_14:
# 1167 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_13

ClearRoute8_17:
# 1171 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_16

ClearRoute8_20:
# 1176 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_19

ClearRoute8_23:
# 1181 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_22

ClearRoute8_26:
# 1186 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_25

ClearRoute8_29:
# 1191 "data/scripts/general_scripts.pory"
	additem ITEM_STRANGE_SEED
	goto ClearRoute8_28


ClearShoreslate::
# 1196 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_POTION
# 1197 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_SHORESLATE_POTION
# 1198 "data/scripts/general_scripts.pory"
	setrespawn HEAL_LOCATION_SHORESLATE_CITY
# 1199 "data/scripts/general_scripts.pory"
	setflag FLAG_VISITED_SHORESLATE
# 1200 "data/scripts/general_scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 1201 "data/scripts/general_scripts.pory"
	additem ITEM_AIR_BALLOON
# 1202 "data/scripts/general_scripts.pory"
	setflag FLAG_GIVEN_CASTELIATOGIRL
# 1203 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_SHORESLATE_ROCKET
# 1204 "data/scripts/general_scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 1205 "data/scripts/general_scripts.pory"
	setvar VAR_DESERT_BYPASS, 1
# 1206 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC1F_ROCKET_1
# 1207 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC1F_ROCKET_2
# 1208 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_1
# 1209 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_2
# 1210 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_3
# 1211 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC_BASEROCKET_4
# 1212 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_1
# 1213 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_2
# 1214 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_3
# 1215 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_4
# 1216 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC2F_ROCKET_5
# 1217 "data/scripts/general_scripts.pory"
	defeattrainer TRAINER_DC3F_ROCKET_1
# 1218 "data/scripts/general_scripts.pory"
	additem ITEM_SUPER_POTION
# 1219 "data/scripts/general_scripts.pory"
	setflag FLAG_BASEMENT_SUPERPOTION
# 1220 "data/scripts/general_scripts.pory"
	additem ITEM_QUICK_BALL
# 1221 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVONCORP_BASEMENT_BALL
# 1222 "data/scripts/general_scripts.pory"
	setflag FLAG_DEVON_UNDER_ATTACK
# 1223 "data/scripts/general_scripts.pory"
	setflag FLAG_HELPED_DEVON_CORP
# 1224 "data/scripts/general_scripts.pory"
	clearflag FLAG_HIDE_SHORESLATE_BOAT
# 1225 "data/scripts/general_scripts.pory"
	additem ITEM_HM05
# 1226 "data/scripts/general_scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 1227 "data/scripts/general_scripts.pory"
	additem ITEM_ACRO_BIKE
	return


Pearlwood_Debug::
# 1232 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Pearlwood_Debug_2
# 1238 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Pearlwood_Debug_5
# 1243 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_2
# 1244 "data/scripts/general_scripts.pory"
	call SkipToShoreslate
# 1245 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_3, MSGBOX_YESNO
# 1246 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Pearlwood_Debug_8
# 1252 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_4
# 1253 "data/scripts/general_scripts.pory"
	removeobject 7
Pearlwood_Debug_7:
# 1255 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_2:
# 1233 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_0
# 1234 "data/scripts/general_scripts.pory"
	removeobject 7
# 1235 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_5:
# 1239 "data/scripts/general_scripts.pory"
	msgbox Pearlwood_Debug_Text_1
# 1240 "data/scripts/general_scripts.pory"
	release
	end

Pearlwood_Debug_8:
# 1247 "data/scripts/general_scripts.pory"
	setflag FLAG_OPENED_MAP_FROM_SIGN
# 1248 "data/scripts/general_scripts.pory"
	fadescreen FADE_TO_BLACK
# 1249 "data/scripts/general_scripts.pory"
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

EventScript_BufferFreeSpacePocket_Text_0:
# 28 "data/scripts/general_scripts.pory"
	.string "Free Space$"

EventScript_IceSmash_Text_0:
# 112 "data/scripts/general_scripts.pory"
	.string "This block of ice appears to be fragile.\nWould you like to use Rock Smash?$"

Debug_Script_1_Text_0:
# 495 "data/scripts/general_scripts.pory"
	.string "Gym 1 (lvl 14)$"

Debug_Script_1_Text_1:
# 496 "data/scripts/general_scripts.pory"
	.string "Gym 2 (lvl 22)$"

Debug_Script_1_Text_2:
# 497 "data/scripts/general_scripts.pory"
	.string "Side area (lvl 24)$"

Debug_Script_1_Text_3:
# 498 "data/scripts/general_scripts.pory"
	.string "Story 1 (lvl 29)$"

Debug_Script_1_Text_4:
# 499 "data/scripts/general_scripts.pory"
	.string "Gym 3 (lvl 34)$"

Debug_Script_1_Text_5:
# 500 "data/scripts/general_scripts.pory"
	.string "Gym 4 (lvl 38)$"

Debug_Script_1_Text_6:
# 501 "data/scripts/general_scripts.pory"
	.string "Post-Gym 4 (lvl 40)$"

Debug_Script_1_Text_7:
# 502 "data/scripts/general_scripts.pory"
	.string "Gym 5 (lvl 45)$"

Debug_Script_1_Text_8:
# 503 "data/scripts/general_scripts.pory"
	.string "Gym 6 (lvl 53)$"

Debug_Script_1_Text_9:
# 504 "data/scripts/general_scripts.pory"
	.string "Cancel$"

Debug_Script_1_Text_10:
# 508 "data/scripts/general_scripts.pory"
	.string "Team set to level 14.$"

Debug_Script_1_Text_11:
# 511 "data/scripts/general_scripts.pory"
	.string "Team set to level 22.$"

Debug_Script_1_Text_12:
# 514 "data/scripts/general_scripts.pory"
	.string "Team set to level 24.$"

Debug_Script_1_Text_13:
# 517 "data/scripts/general_scripts.pory"
	.string "Team set to level 29.$"

Debug_Script_1_Text_14:
# 520 "data/scripts/general_scripts.pory"
	.string "Team set to level 34.$"

Debug_Script_1_Text_15:
# 523 "data/scripts/general_scripts.pory"
	.string "Team set to level 38.$"

Debug_Script_1_Text_16:
# 526 "data/scripts/general_scripts.pory"
	.string "Team set to level 40.$"

Debug_Script_1_Text_17:
# 529 "data/scripts/general_scripts.pory"
	.string "Team set to level 45.$"

Debug_Script_1_Text_18:
# 532 "data/scripts/general_scripts.pory"
	.string "Team set to level 53.$"

Debug_Script_2_Text_0:
# 543 "data/scripts/general_scripts.pory"
	.string "Would you like to turn off\nthe permanent night?$"

Debug_Script_2_Text_1:
# 545 "data/scripts/general_scripts.pory"
	.string "Setting time back to normal.$"

Debug_Script_2_Text_2:
# 550 "data/scripts/general_scripts.pory"
	.string "Would you like to turn on\nthe permanent night?$"

Debug_Script_2_Text_3:
# 552 "data/scripts/general_scripts.pory"
	.string "Setting time to permanent night.$"

Debug_Script_81_Text_0:
# 594 "data/scripts/general_scripts.pory"
	.string "I'm sorry, but that's not a code\nI recognize.$"

ClearRoute1_Text_0:
# 751 "data/scripts/general_scripts.pory"
	.string "Obtained Exp. Share.\nDon't forget to turn it on!$"

ClearCoralgrove_Text_0:
# 846 "data/scripts/general_scripts.pory"
	.string "Was {RIVAL} defeated in\nCoralgrove Harbor?$"

ClearAldeleaf_Text_0:
# 975 "data/scripts/general_scripts.pory"
	.string "Aldeleaf City has been cleared, but\nthe events with Mimikyu and Sudowoodo\lare still intact.$"

ClearRoute28_Text_0:
# 979 "data/scripts/general_scripts.pory"
	.string "Has brother been defeated on the\nroute north of Aldeleaf City?$"

Pearlwood_Debug_Text_0:
# 1233 "data/scripts/general_scripts.pory"
	.string "Oops, I should no longer be here.\pBye!$"

Pearlwood_Debug_Text_1:
# 1239 "data/scripts/general_scripts.pory"
	.string "Come back after obtaining\nthe Pokédex.$"

Pearlwood_Debug_Text_2:
# 1243 "data/scripts/general_scripts.pory"
	.string "Hello, I am here to help you skip\na bunch of stuff you've already done.$"

Pearlwood_Debug_Text_3:
# 1245 "data/scripts/general_scripts.pory"
	.string "All items, trainers, and story events\nup to Shoreslate have been completed.\pYou will have to catch your own\nPokémon though.\pWould you like me to fly you\nsomewhere?$"

Pearlwood_Debug_Text_4:
# 1252 "data/scripts/general_scripts.pory"
	.string "Okay then.\nBye!$"

FollowerSpottedAnItemNearby_Text::
# 129 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1} seems to have spotted\n"
	.string "something interesting nearby!$"

GainedASpecialTicket::
# 156 "data/scripts/general_scripts.pory"
	.string "Due to your victory, you have\n"
	.string "earned a special victory ticket.\p"
	.string "Earn two more victory tickets, and\n"
	.string "you will get a special extra prize!$"

NowHaveTwoTickets::
# 162 "data/scripts/general_scripts.pory"
	.string "You now have two victory tickets.\p"
	.string "Earn one more ticket for a special\n"
	.string "extra prize!$"

TentGrandPrize::
# 167 "data/scripts/general_scripts.pory"
	.string "You just earned your third victory\n"
	.string "ticket.\p"
	.string "This means you are eligible for a\n"
	.string "special reward, a Fresh Start Mochi!$"

SeenAnyStrangeSeeds::
# 249 "data/scripts/general_scripts.pory"
	.string "I've been hearing some rumors about\n"
	.string "Pokémon hiding strange seeds in trees.$"

CareToTradeSeeds::
# 252 "data/scripts/general_scripts.pory"
	.string "Ah, those seeds seem to match\n"
	.string "the description!\p"
	.string "I have this special plant fertilizer\n"
	.string "that can greatly improve the growth\l"
	.string "rate of berry trees.\p"
	.string "If you'd like, I can trade you\n"
	.string "two batches of the fertilizer\l"
	.string "for a single strange seed.$"

ComeTradeWhenGetMoreSeeds::
# 261 "data/scripts/general_scripts.pory"
	.string "If you find any strange seeds, I'll\n"
	.string "gladly trade them for some fertilizer.$"

HereToTradeMoreSeeds::
# 264 "data/scripts/general_scripts.pory"
	.string "Here to trade some strange seeds?$"

TradeHowManySeeds::
# 266 "data/scripts/general_scripts.pory"
	.string "How many seeds would you\n"
	.string "like to trade?$"

TradeSeedsForFertilizer_Text_Single::
# 269 "data/scripts/general_scripts.pory"
	.string "One seed for two batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

TradeSeedsForFertilizer_Text_Multiple::
# 273 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1} seeds for {STR_VAR_2} batches\n"
	.string "of fertilizer.\p"
	.string "Is that trade okay?$"

BerryTree_Text_FertilizedTheBerry::
# 343 "data/scripts/general_scripts.pory"
	.string "{PLAYER} applied the Fertilizer to\n"
	.string "the {STR_VAR_1} plant.$"

StrangeSeedDroppedBerry::
# 346 "data/scripts/general_scripts.pory"
	.string "A Strange Seed dropped from the\n"
	.string "berry tree.$"

StrangeSeedDroppedTree::
# 349 "data/scripts/general_scripts.pory"
	.string "A Strange Seed dropped from the tree.$"

BerryTree_Text_PickedTheSeed::
# 351 "data/scripts/general_scripts.pory"
	.string "{PLAYER} picked up the Strange Seed.$"

BerryTree_Text_PutAwaySeed::
# 353 "data/scripts/general_scripts.pory"
	.string "{PLAYER} put away the Strange\n"
	.string "Seed in the Items pocket.$"

BerryTree_Text_PutAwayBerryAndSeed::
# 356 "data/scripts/general_scripts.pory"
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "in the bag's berries pocket\l"
	.string "and the Strange Seed in the\l"
	.string "Items pocket.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"

PlayerFoundZygardeCell::
# 375 "data/scripts/general_scripts.pory"
	.string "{PLAYER} found a Zygarde Cell!$"

gText_PutZygardeCellInCube::
# 377 "data/scripts/general_scripts.pory"
	.string "{PLAYER} stored the Zygarde Cell\n"
	.string "in the Zygarde Cube.$"

PlayerFoundZygardeCore::
# 392 "data/scripts/general_scripts.pory"
	.string "{PLAYER} found a Zygarde Core!$"

gText_PutZygardeCoreInCube::
# 394 "data/scripts/general_scripts.pory"
	.string "{PLAYER} stored the Zygarde Core\n"
	.string "in the Zygarde Cube.$"

AutomaticUpdate_Text1::
# 427 "data/scripts/general_scripts.pory"
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
# 445 "data/scripts/general_scripts.pory"
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
# 459 "data/scripts/general_scripts.pory"
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
# 471 "data/scripts/general_scripts.pory"
	.string "10. A new battle tent has opened in\n"
	.string "Rockliffe town.\p"
	.string "11. HM moves can no longer forgotten\n"
	.string "(unless visiting a move deleter)$"

SceneAltered::
# 477 "data/scripts/general_scripts.pory"
	.string "An earlier story scene of\n"
	.string "Team Rocket's assault on Devon\l"
	.string "Corp. has had its dialogue\l"
	.string "slightly altered, which affects\l"
	.string "the upcoming story.\p"
	.string "Would you like to view the\n"
	.string "altered scene?$"

LevelSetIntro::
# 604 "data/scripts/general_scripts.pory"
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
# 615 "data/scripts/general_scripts.pory"
	.string "Which level would you like to set\n"
	.string "your team?$"

ThisIsForTesting::
# 661 "data/scripts/general_scripts.pory"
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.$"

ResetAdamantTower_YesNo::
# 665 "data/scripts/general_scripts.pory"
	.string "Hi. I'm here to help testing\n"
	.string "the partner AI.\p"
	.string "Would you like to reset the tower?$"

ResetAdamantTower_ResetTeam::
# 670 "data/scripts/general_scripts.pory"
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
# 683 "data/scripts/general_scripts.pory"
	.string "Team has been set to lvl 38.$"

EndOfBeta::
# 697 "data/scripts/general_scripts.pory"
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"

EndOfBeta2::
# 717 "data/scripts/general_scripts.pory"
	.string "This is currently the end of beta.\p"
	.string "In the meanwhile, why don't you\n"
	.string "try exploring some other areas?$"
