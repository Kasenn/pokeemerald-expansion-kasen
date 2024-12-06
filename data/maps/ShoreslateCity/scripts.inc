ShoreslateCity_MapScripts::
# 2 "data/maps/ShoreslateCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VisitedShoreslate
# 3 "data/maps/ShoreslateCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedShoreslate
	.byte 0


VisitedShoreslate::
# 6 "data/maps/ShoreslateCity/scripts.pory"
	goto_if_unset FLAG_DAILY_RESET_CASTELIACONE, VisitedShoreslate_2
VisitedShoreslate_1:
# 10 "data/maps/ShoreslateCity/scripts.pory"
	setflag FLAG_VISITED_SHORESLATE
# 11 "data/maps/ShoreslateCity/scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	end

VisitedShoreslate_2:
# 7 "data/maps/ShoreslateCity/scripts.pory"
	setvar VAR_CASTELIACONES_BOUGHT, 0
# 8 "data/maps/ShoreslateCity/scripts.pory"
	setflag FLAG_DAILY_RESET_CASTELIACONE
	goto VisitedShoreslate_1


Shoreslate_NinjaBoy::
# 16 "data/maps/ShoreslateCity/scripts.pory"
	goto_if_unset FLAG_HELPED_DEVON_CORP, Shoreslate_NinjaBoy_2
# 20 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_NinjaBoy_Text2, MSGBOX_NPC
Shoreslate_NinjaBoy_1:
	end

Shoreslate_NinjaBoy_2:
# 17 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_NinjaBoy_Text, MSGBOX_NPC
	goto Shoreslate_NinjaBoy_1


Shoreslate_OldWoman::
# 36 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_OldWoman_Text, MSGBOX_NPC
	end


Shoreslate_Boy1::
# 46 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Boy1_Text, MSGBOX_NPC
	end


Shoreslate_ItemBall::
# 57 "data/maps/ShoreslateCity/scripts.pory"
	finditem ITEM_FULL_HEAL
	end


Shoreslate_Man2::
# 61 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Man2_Text, MSGBOX_NPC
	end


Shoreslate_Sign1::
# 70 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Sign1_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sign2::
# 76 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Sign2_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sign3::
# 80 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Sign3_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sign4::
# 84 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Sign4_Text_0, MSGBOX_SIGN
	end


Shoreslate_Sailor::
# 88 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Sailor_Text, MSGBOX_NPC
	end


Shoreslate_ExpertM::
# 98 "data/maps/ShoreslateCity/scripts.pory"
	lockall
# 99 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_ExpertM_Text, MSGBOX_DEFAULT
# 100 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 101 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 102 "data/maps/ShoreslateCity/scripts.pory"
	release
	end


Shoreslate_Maniac::
# 111 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Maniac_Text, MSGBOX_NPC
	end


Shoreslate_OldCoupleM::
# 120 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_OldCoupleM_Text, MSGBOX_NPC
	end


Shoreslate_OldCoupleF::
# 131 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_OldCoupleF_Text, MSGBOX_NPC
	end


Shoreslate_Woman3::
# 142 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Woman3_Text, MSGBOX_NPC
	end


Shoreslate_Fisher::
# 152 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Fisher_Text, MSGBOX_NPC
	end


Shoreslate_Man1::
# 163 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_Man1_Text, MSGBOX_NPC
	end


Shoreslate_CasteliaGirl::
# 174 "data/maps/ShoreslateCity/scripts.pory"
	faceplayer
# 175 "data/maps/ShoreslateCity/scripts.pory"
	lockall
# 176 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaGirl_Text, MSGBOX_DEFAULT
# 177 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 178 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 179 "data/maps/ShoreslateCity/scripts.pory"
	delay 15
# 180 "data/maps/ShoreslateCity/scripts.pory"
	checkitem ITEM_CASTELIACONE, 1
# 181 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaGirl_2
Shoreslate_CasteliaGirl_1:
# 218 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 219 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 220 "data/maps/ShoreslateCity/scripts.pory"
	release
	end

Shoreslate_CasteliaGirl_2:
# 182 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_CASTELIACONES_BOUGHT, 1
	goto_if_eq Shoreslate_CasteliaGirl_5
# 186 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ShoreslateCheckCastelias, MSGBOX_YESNO
Shoreslate_CasteliaGirl_4:
# 188 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaGirl_8
	goto Shoreslate_CasteliaGirl_1

