MauvilleCity_GameCorner_MapScripts::
	.byte 0


AmberockTown_GameCorner_NPCReturnToSlots::
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


AmberockTown_GameCorner_Woman2::
	msgbox AmberockTown_GameCorner_CoinsAreNeededToPlay, MSGBOX_NPC
	return


AmberockTown_GameCorner_Gentleman::
	msgbox AmberockTown_GameCorner_RouletteOnlyLuck, MSGBOX_NPC
	return


AmberockTown_GameCorner_OldMan::
	msgbox AmberockTown_GameCorner_RouletteTablesDifferentRates, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Cook::
	msgbox AmberockTown_GameCorner_EasyToLoseTrackOfTime, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Man::
	msgbox AmberockTown_GameCorner_UpTo3CoinsCanBeUsed, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Maniac::
	msgbox AmberockTown_GameCorner_DifficultToStopOn7, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_Woman::
	msgbox AmberockTown_GameCorner_HeresSomeSlotsInfo, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return


AmberockTown_GameCorner_PokefanM::
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_PokefanM_2
AmberockTown_GameCorner_PokefanM_1:
	checkcoins VAR_TEMP_1
	compare VAR_TEMP_1, 1
	goto_if_ge AmberockTown_GameCorner_PokefanM_5
	goto_if_set FLAG_RECEIVED_20_COINS, AmberockTown_GameCorner_PokefanM_5
AmberockTown_GameCorner_PokefanM_4:
	lock
	faceplayer
	setflag FLAG_RECEIVED_20_COINS
	addcoins 20
	msgbox AmberockTown_GameCorner_LuckOnlyLastSoLongTakeCoins
	playse SE_SHOP
	msgbox AmberockTown_GameCorner_GoBigOrGoHome, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	return

AmberockTown_GameCorner_PokefanM_2:
	msgbox AmberockTown_GameCorner_NeedCoinCaseGoFindOne, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	goto AmberockTown_GameCorner_PokefanM_1

AmberockTown_GameCorner_PokefanM_5:
	msgbox AmberockTown_GameCorner_GoBigOrGoHome, MSGBOX_NPC
	goto AmberockTown_GameCorner_NPCReturnToSlots
	goto AmberockTown_GameCorner_PokefanM_4


AmberockTown_GameCorner_CoinsClerk::
	lock
	faceplayer
	msgbox AmberockTown_GameCorner_ThisIsMauvilleGameCorner
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_CoinsClerk_2
	message AmberockTown_GameCorner_WereYouLookingForCoins
	waitmessage
	showmoneybox 0, 0
	showcoinsbox 1, 6
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_0, 0
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_1, 1
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_2, 2
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_3, 3
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, NULL
	checkcoins VAR_TEMP_1
	switch VAR_RESULT
	case 0, AmberockTown_GameCorner_CoinsClerk_5
	case 1, AmberockTown_GameCorner_CoinsClerk_6
	case 2, AmberockTown_GameCorner_CoinsClerk_7
	goto AmberockTown_GameCorner_CancelBuyCoins
	return

AmberockTown_GameCorner_CoinsClerk_2:
	msgbox AmberockTown_GameCorner_NeedCoinCaseForCoins, MSGBOX_AUTOCLOSE
	end

AmberockTown_GameCorner_CoinsClerk_5:
	goto AmberockTown_GameCorner_Buy25Coins
	return

AmberockTown_GameCorner_CoinsClerk_6:
	goto AmberockTown_GameCorner_Buy250Coins
	return

AmberockTown_GameCorner_CoinsClerk_7:
	goto AmberockTown_GameCorner_Buy1000Coins
	return


AmberockTown_GameCorner_Buy25Coins::
	compare VAR_TEMP_1, MAX_COINS + 1 - 25
	goto_if_ge AmberockTown_GameCorner_Buy25Coins_2
AmberockTown_GameCorner_Buy25Coins_1:
	checkmoney 1000
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_Buy25Coins_5
AmberockTown_GameCorner_Buy25Coins_4:
	addcoins 25
	removemoney 1000
	goto AmberockTown_GameCorner_BuyCoinsEnd
	return

