AzuretideHouse1_MapScripts::
	.byte 0


AzuretideHouse1_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, AzuretideHouse1_HerbShop_EventScript_Clerk_2
	checkitem ITEM_COIN_PURSE
	compare VAR_RESULT, TRUE
	goto_if_eq AzuretideHouse1_HerbShop_EventScript_Clerk_5
	checkitem ITEM_JASM_LETTER
	compare VAR_RESULT, TRUE
	goto_if_eq AzuretideHouse1_HerbShop_EventScript_Clerk_8
	message AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart AzuretideHouse1_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_2:
	msgbox DeliverHerbalMix, MSGBOX_DEFAULT
	waitmessage
	closemessage
	pokemart AzuretideHouse1_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_5:
	msgbox AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop, MSGBOX_DEFAULT
	closemessage
	message HerbShop_HandOverPouch
	waitmessage
	delay 60
	msgbox HerbShop_GiveHerbalMix
	removeitem ITEM_COIN_PURSE
	giveitem ITEM_HERBAL_MIX, 1
	waitse
	closemessage
	goto_if_unset FLAG_JASMINE_HELPED, AzuretideHouse1_HerbShop_EventScript_Clerk_11
AzuretideHouse1_HerbShop_EventScript_Clerk_10:
	setflag FLAG_VISITED_HERB_SHOP
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_8:
	msgbox AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop, MSGBOX_DEFAULT
	closemessage
	message HerbShop_HandOverLetter
	waitmessage
	delay 60
	msgbox HerbShop_GiveHerbalMixQuest
	removeitem ITEM_JASM_LETTER
	giveitem ITEM_HERBAL_MIX_QUEST
	waitse
	closemessage
	goto_if_unset FLAG_JASMINE_HELPED, AzuretideHouse1_HerbShop_EventScript_Clerk_14
AzuretideHouse1_HerbShop_EventScript_Clerk_13:
	setflag FLAG_VISITED_HERB_SHOP_2
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_11:
	setflag FLAG_TEMP_1
	clearflag FLAG_HIDE_AMPHAROS
	goto AzuretideHouse1_HerbShop_EventScript_Clerk_10

AzuretideHouse1_HerbShop_EventScript_Clerk_14:
	setflag FLAG_TEMP_1
	clearflag FLAG_HIDE_AMPHAROS
	goto AzuretideHouse1_HerbShop_EventScript_Clerk_13


	.align 2
AzuretideHouse1_HerbShop_Pokemart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_HERBAL_MIX
	.2byte ITEM_NONE

AzuretideHouse1_HerbShop_OldLady::
	lock
	faceplayer
	msgbox AzuretideHouse1_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_DEFAULT
	release
	end


HerbShop_HandOverPouch::
	.string "{PLAYER} handed the penny pouch\n"
	.string "with the note to the store clerk.$"

HerbShop_HandOverLetter::
	.string "{PLAYER} handed the note\n"
	.string "to the store clerk.$"

HerbShop_GiveHerbalMixQuest::
	.string "Store clerk: Back so soon?\n"
	.string "Hm, what's this?\p"
	.string "… … …\p"
	.string "Yes, I see.\p"
	.string "Here you go. And please,\n"
	.string "be more careful with it this time…$"

HerbShop_GiveHerbalMix::
	.string "Store clerk: What's this?\p"
	.string "… … …\p"
	.string "Yes, I see.\p"
	.string "Here you go.$"

DeliverHerbalMix::
	.string "Store clerk: The note said this\n"
	.string "delivery is urgent.\l"
	.string "You should probably deliver it quickly…\p"
	.string "But still, who am I to reject\n"
	.string "a potential customer?\p"
	.string "Welcome to the herb shop, home of\n"
	.string "effective and inexpensive medicine!$"

AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop::
	.string "Welcome to the herb shop, home of\n"
	.string "effective and inexpensive medicine!$"

AzuretideHouse1_HerbShop_Text_HerbalMedicineWorksButMonWillDislike::
	.string "Herbal medicine works impressively well.\n"
	.string "But your Pokémon will dislike you for it.\l"
	.string "It must be horribly bitter!$"
