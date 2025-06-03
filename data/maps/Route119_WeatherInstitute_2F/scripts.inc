Route119_WeatherInstitute_2F_MapScripts::
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm 1, 2, 4
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, ZygardeCubeEvent
	.2byte 0


ZygardeCubeEvent::
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 32
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject 1, DIR_NORTH
# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement 1, ExclamationMark
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 48
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement 1, Walk2Up
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox CanIHaveThePapers
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox PlayerHandsPapersToScientist
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeitem ITEM_RESEARCH_PAPERS
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ScientistDireNews
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ScientistDireNews2
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 10
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement 1, LabScientistMove
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LabPlayerMove
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 1
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox TakeZygardeCube
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	giveitem ITEM_ZYGARDE_CUBE
# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call ReleaseZygardeCellsCores
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ExplainZygardeCube
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement 1, ZygardeCubeEvent_Movement_0
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm 1, 2, 4
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	return


# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
LabScientistMove:
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_fast_down
	step_end

# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
LabPlayerMove:
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
	step_end

LegendaryInstitute2F_Man::
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox LegendaryInstitute2F_Man_Text, MSGBOX_NPC
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject 3, DIR_WEST
	return


LegendaryInstitute2F_Woman::
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox LegendaryInstitute2F_Woman_Text, MSGBOX_NPC
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject 2, DIR_WEST
	return


LegendaryInstitute2F_MainScientist::
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_PROGRESS, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_2
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_PROGRESS, 3
	goto_if_eq LegendaryInstitute2F_MainScientist_5
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_UNLOCKED_REASSEMBLY_UNIT, LegendaryInstitute2F_MainScientist_8
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CELLS, 10
	goto_if_ge LegendaryInstitute2F_MainScientist_13
LegendaryInstitute2F_MainScientist_12:
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CELLS, 0
	goto_if_eq LegendaryInstitute2F_MainScientist_17
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ZYGARDE_CELLS
LegendaryInstitute2F_MainScientist_16:
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CORES, 0
	goto_if_eq LegendaryInstitute2F_MainScientist_21
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ZYGARDE_CORES
LegendaryInstitute2F_MainScientist_20:
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CELLS, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_30
LegendaryInstitute2F_MainScientist_29:
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CELLS, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_25
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CORES, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_26
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NotEnoughCellsAndCores, MSGBOX_NPC
LegendaryInstitute2F_MainScientist_7:
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	return

LegendaryInstitute2F_MainScientist_2:
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox TenZygardeCreated, MSGBOX_NPC
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_ZYGARDE_PROGRESS, 2
	end

LegendaryInstitute2F_MainScientist_5:
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox FiftyZygardeCreated, MSGBOX_NPC
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_ZYGARDE_PROGRESS, 4
	end

LegendaryInstitute2F_MainScientist_8:
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto MainScientist_ExplainFeatures
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_11:
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox HaveEnoughCellsAndCores
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox HaveEnoughCellsAndCores2
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_UNLOCKED_REASSEMBLY_UNIT
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_13:
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CORES, 1
	goto_if_ge LegendaryInstitute2F_MainScientist_11
	goto LegendaryInstitute2F_MainScientist_12

LegendaryInstitute2F_MainScientist_17:
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferstring STR_VAR_1, LegendaryInstitute2F_MainScientist_Text_0
	goto LegendaryInstitute2F_MainScientist_16

LegendaryInstitute2F_MainScientist_21:
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferstring STR_VAR_2, LegendaryInstitute2F_MainScientist_Text_0
	goto LegendaryInstitute2F_MainScientist_20

LegendaryInstitute2F_MainScientist_24:
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NotEnoughCellAndCore, MSGBOX_NPC
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_25:
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NotEnoughCellAndCores, MSGBOX_NPC
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_26:
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NotEnoughCellsAndCore, MSGBOX_NPC
	goto LegendaryInstitute2F_MainScientist_7

