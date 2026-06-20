Amberock_House1_MapScripts::
	.byte 0


Amberock_House1_OldMan::
# 6 "data/maps/Amberock_House1/scripts.pory"
	msgbox Amberock_House1_OldMan_Text, MSGBOX_NPC
# 7 "data/maps/Amberock_House1/scripts.pory"
	setflag FLAG_REPAIR_AMBEROCK_BRIDGE
	return


Amberock_House1_Youngster::
# 10 "data/maps/Amberock_House1/scripts.pory"
	msgbox Amberock_House1_Youngster_Text, MSGBOX_NPC
	return


Amberock_House3_HPChecker::
# 33 "data/maps/Amberock_House1/scripts.pory"
	lock
# 34 "data/maps/Amberock_House1/scripts.pory"
	faceplayer
# 35 "data/maps/Amberock_House1/scripts.pory"
	goto_if_set FLAG_TEMP_1, Amberock_House3_HPChecker_2
# 39 "data/maps/Amberock_House1/scripts.pory"
	msgbox CheckMonHP, MSGBOX_YESNO
Amberock_House3_HPChecker_1:
# 41 "data/maps/Amberock_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_House3_HPChecker_6
# 45 "data/maps/Amberock_House1/scripts.pory"
	msgbox WhichPokemonToAscertain
# 46 "data/maps/Amberock_House1/scripts.pory"
	closemessage
# 47 "data/maps/Amberock_House1/scripts.pory"
	special ChoosePartyMon
# 48 "data/maps/Amberock_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Amberock_House3_HPChecker_9
# 52 "data/maps/Amberock_House1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 53 "data/maps/Amberock_House1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Amberock_House3_HPChecker_12
# 58 "data/maps/Amberock_House1/scripts.pory"
	gethiddenpowertype STR_VAR_3
# 59 "data/maps/Amberock_House1/scripts.pory"
	special BufferMonNickname
# 60 "data/maps/Amberock_House1/scripts.pory"
	setflag FLAG_TEMP_1
# 61 "data/maps/Amberock_House1/scripts.pory"
	msgbox YourMonHPis
# 62 "data/maps/Amberock_House1/scripts.pory"
	msgbox ComeSeekMeForHP, MSGBOX_NPC
	return

Amberock_House3_HPChecker_2:
# 36 "data/maps/Amberock_House1/scripts.pory"
	msgbox CheckMonHPShort, MSGBOX_YESNO
	goto Amberock_House3_HPChecker_1

Amberock_House3_HPChecker_6:
# 42 "data/maps/Amberock_House1/scripts.pory"
	msgbox DontCheckHP, MSGBOX_NPC
	end

Amberock_House3_HPChecker_9:
# 49 "data/maps/Amberock_House1/scripts.pory"
	msgbox DontCheckHP, MSGBOX_NPC
	end

Amberock_House3_HPChecker_12:
# 54 "data/maps/Amberock_House1/scripts.pory"
	msgbox CantEvaluateEgg
# 55 "data/maps/Amberock_House1/scripts.pory"
	release
	end


Amberock_House2_ChanseyTrader::
# 99 "data/maps/Amberock_House1/scripts.pory"
	lock
# 100 "data/maps/Amberock_House1/scripts.pory"
	faceplayer
# 101 "data/maps/Amberock_House1/scripts.pory"
	goto_if_set FLAG_TRADED_CHANSEY, Amberock_House2_ChanseyTrader_2
# 105 "data/maps/Amberock_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_CHANSEY
# 106 "data/maps/Amberock_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 107 "data/maps/Amberock_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox WantToTradeChansey, MSGBOX_YESNO
# 0 "data/maps/Amberock_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_House2_ChanseyTrader_5
Amberock_House2_ChanseyTrader_4:
# 111 "data/maps/Amberock_House1/scripts.pory"
	special ChoosePartyMon
# 112 "data/maps/Amberock_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Amberock_House2_ChanseyTrader_8
Amberock_House2_ChanseyTrader_7:
# 115 "data/maps/Amberock_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 116 "data/maps/Amberock_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 117 "data/maps/Amberock_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, ChanseyNotRequestedMon
# 118 "data/maps/Amberock_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 119 "data/maps/Amberock_House1/scripts.pory"
	special CreateInGameTradePokemon
# 120 "data/maps/Amberock_House1/scripts.pory"
	special DoInGameTradeScene
# 121 "data/maps/Amberock_House1/scripts.pory"
	msgbox ChanseyTradeThanks
# 122 "data/maps/Amberock_House1/scripts.pory"
	setflag FLAG_TRADED_CHANSEY
