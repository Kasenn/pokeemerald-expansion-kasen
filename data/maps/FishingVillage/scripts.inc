FishingVillage_MapScripts::
# 2 "data/maps/FishingVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FishingVillage_DespawnBrother
	.byte 0


FishingVillage_DespawnBrother::
# 6 "data/maps/FishingVillage/scripts.pory"
	setflag FLAG_VISITED_FISHING_VILLAGE
# 7 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER5_ROWLET
	goto_if 1, FishingVillage_DespawnBrother_1
# 7 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER5_TORCHIC
	goto_if 1, FishingVillage_DespawnBrother_1
# 7 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER5_PIPLUP
	goto_if 1, FishingVillage_DespawnBrother_1
	return

FishingVillage_DespawnBrother_1:
# 8 "data/maps/FishingVillage/scripts.pory"
	setflag FLAG_TEMP_1
# 9 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


FishVillage_Brother1::
# 14 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_2, 1
# 15 "data/maps/FishingVillage/scripts.pory"
	goto FishVillage_Brother
	return


FishVillage_Brother2::
# 18 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_2, 2
# 19 "data/maps/FishingVillage/scripts.pory"
	goto FishVillage_Brother
	return


FishVillage_Brother3::
# 22 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_2, 3
# 23 "data/maps/FishingVillage/scripts.pory"
	goto FishVillage_Brother
	return


FishVillage_Brother::
# 27 "data/maps/FishingVillage/scripts.pory"
	lock
# 28 "data/maps/FishingVillage/scripts.pory"
	turnobject 1, DIR_SOUTH
# 29 "data/maps/FishingVillage/scripts.pory"
	playse SE_PIN
# 30 "data/maps/FishingVillage/scripts.pory"
	safefollow
# 31 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, ExclamationMark
# 32 "data/maps/FishingVillage/scripts.pory"
	waitmovement 0
# 33 "data/maps/FishingVillage/scripts.pory"
	delay 48
# 34 "data/maps/FishingVillage/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 35 "data/maps/FishingVillage/scripts.pory"
	switch VAR_TEMP_2
# 36 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_3
# 38 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_4
# 40 "data/maps/FishingVillage/scripts.pory"
	case 3, FishVillage_Brother_5
FishVillage_Brother_1:
# 43 "data/maps/FishingVillage/scripts.pory"
	waitmovement 0
# 44 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_KAOLISLE_BROTHER_INTRO, FishVillage_Brother_7
FishVillage_Brother_6:
# 47 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER2_ROWLET
	goto_if 1, FishVillage_Brother_10
# 48 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER3_ROWLET
	goto_if 1, FishVillage_Brother_10
# 49 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER4_ROWLET
	goto_if 1, FishVillage_Brother_10
# 50 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER2_TORCHIC
	goto_if 1, FishVillage_Brother_10
# 51 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER3_TORCHIC
	goto_if 1, FishVillage_Brother_10
# 52 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER4_TORCHIC
	goto_if 1, FishVillage_Brother_10
# 53 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER2_PIPLUP
	goto_if 1, FishVillage_Brother_10
# 54 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER3_PIPLUP
	goto_if 1, FishVillage_Brother_10
# 55 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER4_PIPLUP
	goto_if 1, FishVillage_Brother_10
FishVillage_Brother_9:
# 58 "data/maps/FishingVillage/scripts.pory"
	switch VAR_TEMP_3
# 59 "data/maps/FishingVillage/scripts.pory"
	case 0, FishVillage_Brother_30
# 61 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_31
# 63 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_32
# 65 "data/maps/FishingVillage/scripts.pory"
	case 3, FishVillage_Brother_33
FishVillage_Brother_28:
# 68 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER2_ROWLET
	goto_if 1, FishVillage_Brother_35
# 69 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER3_ROWLET
	goto_if 1, FishVillage_Brother_35
# 70 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER4_ROWLET
	goto_if 1, FishVillage_Brother_35
