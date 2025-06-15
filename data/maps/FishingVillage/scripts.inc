FishingVillage_MapScripts::
# 2 "data/maps/FishingVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FishingVillage_DespawnBrother
	.byte 0


FishingVillage_DespawnBrother::
# 6 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_HOUR_OVERRIDE, 0
# 7 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_MINUTE_OVERRIDE, 0
# 8 "data/maps/FishingVillage/scripts.pory"
	setflag FLAG_VISITED_FISHING_VILLAGE
# 9 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto_if 1, FishingVillage_DespawnBrother_1
	return

FishingVillage_DespawnBrother_1:
# 10 "data/maps/FishingVillage/scripts.pory"
	setflag FLAG_TEMP_1
# 11 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


FishVillage_Brother1::
# 16 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_2, 1
# 17 "data/maps/FishingVillage/scripts.pory"
	goto FishVillage_Brother
	return


FishVillage_Brother2::
# 20 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_2, 2
# 21 "data/maps/FishingVillage/scripts.pory"
	goto FishVillage_Brother
	return


FishVillage_Brother3::
# 24 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_2, 3
# 25 "data/maps/FishingVillage/scripts.pory"
	goto FishVillage_Brother
	return


FishVillage_Brother::
# 29 "data/maps/FishingVillage/scripts.pory"
	lock
# 30 "data/maps/FishingVillage/scripts.pory"
	turnobject 1, DIR_SOUTH
# 31 "data/maps/FishingVillage/scripts.pory"
	playse SE_PIN
# 32 "data/maps/FishingVillage/scripts.pory"
	safefollow
# 33 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, ExclamationMark
# 34 "data/maps/FishingVillage/scripts.pory"
	waitmovement 0
# 35 "data/maps/FishingVillage/scripts.pory"
	delay 48
# 36 "data/maps/FishingVillage/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 37 "data/maps/FishingVillage/scripts.pory"
	switch VAR_TEMP_2
# 38 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_3
# 40 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_4
# 42 "data/maps/FishingVillage/scripts.pory"
	case 3, FishVillage_Brother_5
FishVillage_Brother_1:
# 45 "data/maps/FishingVillage/scripts.pory"
	waitmovement 0
# 46 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_KAOLISLE_BROTHER_INTRO, FishVillage_Brother_7
FishVillage_Brother_6:
# 49 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER_2_ROUTE28
	goto_if 1, FishVillage_Brother_10
# 50 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER_3_ROUTE28
	goto_if 1, FishVillage_Brother_10
# 51 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER_4_ROUTE28
	goto_if 1, FishVillage_Brother_10
FishVillage_Brother_9:
# 54 "data/maps/FishingVillage/scripts.pory"
	switch VAR_TEMP_3
# 55 "data/maps/FishingVillage/scripts.pory"
	case 0, FishVillage_Brother_18
# 57 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_19
# 59 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_20
# 61 "data/maps/FishingVillage/scripts.pory"
	case 3, FishVillage_Brother_21
FishVillage_Brother_16:
# 64 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER_2_ROUTE28
	goto_if 1, FishVillage_Brother_23
# 65 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER_3_ROUTE28
	goto_if 1, FishVillage_Brother_23
# 66 "data/maps/FishingVillage/scripts.pory"
	checktrainerflag TRAINER_BROTHER_4_ROUTE28
	goto_if 1, FishVillage_Brother_23
# 70 "data/maps/FishingVillage/scripts.pory"
	checkplayergender
# 71 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FishVillage_Brother_34
# 75 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_5_FISHINGVILLAGE, FishingVillage_BrotherLostFirstTime
FishVillage_Brother_22:
# 78 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, FishVillage_Brother_31
# 82 "data/maps/FishingVillage/scripts.pory"
	msgbox FishingVillageBrotherLeaves
FishVillage_Brother_30:
# 84 "data/maps/FishingVillage/scripts.pory"
	closemessage
# 85 "data/maps/FishingVillage/scripts.pory"
	safefollow
