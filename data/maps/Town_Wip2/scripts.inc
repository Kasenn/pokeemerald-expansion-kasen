Town_Wip2_MapScripts::
# 2 "data/maps/Town_Wip2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Skyloch_SetFlag
	.byte 0


Skyloch_SetFlag::
# 5 "data/maps/Town_Wip2/scripts.pory"
	call Amberock_SetPlayerModel
# 6 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_LATIAS, FALSE
# 7 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_TEMP_4
# 8 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_TEMP_5
# 9 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_TEMP_1
# 10 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_TEMP_2
# 11 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_TEMP_3
# 12 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_VISITED_WIP_TOWN2
# 13 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_INCREASED_SHINY_ODDS
	end


Skyloch_Sign1::
# 18 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign1_Text, MSGBOX_SIGN
	end


Skyloch_Sign2::
# 25 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign2_Text, MSGBOX_SIGN
	end


Skyloch_Sign3::
# 34 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign3_Text, MSGBOX_SIGN
	end


Skyloch_Azumarill::
# 42 "data/maps/Town_Wip2/scripts.pory"
	lock
# 43 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 44 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 45 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Azumarill_Text, MSGBOX_DEFAULT
# 46 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 47 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Skyloch_Lass::
# 54 "data/maps/Town_Wip2/scripts.pory"
	lock
# 55 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Lass_Text, MSGBOX_DEFAULT
# 56 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 57 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 58 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Skyloch_LittleBoy::
# 68 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_LittleBoy_Text, MSGBOX_NPC
	end


Skyloch_Fisher::
# 76 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Fisher_Text, MSGBOX_NPC
	end


Skyloch_Man::
# 88 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Man_Text, MSGBOX_NPC
	end


Skyloch_OldWoman::
# 98 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_OldWoman_Text, MSGBOX_NPC
	end


SkylochInt_FatMan::
# 109 "data/maps/Town_Wip2/scripts.pory"
	lock
# 110 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 111 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_SKYLOCH_CASTELIACONE, SkylochInt_FatMan_2
# 150 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_GivenCone, MSGBOX_NPC
SkylochInt_FatMan_1:
# 152 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 153 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 154 "data/maps/Town_Wip2/scripts.pory"
	release
	end

SkylochInt_FatMan_2:
# 112 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_Text, MSGBOX_DEFAULT
# 113 "data/maps/Town_Wip2/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 114 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_FatMan_6
SkylochInt_FatMan_5:
# 122 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_FatMan_8
	goto SkylochInt_FatMan_1

SkylochInt_FatMan_6:
# 115 "data/maps/Town_Wip2/scripts.pory"
	release
# 116 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_Q10_SKYLOCH_ICECREAM_START, SkylochInt_FatMan_10
	goto SkylochInt_FatMan_5

SkylochInt_FatMan_8:
# 123 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_TextContinued, MSGBOX_YESNO
# 124 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_FatMan_12
# 133 "data/maps/Town_Wip2/scripts.pory"
	removeitem ITEM_CASTELIACONE, 1
# 134 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_TextThanks, MSGBOX_DEFAULT
# 135 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 1
# 136 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 137 "data/maps/Town_Wip2/scripts.pory"
	waitfanfare
# 138 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 139 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 140 "data/maps/Town_Wip2/scripts.pory"
	release
# 141 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_Q10_SKYLOCH_ICECREAM_START, SkylochInt_FatMan_19
SkylochInt_FatMan_18:
	end

SkylochInt_FatMan_10:
# 117 "data/maps/Town_Wip2/scripts.pory"
	startquest FLAG_Q10_SKYLOCH_ICECREAM_START
# 118 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupAdd
	end

SkylochInt_FatMan_12:
# 125 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_Text_0, MSGBOX_NPC
# 126 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_Q10_SKYLOCH_ICECREAM_START, SkylochInt_FatMan_16
SkylochInt_FatMan_15:
	end

SkylochInt_FatMan_16:
# 127 "data/maps/Town_Wip2/scripts.pory"
	startquest FLAG_Q10_SKYLOCH_ICECREAM_START
# 128 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupAdd
	goto SkylochInt_FatMan_15

SkylochInt_FatMan_19:
# 142 "data/maps/Town_Wip2/scripts.pory"
	completequest FLAG_Q10_SKYLOCH_ICECREAM_COMPLETE
# 143 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupRemove
	goto SkylochInt_FatMan_18


