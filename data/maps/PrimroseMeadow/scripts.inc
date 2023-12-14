PrimroseMeadow_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_MaysHouse2F_SetRival
	.byte 0


PrimroseMeadow_EventScript_Rival::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PrimroseMeadow_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, PrimroseMeadow_EventScript_RivalBrendan
	end


PrimroseMeadow_EventScript_RivalMay::
	msgbox PrimroseMeadow_Text_RivalPokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox PRMeadow_Text_MayLetsBattle, MSGBOX_DEFAULT
	goto_if_set FLAG_UNUSED_0x493, PrimroseMeadow_EventScript_RivalMay_2
PrimroseMeadow_EventScript_RivalMay_1:
	goto_if_set FLAG_UNUSED_0x494, PrimroseMeadow_EventScript_RivalMay_5
PrimroseMeadow_EventScript_RivalMay_4:
	goto_if_set FLAG_UNUSED_0x495, PrimroseMeadow_EventScript_RivalMay_8
PrimroseMeadow_EventScript_RivalMay_7:
	end

PrimroseMeadow_EventScript_RivalMay_2:
	call PRMeadow_StartMayBattleRowlet
	goto PrimroseMeadow_EventScript_RivalMay_1

PrimroseMeadow_EventScript_RivalMay_5:
	call PRMeadow_StartMayBattleTorchic
	goto PrimroseMeadow_EventScript_RivalMay_4

PrimroseMeadow_EventScript_RivalMay_8:
	call PRMeadow_StartMayBattlePiplup
	goto PrimroseMeadow_EventScript_RivalMay_7


PrimroseMeadow_EventScript_RivalBrendan::
	msgbox PrimroseMeadow_Text_RivalPokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox PRMeadow_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	goto_if_set FLAG_UNUSED_0x493, PrimroseMeadow_EventScript_RivalBrendan_2
PrimroseMeadow_EventScript_RivalBrendan_1:
	goto_if_set FLAG_UNUSED_0x494, PrimroseMeadow_EventScript_RivalBrendan_5
PrimroseMeadow_EventScript_RivalBrendan_4:
	goto_if_set FLAG_UNUSED_0x495, PrimroseMeadow_EventScript_RivalBrendan_8
PrimroseMeadow_EventScript_RivalBrendan_7:
	end

PrimroseMeadow_EventScript_RivalBrendan_2:
	call PRMeadow_StartBrendanBattleRowlet
	goto PrimroseMeadow_EventScript_RivalBrendan_1

PrimroseMeadow_EventScript_RivalBrendan_5:
	call PRMeadow_StartBrendanBattleTorchic
	goto PrimroseMeadow_EventScript_RivalBrendan_4

PrimroseMeadow_EventScript_RivalBrendan_8:
	call PRMeadow_StartBrendanBattlePiplup
	goto PrimroseMeadow_EventScript_RivalBrendan_7


PRMeadow_StartMayBattleRowlet::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, PRMeadow_MayDefeated
	goto PRMeadow_AfterMayBattle
	end


PRMeadow_StartMayBattleTorchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, PRMeadow_MayDefeated
	goto PRMeadow_AfterMayBattle
	end


PRMeadow_StartMayBattlePiplup::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, PRMeadow_MayDefeated
	goto PRMeadow_AfterMayBattle
	end


PRMeadow_StartBrendanBattleRowlet::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, PRMeadow_BrendanDefeated
	goto PRMeadow_AfterBrendanBattle
	end


PRMeadow_StartBrendanBattleTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, PRMeadow_BrendanDefeated
	goto PRMeadow_AfterBrendanBattle
	end


PRMeadow_StartBrendanBattlePiplup::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, PRMeadow_BrendanDefeated
	goto PRMeadow_AfterBrendanBattle
	end


PRMeadow_AfterMayBattle::
	msgbox PRMeadow_MayTimeToHeadBack, MSGBOX_DEFAULT
	setvar VAR_PEARLWOOD_TOWN_STATE, 9
	goto PRMeadow_RivalExit
	end