# 86 "data/maps/FishingVillage/scripts.pory"
	switch VAR_TEMP_2
# 87 "data/maps/FishingVillage/scripts.pory"
	case 1, FishVillage_Brother_39
# 90 "data/maps/FishingVillage/scripts.pory"
	case 2, FishVillage_Brother_40
# 93 "data/maps/FishingVillage/scripts.pory"
	case 3, FishVillage_Brother_41
FishVillage_Brother_37:
# 97 "data/maps/FishingVillage/scripts.pory"
	waitmovement 1
# 98 "data/maps/FishingVillage/scripts.pory"
	removeobject 1
# 99 "data/maps/FishingVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 100 "data/maps/FishingVillage/scripts.pory"
	delay 45
# 101 "data/maps/FishingVillage/scripts.pory"
	savebgm MUS_DUMMY
# 102 "data/maps/FishingVillage/scripts.pory"
	fadedefaultbgm
# 103 "data/maps/FishingVillage/scripts.pory"
	release
	return

FishVillage_Brother_3:
# 39 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, MoveFishBrother1
	goto FishVillage_Brother_1

FishVillage_Brother_4:
# 41 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, Walk2Down
	goto FishVillage_Brother_1

FishVillage_Brother_5:
# 43 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, MoveFishBrother3
	goto FishVillage_Brother_1

FishVillage_Brother_7:
# 47 "data/maps/FishingVillage/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto FishVillage_Brother_6

FishVillage_Brother_10:
# 52 "data/maps/FishingVillage/scripts.pory"
	addvar VAR_TEMP_3, 2
	goto FishVillage_Brother_9

FishVillage_Brother_18:
# 56 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInPearlwood
	goto FishVillage_Brother_16

FishVillage_Brother_19:
# 58 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInKaolisleNoFight
	goto FishVillage_Brother_16

FishVillage_Brother_20:
# 60 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInRoute28
	goto FishVillage_Brother_16

FishVillage_Brother_21:
# 62 "data/maps/FishingVillage/scripts.pory"
	msgbox LastMetInKaolisleHaveFought
	goto FishVillage_Brother_16

FishVillage_Brother_23:
# 67 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_5_FISHINGVILLAGE, FishingVillage_BrotherLost
	goto FishVillage_Brother_22

FishVillage_Brother_31:
# 79 "data/maps/FishingVillage/scripts.pory"
	msgbox FishingVillageBrotherLeavesAfterMegaEvo
	goto FishVillage_Brother_30

FishVillage_Brother_34:
# 72 "data/maps/FishingVillage/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_5_FISHINGVILLAGE, FishingVillage_BrotherLostFirstTimeAgainstMale
	goto FishVillage_Brother_22

FishVillage_Brother_39:
# 88 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, LeaveFishBrotherRight
# 89 "data/maps/FishingVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnRight
	goto FishVillage_Brother_37

FishVillage_Brother_40:
# 91 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, LeaveFishBrotherLeft
# 92 "data/maps/FishingVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnLeft
	goto FishVillage_Brother_37

FishVillage_Brother_41:
# 94 "data/maps/FishingVillage/scripts.pory"
	applymovement 1, LeaveFishBrotherLeft
# 95 "data/maps/FishingVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnLeft
	goto FishVillage_Brother_37


# 207 "data/maps/FishingVillage/scripts.pory"
FishPlayerTurnRight:
# 208 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 209 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_right
# 210 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 210 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 211 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_down
	step_end

# 213 "data/maps/FishingVillage/scripts.pory"
FishPlayerTurnLeft:
# 214 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 215 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_left
# 216 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 216 "data/maps/FishingVillage/scripts.pory"
	delay_16
# 217 "data/maps/FishingVillage/scripts.pory"
	walk_in_place_fast_down
	step_end

# 219 "data/maps/FishingVillage/scripts.pory"
LeaveFishBrotherRight:
# 220 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 221 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 221 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 221 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 221 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 221 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 221 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 221 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

# 223 "data/maps/FishingVillage/scripts.pory"
LeaveFishBrotherLeft:
# 224 "data/maps/FishingVillage/scripts.pory"
	walk_left