Shoreslate_CasteliaGirl_5:
# 183 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ShoreslateCheckCastelia, MSGBOX_YESNO
	goto Shoreslate_CasteliaGirl_4

Shoreslate_CasteliaGirl_8:
# 189 "data/maps/ShoreslateCity/scripts.pory"
	checkitem ITEM_CASTELIACONE, 4
# 190 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_CasteliaGirl_11
Shoreslate_CasteliaGirl_10:
# 193 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaGirl_13
	goto Shoreslate_CasteliaGirl_1

Shoreslate_CasteliaGirl_11:
# 191 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaSecondThought, MSGBOX_NPC
	goto Shoreslate_CasteliaGirl_10

Shoreslate_CasteliaGirl_13:
# 194 "data/maps/ShoreslateCity/scripts.pory"
	removeitem ITEM_CASTELIACONE, 4
# 195 "data/maps/ShoreslateCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 196 "data/maps/ShoreslateCity/scripts.pory"
	message HandedOverCastelia
# 197 "data/maps/ShoreslateCity/scripts.pory"
	waitfanfare
# 198 "data/maps/ShoreslateCity/scripts.pory"
	checkplayergender
# 199 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_CasteliaGirl_16
# 203 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ThankYouMsCastelia, MSGBOX_DEFAULT
Shoreslate_CasteliaGirl_15:
# 205 "data/maps/ShoreslateCity/scripts.pory"
	giveitem ITEM_AIR_BALLOON
# 206 "data/maps/ShoreslateCity/scripts.pory"
	waitfanfare
# 207 "data/maps/ShoreslateCity/scripts.pory"
	msgbox GetHomeFast, MSGBOX_DEFAULT
# 208 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 209 "data/maps/ShoreslateCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/ShoreslateCity/scripts.pory"
	delay 15
# 211 "data/maps/ShoreslateCity/scripts.pory"
	removeobject 24
# 212 "data/maps/ShoreslateCity/scripts.pory"
	setflag FLAG_GIVEN_CASTELIATOGIRL
# 213 "data/maps/ShoreslateCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 214 "data/maps/ShoreslateCity/scripts.pory"
	delay 15
	goto Shoreslate_CasteliaGirl_1

Shoreslate_CasteliaGirl_16:
# 200 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ThankYouMrCastelia, MSGBOX_DEFAULT
	goto Shoreslate_CasteliaGirl_15


Shoreslate_CasteliaVendor::
# 267 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_CASTELIACONES_BOUGHT, 8
	goto_if_ge Shoreslate_CasteliaVendor_2
# 271 "data/maps/ShoreslateCity/scripts.pory"
	faceplayer
# 272 "data/maps/ShoreslateCity/scripts.pory"
	lock
# 273 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Shoreslate_CasteliaVendor_5
# 287 "data/maps/ShoreslateCity/scripts.pory"
	showmoneybox 0, 0
# 288 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaVendor_InterestInConesShort, MSGBOX_YESNO
# 289 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaVendor_7
# 294 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaVendor_ThatsShame, MSGBOX_NPC
# 295 "data/maps/ShoreslateCity/scripts.pory"
	hidemoneybox
	end

Shoreslate_CasteliaVendor_2:
# 268 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaVendor_OutOfCones, MSGBOX_NPC
	end

Shoreslate_CasteliaVendor_5:
# 274 "data/maps/ShoreslateCity/scripts.pory"
	showmoneybox 0, 0
# 275 "data/maps/ShoreslateCity/scripts.pory"
	setvar VAR_TEMP_5, 1
# 276 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaVendor_InterestInCones, MSGBOX_YESNO
# 277 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_CasteliaVendor_10
# 282 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaVendor_ThatsShame, MSGBOX_NPC
# 283 "data/maps/ShoreslateCity/scripts.pory"
	hidemoneybox
	end

Shoreslate_CasteliaVendor_7:
# 290 "data/maps/ShoreslateCity/scripts.pory"
	goto HowManyCastelias
	end

Shoreslate_CasteliaVendor_10:
# 278 "data/maps/ShoreslateCity/scripts.pory"
	goto HowManyCastelias
	end


HowManyCastelias::
# 300 "data/maps/ShoreslateCity/scripts.pory"
	message HowManyCastelias_Text_0
