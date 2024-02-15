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
	finditem ITEM_EXP_CANDY_XS
	goto Shoreslate_Mart_Secret_1


Shoreslate_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Shoreslate_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


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


	.align 2
Shoreslate_Mart_Pokemart:
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