# 225 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 225 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 225 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 225 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 225 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 225 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 225 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

FishVillage_Sign1::
# 229 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Sign1_Text, MSGBOX_SIGN
	return


FishVillage_Sign2::
# 232 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Sign2_Text, MSGBOX_SIGN
	return


FishVillage_Sign3::
# 235 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Sign3_Text, MSGBOX_SIGN
	return


FishVillage_Woman2::
# 238 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Woman2_Text, MSGBOX_NPC
	return


FishVillage_Fisherman1::
# 241 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_RECEIVED_GYARADOSITE, FishVillage_Fisherman1_2
# 244 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_TEMP_3, FishVillage_Fisherman1_3
# 248 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Fisherman1_Text, MSGBOX_NPC
FishVillage_Fisherman1_1:
# 250 "data/maps/FishingVillage/scripts.pory"
	turnobject 3, DIR_NORTH
	return

FishVillage_Fisherman1_2:
# 242 "data/maps/FishingVillage/scripts.pory"
	msgbox StillCantBelieveIt, MSGBOX_NPC
	goto FishVillage_Fisherman1_1

FishVillage_Fisherman1_3:
# 245 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Fisherman1_Text2, MSGBOX_NPC
	goto FishVillage_Fisherman1_1


FishVillage_Fisherman2::
# 253 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Fisherman2_Text, MSGBOX_NPC
# 254 "data/maps/FishingVillage/scripts.pory"
	turnobject 5, DIR_NORTH
	return


FishVillage_Man1::
# 257 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_TEMP_3, FishVillage_Man1_2
# 276 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Man1_Text, MSGBOX_NPC
# 277 "data/maps/FishingVillage/scripts.pory"
	turnobject 6, DIR_NORTH
	return

FishVillage_Man1_2:
# 258 "data/maps/FishingVillage/scripts.pory"
	lock
# 259 "data/maps/FishingVillage/scripts.pory"
	faceplayer
# 260 "data/maps/FishingVillage/scripts.pory"
	msgbox CaughtGyarados
# 261 "data/maps/FishingVillage/scripts.pory"
	closemessage
# 262 "data/maps/FishingVillage/scripts.pory"
	safefollow
# 263 "data/maps/FishingVillage/scripts.pory"
	switch VAR_FACING
# 264 "data/maps/FishingVillage/scripts.pory"
	case DIR_EAST, FishVillage_Man1_6
# 265 "data/maps/FishingVillage/scripts.pory"
	case DIR_NORTH, FishVillage_Man1_6
# 267 "data/maps/FishingVillage/scripts.pory"
	case DIR_WEST, FishVillage_Man1_7
FishVillage_Man1_4:
# 270 "data/maps/FishingVillage/scripts.pory"
	waitmovement 0
# 271 "data/maps/FishingVillage/scripts.pory"
	setflag FLAG_FISHINGVILLAGE_GYARADOS_REWARD
# 272 "data/maps/FishingVillage/scripts.pory"
	removeobject 6
# 273 "data/maps/FishingVillage/scripts.pory"
	release
	end

FishVillage_Man1_6:
# 266 "data/maps/FishingVillage/scripts.pory"
	applymovement 6, MoveElderDirNorth
	goto FishVillage_Man1_4

FishVillage_Man1_7:
# 268 "data/maps/FishingVillage/scripts.pory"
	applymovement 6, MoveElderDirWest
	goto FishVillage_Man1_4


FishVillage_Woman5::
# 280 "data/maps/FishingVillage/scripts.pory"
	msgbox FishVillage_Woman5_Text, MSGBOX_NPC
# 281 "data/maps/FishingVillage/scripts.pory"
	turnobject 4, DIR_NORTH
	return


# 297 "data/maps/FishingVillage/scripts.pory"
MoveElderDirNorth:
# 298 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 298 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 299 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

