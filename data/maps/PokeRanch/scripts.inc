PokeRanch_MapScripts::
# 2 "data/maps/PokeRanch/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetVolkner
	.byte 0


SetVolkner::
# 9 "data/maps/PokeRanch/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, SetVolkner_2
SetVolkner_1:
# 12 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 13 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_LANDMARK_POKE_RANCH
# 14 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_MAREEP_NOT_RETURNED
# 15 "data/maps/PokeRanch/scripts.pory"
	goto_if_unset FLAG_RANCH_HELPED, SetVolkner_5
SetVolkner_4:
# 18 "data/maps/PokeRanch/scripts.pory"
	compare VAR_POKERANCH, 0
	goto_if_eq SetVolkner_7
	return

SetVolkner_2:
# 10 "data/maps/PokeRanch/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP
	goto SetVolkner_1

SetVolkner_5:
# 16 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_HIDE_RANCH_OWNER
	goto SetVolkner_4

SetVolkner_7:
# 19 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_HIDE_VOLKNER_2
	return


PokeRanch_Mareep::
# 24 "data/maps/PokeRanch/scripts.pory"
	lock
# 25 "data/maps/PokeRanch/scripts.pory"
	faceplayer
# 26 "data/maps/PokeRanch/scripts.pory"
	waitse
# 27 "data/maps/PokeRanch/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 28 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_Mareep_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/PokeRanch/scripts.pory"
	waitmoncry
# 30 "data/maps/PokeRanch/scripts.pory"
	release
	end


PokeRanch_Ampharos::
# 35 "data/maps/PokeRanch/scripts.pory"
	lock
# 36 "data/maps/PokeRanch/scripts.pory"
	faceplayer
# 37 "data/maps/PokeRanch/scripts.pory"
	waitse
# 38 "data/maps/PokeRanch/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 39 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_Ampharos_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/PokeRanch/scripts.pory"
	waitmoncry
# 41 "data/maps/PokeRanch/scripts.pory"
	release
	end


PokeRanch_Lass::
# 46 "data/maps/PokeRanch/scripts.pory"
	lock
# 47 "data/maps/PokeRanch/scripts.pory"
	faceplayer
# 48 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_Lass_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 50 "data/maps/PokeRanch/scripts.pory"
	release
	end


PokeRanch_Owner::
# 55 "data/maps/PokeRanch/scripts.pory"
	lock
# 56 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_Owner_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 58 "data/maps/PokeRanch/scripts.pory"
	release
	end


PokeRanch_Volkner::
# 63 "data/maps/PokeRanch/scripts.pory"
	lock
# 64 "data/maps/PokeRanch/scripts.pory"
	faceplayer
# 65 "data/maps/PokeRanch/scripts.pory"
	safefollow
# 66 "data/maps/PokeRanch/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 67 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_VOLKNER_MET
# 68 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_RANCH_HELPED, PokeRanch_Volkner_1
# 100 "data/maps/PokeRanch/scripts.pory"
	compare VAR_POKERANCH, 0
	goto_if_eq PokeRanch_Volkner_8
PokeRanch_Volkner_7:
# 131 "data/maps/PokeRanch/scripts.pory"
	compare VAR_POKERANCH, 1
	goto_if_eq PokeRanch_Volkner_13
	return

PokeRanch_Volkner_1:
# 69 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerReward, MSGBOX_DEFAULT
# 70 "data/maps/PokeRanch/scripts.pory"
	giveitem ITEM_HM01
# 71 "data/maps/PokeRanch/scripts.pory"
	waitse
# 72 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_ExplainCut
# 73 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 74 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PokeRanch_Volkner_5
PokeRanch_Volkner_4:
# 77 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PokeRanch_Volkner_11
PokeRanch_Volkner_10:
# 85 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq PokeRanch_Volkner_22
PokeRanch_Volkner_21:
# 88 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq PokeRanch_Volkner_33
PokeRanch_Volkner_32:
# 91 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 92 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 93 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 94 "data/maps/PokeRanch/scripts.pory"
	removeobject 10
