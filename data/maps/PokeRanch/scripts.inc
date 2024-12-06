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
# 133 "data/maps/PokeRanch/scripts.pory"
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
	applymovement 10, Common_Movement_ExclamationMark
# 106 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 107 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 108 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerIntroContinued, MSGBOX_DEFAULT
# 109 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 110 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 111 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_Volkner_16
# 116 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_TALKED_TO_FIRST, PokeRanch_Volkner_17
# 122 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_JasmineNotTalkedTo, MSGBOX_DEFAULT
# 123 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 124 "data/maps/PokeRanch/scripts.pory"
	closemessage
PokeRanch_Volkner_15:
# 126 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerSecondIssue, MSGBOX_DEFAULT
# 127 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 128 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 129 "data/maps/PokeRanch/scripts.pory"
	setvar VAR_POKERANCH, 1
# 130 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_VOLKNER_TALKED_TO_FIRST
# 131 "data/maps/PokeRanch/scripts.pory"
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
# 134 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_VolknerGossip, MSGBOX_DEFAULT
# 135 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_Volkner_29
PokeRanch_Volkner_27:
# 139 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 140 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 141 "data/maps/PokeRanch/scripts.pory"
	release
	end

PokeRanch_Volkner_16:
# 112 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_JasmineAlreadyHelped, MSGBOX_DEFAULT
# 113 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 114 "data/maps/PokeRanch/scripts.pory"
	closemessage
	goto PokeRanch_Volkner_15

PokeRanch_Volkner_17:
# 117 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_JasmineTalkedToFirst, MSGBOX_DEFAULT
# 118 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 119 "data/maps/PokeRanch/scripts.pory"
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
# 136 "data/maps/PokeRanch/scripts.pory"
	msgbox Volkner2_JasmineHelped, MSGBOX_DEFAULT
# 137 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_VOLKNER_INFORMED
	goto PokeRanch_Volkner_27

PokeRanch_Volkner_29:
# 135 "data/maps/PokeRanch/scripts.pory"
	goto_if_unset FLAG_VOLKNER_INFORMED, PokeRanch_Volkner_28
	goto PokeRanch_Volkner_27

PokeRanch_Volkner_33:
# 89 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExit2FacingSWE
	goto PokeRanch_Volkner_32


# 147 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExit2FacingNorth:
# 148 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 149 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

# 151 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExit2FacingNorthAlt:
# 152 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 153 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

# 155 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExit2FacingSWE:
# 156 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 156 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 156 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 156 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 156 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 156 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 156 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

PokeRanch_VolknerMoveAfterIntro::
# 193 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_2
PokeRanch_VolknerMoveAfterIntro_1:
# 196 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_5
PokeRanch_VolknerMoveAfterIntro_4:
# 199 "data/maps/PokeRanch/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_8
PokeRanch_VolknerMoveAfterIntro_7:
# 202 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 203 "data/maps/PokeRanch/scripts.pory"
	removeobject 10
# 204 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 205 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_HIDE_VOLKNER_2
# 206 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 207 "data/maps/PokeRanch/scripts.pory"
	release
	end

PokeRanch_VolknerMoveAfterIntro_2:
# 194 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExitFacingSouth
	goto PokeRanch_VolknerMoveAfterIntro_1

PokeRanch_VolknerMoveAfterIntro_5:
# 197 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExitFacingNorth
	goto PokeRanch_VolknerMoveAfterIntro_4

PokeRanch_VolknerMoveAfterIntro_8:
# 200 "data/maps/PokeRanch/scripts.pory"
	applymovement 10, PokeRanch_VolknerExitFacingSouth
	goto PokeRanch_VolknerMoveAfterIntro_7


# 211 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExitFacingSouth:
# 212 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 213 "data/maps/PokeRanch/scripts.pory"
	walk_left
	step_end

# 216 "data/maps/PokeRanch/scripts.pory"
PokeRanch_VolknerExitFacingNorth:
# 217 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 218 "data/maps/PokeRanch/scripts.pory"
	walk_left
	step_end

