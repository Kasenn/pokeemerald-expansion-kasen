Kaolisle_Hotel_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HideJasmine
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 5, SetPlayerDirAfterBuffet
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 9, SetPlayerDirAfterBuffet
	.2byte 0

Kaolisle_Hotel_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 1, JasmineLeavesHotel
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 6, BuffetLost2
	map_script_2 VAR_KAOLISLE_HOTEL_STATE, 10, BuffetComplete
	.2byte 0


SetPlayerDirAfterBuffet::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	addvar VAR_KAOLISLE_HOTEL_STATE, 1
	return


JasmineLeavesHotel::
	lock
	delay 30
	turnobject 24, DIR_SOUTH
	playse SE_PIN
	safefollow
	applymovement 24, Common_Movement_ExclamationMark
	waitmovement 0
	delay 70
	applymovement 24, HotelWalkDown2
	applymovement 25, HotelWalkDown2
	waitmovement 0
	delay 10
	goto_if_set FLAG_TALKED_TO_JASMINE_AT_HOTEL, JasmineLeavesHotel_2
	msgbox Hotel1F_LongTimeNoSeeGoodbye, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	delay 30
	turnobject 24, DIR_NORTH
	waitmoncry
	delay 60
	turnobject 24, DIR_SOUTH
	delay 30
	msgbox MyCompanionAmphyAlso, MSGBOX_DEFAULT
JasmineLeavesHotel_1:
	waitmessage
	closemessage
	delay 20
	applymovement 24, HotelWalkLeft1
	applymovement 25, HotelWalkDown1
	waitmovement 0
	applymovement 24, HotelWalkDown1
	applymovement 25, HotelWalkLeft1
	waitmovement 0
	removeobject 24
	applymovement 25, HotelWalkDown1
	waitmovement 0
	removeobject 25
	setflag FLAG_HIDEJASMINE_HOTEL
	delay 20
	setvar VAR_KAOLISLE_HOTEL_STATE, 2
	release
	end

JasmineLeavesHotel_2:
	msgbox Hotel1F_JasmineGoodbye, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	delay 30
	turnobject 24, DIR_NORTH
	waitmoncry
	delay 60
	turnobject 24, DIR_SOUTH
	delay 30
	msgbox AmphyAlso, MSGBOX_DEFAULT
	goto JasmineLeavesHotel_1


HideJasmine::
	setvar VAR_TEMP_5, 0
	goto_if_unset FLAG_BADGE03_GET, HideJasmine_2
HideJasmine_1:
	end

HideJasmine_2:
	setflag FLAG_HIDEJASMINE_HOTEL
	goto HideJasmine_1


HotelWalkDown2:
	walk_down
	walk_down
	step_end

HotelWalkLeft1:
	walk_left
	step_end

HotelWalkDown1:
	walk_down
	step_end

EatDeliciousMeal::
	call Common_EventScript_OutOfCenterPartyHeal
	setflag FLAG_TEMP_4
	delay 30
	return


BuffetOfferSoup::
	goto_if_set FLAG_RECEIVED_SOUP, BuffetOfferSoup_2
	msgbox HaveSomeSoup, MSGBOX_DEFAULT
	giveitem ITEM_SPECIAL_SOUP
	waitse
	waitmessage
	setflag FLAG_RECEIVED_SOUP
	return

BuffetOfferSoup_2:
	return


Hotel_BuffetTrigger::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 20
	checktrainerflag TRAINER_BUFFET_1
	goto_if 1, Hotel_BuffetTrigger_3
Hotel_BuffetTrigger_1:
	goto_if_set FLAG_BUFFET_COMPLETE, Hotel_BuffetTrigger_13
Hotel_BuffetTrigger_12:
	msgbox BuffetIntro, MSGBOX_DEFAULT
	goto BuffetMultiChoice
	end

Hotel_BuffetTrigger_2:
	goto BuffetComplete
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_3:
	checktrainerflag TRAINER_BUFFET_2
	goto_if 1, Hotel_BuffetTrigger_5
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_5:
	checktrainerflag TRAINER_BUFFET_3
	goto_if 1, Hotel_BuffetTrigger_7
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_7:
	checktrainerflag TRAINER_BUFFET_4
	goto_if 1, Hotel_BuffetTrigger_9
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_9:
	goto_if_unset FLAG_BUFFET_COMPLETE, Hotel_BuffetTrigger_2
	goto Hotel_BuffetTrigger_1

