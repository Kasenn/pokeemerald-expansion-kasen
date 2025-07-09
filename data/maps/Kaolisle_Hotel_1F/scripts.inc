Kaolisle_Hotel_1F_MapScripts::
# 2 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideJasmine
# 3 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 4 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 5, SetPlayerDirAfterBuffet
# 5 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 9, SetPlayerDirAfterBuffet
	.2byte 0

Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 1, JasmineLeavesHotel
# 9 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 6, BuffetLost2
# 10 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 10, BuffetComplete
	.2byte 0


SetPlayerDirAfterBuffet::
# 14 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 15 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	addvar VAR_KAOLISLE_HOTEL_STATE, 1
	return


JasmineLeavesHotel::
# 19 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	lock
# 20 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 21 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_SOUTH
# 22 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playse SE_PIN
# 23 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	safefollow
# 24 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	exclamationmark 24
# 25 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 24, HotelWalkDown2
# 26 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkDown2
# 27 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 10
# 29 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_JASMINE_AT_HOTEL, JasmineLeavesHotel_2
# 42 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel1F_LongTimeNoSeeGoodbye, MSGBOX_DEFAULT
# 43 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 44 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 45 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 46 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_NORTH
# 47 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmoncry
# 48 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 60
# 49 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_SOUTH
# 50 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 51 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox MyCompanionAmphyAlso, MSGBOX_DEFAULT
JasmineLeavesHotel_1:
# 53 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 54 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 55 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 56 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 24, HotelWalkLeft1
# 57 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkDown1
# 58 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 24, HotelWalkDown1
# 60 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkLeft1
# 61 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	removeobject 24
# 63 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkDown1
# 64 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	removeobject 25
# 66 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_HIDEJASMINE_HOTEL
# 67 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 68 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 2
# 69 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

JasmineLeavesHotel_2:
# 30 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel1F_JasmineGoodbye, MSGBOX_DEFAULT
# 31 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 32 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 33 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 34 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_NORTH
# 35 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmoncry
# 36 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 60
# 37 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_SOUTH
# 38 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 39 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox AmphyAlso, MSGBOX_DEFAULT
	goto JasmineLeavesHotel_1


HideJasmine::
# 130 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_TEMP_5, 0
# 131 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, HideJasmine_2
HideJasmine_1:
	end

HideJasmine_2:
# 132 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_HIDEJASMINE_HOTEL
	goto HideJasmine_1


# 136 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
HotelWalkDown2:
# 137 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 137 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
HotelWalkLeft1:
# 140 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
HotelWalkDown1:
# 143 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
	step_end

EatDeliciousMeal::
# 215 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 216 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 217 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
	return


BuffetOfferSoup::
# 221 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOUP, BuffetOfferSoup_2
# 224 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox HaveSomeSoup, MSGBOX_DEFAULT
# 225 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	giveitem ITEM_SPECIAL_SOUP
# 226 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 227 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 228 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_RECEIVED_SOUP
	return

BuffetOfferSoup_2:
	return


Hotel_BuffetTrigger::
# 233 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	lock
# 234 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 235 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 236 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_1
	goto_if 1, Hotel_BuffetTrigger_3
Hotel_BuffetTrigger_1:
# 243 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_BUFFET_COMPLETE, Hotel_BuffetTrigger_13
Hotel_BuffetTrigger_12:
# 246 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetIntro, MSGBOX_DEFAULT
# 247 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetMultiChoice
	end

Hotel_BuffetTrigger_2:
# 241 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComplete
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_3:
# 237 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_2
	goto_if 1, Hotel_BuffetTrigger_5
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_5:
# 238 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_3
	goto_if 1, Hotel_BuffetTrigger_7
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_7:
# 239 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_4
	goto_if 1, Hotel_BuffetTrigger_9
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_9:
# 240 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_BUFFET_COMPLETE, Hotel_BuffetTrigger_2
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_13:
# 244 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetAlreadyCompleted
	goto Hotel_BuffetTrigger_12


BuffetMultiChoice::
# 251 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	showmoneybox 0, 0
# 252 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	message BuffetWhatWouldYouHave
# 253 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 254 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	multichoice 23, 0, MULTI_BUFFET, 0
# 255 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case 0, BuffetMultiChoice_3
# 262 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case 1, BuffetMultiChoice_4
# 264 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case 2, BuffetMultiChoice_5
# 266 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case MULTI_B_PRESSED, BuffetMultiChoice_6
BuffetMultiChoice_1:
	end

