Drisledge_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetupDrisledgeGym
	map_script MAP_SCRIPT_ON_LOAD, SetDrisledgeGymTiles
	.byte 0


SetDrisledgeGymTiles::
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge SetDrisledgeGymTiles_2
SetDrisledgeGymTiles_1:
	compare VAR_DRISLEDGE_TOWN_STATE, 13
	goto_if_ge SetDrisledgeGymTiles_5
SetDrisledgeGymTiles_4:
	compare VAR_DRISLEDGE_TOWN_STATE, 16
	goto_if_ge SetDrisledgeGymTiles_8
SetDrisledgeGymTiles_7:
	compare VAR_DRISLEDGE_TOWN_STATE, 19
	goto_if_ge SetDrisledgeGymTiles_11
SetDrisledgeGymTiles_10:
	compare VAR_DRISLEDGE_TOWN_STATE, 22
	goto_if_ge SetDrisledgeGymTiles_14
SetDrisledgeGymTiles_13:
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetDrisledgeGymTiles_16
	return

SetDrisledgeGymTiles_2:
	setmetatile 21, 38, 0x2B3, FALSE
	setmetatile 20, 39, 0x2B3, FALSE
	setmetatile 22, 38, 0x2B3, FALSE
	setmetatile 20, 40, 0x2B3, FALSE
	setmetatile 23, 38, 0x2B3, FALSE
	setmetatile 20, 41, 0x2B3, FALSE
	setmetatile 24, 38, 0x2B3, FALSE
	setmetatile 20, 42, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_1

SetDrisledgeGymTiles_5:
	setmetatile 32, 37, 0x2B3, FALSE
	setmetatile 33, 38, 0x2B3, FALSE
	setmetatile 32, 39, 0x2B3, FALSE
	setmetatile 32, 36, 0x2B3, FALSE
	setmetatile 34, 38, 0x2B3, FALSE
	setmetatile 32, 40, 0x2B3, FALSE
	setmetatile 32, 35, 0x2B3, FALSE
	setmetatile 35, 38, 0x2B3, FALSE
	setmetatile 32, 41, 0x2B3, FALSE
	setmetatile 32, 34, 0x2B3, FALSE
	setmetatile 36, 38, 0x2B3, FALSE
	setmetatile 32, 42, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_4

SetDrisledgeGymTiles_8:
	setmetatile 33, 27, 0x2B3, FALSE
	setmetatile 32, 26, 0x2B3, FALSE
	setmetatile 31, 27, 0x2B3, FALSE
	setmetatile 34, 27, 0x2B3, FALSE
	setmetatile 32, 25, 0x2B3, FALSE
	setmetatile 30, 27, 0x2B3, FALSE
	setmetatile 35, 27, 0x2B3, FALSE
	setmetatile 32, 24, 0x2B3, FALSE
	setmetatile 29, 27, 0x2B3, FALSE
	setmetatile 36, 27, 0x2B3, FALSE
	setmetatile 32, 23, 0x2B3, FALSE
	setmetatile 28, 27, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_7

SetDrisledgeGymTiles_11:
	setmetatile 46, 27, 0x2B3, FALSE
	setmetatile 45, 26, 0x2B3, FALSE
	setmetatile 45, 28, 0x2B3, FALSE
	setmetatile 47, 27, 0x2B3, FALSE
	setmetatile 45, 25, 0x2B3, FALSE
	setmetatile 45, 29, 0x2B3, FALSE
	setmetatile 48, 27, 0x2B3, FALSE
	setmetatile 45, 24, 0x2B3, FALSE
	setmetatile 45, 30, 0x2B3, FALSE
	setmetatile 49, 27, 0x2B3, FALSE
	setmetatile 45, 23, 0x2B3, FALSE
	setmetatile 45, 31, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_10

