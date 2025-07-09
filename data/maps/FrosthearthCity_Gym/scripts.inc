FrosthearthCity_Gym_MapScripts::
# 13 "data/maps/FrosthearthCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 41 "data/maps/FrosthearthCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 15 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 25 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 25 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 30 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 30 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 35 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
# 35 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 1, FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	return

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 2, 7, 40
# 18 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 1, 7, 39
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 22 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 3, 14, 23
# 23 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 4, 14, 24
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 27 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 5, 19, 37
# 28 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 6, 19, 38
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 32 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 7, 26, 25
# 33 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 8, 26, 24
	goto FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 37 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 9, 33, 31
# 38 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 10, 34, 31
	return

FrosthearthCity_Gym_MapScripts_MAP_SCRIPT_ON_RESUME:
# 42 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setstepcallback STEP_CB_ICY_GYM_FLOOR
	return


CheckForLiveMons::
# 47 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 48 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne CheckForLiveMons_1
	return

CheckForLiveMons_1:
# 49 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	end


FrostGym_Tr1_Hiker1::
# 61 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	goto_if 0, FrostGym_Tr1_Hiker1_2
FrostGym_Tr1_Hiker1_1:
# 64 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 65 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 66 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 2
# 67 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr1_Hiker1_Main
	return

FrostGym_Tr1_Hiker1_2:
# 62 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr1_Hiker1_1


FrostGym_Tr1_Hiker1_Interact::
# 70 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	goto_if 1, FrostGym_Tr1_Hiker1_Interact_2
# 74 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 75 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr1_Hiker1_Interact_5
# 79 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 80 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 81 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 82 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr1_Hiker1_Main
	return

FrostGym_Tr1_Hiker1_Interact_2:
# 71 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr1_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr1_Hiker1_Interact_5:
# 76 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr1_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr1_Hiker1_Main::
# 85 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr1_Intro
# 86 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR1_HIKER1, FrostGymTr1_Lose, TRAINER_FROSTGYM_TR2_KINDLER1, FrostGymTr2_Lose
# 87 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 88 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 2, FrostGym_Tr1_Hiker1_Main_Movement_0
# 89 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 1, FrostGym_Tr1_Hiker1_Main_Movement_0
# 90 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 91 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 2, 7, 40
# 92 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 1, 7, 39
# 93 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
# 94 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
# 95 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr2_Kindler1::
# 119 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 0, FrostGym_Tr2_Kindler1_2
FrostGym_Tr2_Kindler1_1:
# 122 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 123 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 124 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 1
# 125 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr2_Kindler1_Main
	return

FrostGym_Tr2_Kindler1_2:
# 120 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr2_Kindler1_1


FrostGym_Tr2_Kindler1_Interact::
# 128 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 1, FrostGym_Tr2_Kindler1_Interact_2
# 132 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 133 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr2_Kindler1_Interact_5
# 137 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 138 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 139 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 140 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr2_Kindler1_Main
	return

FrostGym_Tr2_Kindler1_Interact_2:
# 129 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr2_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr2_Kindler1_Interact_5:
# 134 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr2_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr2_Kindler1_Main::
# 143 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr2_Intro
# 144 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR2_KINDLER1, FrostGymTr2_Lose, TRAINER_FROSTGYM_TR1_HIKER1, FrostGymTr1_Lose
# 145 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 146 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 2, FrostGym_Tr1_Hiker1_Main_Movement_0
# 147 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 1, FrostGym_Tr1_Hiker1_Main_Movement_0
# 148 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 149 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 2, 7, 40
# 150 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 1, 7, 39
# 151 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
# 152 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
# 153 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr3_Senior::
# 179 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 0, FrostGym_Tr3_Senior_2
FrostGym_Tr3_Senior_1:
# 182 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 183 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 184 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 3
# 185 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr3_Senior_Main
	return

FrostGym_Tr3_Senior_2:
# 180 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr3_Senior_1


FrostGym_Tr3_Senior_Interact::
# 188 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 1, FrostGym_Tr3_Senior_Interact_2
# 192 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 193 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr3_Senior_Interact_5
# 197 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 198 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 199 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 200 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr3_Senior_Main
	return