BuffetMultiChoice_3:
# 257 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox ThatWillBe1000, MSGBOX_YESNO
# 258 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetMultiChoice_8
BuffetMultiChoice_7:
# 261 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetDineHere
	goto BuffetMultiChoice_1

BuffetMultiChoice_4:
# 263 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto ExplainBuffetRules
	goto BuffetMultiChoice_1

BuffetMultiChoice_5:
# 265 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComeBackLater
	goto BuffetMultiChoice_1

BuffetMultiChoice_6:
# 267 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComeBackLater
	goto BuffetMultiChoice_1

BuffetMultiChoice_8:
# 259 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComeBackLater
	goto BuffetMultiChoice_7


BuffetDineHere::
# 272 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checkmoney 1000
# 273 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetDineHere_2
BuffetDineHere_1:
# 276 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 277 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	removemoney 1000
# 278 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playse SE_SHOP
# 279 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	updatemoneybox
# 280 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 281 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EnjoyYourBuffet, MSGBOX_DEFAULT
# 282 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 283 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 284 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special SavePlayerParty
# 285 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setpartylevel 40
# 286 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special HealPlayerParty
# 287 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
# 288 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_1
# 289 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_2
# 290 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_3
# 291 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_4
# 292 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_SYSTEM_NOREWARDBATTLES
# 293 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToFirstTable
	return

BuffetDineHere_2:
# 274 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetNotEnoughMoney
	goto BuffetDineHere_1


WalkToFirstTable::
# 296 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, WalkTo1stTable
# 297 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 298 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr1_Intro
# 299 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_1, BuffetTr1_Lose
# 300 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToFirstTable_2
WalkToFirstTable_1:
# 303 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToFirstTable_2:
# 301 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToSecondTable
	goto WalkToFirstTable_1


WalkToSecondTable::
# 306 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr1_PostBattle
# 307 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 308 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, WalkTo2ndTable
# 309 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 310 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EatMeal, MSGBOX_YESNO
# 311 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 312 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToSecondTable_2
WalkToSecondTable_1:
# 315 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr2_Intro
# 316 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_2, BuffetTr2_Lose
# 317 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToSecondTable_5
WalkToSecondTable_4:
# 320 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToSecondTable_2:
# 313 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call EatDeliciousMeal
	goto WalkToSecondTable_1

WalkToSecondTable_5:
# 318 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToThirdTable
	goto WalkToSecondTable_4


WalkToThirdTable::
# 323 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr2_PostBattle
# 324 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 325 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, WalkTo3rdTable
# 326 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 327 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, WalkToThirdTable_2
WalkToThirdTable_1:
# 334 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr3_Intro
# 335 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_3, BuffetTr3_Lose
# 336 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToThirdTable_5
WalkToThirdTable_4:
# 339 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToThirdTable_2:
# 328 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EatMeal, MSGBOX_YESNO
# 329 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 330 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToThirdTable_7
	goto WalkToThirdTable_1

WalkToThirdTable_5:
# 337 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToFourthTable
	goto WalkToThirdTable_4

WalkToThirdTable_7:
# 331 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call EatDeliciousMeal
	goto WalkToThirdTable_1


WalkToFourthTable::
# 342 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call BuffetOfferSoup
# 343 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr3_PostBattle
# 344 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 345 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, WalkTo2ndTable
# 346 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 347 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, WalkToFourthTable_2
WalkToFourthTable_1:
# 354 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr4_Intro
# 355 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_4, BuffetTr4_Lose
# 356 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToFourthTable_5
WalkToFourthTable_4:
# 359 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToFourthTable_2:
# 348 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EatMeal, MSGBOX_YESNO
# 349 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 350 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToFourthTable_7
	goto WalkToFourthTable_1

WalkToFourthTable_5:
# 357 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetFinale
	goto WalkToFourthTable_4

WalkToFourthTable_7:
# 351 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call EatDeliciousMeal
	goto WalkToFourthTable_1


BuffetFinale::
# 362 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr4_PostBattle
# 363 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 364 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playse SE_DING_DONG
# 365 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 366 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 367 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 368 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox WinnerComeForward
# 369 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 370 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 371 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 9
# 372 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	warpsilent MAP_KAOLISLE_HOTEL_1F, 4
# 373 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitstate
	return


