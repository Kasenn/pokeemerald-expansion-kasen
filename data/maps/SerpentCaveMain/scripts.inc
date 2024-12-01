SerpentCaveMain_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto_if_ge SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SerpentCaveMain_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


SerpentCave_Iris::
	lock
	faceplayer
	checktrainerflag TRAINER_CASUAL_IRIS
	goto_if 1, SerpentCave_Iris_2
SerpentCave_Iris_1:
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_CHALLENGED
	goto_if_eq SerpentCave_Iris_5
	msgbox FightForTreasure, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SerpentCave_Iris_10
SerpentCave_Iris_4:
	trainerbattle_no_intro TRAINER_CASUAL_IRIS, SerpentCaveIris_Lose
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_DEFEATED
	goto IrisAfterBattle
	return

SerpentCave_Iris_2:
	goto IrisAfterBattle
	goto SerpentCave_Iris_1

SerpentCave_Iris_5:
	msgbox Iris_TryAgain, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SerpentCave_Iris_8
	goto SerpentCave_Iris_4

SerpentCave_Iris_8:
	msgbox Iris_PrepareFirst, MSGBOX_NPC
	end

SerpentCave_Iris_10:
	msgbox Iris_PrepareFirst, MSGBOX_NPC
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_CHALLENGED
	end


IrisAfterBattle::
	goto_if_set FLAG_TEMP_2, IrisAfterBattle_2
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, IrisAfterBattle_3
	msgbox Iris_GiveReward
IrisAfterBattle_1:
	giveitem ITEM_GARCHOMPITE
	compare VAR_RESULT, FALSE
	goto_if_eq IrisAfterBattle_8
IrisAfterBattle_7:
	msgbox IrisLeaves
	closemessage
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	safefollow
	switch VAR_FACING
	case DIR_SOUTH, IrisAfterBattle_12
	case DIR_WEST, IrisAfterBattle_12
	case DIR_EAST, IrisAfterBattle_12
	case DIR_NORTH, IrisAfterBattle_13
IrisAfterBattle_10:
	waitmovement 1
	removeobject 1
	delay 15
	release
	return

IrisAfterBattle_2:
	msgbox Iris_GiveRewardShort
	goto IrisAfterBattle_1

IrisAfterBattle_3:
	msgbox Iris_GiveRewardAfterMegaEvo
	goto IrisAfterBattle_1

IrisAfterBattle_8:
	setflag FLAG_TEMP_2
	goto ZeBagIsFull
	goto IrisAfterBattle_7

IrisAfterBattle_12:
	applymovement 1, Walk7Down
	goto IrisAfterBattle_10

IrisAfterBattle_13:
	getfollowerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 13
	goto_if_eq IrisAfterBattle_14
	applymovement 1, IrisAfterBattle_Movement_1
	goto IrisAfterBattle_10

IrisAfterBattle_14:
	applymovement 1, IrisAfterBattle_Movement_0
	goto IrisAfterBattle_10


IrisAfterBattle_Movement_0:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

IrisAfterBattle_Movement_1:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Iris_TryAgain::
	.string "You're back!\p"
	.string "Well, are you ready to battle?$"

Iris_PrepareFirst::
	.string "I get it, you need to strategize\n"
	.string "first.$"

FightForTreasure::
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
	.string "This can't be! You must've\n"
	.string "cheated somehow!$"

Iris_GiveRewardShort::
	.string "A promise is a promise.\n"
	.string "Here's your prize.$"

Iris_GiveRewardAfterMegaEvo::
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
	.string "Oh wow!\p"
	.string "I have to admit, you're way stronger\n"
	.string "than I expected!\p"
	.string "That was fun!\p"
	.string "I'd kinda grown to like the look of\n"
	.string "this stone, but I did promise it to\l"
	.string "you if you won.\p"
	.string "A promise is a promise.$"

IrisLeaves::
	.string "Well, it was a fun experience to\n"
	.string "battle with you, {PLAYER}, but\l"
	.string "seeing how the cave kinda got\l"
	.string "flooded, I don't see much point\l"
	.string "loitering around here anymore.\p"
	.string "Think I'm gonna head home now.\p"
	.string "I hope we get to battle again\n"
	.string "some day!$"
