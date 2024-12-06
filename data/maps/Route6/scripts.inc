Route6_MapScripts::
# 2 "data/maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag3
# 3 "data/maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ClearShinyFlag3
	.byte 0


ClearShinyFlag3::
# 6 "data/maps/Route6/scripts.pory"
	goto_if_set FLAG_DESERT_RUINS_OPENED, ClearShinyFlag3_2
ClearShinyFlag3_1:
# 14 "data/maps/Route6/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, ClearShinyFlag3_5
ClearShinyFlag3_4:
# 17 "data/maps/Route6/scripts.pory"
	clearflag FLAG_INCREASED_SHINY_ODDS
# 18 "data/maps/Route6/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 19 "data/maps/Route6/scripts.pory"
	release
	end

ClearShinyFlag3_2:
# 7 "data/maps/Route6/scripts.pory"
	setmetatile 40, 13, 0x001, FALSE
# 8 "data/maps/Route6/scripts.pory"
	setmetatile 41, 13, 0x001, FALSE
# 9 "data/maps/Route6/scripts.pory"
	setmetatile 42, 13, 0x001, FALSE
# 10 "data/maps/Route6/scripts.pory"
	setmetatile 40, 14, 0x001, FALSE
# 11 "data/maps/Route6/scripts.pory"
	setmetatile 41, 14, 0x001, FALSE
# 12 "data/maps/Route6/scripts.pory"
	setmetatile 42, 14, 0x001, FALSE
	goto ClearShinyFlag3_1

ClearShinyFlag3_5:
# 15 "data/maps/Route6/scripts.pory"
	setflag FLAG_DEVON_RESCUED
	goto ClearShinyFlag3_4


ClearShinyFlag::
# 23 "data/maps/Route6/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, ClearShinyFlag_2
ClearShinyFlag_1:
# 26 "data/maps/Route6/scripts.pory"
	clearflag FLAG_INCREASED_SHINY_ODDS
# 27 "data/maps/Route6/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 28 "data/maps/Route6/scripts.pory"
	release
	end

ClearShinyFlag_2:
# 24 "data/maps/Route6/scripts.pory"
	setflag FLAG_DEVON_RESCUED
	goto ClearShinyFlag_1


Route6_HoneyTree::
# 33 "data/maps/Route6/scripts.pory"
	lockall
# 34 "data/maps/Route6/scripts.pory"
	checkitem ITEM_HONEY, 1
# 35 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route6_HoneyTree_1
# 86 "data/maps/Route6/scripts.pory"
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
# 87 "data/maps/Route6/scripts.pory"
	waitmessage
# 88 "data/maps/Route6/scripts.pory"
	closemessage
# 89 "data/maps/Route6/scripts.pory"
	release
	end

Route6_HoneyTree_1:
# 37 "data/maps/Route6/scripts.pory"
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
# 38 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route6_HoneyTree_4
# 79 "data/maps/Route6/scripts.pory"
	waitmessage
# 80 "data/maps/Route6/scripts.pory"
	closemessage
# 81 "data/maps/Route6/scripts.pory"
	release
	end

Route6_HoneyTree_4:
# 39 "data/maps/Route6/scripts.pory"
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
# 40 "data/maps/Route6/scripts.pory"
	waitmessage
# 41 "data/maps/Route6/scripts.pory"
	closemessage
# 42 "data/maps/Route6/scripts.pory"
	removeitem ITEM_HONEY, 1
# 43 "data/maps/Route6/scripts.pory"
	random 10
# 44 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_HoneyTree_8
Route6_HoneyTree_7:
# 47 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_HoneyTree_11
Route6_HoneyTree_10:
# 50 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route6_HoneyTree_14
Route6_HoneyTree_13:
# 53 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route6_HoneyTree_17
Route6_HoneyTree_16:
# 56 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route6_HoneyTree_20
Route6_HoneyTree_19:
# 59 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Route6_HoneyTree_23
Route6_HoneyTree_22:
# 62 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Route6_HoneyTree_26
Route6_HoneyTree_25:
# 65 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Route6_HoneyTree_29
Route6_HoneyTree_28:
# 68 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Route6_HoneyTree_32
Route6_HoneyTree_31:
# 71 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Route6_HoneyTree_35
Route6_HoneyTree_34:
# 74 "data/maps/Route6/scripts.pory"
	dowildbattle
# 75 "data/maps/Route6/scripts.pory"
	release
	end

Route6_HoneyTree_8:
# 45 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_7

Route6_HoneyTree_11:
# 48 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_10

Route6_HoneyTree_14:
# 51 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_13

Route6_HoneyTree_17:
# 54 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_16

Route6_HoneyTree_20:
# 57 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_19

Route6_HoneyTree_23:
# 60 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_22

Route6_HoneyTree_26:
# 63 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_25

Route6_HoneyTree_29:
# 66 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_HERACROSS, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_28

Route6_HoneyTree_32:
# 69 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_HERACROSS, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_31

Route6_HoneyTree_35:
# 72 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_MUNCHLAX, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_34


# 94 "data/maps/Route6/scripts.pory"
Route6_Movement_PlayerFall:
# 95 "data/maps/Route6/scripts.pory"
	lock_anim
# 96 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 98 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 99 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 102 "data/maps/Route6/scripts.pory"
	step_end

