FrosthearthCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_HIDE_FOLLOWER
	checktrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	return

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm 2, 7, 40
	setobjectxyperm 1, 7, 39
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setobjectxyperm 3, 14, 23
	setobjectxyperm 4, 14, 24
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	setobjectxyperm 5, 19, 37
	setobjectxyperm 6, 19, 38
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
	setobjectxyperm 7, 26, 25
	setobjectxyperm 8, 26, 24
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
	setobjectxyperm 9, 33, 31
	setobjectxyperm 10, 34, 31
	return

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_RESUME:
	setstepcallback STEP_CB_ICY_GYM_FLOOR
	return


CheckForLiveMons::
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne CheckForLiveMons_1
	return

CheckForLiveMons_1:
	release
	end


FrostGym_Tr1_Hiker1::
	checktrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	goto_if 0, FrostGym_Tr1_Hiker1_2
FrostGym_Tr1_Hiker1_1:
	lock
	playbgm MUS_ENCOUNTER_HIKER, FALSE
	applymovement 2, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr1_Hiker1_Main
	return

FrostGym_Tr1_Hiker1_2:
	call CheckForLiveMons
	goto FrostGym_Tr1_Hiker1_1


FrostGym_Tr1_Hiker1_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	goto_if 1, FrostGym_Tr1_Hiker1_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr1_Hiker1_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_HIKER, FALSE
	goto FrostGym_Tr1_Hiker1_Main
	return

FrostGym_Tr1_Hiker1_Interact_2:
	msgbox FrostGymTr1_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr1_Hiker1_Interact_5:
	msgbox FrostGymTr1_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr1_Hiker1_Main::
	msgbox FrostGymTr1_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR1_HIKER1, FrostGymTr1_Lose, TRAINER_FROSTGYM_TR2_KINDLER1, FrostGymTr2_Lose
	delay 30
	applymovement 2, FrostGym_Tr1_Hiker1_Main_Movement_0
	applymovement 1, FrostGym_Tr1_Hiker1_Main_Movement_0
	waitmovement 0
	setobjectxyperm 2, 7, 40
	setobjectxyperm 1, 7, 39
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	release
	return


FrostGym_Tr2_Kindler1::
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 0, FrostGym_Tr2_Kindler1_2
FrostGym_Tr2_Kindler1_1:
	lock
	playbgm MUS_ENCOUNTER_HIKER, FALSE
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr2_Kindler1_Main
	return

FrostGym_Tr2_Kindler1_2:
	call CheckForLiveMons
	goto FrostGym_Tr2_Kindler1_1


FrostGym_Tr2_Kindler1_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 1, FrostGym_Tr2_Kindler1_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr2_Kindler1_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_HIKER, FALSE
	goto FrostGym_Tr2_Kindler1_Main
	return

FrostGym_Tr2_Kindler1_Interact_2:
	msgbox FrostGymTr2_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr2_Kindler1_Interact_5:
	msgbox FrostGymTr2_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr2_Kindler1_Main::
	msgbox FrostGymTr2_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR2_KINDLER1, FrostGymTr2_Lose, TRAINER_FROSTGYM_TR1_HIKER1, FrostGymTr1_Lose
	delay 30
	applymovement 2, FrostGym_Tr1_Hiker1_Main_Movement_0
	applymovement 1, FrostGym_Tr1_Hiker1_Main_Movement_0
	waitmovement 0
	setobjectxyperm 2, 7, 40
	setobjectxyperm 1, 7, 39
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	release
	return


FrostGym_Tr3_Senior::
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 0, FrostGym_Tr3_Senior_2
FrostGym_Tr3_Senior_1:
	lock
	playbgm MUS_ENCOUNTER_TWINS, FALSE
	applymovement 3, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr3_Senior_Main
	return

FrostGym_Tr3_Senior_2:
	call CheckForLiveMons
	goto FrostGym_Tr3_Senior_1


FrostGym_Tr3_Senior_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 1, FrostGym_Tr3_Senior_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr3_Senior_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_TWINS, FALSE
	goto FrostGym_Tr3_Senior_Main
	return

