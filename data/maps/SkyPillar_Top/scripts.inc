SkyPillar_Top_MapScripts::
# 2 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AT_Top
	.byte 0


AT_Top::
	checkitem ITEM_MEGA_RING
# 0 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Top_2
AT_Top_1:
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, AT_Top_5
AT_Top_4:
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_6, 1
	end

AT_Top_2:
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_1
	goto AT_Top_1

AT_Top_5:
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	goto AT_Top_4


AT_Pedestal::
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end


AT_TopTrigger1::
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger2::
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 2
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger3::
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 3
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger4::
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 4
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger5::
# 42 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 5
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger6::
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 6
# 47 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopEvent::
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_TEMP_5
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, AT_TopEvent_3
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	case 2, AT_TopEvent_4
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	case 3, AT_TopEvent_5
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	case 4, AT_TopEvent_6
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	case 5, AT_TopEvent_7
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	case 6, AT_TopEvent_8
AT_TopEvent_1:
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOW_ME
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, TurnKorrina
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox YouTwoMadeIt
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, KorrinaGoesToRival
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	delay 100
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, KorrinaGoesToPlayer
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	giveitem ITEM_MEGA_RING
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_1
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	waitfanfare
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, KorrinaGoesBack
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox IDontHaveStones
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ReturnToGym
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 2
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Walk1Left
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	checkplayergender
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq AT_TopEvent_10
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LetsGoMeetDadMay
AT_TopEvent_9:
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_HIDE_LIBRARY_BIRCH, AT_TopEvent_14
AT_TopEvent_13:
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_HM02
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AT_TopEvent_17
AT_TopEvent_16:
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	delay 10
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Common_Movement_WalkInPlaceFasterDown
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	delay 50
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	setfieldeffectargument 0, 1
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	destroyfollower
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_KORRINA_LEAVESGYM
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_LAB_RIVAL
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_LIBRARY_BIRCH
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_PARTNER_HEALS
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_MAN3
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_WOMAN5
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_PSYCHIC
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_MAN5
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_M
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_F
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_PSYCHICF
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_BLACKBELT
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_LASS
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BLACKBELT
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_M
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_F
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

AT_TopEvent_3:
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement1
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement1Follower
	goto AT_TopEvent_1

AT_TopEvent_4:
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement2
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement2Follower
	goto AT_TopEvent_1

AT_TopEvent_5:
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement3Follower
	goto AT_TopEvent_1

AT_TopEvent_6:
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement4
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement4Follower
	goto AT_TopEvent_1

AT_TopEvent_7:
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement5
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement5Follower
	goto AT_TopEvent_1

AT_TopEvent_8:
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement6
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, AT_Top_Movement6Follower
	goto AT_TopEvent_1

AT_TopEvent_10:
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LetsGoMeetDadBrendan
	goto AT_TopEvent_9

AT_TopEvent_14:
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Common_Movement_ExclamationMark
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq AT_TopEvent_20
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox YouMetDadMay
AT_TopEvent_19:
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
	goto AT_TopEvent_13

AT_TopEvent_17:
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Common_Movement_QuestionMark
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox NotHaveFly
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
	goto AT_TopEvent_16

AT_TopEvent_20:
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox YouMetDadBrendan
	goto AT_TopEvent_19


# 268 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement1:
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 274 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement2:
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 280 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement4:
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 286 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement5:
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 292 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement6:
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 298 "data/maps/SkyPillar_Top/scripts.pory"
TurnKorrina:
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 302 "data/maps/SkyPillar_Top/scripts.pory"
KorrinaGoesToRival:
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 308 "data/maps/SkyPillar_Top/scripts.pory"
KorrinaGoesToPlayer:
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 313 "data/maps/SkyPillar_Top/scripts.pory"
KorrinaGoesBack:
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 320 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement1Follower:
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 326 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement2Follower:
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 332 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement3Follower:
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 335 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 338 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement4Follower:
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 342 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement5Follower:
# 343 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 343 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 346 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 348 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement6Follower:
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 352 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

AT_Custodian::
# 356 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 357 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 2
	goto_if_eq AT_Custodian_2
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 1
	goto_if_eq AT_Custodian_5
# 379 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ImTheCaretaker
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 381 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_STONE_SPHERE
# 382 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Custodian_8
AT_Custodian_7:
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

AT_Custodian_2:
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LookForVerdantSphere, MSGBOX_NPC
	end

AT_Custodian_5:
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_STEEL_SPHERE
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Custodian_11
# 368 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 369 "data/maps/SkyPillar_Top/scripts.pory"
	safefollow
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 372 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 373 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ThatsSteelSphere
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SPHERES_FOUND, 2
# 375 "data/maps/SkyPillar_Top/scripts.pory"
	release
# 376 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
	end

AT_Custodian_8:
# 383 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	safefollow
# 385 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 386 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 387 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 388 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ThatsStoneSphere
# 389 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SPHERES_FOUND, 1
	goto AT_Custodian_7

AT_Custodian_11:
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LookForSteelSphere, MSGBOX_NPC
	end


OddSensation::
# 450 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_STEELSPHERE_CLUE, OddSensation_2
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_STONE_SPHERE
# 455 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OddSensation_5
OddSensation_4:
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

OddSensation_2:
# 451 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

OddSensation_5:
# 456 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 457 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox OddSensation_Text
# 458 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_STEELSPHERE_CLUE
	goto OddSensation_4


AT_Pedestal_Text::
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's a small pedestal, which looks\n"
	.string "like it's meant to house something.$"

