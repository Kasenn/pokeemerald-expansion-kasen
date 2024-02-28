MarigorgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MariGorgeSetFlag
	.byte 0


MariGorgeSetFlag::
	setflag FLAG_VISITED_MARIGORGE
	end


Aldeleaf_MuseumCurator::
	lockall
	faceplayer
	compare VAR_TEMP_1, 1
	goto_if_eq Aldeleaf_MuseumCurator_2
	msgbox Aldeleaf_MuseumCurator_Intro, MSGBOX_DEFAULT
	checkitem ITEM_RELIC_COPPER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_9
Aldeleaf_MuseumCurator_8:
	checkitem ITEM_RELIC_SILVER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_15
Aldeleaf_MuseumCurator_14:
	checkitem ITEM_RELIC_GOLD
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_20
Aldeleaf_MuseumCurator_1:
	release
	end

Aldeleaf_MuseumCurator_2:
	checkitem ITEM_RELIC_COPPER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_6
Aldeleaf_MuseumCurator_5:
	checkitem ITEM_RELIC_SILVER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_12
Aldeleaf_MuseumCurator_11:
	checkitem ITEM_RELIC_GOLD
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_17
	msgbox ThanksForContribution, MSGBOX_NPC
	end

Aldeleaf_MuseumCurator_6:
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_5

Aldeleaf_MuseumCurator_9:
	goto SellRelic
	goto Aldeleaf_MuseumCurator_8

Aldeleaf_MuseumCurator_12:
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_11

Aldeleaf_MuseumCurator_15:
	goto SellRelic
	goto Aldeleaf_MuseumCurator_14

Aldeleaf_MuseumCurator_17:
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_1

Aldeleaf_MuseumCurator_20:
	goto SellRelic
	goto Aldeleaf_MuseumCurator_1


SellRelic::
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox YouHaveARelicCoin, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SellRelic_1
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseFossil
	waitstate
	compare VAR_ITEM_ID, 157
	goto_if_eq SellRelic_5
SellRelic_4:
	compare VAR_ITEM_ID, 158
	goto_if_eq SellRelic_8
SellRelic_7:
	compare VAR_ITEM_ID, 159
	goto_if_eq SellRelic_10
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelic_1:
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end

SellRelic_5:
	goto SellCopper
	goto SellRelic_4

SellRelic_8:
	goto SellSilver
	goto SellRelic_7

SellRelic_10:
	goto SellGold
	return


SellRelicShort::
	msgbox HereToSellMore, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseFossil
	waitstate
	compare VAR_ITEM_ID, 157
	goto_if_eq SellRelicShort_2
SellRelicShort_1:
	compare VAR_ITEM_ID, 158
	goto_if_eq SellRelicShort_5
SellRelicShort_4:
	compare VAR_ITEM_ID, 159
	goto_if_eq SellRelicShort_7
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelicShort_2:
	goto SellCopper
	goto SellRelicShort_1

SellRelicShort_5:
	goto SellSilver
	goto SellRelicShort_4

SellRelicShort_7:
	goto SellGold
	return


SellCopper::
	showmoneybox 0, 0
	msgbox WouldYouLikeToSellCopper, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SellCopper_1
	addvar VAR_RELIC_SOLD, 1
	addmoney 1000
	playse SE_SHOP
	updatemoneybox
	removeitem ITEM_RELIC_COPPER, 1
	setvar VAR_TEMP_1, 1
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
	hidemoneybox
	end

SellCopper_1:
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellSilver::
	showmoneybox 0, 0
	msgbox WouldYouLikeToSellSilver, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SellSilver_1
	addvar VAR_RELIC_SOLD, 1
	addmoney 5000
	playse SE_SHOP
	updatemoneybox
	removeitem ITEM_RELIC_SILVER, 1
	setvar VAR_TEMP_1, 1
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
	hidemoneybox
	end

SellSilver_1:
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellGold::
	showmoneybox 0, 0
	msgbox WouldYouLikeToSellGold, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SellGold_1
	addvar VAR_RELIC_SOLD, 1
	addmoney 10000
	playse SE_SHOP
	updatemoneybox
	removeitem ITEM_RELIC_GOLD, 1
	setvar VAR_TEMP_1, 1
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
	hidemoneybox
	end

SellGold_1:
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


Marigorge_Man::
	msgbox Marigorge_Man_Text, MSGBOX_NPC
	end


MariGorge_Woman::
	msgbox MariGorge_Woman_Text, MSGBOX_NPC
	end


Marigorge_Sign1::
	msgbox Marigorge_Sign1_Text, MSGBOX_SIGN
	end


Marigorge_Sign2::
	msgbox Marigorge_Sign2_Text, MSGBOX_SIGN
	end


MarigorgeHouse_OldWoman::
	msgbox MarigorgeHouse_OldWoman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Woman::
	msgbox Marigorge_Mart_Woman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Fisherman::
	msgbox Marigorge_Mart_Fisherman_Text, MSGBOX_NPC
	end


Common_OpenBag::
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseFossil
	waitstate
	return


