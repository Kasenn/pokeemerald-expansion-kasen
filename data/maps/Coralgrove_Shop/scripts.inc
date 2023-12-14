Coralgrove_Shop_MapScripts::
	.byte 0


CGShop_Lass::
	msgbox CGShop_Lass_Text_0, MSGBOX_NPC
	end


CGShop_Fisher::
	msgbox CGShop_Fisher_Text_0, MSGBOX_NPC
	end


Coralgrove_BPShop_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK2
	call Coralgrove_BPShop_ClerkWelcome
	goto Coralgrove_BPShop_ChooseHoldItem
	end


Coralgrove_BPShop_ClerkWelcome::
	msgbox Coralgrove_BPShop_Text_BuySomething, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return


Coralgrove_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR2
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, Coralgrove_BPShop_ChooseHoldItem_2
	case 1, Coralgrove_BPShop_ChooseHoldItem_3
	case 2, Coralgrove_BPShop_ChooseHoldItem_4
	case 3, Coralgrove_BPShop_ChooseHoldItem_5
	case 4, Coralgrove_BPShop_ChooseHoldItem_6
	case 5, Coralgrove_BPShop_ChooseHoldItem_7
	case 6, Coralgrove_BPShop_ChooseHoldItem_8
	case 7, Coralgrove_BPShop_ChooseHoldItem_9
	case 8, Coralgrove_BPShop_ChooseHoldItem_10
	case 9, Coralgrove_BPShop_ChooseHoldItem_11
	case MULTI_B_PRESSED, Coralgrove_BPShop_ChooseHoldItem_12
	return

Coralgrove_BPShop_ChooseHoldItem_2:
	call Coralgrove_BPShop_MiracleSeed
	return

Coralgrove_BPShop_ChooseHoldItem_3:
	call Coralgrove_BPShop_Charcoal
	return

Coralgrove_BPShop_ChooseHoldItem_4:
	call Coralgrove_BPShop_MysticWater
	return

Coralgrove_BPShop_ChooseHoldItem_5:
	call Coralgrove_BPShop_SilkScarf
	return

Coralgrove_BPShop_ChooseHoldItem_6:
	call Coralgrove_BPShop_SharpBeak
	return

Coralgrove_BPShop_ChooseHoldItem_7:
	call Coralgrove_BPShop_BlackBelt
	return

Coralgrove_BPShop_ChooseHoldItem_8:
	call Coralgrove_BPShop_HardStone
	return

Coralgrove_BPShop_ChooseHoldItem_9:
	call Coralgrove_BPShop_Magnet
	return

Coralgrove_BPShop_ChooseHoldItem_10:
	call Coralgrove_BPShop_PoisonBarb
	return

Coralgrove_BPShop_ChooseHoldItem_11:
	call Coralgrove_BPShop_ClerkGoodbye
	return

Coralgrove_BPShop_ChooseHoldItem_12:
	call Coralgrove_BPShop_ClerkGoodbye
	return


Coralgrove_BPShop_MiracleSeed::
	msgbox Coralgrove_BPShop_TextMiracleSeed, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MIRACLE_SEED
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_Charcoal::
	msgbox Coralgrove_BPShop_TextCharcoal, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_CHARCOAL
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_MysticWater::
	msgbox Coralgrove_BPShop_TextMysticWater, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MYSTIC_WATER
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_SilkScarf::
	msgbox Coralgrove_BPShop_TextSilkScarf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_SILK_SCARF
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_SharpBeak::
	msgbox Coralgrove_BPShop_TextSharpBeak, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_SHARP_BEAK
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_BlackBelt::
	msgbox Coralgrove_BPShop_TextBlackBelt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_BLACK_BELT
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_HardStone::
	msgbox Coralgrove_BPShop_TextHardStone, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_HARD_STONE
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_Magnet::
	msgbox Coralgrove_BPShop_TextMagnet, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_MAGNET
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_PoisonBarb::
	msgbox Coralgrove_BPShop_TextPoisonBarb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_BPShop_ChooseHoldItem
	setvar VAR_0x8008, 8
	setvar VAR_0x8009, ITEM_POISON_BARB
	goto Coralgrove_BPShop_TryPurchasePrize
	end


Coralgrove_BPShop_ClerkGoodbye::
	msgbox Coralgrove_BPShop_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


Coralgrove_BPShop_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Coralgrove_BPShop_TryGivePrize
	msgbox Coralgrove_BPShop_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Coralgrove_BPShop_ChooseHoldItem
	end


Coralgrove_BPShop_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto Coralgrove_BPShop_TryGiveItem
	end


Coralgrove_BPShop_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, Coralgrove_BPShop_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox Coralgrove_BPShop_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto Coralgrove_BPShop_ChooseHoldItem
	end


Coralgrove_BPShop_BagFull::
	msgbox Coralgrove_BPShop_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end


CGShop_Lass_Text_0:
	.string "So much cool stuff to buy!\pI don't even know what I'm\ngoing to get first!$"

CGShop_Fisher_Text_0:
	.string "Wish I could afford this Mystic Water…$"

Coralgrove_BPShop_Text_BuySomething::
	.string "Welcome to the BP shop.\pHere's a list of this store's\npurchasable hold items.$"

Coralgrove_BPShop_TextMiracleSeed::
	.string "You've chosen the Miracle Seed.\n Is that correct?$"

Coralgrove_BPShop_TextCharcoal::
	.string "You've chosen the Charcoal.\n Is that correct?$"

Coralgrove_BPShop_TextMysticWater::
	.string "You've chosen the Mystic Water.\n Is that correct?$"

Coralgrove_BPShop_TextSilkScarf::
	.string "You've chosen the Silk Scarf.\n Is that correct?$"

Coralgrove_BPShop_TextSharpBeak::
	.string "You've chosen the Sharp Beak.\n Is that correct?$"

Coralgrove_BPShop_TextBlackBelt::
	.string "You've chosen the Black Belt.\n Is that correct?$"

Coralgrove_BPShop_TextHardStone::
	.string "You've chosen the Hard Stone.\n Is that correct?$"

Coralgrove_BPShop_TextMagnet::
	.string "You've chosen the Magnet.\n Is that correct?$"

Coralgrove_BPShop_TextPoisonBarb::
	.string "You've chosen the Poison Barb.\n Is that correct?$"

Coralgrove_BPShop_ThankYouVisitWithPoints::
	.string "Thank you very much.\pPlease visit us when you have\nsaved up Battle Points.$"

Coralgrove_BPShop_Text_DontHaveEnoughPoints::
	.string "I'm so sorry…\nYou don't have enough Battle Points…$"

Coralgrove_BPShop_Text_DontHaveSpaceToHoldIt::
	.string "I'm so sorry…\nYou don't have space to hold it…$"

Coralgrove_BPShop_Text_HereIsYourPrize::
	.string "Here is your item!$"
