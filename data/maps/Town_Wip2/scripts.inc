Town_Wip2_MapScripts::
# 2 "data/maps/Town_Wip2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Skyloch_SetFlag
	.byte 0


Skyloch_SetFlag::
# 5 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_VISITED_WIP_TOWN2
# 6 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_INCREASED_SHINY_ODDS
	end


Skyloch_Sign1::
# 11 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign1_Text, MSGBOX_SIGN
	end


Skyloch_Sign2::
# 18 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign2_Text, MSGBOX_SIGN
	end


Skyloch_Sign3::
# 27 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Sign3_Text, MSGBOX_SIGN
	end


Skyloch_Azumarill::
# 35 "data/maps/Town_Wip2/scripts.pory"
	lock
# 36 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 37 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 38 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Azumarill_Text, MSGBOX_DEFAULT
# 39 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 40 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Skyloch_Lass::
# 47 "data/maps/Town_Wip2/scripts.pory"
	lock
# 48 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Lass_Text, MSGBOX_DEFAULT
# 49 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 50 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 51 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Skyloch_LittleBoy::
# 61 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_LittleBoy_Text, MSGBOX_NPC
	end


Skyloch_Fisher::
# 69 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Fisher_Text, MSGBOX_NPC
	end


Skyloch_Man::
# 81 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_Man_Text, MSGBOX_NPC
	end


Skyloch_OldWoman::
# 91 "data/maps/Town_Wip2/scripts.pory"
	msgbox Skyloch_OldWoman_Text, MSGBOX_NPC
	end


SkylochInt_FatMan::
# 102 "data/maps/Town_Wip2/scripts.pory"
	lock
# 103 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 104 "data/maps/Town_Wip2/scripts.pory"
	goto_if_unset FLAG_SKYLOCH_CASTELIACONE, SkylochInt_FatMan_2
# 127 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_GivenCone, MSGBOX_NPC
SkylochInt_FatMan_1:
# 129 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 130 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 131 "data/maps/Town_Wip2/scripts.pory"
	release
	end

SkylochInt_FatMan_2:
# 105 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_Text, MSGBOX_DEFAULT
# 106 "data/maps/Town_Wip2/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 107 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_FatMan_5
	goto SkylochInt_FatMan_1

SkylochInt_FatMan_5:
# 108 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_TextContinued, MSGBOX_YESNO
# 109 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_FatMan_7
# 114 "data/maps/Town_Wip2/scripts.pory"
	removeitem ITEM_CASTELIACONE, 1
# 115 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_TextThanks, MSGBOX_DEFAULT
# 116 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 1
# 117 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 118 "data/maps/Town_Wip2/scripts.pory"
	waitfanfare
# 119 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 120 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 121 "data/maps/Town_Wip2/scripts.pory"
	release
	end

SkylochInt_FatMan_7:
# 110 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_FatMan_Text_0, MSGBOX_NPC
	end


SkylochInt_RestHouseOldWoman::
# 152 "data/maps/Town_Wip2/scripts.pory"
	lock
# 153 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 154 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_RestHere, MSGBOX_YESNO
# 155 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseOldWoman_2
SkylochInt_RestHouseOldWoman_1:
# 158 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_RestHouseOldWoman_5
	end

SkylochInt_RestHouseOldWoman_2:
# 156 "data/maps/Town_Wip2/scripts.pory"
	goto SkylochInt_RestHouseOldWoman_Rest
	goto SkylochInt_RestHouseOldWoman_1

SkylochInt_RestHouseOldWoman_5:
# 159 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_DeclineRest, MSGBOX_DEFAULT
# 160 "data/maps/Town_Wip2/scripts.pory"
	release
	end


SkylochInt_RestHouseOldWoman_Rest::
# 166 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_StartRest, MSGBOX_DEFAULT
# 167 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 168 "data/maps/Town_Wip2/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 169 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseOldWoman_RestDone, MSGBOX_DEFAULT
# 170 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 171 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 172 "data/maps/Town_Wip2/scripts.pory"
	release
	end


SkylochInt_RestHouseWoman::
# 193 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseWoman_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseGirl::
# 203 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_RestHouseGirl_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseFridge::
# 210 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_SKYLOCH_JUICE, SkylochInt_RestHouseFridge_2
	checkitemspace ITEM_BERRY_JUICE
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseFridge_4
# 222 "data/maps/Town_Wip2/scripts.pory"
	msgbox CantFitJuice, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_2:
# 211 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_JuiceTaken, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_4:
# 215 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 216 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_SKYLOCH_JUICE
# 217 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 218 "data/maps/Town_Wip2/scripts.pory"
	closemessage
	end