Hotel_BuffetTrigger_13:
	goto BuffetAlreadyCompleted
	goto Hotel_BuffetTrigger_12


BuffetMultiChoice::
	showmoneybox 0, 0
	message BuffetWhatWouldYouHave
	waitmessage
	multichoice 23, 0, MULTI_BUFFET, 0
	switch VAR_RESULT
	case 0, BuffetMultiChoice_3
	case 1, BuffetMultiChoice_4
	case 2, BuffetMultiChoice_5
	case MULTI_B_PRESSED, BuffetMultiChoice_6
BuffetMultiChoice_1:
	end

BuffetMultiChoice_3:
	msgbox ThatWillBe1000, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetMultiChoice_8
BuffetMultiChoice_7:
	goto BuffetDineHere
	goto BuffetMultiChoice_1

BuffetMultiChoice_4:
	goto ExplainBuffetRules
	goto BuffetMultiChoice_1

BuffetMultiChoice_5:
	goto BuffetComeBackLater
	goto BuffetMultiChoice_1

BuffetMultiChoice_6:
	goto BuffetComeBackLater
	goto BuffetMultiChoice_1

BuffetMultiChoice_8:
	goto BuffetComeBackLater
	goto BuffetMultiChoice_7


BuffetDineHere::
	checkmoney 1000
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetDineHere_2
BuffetDineHere_1:
	waitse
	removemoney 1000
	playse SE_SHOP
	updatemoneybox
	waitse
	msgbox EnjoyYourBuffet, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
	cleartrainerflag TRAINER_BUFFET_1
	cleartrainerflag TRAINER_BUFFET_2
	cleartrainerflag TRAINER_BUFFET_3
	cleartrainerflag TRAINER_BUFFET_4
	setflag FLAG_SYSTEM_NOREWARDBATTLES
	goto WalkToFirstTable
	return

BuffetDineHere_2:
	goto BuffetNotEnoughMoney
	goto BuffetDineHere_1


WalkToFirstTable::
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo1stTable
	waitmovement 0
	msgbox BuffetTr1_Intro
	trainerbattle_no_intro TRAINER_BUFFET_1, BuffetTr1_Lose
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToFirstTable_2
WalkToFirstTable_1:
	goto BuffetLost
	return

WalkToFirstTable_2:
	goto WalkToSecondTable
	goto WalkToFirstTable_1


WalkToSecondTable::
	msgbox BuffetTr1_PostBattle
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo2ndTable
	waitmovement 0
	msgbox EatMeal, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToSecondTable_2
WalkToSecondTable_1:
	msgbox BuffetTr2_Intro
	trainerbattle_no_intro TRAINER_BUFFET_2, BuffetTr2_Lose
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToSecondTable_5
WalkToSecondTable_4:
	goto BuffetLost
	return

WalkToSecondTable_2:
	call EatDeliciousMeal
	goto WalkToSecondTable_1

WalkToSecondTable_5:
	goto WalkToThirdTable
	goto WalkToSecondTable_4


WalkToThirdTable::
	msgbox BuffetTr2_PostBattle
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo3rdTable
	waitmovement 0
	goto_if_unset FLAG_TEMP_4, WalkToThirdTable_2
WalkToThirdTable_1:
	msgbox BuffetTr3_Intro
	trainerbattle_no_intro TRAINER_BUFFET_3, BuffetTr3_Lose
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToThirdTable_5
WalkToThirdTable_4:
	goto BuffetLost
	return

WalkToThirdTable_2:
	msgbox EatMeal, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToThirdTable_7
	goto WalkToThirdTable_1

WalkToThirdTable_5:
	goto WalkToFourthTable
	goto WalkToThirdTable_4

WalkToThirdTable_7:
	call EatDeliciousMeal
	goto WalkToThirdTable_1


WalkToFourthTable::
	call BuffetOfferSoup
	msgbox BuffetTr3_PostBattle
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, WalkTo2ndTable
	waitmovement 0
	goto_if_unset FLAG_TEMP_4, WalkToFourthTable_2
WalkToFourthTable_1:
	msgbox BuffetTr4_Intro
	trainerbattle_no_intro TRAINER_BUFFET_4, BuffetTr4_Lose
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WalkToFourthTable_5
WalkToFourthTable_4:
	goto BuffetLost
	return

