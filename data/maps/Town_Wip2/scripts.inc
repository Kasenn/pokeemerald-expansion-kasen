Town_Wip2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Skyloch_SetFlag
	.byte 0


Skyloch_SetFlag::
	setflag FLAG_VISITED_WIP_TOWN2
	setflag FLAG_INCREASED_SHINY_ODDS
	end


Skyloch_Sign1::
	msgbox Skyloch_Sign1_Text, MSGBOX_SIGN
	end


Skyloch_Sign2::
	msgbox Skyloch_Sign2_Text, MSGBOX_SIGN
	end


Skyloch_Sign3::
	msgbox Skyloch_Sign3_Text, MSGBOX_SIGN
	end


Skyloch_Azumarill::
	lock
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox Skyloch_Azumarill_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Skyloch_Lass::
	lock
	msgbox Skyloch_Lass_Text, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


Skyloch_LittleBoy::
	msgbox Skyloch_LittleBoy_Text, MSGBOX_NPC
	end


Skyloch_Fisher::
	msgbox Skyloch_Fisher_Text, MSGBOX_NPC
	end


Skyloch_Man::
	msgbox Skyloch_Man_Text, MSGBOX_NPC
	end


Skyloch_OldWoman::
	msgbox Skyloch_OldWoman_Text, MSGBOX_NPC
	end


SkylochInt_FatMan::
	lock
	faceplayer
	goto_if_unset FLAG_SKYLOCH_CASTELIACONE, SkylochInt_FatMan_2
	msgbox SkylochInt_FatMan_GivenCone, MSGBOX_NPC
SkylochInt_FatMan_1:
	waitmessage
	closemessage
	release
	end

SkylochInt_FatMan_2:
	msgbox SkylochInt_FatMan_Text, MSGBOX_DEFAULT
	checkitem ITEM_CASTELIACONE
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_FatMan_5
	goto SkylochInt_FatMan_1

SkylochInt_FatMan_5:
	msgbox SkylochInt_FatMan_TextContinued, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_FatMan_7
	removeitem ITEM_CASTELIACONE, 1
	msgbox SkylochInt_FatMan_TextThanks, MSGBOX_DEFAULT
	giveitem ITEM_OCCA_BERRY, 1
	setflag FLAG_SKYLOCH_CASTELIACONE
	waitfanfare
	waitmessage
	closemessage
	release
	end

SkylochInt_FatMan_7:
	msgbox SkylochInt_FatMan_Text_0, MSGBOX_NPC
	end


SkylochInt_RestHouseOldWoman::
	lock
	faceplayer
	msgbox SkylochInt_RestHouseOldWoman_RestHere, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseOldWoman_2
SkylochInt_RestHouseOldWoman_1:
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_RestHouseOldWoman_5
	end

SkylochInt_RestHouseOldWoman_2:
	goto SkylochInt_RestHouseOldWoman_Rest
	goto SkylochInt_RestHouseOldWoman_1

SkylochInt_RestHouseOldWoman_5:
	msgbox SkylochInt_RestHouseOldWoman_DeclineRest, MSGBOX_DEFAULT
	release
	end


SkylochInt_RestHouseOldWoman_Rest::
	msgbox SkylochInt_RestHouseOldWoman_StartRest, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox SkylochInt_RestHouseOldWoman_RestDone, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


SkylochInt_RestHouseWoman::
	msgbox SkylochInt_RestHouseWoman_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseGirl::
	msgbox SkylochInt_RestHouseGirl_Text, MSGBOX_NPC
	end


SkylochInt_RestHouseFridge::
	goto_if_set FLAG_SKYLOCH_JUICE, SkylochInt_RestHouseFridge_2
	checkitemspace ITEM_BERRY_JUICE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_RestHouseFridge_4
	msgbox CantFitJuice, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_2:
	msgbox SkylochInt_JuiceTaken, MSGBOX_SIGN
	end

SkylochInt_RestHouseFridge_4:
	giveitem ITEM_BERRY_JUICE, 1
	setflag FLAG_SKYLOCH_JUICE
	waitmessage
	closemessage
	end


SkylochInt_OldHistorian::
	msgbox SkylochInt_OldHistorian_Text, MSGBOX_NPC
	end


SkylochInt_PikachuWoman::
	goto_if_set FLAG_RECEIVED_LIGHTBALL, SkylochInt_PikachuWoman_2
	lock
	faceplayer
	checkpartymon SPECIES_RAICHU, 0
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_5
SkylochInt_PikachuWoman_4:
	msgbox SkylochInt_PikachuWoman_Text, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end

SkylochInt_PikachuWoman_2:
	msgbox SkylochMakeDecision, MSGBOX_NPC
	end

SkylochInt_PikachuWoman_5:
	checkpartymon SPECIES_RAICHU_ALOLAN, 0
	compare VAR_RESULT, TRUE
	goto_if_eq SkylochInt_PikachuWoman_7
	goto SkylochInt_PikachuWoman_4