SkylochInt_OldHistorian::
# 236 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_OldHistorian_Text, MSGBOX_NPC
	end


SkylochInt_PikachuWoman::
# 256 "data/maps/Town_Wip2/scripts.pory"
	goto_if_set FLAG_RECEIVED_LIGHTBALL, SkylochInt_PikachuWoman_2
# 260 "data/maps/Town_Wip2/scripts.pory"
	lock
# 261 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 262 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_RAICHU, 0
# 263 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_5
SkylochInt_PikachuWoman_4:
# 276 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_PikachuWoman_Text, MSGBOX_DEFAULT
# 277 "data/maps/Town_Wip2/scripts.pory"
	waitmessage
# 278 "data/maps/Town_Wip2/scripts.pory"
	closemessage
# 279 "data/maps/Town_Wip2/scripts.pory"
	release
	end

SkylochInt_PikachuWoman_2:
# 257 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochMakeDecision, MSGBOX_NPC
	end

SkylochInt_PikachuWoman_5:
# 264 "data/maps/Town_Wip2/scripts.pory"
	checkpartymon SPECIES_RAICHU_ALOLAN, 0
# 265 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_7
	goto SkylochInt_PikachuWoman_4

SkylochInt_PikachuWoman_7:
# 266 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_PikachuWoman_2Raichus, MSGBOX_DEFAULT
	checkitemspace ITEM_LIGHT_BALL
# 0 "data/maps/Town_Wip2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_PikachuWoman_10
SkylochInt_PikachuWoman_9:
# 270 "data/maps/Town_Wip2/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 271 "data/maps/Town_Wip2/scripts.pory"
	setflag FLAG_RECEIVED_LIGHTBALL
# 272 "data/maps/Town_Wip2/scripts.pory"
	msgbox ExplainLightBall, MSGBOX_NPC
	end

SkylochInt_PikachuWoman_10:
# 268 "data/maps/Town_Wip2/scripts.pory"
	goto ZeBagIsFull
	goto SkylochInt_PikachuWoman_9


SkylochInt_Pikachu::
# 314 "data/maps/Town_Wip2/scripts.pory"
	lock
# 315 "data/maps/Town_Wip2/scripts.pory"
	faceplayer
# 316 "data/maps/Town_Wip2/scripts.pory"
	waitse
# 317 "data/maps/Town_Wip2/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 318 "data/maps/Town_Wip2/scripts.pory"
	msgbox SkylochInt_Pikachu_Text_0, MSGBOX_DEFAULT
# 319 "data/maps/Town_Wip2/scripts.pory"
	waitmoncry
# 320 "data/maps/Town_Wip2/scripts.pory"
	release
	end


Route23Lake_Hiker::
# 325 "data/maps/Town_Wip2/scripts.pory"
	msgbox Route23Lake_Hiker_Text, MSGBOX_NPC
	return


SkylochInt_FatMan_Text_0:
# 110 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh…$"

SkylochInt_Pikachu_Text_0:
# 318 "data/maps/Town_Wip2/scripts.pory"
	.string "Pikachu: Pika pika!$"

Skyloch_Sign1_Text::
# 14 "data/maps/Town_Wip2/scripts.pory"
	.string "SKYLOCH VILLAGE$"

Skyloch_Sign2_Text::
# 21 "data/maps/Town_Wip2/scripts.pory"
	.string "{UP_ARROW} Route 5 and Aldeleaf City\n"
	.string "{RIGHT_ARROW} Route 6 and Scorched Desert\l"
	.string "{LEFT_ARROW} Route 8 and Shoreslate City$"

Skyloch_Sign3_Text::
# 30 "data/maps/Town_Wip2/scripts.pory"
	.string "Skyloch Rest House$"

Skyloch_Azumarill_Text::
# 43 "data/maps/Town_Wip2/scripts.pory"
	.string "Azumarill: Maririroo…$"

Skyloch_Lass_Text::
# 54 "data/maps/Town_Wip2/scripts.pory"
	.string "No, we are not going back in the lake!\n"
	.string "Mom and Dad are going to be angry\l"
	.string "if we're late!$"

Skyloch_LittleBoy_Text::
# 64 "data/maps/Town_Wip2/scripts.pory"
	.string "My daddy's teaching me how to fish!$"

Skyloch_Fisher_Text::
# 72 "data/maps/Town_Wip2/scripts.pory"
	.string "Look at this sparkling lake!\p"
	.string "There may not be a whole lot of\n"
	.string "variety in this lake but that's\l"
	.string "not stopping a true angler!\p"
	.string "Who knows, maybe I'll even catch\n"
	.string "a shiny Pokémon!$"