PokeRanch_MareepTrigger::
# 292 "data/maps/PokeRanch/scripts.pory"
	lock
# 293 "data/maps/PokeRanch/scripts.pory"
	safefollow
# 294 "data/maps/PokeRanch/scripts.pory"
	faceplayer
# 295 "data/maps/PokeRanch/scripts.pory"
	waitse
# 296 "data/maps/PokeRanch/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 297 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_Mareep_Text_0, MSGBOX_DEFAULT
# 298 "data/maps/PokeRanch/scripts.pory"
	waitmoncry
# 299 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_MareepTrigger_Text_0, MSGBOX_DEFAULT
# 300 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 301 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 302 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_RANCH_EVENT_NPC
# 303 "data/maps/PokeRanch/scripts.pory"
	hideobjectat 19, MAP_POKE_RANCH
# 304 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 305 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_MareepTrigger_Text_1, MSGBOX_DEFAULT
# 306 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 307 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 308 "data/maps/PokeRanch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 309 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 310 "data/maps/PokeRanch/scripts.pory"
	delay 90
# 311 "data/maps/PokeRanch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RanchMovePlayer
# 312 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 313 "data/maps/PokeRanch/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 314 "data/maps/PokeRanch/scripts.pory"
	setobjectxy 19, 44, 8
# 315 "data/maps/PokeRanch/scripts.pory"
	showobjectat 19, MAP_POKE_RANCH
# 316 "data/maps/PokeRanch/scripts.pory"
	delay 50
# 317 "data/maps/PokeRanch/scripts.pory"
	checktrainerflag TRAINER_SHELLY_SEAFLOOR_CAVERN
	goto_if 1, PokeRanch_MareepTrigger_2
# 323 "data/maps/PokeRanch/scripts.pory"
	msgbox RanchGrunt2, MSGBOX_DEFAULT
# 324 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 325 "data/maps/PokeRanch/scripts.pory"
	closemessage
PokeRanch_MareepTrigger_1:
# 327 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 328 "data/maps/PokeRanch/scripts.pory"
	fadeoutbgm 1
# 329 "data/maps/PokeRanch/scripts.pory"
	msgbox PokeRanch_MareepTrigger_Text_2, MSGBOX_DEFAULT
# 330 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, Common_Movement_QuestionMark
# 331 "data/maps/PokeRanch/scripts.pory"
	delay 10
# 332 "data/maps/PokeRanch/scripts.pory"
	applymovement 16, Common_Movement_QuestionMark
# 333 "data/maps/PokeRanch/scripts.pory"
	applymovement 14, Common_Movement_QuestionMark
# 334 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 335 "data/maps/PokeRanch/scripts.pory"
	applymovement 12, TurnGrunt12
# 336 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 337 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, TurnGrunt13
# 338 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 339 "data/maps/PokeRanch/scripts.pory"
	applymovement 14, TurnGrunt14
# 340 "data/maps/PokeRanch/scripts.pory"
	applymovement 15, TurnGrunt15
# 341 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 342 "data/maps/PokeRanch/scripts.pory"
	applymovement 16, TurnGrunt16
# 343 "data/maps/PokeRanch/scripts.pory"
	delay 5
# 344 "data/maps/PokeRanch/scripts.pory"
	applymovement 17, TurnGrunt17
# 345 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 346 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 347 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 348 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 349 "data/maps/PokeRanch/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 350 "data/maps/PokeRanch/scripts.pory"
	applymovement 18, VolknerArrive
# 351 "data/maps/PokeRanch/scripts.pory"
	applymovement 19, JasmineArrive
# 352 "data/maps/PokeRanch/scripts.pory"
	turnobject 12, DIR_WEST
# 353 "data/maps/PokeRanch/scripts.pory"
	turnobject 14, DIR_WEST
# 354 "data/maps/PokeRanch/scripts.pory"
	turnobject 16, DIR_WEST