FrostGym_Tr3_Senior_Interact_2:
	msgbox FrostGymTr3_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr3_Senior_Interact_5:
	msgbox FrostGymTr3_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr3_Senior_Main::
	msgbox FrostGymTr3_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR4_JUNIOR, FrostGymTr4_Lose, TRAINER_FROSTGYM_TR3_SENIOR, FrostGymTr3_Lose
	delay 30
	applymovement 3, FrostGym_Tr3_Senior_Main_Movement_0
	applymovement 4, FrostGym_Tr3_Senior_Main_Movement_0
	waitmovement 0
	setobjectxyperm 3, 14, 23
	setobjectxyperm 4, 14, 24
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	release
	return


FrostGym_Tr4_Junior::
	checktrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	goto_if 0, FrostGym_Tr4_Junior_2
FrostGym_Tr4_Junior_1:
	lock
	playbgm MUS_ENCOUNTER_TWINS, FALSE
	applymovement 4, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr4_Junior_Main
	return

FrostGym_Tr4_Junior_2:
	call CheckForLiveMons
	goto FrostGym_Tr4_Junior_1


FrostGym_Tr4_Junior_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	goto_if 1, FrostGym_Tr4_Junior_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr4_Junior_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_TWINS, FALSE
	goto FrostGym_Tr4_Junior_Main
	return

FrostGym_Tr4_Junior_Interact_2:
	msgbox FrostGymTr4_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr4_Junior_Interact_5:
	msgbox FrostGymTr4_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr4_Junior_Main::
	msgbox FrostGymTr4_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR4_JUNIOR, FrostGymTr4_Lose, TRAINER_FROSTGYM_TR3_SENIOR, FrostGymTr3_Lose
	delay 30
	applymovement 3, FrostGym_Tr3_Senior_Main_Movement_0
	applymovement 4, FrostGym_Tr3_Senior_Main_Movement_0
	waitmovement 0
	setobjectxyperm 3, 14, 23
	setobjectxyperm 4, 14, 24
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	release
	return


FrostGym_Tr5_RangerM::
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 0, FrostGym_Tr5_RangerM_2
FrostGym_Tr5_RangerM_1:
	lock
	playbgm MUS_ENCOUNTER_COOL, FALSE
	applymovement 6, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr5_RangerM_Main
	return

FrostGym_Tr5_RangerM_2:
	call CheckForLiveMons
	goto FrostGym_Tr5_RangerM_1


FrostGym_Tr5_RangerM_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 1, FrostGym_Tr5_RangerM_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr5_RangerM_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_COOL, FALSE
	goto FrostGym_Tr5_RangerM_Main
	return

FrostGym_Tr5_RangerM_Interact_2:
	msgbox FrostGymTr5_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr5_RangerM_Interact_5:
	msgbox FrostGymTr5_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr5_RangerM_Main::
	msgbox FrostGymTr5_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR5_RANGER_M, FrostGymTr5_Lose, TRAINER_FROSTGYM_TR6_RANGER_F, FrostGymTr6_Lose
	delay 30
	applymovement 5, FrostGym_Tr3_Senior_Main_Movement_0
	applymovement 6, FrostGym_Tr3_Senior_Main_Movement_0
	waitmovement 0
	setobjectxyperm 5, 19, 37
	setobjectxyperm 6, 19, 38
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	release
	return


FrostGym_Tr6_RangerF::
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 0, FrostGym_Tr6_RangerF_2
FrostGym_Tr6_RangerF_1:
	lock
	playbgm MUS_ENCOUNTER_COOL, FALSE
	applymovement 5, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr6_RangerF_Main
	return

FrostGym_Tr6_RangerF_2:
	call CheckForLiveMons
	goto FrostGym_Tr6_RangerF_1


FrostGym_Tr6_RangerF_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 1, FrostGym_Tr6_RangerF_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr6_RangerF_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_COOL, FALSE
	goto FrostGym_Tr6_RangerF_Main
	return

FrostGym_Tr6_RangerF_Interact_2:
	msgbox FrostGymTr6_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr6_RangerF_Interact_5:
	msgbox FrostGymTr6_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr6_RangerF_Main::
	msgbox FrostGymTr6_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR6_RANGER_F, FrostGymTr6_Lose, TRAINER_FROSTGYM_TR5_RANGER_M, FrostGymTr5_Lose
	delay 30
	applymovement 5, FrostGym_Tr3_Senior_Main_Movement_0
	applymovement 6, FrostGym_Tr3_Senior_Main_Movement_0
	waitmovement 0
	setobjectxyperm 5, 19, 37
	setobjectxyperm 6, 19, 38
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	release
	return


