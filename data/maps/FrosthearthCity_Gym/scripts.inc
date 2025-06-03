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
	applymovement 2, ExclamationMark
# 67 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 68 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 69 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr1_Hiker1_Main
	return

FrostGym_Tr1_Hiker1_2:
# 62 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr1_Hiker1_1


FrostGym_Tr1_Hiker1_Interact::
# 72 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR1_HIKER1
	goto_if 1, FrostGym_Tr1_Hiker1_Interact_2
# 76 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 77 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr1_Hiker1_Interact_5
# 81 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 82 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 83 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 84 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr1_Hiker1_Main
	return

FrostGym_Tr1_Hiker1_Interact_2:
# 73 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr1_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr1_Hiker1_Interact_5:
# 78 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr1_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr1_Hiker1_Main::
# 87 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr1_Intro
# 88 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR1_HIKER1, FrostGymTr1_Lose, TRAINER_FROSTGYM_TR2_KINDLER1, FrostGymTr2_Lose
# 89 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 90 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 2, FrostGym_Tr1_Hiker1_Main_Movement_0
# 91 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 1, FrostGym_Tr1_Hiker1_Main_Movement_0
# 92 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 93 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 2, 7, 40
# 94 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 1, 7, 39
# 95 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
# 96 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
# 97 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr2_Kindler1::
# 121 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 0, FrostGym_Tr2_Kindler1_2
FrostGym_Tr2_Kindler1_1:
# 124 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 125 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 126 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 1, ExclamationMark
# 127 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 128 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 129 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr2_Kindler1_Main
	return

FrostGym_Tr2_Kindler1_2:
# 122 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr2_Kindler1_1


FrostGym_Tr2_Kindler1_Interact::
# 132 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
	goto_if 1, FrostGym_Tr2_Kindler1_Interact_2
# 136 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 137 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr2_Kindler1_Interact_5
# 141 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 142 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 143 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 144 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr2_Kindler1_Main
	return

FrostGym_Tr2_Kindler1_Interact_2:
# 133 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr2_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr2_Kindler1_Interact_5:
# 138 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr2_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr2_Kindler1_Main::
# 147 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr2_Intro
# 148 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR2_KINDLER1, FrostGymTr2_Lose, TRAINER_FROSTGYM_TR1_HIKER1, FrostGymTr1_Lose
# 149 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 150 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 2, FrostGym_Tr1_Hiker1_Main_Movement_0
# 151 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 1, FrostGym_Tr1_Hiker1_Main_Movement_0
# 152 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 153 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 2, 7, 40
# 154 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 1, 7, 39
# 155 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
# 156 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
# 157 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr3_Senior::
# 183 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 0, FrostGym_Tr3_Senior_2
FrostGym_Tr3_Senior_1:
# 186 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 187 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 188 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 3, ExclamationMark
# 189 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 190 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 191 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr3_Senior_Main
	return

FrostGym_Tr3_Senior_2:
# 184 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr3_Senior_1


FrostGym_Tr3_Senior_Interact::
# 194 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR3_SENIOR
	goto_if 1, FrostGym_Tr3_Senior_Interact_2
# 198 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 199 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr3_Senior_Interact_5
# 203 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 204 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 205 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 206 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr3_Senior_Main
	return

FrostGym_Tr3_Senior_Interact_2:
# 195 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr3_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr3_Senior_Interact_5:
# 200 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr3_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr3_Senior_Main::
# 209 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr3_Intro
# 210 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR4_JUNIOR, FrostGymTr4_Lose, TRAINER_FROSTGYM_TR3_SENIOR, FrostGymTr3_Lose
# 211 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 212 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 3, FrostGym_Tr3_Senior_Main_Movement_0
# 213 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 4, FrostGym_Tr3_Senior_Main_Movement_0
# 214 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 215 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 3, 14, 23
# 216 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 4, 14, 24
# 217 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
# 218 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
# 219 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr4_Junior::
# 242 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	goto_if 0, FrostGym_Tr4_Junior_2
FrostGym_Tr4_Junior_1:
# 245 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 246 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 247 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 4, ExclamationMark
# 248 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 249 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 250 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr4_Junior_Main
	return

FrostGym_Tr4_Junior_2:
# 243 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr4_Junior_1