# 355 "data/maps/PokeRanch/scripts.pory"
	turnobject 13, DIR_EAST
# 356 "data/maps/PokeRanch/scripts.pory"
	turnobject 15, DIR_EAST
# 357 "data/maps/PokeRanch/scripts.pory"
	turnobject 17, DIR_EAST
# 358 "data/maps/PokeRanch/scripts.pory"
	waitmovement 18
# 359 "data/maps/PokeRanch/scripts.pory"
	waitmovement 19
# 360 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_MET, PokeRanch_MareepTrigger_6
# 364 "data/maps/PokeRanch/scripts.pory"
	msgbox VolknerRant2, MSGBOX_DEFAULT
PokeRanch_MareepTrigger_5:
# 366 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 367 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 368 "data/maps/PokeRanch/scripts.pory"
	applymovement 12, MoveGrunt12
# 369 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, Walk2Down
# 370 "data/maps/PokeRanch/scripts.pory"
	applymovement 14, Walk2Left
# 371 "data/maps/PokeRanch/scripts.pory"
	applymovement 15, Walk2Right
# 372 "data/maps/PokeRanch/scripts.pory"
	applymovement 16, Walk1Left
# 373 "data/maps/PokeRanch/scripts.pory"
	applymovement 17, Walk1Right
# 374 "data/maps/PokeRanch/scripts.pory"
	waitmovement 12
# 375 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 376 "data/maps/PokeRanch/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_4, PokeRanchRocket1Defeat
# 377 "data/maps/PokeRanch/scripts.pory"
	goto Ranch_FirstRocketWon
	end

PokeRanch_MareepTrigger_2:
# 318 "data/maps/PokeRanch/scripts.pory"
	msgbox RanchGrunt1, MSGBOX_DEFAULT
# 319 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 320 "data/maps/PokeRanch/scripts.pory"
	closemessage
	goto PokeRanch_MareepTrigger_1

PokeRanch_MareepTrigger_6:
# 361 "data/maps/PokeRanch/scripts.pory"
	msgbox VolknerRant, MSGBOX_DEFAULT
	goto PokeRanch_MareepTrigger_5


# 381 "data/maps/PokeRanch/scripts.pory"
TurnGrunt12:
# 382 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 383 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 384 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 385 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
	step_end

# 387 "data/maps/PokeRanch/scripts.pory"
TurnGrunt13:
# 388 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 389 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 390 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 391 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
	step_end

# 393 "data/maps/PokeRanch/scripts.pory"
TurnGrunt14:
# 394 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 395 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 396 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 397 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
	step_end

# 399 "data/maps/PokeRanch/scripts.pory"
TurnGrunt15:
# 400 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 401 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 402 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 403 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
	step_end

# 405 "data/maps/PokeRanch/scripts.pory"
TurnGrunt16:
# 406 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
# 407 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 408 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 409 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
	step_end

# 411 "data/maps/PokeRanch/scripts.pory"
TurnGrunt17:
# 412 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
# 413 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_up
# 414 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_left
# 415 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
	step_end

Ranch_FirstRocketWon::
# 419 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 420 "data/maps/PokeRanch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 421 "data/maps/PokeRanch/scripts.pory"
	delay 20
# 422 "data/maps/PokeRanch/scripts.pory"
	msgbox RanchRocket2Challenge, MSGBOX_DEFAULT
# 423 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 424 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 425 "data/maps/PokeRanch/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_5, PokeRanchRocket2Defeat
# 426 "data/maps/PokeRanch/scripts.pory"
	goto PokeRanch_SpecialBattleWon
	end


PokeRanch_SpecialBattleWon::
# 439 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscape, MSGBOX_DEFAULT
# 440 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 441 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 442 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 443 "data/maps/PokeRanch/scripts.pory"
	fadenewbgm MUS_MUTED
# 444 "data/maps/PokeRanch/scripts.pory"
	removeobject 12
# 445 "data/maps/PokeRanch/scripts.pory"
	removeobject 14
# 446 "data/maps/PokeRanch/scripts.pory"
	removeobject 15