# 71 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER2_TORCHIC
	goto_if 1, FishVillage_Brother_35
# 72 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER3_TORCHIC
	goto_if 1, FishVillage_Brother_35
# 73 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER4_TORCHIC
	goto_if 1, FishVillage_Brother_35
# 74 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER2_PIPLUP
	goto_if 1, FishVillage_Brother_35
# 75 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER3_PIPLUP
	goto_if 1, FishVillage_Brother_35
# 76 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER4_PIPLUP
	goto_if 1, FishVillage_Brother_35
# 87 "data/maps/FishingVillage/scripts.pory"
	checkplayergender
# 88 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FishVillage_Brother_62
# 99 "data/maps/FishingVillage/scripts.pory"
	switch VAR_STARTER_MON
# 100 "data/maps/FishingVillage/scripts.pory"
	case 0, FishVillage_Brother_75
# 102 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_76
# 104 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_77
FishVillage_Brother_34:
# 109 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, FishVillage_Brother_55
# 113 "data/maps/FishingVillage/scripts.pory"
	msgbox FishingVillageBrotherLeaves
FishVillage_Brother_54:
# 115 "data/maps/FishingVillage/scripts.pory"
	closemessage
# 116 "data/maps/FishingVillage/scripts.pory"
	safefollow
# 117 "data/maps/FishingVillage/scripts.pory"
	switch VAR_TEMP_2
# 118 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_67
# 121 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_68
# 124 "data/maps/FishingVillage/scripts.pory"
	case 3, FishVillage_Brother_69
FishVillage_Brother_65:
# 128 "data/maps/FishingVillage/scripts.pory"
	waitmovement 1
# 129 "data/maps/FishingVillage/scripts.pory"
	removeobject 1
# 130 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 131 "data/maps/FishingVillage/scripts.pory"
	delay 45
# 132 "data/maps/FishingVillage/scripts.pory"
	savebgm MUS_DUMMY
# 133 "data/maps/FishingVillage/scripts.pory"
	fadedefaultbgm
# 134 "data/maps/FishingVillage/scripts.pory"
	release
	return

FishVillage_Brother_3:
# 37 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, MoveFishBrother1
	goto FishVillage_Brother_1

FishVillage_Brother_4:
# 39 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, Walk2Down
	goto FishVillage_Brother_1

FishVillage_Brother_5:
# 41 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, MoveFishBrother3
	goto FishVillage_Brother_1

FishVillage_Brother_7:
# 45 "data/maps/FishingVillage/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto FishVillage_Brother_6

FishVillage_Brother_10:
# 56 "data/maps/FishingVillage/scripts.pory"
	addvar VAR_TEMP_3, 2
	goto FishVillage_Brother_9

FishVillage_Brother_30:
# 60 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInPearlwood
	goto FishVillage_Brother_28

FishVillage_Brother_31:
# 62 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInKaolisleNoFight
	goto FishVillage_Brother_28

FishVillage_Brother_32:
# 64 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInRoute28
	goto FishVillage_Brother_28

FishVillage_Brother_33:
# 66 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInKaolisleHaveFought
	goto FishVillage_Brother_28

FishVillage_Brother_35:
# 77 "data/maps/FishingVillage/scripts.pory"
	switch VAR_STARTER_MON
# 78 "data/maps/FishingVillage/scripts.pory"
	case 0, FishVillage_Brother_59
# 80 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_60
# 82 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_61
	goto FishVillage_Brother_34

FishVillage_Brother_55:
# 110 "data/maps/FishingVillage/scripts.pory"
	msgbox FishingVillageBrotherLeavesAfterMegaEvo
	goto FishVillage_Brother_54

FishVillage_Brother_59:
# 79 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_ROWLET, FishingVillage_BrotherLost
	goto FishVillage_Brother_34

FishVillage_Brother_60:
# 81 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_TORCHIC, FishingVillage_BrotherLost
	goto FishVillage_Brother_34

