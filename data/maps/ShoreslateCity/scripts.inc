ShoreslateCity_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VisitedShoreslate
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedShoreslate
	.byte 0


VisitedShoreslate::
	goto_if_unset FLAG_DAILY_RESET_CASTELIACONE, VisitedShoreslate_2
VisitedShoreslate_1:
	setflag FLAG_VISITED_SHORESLATE
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	end

VisitedShoreslate_2:
	setvar VAR_CASTELIACONES_BOUGHT, 0
	setflag FLAG_DAILY_RESET_CASTELIACONE
	goto VisitedShoreslate_1


Shoreslate_NinjaBoy::
	goto_if_unset FLAG_HELPED_DEVON_CORP, Shoreslate_NinjaBoy_2
	msgbox Shoreslate_NinjaBoy_Text2, MSGBOX_NPC
Shoreslate_NinjaBoy_1:
	end

Shoreslate_NinjaBoy_2:
	msgbox Shoreslate_NinjaBoy_Text, MSGBOX_NPC
	goto Shoreslate_NinjaBoy_1


Shoreslate_OldWoman::
	msgbox Shoreslate_OldWoman_Text, MSGBOX_NPC
	end


Shoreslate_Boy1::
	msgbox Shoreslate_Boy1_Text, MSGBOX_NPC
	end


Shoreslate_ItemBall::
	finditem ITEM_FULL_HEAL
	end


Shoreslate_Man2::
	msgbox Shoreslate_Man2_Text, MSGBOX_NPC
	end


Shoreslate_Sign1::
	msgbox Shoreslate_Sign1_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sign2::
	msgbox Shoreslate_Sign2_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sign3::
	msgbox Shoreslate_Sign3_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sign4::
	msgbox Shoreslate_Sign4_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sailor::
	msgbox Shoreslate_Sailor_Text, MSGBOX_NPC
	end


Shoreslate_ExpertM::
	lockall
	msgbox Shoreslate_ExpertM_Text, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


Shoreslate_Maniac::
	msgbox Shoreslate_Maniac_Text, MSGBOX_NPC
	end


Shoreslate_OldCoupleM::
	msgbox Shoreslate_OldCoupleM_Text, MSGBOX_NPC
	end


Shoreslate_OldCoupleF::
	msgbox Shoreslate_OldCoupleF_Text, MSGBOX_NPC
	end


Shoreslate_Woman3::
	msgbox Shoreslate_Woman3_Text, MSGBOX_NPC
	end


Shoreslate_Fisher::
	msgbox Shoreslate_Fisher_Text, MSGBOX_NPC
	end


Shoreslate_Man1::
	msgbox Shoreslate_Man1_Text, MSGBOX_NPC
	end


Shoreslate_CasteliaGirl::
	faceplayer
	lockall
	msgbox Shoreslate_CasteliaGirl_Text, MSGBOX_DEFAULT
	waitmessage
	closemessage
	delay 15
	checkitem ITEM_CASTELIACONE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaGirl_2
Shoreslate_CasteliaGirl_1:
	closemessage
	waitmessage
	release
	end

Shoreslate_CasteliaGirl_2:
	compare VAR_CASTELIACONES_BOUGHT, 1
	goto_if_eq Shoreslate_CasteliaGirl_5
	msgbox ShoreslateCheckCastelias, MSGBOX_YESNO
Shoreslate_CasteliaGirl_4:
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaGirl_8
	goto Shoreslate_CasteliaGirl_1

Shoreslate_CasteliaGirl_5:
	msgbox ShoreslateCheckCastelia, MSGBOX_YESNO
	goto Shoreslate_CasteliaGirl_4

Shoreslate_CasteliaGirl_8:
	checkitem ITEM_CASTELIACONE, 4
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_CasteliaGirl_11
Shoreslate_CasteliaGirl_10:
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaGirl_13
	goto Shoreslate_CasteliaGirl_1

Shoreslate_CasteliaGirl_11:
	msgbox Shoreslate_CasteliaSecondThought, MSGBOX_NPC
	goto Shoreslate_CasteliaGirl_10

Shoreslate_CasteliaGirl_13:
	removeitem ITEM_CASTELIACONE, 4
	playfanfare MUS_OBTAIN_ITEM
	message HandedOverCastelia
	waitfanfare
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_CasteliaGirl_16
	msgbox ThankYouMsCastelia, MSGBOX_DEFAULT
