CoralTradeHouse_MapScripts::
	.byte 0


CoralgroveTradeSequence::
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, CoralgroveTradeSequence_3
CoralgroveTradeSequence_2:
	goto_if_set FLAG_UNUSED_PICKEDROWLET, CoralgroveTradeSequence_9
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, CoralgroveTradeSequence_10
	goto CoralgrovePrinplupTrade
	return

CoralgroveTradeSequence_1:
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_STARTER_STONE, CoralgroveTradeSequence_7
CoralgroveTradeSequence_6:
	goto_if_set FLAG_TEMP_3, CoralgroveTradeSequence_15
	playse SE_PIN
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 0
	delay 24
	msgbox LookingForStone
CoralgroveTradeSequence_14:
	closemessage
	checkitemspace ITEM_INCINEROARITE
	compare VAR_RESULT, FALSE
	goto_if_eq CoralgroveTradeSequence_19
	switch VAR_STARTER_MON
	case 0, CoralgroveTradeSequence_23
	case 1, CoralgroveTradeSequence_24
	case 2, CoralgroveTradeSequence_25
CoralgroveTradeSequence_21:
	waitse
	msgbox HoldTightToStone, MSGBOX_NPC
	setflag FLAG_OBTAINED_STARTER_STONE
	end

CoralgroveTradeSequence_3:
	goto_if_set FLAG_OBTAINED_MEGA_RING, CoralgroveTradeSequence_1
	goto CoralgroveTradeSequence_2

CoralgroveTradeSequence_7:
	goto CoralgroveTradeCompleted
	goto CoralgroveTradeSequence_6

CoralgroveTradeSequence_9:
	goto CoralgroveDartrixTrade
	return

CoralgroveTradeSequence_10:
	goto CoralgroveCombuskenTrade
	return

CoralgroveTradeSequence_15:
	msgbox LookingForStoneShort
	goto CoralgroveTradeSequence_14

CoralgroveTradeSequence_19:
	setflag FLAG_TEMP_3
	msgbox NotEnoughRoom, MSGBOX_NPC
	end

CoralgroveTradeSequence_23:
	giveitem ITEM_CHESNAUGHTITE
	goto CoralgroveTradeSequence_21

CoralgroveTradeSequence_24:
	giveitem ITEM_INCINEROARITE
	goto CoralgroveTradeSequence_21

CoralgroveTradeSequence_25:
	giveitem ITEM_SWAMPERTITE
	goto CoralgroveTradeSequence_21


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


LookingForStoneShort::
	.string "Here's the stone you were looking for.$"

LookingForStone::
	.string "You're looking for a what stone?\p"
	.string "… … … … …\p"
	.string "Oh yeah, I do remember that!\n"
	.string "My Pokémon used to love that stone!\p"
	.string "Well, if it helps making it even\n"
	.string "stronger, I guess I can let go of it.\p"
	.string "Here you go.$"

HoldTightToStone::
	.string "I hope it becomes useful during your\n"
	.string "journeys!$"

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
