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
	applymovement 2, Common_Movement_ExclamationMark
# 71 "data/maps/MarigorgeTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/MarigorgeTown/scripts.pory"
	delay 40
# 73 "data/maps/MarigorgeTown/scripts.pory"
	msgbox YouHaveARelicCoin, MSGBOX_YESNO
# 74 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellRelic_1
# 79 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 81 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 82 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
# 83 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_COPPER
	goto_if_eq SellRelic_5
SellRelic_4:
# 86 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_SILVER
	goto_if_eq SellRelic_8
SellRelic_7:
# 89 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_GOLD
	goto_if_eq SellRelic_11
SellRelic_10:
# 92 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_VASE
	goto_if_eq SellRelic_14
SellRelic_13:
# 95 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_CROWN
	goto_if_eq SellRelic_16
# 99 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelic_1:
# 75 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end

SellRelic_5:
# 84 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCopper
	goto SellRelic_4

SellRelic_8:
# 87 "data/maps/MarigorgeTown/scripts.pory"
	goto SellSilver
	goto SellRelic_7

SellRelic_11:
# 90 "data/maps/MarigorgeTown/scripts.pory"
	goto SellGold
	goto SellRelic_10

SellRelic_14:
# 93 "data/maps/MarigorgeTown/scripts.pory"
	goto SellVase
	goto SellRelic_13

SellRelic_16:
# 96 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCrown
	return


SellRelicShort::
# 106 "data/maps/MarigorgeTown/scripts.pory"
	msgbox HereToSellMore, MSGBOX_DEFAULT
# 107 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 108 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 109 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 110 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
# 111 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_COPPER
	goto_if_eq SellRelicShort_2
SellRelicShort_1:
# 114 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_SILVER
	goto_if_eq SellRelicShort_5
SellRelicShort_4:
# 117 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_GOLD
	goto_if_eq SellRelicShort_8
SellRelicShort_7:
# 120 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_VASE
	goto_if_eq SellRelicShort_11
SellRelicShort_10:
# 123 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_ITEM_ID, ITEM_RELIC_CROWN
	goto_if_eq SellRelicShort_13
# 127 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumDontWantToSell, MSGBOX_NPC
	end

SellRelicShort_2:
# 112 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCopper
	goto SellRelicShort_1

SellRelicShort_5:
# 115 "data/maps/MarigorgeTown/scripts.pory"
	goto SellSilver
	goto SellRelicShort_4

SellRelicShort_8:
# 118 "data/maps/MarigorgeTown/scripts.pory"
	goto SellGold
	goto SellRelicShort_7

SellRelicShort_11:
# 121 "data/maps/MarigorgeTown/scripts.pory"
	goto SellVase
	goto SellRelicShort_10

SellRelicShort_13:
# 124 "data/maps/MarigorgeTown/scripts.pory"
	goto SellCrown
	return


SellCopper::
# 133 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 134 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellCopper, MSGBOX_YESNO
# 135 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellCopper_1
# 140 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 141 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 1000
# 142 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 143 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 144 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_COPPER, 1
# 145 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 146 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 147 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellCopper_1:
# 136 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellSilver::
# 152 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 153 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellSilver, MSGBOX_YESNO
# 154 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellSilver_1
# 159 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 160 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 5000
# 161 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 162 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 163 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_SILVER, 1
# 164 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 165 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 166 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellSilver_1:
# 155 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellGold::
# 171 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 172 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellGold, MSGBOX_YESNO
# 173 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellGold_1
# 178 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 179 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 10000
# 180 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 181 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 182 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_GOLD, 1
# 183 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 184 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 185 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellGold_1:
# 174 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellVase::
# 190 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 191 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellVase, MSGBOX_YESNO
# 192 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellVase_1
# 197 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 198 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 50000
# 199 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 200 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 201 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_VASE, 1
# 202 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 203 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 204 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellVase_1:
# 193 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


Marigorge_Man::
# 271 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Man_Text, MSGBOX_NPC
	end


MariGorge_Woman::
# 282 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MariGorge_Woman_Text, MSGBOX_NPC
	end


Marigorge_Sign1::
# 293 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Sign1_Text, MSGBOX_SIGN
	end


Marigorge_Sign2::
# 302 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Sign2_Text, MSGBOX_SIGN
	end


MarigorgeHouse_OldWoman::
# 311 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MarigorgeHouse_OldWoman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Woman::
# 324 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Mart_Woman_Text, MSGBOX_NPC
	end


Marigorge_Mart_Fisherman::
# 334 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_Mart_Fisherman_Text, MSGBOX_NPC
	end


Common_OpenBag::
# 345 "data/maps/MarigorgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 346 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 347 "data/maps/MarigorgeTown/scripts.pory"
	special Bag_ChooseFossil
