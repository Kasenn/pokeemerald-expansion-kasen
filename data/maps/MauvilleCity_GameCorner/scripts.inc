MauvilleCity_GameCorner_MapScripts::
	.byte 0


AmberockTown_GameCorner_NPCReturnToSlots::
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


AmberockTown_GameCorner_Woman2::
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_CoinsAreNeededToPlay, MSGBOX_NPC
	return


AmberockTown_GameCorner_Gentleman::
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_RouletteOnlyLuck, MSGBOX_NPC
	return


AmberockTown_GameCorner_OldMan::
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_RouletteTablesDifferentRates, MSGBOX_NPC
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Cook::
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_EasyToLoseTrackOfTime, MSGBOX_NPC
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Man::
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_UpTo3CoinsCanBeUsed, MSGBOX_NPC
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Maniac::
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_DifficultToStopOn7, MSGBOX_NPC
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Woman::
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_HeresSomeSlotsInfo, MSGBOX_NPC
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_PokefanM::
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_PokefanM_2
AmberockTown_GameCorner_PokefanM_1:
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_ge AmberockTown_GameCorner_PokefanM_5
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, AmberockTown_GameCorner_PokefanM_5
AmberockTown_GameCorner_PokefanM_4:
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_LuckOnlyLastSoLongTakeCoins
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_GoBigOrGoHome, MSGBOX_NPC
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return

AmberockTown_GameCorner_PokefanM_2:
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_NeedCoinCaseGoFindOne, MSGBOX_NPC
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	goto AmberockTown_GameCorner_PokefanM_1

AmberockTown_GameCorner_PokefanM_5:
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_GoBigOrGoHome, MSGBOX_NPC
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NPCReturnToSlots
	goto AmberockTown_GameCorner_PokefanM_4


AmberockTown_GameCorner_CoinsClerk::
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_ThisIsMauvilleGameCorner
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_CoinsClerk_2
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message AmberockTown_GameCorner_WereYouLookingForCoins
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_0, 0
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_1, 1
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_2, 2
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_3, 3
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, NULL
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, AmberockTown_GameCorner_CoinsClerk_5
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, AmberockTown_GameCorner_CoinsClerk_6
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, AmberockTown_GameCorner_CoinsClerk_7
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_CancelBuyCoins
	return

AmberockTown_GameCorner_CoinsClerk_2:
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_NeedCoinCaseForCoins, MSGBOX_AUTOCLOSE
	end

AmberockTown_GameCorner_CoinsClerk_5:
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_Buy25Coins
	return

AmberockTown_GameCorner_CoinsClerk_6:
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_Buy250Coins
	return

AmberockTown_GameCorner_CoinsClerk_7:
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_Buy1000Coins
	return


AmberockTown_GameCorner_Buy25Coins::
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, MAX_COINS + 1 - 25
	goto_if_ge AmberockTown_GameCorner_Buy25Coins_2
AmberockTown_GameCorner_Buy25Coins_1:
	checkmoney 1000
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_Buy25Coins_5
AmberockTown_GameCorner_Buy25Coins_4:
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 25
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney 1000
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_BuyCoinsEnd
	return

AmberockTown_GameCorner_Buy25Coins_2:
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NoRoomForCoins
	goto AmberockTown_GameCorner_Buy25Coins_1

AmberockTown_GameCorner_Buy25Coins_5:
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NotEnoughMoney
	goto AmberockTown_GameCorner_Buy25Coins_4


AmberockTown_GameCorner_Buy250Coins::
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, MAX_COINS + 1 - 250
	goto_if_ge AmberockTown_GameCorner_Buy250Coins_2
AmberockTown_GameCorner_Buy250Coins_1:
	checkmoney 10000
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_Buy250Coins_5
AmberockTown_GameCorner_Buy250Coins_4:
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 250
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney 10000
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_BuyCoinsEnd
	return

AmberockTown_GameCorner_Buy250Coins_2:
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NoRoomForCoins
	goto AmberockTown_GameCorner_Buy250Coins_1

AmberockTown_GameCorner_Buy250Coins_5:
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NotEnoughMoney
	goto AmberockTown_GameCorner_Buy250Coins_4