FrostGym_Tr3_Senior_Interact_2:
# 189 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr3_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr3_Senior_Interact_5:
# 194 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr3_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr3_Senior_Main::
# 203 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr3_Intro
# 204 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR4_JUNIOR, FrostGymTr4_Lose, TRAINER_FROSTGYM_TR3_SENIOR, FrostGymTr3_Lose
# 205 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 206 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 3, FrostGym_Tr3_Senior_Main_Movement_0
# 207 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 4, FrostGym_Tr3_Senior_Main_Movement_0
# 208 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 209 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 3, 14, 23
# 210 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 4, 14, 24
# 211 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
# 212 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
# 213 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr4_Junior::
# 236 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	goto_if 0, FrostGym_Tr4_Junior_2
FrostGym_Tr4_Junior_1:
# 239 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 240 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 241 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 4
# 242 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr4_Junior_Main
	return

FrostGym_Tr4_Junior_2:
# 237 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr4_Junior_1


FrostGym_Tr4_Junior_Interact::
# 245 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	goto_if 1, FrostGym_Tr4_Junior_Interact_2
# 249 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 250 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr4_Junior_Interact_5
# 254 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 255 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 256 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 257 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr4_Junior_Main
	return

FrostGym_Tr4_Junior_Interact_2:
# 246 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr4_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr4_Junior_Interact_5:
# 251 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr4_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr4_Junior_Main::
# 260 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr4_Intro
# 261 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR4_JUNIOR, FrostGymTr4_Lose, TRAINER_FROSTGYM_TR3_SENIOR, FrostGymTr3_Lose
# 262 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 263 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 3, FrostGym_Tr3_Senior_Main_Movement_0
# 264 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 4, FrostGym_Tr3_Senior_Main_Movement_0
# 265 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 3, 14, 23
# 267 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 4, 14, 24
# 268 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
# 269 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
# 270 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr5_RangerM::
# 291 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 0, FrostGym_Tr5_RangerM_2
FrostGym_Tr5_RangerM_1:
# 294 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 295 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 296 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 6
# 297 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr5_RangerM_Main
	return

FrostGym_Tr5_RangerM_2:
# 292 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr5_RangerM_1


FrostGym_Tr5_RangerM_Interact::
# 300 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 1, FrostGym_Tr5_RangerM_Interact_2
# 304 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 305 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr5_RangerM_Interact_5
# 309 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 310 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 311 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 312 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr5_RangerM_Main
	return

FrostGym_Tr5_RangerM_Interact_2:
# 301 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr5_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr5_RangerM_Interact_5:
# 306 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr5_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr5_RangerM_Main::
# 315 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr5_Intro
# 316 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR5_RANGER_M, FrostGymTr5_Lose, TRAINER_FROSTGYM_TR6_RANGER_F, FrostGymTr6_Lose
# 317 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 318 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 5, FrostGym_Tr3_Senior_Main_Movement_0
# 319 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 6, FrostGym_Tr3_Senior_Main_Movement_0
# 320 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 5, 19, 37
# 322 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 6, 19, 38
# 323 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
# 324 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
# 325 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr6_RangerF::
# 348 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 0, FrostGym_Tr6_RangerF_2
FrostGym_Tr6_RangerF_1:
# 351 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 352 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 353 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 5
# 354 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr6_RangerF_Main
	return

FrostGym_Tr6_RangerF_2:
# 349 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr6_RangerF_1


FrostGym_Tr6_RangerF_Interact::
# 357 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 1, FrostGym_Tr6_RangerF_Interact_2
# 361 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 362 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr6_RangerF_Interact_5
# 366 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 367 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 368 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 369 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr6_RangerF_Main
	return

