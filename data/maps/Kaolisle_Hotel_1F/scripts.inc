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
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
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
	applymovement 24, Common_Movement_ExclamationMark
# 25 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 70
# 27 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 24, HotelWalkDown2
# 28 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkDown2
# 29 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 10
# 31 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_JASMINE_AT_HOTEL, JasmineLeavesHotel_2
# 44 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel1F_LongTimeNoSeeGoodbye, MSGBOX_DEFAULT
# 45 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 46 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 47 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 48 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_NORTH
# 49 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmoncry
# 50 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 60
# 51 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_SOUTH
# 52 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 53 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox MyCompanionAmphyAlso, MSGBOX_DEFAULT
JasmineLeavesHotel_1:
# 55 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 56 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 57 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 58 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 24, HotelWalkLeft1
# 59 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkDown1
# 60 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 61 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 24, HotelWalkDown1
# 62 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkLeft1
# 63 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	removeobject 24
# 65 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 25, HotelWalkDown1
# 66 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	removeobject 25
# 68 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_HIDEJASMINE_HOTEL
# 69 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 70 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 2
# 71 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

JasmineLeavesHotel_2:
# 32 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel1F_JasmineGoodbye, MSGBOX_DEFAULT
# 33 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 34 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 35 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 36 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_NORTH
# 37 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmoncry
# 38 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 60
# 39 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 24, DIR_SOUTH
# 40 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
# 41 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox AmphyAlso, MSGBOX_DEFAULT
	goto JasmineLeavesHotel_1


HideJasmine::
# 132 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_TEMP_5, 0
# 133 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, HideJasmine_2
HideJasmine_1:
	end

HideJasmine_2:
# 134 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_HIDEJASMINE_HOTEL
	goto HideJasmine_1


# 138 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
HotelWalkDown2:
# 139 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 139 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
	step_end

# 141 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
HotelWalkLeft1:
# 142 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
	step_end

# 144 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
HotelWalkDown1:
# 145 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
	step_end

EatDeliciousMeal::
# 217 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 218 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 219 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 30
	return


BuffetOfferSoup::
# 223 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOUP, BuffetOfferSoup_2
# 226 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox HaveSomeSoup, MSGBOX_DEFAULT
# 227 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	giveitem ITEM_SPECIAL_SOUP
# 228 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 229 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 230 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_RECEIVED_SOUP
	return

BuffetOfferSoup_2:
	return


Hotel_BuffetTrigger::
# 235 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	lock
# 236 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 237 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 238 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_1
	goto_if 1, Hotel_BuffetTrigger_3
Hotel_BuffetTrigger_1:
# 245 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_BUFFET_COMPLETE, Hotel_BuffetTrigger_13
Hotel_BuffetTrigger_12:
# 248 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetIntro, MSGBOX_DEFAULT
# 249 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetMultiChoice
	end

Hotel_BuffetTrigger_2:
# 243 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComplete
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_3:
# 239 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_2
	goto_if 1, Hotel_BuffetTrigger_5
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_5:
# 240 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_3
	goto_if 1, Hotel_BuffetTrigger_7
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_7:
# 241 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checktrainerflag TRAINER_BUFFET_4
	goto_if 1, Hotel_BuffetTrigger_9
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_9:
# 242 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_BUFFET_COMPLETE, Hotel_BuffetTrigger_2
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_13:
# 246 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetAlreadyCompleted
	goto Hotel_BuffetTrigger_12


BuffetMultiChoice::
# 253 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	showmoneybox 0, 0
# 254 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	message BuffetWhatWouldYouHave
# 255 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 256 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	multichoice 23, 0, MULTI_BUFFET, 0
# 257 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case 0, BuffetMultiChoice_3
# 264 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case 1, BuffetMultiChoice_4
# 266 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case 2, BuffetMultiChoice_5
# 268 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	case MULTI_B_PRESSED, BuffetMultiChoice_6
BuffetMultiChoice_1:
	end

BuffetMultiChoice_3:
# 259 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox ThatWillBe1000, MSGBOX_YESNO
# 260 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetMultiChoice_8
BuffetMultiChoice_7:
# 263 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetDineHere
	goto BuffetMultiChoice_1

BuffetMultiChoice_4:
# 265 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto ExplainBuffetRules
	goto BuffetMultiChoice_1

BuffetMultiChoice_5:
# 267 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComeBackLater
	goto BuffetMultiChoice_1