SkylochInt_RestHouseOldWoman::
# 175 "data/maps/Town_Wip2/scripts.pory"
	lock
# 176 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 177 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_RestHere, MSGBOX_YESNO
# 178 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseOldWoman_2
SkylochInt_RestHouseOldWoman_1:
# 181 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_RestHouseOldWoman_5
	end

SkylochInt_RestHouseOldWoman_2:
# 179 "data/maps/Town_Wip2/scripts.pory"
	goto SkylochInt_RestHouseOldWoman_Rest
	goto SkylochInt_RestHouseOldWoman_1

SkylochInt_RestHouseOldWoman_5:
# 182 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_DeclineRest, MSGBOX_DEFAULT
# 183 "data/maps/Town_Wip2/scripts.pory"
	release
	end


SkylochInt_RestHouseOldWoman_Rest::
# 189 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_StartRest, MSGBOX_DEFAULT
# 190 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 191 "data/maps/Town_Wip2/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 192 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_RestDone, MSGBOX_DEFAULT
# 193 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 194 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 195 "data/maps/Town_Wip2/scripts.pory"
	release
	end


SkylochInt_RestHouseWoman::
# 216 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseWoman_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseGirl::
# 226 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseGirl_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseFridge::
# 233 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_SKYLOCH_JUICE, SkylochInt_RestHouseFridge_2
	checkitemspace ITEM_BERRY_JUICE
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseFridge_4
# 245 "data/maps/Town_Wip2/scripts.pory"
	msgbox CantFitJuice, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_2:
# 234 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_JuiceTaken, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_4:
# 238 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 239 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_SKYLOCH_JUICE
# 240 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 241 "data/maps/Town_Wip2/scripts.pory"
	closemessage
	end


SkylochInt_OldHistorian::
# 259 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_OldHistorian_Text, MSGBOX_NPC
	end


SkylochInt_PikachuWoman::
# 279 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_RECEIVED_LIGHTBALL, SkylochInt_PikachuWoman_2
# 283 "data/maps/Town_Wip2/scripts.pory"
	lock
# 284 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 285 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_RAICHU, 0
# 286 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_5
SkylochInt_PikachuWoman_4:
# 303 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_PikachuWoman_Text, MSGBOX_DEFAULT
# 304 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 305 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 306 "data/maps/Town_Wip2/scripts.pory"
	release
# 307 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_Q11_SKYLOCH_RAICHUS_START, SkylochInt_PikachuWoman_8
SkylochInt_PikachuWoman_7:
	end

SkylochInt_PikachuWoman_2:
# 280 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochMakeDecision, MSGBOX_NPC
	end

SkylochInt_PikachuWoman_5:
# 287 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_RAICHU_ALOLAN, 0
# 288 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_10
	goto SkylochInt_PikachuWoman_4

SkylochInt_PikachuWoman_8:
# 308 "data/maps/Town_Wip2/scripts.pory"
	startquest FLAG_Q11_SKYLOCH_RAICHUS_START
# 309 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupAdd
	goto SkylochInt_PikachuWoman_7

SkylochInt_PikachuWoman_10:
# 289 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_PikachuWoman_2Raichus, MSGBOX_DEFAULT
	checkitemspace ITEM_LIGHT_BALL
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_PikachuWoman_13
SkylochInt_PikachuWoman_12:
# 293 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 294 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_RECEIVED_LIGHTBALL
# 295 "data/maps/Town_Wip2/scripts.pory"
	msgbox ExplainLightBall, MSGBOX_NPC
# 296 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_Q11_SKYLOCH_RAICHUS_START, SkylochInt_PikachuWoman_16
SkylochInt_PikachuWoman_15:
	end

SkylochInt_PikachuWoman_13:
# 291 "data/maps/Town_Wip2/scripts.pory"
	goto ZeBagIsFull
	goto SkylochInt_PikachuWoman_12

SkylochInt_PikachuWoman_16:
# 297 "data/maps/Town_Wip2/scripts.pory"
	completequest FLAG_Q11_SKYLOCH_RAICHUS_COMPLETE
# 298 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupRemove
	goto SkylochInt_PikachuWoman_15


SkylochInt_Pikachu::
# 345 "data/maps/Town_Wip2/scripts.pory"
	lock
# 346 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 347 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 348 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 349 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_Pikachu_Text_0, MSGBOX_DEFAULT
# 350 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 351 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Route23Lake_Hiker::
# 356 "data/maps/Town_Wip2/scripts.pory"
	msgbox Route23Lake_Hiker_Text, MSGBOX_NPC
	return