# 301 "data/maps/FishingVillage/scripts.pory"
MoveElderDirWest:
# 302 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 303 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 303 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 304 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 304 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 304 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 304 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 304 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 304 "data/maps/FishingVillage/scripts.pory"
	walk_down
	step_end

FishingVillage_OldWoman::
# 358 "data/maps/FishingVillage/scripts.pory"
	msgbox FishingVillage_OldWoman_Text, MSGBOX_NPC
	return


# 369 "data/maps/FishingVillage/scripts.pory"
ExclamationMark:
# 370 "data/maps/FishingVillage/scripts.pory"
	emote_exclamation_mark
# 371 "data/maps/FishingVillage/scripts.pory"
	step_end

# 373 "data/maps/FishingVillage/scripts.pory"
MoveFishBrother1:
# 374 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 375 "data/maps/FishingVillage/scripts.pory"
	walk_left
# 376 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 377 "data/maps/FishingVillage/scripts.pory"
	step_end

# 379 "data/maps/FishingVillage/scripts.pory"
MoveFishBrother3:
# 380 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 381 "data/maps/FishingVillage/scripts.pory"
	walk_right
# 382 "data/maps/FishingVillage/scripts.pory"
	walk_down
# 383 "data/maps/FishingVillage/scripts.pory"
	step_end

FishingVillage_FishingGuru::
# 387 "data/maps/FishingVillage/scripts.pory"
	lock
# 388 "data/maps/FishingVillage/scripts.pory"
	faceplayer
# 389 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 390 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FishingVillage_FishingGuru_2
# 394 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_TITANIUM_LINE
# 395 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FishingVillage_FishingGuru_5
FishingVillage_FishingGuru_4:
# 398 "data/maps/FishingVillage/scripts.pory"
	msgbox ImFishingGuru, MSGBOX_YESNO
# 399 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_8
# 403 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_OLD_ROD
# 404 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_11
FishingVillage_FishingGuru_10:
# 411 "data/maps/FishingVillage/scripts.pory"
	msgbox FisherOfSomeRenown
# 412 "data/maps/FishingVillage/scripts.pory"
	giveitem ITEM_TITANIUM_LINE
# 413 "data/maps/FishingVillage/scripts.pory"
	msgbox FishInLava
# 414 "data/maps/FishingVillage/scripts.pory"
	goto_if_unset FLAG_Q36_TITANIUM_FISHING_START, FishingVillage_FishingGuru_14
FishingVillage_FishingGuru_13:
# 418 "data/maps/FishingVillage/scripts.pory"
	release
	return

FishingVillage_FishingGuru_2:
# 391 "data/maps/FishingVillage/scripts.pory"
	msgbox EnjoySuperRod, MSGBOX_NPC
	end

FishingVillage_FishingGuru_5:
# 396 "data/maps/FishingVillage/scripts.pory"
	goto SuperRodQuestStarted
	goto FishingVillage_FishingGuru_4

FishingVillage_FishingGuru_8:
# 400 "data/maps/FishingVillage/scripts.pory"
	msgbox GuruHonest, MSGBOX_NPC
	end

FishingVillage_FishingGuru_11:
# 405 "data/maps/FishingVillage/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 406 "data/maps/FishingVillage/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_16
	goto FishingVillage_FishingGuru_10

FishingVillage_FishingGuru_14:
# 415 "data/maps/FishingVillage/scripts.pory"
	startquest FLAG_Q36_TITANIUM_FISHING_START
# 416 "data/maps/FishingVillage/scripts.pory"
	special ShowJournalPopupAdd
	goto FishingVillage_FishingGuru_13

FishingVillage_FishingGuru_16:
# 407 "data/maps/FishingVillage/scripts.pory"
	msgbox NoFishingRod, MSGBOX_NPC
	end


SuperRodQuestStarted::
# 422 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_USED_TITANIUM_LINE, SuperRodQuestStarted_2
SuperRodQuestStarted_1:
# 425 "data/maps/FishingVillage/scripts.pory"
	goto_if_set FLAG_TEMP_1, SuperRodQuestStarted_4
# 433 "data/maps/FishingVillage/scripts.pory"
	msgbox FishInLava, MSGBOX_NPC