AmberockTown_GameCorner_Buy25Coins_2:
	goto AmberockTown_GameCorner_NoRoomForCoins
	goto AmberockTown_GameCorner_Buy25Coins_1

AmberockTown_GameCorner_Buy25Coins_5:
	goto AmberockTown_GameCorner_NotEnoughMoney
	goto AmberockTown_GameCorner_Buy25Coins_4


AmberockTown_GameCorner_Buy250Coins::
	compare VAR_TEMP_1, MAX_COINS + 1 - 250
	goto_if_ge AmberockTown_GameCorner_Buy250Coins_2
AmberockTown_GameCorner_Buy250Coins_1:
	checkmoney 10000
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_Buy250Coins_5
AmberockTown_GameCorner_Buy250Coins_4:
	addcoins 250
	removemoney 10000
	goto AmberockTown_GameCorner_BuyCoinsEnd
	return

AmberockTown_GameCorner_Buy250Coins_2:
	goto AmberockTown_GameCorner_NoRoomForCoins
	goto AmberockTown_GameCorner_Buy250Coins_1

AmberockTown_GameCorner_Buy250Coins_5:
	goto AmberockTown_GameCorner_NotEnoughMoney
	goto AmberockTown_GameCorner_Buy250Coins_4


AmberockTown_GameCorner_Buy1000Coins::
	compare VAR_TEMP_1, MAX_COINS + 1 - 1000
	goto_if_ge AmberockTown_GameCorner_Buy1000Coins_2
AmberockTown_GameCorner_Buy1000Coins_1:
	checkmoney 40000
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_Buy1000Coins_5
AmberockTown_GameCorner_Buy1000Coins_4:
	addcoins 1000
	removemoney 40000
	goto AmberockTown_GameCorner_BuyCoinsEnd
	return

AmberockTown_GameCorner_Buy1000Coins_2:
	goto AmberockTown_GameCorner_NoRoomForCoins
	goto AmberockTown_GameCorner_Buy1000Coins_1

AmberockTown_GameCorner_Buy1000Coins_5:
	goto AmberockTown_GameCorner_NotEnoughMoney
	goto AmberockTown_GameCorner_Buy1000Coins_4


AmberockTown_GameCorner_BuyCoinsEnd::
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox AmberockTown_GameCorner_ThankYouHereAreYourCoins
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end


AmberockTown_GameCorner_NotEnoughMoney::
	msgbox AmberockTown_GameCorner_DontHaveEnoughMoney
	goto AmberockTown_GameCorner_HideMoneyBox
	return


AmberockTown_GameCorner_CancelBuyCoins::
	msgbox AmberockTown_GameCorner_DontNeedCoinsThen
	goto AmberockTown_GameCorner_HideMoneyBox
	return


AmberockTown_GameCorner_NoRoomForCoins::
	msgbox AmberockTown_GameCorner_CoinCaseIsFull
	goto AmberockTown_GameCorner_HideMoneyBox
	return


AmberockTown_GameCorner_HideMoneyBox::
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end


AmberockTown_GameCorner_SlotMachine::
	lock
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq AmberockTown_GameCorner_SlotMachine_2
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

AmberockTown_GameCorner_SlotMachine_2:
	msgbox AmberockTown_GameCorner_CantPlayWithNoCoinCase, MSGBOX_AUTOCLOSE
	end


Amberock_GameCorner_PrizeMegaStones::
	lock
	msgbox AmberockTown_GameCorner_ExchangeCoinsForPrizes
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_GameCorner_PrizeMegaStones_2
Amberock_GameCorner_PrizeMegaStones_1:
	release
	return

Amberock_GameCorner_PrizeMegaStones_2:
	message AmberockTown_GameCorner_WhichPrize
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto Amberock_GameCorner_ChooseMegaStone
	goto Amberock_GameCorner_PrizeMegaStones_1


