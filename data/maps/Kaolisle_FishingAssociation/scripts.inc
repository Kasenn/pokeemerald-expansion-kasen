Kaolisle_FishingAssociation_MapScripts::
# 2 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetFanClubTrade
# 3 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetFanClubTrade
	.byte 0


SetFanClubTrade::
# 7 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_GROWLITHE, SetFanClubTrade_3
SetFanClubTrade_1:
# 17 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_DAILY_FANCLUBTRADE, SetFanClubTrade_19
# 17 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_FANCLUB_TRADESOVER, SetFanClubTrade_19
# 20 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	random 8
# 21 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_FANCLUB_TRADE, VAR_RESULT
# 22 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_DAILY_FANCLUBTRADE
# 23 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call RandomizeFanClubTrader
	end

SetFanClubTrade_2:
# 15 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_FANCLUB_TRADESOVER
	goto SetFanClubTrade_1

SetFanClubTrade_3:
# 8 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_VOLTORB, SetFanClubTrade_5
	goto SetFanClubTrade_1

SetFanClubTrade_5:
# 9 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_QWILFISH, SetFanClubTrade_7
	goto SetFanClubTrade_1

SetFanClubTrade_7:
# 10 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_SNEASEL, SetFanClubTrade_9
	goto SetFanClubTrade_1

SetFanClubTrade_9:
# 11 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_ZORUA, SetFanClubTrade_11
	goto SetFanClubTrade_1

SetFanClubTrade_11:
# 12 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_BULBASAUR, SetFanClubTrade_13
	goto SetFanClubTrade_1

SetFanClubTrade_13:
# 13 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_CHARMANDER, SetFanClubTrade_15
	goto SetFanClubTrade_1

SetFanClubTrade_15:
# 14 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_SQUIRTLE, SetFanClubTrade_2
	goto SetFanClubTrade_1

SetFanClubTrade_19:
	end


RandomNumberFanClub::
# 28 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	random 8
# 29 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_FANCLUB_TRADE, VAR_RESULT
# 30 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomizeFanClubTrader
	end


RandomizeFanClubTrader::
# 35 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	switch VAR_FANCLUB_TRADE
# 36 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 0, RandomizeFanClubTrader_3
# 40 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 1, RandomizeFanClubTrader_4
# 44 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 2, RandomizeFanClubTrader_5
# 48 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 3, RandomizeFanClubTrader_6
# 52 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 4, RandomizeFanClubTrader_7
# 56 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 5, RandomizeFanClubTrader_8
# 60 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 6, RandomizeFanClubTrader_9
# 64 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 7, RandomizeFanClubTrader_10
RandomizeFanClubTrader_1:
	return

RandomizeFanClubTrader_3:
# 37 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_GROWLITHE, RandomizeFanClubTrader_12
RandomizeFanClubTrader_11:
# 39 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEFAN_M
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_4:
# 41 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_VOLTORB, RandomizeFanClubTrader_15
RandomizeFanClubTrader_14:
# 43 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAN_5
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_5:
# 45 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_QWILFISH, RandomizeFanClubTrader_18
RandomizeFanClubTrader_17:
# 47 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MANIAC
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_6:
# 49 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_SNEASEL, RandomizeFanClubTrader_21
RandomizeFanClubTrader_20:
# 51 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_NINJA_BOY
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_7:
# 53 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_ZORUA, RandomizeFanClubTrader_24
RandomizeFanClubTrader_23:
# 55 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_GENTLEMAN
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_8:
# 57 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_BULBASAUR, RandomizeFanClubTrader_27
RandomizeFanClubTrader_26:
# 59 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_WOMAN_2
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_9:
# 61 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_CHARMANDER, RandomizeFanClubTrader_30
RandomizeFanClubTrader_29:
# 63 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_CAMPER
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_10:
# 65 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_SQUIRTLE, RandomizeFanClubTrader_33
RandomizeFanClubTrader_32:
# 67 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_FISHERMAN
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_12:
# 38 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_11

RandomizeFanClubTrader_15:
# 42 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_14

RandomizeFanClubTrader_18:
# 46 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_17

