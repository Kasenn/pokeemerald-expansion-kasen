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
	msgbox ScientistDireNews2
	closemessage
	delay 10
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
	faceplayer
	compare VAR_ZYGARDE_PROGRESS, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_2
	compare VAR_ZYGARDE_PROGRESS, 3
	goto_if_eq LegendaryInstitute2F_MainScientist_5
	goto_if_set FLAG_UNLOCKED_REASSEMBLY_UNIT, LegendaryInstitute2F_MainScientist_8
	compare VAR_ZYGARDE_CELLS, 10
	goto_if_ge LegendaryInstitute2F_MainScientist_13
LegendaryInstitute2F_MainScientist_12:
	compare VAR_ZYGARDE_CELLS, 0
	goto_if_eq LegendaryInstitute2F_MainScientist_17
	buffernumberstring STR_VAR_1, VAR_ZYGARDE_CELLS
LegendaryInstitute2F_MainScientist_16:
	compare VAR_ZYGARDE_CORES, 0
	goto_if_eq LegendaryInstitute2F_MainScientist_21
	buffernumberstring STR_VAR_2, VAR_ZYGARDE_CORES
LegendaryInstitute2F_MainScientist_20:
	compare VAR_ZYGARDE_CELLS, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_30
LegendaryInstitute2F_MainScientist_29:
	compare VAR_ZYGARDE_CELLS, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_25
	compare VAR_ZYGARDE_CORES, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_26
	msgbox NotEnoughCellsAndCores, MSGBOX_NPC
LegendaryInstitute2F_MainScientist_7:
	release
	return

LegendaryInstitute2F_MainScientist_2:
	msgbox TenZygardeCreated, MSGBOX_NPC
	setvar VAR_ZYGARDE_PROGRESS, 2
	end

LegendaryInstitute2F_MainScientist_5:
	msgbox FiftyZygardeCreated, MSGBOX_NPC
	setvar VAR_ZYGARDE_PROGRESS, 4
	end

LegendaryInstitute2F_MainScientist_8:
	lock
	faceplayer
	goto MainScientist_ExplainFeatures
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_11:
	msgbox HaveEnoughCellsAndCores
	msgbox HaveEnoughCellsAndCores2
	setflag FLAG_UNLOCKED_REASSEMBLY_UNIT
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_13:
	compare VAR_ZYGARDE_CORES, 1
	goto_if_ge LegendaryInstitute2F_MainScientist_11
	goto LegendaryInstitute2F_MainScientist_12

LegendaryInstitute2F_MainScientist_17:
	bufferstring STR_VAR_1, LegendaryInstitute2F_MainScientist_Text_0
	goto LegendaryInstitute2F_MainScientist_16

LegendaryInstitute2F_MainScientist_21:
	bufferstring STR_VAR_2, LegendaryInstitute2F_MainScientist_Text_0
	goto LegendaryInstitute2F_MainScientist_20

LegendaryInstitute2F_MainScientist_24:
	msgbox NotEnoughCellAndCore, MSGBOX_NPC
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_25:
	msgbox NotEnoughCellAndCores, MSGBOX_NPC
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_26:
	msgbox NotEnoughCellsAndCore, MSGBOX_NPC
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_30:
	compare VAR_ZYGARDE_CORES, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_24
	goto LegendaryInstitute2F_MainScientist_29


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
	message AssembleWhichZygarde
	waitmessage
	dynmultichoice 23, 0, FALSE, 4, 0, 0, ReassemblyUnit_Assembly_Text_0, ReassemblyUnit_Assembly_Text_1, MainScientist_ExplainFeatures_Text_3
	switch VAR_RESULT
	case 0, ReassemblyUnit_Assembly_2
	case 1, ReassemblyUnit_Assembly_3
	case 2, ReassemblyUnit_Assembly_4
	case MULTI_B_PRESSED, ReassemblyUnit_Assembly_5
	return

ReassemblyUnit_Assembly_2:
	goto ReassemblyUnit_Assemble10Forme
	return

ReassemblyUnit_Assembly_3:
	goto ReassemblyUnit_Assemble50Forme
	return

ReassemblyUnit_Assembly_4:
	goto ReassemblyUnit_MainScript
	return

ReassemblyUnit_Assembly_5:
	goto ReassemblyUnit_MainScript
	return