AmberockTown_GameCorner_Buy1000Coins::
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, MAX_COINS + 1 - 1000
	goto_if_ge AmberockTown_GameCorner_Buy1000Coins_2
AmberockTown_GameCorner_Buy1000Coins_1:
	checkmoney 40000
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_Buy1000Coins_5
AmberockTown_GameCorner_Buy1000Coins_4:
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 1000
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney 40000
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_BuyCoinsEnd
	return

AmberockTown_GameCorner_Buy1000Coins_2:
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NoRoomForCoins
	goto AmberockTown_GameCorner_Buy1000Coins_1

AmberockTown_GameCorner_Buy1000Coins_5:
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_NotEnoughMoney
	goto AmberockTown_GameCorner_Buy1000Coins_4


AmberockTown_GameCorner_BuyCoinsEnd::
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_ThankYouHereAreYourCoins
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


AmberockTown_GameCorner_NotEnoughMoney::
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_DontHaveEnoughMoney
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_HideMoneyBox
	return


AmberockTown_GameCorner_CancelBuyCoins::
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_DontNeedCoinsThen
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_HideMoneyBox
	return


AmberockTown_GameCorner_NoRoomForCoins::
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_CoinCaseIsFull
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_HideMoneyBox
	return


AmberockTown_GameCorner_HideMoneyBox::
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


AmberockTown_GameCorner_SlotMachine::
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_SlotMachine_2
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

AmberockTown_GameCorner_SlotMachine_2:
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_CantPlayWithNoCoinCase, MSGBOX_AUTOCLOSE
	end


Amberock_GameCorner_PrizeMegaStones::
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_ExchangeCoinsForPrizes
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_GameCorner_PrizeMegaStones_2
Amberock_GameCorner_PrizeMegaStones_1:
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	return

Amberock_GameCorner_PrizeMegaStones_2:
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message AmberockTown_GameCorner_WhichPrize
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_ChooseMegaStone
	goto Amberock_GameCorner_PrizeMegaStones_1


Amberock_GameCorner_ChooseMegaStone::
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_0, 0
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_1, 1
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_2, 2
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_3, 3
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_4, 4
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_3, 5
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 23, 0, FALSE, 3, FALSE, 0, NULL
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, Amberock_GameCorner_ChooseMegaStone_3
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, Amberock_GameCorner_ChooseMegaStone_4
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, Amberock_GameCorner_ChooseMegaStone_5
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, Amberock_GameCorner_ChooseMegaStone_6
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, Amberock_GameCorner_ChooseMegaStone_7
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, Amberock_GameCorner_ChooseMegaStone_8
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case MULTI_B_PRESSED, Amberock_GameCorner_ChooseMegaStone_9
Amberock_GameCorner_ChooseMegaStone_1:
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_ConfirmMegaStone
	return

Amberock_GameCorner_ChooseMegaStone_3:
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_ABSOLITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_4:
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_ALAKAZITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_5:
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_AUDINITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_6:
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_LOPUNNITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_7:
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_MANECTITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_8:
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_9:
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChooseMegaStone_1


Amberock_GameCorner_NotEnoughCoins::
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Amberock_GameCorner_NotEnoughCoins_Text_0
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


Amberock_GameCorner_ConfirmMegaStone::
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8004
	msgbox AmberockTown_GameCorner_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmMegaStone_2
Amberock_GameCorner_ConfirmMegaStone_1:
	checkcoins VAR_TEMP_2
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, 2000
	goto_if_lt Amberock_GameCorner_ConfirmMegaStone_5
Amberock_GameCorner_ConfirmMegaStone_4:
	checkitemspace VAR_0x8004
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmMegaStone_8
Amberock_GameCorner_ConfirmMegaStone_7:
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 2000
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_0x8004
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_HereYouGo
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_ChooseMegaStone
	return

Amberock_GameCorner_ConfirmMegaStone_2:
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ConfirmMegaStone_1

Amberock_GameCorner_ConfirmMegaStone_5:
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_NotEnoughCoins
	goto Amberock_GameCorner_ConfirmMegaStone_4

