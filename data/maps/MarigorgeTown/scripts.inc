MarigorgeTown_MapScripts::
# 2 "data/maps/MarigorgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MariGorgeSetFlag
	.byte 0


MariGorgeSetFlag::
# 6 "data/maps/MarigorgeTown/scripts.pory"
	setflag FLAG_VISITED_MARIGORGE
	end


Aldeleaf_MuseumCurator::
# 11 "data/maps/MarigorgeTown/scripts.pory"
	lockall
# 12 "data/maps/MarigorgeTown/scripts.pory"
	faceplayer
# 13 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Aldeleaf_MuseumCurator_2
# 36 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Aldeleaf_MuseumCurator_Intro, MSGBOX_DEFAULT
# 37 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_COPPER
# 38 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_9
Aldeleaf_MuseumCurator_8:
# 41 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_SILVER
# 42 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_15
Aldeleaf_MuseumCurator_14:
# 45 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_GOLD
# 46 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_21
Aldeleaf_MuseumCurator_20:
# 49 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_VASE
# 50 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_26
Aldeleaf_MuseumCurator_1:
# 55 "data/maps/MarigorgeTown/scripts.pory"
	release
	end

Aldeleaf_MuseumCurator_2:
# 14 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_COPPER
# 15 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_6
Aldeleaf_MuseumCurator_5:
# 18 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_SILVER
# 19 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_12
Aldeleaf_MuseumCurator_11:
# 22 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_GOLD
# 23 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_18
Aldeleaf_MuseumCurator_17:
# 26 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_VASE
# 27 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_23
# 31 "data/maps/MarigorgeTown/scripts.pory"
	msgbox ThanksForContribution, MSGBOX_NPC
	end

Aldeleaf_MuseumCurator_6:
# 16 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_5

Aldeleaf_MuseumCurator_9:
# 39 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelic
	goto Aldeleaf_MuseumCurator_8

Aldeleaf_MuseumCurator_12:
# 20 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_11

Aldeleaf_MuseumCurator_15:
# 43 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelic
	goto Aldeleaf_MuseumCurator_14

Aldeleaf_MuseumCurator_18:
# 24 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_17

Aldeleaf_MuseumCurator_21:
# 47 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelic
	goto Aldeleaf_MuseumCurator_20

Aldeleaf_MuseumCurator_23:
# 28 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_1

Aldeleaf_MuseumCurator_26:
# 51 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_1


SellRelic::
# 60 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_PIN
# 61 "data/maps/MarigorgeTown/scripts.pory"
	safefollow
# 62 "data/maps/MarigorgeTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 63 "data/maps/MarigorgeTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/MarigorgeTown/scripts.pory"
	delay 40
# 65 "data/maps/MarigorgeTown/scripts.pory"
	msgbox YouHaveARelicCoin, MSGBOX_YESNO
# 66 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellRelic_1
# 71 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 73 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 74 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
# 75 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 157
	goto_if_eq SellRelic_5
SellRelic_4:
# 78 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 158
	goto_if_eq SellRelic_8
SellRelic_7:
# 81 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 159
	goto_if_eq SellRelic_11
SellRelic_10:
# 84 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 160
	goto_if_eq SellRelic_13
# 88 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelic_1:
# 67 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end

SellRelic_5:
# 76 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCopper
	goto SellRelic_4

SellRelic_8:
# 79 "data/maps/MarigorgeTown/scripts.pory"
	goto SellSilver
	goto SellRelic_7

SellRelic_11:
# 82 "data/maps/MarigorgeTown/scripts.pory"
	goto SellGold
	goto SellRelic_10

SellRelic_13:
# 85 "data/maps/MarigorgeTown/scripts.pory"
	goto SellVase
	return


SellRelicShort::
# 95 "data/maps/MarigorgeTown/scripts.pory"
	msgbox HereToSellMore, MSGBOX_DEFAULT
# 96 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 98 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 99 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
# 100 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 157
	goto_if_eq SellRelicShort_2
SellRelicShort_1:
# 103 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 158
	goto_if_eq SellRelicShort_5
SellRelicShort_4:
# 106 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 159
	goto_if_eq SellRelicShort_8
SellRelicShort_7:
# 109 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, 160
	goto_if_eq SellRelicShort_10
# 113 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelicShort_2:
# 101 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCopper
	goto SellRelicShort_1

SellRelicShort_5:
# 104 "data/maps/MarigorgeTown/scripts.pory"
	goto SellSilver
	goto SellRelicShort_4

SellRelicShort_8:
# 107 "data/maps/MarigorgeTown/scripts.pory"
	goto SellGold
	goto SellRelicShort_7

SellRelicShort_10:
# 110 "data/maps/MarigorgeTown/scripts.pory"
	goto SellVase
	return


