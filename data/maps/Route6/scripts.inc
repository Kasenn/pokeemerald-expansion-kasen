Route6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag
	.byte 0


ClearShinyFlag::
	goto_if_set FLAG_DEVON_UNDER_ATTACK, ClearShinyFlag_2
ClearShinyFlag_1:
	clearflag FLAG_INCREASED_SHINY_ODDS
	clearflag FLAG_DESERT_STEPS
	release
	end

ClearShinyFlag_2:
	setflag FLAG_DEVON_RESCUED
	goto ClearShinyFlag_1


Route6_HoneyTree::
	lockall
	checkitem ITEM_HONEY, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Route6_HoneyTree_1
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	waitmessage
	closemessage
	release
	end

Route6_HoneyTree_1:
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Route6_HoneyTree_4
	waitmessage
	closemessage
	release
	end

Route6_HoneyTree_4:
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
	waitmessage
	closemessage
	removeitem ITEM_HONEY, 1
	random 10
	compare VAR_RESULT, 0
	goto_if_eq Route6_HoneyTree_8
Route6_HoneyTree_7:
	compare VAR_RESULT, 1
	goto_if_eq Route6_HoneyTree_11
Route6_HoneyTree_10:
	compare VAR_RESULT, 2
	goto_if_eq Route6_HoneyTree_14
Route6_HoneyTree_13:
	compare VAR_RESULT, 3
	goto_if_eq Route6_HoneyTree_17
Route6_HoneyTree_16:
	compare VAR_RESULT, 4
	goto_if_eq Route6_HoneyTree_20
Route6_HoneyTree_19:
	compare VAR_RESULT, 5
	goto_if_eq Route6_HoneyTree_23
Route6_HoneyTree_22:
	compare VAR_RESULT, 6
	goto_if_eq Route6_HoneyTree_26
Route6_HoneyTree_25:
	compare VAR_RESULT, 7
	goto_if_eq Route6_HoneyTree_29
Route6_HoneyTree_28:
	compare VAR_RESULT, 8
	goto_if_eq Route6_HoneyTree_32
Route6_HoneyTree_31:
	compare VAR_RESULT, 9
	goto_if_eq Route6_HoneyTree_35
Route6_HoneyTree_34:
	dowildbattle
	release
	end

Route6_HoneyTree_8:
	setwildbattlelevelrange SPECIES_KOMALA, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_7

Route6_HoneyTree_11:
	setwildbattlelevelrange SPECIES_KOMALA, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_10

Route6_HoneyTree_14:
	setwildbattlelevelrange SPECIES_KOMALA, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_13

Route6_HoneyTree_17:
	setwildbattlelevelrange SPECIES_KOMALA, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_16

Route6_HoneyTree_20:
	setwildbattlelevelrange SPECIES_TEDDIURSA, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_19

Route6_HoneyTree_23:
	setwildbattlelevelrange SPECIES_TEDDIURSA, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_22

Route6_HoneyTree_26:
	setwildbattlelevelrange SPECIES_TEDDIURSA, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_25

Route6_HoneyTree_29:
	setwildbattlelevelrange SPECIES_HERACROSS, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_28

Route6_HoneyTree_32:
	setwildbattlelevelrange SPECIES_HERACROSS, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_31

Route6_HoneyTree_35:
	setwildbattlelevelrange SPECIES_MUNCHLAX, 21, ITEM_NONE, SPECIES_NONE, 24
	goto Route6_HoneyTree_34


Route6_Movement_PlayerFall:
	lock_anim
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Route6_Trainer1_Ranger_M::
	trainerbattle_single TRAINER_R6_TR1_RANGER_M, Route6_Trainer1_Ranger_M_Intro, Route6_Trainer1_Ranger_M_Defeat
	msgbox Route6_Trainer1_Ranger_M_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer2_PokeFan_F::
	trainerbattle_single TRAINER_R6_TR2_POKEFAN_F, Route6_Trainer2_PokeFan_F_Intro, Route6_Trainer2_PokeFan_F_Defeat
	msgbox Route6_Trainer2_PokeFan_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer3_Camper_F::
	trainerbattle_single TRAINER_R6_TR3_CAMPER_F, Route6_Trainer3_Camper_F_Intro, Route6_Trainer3_Camper_F_Defeat
	msgbox Route6_Trainer3_Camper_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer4_Camper_M1::
	trainerbattle_single TRAINER_R6_TR4_CAMPER_M1, Route6_Trainer4_Camper_M1_Intro, Route6_Trainer4_Camper_M1_Defeat
	msgbox Route6_Trainer4_Camper_M1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer5_Hiker::
	trainerbattle_single TRAINER_R6_TR5_HIKER, Route6_Trainer5_Hiker_Intro, Route6_Trainer5_Hiker_Defeat
	msgbox Route6_Trainer5_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer6_Camper_M2::
	trainerbattle_single TRAINER_R6_TR6_CAMPER_M2, Route6_Trainer6_Camper_M2_Intro, Route6_Trainer6_Camper_M2_Defeat
	msgbox Route6_Trainer6_Camper_M2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer7_Kindler::
	trainerbattle_single TRAINER_R6_TR7_KINDLER, Route6_Trainer7_Kindler_Intro, Route6_Trainer7_Kindler_Defeat
	msgbox Route6_Trainer7_Kindler_PostBattle, MSGBOX_AUTOCLOSE
	end