Amberock_GameCorner_ChooseMegaStone::
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_0, 0
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_1, 1
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_2, 2
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_3, 3
	dynmultipush Amberock_GameCorner_ChooseMegaStone_Text_4, 4
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_3, 5
	dynmultistack 23, 0, FALSE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Amberock_GameCorner_ChooseMegaStone_3
	case 1, Amberock_GameCorner_ChooseMegaStone_4
	case 2, Amberock_GameCorner_ChooseMegaStone_5
	case 3, Amberock_GameCorner_ChooseMegaStone_6
	case 4, Amberock_GameCorner_ChooseMegaStone_7
	case 5, Amberock_GameCorner_ChooseMegaStone_8
	case MULTI_B_PRESSED, Amberock_GameCorner_ChooseMegaStone_9
Amberock_GameCorner_ChooseMegaStone_1:
	goto Amberock_GameCorner_ConfirmMegaStone
	return

Amberock_GameCorner_ChooseMegaStone_3:
	setvar VAR_0x8004, ITEM_ABSOLITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_4:
	setvar VAR_0x8004, ITEM_ALAKAZITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_5:
	setvar VAR_0x8004, ITEM_AUDINITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_6:
	setvar VAR_0x8004, ITEM_LOPUNNITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_7:
	setvar VAR_0x8004, ITEM_MANECTITE
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_8:
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChooseMegaStone_1

Amberock_GameCorner_ChooseMegaStone_9:
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChooseMegaStone_1


Amberock_GameCorner_NotEnoughCoins::
	msgbox Amberock_GameCorner_NotEnoughCoins_Text_0
	hidecoinsbox 0, 0
	release
	end


Amberock_GameCorner_ConfirmMegaStone::
	bufferitemname STR_VAR_1, VAR_0x8004
	msgbox AmberockTown_GameCorner_SoYourChoiceIsTheTMX, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmMegaStone_2
Amberock_GameCorner_ConfirmMegaStone_1:
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 2000
	goto_if_lt Amberock_GameCorner_ConfirmMegaStone_5
Amberock_GameCorner_ConfirmMegaStone_4:
	checkitemspace VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmMegaStone_8
Amberock_GameCorner_ConfirmMegaStone_7:
	removecoins 2000
	additem VAR_0x8004
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox AmberockTown_GameCorner_HereYouGo
	goto Amberock_GameCorner_ChooseMegaStone
	return

Amberock_GameCorner_ConfirmMegaStone_2:
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ConfirmMegaStone_1

Amberock_GameCorner_ConfirmMegaStone_5:
	goto Amberock_GameCorner_NotEnoughCoins
	goto Amberock_GameCorner_ConfirmMegaStone_4

Amberock_GameCorner_ConfirmMegaStone_8:
	call Common_EventScript_BagIsFull
	message AmberockTown_GameCorner_WhichPrize
	waitmessage
	goto Amberock_GameCorner_ChooseMegaStone
	goto Amberock_GameCorner_ConfirmMegaStone_7


Amberock_GameCorner_PrizePokemon::
	lock
	msgbox AmberockTown_GameCorner_ExchangeCoinsForPrizes
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_GameCorner_PrizePokemon_2
Amberock_GameCorner_PrizePokemon_1:
	release
	return

Amberock_GameCorner_PrizePokemon_2:
	message AmberockTown_GameCorner_WhichPrize
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto Amberock_GameCorner_ChoosePokemon
	goto Amberock_GameCorner_PrizePokemon_1


Amberock_GameCorner_ChoosePokemon::
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_0, 0
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_1, 1
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_2, 2
	dynmultipush Amberock_GameCorner_ChoosePokemon_Text_3, 3
	dynmultipush AmberockTown_GameCorner_CoinsClerk_Text_3, 4
	dynmultistack 23, 0, FALSE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Amberock_GameCorner_ChoosePokemon_3
	case 1, Amberock_GameCorner_ChoosePokemon_4
	case 2, Amberock_GameCorner_ChoosePokemon_5
	case 3, Amberock_GameCorner_ChoosePokemon_6
	case 4, Amberock_GameCorner_ChoosePokemon_7
	case MULTI_B_PRESSED, Amberock_GameCorner_ChoosePokemon_8
Amberock_GameCorner_ChoosePokemon_1:
	goto Amberock_GameCorner_ConfirmPokemon
	return