RandomizeFanClubTrader_21:
# 50 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_20

RandomizeFanClubTrader_24:
# 54 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_23

RandomizeFanClubTrader_27:
# 58 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_26

RandomizeFanClubTrader_30:
# 62 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_29

RandomizeFanClubTrader_33:
# 66 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_32


Kaolisle_FanClub_Boy::
# 73 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_Boy_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Woman::
# 84 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_Woman_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Lass::
# 94 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_Lass_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_LittleGirl::
# 106 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_LittleGirl_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Spheal::
# 115 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 116 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 117 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	waitse
# 118 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 119 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_Spheal_Text, MSGBOX_DEFAULT
# 120 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	waitmoncry
# 121 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


Kaolisle_FanClub_NinjaBoy::
# 128 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_NinjaBoy_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Poochyena::
# 136 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 137 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 138 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	waitse
# 139 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 140 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_Poochyena_Text, MSGBOX_DEFAULT
# 141 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	waitmoncry
# 142 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


Kaolisle_FanClub_Man::
# 149 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_Man_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Interviewer::
# 161 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_Interviewer_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_ExpertF::
# 171 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Kaolisle_FanClub_ExpertF_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Trader::
# 190 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	switch VAR_FANCLUB_TRADE
# 191 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 0, Kaolisle_FanClub_Trader_2
# 193 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 1, Kaolisle_FanClub_Trader_3
# 195 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 2, Kaolisle_FanClub_Trader_4
# 197 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 3, Kaolisle_FanClub_Trader_5
# 199 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 4, Kaolisle_FanClub_Trader_6
# 201 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 5, Kaolisle_FanClub_Trader_7
# 203 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 6, Kaolisle_FanClub_Trader_8
# 205 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	case 7, Kaolisle_FanClub_Trader_9
	return

Kaolisle_FanClub_Trader_2:
# 192 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeGrowlithe
	return

Kaolisle_FanClub_Trader_3:
# 194 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeVoltorb
	return

Kaolisle_FanClub_Trader_4:
# 196 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeQwilfish
	return

Kaolisle_FanClub_Trader_5:
# 198 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeSneasel
	return

Kaolisle_FanClub_Trader_6:
# 200 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeZorua
	return

Kaolisle_FanClub_Trader_7:
# 202 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeBulbasaur
	return

Kaolisle_FanClub_Trader_8:
# 204 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeCharmander
	return

Kaolisle_FanClub_Trader_9:
# 206 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call TradeSquirtle
	return


FanClub_TradeSetup::
# 210 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FanClub_TradeDecline
# 211 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	special ChoosePartyMon
# 212 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	waitstate
# 213 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FanClub_TradeDecline
# 214 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 215 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 216 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, FanClub_NotRequestedMon
# 217 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 218 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	special CreateInGameTradePokemon
# 219 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	special DoInGameTradeScene
# 220 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	waitstate
# 221 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox Fanclub_TradeThanks, MSGBOX_DEFAULT
	return


TradeGrowlithe::
# 225 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 226 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 227 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_GROWLITHE, FanClubTradeCompleted
# 228 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GROWLITHE
# 229 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 230 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 231 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeGrowlithe, MSGBOX_YESNO
# 232 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 233 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_GROWLITHE
# 234 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


TradeVoltorb::
# 238 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 239 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 240 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_VOLTORB, FanClubTradeCompleted
# 241 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
# 242 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 243 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 244 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeVoltorb, MSGBOX_YESNO
# 245 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 246 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_VOLTORB
# 247 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


TradeQwilfish::
# 251 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 252 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 253 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_QWILFISH, FanClubTradeCompleted
# 254 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_QWILFISH
# 255 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 256 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 257 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeQwilfish, MSGBOX_YESNO
# 258 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 259 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_QWILFISH
# 260 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


TradeSneasel::
# 264 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 265 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 266 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_SNEASEL, FanClubTradeCompleted
# 267 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SNEASEL
# 268 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 269 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 270 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeSneasel, MSGBOX_YESNO
# 271 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 272 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_SNEASEL
# 273 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


