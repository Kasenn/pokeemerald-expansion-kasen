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
Aldeleaf_MuseumCurator_1:
	msgbox Aldeleaf_MuseumCurator_Intro, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 1
	checkitem ITEM_RELIC_COPPER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_5
Aldeleaf_MuseumCurator_4:
	checkitem ITEM_RELIC_SILVER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_11
Aldeleaf_MuseumCurator_10:
	checkitem ITEM_RELIC_GOLD
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_17
Aldeleaf_MuseumCurator_16:
	release
	end

Aldeleaf_MuseumCurator_2:
	checkitem ITEM_RELIC_COPPER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_8
Aldeleaf_MuseumCurator_7:
	checkitem ITEM_RELIC_SILVER
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_14
Aldeleaf_MuseumCurator_13:
	checkitem ITEM_RELIC_GOLD
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_MuseumCurator_19
	goto Aldeleaf_MuseumCurator_1

Aldeleaf_MuseumCurator_5:
	goto SellCopperRelic
	goto Aldeleaf_MuseumCurator_4

Aldeleaf_MuseumCurator_8:
	goto SellCopperRelic
	goto Aldeleaf_MuseumCurator_7

Aldeleaf_MuseumCurator_11:
	goto SellSilverRelic
	goto Aldeleaf_MuseumCurator_10

Aldeleaf_MuseumCurator_14:
	goto SellSilverRelic
	goto Aldeleaf_MuseumCurator_13

Aldeleaf_MuseumCurator_17:
	goto SellGoldRelic
	goto Aldeleaf_MuseumCurator_16

Aldeleaf_MuseumCurator_19:
	goto SellGoldRelic
	goto Aldeleaf_MuseumCurator_1


SellCopperRelic::
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox YouHaveCopper, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox WouldYouLikeToSellCopper, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SellCopperRelic_1
	addvar VAR_RELIC_SOLD, 1
	addmoney 1000
	playse SE_SHOP
	updatemoneybox
	removeitem ITEM_RELIC_COPPER, 1
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
	end

SellCopperRelic_1:
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellSilverRelic::
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox YouHaveSilver, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox WouldYouLikeToSellSilver, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SellSilverRelic_1
	addvar VAR_RELIC_SOLD, 1
	addmoney 5000
	playse SE_SHOP
	updatemoneybox
	removeitem ITEM_RELIC_SILVER, 1
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
	end

SellSilverRelic_1:
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


SellGoldRelic::
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox YouHaveGold, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox WouldYouLikeToSellGold, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SellGoldRelic_1
	addvar VAR_RELIC_SOLD, 1
	addmoney 10000
	playse SE_SHOP
	updatemoneybox
	removeitem ITEM_RELIC_GOLD, 1
	msgbox MuseumThanksForArtifact, MSGBOX_NPC
	end

SellGoldRelic_1:
	msgbox MuseumThatsAShame, MSGBOX_NPC
	end


TestMacro6::
	goto Apprentice_EventScript_UseWhatHeldItem
	return


Aldeleaf_MuseumCurator_Intro::
	.string "I'm the curator of this museum of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our museum.\p"
	.string "I bet you're curious about what\n"
	.string "lies up these stairs.\p"
	.string "Unfortunately we are still setting\n"
	.string "things up, so I can't let you pass.$"

YouHaveCopper::
	.string "$"

WouldYouLikeToSellCopper::
	.string "$"

YouHaveSilver::
	.string "$"

WouldYouLikeToSellSilver::
	.string "$"

YouHaveGold::
	.string "$"

WouldYouLikeToSellGold::
	.string "$"

MuseumThatsAShame::
	.string "$"

MuseumThanksForArtifact::
	.string "$"