FishVillage_Brother_61:
# 83 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_PIPLUP, FishingVillage_BrotherLost
	goto FishVillage_Brother_34

FishVillage_Brother_62:
# 89 "data/maps/FishingVillage/scripts.pory"
	switch VAR_STARTER_MON
# 90 "data/maps/FishingVillage/scripts.pory"
	case 0, FishVillage_Brother_71
# 92 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_72
# 94 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_73
	goto FishVillage_Brother_34

FishVillage_Brother_67:
# 119 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, LeaveFishBrotherRight
# 120 "data/maps/FishingVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnRight
	goto FishVillage_Brother_65

FishVillage_Brother_68:
# 122 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, LeaveFishBrotherLeft
# 123 "data/maps/FishingVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnLeft
	goto FishVillage_Brother_65

FishVillage_Brother_69:
# 125 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, LeaveFishBrotherLeft
# 126 "data/maps/FishingVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnLeft
	goto FishVillage_Brother_65

FishVillage_Brother_71:
# 91 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_ROWLET, FishingVillage_BrotherLostFirstTimeAgainstMale
	goto FishVillage_Brother_34

FishVillage_Brother_72:
# 93 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_TORCHIC, FishingVillage_BrotherLostFirstTimeAgainstMale
	goto FishVillage_Brother_34

FishVillage_Brother_73:
# 95 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_PIPLUP, FishingVillage_BrotherLostFirstTimeAgainstMale
	goto FishVillage_Brother_34

FishVillage_Brother_75:
# 101 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_ROWLET, FishingVillage_BrotherLostFirstTime
	goto FishVillage_Brother_34

FishVillage_Brother_76:
# 103 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_TORCHIC, FishingVillage_BrotherLostFirstTime
	goto FishVillage_Brother_34

FishVillage_Brother_77:
# 105 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER5_PIPLUP, FishingVillage_BrotherLostFirstTime
	goto FishVillage_Brother_34


# 238 "data/maps/FishingVillage/scripts.pory"
FishPlayerTurnRight:
# 239 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 240 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_right
# 241 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 241 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 242 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_down
	step_end

# 244 "data/maps/FishingVillage/scripts.pory"
FishPlayerTurnLeft:
# 245 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 246 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_left
# 247 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 247 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 248 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_down
	step_end

# 250 "data/maps/FishingVillage/scripts.pory"
LeaveFishBrotherRight:
# 251 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 252 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 252 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 252 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 252 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 252 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 252 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 252 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

# 254 "data/maps/FishingVillage/scripts.pory"
LeaveFishBrotherLeft:
# 255 "data/maps/FishingVillage/scripts.pory"
	walk_left
# 256 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 256 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 256 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 256 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 256 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 256 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 256 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

FishVillage_Sign1::
# 260 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Sign1_Text, MSGBOX_SIGN
	return


FishVillage_Sign2::
# 263 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Sign2_Text, MSGBOX_SIGN
	return


FishVillage_Sign3::
# 266 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Sign3_Text, MSGBOX_SIGN
	return


FishVillage_Woman2::
# 269 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Woman2_Text, MSGBOX_NPC
	return


FishVillage_Fisherman1::
# 272 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_RECEIVED_GYARADOSITE, FishVillage_Fisherman1_2
# 275 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_TEMP_3, FishVillage_Fisherman1_3
# 279 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Fisherman1_Text, MSGBOX_NPC
FishVillage_Fisherman1_1:
# 281 "data/maps/FishingVillage/scripts.pory"
	turnobject 3, DIR_NORTH
	return

FishVillage_Fisherman1_2:
# 273 "data/maps/FishingVillage/scripts.pory"
	msgbox StillCantBelieveIt, MSGBOX_NPC
	goto FishVillage_Fisherman1_1

FishVillage_Fisherman1_3:
# 276 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Fisherman1_Text2, MSGBOX_NPC
	goto FishVillage_Fisherman1_1


FishVillage_Fisherman2::
# 284 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Fisherman2_Text, MSGBOX_NPC
# 285 "data/maps/FishingVillage/scripts.pory"
	turnobject 5, DIR_NORTH
	return