ReassemblyUnit_Assemble10Forme::
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble10Forme_2
ReassemblyUnit_Assemble10Forme_1:
	goto_if_set FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_Assemble10Forme_5
ReassemblyUnit_Assemble10Forme_4:
	message AttemptingToAssemble10Forme
	waitmessage
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZYGARDE_10
	givemon SPECIES_ZYGARDE_10, 40, ITEM_NONE, ITEM_STRANGE_BALL, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_DIG, MOVE_BIND, MOVE_LANDS_WRATH, MOVE_SANDSTORM, FALSE, 0, 0
	call GiveMon_Script
	setflag FLAG_ZYGARDE10_ASSEMBLED
	compare VAR_ZYGARDE_PROGRESS, 0
	goto_if_eq ReassemblyUnit_Assemble10Forme_8
ReassemblyUnit_Assemble10Forme_7:
	subvar VAR_ZYGARDE_CELLS, 10
	subvar VAR_ZYGARDE_CORES, 1
	release
	return

ReassemblyUnit_Assemble10Forme_2:
	msgbox OnlyOneZygarde
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_1

ReassemblyUnit_Assemble10Forme_5:
	checkpartymon SPECIES_ZYGARDE_50, 0
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Assemble10Forme_11
ReassemblyUnit_Assemble10Forme_10:
	msgbox ChooseZygardeForAssembly
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ReassemblyUnit_Assemble10Forme_14
ReassemblyUnit_Assemble10Forme_13:
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	compare VAR_0x8005, SPECIES_ZYGARDE_50
	goto_if_ne ReassemblyUnit_Assemble10Forme_17
ReassemblyUnit_Assemble10Forme_16:
	addvar VAR_ZYGARDE_CELLS, 40
	addvar VAR_ZYGARDE_CORES, 2
	clearflag FLAG_ZYGARDE50_ASSEMBLED
	setflag FLAG_ZYGARDE10_ASSEMBLED
	special ConvertZygarde
	callnative UpdateFollowingPokemon
	msgbox AttemptingToAssemble10Forme
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_4

ReassemblyUnit_Assemble10Forme_8:
	setvar VAR_ZYGARDE_PROGRESS, 1
	goto ReassemblyUnit_Assemble10Forme_7

ReassemblyUnit_Assemble10Forme_11:
	msgbox NoZygardeDetectedInParty_Assembly
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_10

ReassemblyUnit_Assemble10Forme_14:
	msgbox AssemblyAborted
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_13

ReassemblyUnit_Assemble10Forme_17:
	msgbox SpeciesNotZygarde
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_16


ReassemblyUnit_Assemble50Forme::
	goto_if_set FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_Assemble50Forme_2
ReassemblyUnit_Assemble50Forme_1:
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble50Forme_5
ReassemblyUnit_Assemble50Forme_4:
	compare VAR_ZYGARDE_CELLS, 50
	goto_if_lt ReassemblyUnit_Assemble50Forme_9
ReassemblyUnit_Assemble50Forme_7:
	message AttemptingToAssemble50Forme
	waitmessage
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZYGARDE_50
	givemon SPECIES_ZYGARDE_50, 40, ITEM_NONE, ITEM_STRANGE_BALL, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_DIG, MOVE_BIND, MOVE_LANDS_WRATH, MOVE_SANDSTORM, FALSE, 0, 0
	call GiveMon_Script
	compare VAR_ZYGARDE_PROGRESS, 3
	goto_if_lt ReassemblyUnit_Assemble50Forme_18
ReassemblyUnit_Assemble50Forme_17:
	setflag FLAG_ZYGARDE50_ASSEMBLED
	subvar VAR_ZYGARDE_CELLS, 50
	subvar VAR_ZYGARDE_CORES, 3
	return

ReassemblyUnit_Assemble50Forme_2:
	msgbox OnlyOneZygarde
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_1

ReassemblyUnit_Assemble50Forme_5:
	compare VAR_ZYGARDE_CELLS, 40
	goto_if_lt ReassemblyUnit_Assemble50Forme_14
ReassemblyUnit_Assemble50Forme_12:
	checkpartymon SPECIES_ZYGARDE_10, 0
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Assemble50Forme_24
ReassemblyUnit_Assemble50Forme_23:
	msgbox ChooseZygardeForAssembly
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ReassemblyUnit_Assemble50Forme_30
ReassemblyUnit_Assemble50Forme_29:
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	compare VAR_0x8005, SPECIES_ZYGARDE_10
	goto_if_ne ReassemblyUnit_Assemble50Forme_33