# 348 "data/maps/MarigorgeTown/scripts.pory"
	waitstate
	return


Marigorge_SusMan::
# 353 "data/maps/MarigorgeTown/scripts.pory"
	goto_if_set FLAG_DAILY_SAFARIBALL_BOUGHT, Marigorge_SusMan_2
# 357 "data/maps/MarigorgeTown/scripts.pory"
	lock
# 358 "data/maps/MarigorgeTown/scripts.pory"
	faceplayer
# 359 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_Text, MSGBOX_DEFAULT
# 360 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 361 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_BuyBall, MSGBOX_YESNO
# 362 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_4
# 368 "data/maps/MarigorgeTown/scripts.pory"
	checkmoney 3000
# 369 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_8
	checkitemspace ITEM_SAFARI_BALL
# 0 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Marigorge_SusMan_11
Marigorge_SusMan_10:
# 378 "data/maps/MarigorgeTown/scripts.pory"
	removemoney 3000
# 379 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 380 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 381 "data/maps/MarigorgeTown/scripts.pory"
	waitse
# 382 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_GaveMoney, MSGBOX_DEFAULT
# 383 "data/maps/MarigorgeTown/scripts.pory"
	waitmessage
# 384 "data/maps/MarigorgeTown/scripts.pory"
	closemessage
# 385 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
# 386 "data/maps/MarigorgeTown/scripts.pory"
	giveitem ITEM_SAFARI_BALL, 1
# 387 "data/maps/MarigorgeTown/scripts.pory"
	setflag FLAG_DAILY_SAFARIBALL_BOUGHT
# 388 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_DontGoToSafari, MSGBOX_NPC
	end

Marigorge_SusMan_2:
# 354 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_AlreadyBought, MSGBOX_NPC
	end

Marigorge_SusMan_4:
# 363 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_YourLoss, MSGBOX_NPC
# 364 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

Marigorge_SusMan_8:
# 370 "data/maps/MarigorgeTown/scripts.pory"
	msgbox Marigorge_SusMan_ScammingMe, MSGBOX_NPC
# 371 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

Marigorge_SusMan_11:
# 375 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
# 376 "data/maps/MarigorgeTown/scripts.pory"
	goto ZeBagIsFull
	goto Marigorge_SusMan_10


SellCrown::
# 432 "data/maps/MarigorgeTown/scripts.pory"
	showmoneybox 0, 0
# 433 "data/maps/MarigorgeTown/scripts.pory"
	msgbox WouldYouLikeToSellCrown, MSGBOX_YESNO
# 434 "data/maps/MarigorgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SellCrown_1
# 439 "data/maps/MarigorgeTown/scripts.pory"
	addvar VAR_RELIC_SOLD, 1
# 440 "data/maps/MarigorgeTown/scripts.pory"
	addmoney 300000
# 441 "data/maps/MarigorgeTown/scripts.pory"
	playse SE_SHOP
# 442 "data/maps/MarigorgeTown/scripts.pory"
	updatemoneybox
# 443 "data/maps/MarigorgeTown/scripts.pory"
	removeitem ITEM_RELIC_CROWN, 1
# 444 "data/maps/MarigorgeTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 445 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
# 446 "data/maps/MarigorgeTown/scripts.pory"
	hidemoneybox
	end

SellCrown_1:
# 435 "data/maps/MarigorgeTown/scripts.pory"
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


Aldeleaf_MuseumCurator_Intro::
# 209 "data/maps/MarigorgeTown/scripts.pory"
	.string "I'm the curator of this museum of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our museum.\p"
	.string "I bet you're curious about what\n"
	.string "lies up these stairs.\p"
	.string "Unfortunately we are still setting\n"
	.string "things up, so I can't let you pass.$"

MuseumDontWantToSell::
# 219 "data/maps/MarigorgeTown/scripts.pory"
	.string "Oh, so you're not looking to sell…$"

YouHaveARelicCoin::
# 222 "data/maps/MarigorgeTown/scripts.pory"
	.string "You look like you've been to\n"
	.string "the desert.\p"
	.string "Have you found have any relics\n"
	.string "you'd be like to contribute to\l"
	.string "the museum?\l"
	.string "You will be compensated, of course.$"

HereToSellMore::
# 230 "data/maps/MarigorgeTown/scripts.pory"
	.string "Here to sell more relics?$"

ThanksForContribution::
# 233 "data/maps/MarigorgeTown/scripts.pory"
	.string "Thank you for your contributions.\p"
	.string "We hope to have our new exhibition\n"
	.string "open as soon we have collected\l"
	.string "enough exhibits.$"

WouldYouLikeToSellCopper::
# 239 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Copper!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥1000?$"

WouldYouLikeToSellSilver::
# 244 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Silver!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥5000?$"