FrostGym_Tr4_Junior_Interact::
# 253 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
	goto_if 1, FrostGym_Tr4_Junior_Interact_2
# 257 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 258 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr4_Junior_Interact_5
# 262 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 263 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 264 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 265 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr4_Junior_Main
	return

FrostGym_Tr4_Junior_Interact_2:
# 254 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr4_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr4_Junior_Interact_5:
# 259 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr4_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr4_Junior_Main::
# 268 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr4_Intro
# 269 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR4_JUNIOR, FrostGymTr4_Lose, TRAINER_FROSTGYM_TR3_SENIOR, FrostGymTr3_Lose
# 270 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 271 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 3, FrostGym_Tr3_Senior_Main_Movement_0
# 272 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 4, FrostGym_Tr3_Senior_Main_Movement_0
# 273 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 274 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 3, 14, 23
# 275 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 4, 14, 24
# 276 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
# 277 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
# 278 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr5_RangerM::
# 299 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 0, FrostGym_Tr5_RangerM_2
FrostGym_Tr5_RangerM_1:
# 302 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 303 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 304 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 6, ExclamationMark
# 305 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 306 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 307 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr5_RangerM_Main
	return

FrostGym_Tr5_RangerM_2:
# 300 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr5_RangerM_1


FrostGym_Tr5_RangerM_Interact::
# 310 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
	goto_if 1, FrostGym_Tr5_RangerM_Interact_2
# 314 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 315 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr5_RangerM_Interact_5
# 319 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 320 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 321 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 322 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr5_RangerM_Main
	return

FrostGym_Tr5_RangerM_Interact_2:
# 311 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr5_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr5_RangerM_Interact_5:
# 316 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr5_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr5_RangerM_Main::
# 325 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr5_Intro
# 326 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR5_RANGER_M, FrostGymTr5_Lose, TRAINER_FROSTGYM_TR6_RANGER_F, FrostGymTr6_Lose
# 327 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 328 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 5, FrostGym_Tr3_Senior_Main_Movement_0
# 329 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 6, FrostGym_Tr3_Senior_Main_Movement_0
# 330 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 331 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 5, 19, 37
# 332 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 6, 19, 38
# 333 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
# 334 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
# 335 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr6_RangerF::
# 358 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 0, FrostGym_Tr6_RangerF_2
FrostGym_Tr6_RangerF_1:
# 361 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 362 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 363 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 5, ExclamationMark
# 364 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 365 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 366 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr6_RangerF_Main
	return

FrostGym_Tr6_RangerF_2:
# 359 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr6_RangerF_1


FrostGym_Tr6_RangerF_Interact::
# 369 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
	goto_if 1, FrostGym_Tr6_RangerF_Interact_2
# 373 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 374 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr6_RangerF_Interact_5
# 378 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 379 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 380 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 381 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr6_RangerF_Main
	return

FrostGym_Tr6_RangerF_Interact_2:
# 370 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr6_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr6_RangerF_Interact_5:
# 375 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr6_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr6_RangerF_Main::
# 384 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr6_Intro
# 385 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR6_RANGER_F, FrostGymTr6_Lose, TRAINER_FROSTGYM_TR5_RANGER_M, FrostGymTr5_Lose
# 386 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 387 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 5, FrostGym_Tr3_Senior_Main_Movement_0
# 388 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 6, FrostGym_Tr3_Senior_Main_Movement_0
# 389 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 390 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 5, 19, 37
# 391 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 6, 19, 38
# 392 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
# 393 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
# 394 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr7_Maniac::
# 418 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 0, FrostGym_Tr7_Maniac_2
FrostGym_Tr7_Maniac_1:
# 421 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 422 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 423 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 7, ExclamationMark
# 424 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 425 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 426 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr7_Maniac_Main
	return

FrostGym_Tr7_Maniac_2:
# 419 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr7_Maniac_1


FrostGym_Tr7_Maniac_Interact::
# 429 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR7_MANIAC
	goto_if 1, FrostGym_Tr7_Maniac_Interact_2
# 433 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 434 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr7_Maniac_Interact_5
# 438 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 439 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 440 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 441 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr7_Maniac_Main
	return