PRMeadow_AfterBrendanBattle::
	msgbox PRMeadow_BrendanTimeToHeadBack, MSGBOX_DEFAULT
	setvar VAR_PEARLWOOD_TOWN_STATE, 9
	goto PRMeadow_RivalExit
	end


PRMeadow_RivalExit::
	closemessage
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PRMeadow_RivalExit_2
PRMeadow_RivalExit_1:
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PRMeadow_RivalExit_5
PRMeadow_RivalExit_4:
	compare VAR_FACING, DIR_WEST
	goto_if_eq PRMeadow_RivalExit_8
PRMeadow_RivalExit_7:
	compare VAR_FACING, DIR_EAST
	goto_if_eq PRMeadow_RivalExit_11
PRMeadow_RivalExit_10:
	end

PRMeadow_RivalExit_2:
	goto PRMeadow_RivalExitFacingSouth
	goto PRMeadow_RivalExit_1

PRMeadow_RivalExit_5:
	goto PRMeadow_RivalExitFacingNorth
	goto PRMeadow_RivalExit_4

PRMeadow_RivalExit_8:
	goto PRMeadow_RivalExitFacingSouthEastorWest
	goto PRMeadow_RivalExit_7

PRMeadow_RivalExit_11:
	goto PRMeadow_RivalExitFacingSouthEastorWest
	goto PRMeadow_RivalExit_10


PRMeadow_RivalExitFacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingNorth
	applymovement 1, PRMeadow_Movement_RivalExitFacingNorth1
	waitmovement 0
	goto PRMeadow_RivalEnd
	end


PRMeadow_RivalExitFacingSouthEastorWest::
	applymovement OBJ_EVENT_ID_PLAYER, PRMeadow_Movement_WatchRivalExitFacingEastOrWest
	applymovement 1, PRMeadow_Movement_RivalExit1
	waitmovement 0
	goto PRMeadow_RivalEnd
	end


PRMeadow_RivalExitFacingSouth::
	applymovement 1, PRMeadow_Movement_RivalExit1
	waitmovement 0
	goto PRMeadow_RivalEnd
	end


PRMeadow_RivalEnd::
	removeobject 1
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end


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
	.string "{RIVAL}: Let's see… The Pokémon found\nin Primrose Meadow include…$"

PRMeadow_Text_MayLetsBattle::
	.string "Oh, hi {PLAYER}!\pI knew it!\nMy dad did give you a Pokémon!\pSince we're here, let's have a quick\nbattle!\pI'll give you a taste of what being\na trainer is like.$"

PRMeadow_MayDefeated::
	.string "Wow! That's great!\n{PLAYER}, you're pretty good!$"

PRMeadow_Text_BrendanLetsBattle::
	.string "Hey, it's {PLAYER}!\p…Oh yeah, I knew dad was going\nto give you a Pokémon.\pSince we're here, how about a little\nbattle?\pI'll teach you what being a trainer's\nabout!$"

PRMeadow_BrendanDefeated::
	.string "Huh, {PLAYER}, that wasn't too bad.$"

PRMeadow_MayTimeToHeadBack::
	.string "{RIVAL}: You really are something,\n{PLAYER}!\pKeep filling that Pokédex and training\nyour Pokémon and I'm sure you'll\lbe able to take on the Pokémon League\lin no time!\p…What do you mean, “What Pokédex?”\p…WHAT!?\nMy dad didn't give you one!?\pOh I'll make sure he hears about this.\nCome on, let's get back to the lab!$"

PRMeadow_BrendanTimeToHeadBack::
	.string "{RIVAL}: That was a good battle,\n{PLAYER}!\pKeep filling that Pokédex and training\nyour Pokémon and I'm sure you'll\lbe able to take on the Pokémon League\lin no time!\p…What do you mean, “What Pokédex?”\p…What?\nMy dad didn't give you one?\pOh we need to fix this.\nCome on, let's get back to the lab!$"