# 95 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 96 "data/maps/PokeRanch/scripts.pory"
	release
	end

PokeRanch_Volkner_5:
# 75 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExit2FacingSWE
	goto PokeRanch_Volkner_4

PokeRanch_Volkner_8:
# 101 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerInitialIntro, MSGBOX_DEFAULT
# 102 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 103 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 104 "data/maps/PokeRanch/scripts.pory"
	playse SE_PIN
# 105 "data/maps/PokeRanch/scripts.pory"
	exclamationmark 10
# 106 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerIntroContinued, MSGBOX_DEFAULT
# 107 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 108 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 109 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_Volkner_16
# 114 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_TALKED_TO_FIRST, PokeRanch_Volkner_17
# 120 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_JasmineNotTalkedTo, MSGBOX_DEFAULT
# 121 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 122 "data/maps/PokeRanch/scripts.pory"
	closemessage
PokeRanch_Volkner_15:
# 124 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerSecondIssue, MSGBOX_DEFAULT
# 125 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 126 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 127 "data/maps/PokeRanch/scripts.pory"
	setvar VAR_POKERANCH, 1
# 128 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_VOLKNER_TALKED_TO_FIRST
# 129 "data/maps/PokeRanch/scripts.pory"
	goto PokeRanch_VolknerMoveAfterIntro
	goto PokeRanch_Volkner_7

PokeRanch_Volkner_11:
# 78 "data/maps/PokeRanch/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq PokeRanch_Volkner_24
# 82 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExit2FacingNorth
	goto PokeRanch_Volkner_10

PokeRanch_Volkner_13:
# 132 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerGossip, MSGBOX_DEFAULT
# 133 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_Volkner_29
PokeRanch_Volkner_27:
# 137 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 138 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 139 "data/maps/PokeRanch/scripts.pory"
	release
	end

PokeRanch_Volkner_16:
# 110 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_JasmineAlreadyHelped, MSGBOX_DEFAULT
# 111 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 112 "data/maps/PokeRanch/scripts.pory"
	closemessage
	goto PokeRanch_Volkner_15

PokeRanch_Volkner_17:
# 115 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_JasmineTalkedToFirst, MSGBOX_DEFAULT
# 116 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 117 "data/maps/PokeRanch/scripts.pory"
	closemessage
	goto PokeRanch_Volkner_15

PokeRanch_Volkner_22:
# 86 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExit2FacingSWE
	goto PokeRanch_Volkner_21

PokeRanch_Volkner_24:
# 79 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExit2FacingNorthAlt
	goto PokeRanch_Volkner_10

PokeRanch_Volkner_28:
# 134 "data/maps/PokeRanch/scripts.pory"
	msgbox Volkner2_JasmineHelped, MSGBOX_DEFAULT
# 135 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_VOLKNER_INFORMED
	goto PokeRanch_Volkner_27

PokeRanch_Volkner_29:
# 133 "data/maps/PokeRanch/scripts.pory"
	goto_if_unset FLAG_VOLKNER_INFORMED, PokeRanch_Volkner_28
	goto PokeRanch_Volkner_27

PokeRanch_Volkner_33:
# 89 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExit2FacingSWE
	goto PokeRanch_Volkner_32


# 145 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExit2FacingNorth:
# 146 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 147 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

# 149 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExit2FacingNorthAlt:
# 150 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 151 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

# 153 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExit2FacingSWE:
# 154 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 154 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 154 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 154 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 154 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 154 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 154 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

PokeRanch_VolknerMoveAfterIntro::
# 191 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_2
PokeRanch_VolknerMoveAfterIntro_1:
# 194 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_5
PokeRanch_VolknerMoveAfterIntro_4:
# 197 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_8
PokeRanch_VolknerMoveAfterIntro_7:
# 200 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 201 "data/maps/PokeRanch/scripts.pory"
	removeobject 10