SellCopper::
# 119 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 120 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellCopper, MSGBOX_YESNO
# 121 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellCopper_1
# 126 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 127 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 1000
# 128 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 129 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 130 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_COPPER, 1
# 131 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 132 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 133 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellCopper_1:
# 122 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellSilver::
# 138 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 139 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellSilver, MSGBOX_YESNO
# 140 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellSilver_1
# 145 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 146 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 5000
# 147 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 148 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 149 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_SILVER, 1
# 150 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 151 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 152 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellSilver_1:
# 141 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellGold::
# 157 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 158 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellGold, MSGBOX_YESNO
# 159 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellGold_1
# 164 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 165 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 10000
# 166 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 167 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 168 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_GOLD, 1
# 169 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 170 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 171 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellGold_1:
# 160 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellVase::
# 176 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 177 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellVase, MSGBOX_YESNO
# 178 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellVase_1
# 183 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 184 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 50000
# 185 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 186 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 187 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_VASE, 1
# 188 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 189 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 190 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellVase_1:
# 179 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


Marigorge_Man::
# 257 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Man_Text, MSGBOX_NPC
	end


MariGorge_Woman::
# 268 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MariGorge_Woman_Text, MSGBOX_NPC
	end


Marigorge_Sign1::
# 279 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Sign1_Text, MSGBOX_SIGN
	end


Marigorge_Sign2::
# 288 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Sign2_Text, MSGBOX_SIGN
	end


MarigorgeHouse_OldWoman::
# 297 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MarigorgeHouse_OldWoman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Woman::
# 310 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Mart_Woman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Fisherman::
# 320 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Mart_Fisherman_Text, MSGBOX_NPC
	end


Common_OpenBag::
# 331 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 332 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 333 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 334 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
	return


Marigorge_SusMan::
# 339 "data/maps/MarigorgeTown/scripts.pory"
	goto_if_set FLAG_DAILY_SAFARIBALL_BOUGHT, Marigorge_SusMan_2
# 343 "data/maps/MarigorgeTown/scripts.pory"
	lockall
# 344 "data/maps/MarigorgeTown/scripts.pory"
	faceplayer
# 345 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_Text, MSGBOX_DEFAULT
# 346 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 347 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_BuyBall, MSGBOX_YESNO
# 348 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_4
# 354 "data/maps/MarigorgeTown/scripts.pory"
	checkmoney 3000
# 355 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_8
	checkitemspace ITEM_SAFARI_BALL
# 0 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_11
Marigorge_SusMan_10:
# 364 "data/maps/MarigorgeTown/scripts.pory"
	removemoney 3000
# 365 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 366 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 367 "data/maps/MarigorgeTown/scripts.pory"
	waitse
# 368 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_GaveMoney, MSGBOX_DEFAULT
# 369 "data/maps/MarigorgeTown/scripts.pory"
	waitmessage
# 370 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 371 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
# 372 "data/maps/MarigorgeTown/scripts.pory"
	giveitem ITEM_SAFARI_BALL, 1
# 373 "data/maps/MarigorgeTown/scripts.pory"
	setflag FLAG_DAILY_SAFARIBALL_BOUGHT
# 374 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_DontGoToSafari, MSGBOX_NPC
	end

Marigorge_SusMan_2:
# 340 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_AlreadyBought, MSGBOX_NPC
	end

Marigorge_SusMan_4:
# 349 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_YourLoss, MSGBOX_NPC
# 350 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

Marigorge_SusMan_8:
# 356 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_ScammingMe, MSGBOX_NPC
# 357 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

Marigorge_SusMan_11:
# 361 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
# 362 "data/maps/MarigorgeTown/scripts.pory"
	goto ZeBagIsFull
	goto Marigorge_SusMan_10


Aldeleaf_MuseumCurator_Intro::
# 195 "data/maps/MarigorgeTown/scripts.pory"
	.string "I'm the curator of this museum of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our museum.\p"
	.string "I bet you're curious about what\n"
	.string "lies up these stairs.\p"
	.string "Unfortunately we are still setting\n"
	.string "things up, so I can't let you pass.$"

MuseumDontWantToSell::
# 205 "data/maps/MarigorgeTown/scripts.pory"
	.string "Oh, so you're not looking to sell…$"

YouHaveARelicCoin::
# 208 "data/maps/MarigorgeTown/scripts.pory"
	.string "You look like you've been to\n"
	.string "the desert.\p"
	.string "Have you found have any relics\n"
	.string "you'd be like to contribute to\l"
	.string "the museum?\l"
	.string "You will be compensated, of course.$"

HereToSellMore::
# 216 "data/maps/MarigorgeTown/scripts.pory"
	.string "Here to sell more relics?$"