SetDrisledgeGymTiles_14:
	setmetatile 44, 11, 0x2B3, FALSE
	setmetatile 45, 10, 0x2B3, FALSE
	setmetatile 46, 11, 0x2B3, FALSE
	setmetatile 43, 11, 0x2B3, FALSE
	setmetatile 45, 9, 0x2B3, FALSE
	setmetatile 47, 11, 0x2B3, FALSE
	setmetatile 42, 11, 0x2B3, FALSE
	setmetatile 45, 8, 0x2B3, FALSE
	setmetatile 48, 11, 0x2B3, FALSE
	setmetatile 41, 11, 0x2B3, FALSE
	setmetatile 45, 7, 0x2B3, FALSE
	setmetatile 49, 11, 0x2B3, FALSE
	goto SetDrisledgeGymTiles_13

SetDrisledgeGymTiles_16:
	setmetatile 31, 11, 0x2B3, FALSE
	setmetatile 30, 11, 0x2B3, FALSE
	setmetatile 30, 9, 0x2BE, FALSE
	setmetatile 31, 9, 0x2BF, FALSE
	setmetatile 30, 10, 0x2C6, FALSE
	setmetatile 31, 10, 0x2C7, FALSE
	setmetatile 30, 12, 0x2BE, FALSE
	setmetatile 31, 12, 0x2BF, FALSE
	setmetatile 30, 13, 0x2C6, FALSE
	setmetatile 31, 13, 0x2C7, FALSE
	setmetatile 29, 11, 0x2B3, FALSE
	setmetatile 28, 11, 0x2B3, FALSE
	setmetatile 28, 9, 0x2BE, FALSE
	setmetatile 29, 9, 0x2BF, FALSE
	setmetatile 28, 10, 0x2C6, FALSE
	setmetatile 29, 10, 0x2C7, FALSE
	setmetatile 28, 12, 0x2BE, FALSE
	setmetatile 29, 12, 0x2BF, FALSE
	setmetatile 28, 13, 0x2C6, FALSE
	setmetatile 29, 13, 0x2C7, FALSE
	setmetatile 27, 11, 0x2B3, FALSE
	setmetatile 26, 11, 0x2B3, FALSE
	setmetatile 26, 9, 0x2BE, FALSE
	setmetatile 27, 9, 0x2BF, FALSE
	setmetatile 26, 10, 0x2C6, FALSE
	setmetatile 27, 10, 0x2C7, FALSE
	setmetatile 26, 12, 0x2BE, FALSE
	setmetatile 27, 12, 0x2BF, FALSE
	setmetatile 26, 13, 0x2C6, FALSE
	setmetatile 27, 13, 0x2C7, FALSE
	return


TurnMimikyus::
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
	turnobject 2, DIR_WEST
	turnobject 4, DIR_WEST
	turnobject 9, DIR_SOUTH
	turnobject 13, DIR_WEST
	turnobject 17, DIR_SOUTH
	release
	return


SetupDrisledgeGym::
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetupDrisledgeGym_2
	setflashlevel 1
SetupDrisledgeGym_1:
	call HideGhosts
	call RemoveHexManiac
	compare VAR_DRISLEDGE_TOWN_STATE, 11
	goto_if_eq SetupDrisledgeGym_6
SetupDrisledgeGym_5:
	compare VAR_DRISLEDGE_TOWN_STATE, 14
	goto_if_eq SetupDrisledgeGym_9
SetupDrisledgeGym_8:
	compare VAR_DRISLEDGE_TOWN_STATE, 17
	goto_if_eq SetupDrisledgeGym_12
SetupDrisledgeGym_11:
	compare VAR_DRISLEDGE_TOWN_STATE, 20
	goto_if_eq SetupDrisledgeGym_15
SetupDrisledgeGym_14:
	compare VAR_DRISLEDGE_TOWN_STATE, 23
	goto_if_eq SetupDrisledgeGym_17
	return

SetupDrisledgeGym_2:
	setflashlevel 0
	goto SetupDrisledgeGym_1

SetupDrisledgeGym_6:
	clearflag FLAG_TEMP_1
	goto SetupDrisledgeGym_5