TradeZorua::
# 277 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 278 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 279 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_ZORUA, FanClubTradeCompleted
# 280 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ZORUA
# 281 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 282 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 283 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeZorua, MSGBOX_YESNO
# 284 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 285 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_ZORUA
# 286 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


TradeBulbasaur::
# 290 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 291 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 292 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_BULBASAUR, FanClubTradeCompleted
# 293 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BULBASAUR
# 294 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 295 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 296 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeBulbasaur, MSGBOX_YESNO
# 297 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 298 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_BULBASAUR
# 299 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


TradeCharmander::
# 303 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 304 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 305 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_CHARMANDER, FanClubTradeCompleted
# 306 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_CHARMANDER
# 307 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 308 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 309 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeCharmander, MSGBOX_YESNO
# 310 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 311 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_CHARMANDER
# 312 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


TradeSquirtle::
# 316 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	lock
# 317 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	faceplayer
# 318 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	goto_if_set FLAG_TRADED_SQUIRTLE, FanClubTradeCompleted
# 319 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SQUIRTLE
# 320 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 321 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 322 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WantToTradeSquirtle, MSGBOX_YESNO
# 323 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	call FanClub_TradeSetup
# 324 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	setflag FLAG_TRADED_SQUIRTLE
# 325 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	release
	end


FanClub_TradeDecline::
# 420 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_TradeDeclineText, MSGBOX_NPC
	end


FanClub_NotRequestedMon::
# 427 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 428 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_WrongMonText, MSGBOX_NPC
	end


FanClubTradeCompleted::
# 435 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	msgbox FanClub_TradeCompleteText, MSGBOX_NPC
	end


Kaolisle_FanClub_Boy_Text::
# 76 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Pokémon are very sensitive to\n"
	.string "the feelings of their trainers.\p"
	.string "If you treat your Pokémon with love\n"
	.string "and care, they'll love you back.$"

Kaolisle_FanClub_Woman_Text::
# 87 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Have you seen the outfit the\n"
	.string "Pokémon League Champion wears?\l"
	.string "It is absolutely gorgeous!$"

Kaolisle_FanClub_Lass_Text::
# 97 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "I can't believe the types of Pokémon\n"
	.string "some of those Pokémon League\l"
	.string "Elite Four trainers use.\p"
	.string "I don't think some of those have\n"
	.string "ever been seen in a League before!$"

Kaolisle_FanClub_LittleGirl_Text::
# 109 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "My Spheal is the cutest!\p"
	.string "It's so round and soft and cuddly and\n"
	.string "friendly and happy and huggable and…$"

Kaolisle_FanClub_Spheal_Text::
# 124 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Spheal: Sphen!$"

Kaolisle_FanClub_NinjaBoy_Text::
# 131 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "That Spheal is pretty cute, but it's\n"
	.string "nowhere near as cool as my Poochyena!$"

Kaolisle_FanClub_Poochyena_Text::
# 145 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Poochyena: Bow! Bowwow!$"

Kaolisle_FanClub_Man_Text::
# 152 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "If you keep letting a Pokémon faint\n"
	.string "in battle, it'll come to resent it.\p"
	.string "Soon, it will become less trusting\n"
	.string "of the trainer.\p"
	.string "In other words, it certainly won't\n"
	.string "like you very much.$"

Kaolisle_FanClub_Interviewer_Text::
# 164 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Do Pokémon enjoy having items used\n"
	.string "on them?\p"
	.string "Mine acted really happy when I gave\n"
	.string "it some Protein.$"

Kaolisle_FanClub_ExpertF_Text::
# 174 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Welcome to the Kaolisle Pokémon\n"
	.string "Fan Club.\p"
	.string "Many trainers like to gather here to\n"
	.string "talk about Pokémon and do all sorts of\l"
	.string "Pokémon related activities.\p"
	.string "One thing people here like to do is\n"
	.string "trade Pokémon.\p"
	.string "Almost every day there's somebody\n"
	.string "different here looking to trade.\p"
	.string "If you too would like to trade,\n"
	.string "just talk to the person standing\l"
	.string "next to the table.$"