# 202 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 203 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_HIDE_VOLKNER_2
# 204 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 205 "data/maps/PokeRanch/scripts.pory"
	release
	end

PokeRanch_VolknerMoveAfterIntro_2:
# 192 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExitFacingSouth
	goto PokeRanch_VolknerMoveAfterIntro_1

PokeRanch_VolknerMoveAfterIntro_5:
# 195 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExitFacingNorth
	goto PokeRanch_VolknerMoveAfterIntro_4

PokeRanch_VolknerMoveAfterIntro_8:
# 198 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExitFacingSouth
	goto PokeRanch_VolknerMoveAfterIntro_7


# 209 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExitFacingSouth:
# 210 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 211 "data/maps/PokeRanch/scripts.pory"
	walk_left
	step_end

# 214 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExitFacingNorth:
# 215 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 216 "data/maps/PokeRanch/scripts.pory"
	walk_left
	step_end

PokeRanch_MareepTrigger::
# 290 "data/maps/PokeRanch/scripts.pory"
	lock
# 291 "data/maps/PokeRanch/scripts.pory"
	safefollow
# 292 "data/maps/PokeRanch/scripts.pory"
	faceplayer
# 293 "data/maps/PokeRanch/scripts.pory"
	waitse
# 294 "data/maps/PokeRanch/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 295 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_Mareep_Text_0, MSGBOX_DEFAULT
# 296 "data/maps/PokeRanch/scripts.pory"
	waitmoncry
# 297 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_MareepTrigger_Text_0, MSGBOX_DEFAULT
# 298 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 299 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 300 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_RANCH_EVENT_NPC
# 301 "data/maps/PokeRanch/scripts.pory"
	hideobjectat 19, MAP_POKE_RANCH
# 302 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 303 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_MareepTrigger_Text_1, MSGBOX_DEFAULT
# 304 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 305 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 306 "data/maps/PokeRanch/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 307 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 308 "data/maps/PokeRanch/scripts.pory"
	delay 90
# 309 "data/maps/PokeRanch/scripts.pory"
	applymovement LOCALID_PLAYER, RanchMovePlayer
# 310 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 311 "data/maps/PokeRanch/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 312 "data/maps/PokeRanch/scripts.pory"
	setobjectxy 19, 44, 8
# 313 "data/maps/PokeRanch/scripts.pory"
	showobjectat 19, MAP_POKE_RANCH
# 314 "data/maps/PokeRanch/scripts.pory"
	delay 50
# 315 "data/maps/PokeRanch/scripts.pory"
	checktrainerflag TRAINER_SHELLY_SEAFLOOR_CAVERN
	goto_if 1, PokeRanch_MareepTrigger_2
# 321 "data/maps/PokeRanch/scripts.pory"
	msgbox RanchGrunt2, MSGBOX_DEFAULT
# 322 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 323 "data/maps/PokeRanch/scripts.pory"
	closemessage
PokeRanch_MareepTrigger_1:
# 325 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 326 "data/maps/PokeRanch/scripts.pory"
	fadeoutbgm 1
# 327 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_MareepTrigger_Text_2, MSGBOX_DEFAULT
# 328 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, Common_Movement_QuestionMark
# 329 "data/maps/PokeRanch/scripts.pory"
	delay 10
# 330 "data/maps/PokeRanch/scripts.pory"
	applymovement 16, Common_Movement_QuestionMark
# 331 "data/maps/PokeRanch/scripts.pory"
	applymovement 14, Common_Movement_QuestionMark
# 332 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 333 "data/maps/PokeRanch/scripts.pory"
	applymovement 12, TurnGrunt12
# 334 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 335 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, TurnGrunt13
# 336 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 337 "data/maps/PokeRanch/scripts.pory"
	applymovement 14, TurnGrunt14
# 338 "data/maps/PokeRanch/scripts.pory"
	applymovement 15, TurnGrunt15