Amberock_GameCorner_ChoosePokemon_3:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ABRA
	setvar VAR_TEMP_3, 700
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_4:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_STUFFUL
	setvar VAR_TEMP_3, 1400
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_5:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HONEDGE
	setvar VAR_TEMP_3, 2100
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_6:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BAGON
	setvar VAR_TEMP_3, 2800
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_7:
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChoosePokemon_1

Amberock_GameCorner_ChoosePokemon_8:
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ChoosePokemon_1


Amberock_GameCorner_ConfirmPokemon::
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
	msgbox AmberockTown_GameCorner_SoYourChoiceIsTheTMX, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_2
Amberock_GameCorner_ConfirmPokemon_1:
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, VAR_TEMP_3
	goto_if_lt Amberock_GameCorner_ConfirmPokemon_5
Amberock_GameCorner_ConfirmPokemon_4:
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 10
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_7
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_8
	msgbox gText_NoMoreRoomForPokemon
	goto Amberock_GameCorner_EndScript
	return

Amberock_GameCorner_ConfirmPokemon_2:
	goto AmberockTown_GameCorner_CancelRewardSelect
	goto Amberock_GameCorner_ConfirmPokemon_1

Amberock_GameCorner_ConfirmPokemon_5:
	goto Amberock_GameCorner_NotEnoughCoins
	goto Amberock_GameCorner_ConfirmPokemon_4

Amberock_GameCorner_ConfirmPokemon_7:
	removecoins VAR_TEMP_3
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox AmberockTown_GameCorner_HereYouGo
	call Amberock_GameCorner_ReceivedMonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_13
Amberock_GameCorner_ConfirmPokemon_12:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Amberock_GameCorner_EndScript
	return

Amberock_GameCorner_ConfirmPokemon_8:
	removecoins VAR_TEMP_3
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox AmberockTown_GameCorner_HereYouGo
	call Amberock_GameCorner_ReceivedMonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_GameCorner_ConfirmPokemon_16
Amberock_GameCorner_ConfirmPokemon_15:
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	goto Amberock_GameCorner_EndScript
	return

Amberock_GameCorner_ConfirmPokemon_13:
	goto Amberock_GameCorner_EndScript
	goto Amberock_GameCorner_ConfirmPokemon_12

Amberock_GameCorner_ConfirmPokemon_16:
	call Common_EventScript_TransferredToPC
	goto Amberock_GameCorner_EndScript
	goto Amberock_GameCorner_ConfirmPokemon_15


Amberock_GameCorner_EndScript::
	hidecoinsbox 0, 0
	release
	end


Amberock_GameCorner_ReceivedMonFanfare::
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
	playfanfare MUS_OBTAIN_ITEM
	message Amberock_GameCorner_ReceivedMonFanfare_Text_0
	waitmessage
	waitfanfare
	return


AmberockTown_GameCorner_CancelRewardSelect::
	msgbox AmberockTown_GameCorner_OhIsThatSo
	hidecoinsbox 0, 0
	release
	end


AmberockTown_GameCorner_CoinsClerk_Text_0:
	.string "    25 coins    ¥1,000$"

AmberockTown_GameCorner_CoinsClerk_Text_1:
	.string "  250 coins  ¥10,000$"

AmberockTown_GameCorner_CoinsClerk_Text_2:
	.string "1000 coins  ¥40,000$"

AmberockTown_GameCorner_CoinsClerk_Text_3:
	.string "Exit$"

Amberock_GameCorner_ChooseMegaStone_Text_0:
	.string "Absolite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_1:
	.string "Alakazite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_2:
	.string "Audinite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_3:
	.string "Lopunnite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_ChooseMegaStone_Text_4:
	.string "Manectite{CLEAR_TO 0x48}2,000 coins$"

Amberock_GameCorner_NotEnoughCoins_Text_0:
	.string "I'm sorry, but you don't have\nenough coins.$"

Amberock_GameCorner_ChoosePokemon_Text_0:
	.string "Abra{CLEAR_TO 0x48}700 coins$"

