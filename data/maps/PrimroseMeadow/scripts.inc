PrimroseMeadow_MapScripts::
# 2 "data/maps/PrimroseMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRivalGfxId
	.byte 0


PrimroseMeadow_EventScript_Rival::
# 6 "data/maps/PrimroseMeadow/scripts.pory"
	lock
# 7 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PrimroseMeadow_Text_RivalPokemon, MSGBOX_AUTOCLOSE
	checkplayergender
# 0 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PrimroseMeadow_EventScript_Rival_2
# 12 "data/maps/PrimroseMeadow/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
PrimroseMeadow_EventScript_Rival_1:
# 14 "data/maps/PrimroseMeadow/scripts.pory"
	faceplayer
# 15 "data/maps/PrimroseMeadow/scripts.pory"
	exclamationmark 1
# 16 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PrimroseMeadow_EventScript_Rival_6
# 22 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_Text_BrendanLetsBattle
# 23 "data/maps/PrimroseMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_PRIMROSE_MEADOW, PRMeadow_BrendanDefeated
# 24 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_BrendanTimeToHeadBack, MSGBOX_AUTOCLOSE
PrimroseMeadow_EventScript_Rival_5:
# 26 "data/maps/PrimroseMeadow/scripts.pory"
	safefollow
# 27 "data/maps/PrimroseMeadow/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
# 28 "data/maps/PrimroseMeadow/scripts.pory"
	switch VAR_FACING
# 29 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_SOUTH, PrimroseMeadow_EventScript_Rival_11
# 31 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_NORTH, PrimroseMeadow_EventScript_Rival_12
# 40 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_EAST, PrimroseMeadow_EventScript_Rival_13
# 41 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_WEST, PrimroseMeadow_EventScript_Rival_13
PrimroseMeadow_EventScript_Rival_9:
# 45 "data/maps/PrimroseMeadow/scripts.pory"
	waitmovement 0
# 46 "data/maps/PrimroseMeadow/scripts.pory"
	removeobject 1
# 47 "data/maps/PrimroseMeadow/scripts.pory"
	savebgm MUS_DUMMY
# 48 "data/maps/PrimroseMeadow/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/PrimroseMeadow/scripts.pory"
	release
	end

PrimroseMeadow_EventScript_Rival_2:
# 9 "data/maps/PrimroseMeadow/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto PrimroseMeadow_EventScript_Rival_1

PrimroseMeadow_EventScript_Rival_6:
# 17 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_Text_MayLetsBattle
# 18 "data/maps/PrimroseMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_PRIMROSE_MEADOW, PRMeadow_MayDefeated
# 19 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_MayTimeToHeadBack, MSGBOX_AUTOCLOSE
	goto PrimroseMeadow_EventScript_Rival_5

PrimroseMeadow_EventScript_Rival_11:
# 30 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExit1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_12:
# 32 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingNorth
# 33 "data/maps/PrimroseMeadow/scripts.pory"
	getfollowerxy VAR_TEMP_0, VAR_TEMP_1
# 34 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq PrimroseMeadow_EventScript_Rival_16
PrimroseMeadow_EventScript_Rival_15:
# 38 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExitFacingNorth1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_13:
# 42 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingEastOrWest
# 43 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExit1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_14:
# 35 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExitFacingNorth2
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_16:
# 34 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq PrimroseMeadow_EventScript_Rival_14
	goto PrimroseMeadow_EventScript_Rival_15


# 53 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_RivalExitFacingNorth1:
# 54 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_right
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 55 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 56 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 56 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 56 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
	step_end

# 59 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_RivalExitFacingNorth2:
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_right
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_right
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 62 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 62 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 62 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
	step_end

# 65 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_WatchRivalExitFacingNorth:
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	delay_16
# 67 "data/maps/PrimroseMeadow/scripts.pory"
	delay_4
# 68 "data/maps/PrimroseMeadow/scripts.pory"
	walk_in_place_faster_right
# 69 "data/maps/PrimroseMeadow/scripts.pory"
	delay_16
# 70 "data/maps/PrimroseMeadow/scripts.pory"
	walk_in_place_faster_down
	step_end

# 73 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_RivalExit1:
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 75 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 75 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 75 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
	step_end

# 78 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_WatchRivalExitFacingEastOrWest:
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	delay_16
# 80 "data/maps/PrimroseMeadow/scripts.pory"
	walk_in_place_faster_down
	step_end

PrimroseMeadow_Text_RivalPokemon::
# 83 "data/maps/PrimroseMeadow/scripts.pory"
	.string "{RIVAL}: Let's see… The Pokémon found\n"
	.string "in Primrose Meadow include…$"

PRMeadow_Text_MayLetsBattle::
# 88 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Oh, hi {PLAYER}!\p"
	.string "I knew it!\n"
	.string "My dad did give you a Pokémon!\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a trainer is like.$"

PRMeadow_MayDefeated::
# 98 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Wow! That's great!\n"
	.string "{PLAYER}, you're pretty good!$"

PRMeadow_Text_BrendanLetsBattle::
# 103 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh yeah, I knew dad was going\n"
	.string "to give you a Pokémon.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a trainer's\n"
	.string "about!$"

PRMeadow_BrendanDefeated::
# 113 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Huh, {PLAYER}, that wasn't too bad.$"

PRMeadow_MayTimeToHeadBack::
# 117 "data/maps/PrimroseMeadow/scripts.pory"
	.string "{RIVAL}: You really are something,\n"
	.string "{PLAYER}!\p"
	.string "Keep filling that Pokédex and training\n"
	.string "your Pokémon and I'm sure you'll\l"
	.string "be able to take on the Pokémon League\l"
	.string "in no time!\p"
	.string "…What do you mean, “What Pokédex?”\p"
	.string "…WHAT!?\n"
	.string "My dad didn't give you one!?\p"
	.string "Oh I'll make sure he hears about this.\n"
	.string "Come on, let's get back to the lab!$"

PRMeadow_BrendanTimeToHeadBack::
# 131 "data/maps/PrimroseMeadow/scripts.pory"
	.string "{RIVAL}: That was a good battle,\n"
	.string "{PLAYER}!\p"
	.string "Keep filling that Pokédex and training\n"
	.string "your Pokémon and I'm sure you'll\l"
	.string "be able to take on the Pokémon League\l"
	.string "in no time!\p"
	.string "…What do you mean, “What Pokédex?”\p"
	.string "…What?\n"
	.string "My dad didn't give you one?\p"
	.string "Oh we need to fix this.\n"
	.string "Come on, let's get back to the lab!$"
