Town_Wip2_MapScripts::
# 2 "data/maps/Town_Wip2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Skyloch_SetFlag
	.byte 0


Skyloch_SetFlag::
# 5 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_VISITED_WIP_TOWN2
# 7 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_INCREASED_SHINY_ODDS
	end


Skyloch_Sign1::
# 12 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign1_Text, MSGBOX_SIGN
	end


Skyloch_Sign2::
# 19 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign2_Text, MSGBOX_SIGN
	end


Skyloch_Sign3::
# 28 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign3_Text, MSGBOX_SIGN
	end


Skyloch_Azumarill::
# 36 "data/maps/Town_Wip2/scripts.pory"
	lock
# 37 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 38 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 39 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Azumarill_Text, MSGBOX_DEFAULT
# 40 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 41 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Skyloch_Lass::
# 48 "data/maps/Town_Wip2/scripts.pory"
	lock
# 49 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Lass_Text, MSGBOX_DEFAULT
# 50 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 51 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 52 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Skyloch_LittleBoy::
# 62 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_LittleBoy_Text, MSGBOX_NPC
	end


Skyloch_Fisher::
# 70 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Fisher_Text, MSGBOX_NPC
	end


Skyloch_Man::
# 82 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Man_Text, MSGBOX_NPC
	end


Skyloch_OldWoman::
# 92 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_OldWoman_Text, MSGBOX_NPC
	end


SkylochInt_FatMan::
# 103 "data/maps/Town_Wip2/scripts.pory"
	lock
# 104 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 105 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_SKYLOCH_CASTELIACONE, SkylochInt_FatMan_2
# 144 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_GivenCone, MSGBOX_NPC
SkylochInt_FatMan_1:
# 146 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 147 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 148 "data/maps/Town_Wip2/scripts.pory"
	release
	end

SkylochInt_FatMan_2:
# 106 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_Text, MSGBOX_DEFAULT
# 107 "data/maps/Town_Wip2/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 108 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_FatMan_6
SkylochInt_FatMan_5:
# 116 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_FatMan_8
	goto SkylochInt_FatMan_1

SkylochInt_FatMan_6:
# 109 "data/maps/Town_Wip2/scripts.pory"
	release
# 110 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_Q10_SKYLOCH_ICECREAM_START, SkylochInt_FatMan_10
	goto SkylochInt_FatMan_5

SkylochInt_FatMan_8:
# 117 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_TextContinued, MSGBOX_YESNO
# 118 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_FatMan_12
# 127 "data/maps/Town_Wip2/scripts.pory"
	removeitem ITEM_CASTELIACONE, 1
# 128 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_TextThanks, MSGBOX_DEFAULT
# 129 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 1
# 130 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 131 "data/maps/Town_Wip2/scripts.pory"
	waitfanfare
# 132 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 133 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 134 "data/maps/Town_Wip2/scripts.pory"
	release
# 135 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_Q10_SKYLOCH_ICECREAM_START, SkylochInt_FatMan_19
SkylochInt_FatMan_18:
	end

SkylochInt_FatMan_10:
# 111 "data/maps/Town_Wip2/scripts.pory"
	startquest FLAG_Q10_SKYLOCH_ICECREAM_START
# 112 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupAdd
	end

SkylochInt_FatMan_12:
# 119 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_Text_0, MSGBOX_NPC
# 120 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_Q10_SKYLOCH_ICECREAM_START, SkylochInt_FatMan_16
SkylochInt_FatMan_15:
	end

SkylochInt_FatMan_16:
# 121 "data/maps/Town_Wip2/scripts.pory"
	startquest FLAG_Q10_SKYLOCH_ICECREAM_START
# 122 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupAdd
	goto SkylochInt_FatMan_15

SkylochInt_FatMan_19:
# 136 "data/maps/Town_Wip2/scripts.pory"
	completequest FLAG_Q10_SKYLOCH_ICECREAM_COMPLETE
# 137 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupRemove
	goto SkylochInt_FatMan_18


SkylochInt_RestHouseOldWoman::
# 169 "data/maps/Town_Wip2/scripts.pory"
	lock
# 170 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 171 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_RestHere, MSGBOX_YESNO
# 172 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseOldWoman_2
SkylochInt_RestHouseOldWoman_1:
# 175 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_RestHouseOldWoman_5
	end

SkylochInt_RestHouseOldWoman_2:
# 173 "data/maps/Town_Wip2/scripts.pory"
	goto SkylochInt_RestHouseOldWoman_Rest
	goto SkylochInt_RestHouseOldWoman_1

SkylochInt_RestHouseOldWoman_5:
# 176 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_DeclineRest, MSGBOX_DEFAULT
# 177 "data/maps/Town_Wip2/scripts.pory"
	release
	end