Amberock_GameCorner_ConfirmMegaStone_8:
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message AmberockTown_GameCorner_WhichPrize
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_ChooseMegaStone
	goto Amberock_GameCorner_ConfirmMegaStone_7


Amberock_GameCorner_PrizePokemon::
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_ExchangeCoinsForPrizes
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_GameCorner_PrizePokemon_2
Amberock_GameCorner_PrizePokemon_1:
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	return

Amberock_GameCorner_PrizePokemon_2:
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message AmberockTown_GameCorner_WhichPrize
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_ChoosePokemon
	goto Amberock_GameCorner_PrizePokemon_1


Amberock_GameCorner_ChoosePokemon::
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_0, 0
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_1, 1
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_2, 2
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_3, 3
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_3, 4
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 23, 0, FALSE, 3, FALSE, 0, NULL
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, Amberock_GameCorner_ChoosePokemon_3
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, Amberock_GameCorner_ChoosePokemon_4
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, Amberock_GameCorner_ChoosePokemon_5
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, Amberock_GameCorner_ChoosePokemon_6
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, Amberock_GameCorner_ChoosePokemon_7
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case MULTI_B_PRESSED, Amberock_GameCorner_ChoosePokemon_8
Amberock_GameCorner_ChoosePokemon_1:
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_ConfirmPokemon
	return

Amberock_GameCorner_ChoosePokemon_3:
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ABRA
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 700
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_4:
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_STUFFUL
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 1400
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_5:
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HONEDGE
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 2100
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_6:
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BAGON
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 2800
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_7:
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_8:
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChoosePokemon_1


Amberock_GameCorner_ConfirmPokemon::
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
	msgbox AmberockTown_GameCorner_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_2
Amberock_GameCorner_ConfirmPokemon_1:
	checkcoins VAR_TEMP_2
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_lt Amberock_GameCorner_ConfirmPokemon_5
Amberock_GameCorner_ConfirmPokemon_4:
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 10
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_7
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_8
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NoMoreRoomForPokemon
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_EndScript
	return

Amberock_GameCorner_ConfirmPokemon_2:
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ConfirmPokemon_1

Amberock_GameCorner_ConfirmPokemon_5:
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_NotEnoughCoins
	goto Amberock_GameCorner_ConfirmPokemon_4

Amberock_GameCorner_ConfirmPokemon_7:
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins VAR_TEMP_3
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_HereYouGo
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Amberock_GameCorner_ReceivedMonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_13
Amberock_GameCorner_ConfirmPokemon_12:
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_EndScript
	return

Amberock_GameCorner_ConfirmPokemon_8:
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins VAR_TEMP_3
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_HereYouGo
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Amberock_GameCorner_ReceivedMonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_16
Amberock_GameCorner_ConfirmPokemon_15:
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_TransferredToPC
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_EndScript
	return

Amberock_GameCorner_ConfirmPokemon_13:
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_EndScript
	goto Amberock_GameCorner_ConfirmPokemon_12

Amberock_GameCorner_ConfirmPokemon_16:
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_TransferredToPC
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Amberock_GameCorner_EndScript
	goto Amberock_GameCorner_ConfirmPokemon_15


Amberock_GameCorner_EndScript::
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


Amberock_GameCorner_ReceivedMonFanfare::
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message Amberock_GameCorner_ReceivedMonFanfare_Text_0
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitfanfare
	return


AmberockTown_GameCorner_CancelRewardSelect::
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox AmberockTown_GameCorner_OhIsThatSo
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


AmberockTown_GameCorner_CoinsClerk_Text_0:
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "    25 coins    ¥1,000$"

AmberockTown_GameCorner_CoinsClerk_Text_1:
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "  250 coins  ¥10,000$"

AmberockTown_GameCorner_CoinsClerk_Text_2:
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "1000 coins  ¥40,000$"

AmberockTown_GameCorner_CoinsClerk_Text_3:
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Exit$"

Amberock_GameCorner_ChooseMegaStone_Text_0:
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absolite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_1:
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Alakazite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_2:
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Audinite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_3:
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lopunnite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_4:
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Manectite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_NotEnoughCoins_Text_0:
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have\nenough coins.$"