FrostGym_Tr7_Maniac::
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 0, FrostGym_Tr7_Maniac_2
FrostGym_Tr7_Maniac_1:
	lock
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
	applymovement 7, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr7_Maniac_Main
	return

FrostGym_Tr7_Maniac_2:
	call CheckForLiveMons
	goto FrostGym_Tr7_Maniac_1


FrostGym_Tr7_Maniac_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 1, FrostGym_Tr7_Maniac_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr7_Maniac_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
	goto FrostGym_Tr7_Maniac_Main
	return

FrostGym_Tr7_Maniac_Interact_2:
	msgbox FrostGymTr7_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr7_Maniac_Interact_5:
	msgbox FrostGymTr7_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr7_Maniac_Main::
	msgbox FrostGymTr7_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR7_MANIAC, FrostGymTr7_Lose, TRAINER_FROSTGYM_TR8_COLLECTOR, FrostGymTr8_Lose
	delay 30
	applymovement 7, FrostGym_Tr1_Hiker1_Main_Movement_0
	applymovement 8, FrostGym_Tr1_Hiker1_Main_Movement_0
	waitmovement 0
	setobjectxyperm 7, 26, 25
	setobjectxyperm 8, 26, 24
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	release
	return


FrostGym_Tr8_Collector::
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 0, FrostGym_Tr8_Collector_2
FrostGym_Tr8_Collector_1:
	lock
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
	applymovement 8, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr8_Collector_Main
	return

FrostGym_Tr8_Collector_2:
	call CheckForLiveMons
	goto FrostGym_Tr8_Collector_1


FrostGym_Tr8_Collector_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 1, FrostGym_Tr8_Collector_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr8_Collector_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
	goto FrostGym_Tr8_Collector_Main
	return

FrostGym_Tr8_Collector_Interact_2:
	msgbox FrostGymTr8_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr8_Collector_Interact_5:
	msgbox FrostGymTr8_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr8_Collector_Main::
	msgbox FrostGymTr8_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR8_COLLECTOR, FrostGymTr8_Lose, TRAINER_FROSTGYM_TR7_MANIAC, FrostGymTr7_Lose
	delay 30
	applymovement 7, FrostGym_Tr1_Hiker1_Main_Movement_0
	applymovement 8, FrostGym_Tr1_Hiker1_Main_Movement_0
	waitmovement 0
	setobjectxyperm 7, 26, 25
	setobjectxyperm 8, 26, 24
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	release
	return


FrostGym_Tr9_Kindler2::
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 0, FrostGym_Tr9_Kindler2_2
FrostGym_Tr9_Kindler2_1:
	lock
	playbgm MUS_ENCOUNTER_HIKER, FALSE
	applymovement 9, ExclamationMark
	waitmovement 0
	delay 48
	goto FrostGym_Tr9_Kindler2_Main
	return

FrostGym_Tr9_Kindler2_2:
	call CheckForLiveMons
	goto FrostGym_Tr9_Kindler2_1


FrostGym_Tr9_Kindler2_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 1, FrostGym_Tr9_Kindler2_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr9_Kindler2_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_HIKER, FALSE
	goto FrostGym_Tr9_Kindler2_Main
	return

FrostGym_Tr9_Kindler2_Interact_2:
	msgbox FrostGymTr9_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr9_Kindler2_Interact_5:
	msgbox FrostGymTr9_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr9_Kindler2_Main::
	msgbox FrostGymTr9_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR9_KINDLER2, FrostGymTr9_Lose, TRAINER_FROSTGYM_TR10_RANGER_F2, FrostGymTr10_Lose
	delay 30
	applymovement 9, FrostGym_Tr9_Kindler2_Main_Movement_0
	applymovement 10, FrostGym_Tr9_Kindler2_Main_Movement_0
	waitmovement 0
	setobjectxyperm 9, 33, 31
	setobjectxyperm 10, 34, 31
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	release
	return


FrostGym_Tr10_RangerF2::
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 0, FrostGym_Tr10_RangerF2_2
FrostGym_Tr10_RangerF2_1:
	lock
	playbgm MUS_ENCOUNTER_COOL, FALSE
	applymovement 10, ExclamationMark
	waitmovement 0
	delay 48
	turnobject 0xFF, DIR_SOUTH
	goto FrostGym_Tr10_RangerF2_Main
	return