Amberock_GameCorner_ChoosePokemon_Text_1:
	.string "Stufful{CLEAR_TO 0x48}1,400 coins$"

Amberock_GameCorner_ChoosePokemon_Text_2:
	.string "Honedge{CLEAR_TO 0x48}2,100 coins$"

Amberock_GameCorner_ChoosePokemon_Text_3:
	.string "Bagon{CLEAR_TO 0x48}2,800 coins$"

Amberock_GameCorner_ReceivedMonFanfare_Text_0:
	.string "{PLAYER} obtained the {STR_VAR_2}.$"

AmberockTown_GameCorner_CoinsAreNeededToPlay::
	.string "Coins are needed to play here\n"
	.string "in the Game Corner.$"

AmberockTown_GameCorner_RouletteOnlyLuck::
	.string "This roulette thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

AmberockTown_GameCorner_RouletteTablesDifferentRates::
	.string "The roulette tables have different\n"
	.string "rates.\p"
	.string "Check your coins if you're going to\n"
	.string "pick a table.$"

AmberockTown_GameCorner_EasyToLoseTrackOfTime::
	.string "It's easy to lose track of time in here. \n"
	.string "I should get back to work.$"

AmberockTown_GameCorner_UpTo3CoinsCanBeUsed::
	.string "Up to three coins can be used to play\n"
	.string "the slots.$"

AmberockTown_GameCorner_DifficultToStopOn7::
	.string "It's very difficult to make it stop\n"
	.string "right on “7.”\p"
	.string "If it stops on “7” during the reel time\n"
	.string "bonus game, you'll receive extra coins.$"

AmberockTown_GameCorner_HeresSomeSlotsInfo::
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
	.string "Hey, kid, if you want to play here,\n"
	.string "you need a Coin Case.\p"
	.string "Maybe someone in town might\n"
	.string "have one?$"

AmberockTown_GameCorner_LuckOnlyLastSoLongTakeCoins::
	.string "My luck can only last so long.\n"
	.string "This is too much for me.\l"
	.string "Here, take some coins!$"

AmberockTown_GameCorner_GoBigOrGoHome::
	.string "Go big or go home!$"

AmberockTown_GameCorner_ThisIsMauvilleGameCorner::
	.string "This is Amberock Game Corner.$"

AmberockTown_GameCorner_NeedCoinCaseForCoins::
	.string "Okay, you wanted some coins for\n"
	.string "the games?\p"
	.string "But you don't have a Coin Case for\n"
	.string "stowing the coins.$"

AmberockTown_GameCorner_WereYouLookingForCoins::
	.string "Were you looking for coins?\p"
	.string "It's ¥1000 for 25 coins.\n"
	.string "Would you like some?$"

AmberockTown_GameCorner_ThankYouHereAreYourCoins::
	.string "Thank you very much!\n"
	.string "Here are your coins!$"

AmberockTown_GameCorner_DontHaveEnoughMoney::
	.string "Um… You don't appear to have\n"
	.string "enough money…$"

AmberockTown_GameCorner_CoinCaseIsFull::
	.string "Oh?\n"
	.string "Your Coin Case is full.$"

AmberockTown_GameCorner_DontNeedCoinsThen::
	.string "Oh… You don't need coins, then?\n"
	.string "Good luck on your adventure!$"

AmberockTown_GameCorner_ExchangeCoinsForPrizes::
	.string "Welcome.\p"
	.string "You can exchange your coins for\n"
	.string "prizes here.$"

AmberockTown_GameCorner_WhichPrize::
	.string "Which prize would you like?$"

AmberockTown_GameCorner_SoYourChoiceIsTheTMX::
	.string "So your choice is the {STR_VAR_1}?$"

AmberockTown_GameCorner_OhIsThatSo::
	.string "Oh, is that so? \n"
	.string "You need to save some coins before\l"
	.string "coming back here.$"

AmberockTown_GameCorner_HereYouGo::
	.string "Here you go!$"

AmberockTown_GameCorner_CantPlayWithNoCoinCase::
	.string "You can't play if you don't have\n"
	.string "a Coin Case.$"