# 447 "data/maps/PokeRanch/scripts.pory"
	removeobject 16
# 448 "data/maps/PokeRanch/scripts.pory"
	removeobject 17
# 449 "data/maps/PokeRanch/scripts.pory"
	setobjectxy 18, 35, 6
# 450 "data/maps/PokeRanch/scripts.pory"
	setobjectxy 19, 36, 6
# 451 "data/maps/PokeRanch/scripts.pory"
	turnobject 18, DIR_SOUTH
# 452 "data/maps/PokeRanch/scripts.pory"
	turnobject 19, DIR_SOUTH
# 453 "data/maps/PokeRanch/scripts.pory"
	turnobject 13, DIR_NORTH
# 454 "data/maps/PokeRanch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 455 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 456 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 457 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 458 "data/maps/PokeRanch/scripts.pory"
	fadenewbgm MUS_VERDANTURF
# 459 "data/maps/PokeRanch/scripts.pory"
	savebgm MUS_VERDANTURF
# 460 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_SpecialBattleWon_2
# 464 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscapeFail2, MSGBOX_DEFAULT
PokeRanch_SpecialBattleWon_1:
# 466 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 467 "data/maps/PokeRanch/scripts.pory"
	safefollow
# 468 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 469 "data/maps/PokeRanch/scripts.pory"
	applymovement 18, AfterBattleVolkner1
# 470 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 471 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, AfterBattleRocket1
# 472 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 473 "data/maps/PokeRanch/scripts.pory"
	applymovement 18, AfterBattleVolkner2
# 474 "data/maps/PokeRanch/scripts.pory"
	applymovement 13, AfterBattleRocket2
# 475 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 476 "data/maps/PokeRanch/scripts.pory"
	delay 10
# 477 "data/maps/PokeRanch/scripts.pory"
	applymovement 19, Walk1Down
# 478 "data/maps/PokeRanch/scripts.pory"
	waitmovement 0
# 479 "data/maps/PokeRanch/scripts.pory"
	delay 10
# 480 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_MET, PokeRanch_SpecialBattleWon_6
# 484 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_JasmineHeadsBack2, MSGBOX_DEFAULT
PokeRanch_SpecialBattleWon_5:
# 486 "data/maps/PokeRanch/scripts.pory"
	waitmessage
# 487 "data/maps/PokeRanch/scripts.pory"
	closemessage
# 488 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 489 "data/maps/PokeRanch/scripts.pory"
	removeobject 18
# 490 "data/maps/PokeRanch/scripts.pory"
	removeobject 19
# 491 "data/maps/PokeRanch/scripts.pory"
	removeobject 13
# 492 "data/maps/PokeRanch/scripts.pory"
	removeobject 7
# 493 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_HIDE_VOLKNER_2
# 494 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 495 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_VOLKNER_HELPED
# 496 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_MAREEP_NOT_RETURNED
# 497 "data/maps/PokeRanch/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_SpecialBattleWon_10
PokeRanch_SpecialBattleWon_9:
# 500 "data/maps/PokeRanch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 501 "data/maps/PokeRanch/scripts.pory"
	delay 40
# 502 "data/maps/PokeRanch/scripts.pory"
	release
	end

PokeRanch_SpecialBattleWon_2:
# 461 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_RocketEscapeFail, MSGBOX_DEFAULT
	goto PokeRanch_SpecialBattleWon_1

PokeRanch_SpecialBattleWon_6:
# 481 "data/maps/PokeRanch/scripts.pory"
	msgbox Ranch_JasmineHeadsBack, MSGBOX_DEFAULT
	goto PokeRanch_SpecialBattleWon_5

PokeRanch_SpecialBattleWon_10:
# 498 "data/maps/PokeRanch/scripts.pory"
	call Ranch_QuestFlagsComplete
	goto PokeRanch_SpecialBattleWon_9


Ranch_QuestFlagsComplete::
# 507 "data/maps/PokeRanch/scripts.pory"
	setflag FLAG_RANCH_HELPED