LegendaryInstitute2F_MainScientist_30:
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CORES, 1
	goto_if_eq LegendaryInstitute2F_MainScientist_24
	goto LegendaryInstitute2F_MainScientist_29


MainScientist_ExplainFeatures::
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message WhichFeatureToExplain
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, MainScientist_ExplainFeatures_Text_0, MainScientist_ExplainFeatures_Text_1, MainScientist_ExplainFeatures_Text_2, MainScientist_ExplainFeatures_Text_3
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 0, MainScientist_ExplainFeatures_2
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 1, MainScientist_ExplainFeatures_3
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 2, MainScientist_ExplainFeatures_4
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 3, MainScientist_ExplainFeatures_5
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case MULTI_B_PRESSED, MainScientist_ExplainFeatures_6
	return

MainScientist_ExplainFeatures_2:
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Explain_Assembly
	return

MainScientist_ExplainFeatures_3:
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Explain_Separation
	return

MainScientist_ExplainFeatures_4:
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Explain_CoreMoves
	return

MainScientist_ExplainFeatures_5:
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ExplainFeatures_Goodbye
	return

MainScientist_ExplainFeatures_6:
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ExplainFeatures_Goodbye
	return


Explain_Assembly::
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Explain_Assembly_Text
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto MainScientist_ExplainFeatures
	return


Explain_Separation::
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Explain_Separation_Text
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto MainScientist_ExplainFeatures
	return


Explain_CoreMoves::
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Explain_CoreMoves_Text
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto MainScientist_ExplainFeatures
	return


ExplainFeatures_Goodbye::
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ExplainFeatures_Goodbye_Text
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	return


LegendaryInstitute2F_ReassemblyUnit::
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_UNLOCKED_REASSEMBLY_UNIT, LegendaryInstitute2F_ReassemblyUnit_1
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ReassemblyUnitInert, MSGBOX_SIGN
	return

LegendaryInstitute2F_ReassemblyUnit_1:
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PC_ON
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ReassemblyUnitActivated
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	return


ReassemblyUnit_MainScript::
# 381 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message DoWhatWithReassemblyUnit
# 382 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 383 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, MainScientist_ExplainFeatures_Text_0, MainScientist_ExplainFeatures_Text_1, MainScientist_ExplainFeatures_Text_2, ReassemblyUnit_MainScript_Text_0
# 384 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	switch VAR_RESULT
# 385 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 0, ReassemblyUnit_MainScript_2
# 387 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 1, ReassemblyUnit_MainScript_3
# 389 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 2, ReassemblyUnit_MainScript_4
# 391 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 3, ReassemblyUnit_MainScript_5
# 393 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case MULTI_B_PRESSED, ReassemblyUnit_MainScript_6
	return

ReassemblyUnit_MainScript_2:
# 386 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_Assembly
	return

ReassemblyUnit_MainScript_3:
# 388 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_Separation
	return

ReassemblyUnit_MainScript_4:
# 390 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_CoreMoves
	return

ReassemblyUnit_MainScript_5:
# 392 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_TurnOff
	return

ReassemblyUnit_MainScript_6:
# 394 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_TurnOff
	return


ReassemblyUnit_Assembly::
# 405 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message AssembleWhichZygarde
# 406 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 407 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, ReassemblyUnit_Assembly_Text_0, ReassemblyUnit_Assembly_Text_1, MainScientist_ExplainFeatures_Text_3
# 408 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	switch VAR_RESULT
# 409 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 0, ReassemblyUnit_Assembly_2
# 411 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 1, ReassemblyUnit_Assembly_3
# 413 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 2, ReassemblyUnit_Assembly_4
# 415 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case MULTI_B_PRESSED, ReassemblyUnit_Assembly_5
	return

ReassemblyUnit_Assembly_2:
# 410 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_Assemble10Forme
	return

ReassemblyUnit_Assembly_3:
# 412 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_Assemble50Forme
	return

ReassemblyUnit_Assembly_4:
# 414 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	return

ReassemblyUnit_Assembly_5:
# 416 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	return