ReassemblyUnit_Assemble50Forme_32:
	subvar VAR_ZYGARDE_CELLS, 40
	subvar VAR_ZYGARDE_CORES, 2
	clearflag FLAG_ZYGARDE10_ASSEMBLED
	setflag FLAG_ZYGARDE50_ASSEMBLED
	special ConvertZygarde
	callnative UpdateFollowingPokemon
	msgbox AttemptingToAssemble50Forme
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_4

ReassemblyUnit_Assemble50Forme_8:
	copyvar VAR_TEMP_2, VAR_ZYGARDE_CELLS
	copyvar VAR_TEMP_3, VAR_ZYGARDE_CORES
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble50Forme_21
ReassemblyUnit_Assemble50Forme_20:
	buffernumberstring STR_VAR_1, VAR_TEMP_2
	buffernumberstring STR_VAR_2, VAR_TEMP_3
	msgbox NotEnoughCellsAndCoresInCube
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_7

ReassemblyUnit_Assemble50Forme_9:
	compare VAR_ZYGARDE_CORES, 3
	goto_if_lt ReassemblyUnit_Assemble50Forme_8
	goto ReassemblyUnit_Assemble50Forme_7

ReassemblyUnit_Assemble50Forme_13:
	copyvar VAR_TEMP_2, VAR_ZYGARDE_CELLS
	copyvar VAR_TEMP_3, VAR_ZYGARDE_CORES
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble50Forme_27
ReassemblyUnit_Assemble50Forme_26:
	buffernumberstring STR_VAR_1, VAR_TEMP_2
	buffernumberstring STR_VAR_2, VAR_TEMP_3
	msgbox NotEnoughCellsAndCoresInCube
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_12

ReassemblyUnit_Assemble50Forme_14:
	compare VAR_ZYGARDE_CORES, 2
	goto_if_lt ReassemblyUnit_Assemble50Forme_13
	goto ReassemblyUnit_Assemble50Forme_12

ReassemblyUnit_Assemble50Forme_18:
	setvar VAR_ZYGARDE_PROGRESS, 3
	goto ReassemblyUnit_Assemble50Forme_17

ReassemblyUnit_Assemble50Forme_21:
	addvar VAR_TEMP_2, 10
	addvar VAR_TEMP_3, 1
	goto ReassemblyUnit_Assemble50Forme_20

ReassemblyUnit_Assemble50Forme_24:
	msgbox NoZygardeDetectedInParty_Assembly
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_23

ReassemblyUnit_Assemble50Forme_27:
	addvar VAR_TEMP_2, 10
	addvar VAR_TEMP_3, 1
	goto ReassemblyUnit_Assemble50Forme_26

ReassemblyUnit_Assemble50Forme_30:
	msgbox AssemblyAborted
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_29

ReassemblyUnit_Assemble50Forme_33:
	msgbox SpeciesNotZygarde
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_32


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
	compare VAR_0x8005, SPECIES_ZYGARDE_10
	goto_if_eq ReassemblyUnit_Separation_21
	compare VAR_0x8005, SPECIES_ZYGARDE_50
	goto_if_eq ReassemblyUnit_Separation_22
	msgbox SpeciesNotZygarde
	goto ReassemblyUnit_MainScript
ReassemblyUnit_Separation_20:
	special SeparateZygarde
	callnative UpdateFollowingPokemon
	message ZygardeRevertedBackToCellsAndCores
	waitmessage
	msgbox SeparatedSuccessfully
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
	goto_if_unset FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_CoreMoves_3
ReassemblyUnit_CoreMoves_1:
	goto_if_set FLAG_ZYGARDE_CORE_1, ReassemblyUnit_CoreMoves_7
ReassemblyUnit_CoreMoves_6:
	goto_if_set FLAG_ZYGARDE_CORE_2, ReassemblyUnit_CoreMoves_10
ReassemblyUnit_CoreMoves_9:
	goto_if_set FLAG_ZYGARDE_CORE_3, ReassemblyUnit_CoreMoves_13
ReassemblyUnit_CoreMoves_12:
	goto_if_set FLAG_ZYGARDE_CORE_4, ReassemblyUnit_CoreMoves_16