# 301 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 302 "data/maps/ShoreslateCity/scripts.pory"
	multichoice 23, 0, 9, 0
# 303 "data/maps/ShoreslateCity/scripts.pory"
	switch VAR_RESULT
# 304 "data/maps/ShoreslateCity/scripts.pory"
	case 0, HowManyCastelias_2
# 306 "data/maps/ShoreslateCity/scripts.pory"
	case 1, HowManyCastelias_3
# 308 "data/maps/ShoreslateCity/scripts.pory"
	case 2, HowManyCastelias_4
# 310 "data/maps/ShoreslateCity/scripts.pory"
	case MULTI_B_PRESSED, HowManyCastelias_5
	return

HowManyCastelias_2:
# 305 "data/maps/ShoreslateCity/scripts.pory"
	goto Buy1Castelia
	return

HowManyCastelias_3:
# 307 "data/maps/ShoreslateCity/scripts.pory"
	goto Buy4Castelia
	return

HowManyCastelias_4:
# 309 "data/maps/ShoreslateCity/scripts.pory"
	goto CancelBuyingCastelia
	return

HowManyCastelias_5:
# 311 "data/maps/ShoreslateCity/scripts.pory"
	goto CancelBuyingCastelia
	return


Buy1Castelia::
# 315 "data/maps/ShoreslateCity/scripts.pory"
	hidemoneybox
	checkitemspace ITEM_CASTELIACONE, 1
# 0 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Buy1Castelia_2
# 320 "data/maps/ShoreslateCity/scripts.pory"
	checkmoney 350
# 321 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Buy1Castelia_5
# 325 "data/maps/ShoreslateCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 326 "data/maps/ShoreslateCity/scripts.pory"
	message Bought1Castelia
# 327 "data/maps/ShoreslateCity/scripts.pory"
	waitfanfare
# 328 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Put1CasteliaInPocket, MSGBOX_DEFAULT
# 329 "data/maps/ShoreslateCity/scripts.pory"
	removemoney 350
# 330 "data/maps/ShoreslateCity/scripts.pory"
	additem ITEM_CASTELIACONE, 1
# 331 "data/maps/ShoreslateCity/scripts.pory"
	addvar VAR_CASTELIACONES_BOUGHT, 1
# 332 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 333 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 334 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Buy1Castelia_Text_0, MSGBOX_NPC
# 335 "data/maps/ShoreslateCity/scripts.pory"
	release
	end

Buy1Castelia_2:
# 317 "data/maps/ShoreslateCity/scripts.pory"
	msgbox NotRoomForCastelias, MSGBOX_NPC
	end

Buy1Castelia_5:
# 322 "data/maps/ShoreslateCity/scripts.pory"
	msgbox NotMoneyForCastelias, MSGBOX_NPC
	end


Buy4Castelia::
# 346 "data/maps/ShoreslateCity/scripts.pory"
	hidemoneybox
	checkitemspace ITEM_CASTELIACONE, 4
# 0 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Buy4Castelia_2
# 351 "data/maps/ShoreslateCity/scripts.pory"
	checkmoney 1050
# 352 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Buy4Castelia_5
# 356 "data/maps/ShoreslateCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 357 "data/maps/ShoreslateCity/scripts.pory"
	message Bought4Castelia
# 358 "data/maps/ShoreslateCity/scripts.pory"
	waitfanfare
# 359 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Put4CasteliaInPocket, MSGBOX_DEFAULT
# 360 "data/maps/ShoreslateCity/scripts.pory"
	removemoney 1050
# 361 "data/maps/ShoreslateCity/scripts.pory"
	additem ITEM_CASTELIACONE, 4
# 362 "data/maps/ShoreslateCity/scripts.pory"
	addvar VAR_CASTELIACONES_BOUGHT, 4
# 363 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 364 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 365 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Buy1Castelia_Text_0, MSGBOX_NPC
# 366 "data/maps/ShoreslateCity/scripts.pory"
	release
	end

Buy4Castelia_2:
# 348 "data/maps/ShoreslateCity/scripts.pory"
	msgbox NotRoomForCastelias, MSGBOX_NPC
	end

Buy4Castelia_5:
# 353 "data/maps/ShoreslateCity/scripts.pory"
	msgbox NotMoneyForCastelias, MSGBOX_NPC
	end