BuffetMultiChoice_6:
# 269 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComeBackLater
	goto BuffetMultiChoice_1

BuffetMultiChoice_8:
# 261 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetComeBackLater
	goto BuffetMultiChoice_7


BuffetDineHere::
# 274 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	checkmoney 1000
# 275 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetDineHere_2
BuffetDineHere_1:
# 278 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 279 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	removemoney 1000
# 280 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playse SE_SHOP
# 281 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	updatemoneybox
# 282 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 283 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EnjoyYourBuffet, MSGBOX_DEFAULT
# 284 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 285 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 286 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special SavePlayerParty
# 287 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setpartylevel 40
# 288 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special HealPlayerParty
# 289 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
# 290 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_1
# 291 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_2
# 292 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_3
# 293 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	cleartrainerflag TRAINER_BUFFET_4
# 294 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_SYSTEM_NOREWARDBATTLES
# 295 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToFirstTable
	return

BuffetDineHere_2:
# 276 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetNotEnoughMoney
	goto BuffetDineHere_1


WalkToFirstTable::
# 298 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo1stTable
# 299 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 300 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr1_Intro
# 301 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_1, BuffetTr1_Lose
# 302 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToFirstTable_2
WalkToFirstTable_1:
# 305 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToFirstTable_2:
# 303 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToSecondTable
	goto WalkToFirstTable_1


WalkToSecondTable::
# 308 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr1_PostBattle
# 309 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 310 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo2ndTable
# 311 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 312 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EatMeal, MSGBOX_YESNO
# 313 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 314 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToSecondTable_2
WalkToSecondTable_1:
# 317 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr2_Intro
# 318 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_2, BuffetTr2_Lose
# 319 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToSecondTable_5
WalkToSecondTable_4:
# 322 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToSecondTable_2:
# 315 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call EatDeliciousMeal
	goto WalkToSecondTable_1

WalkToSecondTable_5:
# 320 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToThirdTable
	goto WalkToSecondTable_4


WalkToThirdTable::
# 325 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr2_PostBattle
# 326 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 327 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo3rdTable
# 328 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 329 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, WalkToThirdTable_2
WalkToThirdTable_1:
# 336 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr3_Intro
# 337 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_3, BuffetTr3_Lose
# 338 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToThirdTable_5
WalkToThirdTable_4:
# 341 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToThirdTable_2:
# 330 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EatMeal, MSGBOX_YESNO
# 331 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 332 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToThirdTable_7
	goto WalkToThirdTable_1

WalkToThirdTable_5:
# 339 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto WalkToFourthTable
	goto WalkToThirdTable_4

WalkToThirdTable_7:
# 333 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call EatDeliciousMeal
	goto WalkToThirdTable_1


WalkToFourthTable::
# 344 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call BuffetOfferSoup
# 345 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr3_PostBattle
# 346 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 347 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo2ndTable
# 348 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 349 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, WalkToFourthTable_2
WalkToFourthTable_1:
# 356 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr4_Intro
# 357 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BUFFET_4, BuffetTr4_Lose
# 358 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToFourthTable_5
WalkToFourthTable_4:
# 361 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetLost
	return

WalkToFourthTable_2:
# 350 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox EatMeal, MSGBOX_YESNO
# 351 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 352 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToFourthTable_7
	goto WalkToFourthTable_1

WalkToFourthTable_5:
# 359 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetFinale
	goto WalkToFourthTable_4

WalkToFourthTable_7:
# 353 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	call EatDeliciousMeal
	goto WalkToFourthTable_1


BuffetFinale::
# 364 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetTr4_PostBattle
# 365 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 366 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playse SE_DING_DONG
# 367 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 368 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject 0xFF, DIR_NORTH
# 369 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 370 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox WinnerComeForward
# 371 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 372 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 373 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 9
# 374 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	warpsilent MAP_KAOLISLE_HOTEL_1F, 4
# 375 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitstate
	return


BuffetLost::
# 378 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 50
# 379 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 5
# 380 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	warpsilent MAP_KAOLISLE_HOTEL_1F, 4
# 381 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitstate
	return


# 387 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
WalkTo1stTable:
# 388 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 389 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_up
# 390 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 390 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 390 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 390 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 390 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 391 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 392 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_in_place_faster_right
# 393 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	step_end

# 395 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
WalkTo2ndTable:
# 396 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 396 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 396 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 397 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 397 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_left
# 398 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	step_end