FrostGym_Tr7_Maniac_Interact_2:
# 430 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr7_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr7_Maniac_Interact_5:
# 435 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr7_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr7_Maniac_Main::
# 444 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr7_Intro
# 445 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR7_MANIAC, FrostGymTr7_Lose, TRAINER_FROSTGYM_TR8_COLLECTOR, FrostGymTr8_Lose
# 446 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 447 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 7, FrostGym_Tr1_Hiker1_Main_Movement_0
# 448 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 8, FrostGym_Tr1_Hiker1_Main_Movement_0
# 449 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 450 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 7, 26, 25
# 451 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 8, 26, 24
# 452 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
# 453 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
# 454 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr8_Collector::
# 479 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 0, FrostGym_Tr8_Collector_2
FrostGym_Tr8_Collector_1:
# 482 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 483 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 484 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 8, ExclamationMark
# 485 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 487 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr8_Collector_Main
	return

FrostGym_Tr8_Collector_2:
# 480 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr8_Collector_1


FrostGym_Tr8_Collector_Interact::
# 490 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
	goto_if 1, FrostGym_Tr8_Collector_Interact_2
# 494 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 495 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr8_Collector_Interact_5
# 499 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 500 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 501 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 502 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr8_Collector_Main
	return

FrostGym_Tr8_Collector_Interact_2:
# 491 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr8_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr8_Collector_Interact_5:
# 496 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr8_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr8_Collector_Main::
# 505 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr8_Intro
# 506 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR8_COLLECTOR, FrostGymTr8_Lose, TRAINER_FROSTGYM_TR7_MANIAC, FrostGymTr7_Lose
# 507 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 508 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 7, FrostGym_Tr1_Hiker1_Main_Movement_0
# 509 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 8, FrostGym_Tr1_Hiker1_Main_Movement_0
# 510 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 511 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 7, 26, 25
# 512 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 8, 26, 24
# 513 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
# 514 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
# 515 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr9_Kindler2::
# 542 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 0, FrostGym_Tr9_Kindler2_2
FrostGym_Tr9_Kindler2_1:
# 545 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 546 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 547 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 9, ExclamationMark
# 548 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 549 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 550 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr9_Kindler2_Main
	return

FrostGym_Tr9_Kindler2_2:
# 543 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr9_Kindler2_1


FrostGym_Tr9_Kindler2_Interact::
# 553 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
	goto_if 1, FrostGym_Tr9_Kindler2_Interact_2
# 557 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 558 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr9_Kindler2_Interact_5
# 562 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 563 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 564 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 565 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr9_Kindler2_Main
	return

FrostGym_Tr9_Kindler2_Interact_2:
# 554 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr9_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr9_Kindler2_Interact_5:
# 559 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr9_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr9_Kindler2_Main::
# 568 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr9_Intro
# 569 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR9_KINDLER2, FrostGymTr9_Lose, TRAINER_FROSTGYM_TR10_RANGER_F2, FrostGymTr10_Lose
# 570 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 571 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 9, FrostGym_Tr9_Kindler2_Main_Movement_0
# 572 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 10, FrostGym_Tr9_Kindler2_Main_Movement_0
# 573 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 574 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 9, 33, 31
# 575 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 10, 34, 31
# 576 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
# 577 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
# 578 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


FrostGym_Tr10_RangerF2::
# 603 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 0, FrostGym_Tr10_RangerF2_2
FrostGym_Tr10_RangerF2_1:
# 606 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 607 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 608 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 10, ExclamationMark
# 609 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 610 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 48
# 611 "data/maps/FrosthearthCity_Gym/scripts.pory"
	turnobject 0xFF, DIR_SOUTH
# 612 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr10_RangerF2_Main
	return

FrostGym_Tr10_RangerF2_2:
# 604 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call CheckForLiveMons
	goto FrostGym_Tr10_RangerF2_1


FrostGym_Tr10_RangerF2_Interact::
# 615 "data/maps/FrosthearthCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	goto_if 1, FrostGym_Tr10_RangerF2_Interact_2
# 619 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 620 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrostGym_Tr10_RangerF2_Interact_5
# 624 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock
# 625 "data/maps/FrosthearthCity_Gym/scripts.pory"
	faceplayer
# 626 "data/maps/FrosthearthCity_Gym/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 627 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrostGym_Tr10_RangerF2_Main
	return

FrostGym_Tr10_RangerF2_Interact_2:
# 616 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr10_PostBattle, MSGBOX_NPC
	end