CancelBuyingCastelia::
# 378 "data/maps/ShoreslateCity/scripts.pory"
	msgbox Shoreslate_CasteliaVendor_ThatsShame, MSGBOX_NPC
# 379 "data/maps/ShoreslateCity/scripts.pory"
	hidemoneybox
	end


Shoreslate_DevonExteriorTrigger::
# 418 "data/maps/ShoreslateCity/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_eq Shoreslate_DevonExteriorTrigger_2
# 431 "data/maps/ShoreslateCity/scripts.pory"
	safefollow
# 432 "data/maps/ShoreslateCity/scripts.pory"
	lock
# 433 "data/maps/ShoreslateCity/scripts.pory"
	delay 5
# 434 "data/maps/ShoreslateCity/scripts.pory"
	turnobject 1, DIR_SOUTH
# 435 "data/maps/ShoreslateCity/scripts.pory"
	delay 5
# 436 "data/maps/ShoreslateCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 437 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ShoreSlate_NotGettingThrough, MSGBOX_DEFAULT
# 438 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 439 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 440 "data/maps/ShoreslateCity/scripts.pory"
	setvar VAR_TEMP_6, 1
# 441 "data/maps/ShoreslateCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 442 "data/maps/ShoreslateCity/scripts.pory"
	waitmovement 0
# 443 "data/maps/ShoreslateCity/scripts.pory"
	delay 5
# 444 "data/maps/ShoreslateCity/scripts.pory"
	release
	end

Shoreslate_DevonExteriorTrigger_2:
# 419 "data/maps/ShoreslateCity/scripts.pory"
	lockall
# 420 "data/maps/ShoreslateCity/scripts.pory"
	delay 5
# 421 "data/maps/ShoreslateCity/scripts.pory"
	turnobject 1, DIR_SOUTH
# 422 "data/maps/ShoreslateCity/scripts.pory"
	delay 5
# 423 "data/maps/ShoreslateCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 424 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ShoreSlate_YouDeaf, MSGBOX_DEFAULT
# 425 "data/maps/ShoreslateCity/scripts.pory"
	waitmessage
# 426 "data/maps/ShoreslateCity/scripts.pory"
	closemessage
# 427 "data/maps/ShoreslateCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHORESLATE_ROCKET, ShoreSlateRocketDefeat
# 428 "data/maps/ShoreslateCity/scripts.pory"
	release
	end


Shoreslate_RocketM::
# 455 "data/maps/ShoreslateCity/scripts.pory"
	checktrainerflag TRAINER_SHORESLATE_ROCKET
	goto_if 0, Shoreslate_RocketM_2
# 459 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ShoreSlate_RocketWontStop, MSGBOX_NPC
Shoreslate_RocketM_1:
	end

Shoreslate_RocketM_2:
# 456 "data/maps/ShoreslateCity/scripts.pory"
	msgbox ShoreSlate_RocketStop, MSGBOX_NPC
	goto Shoreslate_RocketM_1


Shoreslate_Sign1_Text_0:
# 70 "data/maps/ShoreslateCity/scripts.pory"
	.string "SHORESLATE CITY\p"
	.string "“The port where people and Pokémon\n"
	.string "cross paths.”$"

Shoreslate_Sign2_Text_0:
# 76 "data/maps/ShoreslateCity/scripts.pory"
	.string "Devon Corporation Headquarters$"

Shoreslate_Sign3_Text_0:
# 80 "data/maps/ShoreslateCity/scripts.pory"
	.string "Shoreslate Harbor$"

Shoreslate_Sign4_Text_0:
# 84 "data/maps/ShoreslateCity/scripts.pory"
	.string "Shoreslate Bike Shop$"

HowManyCastelias_Text_0:
# 300 "data/maps/ShoreslateCity/scripts.pory"
	.string "How many Casteliacones\nwould you like to buy?$"

Buy1Castelia_Text_0:
# 334 "data/maps/ShoreslateCity/scripts.pory"
	.string "Please come again!$"

Shoreslate_NinjaBoy_Text::
# 24 "data/maps/ShoreslateCity/scripts.pory"
	.string "I wanted to visit Devon Corp's offices\n"
	.string "but there was this strange man who\l"
	.string "told me to leave…$"

Shoreslate_NinjaBoy_Text2::
# 29 "data/maps/ShoreslateCity/scripts.pory"
	.string "Oh, the weird man outside was\n"
	.string "a Team Rocket grunt?\l"
	.string "Glad to see they were able to\l"
	.string "drive him away.$"