FishVillage_Man1::
# 288 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_TEMP_3, FishVillage_Man1_2
# 307 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Man1_Text, MSGBOX_NPC
# 308 "data/maps/FishingVillage/scripts.pory"
	turnobject 6, DIR_NORTH
	return

FishVillage_Man1_2:
# 289 "data/maps/FishingVillage/scripts.pory"
	lock
# 290 "data/maps/FishingVillage/scripts.pory"
	faceplayer
# 291 "data/maps/FishingVillage/scripts.pory"
	msgbox CaughtGyarados
# 292 "data/maps/FishingVillage/scripts.pory"
	closemessage
# 293 "data/maps/FishingVillage/scripts.pory"
	safefollow
# 294 "data/maps/FishingVillage/scripts.pory"
	switch VAR_FACING
# 295 "data/maps/FishingVillage/scripts.pory"
	case DIR_EAST, FishVillage_Man1_6
# 296 "data/maps/FishingVillage/scripts.pory"
	case DIR_NORTH, FishVillage_Man1_6
# 298 "data/maps/FishingVillage/scripts.pory"
	case DIR_WEST, FishVillage_Man1_7
FishVillage_Man1_4:
# 301 "data/maps/FishingVillage/scripts.pory"
	waitmovement 0
# 302 "data/maps/FishingVillage/scripts.pory"
	setflag FLAG_FISHINGVILLAGE_GYARADOS_REWARD
# 303 "data/maps/FishingVillage/scripts.pory"
	removeobject 6
# 304 "data/maps/FishingVillage/scripts.pory"
	release
	end

FishVillage_Man1_6:
# 297 "data/maps/FishingVillage/scripts.pory"
	applymovement 6, MoveElderDirNorth
	goto FishVillage_Man1_4

FishVillage_Man1_7:
# 299 "data/maps/FishingVillage/scripts.pory"
	applymovement 6, MoveElderDirWest
	goto FishVillage_Man1_4


FishVillage_Woman5::
# 311 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Woman5_Text, MSGBOX_NPC
# 312 "data/maps/FishingVillage/scripts.pory"
	turnobject 4, DIR_NORTH
	return


# 328 "data/maps/FishingVillage/scripts.pory"
MoveElderDirNorth:
# 329 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 329 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 330 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/FishingVillage/scripts.pory"
MoveElderDirWest:
# 333 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 334 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 334 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 335 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 335 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 335 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 335 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 335 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 335 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

FishingVillage_OldWoman::
# 389 "data/maps/FishingVillage/scripts.pory"
	msgbox FishingVillage_OldWoman_Text, MSGBOX_NPC
	return


# 400 "data/maps/FishingVillage/scripts.pory"
ExclamationMark:
# 401 "data/maps/FishingVillage/scripts.pory"
	emote_exclamation_mark
# 402 "data/maps/FishingVillage/scripts.pory"
	step_end

# 404 "data/maps/FishingVillage/scripts.pory"
MoveFishBrother1:
# 405 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 406 "data/maps/FishingVillage/scripts.pory"
	walk_left
# 407 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 408 "data/maps/FishingVillage/scripts.pory"
	step_end

# 410 "data/maps/FishingVillage/scripts.pory"
MoveFishBrother3:
# 411 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 412 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 413 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 414 "data/maps/FishingVillage/scripts.pory"
	step_end

FishingVillage_FishingGuru::
# 418 "data/maps/FishingVillage/scripts.pory"
	lock
# 419 "data/maps/FishingVillage/scripts.pory"
	faceplayer
# 420 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 421 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FishingVillage_FishingGuru_2
# 425 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_TITANIUM_LINE
# 426 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FishingVillage_FishingGuru_5
FishingVillage_FishingGuru_4:
# 429 "data/maps/FishingVillage/scripts.pory"
	msgbox ImFishingGuru, MSGBOX_YESNO