FrostGym_Tr10_RangerF2_2:
	call CheckForLiveMons
	goto FrostGym_Tr10_RangerF2_1


FrostGym_Tr10_RangerF2_Interact::
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 1, FrostGym_Tr10_RangerF2_Interact_2
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr10_RangerF2_Interact_5
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_COOL, FALSE
	goto FrostGym_Tr10_RangerF2_Main
	return

FrostGym_Tr10_RangerF2_Interact_2:
	msgbox FrostGymTr10_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr10_RangerF2_Interact_5:
	msgbox FrostGymTr10_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr10_RangerF2_Main::
	msgbox FrostGymTr10_Intro
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR10_RANGER_F2, FrostGymTr10_Lose, TRAINER_FROSTGYM_TR9_KINDLER2, FrostGymTr9_Lose
	delay 30
	applymovement 9, FrostGym_Tr9_Kindler2_Main_Movement_0
	applymovement 10, FrostGym_Tr9_Kindler2_Main_Movement_0
	waitmovement 0
	setobjectxyperm 9, 33, 31
	setobjectxyperm 10, 34, 31
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	release
	return


Frosthearth_Gym_Statue::
	goto_if_set FLAG_BADGE06_GET, Frosthearth_Gym_Statue_1
	msgbox Frosthearth_Gym_Statue_Text, MSGBOX_NPC
	return

Frosthearth_Gym_Statue_1:
	msgbox Frosthearth_Gym_Statue_Post, MSGBOX_NPC
	return


Frosthearth_Gym_Guide::
	goto_if_set FLAG_BADGE06_GET, Frosthearth_Gym_Guide_1
	msgbox Frosthearth_Gym_Guide_Text, MSGBOX_NPC
	return

Frosthearth_Gym_Guide_1:
	msgbox Frosthearth_Gym_Guide_Post, MSGBOX_NPC
	return


FrosthearthGym_LeaderTrigger::
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_LeaderTrigger_2
	setvar VAR_TEMP_0, 5
	call GymStartingMovement
	msgbox BlainePryceIntro
	msgbox BlainePryceIntro2
	msgbox BlainePryceIntro3
	trainerbattle_two_trainers TRAINER_LEADER_BLAINE, BlaineLoseText, TRAINER_LEADER_PRYCE, PryceLoseText
	goto FrosthearthGym_PosBatEvent
	return

FrosthearthGym_LeaderTrigger_2:
	release
	end


FrosthearthGym_PosBatEvent::
	call GymMovementAfter
	msgbox Pryce_AfterDefeat
	message FrosthearthGym_ReceiveBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Pryce_ExplainBadge
	closemessage
	setflag FLAG_BADGE06_GET
	applymovement 13, FrosthearthGym_PosBatEvent_Movement_0
	applymovement 0xFF, FrosthearthGym_PosBatEvent_Movement_1
	waitmovement 0
	msgbox BlaineTakeThisTM
	giveitem ITEM_TM_ICE_BURN
	msgbox Blaine_ExplainIceBurn
	call SetFrosthearthGymTrainerFlags
	closemessage
	special RemoveCameraObject
	release
	end


SetFrosthearthGymTrainerFlags::
	settrainerflag TRAINER_LEADER_PRYCE
	settrainerflag TRAINER_LEADER_BLAINE
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	return


FrosthearthGym_PryceTalk::
	goto_if_set FLAG_BADGE06_GET, FrosthearthGym_PryceTalk_1
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_PryceTalk_5
	msgbox PryceGoStandInArena, MSGBOX_NPC
FrosthearthGym_PryceTalk_4:
	turnobject 12, DIR_WEST
	return

FrosthearthGym_PryceTalk_1:
	msgbox FrosthearthGym_PrycePosBat, MSGBOX_NPC
	return

FrosthearthGym_PryceTalk_5:
	msgbox PryceNotEnoughMons, MSGBOX_NPC
	goto FrosthearthGym_PryceTalk_4


FrosthearthGym_BlaineTalk::
	goto_if_set FLAG_BADGE06_GET, FrosthearthGym_BlaineTalk_1
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_BlaineTalk_5
	msgbox BlaineGoStandInArena, MSGBOX_NPC