WalkToFourthTable_2:
	msgbox EatMeal, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, TRUE
	goto_if_eq WalkToFourthTable_7
	goto WalkToFourthTable_1

WalkToFourthTable_5:
	goto BuffetFinale
	goto WalkToFourthTable_4

WalkToFourthTable_7:
	call EatDeliciousMeal
	goto WalkToFourthTable_1


BuffetFinale::
	msgbox BuffetTr4_PostBattle
	closemessage
	playse SE_DING_DONG
	waitse
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 20
	msgbox WinnerComeForward
	closemessage
	delay 20
	setvar VAR_KAOLISLE_HOTEL_STATE, 9
	warpsilent MAP_KAOLISLE_HOTEL_1F, 13, 7
	return


BuffetLost::
	delay 50
	setvar VAR_KAOLISLE_HOTEL_STATE, 5
	warpsilent MAP_KAOLISLE_HOTEL_1F, 13, 7
	return


WalkTo1stTable:
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_faster_right
	step_end

WalkTo2ndTable:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

WalkTo3rdTable:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

BuffetComplete::
	msgbox BuffetCompleted, MSGBOX_DEFAULT
	setvar VAR_KAOLISLE_HOTEL_STATE, 11
	checkitemspace ITEM_LEFTOVERS
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
	compare VAR_RESULT, FALSE
	goto_if_eq BuffetComplete_2
	waitse
	giveitem ITEM_LEFTOVERS
	buffernumberstring STR_VAR_1, 30
	setvar VAR_0x8004, 30
	special GiveFrontierBattlePoints
	playfanfare MUS_OBTAIN_B_POINTS
	message BuffetComplete_Text_0
	waitfanfare
	waitmessage
	msgbox BuffetThankYouForDining, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_BUFFET_COMPLETE
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	release
	end

BuffetComplete_2:
	msgbox NotEnoughRoomLeftovers, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
	release
	end


BuffetLost2::
	msgbox BuffetLost_Text, MSGBOX_DEFAULT
	closemessage
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
	setvar VAR_KAOLISLE_HOTEL_STATE, 7
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	release
	end


ExplainBuffetRules::
	hidemoneybox
	msgbox ExplainBuffetRules_Text, MSGBOX_DEFAULT
	goto BuffetMultiChoice
	return


BuffetComeBackLater::
	hidemoneybox
	msgbox BuffetPleaseComeAgain, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	release
	end


BuffetNotEnoughMoney::
	msgbox BuffetNotEnoughMoney_Text, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	release
	end


BuffetAlreadyCompleted::
	msgbox BuffetAlreadyCompleted_Text, MSGBOX_DEFAULT
	closemessage
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	release
	end


Hotel_BuffetAttempt::
	msgbox Hotel_BuffetAttempt_Text, MSGBOX_NPC
	return


Hotel_FatMan::
	msgbox Hotel_FatMan_Text, MSGBOX_NPC
	end


Hotel_Child::
	msgbox Hotel_Child_Text, MSGBOX_NPC
	end


Hotel_Wife::
	msgbox Hotel_Wife_Text, MSGBOX_NPC
	end


Hotel_Husband::
	msgbox Hotel_Husband_Text, MSGBOX_NPC
	end


Hotel_Tuber::
	msgbox Hotel_Tuber_Text, MSGBOX_NPC
	end


Hotel_BirdTrainer::
	goto_if_set FLAG_HOTEL_FLYINGGEM, Hotel_BirdTrainer_2
	lockall
	faceplayer
	goto_if_set FLAG_TEMP_3, Hotel_BirdTrainer_5
	msgbox Hotel_BirdTrainer_Text, MSGBOX_YESNO
Hotel_BirdTrainer_4:
	compare VAR_RESULT, FALSE
	goto_if_eq Hotel_BirdTrainer_9
	msgbox Hotel_BirdTrainer_LetsDoThis
	trainerbattle_no_intro TRAINER_HOTEL_BIRDKEEPER, Hotel_BirdTrainer_Lose
	msgbox Hotel_BirdTrainer_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_FLYING_GEM
	compare VAR_RESULT, FALSE
	goto_if_eq Hotel_BirdTrainer_12
	giveitem ITEM_FLYING_GEM, 1
	waitse
	waitmessage
	closemessage
	setflag FLAG_HOTEL_FLYINGGEM
	release
	end

Hotel_BirdTrainer_2:
	msgbox Hotel_BirdTrainer_PostBattle, MSGBOX_NPC
	end

