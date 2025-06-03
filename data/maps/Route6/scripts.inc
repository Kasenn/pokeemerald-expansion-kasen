Route6_MapScripts::
# 2 "data/maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag3
# 3 "data/maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ClearShinyFlag3
	.byte 0


ClearShinyFlag3::
# 6 "data/maps/Route6/scripts.pory"
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge ClearShinyFlag3_2
ClearShinyFlag3_1:
# 9 "data/maps/Route6/scripts.pory"
	goto_if_set FLAG_DESERT_RUINS_OPENED, ClearShinyFlag3_5
ClearShinyFlag3_4:
# 17 "data/maps/Route6/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, ClearShinyFlag3_8
ClearShinyFlag3_7:
# 20 "data/maps/Route6/scripts.pory"
	clearflag FLAG_INCREASED_SHINY_ODDS
# 21 "data/maps/Route6/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 22 "data/maps/Route6/scripts.pory"
	release
	end

ClearShinyFlag3_2:
# 7 "data/maps/Route6/scripts.pory"
	setflag FLAG_TEMP_1
	goto ClearShinyFlag3_1

ClearShinyFlag3_5:
# 10 "data/maps/Route6/scripts.pory"
	setmetatile 40, 13, 0x001, FALSE
# 11 "data/maps/Route6/scripts.pory"
	setmetatile 41, 13, 0x001, FALSE
# 12 "data/maps/Route6/scripts.pory"
	setmetatile 42, 13, 0x001, FALSE
# 13 "data/maps/Route6/scripts.pory"
	setmetatile 40, 14, 0x001, FALSE
# 14 "data/maps/Route6/scripts.pory"
	setmetatile 41, 14, 0x001, FALSE
# 15 "data/maps/Route6/scripts.pory"
	setmetatile 42, 14, 0x001, FALSE
	goto ClearShinyFlag3_4

ClearShinyFlag3_8:
# 18 "data/maps/Route6/scripts.pory"
	setflag FLAG_DEVON_RESCUED
	goto ClearShinyFlag3_7


ClearShinyFlag::
# 26 "data/maps/Route6/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, ClearShinyFlag_2
ClearShinyFlag_1:
# 29 "data/maps/Route6/scripts.pory"
	clearflag FLAG_INCREASED_SHINY_ODDS
# 30 "data/maps/Route6/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 31 "data/maps/Route6/scripts.pory"
	release
	end

ClearShinyFlag_2:
# 27 "data/maps/Route6/scripts.pory"
	setflag FLAG_DEVON_RESCUED
	goto ClearShinyFlag_1


Route6_HoneyTree::
# 36 "data/maps/Route6/scripts.pory"
	lock
# 37 "data/maps/Route6/scripts.pory"
	checkitem ITEM_HONEY, 1
# 38 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route6_HoneyTree_1
# 89 "data/maps/Route6/scripts.pory"
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
# 90 "data/maps/Route6/scripts.pory"
	waitmessage
# 91 "data/maps/Route6/scripts.pory"
	closemessage
# 92 "data/maps/Route6/scripts.pory"
	release
	end

Route6_HoneyTree_1:
# 40 "data/maps/Route6/scripts.pory"
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
# 41 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route6_HoneyTree_4
# 82 "data/maps/Route6/scripts.pory"
	waitmessage
# 83 "data/maps/Route6/scripts.pory"
	closemessage
# 84 "data/maps/Route6/scripts.pory"
	release
	end

Route6_HoneyTree_4:
# 42 "data/maps/Route6/scripts.pory"
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
# 43 "data/maps/Route6/scripts.pory"
	waitmessage
# 44 "data/maps/Route6/scripts.pory"
	closemessage
# 45 "data/maps/Route6/scripts.pory"
	removeitem ITEM_HONEY, 1
# 46 "data/maps/Route6/scripts.pory"
	random 10