BuffetLost::
# 376 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 50
# 377 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 5
# 378 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	warpsilent MAP_KAOLISLE_HOTEL_1F, 4
# 379 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitstate
	return


# 385 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
WalkTo1stTable:
# 386 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 387 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_up
# 388 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 388 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 388 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 388 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 388 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 389 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 390 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_in_place_faster_right
# 391 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	step_end

# 393 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
WalkTo2ndTable:
# 394 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 394 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 394 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 395 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 395 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 396 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	step_end

# 398 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
WalkTo3rdTable:
# 399 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 399 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 400 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_right
# 400 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_right
# 401 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	step_end

BuffetComplete::
# 405 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetCompleted, MSGBOX_DEFAULT
# 406 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special LoadPlayerParty
# 407 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special HealPlayerParty
# 408 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 11
# 409 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
	checkitemspace ITEM_LEFTOVERS
# 0 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetComplete_2
# 419 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 420 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 421 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	buffernumberstring STR_VAR_1, 30
# 422 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_0x8004, 30
# 423 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special GiveFrontierBattlePoints
# 424 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 425 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	message BuffetComplete_Text_0
# 426 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitfanfare
# 427 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 428 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetThankYouForDining, MSGBOX_DEFAULT
# 429 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 430 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_BUFFET_COMPLETE
# 431 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
# 432 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_Q24_BATTLE_BUFFET_START, BuffetComplete_5
BuffetComplete_4:
# 436 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Right
# 437 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 438 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

BuffetComplete_2:
# 411 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox NotEnoughRoomLeftovers, MSGBOX_DEFAULT
# 412 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 413 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Right
# 414 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 415 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
# 416 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

BuffetComplete_5:
# 433 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	completequest FLAG_Q24_BATTLE_BUFFET_COMPLETE
# 434 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special ShowJournalPopupRemove
	goto BuffetComplete_4


BuffetLost2::
# 447 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetLost_Text, MSGBOX_DEFAULT
# 448 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 449 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special LoadPlayerParty
# 450 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special HealPlayerParty
# 451 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 452 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
# 453 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
# 454 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 7
# 455 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Right
# 456 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 457 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


ExplainBuffetRules::
# 469 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 470 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox ExplainBuffetRules_Text, MSGBOX_DEFAULT
# 471 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetMultiChoice
	return


BuffetComeBackLater::
# 474 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 475 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetPleaseComeAgain, MSGBOX_DEFAULT
# 476 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 477 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_Q24_BATTLE_BUFFET_START, BuffetComeBackLater_2
BuffetComeBackLater_1:
# 481 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Right
# 482 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 483 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

BuffetComeBackLater_2:
# 478 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	startquest FLAG_Q24_BATTLE_BUFFET_START
# 479 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special ShowJournalPopupAdd
	goto BuffetComeBackLater_1


BuffetNotEnoughMoney::
# 487 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetNotEnoughMoney_Text, MSGBOX_DEFAULT
# 488 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 489 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 490 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Right
# 491 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 492 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


BuffetAlreadyCompleted::
# 496 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetAlreadyCompleted_Text, MSGBOX_DEFAULT
# 497 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 498 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	safefollow
# 499 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Right
# 500 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 501 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


Hotel_BuffetAttempt::
# 593 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BuffetAttempt_Text, MSGBOX_NPC
	return


Hotel_FatMan::
# 601 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_FatMan_Text, MSGBOX_NPC
	end


Hotel_Child::
# 610 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Child_Text, MSGBOX_NPC
	end


Hotel_Wife::
# 617 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Wife_Text, MSGBOX_NPC
	end


Hotel_Husband::
# 625 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Husband_Text, MSGBOX_NPC
	end


Hotel_Tuber::
# 634 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Tuber_Text, MSGBOX_NPC
	end


Hotel_BirdTrainer::
# 644 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_HOTEL_FLYINGGEM, Hotel_BirdTrainer_2
# 648 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	lock
# 649 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	faceplayer
# 650 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, Hotel_BirdTrainer_5
# 654 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_Text, MSGBOX_YESNO
Hotel_BirdTrainer_4:
# 656 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Hotel_BirdTrainer_9
# 661 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_LetsDoThis
# 662 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_HOTEL_BIRDKEEPER, Hotel_BirdTrainer_Lose
# 663 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_FLYING_GEM
# 0 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Hotel_BirdTrainer_12
Hotel_BirdTrainer_11:
# 667 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	giveitem ITEM_FLYING_GEM, 1
# 668 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 669 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 670 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 671 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_HOTEL_FLYINGGEM
# 672 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

