Kaolisle_FishingAssociation_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SetFanClubTrade
	map_script MAP_SCRIPT_ON_TRANSITION, SetFanClubTrade
	.byte 0


SetFanClubTrade::
	goto_if_set FLAG_TRADED_GROWLITHE, SetFanClubTrade_3
SetFanClubTrade_1:
	goto_if_set FLAG_DAILY_FANCLUBTRADE, SetFanClubTrade_19
	goto_if_set FLAG_FANCLUB_TRADESOVER, SetFanClubTrade_19
	random 8
	copyvar VAR_FANCLUB_TRADE, VAR_RESULT
	setflag FLAG_DAILY_FANCLUBTRADE
	call RandomizeFanClubTrader
	end

SetFanClubTrade_2:
	setflag FLAG_FANCLUB_TRADESOVER
	goto SetFanClubTrade_1

SetFanClubTrade_3:
	goto_if_set FLAG_TRADED_VOLTORB, SetFanClubTrade_5
	goto SetFanClubTrade_1

SetFanClubTrade_5:
	goto_if_set FLAG_TRADED_QWILFISH, SetFanClubTrade_7
	goto SetFanClubTrade_1

SetFanClubTrade_7:
	goto_if_set FLAG_TRADED_SNEASEL, SetFanClubTrade_9
	goto SetFanClubTrade_1

SetFanClubTrade_9:
	goto_if_set FLAG_TRADED_ZORUA, SetFanClubTrade_11
	goto SetFanClubTrade_1

SetFanClubTrade_11:
	goto_if_set FLAG_TRADED_BULBASAUR, SetFanClubTrade_13
	goto SetFanClubTrade_1

SetFanClubTrade_13:
	goto_if_set FLAG_TRADED_CHARMANDER, SetFanClubTrade_15
	goto SetFanClubTrade_1

SetFanClubTrade_15:
	goto_if_set FLAG_TRADED_SQUIRTLE, SetFanClubTrade_2
	goto SetFanClubTrade_1

SetFanClubTrade_19:
	end


RandomNumberFanClub::
	random 8
	copyvar VAR_FANCLUB_TRADE, VAR_RESULT
	goto RandomizeFanClubTrader
	end


RandomizeFanClubTrader::
	switch VAR_FANCLUB_TRADE
	case 0, RandomizeFanClubTrader_3
	case 1, RandomizeFanClubTrader_4
	case 2, RandomizeFanClubTrader_5
	case 3, RandomizeFanClubTrader_6
	case 4, RandomizeFanClubTrader_7
	case 5, RandomizeFanClubTrader_8
	case 6, RandomizeFanClubTrader_9
	case 7, RandomizeFanClubTrader_10
RandomizeFanClubTrader_1:
	return

RandomizeFanClubTrader_3:
	goto_if_set FLAG_TRADED_GROWLITHE, RandomizeFanClubTrader_12
RandomizeFanClubTrader_11:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEFAN_M
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_4:
	goto_if_set FLAG_TRADED_VOLTORB, RandomizeFanClubTrader_15
RandomizeFanClubTrader_14:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAN_5
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_5:
	goto_if_set FLAG_TRADED_QWILFISH, RandomizeFanClubTrader_18
RandomizeFanClubTrader_17:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MANIAC
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_6:
	goto_if_set FLAG_TRADED_SNEASEL, RandomizeFanClubTrader_21
RandomizeFanClubTrader_20:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_NINJA_BOY
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_7:
	goto_if_set FLAG_TRADED_ZORUA, RandomizeFanClubTrader_24
RandomizeFanClubTrader_23:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_GENTLEMAN
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_8:
	goto_if_set FLAG_TRADED_BULBASAUR, RandomizeFanClubTrader_27
RandomizeFanClubTrader_26:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_WOMAN_2
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_9:
	goto_if_set FLAG_TRADED_CHARMANDER, RandomizeFanClubTrader_30
RandomizeFanClubTrader_29:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_CAMPER
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_10:
	goto_if_set FLAG_TRADED_SQUIRTLE, RandomizeFanClubTrader_33
RandomizeFanClubTrader_32:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_FISHERMAN
	goto RandomizeFanClubTrader_1