ReassemblyUnit_Assemble10Forme::
# 420 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble10Forme_2
ReassemblyUnit_Assemble10Forme_1:
# 424 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_Assemble10Forme_5
ReassemblyUnit_Assemble10Forme_4:
# 451 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message AttemptingToAssemble10Forme
# 452 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 453 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 454 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZYGARDE_10
# 455 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_ZYGARDE_10, 40, ITEM_NONE, ITEM_STRANGE_BALL, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_DIG, MOVE_BIND, MOVE_LANDS_WRATH, MOVE_SANDSTORM, FALSE, 0, 0
# 456 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call GiveMon_Script
# 457 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_ZYGARDE10_ASSEMBLED
# 458 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_PROGRESS, 0
	goto_if_eq ReassemblyUnit_Assemble10Forme_8
ReassemblyUnit_Assemble10Forme_7:
# 461 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	subvar VAR_ZYGARDE_CELLS, 10
# 462 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	subvar VAR_ZYGARDE_CORES, 1
# 463 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	return

ReassemblyUnit_Assemble10Forme_2:
# 421 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox OnlyOneZygarde
# 422 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_1

ReassemblyUnit_Assemble10Forme_5:
# 425 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	checkpartymon SPECIES_ZYGARDE_50, 0
# 426 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Assemble10Forme_11
ReassemblyUnit_Assemble10Forme_10:
# 430 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ChooseZygardeForAssembly
# 431 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special ChoosePartyMon
# 432 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitstate
# 433 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ReassemblyUnit_Assemble10Forme_14
ReassemblyUnit_Assemble10Forme_13:
# 437 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 438 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8005, SPECIES_ZYGARDE_50
	goto_if_ne ReassemblyUnit_Assemble10Forme_17
ReassemblyUnit_Assemble10Forme_16:
# 442 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_ZYGARDE_CELLS, 40
# 443 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_ZYGARDE_CORES, 2
# 444 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE50_ASSEMBLED
# 445 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_ZYGARDE10_ASSEMBLED
# 446 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special ConvertZygarde
# 447 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 448 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox AttemptingToAssemble10Forme
# 449 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_4

ReassemblyUnit_Assemble10Forme_8:
# 459 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_ZYGARDE_PROGRESS, 1
	goto ReassemblyUnit_Assemble10Forme_7

ReassemblyUnit_Assemble10Forme_11:
# 427 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NoZygardeDetectedInParty_Assembly
# 428 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_10

ReassemblyUnit_Assemble10Forme_14:
# 434 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox AssemblyAborted
# 435 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_13

ReassemblyUnit_Assemble10Forme_17:
# 439 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox SpeciesNotZygarde
# 440 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble10Forme_16


ReassemblyUnit_Assemble50Forme::
# 466 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_Assemble50Forme_2
ReassemblyUnit_Assemble50Forme_1:
# 470 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble50Forme_5
ReassemblyUnit_Assemble50Forme_4:
# 510 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CELLS, 50
	goto_if_lt ReassemblyUnit_Assemble50Forme_9
ReassemblyUnit_Assemble50Forme_7:
# 523 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message AttemptingToAssemble50Forme
# 524 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 525 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 526 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZYGARDE_50
# 527 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_ZYGARDE_50, 40, ITEM_NONE, ITEM_STRANGE_BALL, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_DIG, MOVE_BIND, MOVE_LANDS_WRATH, MOVE_SANDSTORM, FALSE, 0, 0
# 528 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call GiveMon_Script
# 529 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_PROGRESS, 3
	goto_if_lt ReassemblyUnit_Assemble50Forme_18
ReassemblyUnit_Assemble50Forme_17:
# 532 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_ZYGARDE50_ASSEMBLED
# 533 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	subvar VAR_ZYGARDE_CELLS, 50
# 534 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	subvar VAR_ZYGARDE_CORES, 3
	return

ReassemblyUnit_Assemble50Forme_2:
# 467 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox OnlyOneZygarde
# 468 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_1