FrosthearthGym_BlaineTalk_4:
	turnobject 13, DIR_WEST
	return

FrosthearthGym_BlaineTalk_1:
	msgbox FrosthearthGym_BlainePosBat, MSGBOX_NPC
	return

FrosthearthGym_BlaineTalk_5:
	msgbox BlaineNotEnoughMons, MSGBOX_NPC
	goto FrosthearthGym_BlaineTalk_4


FrostGym_Tr1_Hiker1_Main_Movement_0:
	lock_facing_direction
	walk_left
	step_end

FrostGym_Tr3_Senior_Main_Movement_0:
	lock_facing_direction
	walk_right
	step_end

FrostGym_Tr9_Kindler2_Main_Movement_0:
	lock_facing_direction
	walk_down
	step_end

FrosthearthGym_PosBatEvent_Movement_0:
	walk_left
	walk_in_place_fast_up
	step_end

FrosthearthGym_PosBatEvent_Movement_1:
	delay_16
	walk_in_place_fast_down
	step_end

FrostGymTr1_Intro::
	.string "Having trouble figuring out\n"
	.string "the way?\p"
	.string "Defeat us, and maybe the way\n"
	.string "will become clear!$"

FrostGymTr1_Lose::
	.string "Looks like we lost.\n"
	.string "Best we step aside…$"

FrostGymTr1_PostBattle::
	.string "In this gym, defeating other\n"
	.string "trainers is your road to success!$"

FrostGymTr1_NotEnoughMons::
	.string "You're going to need more Pokémon\n"
	.string "if you want to battle us!$"

FrostGymTr2_Intro::
	.string "Having trouble figuring out\n"
	.string "the way?\p"
	.string "Defeat us, and maybe the way\n"
	.string "will become clear!$"

FrostGymTr2_Lose::
	.string "I can't believe we lost…$"

FrostGymTr2_PostBattle::
	.string "This gym is all about team play.\p"
	.string "Even if you're taking on the\n"
	.string "challenge alone, you still need to\l"
	.string "consider the synergy between your\l"
	.string "Pokémon.$"

FrostGymTr2_NotEnoughMons::
	.string "You're going to need more Pokémon\n"
	.string "if you want to battle us!$"

FrostGymTr3_Intro::
	.string "Well, sure.\n"
	.string "I'm in the mood for it.\l"
	.string "I'll teach you a little about Pokémon.$"

FrostGymTr3_Lose::
	.string "What an amazing battle style!$"

FrostGymTr3_PostBattle::
	.string "I was teaching my junior Irene\n"
	.string "about Pokémon.$"

FrostGymTr3_NotEnoughMons::
	.string "Giggle…\n"
	.string "If you want to battle with us, just one\l"
	.string "Pokémon isn't enough!$"

FrostGymTr4_Intro::
	.string "Who taught you about Pokémon?$"

FrostGymTr4_Lose::
	.string "Aww… It's already over?$"

FrostGymTr4_PostBattle::
	.string "I started training Pokémon\n"
	.string "because Helena, my student mentor,\l"
	.string "taught me!$"

FrostGymTr4_NotEnoughMons::
	.string "Do you only have one Pokémon?\n"
	.string "I think it must feel lonesome.$"

FrostGymTr5_Intro::
	.string "Prepare for trouble!\n"
	.string "And make it double!$"

FrostGymTr5_Lose::
	.string "Our teamwork could use some\n"
	.string "improvement…$"

FrostGymTr5_PostBattle::
	.string "It was Blaine's genius that came up\n"
	.string "with the idea to incorporate\l"
	.string "Pokémon battles with the gym puzzle.$"

FrostGymTr5_NotEnoughMons::
	.string "You're not trying to challenge us\n"
	.string "with only one Pokémon, are you?$"

FrostGymTr6_Intro::
	.string "Prepare for trouble!\n"
	.string "And make it double!$"

FrostGymTr6_Lose::
	.string "I think we may need to look into\n"
	.string "developing new synergies…$"

FrostGymTr6_PostBattle::
	.string "Pryce is the mastermind behind the\n"
	.string "gym challenge here.\p"
	.string "He may be old, but his mind can\n"
	.string "still come up with a lot of new ideas.$"

FrostGymTr6_NotEnoughMons::
	.string "You're not trying to challenge us\n"
	.string "with only one Pokémon, are you?$"

