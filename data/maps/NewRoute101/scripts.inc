NewRoute101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_SYS_POKEDEX_GET, NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	resetweather
	return

NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	setweather WEATHER_RAIN
	doweather
	return


Route1_Youngster::
	trainerbattle_single TRAINER_R1_YOUNGSTER, Route1_Text_YoungsterIntro, Route1_Text_YoungsterDefeated
	msgbox Route1_Text_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_Tuber::
	trainerbattle_single TRAINER_R1_TUBER, Route1_Text_TuberIntro, Route1_Text_TuberDefeated
	msgbox Route1_Text_TuberPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_BugCatcher::
	trainerbattle_single TRAINER_R1_BUG_CATCHER, Route1_Text_BugCatcherIntro, Route1_Text_BugCatcherDefeated
	msgbox Route1_Text_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_Fisher::
	trainerbattle_single TRAINER_R1_FISHER, Route1_Text_FisherIntro, Route1_Text_FisherDefeated
	msgbox Route1_Text_FisherPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_Lass::
	goto_if_unset FLAG_SYS_POKEDEX_GET, Route1_Lass_1
	msgbox Route1_Trainers, MSGBOX_NPC
	return

Route1_Lass_1:
	msgbox Route1_NoTrainers, MSGBOX_NPC
	return


Route1_CoolTrainer::
	checktrainerflag TRAINER_R1_COOLTRAINER
	goto_if 1, Route1_CoolTrainer_1
	checktrainerflag TRAINER_R1_YOUNGSTER
	goto_if 0, Route1_CoolTrainer_2
	checktrainerflag TRAINER_R1_FISHER
	goto_if 0, Route1_CoolTrainer_2
	checktrainerflag TRAINER_R1_BUG_CATCHER
	goto_if 0, Route1_CoolTrainer_2
	checktrainerflag TRAINER_R1_TUBER
	goto_if 0, Route1_CoolTrainer_2
	goto Route1_CoolTrainerEligible
	return

Route1_CoolTrainer_1:
	msgbox Route1_CoolTrainer_Text_0, MSGBOX_NPC
	return

Route1_CoolTrainer_2:
	msgbox Route1_CoolTrainer_Text_1, MSGBOX_NPC
	return


Route1_CoolTrainerEligible::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_2, Route1_CoolTrainerEligible_2
	msgbox Route1_CoolTrainer_Intro_Short, MSGBOX_YESNO
Route1_CoolTrainerEligible_1:
	compare VAR_RESULT, YES
	goto_if_eq Route1_CoolTrainerEligible_5
	setflag FLAG_TEMP_2
	msgbox Route1_CoolTrainerEligible_Text_1, MSGBOX_NPC
	return

Route1_CoolTrainerEligible_2:
	msgbox Route1_CoolTrainer_Intro, MSGBOX_YESNO
	goto Route1_CoolTrainerEligible_1

Route1_CoolTrainerEligible_5:
	msgbox Route1_CoolTrainerEligible_Text_0
	trainerbattle_no_intro TRAINER_R1_COOLTRAINER, Route1_Text_CoolTrainerDefeated
	goto Route1_CoolTrainerPostBattle
	return


Route1_CoolTrainerPostBattle::
	msgbox Route1_CoolTrainerReward
	giveitem ITEM_EXP_SHARE
	msgbox WW_CoolTrainerExplainReward
	addbp 10
	call BpReward
	release
	return


BpReward::
	playfanfare MUS_OBTAIN_B_POINTS
	message BpReward_Text_0
	waitfanfare
	waitmessage
	closemessage
	goto_if_unset FLAG_INTRO_TO_BP, BpReward_2
BpReward_1:
	return

BpReward_2:
	msgbox ExplainBP
	setflag FLAG_INTRO_TO_BP
	goto BpReward_1


Route1_CoolTrainer_Text_0:
	.string "That was a fine battle.$"

Route1_CoolTrainer_Text_1:
	.string "I'm looking for strong trainers.\nOnly the best of the best will suffice.$"

Route1_CoolTrainerEligible_Text_0:
	.string "Let's do this!$"

Route1_CoolTrainerEligible_Text_1:
	.string "I see…\pWell, let me know if you change\nyour mind.\lI'll be here.$"

BpReward_Text_0:
	.string "Earned {STR_VAR_1} BP!$"

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
	.string "I haven't seen a single\nbug type Pokémon here.\lI may need to try another spot.$"

Route1_Text_FisherIntro::
	.string "I like fishing but\nI like Pokémon battles just as much!$"

Route1_Text_FisherDefeated::
	.string "I like to battle, but that doesn't\nmean I'm good at it…$"

Route1_Text_FisherPostBattle::
	.string "Wait till I catch a Gyarados!$"

Route1_Trainers::
	.string "Looks like all the people came back\n"
	.string "as soon as the rain stopped.\p"
	.string "These people look like some pretty\n"
	.string "serious trainers.$"

Route1_NoTrainers::
	.string "Normally this place is chock-full\n"
	.string "of trainers.\p"
	.string "I guess people don't want to\n"
	.string "train in the rain.$"

Route1_CoolTrainer_Intro::
	.string "I see you've defeated all\n"
	.string "the other trainers in this area.\p"
	.string "That means you are a very\n"
	.string "strong trainer.\p"
	.string "Would you be interested in\n"
	.string "a Pokémon Battle?\p"
	.string "I warn you, I'm no pushover.$"

Route1_CoolTrainer_Intro_Short::
	.string "Are you ready for a duel?$"

Route1_Text_CoolTrainerDefeated::
	.string "Truly a magnificent battle!$"

Route1_CoolTrainerReward::
	.string "It's rare to meet someone so strong.\nHere, I want you to have this.$"
