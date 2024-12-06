AmberockTown_MapScripts::
# 2 "data/maps/AmberockTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_FlagControl
# 3 "data/maps/AmberockTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PaperVisibility
	.byte 0


Amberock_FlagControl::
# 10 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_3
# 11 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_2
# 12 "data/maps/AmberockTown/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_FlagControl_2
Amberock_FlagControl_1:
# 15 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Amberock_FlagControl_5
	return

Amberock_FlagControl_2:
# 13 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto Amberock_FlagControl_1

Amberock_FlagControl_4:
# 16 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 31, 33, 11
# 17 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return

Amberock_FlagControl_5:
# 15 "data/maps/AmberockTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_SURF, Amberock_FlagControl_4
	return


Amberock_PaperVisibility::
# 21 "data/maps/AmberockTown/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_PaperVisibility_1
	return

Amberock_PaperVisibility_1:
# 22 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 10, 0x128, FALSE
# 23 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 12, 0x189, FALSE
# 24 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 12, 0x189, FALSE
# 25 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 13, 0x170, FALSE
# 26 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 13, 0x170, FALSE
# 27 "data/maps/AmberockTown/scripts.pory"
	setmetatile 23 + 30, 13, 0x170, FALSE
# 28 "data/maps/AmberockTown/scripts.pory"
	setmetatile 23 + 30, 14, 0x170, FALSE
# 29 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 14, 0x170, FALSE
# 30 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 14, 0x170, FALSE
# 31 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 15, 0x170, FALSE
# 32 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 15, 0x170, FALSE
# 33 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 15, 0x170, FALSE
# 34 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 16, 0x170, FALSE
# 35 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 16, 0x170, FALSE
# 36 "data/maps/AmberockTown/scripts.pory"
	setmetatile 28 + 30, 16, 0x170, FALSE
	return


Amberock_SurfScientist::
# 41 "data/maps/AmberockTown/scripts.pory"
	lock
# 42 "data/maps/AmberockTown/scripts.pory"
	faceplayer
# 43 "data/maps/AmberockTown/scripts.pory"
	msgbox HereIsSurfHM
# 44 "data/maps/AmberockTown/scripts.pory"
	giveitem ITEM_HM03
# 45 "data/maps/AmberockTown/scripts.pory"
	msgbox GoGetBackPapers
# 46 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 47 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Amberock_SurfScientist_2
# 55 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeavesStraight
Amberock_SurfScientist_1:
# 57 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/AmberockTown/scripts.pory"
	removeobject 1
# 59 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 60 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_SurfScientist_2:
# 48 "data/maps/AmberockTown/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 49 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 64
	goto_if_ne Amberock_SurfScientist_7
Amberock_SurfScientist_5:
# 52 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeavesDetour
	goto Amberock_SurfScientist_1

Amberock_SurfScientist_6:
# 50 "data/maps/AmberockTown/scripts.pory"
	safefollow
	goto Amberock_SurfScientist_5

Amberock_SurfScientist_7:
# 49 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_ne Amberock_SurfScientist_6
	goto Amberock_SurfScientist_5


# 87 "data/maps/AmberockTown/scripts.pory"
ScientistLeavesDetour:
# 88 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 89 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 89 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 89 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 89 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 90 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 91 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 91 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 92 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 92 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 92 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 92 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 92 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 93 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 93 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

# 95 "data/maps/AmberockTown/scripts.pory"
ScientistLeavesStraight:
# 96 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 96 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 96 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 96 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 96 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 97 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 97 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 97 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 97 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 97 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 98 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 98 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

Amberock_Papers::
# 102 "data/maps/AmberockTown/scripts.pory"
	lock
# 103 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 104 "data/maps/AmberockTown/scripts.pory"
	msgbox PapersOnGround
# 105 "data/maps/AmberockTown/scripts.pory"
	removeobject 3
# 106 "data/maps/AmberockTown/scripts.pory"
	setmetatile 57, 10, 0x128, FALSE
