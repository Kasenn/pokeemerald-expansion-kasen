Route119_WeatherInstitute_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkitem ITEM_ZYGARDE_CUBE
	compare VAR_RESULT, FALSE
	goto_if_eq Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setobjectxyperm 1, 2, 4
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_0, 1
	return

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 1, ZygardeCubeEvent
	.2byte 0


ZygardeCubeEvent::
	delay 32
	playse SE_PIN
	turnobject 1, DIR_NORTH
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	applymovement 1, Walk2Up
	waitmovement 0
	delay 8
	msgbox CanIHaveThePapers
	msgbox PlayerHandsPapersToScientist
	removeitem ITEM_RESEARCH_PAPERS
	msgbox ScientistDireNews
	closemessage
	applymovement 1, LabScientistMove
	applymovement OBJ_EVENT_ID_PLAYER, LabPlayerMove
	waitmovement 1
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 8
	msgbox TakeZygardeCube
	giveitem ITEM_ZYGARDE_CUBE
	call ReleaseZygardeCellsCores
	msgbox ExplainZygardeCube
	closemessage
	applymovement 1, ZygardeCubeEvent_Movement_0
	waitmovement 0
	setobjectxyperm 1, 2, 4
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	setvar VAR_TEMP_0, 0
	release
	return


LabScientistMove:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_in_place_fast_down
	step_end

LabPlayerMove:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

LegendaryInstitute2F_Man::
	msgbox LegendaryInstitute2F_Man_Text, MSGBOX_NPC
	turnobject 3, DIR_WEST
	return


LegendaryInstitute2F_Woman::
	msgbox LegendaryInstitute2F_Woman_Text, MSGBOX_NPC
	turnobject 2, DIR_WEST
	return


LegendaryInstitute2F_MainScientist::
	compare VAR_ZYGARDE_PROGRESS, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_2
	compare VAR_ZYGARDE_PROGRESS, 3
	goto_if_eq LegendaryInstitute2F_MainScientist_5
	goto_if_set FLAG_UNLOCKED_REASSEMBLY_UNIT, LegendaryInstitute2F_MainScientist_7
	compare VAR_ZYGARDE_CELLS, 10
	goto_if_ge LegendaryInstitute2F_MainScientist_12
LegendaryInstitute2F_MainScientist_11:
	compare VAR_ZYGARDE_CELLS, 0
	goto_if_eq LegendaryInstitute2F_MainScientist_16
	buffernumberstring STR_VAR_1, VAR_ZYGARDE_CELLS
LegendaryInstitute2F_MainScientist_15:
	compare VAR_ZYGARDE_CORES, 0
	goto_if_eq LegendaryInstitute2F_MainScientist_20
	buffernumberstring STR_VAR_2, VAR_ZYGARDE_CORES
LegendaryInstitute2F_MainScientist_19:
	msgbox NotEnoughCellsAndCores, MSGBOX_NPC
	return

LegendaryInstitute2F_MainScientist_2:
	msgbox TenZygardeCreated, MSGBOX_NPC
	setvar VAR_ZYGARDE_PROGRESS, 2
	end

LegendaryInstitute2F_MainScientist_5:
	msgbox FiftyZygardeCreated, MSGBOX_NPC
	setvar VAR_ZYGARDE_PROGRESS, 4
	end

LegendaryInstitute2F_MainScientist_7:
	lock
	faceplayer
	goto MainScientist_ExplainFeatures
	return

LegendaryInstitute2F_MainScientist_10:
	msgbox HaveEnoughCellsAndCores
	setflag FLAG_UNLOCKED_REASSEMBLY_UNIT
	return

LegendaryInstitute2F_MainScientist_12:
	compare VAR_ZYGARDE_CORES, 1
	goto_if_ge LegendaryInstitute2F_MainScientist_10
	goto LegendaryInstitute2F_MainScientist_11