# 430 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_8
# 434 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_OLD_ROD
# 435 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_11
FishingVillage_FishingGuru_10:
# 442 "data/maps/FishingVillage/scripts.pory"
	msgbox FisherOfSomeRenown
# 443 "data/maps/FishingVillage/scripts.pory"
	giveitem ITEM_TITANIUM_LINE
# 444 "data/maps/FishingVillage/scripts.pory"
	msgbox FishInLava
# 445 "data/maps/FishingVillage/scripts.pory"
	release
	return

FishingVillage_FishingGuru_2:
# 422 "data/maps/FishingVillage/scripts.pory"
	msgbox EnjoySuperRod, MSGBOX_NPC
	end

FishingVillage_FishingGuru_5:
# 427 "data/maps/FishingVillage/scripts.pory"
	goto SuperRodQuestStarted
	goto FishingVillage_FishingGuru_4

FishingVillage_FishingGuru_8:
# 431 "data/maps/FishingVillage/scripts.pory"
	msgbox GuruHonest, MSGBOX_NPC
	end

FishingVillage_FishingGuru_11:
# 436 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 437 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_13
	goto FishingVillage_FishingGuru_10

FishingVillage_FishingGuru_13:
# 438 "data/maps/FishingVillage/scripts.pory"
	msgbox NoFishingRod, MSGBOX_NPC
	end


SuperRodQuestStarted::
# 449 "data/maps/FishingVillage/scripts.pory"
	checkpartymon SPECIES_SLUGMA, 0
# 450 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SuperRodQuestStarted_2
SuperRodQuestStarted_1:
# 453 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_TEMP_1, SuperRodQuestStarted_4
# 457 "data/maps/FishingVillage/scripts.pory"
	msgbox FishInLava, MSGBOX_NPC
	return

SuperRodQuestStarted_2:
# 451 "data/maps/FishingVillage/scripts.pory"
	goto SuperRodReward
	goto SuperRodQuestStarted_1

SuperRodQuestStarted_4:
# 454 "data/maps/FishingVillage/scripts.pory"
	msgbox DontHaveSlugma, MSGBOX_NPC
	return


SuperRodReward::
# 518 "data/maps/FishingVillage/scripts.pory"
	msgbox YouHaveSlugma
# 519 "data/maps/FishingVillage/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 520 "data/maps/FishingVillage/scripts.pory"
	msgbox EnjoySuperRod, MSGBOX_NPC
	return


FishingVillageBrotherLeaves::
# 136 "data/maps/FishingVillage/scripts.pory"
	.string "{BROTHER}: Okay, I must admit,\n"
	.string "that was pretty good.\p"
	.string "Looks like I have to take it up\n"
	.string "a notch the next time we meet.\p"
	.string "In fact, I recently heard about a way\n"
	.string "to elevate your Pokémon to a whole new\l"
	.string "level.\p"
	.string "I hope you keep up your training,\n"
	.string "because the next time we meet, it's\l"
	.string "going to be a whole another story.\p"
	.string "Later!$"

FishingVillageBrotherLeavesAfterMegaEvo::
# 149 "data/maps/FishingVillage/scripts.pory"
	.string "{BROTHER}: No way did your Pokémon\n"
	.string "just Mega Evolve!\p"
	.string "Hmph, looks like I'm the one\n"
	.string "lagging behind here.\p"
	.string "Unfortunately for you, I too heard\n"
	.string "about Mega Evolution recently.\p"
	.string "I hope you keep training your Pokémon,\n"
	.string "because if you don't, there's no way\l"
	.string "you will have any chance against me\l"
	.string "after I get my Mega Ring!\p"
	.string "Later!$"

FishingVillage_BrotherLost::
# 162 "data/maps/FishingVillage/scripts.pory"
	.string "I can't believe I lost yet again!\n"
	.string "What a terrible role model I am…$"

FishingVillage_BrotherLostFirstTimeAgainstMale::
# 166 "data/maps/FishingVillage/scripts.pory"
	.string "I can't believe I actually lost\n"
	.string "against my little brother.\l"
	.string "What a terrible role model I am…$"

