SerpentCaveMain_MapScripts::
# 2 "data/maps/SerpentCaveMain/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SerpentCaveMain/scripts.pory"
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto_if_ge SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SerpentCaveMain/scripts.pory"
	setflag FLAG_TEMP_1
	return


SerpentCave_Iris::
# 10 "data/maps/SerpentCaveMain/scripts.pory"
	lock
# 11 "data/maps/SerpentCaveMain/scripts.pory"
	faceplayer
# 12 "data/maps/SerpentCaveMain/scripts.pory"
	checktrainerflag TRAINER_CASUAL_IRIS
	goto_if 1, SerpentCave_Iris_2
SerpentCave_Iris_1:
# 15 "data/maps/SerpentCaveMain/scripts.pory"
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_CHALLENGED
	goto_if_eq SerpentCave_Iris_5
	msgbox FightForTreasure, MSGBOX_YESNO
# 0 "data/maps/SerpentCaveMain/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SerpentCave_Iris_10
SerpentCave_Iris_4:
# 28 "data/maps/SerpentCaveMain/scripts.pory"
	msgbox IrisLetsGo
# 29 "data/maps/SerpentCaveMain/scripts.pory"
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, SerpentCaveIris_Lose
# 30 "data/maps/SerpentCaveMain/scripts.pory"
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_DEFEATED
# 31 "data/maps/SerpentCaveMain/scripts.pory"
	goto IrisAfterBattle
	return

SerpentCave_Iris_2:
# 13 "data/maps/SerpentCaveMain/scripts.pory"
	goto IrisAfterBattle
	goto SerpentCave_Iris_1

SerpentCave_Iris_5:
	msgbox Iris_TryAgain, MSGBOX_YESNO
# 0 "data/maps/SerpentCaveMain/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SerpentCave_Iris_8
	goto SerpentCave_Iris_4

SerpentCave_Iris_8:
# 17 "data/maps/SerpentCaveMain/scripts.pory"
	msgbox Iris_PrepareFirst, MSGBOX_NPC
	end

SerpentCave_Iris_10:
# 23 "data/maps/SerpentCaveMain/scripts.pory"
	msgbox Iris_PrepareFirst, MSGBOX_NPC
# 24 "data/maps/SerpentCaveMain/scripts.pory"
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_CHALLENGED
	end


IrisAfterBattle::
# 35 "data/maps/SerpentCaveMain/scripts.pory"
	goto_if_set FLAG_TEMP_2, IrisAfterBattle_2
# 38 "data/maps/SerpentCaveMain/scripts.pory"
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, IrisAfterBattle_3
# 42 "data/maps/SerpentCaveMain/scripts.pory"
	msgbox Iris_GiveReward
IrisAfterBattle_1:
# 44 "data/maps/SerpentCaveMain/scripts.pory"
	giveitem ITEM_GARCHOMPITE
# 45 "data/maps/SerpentCaveMain/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq IrisAfterBattle_8
IrisAfterBattle_7:
# 49 "data/maps/SerpentCaveMain/scripts.pory"
	msgbox IrisLeaves
# 50 "data/maps/SerpentCaveMain/scripts.pory"
	closemessage
# 51 "data/maps/SerpentCaveMain/scripts.pory"
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
# 52 "data/maps/SerpentCaveMain/scripts.pory"
	safefollow
# 53 "data/maps/SerpentCaveMain/scripts.pory"
	switch VAR_FACING
# 54 "data/maps/SerpentCaveMain/scripts.pory"
	case DIR_SOUTH, IrisAfterBattle_12
# 55 "data/maps/SerpentCaveMain/scripts.pory"
	case DIR_WEST, IrisAfterBattle_12
# 56 "data/maps/SerpentCaveMain/scripts.pory"
	case DIR_EAST, IrisAfterBattle_12
# 58 "data/maps/SerpentCaveMain/scripts.pory"
	case DIR_NORTH, IrisAfterBattle_13
IrisAfterBattle_10:
# 77 "data/maps/SerpentCaveMain/scripts.pory"
	waitmovement 1
# 78 "data/maps/SerpentCaveMain/scripts.pory"
	removeobject 1
# 79 "data/maps/SerpentCaveMain/scripts.pory"
	delay 15
# 80 "data/maps/SerpentCaveMain/scripts.pory"
	release
	return

IrisAfterBattle_2:
# 36 "data/maps/SerpentCaveMain/scripts.pory"
	msgbox Iris_GiveRewardShort
	goto IrisAfterBattle_1

IrisAfterBattle_3:
# 39 "data/maps/SerpentCaveMain/scripts.pory"
	msgbox Iris_GiveRewardAfterMegaEvo
	goto IrisAfterBattle_1

IrisAfterBattle_8:
# 46 "data/maps/SerpentCaveMain/scripts.pory"
	setflag FLAG_TEMP_2