RandomizeFanClubTrader_12:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_11

RandomizeFanClubTrader_15:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_14

RandomizeFanClubTrader_18:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_17

RandomizeFanClubTrader_21:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_20

RandomizeFanClubTrader_24:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_23

RandomizeFanClubTrader_27:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_26

RandomizeFanClubTrader_30:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_29

RandomizeFanClubTrader_33:
	goto RandomNumberFanClub
	goto RandomizeFanClubTrader_32


Kaolisle_FanClub_Boy::
	msgbox Kaolisle_FanClub_Boy_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Woman::
	msgbox Kaolisle_FanClub_Woman_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Lass::
	msgbox Kaolisle_FanClub_Lass_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_LittleGirl::
	msgbox Kaolisle_FanClub_LittleGirl_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Spheal::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
	msgbox Kaolisle_FanClub_Spheal_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Kaolisle_FanClub_NinjaBoy::
	msgbox Kaolisle_FanClub_NinjaBoy_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Poochyena::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox Kaolisle_FanClub_Poochyena_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Kaolisle_FanClub_Man::
	msgbox Kaolisle_FanClub_Man_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Interviewer::
	msgbox Kaolisle_FanClub_Interviewer_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_ExpertF::
	msgbox Kaolisle_FanClub_ExpertF_Text, MSGBOX_NPC
	end


Kaolisle_FanClub_Trader::
	switch VAR_FANCLUB_TRADE
	case 0, Kaolisle_FanClub_Trader_2
	case 1, Kaolisle_FanClub_Trader_3
	case 2, Kaolisle_FanClub_Trader_4
	case 3, Kaolisle_FanClub_Trader_5
	case 4, Kaolisle_FanClub_Trader_6
	case 5, Kaolisle_FanClub_Trader_7
	case 6, Kaolisle_FanClub_Trader_8
	case 7, Kaolisle_FanClub_Trader_9
	return

Kaolisle_FanClub_Trader_2:
	call TradeGrowlithe
	return

Kaolisle_FanClub_Trader_3:
	call TradeVoltorb
	return

Kaolisle_FanClub_Trader_4:
	call TradeQwilfish
	return

Kaolisle_FanClub_Trader_5:
	call TradeSneasel
	return

Kaolisle_FanClub_Trader_6:
	call TradeZorua
	return

Kaolisle_FanClub_Trader_7:
	call TradeBulbasaur
	return

Kaolisle_FanClub_Trader_8:
	call TradeCharmander
	return

Kaolisle_FanClub_Trader_9:
	call TradeSquirtle
	return


FanClub_TradeSetup::
	goto_if_eq VAR_RESULT, NO, FanClub_TradeDecline
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FanClub_TradeDecline
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, FanClub_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox Fanclub_TradeThanks, MSGBOX_DEFAULT
	return


TradeGrowlithe::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_GROWLITHE, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_GROWLITHE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeGrowlithe, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_GROWLITHE
	release
	end


TradeVoltorb::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_VOLTORB, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeVoltorb, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_VOLTORB
	release
	end


TradeQwilfish::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_QWILFISH, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_QWILFISH
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeQwilfish, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_QWILFISH
	release
	end


TradeSneasel::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_SNEASEL, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SNEASEL
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeSneasel, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_SNEASEL
	release
	end


TradeZorua::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_ZORUA, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_ZORUA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeZorua, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_ZORUA
	release
	end


TradeBulbasaur::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_BULBASAUR, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_BULBASAUR
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeBulbasaur, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_BULBASAUR
	release
	end


TradeCharmander::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_CHARMANDER, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_CHARMANDER
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeCharmander, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_CHARMANDER
	release
	end


TradeSquirtle::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_SQUIRTLE, FanClubTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SQUIRTLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FanClub_WantToTradeSquirtle, MSGBOX_YESNO
	call FanClub_TradeSetup
	setflag FLAG_TRADED_SQUIRTLE
	release
	end


FanClub_TradeDecline::
	msgbox FanClub_TradeDeclineText, MSGBOX_NPC
	end


FanClub_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FanClub_WrongMonText, MSGBOX_NPC
	end


FanClubTradeCompleted::
	msgbox FanClub_TradeCompleteText, MSGBOX_NPC
	end