Shoreslate_CasteliaGirl_15:
	giveitem ITEM_AIR_BALLOON
	waitfanfare
	msgbox GetHomeFast, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	delay 15
	removeobject 24
	setflag FLAG_GIVEN_CASTELIATOGIRL
	fadescreen FADE_FROM_BLACK
	delay 15
	goto Shoreslate_CasteliaGirl_1

Shoreslate_CasteliaGirl_16:
	msgbox ThankYouMrCastelia, MSGBOX_DEFAULT
	goto Shoreslate_CasteliaGirl_15


Shoreslate_CasteliaVendor::
	compare VAR_CASTELIACONES_BOUGHT, 8
	goto_if_ge Shoreslate_CasteliaVendor_2
	faceplayer
	lock
	compare VAR_TEMP_5, 0
	goto_if_eq Shoreslate_CasteliaVendor_5
	showmoneybox 0, 0
	msgbox Shoreslate_CasteliaVendor_InterestInConesShort, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaVendor_7
	msgbox Shoreslate_CasteliaVendor_ThatsShame, MSGBOX_NPC
	hidemoneybox
	end

Shoreslate_CasteliaVendor_2:
	msgbox Shoreslate_CasteliaVendor_OutOfCones, MSGBOX_NPC
	end

Shoreslate_CasteliaVendor_5:
	showmoneybox 0, 0
	setvar VAR_TEMP_5, 1
	msgbox Shoreslate_CasteliaVendor_InterestInCones, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaVendor_10
	msgbox Shoreslate_CasteliaVendor_ThatsShame, MSGBOX_NPC
	hidemoneybox
	end

Shoreslate_CasteliaVendor_7:
	goto HowManyCastelias
	end

Shoreslate_CasteliaVendor_10:
	goto HowManyCastelias
	end


HowManyCastelias::
	message HowManyCastelias_Text_0
	multichoice 23, 0, 9, 0
	switch VAR_RESULT
	case 0, HowManyCastelias_2
	case 1, HowManyCastelias_3
	case 2, HowManyCastelias_4
	case MULTI_B_PRESSED, HowManyCastelias_5
	return

HowManyCastelias_2:
	goto Buy1Castelia
	return

HowManyCastelias_3:
	goto Buy4Castelia
	return

HowManyCastelias_4:
	goto CancelBuyingCastelia
	return

HowManyCastelias_5:
	goto CancelBuyingCastelia
	return


Buy1Castelia::
	hidemoneybox
	checkitemspace ITEM_CASTELIACONE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Buy1Castelia_2
	checkmoney 350
	compare VAR_RESULT, FALSE
	goto_if_eq Buy1Castelia_5
	playfanfare MUS_OBTAIN_ITEM
	message Bought1Castelia
	waitfanfare
	msgbox Put1CasteliaInPocket, MSGBOX_DEFAULT
	removemoney 350
	additem ITEM_CASTELIACONE, 1
	addvar VAR_CASTELIACONES_BOUGHT, 1
	waitmessage
	closemessage
	msgbox Buy1Castelia_Text_0, MSGBOX_NPC
	release
	end

Buy1Castelia_2:
	msgbox NotRoomForCastelias, MSGBOX_NPC
	end

Buy1Castelia_5:
	msgbox NotMoneyForCastelias, MSGBOX_NPC
	end


Buy4Castelia::
	hidemoneybox
	checkitemspace ITEM_CASTELIACONE, 4
	compare VAR_RESULT, FALSE
	goto_if_eq Buy4Castelia_2
	checkmoney 1050
	compare VAR_RESULT, FALSE
	goto_if_eq Buy4Castelia_5
	playfanfare MUS_OBTAIN_ITEM
	message Bought4Castelia
	waitfanfare
	msgbox Put4CasteliaInPocket, MSGBOX_DEFAULT
	removemoney 1050
	additem ITEM_CASTELIACONE, 4
	addvar VAR_CASTELIACONES_BOUGHT, 4
	waitmessage
	closemessage
	msgbox Buy1Castelia_Text_0, MSGBOX_NPC
	release
	end

Buy4Castelia_2:
	msgbox NotRoomForCastelias, MSGBOX_NPC
	end

Buy4Castelia_5:
	msgbox NotMoneyForCastelias, MSGBOX_NPC
	end


CancelBuyingCastelia::
	msgbox Shoreslate_CasteliaVendor_ThatsShame, MSGBOX_NPC
	hidemoneybox
	end