TriggerLatiasRoam::
# 373 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_LATIAS, FALSE
# 374 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TriggerLatiasRoam_2
	checkitem ITEM_SOUL_DEW
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TriggerLatiasRoam_5
# 427 "data/maps/Town_Wip2/scripts.pory"
	safefollow
# 428 "data/maps/Town_Wip2/scripts.pory"
	release
# 429 "data/maps/Town_Wip2/scripts.pory"
	fadeoutbgm 0
# 430 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 431 "data/maps/Town_Wip2/scripts.pory"
	msgbox SoulDewStartsShining, MSGBOX_SIGN
# 432 "data/maps/Town_Wip2/scripts.pory"
	playse SE_M_DETECT
# 433 "data/maps/Town_Wip2/scripts.pory"
	dofieldeffectsparkle 25, 28, 0
# 434 "data/maps/Town_Wip2/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 435 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_RESULT, 2
# 436 "data/maps/Town_Wip2/scripts.pory"
	playse SE_ORB
# 437 "data/maps/Town_Wip2/scripts.pory"
	special DoOrbEffect
# 438 "data/maps/Town_Wip2/scripts.pory"
	delay 150
# 439 "data/maps/Town_Wip2/scripts.pory"
	waitstate
# 440 "data/maps/Town_Wip2/scripts.pory"
	random 65535
# 441 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, 32
	goto_if_lt TriggerLatiasRoam_12
TriggerLatiasRoam_11:
# 444 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_LATIAS_SHINY, TriggerLatiasRoam_19
# 448 "data/maps/Town_Wip2/scripts.pory"
	addobject 8
TriggerLatiasRoam_18:
# 450 "data/maps/Town_Wip2/scripts.pory"
	special FadeOutOrbEffect
# 451 "data/maps/Town_Wip2/scripts.pory"
	waitstate
# 452 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 453 "data/maps/Town_Wip2/scripts.pory"
	playse SE_M_FLY
# 454 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 455 "data/maps/Town_Wip2/scripts.pory"
	delay 30
# 456 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_LATIAS_SHINY, TriggerLatiasRoam_23
# 460 "data/maps/Town_Wip2/scripts.pory"
	applymovement 8, TriggerLatiasRoam_Movement_4
TriggerLatiasRoam_22:
# 462 "data/maps/Town_Wip2/scripts.pory"
	waitmovement 0
# 463 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 464 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 465 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 466 "data/maps/Town_Wip2/scripts.pory"
	delay 30
# 467 "data/maps/Town_Wip2/scripts.pory"
	playse SE_PC_ON
# 468 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 469 "data/maps/Town_Wip2/scripts.pory"
	msgbox LatisRegistered, MSGBOX_SIGN
# 470 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 471 "data/maps/Town_Wip2/scripts.pory"
	playse SE_M_FLY
# 472 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_LATIAS_SHINY, TriggerLatiasRoam_27
# 476 "data/maps/Town_Wip2/scripts.pory"
	applymovement 8, TriggerLatiasRoam_Movement_5
TriggerLatiasRoam_26:
# 478 "data/maps/Town_Wip2/scripts.pory"
	waitmovement 0
# 479 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 480 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 481 "data/maps/Town_Wip2/scripts.pory"
	setseenmon SPECIES_LATIAS
# 482 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_LATIAS_ROAMING
# 483 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_0x8004, 0
# 484 "data/maps/Town_Wip2/scripts.pory"
	special InitRoamer
# 485 "data/maps/Town_Wip2/scripts.pory"
	removeobject 8
# 486 "data/maps/Town_Wip2/scripts.pory"
	removeobject 9
# 487 "data/maps/Town_Wip2/scripts.pory"
	fadeinbgm 0
# 488 "data/maps/Town_Wip2/scripts.pory"
	delay 48
	end

TriggerLatiasRoam_2:
# 375 "data/maps/Town_Wip2/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8000
# 376 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq TriggerLatiasRoam_8
# 380 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_TEMP_0, LOCALID_RIDE_LATIAS
TriggerLatiasRoam_7:
# 382 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 383 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_FACING, DIR_SOUTH
# 384 "data/maps/Town_Wip2/scripts.pory"
	waitmove LOCALID_LATIBALL_SKYLOCH, TriggerLatiasRoam_Movement_0