ReassemblyUnit_Assemble50Forme_5:
# 471 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CELLS, 40
	goto_if_lt ReassemblyUnit_Assemble50Forme_14
ReassemblyUnit_Assemble50Forme_12:
# 484 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	checkpartymon SPECIES_ZYGARDE_10, 0
# 485 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Assemble50Forme_24
ReassemblyUnit_Assemble50Forme_23:
# 489 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ChooseZygardeForAssembly
# 490 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special ChoosePartyMon
# 491 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitstate
# 492 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ReassemblyUnit_Assemble50Forme_30
ReassemblyUnit_Assemble50Forme_29:
# 496 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 497 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8005, SPECIES_ZYGARDE_10
	goto_if_ne ReassemblyUnit_Assemble50Forme_33
ReassemblyUnit_Assemble50Forme_32:
# 501 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	subvar VAR_ZYGARDE_CELLS, 40
# 502 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	subvar VAR_ZYGARDE_CORES, 2
# 503 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE10_ASSEMBLED
# 504 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_ZYGARDE50_ASSEMBLED
# 505 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special ConvertZygarde
# 506 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 507 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox AttemptingToAssemble50Forme
# 508 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_4

ReassemblyUnit_Assemble50Forme_8:
# 512 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyvar VAR_TEMP_2, VAR_ZYGARDE_CELLS
# 513 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyvar VAR_TEMP_3, VAR_ZYGARDE_CORES
# 514 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble50Forme_21
ReassemblyUnit_Assemble50Forme_20:
# 518 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 519 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_3
# 520 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NotEnoughCellsAndCoresInCube
# 521 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_7

ReassemblyUnit_Assemble50Forme_9:
# 511 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CORES, 3
	goto_if_lt ReassemblyUnit_Assemble50Forme_8
	goto ReassemblyUnit_Assemble50Forme_7

ReassemblyUnit_Assemble50Forme_13:
# 473 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyvar VAR_TEMP_2, VAR_ZYGARDE_CELLS
# 474 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyvar VAR_TEMP_3, VAR_ZYGARDE_CORES
# 475 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Assemble50Forme_27
ReassemblyUnit_Assemble50Forme_26:
# 479 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 480 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_3
# 481 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NotEnoughCellsAndCoresInCube
# 482 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_12

ReassemblyUnit_Assemble50Forme_14:
# 472 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_ZYGARDE_CORES, 2
	goto_if_lt ReassemblyUnit_Assemble50Forme_13
	goto ReassemblyUnit_Assemble50Forme_12

ReassemblyUnit_Assemble50Forme_18:
# 530 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_ZYGARDE_PROGRESS, 3
	goto ReassemblyUnit_Assemble50Forme_17

ReassemblyUnit_Assemble50Forme_21:
# 515 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_TEMP_2, 10
# 516 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto ReassemblyUnit_Assemble50Forme_20

ReassemblyUnit_Assemble50Forme_24:
# 486 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NoZygardeDetectedInParty_Assembly
# 487 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_23

ReassemblyUnit_Assemble50Forme_27:
# 476 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_TEMP_2, 10
# 477 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto ReassemblyUnit_Assemble50Forme_26

ReassemblyUnit_Assemble50Forme_30:
# 493 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox AssemblyAborted
# 494 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_29

ReassemblyUnit_Assemble50Forme_33:
# 498 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox SpeciesNotZygarde
# 499 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Assemble50Forme_32


ReassemblyUnit_Separation::
# 539 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_Separation_3
ReassemblyUnit_Separation_1:
# 544 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	checkpartymon SPECIES_ZYGARDE_10, 0
# 545 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Separation_7
ReassemblyUnit_Separation_6:
# 552 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 553 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReassemblyUnit_Separation_10
ReassemblyUnit_Separation_9:
# 557 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ChooseZygardeForSeparation
# 558 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special ChoosePartyMon
# 559 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitstate
# 560 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ReassemblyUnit_Separation_15
ReassemblyUnit_Separation_14:
# 564 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 565 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReassemblyUnit_Separation_18
ReassemblyUnit_Separation_17:
# 569 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 570 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8005, SPECIES_ZYGARDE_10
	goto_if_eq ReassemblyUnit_Separation_21