SetupDrisledgeGym_9:
	clearflag FLAG_TEMP_2
	goto SetupDrisledgeGym_8

SetupDrisledgeGym_12:
	clearflag FLAG_TEMP_3
	goto SetupDrisledgeGym_11

SetupDrisledgeGym_15:
	clearflag FLAG_TEMP_4
	goto SetupDrisledgeGym_14

SetupDrisledgeGym_17:
	clearflag FLAG_TEMP_5
	return


RemoveHexManiac::
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge RemoveHexManiac_2
RemoveHexManiac_1:
	compare VAR_DRISLEDGE_TOWN_STATE, 13
	goto_if_ge RemoveHexManiac_5
RemoveHexManiac_4:
	compare VAR_DRISLEDGE_TOWN_STATE, 16
	goto_if_ge RemoveHexManiac_8
RemoveHexManiac_7:
	compare VAR_DRISLEDGE_TOWN_STATE, 19
	goto_if_ge RemoveHexManiac_11
RemoveHexManiac_10:
	compare VAR_DRISLEDGE_TOWN_STATE, 22
	goto_if_ge RemoveHexManiac_14
RemoveHexManiac_13:
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge RemoveHexManiac_17
RemoveHexManiac_16:
	return

RemoveHexManiac_2:
	setflag FLAG_TEMP_10
	goto RemoveHexManiac_1

RemoveHexManiac_5:
	setflag FLAG_TEMP_11
	goto RemoveHexManiac_4

RemoveHexManiac_8:
	setflag FLAG_TEMP_12
	goto RemoveHexManiac_7

RemoveHexManiac_11:
	setflag FLAG_TEMP_13
	goto RemoveHexManiac_10

RemoveHexManiac_14:
	setflag FLAG_TEMP_14
	goto RemoveHexManiac_13

RemoveHexManiac_17:
	setflag FLAG_TEMP_F
	goto RemoveHexManiac_16


HideGhosts::
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	setflag FLAG_TEMP_E
	return


EventScript_FallDownDrisledgeGym::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warpholexy MAP_DRISLEDGE_GYM, 5, 38
	waitstate
	end


DrisledgeGym_Mimikyu1::
	faceplayer
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MIMIKYU, 37
	dowildbattle
	delay 20
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement 2, Walk6Right
	waitmovement 0
	removeobject 2
	setvar VAR_DRISLEDGE_TOWN_STATE, 12
	release
	return


DrisledgeGym_Mimikyu2::
	faceplayer
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MIMIKYU, 37
	dowildbattle
	delay 20
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement 4, Walk6Up
	waitmovement 0
	removeobject 4
	setvar VAR_DRISLEDGE_TOWN_STATE, 15
	release
	return


DrisledgeGym_Mimikyu3::
	faceplayer
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MIMIKYU, 37
	dowildbattle
	delay 20
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement 9, Walk6Right
	waitmovement 0
	removeobject 9
	setvar VAR_DRISLEDGE_TOWN_STATE, 18
	release
	return


DrisledgeGym_Mimikyu4::
	faceplayer
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MIMIKYU, 37
	dowildbattle
	delay 20
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement 13, Walk6Up
	waitmovement 0
	removeobject 13
	setvar VAR_DRISLEDGE_TOWN_STATE, 21
	release
	return


DrisledgeGym_Mimikyu5::
	faceplayer
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MIMIKYU, 37
	dowildbattle
	delay 20
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement 17, Walk6Left
	waitmovement 0
	removeobject 17
	setvar VAR_DRISLEDGE_TOWN_STATE, 25
	release
	return


DrisledgeGym_Trainer1::
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER1, DrisledgeGym_Trainer4_Intro, DrisledgeGym_Trainer4_Lose, DrisledgeGym_Trainer1_PostScript
	return