Hotel_BirdTrainer_5:
	msgbox Hotel_BirdTrainer_TextShort, MSGBOX_YESNO
	goto Hotel_BirdTrainer_4

Hotel_BirdTrainer_9:
	setflag FLAG_TEMP_3
	msgbox Hotel_BirdTrainer_Decline, MSGBOX_NPC
	end

Hotel_BirdTrainer_12:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


Hotel_Drinker::
	msgbox Hotel_Drinker_Text, MSGBOX_NPC
	end


Hotel_Attendant::
	msgbox Hotel_Attendant_Text, MSGBOX_NPC
	end


Hotel_PrivateParty::
	lockall
	playse SE_PIN
	safefollow
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 20
	msgbox Hotel_PrivateParty_Text, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	release
	end


Hotel_Chef::
	msgbox Hotel_Chef_Text, MSGBOX_NPC
	end


TestScript::
	msgbox TestScript_Text_0, MSGBOX_NPC
	return


BuffetComplete_Text_0:
	.string "Earned {STR_VAR_1} BP!$"

TestScript_Text_0:
	.string "Test$"

Hotel1F_JasmineGoodbye::
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
	.string "Jasmine: …Oh, I think Amphy is also\n"
	.string "trying to cheer you on!\p"
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F} …{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}\n"
	.string "A-anyway, we should be heading out…\p"
	.string "I fear to even imagine the amount of\n"
	.string "work that has accumulated during our\l"
	.string "time away…\p"
	.string "Um… It was nice seeing you again…$"

Hotel1F_LongTimeNoSeeGoodbye::
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
	.string "Please don't look at me…\n"
	.string "Let's just…{PAUSE 0x0F}{PAUSE 0x0F} get this out of the way…$"

BuffetTr1_Lose::
	.string "… … … …$"

BuffetTr1_PostBattle::
	.string "…Are we done?$"

BuffetTr2_Intro::
	.string "Hope you're thirsty, because my\n"
	.string "Water-type Pokémon will wash over you\l"
	.string "like a tsunami!$"

BuffetTr2_Lose::
	.string "My precious Pokémon!$"

BuffetTr2_PostBattle::
	.string "Only reason I lost was due to terrain\n"
	.string "disadvantage.\p"
	.string "In water, my Pokémon are invincible!$"

BuffetTr3_Intro::
	.string "Hope you're hungry for a beating\n"
	.string "because I won't be holding back!$"

BuffetTr3_Lose::
	.string "Agh! I spilled my soup!$"

BuffetTr3_PostBattle::
	.string "Food tastes better when shared!\n"
	.string "Enjoy the soup!$"

BuffetTr4_Intro::
	.string "Alola! I traveled from far to get\n"
	.string "here, so I hope you can satisfy\l"
	.string "my expectations!$"

BuffetTr4_Lose::
	.string "Well, you certainly didn't\n"
	.string "disappoint…$"

BuffetTr4_PostBattle::
	.string "When I first arrived here, I was a bit\n"
	.string "crestfallen when I couldn't find any\l"
	.string "place that sells Malasadas.\p"
	.string "Had I gone for the safe and familiar\n"
	.string "option, I might have completely missed\l"
	.string "out on this great buffet!$"

HaveSomeSoup::
	.string "You really shook things up!\n"
	.string "How about we celebrate with a bowl\l"
	.string "of special “Berry Blend Soup”?\l"
	.string "Your Pokémon will love it!$"

EatMeal::
	.string "Would you like to enjoy a meal with\n"
	.string "your Pokémon, healing the entire team?\p"
	.string "This can be done only once per attempt.$"

WinnerComeForward::
	.string "Will our latest challenger please\n"
	.string "come to the entrance?$"

NotEnoughRoomLeftovers::
	.string "I'm sorry, but it looks like you don't\n"
	.string "have enough room in your bag.\p"
	.string "You need to clear some room first…$"

BuffetLost_Text::
	.string "Thank you for participating in the\n"
	.string "Battle Buffet!\p"
	.string "We await your challenge on\n"
	.string "another occasion!$"

BuffetIntro::
	.string "Hello and welcome to the Battle\n"
	.string "Buffet!\p"
	.string "Our restaurant's menu is like\n"
	.string "no other, attracting experienced\l"
	.string "Pokémon trainers from all over\l"
	.string "the world!\p"
	.string "If you'd like to dine here, there are\n"
	.string "certain rules you must follow.$"