LegendaryInstitute2F_MainScientist_16:
	bufferstring STR_VAR_1, LegendaryInstitute2F_MainScientist_Text_0
	goto LegendaryInstitute2F_MainScientist_15

LegendaryInstitute2F_MainScientist_20:
	bufferstring STR_VAR_2, LegendaryInstitute2F_MainScientist_Text_0
	goto LegendaryInstitute2F_MainScientist_19


MainScientist_ExplainFeatures::
	message WhichFeatureToExplain
	waitmessage
	dynmultichoice 23, 0, FALSE, 4, 0, 0, MainScientist_ExplainFeatures_Text_0, MainScientist_ExplainFeatures_Text_1, MainScientist_ExplainFeatures_Text_2, MainScientist_ExplainFeatures_Text_3
	switch VAR_RESULT
	case 0, MainScientist_ExplainFeatures_2
	case 1, MainScientist_ExplainFeatures_3
	case 2, MainScientist_ExplainFeatures_4
	case 3, MainScientist_ExplainFeatures_5
	case MULTI_B_PRESSED, MainScientist_ExplainFeatures_6
	return

MainScientist_ExplainFeatures_2:
	goto Explain_Assembly
	return

MainScientist_ExplainFeatures_3:
	goto Explain_Separation
	return

MainScientist_ExplainFeatures_4:
	goto Explain_CoreMoves
	return

MainScientist_ExplainFeatures_5:
	goto ExplainFeatures_Goodbye
	return

MainScientist_ExplainFeatures_6:
	goto ExplainFeatures_Goodbye
	return


Explain_Assembly::
	msgbox Explain_Assembly_Text
	goto MainScientist_ExplainFeatures
	return


Explain_Separation::
	msgbox Explain_Separation_Text
	goto MainScientist_ExplainFeatures
	return


Explain_CoreMoves::
	msgbox Explain_CoreMoves_Text
	goto MainScientist_ExplainFeatures
	return


ExplainFeatures_Goodbye::
	msgbox ExplainFeatures_Goodbye_Text
	release
	return


LegendaryInstitute2F_ReassemblyUnit::
	goto_if_set FLAG_UNLOCKED_REASSEMBLY_UNIT, LegendaryInstitute2F_ReassemblyUnit_1
	msgbox ReassemblyUnitInert, MSGBOX_SIGN
	return

LegendaryInstitute2F_ReassemblyUnit_1:
	lock
	waitse
	playse SE_PC_ON
	waitse
	msgbox ReassemblyUnitActivated
	goto ReassemblyUnit_MainScript
	return


ReassemblyUnit_MainScript::
	message DoWhatWithReassemblyUnit
	waitmessage
	dynmultichoice 23, 0, FALSE, 4, 0, 0, MainScientist_ExplainFeatures_Text_0, MainScientist_ExplainFeatures_Text_1, MainScientist_ExplainFeatures_Text_2, ReassemblyUnit_MainScript_Text_0
	switch VAR_RESULT
	case 0, ReassemblyUnit_MainScript_2
	case 1, ReassemblyUnit_MainScript_3
	case 2, ReassemblyUnit_MainScript_4
	case 3, ReassemblyUnit_MainScript_5
	case MULTI_B_PRESSED, ReassemblyUnit_MainScript_6
	return

ReassemblyUnit_MainScript_2:
	goto ReassemblyUnit_Assembly
	return

ReassemblyUnit_MainScript_3:
	goto ReassemblyUnit_Separation
	return

ReassemblyUnit_MainScript_4:
	goto ReassemblyUnit_CoreMoves
	return

ReassemblyUnit_MainScript_5:
	goto ReassemblyUnit_TurnOff
	return

ReassemblyUnit_MainScript_6:
	goto ReassemblyUnit_TurnOff
	return