DrisledgeGym_Trainer1_PostScript::
	delay 12
	clearflag FLAG_TEMP_6
	addobject 3
	msgbox KeepUpWithReal
	closemessage
	delay 48
	applymovement 3, RunFastDown
	applymovement 1, RunFastRight
	call DrisledgeMetatiles1
	setvar VAR_DRISLEDGE_TOWN_STATE, 10
	waitmovement 0
	removeobject 3
	removeobject 1
	release
	return


DrisledgeMetatiles1::
	delay 4
	setmetatile 21, 38, 0x2B3, FALSE
	setmetatile 20, 39, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 22, 38, 0x2B3, FALSE
	setmetatile 20, 40, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 23, 38, 0x2B3, FALSE
	setmetatile 20, 41, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 24, 38, 0x2B3, FALSE
	setmetatile 20, 42, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	return


DrisledgeGym_Trainer2::
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER2, DrisledgeGym_Trainer1_Intro, DrisledgeGym_Trainer1_Lose, DrisledgeGym_Trainer2_PostScript
	return


DrisledgeGym_Trainer2_PostScript::
	delay 12
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_8
	addobject 6
	addobject 7
	msgbox KeepUpWithReal
	closemessage
	delay 48
	applymovement 5, RunFastUp
	applymovement 6, RunFastDown
	applymovement 7, RunFastRight
	call DrisledgeMetatiles2
	setvar VAR_DRISLEDGE_TOWN_STATE, 13
	waitmovement 0
	removeobject 5
	removeobject 6
	removeobject 7
	release
	return


DrisledgeMetatiles2::
	delay 4
	setmetatile 32, 37, 0x2B3, FALSE
	setmetatile 33, 38, 0x2B3, FALSE
	setmetatile 32, 39, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 32, 36, 0x2B3, FALSE
	setmetatile 34, 38, 0x2B3, FALSE
	setmetatile 32, 40, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 32, 35, 0x2B3, FALSE
	setmetatile 35, 38, 0x2B3, FALSE
	setmetatile 32, 41, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 32, 34, 0x2B3, FALSE
	setmetatile 36, 38, 0x2B3, FALSE
	setmetatile 32, 42, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	return


DrisledgeGym_Trainer3::
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER3, DrisledgeGym_Trainer2_Intro, DrisledgeGym_Trainer2_Lose, DrisledgeGym_Trainer3_PostScript
	return


DrisledgeGym_Trainer3_PostScript::
	delay 12
	clearflag FLAG_TEMP_A
	clearflag FLAG_TEMP_9
	addobject 11
	addobject 8
	msgbox KeepUpWithReal
	closemessage
	delay 48
	applymovement 10, RunFastRight
	applymovement 11, RunFastUp
	applymovement 8, RunFastLeft
	call DrisledgeMetatiles3
	setvar VAR_DRISLEDGE_TOWN_STATE, 16
	waitmovement 0
	removeobject 8
	removeobject 10
	removeobject 11
	release
	return


DrisledgeMetatiles3::
	delay 4
	setmetatile 33, 27, 0x2B3, FALSE
	setmetatile 32, 26, 0x2B3, FALSE
	setmetatile 31, 27, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 34, 27, 0x2B3, FALSE
	setmetatile 32, 25, 0x2B3, FALSE
	setmetatile 30, 27, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 35, 27, 0x2B3, FALSE
	setmetatile 32, 24, 0x2B3, FALSE
	setmetatile 29, 27, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 36, 27, 0x2B3, FALSE
	setmetatile 32, 23, 0x2B3, FALSE
	setmetatile 28, 27, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	return


DrisledgeGym_Trainer4::
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER4, DrisledgeGym_Trainer3_Intro, DrisledgeGym_Trainer3_Lose, DrisledgeGym_Trainer4_PostScript
	return


DrisledgeGym_Trainer4_PostScript::
	delay 12
	clearflag FLAG_TEMP_B
	clearflag FLAG_TEMP_C
	addobject 12
	addobject 15
	msgbox KeepUpWithReal
	closemessage
	delay 48
	applymovement 12, RunFastRight
	applymovement 14, RunFastUp
	applymovement 15, RunFastDown
	call DrisledgeMetatiles4
	setvar VAR_DRISLEDGE_TOWN_STATE, 19
	waitmovement 0
	removeobject 12
	removeobject 14
	removeobject 15
	release
	return