YouTwoMadeIt::
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Korrina: Oh hey, you two actually\n"
	.string "made it to the top!\p"
	.string "Sorry about not mentioning those\n"
	.string "trainers down there!\p"
	.string "After our gym battles, I wanted to\n"
	.string "see if you two were actually that\l"
	.string "strong or if you just got lucky.\p"
	.string "Glad to see it was the former!\p"
	.string "Anyways, the reason I called you here\n"
	.string "was so I could give you these:\l"
	.string "the Mega Rings!\p"
	.string "These rings are the key ingredient to\n"
	.string "a phenomena called “Mega Evolution,”\l"
	.string "which both of you got to see me\l"
	.string "perform during our battles.\p"
	.string "When I see a great trainer, I like\n"
	.string "to gift them with one of these.\p"
	.string "The only problem is, they're kinda rare\n"
	.string "here in Sinko.\p"
	.string "That's why I can only afford to give\n"
	.string "them to the truly expectional trainers.\p"
	.string "People like you!$"

IDontHaveStones::
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Korrina: Now, in order to have your\n"
	.string "Pokémon Mega Evolve, they must be\l"
	.string "holding onto a specific Mega Stone.\p"
	.string "Unfortunately, these stones are\n"
	.string "like, super rare!\p"
	.string "I have no idea where one would even\n"
	.string "begin to search for one.\p"
	.string "I hate having to do this after you've\n"
	.string "come so far, but you'll need to look\l"
	.string "for those stones yourself.\p"
	.string "But anyways, to Mega Evolve a Pokémon,\n"
	.string "once you are in battle and you're\l"
	.string "deciding on which move your Pokémon\l"
	.string "should use, hit the START button and\l"
	.string "you should see the Mega Stone light up!\p"
	.string "Boom!\n"
	.string "As simple as that!\p"
	.string "Be careful you don't overexert your\n"
	.string "Pokémon though!\p"
	.string "Mega Evolution takes a huge amount of\n"
	.string "energy, causing your Pokémon to lose\l"
	.string "stamina rapidly!$"

ReturnToGym::
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Korrina: Okay!\p"
	.string "I know that introduction was kinda\n"
	.string "short and fast, but I'm sure you two\l"
	.string "can figure it out!\p"
	.string "I am a Gym Leader after all, and you\n"
	.string "never know when another challenger is\l"
	.string "gonna show up at the gym, asking to\l"
	.string "challenge the leader.\p"
	.string "So, I must bid you two adieu!$"

LetsGoMeetDadBrendan::
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Hey {PLAYER}, let's go ask\n"
	.string "my dad!\p"
	.string "Since he's a Pokémon Professor, I'm\n"
	.string "sure he knows something about this!$"

LetsGoMeetDadMay::
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}, maybe we ought\n"
	.string "to go and ask my dad?\p"
	.string "Since he's a Pokémon Professor, I bet\n"
	.string "he can point us in the right direction!$"

YouMetDadBrendan::
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: You met dad in the library?\n"
	.string "And he told to come and visit?\p"
	.string "Well, all the more reason I guess.\n"
	.string "Come on, let's go!$"

YouMetDadMay::
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Oh?\p"
	.string "You met him in the library?\n"
	.string "And he told us to come and visit?\p"
	.string "Well, what are we waiting for?\n"
	.string "Let's go!$"

NotHaveFly::
# 254 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Wait…\p"
	.string "{PLAYER}, Don't you have a Pokémon\n"
	.string "that can fly you across the region?\p"
	.string "… … … … …\p"
	.string "Well this is a bit awkward…\n"
	.string "My Pokémon can only carry one…\p"
	.string "If you want your Pokémon to learn to\n"
	.string "fly you around, I recommend you\l"
	.string "visit Windplume Valley.\l"
	.string "It's located next to Aldeleaf City.\p"
	.string "Anyway, see you back at the lab!$"

ImTheCaretaker::
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I am the current caretaker of\n"
	.string "this tower.\p"
	.string "It is said that this tower was erected\n"
	.string "by a now lost civilization, to work as\l"
	.string "a beacon to guide home the Protectors.$"

ThatsStoneSphere::
# 402 "data/maps/SkyPillar_Top/scripts.pory"
	.string "That Stone Sphere you are carrying,\n"
	.string "may I see it?\p"
	.string "… … … … …\p"
	.string "Yes, this is undoubtedly something\n"
	.string "left behind by the Protectors!\p"
	.string "Its rightful place is here on the\n"
	.string "pedestals, but according to legend,\l"
	.string "Its presence should allow the holder\l"
	.string "to sense the location of other such\l"
	.string "spheres.\p"
	.string "Please, seek the other spheres!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!$"

LookForSteelSphere::
# 417 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, seek the other spheres!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!\p"
	.string "I would try visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

ThatsSteelSphere::
# 425 "data/maps/SkyPillar_Top/scripts.pory"
	.string "That Steel Sphere…\p"
	.string "Yes, this is undoubtedly another\n"
	.string "fragment of the Protectors!\p"
	.string "I don't know how you're doing it,\n"
	.string "but thanks to your efforts, we are\l"
	.string "closer to bringing back the Protectors\l"
	.string "than ever before!\p"
	.string "Please, I urge you,\n"
	.string "seek the final sphere!\p"
	.string "If you need more guidance, I would\n"
	.string "suggest visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

LookForVerdantSphere::
# 440 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, seek the final sphere!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!\p"
	.string "I would try visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

OddSensation_Text::
# 464 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You feel an odd sensation emanating\n"
	.string "from the Stone Sphere.$"