ReassemblyUnit_Assembly::
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assembly_1
	goto_if_set FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_Assembly_1
	message AssembleWhichZygarde
	waitmessage
	dynmultichoice 23, 0, FALSE, 4, 0, 0, ReassemblyUnit_Assembly_Text_0, ReassemblyUnit_Assembly_Text_1, MainScientist_ExplainFeatures_Text_3
	switch VAR_RESULT
	case 0, ReassemblyUnit_Assembly_7
	case 1, ReassemblyUnit_Assembly_8
	case 2, ReassemblyUnit_Assembly_9
	case MULTI_B_PRESSED, ReassemblyUnit_Assembly_10
	return

ReassemblyUnit_Assembly_1:
	msgbox OnlyOneZygarde
	goto ReassemblyUnit_MainScript
	return

ReassemblyUnit_Assembly_7:
	goto ReassemblyUnit_Assemble10Forme
	return

ReassemblyUnit_Assembly_8:
	goto ReassemblyUnit_Assemble50Forme
	return

ReassemblyUnit_Assembly_9:
	goto ReassemblyUnit_MainScript
	return

ReassemblyUnit_Assembly_10:
	goto ReassemblyUnit_MainScript
	return


ReassemblyUnit_Assemble10Forme::
	msgbox AttemptingToAssemble10Forme
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZYGARDE_10
	givemon SPECIES_ZYGARDE_10, 40, ITEM_NONE, ITEM_STRANGE_BALL, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_DIG, MOVE_BIND, MOVE_LANDS_WRATH, MOVE_SANDSTORM, FALSE, 0, 0
	call GiveMon_Script
	setflag FLAG_ZYGARDE10_ASSEMBLED
	compare VAR_ZYGARDE_PROGRESS, 0
	goto_if_eq ReassemblyUnit_Assemble10Forme_2
ReassemblyUnit_Assemble10Forme_1:
	subvar VAR_ZYGARDE_CELLS, 10
	subvar VAR_ZYGARDE_CORES, 1
	release
	return

ReassemblyUnit_Assemble10Forme_2:
	setvar VAR_ZYGARDE_PROGRESS, 1
	goto ReassemblyUnit_Assemble10Forme_1


ReassemblyUnit_Assemble50Forme::
	compare VAR_ZYGARDE_CELLS, 50
	goto_if_lt ReassemblyUnit_Assemble50Forme_3
ReassemblyUnit_Assemble50Forme_1:
	msgbox AttemptingToAssemble50Forme
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZYGARDE_50
	givemon SPECIES_ZYGARDE_50, 40, ITEM_NONE, ITEM_STRANGE_BALL, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_DIG, MOVE_BIND, MOVE_LANDS_WRATH, MOVE_SANDSTORM, FALSE, 0, 0
	call GiveMon_Script
	compare VAR_ZYGARDE_PROGRESS, 3
	goto_if_lt ReassemblyUnit_Assemble50Forme_7
ReassemblyUnit_Assemble50Forme_6:
	setflag FLAG_ZYGARDE50_ASSEMBLED
	subvar VAR_ZYGARDE_CELLS, 50
	subvar VAR_ZYGARDE_CORES, 3
	return

ReassemblyUnit_Assemble50Forme_2:
	buffernumberstring STR_VAR_1, VAR_ZYGARDE_CELLS
	buffernumberstring STR_VAR_2, VAR_ZYGARDE_CORES
	msgbox NotEnoughCellsAndCoresInCube
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_1

ReassemblyUnit_Assemble50Forme_3:
	compare VAR_ZYGARDE_CORES, 3
	goto_if_lt ReassemblyUnit_Assemble50Forme_2
	goto ReassemblyUnit_Assemble50Forme_1

ReassemblyUnit_Assemble50Forme_7:
	setvar VAR_ZYGARDE_PROGRESS, 3
	goto ReassemblyUnit_Assemble50Forme_6


ReassemblyUnit_Separation::
	goto_if_unset FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Separation_3