# 107 "data/maps/AmberockTown/scripts.pory"
	special DrawWholeMapView
# 108 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 109 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_2
# 110 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 111 "data/maps/AmberockTown/scripts.pory"
	addobject 1
# 112 "data/maps/AmberockTown/scripts.pory"
	addobject 2
# 113 "data/maps/AmberockTown/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 114 "data/maps/AmberockTown/scripts.pory"
	checktrainerflag TRAINER_R15_TR18_BERRYROCKET
	goto_if 0, Amberock_Papers_2
Amberock_Papers_1:
# 117 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 118 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 119 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_6
# 124 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_7
# 130 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_8
Amberock_Papers_4:
# 137 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/AmberockTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 139 "data/maps/AmberockTown/scripts.pory"
	delay 24
# 140 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_TEMP_A, Amberock_Papers_10
# 144 "data/maps/AmberockTown/scripts.pory"
	msgbox OurPapers
Amberock_Papers_9:
# 146 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 147 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 148 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_30
# 150 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_31
# 152 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_32
Amberock_Papers_28:
# 155 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 156 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 157 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 158 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_35
# 160 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_36
# 163 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_37
Amberock_Papers_33:
# 167 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 169 "data/maps/AmberockTown/scripts.pory"
	checkplayergender
# 170 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_Papers_39
# 174 "data/maps/AmberockTown/scripts.pory"
	bufferstring STR_VAR_1, Amberock_Papers_Text_1
Amberock_Papers_38:
# 176 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_ACEROLA_TALKED_TO, Amberock_Papers_43
# 180 "data/maps/AmberockTown/scripts.pory"
	msgbox AcerolaVisitGymAlternative
Amberock_Papers_42:
# 182 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 183 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 184 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_48
# 186 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_49
# 188 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_50
Amberock_Papers_46:
# 191 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 192 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
# 193 "data/maps/AmberockTown/scripts.pory"
	removeobject 1
# 194 "data/maps/AmberockTown/scripts.pory"
	removeobject 2
# 195 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 196 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_Papers_2:
# 115 "data/maps/AmberockTown/scripts.pory"
	call AmberockAlternativeCutscene
	goto Amberock_Papers_1

Amberock_Papers_6:
# 120 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq Amberock_Papers_15
Amberock_Papers_13:
# 123 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, MoveScientist2
	goto Amberock_Papers_4

Amberock_Papers_7:
# 125 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Amberock_Papers_20
Amberock_Papers_18:
# 128 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 31, 28, 4
# 129 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, Walk5Down
	goto Amberock_Papers_4

Amberock_Papers_8:
# 131 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 56
	goto_if_eq Amberock_Papers_25
Amberock_Papers_23:
# 134 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 31, 28, 4
# 135 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, MoveScientist1
	goto Amberock_Papers_4

Amberock_Papers_10:
# 141 "data/maps/AmberockTown/scripts.pory"
	msgbox OurPapersAlternative
	goto Amberock_Papers_9

Amberock_Papers_14:
# 121 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_13

Amberock_Papers_15:
# 120 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq Amberock_Papers_14
	goto Amberock_Papers_13

Amberock_Papers_19:
# 126 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_18

Amberock_Papers_20:
# 125 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_19
	goto Amberock_Papers_18

Amberock_Papers_24:
# 132 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_23

Amberock_Papers_25:
# 131 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_24
	goto Amberock_Papers_23

Amberock_Papers_30:
# 149 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeave2
	goto Amberock_Papers_28

Amberock_Papers_31:
# 151 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, Walk5Up
	goto Amberock_Papers_28

Amberock_Papers_32:
# 153 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeave1
	goto Amberock_Papers_28

Amberock_Papers_35:
# 159 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, MoveScientist2
	goto Amberock_Papers_33

Amberock_Papers_36:
# 161 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 32, 28, 4
# 162 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, Walk5Down
	goto Amberock_Papers_33