Shoreslate_DevonExteriorTrigger::
	checktrainerflag TRAINER_SHORESLATE_ROCKET
	goto_if 0, Shoreslate_DevonExteriorTrigger_1
	release
	end

Shoreslate_DevonExteriorTrigger_1:
	compare VAR_TEMP_6, 1
	goto_if_eq Shoreslate_DevonExteriorTrigger_5
	lockall
	delay 5
	turnobject 1, DIR_SOUTH
	delay 5
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox ShoreSlate_NotGettingThrough, MSGBOX_DEFAULT
	waitmessage
	closemessage
	setvar VAR_TEMP_6, 1
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	delay 5
	release
	end

Shoreslate_DevonExteriorTrigger_5:
	lockall
	delay 5
	turnobject 1, DIR_SOUTH
	delay 5
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox ShoreSlate_YouDeaf, MSGBOX_DEFAULT
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_SHORESLATE_ROCKET, ShoreSlateRocketDefeat
	release
	end


Shoreslate_RocketM::
	checktrainerflag TRAINER_SHORESLATE_ROCKET
	goto_if 0, Shoreslate_RocketM_2
	msgbox ShoreSlate_RocketWontStop, MSGBOX_NPC
Shoreslate_RocketM_1:
	end

Shoreslate_RocketM_2:
	msgbox ShoreSlate_RocketStop, MSGBOX_NPC
	goto Shoreslate_RocketM_1


Shoreslate_Sign1_Text_0:
	.string "SHORESLATE CITY\p"
	.string "“The port where people and Pokémon\n"
	.string "cross paths.”$"

Shoreslate_Sign2_Text_0:
	.string "Devon Corporation Headquarters$"

Shoreslate_Sign3_Text_0:
	.string "Shoreslate Harbor$"

Shoreslate_Sign4_Text_0:
	.string "Shoreslate Bike Shop$"

HowManyCastelias_Text_0:
	.string "How many Casteliacones\nwould you like to buy?$"

Buy1Castelia_Text_0:
	.string "Please come again!$"

Shoreslate_NinjaBoy_Text::
	.string "I wanted to visit Devon Corp's offices\n"
	.string "but there was this strange man who\l"
	.string "told me to leave…$"

Shoreslate_NinjaBoy_Text2::
	.string "Oh, the weird man outside was\n"
	.string "a Team Rocket grunt?\l"
	.string "Glad to see they were able to\l"
	.string "drive him away.$"

Shoreslate_OldWoman_Text::
	.string "I used to be the owner of the Pretty\n"
	.string "Petal flower shop on route 8.\l"
	.string "Nowadays I'm retired so my daughter has\l"
	.string "taken over the business in my stead.$"

Shoreslate_Boy1_Text::
	.string "Oh, I don't believe I've seen\n"
	.string "your face here before.\p"
	.string "Are you here to visit or are you just\n"
	.string "passing through on your way to\l"
	.string "western Sinko?$"

Shoreslate_Man2_Text::
	.string "Do you have the need for speed?\p"
	.string "Then you need to visit Rydel's\n"
	.string "bike shop!$"

Shoreslate_Sailor_Text::
	.string "Taking the ferry is a perfectly fine\n"
	.string "option, but if you want to feel alive,\l"
	.string "there's no better way of crossing the\l"
	.string "ocean than on the back of a Pokémon!$"

Shoreslate_ExpertM_Text::
	.string "Ah, the sea…\n"
	.string "Makes you glad to be alive.\l"
	.string "Just feel that salty spray.$"

Shoreslate_Maniac_Text::
	.string "I really want to visit the market but\n"
	.string "there's just so many people there and\l"
	.string "I don't do great with crowds…$"

Shoreslate_OldCoupleM_Text::
	.string "Shoreslate is one of the oldest cities\n"
	.string "in all of Sinko.\p"
	.string "My wife and I were both born here and\n"
	.string "even back in our youth, Shoreslate\l"
	.string "was already a bustling city.$"

Shoreslate_OldCoupleF_Text::
	.string "A young trainer, eh?\p"
	.string "Don't let my looks deceive you.\n"
	.string "In my youth, I came this close to\l"
	.string "becoming the Pokémon League Champion\l"
	.string "of Sinko.$"

Shoreslate_Woman3_Text::
	.string "Have you been to a BP Shop yet?\n"
	.string "I heard this one's selection of moves\l"
	.string "and items is completely different\l"
	.string "compared to the one in Aldeleaf.$"

