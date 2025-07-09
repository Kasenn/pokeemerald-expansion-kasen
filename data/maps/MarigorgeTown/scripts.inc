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
	lock
# 12 "data/maps/MarigorgeTown/scripts.pory"
	faceplayer
# 13 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Aldeleaf_MuseumCurator_2
# 40 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Aldeleaf_MuseumCurator_Intro, MSGBOX_DEFAULT
# 41 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_COPPER
# 42 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_9
Aldeleaf_MuseumCurator_8:
# 45 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_SILVER
# 46 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_15
Aldeleaf_MuseumCurator_14:
# 49 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_GOLD
# 50 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_21
Aldeleaf_MuseumCurator_20:
# 53 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_VASE
# 54 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_27
Aldeleaf_MuseumCurator_26:
# 57 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_CROWN
# 58 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_32
Aldeleaf_MuseumCurator_1:
# 63 "data/maps/MarigorgeTown/scripts.pory"
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
	goto_if_eq Aldeleaf_MuseumCurator_24
Aldeleaf_MuseumCurator_23:
# 30 "data/maps/MarigorgeTown/scripts.pory"
	checkitem ITEM_RELIC_CROWN
# 31 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_29
# 35 "data/maps/MarigorgeTown/scripts.pory"
	msgbox ThanksForContribution, MSGBOX_NPC
	end

Aldeleaf_MuseumCurator_6:
# 16 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_5

Aldeleaf_MuseumCurator_9:
# 43 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelic
	goto Aldeleaf_MuseumCurator_8

Aldeleaf_MuseumCurator_12:
# 20 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_11

Aldeleaf_MuseumCurator_15:
# 47 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelic
	goto Aldeleaf_MuseumCurator_14

Aldeleaf_MuseumCurator_18:
# 24 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_17

Aldeleaf_MuseumCurator_21:
# 51 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelic
	goto Aldeleaf_MuseumCurator_20

Aldeleaf_MuseumCurator_24:
# 28 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_23

Aldeleaf_MuseumCurator_27:
# 55 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_26

Aldeleaf_MuseumCurator_29:
# 32 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_1

Aldeleaf_MuseumCurator_32:
# 59 "data/maps/MarigorgeTown/scripts.pory"
	goto SellRelicShort
	goto Aldeleaf_MuseumCurator_1


SellRelic::
# 68 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_PIN
# 69 "data/maps/MarigorgeTown/scripts.pory"
	safefollow
# 70 "data/maps/MarigorgeTown/scripts.pory"
	exclamationmark 2
# 71 "data/maps/MarigorgeTown/scripts.pory"
	msgbox YouHaveARelicCoin, MSGBOX_YESNO
# 72 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellRelic_1
# 77 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 79 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 80 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
# 81 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_COPPER
	goto_if_eq SellRelic_5
SellRelic_4:
# 84 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_SILVER
	goto_if_eq SellRelic_8
SellRelic_7:
# 87 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_GOLD
	goto_if_eq SellRelic_11
SellRelic_10:
# 90 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_VASE
	goto_if_eq SellRelic_14
SellRelic_13:
# 93 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_CROWN
	goto_if_eq SellRelic_16
# 97 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelic_1:
# 73 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end

SellRelic_5:
# 82 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCopper
	goto SellRelic_4

SellRelic_8:
# 85 "data/maps/MarigorgeTown/scripts.pory"
	goto SellSilver
	goto SellRelic_7

SellRelic_11:
# 88 "data/maps/MarigorgeTown/scripts.pory"
	goto SellGold
	goto SellRelic_10

SellRelic_14:
# 91 "data/maps/MarigorgeTown/scripts.pory"
	goto SellVase
	goto SellRelic_13

SellRelic_16:
# 94 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCrown
	return


SellRelicShort::
# 104 "data/maps/MarigorgeTown/scripts.pory"
	msgbox HereToSellMore, MSGBOX_DEFAULT
# 105 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 107 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 108 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
# 109 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_COPPER
	goto_if_eq SellRelicShort_2
SellRelicShort_1:
# 112 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_SILVER
	goto_if_eq SellRelicShort_5
SellRelicShort_4:
# 115 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_GOLD
	goto_if_eq SellRelicShort_8
SellRelicShort_7:
# 118 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_VASE
	goto_if_eq SellRelicShort_11
SellRelicShort_10:
# 121 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_CROWN
	goto_if_eq SellRelicShort_13
# 125 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelicShort_2:
# 110 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCopper
	goto SellRelicShort_1

SellRelicShort_5:
# 113 "data/maps/MarigorgeTown/scripts.pory"
	goto SellSilver
	goto SellRelicShort_4

SellRelicShort_8:
# 116 "data/maps/MarigorgeTown/scripts.pory"
	goto SellGold
	goto SellRelicShort_7

SellRelicShort_11:
# 119 "data/maps/MarigorgeTown/scripts.pory"
	goto SellVase
	goto SellRelicShort_10

SellRelicShort_13:
# 122 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCrown
	return


