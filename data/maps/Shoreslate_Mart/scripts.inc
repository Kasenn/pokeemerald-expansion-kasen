Shoreslate_Mart_MapScripts::
	.byte 0


Shoreslate_Mart_Secret::
	lockall
	msgbox Shoreslate_Mart_Secret_Text_Beginning, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_2
Shoreslate_Mart_Secret_1:
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_4
	return

Shoreslate_Mart_Secret_2:
	msgbox Shoreslate_Mart_Secret_Text, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_7
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_9
	goto Shoreslate_Mart_Secret_1

Shoreslate_Mart_Secret_4:
	release
	end

Shoreslate_Mart_Secret_7:
	release
	end

Shoreslate_Mart_Secret_9:
	msgbox Shoreslate_Mart_Secret_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_12
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_14
	goto Shoreslate_Mart_Secret_1

Shoreslate_Mart_Secret_12:
	release
	end

Shoreslate_Mart_Secret_14:
	msgbox Shoreslate_Mart_Secret_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_17
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_19
	goto Shoreslate_Mart_Secret_1

Shoreslate_Mart_Secret_17:
	release
	end

Shoreslate_Mart_Secret_19:
	msgbox Shoreslate_Mart_Secret_Text_4, MSGBOX_DEFAULT
	finditem ITEM_MASTER_BALL
	goto Shoreslate_Mart_Secret_1


Shoreslate_Mart_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou2
	waitmessage
	pokemart Shoreslate_Mart_Pokemart2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


Shoreslate_Mart_EventScript_Clerk3::
	lock
	faceplayer
	message gText_HowMayIServeYou3
	waitmessage
	pokemart Shoreslate_Mart_Pokemart3
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


Shoreslate_AppleMerchant::
	lock
	faceplayer
	message gText_FreshApples
	waitmessage
	pokemart Shoreslate_AppleMerchant_Shop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Shoreslate_AppleMerchant_Shop:
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_NONE

	.align 2
Shoreslate_Mart_Pokemart2:
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

	.align 2
Shoreslate_Mart_Pokemart3:
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

Shoreslate_Mart_EventScript_Woman::
	msgbox Shoreslate_Mart_EventScript_Woman_Text, MSGBOX_NPC
	end


Shoreslate_Mart_EventScript_Man::
	msgbox Shoreslate_Mart_EventScript_Man_Text, MSGBOX_NPC
	end


Kaolisle_Mart_Gentleman::
	msgbox Kaolisle_Mart_Gentleman_Text, MSGBOX_NPC
	end


Kaolisle_Mart_Boy::
	msgbox Kaolisle_Mart_Boy_Text, MSGBOX_NPC
	end


Mart_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	switch VAR_BADGES_OBTAINED
	case 0, Mart_Clerk_3
	case 1, Mart_Clerk_4
	case 2, Mart_Clerk_5
	case 3, Mart_Clerk_6
	case 4, Mart_Clerk_7
	case 5, Mart_Clerk_8
	case 6, Mart_Clerk_9
	case 7, Mart_Clerk_10
	case 8, Mart_Clerk_11
Mart_Clerk_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Mart_Clerk_3:
	goto_if_set FLAG_SYS_POKEDEX_GET, Mart_Clerk_12
	pokemart Mart_NoBadges
	goto Mart_Clerk_1

Mart_Clerk_4:
	pokemart Mart_1Badges
	goto Mart_Clerk_1

Mart_Clerk_5:
	pokemart Mart_2Badges
	goto Mart_Clerk_1

Mart_Clerk_6:
	pokemart Mart_3Badges
	goto Mart_Clerk_1

Mart_Clerk_7:
	pokemart Mart_4Badges
	goto Mart_Clerk_1

Mart_Clerk_8:
	pokemart Mart_4Badges
	goto Mart_Clerk_1

Mart_Clerk_9:
	pokemart Mart_7Badges
	goto Mart_Clerk_1

Mart_Clerk_10:
	pokemart Mart_7Badges
	goto Mart_Clerk_1

Mart_Clerk_11:
	pokemart Mart_8Badges
	goto Mart_Clerk_1

Mart_Clerk_12:
	pokemart Mart_NoBadgesExpanded
	goto Mart_Clerk_1


	.align 2
Mart_NoBadges:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE

	.align 2
Mart_NoBadgesExpanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
Mart_1Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
Mart_2Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
Mart_3Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
Mart_4Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
Mart_7Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
Mart_8Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

Rockliffe_TM_Mart_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Mart_TM1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Mart_TM1:
	.2byte ITEM_TM_FRUSTRATION
	.2byte ITEM_TM_RETURN
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_NONE

Mart_ClerkSandStoneLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	switch VAR_BADGES_OBTAINED
	case 3, Mart_ClerkSandStoneLeft_3
	case 4, Mart_ClerkSandStoneLeft_4
	case 5, Mart_ClerkSandStoneLeft_5
	case 6, Mart_ClerkSandStoneLeft_6
	case 7, Mart_ClerkSandStoneLeft_7
	case 8, Mart_ClerkSandStoneLeft_8
Mart_ClerkSandStoneLeft_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Mart_ClerkSandStoneLeft_3:
	pokemart SSLeftMart_3Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_4:
	pokemart SSLeftMart_4Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_5:
	pokemart SSLeftMart_4Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_6:
	pokemart SSLeftMart_6Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_7:
	pokemart SSLeftMart_7Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_8:
	pokemart SSLeftMart_8Badges
	goto Mart_ClerkSandStoneLeft_1


