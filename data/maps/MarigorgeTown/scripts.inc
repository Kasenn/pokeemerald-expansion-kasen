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