Hotel_BirdTrainer_2:
# 645 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_PostBattle, MSGBOX_NPC
	end

Hotel_BirdTrainer_5:
# 651 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_TextShort, MSGBOX_YESNO
	goto Hotel_BirdTrainer_4

Hotel_BirdTrainer_9:
# 657 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 658 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_Decline, MSGBOX_NPC
	end

Hotel_BirdTrainer_12:
# 665 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto ZeBagIsFull
	goto Hotel_BirdTrainer_11


Hotel_Drinker::
# 721 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Drinker_Text, MSGBOX_NPC
	end


Hotel_Attendant::
# 732 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Attendant_Text, MSGBOX_NPC
	end


Hotel_PrivateParty::
# 741 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	lock
# 742 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playse SE_PIN
# 743 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	safefollow
# 744 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	exclamationmark 1
# 745 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 746 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 747 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_PrivateParty_Text, MSGBOX_DEFAULT
# 748 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 749 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Left
# 750 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 751 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


Hotel_Chef::
# 759 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Chef_Text, MSGBOX_NPC
	end


BuffetComplete_Text_0:
# 425 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Earned {STR_VAR_1} BP!$"

Hotel1F_JasmineGoodbye::
# 72 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Jasmine: Oh, hello again, {PLAYER}.\p"
	.string "I um… just finished checking out, so\n"
	.string "we were about to start heading home…\p"
	.string "…Oh?\p"
	.string "It seems you already obtained your\n"
	.string "3rd Gym Badge.\p"
	.string "Er, let's see… If I'm not mistaken,\n"
	.string "your next gym challenge should be\l"
	.string "the one in Sandstone City…\p"
	.string "I've always found that gym to be\n"
	.string "a bit… weird… but, um… I don't know\l"
	.string "how to say this, but good luck…$"

AmphyAlso::
# 86 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Jasmine: …Oh, I think Amphy is also\n"
	.string "trying to cheer you on!\p"
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}\n"
	.string "A-anyway, we should be heading out…\p"
	.string "I fear to even imagine the amount of\n"
	.string "work that has accumulated during our\l"
	.string "time away…\p"
	.string "Um… It was nice seeing you again…$"

Hotel1F_LongTimeNoSeeGoodbye::
# 96 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Jasmine: Oh, hello.\n"
	.string "Um… {PLAYER}… was it?\p"
	.string "I was on my way back home from the\n"
	.string "ranch, but, um… the trip was so long\l"
	.string "that I thought it best to have a rest\l"
	.string "at this hotel…\p"
	.string "Y-you look like you've grown a lot\n"
	.string "as a trainer since we last met.\p"
	.string "I hope your journey hasn't been\n"
	.string "too arduous…\p"
	.string "…Oh?\p"
	.string "It seems you already obtained your\n"
	.string "3rd Gym Badge.\p"
	.string "Er, let's see… If I'm not mistaken,\n"
	.string "your next gym challenge should be\l"
	.string "the one in Sandstone City…\p"
	.string "I've always found that gym to be\n"
	.string "a bit… weird… but, um… I don't know\l"
	.string "how to say this, but good luck…$"

MyCompanionAmphyAlso::
# 117 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Jasmine: …Oh, this big fella…\n"
	.string "She is my traveling companion, Amphy.\p"
	.string "I believe she's also trying to\n"
	.string "cheer you on!\p"
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}\n"
	.string "A-anyway, we should be heading out…\p"
	.string "I fear to even imagine the amount of\n"
	.string "work that has accumulated during our\l"
	.string "time away…\p"
	.string "Um… It was nice seeing you again…$"

BuffetTr1_Intro::
# 147 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Please don't look at me…\n"
	.string "Let's just…{PAUSE 0x0F}{PAUSE 0x0F} get this out of the way…$"

BuffetTr1_Lose::
# 151 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "… … … …$"

BuffetTr1_PostBattle::
# 154 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "…Are we done?$"

BuffetTr2_Intro::
# 158 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Hope you're thirsty, because my\n"
	.string "Water-type Pokémon will wash over you\l"
	.string "like a tsunami!$"

BuffetTr2_Lose::
# 163 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "My precious Pokémon!$"