# 508 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_HIDE_RANCH_OWNER
# 509 "data/maps/PokeRanch/scripts.pory"
	clearflag FLAG_HIDE_VOLKNER_1
# 510 "data/maps/PokeRanch/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	return


# 566 "data/maps/PokeRanch/scripts.pory"
AfterBattleVolkner1:
# 567 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 568 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_down
	step_end

# 571 "data/maps/PokeRanch/scripts.pory"
AfterBattleRocket1:
# 572 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 573 "data/maps/PokeRanch/scripts.pory"
	walk_up
	step_end

# 576 "data/maps/PokeRanch/scripts.pory"
AfterBattleVolkner2:
# 577 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 578 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 578 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 578 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 578 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 578 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 578 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 579 "data/maps/PokeRanch/scripts.pory"
	walk_down
	step_end

# 583 "data/maps/PokeRanch/scripts.pory"
AfterBattleRocket2:
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

# 588 "data/maps/PokeRanch/scripts.pory"
MoveGrunt12:
# 589 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 589 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 589 "data/maps/PokeRanch/scripts.pory"
	walk_down
# 590 "data/maps/PokeRanch/scripts.pory"
	walk_in_place_right
	step_end

# 625 "data/maps/PokeRanch/scripts.pory"
VolknerArrive:
# 626 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 627 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 628 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 628 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 629 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 629 "data/maps/PokeRanch/scripts.pory"
	walk_right
# 630 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 631 "data/maps/PokeRanch/scripts.pory"
	walk_right
	step_end

# 634 "data/maps/PokeRanch/scripts.pory"
JasmineArrive:
# 635 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 635 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 636 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 636 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 637 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 637 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 638 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 639 "data/maps/PokeRanch/scripts.pory"
	walk_left
	step_end

# 642 "data/maps/PokeRanch/scripts.pory"
RanchMovePlayer:
# 643 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 643 "data/maps/PokeRanch/scripts.pory"
	walk_left
# 644 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 644 "data/maps/PokeRanch/scripts.pory"
	walk_up
# 644 "data/maps/PokeRanch/scripts.pory"
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
# 299 "data/maps/PokeRanch/scripts.pory"
	.string "This must be the missing Mareep…$"

PokeRanch_MareepTrigger_Text_1:
# 305 "data/maps/PokeRanch/scripts.pory"
	.string "???: WE GOT YOU NOW!$"

PokeRanch_MareepTrigger_Text_2:
# 329 "data/maps/PokeRanch/scripts.pory"
	.string "NOT SO FAST!!$"

PokeRanch_VolknerReward::
# 159 "data/maps/PokeRanch/scripts.pory"
	.string "Volkner: You've been a great help\n"
	.string "around the farm.\p"
	.string "Honestly I'm not sure if Jasmine\n"
	.string "and I could've even dealt with\l"
	.string "all the problems without your help.\p"
	.string "To show my gratitude,\n"
	.string "I want you to have this.$"

Volkner2_JasmineHelped::
# 169 "data/maps/PokeRanch/scripts.pory"
	.string "You've already helped Jasmine\n"
	.string "with her task?\l"
	.string "That's great!\p"
	.string "That only leaves us with the case\n"
	.string "of the missing Mareep.$"

Ranch_ExplainCut::
# 177 "data/maps/PokeRanch/scripts.pory"
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
# 221 "data/maps/PokeRanch/scripts.pory"
	.string "Sorry, but we've got a bit of\n"
	.string "a situation going on here.\p"
	.string "We're going to have to ask\n"
	.string "the public to leave…$"

PokeRanch_VolknerIntroContinued::
# 228 "data/maps/PokeRanch/scripts.pory"
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
# 240 "data/maps/PokeRanch/scripts.pory"
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "First…\p"
	.string "Huh?\p"
	.string "You already talked to Jasmine\n"
	.string "AND helped her out?\l"
	.string "Wow, talk about a go-getter!$"