FrostGymTr7_Intro::
	.string "Not bad getting this far.\n"
	.string "Too bad it all ends here!$"

FrostGymTr7_Lose::
	.string "No!\p"
	.string "We were supposed to be\n"
	.string "unstoppable!$"

FrostGymTr7_PostBattle::
	.string "Yes yes, you beat us.\n"
	.string "Feeling pretty proud, huh?$"

FrostGymTr7_NotEnoughMons::
	.string "What's the matter?\n"
	.string "Can't catch any Pokémon?\p"
	.string "If you want to battle,\n"
	.string "Catch more Pokémon first.$"

FrostGymTr8_Intro::
	.string "Not bad getting this far.\n"
	.string "Too bad it all ends here!$"

FrostGymTr8_Lose::
	.string "Sometimes I wonder why I\n"
	.string "team up with this guy…$"

FrostGymTr8_PostBattle::
	.string "You seem pretty strong.\p"
	.string "If you ever feel like staying here\n"
	.string "for a longer period of time,\l"
	.string "let me know and maybe we can\l"
	.string "partner up.$"

FrostGymTr8_NotEnoughMons::
	.string "What's the matter?\n"
	.string "Can't catch any Pokémon?\p"
	.string "If you want to battle,\n"
	.string "Catch more Pokémon first.$"

FrostGymTr9_Intro::
	.string "I'm Blaine's most talented student.\n"
	.string "You have no chance against me!$"

FrostGymTr9_Lose::
	.string "I've let my teacher down…$"

FrostGymTr9_PostBattle::
	.string "If you've gotten this far,\n"
	.string "then it must mean you've beaten\l"
	.string "everyone except the Gym Leaders.\p"
	.string "Good luck.$"

FrostGymTr9_NotEnoughMons::
	.string "I'm sorry, but we only battle\n"
	.string "in pairs.\p"
	.string "If you want to battle us, make sure\n"
	.string "you have at least two Pokémon first.$"

FrostGymTr10_Intro::
	.string "I'm Pryce's most talented student.\n"
	.string "You have no chance against me!$"

FrostGymTr10_Lose::
	.string "Good job beating up a mere\n"
	.string "student.\p"
	.string "Now let's see if you can take\n"
	.string "on the teacher!$"

FrostGymTr10_PostBattle::
	.string "Just beyond here lies the\n"
	.string "Gym Leaders' chamber.\p"
	.string "I hope you're prepared for the\n"
	.string "challenge ahead.$"

FrostGymTr10_NotEnoughMons::
	.string "I'm sorry, but we only battle\n"
	.string "in pairs.\p"
	.string "If you want to battle us, make sure\n"
	.string "you have at least two Pokémon first.$"

Frosthearth_Gym_Statue_Text::
	.string "Frosthearth City Pokémon Gym\p"
	.string "Pryce and Blaine's certified\n"
	.string "trainers:\l"
	.string "{BROTHER}$"

Frosthearth_Gym_Statue_Post::
	.string "Frosthearth City Pokémon Gym\p"
	.string "Pryce and Blaine's certified\n"
	.string "trainers:\l"
	.string "{BROTHER}\l"
	.string "{PLAYER}$"

Frosthearth_Gym_Guide_Text::
	.string "Yo, champ in the making!\p"
	.string "Don't let the looks of the gym\n"
	.string "deceive you!\p"
	.string "The gym may look like it's all\n"
	.string "frozen over, but the passion\l"
	.string "of the trainers here burns bright!\p"
	.string "Our Gym Leaders Pryce and Blaine\n"
	.string "specialize in Ice- and Fire-type\l"
	.string "Pokémon, so you best prepare\l"
	.string "accordingly!\p"
	.string "If you're feeling lost and can't\n"
	.string "seem to find a way forward,\l"
	.string "try battling some of the trainers\l"
	.string "you see here.\p"
	.string "Maybe they'll give you a\n"
	.string "helping hand!\p"
	.string "Anyway, that's enough from me.\n"
	.string "Go get 'em, Champ!$"

Frosthearth_Gym_Guide_Post::
	.string "Way to go, Champ!\p"
	.string "Going against a Gym Leader\n"
	.string "can be tough, but here you are,\l"
	.string "having beaten two at the same time!\p"
	.string "Keep pushing forward, and you'll\n"
	.string "be challenging the Pokémon League\l"
	.string "in no time!$"