Shoreslate_Fisher_Text::
	.string "I was once fishing off the coast of\n"
	.string "Kaolisle City when I almost caught\l"
	.string "a Wailord!\p"
	.string "Don't believe me?\n"
	.string "Ask my friend!$"

Shoreslate_Man1_Text::
	.string "Everything this guy says is true!\p"
	.string "… … … …\p"
	.string "Okay, it was actually just a regular\n"
	.string "Goldeen…$"

Shoreslate_CasteliaGirl_Text::
	.string "Sniff… My daddy gave me money to buy\n"
	.string "ice cream for the whole family but\l"
	.string "when I got here, I could no longer\l"
	.string "find the bill in my pocket…\l"
	.string "What do I do…$"

ShoreslateCheckCastelia::
	.string "You recall buying a Casteliacone.\n"
	.string "Would you like to offer it to the\l"
	.string "little girl?$"

ShoreslateCheckCastelias::
	.string "You recall buying some Casteliacones.\n"
	.string "Would you like to offer them to the\l"
	.string "little girl?$"

Shoreslate_CasteliaSecondThought::
	.string "On second thought, maybe you should\n"
	.string "get some more Casteliacones first.\l"
	.string "She did mention “the whole family.”$"

HandedOverCastelia::
	.string "{PLAYER} handed 4 Casteliacones\n"
	.string "to the little girl.$"

ThankYouMrCastelia::
	.string "Wow! Thanks mister!\n"
	.string "You are the best!\p"
	.string "Umm, my hands are getting a bit full\n"
	.string "so here, you can have this.$"

ThankYouMsCastelia::
	.string "Wow! Thanks big sis!\n"
	.string "You are the best!\p"
	.string "Umm, my hands are getting a bit full\n"
	.string "so here, you can have this.$"

GetHomeFast::
	.string "I need to get back before these melt.\n"
	.string "Thanks again!$"

Bought1Castelia::
	.string "{PLAYER} bought a Casteliacone!$"

Put1CasteliaInPocket::
	.string "{PLAYER} put away the Casteliacone\n"
	.string "in the Items pocket.$"

Bought4Castelia::
	.string "{PLAYER} bought a pack of 4\n"
	.string "Casteliacones!$"

Put4CasteliaInPocket::
	.string "{PLAYER} put away the Casteliacones\n"
	.string "in the Items pocket.$"

Shoreslate_CasteliaVendor_OutOfCones::
	.string "I'm sorry, but we have run out of\n"
	.string "Casteliacones for the day.\p"
	.string "We should have a new shipment\n"
	.string "coming in tomorrow.$"

Shoreslate_CasteliaVendor_ThatsShame::
	.string "That's a shame…\p"
	.string "Well, let me know if you\n"
	.string "change your mind!$"

Shoreslate_CasteliaVendor_InterestInConesShort::
	.string "Would you like to buy some\n"
	.string "Casteliacones?\l"
	.string "One cone costs ¥350 but a pack\l"
	.string "of 4 costs only ¥1050!$"

Shoreslate_CasteliaVendor_InterestInCones::
	.string "I have recently acquired the coolest\n"
	.string "commodity all the way from Unova.\p"
	.string "That's right! It's everyone's favorite\n"
	.string "ice cream, the Casteliacone!\p"
	.string "Might I interest you in some\n"
	.string "Casteliacones?\l"
	.string "One cone costs ¥350 but a pack\l"
	.string "of 4 costs only ¥1050!$"

NotRoomForCastelias::
	.string "I'm sorry, but you don't have room\n"
	.string "to carry any more Casteliacones…$"

NotMoneyForCastelias::
	.string "I'm sorry, but you can't afford that…$"

ShoreSlate_NotGettingThrough::
	.string "Back off, pal.\n"
	.string "Nobody's going through here.\l"
	.string "This is your last and only warning!$"

ShoreSlate_RocketStop::
	.string "The offices are closed. By the boss's\n"
	.string "orders, nobody is allowed to enter.$"

ShoreSlate_RocketWontStop::
	.string "Guh…\n"
	.string "How could this happen…$"

ShoreSlate_YouDeaf::
	.string "I warned you!$"

ShoreSlateRocketDefeat::
	.string "What do I do…\p"
	.string "The boss is definitely going\n"
	.string "to be mad…$"
