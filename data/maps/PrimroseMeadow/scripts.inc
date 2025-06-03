PrimroseMeadow_MapScripts::
# 2 "data/maps/PrimroseMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Common_EventScript_SetupRivalGfxId
	.byte 0


PrimroseMeadow_EventScript_Rival::
# 6 "data/maps/PrimroseMeadow/scripts.pory"
	lock
# 7 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PrimroseMeadow_Text_RivalPokemon, MSGBOX_DEFAULT
# 8 "data/maps/PrimroseMeadow/scripts.pory"
	closemessage
# 9 "data/maps/PrimroseMeadow/scripts.pory"
	checkplayergender
# 10 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PrimroseMeadow_EventScript_Rival_2
# 14 "data/maps/PrimroseMeadow/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
PrimroseMeadow_EventScript_Rival_1:
# 16 "data/maps/PrimroseMeadow/scripts.pory"
	faceplayer
# 17 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 18 "data/maps/PrimroseMeadow/scripts.pory"
	waitmovement 0
# 19 "data/maps/PrimroseMeadow/scripts.pory"
	delay 48
# 20 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PrimroseMeadow_EventScript_Rival_6
# 26 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_Text_BrendanLetsBattle
# 27 "data/maps/PrimroseMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_PRIMROSE_MEADOW, PRMeadow_BrendanDefeated
# 28 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_BrendanTimeToHeadBack, MSGBOX_DEFAULT
PrimroseMeadow_EventScript_Rival_5:
# 30 "data/maps/PrimroseMeadow/scripts.pory"
	closemessage
# 31 "data/maps/PrimroseMeadow/scripts.pory"
	safefollow
# 32 "data/maps/PrimroseMeadow/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
# 33 "data/maps/PrimroseMeadow/scripts.pory"
	switch VAR_FACING
# 34 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_SOUTH, PrimroseMeadow_EventScript_Rival_11
# 36 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_NORTH, PrimroseMeadow_EventScript_Rival_12
# 45 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_EAST, PrimroseMeadow_EventScript_Rival_13
# 46 "data/maps/PrimroseMeadow/scripts.pory"
	case DIR_WEST, PrimroseMeadow_EventScript_Rival_13
PrimroseMeadow_EventScript_Rival_9:
# 50 "data/maps/PrimroseMeadow/scripts.pory"
	waitmovement 0
# 51 "data/maps/PrimroseMeadow/scripts.pory"
	removeobject 1
# 52 "data/maps/PrimroseMeadow/scripts.pory"
	savebgm MUS_DUMMY
# 53 "data/maps/PrimroseMeadow/scripts.pory"
	fadedefaultbgm
# 54 "data/maps/PrimroseMeadow/scripts.pory"
	release
	end

PrimroseMeadow_EventScript_Rival_2:
# 11 "data/maps/PrimroseMeadow/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto PrimroseMeadow_EventScript_Rival_1

PrimroseMeadow_EventScript_Rival_6:
# 21 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_Text_MayLetsBattle
# 22 "data/maps/PrimroseMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_PRIMROSE_MEADOW, PRMeadow_MayDefeated
# 23 "data/maps/PrimroseMeadow/scripts.pory"
	msgbox PRMeadow_MayTimeToHeadBack, MSGBOX_DEFAULT
	goto PrimroseMeadow_EventScript_Rival_5

PrimroseMeadow_EventScript_Rival_11:
# 35 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExit1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_12:
# 37 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingNorth
# 38 "data/maps/PrimroseMeadow/scripts.pory"
	getfollowerxy VAR_TEMP_0, VAR_TEMP_1
# 39 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq PrimroseMeadow_EventScript_Rival_16
PrimroseMeadow_EventScript_Rival_15:
# 43 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExitFacingNorth1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_13:
# 47 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingEastOrWest
# 48 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExit1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_14:
# 40 "data/maps/PrimroseMeadow/scripts.pory"
	applymovement 1, PRMeadow_Movement_RivalExitFacingNorth2
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_16:
# 39 "data/maps/PrimroseMeadow/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq PrimroseMeadow_EventScript_Rival_14
	goto PrimroseMeadow_EventScript_Rival_15


# 58 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_RivalExitFacingNorth1:
# 59 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_right
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 60 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 61 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
	step_end

# 64 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_RivalExitFacingNorth2:
# 65 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_right
# 65 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_right
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 66 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 67 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 67 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 67 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
	step_end

# 70 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_WatchRivalExitFacingNorth:
# 71 "data/maps/PrimroseMeadow/scripts.pory"
	delay_16
# 72 "data/maps/PrimroseMeadow/scripts.pory"
	delay_4
# 73 "data/maps/PrimroseMeadow/scripts.pory"
	walk_in_place_faster_right
# 74 "data/maps/PrimroseMeadow/scripts.pory"
	delay_16
# 75 "data/maps/PrimroseMeadow/scripts.pory"
	walk_in_place_faster_down
	step_end

# 78 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_RivalExit1:
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 79 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_down
# 80 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 80 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
# 80 "data/maps/PrimroseMeadow/scripts.pory"
	player_run_left
	step_end

# 83 "data/maps/PrimroseMeadow/scripts.pory"
PRMeadow_Movement_WatchRivalExitFacingEastOrWest:
# 84 "data/maps/PrimroseMeadow/scripts.pory"
	delay_16
# 85 "data/maps/PrimroseMeadow/scripts.pory"
	walk_in_place_faster_down
	step_end

PrimroseMeadow_Text_RivalPokemon::
# 88 "data/maps/PrimroseMeadow/scripts.pory"
	.string "{RIVAL}: Let's see… The Pokémon found\n"
	.string "in Primrose Meadow include…$"

PRMeadow_Text_MayLetsBattle::
# 93 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Oh, hi {PLAYER}!\p"
	.string "I knew it!\n"
	.string "My dad did give you a Pokémon!\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a trainer is like.$"

PRMeadow_MayDefeated::
# 103 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Wow! That's great!\n"
	.string "{PLAYER}, you're pretty good!$"

PRMeadow_Text_BrendanLetsBattle::
# 108 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh yeah, I knew dad was going\n"
	.string "to give you a Pokémon.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a trainer's\n"
	.string "about!$"

PRMeadow_BrendanDefeated::
# 118 "data/maps/PrimroseMeadow/scripts.pory"
	.string "Huh, {PLAYER}, that wasn't too bad.$"

PRMeadow_MayTimeToHeadBack::
# 122 "data/maps/PrimroseMeadow/scripts.pory"
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
# 136 "data/maps/PrimroseMeadow/scripts.pory"
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