DrisledgeMetatiles4::
	delay 4
	setmetatile 46, 27, 0x2B3, FALSE
	setmetatile 45, 26, 0x2B3, FALSE
	setmetatile 45, 28, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 47, 27, 0x2B3, FALSE
	setmetatile 45, 25, 0x2B3, FALSE
	setmetatile 45, 29, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 48, 27, 0x2B3, FALSE
	setmetatile 45, 24, 0x2B3, FALSE
	setmetatile 45, 30, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 49, 27, 0x2B3, FALSE
	setmetatile 45, 23, 0x2B3, FALSE
	setmetatile 45, 31, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	return


DrisledgeGym_Trainer5::
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER5, DrisledgeGym_Trainer5_Intro, DrisledgeGym_Trainer5_Lose, DrisledgeGym_Trainer5_PostScript
	return


DrisledgeGym_Trainer5_PostScript::
	delay 12
	clearflag FLAG_TEMP_D
	clearflag FLAG_TEMP_E
	addobject 16
	addobject 19
	msgbox KeepUpWithReal
	closemessage
	delay 48
	applymovement 19, RunFastRight
	applymovement 16, RunFastUp
	applymovement 18, RunFastLeft
	call DrisledgeMetatiles5
	setvar VAR_DRISLEDGE_TOWN_STATE, 22
	waitmovement 0
	removeobject 16
	removeobject 19
	removeobject 18
	release
	return


DrisledgeMetatiles5::
	delay 4
	setmetatile 44, 11, 0x2B3, FALSE
	setmetatile 45, 10, 0x2B3, FALSE
	setmetatile 46, 11, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 43, 11, 0x2B3, FALSE
	setmetatile 45, 9, 0x2B3, FALSE
	setmetatile 47, 11, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 42, 11, 0x2B3, FALSE
	setmetatile 45, 8, 0x2B3, FALSE
	setmetatile 48, 11, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	setmetatile 41, 11, 0x2B3, FALSE
	setmetatile 45, 7, 0x2B3, FALSE
	setmetatile 49, 11, 0x2B3, FALSE
	delay 4
	special DrawWholeMapView
	return


DrisledgeGym_Trainer6::
	trainerbattle_single TRAINER_DRISLEDGEGYM_TRAINER6, DrisledgeGym_Trainer6_Intro, DrisledgeGym_Trainer6_Lose, DrisledgeGym_Trainer6_PostScript
	return


DrisledgeGym_Trainer6_PostScript::
	animateflash 0
	setflashlevel 0
	applymovement 21, Walk7Left
	call DrisledgeMetatiles6
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
	waitmovement 0
	removeobject 21
	release
	return


DrisledgeMetatiles6::
	setmetatile 31, 11, 0x2B3, FALSE
	delay 12
	special DrawWholeMapView
	setmetatile 30, 11, 0x2B3, FALSE
	setmetatile 30, 9, 0x2BE, FALSE
	setmetatile 31, 9, 0x2BF, FALSE
	setmetatile 30, 10, 0x2C6, FALSE
	setmetatile 31, 10, 0x2C7, FALSE
	setmetatile 30, 12, 0x2BE, FALSE
	setmetatile 31, 12, 0x2BF, FALSE
	setmetatile 30, 13, 0x2C6, FALSE
	setmetatile 31, 13, 0x2C7, FALSE
	delay 12
	playse SE_M_FLAME_WHEEL
	special DrawWholeMapView
	setmetatile 29, 11, 0x2B3, FALSE
	delay 12
	special DrawWholeMapView
	setmetatile 28, 11, 0x2B3, FALSE
	setmetatile 28, 9, 0x2BE, FALSE
	setmetatile 29, 9, 0x2BF, FALSE
	setmetatile 28, 10, 0x2C6, FALSE
	setmetatile 29, 10, 0x2C7, FALSE
	setmetatile 28, 12, 0x2BE, FALSE
	setmetatile 29, 12, 0x2BF, FALSE
	setmetatile 28, 13, 0x2C6, FALSE
	setmetatile 29, 13, 0x2C7, FALSE
	delay 12
	playse SE_M_FLAME_WHEEL
	special DrawWholeMapView
	setmetatile 27, 11, 0x2B3, FALSE
	delay 12
	special DrawWholeMapView
	setmetatile 26, 11, 0x2B3, FALSE
	setmetatile 26, 9, 0x2BE, FALSE
	setmetatile 27, 9, 0x2BF, FALSE
	setmetatile 26, 10, 0x2C6, FALSE
	setmetatile 27, 10, 0x2C7, FALSE
	setmetatile 26, 12, 0x2BE, FALSE
	setmetatile 27, 12, 0x2BF, FALSE
	setmetatile 26, 13, 0x2C6, FALSE
	setmetatile 27, 13, 0x2C7, FALSE
	delay 12
	playse SE_M_FLAME_WHEEL
	special DrawWholeMapView
	return


