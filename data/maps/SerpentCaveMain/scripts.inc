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
	msgbox FightForTreasure
SerpentCave_Iris_4:
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_IRIS_CHALLENGED
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
	.string "try again?$"

Iris_PrepareFirst::
	.string "prepare first$"

FightForTreasure::
	.string "fight for treasure$"

SerpentCaveIris_Lose::
	.string "what? how? you cheated!$"

Iris_GiveRewardShort::
	.string "here's the reward short$"

Iris_GiveRewardAfterMegaEvo::
	.string "now i don't want to give reward!$"

Iris_GiveReward::
	.string "here is your reward$"

IrisLeaves::
	.string "goodbye$"
