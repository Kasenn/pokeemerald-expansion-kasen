Amberock_House1_MapScripts::
	.byte 0


Amberock_House1_OldMan::
	msgbox Amberock_House1_OldMan_Text, MSGBOX_NPC
	setflag FLAG_REPAIR_AMBEROCK_BRIDGE
	return


Amberock_House1_Youngster::
	msgbox Amberock_House1_Youngster_Text, MSGBOX_NPC
	return


Amberock_House3_HPChecker::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, Amberock_House3_HPChecker_2
	msgbox CheckMonHP, MSGBOX_YESNO
Amberock_House3_HPChecker_1:
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_House3_HPChecker_6
	msgbox WhichPokemonToAscertain
	closemessage
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Amberock_House3_HPChecker_9
	special ReadMonHiddenPowerType
	special BufferMonNickname
	setflag FLAG_TEMP_1
	msgbox YourMonHPis
	msgbox ComeSeekMeForHP, MSGBOX_NPC
	return

Amberock_House3_HPChecker_2:
	msgbox CheckMonHPShort, MSGBOX_YESNO
	goto Amberock_House3_HPChecker_1

Amberock_House3_HPChecker_6:
	msgbox DontCheckHP, MSGBOX_NPC
	end

Amberock_House3_HPChecker_9:
	msgbox DontCheckHP, MSGBOX_NPC
	end


Amberock_House2_ChanseyTrader::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_CHANSEY, Amberock_House2_ChanseyTrader_2
	setvar VAR_0x8008, INGAME_TRADE_CHANSEY
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox WantToTradeChansey, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_House2_ChanseyTrader_5
Amberock_House2_ChanseyTrader_4:
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Amberock_House2_ChanseyTrader_8
Amberock_House2_ChanseyTrader_7:
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, ChanseyNotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox ChanseyTradeThanks
	setflag FLAG_TRADED_CHANSEY
	release
	return

Amberock_House2_ChanseyTrader_2:
	msgbox ThanksForTrade_Chansey, MSGBOX_NPC
	end

Amberock_House2_ChanseyTrader_5:
	goto DeclineChanseyTrade
	goto Amberock_House2_ChanseyTrader_4

Amberock_House2_ChanseyTrader_8:
	goto DeclineChanseyTrade
	goto Amberock_House2_ChanseyTrader_7


DeclineChanseyTrade::
	msgbox ChanseyTradeDeclineText, MSGBOX_NPC
	end


ChanseyNotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox ChanseyWrongMonText, MSGBOX_NPC
	end


Amberock_House1_OldMan_Text::
	.string "There used to be a massive bridge\n"
	.string "connecting Amberock with the mainland,\l"
	.string "but the eroding cliffs made it\l"
	.string "impossible to keep it connected.\p"
	.string "The town has switched to using a rope\n"
	.string "bridge instead, and while it too does\l"
	.string "break from time to time, it's much\l"
	.string "easier and faster to repair.$"

Amberock_House1_Youngster_Text::
	.string "You've heard of exhaustion caused by\n"
	.string "Mega Evolution, but did you know that\l"
	.string "the severity of the exhaustion is\l"
	.string "affected by the Pokémon's stats?\p"
	.string "The stronger the Pokémon, the faster\n"
	.string "it tires itself out.\p"
	.string "And if the Pokémon has great defenses,\n"
	.string "the less it will get exhausted.$"

CheckMonHP::
	.string "I have a rare gift that allows me\n"
	.string "to ascertain the type of a Pokémon's\l"
	.string "Hidden Power.\p"
	.string "Would you like to learn of your\n"
	.string "Pokémon's type?$"

CheckMonHPShort::
	.string "Interested to learn another\n"
	.string "Pokémon's hidden type?$"

WhichPokemonToAscertain::
	.string "Which Pokémon should I evaluate?$"

DontCheckHP::
	.string "Come seek me if you change\n"
	.string "your mind.$"

YourMonHPis::
	.string "Hm… Let's see…\p"
	.string "Yes…\p"
	.string "Your {STR_VAR_1}…\n"
	.string "It seems to be of {STR_VAR_3} type.$"

ComeSeekMeForHP::
	.string "If you would like to learn of\n"
	.string "another Pokémon, come seek me out.$"

ThanksForTrade_Chansey::
	.string "Don't worry.\n"
	.string "I'll take good care of Audino!$"

WantToTradeChansey::
	.string "Hi!\n"
	.string "I'm looking for an Audino.\p"
	.string "Do you have one?\n"
	.string "I could trade my Chansey for it.$"

ChanseyTradeThanks::
	.string "Aww, it's so cute!\p"
	.string "Don't worry.\n"
	.string "I'll take good care of Audino!$"

ChanseyTradeDeclineText::
	.string "You don't want to trade?\n"
	.string "That's a shame…$"

ChanseyWrongMonText::
	.string "Hm… That doesn't look like\n"
	.string "an Audino to me…$"