# 386 "data/maps/Town_Wip2/scripts.pory"
	addobject VAR_TEMP_0
# 388 "data/maps/Town_Wip2/scripts.pory"
	removeobject LOCALID_LATIBALL_SKYLOCH
# 389 "data/maps/Town_Wip2/scripts.pory"
	msgbox LatiasWantsToTakeYouSomewhere, MSGBOX_YESNO
# 390 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 391 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TriggerLatiasRoam_15
# 398 "data/maps/Town_Wip2/scripts.pory"
	turnobject VAR_TEMP_0, DIR_NORTH
# 399 "data/maps/Town_Wip2/scripts.pory"
	addobject LOCALID_FAKE_PLAYER_SKYLOCH
# 400 "data/maps/Town_Wip2/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER_SKYLOCH, MAP_TOWN_WIP2, 0
# 401 "data/maps/Town_Wip2/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_TOWN_WIP2
# 402 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_STOP_GROUND_EFFECTS
# 403 "data/maps/Town_Wip2/scripts.pory"
	waitmove LOCALID_FAKE_PLAYER_SKYLOCH, TriggerLatiasRoam_Movement_2
# 404 "data/maps/Town_Wip2/scripts.pory"
	call SetSittingPlayerModel
# 405 "data/maps/Town_Wip2/scripts.pory"
	removeobject LOCALID_FAKE_PLAYER_SKYLOCH
# 406 "data/maps/Town_Wip2/scripts.pory"
	setobjectxyperm LOCALID_FAKE_PLAYER_SKYLOCH, 25, 26
# 407 "data/maps/Town_Wip2/scripts.pory"
	addobject LOCALID_FAKE_PLAYER_SKYLOCH
# 408 "data/maps/Town_Wip2/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER_SKYLOCH, MAP_TOWN_WIP2, 0
# 409 "data/maps/Town_Wip2/scripts.pory"
	delay 16
# 410 "data/maps/Town_Wip2/scripts.pory"
	applymovement VAR_TEMP_0, PlayerAndLatiasLeave2
# 411 "data/maps/Town_Wip2/scripts.pory"
	applymovement LOCALID_FAKE_PLAYER_SKYLOCH, TriggerLatiasRoam_Movement_3
# 412 "data/maps/Town_Wip2/scripts.pory"
	waitmovement 0
# 413 "data/maps/Town_Wip2/scripts.pory"
	clearflag FLAG_STOP_GROUND_EFFECTS
# 414 "data/maps/Town_Wip2/scripts.pory"
	clearflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 415 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_0x8004, 1
# 416 "data/maps/Town_Wip2/scripts.pory"
	callnative LatisWarp
# 417 "data/maps/Town_Wip2/scripts.pory"
	special LatiRide
# 418 "data/maps/Town_Wip2/scripts.pory"
	waitstate
TriggerLatiasRoam_14:
# 420 "data/maps/Town_Wip2/scripts.pory"
	release
	end

TriggerLatiasRoam_5:
# 424 "data/maps/Town_Wip2/scripts.pory"
	release
	end

TriggerLatiasRoam_8:
# 377 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_TEMP_0, LOCALID_RIDE_SHINY_LATIAS
	goto TriggerLatiasRoam_7

TriggerLatiasRoam_12:
# 442 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_LATIAS_SHINY
	goto TriggerLatiasRoam_11

TriggerLatiasRoam_15:
# 392 "data/maps/Town_Wip2/scripts.pory"
	waitmove VAR_TEMP_0, TriggerLatiasRoam_Movement_1
# 393 "data/maps/Town_Wip2/scripts.pory"
	removeobject VAR_TEMP_0
# 394 "data/maps/Town_Wip2/scripts.pory"
	clearflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 395 "data/maps/Town_Wip2/scripts.pory"
	clearflag FLAG_STOP_GROUND_EFFECTS
	goto TriggerLatiasRoam_14

TriggerLatiasRoam_19:
# 445 "data/maps/Town_Wip2/scripts.pory"
	addobject 9
	goto TriggerLatiasRoam_18

TriggerLatiasRoam_23:
# 457 "data/maps/Town_Wip2/scripts.pory"
	applymovement 9, TriggerLatiasRoam_Movement_4
	goto TriggerLatiasRoam_22

TriggerLatiasRoam_27:
# 473 "data/maps/Town_Wip2/scripts.pory"
	applymovement 9, TriggerLatiasRoam_Movement_5
	goto TriggerLatiasRoam_26