# 400 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
WalkTo3rdTable:
# 401 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 401 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_down
# 402 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_right
# 402 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	walk_right
# 403 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	step_end

BuffetComplete::
# 407 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetCompleted, MSGBOX_DEFAULT
# 408 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special LoadPlayerParty
# 409 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special HealPlayerParty
# 410 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 11
# 411 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
	checkitemspace ITEM_LEFTOVERS
# 0 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetComplete_2
# 421 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 422 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 423 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	buffernumberstring STR_VAR_1, 30
# 424 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_0x8004, 30
# 425 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special GiveFrontierBattlePoints
# 426 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 427 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	message BuffetComplete_Text_0
# 428 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitfanfare
# 429 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 430 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetThankYouForDining, MSGBOX_DEFAULT
# 431 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 432 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_BUFFET_COMPLETE
# 433 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
# 434 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_Q24_BATTLE_BUFFET_START, BuffetComplete_5
BuffetComplete_4:
# 438 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 439 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 440 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

BuffetComplete_2:
# 413 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox NotEnoughRoomLeftovers, MSGBOX_DEFAULT
# 414 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 415 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 416 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 417 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
# 418 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

BuffetComplete_5:
# 435 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	completequest FLAG_Q24_BATTLE_BUFFET_COMPLETE
# 436 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special ShowJournalPopupRemove
	goto BuffetComplete_4


BuffetLost2::
# 449 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetLost_Text, MSGBOX_DEFAULT
# 450 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 451 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special LoadPlayerParty
# 452 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special HealPlayerParty
# 453 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 454 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
# 455 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
# 456 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 7
# 457 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 458 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 459 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


ExplainBuffetRules::
# 471 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 472 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox ExplainBuffetRules_Text, MSGBOX_DEFAULT
# 473 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto BuffetMultiChoice
	return


BuffetComeBackLater::
# 476 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 477 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetPleaseComeAgain, MSGBOX_DEFAULT
# 478 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 479 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_unset FLAG_Q24_BATTLE_BUFFET_START, BuffetComeBackLater_2
BuffetComeBackLater_1:
# 483 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 484 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 485 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

BuffetComeBackLater_2:
# 480 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	startquest FLAG_Q24_BATTLE_BUFFET_START
# 481 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	special ShowJournalPopupAdd
	goto BuffetComeBackLater_1


BuffetNotEnoughMoney::
# 489 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetNotEnoughMoney_Text, MSGBOX_DEFAULT
# 490 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 491 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	hidemoneybox
# 492 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 493 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 494 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


BuffetAlreadyCompleted::
# 498 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox BuffetAlreadyCompleted_Text, MSGBOX_DEFAULT
# 499 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 500 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	safefollow
# 501 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 502 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 503 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


Hotel_BuffetAttempt::
# 595 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BuffetAttempt_Text, MSGBOX_NPC
	return


Hotel_FatMan::
# 603 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_FatMan_Text, MSGBOX_NPC
	end


Hotel_Child::
# 612 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Child_Text, MSGBOX_NPC
	end


Hotel_Wife::
# 619 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Wife_Text, MSGBOX_NPC
	end


Hotel_Husband::
# 627 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Husband_Text, MSGBOX_NPC
	end


Hotel_Tuber::
# 636 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Tuber_Text, MSGBOX_NPC
	end


Hotel_BirdTrainer::
# 646 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_HOTEL_FLYINGGEM, Hotel_BirdTrainer_2
# 650 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	lock
# 651 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	faceplayer
# 652 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, Hotel_BirdTrainer_5
# 656 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_Text, MSGBOX_YESNO
Hotel_BirdTrainer_4:
# 658 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Hotel_BirdTrainer_9
# 663 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_LetsDoThis
# 664 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_HOTEL_BIRDKEEPER, Hotel_BirdTrainer_Lose
# 665 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_FLYING_GEM
# 0 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Hotel_BirdTrainer_12
Hotel_BirdTrainer_11:
# 669 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	giveitem ITEM_FLYING_GEM, 1
# 670 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitse
# 671 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmessage
# 672 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 673 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_HOTEL_FLYINGGEM
# 674 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end

Hotel_BirdTrainer_2:
# 647 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_PostBattle, MSGBOX_NPC
	end

Hotel_BirdTrainer_5:
# 653 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_TextShort, MSGBOX_YESNO
	goto Hotel_BirdTrainer_4

Hotel_BirdTrainer_9:
# 659 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 660 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_BirdTrainer_Decline, MSGBOX_NPC
	end

