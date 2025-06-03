CoralTradeHouse_MapScripts::
	.byte 0


CoralgroveTradeSequence::
# 4 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeSequence_3
CoralgroveTradeSequence_2:
# 40 "data/maps/CoralTradeHouse/scripts.pory"
	switch VAR_STARTER_MON
# 41 "data/maps/CoralTradeHouse/scripts.pory"
	case SPECIES_ROWLET, CoralgroveTradeSequence_10
# 43 "data/maps/CoralTradeHouse/scripts.pory"
	case SPECIES_TORCHIC, CoralgroveTradeSequence_11
# 45 "data/maps/CoralTradeHouse/scripts.pory"
	case SPECIES_PIPLUP, CoralgroveTradeSequence_12
	return

CoralgroveTradeSequence_1:
# 5 "data/maps/CoralTradeHouse/scripts.pory"
	lock
# 6 "data/maps/CoralTradeHouse/scripts.pory"
	faceplayer
# 7 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_set FLAG_OBTAINED_STARTER_STONE, CoralgroveTradeSequence_7
CoralgroveTradeSequence_6:
# 10 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, CoralgroveTradeSequence_14
# 14 "data/maps/CoralTradeHouse/scripts.pory"
	playse SE_PIN
# 15 "data/maps/CoralTradeHouse/scripts.pory"
	safefollow
# 16 "data/maps/CoralTradeHouse/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 17 "data/maps/CoralTradeHouse/scripts.pory"
	waitmovement 0
# 18 "data/maps/CoralTradeHouse/scripts.pory"
	delay 24
# 19 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox LookingForStone
CoralgroveTradeSequence_13:
# 21 "data/maps/CoralTradeHouse/scripts.pory"
	closemessage
	checkitemspace ITEM_INCINEROARITE
# 0 "data/maps/CoralTradeHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralgroveTradeSequence_18
CoralgroveTradeSequence_17:
# 26 "data/maps/CoralTradeHouse/scripts.pory"
	switch VAR_STARTER_MON
# 27 "data/maps/CoralTradeHouse/scripts.pory"
	case SPECIES_ROWLET, CoralgroveTradeSequence_22
# 29 "data/maps/CoralTradeHouse/scripts.pory"
	case SPECIES_TORCHIC, CoralgroveTradeSequence_23
# 31 "data/maps/CoralTradeHouse/scripts.pory"
	case SPECIES_PIPLUP, CoralgroveTradeSequence_24
CoralgroveTradeSequence_20:
# 34 "data/maps/CoralTradeHouse/scripts.pory"
	waitse
# 35 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox HoldTightToStone, MSGBOX_NPC
# 36 "data/maps/CoralTradeHouse/scripts.pory"
	setflag FLAG_OBTAINED_STARTER_STONE
	end

CoralgroveTradeSequence_3:
# 4 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CoralgroveTradeSequence_1
	goto CoralgroveTradeSequence_2

CoralgroveTradeSequence_7:
# 8 "data/maps/CoralTradeHouse/scripts.pory"
	goto CoralgroveTradeCompleted
	goto CoralgroveTradeSequence_6

CoralgroveTradeSequence_10:
# 42 "data/maps/CoralTradeHouse/scripts.pory"
	goto CoralgroveDartrixTrade
	return

CoralgroveTradeSequence_11:
# 44 "data/maps/CoralTradeHouse/scripts.pory"
	goto CoralgroveCombuskenTrade
	return

CoralgroveTradeSequence_12:
# 46 "data/maps/CoralTradeHouse/scripts.pory"
	goto CoralgrovePrinplupTrade
	return

CoralgroveTradeSequence_14:
# 11 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox LookingForStoneShort
	goto CoralgroveTradeSequence_13

CoralgroveTradeSequence_18:
# 23 "data/maps/CoralTradeHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 24 "data/maps/CoralTradeHouse/scripts.pory"
	goto ZeBagIsFull
	goto CoralgroveTradeSequence_17

CoralgroveTradeSequence_22:
# 28 "data/maps/CoralTradeHouse/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE
	goto CoralgroveTradeSequence_20

CoralgroveTradeSequence_23:
# 30 "data/maps/CoralTradeHouse/scripts.pory"
	giveitem ITEM_INCINEROARITE
	goto CoralgroveTradeSequence_20

CoralgroveTradeSequence_24:
# 32 "data/maps/CoralTradeHouse/scripts.pory"
	giveitem ITEM_SWAMPERTITE
	goto CoralgroveTradeSequence_20


CoralgroveDartrixTrade::
# 69 "data/maps/CoralTradeHouse/scripts.pory"
	lock
# 70 "data/maps/CoralTradeHouse/scripts.pory"
	faceplayer
# 71 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeCompleted
# 72 "data/maps/CoralTradeHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_QUILLADIN
# 73 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 74 "data/maps/CoralTradeHouse/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 75 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_WillingToTrade, MSGBOX_YESNO
# 76 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Coralgrove_TradeDecline
# 77 "data/maps/CoralTradeHouse/scripts.pory"
	special ChoosePartyMon
# 78 "data/maps/CoralTradeHouse/scripts.pory"
	waitstate
# 79 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Coralgrove_TradeDecline
# 80 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 81 "data/maps/CoralTradeHouse/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 82 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Coralgrove_NotRequestedMon
# 83 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 84 "data/maps/CoralTradeHouse/scripts.pory"
	special CreateInGameTradePokemon
# 85 "data/maps/CoralTradeHouse/scripts.pory"
	special DoInGameTradeScene
# 86 "data/maps/CoralTradeHouse/scripts.pory"
	waitstate