Kaolisle_FanClub_Boy_Text::
	.string "Pokémon are very sensitive to\n"
	.string "the feelings of their trainers.\p"
	.string "If you treat your Pokémon with love\n"
	.string "and care, they'll love you back.$"

Kaolisle_FanClub_Woman_Text::
	.string "Have you seen the outfit the\n"
	.string "Pokémon League Champion wears?\l"
	.string "It is absolutely gorgeous!$"

Kaolisle_FanClub_Lass_Text::
	.string "I can't believe the types of Pokémon\n"
	.string "some of those Pokémon League\l"
	.string "Elite Four trainers use.\p"
	.string "I don't think some of those have\n"
	.string "ever been seen in a League before!$"

Kaolisle_FanClub_LittleGirl_Text::
	.string "My Spheal is the cutest!\p"
	.string "It's so round and soft and cuddly and\n"
	.string "friendly and happy and huggable and…$"

Kaolisle_FanClub_Spheal_Text::
	.string "Spheal: Sphen!$"

Kaolisle_FanClub_NinjaBoy_Text::
	.string "That Spheal is pretty cute, but it's\n"
	.string "nowhere near as cool as my Poochyena!$"

Kaolisle_FanClub_Poochyena_Text::
	.string "Bow! Bowwow!$"

Kaolisle_FanClub_Man_Text::
	.string "If you keep letting a Pokémon faint\n"
	.string "in battle, it'll come to resent it.\p"
	.string "Soon, it will become less trusting\n"
	.string "of the trainer.\p"
	.string "In other words, it certainly won't\n"
	.string "like you very much.$"

Kaolisle_FanClub_Interviewer_Text::
	.string "Do Pokémon enjoy having items used\n"
	.string "on them?\p"
	.string "Mine acted really happy when I gave\n"
	.string "it some Protein.$"

Kaolisle_FanClub_ExpertF_Text::
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
	.string "just talk to the person sitting\l"
	.string "at the table.$"

FanClub_WantToTradeGrowlithe::
	.string "Where I come from we have this\n"
	.string "different breed of Growlithe,\l"
	.string "often referred to as “Hisuian”\l"
	.string "in other regions.\p"
	.string "Say, do you have a {STR_VAR_1}?\p"
	.string "Maybe you'd like to trade one\n"
	.string "Growlithe for another?$"

FanClub_WantToTradeVoltorb::
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
	.string "I found this really weird Qwilfish\n"
	.string "when I was visiting abroad.\p"
	.string "I have to be frank, I'm not sure\n"
	.string "I like its dark coloring.\p"
	.string "Do you have a regular Qwilfish?\p"
	.string "Would you like to trade it for\n"
	.string "this darker, edgier looking one?$"

FanClub_WantToTradeSneasel::
	.string "I was under the impression that\n"
	.string "Sneasels were dark-type, but for some\l"
	.string "reason mine isn't.\p"
	.string "This one doesn't really fit a ninja\n"
	.string "like me.\p"
	.string "If you have a dark-type Sneasel,\n"
	.string "I'd gladly trade you mine.$"

FanClub_WantToTradeZorua::
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
	.string "I love Torchics!\p"
	.string "They're so cute and fluffy and their\n"
	.string "evolution is simply way too cool!\p"
	.string "Do you have a Torchic?\p"
	.string "I can trade you this Charmander\p"
	.string "for one.$"

FanClub_WantToTradeSquirtle::
	.string "For some reason this Squirtle wouldn't\n"
	.string "stop following me.\p"
	.string "In my frustration, I threw a Poké Ball\n"
	.string "at it and ended up capturing it.\p"
	.string "The thing is, I don't really want\n"
	.string "a Squirtle.\p"
	.string "If you want, I could trade it for some\n"
	.string "other water-type Pokémon.\l"
	.string "Maybe a Piplup?$"

FanClub_TradeDeclineText::
	.string "Let me know if you change your mind.$"

FanClub_WrongMonText::
	.string "I'm sorry, but that's\nnot a {STR_VAR_1}.$"

FanClub_TradeCompleteText::
	.string "Thank you for the trade!$"

Fanclub_TradeThanks::
	.string "Take care of your new Pokémon!$"
