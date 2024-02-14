ShoreslateCity_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VisitedShoreslate
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedShoreslate
	.byte 0


VisitedShoreslate::
	goto_if_unset FLAG_DAILY_RESET_CASTELIACONE, VisitedShoreslate_2
VisitedShoreslate_1:
	setflag FLAG_VISITED_SHORESLATE
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
	msgbox Shoreslate_CasteliaGirl_Text, MSGBOX_NPC
	end


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


Shoreslate_Sign1_Text_0:
	.string "SHORESLATE CITY\n“”$"

Shoreslate_Sign2_Text_0:
	.string "Devon Corporation offices$"

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
	.string "$"

Shoreslate_Boy1_Text::
	.string "Oh, I don't believe I've seen\n"
	.string "your face here before.\p"
	.string "Are you here to visit or are you just\n"
	.string "passing through on your way to\l"
	.string "western Sinko?$"

Shoreslate_Man2_Text::
	.string "$"

Shoreslate_Sailor_Text::
	.string "$"

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
	.string "$"

Shoreslate_Woman3_Text::
	.string "$"

Shoreslate_Fisher_Text::
	.string "$"

Shoreslate_Man1_Text::
	.string "$"

Shoreslate_CasteliaGirl_Text::
	.string "$"

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