# 575 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8005, SPECIES_ZYGARDE_50
	goto_if_eq ReassemblyUnit_Separation_22
# 581 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox SpeciesNotZygarde
# 582 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
ReassemblyUnit_Separation_20:
# 584 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special SeparateZygarde
# 585 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 586 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message ZygardeRevertedBackToCellsAndCores
# 587 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 588 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox SeparatedSuccessfully
# 589 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	return

ReassemblyUnit_Separation_2:
# 541 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NoZygardeCurrentlyAssembled
# 542 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_1

ReassemblyUnit_Separation_3:
# 540 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_Separation_2
	goto ReassemblyUnit_Separation_1

ReassemblyUnit_Separation_7:
# 546 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	checkpartymon SPECIES_ZYGARDE_50, 0
# 547 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReassemblyUnit_Separation_12
	goto ReassemblyUnit_Separation_6

ReassemblyUnit_Separation_10:
# 554 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ZygardeOnlyMonInParty
# 555 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_9

ReassemblyUnit_Separation_12:
# 548 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NoZygardeDetectedInParty
# 549 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_6

ReassemblyUnit_Separation_15:
# 561 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox SeparationAborted
# 562 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_14

ReassemblyUnit_Separation_18:
# 566 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ZygardeOnlyAliveMon
# 567 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_Separation_17

ReassemblyUnit_Separation_21:
# 571 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_ZYGARDE_CELLS, 10
# 572 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_ZYGARDE_CORES, 1
# 573 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE10_ASSEMBLED
	goto ReassemblyUnit_Separation_20

ReassemblyUnit_Separation_22:
# 576 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_ZYGARDE_CELLS, 50
# 577 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_ZYGARDE_CORES, 3
# 578 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE50_ASSEMBLED
	goto ReassemblyUnit_Separation_20


ReassemblyUnit_CoreMoves::
# 592 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_ZYGARDE10_ASSEMBLED, ReassemblyUnit_CoreMoves_3
ReassemblyUnit_CoreMoves_1:
# 597 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE_CORE_1, ReassemblyUnit_CoreMoves_7
ReassemblyUnit_CoreMoves_6:
# 600 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE_CORE_2, ReassemblyUnit_CoreMoves_10
ReassemblyUnit_CoreMoves_9:
# 603 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE_CORE_3, ReassemblyUnit_CoreMoves_13
ReassemblyUnit_CoreMoves_12:
# 606 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE_CORE_4, ReassemblyUnit_CoreMoves_16
ReassemblyUnit_CoreMoves_15:
# 609 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_ZYGARDE_CORE_5, ReassemblyUnit_CoreMoves_19
ReassemblyUnit_CoreMoves_18:
# 612 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultipush MainScientist_ExplainFeatures_Text_3, 5
# 613 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message TeachZygardeWhichMove
# 614 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 615 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
# 616 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	switch VAR_RESULT
# 617 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 0, ReassemblyUnit_CoreMoves_22
# 620 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 1, ReassemblyUnit_CoreMoves_23
# 623 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 2, ReassemblyUnit_CoreMoves_24
# 626 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 3, ReassemblyUnit_CoreMoves_25
# 629 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 4, ReassemblyUnit_CoreMoves_26
# 632 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case 5, ReassemblyUnit_CoreMoves_27
# 633 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case MULTI_B_PRESSED, ReassemblyUnit_CoreMoves_27
	return

ReassemblyUnit_CoreMoves_2:
# 594 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox NoZygardeCurrentlyAssembled
# 595 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	goto ReassemblyUnit_CoreMoves_1

ReassemblyUnit_CoreMoves_3:
# 593 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_ZYGARDE50_ASSEMBLED, ReassemblyUnit_CoreMoves_2
	goto ReassemblyUnit_CoreMoves_1