Hotel_BirdTrainer_12:
# 667 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	goto ZeBagIsFull
	goto Hotel_BirdTrainer_11


Hotel_Drinker::
# 723 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Drinker_Text, MSGBOX_NPC
	end


Hotel_Attendant::
# 734 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Attendant_Text, MSGBOX_NPC
	end


Hotel_PrivateParty::
# 743 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	lock
# 744 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	playse SE_PIN
# 745 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	safefollow
# 746 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 747 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 748 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 40
# 749 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 750 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	delay 20
# 751 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_PrivateParty_Text, MSGBOX_DEFAULT
# 752 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	closemessage
# 753 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
# 754 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	waitmovement 0
# 755 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	release
	end


Hotel_Chef::
# 763 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	msgbox Hotel_Chef_Text, MSGBOX_NPC
	end


BuffetComplete_Text_0:
# 427 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Earned {STR_VAR_1} BP!$"

Hotel1F_JasmineGoodbye::
# 74 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
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
# 88 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Jasmine: …Oh, I think Amphy is also\n"
	.string "trying to cheer you on!\p"
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}\n"
	.string "A-anyway, we should be heading out…\p"
	.string "I fear to even imagine the amount of\n"
	.string "work that has accumulated during our\l"
	.string "time away…\p"
	.string "Um… It was nice seeing you again…$"

Hotel1F_LongTimeNoSeeGoodbye::
# 98 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
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
# 119 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
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
# 149 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Please don't look at me…\n"
	.string "Let's just…{PAUSE 0x0F}{PAUSE 0x0F} get this out of the way…$"

BuffetTr1_Lose::
# 153 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "… … … …$"

BuffetTr1_PostBattle::
# 156 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "…Are we done?$"

BuffetTr2_Intro::
# 160 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Hope you're thirsty, because my\n"
	.string "Water-type Pokémon will wash over you\l"
	.string "like a tsunami!$"

BuffetTr2_Lose::
# 165 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "My precious Pokémon!$"

BuffetTr2_PostBattle::
# 168 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Only reason I lost was due to terrain\n"
	.string "disadvantage.\p"
	.string "In water, my Pokémon are invincible!$"

BuffetTr3_Intro::
# 174 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Hope you're hungry for a beating\n"
	.string "because I won't be holding back!$"

BuffetTr3_Lose::
# 178 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Agh! I spilled my soup!$"

BuffetTr3_PostBattle::
# 181 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Food tastes better when shared!\n"
	.string "Enjoy the soup!$"

BuffetTr4_Intro::
# 186 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Alola! I traveled from far to get\n"
	.string "here, so I hope you can satisfy\l"
	.string "my expectations!$"

BuffetTr4_Lose::
# 191 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Well, you certainly didn't\n"
	.string "disappoint…$"

BuffetTr4_PostBattle::
# 195 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "When I first arrived here, I was a bit\n"
	.string "crestfallen when I couldn't find any\l"
	.string "place that sells Malasadas.\p"
	.string "Had I gone for the safe and familiar\n"
	.string "option, I might have completely missed\l"
	.string "out on this great buffet!$"

HaveSomeSoup::
# 204 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "You really shook things up!\n"
	.string "How about we celebrate with a bowl\l"
	.string "of special “Berry Blend Soup”?\l"
	.string "Your Pokémon will love it!$"

EatMeal::
# 211 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Would you like to enjoy a meal with\n"
	.string "your Pokémon, healing the entire team?\p"
	.string "This can be done only once per attempt.$"

WinnerComeForward::
# 383 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Will our latest challenger please\n"
	.string "come to the entrance?$"

NotEnoughRoomLeftovers::
# 443 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but it looks like you don't\n"
	.string "have enough room in your bag.\p"
	.string "You need to clear some room first…$"

BuffetLost_Text::
# 462 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you for participating in the\n"
	.string "Battle Buffet!\p"
	.string "We await your challenge on\n"
	.string "another occasion!$"

BuffetIntro::
# 506 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Hello and welcome to the Battle\n"
	.string "Buffet!\p"
	.string "Our restaurant's menu is like\n"
	.string "no other, attracting experienced\l"
	.string "Pokémon trainers from all over\l"
	.string "the world!\p"
	.string "If you'd like to dine here, there are\n"
	.string "certain rules you must follow.$"

BuffetWhatWouldYouHave::
# 516 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "How may I serve you?$"