FrostGym_Tr10_RangerF2_Interact_5:
# 621 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr10_NotEnoughMons, MSGBOX_NPC
	end


FrostGym_Tr10_RangerF2_Main::
# 630 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrostGymTr10_Intro
# 631 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_FROSTGYM_TR10_RANGER_F2, FrostGymTr10_Lose, TRAINER_FROSTGYM_TR9_KINDLER2, FrostGymTr9_Lose
# 632 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay 30
# 633 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 9, FrostGym_Tr9_Kindler2_Main_Movement_0
# 634 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 10, FrostGym_Tr9_Kindler2_Main_Movement_0
# 635 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 636 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 9, 33, 31
# 637 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setobjectxyperm 10, 34, 31
# 638 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
# 639 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
# 640 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	return


Frosthearth_Gym_Statue::
# 669 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Frosthearth_Gym_Statue_1
# 673 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Statue_Text, MSGBOX_NPC
	return

Frosthearth_Gym_Statue_1:
# 670 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Statue_Post, MSGBOX_NPC
	return


Frosthearth_Gym_Guide::
# 690 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Frosthearth_Gym_Guide_1
# 694 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Guide_Text, MSGBOX_NPC
	return

Frosthearth_Gym_Guide_1:
# 691 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Frosthearth_Gym_Guide_Post, MSGBOX_NPC
	return


FrosthearthGym_LeaderTrigger::
# 728 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 729 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_LeaderTrigger_2
# 733 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setvar VAR_TEMP_0, 5
# 734 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call GymStartingMovement
# 735 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlainePryceIntro
# 736 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlainePryceIntro2
# 737 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlainePryceIntro3
# 738 "data/maps/FrosthearthCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_LEADER_BLAINE, BlaineLoseText, TRAINER_LEADER_PRYCE, PryceLoseText
# 740 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto FrosthearthGym_PosBatEvent
	return

FrosthearthGym_LeaderTrigger_2:
# 730 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	end


FrosthearthGym_PosBatEvent::
# 744 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call GymMovementAfter
# 745 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Pryce_AfterDefeat
# 746 "data/maps/FrosthearthCity_Gym/scripts.pory"
	message FrosthearthGym_ReceiveBadge
# 747 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmessage
# 748 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 749 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Pryce_ExplainBadge
# 750 "data/maps/FrosthearthCity_Gym/scripts.pory"
	closemessage
# 751 "data/maps/FrosthearthCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 752 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 13, FrosthearthGym_PosBatEvent_Movement_0
# 753 "data/maps/FrosthearthCity_Gym/scripts.pory"
	applymovement 0xFF, FrosthearthGym_PosBatEvent_Movement_1
# 754 "data/maps/FrosthearthCity_Gym/scripts.pory"
	waitmovement 0
# 755 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlaineTakeThisTM
# 756 "data/maps/FrosthearthCity_Gym/scripts.pory"
	giveitem ITEM_TM_ICE_BURN
# 757 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox Blaine_ExplainIceBurn
# 758 "data/maps/FrosthearthCity_Gym/scripts.pory"
	call SetFrosthearthGymTrainerFlags
# 759 "data/maps/FrosthearthCity_Gym/scripts.pory"
	closemessage
# 760 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special RemoveCameraObject
# 761 "data/maps/FrosthearthCity_Gym/scripts.pory"
	release
	end


SetFrosthearthGymTrainerFlags::
# 765 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_PRYCE
# 766 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_BLAINE
# 767 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR1_HIKER1
# 768 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR2_KINDLER1
# 769 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR3_SENIOR
# 770 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR4_JUNIOR
# 771 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR5_RANGER_M
# 772 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR6_RANGER_F
# 773 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR7_MANIAC
# 774 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR8_COLLECTOR
# 775 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR9_KINDLER2
# 776 "data/maps/FrosthearthCity_Gym/scripts.pory"
	settrainerflag TRAINER_FROSTGYM_TR10_RANGER_F2
	return


FrosthearthGym_PryceTalk::
# 856 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FrosthearthGym_PryceTalk_1
# 860 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 861 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_PryceTalk_5
# 865 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox PryceGoStandInArena, MSGBOX_NPC
FrosthearthGym_PryceTalk_4:
# 867 "data/maps/FrosthearthCity_Gym/scripts.pory"
	turnobject 12, DIR_WEST
	return