# 339 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 340 "data/maps/PokeRanch/scripts.pory"
	applymovement 16, TurnGrunt16
# 341 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 342 "data/maps/PokeRanch/scripts.pory"
	applymovement 17, TurnGrunt17
# 343 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 344 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 345 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 346 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 347 "data/maps/PokeRanch/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 348 "data/maps/PokeRanch/scripts.pory"
	applymovement 18, VolknerArrive
# 349 "data/maps/PokeRanch/scripts.pory"
	applymovement 19, JasmineArrive
# 350 "data/maps/PokeRanch/scripts.pory"
	turnobject 12, DIR_WEST
# 351 "data/maps/PokeRanch/scripts.pory"
	turnobject 14, DIR_WEST
# 352 "data/maps/PokeRanch/scripts.pory"
	turnobject 16, DIR_WEST
# 353 "data/maps/PokeRanch/scripts.pory"
	turnobject 13, DIR_EAST
# 354 "data/maps/PokeRanch/scripts.pory"
	turnobject 15, DIR_EAST
# 355 "data/maps/PokeRanch/scripts.pory"
	turnobject 17, DIR_EAST
# 356 "data/maps/PokeRanch/scripts.pory"
	waitmovement 18
# 357 "data/maps/PokeRanch/scripts.pory"
	waitmovement 19
# 358 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_MET, PokeRanch_MareepTrigger_6
# 362 "data/maps/PokeRanch/scripts.pory"
	bufferstring STR_VAR_1, PokeRanch_MareepTrigger_Text_4
PokeRanch_MareepTrigger_5:
# 364 "data/maps/PokeRanch/scripts.pory"
	msgbox VolknerRantA
# 365 "data/maps/PokeRanch/scripts.pory"
	msgbox VolknerRantB
# 366 "data/maps/PokeRanch/scripts.pory"
	msgbox VolknerRantC
# 367 "data/maps/PokeRanch/scripts.pory"
	msgbox VolknerRantD
# 368 "data/maps/PokeRanch/scripts.pory"
	msgbox VolknerRantE
# 369 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 370 "data/maps/PokeRanch/scripts.pory"
	applymovement 12, MoveGrunt12
# 371 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, Walk2Down
# 372 "data/maps/PokeRanch/scripts.pory"
	applymovement 14, Walk2Left
# 373 "data/maps/PokeRanch/scripts.pory"
	applymovement 15, Walk2Right
# 374 "data/maps/PokeRanch/scripts.pory"
	applymovement 16, Walk1Left
# 375 "data/maps/PokeRanch/scripts.pory"
	applymovement 17, Walk1Right
# 376 "data/maps/PokeRanch/scripts.pory"
	waitmovement 12
# 377 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 378 "data/maps/PokeRanch/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_4, PokeRanchRocket1Defeat
# 379 "data/maps/PokeRanch/scripts.pory"
	goto Ranch_FirstRocketWon
	end

PokeRanch_MareepTrigger_2:
# 316 "data/maps/PokeRanch/scripts.pory"
	msgbox RanchGrunt1, MSGBOX_DEFAULT
# 317 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 318 "data/maps/PokeRanch/scripts.pory"
	closemessage
	goto PokeRanch_MareepTrigger_1

PokeRanch_MareepTrigger_6:
# 359 "data/maps/PokeRanch/scripts.pory"
	bufferstring STR_VAR_1, PokeRanch_MareepTrigger_Text_3
	goto PokeRanch_MareepTrigger_5


# 383 "data/maps/PokeRanch/scripts.pory"
TurnGrunt12:
# 384 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 385 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 386 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 387 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
	step_end

# 389 "data/maps/PokeRanch/scripts.pory"
TurnGrunt13:
# 390 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 391 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 392 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 393 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
	step_end

# 395 "data/maps/PokeRanch/scripts.pory"
TurnGrunt14:
# 396 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 397 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 398 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 399 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
	step_end