# 384 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_0:
# 384 "data/maps/Town_Wip2/scripts.pory"
	set_visible
# 384 "data/maps/Town_Wip2/scripts.pory"
	delay_1
# 384 "data/maps/Town_Wip2/scripts.pory"
	delay_1
# 384 "data/maps/Town_Wip2/scripts.pory"
	delay_1
# 384 "data/maps/Town_Wip2/scripts.pory"
	lati_ball
	step_end

# 392 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_1:
# 392 "data/maps/Town_Wip2/scripts.pory"
	enter_pokeball
# 392 "data/maps/Town_Wip2/scripts.pory"
	set_invisible
	step_end

# 403 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_2:
# 403 "data/maps/Town_Wip2/scripts.pory"
	jump_2_up
# 403 "data/maps/Town_Wip2/scripts.pory"
	lock_anim
	step_end

# 411 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_3:
# 411 "data/maps/Town_Wip2/scripts.pory"
	lock_anim
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_up
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_up
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_up
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_faster_up
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_faster_up
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_faster_up
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_faster_up
# 411 "data/maps/Town_Wip2/scripts.pory"
	walk_faster_up
	step_end

# 457 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_4:
# 457 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 457 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 457 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 457 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 457 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 457 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
	step_end

# 473 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_5:
# 473 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 473 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 473 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 473 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 473 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 473 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 473 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
	step_end

SkylochInt_FatMan_Text_0:
# 125 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh…$"

SkylochInt_Pikachu_Text_0:
# 349 "data/maps/Town_Wip2/scripts.pory"
	.string "Pikachu: Pika pika!$"

Skyloch_Sign1_Text::
# 21 "data/maps/Town_Wip2/scripts.pory"
	.string "SKYLOCH VILLAGE$"

Skyloch_Sign2_Text::
# 28 "data/maps/Town_Wip2/scripts.pory"
	.string "{UP_ARROW} Route 5 and Aldeleaf City\n"
	.string "{RIGHT_ARROW} Route 6 and Scorched Desert\l"
	.string "{LEFT_ARROW} Route 8 and Shoreslate City$"

Skyloch_Sign3_Text::
# 37 "data/maps/Town_Wip2/scripts.pory"
	.string "Skyloch Rest House$"

Skyloch_Azumarill_Text::
# 50 "data/maps/Town_Wip2/scripts.pory"
	.string "Azumarill: Maririroo…$"

Skyloch_Lass_Text::
# 61 "data/maps/Town_Wip2/scripts.pory"
	.string "No, we are not going back in the lake!\n"
	.string "Mom and Dad are going to be angry\l"
	.string "if we're late!$"

Skyloch_LittleBoy_Text::
# 71 "data/maps/Town_Wip2/scripts.pory"
	.string "My daddy's teaching me how to fish!$"

Skyloch_Fisher_Text::
# 79 "data/maps/Town_Wip2/scripts.pory"
	.string "Look at this sparkling lake!\p"
	.string "There may not be a whole lot of\n"
	.string "variety in this lake but that's\l"
	.string "not stopping a true angler!\p"
	.string "Who knows, maybe I'll even catch\n"
	.string "a shiny Pokémon!$"

Skyloch_Man_Text::
# 91 "data/maps/Town_Wip2/scripts.pory"
	.string "I saw a bunch of people clad in dark\n"
	.string "heading west towards Shoreslate City.\l"
	.string "They kind of looked like Team Rocket,\l"
	.string "the evil organization from Kanto.$"

Skyloch_OldWoman_Text::
# 101 "data/maps/Town_Wip2/scripts.pory"
	.string "Are you visiting Skyloch or\n"
	.string "simply passing through?\l"
	.string "Either way, if your Pokémon are tired,\l"
	.string "you should have a rest at the\l"
	.string "Skyloch Rest House.$"

SkylochInt_FatMan_Text::
# 157 "data/maps/Town_Wip2/scripts.pory"
	.string "It's so hot…\p"
	.string "I could really go for some\n"
	.string "ice cream right now.$"

SkylochInt_FatMan_TextContinued::
# 162 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh hey, I notice you have some\n"
	.string "Casteliacone. Do you think\l"
	.string "I could have one?$"

SkylochInt_FatMan_TextThanks::
# 167 "data/maps/Town_Wip2/scripts.pory"
	.string "Thanks! Here, you can have this.$"