ReassemblyUnit_Separation_1:
	checkpartymon SPECIES_ZYGARDE_10, 0
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Separation_7
ReassemblyUnit_Separation_6:
	specialvar VAR_RESULT, CountPartyNonEggMons
	compare VAR_RESULT, 1
	goto_if_eq ReassemblyUnit_Separation_10
ReassemblyUnit_Separation_9:
	msgbox ChooseZygardeForSeparation
	fadescreen FADE_TO_BLACK
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ReassemblyUnit_Separation_15
ReassemblyUnit_Separation_14:
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	compare VAR_RESULT, 0
	goto_if_eq ReassemblyUnit_Separation_18
ReassemblyUnit_Separation_17:
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	msgbox ZygardeRevertedBackToCellsAndCores
	compare VAR_0x8005, SPECIES_ZYGARDE_10
	goto_if_eq ReassemblyUnit_Separation_21
	compare VAR_0x8005, SPECIES_ZYGARDE_50
	goto_if_eq ReassemblyUnit_Separation_22
ReassemblyUnit_Separation_20:
	special SeparateZygarde
	callnative UpdateFollowingPokemon
	goto ReassemblyUnit_MainScript
	return

ReassemblyUnit_Separation_2:
	msgbox NoZygardeCurrentlyAssembled
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_1

ReassemblyUnit_Separation_3:
	goto_if_unset FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_Separation_2
	goto ReassemblyUnit_Separation_1

ReassemblyUnit_Separation_7:
	checkpartymon SPECIES_ZYGARDE_50, 0
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Separation_12
	goto ReassemblyUnit_Separation_6

ReassemblyUnit_Separation_10:
	msgbox ZygardeOnlyMonInParty
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_9

ReassemblyUnit_Separation_12:
	msgbox NoZygardeDetectedInParty
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_6

ReassemblyUnit_Separation_15:
	msgbox SeparationAborted
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_14

ReassemblyUnit_Separation_18:
	msgbox ZygardeOnlyAliveMon
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_17

ReassemblyUnit_Separation_21:
	addvar VAR_ZYGARDE_CELLS, 10
	addvar VAR_ZYGARDE_CORES, 1
	clearflag FLAG_ZYGARDE10_ASSEMBLED
	goto ReassemblyUnit_Separation_20

ReassemblyUnit_Separation_22:
	addvar VAR_ZYGARDE_CELLS, 50
	addvar VAR_ZYGARDE_CORES, 3
	clearflag FLAG_ZYGARDE50_ASSEMBLED
	goto ReassemblyUnit_Separation_20


ReassemblyUnit_CoreMoves::
	goto_if_set FLAG_ZYGARDE_CORE_1, ReassemblyUnit_CoreMoves_2
ReassemblyUnit_CoreMoves_1:
	goto_if_set FLAG_ZYGARDE_CORE_2, ReassemblyUnit_CoreMoves_5
ReassemblyUnit_CoreMoves_4:
	goto_if_set FLAG_ZYGARDE_CORE_3, ReassemblyUnit_CoreMoves_8
ReassemblyUnit_CoreMoves_7:
	goto_if_set FLAG_ZYGARDE_CORE_4, ReassemblyUnit_CoreMoves_11
ReassemblyUnit_CoreMoves_10:
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_14
ReassemblyUnit_CoreMoves_13:
	dynmultipush MainScientist_ExplainFeatures_Text_3, VAR_TEMP_1
	message TeachZygardeWhichMove
	waitmessage
	dynmultistack 23, 0, FALSE, VAR_TEMP_1, FALSE, 0, 0
	switch VAR_RESULT
	case 0, ReassemblyUnit_CoreMoves_17
	case 1, ReassemblyUnit_CoreMoves_18
	case 2, ReassemblyUnit_CoreMoves_19
	case 3, ReassemblyUnit_CoreMoves_20
	case 4, ReassemblyUnit_CoreMoves_21
	case 5, ReassemblyUnit_CoreMoves_22
	case MULTI_B_PRESSED, ReassemblyUnit_CoreMoves_22
	return