BuffetTr2_PostBattle::
# 166 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Only reason I lost was due to terrain\n"
	.string "disadvantage.\p"
	.string "In water, my Pokémon are invincible!$"

BuffetTr3_Intro::
# 172 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Hope you're hungry for a beating\n"
	.string "because I won't be holding back!$"

BuffetTr3_Lose::
# 176 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Agh! I spilled my soup!$"

BuffetTr3_PostBattle::
# 179 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Food tastes better when shared!\n"
	.string "Enjoy the soup!$"

BuffetTr4_Intro::
# 184 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Alola! I traveled from far to get\n"
	.string "here, so I hope you can satisfy\l"
	.string "my expectations!$"

BuffetTr4_Lose::
# 189 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Well, you certainly didn't\n"
	.string "disappoint…$"

BuffetTr4_PostBattle::
# 193 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "When I first arrived here, I was a bit\n"
	.string "crestfallen when I couldn't find any\l"
	.string "place that sells Malasadas.\p"
	.string "Had I gone for the safe and familiar\n"
	.string "option, I might have completely missed\l"
	.string "out on this great buffet!$"

HaveSomeSoup::
# 202 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "You really shook things up!\n"
	.string "How about we celebrate with a bowl\l"
	.string "of special “Berry Blend Soup”?\l"
	.string "Your Pokémon will love it!$"

EatMeal::
# 209 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Would you like to enjoy a meal with\n"
	.string "your Pokémon, healing the entire team?\p"
	.string "This can be done only once per attempt.$"

WinnerComeForward::
# 381 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Will our latest challenger please\n"
	.string "come to the entrance?$"

NotEnoughRoomLeftovers::
# 441 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but it looks like you don't\n"
	.string "have enough room in your bag.\p"
	.string "You need to clear some room first…$"

BuffetLost_Text::
# 460 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you for participating in the\n"
	.string "Battle Buffet!\p"
	.string "We await your challenge on\n"
	.string "another occasion!$"

BuffetIntro::
# 504 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Hello and welcome to the Battle\n"
	.string "Buffet!\p"
	.string "Our restaurant's menu is like\n"
	.string "no other, attracting experienced\l"
	.string "Pokémon trainers from all over\l"
	.string "the world!\p"
	.string "If you'd like to dine here, there are\n"
	.string "certain rules you must follow.$"

BuffetWhatWouldYouHave::
# 514 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "How may I serve you?$"

EnjoyYourBuffet::
# 517 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you very much!\p"
	.string "When you're finished, come back\n"
	.string "here to obtain your fabulous prize!\p"
	.string "Enjoy your buffet!$"

ExplainBuffetRules_Text::
# 523 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "As I mentioned earlier, our customers\n"
	.string "are all experienced Pokémon trainers.\p"
	.string "There are currently 4 trainers dining\n"
	.string "here and if you manage to beat all\l"
	.string "of them, you'll get a fabulous prize!\p"
	.string "As this is a light-hearted and friendly\n"
	.string "competition, there are 4 special rules\l"
	.string "in play here:\p"
	.string "1. No trading of currency!\p"
	.string "That means that battlers here won't\n"
	.string "exchange money or BP when someone's\l"
	.string "team whites out. That also means you.\p"
	.string "2. No stealing from others!\p"
	.string "This applies to items the trainers'\n"
	.string "Pokémon are carrying.\l"
	.string "Any items consumed during the match,\l"
	.string "like for example berries, will not\l"
	.string "be returned.\p"
	.string "3. Win or lose!\p"
	.string "You must keep going until you either\n"
	.string "win or you team whites out.\l"
	.string "There is no forfeiting during\l"
	.string "the challenge!\p"
	.string "4. No stopping!\p"
	.string "Once the challenge has been started,\n"
	.string "you can no longer stop to heal your\l"
	.string "pokemon or switch party composition.\p"
	.string "You are however, allowed to have\n"
	.string "a meal to completely heal your team.\p"
	.string "Do note that this meal is available\n"
	.string "only once per attempt.$"

BuffetPleaseComeAgain::
# 556 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you very much!\n"
	.string "Please come again!$"

BuffetThankYouForDining::
# 560 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you for partaking in the\n"
	.string "Battle Buffet!\l"
	.string "We hope you enjoyed the experience!$"

BuffetNotEnoughMoney_Text::
# 565 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "money to partake in the Battle Buffet…$"