# 47 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_HoneyTree_8
Route6_HoneyTree_7:
# 50 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_HoneyTree_11
Route6_HoneyTree_10:
# 53 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route6_HoneyTree_14
Route6_HoneyTree_13:
# 56 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route6_HoneyTree_17
Route6_HoneyTree_16:
# 59 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route6_HoneyTree_20
Route6_HoneyTree_19:
# 62 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Route6_HoneyTree_23
Route6_HoneyTree_22:
# 65 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Route6_HoneyTree_26
Route6_HoneyTree_25:
# 68 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Route6_HoneyTree_29
Route6_HoneyTree_28:
# 71 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Route6_HoneyTree_32
Route6_HoneyTree_31:
# 74 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Route6_HoneyTree_35
Route6_HoneyTree_34:
# 77 "data/maps/Route6/scripts.pory"
	dowildbattle
# 78 "data/maps/Route6/scripts.pory"
	release
	end

Route6_HoneyTree_8:
# 48 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_7

Route6_HoneyTree_11:
# 51 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_10

Route6_HoneyTree_14:
# 54 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_13

Route6_HoneyTree_17:
# 57 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_AIPOM, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_16

Route6_HoneyTree_20:
# 60 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_19

Route6_HoneyTree_23:
# 63 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_22

Route6_HoneyTree_26:
# 66 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_25

Route6_HoneyTree_29:
# 69 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_HERACROSS, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_28

Route6_HoneyTree_32:
# 72 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_HERACROSS, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_31

Route6_HoneyTree_35:
# 75 "data/maps/Route6/scripts.pory"
	setwildbattlelevelrange SPECIES_MUNCHLAX, 13, ITEM_NONE, SPECIES_NONE, 17
	goto Route6_HoneyTree_34


# 97 "data/maps/Route6/scripts.pory"
Route6_Movement_PlayerFall:
# 98 "data/maps/Route6/scripts.pory"
	lock_anim
# 99 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 102 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route6/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route6/scripts.pory"
	unlock_anim
# 106 "data/maps/Route6/scripts.pory"
	step_end

Route6_Trainer1_Ranger_M::
# 110 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR1_RANGER_M, Route6_Trainer1_Ranger_M_Intro, Route6_Trainer1_Ranger_M_Defeat
# 111 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer1_Ranger_M_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer2_PokeFan_F::
# 129 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R16_TR2_SWIMMER_F, Route6_Trainer2_PokeFan_F_Intro, Route6_Trainer2_PokeFan_F_Defeat
# 130 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer2_PokeFan_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer3_Camper_F::
# 145 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR3_CAMPER_F, Route6_Trainer3_Camper_F_Intro, Route6_Trainer3_Camper_F_Defeat
# 146 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer3_Camper_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer4_Camper_M1::
# 161 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R16_TR12_NINJABOY2, Route6_Trainer4_Camper_M1_Intro, Route6_Trainer4_Camper_M1_Defeat
# 162 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer4_Camper_M1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer5_Hiker::
# 178 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR5_HIKER, Route6_Trainer5_Hiker_Intro, Route6_Trainer5_Hiker_Defeat
# 179 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer5_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer6_Camper_M2::
# 198 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR6_CAMPER_M2, Route6_Trainer6_Camper_M2_Intro, Route6_Trainer6_Camper_M2_Defeat
# 199 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer6_Camper_M2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer7_Kindler::
# 217 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_R6_TR7_KINDLER, Route6_Trainer7_Kindler_Intro, Route6_Trainer7_Kindler_Defeat
# 218 "data/maps/Route6/scripts.pory"
	msgbox Route6_Trainer7_Kindler_PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_Trainer1_Ranger_M_Intro::
# 114 "data/maps/Route6/scripts.pory"
	.string "Are you planning to explore the desert?\n"
	.string "Let me see if your Pokémon are ready!$"

Route6_Trainer1_Ranger_M_Defeat::
# 118 "data/maps/Route6/scripts.pory"
	.string "Your Pokémon are strong.\n"
	.string "You must be a great trainer.$"