# 434 "data/maps/FishingVillage/scripts.pory"
	goto_if_unset FLAG_Q36_TITANIUM_FISHING_START, SuperRodQuestStarted_9
	return

SuperRodQuestStarted_2:
# 423 "data/maps/FishingVillage/scripts.pory"
	goto SuperRodReward
	goto SuperRodQuestStarted_1

SuperRodQuestStarted_4:
# 426 "data/maps/FishingVillage/scripts.pory"
	msgbox DontHaveSlugma, MSGBOX_NPC
# 427 "data/maps/FishingVillage/scripts.pory"
	goto_if_unset FLAG_Q36_TITANIUM_FISHING_START, SuperRodQuestStarted_7
	return

SuperRodQuestStarted_7:
# 428 "data/maps/FishingVillage/scripts.pory"
	startquest FLAG_Q36_TITANIUM_FISHING_START
# 429 "data/maps/FishingVillage/scripts.pory"
	special ShowJournalPopupAdd
	return

SuperRodQuestStarted_9:
# 435 "data/maps/FishingVillage/scripts.pory"
	startquest FLAG_Q36_TITANIUM_FISHING_START
# 436 "data/maps/FishingVillage/scripts.pory"
	special ShowJournalPopupAdd
	return


SuperRodReward::
# 503 "data/maps/FishingVillage/scripts.pory"
	msgbox YouHaveSlugma
# 504 "data/maps/FishingVillage/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 505 "data/maps/FishingVillage/scripts.pory"
	msgbox EnjoySuperRod, MSGBOX_NPC
	end


FishingVillageBrotherLeaves::
# 105 "data/maps/FishingVillage/scripts.pory"
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
# 118 "data/maps/FishingVillage/scripts.pory"
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
# 131 "data/maps/FishingVillage/scripts.pory"
	.string "I can't believe I lost yet again!\n"
	.string "What a terrible role model I am…$"

FishingVillage_BrotherLostFirstTimeAgainstMale::
# 135 "data/maps/FishingVillage/scripts.pory"
	.string "I can't believe I actually lost\n"
	.string "against my little brother.\l"
	.string "What a terrible role model I am…$"

FishingVillage_BrotherLostFirstTime::
# 140 "data/maps/FishingVillage/scripts.pory"
	.string "I can't believe I actually lost\n"
	.string "against my little sister.\l"
	.string "What a terrible role model I am…$"

LastMetInPearlwood::
# 145 "data/maps/FishingVillage/scripts.pory"
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
# 158 "data/maps/FishingVillage/scripts.pory"
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
# 173 "data/maps/FishingVillage/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we met was in I believe…\p"
	.string "Oh yeah!\p"
	.string "We met at Route 30, right?\n"
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
# 190 "data/maps/FishingVillage/scripts.pory"
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
# 284 "data/maps/FishingVillage/scripts.pory"
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
# 307 "data/maps/FishingVillage/scripts.pory"
	.string "Fishing Guru's House$"

FishVillage_Sign2_Text::
# 310 "data/maps/FishingVillage/scripts.pory"
	.string "Rest House$"

FishVillage_Sign3_Text::
# 313 "data/maps/FishingVillage/scripts.pory"
	.string "{UP_ARROW} Fishing Village\n"
	.string "{RIGHT_ARROW} Route 23\l"
	.string "{DOWN_ARROW} Route 15$"

FishVillage_Woman2_Text::
# 318 "data/maps/FishingVillage/scripts.pory"
	.string "The Fishing Village is a small\n"
	.string "community that attracts people from\l"
	.string "around the world.\p"
	.string "You wouldn't believe the things some\n"
	.string "people are able to fish up!$"

FishVillage_Fisherman1_Text::
# 325 "data/maps/FishingVillage/scripts.pory"
	.string "I've heard some people say they've\n"
	.string "managed to fish up even Gyarados here!\p"
	.string "If you ask me, I say all those\n"
	.string "people are liars.$"