ThanksForContribution::
# 219 "data/maps/MarigorgeTown/scripts.pory"
	.string "Thank you for your contributions.\p"
	.string "We hope to have our new exhibition\n"
	.string "open as soon we have collected\l"
	.string "enough exhibits.$"

WouldYouLikeToSellCopper::
# 225 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Copper!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥1000?$"

WouldYouLikeToSellSilver::
# 230 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Silver!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥5000?$"

WouldYouLikeToSellGold::
# 235 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Gold!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥10000?$"

WouldYouLikeToSellVase::
# 240 "data/maps/MarigorgeTown/scripts.pory"
	.string "I can't believe my eyes!\n"
	.string "That's a genuine Relic Vase!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥50000?$"

MuseumThatsAShame::
# 246 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a shame…$"

MuseumThanksForArtifact::
# 249 "data/maps/MarigorgeTown/scripts.pory"
	.string "The museum thanks you for your\n"
	.string "contribution.\p"
	.string "Let me know if you have more relics\n"
	.string "you'd like to sell.$"

Marigorge_Man_Text::
# 260 "data/maps/MarigorgeTown/scripts.pory"
	.string "Are you here to visit the Safari Zone?\p"
	.string "There you can find all sorts of Pokémon\n"
	.string "that are either rare or unavailable\l"
	.string "in other parts of Sinko.$"

MariGorge_Woman_Text::
# 271 "data/maps/MarigorgeTown/scripts.pory"
	.string "Thanks to the fresh water flowing in\n"
	.string "from the mountains,\l"
	.string "this normally arid area is teeming\l"
	.string "with life.$"

Marigorge_Sign1_Text::
# 282 "data/maps/MarigorgeTown/scripts.pory"
	.string "Move Deleter's house\p"
	.string "“Unwanted Pokémon moves deleted.”$"

Marigorge_Sign2_Text::
# 291 "data/maps/MarigorgeTown/scripts.pory"
	.string "Marigorge Town\p"
	.string "“A peaceful oasis amidst mountains.”$"

MarigorgeHouse_OldWoman_Text::
# 300 "data/maps/MarigorgeTown/scripts.pory"
	.string "Have you seen the huge waterfall\n"
	.string "outside?\p"
	.string "A legend says that a strong Pokémon\n"
	.string "lives up that waterfall,\l"
	.string "and that only worthy trainers are\l"
	.string "allowed to even approach it.$"

Marigorge_Mart_Woman_Text::
# 313 "data/maps/MarigorgeTown/scripts.pory"
	.string "I was hoping to bring some Safari Balls\n"
	.string "as a souvenir but I guess they don't\l"
	.string "sell them in regular Poké Marts…$"

Marigorge_Mart_Fisherman_Text::
# 323 "data/maps/MarigorgeTown/scripts.pory"
	.string "The new BP shops are great but if\n"
	.string "you're in need of regular everyday\l"
	.string "supplies, you really can't go wrong\l"
	.string "with Poké Mart!$"

Marigorge_SusMan_Text::
# 379 "data/maps/MarigorgeTown/scripts.pory"
	.string "Psst!\p"
	.string "I've got a special deal,\n"
	.string "just for you.\p"
	.string "I was able to smuggle one of the\n"
	.string "Safari Balls out of the Safari Zone.\l"
	.string "Don't ask me how.$"

Marigorge_SusMan_BuyBall::
# 387 "data/maps/MarigorgeTown/scripts.pory"
	.string "Anyway, interested to buy it?\n"
	.string "I can sell it for ¥3000.\p"
	.string "It wasn't easy so of course the price\n"
	.string "must reflect the risk taken.$"

Marigorge_SusMan_YourLoss::
# 393 "data/maps/MarigorgeTown/scripts.pory"
	.string "Whatever man, your loss.$"

Marigorge_SusMan_ScammingMe::
# 396 "data/maps/MarigorgeTown/scripts.pory"
	.string "You trying to scam me or what?\n"
	.string "You clearly don't have enough money.$"

Marigorge_SusMan_GaveMoney::
# 400 "data/maps/MarigorgeTown/scripts.pory"
	.string "{PLAYER} gave ¥3000 to the\n"
	.string "suspicious man.$"

Marigorge_SusMan_DontGoToSafari::
# 404 "data/maps/MarigorgeTown/scripts.pory"
	.string "Pleasure doing business with you.\p"
	.string "If you're interested, I might be able\n"
	.string "to get another one tomorrow\l"
	.string "once the heat dies down.$"

Marigorge_SusMan_AlreadyBought::
# 410 "data/maps/MarigorgeTown/scripts.pory"
	.string "Sorry, but that's all I managed to\n"
	.string "smuggle out.\p"
	.string "I can maybe get another one tomorrow\n"
	.string "once the heat dies down.$"