SellCopper::
# 131 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 132 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellCopper, MSGBOX_YESNO
# 133 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellCopper_1
# 138 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 139 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 1000
# 140 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 141 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 142 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_COPPER, 1
# 143 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 144 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 145 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellCopper_1:
# 134 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellSilver::
# 150 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 151 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellSilver, MSGBOX_YESNO
# 152 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellSilver_1
# 157 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 158 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 5000
# 159 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 160 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 161 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_SILVER, 1
# 162 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 163 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 164 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellSilver_1:
# 153 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellGold::
# 169 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 170 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellGold, MSGBOX_YESNO
# 171 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellGold_1
# 176 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 177 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 10000
# 178 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 179 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 180 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_GOLD, 1
# 181 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 182 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 183 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellGold_1:
# 172 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellVase::
# 188 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 189 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellVase, MSGBOX_YESNO
# 190 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellVase_1
# 195 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 196 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 50000
# 197 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 198 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 199 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_VASE, 1
# 200 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 201 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 202 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellVase_1:
# 191 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


Marigorge_Man::
# 269 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Man_Text, MSGBOX_NPC
	end


MariGorge_Woman::
# 280 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MariGorge_Woman_Text, MSGBOX_NPC
	end


Marigorge_Sign1::
# 291 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Sign1_Text, MSGBOX_SIGN
	end


Marigorge_Sign2::
# 300 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Sign2_Text, MSGBOX_SIGN
	end


MarigorgeHouse_OldWoman::
# 309 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MarigorgeHouse_OldWoman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Woman::
# 322 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Mart_Woman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Fisherman::
# 332 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Mart_Fisherman_Text, MSGBOX_NPC
	end


Common_OpenBag::
# 343 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 344 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 345 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 346 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
	return


Marigorge_SusMan::
# 351 "data/maps/MarigorgeTown/scripts.pory"
	goto_if_set FLAG_DAILY_SAFARIBALL_BOUGHT, Marigorge_SusMan_2
# 355 "data/maps/MarigorgeTown/scripts.pory"
	lock
# 356 "data/maps/MarigorgeTown/scripts.pory"
	faceplayer
# 357 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_Text, MSGBOX_DEFAULT
# 358 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 359 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_BuyBall, MSGBOX_YESNO
# 360 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_4
# 366 "data/maps/MarigorgeTown/scripts.pory"
	checkmoney 3000
# 367 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_8
	checkitemspace ITEM_SAFARI_BALL
# 0 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_11
Marigorge_SusMan_10:
# 376 "data/maps/MarigorgeTown/scripts.pory"
	removemoney 3000
# 377 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 378 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 379 "data/maps/MarigorgeTown/scripts.pory"
	waitse
# 380 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_GaveMoney, MSGBOX_DEFAULT
# 381 "data/maps/MarigorgeTown/scripts.pory"
	waitmessage
# 382 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 383 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
# 384 "data/maps/MarigorgeTown/scripts.pory"
	giveitem ITEM_SAFARI_BALL, 1
# 385 "data/maps/MarigorgeTown/scripts.pory"
	setflag FLAG_DAILY_SAFARIBALL_BOUGHT
# 386 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_DontGoToSafari, MSGBOX_NPC
	end

Marigorge_SusMan_2:
# 352 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_AlreadyBought, MSGBOX_NPC
	end

Marigorge_SusMan_4:
# 361 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_YourLoss, MSGBOX_NPC
# 362 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

Marigorge_SusMan_8:
# 368 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_ScammingMe, MSGBOX_NPC
# 369 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

Marigorge_SusMan_11:
# 373 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
# 374 "data/maps/MarigorgeTown/scripts.pory"
	goto ZeBagIsFull
	goto Marigorge_SusMan_10


SellCrown::
# 430 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 431 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellCrown, MSGBOX_YESNO
# 432 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellCrown_1
# 437 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 438 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 300000
# 439 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 440 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 441 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_CROWN, 1
# 442 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 443 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 444 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellCrown_1:
# 433 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


Aldeleaf_MuseumCurator_Intro::
# 207 "data/maps/MarigorgeTown/scripts.pory"
	.string "I'm the curator of this museum of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our museum.\p"
	.string "I bet you're curious about what\n"
	.string "lies up these stairs.\p"
	.string "Unfortunately we are still setting\n"
	.string "things up, so I can't let you pass.$"

MuseumDontWantToSell::
# 217 "data/maps/MarigorgeTown/scripts.pory"
	.string "Oh, so you're not looking to sell…$"

YouHaveARelicCoin::
# 220 "data/maps/MarigorgeTown/scripts.pory"
	.string "You look like you've been to\n"
	.string "the desert.\p"
	.string "Have you found have any relics\n"
	.string "you'd be like to contribute to\l"
	.string "the museum?\l"
	.string "You will be compensated, of course.$"

HereToSellMore::
# 228 "data/maps/MarigorgeTown/scripts.pory"
	.string "Here to sell more relics?$"