Marigorge_SusMan::
	goto_if_set FLAG_DAILY_SAFARIBALL_BOUGHT, Marigorge_SusMan_2
	lockall
	faceplayer
	msgbox Marigorge_SusMan_Text, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox Marigorge_SusMan_BuyBall, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_4
	checkmoney 3000
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_8
	checkitemspace ITEM_SAFARI_BALL, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_11
	removemoney 3000
	playse SE_SHOP
	updatemoneybox
	waitse
	msgbox Marigorge_SusMan_GaveMoney, MSGBOX_DEFAULT
	waitmessage
	closemessage
	hidemoneybox
	giveitem ITEM_SAFARI_BALL, 1
	setflag FLAG_DAILY_SAFARIBALL_BOUGHT
	msgbox Marigorge_SusMan_DontGoToSafari, MSGBOX_NPC
	end

Marigorge_SusMan_2:
	msgbox Marigorge_SusMan_AlreadyBought, MSGBOX_NPC
	end

Marigorge_SusMan_4:
	msgbox Marigorge_SusMan_YourLoss, MSGBOX_NPC
	hidemoneybox
	end

Marigorge_SusMan_8:
	msgbox Marigorge_SusMan_ScammingMe, MSGBOX_NPC
	hidemoneybox
	end

Marigorge_SusMan_11:
	msgbox NotEnoughRoom, MSGBOX_NPC
	hidemoneybox
	end


Aldeleaf_MuseumCurator_Intro::
	.string "I'm the curator of this museum of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our museum.\p"
	.string "I bet you're curious about what\n"
	.string "lies up these stairs.\p"
	.string "Unfortunately we are still setting\n"
	.string "things up, so I can't let you pass.$"

MuseumDontWantToSell::
	.string "Oh, so you're not looking to sell…$"

YouHaveARelicCoin::
	.string "You look like you've been to\n"
	.string "the desert.\p"
	.string "Have you found have any relic coins\n"
	.string "you'd be like to contribute to\l"
	.string "the museum?\l"
	.string "You will be compensated, of course.$"

HereToSellMore::
	.string "Here to sell more relic coins?$"

ThanksForContribution::
	.string "Thank you for your contributions.\p"
	.string "We hope to have our new exhibition\n"
	.string "open as soon we have collected\l"
	.string "enough exhibits.$"

WouldYouLikeToSellCopper::
	.string "That's a genuine Relic Copper!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥1000?$"

WouldYouLikeToSellSilver::
	.string "That's a genuine Relic Silver!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥5000?$"

WouldYouLikeToSellGold::
	.string "That's a genuine Relic Gold!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥10000?$"

MuseumThatsAShame::
	.string "That's a shame…$"

MuseumThanksForArtifact::
	.string "The museum thanks you for your\n"
	.string "contribution.\p"
	.string "Let me know if you have more relics\n"
	.string "you'd like to sell.$"

Marigorge_Man_Text::
	.string "Are you here to visit the Safari Zone?\p"
	.string "There you can find all sorts of Pokémon\n"
	.string "that are either rare or unavailable\l"
	.string "in other parts of Sinko.$"

MariGorge_Woman_Text::
	.string "Thanks to the fresh water flowing in\n"
	.string "from the mountains,\l"
	.string "this normally arid area is teeming\l"
	.string "with life.$"

Marigorge_Sign1_Text::
	.string "Move Deleter's house\p"
	.string "“Unwanted Pokémon moves deleted.”$"

Marigorge_Sign2_Text::
	.string "Marigorge Town\p"
	.string "“A beautiful oasis amidst mountains.”$"

MarigorgeHouse_OldWoman_Text::
	.string "Have you seen the huge waterfall\n"
	.string "outside?\p"
	.string "A legend says that a strong Pokémon\n"
	.string "lives up that waterfall,\l"
	.string "and that only worthy trainers are\l"
	.string "allowed to even approach it.$"

Marigorge_Mart_Woman_Text::
	.string "I was hoping to bring some Safari Balls\n"
	.string "as a souvenir but I guess they don't\l"
	.string "sell them in regular Poké Marts…$"

Marigorge_Mart_Fisherman_Text::
	.string "The new BP shops are great but if\n"
	.string "you're in need of regular everyday\l"
	.string "supplies, you really can't go wrong\l"
	.string "with Poké Mart!$"

Marigorge_SusMan_Text::
	.string "Psst!\p"
	.string "I've got a special deal,\n"
	.string "just for you.\p"
	.string "I was able to smuggle one of the\n"
	.string "Safari Balls out of the Safari Zone.\l"
	.string "Don't ask me how.$"

Marigorge_SusMan_BuyBall::
	.string "Anyway, interested to buy it?\n"
	.string "I can sell it for ¥3000.\p"
	.string "It wasn't easy so of course the price\n"
	.string "must reflect the risk taken.$"

Marigorge_SusMan_YourLoss::
	.string "Whatever man, your loss.$"

Marigorge_SusMan_ScammingMe::
	.string "You trying to scam me or what?\n"
	.string "You clearly don't have enough money.$"

Marigorge_SusMan_GaveMoney::
	.string "{PLAYER} gave ¥3000 to the\n"
	.string "suspicious man.$"

Marigorge_SusMan_DontGoToSafari::
	.string "Pleasure doing business with you.\p"
	.string "If you're interested, I might be able\n"
	.string "to get another one tomorrow\l"
	.string "once the heat dies down.$"

Marigorge_SusMan_AlreadyBought::
	.string "Sorry, but that's all I managed to\n"
	.string "smuggle out.\p"
	.string "I can maybe get another one tomorrow\n"
	.string "once the heat dies down.$"