ScorchedDesertBetaBlock::
	lockall
	msgbox StillInBeta, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, BetaMoveLeft
	waitmovement 0
	releaseall
	end


BetaMoveLeft:
	walk_left
	walk_left
	step_end

Route6_Trainer1_Ranger_M_Intro::
	.string "Are you planning to explore the desert?\n"
	.string "Let me see if your Pokémon are ready!$"

Route6_Trainer1_Ranger_M_Defeat::
	.string "Your Pokémon are strong.\n"
	.string "You must be a great trainer.$"

Route6_Trainer1_Ranger_M_PostBattle::
	.string "There's a constant sandstorm raging\n"
	.string "at the desert. You're going to need\l"
	.string "proper equipment if you plan on\l"
	.string "marching ahead.$"

Route6_Trainer2_PokeFan_F_Intro::
	.string "Do you love Pokémon?\n"
	.string "What about Pokémon battles?$"

Route6_Trainer2_PokeFan_F_Defeat::
	.string "Oh my…$"

Route6_Trainer2_PokeFan_F_PostBattle::
	.string "Your Pokémon are strong and healthy.\n"
	.string "You must really love them.$"

Route6_Trainer3_Camper_F_Intro::
	.string "I'm full of pep!\n"
	.string "And my Pokémon are peppy, too!$"

Route6_Trainer3_Camper_F_Defeat::
	.string "My Pokémon lost their pep…$"

Route6_Trainer3_Camper_F_PostBattle::
	.string "When I see a trainer with a lot of pep,\n"
	.string "I just can't help challenging them.$"

Route6_Trainer4_Camper_M1_Intro::
	.string "I heard there are fossils to be found\n"
	.string "in the desert. Where could they be?$"

Route6_Trainer4_Camper_M1_Defeat::
	.string "I came up short…$"

Route6_Trainer4_Camper_M1_PostBattle::
	.string "If they can find fossils in the desert,\n"
	.string "it must have been able to support life\l"
	.string "a long time ago.$"

Route6_Trainer5_Hiker_Intro::
	.string "Show me how much you've toughened\n"
	.string "your Pokémon.$"

Route6_Trainer5_Hiker_Defeat::
	.string "I see you've toughened them\n"
	.string "considerably.$"

Route6_Trainer5_Hiker_PostBattle::
	.string "Pokémon and trainers learn much\n"
	.string "through battling.\p"
	.string "What's important is to never give up,\n"
	.string "even if you lose.$"

Route6_Trainer6_Camper_M2_Intro::
	.string "I'm waiting for a friend.\n"
	.string "Let's have a Pokémon battle\l"
	.string "to pass the time!$"

Route6_Trainer6_Camper_M2_Defeat::
	.string "Not fair! I was distracted by\n"
	.string "some sand in my shoe!$"

Route6_Trainer6_Camper_M2_PostBattle::
	.string "I don't like sand.\n"
	.string "It's coarse, rough, irritating,\l"
	.string "and it gets everywhere.$"

Route6_Trainer7_Kindler_Intro::
	.string "The desert sand is hot,\n"
	.string "but not as hot as my Pokémon!$"

Route6_Trainer7_Kindler_Defeat::
	.string "Guess I couldn't handle the heat…$"

Route6_Trainer7_Kindler_PostBattle::
	.string "The desert is not great for my\n"
	.string "fire-type Pokémon.\p"
	.string "There are a lot of ground-types out\n"
	.string "there which are very strong against\l"
	.string "fire-type Pokémon.$"

StillInBeta::
	.string "So you got the Go-Goggles?\n"
	.string "That's great!\p"
	.string "Normally you'd be able to enter the\n"
	.string "desert but it's nowhere close to being\l"
	.string "finished so I can't let you pass.$"