FrosthearthGym_PryceTalk_1:
# 857 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrosthearthGym_PrycePosBat, MSGBOX_NPC
	return

FrosthearthGym_PryceTalk_5:
# 862 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox PryceNotEnoughMons, MSGBOX_NPC
	goto FrosthearthGym_PryceTalk_4


FrosthearthGym_BlaineTalk::
# 872 "data/maps/FrosthearthCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FrosthearthGym_BlaineTalk_1
# 876 "data/maps/FrosthearthCity_Gym/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 877 "data/maps/FrosthearthCity_Gym/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne FrosthearthGym_BlaineTalk_5
# 881 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlaineGoStandInArena, MSGBOX_NPC
FrosthearthGym_BlaineTalk_4:
# 883 "data/maps/FrosthearthCity_Gym/scripts.pory"
	turnobject 13, DIR_WEST
	return

FrosthearthGym_BlaineTalk_1:
# 873 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox FrosthearthGym_BlainePosBat, MSGBOX_NPC
	return

FrosthearthGym_BlaineTalk_5:
# 878 "data/maps/FrosthearthCity_Gym/scripts.pory"
	msgbox BlaineNotEnoughMons, MSGBOX_NPC
	goto FrosthearthGym_BlaineTalk_4


# 90 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrostGym_Tr1_Hiker1_Main_Movement_0:
# 90 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock_facing_direction
# 90 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_left
	step_end

# 212 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrostGym_Tr3_Senior_Main_Movement_0:
# 212 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock_facing_direction
# 212 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_right
	step_end

# 571 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrostGym_Tr9_Kindler2_Main_Movement_0:
# 571 "data/maps/FrosthearthCity_Gym/scripts.pory"
	lock_facing_direction
# 571 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_down
	step_end

# 752 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrosthearthGym_PosBatEvent_Movement_0:
# 752 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_left
# 752 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_in_place_fast_up
	step_end

# 753 "data/maps/FrosthearthCity_Gym/scripts.pory"
FrosthearthGym_PosBatEvent_Movement_1:
# 753 "data/maps/FrosthearthCity_Gym/scripts.pory"
	delay_16
# 753 "data/maps/FrosthearthCity_Gym/scripts.pory"
	walk_in_place_fast_down
	step_end

FrostGymTr1_Intro::
# 99 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Having trouble figuring out\n"
	.string "the way?\p"
	.string "Defeat us, and maybe the way\n"
	.string "will become clear!$"

FrostGymTr1_Lose::
# 105 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Looks like we lost.\n"
	.string "Best we step aside…$"

FrostGymTr1_PostBattle::
# 109 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "In this gym, defeating other\n"
	.string "trainers is your road to success!$"

FrostGymTr1_NotEnoughMons::
# 113 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're going to need more Pokémon\n"
	.string "if you want to battle us!$"

FrostGymTr2_Intro::
# 159 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Having trouble figuring out\n"
	.string "the way?\p"
	.string "Defeat us, and maybe the way\n"
	.string "will become clear!$"

FrostGymTr2_Lose::
# 165 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I can't believe we lost…$"

FrostGymTr2_PostBattle::
# 168 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "This gym is all about team play.\p"
	.string "Even if you're taking on the\n"
	.string "challenge alone, you still need to\l"
	.string "consider the synergy between your\l"
	.string "Pokémon.$"

FrostGymTr2_NotEnoughMons::
# 175 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're going to need more Pokémon\n"
	.string "if you want to battle us!$"

FrostGymTr3_Intro::
# 221 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Well, sure.\n"
	.string "I'm in the mood for it.\l"
	.string "I'll teach you a little about Pokémon.$"

FrostGymTr3_Lose::
# 226 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What an amazing battle style!$"

FrostGymTr3_PostBattle::
# 229 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I was teaching my junior Irene\n"
	.string "about Pokémon.$"

FrostGymTr3_NotEnoughMons::
# 233 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Giggle…\n"
	.string "If you want to battle with us, just one\l"
	.string "Pokémon isn't enough!$"

FrostGymTr4_Intro::
# 280 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Who taught you about Pokémon?$"

FrostGymTr4_Lose::
# 283 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Aww… It's already over?$"

FrostGymTr4_PostBattle::
# 286 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I started training Pokémon\n"
	.string "because Helena, my student mentor,\l"
	.string "taught me!$"