SkylochInt_PikachuWoman_7:
	msgbox SkylochInt_PikachuWoman_2Raichus, MSGBOX_DEFAULT
	checkitemspace ITEM_LIGHT_BALL
	compare VAR_RESULT, FALSE
	goto_if_eq SkylochInt_PikachuWoman_10
	giveitem ITEM_LIGHT_BALL
	setflag FLAG_RECEIVED_LIGHTBALL
	msgbox ExplainLightBall, MSGBOX_NPC
	end

SkylochInt_PikachuWoman_10:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


SkylochInt_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox SkylochInt_Pikachu_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


SkylochInt_FatMan_Text_0:
	.string "Oh…$"

SkylochInt_Pikachu_Text_0:
	.string "Pikachu: Pika pika!$"

Skyloch_Sign1_Text::
	.string "SKYLOCH VILLAGE$"

Skyloch_Sign2_Text::
	.string "{UP_ARROW} Route 5\n"
	.string "{RIGHT_ARROW} Scorched Desert\l$"

Skyloch_Sign3_Text::
	.string "Skyloch Rest House$"

Skyloch_Azumarill_Text::
	.string "Azumarill: Maririroo…$"

Skyloch_Lass_Text::
	.string "No, we are not going back in the lake!\n"
	.string "Mom and Dad are going to be angry\l"
	.string "if we're late!$"

Skyloch_LittleBoy_Text::
	.string "My daddy's teaching me how to fish!$"

Skyloch_Fisher_Text::
	.string "Look at this sparkling lake!\p"
	.string "There may not be a whole lot of\n"
	.string "variety in this lake but that's\l"
	.string "not stopping a true angler!\p"
	.string "Who knows, maybe I'll even catch\n"
	.string "a shiny Pokémon!$"

Skyloch_Man_Text::
	.string "I saw a bunch of people clad in dark\n"
	.string "heading west towards Shoreslate City.\l"
	.string "They kind of looked like Team Rocket,\l"
	.string "the evil organization from Kanto.$"

Skyloch_OldWoman_Text::
	.string "Are you visiting Skyloch or\n"
	.string "simply passing through?\l"
	.string "Either way, if your Pokémon are tired,\l"
	.string "you should have a rest at the\l"
	.string "Skyloch Rest House.$"

SkylochInt_FatMan_Text::
	.string "It's so hot…\p"
	.string "I could really go for some\n"
	.string "ice cream right now.$"

SkylochInt_FatMan_TextContinued::
	.string "Oh hey, I notice you have some\n"
	.string "Casteliacone. Do you think\l"
	.string "I could have one?$"

SkylochInt_FatMan_TextThanks::
	.string "Thanks! Here, you can have this.$"

SkylochInt_FatMan_GivenCone::
	.string "Thanks for the refreshing Casteliacone!\n"
	.string "I'm already feeling much better.$"

SkylochInt_RestHouseOldWoman_RestHere::
	.string "This is the Skyloch Rest House.\p"
	.string "Your Pokémon must be weary.\n"
	.string "Would you like to take a short rest?$"

SkylochInt_RestHouseOldWoman_StartRest::
	.string "That's right.\n"
	.string "Take your time and rest up.$"

SkylochInt_RestHouseOldWoman_RestDone::
	.string "If you or your Pokémon are\n"
	.string "feeling weary, don't hesitate\l"
	.string "to stop by to rest again.$"

SkylochInt_RestHouseOldWoman_DeclineRest::
	.string "Oh… Well, don't push yourself\n"
	.string "too hard.$"

SkylochInt_RestHouseWoman_Text::
	.string "I'm taking my daughter to see\n"
	.string "the museum exhibit in Aldeleaf City.\l"
	.string "We're just stopping here to rest\l"
	.string "for a while.$"

SkylochInt_RestHouseGirl_Text::
	.string "There's free juice in the fridge!$"

SkylochInt_JuiceTaken::
	.string "You've already taken some berry juice.\n"
	.string "Best save some for others.$"

CantFitJuice::
	.string "There's berry juice in the fridge.\p"
	.string "You don't have enough room in\n"
	.string "your bag to carry more.$"

SkylochInt_OldHistorian_Text::
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
	.string "Even though you showed me the two\n"
	.string "different species of Raichu,\l"
	.string "I'm still not sure what way I want\l"
	.string "to evolve all my Pikachus…$"

SkylochInt_PikachuWoman_2Raichus::
	.string "Oh, you seem to have two different\n"
	.string "species of Raichu!\p"
	.string "This will help me a lot with my\n"
	.string "decision making!\p"
	.string "To show my gratitude,\n"
	.string "I want you to have this!$"

ExplainLightBall::
	.string "Try giving that item to a Pikachu and\n"
	.string "it will greatly increase its\l"
	.string "offensive capabilities!$"

SkylochInt_PikachuWoman_Text::
	.string "I really love Pikachu!\p"
	.string "I've thought of evolving them but\n"
	.string "I heard that Pikachu can evolve into\l"
	.string "two different variations and\l"
	.string "I'm not sure which one I like more.\p"
	.string "Could you show me both of those\n"
	.string "variations? I'll give you\l"
	.string "something great in return.$"