# 401 "data/maps/PokeRanch/scripts.pory"
TurnGrunt15:
# 402 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 403 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 404 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 405 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
	step_end

# 407 "data/maps/PokeRanch/scripts.pory"
TurnGrunt16:
# 408 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 409 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 410 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 411 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
	step_end

# 413 "data/maps/PokeRanch/scripts.pory"
TurnGrunt17:
# 414 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 415 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 416 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 417 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
	step_end

Ranch_FirstRocketWon::
# 421 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 422 "data/maps/PokeRanch/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 423 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 424 "data/maps/PokeRanch/scripts.pory"
	msgbox RanchRocket2Challenge, MSGBOX_DEFAULT
# 425 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 426 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 427 "data/maps/PokeRanch/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_5, PokeRanchRocket2Defeat
# 428 "data/maps/PokeRanch/scripts.pory"
	goto PokeRanch_SpecialBattleWon
	end


PokeRanch_SpecialBattleWon::
# 441 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscape
# 442 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscape2
# 443 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 444 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 445 "data/maps/PokeRanch/scripts.pory"
	fadenewbgm MUS_MUTED
# 446 "data/maps/PokeRanch/scripts.pory"
	removeobject 12
# 447 "data/maps/PokeRanch/scripts.pory"
	removeobject 14
# 448 "data/maps/PokeRanch/scripts.pory"
	removeobject 15
# 449 "data/maps/PokeRanch/scripts.pory"
	removeobject 16
# 450 "data/maps/PokeRanch/scripts.pory"
	removeobject 17
# 451 "data/maps/PokeRanch/scripts.pory"
	setobjectxy 18, 35, 6
# 452 "data/maps/PokeRanch/scripts.pory"
	setobjectxy 19, 36, 6
# 453 "data/maps/PokeRanch/scripts.pory"
	turnobject 18, DIR_SOUTH
# 454 "data/maps/PokeRanch/scripts.pory"
	turnobject 19, DIR_SOUTH
# 455 "data/maps/PokeRanch/scripts.pory"
	turnobject 13, DIR_NORTH
# 456 "data/maps/PokeRanch/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 457 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 458 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 459 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 460 "data/maps/PokeRanch/scripts.pory"
	fadenewbgm MUS_VERDANTURF
# 461 "data/maps/PokeRanch/scripts.pory"
	savebgm MUS_VERDANTURF
# 462 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_SpecialBattleWon_2
# 467 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscapeFail
# 468 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscapeFail2
PokeRanch_SpecialBattleWon_1:
# 470 "data/maps/PokeRanch/scripts.pory"
	safefollow
# 471 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 472 "data/maps/PokeRanch/scripts.pory"
	applymovement 18, AfterBattleVolkner1
# 473 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 474 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, AfterBattleRocket1
# 475 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 476 "data/maps/PokeRanch/scripts.pory"
	applymovement 18, AfterBattleVolkner2
# 477 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, AfterBattleRocket2
# 478 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 479 "data/maps/PokeRanch/scripts.pory"
	delay 10
# 480 "data/maps/PokeRanch/scripts.pory"
	applymovement 19, Walk1Down
# 481 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 482 "data/maps/PokeRanch/scripts.pory"
	delay 10
# 483 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_MET, PokeRanch_SpecialBattleWon_6
# 487 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_JasmineHeadsBack2, MSGBOX_DEFAULT
PokeRanch_SpecialBattleWon_5:
# 489 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 490 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 491 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 492 "data/maps/PokeRanch/scripts.pory"
	removeobject 18
# 493 "data/maps/PokeRanch/scripts.pory"
	removeobject 19
# 494 "data/maps/PokeRanch/scripts.pory"
	removeobject 13
# 495 "data/maps/PokeRanch/scripts.pory"
	removeobject 7
