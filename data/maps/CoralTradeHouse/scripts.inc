CoralTradeHouse_MapScripts::
	.byte 0


CoralgroveTradeSequence::
	goto_if_set FLAG_UNUSED_0x493, CoralgroveTradeSequence_1
	goto_if_set FLAG_UNUSED_0x494, CoralgroveTradeSequence_2
	goto CoralgrovePrinplupTrade
	return

CoralgroveTradeSequence_1:
	goto CoralgroveDartrixTrade
	return

CoralgroveTradeSequence_2:
	goto CoralgroveCombuskenTrade
	return


CoralgroveDartrixTrade::
	lockall
	faceplayer
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_QUILLADIN
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox Coralgrove_WillingToTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_TradeDecline
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Coralgrove_TradeDecline
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, Coralgrove_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox Coralgrove_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_CORALGROVE_TRADE_COMPLETED
	release
	end


CoralgroveCombuskenTrade::
	lockall
	faceplayer
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_TORRACAT
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox Coralgrove_WillingToTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_TradeDecline
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Coralgrove_TradeDecline
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, Coralgrove_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox Coralgrove_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_CORALGROVE_TRADE_COMPLETED
	release
	end


CoralgrovePrinplupTrade::
	lockall
	faceplayer
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MARSHTOMP
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox Coralgrove_WillingToTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Coralgrove_TradeDecline
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Coralgrove_TradeDecline
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, Coralgrove_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox Coralgrove_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_CORALGROVE_TRADE_COMPLETED
	release
	end


Coralgrove_TradeDecline::
	msgbox Coralgrove_TradeDeclineText, MSGBOX_DEFAULT
	release
	end


Coralgrove_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Coralgrove_WrongMonText, MSGBOX_DEFAULT
	release
	end


CoralgroveTradeCompleted::
	msgbox CoralgroveTradeCompleteText, MSGBOX_DEFAULT
	release
	end


Coralgrove_TradeDeclineText::
	.string "Let me know if you change your mind.$"

Coralgrove_WillingToTrade::
	.string "I really wanted to get a Pokémon from\nthe Pokémon Professor but\lhe only hands them out to locals.\pSay, do you have a {STR_VAR_1}?\pI have a {STR_VAR_2} if you're\ninterested in an equal trade.$"

Coralgrove_WrongMonText::
	.string "I'm sorry, but that's\nnot a {STR_VAR_1}.$"

CoralgroveTradeCompleteText::
	.string "Thanks for the trade!$"

Coralgrove_TradeThanks::
	.string "Oh wow! What a strong Pokémon!$"