# 123 "data/maps/Amberock_House1/scripts.pory"
	release
	return

Amberock_House2_ChanseyTrader_2:
# 102 "data/maps/Amberock_House1/scripts.pory"
	msgbox ThanksForTrade_Chansey, MSGBOX_NPC
	end

Amberock_House2_ChanseyTrader_5:
# 109 "data/maps/Amberock_House1/scripts.pory"
	goto DeclineChanseyTrade
	goto Amberock_House2_ChanseyTrader_4

Amberock_House2_ChanseyTrader_8:
# 113 "data/maps/Amberock_House1/scripts.pory"
	goto DeclineChanseyTrade
	goto Amberock_House2_ChanseyTrader_7


DeclineChanseyTrade::
# 127 "data/maps/Amberock_House1/scripts.pory"
	msgbox ChanseyTradeDeclineText, MSGBOX_NPC
	end


ChanseyNotRequestedMon::
# 137 "data/maps/Amberock_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 138 "data/maps/Amberock_House1/scripts.pory"
	msgbox ChanseyWrongMonText, MSGBOX_NPC
	end


Amberock_House1_OldMan_Text::
# 12 "data/maps/Amberock_House1/scripts.pory"
	.string "There used to be a massive bridge\n"
	.string "connecting Amberock with the mainland,\l"
	.string "but the eroding cliffs made it\l"
	.string "impossible to keep it connected.\p"
	.string "The town has switched to using a rope\n"
	.string "bridge instead, and while it too does\l"
	.string "break from time to time, it's much\l"
	.string "easier and faster to repair.$"

Amberock_House1_Youngster_Text::
# 22 "data/maps/Amberock_House1/scripts.pory"
	.string "You've heard of exhaustion caused by\n"
	.string "Mega Evolution, but did you know that\l"
	.string "the severity of the exhaustion is\l"
	.string "affected by the Pokémon's stats?\p"
	.string "The stronger the Pokémon, the faster\n"
	.string "it tires itself out.\p"
	.string "And if the Pokémon has great defenses,\n"
	.string "the less it will get exhausted.$"

CheckMonHP::
# 65 "data/maps/Amberock_House1/scripts.pory"
	.string "I have a rare gift that allows me\n"
	.string "to ascertain the type of a Pokémon's\l"
	.string "Hidden Power.\p"
	.string "Would you like to learn of your\n"
	.string "Pokémon's type?$"

CheckMonHPShort::
# 72 "data/maps/Amberock_House1/scripts.pory"
	.string "Interested to learn another\n"
	.string "Pokémon's hidden type?$"

WhichPokemonToAscertain::
# 76 "data/maps/Amberock_House1/scripts.pory"
	.string "Which Pokémon should I evaluate?$"

DontCheckHP::
# 79 "data/maps/Amberock_House1/scripts.pory"
	.string "Come seek me if you change\n"
	.string "your mind.$"

CantEvaluateEgg::
# 83 "data/maps/Amberock_House1/scripts.pory"
	.string "I'm sorry, but I cannot evaluate\n"
	.string "a Pokémon that has not hatched yet.$"

YourMonHPis::
# 87 "data/maps/Amberock_House1/scripts.pory"
	.string "Hm… Let's see…\p"
	.string "Yes…\p"
	.string "Your {STR_VAR_1}…\n"
	.string "It seems to be of {STR_VAR_3} type.$"

ComeSeekMeForHP::
# 93 "data/maps/Amberock_House1/scripts.pory"
	.string "If you would like to learn of\n"
	.string "another Pokémon, come seek me out.$"

ChanseyTradeDeclineText::
# 131 "data/maps/Amberock_House1/scripts.pory"
	.string "You don't want to trade?\n"
	.string "That's a shame…$"

ThanksForTrade_Chansey::
# 142 "data/maps/Amberock_House1/scripts.pory"
	.string "Don't worry.\n"
	.string "I'll take good care of Audino!$"

WantToTradeChansey::
# 146 "data/maps/Amberock_House1/scripts.pory"
	.string "Hi!\n"
	.string "I'm looking for an Audino.\p"
	.string "Do you have one?\n"
	.string "I could trade my Chansey for it.$"

ChanseyTradeThanks::
# 152 "data/maps/Amberock_House1/scripts.pory"
	.string "Aww, it's so cute!\p"
	.string "Don't worry.\n"
	.string "I'll take good care of Audino!$"

ChanseyWrongMonText::
# 157 "data/maps/Amberock_House1/scripts.pory"
	.string "Hm… That doesn't look like\n"
	.string "an Audino to me…$"