Shoreslate_OldWoman_Text::
# 39 "data/maps/ShoreslateCity/scripts.pory"
	.string "I used to be the owner of the Pretty\n"
	.string "Petal flower shop on route 8.\l"
	.string "Nowadays I'm retired so my daughter has\l"
	.string "taken over the business in my stead.$"

Shoreslate_Boy1_Text::
# 49 "data/maps/ShoreslateCity/scripts.pory"
	.string "Oh, I don't believe I've seen\n"
	.string "your face here before.\p"
	.string "Are you here to visit or are you just\n"
	.string "passing through on your way to\l"
	.string "western Sinko?$"

Shoreslate_Man2_Text::
# 64 "data/maps/ShoreslateCity/scripts.pory"
	.string "Do you have the need for speed?\p"
	.string "Then you need to visit Rydel's\n"
	.string "bike shop!$"

Shoreslate_Sailor_Text::
# 91 "data/maps/ShoreslateCity/scripts.pory"
	.string "Taking the ferry is a perfectly fine\n"
	.string "option, but if you want to feel alive,\l"
	.string "there's no better way of crossing the\l"
	.string "ocean than on the back of a Pokémon!$"

Shoreslate_ExpertM_Text::
# 105 "data/maps/ShoreslateCity/scripts.pory"
	.string "Ah, the sea…\n"
	.string "Makes you glad to be alive.\l"
	.string "Just feel that salty spray.$"

Shoreslate_Maniac_Text::
# 114 "data/maps/ShoreslateCity/scripts.pory"
	.string "I really want to visit the market but\n"
	.string "there's just so many people there and\l"
	.string "I don't do great with crowds…$"

Shoreslate_OldCoupleM_Text::
# 123 "data/maps/ShoreslateCity/scripts.pory"
	.string "Shoreslate is one of the oldest cities\n"
	.string "in all of Sinko.\p"
	.string "My wife and I were both born here and\n"
	.string "even back in our youth, Shoreslate\l"
	.string "was already a bustling city.$"

Shoreslate_OldCoupleF_Text::
# 134 "data/maps/ShoreslateCity/scripts.pory"
	.string "A young trainer, eh?\p"
	.string "Don't let my looks deceive you.\n"
	.string "In my youth, I came this close to\l"
	.string "becoming the Pokémon League Champion\l"
	.string "of Sinko.$"

Shoreslate_Woman3_Text::
# 145 "data/maps/ShoreslateCity/scripts.pory"
	.string "Have you been to a BP Shop yet?\n"
	.string "I heard this one's selection of moves\l"
	.string "and items is completely different\l"
	.string "compared to the one in Aldeleaf.$"

Shoreslate_Fisher_Text::
# 155 "data/maps/ShoreslateCity/scripts.pory"
	.string "I was once fishing off the coast of\n"
	.string "Kaolisle City when I almost caught\l"
	.string "a Wailord!\p"
	.string "Don't believe me?\n"
	.string "Ask my friend!$"

Shoreslate_Man1_Text::
# 166 "data/maps/ShoreslateCity/scripts.pory"
	.string "Everything this guy says is true!\p"
	.string "… … … …\p"
	.string "Okay, it was actually just a regular\n"
	.string "Goldeen…$"

Shoreslate_CasteliaGirl_Text::
# 223 "data/maps/ShoreslateCity/scripts.pory"
	.string "Sniff… My daddy gave me money to buy\n"
	.string "ice cream for the whole family but\l"
	.string "when I got here, I could no longer\l"
	.string "find the bill in my pocket…\l"
	.string "What do I do…$"

ShoreslateCheckCastelia::
# 230 "data/maps/ShoreslateCity/scripts.pory"
	.string "You recall buying a Casteliacone.\n"
	.string "Would you like to offer it to the\l"
	.string "little girl?$"

ShoreslateCheckCastelias::
# 235 "data/maps/ShoreslateCity/scripts.pory"
	.string "You recall buying some Casteliacones.\n"
	.string "Would you like to offer them to the\l"
	.string "little girl?$"

Shoreslate_CasteliaSecondThought::
# 240 "data/maps/ShoreslateCity/scripts.pory"
	.string "On second thought, maybe you should\n"
	.string "get some more Casteliacones first.\l"
	.string "She did mention “the whole family.”$"