DrisledgeGym_Trigger1::
	setvar VAR_DRISLEDGE_TOWN_STATE, 11
	clearflag FLAG_TEMP_1
	addobject 2
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	turnobject 2, DIR_SOUTH
	return


DrisledgeGym_Trigger2::
	setvar VAR_DRISLEDGE_TOWN_STATE, 14
	clearflag FLAG_TEMP_2
	addobject 4
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	turnobject 4, DIR_SOUTH
	return


DrisledgeGym_Trigger3::
	setvar VAR_DRISLEDGE_TOWN_STATE, 14
	clearflag FLAG_TEMP_2
	addobject 4
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	turnobject 4, DIR_EAST
	return


DrisledgeGym_Trigger4::
	setvar VAR_DRISLEDGE_TOWN_STATE, 17
	clearflag FLAG_TEMP_3
	addobject 9
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
	turnobject 9, DIR_WEST
	return


DrisledgeGym_Trigger5::
	setvar VAR_DRISLEDGE_TOWN_STATE, 17
	clearflag FLAG_TEMP_3
	addobject 9
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
	turnobject 9, DIR_NORTH
	return


DrisledgeGym_Trigger6::
	setvar VAR_DRISLEDGE_TOWN_STATE, 20
	clearflag FLAG_TEMP_4
	addobject 13
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	turnobject 13, DIR_SOUTH
	return


DrisledgeGym_Trigger7::
	setvar VAR_DRISLEDGE_TOWN_STATE, 20
	clearflag FLAG_TEMP_4
	addobject 13
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_RIGHT
	turnobject 13, DIR_EAST
	return


DrisledgeGym_Trigger8::
	setvar VAR_DRISLEDGE_TOWN_STATE, 23
	clearflag FLAG_TEMP_5
	addobject 17
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_RIGHT
	turnobject 17, DIR_EAST
	return


DrisledgeGym_Trigger9::
	setvar VAR_DRISLEDGE_TOWN_STATE, 23
	clearflag FLAG_TEMP_5
	addobject 17
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_UP
	turnobject 17, DIR_NORTH
	return


RunFastDown:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

RunFastUp:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RunFastLeft:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RunFastRight:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

DrisledgeGym_AcerolaTalk::
	goto_if_set FLAG_BADGE05_GET, DrisledgeGym_AcerolaTalk_1
	msgbox DrisGym_YouArrived, MSGBOX_NPC
	turnobject 20, DIR_EAST
	return

DrisledgeGym_AcerolaTalk_1:
	msgbox DrisGym_AcerolaPosBat, MSGBOX_NPC
	return


DrisledgeGym_AcerolaTrigger::
	call GymStartingMovement
	msgbox AcerolaIntro
	trainerbattle_no_intro TRAINER_LEADER_ACEROLA, AcerolaDefeated
	goto Acerola_PosBatEvent
	return