ReassemblyUnit_CoreMoves_2:
	dynmultipush ReassemblyUnit_CoreMoves_Text_0, VAR_TEMP_1
	addvar VAR_TEMP_1, 1
	goto ReassemblyUnit_CoreMoves_1

ReassemblyUnit_CoreMoves_5:
	dynmultipush ReassemblyUnit_CoreMoves_Text_1, VAR_TEMP_1
	addvar VAR_TEMP_1, 1
	goto ReassemblyUnit_CoreMoves_4

ReassemblyUnit_CoreMoves_8:
	dynmultipush ReassemblyUnit_CoreMoves_Text_2, VAR_TEMP_1
	addvar VAR_TEMP_1, 1
	goto ReassemblyUnit_CoreMoves_7

ReassemblyUnit_CoreMoves_11:
	dynmultipush ReassemblyUnit_CoreMoves_Text_3, VAR_TEMP_1
	addvar VAR_TEMP_1, 1
	goto ReassemblyUnit_CoreMoves_10

ReassemblyUnit_CoreMoves_14:
	dynmultipush ReassemblyUnit_CoreMoves_Text_4, VAR_TEMP_1
	addvar VAR_TEMP_1, 1
	goto ReassemblyUnit_CoreMoves_13

ReassemblyUnit_CoreMoves_17:
	goto_if_set FLAG_ZYGARDE_CORE_1, ReassemblyUnit_CoreMoves_24
	goto_if_set FLAG_ZYGARDE_CORE_2, ReassemblyUnit_CoreMoves_25
	goto_if_set FLAG_ZYGARDE_CORE_3, ReassemblyUnit_CoreMoves_26
	goto_if_set FLAG_ZYGARDE_CORE_4, ReassemblyUnit_CoreMoves_27
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_28
ReassemblyUnit_CoreMoves_23:
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_18:
	goto_if_set FLAG_ZYGARDE_CORE_2, ReassemblyUnit_CoreMoves_35
	goto_if_set FLAG_ZYGARDE_CORE_3, ReassemblyUnit_CoreMoves_36
	goto_if_set FLAG_ZYGARDE_CORE_4, ReassemblyUnit_CoreMoves_37
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_38
ReassemblyUnit_CoreMoves_34:
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_19:
	goto_if_set FLAG_ZYGARDE_CORE_3, ReassemblyUnit_CoreMoves_44
	goto_if_set FLAG_ZYGARDE_CORE_4, ReassemblyUnit_CoreMoves_45
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_46
ReassemblyUnit_CoreMoves_43:
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_20:
	goto_if_set FLAG_ZYGARDE_CORE_4, ReassemblyUnit_CoreMoves_51
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_52
ReassemblyUnit_CoreMoves_50:
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_21:
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_56
ReassemblyUnit_CoreMoves_55:
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_22:
	goto ReassemblyUnit_MainScript
	return

ReassemblyUnit_CoreMoves_24:
	setvar VAR_0x8005, MOVE_EXTREME_SPEED
	goto ReassemblyUnit_CoreMoves_23

ReassemblyUnit_CoreMoves_25:
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
	goto ReassemblyUnit_CoreMoves_23

ReassemblyUnit_CoreMoves_26:
	setvar VAR_0x8005, MOVE_CORE_ENFORCER
	goto ReassemblyUnit_CoreMoves_23

ReassemblyUnit_CoreMoves_27:
	setvar VAR_0x8005, MOVE_THOUSAND_ARROWS
	goto ReassemblyUnit_CoreMoves_23

ReassemblyUnit_CoreMoves_28:
	setvar VAR_0x8005, MOVE_THOUSAND_WAVES
	goto ReassemblyUnit_CoreMoves_23

ReassemblyUnit_CoreMoves_35:
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
	goto ReassemblyUnit_CoreMoves_34

ReassemblyUnit_CoreMoves_36:
	setvar VAR_0x8005, MOVE_CORE_ENFORCER
	goto ReassemblyUnit_CoreMoves_34