FishingVillage_BrotherLostFirstTime::
# 171 "data/maps/FishingVillage/scripts.pory"
	.string "I can't believe I actually lost\n"
	.string "against my little sister.\l"
	.string "What a terrible role model I am…$"

LastMetInPearlwood::
# 176 "data/maps/FishingVillage/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we spoke was in I believe…\p"
	.string "Wait…\p"
	.string "Have we really not met once since we\n"
	.string "left Pearlwood? Man, that's crazy!\p"
	.string "Man, now I'm really curious to see\n"
	.string "how you've grown!\p"
	.string "Let's see if you've been training\n"
	.string "your Pokémon properly!$"

LastMetInKaolisleNoFight::
# 189 "data/maps/FishingVillage/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we spoke was in I believe…\p"
	.string "Oh yeah!\n"
	.string "We met in Kaolisle City, right?\p"
	.string "Now that I think about it, we only met\n"
	.string "there briefly, so I never got to see\l"
	.string "how much you've grown as a trainer.\p"
	.string "In that case, what better time to\n"
	.string "do it than now!\p"
	.string "Let's see what kind of crazy Pokémon\n"
	.string "you have caught!$"

LastMetInRoute28::
# 204 "data/maps/FishingVillage/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we met was in I believe…\p"
	.string "Oh yeah!\p"
	.string "We met at Route 28, right?\n"
	.string "The one north of Aldeleaf City!\p"
	.string "Man, it sure has been a while.\p"
	.string "You know, I remember being really\n"
	.string "impressed with your team back then.\p"
	.string "How about you let me have a look at\n"
	.string "your Pokémon once more?\p"
	.string "I hope you've kept up with your\n"
	.string "training regimen because I won't be\l"
	.string "holding back!$"

LastMetInKaolisleHaveFought::
# 221 "data/maps/FishingVillage/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we met was in I believe…\p"
	.string "Oh yeah!\n"
	.string "We met in Kaolisle City, right?\p"
	.string "I forgot to mention it back then,\n"
	.string "but I was actually quite impressed\l"
	.string "by your team back when we battled\l"
	.string "just north of Aldeleaf.\p"
	.string "I'd like to see if you've been keeping\n"
	.string "up with your training regimen.\p"
	.string "I hope you haven't been slacking off,\n"
	.string "because I won't be going easy on you!$"

CaughtGyarados::
# 315 "data/maps/FishingVillage/scripts.pory"
	.string "Oh, I saw you reeling in that\n"
	.string "Gyarados.\p"
	.string "Seeing such an aspiring angler has\n"
	.string "unlocked a memory in my brain from\l"
	.string "long time ago.\p"
	.string "There's something I need to fetch\n"
	.string "from my house.\p"
	.string "I want you to come meet me there when\n"
	.string "you have the time.\p"
	.string "I live in the house on the western\n"
	.string "side of the village.$"

FishVillage_Sign1_Text::
# 338 "data/maps/FishingVillage/scripts.pory"
	.string "Fishing Guru's House$"

FishVillage_Sign2_Text::
# 341 "data/maps/FishingVillage/scripts.pory"
	.string "Rest House$"

FishVillage_Sign3_Text::
# 344 "data/maps/FishingVillage/scripts.pory"
	.string "{UP_ARROW} Fishing Village\n"
	.string "{RIGHT_ARROW} Route 23\l"
	.string "{DOWN_ARROW} Route 15$"

FishVillage_Woman2_Text::
# 349 "data/maps/FishingVillage/scripts.pory"
	.string "The Fishing Village is a small\n"
	.string "community that attracts people from\l"
	.string "around the world.\p"
	.string "You wouldn't believe the things some\n"
	.string "people are able to fish up!$"

FishVillage_Fisherman1_Text::
# 356 "data/maps/FishingVillage/scripts.pory"
	.string "I've heard some people say they've\n"
	.string "managed to fish up even Gyarados here!\p"
	.string "If you ask me, I say all those\n"
	.string "people are liars.$"