PokeRanch_JasmineTalkedToFirst::
# 250 "data/maps/PokeRanch/scripts.pory"
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "I noticed you went inside the barn\n"
	.string "earlier so you probably already\l"
	.string "talked to Jasmine?\p"
	.string "Great, so I probably don't have\n"
	.string "to explain that part to you.$"

PokeRanch_JasmineNotTalkedTo::
# 260 "data/maps/PokeRanch/scripts.pory"
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
# 274 "data/maps/PokeRanch/scripts.pory"
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
# 287 "data/maps/PokeRanch/scripts.pory"
	.string "There must be some clues here…$"

PokeRanchRocket1Defeat::
# 430 "data/maps/PokeRanch/scripts.pory"
	.string "Not again…$"

PokeRanchRocket2Defeat::
# 434 "data/maps/PokeRanch/scripts.pory"
	.string "We lost!?$"

Ranch_RocketEscape::
# 513 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 6: These guys are\n"
	.string "way too strong!\p"
	.string "Rocket Grunt 1: This calls for\n"
	.string "a tactical retreat!\l"
	.string "They can't catch all of us!$"

Ranch_RocketEscapeFail::
# 520 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: Drats…\p"
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
# 532 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: Drats…\p"
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
# 548 "data/maps/PokeRanch/scripts.pory"
	.string "Jasmine: I need to head back and\n"
	.string "make sure the situation at the barn\l"
	.string "is under control…\p"
	.string "Um, if you don't mind,\n"
	.string "I'd like to take the little guy\l"
	.string "hiding in the corner back to the barn…$"

Ranch_JasmineHeadsBack2::
# 556 "data/maps/PokeRanch/scripts.pory"
	.string "???: Um, if you don't mind,\n"
	.string "I'd like to take the little guy\l"
	.string "hiding in the corner back to the barn…$"

RanchRocket2Challenge::
# 561 "data/maps/PokeRanch/scripts.pory"
	.string "Don't think you're out\n"
	.string "of the woods yet!$"

VolknerRant2::
# 593 "data/maps/PokeRanch/scripts.pory"
	.string "???: Looks like we arrived\n"
	.string "just in time…\p"
	.string "Volkner: I saw some of these guys\n"
	.string "skulking in the woods so I knew\l"
	.string "there was trouble about.\p"
	.string "You're not taking anybody's\n"
	.string "Pokémon today!\p"
	.string "Rocket Grunt 3: There's two\n"
	.string "gym leaders here!?\p"
	.string "Rocket Grunt 5: We're done for!\p"
	.string "Rocket Grunt 1: CALM YOURSELF!\n"
	.string "We still outnumber them two-to-one!\p"
	.string "Let's do this!$"

VolknerRant::
# 609 "data/maps/PokeRanch/scripts.pory"
	.string "Jasmine: Looks like we arrived\n"
	.string "just in time…\p"
	.string "Volkner: I saw some of these guys\n"
	.string "skulking in the woods so I knew\l"
	.string "there was trouble about.\p"
	.string "You're not taking anybody's\n"
	.string "Pokémon today!\p"
	.string "Rocket Grunt 3: There's two\n"
	.string "gym leaders here!?\p"
	.string "Rocket Grunt 5: We're done for!\p"
	.string "Rocket Grunt 1: CALM YOURSELF!\n"
	.string "We still outnumber them two-to-one!\p"
	.string "Let's do this!$"

RanchGrunt1::
# 647 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: Well well well,\n"
	.string "looks like our trap worked perfectly!\p"
	.string "Remember me from Windy Woods?\n"
	.string "This time I got some backup!\p"
	.string "You better hand over all your Pokémon\n"
	.string "if you want to leave this place alive!$"

RanchGrunt2::
# 656 "data/maps/PokeRanch/scripts.pory"
	.string "Rocket Grunt 1: Well well well,\n"
	.string "looks like our trap worked perfectly!\p"
	.string "You better hand over all your Pokémon\n"
	.string "if you want to leave this place alive!$"