FrostGym_Tr6_RangerF_Interact_2:
# 358 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr6_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr6_RangerF_Interact_5:
# 363 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr6_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr6_RangerF_Main::
# 372 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr6_Intro
# 373 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR6_RANGER_F, FrostGymTr6_Lose, TRAINER_FROSTGYM_TR5_RANGER_M, FrostGymTr5_Lose
# 374 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 375 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 5, FrostGym_Tr3_Senior_Main_Movement_0
# 376 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 6, FrostGym_Tr3_Senior_Main_Movement_0
# 377 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 378 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 5, 19, 37
# 379 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 6, 19, 38
# 380 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
# 381 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
# 382 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr7_Maniac::
# 406 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 0, FrostGym_Tr7_Maniac_2
FrostGym_Tr7_Maniac_1:
# 409 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 410 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 411 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 7
# 412 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr7_Maniac_Main
	return

FrostGym_Tr7_Maniac_2:
# 407 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr7_Maniac_1


FrostGym_Tr7_Maniac_Interact::
# 415 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 1, FrostGym_Tr7_Maniac_Interact_2
# 419 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 420 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr7_Maniac_Interact_5
# 424 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 425 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 426 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 427 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr7_Maniac_Main
	return

FrostGym_Tr7_Maniac_Interact_2:
# 416 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr7_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr7_Maniac_Interact_5:
# 421 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr7_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr7_Maniac_Main::
# 430 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr7_Intro
# 431 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR7_MANIAC, FrostGymTr7_Lose, TRAINER_FROSTGYM_TR8_COLLECTOR, FrostGymTr8_Lose
# 432 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 433 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 7, FrostGym_Tr1_Hiker1_Main_Movement_0
# 434 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 8, FrostGym_Tr1_Hiker1_Main_Movement_0
# 435 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 436 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 7, 26, 25
# 437 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 8, 26, 24
# 438 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
# 439 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
# 440 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr8_Collector::
# 465 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 0, FrostGym_Tr8_Collector_2
FrostGym_Tr8_Collector_1:
# 468 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 469 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 470 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 8
# 471 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr8_Collector_Main
	return

FrostGym_Tr8_Collector_2:
# 466 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr8_Collector_1


FrostGym_Tr8_Collector_Interact::
# 474 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 1, FrostGym_Tr8_Collector_Interact_2
# 478 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 479 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr8_Collector_Interact_5
# 483 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 484 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 485 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 486 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr8_Collector_Main
	return

FrostGym_Tr8_Collector_Interact_2:
# 475 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr8_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr8_Collector_Interact_5:
# 480 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr8_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr8_Collector_Main::
# 489 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr8_Intro
# 490 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR8_COLLECTOR, FrostGymTr8_Lose, TRAINER_FROSTGYM_TR7_MANIAC, FrostGymTr7_Lose
# 491 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 492 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 7, FrostGym_Tr1_Hiker1_Main_Movement_0
# 493 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 8, FrostGym_Tr1_Hiker1_Main_Movement_0
# 494 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 495 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 7, 26, 25
# 496 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 8, 26, 24
# 497 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
# 498 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
# 499 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr9_Kindler2::
# 526 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 0, FrostGym_Tr9_Kindler2_2
FrostGym_Tr9_Kindler2_1:
# 529 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 530 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 531 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 9
# 532 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr9_Kindler2_Main
	return

FrostGym_Tr9_Kindler2_2:
# 527 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr9_Kindler2_1


FrostGym_Tr9_Kindler2_Interact::
# 535 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 1, FrostGym_Tr9_Kindler2_Interact_2
# 539 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 540 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr9_Kindler2_Interact_5
# 544 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 545 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 546 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 547 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr9_Kindler2_Main
	return

FrostGym_Tr9_Kindler2_Interact_2:
# 536 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr9_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr9_Kindler2_Interact_5:
# 541 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr9_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr9_Kindler2_Main::
# 550 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr9_Intro
# 551 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR9_KINDLER2, FrostGymTr9_Lose, TRAINER_FROSTGYM_TR10_RANGER_F2, FrostGymTr10_Lose
# 552 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 553 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 9, FrostGym_Tr9_Kindler2_Main_Movement_0
# 554 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 10, FrostGym_Tr9_Kindler2_Main_Movement_0
# 555 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 556 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 9, 33, 31
# 557 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 10, 34, 31
# 558 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
# 559 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
# 560 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr10_RangerF2::
# 585 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 0, FrostGym_Tr10_RangerF2_2
FrostGym_Tr10_RangerF2_1:
# 588 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 589 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 590 "data/maps/FrosthearthCity_Gym/scripts.pory"
	exclamationmark 10