Amberock_GameCorner_ChoosePokemon_Text_0:
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Abra{CLEAR_TO 0x48}700 coins$"

Amberock_GameCorner_ChoosePokemon_Text_1:
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Stufful{CLEAR_TO 0x48}1,400 coins$"

Amberock_GameCorner_ChoosePokemon_Text_2:
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Honedge{CLEAR_TO 0x48}2,100 coins$"

Amberock_GameCorner_ChoosePokemon_Text_3:
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bagon{CLEAR_TO 0x48}2,800 coins$"

Amberock_GameCorner_ReceivedMonFanfare_Text_0:
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{PLAYER} obtained the {STR_VAR_2}.$"

AmberockTown_GameCorner_CoinsAreNeededToPlay::
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Coins are needed to play here\n"
	.string "in the Game Corner.$"

AmberockTown_GameCorner_RouletteOnlyLuck::
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This roulette thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

AmberockTown_GameCorner_RouletteTablesDifferentRates::
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The roulette tables have different\n"
	.string "rates.\p"
	.string "Check your coins if you're going to\n"
	.string "pick a table.$"

AmberockTown_GameCorner_EasyToLoseTrackOfTime::
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
	.string "I should get back to work.$"

AmberockTown_GameCorner_UpTo3CoinsCanBeUsed::
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three coins can be used to play\n"
	.string "the slots.$"

AmberockTown_GameCorner_DifficultToStopOn7::
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
	.string "right on “7.”\p"
	.string "If it stops on “7” during the reel time\n"
	.string "bonus game, you'll receive extra coins.$"

AmberockTown_GameCorner_HeresSomeSlotsInfo::
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
	.string "about the slots.\p"
	.string "The more lightning bolts you stock,\n"
	.string "the more reel time chances you get.\p"
	.string "In a game with the maximum five\n"
	.string "reel time chances…\p"
	.string "It is possible to receive four regular\n"
	.string "bonuses, then a big bonus.\p"
	.string "That would total 660 coins, but it's\n"
	.string "very difficult to get.$"

AmberockTown_GameCorner_NeedCoinCaseGoFindOne::
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
	.string "you need a Coin Case.\p"
	.string "Maybe someone in town might\n"
	.string "have one?$"

AmberockTown_GameCorner_LuckOnlyLastSoLongTakeCoins::
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
	.string "This is too much for me.\l"
	.string "Here, take some coins!$"

AmberockTown_GameCorner_GoBigOrGoHome::
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Go big or go home!$"

AmberockTown_GameCorner_ThisIsMauvilleGameCorner::
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is Amberock Game Corner.$"

AmberockTown_GameCorner_NeedCoinCaseForCoins::
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some coins for\n"
	.string "the games?\p"
	.string "But you don't have a Coin Case for\n"
	.string "stowing the coins.$"

AmberockTown_GameCorner_WereYouLookingForCoins::
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for coins?\p"
	.string "It's ¥1000 for 25 coins.\n"
	.string "Would you like some?$"

AmberockTown_GameCorner_ThankYouHereAreYourCoins::
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
	.string "Here are your coins!$"

AmberockTown_GameCorner_DontHaveEnoughMoney::
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
	.string "enough money…$"

AmberockTown_GameCorner_CoinCaseIsFull::
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
	.string "Your Coin Case is full.$"

AmberockTown_GameCorner_DontNeedCoinsThen::
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need coins, then?\n"
	.string "Good luck on your adventure!$"

AmberockTown_GameCorner_ExchangeCoinsForPrizes::
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
	.string "You can exchange your coins for\n"
	.string "prizes here.$"

AmberockTown_GameCorner_WhichPrize::
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"

AmberockTown_GameCorner_SoYourChoiceIsTheTMX::
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is the {STR_VAR_1}?$"

AmberockTown_GameCorner_OhIsThatSo::
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
	.string "You need to save some coins before\l"
	.string "coming back here.$"

AmberockTown_GameCorner_HereYouGo::
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

AmberockTown_GameCorner_CantPlayWithNoCoinCase::
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
	.string "a Coin Case.$"
