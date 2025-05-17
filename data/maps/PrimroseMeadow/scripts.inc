PrimroseMeadow_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Common_EventScript_SetupRivalGfxId
	.byte 0


PrimroseMeadow_EventScript_Rival::
	lock
	msgbox PrimroseMeadow_Text_RivalPokemon, MSGBOX_DEFAULT
	closemessage
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PrimroseMeadow_EventScript_Rival_2
	playbgm MUS_ENCOUNTER_MAY, TRUE
PrimroseMeadow_EventScript_Rival_1:
	faceplayer
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	compare VAR_RESULT, MALE
	goto_if_eq PrimroseMeadow_EventScript_Rival_6
	msgbox PRMeadow_Text_BrendanLetsBattle
	trainerbattle_no_intro TRAINER_BRENDAN_PRIMROSE_MEADOW, PRMeadow_BrendanDefeated
	msgbox PRMeadow_BrendanTimeToHeadBack, MSGBOX_DEFAULT
PrimroseMeadow_EventScript_Rival_5:
	closemessage
	safefollow
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
	switch VAR_FACING
	case DIR_SOUTH, PrimroseMeadow_EventScript_Rival_11
	case DIR_NORTH, PrimroseMeadow_EventScript_Rival_12
	case DIR_EAST, PrimroseMeadow_EventScript_Rival_13
	case DIR_WEST, PrimroseMeadow_EventScript_Rival_13
PrimroseMeadow_EventScript_Rival_9:
	waitmovement 0
	removeobject 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

PrimroseMeadow_EventScript_Rival_2:
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto PrimroseMeadow_EventScript_Rival_1

PrimroseMeadow_EventScript_Rival_6:
	msgbox PRMeadow_Text_MayLetsBattle
	trainerbattle_no_intro TRAINER_MAY_PRIMROSE_MEADOW, PRMeadow_MayDefeated
	msgbox PRMeadow_MayTimeToHeadBack, MSGBOX_DEFAULT
	goto PrimroseMeadow_EventScript_Rival_5

PrimroseMeadow_EventScript_Rival_11:
	applymovement 1, PRMeadow_Movement_RivalExit1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_12:
	applymovement OBJ_EVENT_ID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingNorth
	getfollowerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 9
	goto_if_eq PrimroseMeadow_EventScript_Rival_16
PrimroseMeadow_EventScript_Rival_15:
	applymovement 1, PRMeadow_Movement_RivalExitFacingNorth1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_13:
	applymovement OBJ_EVENT_ID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingEastOrWest
	applymovement 1, PRMeadow_Movement_RivalExit1
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_14:
	applymovement 1, PRMeadow_Movement_RivalExitFacingNorth2
	goto PrimroseMeadow_EventScript_Rival_9

PrimroseMeadow_EventScript_Rival_16:
	compare VAR_TEMP_1, 9
	goto_if_eq PrimroseMeadow_EventScript_Rival_14
	goto PrimroseMeadow_EventScript_Rival_15


PRMeadow_Movement_RivalExitFacingNorth1:
	player_run_right
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_left
	player_run_left
	player_run_left
	step_end

PRMeadow_Movement_RivalExitFacingNorth2:
	player_run_right
	player_run_right
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_left
	player_run_left
	player_run_left
	step_end

PRMeadow_Movement_WatchRivalExitFacingNorth:
	delay_16
	delay_4
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_down
	step_end

PRMeadow_Movement_RivalExit1:
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_left
	player_run_left
	player_run_left
	step_end

PRMeadow_Movement_WatchRivalExitFacingEastOrWest:
	delay_16
	walk_in_place_faster_down
	step_end

PrimroseMeadow_Text_RivalPokemon::
	.string "{RIVAL}: Let's see… The Pokémon found\n"
	.string "in Primrose Meadow include…$"

PRMeadow_Text_MayLetsBattle::
	.string "Oh, hi {PLAYER}!\p"
	.string "I knew it!\n"
	.string "My dad did give you a Pokémon!\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a trainer is like.$"

PRMeadow_MayDefeated::
	.string "Wow! That's great!\n"
	.string "{PLAYER}, you're pretty good!$"

PRMeadow_Text_BrendanLetsBattle::
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh yeah, I knew dad was going\n"
	.string "to give you a Pokémon.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a trainer's\n"
	.string "about!$"

PRMeadow_BrendanDefeated::
	.string "Huh, {PLAYER}, that wasn't too bad.$"

PRMeadow_MayTimeToHeadBack::
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