ReassemblyUnit_CoreMoves_37:
	setvar VAR_0x8005, MOVE_THOUSAND_ARROWS
	goto ReassemblyUnit_CoreMoves_34

ReassemblyUnit_CoreMoves_38:
	setvar VAR_0x8005, MOVE_THOUSAND_WAVES
	goto ReassemblyUnit_CoreMoves_34

ReassemblyUnit_CoreMoves_44:
	setvar VAR_0x8005, MOVE_CORE_ENFORCER
	goto ReassemblyUnit_CoreMoves_43

ReassemblyUnit_CoreMoves_45:
	setvar VAR_0x8005, MOVE_THOUSAND_ARROWS
	goto ReassemblyUnit_CoreMoves_43

ReassemblyUnit_CoreMoves_46:
	setvar VAR_0x8005, MOVE_THOUSAND_WAVES
	goto ReassemblyUnit_CoreMoves_43

ReassemblyUnit_CoreMoves_51:
	setvar VAR_0x8005, MOVE_THOUSAND_ARROWS
	goto ReassemblyUnit_CoreMoves_50

ReassemblyUnit_CoreMoves_52:
	setvar VAR_0x8005, MOVE_THOUSAND_WAVES
	goto ReassemblyUnit_CoreMoves_50

ReassemblyUnit_CoreMoves_56:
	setvar VAR_0x8005, MOVE_THOUSAND_WAVES
	goto ReassemblyUnit_CoreMoves_55


ZygardeTeachCoreMove::
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq ZygardeTeachCoreMove_2
ZygardeTeachCoreMove_1:
	goto ReassemblyUnit_MainScript
	return

ZygardeTeachCoreMove_2:
	msgbox ZygardeMoveAborted
	goto ZygardeTeachCoreMove_1


ReassemblyUnit_TurnOff::
	waitse
	playse SE_PC_OFF
	release
	return