ThanksForContribution::
# 231 "data/maps/MarigorgeTown/scripts.pory"
	.string "Thank you for your contributions.\p"
	.string "We hope to have our new exhibition\n"
	.string "open as soon we have collected\l"
	.string "enough exhibits.$"

WouldYouLikeToSellCopper::
# 237 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Copper!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥1000?$"

WouldYouLikeToSellSilver::
# 242 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Silver!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥5000?$"

WouldYouLikeToSellGold::
# 247 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Gold!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥10000?$"

WouldYouLikeToSellVase::
# 252 "data/maps/MarigorgeTown/scripts.pory"
	.string "I can't believe my eyes!\n"
	.string "That's a genuine Relic Vase!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥50000?$"

MuseumThatsAShame::
# 258 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a shame…$"

MuseumThanksForArtifact::
# 261 "data/maps/MarigorgeTown/scripts.pory"
	.string "The museum thanks you for your\n"
	.string "contribution.\p"
	.string "Let me know if you have more relics\n"
	.string "you'd like to sell.$"

Marigorge_Man_Text::
# 272 "data/maps/MarigorgeTown/scripts.pory"
	.string "Are you here to visit the Safari Zone?\p"
	.string "There you can find all sorts of Pokémon\n"
	.string "that are either rare or unavailable\l"
	.string "in other parts of Sinko.$"

MariGorge_Woman_Text::
# 283 "data/maps/MarigorgeTown/scripts.pory"
	.string "Thanks to the fresh water flowing in\n"
	.string "from the mountains,\l"
	.string "this normally arid area is teeming\l"
	.string "with life.$"

Marigorge_Sign1_Text::
# 294 "data/maps/MarigorgeTown/scripts.pory"
	.string "Move Deleter's house\p"
	.string "“Unwanted Pokémon moves deleted.”$"

Marigorge_Sign2_Text::
# 303 "data/maps/MarigorgeTown/scripts.pory"
	.string "Marigorge Town\p"
	.string "“A peaceful oasis amidst mountains.”$"

MarigorgeHouse_OldWoman_Text::
# 312 "data/maps/MarigorgeTown/scripts.pory"
	.string "Have you seen the huge waterfall\n"
	.string "outside?\p"
	.string "A legend says that a strong Pokémon\n"
	.string "lives up that waterfall,\l"
	.string "and that only worthy trainers are\l"
	.string "allowed to even approach it.$"

Marigorge_Mart_Woman_Text::
# 325 "data/maps/MarigorgeTown/scripts.pory"
	.string "I was hoping to bring some Safari Balls\n"
	.string "as a souvenir but I guess they don't\l"
	.string "sell them in regular Poké Marts…$"

Marigorge_Mart_Fisherman_Text::
# 335 "data/maps/MarigorgeTown/scripts.pory"
	.string "The new BP shops are great but if\n"
	.string "you're in need of regular everyday\l"
	.string "supplies, you really can't go wrong\l"
	.string "with Poké Mart!$"

Marigorge_SusMan_Text::
# 391 "data/maps/MarigorgeTown/scripts.pory"
	.string "Psst!\p"
	.string "I've got a special deal,\n"
	.string "just for you.\p"
	.string "I was able to smuggle one of the\n"
	.string "Safari Balls out of the Safari Zone.\l"
	.string "Don't ask me how.$"

Marigorge_SusMan_BuyBall::
# 399 "data/maps/MarigorgeTown/scripts.pory"
	.string "Anyway, interested to buy it?\n"
	.string "I can sell it for ¥3000.\p"
	.string "It wasn't easy so of course the price\n"
	.string "must reflect the risk taken.$"

Marigorge_SusMan_YourLoss::
# 405 "data/maps/MarigorgeTown/scripts.pory"
	.string "Whatever man, your loss.$"

Marigorge_SusMan_ScammingMe::
# 408 "data/maps/MarigorgeTown/scripts.pory"
	.string "You trying to scam me or what?\n"
	.string "You clearly don't have enough money.$"

Marigorge_SusMan_GaveMoney::
# 412 "data/maps/MarigorgeTown/scripts.pory"
	.string "{PLAYER} gave ¥3000 to the\n"
	.string "suspicious man.$"

Marigorge_SusMan_DontGoToSafari::
# 416 "data/maps/MarigorgeTown/scripts.pory"
	.string "Pleasure doing business with you.\p"
	.string "If you're interested, I might be able\n"
	.string "to get another one tomorrow\l"
	.string "once the heat dies down.$"

Marigorge_SusMan_AlreadyBought::
# 422 "data/maps/MarigorgeTown/scripts.pory"
	.string "Sorry, but that's all I managed to\n"
	.string "smuggle out.\p"
	.string "I can maybe get another one tomorrow\n"
	.string "once the heat dies down.$"

WouldYouLikeToSellCrown::
# 449 "data/maps/MarigorgeTown/scripts.pory"
	.string "I can't believe my eyes!\n"
	.string "That's a genuine Relic Crown!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥300000?$"