FishVillage_Fisherman1_Text2::
# 331 "data/maps/FishingVillage/scripts.pory"
	.string "No way did you fish up a Gyarados!\p"
	.string "You should let the eldest in the\n"
	.string "village know.\p"
	.string "He's right over there, on the\n"
	.string "middle pier.$"

StillCantBelieveIt::
# 338 "data/maps/FishingVillage/scripts.pory"
	.string "Had I not seen you reel that Gyarados\n"
	.string "with my own eyes, I would probably\l"
	.string "still believe it all to be a big lie.$"

FishVillage_Fisherman2_Text::
# 343 "data/maps/FishingVillage/scripts.pory"
	.string "Some think fishing is boring.\n"
	.string "I could not disagree more.$"

FishVillage_Man1_Text::
# 347 "data/maps/FishingVillage/scripts.pory"
	.string "I believe there is something in these\n"
	.string "waters, something no man has witnessed\l"
	.string "in ages.\p"
	.string "I plan to find what that is.$"

FishVillage_Woman5_Text::
# 353 "data/maps/FishingVillage/scripts.pory"
	.string "Can't a girl fish in peace?$"

FishingVillage_OldWoman_Text::
# 360 "data/maps/FishingVillage/scripts.pory"
	.string "There's not a whole lot going around\n"
	.string "in these parts of the region.\p"
	.string "There's no boat connection to the\n"
	.string "north and from what I've heard,\l"
	.string "Drisledge Town to the east is\l"
	.string "practically a ghost town.$"

ImFishingGuru::
# 441 "data/maps/FishingVillage/scripts.pory"
	.string "People call me the Fishing Guru.\p"
	.string "Let me guess, you are interested in\n"
	.string "one of my fishing rods?$"

GuruHonest::
# 446 "data/maps/FishingVillage/scripts.pory"
	.string "Understandable. Fishing isn't for\n"
	.string "everyone.$"

NoFishingRod::
# 450 "data/maps/FishingVillage/scripts.pory"
	.string "You don't even have a fishing rod\n"
	.string "of your own.\p"
	.string "Do you expect me to give out one of\n"
	.string "my superb rods to someone who shows\l"
	.string "zero interest towards fishing?\l"
	.string "Please leave.$"

FisherOfSomeRenown::
# 458 "data/maps/FishingVillage/scripts.pory"
	.string "I notice you are carrying a fishing\n"
	.string "rod of sorts.\l"
	.string "That's good.\p"
	.string "However, if you want one of my superb\n"
	.string "rods, you must first show your\l"
	.string "dedication to this art.$"

FishInLava::
# 466 "data/maps/FishingVillage/scripts.pory"
	.string "On the island to the north,\n"
	.string "one can find pools of lava.\p"
	.string "I know this might sound crazy,\n"
	.string "but there are Pokémon living in\l"
	.string "those pools!\p"
	.string "I want you to take that Titanium Line\n"
	.string "and see if it can take the heat of\l"
	.string "fishing from those pools.\p"
	.string "Once you've tested the line,\n"
	.string "come back to me, and I may consider\l"
	.string "giving you one of my rods.$"

DontHaveSlugma::
# 479 "data/maps/FishingVillage/scripts.pory"
	.string "Have you been to the north yet?\p"
	.string "That Titanium Line doesn't look like\n"
	.string "it's seen a whole lot of action.$"

YouHaveSlugma::
# 484 "data/maps/FishingVillage/scripts.pory"
	.string "Ah, your Titanium Line!\p"
	.string "I see marks on it that only molten\n"
	.string "lava could cause.\p"
	.string "Don't worry, the marks are only\n"
	.string "superficial.\l"
	.string "The line itself should have no trouble\l"
	.string "tolerating the heat.\p"
	.string "Thank you for helping me test\n"
	.string "my theory.\p"
	.string "Here, I want you to have this!$"

EnjoySuperRod::
# 496 "data/maps/FishingVillage/scripts.pory"
	.string "The world is your Cloyster.\p"
	.string "Go out there, and discover the secrets\n"
	.string "of the deep abyss!$"
