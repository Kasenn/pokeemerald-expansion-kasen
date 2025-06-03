AzuretideHouse1_MapScripts::
	.byte 0


AzuretideHouse1_HerbShop_EventScript_Clerk::
# 4 "data/maps/AzuretideHouse1/scripts.pory"
	lock
# 5 "data/maps/AzuretideHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/AzuretideHouse1/scripts.pory"
	goto_if_set FLAG_TEMP_1, AzuretideHouse1_HerbShop_EventScript_Clerk_2
# 15 "data/maps/AzuretideHouse1/scripts.pory"
	checkitem ITEM_COIN_PURSE
# 16 "data/maps/AzuretideHouse1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AzuretideHouse1_HerbShop_EventScript_Clerk_5
# 35 "data/maps/AzuretideHouse1/scripts.pory"
	checkitem ITEM_JASM_LETTER
# 36 "data/maps/AzuretideHouse1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AzuretideHouse1_HerbShop_EventScript_Clerk_8
# 55 "data/maps/AzuretideHouse1/scripts.pory"
	message AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop
# 56 "data/maps/AzuretideHouse1/scripts.pory"
	waitmessage
# 57 "data/maps/AzuretideHouse1/scripts.pory"
	pokemart AzuretideHouse1_HerbShop_Pokemart
# 58 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 59 "data/maps/AzuretideHouse1/scripts.pory"
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_2:
# 7 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox DeliverHerbalMix, MSGBOX_DEFAULT
# 8 "data/maps/AzuretideHouse1/scripts.pory"
	waitmessage
# 9 "data/maps/AzuretideHouse1/scripts.pory"
	closemessage
# 10 "data/maps/AzuretideHouse1/scripts.pory"
	pokemart AzuretideHouse1_HerbShop_Pokemart
# 11 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/AzuretideHouse1/scripts.pory"
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_5:
# 17 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop, MSGBOX_DEFAULT
# 18 "data/maps/AzuretideHouse1/scripts.pory"
	closemessage
# 19 "data/maps/AzuretideHouse1/scripts.pory"
	message HerbShop_HandOverPouch
# 20 "data/maps/AzuretideHouse1/scripts.pory"
	waitmessage
# 21 "data/maps/AzuretideHouse1/scripts.pory"
	delay 60
# 22 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox HerbShop_GiveHerbalMix
# 23 "data/maps/AzuretideHouse1/scripts.pory"
	removeitem ITEM_COIN_PURSE
# 24 "data/maps/AzuretideHouse1/scripts.pory"
	giveitem ITEM_HERBAL_MIX, 1
# 25 "data/maps/AzuretideHouse1/scripts.pory"
	waitse
# 26 "data/maps/AzuretideHouse1/scripts.pory"
	closemessage
# 27 "data/maps/AzuretideHouse1/scripts.pory"
	goto_if_unset FLAG_JASMINE_HELPED, AzuretideHouse1_HerbShop_EventScript_Clerk_11
AzuretideHouse1_HerbShop_EventScript_Clerk_10:
# 31 "data/maps/AzuretideHouse1/scripts.pory"
	setflag FLAG_VISITED_HERB_SHOP
# 32 "data/maps/AzuretideHouse1/scripts.pory"
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_8:
# 37 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop, MSGBOX_DEFAULT
# 38 "data/maps/AzuretideHouse1/scripts.pory"
	closemessage
# 39 "data/maps/AzuretideHouse1/scripts.pory"
	message HerbShop_HandOverLetter
# 40 "data/maps/AzuretideHouse1/scripts.pory"
	waitmessage
# 41 "data/maps/AzuretideHouse1/scripts.pory"
	delay 60
# 42 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox HerbShop_GiveHerbalMixQuest
# 43 "data/maps/AzuretideHouse1/scripts.pory"
	removeitem ITEM_JASM_LETTER
# 44 "data/maps/AzuretideHouse1/scripts.pory"
	giveitem ITEM_HERBAL_MIX_QUEST
# 45 "data/maps/AzuretideHouse1/scripts.pory"
	waitse
# 46 "data/maps/AzuretideHouse1/scripts.pory"
	closemessage