Pryce_AfterDefeat::
	.string "Pryce: You've surpassed my\n"
	.string "expectations.\p"
	.string "As one of the Gym Leaders of\n"
	.string "this gym, I am authorized to\l"
	.string "give you this.$"

FrosthearthGym_ReceiveBadge::
	.string "{PLAYER} received the Frostburn Badge\n"
	.string "from Pryce!$"

Pryce_ExplainBadge::
	.string "With the Frostburn Badge in your\n"
	.string "possession, any traded Pokémon\l"
	.string "up to level 80 should unquestionably\l"
	.string "follow all of your commands.$"

BlaineTakeThisTM::
	.string "Blaine: Wait up, kiddo!\p"
	.string "Here, you can have this,\n"
	.string "too!$"

Blaine_ExplainIceBurn::
	.string "That TM contains the move\n"
	.string "Ice Burn.\p"
	.string "It's a really powerful Ice-type\n"
	.string "attack that can leave the opponent\l"
	.string "with a very nasty burn.\p"
	.string "Do be careful though!\p"
	.string "It takes a while to charge up\n"
	.string "the move, leaving your Pokémon\l"
	.string "vulnerable to attacks!$"

BlainePryceIntro::
	.string "Pryce: Welcome, challenger.\p"
	.string "I'm surprised to see you again\n"
	.string "so soon.$"

BlainePryceIntro2::
	.string "Blaine: So this is the kid you\n"
	.string "were talking about?\p"
	.string "Interesting…\p"
	.string "I'm curious to see if they'll\n"
	.string "measure up to your praises.$"

BlainePryceIntro3::
	.string "Blaine: In any case…\p"
	.string "Yes, welcome, challenger!\n"
	.string "I am Blaine!\p"
	.string "Pryce: And I am Pryce!\p"
	.string "Blaine: Together we are the Gym\n"
	.string "Leaders of the Frosthearth\l"
	.string "Pokémon Gym!\p"
	.string "I hope you are well prepared\n"
	.string "for both ends of the extremes,\l"
	.string "for our Pokémon will incinerate,\l"
	.string "Pryce: And freeze any challengers!$"

BlaineLoseText::
	.string "What?! Our combination\n"
	.string "was shattered!\p"
	.string "This was not the outcome\n"
	.string "I expected to see!$"

PryceLoseText::
	.string "Hmph…\p"
	.string "When I first laid my eyes on you,\n"
	.string "I knew one day you would surpass me.\p"
	.string "I just didn't imagine that day\n"
	.string "to be so soon…$"

FrosthearthGym_PrycePosBat::
	.string "Make sure to always keep your\n"
	.string "head cool, and you'll end up\l"
	.string "doing great things.\p"
	.string "I'm sure of it!$"

PryceNotEnoughMons::
	.string "Ah, my savior has arrived.\p"
	.string "I had a feeling we'd be meeting\n"
	.string "again sooner or later.\p"
	.string "Before we begin, do make sure\n"
	.string "you have at least two Pokémon\l"
	.string "that are ready to battle.\p"
	.string "Once ready, take your place on\n"
	.string "the other side of the arena.$"

PryceGoStandInArena::
	.string "Ah, my savior has arrived.\p"
	.string "I had a feeling we'd be meeting\n"
	.string "again sooner or later.\p"
	.string "Go on, take your place on the other\n"
	.string "side of the arena and we may begin.$"

FrosthearthGym_BlainePosBat::
	.string "I can see the fire burning in\n"
	.string "your heart.\p"
	.string "You're gonna go far, kid!$"

BlaineNotEnoughMons::
	.string "Ah, a new challenger has arrived.\p"
	.string "Oh, but you seem to be running low\n"
	.string "on Pokémon.\p"
	.string "Make sure you have at least two\n"
	.string "Pokémon that are ready to battle.\p"
	.string "Once you've done that, go ahead and\n"
	.string "stand right over there on the other\l"
	.string "side of the arena, and we may begin.$"

BlaineGoStandInArena::
	.string "Ah, a new challenger has arrived.\p"
	.string "If you're ready, go ahead and\n"
	.string "stand right over there on the other\l"
	.string "side of the arena, and we may begin.$"