Amberock_Papers_37:
# 164 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 32, 28, 4
# 165 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, MoveScientist1
	goto Amberock_Papers_33

Amberock_Papers_39:
# 171 "data/maps/AmberockTown/scripts.pory"
	bufferstring STR_VAR_1, Amberock_Papers_Text_0
	goto Amberock_Papers_38

Amberock_Papers_43:
# 177 "data/maps/AmberockTown/scripts.pory"
	msgbox AcerolaVisitGym
	goto Amberock_Papers_42

Amberock_Papers_48:
# 185 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, ScientistLeave2
	goto Amberock_Papers_46

Amberock_Papers_49:
# 187 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, Walk5Up
	goto Amberock_Papers_46

Amberock_Papers_50:
# 189 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, ScientistLeave1
	goto Amberock_Papers_46


# 271 "data/maps/AmberockTown/scripts.pory"
MoveScientist1:
# 272 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 272 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 273 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 273 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 274 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 274 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 274 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 275 "data/maps/AmberockTown/scripts.pory"
	step_end

# 277 "data/maps/AmberockTown/scripts.pory"
MoveScientist2:
# 278 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 278 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 279 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 280 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 280 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 280 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 281 "data/maps/AmberockTown/scripts.pory"
	step_end

# 283 "data/maps/AmberockTown/scripts.pory"
ScientistLeave2:
# 284 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 284 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 285 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 286 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 286 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 286 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 287 "data/maps/AmberockTown/scripts.pory"
	step_end

# 289 "data/maps/AmberockTown/scripts.pory"
ScientistLeave1:
# 290 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 290 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 291 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 291 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 292 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 292 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 292 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 293 "data/maps/AmberockTown/scripts.pory"
	step_end

AmberockAlternativeCutscene::
# 297 "data/maps/AmberockTown/scripts.pory"
	delay 48
# 298 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 299 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, AmberockAlternativeCutscene_3
# 300 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, AmberockAlternativeCutscene_3
AmberockAlternativeCutscene_1:
# 303 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/AmberockTown/scripts.pory"
	special SpawnCameraObject
# 305 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_5
# 309 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Down
AmberockAlternativeCutscene_4:
# 311 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 313 "data/maps/AmberockTown/scripts.pory"
	msgbox RocketYoureTooLate
# 314 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 315 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_A
# 316 "data/maps/AmberockTown/scripts.pory"
	applymovement 4, Walk4Down
# 317 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 318 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_9
# 322 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Up
AmberockAlternativeCutscene_8:
# 324 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 325 "data/maps/AmberockTown/scripts.pory"
	special RemoveCameraObject
	return

AmberockAlternativeCutscene_3:
# 301 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto AmberockAlternativeCutscene_1

AmberockAlternativeCutscene_5:
# 306 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Down
	goto AmberockAlternativeCutscene_4

AmberockAlternativeCutscene_9:
# 319 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Up
	goto AmberockAlternativeCutscene_8


Amberock_Papers_Text_0:
# 171 "data/maps/AmberockTown/scripts.pory"
	.string "mister$"

Amberock_Papers_Text_1:
# 174 "data/maps/AmberockTown/scripts.pory"
	.string "miss$"

HereIsSurfHM::
# 62 "data/maps/AmberockTown/scripts.pory"
	.string "Ah, perfect timing!\p"
	.string "I was able to get my hands on the\n"
	.string "perfect Hidden Machine for this job.\p"
	.string "Here, you should take it.$"

GoGetBackPapers::
# 68 "data/maps/AmberockTown/scripts.pory"
	.string "As much as I would like to help you on\n"
	.string "this, I'm just a scientist after all.\p"
	.string "I mean, I don't even have my own\n"
	.string "Pokémon!\p"
	.string "I know this is a lot to ask from\n"
	.string "someone you barely even know,\l"
	.string "but please, recover our research\l"
	.string "material from Team Rocket!\p"
	.string "I had a talk with my colleagues and we\n"
	.string "have unanimously decided that if you\l"
	.string "do this, we'll reward you with\l"
	.string "something special.\p"
	.string "With that said, I need to get back to\n"
	.string "my research.\p"
	.string "When you're done, come meet me back at\n"
	.string "the research center on Route 14.$"