BuffetCompleted::
# 569 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Oh wow, it seems like we have\n"
	.string "a winner!\p"
	.string "For your peerless display of skill,\n"
	.string "you deserve a fabulous prize!$"

BuffetAlreadyCompleted_Text::
# 575 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but you have already\n"
	.string "competed in the Battle Buffet.\p"
	.string "It may take a while until we find\n"
	.string "new and stronger opponents for you.$"

ThatWillBe1000::
# 581 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Before you enter, I must warn you\n"
	.string "that the trainers here are extremely\l"
	.string "powerful.\p"
	.string "For a more even playing field,\n"
	.string "all Pokémon will be set to Level 40\l"
	.string "for the duration of the buffet.\p"
	.string "Would you still like to enter the\n"
	.string "dining hall? An entry costs ¥1000.$"

Hotel_BuffetAttempt_Text::
# 595 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I tried challenging the Battle\n"
	.string "Buffet and failed miserably.\l"
	.string "Those trainers are tough!$"

Hotel_FatMan_Text::
# 604 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "How do you like my Pokémon?\p"
	.string "Many say they don't see the appeal\n"
	.string "but for me he is perfect.$"

Hotel_Child_Text::
# 613 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Swim swim swim swim swim swim swim!$"

Hotel_Wife_Text::
# 620 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Our little boy has been waiting to\n"
	.string "get to the beach all day.$"

Hotel_Husband_Text::
# 628 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I can't wait to relax at the beach.\p"
	.string "We'll be heading out as soon as\n"
	.string "our friends arrive.$"

Hotel_Tuber_Text::
# 637 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "We're going to the beach!\p"
	.string "I've never swam before and feel a bit\n"
	.string "scared but I trust my Pokémon will\l"
	.string "keep me safe!$"

Hotel_BirdTrainer_Text::
# 675 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Hey, hi there!\n"
	.string "You look like a traveling trainer!\p"
	.string "Kaolisle is so nice and warm.\n"
	.string "It's totally the best, isn't it?\p"
	.string "I'm a traveling trainer as well.\p"
	.string "Being here with my cool bird Pokémon\n"
	.string "at a resort like this one is just what\l"
	.string "I needed to relax.\p"
	.string "Oh, I know!\p"
	.string "Since you stopped by to talk to me\n"
	.string "and all, why don't you battle me and\l"
	.string "my bird Pokémon before you go?$"

Hotel_BirdTrainer_TextShort::
# 689 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Have a battle against me and my\n"
	.string "bird Pokémon!$"

Hotel_BirdTrainer_Decline::
# 693 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Oh, what a shame!\p"
	.string "I'll be here for a while, so come back\n"
	.string "if you change your mind!$"

Hotel_BirdTrainer_LetsDoThis::
# 698 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thanks! Let's do this then!\n"
	.string "No need to hold back when facing me!$"

Hotel_BirdTrainer_Lose::
# 702 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Oh come on now!\n"
	.string "Do you want me to sulk?$"

Hotel_BirdTrainer_PostBattle::
# 706 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thanks for the fun battle!\n"
	.string "It'll be a great memento of my journey!$"

Hotel_BirdTrainer_Reward::
# 710 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Phew! You are STRONG!\n"
	.string "That was surprising!\p"
	.string "Maybe I was a bit hasty challenging\n"
	.string "you like that. You don't seem like\l"
	.string "a regular rookie!\p"
	.string "If you'd like, why don't you have your\n"
	.string "Pokémon hold on to this Flying Gem?\l"
	.string "It could make your moves even stronger!$"

Hotel_Drinker_Text::
# 724 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "You should consider picking up a\n"
	.string "Fresh Water or two from the\l"
	.string "vending machine.\l"
	.string "Your Pokémon will guzzle it right down!$"

Hotel_Attendant_Text::
# 735 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Welcome to the Kaolisle Grand Resort.\p"
	.string "We're currently all booked up,\n"
	.string "but feel free to enjoy the ambiance.$"

Hotel_PrivateParty_Text::
# 754 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but this room\n"
	.string "is reserved for a private party.$"

Hotel_Chef_Text::
# 762 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Our staff thanks you for partaking\n"
	.string "in the Battle Buffet.\p"
	.string "Feel free to grab some food and\n"
	.string "drinks from the table.\p"
	.string "Do note that taking the food outside\n"
	.string "the buffet is prohibited.$"