# 87 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_TradeThanks, MSGBOX_DEFAULT
# 88 "data/maps/CoralTradeHouse/scripts.pory"
	setflag FLAG_CORALGROVE_TRADE_COMPLETED
# 89 "data/maps/CoralTradeHouse/scripts.pory"
	release
	end


CoralgroveCombuskenTrade::
# 94 "data/maps/CoralTradeHouse/scripts.pory"
	lock
# 95 "data/maps/CoralTradeHouse/scripts.pory"
	faceplayer
# 96 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeCompleted
# 97 "data/maps/CoralTradeHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TORRACAT
# 98 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 99 "data/maps/CoralTradeHouse/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 100 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_WillingToTrade, MSGBOX_YESNO
# 101 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Coralgrove_TradeDecline
# 102 "data/maps/CoralTradeHouse/scripts.pory"
	special ChoosePartyMon
# 103 "data/maps/CoralTradeHouse/scripts.pory"
	waitstate
# 104 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Coralgrove_TradeDecline
# 105 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 106 "data/maps/CoralTradeHouse/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 107 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Coralgrove_NotRequestedMon
# 108 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 109 "data/maps/CoralTradeHouse/scripts.pory"
	special CreateInGameTradePokemon
# 110 "data/maps/CoralTradeHouse/scripts.pory"
	special DoInGameTradeScene
# 111 "data/maps/CoralTradeHouse/scripts.pory"
	waitstate
# 112 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_TradeThanks, MSGBOX_DEFAULT
# 113 "data/maps/CoralTradeHouse/scripts.pory"
	setflag FLAG_CORALGROVE_TRADE_COMPLETED
# 114 "data/maps/CoralTradeHouse/scripts.pory"
	release
	end


CoralgrovePrinplupTrade::
# 119 "data/maps/CoralTradeHouse/scripts.pory"
	lock
# 120 "data/maps/CoralTradeHouse/scripts.pory"
	faceplayer
# 121 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeCompleted
# 122 "data/maps/CoralTradeHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MARSHTOMP
# 123 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 124 "data/maps/CoralTradeHouse/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 125 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_WillingToTrade, MSGBOX_YESNO
# 126 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Coralgrove_TradeDecline
# 127 "data/maps/CoralTradeHouse/scripts.pory"
	special ChoosePartyMon
# 128 "data/maps/CoralTradeHouse/scripts.pory"
	waitstate
# 129 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Coralgrove_TradeDecline
# 130 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 131 "data/maps/CoralTradeHouse/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 132 "data/maps/CoralTradeHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Coralgrove_NotRequestedMon
# 133 "data/maps/CoralTradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 134 "data/maps/CoralTradeHouse/scripts.pory"
	special CreateInGameTradePokemon
# 135 "data/maps/CoralTradeHouse/scripts.pory"
	special DoInGameTradeScene
# 136 "data/maps/CoralTradeHouse/scripts.pory"
	waitstate
# 137 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_TradeThanks, MSGBOX_DEFAULT
# 138 "data/maps/CoralTradeHouse/scripts.pory"
	setflag FLAG_CORALGROVE_TRADE_COMPLETED
# 139 "data/maps/CoralTradeHouse/scripts.pory"
	release
	end


Coralgrove_TradeDecline::
# 144 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_TradeDeclineText, MSGBOX_DEFAULT
# 145 "data/maps/CoralTradeHouse/scripts.pory"
	release
	end


Coralgrove_NotRequestedMon::
# 158 "data/maps/CoralTradeHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 159 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox Coralgrove_WrongMonText, MSGBOX_DEFAULT
# 160 "data/maps/CoralTradeHouse/scripts.pory"
	release
	end


CoralgroveTradeCompleted::
# 169 "data/maps/CoralTradeHouse/scripts.pory"
	msgbox CoralgroveTradeCompleteText, MSGBOX_DEFAULT
# 170 "data/maps/CoralTradeHouse/scripts.pory"
	release
	end


LookingForStoneShort::
# 51 "data/maps/CoralTradeHouse/scripts.pory"
	.string "Here's the stone you were looking for.$"

LookingForStone::
# 54 "data/maps/CoralTradeHouse/scripts.pory"
	.string "You're looking for a what stone?\p"
	.string "… … … … …\p"
	.string "Oh yeah, I do remember that!\n"
	.string "My Pokémon used to love that stone!\p"
	.string "Well, if it helps making it even\n"
	.string "stronger, I guess I can let go of it.\p"
	.string "Here you go.$"

HoldTightToStone::
# 63 "data/maps/CoralTradeHouse/scripts.pory"
	.string "I hope it becomes useful during your\n"
	.string "journeys!$"

Coralgrove_TradeDeclineText::
# 149 "data/maps/CoralTradeHouse/scripts.pory"
	.string "Let me know if you change your mind.$"

Coralgrove_WillingToTrade::
# 153 "data/maps/CoralTradeHouse/scripts.pory"
	.string "I really wanted to get a Pokémon from\nthe Pokémon Professor but\lhe only hands them out to locals.\pSay, do you have a {STR_VAR_1}?\pI have a {STR_VAR_2} if you're\ninterested in an equal trade.$"

Coralgrove_WrongMonText::
# 164 "data/maps/CoralTradeHouse/scripts.pory"
	.string "I'm sorry, but that's\nnot a {STR_VAR_1}.$"

CoralgroveTradeCompleteText::
# 174 "data/maps/CoralTradeHouse/scripts.pory"
	.string "Thanks for the trade!$"

Coralgrove_TradeThanks::
# 178 "data/maps/CoralTradeHouse/scripts.pory"
	.string "Oh wow! What a strong Pokémon!$"