Skyloch_Man_Text::
# 84 "data/maps/Town_Wip2/scripts.pory"
	.string "I saw a bunch of people clad in dark\n"
	.string "heading west towards Shoreslate City.\l"
	.string "They kind of looked like Team Rocket,\l"
	.string "the evil organization from Kanto.$"

Skyloch_OldWoman_Text::
# 94 "data/maps/Town_Wip2/scripts.pory"
	.string "Are you visiting Skyloch or\n"
	.string "simply passing through?\l"
	.string "Either way, if your Pokémon are tired,\l"
	.string "you should have a rest at the\l"
	.string "Skyloch Rest House.$"

SkylochInt_FatMan_Text::
# 134 "data/maps/Town_Wip2/scripts.pory"
	.string "It's so hot…\p"
	.string "I could really go for some\n"
	.string "ice cream right now.$"

SkylochInt_FatMan_TextContinued::
# 139 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh hey, I notice you have some\n"
	.string "Casteliacone. Do you think\l"
	.string "I could have one?$"

SkylochInt_FatMan_TextThanks::
# 144 "data/maps/Town_Wip2/scripts.pory"
	.string "Thanks! Here, you can have this.$"

SkylochInt_FatMan_GivenCone::
# 147 "data/maps/Town_Wip2/scripts.pory"
	.string "Thanks for the refreshing Casteliacone!\n"
	.string "I'm already feeling much better.$"

SkylochInt_RestHouseOldWoman_RestHere::
# 175 "data/maps/Town_Wip2/scripts.pory"
	.string "Your Pokémon must be weary.\n"
	.string "Would you like to take a short rest?$"

SkylochInt_RestHouseOldWoman_StartRest::
# 179 "data/maps/Town_Wip2/scripts.pory"
	.string "That's right.\n"
	.string "Take your time and rest up.$"

SkylochInt_RestHouseOldWoman_RestDone::
# 183 "data/maps/Town_Wip2/scripts.pory"
	.string "If you or your Pokémon are\n"
	.string "feeling weary, don't hesitate\l"
	.string "to stop by to rest again.$"

SkylochInt_RestHouseOldWoman_DeclineRest::
# 188 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh… Well, don't push yourself\n"
	.string "too hard.$"

SkylochInt_RestHouseWoman_Text::
# 196 "data/maps/Town_Wip2/scripts.pory"
	.string "I'm taking my daughter to see\n"
	.string "the museum exhibit in Aldeleaf City.\l"
	.string "We're just stopping here to rest\l"
	.string "for a while.$"

SkylochInt_RestHouseGirl_Text::
# 206 "data/maps/Town_Wip2/scripts.pory"
	.string "There's free juice in the fridge!$"

SkylochInt_JuiceTaken::
# 226 "data/maps/Town_Wip2/scripts.pory"
	.string "You've already taken some berry juice.\n"
	.string "Best save some for others.$"

CantFitJuice::
# 230 "data/maps/Town_Wip2/scripts.pory"
	.string "There's berry juice in the fridge.\p"
	.string "You don't have enough room in\n"
	.string "your bag to carry more.$"

SkylochInt_OldHistorian_Text::
# 239 "data/maps/Town_Wip2/scripts.pory"
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
# 283 "data/maps/Town_Wip2/scripts.pory"
	.string "Even though you showed me the two\n"
	.string "different species of Raichu,\l"
	.string "I'm still not sure what way I want\l"
	.string "to evolve all my Pikachus…$"

SkylochInt_PikachuWoman_2Raichus::
# 289 "data/maps/Town_Wip2/scripts.pory"
	.string "Oh, you seem to have two different\n"
	.string "species of Raichu!\p"
	.string "This will help me a lot with my\n"
	.string "decision making!\p"
	.string "To show my gratitude,\n"
	.string "I want you to have this!$"

ExplainLightBall::
# 297 "data/maps/Town_Wip2/scripts.pory"
	.string "Try giving that item to a Pikachu and\n"
	.string "it will greatly increase its\l"
	.string "offensive capabilities!$"

SkylochInt_PikachuWoman_Text::
# 303 "data/maps/Town_Wip2/scripts.pory"
	.string "I really love Pikachu!\p"
	.string "I've thought of evolving them but\n"
	.string "I heard that Pikachu can evolve into\l"
	.string "two different variations and\l"
	.string "I'm not sure which one I like more.\p"
	.string "Could you show me both of those\n"
	.string "variations? I'll give you\l"
	.string "something great in return.$"

Route23Lake_Hiker_Text::
# 327 "data/maps/Town_Wip2/scripts.pory"
	.string "I've seen another stone like\n"
	.string "this in a similar location.\l"
	.string "I doubt it's simple coincidence.$"