# 496 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_HIDE_VOLKNER_2
# 497 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 498 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_VOLKNER_HELPED
# 499 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_MAREEP_NOT_RETURNED
# 500 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_SpecialBattleWon_10
PokeRanch_SpecialBattleWon_9:
# 503 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 504 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 505 "data/maps/PokeRanch/scripts.pory"
	release
	end

PokeRanch_SpecialBattleWon_2:
# 463 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscapeFail
# 464 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscapeFailPart2
	goto PokeRanch_SpecialBattleWon_1

PokeRanch_SpecialBattleWon_6:
# 484 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_JasmineHeadsBack, MSGBOX_DEFAULT
	goto PokeRanch_SpecialBattleWon_5

PokeRanch_SpecialBattleWon_10:
# 501 "data/maps/PokeRanch/scripts.pory"
	call Ranch_QuestFlagsComplete
	goto PokeRanch_SpecialBattleWon_9


Ranch_QuestFlagsComplete::
# 510 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_RANCH_HELPED
# 511 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_HIDE_RANCH_OWNER
# 512 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_HIDE_VOLKNER_1
# 513 "data/maps/PokeRanch/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	return


# 572 "data/maps/PokeRanch/scripts.pory"
AfterBattleVolkner1:
# 573 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 574 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
	step_end

# 577 "data/maps/PokeRanch/scripts.pory"
AfterBattleRocket1:
# 578 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_up
	step_end

# 582 "data/maps/PokeRanch/scripts.pory"
AfterBattleVolkner2:
# 583 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 584 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 584 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 584 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 584 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 584 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 584 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 585 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

# 589 "data/maps/PokeRanch/scripts.pory"
AfterBattleRocket2:
# 590 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 590 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 590 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 590 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 590 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 590 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 591 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

# 594 "data/maps/PokeRanch/scripts.pory"
MoveGrunt12:
# 595 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 595 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 595 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 596 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
	step_end

# 623 "data/maps/PokeRanch/scripts.pory"
VolknerArrive:
# 624 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 625 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 626 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 626 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 627 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 627 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 628 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 629 "data/maps/PokeRanch/scripts.pory"
	walk_right
	step_end

# 632 "data/maps/PokeRanch/scripts.pory"
JasmineArrive:
# 633 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 633 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 634 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 634 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 635 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 635 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 636 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 637 "data/maps/PokeRanch/scripts.pory"
	walk_left
	step_end

# 640 "data/maps/PokeRanch/scripts.pory"
RanchMovePlayer:
# 641 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 641 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 642 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 642 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 642 "data/maps/PokeRanch/scripts.pory"
	walk_up
	step_end

PokeRanch_Mareep_Text_0:
# 28 "data/maps/PokeRanch/scripts.pory"
	.string "Mareep: Baa!$"

PokeRanch_Ampharos_Text_0:
# 39 "data/maps/PokeRanch/scripts.pory"
	.string "Ampharos: Palu!\nPalulu!$"

PokeRanch_Lass_Text_0:
# 48 "data/maps/PokeRanch/scripts.pory"
	.string "Mareep are so cute!\nJust being near one is causing all\lmy hair to stand up.$"

PokeRanch_Owner_Text_0:
# 56 "data/maps/PokeRanch/scripts.pory"
	.string "Oh, what am I to do…$"

PokeRanch_MareepTrigger_Text_0:
# 297 "data/maps/PokeRanch/scripts.pory"
	.string "This must be the missing Mareep…$"

PokeRanch_MareepTrigger_Text_1:
# 303 "data/maps/PokeRanch/scripts.pory"
	.string "???: WE GOT YOU NOW!$"

PokeRanch_MareepTrigger_Text_2:
# 327 "data/maps/PokeRanch/scripts.pory"
	.string "NOT SO FAST!!$"

PokeRanch_MareepTrigger_Text_3:
# 359 "data/maps/PokeRanch/scripts.pory"
	.string "Jasmine$"

PokeRanch_MareepTrigger_Text_4:
# 362 "data/maps/PokeRanch/scripts.pory"
	.string "???$"