Route6_Trainer1_Ranger_M_PostBattle::
# 122 "data/maps/Route6/scripts.pory"
	.string "There's a constant sandstorm raging\n"
	.string "at the desert. You're going to need\l"
	.string "proper equipment if you plan on\l"
	.string "marching ahead.$"

Route6_Trainer2_PokeFan_F_Intro::
# 133 "data/maps/Route6/scripts.pory"
	.string "Do you love Pokémon?\n"
	.string "What about Pokémon battles?$"

Route6_Trainer2_PokeFan_F_Defeat::
# 137 "data/maps/Route6/scripts.pory"
	.string "Oh my…$"

Route6_Trainer2_PokeFan_F_PostBattle::
# 140 "data/maps/Route6/scripts.pory"
	.string "Your Pokémon are strong and healthy.\n"
	.string "You must really love them.$"

Route6_Trainer3_Camper_F_Intro::
# 149 "data/maps/Route6/scripts.pory"
	.string "I'm full of pep!\n"
	.string "And my Pokémon are peppy, too!$"

Route6_Trainer3_Camper_F_Defeat::
# 153 "data/maps/Route6/scripts.pory"
	.string "My Pokémon lost their pep…$"

Route6_Trainer3_Camper_F_PostBattle::
# 156 "data/maps/Route6/scripts.pory"
	.string "When I see a trainer with a lot of pep,\n"
	.string "I just can't help challenging them.$"

Route6_Trainer4_Camper_M1_Intro::
# 165 "data/maps/Route6/scripts.pory"
	.string "I heard there are fossils to be found\n"
	.string "in the desert. Where could they be?$"

Route6_Trainer4_Camper_M1_Defeat::
# 169 "data/maps/Route6/scripts.pory"
	.string "I came up short…$"

Route6_Trainer4_Camper_M1_PostBattle::
# 172 "data/maps/Route6/scripts.pory"
	.string "If they can find fossils in the desert,\n"
	.string "it must have been able to support life\l"
	.string "a long time ago.$"

Route6_Trainer5_Hiker_Intro::
# 182 "data/maps/Route6/scripts.pory"
	.string "Show me how much you've toughened\n"
	.string "your Pokémon.$"

Route6_Trainer5_Hiker_Defeat::
# 186 "data/maps/Route6/scripts.pory"
	.string "I see you've toughened them\n"
	.string "considerably.$"

Route6_Trainer5_Hiker_PostBattle::
# 190 "data/maps/Route6/scripts.pory"
	.string "Pokémon and trainers learn much\n"
	.string "through battling.\p"
	.string "What's important is to never give up,\n"
	.string "even if you lose.$"

Route6_Trainer6_Camper_M2_Intro::
# 202 "data/maps/Route6/scripts.pory"
	.string "I'm waiting for a friend.\n"
	.string "Let's have a Pokémon battle\l"
	.string "to pass the time!$"

Route6_Trainer6_Camper_M2_Defeat::
# 207 "data/maps/Route6/scripts.pory"
	.string "Not fair! I was distracted by\n"
	.string "some sand in my shoe!$"

Route6_Trainer6_Camper_M2_PostBattle::
# 211 "data/maps/Route6/scripts.pory"
	.string "I don't like sand.\n"
	.string "It's coarse, rough, irritating,\l"
	.string "and it gets everywhere.$"

Route6_Trainer7_Kindler_Intro::
# 221 "data/maps/Route6/scripts.pory"
	.string "The desert sand is hot,\n"
	.string "but not as hot as my Pokémon!$"

Route6_Trainer7_Kindler_Defeat::
# 225 "data/maps/Route6/scripts.pory"
	.string "Guess I couldn't handle the heat…$"

Route6_Trainer7_Kindler_PostBattle::
# 228 "data/maps/Route6/scripts.pory"
	.string "The desert is not great for my\n"
	.string "Fire-type Pokémon.\p"
	.string "There are a lot of Ground-types out\n"
	.string "there which are very strong against\l"
	.string "Fire-type Pokémon.$"
