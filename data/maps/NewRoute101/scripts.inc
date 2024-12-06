NewRoute101_MapScripts::
# 2 "data/maps/NewRoute101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NewRoute101/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/NewRoute101/scripts.pory"
	resetweather
	return

NewRoute101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/NewRoute101/scripts.pory"
	setflag FLAG_TEMP_1
# 5 "data/maps/NewRoute101/scripts.pory"
	setweather WEATHER_RAIN
# 6 "data/maps/NewRoute101/scripts.pory"
	doweather
	return


Route1_Youngster::
# 15 "data/maps/NewRoute101/scripts.pory"
	trainerbattle_single TRAINER_R1_YOUNGSTER, Route1_Text_YoungsterIntro, Route1_Text_YoungsterDefeated
# 16 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_Text_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_Tuber::
# 30 "data/maps/NewRoute101/scripts.pory"
	trainerbattle_single TRAINER_R1_TUBER, Route1_Text_TuberIntro, Route1_Text_TuberDefeated
# 31 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_Text_TuberPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_BugCatcher::
# 45 "data/maps/NewRoute101/scripts.pory"
	trainerbattle_single TRAINER_R1_BUG_CATCHER, Route1_Text_BugCatcherIntro, Route1_Text_BugCatcherDefeated
# 46 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_Text_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_Fisher::
# 59 "data/maps/NewRoute101/scripts.pory"
	trainerbattle_single TRAINER_R1_FISHER, Route1_Text_FisherIntro, Route1_Text_FisherDefeated
# 60 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_Text_FisherPostBattle, MSGBOX_AUTOCLOSE
	end


Route1_Lass::
# 74 "data/maps/NewRoute101/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Route1_Lass_1
# 78 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_Trainers, MSGBOX_NPC
	return

Route1_Lass_1:
# 75 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_NoTrainers, MSGBOX_NPC
	return


Route1_CoolTrainer::
# 96 "data/maps/NewRoute101/scripts.pory"
	checktrainerflag TRAINER_R1_COOLTRAINER
	goto_if 1, Route1_CoolTrainer_1
# 99 "data/maps/NewRoute101/scripts.pory"
	checktrainerflag TRAINER_R1_YOUNGSTER
	goto_if 0, Route1_CoolTrainer_2
# 100 "data/maps/NewRoute101/scripts.pory"
	checktrainerflag TRAINER_R1_FISHER
	goto_if 0, Route1_CoolTrainer_2
# 101 "data/maps/NewRoute101/scripts.pory"
	checktrainerflag TRAINER_R1_BUG_CATCHER
	goto_if 0, Route1_CoolTrainer_2
# 102 "data/maps/NewRoute101/scripts.pory"
	checktrainerflag TRAINER_R1_TUBER
	goto_if 0, Route1_CoolTrainer_2
# 106 "data/maps/NewRoute101/scripts.pory"
	goto Route1_CoolTrainerEligible
	return

Route1_CoolTrainer_1:
# 97 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_CoolTrainer_Text_0, MSGBOX_NPC
	return

Route1_CoolTrainer_2:
# 103 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_CoolTrainer_Text_1, MSGBOX_NPC
	return


Route1_CoolTrainerEligible::
# 111 "data/maps/NewRoute101/scripts.pory"
	lock
# 112 "data/maps/NewRoute101/scripts.pory"
	faceplayer
# 113 "data/maps/NewRoute101/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route1_CoolTrainerEligible_2
# 117 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_CoolTrainer_Intro_Short, MSGBOX_YESNO
Route1_CoolTrainerEligible_1:
# 119 "data/maps/NewRoute101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_CoolTrainerEligible_5
# 125 "data/maps/NewRoute101/scripts.pory"
	setflag FLAG_TEMP_2
# 126 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_CoolTrainerEligible_Text_1, MSGBOX_NPC
	return

Route1_CoolTrainerEligible_2:
# 114 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_CoolTrainer_Intro, MSGBOX_YESNO
	goto Route1_CoolTrainerEligible_1

Route1_CoolTrainerEligible_5:
# 120 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_CoolTrainerEligible_Text_0
# 121 "data/maps/NewRoute101/scripts.pory"
	trainerbattle_no_intro TRAINER_R1_COOLTRAINER, Route1_Text_CoolTrainerDefeated
# 122 "data/maps/NewRoute101/scripts.pory"
	goto Route1_CoolTrainerPostBattle
	return


Route1_CoolTrainerPostBattle::
# 148 "data/maps/NewRoute101/scripts.pory"
	msgbox Route1_CoolTrainerReward
# 149 "data/maps/NewRoute101/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 150 "data/maps/NewRoute101/scripts.pory"
	msgbox WW_CoolTrainerExplainReward
# 151 "data/maps/NewRoute101/scripts.pory"
	addbp 10
# 152 "data/maps/NewRoute101/scripts.pory"
	call BpReward
# 153 "data/maps/NewRoute101/scripts.pory"
	release
	return


BpReward::
# 157 "data/maps/NewRoute101/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 158 "data/maps/NewRoute101/scripts.pory"
	message BpReward_Text_0