PokeRanch_VolknerReward::
# 157 "data/maps/PokeRanch/scripts.pory"
	.string "Volkner: You've been a great help\n"
	.string "around the farm.\p"
	.string "Honestly I'm not sure if Jasmine\n"
	.string "and I could've even dealt with\l"
	.string "all the problems without your help.\p"
	.string "To show my gratitude,\n"
	.string "I want you to have this.$"

Volkner2_JasmineHelped::
# 167 "data/maps/PokeRanch/scripts.pory"
	.string "You've already helped Jasmine\n"
	.string "with her task?\l"
	.string "That's great!\p"
	.string "That only leaves us with the case\n"
	.string "of the missing Mareep.$"

Ranch_ExplainCut::
# 175 "data/maps/PokeRanch/scripts.pory"
	.string "Volkner: That's a Hidden Machine,\n"
	.string "or HM for short.\l"
	.string "This specific HM contains the move Cut.\p"
	.string "Cut allows your Pokémon to get rid of\n"
	.string "certain pesky trees blocking your path.\p"
	.string "Do note that HM moves can be hard to\n"
	.string "get rid of and may require the help\l"
	.string "of a move deleter.\p"
	.string "Also, to use the move in the field,\n"
	.string "you must first obtain my gym badge.\p"
	.string "If you believe yourself to be ready,\n"
	.string "come take on my gym challenge!$"

PokeRanch_VolknerInitialIntro::
# 219 "data/maps/PokeRanch/scripts.pory"
	.string "Sorry, but we've got a bit of\n"
	.string "a situation going on here.\p"
	.string "We're going to have to ask\n"
	.string "the public to leave…$"

PokeRanch_VolknerIntroContinued::
# 226 "data/maps/PokeRanch/scripts.pory"
	.string "Oh but wait,\n"
	.string "you seem to be a Pokémon trainer.\p"
	.string "In that case,\n"
	.string "maybe you could help with the case?\p"
	.string "My name is Volkner.\p"
	.string "I'm the gym leader of Aldeleaf\n"
	.string "City but every now and then I get\l"
	.string "called to help the locals with all\l"
	.string "sorts of different problems.$"

PokeRanch_JasmineAlreadyHelped::
# 238 "data/maps/PokeRanch/scripts.pory"
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "First…\p"
	.string "Huh?\p"
	.string "You already talked to Jasmine\n"
	.string "AND helped her out?\l"
	.string "Wow, talk about a go-getter!$"

PokeRanch_JasmineTalkedToFirst::
# 248 "data/maps/PokeRanch/scripts.pory"
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "I noticed you went inside the barn\n"
	.string "earlier so you probably already\l"
	.string "talked to Jasmine?\p"
	.string "Great, so I probably don't have\n"
	.string "to explain that part to you.$"

PokeRanch_JasmineNotTalkedTo::
# 258 "data/maps/PokeRanch/scripts.pory"
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "First, some of the Mareep around\n"
	.string "the ranch have fallen ill.\p"
	.string "As much as I'd like to help,\n"
	.string "I don't really have much experience\l"
	.string "dealing with cases like this.\p"
	.string "As such, I called over a friend\n"
	.string "who could probably help.\p"
	.string "To know more,\n"
	.string "go look for her in the barn.$"

PokeRanch_VolknerSecondIssue::
# 272 "data/maps/PokeRanch/scripts.pory"
	.string "The other issue we are dealing with\n"
	.string "is a case of missing Mareep.\p"
	.string "The ranch owner noticed earlier how\n"
	.string "one of his Mareep had gone missing.\p"
	.string "The Mareep are not known for wandering\n"
	.string "around so something must've\l"
	.string "happened to it.\p"
	.string "I'm going to look around the ranch\n"
	.string "for clues but any help you can offer\l"
	.string "would be greatly appreciated.$"

PokeRanch_VolknerGossip::
# 285 "data/maps/PokeRanch/scripts.pory"
	.string "There must be some clues here…$"

