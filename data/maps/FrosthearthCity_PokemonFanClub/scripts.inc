FrosthearthCity_PokemonFanClub_MapScripts::
# 10 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_2
# 13 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_4
# 15 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_5
# 16 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_6
# 17 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_7
# 18 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	switch VAR_FROSTHEARTH_TRADE_MON
# 19 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	case 1, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 21 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	case 2, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	case 3, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	case 4, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 27 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	case 5, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 29 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	case 6, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 31 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	case 7, FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_1
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 22 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_2
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_3
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_4
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 28 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_5
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 30 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_6
	return

FrosthearthCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_7
	return


Frosthearth_FanClubTrader_Weezing::
# 38 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	lock
# 39 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	faceplayer
# 40 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TRADED_WEEZING, Frosthearth_FanClubTrader_Weezing_2
Frosthearth_FanClubTrader_Weezing_1:
# 43 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_WEEZING
# 44 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 45 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 46 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	msgbox FanClub_WantToTradeWeezing, MSGBOX_YESNO
# 47 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	call FanClub_TradeSetup
# 48 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TRADED_WEEZING
# 49 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	release
	end

Frosthearth_FanClubTrader_Weezing_2:
# 41 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Weezing_1


Frosthearth_FanClubTrader_Farfetchd::
# 53 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	lock
# 54 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	faceplayer
# 55 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TRADED_FARFETCHD, Frosthearth_FanClubTrader_Farfetchd_2
Frosthearth_FanClubTrader_Farfetchd_1:
# 58 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 59 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 60 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 61 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	msgbox FanClub_WantToTradeFarfetchd, MSGBOX_YESNO
# 62 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	call FanClub_TradeSetup
# 63 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TRADED_FARFETCHD
# 64 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	release
	end

Frosthearth_FanClubTrader_Farfetchd_2:
# 56 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Farfetchd_1


Frosthearth_FanClubTrader_MrMime::
# 68 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	lock
# 69 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	faceplayer
# 70 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TRADED_MR_MIME, Frosthearth_FanClubTrader_MrMime_2
Frosthearth_FanClubTrader_MrMime_1:
# 73 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MRMIME
# 74 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 75 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 76 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	msgbox FanClub_WantToTradeMrMime, MSGBOX_YESNO
# 77 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	call FanClub_TradeSetup
# 78 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TRADED_MR_MIME
# 79 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	release
	end

Frosthearth_FanClubTrader_MrMime_2:
# 71 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_MrMime_1


Frosthearth_FanClubTrader_Rattata::
# 83 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	lock
# 84 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	faceplayer
# 85 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TRADED_RATTATA, Frosthearth_FanClubTrader_Rattata_2
Frosthearth_FanClubTrader_Rattata_1:
# 88 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_RATTATA
# 89 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 90 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 91 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	msgbox FanClub_WantToTradeRattata, MSGBOX_YESNO
# 92 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	call FanClub_TradeSetup
# 93 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TRADED_RATTATA
# 94 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	release
	end

Frosthearth_FanClubTrader_Rattata_2:
# 86 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Rattata_1


Frosthearth_FanClubTrader_Geodude::
# 98 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	lock
# 99 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	faceplayer
# 100 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TRADED_GEODUDE, Frosthearth_FanClubTrader_Geodude_2
Frosthearth_FanClubTrader_Geodude_1:
# 103 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GEODUDE
# 104 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 105 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 106 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	msgbox FanClub_WantToTradeGeodude, MSGBOX_YESNO
# 107 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	call FanClub_TradeSetup
# 108 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TRADED_GEODUDE
# 109 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	release
	end

Frosthearth_FanClubTrader_Geodude_2:
# 101 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Geodude_1


Frosthearth_FanClubTrader_Grimer::
# 113 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	lock
# 114 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	faceplayer
# 115 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TRADED_GRIMER, Frosthearth_FanClubTrader_Grimer_2
Frosthearth_FanClubTrader_Grimer_1:
# 118 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GRIMER
# 119 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 120 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 121 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	msgbox FanClub_WantToTradeGrimer, MSGBOX_YESNO
# 122 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	call FanClub_TradeSetup
# 123 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TRADED_GRIMER
# 124 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	release
	end

Frosthearth_FanClubTrader_Grimer_2:
# 116 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Grimer_1


Frosthearth_FanClubTrader_Darumaka::
# 128 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	lock
# 129 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	faceplayer
# 130 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TRADED_DARUMAKA, Frosthearth_FanClubTrader_Darumaka_2
Frosthearth_FanClubTrader_Darumaka_1:
# 133 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DARUMAKA
# 134 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 135 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 136 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	msgbox FanClub_WantToTradeDarumaka, MSGBOX_YESNO
# 137 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	call FanClub_TradeSetup
# 138 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TRADED_DARUMAKA
# 139 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	release
	end

Frosthearth_FanClubTrader_Darumaka_2:
# 131 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	goto FanClubTradeCompleted
	goto Frosthearth_FanClubTrader_Darumaka_1


FanClub_WantToTradeWeezing::
# 143 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
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
# 154 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	.string "I got this Farfetch'd when I was\n"
	.string "visiting Galar some time ago.\p"
	.string "It's cool and all, but I specialize\n"
	.string "in Flying-type Pokémon, and this one\l"
	.string "somehow isn't one.\p"
	.string "Would you like to trade it for a\n"
	.string "Flying-type Farfetch'd?$"

FanClub_WantToTradeMrMime::
# 163 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	.string "I found this Mr. Mime the other day,\n"
	.string "but I don't know…\l"
	.string "It looks kinda weird…\p"
	.string "Do you wanna trade it for a\n"
	.string "regular Mr. Mime?$"

FanClub_WantToTradeRattata::
# 170 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	.string "My Rattata is in the top percentage\n"
	.string "of Rattatas.\p"
	.string "However, I feel like normal Rattatas\n"
	.string "aren't in the fashion anymore.\p"
	.string "Do you have any exotic\n"
	.string "Rattatas around here?\p"
	.string "I'd happily trade mine for one.$"

FanClub_WantToTradeGeodude::
# 179 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	.string "My Geodude has this nasty habit of\n"
	.string "zapping me every now and then.\p"
	.string "Do you have a Geodude that isn't\n"
	.string "an Electric-type?\p"
	.string "I'll gladly trade mine for one.$"

FanClub_WantToTradeGrimer::
# 186 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	.string "I was fooled into buying this shiny\n"
	.string "Grimer, when in fact it's just a\l"
	.string "regular Grimer from another region!\p"
	.string "Do you want it?\p"
	.string "I'd be fine trading it for a\n"
	.string "regular Grimer.$"

FanClub_WantToTradeDarumaka::
# 194 "data/maps/FrosthearthCity_PokemonFanClub/scripts.pory"
	.string "I hear the Darumakas around here\n"
	.string "are feisty and burn with passion.\p"
	.string "I've got this much cooler Darumaka\n"
	.string "from a much colder part of the world.\p"
	.string "Care to trade?$"