SkylochInt_RestHouseOldWoman_Rest::
# 183 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_StartRest, MSGBOX_DEFAULT
# 184 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 185 "data/maps/Town_Wip2/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 186 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_RestDone, MSGBOX_DEFAULT
# 187 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 188 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 189 "data/maps/Town_Wip2/scripts.pory"
	release
	end


SkylochInt_RestHouseWoman::
# 210 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseWoman_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseGirl::
# 220 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseGirl_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseFridge::
# 227 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_SKYLOCH_JUICE, SkylochInt_RestHouseFridge_2
	checkitemspace ITEM_BERRY_JUICE
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseFridge_4
# 239 "data/maps/Town_Wip2/scripts.pory"
	msgbox CantFitJuice, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_2:
# 228 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_JuiceTaken, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_4:
# 232 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 233 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_SKYLOCH_JUICE
# 234 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 235 "data/maps/Town_Wip2/scripts.pory"
	closemessage
	end


SkylochInt_OldHistorian::
# 253 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_OldHistorian_Text, MSGBOX_NPC
	end


SkylochInt_PikachuWoman::
# 273 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_RECEIVED_LIGHTBALL, SkylochInt_PikachuWoman_2
# 277 "data/maps/Town_Wip2/scripts.pory"
	lock
# 278 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 279 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_RAICHU, 0
# 280 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_5
SkylochInt_PikachuWoman_4:
# 297 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_PikachuWoman_Text, MSGBOX_DEFAULT
# 298 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 299 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 300 "data/maps/Town_Wip2/scripts.pory"
	release
# 301 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_Q11_SKYLOCH_RAICHUS_START, SkylochInt_PikachuWoman_8
SkylochInt_PikachuWoman_7:
	end

SkylochInt_PikachuWoman_2:
# 274 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochMakeDecision, MSGBOX_NPC
	end

SkylochInt_PikachuWoman_5:
# 281 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_RAICHU_ALOLAN, 0
# 282 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_10
	goto SkylochInt_PikachuWoman_4

SkylochInt_PikachuWoman_8:
# 302 "data/maps/Town_Wip2/scripts.pory"
	startquest FLAG_Q11_SKYLOCH_RAICHUS_START
# 303 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupAdd
	goto SkylochInt_PikachuWoman_7

SkylochInt_PikachuWoman_10:
# 283 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_PikachuWoman_2Raichus, MSGBOX_DEFAULT
	checkitemspace ITEM_LIGHT_BALL
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_PikachuWoman_13
SkylochInt_PikachuWoman_12:
# 287 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 288 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_RECEIVED_LIGHTBALL
# 289 "data/maps/Town_Wip2/scripts.pory"
	msgbox ExplainLightBall, MSGBOX_NPC
# 290 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_Q11_SKYLOCH_RAICHUS_START, SkylochInt_PikachuWoman_16
SkylochInt_PikachuWoman_15:
	end

SkylochInt_PikachuWoman_13:
# 285 "data/maps/Town_Wip2/scripts.pory"
	goto ZeBagIsFull
	goto SkylochInt_PikachuWoman_12

SkylochInt_PikachuWoman_16:
# 291 "data/maps/Town_Wip2/scripts.pory"
	completequest FLAG_Q11_SKYLOCH_RAICHUS_COMPLETE
# 292 "data/maps/Town_Wip2/scripts.pory"
	special ShowJournalPopupRemove
	goto SkylochInt_PikachuWoman_15


SkylochInt_Pikachu::
# 339 "data/maps/Town_Wip2/scripts.pory"
	lock
# 340 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 341 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 342 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 343 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_Pikachu_Text_0, MSGBOX_DEFAULT
# 344 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 345 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Route23Lake_Hiker::
# 350 "data/maps/Town_Wip2/scripts.pory"
	msgbox Route23Lake_Hiker_Text, MSGBOX_NPC
	return


TriggerLatiasRoam::
	checkitem ITEM_SOUL_DEW
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TriggerLatiasRoam_2
# 365 "data/maps/Town_Wip2/scripts.pory"
	safefollow
# 366 "data/maps/Town_Wip2/scripts.pory"
	release
# 367 "data/maps/Town_Wip2/scripts.pory"
	fadeoutbgm 0
# 368 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 369 "data/maps/Town_Wip2/scripts.pory"
	msgbox SoulDewStartsShining, MSGBOX_SIGN
# 370 "data/maps/Town_Wip2/scripts.pory"
	playse SE_M_DETECT
# 371 "data/maps/Town_Wip2/scripts.pory"
	dofieldeffectsparkle 25, 26, 0
# 372 "data/maps/Town_Wip2/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 373 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_RESULT, 2
# 374 "data/maps/Town_Wip2/scripts.pory"
	playse SE_ORB