WouldYouLikeToSellGold::
# 249 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a genuine Relic Gold!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥10000?$"

WouldYouLikeToSellVase::
# 254 "data/maps/MarigorgeTown/scripts.pory"
	.string "I can't believe my eyes!\n"
	.string "That's a genuine Relic Vase!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥50000?$"

MuseumThatsAShame::
# 260 "data/maps/MarigorgeTown/scripts.pory"
	.string "That's a shame…$"

MuseumThanksForArtifact::
# 263 "data/maps/MarigorgeTown/scripts.pory"
	.string "The museum thanks you for your\n"
	.string "contribution.\p"
	.string "Let me know if you have more relics\n"
	.string "you'd like to sell.$"

Marigorge_Man_Text::
# 274 "data/maps/MarigorgeTown/scripts.pory"
	.string "Are you here to visit the Safari Zone?\p"
	.string "There you can find all sorts of Pokémon\n"
	.string "that are either rare or unavailable\l"
	.string "in other parts of Sinko.$"

MariGorge_Woman_Text::
# 285 "data/maps/MarigorgeTown/scripts.pory"
	.string "Thanks to the fresh water flowing in\n"
	.string "from the mountains,\l"
	.string "this normally arid area is teeming\l"
	.string "with life.$"

Marigorge_Sign1_Text::
# 296 "data/maps/MarigorgeTown/scripts.pory"
	.string "Move Deleter's house\p"
	.string "“Unwanted Pokémon moves deleted.”$"

Marigorge_Sign2_Text::
# 305 "data/maps/MarigorgeTown/scripts.pory"
	.string "Marigorge Town\p"
	.string "“A peaceful oasis amidst mountains.”$"

MarigorgeHouse_OldWoman_Text::
# 314 "data/maps/MarigorgeTown/scripts.pory"
	.string "Have you seen the huge waterfall\n"
	.string "outside?\p"
	.string "A legend says that a strong Pokémon\n"
	.string "lives up that waterfall,\l"
	.string "and that only worthy trainers are\l"
	.string "allowed to even approach it.$"

Marigorge_Mart_Woman_Text::
# 327 "data/maps/MarigorgeTown/scripts.pory"
	.string "I was hoping to bring some Safari Balls\n"
	.string "as a souvenir but I guess they don't\l"
	.string "sell them in regular Poké Marts…$"

Marigorge_Mart_Fisherman_Text::
# 337 "data/maps/MarigorgeTown/scripts.pory"
	.string "The new BP shops are great but if\n"
	.string "you're in need of regular everyday\l"
	.string "supplies, you really can't go wrong\l"
	.string "with Poké Mart!$"

Marigorge_SusMan_Text::
# 393 "data/maps/MarigorgeTown/scripts.pory"
	.string "Psst!\p"
	.string "I've got a special deal,\n"
	.string "just for you.\p"
	.string "I was able to smuggle one of the\n"
	.string "Safari Balls out of the Safari Zone.\l"
	.string "Don't ask me how.$"

Marigorge_SusMan_BuyBall::
# 401 "data/maps/MarigorgeTown/scripts.pory"
	.string "Anyway, interested to buy it?\n"
	.string "I can sell it for ¥3000.\p"
	.string "It wasn't easy so of course the price\n"
	.string "must reflect the risk taken.$"

Marigorge_SusMan_YourLoss::
# 407 "data/maps/MarigorgeTown/scripts.pory"
	.string "Whatever man, your loss.$"

Marigorge_SusMan_ScammingMe::
# 410 "data/maps/MarigorgeTown/scripts.pory"
	.string "You trying to scam me or what?\n"
	.string "You clearly don't have enough money.$"

Marigorge_SusMan_GaveMoney::
# 414 "data/maps/MarigorgeTown/scripts.pory"
	.string "{PLAYER} gave ¥3000 to the\n"
	.string "suspicious man.$"

Marigorge_SusMan_DontGoToSafari::
# 418 "data/maps/MarigorgeTown/scripts.pory"
	.string "Pleasure doing business with you.\p"
	.string "If you're interested, I might be able\n"
	.string "to get another one tomorrow\l"
	.string "once the heat dies down.$"

Marigorge_SusMan_AlreadyBought::
# 424 "data/maps/MarigorgeTown/scripts.pory"
	.string "Sorry, but that's all I managed to\n"
	.string "smuggle out.\p"
	.string "I can maybe get another one tomorrow\n"
	.string "once the heat dies down.$"

WouldYouLikeToSellCrown::
# 451 "data/maps/MarigorgeTown/scripts.pory"
	.string "I can't believe my eyes!\n"
	.string "That's a genuine Relic Crown!\p"
	.string "Would you like to sell it to\n"
	.string "the museum for ¥300000?$"