# 47 "data/maps/AzuretideHouse1/scripts.pory"
	goto_if_unset FLAG_JASMINE_HELPED, AzuretideHouse1_HerbShop_EventScript_Clerk_14
AzuretideHouse1_HerbShop_EventScript_Clerk_13:
# 51 "data/maps/AzuretideHouse1/scripts.pory"
	setflag FLAG_VISITED_HERB_SHOP_2
# 52 "data/maps/AzuretideHouse1/scripts.pory"
	release
	end

AzuretideHouse1_HerbShop_EventScript_Clerk_11:
# 28 "data/maps/AzuretideHouse1/scripts.pory"
	setflag FLAG_TEMP_1
# 29 "data/maps/AzuretideHouse1/scripts.pory"
	clearflag FLAG_HIDE_AMPHAROS
	goto AzuretideHouse1_HerbShop_EventScript_Clerk_10

AzuretideHouse1_HerbShop_EventScript_Clerk_14:
# 48 "data/maps/AzuretideHouse1/scripts.pory"
	setflag FLAG_TEMP_1
# 49 "data/maps/AzuretideHouse1/scripts.pory"
	clearflag FLAG_HIDE_AMPHAROS
	goto AzuretideHouse1_HerbShop_EventScript_Clerk_13


	.align 2
# 99 "data/maps/AzuretideHouse1/scripts.pory"
AzuretideHouse1_HerbShop_Pokemart:
# 100 "data/maps/AzuretideHouse1/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 101 "data/maps/AzuretideHouse1/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 102 "data/maps/AzuretideHouse1/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 103 "data/maps/AzuretideHouse1/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 104 "data/maps/AzuretideHouse1/scripts.pory"
	.2byte ITEM_HERBAL_MIX
	.2byte ITEM_NONE

AzuretideHouse1_HerbShop_OldLady::
# 114 "data/maps/AzuretideHouse1/scripts.pory"
	lock
# 115 "data/maps/AzuretideHouse1/scripts.pory"
	faceplayer
# 116 "data/maps/AzuretideHouse1/scripts.pory"
	msgbox AzuretideHouse1_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_DEFAULT
# 117 "data/maps/AzuretideHouse1/scripts.pory"
	release
	end


HerbShop_HandOverPouch::
# 63 "data/maps/AzuretideHouse1/scripts.pory"
	.string "{PLAYER} handed the penny pouch\n"
	.string "with the note to the store clerk.$"

HerbShop_HandOverLetter::
# 68 "data/maps/AzuretideHouse1/scripts.pory"
	.string "{PLAYER} handed the note\n"
	.string "to the store clerk.$"

HerbShop_GiveHerbalMixQuest::
# 73 "data/maps/AzuretideHouse1/scripts.pory"
	.string "Store clerk: Back so soon?\n"
	.string "Hm, what's this?\p"
	.string "… … …\p"
	.string "Yes, I see.\p"
	.string "Here you go. And please,\n"
	.string "be more careful with it this time…$"

HerbShop_GiveHerbalMix::
# 82 "data/maps/AzuretideHouse1/scripts.pory"
	.string "Store clerk: What's this?\p"
	.string "… … …\p"
	.string "Yes, I see.\p"
	.string "Here you go.$"

DeliverHerbalMix::
# 89 "data/maps/AzuretideHouse1/scripts.pory"
	.string "Store clerk: The note said this\n"
	.string "delivery is urgent.\l"
	.string "You should probably deliver it quickly…\p"
	.string "But still, who am I to reject\n"
	.string "a potential customer?\p"
	.string "Welcome to the herb shop, home of\n"
	.string "effective and inexpensive medicine!$"

AzuretideHouse1_HerbShop_Text_WelcomeToHerbShop::
# 108 "data/maps/AzuretideHouse1/scripts.pory"
	.string "Welcome to the herb shop, home of\n"
	.string "effective and inexpensive medicine!$"

AzuretideHouse1_HerbShop_Text_HerbalMedicineWorksButMonWillDislike::
# 121 "data/maps/AzuretideHouse1/scripts.pory"
	.string "Herbal medicine works impressively\n"
	.string "well, but your Pokémon will dislike\l"
	.string "you for it.\p"
	.string "It must be horribly bitter!$"