SkylochInt_FatMan_GivenCone::
# 170 "data/maps/Town_Wip2/scripts.pory"
	.string "Thanks for the refreshing Casteliacone!\n"
	.string "I'm already feeling much better.$"

SkylochInt_RestHouseOldWoman_RestHere::
# 198 "data/maps/Town_Wip2/scripts.pory"
	.string "Your Pokémon must be weary.\n"
	.string "Would you like to take a short rest?$"

SkylochInt_RestHouseOldWoman_StartRest::
# 202 "data/maps/Town_Wip2/scripts.pory"
	.string "That's right.\n"
	.string "Take your time and rest up.$"

SkylochInt_RestHouseOldWoman_RestDone::
# 206 "data/maps/Town_Wip2/scripts.pory"
	.string "If you or your Pokémon are\n"
	.string "feeling weary, don't hesitate\l"
	.string "to stop by to rest again.$"

SkylochInt_RestHouseOldWoman_DeclineRest::
# 211 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh… Well, don't push yourself\n"
	.string "too hard.$"

SkylochInt_RestHouseWoman_Text::
# 219 "data/maps/Town_Wip2/scripts.pory"
	.string "I'm taking my daughter to see\n"
	.string "the museum exhibit in Aldeleaf City.\l"
	.string "We're just stopping here to rest\l"
	.string "for a while.$"

SkylochInt_RestHouseGirl_Text::
# 229 "data/maps/Town_Wip2/scripts.pory"
	.string "There's free juice in the fridge!$"

SkylochInt_JuiceTaken::
# 249 "data/maps/Town_Wip2/scripts.pory"
	.string "You've already taken some berry juice.\n"
	.string "Best save some for others.$"

CantFitJuice::
# 253 "data/maps/Town_Wip2/scripts.pory"
	.string "There's berry juice in the fridge.\p"
	.string "You don't have enough room in\n"
	.string "your bag to carry more.$"

SkylochInt_OldHistorian_Text::
# 262 "data/maps/Town_Wip2/scripts.pory"
	.string "To the east of Skyloch lies\n"
	.string "the Scorched Desert.\l"
	.string "According to legend, the\l"
	.string "Scorched Desert isn't the result\l"
	.string "of natural desertification.\p"
	.string "It is said that there once used\n"
	.string "to be a great kingdom there,\l"
	.string "but one day in their hubris, they\l"
	.string "angered a greater power that\l"
	.string "wiped away their entire kingdom.\l"
	.string "Not even the flora survived.\p"
	.string "What being could cause such\n"
	.string "destruction?$"

SkylochMakeDecision::
# 314 "data/maps/Town_Wip2/scripts.pory"
	.string "Even though you showed me the two\n"
	.string "different species of Raichu,\l"
	.string "I'm still not sure what way I want\l"
	.string "to evolve all my Pikachus…$"

SkylochInt_PikachuWoman_2Raichus::
# 320 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh, you seem to have two different\n"
	.string "species of Raichu!\p"
	.string "This will help me a lot with my\n"
	.string "decision making!\p"
	.string "To show my gratitude,\n"
	.string "I want you to have this!$"

ExplainLightBall::
# 328 "data/maps/Town_Wip2/scripts.pory"
	.string "Try giving that item to a Pikachu and\n"
	.string "it will greatly increase its\l"
	.string "offensive capabilities!$"

SkylochInt_PikachuWoman_Text::
# 334 "data/maps/Town_Wip2/scripts.pory"
	.string "I really love Pikachu!\p"
	.string "I've thought of evolving them but\n"
	.string "I heard that Pikachu can evolve into\l"
	.string "two different variations and\l"
	.string "I'm not sure which one I like more.\p"
	.string "Could you show me both of those\n"
	.string "variations? I'll give you\l"
	.string "something great in return.$"

Route23Lake_Hiker_Text::
# 358 "data/maps/Town_Wip2/scripts.pory"
	.string "This giant stone almost looks\n"
	.string "as if it's a roost or something.\p"
	.string "I've seen another one like\n"
	.string "this in a similar location.\l"
	.string "I doubt it's simple coincidence.$"

LatiasWantsToTakeYouSomewhere::
# 366 "data/maps/Town_Wip2/scripts.pory"
	.string "Looks like {STR_VAR_1} wants to\n"
	.string "take you somewhere.\p"
	.string "Would you like to hop on its back?$"