FanClub_WantToTradeGrowlithe::
# 329 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Where I come from we have this\n"
	.string "different breed of Growlithe,\l"
	.string "often referred to as “Hisuian”\l"
	.string "in other regions.\p"
	.string "Say, do you have a {STR_VAR_1}?\p"
	.string "Maybe you'd like to trade one\n"
	.string "Growlithe for another?$"

FanClub_WantToTradeVoltorb::
# 338 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "One day I came across this really\n"
	.string "old-looking Voltorb.\p"
	.string "It's almost like it's made out\n"
	.string "of wood!\p"
	.string "The thing is, I really wanted one with\n"
	.string "a slicker and shinier look.\p"
	.string "Say, do you have one of those more\n"
	.string "modern looking Voltorbs?\p"
	.string "Wouldn't you like to have a real\n"
	.string "antique-looking one instead?$"

FanClub_WantToTradeQwilfish::
# 350 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "I found this really weird Qwilfish\n"
	.string "when I was visiting abroad.\p"
	.string "I have to be frank, I'm not sure\n"
	.string "I like its dark coloring.\p"
	.string "Do you have a regular Qwilfish?\p"
	.string "Would you like to trade it for\n"
	.string "this darker, edgier looking one?$"

FanClub_WantToTradeSneasel::
# 359 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "I was under the impression that\n"
	.string "Sneasels were Dark-type, but for some\l"
	.string "reason mine isn't.\p"
	.string "This one doesn't really fit a ninja\n"
	.string "like me.\p"
	.string "If you have a Dark-type Sneasel,\n"
	.string "I'd gladly trade you mine.$"

FanClub_WantToTradeZorua::
# 368 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "On one of my business trips,\n"
	.string "I came across this peculiar Pokémon.\l"
	.string "The locals called it “Hisuian Zorua.”\p"
	.string "This one seems a bit rash and doesn't\n"
	.string "seem to like my company so maybe it\l"
	.string "would be better left in the hands of\l"
	.string "a capable trainer.\p"
	.string "From what I've been able to gather,\n"
	.string "regular Zoruas can be found somewhere\l"
	.string "here in Sinko.\p"
	.string "If you've come across a regular Zorua,\n"
	.string "perhaps you would like to trade it for\l"
	.string "something more exquisite?$"

FanClub_WantToTradeBulbasaur::
# 383 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "My family and I came here all the way\n"
	.string "from Kanto for a holiday.\p"
	.string "From what I've heard, There are many\n"
	.string "Pokémon in Kanto that aren't normally\l"
	.string "available in Sinko.\p"
	.string "Of course, the same goes\n"
	.string "the other way.\p"
	.string "In any case, I've bought with me\n"
	.string "a Kanto-exclusive Pokémon, Bulbasaur!\p"
	.string "I've heard about this really cute bird\n"
	.string "called the Rowlet.\p"
	.string "Have you got one?\p"
	.string "I'd happily trade my Bulbasaur for\n"
	.string "a Rowlet.$"

FanClub_WantToTradeCharmander::
# 399 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "I love Torchics!\p"
	.string "They're so cute and fluffy and their\n"
	.string "evolution is simply way too cool!\p"
	.string "Do you have a Torchic?\p"
	.string "I can trade you this Charmander\p"
	.string "for one.$"

FanClub_WantToTradeSquirtle::
# 407 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "For some reason this Squirtle wouldn't\n"
	.string "stop following me.\p"
	.string "In my frustration, I threw a Poké Ball\n"
	.string "at it and ended up capturing it.\p"
	.string "The thing is, I don't really want\n"
	.string "a Squirtle.\p"
	.string "If you want, I could trade it for some\n"
	.string "other Water-type Pokémon.\l"
	.string "Maybe a Piplup?$"

FanClub_TradeDeclineText::
# 423 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Let me know if you change your mind.$"

FanClub_WrongMonText::
# 431 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "I'm sorry, but that's\nnot a {STR_VAR_1}.$"

FanClub_TradeCompleteText::
# 438 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Thank you for the trade!$"

Fanclub_TradeThanks::
# 441 "data/maps/Kaolisle_FishingAssociation/scripts.pory"
	.string "Take care of your new Pokémon!$"