FrostGymTr4_NotEnoughMons::
# 291 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon?\n"
	.string "I think it must feel lonesome.$"

FrostGymTr5_Intro::
# 337 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Prepare for trouble!\n"
	.string "And make it double!$"

FrostGymTr5_Lose::
# 341 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Our teamwork could use some\n"
	.string "improvement…$"

FrostGymTr5_PostBattle::
# 345 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "It was Blaine's genius that came up\n"
	.string "with the idea to incorporate\l"
	.string "Pokémon battles with the gym puzzle.$"

FrostGymTr5_NotEnoughMons::
# 350 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're not trying to challenge us\n"
	.string "with only one Pokémon, are you?$"

FrostGymTr6_Intro::
# 396 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Prepare for trouble!\n"
	.string "And make it double!$"

FrostGymTr6_Lose::
# 400 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I think we may need to look into\n"
	.string "developing new synergies…$"

FrostGymTr6_PostBattle::
# 404 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Pryce is the mastermind behind the\n"
	.string "gym challenge here.\p"
	.string "He may be old, but his mind can\n"
	.string "still come up with a lot of new ideas.$"

FrostGymTr6_NotEnoughMons::
# 410 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You're not trying to challenge us\n"
	.string "with only one Pokémon, are you?$"

FrostGymTr7_Intro::
# 456 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Not bad getting this far.\n"
	.string "Too bad it all ends here!$"

FrostGymTr7_Lose::
# 460 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "No!\p"
	.string "We were supposed to be\n"
	.string "unstoppable!$"

FrostGymTr7_PostBattle::
# 465 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Yes yes, you beat us.\n"
	.string "Feeling pretty proud, huh?$"

FrostGymTr7_NotEnoughMons::
# 469 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What's the matter?\n"
	.string "Can't catch any Pokémon?\p"
	.string "If you want to battle,\n"
	.string "Catch more Pokémon first.$"

FrostGymTr8_Intro::
# 517 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Not bad getting this far.\n"
	.string "Too bad it all ends here!$"

FrostGymTr8_Lose::
# 521 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Sometimes I wonder why I\n"
	.string "team up with this guy…$"

FrostGymTr8_PostBattle::
# 525 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "You seem pretty strong.\p"
	.string "If you ever feel like staying here\n"
	.string "for a longer period of time,\l"
	.string "let me know and maybe we can\l"
	.string "partner up.$"

FrostGymTr8_NotEnoughMons::
# 532 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What's the matter?\n"
	.string "Can't catch any Pokémon?\p"
	.string "If you want to battle,\n"
	.string "Catch more Pokémon first.$"

FrostGymTr9_Intro::
# 580 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm Blaine's most talented student.\n"
	.string "You have no chance against me!$"

FrostGymTr9_Lose::
# 584 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I've let my teacher down…$"

FrostGymTr9_PostBattle::
# 587 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "If you've gotten this far,\n"
	.string "then it must mean you've beaten\l"
	.string "everyone except the Gym Leaders.\p"
	.string "Good luck.$"

FrostGymTr9_NotEnoughMons::
# 593 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm sorry, but we only battle\n"
	.string "in pairs.\p"
	.string "If you want to battle us, make sure\n"
	.string "you have at least two Pokémon first.$"

FrostGymTr10_Intro::
# 642 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm Pryce's most talented student.\n"
	.string "You have no chance against me!$"

FrostGymTr10_Lose::
# 646 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Good job beating up a mere\n"
	.string "student.\p"
	.string "Now let's see if you can take\n"
	.string "on the teacher!$"

FrostGymTr10_PostBattle::
# 652 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Just beyond here lies the\n"
	.string "Gym Leaders' chamber.\p"
	.string "I hope you're prepared for the\n"
	.string "challenge ahead.$"

FrostGymTr10_NotEnoughMons::
# 658 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I'm sorry, but we only battle\n"
	.string "in pairs.\p"
	.string "If you want to battle us, make sure\n"
	.string "you have at least two Pokémon first.$"

Frosthearth_Gym_Statue_Text::
# 676 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Frosthearth City Pokémon Gym\p"
	.string "Pryce and Blaine's certified\n"
	.string "trainers:\l"
	.string "{BROTHER}$"