ReassemblyUnit_CoreMoves_7:
# 598 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultipush ReassemblyUnit_CoreMoves_Text_0, 0
	goto ReassemblyUnit_CoreMoves_6

ReassemblyUnit_CoreMoves_10:
# 601 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultipush ReassemblyUnit_CoreMoves_Text_1, 1
	goto ReassemblyUnit_CoreMoves_9

ReassemblyUnit_CoreMoves_13:
# 604 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultipush ReassemblyUnit_CoreMoves_Text_2, 2
	goto ReassemblyUnit_CoreMoves_12

ReassemblyUnit_CoreMoves_16:
# 607 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultipush ReassemblyUnit_CoreMoves_Text_3, 3
	goto ReassemblyUnit_CoreMoves_15

ReassemblyUnit_CoreMoves_19:
# 610 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	dynmultipush ReassemblyUnit_CoreMoves_Text_4, 4
	goto ReassemblyUnit_CoreMoves_18

ReassemblyUnit_CoreMoves_22:
# 618 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8005, MOVE_EXTREME_SPEED_ZYG
# 619 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_23:
# 621 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_DANCE_ZYG
# 622 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_24:
# 624 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8005, MOVE_CORE_ENFORCER
# 625 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_25:
# 627 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8005, MOVE_THOUSAND_ARROWS
# 628 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_26:
# 630 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8005, MOVE_THOUSAND_WAVES
# 631 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ZygardeTeachCoreMove
	return

ReassemblyUnit_CoreMoves_27:
# 634 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ZygardeMoveAborted
# 635 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	return


ZygardeTeachCoreMove::
# 639 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox SelectZygardeToTeachMove
# 640 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 641 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ZygardeTeachCoreMove_2
ZygardeTeachCoreMove_1:
# 644 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto ReassemblyUnit_MainScript
	return

ZygardeTeachCoreMove_2:
# 642 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox ZygardeMoveAborted
	goto ZygardeTeachCoreMove_1


ReassemblyUnit_TurnOff::
# 648 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 649 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PC_OFF
# 650 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	return


ReleaseZygardeCellsCores::
# 742 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_1
# 743 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_2
# 744 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_3
# 745 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_4
# 746 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_5
# 747 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_6
# 748 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_7
# 749 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_8
# 750 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_9
# 751 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_10
# 752 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_11
# 753 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_12
# 754 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_13
# 755 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_14
# 756 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_15
# 757 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_16
# 758 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_17
# 759 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_18
# 760 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_19
# 761 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_20
# 762 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_21
# 763 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_22
# 764 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_23
# 765 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_24
# 766 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_25
# 767 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_26
# 768 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_27
# 769 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_28
# 770 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_29
# 771 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_30
# 772 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_31
# 773 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_32
# 774 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_33
# 775 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_34
# 776 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_35
# 777 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_36
# 778 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_37
# 779 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_38
# 780 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_39
# 781 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_40
# 782 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_41
# 783 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_42
# 784 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_43
# 785 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_44
# 786 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_45
# 787 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_46
# 788 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_47
# 789 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_48
# 790 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_49
# 791 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_50
# 792 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_51
# 793 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_52
# 794 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_53
# 795 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_54
# 796 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_55
# 797 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_56
# 798 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_57
# 799 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_58
# 800 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_59
# 801 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_60
# 802 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_61
# 803 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_62
# 804 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_63
# 805 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_64
# 806 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_65
# 807 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_66
# 808 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_67
# 809 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_68
# 810 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_69
# 811 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_70
# 812 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_71
# 813 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_72
# 814 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_73
# 815 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_74
# 816 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_75
# 817 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_76
# 818 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_77
# 819 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_78
# 820 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_79
# 821 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_80
# 822 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_81
# 823 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_82
# 824 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_83
# 825 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_84
# 826 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_85
# 827 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_86
# 828 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_87
# 829 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_88
# 830 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_89
# 831 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_90
# 832 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_91
# 833 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_92
# 834 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_93
# 835 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_94
# 836 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CELL_95
# 837 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CORE_1
# 838 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CORE_2
# 839 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CORE_3
# 840 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CORE_4
# 841 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_ZYGARDE_CORE_5
	return


# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
ZygardeCubeEvent_Movement_0:
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_fast_left
	step_end

LegendaryInstitute2F_MainScientist_Text_0:
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no$"

MainScientist_ExplainFeatures_Text_0:
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Assembly$"

MainScientist_ExplainFeatures_Text_1:
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Separation$"

MainScientist_ExplainFeatures_Text_2:
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Core Moves$"

MainScientist_ExplainFeatures_Text_3:
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Cancel$"

ReassemblyUnit_MainScript_Text_0:
# 383 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Turn off$"

ReassemblyUnit_Assembly_Text_0:
# 407 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "10% Forme$"

ReassemblyUnit_Assembly_Text_1:
# 407 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "50% Forme$"

ReassemblyUnit_CoreMoves_Text_0:
# 598 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Extreme Speed$"

ReassemblyUnit_CoreMoves_Text_1:
# 601 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Dragon Dance$"

ReassemblyUnit_CoreMoves_Text_2:
# 604 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Core Enforcer$"

ReassemblyUnit_CoreMoves_Text_3:
# 607 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thousand Arrows$"

ReassemblyUnit_CoreMoves_Text_4:
# 610 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thousand Waves$"

CanIHaveThePapers::
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ah, it's you!\p"
	.string "Were you able to recover\n"
	.string "our research papers?$"

PlayerHandsPapersToScientist::
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} hands the research papers\n"
	.string "to the scientist.$"

ScientistDireNews::
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Splendid!\n"
	.string "Now let's see here…\p"
	.string "It looks like Team Rocket may have\n"
	.string "kept some of the papers, but most of\l"
	.string "the material should be here.$"

ScientistDireNews2::
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "This is a Zygarde Reassembly Unit.\p"
	.string "It's a machine capable of\n"
	.string "reassembling Zygarde, a legendary\l"
	.string "Pokémon believed to be the\l"
	.string "antithesis of Yveltal.\p"
	.string "However, before we can fire up\n"
	.string "the machine, we're going to need\l"
	.string "your help.$"

ExplainZygardeCube::
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Have you ever heard of the Pokémon\n"
	.string "Latias and Latios?\p"
	.string "It is said that they once roamed\n"
	.string "across Sinko, until one day they\l"
	.string "simply disappeared.\p"
	.string "Nobody knows for sure what\n"
	.string "happened to them.$"

LegendaryInstitute2F_Woman_Text::
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Nobody knows for certain where\n"
	.string "Zygarde originates from.\p"
	.string "Some say it's the nature's will\n"
	.string "concentrating into a single being\l"
	.string "meant to protect the world from\l"
	.string "calamity, while some suspect it\l"
	.string "might be a man-made Pokémon,\l"
	.string "like Porygon.$"

TenZygardeCreated::
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You've managed to assemble\n"
	.string "a 10% Forme Zygarde?\p"
	.string "That's great!\p"
	.string "However, I believe we can\n"
	.string "push it even further.\p"
	.string "If you can find a total of 50 Cells\n"
	.string "and 3 Cores, we may be able to\l"
	.string "unlock its original Forme!$"

FiftyZygardeCreated::
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Is there a function you\n"
	.string "would like me to explain?$"

Explain_Assembly_Text::
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Let me know if there's any\n"
	.string "function you need explained.$"

HaveEnoughCellsAndCores::
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Have you collected enough\n"
	.string "Cells and Cores?\p"
	.string "Let's see…\p"
	.string "Unbelievable!\p"
	.string "I never thought I'd see the day we\n"
	.string "get to activate this Reassembly Unit!$"

HaveEnoughCellsAndCores2::
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 347 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cells\n"
	.string "and {STR_VAR_2} Cores.$"

NotEnoughCellAndCores::
# 354 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cell\n"
	.string "and {STR_VAR_2} Cores.$"