PapersOnGround::
# 198 "data/maps/AmberockTown/scripts.pory"
	.string "There seems to be some papers on\n"
	.string "the ground here.\p"
	.string "{PLAYER} picked up the papers.$"

OurPapers::
# 203 "data/maps/AmberockTown/scripts.pory"
	.string "Can I see those papers?\p"
	.string "{PLAYER} handed the papers to the\n"
	.string "scientist.\p"
	.string "… … … …\p"
	.string "Yes, these are definitely some of\n"
	.string "the papers that were stolen.\p"
	.string "The culprit must have fled to Amberock\n"
	.string "Town and cut the bridge behind him,\l"
	.string "giving him ample time to hide.\p"
	.string "That scoundrel!\p"
	.string "It would take too long to wait for\n"
	.string "the bridge to be repaired.\p"
	.string "You should prepare your team for\n"
	.string "what lies ahead.\p"
	.string "In the meantime, I'll try to get my\n"
	.string "hands on a Hidden Machine that can\l"
	.string "teach your Pokémon how to carry\l"
	.string "people across water.\p"
	.string "I'll meet you back here once we're\n"
	.string "both ready.$"

OurPapersAlternative::
# 225 "data/maps/AmberockTown/scripts.pory"
	.string "Can I see those papers?\p"
	.string "{PLAYER} handed the papers to the\n"
	.string "scientist.\p"
	.string "… … … …\p"
	.string "Yes, these are definitely some of\n"
	.string "the papers that were stolen.\p"
	.string "You say you saw the culprit flee to\n"
	.string "Amberock Town and cut the bridge\l"
	.string "behind him?\p"
	.string "That scoundrel!\p"
	.string "No matter what we do now, this\n"
	.string "has given him ample time to hide.\p"
	.string "It would take too long to wait for\n"
	.string "the bridge to be repaired.\p"
	.string "You should prepare your team for\n"
	.string "what lies ahead.\p"
	.string "In the meantime, I'll try to get my\n"
	.string "hands on a Hidden Machine that can\l"
	.string "teach your Pokémon how to carry\l"
	.string "people across water.\p"
	.string "I'll meet you back here once we're\n"
	.string "both ready.$"

AcerolaVisitGym::
# 249 "data/maps/AmberockTown/scripts.pory"
	.string "Acerola: I couldn't help overhearing\n"
	.string "parts of your conversation.\p"
	.string "If you're looking to strengthen your\n"
	.string "Pokémon, you should totally check the\l"
	.string "Pokémon Gym over in Drisledge Town!\p"
	.string "I hear it's one of the best gyms in\n"
	.string "all of Sinko!\p"
	.string "Anyway, I need to head back home now.\n"
	.string "See you again, {STR_VAR_1}!$"

AcerolaVisitGymAlternative::
# 260 "data/maps/AmberockTown/scripts.pory"
	.string "I couldn't help overhearing\n"
	.string "parts of your conversation.\p"
	.string "If you're looking to strengthen your\n"
	.string "Pokémon, you should totally check the\l"
	.string "Pokémon Gym over in Drisledge Town!\p"
	.string "I hear it's one of the best gyms in\n"
	.string "all of Sinko!\p"
	.string "Anyway, I need to head back home now.\n"
	.string "See you again, {STR_VAR_1}!$"

RocketYoureTooLate::
# 329 "data/maps/AmberockTown/scripts.pory"
	.string "Rocket Grunt: I see our little\n"
	.string "diversion wasn't enough to fool you.\p"
	.string "But, it matters not.\n"
	.string "You're late anyway!\p"
	.string "Good luck ever catching me!$"