ReassemblyUnit_CoreMoves_15:
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_19
ReassemblyUnit_CoreMoves_18:
	dynmultipush MainScientist_ExplainFeatures_Text_3, 5
	message TeachZygardeWhichMove
	waitmessage
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
	switch VAR_RESULT
	case 0, ReassemblyUnit_CoreMoves_22
	case 1, ReassemblyUnit_CoreMoves_23
	case 2, ReassemblyUnit_CoreMoves_24
	case 3, ReassemblyUnit_CoreMoves_25
	case 4, ReassemblyUnit_CoreMoves_26
	case 5, ReassemblyUnit_CoreMoves_27
	case MULTI_B_PRESSED, ReassemblyUnit_CoreMoves_27
	return

ReassemblyUnit_CoreMoves_2:
	msgbox NoZygardeCurrentlyAssembled
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_CoreMoves_1

ReassemblyUnit_CoreMoves_3:
	goto_if_unset FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_CoreMoves_2
	goto ReassemblyUnit_CoreMoves_1

ReassemblyUnit_CoreMoves_7:
	dynmultipush ReassemblyUnit_CoreMoves_Text_0, 0
	goto ReassemblyUnit_CoreMoves_6

ReassemblyUnit_CoreMoves_10:
	dynmultipush ReassemblyUnit_CoreMoves_Text_1, 1
	goto ReassemblyUnit_CoreMoves_9

ReassemblyUnit_CoreMoves_13:
	dynmultipush ReassemblyUnit_CoreMoves_Text_2, 2
	goto ReassemblyUnit_CoreMoves_12

ReassemblyUnit_CoreMoves_16:
	dynmultipush ReassemblyUnit_CoreMoves_Text_3, 3
	goto ReassemblyUnit_CoreMoves_15

ReassemblyUnit_CoreMoves_19:
	dynmultipush ReassemblyUnit_CoreMoves_Text_4, 4
	goto ReassemblyUnit_CoreMoves_18

ReassemblyUnit_CoreMoves_22:
	setvar VAR_0x8005, MOVE_EXTREME_SPEED_ZYG
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_23:
	setvar VAR_0x8005, MOVE_DRAGON_DANCE_ZYG
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_24:
	setvar VAR_0x8005, MOVE_CORE_ENFORCER
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_25:
	setvar VAR_0x8005, MOVE_THOUSAND_ARROWS
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_26:
	setvar VAR_0x8005, MOVE_THOUSAND_WAVES
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_27:
	msgbox ZygardeMoveAborted
	goto ReassemblyUnit_MainScript
	return


ZygardeTeachCoreMove::
	msgbox SelectZygardeToTeachMove
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
	.string "Ah, it's you!\p"
	.string "Were you able to recover\n"
	.string "our research papers?$"

PlayerHandsPapersToScientist::
	.string "{PLAYER} hands the research papers\n"
	.string "to the scientist.$"

ScientistDireNews::
	.string "Splendid!\n"
	.string "Now let's see here…\p"
	.string "It looks like Team Rocket may have\n"
	.string "kept some of the papers, but most of\l"
	.string "the material should be here.$"

ScientistDireNews2::
	.string "Now, for the reason they stole our\n"
	.string "research to begin with…\p"
	.string "We fear that Team Rocket may be\n"
	.string "looking for an ancient Pokémon\l"
	.string "called Yveltal.\p"
	.string "Yveltal is said to be sleeping in\n"
	.string "its hidden nest, and if awoken,\l"
	.string "could spread devastation across\l"
	.string "the entire world.\p"
	.string "If Team Rocket were to get their\n"
	.string "hands on Yveltal and control it,\l"
	.string "the consequences would be dire.\p"
	.string "We must find where Yveltal rests\n"
	.string "before Team Rocket does!\p"
	.string "In the meantime, there is something\n"
	.string "I need to show you.\p"
	.string "Please follow me.$"

TakeZygardeCube::
	.string "This is a Zygarde Reassembly Unit.\p"
	.string "It's a machine capable of\n"
	.string "reassembling Zygarde, a legendary\l"
	.string "Pokémon believed to be the\l"
	.string "antithesis of Yveltal.\p"
	.string "However, before we can fire up\n"
	.string "the machine, we're going to need\l"
	.string "your help.$"