# 375 "data/maps/Town_Wip2/scripts.pory"
	special DoOrbEffect
# 376 "data/maps/Town_Wip2/scripts.pory"
	delay 150
# 377 "data/maps/Town_Wip2/scripts.pory"
	waitstate
# 378 "data/maps/Town_Wip2/scripts.pory"
	addobject 8
# 379 "data/maps/Town_Wip2/scripts.pory"
	special FadeOutOrbEffect
# 380 "data/maps/Town_Wip2/scripts.pory"
	waitstate
# 381 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 382 "data/maps/Town_Wip2/scripts.pory"
	playse SE_M_FLY
# 383 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 384 "data/maps/Town_Wip2/scripts.pory"
	delay 30
# 385 "data/maps/Town_Wip2/scripts.pory"
	applymovement 8, TriggerLatiasRoam_Movement_0
# 386 "data/maps/Town_Wip2/scripts.pory"
	waitmovement 0
# 387 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 388 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 389 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 390 "data/maps/Town_Wip2/scripts.pory"
	delay 30
# 391 "data/maps/Town_Wip2/scripts.pory"
	playse SE_PC_ON
# 392 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 393 "data/maps/Town_Wip2/scripts.pory"
	msgbox LatisRegistered, MSGBOX_SIGN
# 394 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 395 "data/maps/Town_Wip2/scripts.pory"
	playse SE_M_FLY
# 396 "data/maps/Town_Wip2/scripts.pory"
	applymovement 8, TriggerLatiasRoam_Movement_1
# 397 "data/maps/Town_Wip2/scripts.pory"
	waitmovement 0
# 398 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 399 "data/maps/Town_Wip2/scripts.pory"
	delay 60
# 400 "data/maps/Town_Wip2/scripts.pory"
	setseenmon SPECIES_LATIAS
# 401 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_LATIAS_ROAMING
# 402 "data/maps/Town_Wip2/scripts.pory"
	setvar VAR_0x8004, 0
# 403 "data/maps/Town_Wip2/scripts.pory"
	special InitRoamer
# 404 "data/maps/Town_Wip2/scripts.pory"
	removeobject 8
# 405 "data/maps/Town_Wip2/scripts.pory"
	fadeinbgm 0
# 406 "data/maps/Town_Wip2/scripts.pory"
	delay 48
	end

TriggerLatiasRoam_2:
# 362 "data/maps/Town_Wip2/scripts.pory"
	release
	end


# 385 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_0:
# 385 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 385 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 385 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 385 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 385 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
# 385 "data/maps/Town_Wip2/scripts.pory"
	walk_slow_down
	step_end

# 396 "data/maps/Town_Wip2/scripts.pory"
TriggerLatiasRoam_Movement_1:
# 396 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 396 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 396 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 396 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 396 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 396 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
# 396 "data/maps/Town_Wip2/scripts.pory"
	walk_fast_up
	step_end

SkylochInt_FatMan_Text_0:
# 119 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh…$"

SkylochInt_Pikachu_Text_0:
# 343 "data/maps/Town_Wip2/scripts.pory"
	.string "Pikachu: Pika pika!$"

Skyloch_Sign1_Text::
# 15 "data/maps/Town_Wip2/scripts.pory"
	.string "SKYLOCH VILLAGE$"

Skyloch_Sign2_Text::
# 22 "data/maps/Town_Wip2/scripts.pory"
	.string "{UP_ARROW} Route 5 and Aldeleaf City\n"
	.string "{RIGHT_ARROW} Route 6 and Scorched Desert\l"
	.string "{LEFT_ARROW} Route 8 and Shoreslate City$"

Skyloch_Sign3_Text::
# 31 "data/maps/Town_Wip2/scripts.pory"
	.string "Skyloch Rest House$"

Skyloch_Azumarill_Text::
# 44 "data/maps/Town_Wip2/scripts.pory"
	.string "Azumarill: Maririroo…$"

Skyloch_Lass_Text::
# 55 "data/maps/Town_Wip2/scripts.pory"
	.string "No, we are not going back in the lake!\n"
	.string "Mom and Dad are going to be angry\l"
	.string "if we're late!$"

Skyloch_LittleBoy_Text::
# 65 "data/maps/Town_Wip2/scripts.pory"
	.string "My daddy's teaching me how to fish!$"

Skyloch_Fisher_Text::
# 73 "data/maps/Town_Wip2/scripts.pory"
	.string "Look at this sparkling lake!\p"
	.string "There may not be a whole lot of\n"
	.string "variety in this lake but that's\l"
	.string "not stopping a true angler!\p"
	.string "Who knows, maybe I'll even catch\n"
	.string "a shiny Pokémon!$"