FishVillage_Fisherman1_Text2::
# 362 "data/maps/FishingVillage/scripts.pory"
	.string "No way did you fish up a Gyarados!\p"
	.string "You should let the eldest in the\n"
	.string "village know.\p"
	.string "He's right over there, on the\n"
	.string "middle pier.$"

StillCantBelieveIt::
# 369 "data/maps/FishingVillage/scripts.pory"
	.string "Had I not seen you reel that Gyarados\n"
	.string "with my own eyes, I would probably\l"
	.string "still believe it all to be a big lie.$"

FishVillage_Fisherman2_Text::
# 374 "data/maps/FishingVillage/scripts.pory"
	.string "Some think fishing is boring.\n"
	.string "I could not disagree more.$"

FishVillage_Man1_Text::
# 378 "data/maps/FishingVillage/scripts.pory"
	.string "I believe there is something in these\n"
	.string "waters, something no man has witnessed\l"
	.string "in ages.\p"
	.string "I plan to find what that is.$"

FishVillage_Woman5_Text::
# 384 "data/maps/FishingVillage/scripts.pory"
	.string "Can't a girl fish in peace?$"

FishingVillage_OldWoman_Text::
# 391 "data/maps/FishingVillage/scripts.pory"
	.string "There's not a whole lot going around\n"
	.string "in these parts of the region.\p"
	.string "There's no boat connection to the\n"
	.string "north and from what I've heard,\l"
	.string "Drisledge Town to the east is\l"
	.string "practically a ghost town.$"

ImFishingGuru::
# 461 "data/maps/FishingVillage/scripts.pory"
	.string "People call me the Fishing Guru.\p"
	.string "Let me guess, you are interested in\n"
	.string "one of my fishing rods?$"

GuruHonest::
# 466 "data/maps/FishingVillage/scripts.pory"
	.string "Understandable. Fishing isn't for\n"
	.string "everyone.$"

NoFishingRod::
# 470 "data/maps/FishingVillage/scripts.pory"
	.string "You don't even have a fishing rod\n"
	.string "of your own.\p"
	.string "Do you expect me to give out one of\n"
	.string "my superb rods to someone who shows\l"
	.string "zero interest towards fishing?\l"
	.string "Please leave.$"

FisherOfSomeRenown::
# 478 "data/maps/FishingVillage/scripts.pory"
	.string "I notice you are carrying a fishing\n"
	.string "rod of sorts.\l"
	.string "That's good.\p"
	.string "However, if you want one of my superb\n"
	.string "rods, you must first show your\l"
	.string "dedication to this art.$"

FishInLava::
# 486 "data/maps/FishingVillage/scripts.pory"
	.string "On the island to the north, one can\n"
	.string "occasionally find pools of lava.\p"
	.string "I know this might sound crazy,\n"
	.string "but there are Pokémon living in\l"
	.string "those pools!\p"
	.string "I want you to take that Titanium Line\n"
	.string "and use it to fish from one of those\l"
	.string "pools.\p"
	.string "Bring me back whatever you catch,\n"
	.string "and only then will I consider you\l"
	.string "a worthy angler.$"

DontHaveSlugma::
# 499 "data/maps/FishingVillage/scripts.pory"
	.string "Have you been to the north yet?\p"
	.string "I don't see any Pokémon with you that\n"
	.string "could be seen living in the lava pools.$"

YouHaveSlugma::
# 504 "data/maps/FishingVillage/scripts.pory"
	.string "Ah, that Slugma!\p"
	.string "Yes, you have done exactly as\n"
	.string "I asked!\p"
	.string "You are truly a worthwhile angler.\n"
	.string "Here, I want you to have this!$"

EnjoySuperRod::
# 511 "data/maps/FishingVillage/scripts.pory"
	.string "The world is your Cloyster.\p"
	.string "Go out there, and discover the secrets\n"
	.string "of the deep abyss!$"