# 591 "data/maps/FrosthearthCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 592 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr10_RangerF2_Main
	return

FrostGym_Tr10_RangerF2_2:
# 586 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr10_RangerF2_1


FrostGym_Tr10_RangerF2_Interact::
# 595 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 1, FrostGym_Tr10_RangerF2_Interact_2
# 599 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 600 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr10_RangerF2_Interact_5
# 604 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 605 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 606 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 607 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr10_RangerF2_Main
	return

FrostGym_Tr10_RangerF2_Interact_2:
# 596 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr10_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr10_RangerF2_Interact_5:
# 601 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr10_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr10_RangerF2_Main::
# 610 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr10_Intro
# 611 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR10_RANGER_F2, FrostGymTr10_Lose, TRAINER_FROSTGYM_TR9_KINDLER2, FrostGymTr9_Lose
# 612 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 613 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 9, FrostGym_Tr9_Kindler2_Main_Movement_0
# 614 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 10, FrostGym_Tr9_Kindler2_Main_Movement_0
# 615 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 616 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 9, 33, 31
# 617 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 10, 34, 31
# 618 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
# 619 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
# 620 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


Frosthearth_Gym_Statue::
# 649 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Frosthearth_Gym_Statue_1
# 653 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Statue_Text, MSGBOX_NPC
	return

Frosthearth_Gym_Statue_1:
# 650 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Statue_Post, MSGBOX_NPC
	return


Frosthearth_Gym_Guide::
# 670 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Frosthearth_Gym_Guide_1
# 674 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Guide_Text, MSGBOX_NPC
	return

Frosthearth_Gym_Guide_1:
# 671 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Guide_Post, MSGBOX_NPC
	return


FrosthearthGym_LeaderTrigger::
# 708 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 709 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_LeaderTrigger_2
# 713 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setvar VAR_TEMP_0, 5
# 714 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call GymStartingMovement
# 715 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlainePryceIntro
# 716 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlainePryceIntro2
# 717 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlainePryceIntro3
# 718 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_LEADER_BLAINE, BlaineLoseText, TRAINER_LEADER_PRYCE, PryceLoseText
# 720 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrosthearthGym_PosBatEvent
	return

FrosthearthGym_LeaderTrigger_2:
# 710 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	end


FrosthearthGym_PosBatEvent::
# 724 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call GymMovementAfter
# 725 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Pryce_AfterDefeat
# 726 "data/maps/FrosthearthCity_Gym/scripts.pory"
	message FrosthearthGym_ReceiveBadge
# 727 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmessage
# 728 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 729 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Pryce_ExplainBadge
# 730 "data/maps/FrosthearthCity_Gym/scripts.pory"
	closemessage
# 731 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 732 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 13, FrosthearthGym_PosBatEvent_Movement_0
# 733 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, FrosthearthGym_PosBatEvent_Movement_1
# 734 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 735 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlaineTakeThisTM
# 736 "data/maps/FrosthearthCity_Gym/scripts.pory"
	giveitem ITEM_TM_ICE_BURN
# 737 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Blaine_ExplainIceBurn
# 738 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call SetFrosthearthGymTrainerFlags
# 739 "data/maps/FrosthearthCity_Gym/scripts.pory"
	closemessage
# 740 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special RemoveCameraObject
# 741 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	end


SetFrosthearthGymTrainerFlags::
# 745 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_PRYCE
# 746 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_BLAINE
# 747 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
# 748 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
# 749 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
# 750 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
# 751 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
# 752 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
# 753 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
# 754 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
# 755 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
# 756 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	return


FrosthearthGym_PryceTalk::
# 836 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FrosthearthGym_PryceTalk_1
# 840 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 841 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_PryceTalk_5
# 845 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox PryceGoStandInArena, MSGBOX_NPC
FrosthearthGym_PryceTalk_4:
# 847 "data/maps/FrosthearthCity_Gym/scripts.pory"
	turnobject 12, DIR_WEST
	return