Skyloch_Man_Text::
# 85 "data/maps/Town_Wip2/scripts.pory"
	.string "I saw a bunch of people clad in dark\n"
	.string "heading west towards Shoreslate City.\l"
	.string "They kind of looked like Team Rocket,\l"
	.string "the evil organization from Kanto.$"

Skyloch_OldWoman_Text::
# 95 "data/maps/Town_Wip2/scripts.pory"
	.string "Are you visiting Skyloch or\n"
	.string "simply passing through?\l"
	.string "Either way, if your Pokémon are tired,\l"
	.string "you should have a rest at the\l"
	.string "Skyloch Rest House.$"

SkylochInt_FatMan_Text::
# 151 "data/maps/Town_Wip2/scripts.pory"
	.string "It's so hot…\p"
	.string "I could really go for some\n"
	.string "ice cream right now.$"

SkylochInt_FatMan_TextContinued::
# 156 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh hey, I notice you have some\n"
	.string "Casteliacone. Do you think\l"
	.string "I could have one?$"

SkylochInt_FatMan_TextThanks::
# 161 "data/maps/Town_Wip2/scripts.pory"
	.string "Thanks! Here, you can have this.$"

SkylochInt_FatMan_GivenCone::
# 164 "data/maps/Town_Wip2/scripts.pory"
	.string "Thanks for the refreshing Casteliacone!\n"
	.string "I'm already feeling much better.$"

SkylochInt_RestHouseOldWoman_RestHere::
# 192 "data/maps/Town_Wip2/scripts.pory"
	.string "Your Pokémon must be weary.\n"
	.string "Would you like to take a short rest?$"

SkylochInt_RestHouseOldWoman_StartRest::
# 196 "data/maps/Town_Wip2/scripts.pory"
	.string "That's right.\n"
	.string "Take your time and rest up.$"

SkylochInt_RestHouseOldWoman_RestDone::
# 200 "data/maps/Town_Wip2/scripts.pory"
	.string "If you or your Pokémon are\n"
	.string "feeling weary, don't hesitate\l"
	.string "to stop by to rest again.$"

SkylochInt_RestHouseOldWoman_DeclineRest::
# 205 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh… Well, don't push yourself\n"
	.string "too hard.$"

SkylochInt_RestHouseWoman_Text::
# 213 "data/maps/Town_Wip2/scripts.pory"
	.string "I'm taking my daughter to see\n"
	.string "the museum exhibit in Aldeleaf City.\l"
	.string "We're just stopping here to rest\l"
	.string "for a while.$"

SkylochInt_RestHouseGirl_Text::
# 223 "data/maps/Town_Wip2/scripts.pory"
	.string "There's free juice in the fridge!$"

SkylochInt_JuiceTaken::
# 243 "data/maps/Town_Wip2/scripts.pory"
	.string "You've already taken some berry juice.\n"
	.string "Best save some for others.$"

CantFitJuice::
# 247 "data/maps/Town_Wip2/scripts.pory"
	.string "There's berry juice in the fridge.\p"
	.string "You don't have enough room in\n"
	.string "your bag to carry more.$"

SkylochInt_OldHistorian_Text::
# 256 "data/maps/Town_Wip2/scripts.pory"
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
# 308 "data/maps/Town_Wip2/scripts.pory"
	.string "Even though you showed me the two\n"
	.string "different species of Raichu,\l"
	.string "I'm still not sure what way I want\l"
	.string "to evolve all my Pikachus…$"

SkylochInt_PikachuWoman_2Raichus::
# 314 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh, you seem to have two different\n"
	.string "species of Raichu!\p"
	.string "This will help me a lot with my\n"
	.string "decision making!\p"
	.string "To show my gratitude,\n"
	.string "I want you to have this!$"

ExplainLightBall::
# 322 "data/maps/Town_Wip2/scripts.pory"
	.string "Try giving that item to a Pikachu and\n"
	.string "it will greatly increase its\l"
	.string "offensive capabilities!$"

SkylochInt_PikachuWoman_Text::
# 328 "data/maps/Town_Wip2/scripts.pory"
	.string "I really love Pikachu!\p"
	.string "I've thought of evolving them but\n"
	.string "I heard that Pikachu can evolve into\l"
	.string "two different variations and\l"
	.string "I'm not sure which one I like more.\p"
	.string "Could you show me both of those\n"
	.string "variations? I'll give you\l"
	.string "something great in return.$"

Route23Lake_Hiker_Text::
# 352 "data/maps/Town_Wip2/scripts.pory"
	.string "This giant stone almost looks\n"
	.string "as if it's a roost or something.\p"
	.string "I've seen another one like\n"
	.string "this in a similar location.\l"
	.string "I doubt it's simple coincidence.$"