# 159 "data/maps/NewRoute101/scripts.pory"
	waitfanfare
# 160 "data/maps/NewRoute101/scripts.pory"
	waitmessage
# 161 "data/maps/NewRoute101/scripts.pory"
	closemessage
# 162 "data/maps/NewRoute101/scripts.pory"
	goto_if_unset FLAG_INTRO_TO_BP, BpReward_2
BpReward_1:
	return

BpReward_2:
# 163 "data/maps/NewRoute101/scripts.pory"
	msgbox ExplainBP
# 164 "data/maps/NewRoute101/scripts.pory"
	setflag FLAG_INTRO_TO_BP
	goto BpReward_1


Route1_CoolTrainer_Text_0:
# 97 "data/maps/NewRoute101/scripts.pory"
	.string "That was a fine battle.$"

Route1_CoolTrainer_Text_1:
# 103 "data/maps/NewRoute101/scripts.pory"
	.string "I'm looking for strong trainers.\nOnly the best of the best will suffice.$"

Route1_CoolTrainerEligible_Text_0:
# 120 "data/maps/NewRoute101/scripts.pory"
	.string "Let's do this!$"

Route1_CoolTrainerEligible_Text_1:
# 126 "data/maps/NewRoute101/scripts.pory"
	.string "I see…\pWell, let me know if you change\nyour mind.\lI'll be here.$"

BpReward_Text_0:
# 158 "data/maps/NewRoute101/scripts.pory"
	.string "Earned {STR_VAR_1} BP!$"

Route1_Text_YoungsterIntro::
# 19 "data/maps/NewRoute101/scripts.pory"
	.string "Have you spotted any rare Pokémon?$"

Route1_Text_YoungsterDefeated::
# 22 "data/maps/NewRoute101/scripts.pory"
	.string "I need to catch more Pokémon…$"

Route1_Text_YoungsterPostBattle::
# 25 "data/maps/NewRoute101/scripts.pory"
	.string "I'm looking for a Pichu.\pMy friend told me he saw one\non this route the other day.$"

Route1_Text_TuberIntro::
# 34 "data/maps/NewRoute101/scripts.pory"
	.string "I put my Pokémon on the treadmill\nto make it the fastest in the world!$"

Route1_Text_TuberDefeated::
# 37 "data/maps/NewRoute101/scripts.pory"
	.string "I guess you need more\nthan just speed…$"

Route1_Text_TuberPostBattle::
# 40 "data/maps/NewRoute101/scripts.pory"
	.string "I will train my Piplup so hard\nthat it can punch through a wall!$"

Route1_Text_BugCatcherIntro::
# 49 "data/maps/NewRoute101/scripts.pory"
	.string "I'm going to become the strongest\nbug type trainer ever!$"

Route1_Text_BugCatcherDefeated::
# 52 "data/maps/NewRoute101/scripts.pory"
	.string "Looks like I still\nhave some ways to go…$"

Route1_Text_BugCatcherPostBattle::
# 55 "data/maps/NewRoute101/scripts.pory"
	.string "I haven't seen a single\nbug type Pokémon here.\lI may need to try another spot.$"

Route1_Text_FisherIntro::
# 63 "data/maps/NewRoute101/scripts.pory"
	.string "I like fishing but\nI like Pokémon battles just as much!$"

Route1_Text_FisherDefeated::
# 66 "data/maps/NewRoute101/scripts.pory"
	.string "I like to battle, but that doesn't\nmean I'm good at it…$"

Route1_Text_FisherPostBattle::
# 69 "data/maps/NewRoute101/scripts.pory"
	.string "Wait till I catch a Gyarados!$"

Route1_Trainers::
# 81 "data/maps/NewRoute101/scripts.pory"
	.string "Looks like all the people came back\n"
	.string "as soon as the rain stopped.\p"
	.string "These people look like some pretty\n"
	.string "serious trainers.$"

Route1_NoTrainers::
# 87 "data/maps/NewRoute101/scripts.pory"
	.string "Normally this place is chock-full\n"
	.string "of trainers.\p"
	.string "I guess people don't want to\n"
	.string "train in the rain.$"

Route1_CoolTrainer_Intro::
# 130 "data/maps/NewRoute101/scripts.pory"
	.string "I see you've defeated all\n"
	.string "the other trainers in this area.\p"
	.string "That means you are a very\n"
	.string "strong trainer.\p"
	.string "Would you be interested in\n"
	.string "a Pokémon Battle?\p"
	.string "I warn you, I'm no pushover.$"

Route1_CoolTrainer_Intro_Short::
# 139 "data/maps/NewRoute101/scripts.pory"
	.string "Are you ready for a duel?$"

Route1_Text_CoolTrainerDefeated::
# 143 "data/maps/NewRoute101/scripts.pory"
	.string "Truly a magnificent battle!$"

Route1_CoolTrainerReward::
# 169 "data/maps/NewRoute101/scripts.pory"
	.string "It's rare to meet someone so strong.\nHere, I want you to have this.$"