FrosthearthGym_PryceTalk_1:
# 837 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrosthearthGym_PrycePosBat, MSGBOX_NPC
	return

FrosthearthGym_PryceTalk_5:
# 842 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox PryceNotEnoughMons, MSGBOX_NPC
	goto FrosthearthGym_PryceTalk_4


FrosthearthGym_BlaineTalk::
# 852 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FrosthearthGym_BlaineTalk_1
# 856 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 857 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_BlaineTalk_5
# 861 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlaineGoStandInArena, MSGBOX_NPC
FrosthearthGym_BlaineTalk_4:
# 863 "data/maps/FrosthearthCity_Gym/scripts.pory"
	turnobject 13, DIR_WEST
	return

FrosthearthGym_BlaineTalk_1:
# 853 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrosthearthGym_BlainePosBat, MSGBOX_NPC
	return

FrosthearthGym_BlaineTalk_5:
# 858 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlaineNotEnoughMons, MSGBOX_NPC
	goto FrosthearthGym_BlaineTalk_4


# 88 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrostGym_Tr1_Hiker1_Main_Movement_0:
# 88 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock_facing_direction
# 88 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_left
	step_end

# 206 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrostGym_Tr3_Senior_Main_Movement_0:
# 206 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock_facing_direction
# 206 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_right
	step_end

# 553 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrostGym_Tr9_Kindler2_Main_Movement_0:
# 553 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock_facing_direction
# 553 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_down
	step_end

# 732 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrosthearthGym_PosBatEvent_Movement_0:
# 732 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_left
# 732 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_in_place_fast_up
	step_end

# 733 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrosthearthGym_PosBatEvent_Movement_1:
# 733 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay_16
# 733 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_in_place_fast_down
	step_end

FrostGymTr1_Intro::
# 97 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Having trouble figuring out\n"
	.string "the way?\p"
	.string "Defeat us, and maybe the way\n"
	.string "will become clear!$"

FrostGymTr1_Lose::
# 103 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Looks like we lost.\n"
	.string "Best we step aside…$"

FrostGymTr1_PostBattle::
# 107 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "In this gym, defeating other\n"
	.string "trainers is your road to success!$"

FrostGymTr1_NotEnoughMons::
# 111 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're going to need more Pokémon\n"
	.string "if you want to battle us!$"

FrostGymTr2_Intro::
# 155 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Having trouble figuring out\n"
	.string "the way?\p"
	.string "Defeat us, and maybe the way\n"
	.string "will become clear!$"

FrostGymTr2_Lose::
# 161 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I can't believe we lost…$"

FrostGymTr2_PostBattle::
# 164 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "This gym is all about team play.\p"
	.string "Even if you're taking on the\n"
	.string "challenge alone, you still need to\l"
	.string "consider the synergy between your\l"
	.string "Pokémon.$"

FrostGymTr2_NotEnoughMons::
# 171 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're going to need more Pokémon\n"
	.string "if you want to battle us!$"

FrostGymTr3_Intro::
# 215 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Well, sure.\n"
	.string "I'm in the mood for it.\l"
	.string "I'll teach you a little about Pokémon.$"

FrostGymTr3_Lose::
# 220 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What an amazing battle style!$"

FrostGymTr3_PostBattle::
# 223 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I was teaching my junior Irene\n"
	.string "about Pokémon.$"

FrostGymTr3_NotEnoughMons::
# 227 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Giggle…\n"
	.string "If you want to battle with us, just one\l"
	.string "Pokémon isn't enough!$"

FrostGymTr4_Intro::
# 272 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Who taught you about Pokémon?$"

FrostGymTr4_Lose::
# 275 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Aww… It's already over?$"

FrostGymTr4_PostBattle::
# 278 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I started training Pokémon\n"
	.string "because Helena, my student mentor,\l"
	.string "taught me!$"

FrostGymTr4_NotEnoughMons::
# 283 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon?\n"
	.string "I think it must feel lonesome.$"

FrostGymTr5_Intro::
# 327 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Prepare for trouble!\n"
	.string "And make it double!$"