Frosthearth_Gym_Statue_Post::
# 682 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Frosthearth City Pokémon Gym\p"
	.string "Pryce and Blaine's certified\n"
	.string "trainers:\l"
	.string "{BROTHER}\l"
	.string "{PLAYER}$"

Frosthearth_Gym_Guide_Text::
# 697 "data/maps/FrosthearthCity_Gym/scripts.pory"
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
# 717 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Way to go, Champ!\p"
	.string "Going against a Gym Leader\n"
	.string "can be tough, but here you are,\l"
	.string "having beaten two at the same time!\p"
	.string "Keep pushing forward, and you'll\n"
	.string "be challenging the Pokémon League\l"
	.string "in no time!$"

Pryce_AfterDefeat::
# 780 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Pryce: You've surpassed my\n"
	.string "expectations.\p"
	.string "As one of the Gym Leaders of\n"
	.string "this gym, I am authorized to\l"
	.string "give you this.$"

FrosthearthGym_ReceiveBadge::
# 787 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "{PLAYER} received the Frostburn Badge\n"
	.string "from Pryce!$"

Pryce_ExplainBadge::
# 791 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "With the Frostburn Badge in your\n"
	.string "possession, any traded Pokémon\l"
	.string "up to level 80 should unquestionably\l"
	.string "follow all of your commands.\p"
	.string "You will also be able to earn\n"
	.string "increased amount of BP from\l"
	.string "certain high-level trainers.$"

BlaineTakeThisTM::
# 800 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Blaine: Wait up, kiddo!\p"
	.string "Here, you can have this,\n"
	.string "too!$"

Blaine_ExplainIceBurn::
# 805 "data/maps/FrosthearthCity_Gym/scripts.pory"
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
# 816 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Pryce: Welcome, challenger.\p"
	.string "I'm surprised to see you again\n"
	.string "so soon.$"

BlainePryceIntro2::
# 821 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Blaine: So this is the kid you\n"
	.string "were talking about?\p"
	.string "Interesting…\p"
	.string "I'm curious to see if they'll\n"
	.string "measure up to your praises.$"

BlainePryceIntro3::
# 828 "data/maps/FrosthearthCity_Gym/scripts.pory"
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
# 841 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "What?! Our combination\n"
	.string "was shattered!\p"
	.string "This was not the outcome\n"
	.string "I expected to see!$"

PryceLoseText::
# 847 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Hmph…\p"
	.string "When I first laid my eyes on you,\n"
	.string "I knew one day you would surpass me.\p"
	.string "I just didn't imagine that day\n"
	.string "to be so soon…$"

FrosthearthGym_PrycePosBat::
# 887 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Make sure to always keep your\n"
	.string "head cool, and you'll end up\l"
	.string "doing great things.\p"
	.string "I'm sure of it!$"

PryceNotEnoughMons::
# 893 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, my savior has arrived.\p"
	.string "I had a feeling we'd be meeting\n"
	.string "again sooner or later.\p"
	.string "Before we begin, do make sure\n"
	.string "you have at least two Pokémon\l"
	.string "that are ready to battle.\p"
	.string "Once ready, take your place on\n"
	.string "the other side of the arena.$"

PryceGoStandInArena::
# 903 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, my savior has arrived.\p"
	.string "I had a feeling we'd be meeting\n"
	.string "again sooner or later.\p"
	.string "Go on, take your place on the other\n"
	.string "side of the arena and we may begin.$"

FrosthearthGym_BlainePosBat::
# 910 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "I can see the fire burning in\n"
	.string "your heart.\p"
	.string "You're gonna go far, kid!$"

BlaineNotEnoughMons::
# 915 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, a new challenger has arrived.\p"
	.string "Oh, but you seem to be running low\n"
	.string "on Pokémon.\p"
	.string "Make sure you have at least two\n"
	.string "Pokémon that are ready to battle.\p"
	.string "Once you've done that, go ahead and\n"
	.string "stand right over there on the other\l"
	.string "side of the arena, and we may begin.$"

BlaineGoStandInArena::
# 925 "data/maps/FrosthearthCity_Gym/scripts.pory"
	.string "Ah, a new challenger has arrived.\p"
	.string "If you're ready, go ahead and\n"
	.string "stand right over there on the other\l"
	.string "side of the arena, and we may begin.$"