Acerola_PosBatEvent::
	call GymMovementAfter
	msgbox Acerola_AfterDefeat
	message Acerola_ReceiveBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Acerola_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE05_GET
	addvar VAR_BADGES_OBTAINED, 1
	giveitem ITEM_TM_SHADOW_CLAW
	msgbox Explain_ShadowClaw, MSGBOX_DEFAULT
	closemessage
	special RemoveCameraObject
	release
	end


DrisledgeGym_Statue::
	msgbox DrisledgeGym_Statue_Text, MSGBOX_NPC
	return


KeepUpWithReal::
	.string "…Think you can keep up with the\n"
	.string "real one?$"

DrisledgeGym_Trainer1_Intro::
	.string "Go away…$"

DrisledgeGym_Trainer1_Lose::
	.string "Leave me be…$"

DrisledgeGym_Trainer2_Intro::
	.string "Leave this place…$"

DrisledgeGym_Trainer2_Lose::
	.string "Why are you still here…$"

DrisledgeGym_Trainer3_Intro::
	.string "Let's play… forever…$"

DrisledgeGym_Trainer3_Lose::
	.string "Let's play… more…$"

DrisledgeGym_Trainer4_Intro::
	.string "A new friend?$"

DrisledgeGym_Trainer4_Lose::
	.string "No… not friend…$"

DrisledgeGym_Trainer5_Intro::
	.string "Why do you still follow us?$"

DrisledgeGym_Trainer5_Lose::
	.string "I see it now…$"

DrisledgeGym_Trainer6_Intro::
	.string "I will not let you reach Acerola…$"

DrisledgeGym_Trainer6_Lose::
	.string "I failed…$"

Acerola_AfterDefeat::
	.string "Lady Korrina gave a terrible display!\p"
	.string "This is it. I must give up my title and\n"
	.string "admit that your strength far exceeds--\p"
	.string "Just teasing! But here's your Badge.\n"
	.string "Boy, you'll be rolling in 'em soon!$"

DrisGym_YouArrived::
	.string "I knew you'd be here soon!\p"
	.string "If you're ready, go stand on the other\n"
	.string "side of the arena and let's get this\l"
	.string "show on the road!$"

AcerolaIntro::
	.string "Time for Lady Korrina's big appearance!\p"
	.string "Haha, I'm just messing around with you!\n"
	.string "I know, you're rollin' in the aisles,\l"
	.string "right?\p"
	.string "I haven't forgotten your battle\n"
	.string "with your friend back on Route 11.\p"
	.string "I already know you're a strong Trainer,\n"
	.string "so let's get this show on the road!$"

AcerolaDefeated::
	.string "Oh! I have been defeated! Alack, alay!$"

Acerola_ReceiveBadge::
	.string "{PLAYER} received the Phantom Badge\n"
	.string "from Acerola!$"

Acerola_ExplainBadge::
	.string "If you've got a Rumble Badge, then\n"
	.string "you can trade Pokémon up to level 60\l"
	.string "with your friends and they'll be ready\l"
	.string "to roll! They'll love you, all right!\p"
	.string "And you'll be able to push any pesky\n"
	.string "boulders out of your way using the\l"
	.string "HM Strength!\p"
	.string "And here, why don't you take this TM?\n"
	.string "I've really been on a roll with it myself!$"

Explain_ShadowClaw::
	.string "Power-Up Punch does just what it says\n"
	.string "on the box!\p"
	.string "The more that you use it, the tougher\n"
	.string "your fists get.\p"
	.string "Keep using it.\n"
	.string "Your Attack will go through the roof!$"

DrisGym_AcerolaPosBat::
	.string "Already rarin' to go again?\n"
	.string "I dunno…\p"
	.string "That Mega Ring was my trump card, but\n"
	.string "now that you have one as well, I doubt\l"
	.string "I'd have any chance against you!$"

DrisledgeGym_Statue_Text::
	.string "There are only indecipherable sketches\n"
	.string "and doodles drawn on this plaque.$"