EnjoyYourBuffet::
# 519 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you very much!\p"
	.string "When you're finished, come back\n"
	.string "here to obtain your fabulous prize!\p"
	.string "Enjoy your buffet!$"

ExplainBuffetRules_Text::
# 525 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
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
# 558 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you very much!\n"
	.string "Please come again!$"

BuffetThankYouForDining::
# 562 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thank you for partaking in the\n"
	.string "Battle Buffet!\l"
	.string "We hope you enjoyed the experience!$"

BuffetNotEnoughMoney_Text::
# 567 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "money to partake in the Battle Buffet…$"

BuffetCompleted::
# 571 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Oh wow, it seems like we have\n"
	.string "a winner!\p"
	.string "For your peerless display of skill,\n"
	.string "you deserve a fabulous prize!$"

BuffetAlreadyCompleted_Text::
# 577 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but you have already\n"
	.string "competed in the Battle Buffet.\p"
	.string "It may take a while until we find\n"
	.string "new and stronger opponents for you.$"

ThatWillBe1000::
# 583 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Before you enter, I must warn you\n"
	.string "that the trainers here are extremely\l"
	.string "powerful.\p"
	.string "For a more even playing field,\n"
	.string "all Pokémon will be set to Level 40\l"
	.string "for the duration of the buffet.\p"
	.string "Would you still like to enter the\n"
	.string "dining hall? An entry costs ¥1000.$"

Hotel_BuffetAttempt_Text::
# 597 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I tried challenging the Battle\n"
	.string "Buffet and failed miserably.\l"
	.string "Those trainers are tough!$"

Hotel_FatMan_Text::
# 606 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "How do you like my Pokémon?\p"
	.string "Many say they don't see the appeal\n"
	.string "but for me he is perfect.$"

Hotel_Child_Text::
# 615 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Swim swim swim swim swim swim swim!$"

Hotel_Wife_Text::
# 622 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Our little boy has been waiting to\n"
	.string "get to the beach all day.$"

Hotel_Husband_Text::
# 630 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I can't wait to relax at the beach.\p"
	.string "We'll be heading out as soon as\n"
	.string "our friends arrive.$"

Hotel_Tuber_Text::
# 639 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "We're going to the beach!\p"
	.string "I've never swam before and feel a bit\n"
	.string "scared but I trust my Pokémon will\l"
	.string "keep me safe!$"

Hotel_BirdTrainer_Text::
# 677 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
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
# 691 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Have a battle against me and my\n"
	.string "bird Pokémon!$"

Hotel_BirdTrainer_Decline::
# 695 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Oh, what a shame!\p"
	.string "I'll be here for a while, so come back\n"
	.string "if you change your mind!$"

Hotel_BirdTrainer_LetsDoThis::
# 700 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thanks! Let's do this then!\n"
	.string "No need to hold back when facing me!$"

Hotel_BirdTrainer_Lose::
# 704 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Oh come on now!\n"
	.string "Do you want me to sulk?$"

Hotel_BirdTrainer_PostBattle::
# 708 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Thanks for the fun battle!\n"
	.string "It'll be a great memento of my journey!$"

Hotel_BirdTrainer_Reward::
# 712 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Phew! You are STRONG!\n"
	.string "That was surprising!\p"
	.string "Maybe I was a bit hasty challenging\n"
	.string "you like that. You don't seem like\l"
	.string "a regular rookie!\p"
	.string "If you'd like, why don't you have your\n"
	.string "Pokémon hold on to this Flying Gem?\l"
	.string "It could make your moves even stronger!$"

Hotel_Drinker_Text::
# 726 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "You should consider picking up a\n"
	.string "Fresh Water or two from the\l"
	.string "vending machine.\l"
	.string "Your Pokémon will guzzle it right down!$"

Hotel_Attendant_Text::
# 737 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Welcome to the Kaolisle Grand Resort.\p"
	.string "We're currently all booked up,\n"
	.string "but feel free to enjoy the ambiance.$"

Hotel_PrivateParty_Text::
# 758 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "I'm sorry, but this room\n"
	.string "is reserved for a private party.$"

Hotel_Chef_Text::
# 766 "data/maps/Kaolisle_Hotel_1F/scripts.pory"
	.string "Our staff thanks you for partaking\n"
	.string "in the Battle Buffet.\p"
	.string "Feel free to grab some food and\n"
	.string "drinks from the table.\p"
	.string "Do note that taking the food outside\n"
	.string "the buffet is prohibited.$"