FrostGymTr5_Lose::
# 331 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Our teamwork could use some\n"
	.string "improvement…$"

FrostGymTr5_PostBattle::
# 335 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "It was Blaine's genius that came up\n"
	.string "with the idea to incorporate\l"
	.string "Pokémon battles with the gym puzzle.$"

FrostGymTr5_NotEnoughMons::
# 340 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're not trying to challenge us\n"
	.string "with only one Pokémon, are you?$"

FrostGymTr6_Intro::
# 384 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Prepare for trouble!\n"
	.string "And make it double!$"

FrostGymTr6_Lose::
# 388 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I think we may need to look into\n"
	.string "developing new synergies…$"

FrostGymTr6_PostBattle::
# 392 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Pryce is the mastermind behind the\n"
	.string "gym challenge here.\p"
	.string "He may be old, but his mind can\n"
	.string "still come up with a lot of new ideas.$"

FrostGymTr6_NotEnoughMons::
# 398 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're not trying to challenge us\n"
	.string "with only one Pokémon, are you?$"

FrostGymTr7_Intro::
# 442 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Not bad getting this far.\n"
	.string "Too bad it all ends here!$"

FrostGymTr7_Lose::
# 446 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "No!\p"
	.string "We were supposed to be\n"
	.string "unstoppable!$"

FrostGymTr7_PostBattle::
# 451 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Yes yes, you beat us.\n"
	.string "Feeling pretty proud, huh?$"

FrostGymTr7_NotEnoughMons::
# 455 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What's the matter?\n"
	.string "Can't catch any Pokémon?\p"
	.string "If you want to battle,\n"
	.string "Catch more Pokémon first.$"

FrostGymTr8_Intro::
# 501 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Not bad getting this far.\n"
	.string "Too bad it all ends here!$"

FrostGymTr8_Lose::
# 505 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Sometimes I wonder why I\n"
	.string "team up with this guy…$"

FrostGymTr8_PostBattle::
# 509 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You seem pretty strong.\p"
	.string "If you ever feel like staying here\n"
	.string "for a longer period of time,\l"
	.string "let me know and maybe we can\l"
	.string "partner up.$"

FrostGymTr8_NotEnoughMons::
# 516 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What's the matter?\n"
	.string "Can't catch any Pokémon?\p"
	.string "If you want to battle,\n"
	.string "Catch more Pokémon first.$"

FrostGymTr9_Intro::
# 562 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm Blaine's most talented student.\n"
	.string "You have no chance against me!$"

FrostGymTr9_Lose::
# 566 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I've let my teacher down…$"

FrostGymTr9_PostBattle::
# 569 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "If you've gotten this far,\n"
	.string "then it must mean you've beaten\l"
	.string "everyone except the Gym Leaders.\p"
	.string "Good luck.$"

FrostGymTr9_NotEnoughMons::
# 575 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm sorry, but we only battle\n"
	.string "in pairs.\p"
	.string "If you want to battle us, make sure\n"
	.string "you have at least two Pokémon first.$"

FrostGymTr10_Intro::
# 622 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm Pryce's most talented student.\n"
	.string "You have no chance against me!$"

FrostGymTr10_Lose::
# 626 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Good job beating up a mere\n"
	.string "student.\p"
	.string "Now let's see if you can take\n"
	.string "on the teacher!$"

FrostGymTr10_PostBattle::
# 632 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Just beyond here lies the\n"
	.string "Gym Leaders' chamber.\p"
	.string "I hope you're prepared for the\n"
	.string "challenge ahead.$"

FrostGymTr10_NotEnoughMons::
# 638 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm sorry, but we only battle\n"
	.string "in pairs.\p"
	.string "If you want to battle us, make sure\n"
	.string "you have at least two Pokémon first.$"

Frosthearth_Gym_Statue_Text::
# 656 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Frosthearth City Pokémon Gym\p"
	.string "Pryce and Blaine's certified\n"
	.string "trainers:\l"
	.string "{BROTHER}$"

