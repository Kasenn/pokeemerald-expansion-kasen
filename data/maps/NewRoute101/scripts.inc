NewRoute101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_Weather
	.byte 0


Route1_Weather::
	goto_if_unset FLAG_SYS_POKEDEX_GET, Route1_Weather_1
	resetweather
	return

Route1_Weather_1:
	setweather WEATHER_RAIN
	doweather
	return


Route1_Youngster::
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, Route1_Text_YoungsterIntro, Route1_Text_YoungsterDefeated
	msgbox Route1_Text_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route1_Tuber::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route1_Text_TuberIntro, Route1_Text_TuberDefeated
	msgbox Route1_Text_TuberPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route1_BugCatcher::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route1_Text_BugCatcherIntro, Route1_Text_BugCatcherDefeated
	msgbox Route1_Text_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route1_CoolTrainer::
	lockall
	faceplayer
	goto_if_set FLAG_ROUTE1_COOLTRAINERREWARD, Route1_CoolTrainer_1
	checktrainerflag TRAINER_GRUNT_RUSTURF_TUNNEL
	goto_if 0, Route1_CoolTrainer_2
	checktrainerflag TRAINER_GRUNT_WEATHER_INST_1
	goto_if 0, Route1_CoolTrainer_2
	checktrainerflag TRAINER_GRUNT_WEATHER_INST_2
	goto_if 0, Route1_CoolTrainer_2
	checktrainerflag TRAINER_GRUNT_WEATHER_INST_3
	goto_if 0, Route1_CoolTrainer_2
	goto Route1_CoolTrainerEligible
	return

Route1_CoolTrainer_1:
	msgbox Route1_CoolTrainer_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end

Route1_CoolTrainer_2:
	msgbox Route1_CoolTrainer_Text_1
	waitmessage
	closemessage
	release
	end


Route1_CoolTrainerEligible::
	lockall
	faceplayer
	goto_if_unset FLAG_ROUTE1_COOLTRAINER, Route1_CoolTrainerEligible_1
	msgbox Route1_CoolTrainerEligible_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route1_CoolTrainerEligible_8
	compare VAR_RESULT, NO
	goto_if_eq Route1_CoolTrainerEligible_12
	return

Route1_CoolTrainerEligible_1:
	setflag FLAG_ROUTE1_COOLTRAINER
	msgbox Route1_CoolTrainerEligible_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route1_CoolTrainerEligible_5
	compare VAR_RESULT, NO
	goto_if_eq Route1_CoolTrainerEligible_10
	return

Route1_CoolTrainerEligible_5:
	msgbox Route1_CoolTrainerEligible_Text_1
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, Route1_Text_CoolTrainerDefeated
	goto Route1_CoolTrainerPostBattle
	end

Route1_CoolTrainerEligible_8:
	msgbox Route1_CoolTrainerEligible_Text_1
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, Route1_Text_CoolTrainerDefeated
	goto Route1_CoolTrainerPostBattle
	end

Route1_CoolTrainerEligible_10:
	msgbox Route1_CoolTrainerEligible_Text_2
	waitmessage
	closemessage
	release
	end

Route1_CoolTrainerEligible_12:
	msgbox Route1_CoolTrainerEligible_Text_2
	waitmessage
	closemessage
	release
	end


Route1_CoolTrainerPostBattle::
	msgbox Route1_CoolTrainerReward, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	msgbox WW_CoolTrainerExplainReward, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox Route1_CoolTrainerPostBattle_Text_0, MSGBOX_DEFAULT
	waitfanfare
	goto_if_unset FLAG_INTRO_TO_BP, Route1_CoolTrainerPostBattle_2
Route1_CoolTrainerPostBattle_1:
	setflag FLAG_ROUTE1_COOLTRAINERREWARD
	setflag FLAG_INTRO_TO_BP
	waitmessage
	closemessage
	call Route1_GIVEBP
	release
	end

Route1_CoolTrainerPostBattle_2:
	msgbox ExplainBP, MSGBOX_DEFAULT
	goto Route1_CoolTrainerPostBattle_1


Route1_Fisher::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route1_Text_FisherIntro, Route1_Text_FisherDefeated
	msgbox Route1_Text_FisherPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route1_Lass::
	lockall
	faceplayer
	goto_if_set FLAG_ROUTE1_STATE, Route1_Lass_2
	msgbox Route1_Lass_Text_1
Route1_Lass_1:
	waitmessage
	closemessage
	release
	end

Route1_Lass_2:
	msgbox Route1_Lass_Text_0
	goto Route1_Lass_1


Route1_TM03::
	finditem ITEM_TM03
	return


Route1_GIVEBP::
	buffernumberstring STR_VAR_1, 10
	setvar VAR_0x8004, 10
	special GiveFrontierBattlePoints
	return


Route1_CoolTrainer_Text_0:
	.string "That was a fine battle.$"

Route1_CoolTrainer_Text_1:
	.string "I'm looking for strong trainers.\nOnly the best of the best will suffice.$"

Route1_CoolTrainerEligible_Text_0:
	.string "I see you've defeated all\nthe other trainers in this area.\pThat means you are a very\nstrong trainer.\pWould you be interested in\na Pokémon Battle?\pI warn you, I'm no pushover.$"

Route1_CoolTrainerEligible_Text_1:
	.string "Let's do this!$"

Route1_CoolTrainerEligible_Text_2:
	.string "I see…\pWell, let me know if you change\nyour mind.\lI'll be here.$"

Route1_CoolTrainerEligible_Text_3:
	.string "Are you ready for a duel?$"

Route1_CoolTrainerPostBattle_Text_0:
	.string "Earned 10 BP!$"

Route1_Lass_Text_0:
	.string "Normally this place is chock-full\nof trainers.\pI guess people don't want to\ntrain in the rain.$"

Route1_Lass_Text_1:
	.string "Looks like all the people came back\nas soon as the rain stopped.\pThese people look like some pretty\nserious trainers.$"

Route1_Text_YoungsterIntro::
	.string "Have you spotted any rare Pokémon?$"

Route1_Text_YoungsterDefeated::
	.string "I need to catch more Pokémon…$"

Route1_Text_YoungsterPostBattle::
	.string "I'm looking for a Pichu.\pMy friend told me he saw one\non this route the other day.$"

Route1_Text_TuberIntro::
	.string "I put my Pokémon on the treadmill\nto make it the fastest in the world!$"

Route1_Text_TuberDefeated::
	.string "I guess you need more\nthan just speed…$"

Route1_Text_TuberPostBattle::
	.string "I will train my Piplup so hard\nthat it can punch through a wall!$"

Route1_Text_BugCatcherIntro::
	.string "I'm going to become the strongest\nbug type trainer ever!$"

Route1_Text_BugCatcherDefeated::
	.string "Looks like I still\nhave some ways to go…$"

Route1_Text_BugCatcherPostBattle::
	.string "I haven't seen a single\nbug type Pokémon here.\lI may need to switch a spot.$"

Route1_Text_CoolTrainerDefeated::
	.string "Truly a magnificent battle!$"

Route1_CoolTrainerReward::
	.string "It's rare to meet someone so strong.\nHere, I want you to have this.$"

Route1_Text_FisherIntro::
	.string "I like fishing but\nI like Pokémon battles just as much!$"

Route1_Text_FisherDefeated::
	.string "I like to battle, but that doesn't\nmean I'm good at it…$"

Route1_Text_FisherPostBattle::
	.string "Wait till I catch a Gyarados!$"