HandedOverCastelia::
# 245 "data/maps/ShoreslateCity/scripts.pory"
	.string "{PLAYER} handed 4 Casteliacones\n"
	.string "to the little girl.$"

ThankYouMrCastelia::
# 249 "data/maps/ShoreslateCity/scripts.pory"
	.string "Wow! Thanks mister!\n"
	.string "You are the best!\p"
	.string "Umm, my hands are getting a bit full\n"
	.string "so here, you can have this.$"

ThankYouMsCastelia::
# 255 "data/maps/ShoreslateCity/scripts.pory"
	.string "Wow! Thanks big sis!\n"
	.string "You are the best!\p"
	.string "Umm, my hands are getting a bit full\n"
	.string "so here, you can have this.$"

GetHomeFast::
# 261 "data/maps/ShoreslateCity/scripts.pory"
	.string "I need to get back before these melt.\n"
	.string "Thanks again!$"

Bought1Castelia::
# 338 "data/maps/ShoreslateCity/scripts.pory"
	.string "{PLAYER} bought a Casteliacone!$"

Put1CasteliaInPocket::
# 341 "data/maps/ShoreslateCity/scripts.pory"
	.string "{PLAYER} put away the Casteliacone\n"
	.string "in the Items pocket.$"

Bought4Castelia::
# 369 "data/maps/ShoreslateCity/scripts.pory"
	.string "{PLAYER} bought a pack of 4\n"
	.string "Casteliacones!$"

Put4CasteliaInPocket::
# 373 "data/maps/ShoreslateCity/scripts.pory"
	.string "{PLAYER} put away the Casteliacones\n"
	.string "in the Items pocket.$"

Shoreslate_CasteliaVendor_OutOfCones::
# 382 "data/maps/ShoreslateCity/scripts.pory"
	.string "I'm sorry, but we have run out of\n"
	.string "Casteliacones for the day.\p"
	.string "We should have a new shipment\n"
	.string "coming in tomorrow.$"

Shoreslate_CasteliaVendor_ThatsShame::
# 388 "data/maps/ShoreslateCity/scripts.pory"
	.string "That's a shame…\p"
	.string "Well, let me know if you\n"
	.string "change your mind!$"

Shoreslate_CasteliaVendor_InterestInConesShort::
# 393 "data/maps/ShoreslateCity/scripts.pory"
	.string "Would you like to buy some\n"
	.string "Casteliacones?\l"
	.string "One cone costs ¥350 but a pack\l"
	.string "of 4 costs only ¥1050!$"

Shoreslate_CasteliaVendor_InterestInCones::
# 399 "data/maps/ShoreslateCity/scripts.pory"
	.string "I have recently acquired the coolest\n"
	.string "commodity all the way from Unova.\p"
	.string "That's right! It's everyone's favorite\n"
	.string "ice cream, the Casteliacone!\p"
	.string "Might I interest you in some\n"
	.string "Casteliacones?\l"
	.string "One cone costs ¥350 but a pack\l"
	.string "of 4 costs only ¥1050!$"

NotRoomForCastelias::
# 409 "data/maps/ShoreslateCity/scripts.pory"
	.string "I'm sorry, but you don't have room\n"
	.string "to carry any more Casteliacones…$"

NotMoneyForCastelias::
# 413 "data/maps/ShoreslateCity/scripts.pory"
	.string "I'm sorry, but you can't afford that…$"

ShoreSlate_NotGettingThrough::
# 448 "data/maps/ShoreslateCity/scripts.pory"
	.string "Back off, pal.\n"
	.string "Nobody's going through here.\l"
	.string "This is your last and only warning!$"

ShoreSlate_RocketStop::
# 464 "data/maps/ShoreslateCity/scripts.pory"
	.string "The offices are closed. By the boss's\n"
	.string "orders, nobody is allowed to enter.$"

ShoreSlate_RocketWontStop::
# 468 "data/maps/ShoreslateCity/scripts.pory"
	.string "Guh…\n"
	.string "How could this happen…$"

ShoreSlate_YouDeaf::
# 472 "data/maps/ShoreslateCity/scripts.pory"
	.string "I warned you!$"

ShoreSlateRocketDefeat::
# 475 "data/maps/ShoreslateCity/scripts.pory"
	.string "What do I do…\p"
	.string "The boss is definitely going\n"
	.string "to be mad…$"