Frosthearth_Gym_Statue_Post::
# 662 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Frosthearth City Pokémon Gym\p"
	.string "Pryce and Blaine's certified\n"
	.string "trainers:\l"
	.string "{BROTHER}\l"
	.string "{PLAYER}$"

Frosthearth_Gym_Guide_Text::
# 677 "data/maps/FrosthearthCity_Gym/scripts.pory"
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
# 697 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Way to go, Champ!\p"
	.string "Going against a Gym Leader\n"
	.string "can be tough, but here you are,\l"
	.string "having beaten two at the same time!\p"
	.string "Keep pushing forward, and you'll\n"
	.string "be challenging the Pokémon League\l"
	.string "in no time!$"

Pryce_AfterDefeat::
# 760 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Pryce: You've surpassed my\n"
	.string "expectations.\p"
	.string "As one of the Gym Leaders of\n"
	.string "this gym, I am authorized to\l"
	.string "give you this.$"

FrosthearthGym_ReceiveBadge::
# 767 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "{PLAYER} received the Frostburn Badge\n"
	.string "from Pryce!$"

Pryce_ExplainBadge::
# 771 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "With the Frostburn Badge in your\n"
	.string "possession, any traded Pokémon\l"
	.string "up to level 80 should unquestionably\l"
	.string "follow all of your commands.\p"
	.string "You will also be able to earn\n"
	.string "increased amount of BP from\l"
	.string "certain high-level trainers.$"

BlaineTakeThisTM::
# 780 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Blaine: Wait up, kiddo!\p"
	.string "Here, you can have this,\n"
	.string "too!$"

Blaine_ExplainIceBurn::
# 785 "data/maps/FrosthearthCity_Gym/scripts.pory"
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
# 796 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Pryce: Welcome, challenger.\p"
	.string "I'm surprised to see you again\n"
	.string "so soon.$"

BlainePryceIntro2::
# 801 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Blaine: So this is the kid you\n"
	.string "were talking about?\p"
	.string "Interesting…\p"
	.string "I'm curious to see if they'll\n"
	.string "measure up to your praises.$"

BlainePryceIntro3::
# 808 "data/maps/FrosthearthCity_Gym/scripts.pory"
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
# 821 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What?! Our combination\n"
	.string "was shattered!\p"
	.string "This was not the outcome\n"
	.string "I expected to see!$"

PryceLoseText::
# 827 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Hmph…\p"
	.string "When I first laid my eyes on you,\n"
	.string "I knew one day you would surpass me.\p"
	.string "I just didn't imagine that day\n"
	.string "to be so soon…$"

FrosthearthGym_PrycePosBat::
# 867 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Make sure to always keep your\n"
	.string "head cool, and you'll end up\l"
	.string "doing great things.\p"
	.string "I'm sure of it!$"

PryceNotEnoughMons::
# 873 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, my savior has arrived.\p"
	.string "I had a feeling we'd be meeting\n"
	.string "again sooner or later.\p"
	.string "Before we begin, do make sure\n"
	.string "you have at least two Pokémon\l"
	.string "that are ready to battle.\p"
	.string "Once ready, take your place on\n"
	.string "the other side of the arena.$"

PryceGoStandInArena::
# 883 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, my savior has arrived.\p"
	.string "I had a feeling we'd be meeting\n"
	.string "again sooner or later.\p"
	.string "Go on, take your place on the other\n"
	.string "side of the arena and we may begin.$"

FrosthearthGym_BlainePosBat::
# 890 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I can see the fire burning in\n"
	.string "your heart.\p"
	.string "You're gonna go far, kid!$"

BlaineNotEnoughMons::
# 895 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, a new challenger has arrived.\p"
	.string "Oh, but you seem to be running low\n"
	.string "on Pokémon.\p"
	.string "Make sure you have at least two\n"
	.string "Pokémon that are ready to battle.\p"
	.string "Once you've done that, go ahead and\n"
	.string "stand right over there on the other\l"
	.string "side of the arena, and we may begin.$"

BlaineGoStandInArena::
# 905 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, a new challenger has arrived.\p"
	.string "If you're ready, go ahead and\n"
	.string "stand right over there on the other\l"
	.string "side of the arena, and we may begin.$"