ReleaseZygardeCellsCores::
	clearflag FLAG_ZYGARDE_CELL_1
	clearflag FLAG_ZYGARDE_CELL_2
	clearflag FLAG_ZYGARDE_CELL_3
	clearflag FLAG_ZYGARDE_CELL_4
	clearflag FLAG_ZYGARDE_CELL_5
	clearflag FLAG_ZYGARDE_CELL_6
	clearflag FLAG_ZYGARDE_CELL_7
	clearflag FLAG_ZYGARDE_CELL_8
	clearflag FLAG_ZYGARDE_CELL_9
	clearflag FLAG_ZYGARDE_CELL_10
	clearflag FLAG_ZYGARDE_CELL_11
	clearflag FLAG_ZYGARDE_CELL_12
	clearflag FLAG_ZYGARDE_CELL_13
	clearflag FLAG_ZYGARDE_CELL_14
	clearflag FLAG_ZYGARDE_CELL_15
	clearflag FLAG_ZYGARDE_CELL_16
	clearflag FLAG_ZYGARDE_CELL_17
	clearflag FLAG_ZYGARDE_CELL_18
	clearflag FLAG_ZYGARDE_CELL_19
	clearflag FLAG_ZYGARDE_CELL_20
	clearflag FLAG_ZYGARDE_CELL_21
	clearflag FLAG_ZYGARDE_CELL_22
	clearflag FLAG_ZYGARDE_CELL_23
	clearflag FLAG_ZYGARDE_CELL_24
	clearflag FLAG_ZYGARDE_CELL_25
	clearflag FLAG_ZYGARDE_CELL_26
	clearflag FLAG_ZYGARDE_CELL_27
	clearflag FLAG_ZYGARDE_CELL_28
	clearflag FLAG_ZYGARDE_CELL_29
	clearflag FLAG_ZYGARDE_CELL_30
	clearflag FLAG_ZYGARDE_CELL_31
	clearflag FLAG_ZYGARDE_CELL_32
	clearflag FLAG_ZYGARDE_CELL_33
	clearflag FLAG_ZYGARDE_CELL_34
	clearflag FLAG_ZYGARDE_CELL_35
	clearflag FLAG_ZYGARDE_CELL_36
	clearflag FLAG_ZYGARDE_CELL_37
	clearflag FLAG_ZYGARDE_CELL_38
	clearflag FLAG_ZYGARDE_CELL_39
	clearflag FLAG_ZYGARDE_CELL_40
	clearflag FLAG_ZYGARDE_CELL_41
	clearflag FLAG_ZYGARDE_CELL_42
	clearflag FLAG_ZYGARDE_CELL_43
	clearflag FLAG_ZYGARDE_CELL_44
	clearflag FLAG_ZYGARDE_CELL_45
	clearflag FLAG_ZYGARDE_CELL_46
	clearflag FLAG_ZYGARDE_CELL_47
	clearflag FLAG_ZYGARDE_CELL_48
	clearflag FLAG_ZYGARDE_CELL_49
	clearflag FLAG_ZYGARDE_CELL_50
	clearflag FLAG_ZYGARDE_CELL_51
	clearflag FLAG_ZYGARDE_CELL_52
	clearflag FLAG_ZYGARDE_CELL_53
	clearflag FLAG_ZYGARDE_CELL_54
	clearflag FLAG_ZYGARDE_CELL_55
	clearflag FLAG_ZYGARDE_CELL_56
	clearflag FLAG_ZYGARDE_CELL_57
	clearflag FLAG_ZYGARDE_CELL_58
	clearflag FLAG_ZYGARDE_CELL_59
	clearflag FLAG_ZYGARDE_CELL_60
	clearflag FLAG_ZYGARDE_CELL_61
	clearflag FLAG_ZYGARDE_CELL_62
	clearflag FLAG_ZYGARDE_CELL_63
	clearflag FLAG_ZYGARDE_CELL_64
	clearflag FLAG_ZYGARDE_CELL_65
	clearflag FLAG_ZYGARDE_CELL_66
	clearflag FLAG_ZYGARDE_CELL_67
	clearflag FLAG_ZYGARDE_CELL_68
	clearflag FLAG_ZYGARDE_CELL_69
	clearflag FLAG_ZYGARDE_CELL_70
	clearflag FLAG_ZYGARDE_CELL_71
	clearflag FLAG_ZYGARDE_CELL_72
	clearflag FLAG_ZYGARDE_CELL_73
	clearflag FLAG_ZYGARDE_CELL_74
	clearflag FLAG_ZYGARDE_CELL_75
	clearflag FLAG_ZYGARDE_CELL_76
	clearflag FLAG_ZYGARDE_CELL_77
	clearflag FLAG_ZYGARDE_CELL_78
	clearflag FLAG_ZYGARDE_CELL_79
	clearflag FLAG_ZYGARDE_CELL_80
	clearflag FLAG_ZYGARDE_CELL_81
	clearflag FLAG_ZYGARDE_CELL_82
	clearflag FLAG_ZYGARDE_CELL_83
	clearflag FLAG_ZYGARDE_CELL_84
	clearflag FLAG_ZYGARDE_CELL_85
	clearflag FLAG_ZYGARDE_CELL_86
	clearflag FLAG_ZYGARDE_CELL_87
	clearflag FLAG_ZYGARDE_CELL_88
	clearflag FLAG_ZYGARDE_CELL_89
	clearflag FLAG_ZYGARDE_CELL_90
	clearflag FLAG_ZYGARDE_CELL_91
	clearflag FLAG_ZYGARDE_CELL_92
	clearflag FLAG_ZYGARDE_CELL_93
	clearflag FLAG_ZYGARDE_CELL_94
	clearflag FLAG_ZYGARDE_CELL_95
	clearflag FLAG_ZYGARDE_CORE_1
	clearflag FLAG_ZYGARDE_CORE_2
	clearflag FLAG_ZYGARDE_CORE_3
	clearflag FLAG_ZYGARDE_CORE_4
	clearflag FLAG_ZYGARDE_CORE_5
	return