Mart_ClerkSandStoneRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	switch VAR_BADGES_OBTAINED
	case 3, Mart_ClerkSandStoneRight_3
	case 4, Mart_ClerkSandStoneRight_4
	case 5, Mart_ClerkSandStoneRight_5
	case 6, Mart_ClerkSandStoneRight_6
	case 7, Mart_ClerkSandStoneRight_7
	case 8, Mart_ClerkSandStoneRight_8
Mart_ClerkSandStoneRight_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Mart_ClerkSandStoneRight_3:
	pokemart SSRightMart_3Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_4:
	pokemart SSRightMart_4Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_5:
	pokemart SSRightMart_4Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_6:
	pokemart SSRightMart_7Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_7:
	pokemart SSRightMart_7Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_8:
	pokemart SSRightMart_8Badges
	goto Mart_ClerkSandStoneRight_1


	.align 2
SSLeftMart_3Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

	.align 2
SSLeftMart_4Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_NONE

	.align 2
SSLeftMart_6Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_NONE

	.align 2
SSLeftMart_7Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_NONE

	.align 2
SSLeftMart_8Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
SSRightMart_3Badges:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
SSRightMart_4Badges:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
SSRightMart_7Badges:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
SSRightMart_8Badges:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

StoneMart_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Mart_Stones1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Mart_Stones1:
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_NONE

StoneMart_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	compare VAR_SANDSTONEPORYGON_STATE, 3
	goto_if_eq StoneMart_ClerkRight_2
	pokemart Mart_AV
StoneMart_ClerkRight_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

StoneMart_ClerkRight_2:
	pokemart Mart_NoAV
	goto StoneMart_ClerkRight_1


	.align 2
Mart_NoAV:
	.2byte ITEM_UP_GRADE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_ROTOM_CATALOG
	.2byte ITEM_PROCESSOR
	.2byte ITEM_NONE

	.align 2
Mart_AV:
	.2byte ITEM_ANTIVIRUS
	.2byte ITEM_UP_GRADE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_ROTOM_CATALOG
	.2byte ITEM_PROCESSOR
	.2byte ITEM_NONE

Shoreslate_Mart_Secret_Text_Beginning::
	.string "There's a note attached to this item.\n"
	.string "Would you like to read it?$"

Shoreslate_Mart_Secret_Text::
	.string "The missile knows where it is at\n"
	.string "all times. It knows this because\l"
	.string "it knows where it isn't.\p"
	.string "By subtracting where it is from where\n"
	.string "it isn't, or where it isn't from\l"
	.string "where it is (whichever is greater),\l"
	.string "it obtains a difference, or deviation.\l"
	.string "Would you like to continue reading?$"

Shoreslate_Mart_Secret_Text_2::
	.string "The guidance subsystem uses deviations\n"
	.string "to generate corrective commands\l"
	.string "to drive the missile from a position\l"
	.string "where it is to a position where it\l"
	.string "isn't, and arriving at a position\l"
	.string "where it wasn't, it now is.\p"
	.string "Consequently, the position where it is,\n"
	.string "is now the position that it wasn't,\l"
	.string "and it follows that the position\l"
	.string "that it was, is now the position\l"
	.string "that it isn't.\l"
	.string "Would you like to continue reading?$"

Shoreslate_Mart_Secret_Text_3::
	.string "In the event that the position that\n"
	.string "it is in is not the position that\l"
	.string "it wasn't, the system has acquired\l"
	.string "a variation, the variation being\l"
	.string "the difference between where the\l"
	.string "missile is, and where it wasn't.\p"
	.string "If variation is considered to be a\n"
	.string "significant factor, it too may be\l"
	.string "corrected by the GEA.\p"
	.string "However, the missile must also know\n"
	.string "where it was.\l"
	.string "Would you like to continue reading?$"

Shoreslate_Mart_Secret_Text_4::
	.string "The missile guidance computer scenario\n"
	.string "works as follows.\p"
	.string "Because a variation has modified some\n"
	.string "of the information the missile has\l"
	.string "obtained, it is not sure just where\l"
	.string "it is.\p"
	.string "However, it is sure where it isn't,\n"
	.string "within reason, and it knows where\l"
	.string "it was.\p"
	.string "It now subtracts where it should be\n"
	.string "from where it wasn't, or vice-versa,\l"
	.string "and by differentiating this from the\l"
	.string "algebraic sum of where it shouldn't be,\l"
	.string "and where it was, it is able to obtain\l"
	.string "the deviation and its variation,\l"
	.string "which is called error.\p"
	.string "Thank you for coming to my TED talk.\p"
	.string "You may now devour me.$"

gText_FreshApples::
	.string "Fresh apples for sale!$"

Shoreslate_Mart_EventScript_Woman_Text::
	.string "The market is great, but there are some\n"
	.string "daily necessities you can only get\l"
	.string "at a Poké Mart.$"

Shoreslate_Mart_EventScript_Man_Text::
	.string "I wanted to get some escape ropes but\n"
	.string "I can't see them anywhere.\l"
	.string "Where are they?$"

gText_HowMayIServeYou2::
	.string "Combat items for sale!\n"
	.string "Come get your own!$"

gText_HowMayIServeYou3::
	.string "I've got a selection of interesting\n"
	.string "Poké Balls. Take a look!$"

gText_HowMayIServeYou4::
	.string "You've never seen these things before!\n"
	.string "My prices are incense!$"

Kaolisle_Mart_Gentleman_Text::
	.string "You can find mostly the same items\n"
	.string "in every Poké Mart across Sinko.\p"
	.string "By gaining more badges, you gain access\n"
	.string "to an ever wider assortment of products.$"

Kaolisle_Mart_Boy_Text::
	.string "I can't find the products I'm\n"
	.string "looking for…$"
