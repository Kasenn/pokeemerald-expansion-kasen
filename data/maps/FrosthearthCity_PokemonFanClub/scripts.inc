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
	.string "$"

FanClub_WantToTradeFarfetchd::
	.string "$"

FanClub_WantToTradeMrMime::
	.string "$"

FanClub_WantToTradeRattata::
	.string "$"

FanClub_WantToTradeGeodude::
	.string "$"

FanClub_WantToTradeGrimer::
	.string "$"

FanClub_WantToTradeDarumaka::
	.string "$"