Route6_Trainer1_Ranger_M::
# 106 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR1_RANGER_M, Route6_Trainer1_Ranger_M_Intro, Route6_Trainer1_Ranger_M_Defeat
# 107 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer1_Ranger_M_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer2_PokeFan_F::
# 125 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR2_POKEFAN_F, Route6_Trainer2_PokeFan_F_Intro, Route6_Trainer2_PokeFan_F_Defeat
# 126 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer2_PokeFan_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer3_Camper_F::
# 141 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR3_CAMPER_F, Route6_Trainer3_Camper_F_Intro, Route6_Trainer3_Camper_F_Defeat
# 142 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer3_Camper_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer4_Camper_M1::
# 157 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR4_CAMPER_M1, Route6_Trainer4_Camper_M1_Intro, Route6_Trainer4_Camper_M1_Defeat
# 158 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer4_Camper_M1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer5_Hiker::
# 174 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR5_HIKER, Route6_Trainer5_Hiker_Intro, Route6_Trainer5_Hiker_Defeat
# 175 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer5_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer6_Camper_M2::
# 194 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR6_CAMPER_M2, Route6_Trainer6_Camper_M2_Intro, Route6_Trainer6_Camper_M2_Defeat
# 195 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer6_Camper_M2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer7_Kindler::
# 213 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR7_KINDLER, Route6_Trainer7_Kindler_Intro, Route6_Trainer7_Kindler_Defeat
# 214 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer7_Kindler_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer1_Ranger_M_Intro::
# 110 "data/maps/Route6/scripts.pory"
	.string "Are you planning to explore the desert?\n"
	.string "Let me see if your Pokémon are ready!$"

Route6_Trainer1_Ranger_M_Defeat::
# 114 "data/maps/Route6/scripts.pory"
	.string "Your Pokémon are strong.\n"
	.string "You must be a great trainer.$"

Route6_Trainer1_Ranger_M_PostBattle::
# 118 "data/maps/Route6/scripts.pory"
	.string "There's a constant sandstorm raging\n"
	.string "at the desert. You're going to need\l"
	.string "proper equipment if you plan on\l"
	.string "marching ahead.$"

Route6_Trainer2_PokeFan_F_Intro::
# 129 "data/maps/Route6/scripts.pory"
	.string "Do you love Pokémon?\n"
	.string "What about Pokémon battles?$"

Route6_Trainer2_PokeFan_F_Defeat::
# 133 "data/maps/Route6/scripts.pory"
	.string "Oh my…$"

Route6_Trainer2_PokeFan_F_PostBattle::
# 136 "data/maps/Route6/scripts.pory"
	.string "Your Pokémon are strong and healthy.\n"
	.string "You must really love them.$"

Route6_Trainer3_Camper_F_Intro::
# 145 "data/maps/Route6/scripts.pory"
	.string "I'm full of pep!\n"
	.string "And my Pokémon are peppy, too!$"

Route6_Trainer3_Camper_F_Defeat::
# 149 "data/maps/Route6/scripts.pory"
	.string "My Pokémon lost their pep…$"

Route6_Trainer3_Camper_F_PostBattle::
# 152 "data/maps/Route6/scripts.pory"
	.string "When I see a trainer with a lot of pep,\n"
	.string "I just can't help challenging them.$"

Route6_Trainer4_Camper_M1_Intro::
# 161 "data/maps/Route6/scripts.pory"
	.string "I heard there are fossils to be found\n"
	.string "in the desert. Where could they be?$"

Route6_Trainer4_Camper_M1_Defeat::
# 165 "data/maps/Route6/scripts.pory"
	.string "I came up short…$"

Route6_Trainer4_Camper_M1_PostBattle::
# 168 "data/maps/Route6/scripts.pory"
	.string "If they can find fossils in the desert,\n"
	.string "it must have been able to support life\l"
	.string "a long time ago.$"

Route6_Trainer5_Hiker_Intro::
# 178 "data/maps/Route6/scripts.pory"
	.string "Show me how much you've toughened\n"
	.string "your Pokémon.$"

Route6_Trainer5_Hiker_Defeat::
# 182 "data/maps/Route6/scripts.pory"
	.string "I see you've toughened them\n"
	.string "considerably.$"

Route6_Trainer5_Hiker_PostBattle::
# 186 "data/maps/Route6/scripts.pory"
	.string "Pokémon and trainers learn much\n"
	.string "through battling.\p"
	.string "What's important is to never give up,\n"
	.string "even if you lose.$"

Route6_Trainer6_Camper_M2_Intro::
# 198 "data/maps/Route6/scripts.pory"
	.string "I'm waiting for a friend.\n"
	.string "Let's have a Pokémon battle\l"
	.string "to pass the time!$"

Route6_Trainer6_Camper_M2_Defeat::
# 203 "data/maps/Route6/scripts.pory"
	.string "Not fair! I was distracted by\n"
	.string "some sand in my shoe!$"

Route6_Trainer6_Camper_M2_PostBattle::
# 207 "data/maps/Route6/scripts.pory"
	.string "I don't like sand.\n"
	.string "It's coarse, rough, irritating,\l"
	.string "and it gets everywhere.$"

Route6_Trainer7_Kindler_Intro::
# 217 "data/maps/Route6/scripts.pory"
	.string "The desert sand is hot,\n"
	.string "but not as hot as my Pokémon!$"

Route6_Trainer7_Kindler_Defeat::
# 221 "data/maps/Route6/scripts.pory"
	.string "Guess I couldn't handle the heat…$"

Route6_Trainer7_Kindler_PostBattle::
# 224 "data/maps/Route6/scripts.pory"
	.string "The desert is not great for my\n"
	.string "Fire-type Pokémon.\p"
	.string "There are a lot of Ground-types out\n"
	.string "there which are very strong against\l"
	.string "Fire-type Pokémon.$"