PokeRanchRocket1Defeat::
# 432 "data/maps/PokeRanch/scripts.pory"
	.string "Not again…$"

PokeRanchRocket2Defeat::
# 436 "data/maps/PokeRanch/scripts.pory"
	.string "We lost?!$"

Ranch_RocketEscape::
# 516 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 6: These guys are\n"
	.string "way too strong!$"

Ranch_RocketEscape2::
# 520 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: This calls for\n"
	.string "a tactical retreat!\p"
	.string "They can't catch all of us!$"

Ranch_RocketEscapeFail::
# 525 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: Drats…$"

Ranch_RocketEscapeFailPart2::
# 528 "data/maps/PokeRanch/scripts.pory"
	.string "Volkner: The others may have escaped\n"
	.string "but at least we caught someone who\l"
	.string "was seemingly calling the shots here.\p"
	.string "I'll head out and turn this guy in\n"
	.string "to the authority.\l"
	.string "Maybe we can learn more about\l"
	.string "Team Rocket's plans.\p"
	.string "Come see me later in front\n"
	.string "of the ranch.$"

Ranch_RocketEscapeFail2::
# 539 "data/maps/PokeRanch/scripts.pory"
	.string "Volkner: The others may have escaped\n"
	.string "but at least we caught someone who\l"
	.string "was seemingly calling the shots here.\p"
	.string "I'll head out and turn this guy in\n"
	.string "to the authority.\l"
	.string "Maybe we can learn more about\l"
	.string "Team Rocket's plans.\p"
	.string "Come see me later in front\n"
	.string "of the ranch.\p"
	.string "It'll probably take me a while\n"
	.string "to escort this guy.\l"
	.string "In the meanwhile, your help at the\l"
	.string "barn would be greatly appreciated.$"

Ranch_JasmineHeadsBack::
# 554 "data/maps/PokeRanch/scripts.pory"
	.string "Jasmine: I need to head back and\n"
	.string "make sure the situation at the barn\l"
	.string "is under control…\p"
	.string "Um, if you don't mind,\n"
	.string "I'd like to take the little guy\l"
	.string "hiding in the corner back to the barn…$"

Ranch_JasmineHeadsBack2::
# 562 "data/maps/PokeRanch/scripts.pory"
	.string "???: Um, if you don't mind,\n"
	.string "I'd like to take the little guy\l"
	.string "hiding in the corner back to the barn…$"

RanchRocket2Challenge::
# 567 "data/maps/PokeRanch/scripts.pory"
	.string "Don't think you're out\n"
	.string "of the woods yet!$"

VolknerRantA::
# 599 "data/maps/PokeRanch/scripts.pory"
	.string "{STR_VAR_1}: Looks like we arrived\n"
	.string "just in time…$"

VolknerRantB::
# 603 "data/maps/PokeRanch/scripts.pory"
	.string "Volkner: I saw some of these guys\n"
	.string "skulking in the woods, so I knew\l"
	.string "there was trouble about.\p"
	.string "You're not taking anybody's\n"
	.string "Pokémon today!$"

VolknerRantC::
# 610 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 3: There's two\n"
	.string "gym leaders here?!$"

VolknerRantD::
# 614 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 5: We're done for!$"

VolknerRantE::
# 617 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: CALM YOURSELF!\p"
	.string "We still outnumber them two-to-one!\n"
	.string "Let's do this!$"

RanchGrunt1::
# 645 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: Well well well,\n"
	.string "looks like our trap worked perfectly!\p"
	.string "Remember me from Windy Woods?\n"
	.string "This time I got some backup!\p"
	.string "You better hand over all your Pokémon\n"
	.string "if you want to leave this place alive!$"

RanchGrunt2::
# 654 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: Well well well,\n"
	.string "looks like our trap worked perfectly!\p"
	.string "You better hand over all your Pokémon\n"
	.string "if you want to leave this place alive!$"