ExplainZygardeCube::
	.string "In order for the machine to work,\n"
	.string "it requires Zygarde Cells and Cores.\p"
	.string "Normally these Cells and Cores are\n"
	.string "almost impossible to come by, but\l"
	.string "that Zygarde Cube emits a frequency\l"
	.string "that should draw them out of hiding.\p"
	.string "Use the Zygarde Cube to collect at\n"
	.string "least ten Cells and one Core,\l"
	.string "bring them back here, and let's see\l"
	.string "if we can't get this thing running!$"

LegendaryInstitute2F_Man_Text::
	.string "Have you ever heard of the Pokémon\n"
	.string "Latias and Latios?\p"
	.string "It is said that they once roamed\n"
	.string "across Sinko, until one day they\l"
	.string "simply disappeared.\p"
	.string "Nobody knows for sure what\n"
	.string "happened to them.$"

LegendaryInstitute2F_Woman_Text::
	.string "Nobody knows for certain where\n"
	.string "Zygarde originates from.\p"
	.string "Some say it's the nature's will\n"
	.string "concentrating into a single being\l"
	.string "meant to protect the world from\l"
	.string "calamity, while some suspect it\l"
	.string "might be a man-made Pokémon,\l"
	.string "like Porygon.$"

TenZygardeCreated::
	.string "You've managed to assemble\n"
	.string "a 10% Forme Zygarde?\p"
	.string "That's great!\p"
	.string "However, I believe we can\n"
	.string "push it even further.\p"
	.string "If you can find a total of 50 Cells\n"
	.string "and 3 Cores, we may be able to\l"
	.string "unlock its original Forme!$"

FiftyZygardeCreated::
	.string "You've managed to assemble\n"
	.string "the 50% Forme Zygarde?\p"
	.string "Astounding!\p"
	.string "I never thought I would get to\n"
	.string "see it in its complete Forme!\p"
	.string "However, there is something that\n"
	.string "has been bothering me.\p"
	.string "As far as our research shows, this\n"
	.string "should be Zygarde's final Forme,\l"
	.string "and yet, there have been a few\l"
	.string "reports of people still spotting\l"
	.string "Zygarde Cells out in the wild.\p"
	.string "What could this mean?$"

WhichFeatureToExplain::
	.string "Is there a function you\n"
	.string "would like me to explain?$"

Explain_Assembly_Text::
	.string "Assembly is the process of gathering\n"
	.string "Cells and Cores and assembling them\l"
	.string "to the shape, or Forme, of Zygarde.\p"
	.string "There are two known Formes:\n"
	.string "10% Forme and 50% Forme.\p"
	.string "10% Forme requires 10 Cells and\n"
	.string "1 Core to create, while the 50% Forme\l"
	.string "requires 50 Cells and 3 Cores.\p"
	.string "Do note that 50% Forme is so large\n"
	.string "that we can't really let you let it\l"
	.string "out of its ball when indoors.$"

Explain_Separation_Text::
	.string "Separation is the process of\n"
	.string "disassembling Zygarde back to\l"
	.string "its original Cells and Cores.\p"
	.string "When a Zygarde is separated,\n"
	.string "it will lose any experience it\l"
	.string "has gained, be it moves or any\l"
	.string "other form of experience.\p"
	.string "Do note that assembling the Zygarde\n"
	.string "to another Forme does not necessitate\l"
	.string "the use of the separation process.\p"
	.string "An existing Zygarde can be made to\n"
	.string "assume another Forme through the\l"
	.string "assembly process.$"

Explain_CoreMoves_Text::
	.string "Zygarde Cores contain knowledge about\n"
	.string "certain moves, and when the Cores are\l"
	.string "synced with the Reassembly Unit,\l"
	.string "the Core Moves program will be able to\l"
	.string "teach those moves to Zygarde.\p"
	.string "The moves available in the Core Moves\n"
	.string "program will depend on the Cores you\l"
	.string "have managed to find.\p"
	.string "Do note that there may be some moves\n"
	.string "that only the 50% Forme can learn.$"

ExplainFeatures_Goodbye_Text::
	.string "Let me know if there's any\n"
	.string "function you need explained.$"

HaveEnoughCellsAndCores::
	.string "Have you collected enough\n"
	.string "Cells and Cores?\p"
	.string "Let's see…\p"
	.string "Unbelievable!\p"
	.string "I never thought I'd see the day we\n"
	.string "get to activate this Reassembly Unit!$"

