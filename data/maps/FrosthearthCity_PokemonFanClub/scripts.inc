FrosthearthCity_PokemonFanClub_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	switch VAR_FROSTHEARTH_TRADE_MON
	case 1, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	case 5, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	case 6, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	case 7, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	clearflag FLAG_TEMP_1
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	clearflag FLAG_TEMP_2
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	clearflag FLAG_TEMP_3
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	clearflag FLAG_TEMP_4
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	clearflag FLAG_TEMP_5
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	clearflag FLAG_TEMP_6
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	clearflag FLAG_TEMP_7
	return


Frosthearth_FanClubTrader_Weezing::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_WEEZING, Frosthearth_FanClubTrader_Weezing_2
Frosthearth_FanClubTrader_Weezing_1:
	setvar VAR_0x8008, INGAME_TRADE_WEEZING
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeWeezing, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_WEEZING
	release
	end

Frosthearth_FanClubTrader_Weezing_2:
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Weezing_1


Frosthearth_FanClubTrader_Farfetchd::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_FARFETCHD, Frosthearth_FanClubTrader_Farfetchd_2
Frosthearth_FanClubTrader_Farfetchd_1:
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeFarfetchd, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_FARFETCHD
	release
	end

Frosthearth_FanClubTrader_Farfetchd_2:
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Farfetchd_1


Frosthearth_FanClubTrader_MrMime::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_MR_MIME, Frosthearth_FanClubTrader_MrMime_2
Frosthearth_FanClubTrader_MrMime_1:
	setvar VAR_0x8008, INGAME_TRADE_MRMIME
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeMrMime, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_MR_MIME
	release
	end

Frosthearth_FanClubTrader_MrMime_2:
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_MrMime_1


Frosthearth_FanClubTrader_Rattata::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_RATTATA, Frosthearth_FanClubTrader_Rattata_2
Frosthearth_FanClubTrader_Rattata_1:
	setvar VAR_0x8008, INGAME_TRADE_RATTATA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeRattata, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_RATTATA
	release
	end

Frosthearth_FanClubTrader_Rattata_2:
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Rattata_1


Frosthearth_FanClubTrader_Geodude::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_GEODUDE, Frosthearth_FanClubTrader_Geodude_2
Frosthearth_FanClubTrader_Geodude_1:
	setvar VAR_0x8008, INGAME_TRADE_GEODUDE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeGeodude, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_GEODUDE
	release
	end

Frosthearth_FanClubTrader_Geodude_2:
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Geodude_1


Frosthearth_FanClubTrader_Grimer::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_GRIMER, Frosthearth_FanClubTrader_Grimer_2
Frosthearth_FanClubTrader_Grimer_1:
	setvar VAR_0x8008, INGAME_TRADE_GRIMER
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeGrimer, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_GRIMER
	release
	end

Frosthearth_FanClubTrader_Grimer_2:
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Grimer_1


Frosthearth_FanClubTrader_Darumaka::
	lock
	faceplayer
	goto_if_set FLAG_TRADED_DARUMAKA, Frosthearth_FanClubTrader_Darumaka_2
Frosthearth_FanClubTrader_Darumaka_1:
	setvar VAR_0x8008, INGAME_TRADE_DARUMAKA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeDarumaka, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_DARUMAKA
	release
	end

Frosthearth_FanClubTrader_Darumaka_2:
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Darumaka_1


FanClub_WantToTradeWeezing::
	.string "My silly Weezing with its top hat\n"
	.string "keeps bumping against everything and\l"
	.string "wrecking everything.\p"
	.string "I don't think I can keep him around\n"
	.string "any longer.\p"
	.string "I've heard that there are Weezings\n"
	.string "without top hats.\p"
	.string "If you have one, would you like to\n"
	.string "trade it for my Weezing?$"

FanClub_WantToTradeFarfetchd::
	.string "I got this Farfetch'd when I was\n"
	.string "visiting Galar some time ago.\p"
	.string "It's cool and all, but I specialize\n"
	.string "in Flying-type Pokémon, and this one\l"
	.string "somehow isn't one.\p"
	.string "Would you like to trade it for a\n"
	.string "Flying-type Farfetch'd?$"

FanClub_WantToTradeMrMime::
	.string "I found this Mr. Mime the other day,\n"
	.string "but I don't know…\l"
	.string "It looks kinda weird…\p"
	.string "Do you wanna trade it for a\n"
	.string "regular Mr. Mime?$"

FanClub_WantToTradeRattata::
	.string "My Rattata is in the top percentage\n"
	.string "of Rattatas.\p"
	.string "However, I feel like normal Rattatas\n"
	.string "aren't in the fashion anymore.\p"
	.string "Do you have any exotic\n"
	.string "Rattatas around here?\p"
	.string "I'd happily trade mine for one.$"

FanClub_WantToTradeGeodude::
	.string "My Geodude has this nasty habit of\n"
	.string "zapping me every now and then.\p"
	.string "Do you have a Geodude that isn't\n"
	.string "an Electric-type?\p"
	.string "I'll gladly trade mine for one.$"

FanClub_WantToTradeGrimer::
	.string "I was fooled into buying this shiny\n"
	.string "Grimer, when in fact it's just a\l"
	.string "regular Grimer from another region!\p"
	.string "Do you want it?\p"
	.string "I'd be fine trading it for a\n"
	.string "regular Grimer.$"

FanClub_WantToTradeDarumaka::
	.string "I hear the Darumakas around here\n"
	.string "are feisty and burn with passion.\p"
	.string "I've got this much cooler Darumaka\n"
	.string "from a much colder part of the world.\p"
	.string "Care to trade?$"