NotEnoughCellsAndCore::
# 361 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cells\n"
	.string "and {STR_VAR_2} Core.$"

NotEnoughCellAndCore::
# 368 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "In order to get the Reassembly Unit\n"
	.string "running, we need at least 10 Cells and\l"
	.string "1 Core.\p"
	.string "So far you have collected {STR_VAR_1} Cell\n"
	.string "and {STR_VAR_2} Core.$"

ReassemblyUnitInert::
# 375 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The Reassembly Unit seems to be\n"
	.string "offline.$"

ReassemblyUnitActivated::
# 397 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Reassembly Unit activated.$"

DoWhatWithReassemblyUnit::
# 400 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Do what with the Reassembly Unit?$"

ZygardeMoveAborted::
# 652 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Core Moves program aborted.\n"
	.string "Returning back to main menu.$"

TeachZygardeWhichMove::
# 656 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Teach Zygarde which move?$"

OnlyOneZygarde::
# 659 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Only one Zygarde can be\n"
	.string "assembled at a time.\p"
	.string "Returning back to main menu.$"

AssembleWhichZygarde::
# 664 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Assemble which Zygarde?$"

AttemptingToAssemble10Forme::
# 667 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Attempting to assemble 10% Forme\n"
	.string "{PLAY_SE SE_ELEVATOR}Zygarde…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PLAY_SE SE_DING_DONG} Assembly completed.{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

AttemptingToAssemble50Forme::
# 671 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Attempting to assemble 50% Forme\n"
	.string "{PLAY_SE SE_ELEVATOR}Zygarde…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PLAY_SE SE_DING_DONG} Assembly completed.{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

NoZygardeCurrentlyAssembled::
# 675 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "No Zygarde is currently\n"
	.string "assembled.\p"
	.string "Returning back to main menu.$"

NoZygardeDetectedInParty::
# 680 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "No Zygarde found for\n"
	.string "interaction.\p"
	.string "Returning back to main menu.$"

ZygardeOnlyMonInParty::
# 685 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Zygarde is currently your only Pokémon\n"
	.string "and as such can't be separated.$"

ChooseZygardeForSeparation::
# 689 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Please choose a Zygarde for\n"
	.string "the separation process.$"

SeparationAborted::
# 693 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Separation process aborted.\n"
	.string "Returning back to main menu.$"

ZygardeOnlyAliveMon::
# 697 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Cannot separate Zygarde when it is\n"
	.string "the only non-fainted Pokemon.$"

ZygardeRevertedBackToCellsAndCores::
# 701 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Attempting to separate Zygarde back\n"
	.string "to Cells and Cores…{PLAY_SE SE_ELEVATOR}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PLAY_SE SE_DING_DONG}{PAUSE 0x0F}{PAUSE 0x0F}$"

SeparatedSuccessfully::
# 705 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Zygarde separated successfully.\n"
	.string "Returning back to main menu.$"

NoZygardeDetectedInParty_Assembly::
# 709 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A Zygarde has alredy been assembled,\n"
	.string "but could not be found in the party.\p"
	.string "Returning back to main menu.$"

ChooseZygardeForAssembly::
# 714 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Only one Zygarde can be\n"
	.string "assembled at a time.\p"
	.string "Please choose an existing Zygarde\n"
	.string "for the assembly process.$"

AssemblyAborted::
# 720 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Assembly process aborted.\n"
	.string "Returning back to main menu.$"

SpeciesNotZygarde::
# 724 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Chosen Pokémon is not a Zygarde.\n"
	.string "Returning back to main menu.$"

NotEnoughCellsAndCoresInCube::
# 728 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Assembling a 50% Forme Zygarde\n"
	.string "requires at least 50 Cells and\l"
	.string "3 Cores.\p"
	.string "A total of {STR_VAR_1} Cells and\n"
	.string "{STR_VAR_2} Cores have been collected.$"

SelectZygardeToTeachMove::
# 735 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Please choose a Zygarde for\n"
	.string "the Core Moves program.$"