ZygardeCubeEvent_Movement_0:
	walk_right
	walk_in_place_fast_left
	step_end

LegendaryInstitute2F_MainScientist_Text_0:
	.string "no$"

MainScientist_ExplainFeatures_Text_0:
	.string "Assembly$"

MainScientist_ExplainFeatures_Text_1:
	.string "Separation$"

MainScientist_ExplainFeatures_Text_2:
	.string "Core Moves$"

MainScientist_ExplainFeatures_Text_3:
	.string "Cancel$"

ReassemblyUnit_MainScript_Text_0:
	.string "Turn off$"

ReassemblyUnit_Assembly_Text_0:
	.string "10% Forme$"

ReassemblyUnit_Assembly_Text_1:
	.string "50% Forme$"

ReassemblyUnit_CoreMoves_Text_0:
	.string "Extreme Speed$"

ReassemblyUnit_CoreMoves_Text_1:
	.string "Dragon Dance$"

ReassemblyUnit_CoreMoves_Text_2:
	.string "Core Enforcer$"

ReassemblyUnit_CoreMoves_Text_3:
	.string "Thousand Arrows$"

ReassemblyUnit_CoreMoves_Text_4:
	.string "Thousand Waves$"

CanIHaveThePapers::
	.string "(WIP)$"

PlayerHandsPapersToScientist::
	.string "(WIP)$"

ScientistDireNews::
	.string "(WIP)$"

TakeZygardeCube::
	.string "(WIP)$"

ExplainZygardeCube::
	.string "(WIP)$"

LegendaryInstitute2F_Man_Text::
	.string "Have you ever heard of the Pokémon\n"
	.string "Latias and Latios?\p"
	.string "It is said that they once roamed\n"
	.string "across Sinko, until one day they\l"
	.string "simply disappeared.\p"
	.string "Nobody knows for sure what\n"
	.string "happened to them.$"

LegendaryInstitute2F_Woman_Text::
	.string "(WIP)$"

TenZygardeCreated::
	.string "(WIP)$"

FiftyZygardeCreated::
	.string "(WIP)$"

WhichFeatureToExplain::
	.string "(WIP)$"

Explain_Assembly_Text::
	.string "(WIP)$"

Explain_Separation_Text::
	.string "(WIP)$"

Explain_CoreMoves_Text::
	.string "(WIP)$"

ExplainFeatures_Goodbye_Text::
	.string "(WIP)$"

HaveEnoughCellsAndCores::
	.string "(WIP)$"

NotEnoughCellsAndCores::
	.string "(WIP)$"

ReassemblyUnitInert::
	.string "(WIP)$"

ReassemblyUnitActivated::
	.string "(WIP)$"

DoWhatWithReassemblyUnit::
	.string "(WIP)$"

ZygardeMoveAborted::
	.string "(WIP)$"

TeachZygardeWhichMove::
	.string "(WIP)$"

OnlyOneZygarde::
	.string "(WIP)$"

AssembleWhichZygarde::
	.string "(WIP)$"

AttemptingToAssemble10Forme::
	.string "(WIP)$"

AttemptingToAssemble50Forme::
	.string "(WIP)$"

NotEnoughCellsAndCoresInCube::
	.string "(WIP)$"

NoZygardeCurrentlyAssembled::
	.string "(WIP)$"

NoZygardeDetectedInParty::
	.string "(WIP)$"

ZygardeOnlyMonInParty::
	.string "(WIP)$"

ChooseZygardeForSeparation::
	.string "(WIP)$"

SeparationAborted::
	.string "(WIP)$"

ZygardeOnlyAliveMon::
	.string "(WIP)$"

ZygardeRevertedBackToCellsAndCores::
	.string "(WIP)$"