# 47 "data/maps/SerpentCaveMain/scripts.pory"
	goto ZeBagIsFull
	goto IrisAfterBattle_7

IrisAfterBattle_12:
# 57 "data/maps/SerpentCaveMain/scripts.pory"
	applymovement 1, Walk7Down
	goto IrisAfterBattle_10

IrisAfterBattle_13:
# 59 "data/maps/SerpentCaveMain/scripts.pory"
	getfollowerxy VAR_TEMP_0, VAR_TEMP_1
# 60 "data/maps/SerpentCaveMain/scripts.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq IrisAfterBattle_14
# 69 "data/maps/SerpentCaveMain/scripts.pory"
	applymovement 1, IrisAfterBattle_Movement_1
	goto IrisAfterBattle_10

IrisAfterBattle_14:
# 61 "data/maps/SerpentCaveMain/scripts.pory"
	applymovement 1, IrisAfterBattle_Movement_0
	goto IrisAfterBattle_10


# 61 "data/maps/SerpentCaveMain/scripts.pory"
IrisAfterBattle_Movement_0:
# 62 "data/maps/SerpentCaveMain/scripts.pory"
	walk_right
# 63 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 63 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 63 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 64 "data/maps/SerpentCaveMain/scripts.pory"
	walk_left
# 65 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 65 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 65 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 65 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 65 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
	step_end

# 69 "data/maps/SerpentCaveMain/scripts.pory"
IrisAfterBattle_Movement_1:
# 70 "data/maps/SerpentCaveMain/scripts.pory"
	walk_left
# 71 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 71 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 71 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 72 "data/maps/SerpentCaveMain/scripts.pory"
	walk_right
# 73 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 73 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 73 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 73 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
# 73 "data/maps/SerpentCaveMain/scripts.pory"
	walk_down
	step_end

Iris_TryAgain::
# 83 "data/maps/SerpentCaveMain/scripts.pory"
	.string "You're back!\p"
	.string "Well, are you ready to battle?$"

Iris_PrepareFirst::
# 87 "data/maps/SerpentCaveMain/scripts.pory"
	.string "I get it, you need to strategize\n"
	.string "first.$"

FightForTreasure::
# 91 "data/maps/SerpentCaveMain/scripts.pory"
	.string "Iris: Oho, managed to catch up,\n"
	.string "did we?\p"
	.string "By the way, do you happen to know\n"
	.string "anything about the cave flooding?\p"
	.string "Thanks to that, all the cool stuff\n"
	.string "at the bottom of the cave got swept\l"
	.string "away by the tide!\p"
	.string "All that's left is this crummy\n"
	.string "little cave with this weird shining\l"
	.string "stone I found.\p"
	.string "You look like you want it.\p"
	.string "If you can beat me in a Pokémon\n"
	.string "battle, I might just give it to you.\p"
	.string "How about it?$"

SerpentCaveIris_Lose::
# 107 "data/maps/SerpentCaveMain/scripts.pory"
	.string "This can't be! You must've\n"
	.string "cheated somehow!$"

Iris_GiveRewardShort::
# 111 "data/maps/SerpentCaveMain/scripts.pory"
	.string "A promise is a promise.\n"
	.string "Here's your prize.$"

Iris_GiveRewardAfterMegaEvo::
# 115 "data/maps/SerpentCaveMain/scripts.pory"
	.string "Oh wow!\p"
	.string "How did your Pokémon evolve like that\n"
	.string "during the battle?\p"
	.string "Mega Evolution?\n"
	.string "Triggered by a Mega Stone?\p"
	.string "Hey, do you think by any chance this\n"
	.string "stone is a Mega Stone?\p"
	.string "Now I kinda don't wanna give it away…\p"
	.string "But, a promise is a promise…$"

Iris_GiveReward::
# 126 "data/maps/SerpentCaveMain/scripts.pory"
	.string "Oh wow!\p"
	.string "I have to admit, you're way stronger\n"
	.string "than I expected!\p"
	.string "That was fun!\p"
	.string "I'd kinda grown to like the look of\n"
	.string "this stone, but I did promise it to\l"
	.string "you if you won.\p"
	.string "A promise is a promise.$"

IrisLeaves::
# 136 "data/maps/SerpentCaveMain/scripts.pory"
	.string "Well, it was a fun experience to\n"
	.string "battle with you, {PLAYER}, but\l"
	.string "seeing how the cave kinda got\l"
	.string "flooded, I don't see much point\l"
	.string "loitering around here anymore.\p"
	.string "Think I'm gonna head home now.\p"
	.string "I hope we get to battle again\n"
	.string "some day!$"

IrisLetsGo::
# 147 "data/maps/SerpentCaveMain/scripts.pory"
	.string "Yay!\n"
	.string "I knew you'd be up for it!\p"
	.string "What're we waiting for?\n"
	.string "Let's go!$"