HaveEnoughCellsAndCores2::
	.string "Now, remember when I promised that we\n"
	.string "would make it worth your while if you\l"
	.string "recovered our research papers?\p"
	.string "Well, seeing how brave and tenacious\n"
	.string "you have been through this ordeal,\l"
	.string "we believe you to be the perfect\l"
	.string "trainer for the Zygarde we are\l"
	.string "about to create!\p"
	.string "When you're ready, go ahead and access\n"
	.string "the console in front of the unit.\p"
	.string "If you need more information regarding\n"
	.string "the functions of the machine,\l"
	.string "just let me know!$"

NotEnoughCellsAndCores::
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cells\n"
	.string "and {STR_VAR_2} Cores.$"

NotEnoughCellAndCores::
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cell\n"
	.string "and {STR_VAR_2} Cores.$"

NotEnoughCellsAndCore::
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cells\n"
	.string "and {STR_VAR_2} Core.$"

NotEnoughCellAndCore::
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cell\n"
	.string "and {STR_VAR_2} Core.$"

ReassemblyUnitInert::
	.string "The Reassembly Unit seems to be\n"
	.string "offline.$"

ReassemblyUnitActivated::
	.string "Reassembly Unit activated.$"

DoWhatWithReassemblyUnit::
	.string "Do what with the Reassembly Unit?$"

ZygardeMoveAborted::
	.string "Core Moves program aborted.\n"
	.string "Returning back to main menu.$"

TeachZygardeWhichMove::
	.string "Teach Zygarde which move?$"

OnlyOneZygarde::
	.string "Only one Zygarde can be\n"
	.string "assembled at a time.\p"
	.string "Returning back to main menu.$"

AssembleWhichZygarde::
	.string "Assemble which Zygarde?$"

AttemptingToAssemble10Forme::
	.string "Attempting to assemble 10% Forme\n"
	.string "{PLAY_SE SE_ELEVATOR}Zygarde…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PLAY_SE SE_DING_DONG} Assembly completed.{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

AttemptingToAssemble50Forme::
	.string "Attempting to assemble 50% Forme\n"
	.string "{PLAY_SE SE_ELEVATOR}Zygarde…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PLAY_SE SE_DING_DONG} Assembly completed.{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

NoZygardeCurrentlyAssembled::
	.string "No Zygarde is currently\n"
	.string "assembled.\p"
	.string "Returning back to main menu.$"

NoZygardeDetectedInParty::
	.string "No Zygarde found for\n"
	.string "interaction.\p"
	.string "Returning back to main menu.$"

ZygardeOnlyMonInParty::
	.string "Zygarde is currently your only Pokémon\n"
	.string "and as such can't be separated.$"

ChooseZygardeForSeparation::
	.string "Please choose a Zygarde for\n"
	.string "the separation process.$"

SeparationAborted::
	.string "Separation process aborted.\n"
	.string "Returning back to main menu.$"

ZygardeOnlyAliveMon::
	.string "Cannot separate Zygarde when it is\n"
	.string "the only non-fainted Pokemon.$"

ZygardeRevertedBackToCellsAndCores::
	.string "Attempting to separate Zygarde back\n"
	.string "to Cells and Cores…{PLAY_SE SE_ELEVATOR}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PLAY_SE SE_DING_DONG}{PAUSE 0x0F}{PAUSE 0x0F}$"

SeparatedSuccessfully::
	.string "Zygarde separated successfully.\n"
	.string "Returning back to main menu.$"

NoZygardeDetectedInParty_Assembly::
	.string "A Zygarde has alredy been assembled,\n"
	.string "but could not be found in the party.\p"
	.string "Returning back to main menu.$"

ChooseZygardeForAssembly::
	.string "Only one Zygarde can be\n"
	.string "assembled at a time.\p"
	.string "Please choose an existing Zygarde\n"
	.string "for the assembly process.$"

AssemblyAborted::
	.string "Assembly process aborted.\n"
	.string "Returning back to main menu.$"

SpeciesNotZygarde::
	.string "Chosen Pokémon is not a Zygarde.\n"
	.string "Returning back to main menu.$"

NotEnoughCellsAndCoresInCube::
	.string "Assembling a 50% Forme Zygarde\n"
	.string "requires at least 50 Cells and\l"
	.string "3 Cores.\p"
	.string "A total of {STR_VAR_1} Cells and\n"
	.string "{STR_VAR_2} Cores have been collected.$"

SelectZygardeToTeachMove::
	.string "Please choose a Zygarde for\n"
	.string "the Core Moves program.$"