BuffetWhatWouldYouHave::
	.string "How may I serve you?$"

EnjoyYourBuffet::
	.string "Thank you very much!\p"
	.string "When you're finished, come back\n"
	.string "here to obtain your fabulous prize!\p"
	.string "Enjoy your buffet!$"

ExplainBuffetRules_Text::
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
	.string "Thank you very much!\n"
	.string "Please come again!$"

BuffetThankYouForDining::
	.string "Thank you for partaking in the\n"
	.string "Battle Buffet!\l"
	.string "We hope you enjoyed the experience!$"

BuffetNotEnoughMoney_Text::
	.string "I'm sorry, but you don't have enough\n"
	.string "money to partake in the Battle Buffet…$"

BuffetCompleted::
	.string "Oh wow, it seems like we have\n"
	.string "a winner!\p"
	.string "For your peerless display of skill,\n"
	.string "you deserve a fabulous prize!$"

BuffetAlreadyCompleted_Text::
	.string "I'm sorry, but you have already\n"
	.string "competed in the Battle Buffet.\p"
	.string "It may take a while until we find\n"
	.string "new and stronger opponents for you.$"

ThatWillBe1000::
	.string "Before you enter, I must warn you\n"
	.string "that the trainers here are extremely\l"
	.string "powerful.\p"
	.string "Would you still like to enter the\n"
	.string "dining hall? An entry costs ¥1000.$"

Hotel_BuffetAttempt_Text::
	.string "I tried challenging the Battle\n"
	.string "Buffet and failed miserably.\l"
	.string "Those trainers are tough!$"

Hotel_FatMan_Text::
	.string "How do you like my Pokémon?\p"
	.string "Many say they don't see the appeal\n"
	.string "but for me he is perfect.$"

Hotel_Child_Text::
	.string "Swim swim swim swim swim swim swim!$"

Hotel_Wife_Text::
	.string "Our little boy has been waiting to\n"
	.string "get to the beach all day.$"

Hotel_Husband_Text::
	.string "I can't wait to relax at the beach.\p"
	.string "We'll be heading out as soon as\n"
	.string "our friends arrive.$"

Hotel_Tuber_Text::
	.string "We're going to the beach!\p"
	.string "I've never swam before and feel a bit\n"
	.string "scared but I trust my Pokémon will\l"
	.string "keep me safe!$"

Hotel_BirdTrainer_Text::
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
	.string "Have a battle against me and my\n"
	.string "bird Pokémon!$"

Hotel_BirdTrainer_Decline::
	.string "Oh, what a shame!\p"
	.string "I'll be here for a while, so come back\n"
	.string "if you change your mind!$"

Hotel_BirdTrainer_LetsDoThis::
	.string "Thanks! Let's do this then!\n"
	.string "No need to hold back when facing me!$"

Hotel_BirdTrainer_Lose::
	.string "Oh come on now!\n"
	.string "Do you want me to sulk?$"

Hotel_BirdTrainer_PostBattle::
	.string "Thanks for the fun battle!\n"
	.string "It'll be a great memento of my journey!$"

Hotel_BirdTrainer_Reward::
	.string "Phew! You are STRONG!\n"
	.string "That was surprising!\p"
	.string "Maybe I was a bit hasty challenging\n"
	.string "you like that. You don't seem like\l"
	.string "a regular rookie!\p"
	.string "If you'd like, why don't you have your\n"
	.string "Pokémon hold on to this Flying Gem?\l"
	.string "It could make your moves even stronger!$"

Hotel_Drinker_Text::
	.string "You should consider picking up a\n"
	.string "Fresh Water or two from the\l"
	.string "vending machine.\l"
	.string "Your Pokémon will guzzle it right down!$"

Hotel_Attendant_Text::
	.string "Welcome to the Kaolisle Grand Resort.\p"
	.string "We're currently all booked up,\n"
	.string "but feel free to enjoy the ambiance.$"

Hotel_PrivateParty_Text::
	.string "I'm sorry, but this room\n"
	.string "is reserved for a private party.$"

Hotel_Chef_Text::
	.string "Our staff thanks you for partaking\n"
	.string "in the Battle Buffet.\p"
	.string "Feel free to grab some food and\n"
	.string "drinks from the table.\p"
	.string "Do note that taking the food outside\n"
	.string "the buffet is prohibited.$"
