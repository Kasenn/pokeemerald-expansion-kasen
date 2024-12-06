Route114_LanettesHouse_MapScripts::
# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetMudBallLoc
	.byte 0


CanceledFabrication::
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox CanceledFabrication_Text, MSGBOX_SIGN
	end


SetMudBallLoc::
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_SAMPLE_BOX
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetMudBallLoc_2
SetMudBallLoc_1:
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_MUD_REWARD_WAITING, SetMudBallLoc_4
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 0
	return

SetMudBallLoc_2:
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_MUD_REWARD_WAITING
	goto SetMudBallLoc_1

SetMudBallLoc_4:
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	setobjectxyperm 2, 5, 2
	return


LanettesHouse_Scientist::
# 102 "data/maps/Route114_LanettesHouse/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_MUD_BAD_LUCK_PROTECTION
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD, 1000
	goto_if_eq LanettesHouse_Scientist_2
# 108 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD, 1001
	goto_if_eq LanettesHouse_Scientist_5
# 113 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD, 1002
	goto_if_eq LanettesHouse_Scientist_8
# 123 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD, 1003
	goto_if_eq LanettesHouse_Scientist_11
# 129 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD, 999
	goto_if_eq LanettesHouse_Scientist_18
# 134 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_SAMPLE_BOX
# 135 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Scientist_21
# 150 "data/maps/Route114_LanettesHouse/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_MUD_SAMPLES
# 151 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_MUD_REWARD_WAITING, LanettesHouse_Scientist_24
# 155 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_eq LanettesHouse_Scientist_27
# 159 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_SAMPLES, 2
	goto_if_le LanettesHouse_Scientist_30
# 163 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox GiveASpin, MSGBOX_NPC
	return

LanettesHouse_Scientist_2:
# 104 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox WeakPrize, MSGBOX_NPC
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_5:
# 109 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox MidPrize, MSGBOX_NPC
# 110 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_8:
# 114 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_BAD_LUCK_PROTECTION, 0
	goto_if_eq LanettesHouse_Scientist_14
# 118 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox GrandPrize, MSGBOX_NPC
LanettesHouse_Scientist_13:
# 120 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_11:
# 124 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ExtraPrize, MSGBOX_NPC
# 125 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_14:
# 115 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox GrandPrizeFirstTime, MSGBOX_NPC
	goto LanettesHouse_Scientist_13

LanettesHouse_Scientist_18:
# 130 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox FirstMudBall, MSGBOX_NPC
# 131 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_21:
# 136 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 137 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 138 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox SampleBoxIntro
# 139 "data/maps/Route114_LanettesHouse/scripts.pory"
	giveitem ITEM_SAMPLE_BOX
# 140 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox SampleBoxIntro2, MSGBOX_DEFAULT
# 141 "data/maps/Route114_LanettesHouse/scripts.pory"
	closemessage
# 142 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Route114_LanettesHouse/scripts.pory"
	safefollow
# 144 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 145 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 48
# 147 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox SampleBoxIntro3, MSGBOX_NPC
	end

LanettesHouse_Scientist_24:
# 152 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox MudBallWaiting, MSGBOX_NPC
	end

LanettesHouse_Scientist_27:
# 156 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox MudSamplesFull, MSGBOX_NPC
	end

LanettesHouse_Scientist_30:
# 160 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox NotEnoughMudSamples, MSGBOX_NPC
	end


LanettesHouse_Extractinator::
# 166 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkmoney 500
# 167 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Extractinator_2
# 167 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_SAMPLES, 2
	goto_if_le LanettesHouse_Extractinator_2
# 172 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_MUD_REWARD_WAITING, LanettesHouse_Extractinator_7
# 177 "data/maps/Route114_LanettesHouse/scripts.pory"
	call TurnExtractinatorOn
# 178 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 179 "data/maps/Route114_LanettesHouse/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_MUD_SAMPLES
# 180 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ReadyToFabricate
# 181 "data/maps/Route114_LanettesHouse/scripts.pory"
	showmoneybox 0, 0
# 182 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ReadyToFabricate2, MSGBOX_YESNO
# 183 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Extractinator_10
# 192 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_SHOP
# 193 "data/maps/Route114_LanettesHouse/scripts.pory"
	removemoney 500
# 194 "data/maps/Route114_LanettesHouse/scripts.pory"
	updatemoneybox
# 195 "data/maps/Route114_LanettesHouse/scripts.pory"
	subvar VAR_MUD_SAMPLES, 3
# 196 "data/maps/Route114_LanettesHouse/scripts.pory"
	setobjectxyperm 2, 5, 1
# 197 "data/maps/Route114_LanettesHouse/scripts.pory"
	clearflag FLAG_MUD_REWARD_WAITING
# 198 "data/maps/Route114_LanettesHouse/scripts.pory"
	addobject 2
# 199 "data/maps/Route114_LanettesHouse/scripts.pory"
	message BeginFabrication
# 200 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmessage
# 201 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 80
# 202 "data/maps/Route114_LanettesHouse/scripts.pory"
	hidemoneybox
# 203 "data/maps/Route114_LanettesHouse/scripts.pory"
	message Fabricating
# 204 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 30
# 205 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmessage
# 206 "data/maps/Route114_LanettesHouse/scripts.pory"
	closemessage
# 207 "data/maps/Route114_LanettesHouse/scripts.pory"
	safefollow
# 208 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 2, Walk1Down
# 209 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox PleaseRemoveItemFromTray
# 211 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 212 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 213 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 214 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end

LanettesHouse_Extractinator_2:
# 168 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_SELECT
# 169 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Extractinator_Idle, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_7:
# 173 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_SELECT
# 174 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Extractinator_PickUpTreasure, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_10:
# 184 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_PC_OFF
# 185 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 186 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 187 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 188 "data/maps/Route114_LanettesHouse/scripts.pory"
	hidemoneybox
# 189 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


TurnExtractinatorOn::
# 218 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_PC_ON
# 219 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 220 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2B1, TRUE
# 221 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 222 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 223 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 224 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 225 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 226 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2B1, TRUE
# 227 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 228 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 229 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 230 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 231 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 232 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 233 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2B1, TRUE
# 234 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
	return


LanettesHouse_PC::
# 290 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox LanettesHouse_PC_Text, MSGBOX_SIGN
	return


ExtractBall::
# 336 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_BAD_LUCK_PROTECTION, 100
	goto_if_ge ExtractBall_2
# 342 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_MUD_INTRO, ExtractBall_5
# 348 "data/maps/Route114_LanettesHouse/scripts.pory"
	random 15
# 349 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 350 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvar VAR_TEMP_7, 20
# 351 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_1, 0
	goto_if_ne ExtractBall_8
# 355 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_2, 0
	goto_if_ne ExtractBall_9
# 359 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_3, 0
	goto_if_ne ExtractBall_10
# 363 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_4, 0
	goto_if_ne ExtractBall_11
# 367 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_5, 0
	goto_if_ne ExtractBall_12
# 371 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_6, 0
	goto_if_ne ExtractBall_13
# 375 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_7, 0
	goto_if_ne ExtractBall_14
# 379 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_8, 0
	goto_if_ne ExtractBall_15
# 383 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_9, 0
	goto_if_ne ExtractBall_16
# 387 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_10, 0
	goto_if_ne ExtractBall_17
ExtractBall_7:
# 391 "data/maps/Route114_LanettesHouse/scripts.pory"
	switch VAR_MUD_REWARD
# 392 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 0, ExtractBall_29
# 393 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 1, ExtractBall_29
# 397 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 2, ExtractBall_30
# 398 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 3, ExtractBall_30
# 402 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 4, ExtractBall_31
# 403 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 5, ExtractBall_31
# 407 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 6, ExtractBall_32
# 408 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 7, ExtractBall_32
# 412 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 8, ExtractBall_33
# 413 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 9, ExtractBall_33
# 417 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 10, ExtractBall_34
# 418 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 11, ExtractBall_34
# 422 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 12, ExtractBall_35
# 423 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 13, ExtractBall_35
# 427 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 14, ExtractBall_36
# 428 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 15, ExtractBall_36
# 432 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 16, ExtractBall_37
# 433 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 17, ExtractBall_37
# 437 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 18, ExtractBall_38
# 438 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 19, ExtractBall_38
# 442 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 20, ExtractBall_39
# 443 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 21, ExtractBall_39
# 447 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 22, ExtractBall_40
# 448 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 23, ExtractBall_40
# 452 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 24, ExtractBall_41
# 453 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 25, ExtractBall_41
# 457 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 26, ExtractBall_42
# 458 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 27, ExtractBall_42
# 462 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 28, ExtractBall_43
# 463 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 29, ExtractBall_43
# 467 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 30, ExtractBall_44
# 468 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 31, ExtractBall_44
# 472 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 32, ExtractBall_45
# 473 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 33, ExtractBall_45
# 477 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 34, ExtractBall_46
# 478 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 35, ExtractBall_46
# 482 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 36, ExtractBall_47
# 483 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 37, ExtractBall_47
# 484 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 38, ExtractBall_47
# 485 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 39, ExtractBall_47
# 489 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 40, ExtractBall_48
# 490 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 41, ExtractBall_48
# 491 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 42, ExtractBall_48
# 492 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 43, ExtractBall_48
# 496 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 44, ExtractBall_49
# 497 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 45, ExtractBall_49
# 498 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 46, ExtractBall_49
# 499 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 47, ExtractBall_49
# 503 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 48, ExtractBall_50
# 504 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 49, ExtractBall_50
# 505 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 50, ExtractBall_50
# 506 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 51, ExtractBall_50
# 510 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 52, ExtractBall_51
# 511 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 53, ExtractBall_51
# 512 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 54, ExtractBall_51
# 513 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 55, ExtractBall_51
# 517 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 56, ExtractBall_52
# 518 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 57, ExtractBall_52
# 519 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 58, ExtractBall_52
# 520 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 59, ExtractBall_52
# 524 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 60, ExtractBall_53
# 525 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 61, ExtractBall_53
# 526 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 62, ExtractBall_53
# 527 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 63, ExtractBall_53
# 531 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 64, ExtractBall_54
# 532 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 65, ExtractBall_54
# 533 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 66, ExtractBall_54
# 534 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 67, ExtractBall_54
# 538 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 68, ExtractBall_55
# 539 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 69, ExtractBall_55
# 540 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 70, ExtractBall_55
# 541 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 71, ExtractBall_55
# 545 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 72, ExtractBall_56
# 546 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 73, ExtractBall_56
# 547 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 74, ExtractBall_56
# 548 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 75, ExtractBall_56
# 552 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 76, ExtractBall_57
# 553 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 77, ExtractBall_57
# 554 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 78, ExtractBall_57
# 555 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 79, ExtractBall_57
# 559 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 80, ExtractBall_58
# 560 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 81, ExtractBall_58
# 561 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 82, ExtractBall_58
# 562 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 83, ExtractBall_58
# 566 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 84, ExtractBall_59
# 570 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 85, ExtractBall_60
# 574 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 86, ExtractBall_61
# 578 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 87, ExtractBall_62
# 582 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 88, ExtractBall_63
# 583 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 89, ExtractBall_63
# 587 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 90, ExtractBall_64
# 588 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 91, ExtractBall_64
# 589 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 92, ExtractBall_64
# 590 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 93, ExtractBall_64
# 591 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 94, ExtractBall_64
# 592 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 95, ExtractBall_64
# 593 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 96, ExtractBall_64
# 594 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 97, ExtractBall_64
# 595 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 98, ExtractBall_64
# 596 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 99, ExtractBall_64
	return

ExtractBall_2:
# 337 "data/maps/Route114_LanettesHouse/scripts.pory"
	call GrandPrizeRandomization
# 338 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_BAD_LUCK_PROTECTION, 0
# 339 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1003
	end

ExtractBall_5:
# 343 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ANCIENT_STONE
# 344 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 999
# 345 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_MUD_INTRO
	end

ExtractBall_8:
# 352 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_1
# 353 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_1, 0
	goto ExtractBall_7

ExtractBall_9:
# 356 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_2
# 357 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_2, 0
	goto ExtractBall_7

ExtractBall_10:
# 360 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_3
# 361 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_3, 0
	goto ExtractBall_7

ExtractBall_11:
# 364 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_4
# 365 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_4, 0
	goto ExtractBall_7

ExtractBall_12:
# 368 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_5
# 369 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_5, 0
	goto ExtractBall_7

ExtractBall_13:
# 372 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_6
# 373 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_6, 0
	goto ExtractBall_7

ExtractBall_14:
# 376 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_7
# 377 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_7, 0
	goto ExtractBall_7

ExtractBall_15:
# 380 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_8
# 381 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_8, 0
	goto ExtractBall_7

ExtractBall_16:
# 384 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_9
# 385 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_9, 0
	goto ExtractBall_7

ExtractBall_17:
# 388 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_10
# 389 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_10, 0
	goto ExtractBall_7

ExtractBall_29:
# 394 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_NORMAL_GEM, 2
# 395 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 396 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_30:
# 399 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FIRE_GEM, 2
# 400 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 401 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_31:
# 404 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_WATER_GEM, 2
# 405 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 406 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_32:
# 409 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ELECTRIC_GEM, 2
# 410 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 411 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_33:
# 414 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GRASS_GEM, 2
# 415 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 416 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_34:
# 419 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ICE_GEM, 2
# 420 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 421 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_35:
# 424 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FIGHTING_GEM, 2
# 425 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 426 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_36:
# 429 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_POISON_GEM, 2
# 430 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 431 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_37:
# 434 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GROUND_GEM, 2
# 435 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 436 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_38:
# 439 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FLYING_GEM, 2
# 440 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 441 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_39:
# 444 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_PSYCHIC_GEM, 2
# 445 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 446 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_40:
# 449 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BUG_GEM, 2
# 450 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 451 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_41:
# 454 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ROCK_GEM, 2
# 455 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 456 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_42:
# 459 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GHOST_GEM, 2
# 460 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 461 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_43:
# 464 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_DRAGON_GEM, 2
# 465 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 466 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_44:
# 469 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_DARK_GEM, 2
# 470 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 471 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_45:
# 474 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_STEEL_GEM, 2
# 475 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 476 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_46:
# 479 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FAIRY_GEM, 2
# 480 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 481 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_47:
# 486 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_NUGGET
# 487 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 488 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_48:
# 493 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_PEARL, 2
# 494 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 495 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_49:
# 500 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RARE_BONE
# 501 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 502 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_50:
# 507 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RELIC_COPPER, 3
# 508 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 509 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_51:
# 514 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RELIC_SILVER
# 515 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 516 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_52:
# 521 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_HEART_SCALE
# 522 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 523 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_53:
# 528 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_NUGGET
# 529 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 530 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_54:
# 535 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_PEARL
# 536 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 537 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_55:
# 542 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RED_SHARD
# 543 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 544 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_56:
# 549 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BLUE_SHARD
# 550 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 551 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_57:
# 556 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_YELLOW_SHARD
# 557 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 558 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_58:
# 563 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GREEN_SHARD
# 564 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 565 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_59:
# 567 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_PEARL
# 568 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 569 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_60:
# 571 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RED_SHARD
# 572 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 573 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_61:
# 575 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BLUE_SHARD
# 576 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 577 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_62:
# 579 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_YELLOW_SHARD
# 580 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 581 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_63:
# 584 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GREEN_SHARD
# 585 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 586 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_64:
# 597 "data/maps/Route114_LanettesHouse/scripts.pory"
	call GrandPrizeRandomization
# 598 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1002
	return


GrandPrizeRandomization::
# 603 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, GrandPrizeRandomization_3
GrandPrizeRandomization_1:
# 608 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_ANCIENT_STONE, 3
# 609 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_7
GrandPrizeRandomization_6:
# 631 "data/maps/Route114_LanettesHouse/scripts.pory"
	random 5
# 632 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_TEMP_6, VAR_RESULT
# 633 "data/maps/Route114_LanettesHouse/scripts.pory"
	switch VAR_TEMP_6
# 634 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 0, GrandPrizeRandomization_11
# 640 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 1, GrandPrizeRandomization_12
# 646 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 2, GrandPrizeRandomization_13
# 652 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 3, GrandPrizeRandomization_14
# 658 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 4, GrandPrizeRandomization_15
GrandPrizeRandomization_9:
	return

GrandPrizeRandomization_2:
# 604 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_OBTAINED_AERODACTYLITE
# 605 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_AERODACTYLITE
	return

GrandPrizeRandomization_3:
# 603 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_OBTAINED_AERODACTYLITE, GrandPrizeRandomization_2
	goto GrandPrizeRandomization_1

GrandPrizeRandomization_7:
# 610 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_BIRD
# 611 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_16
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_11:
# 635 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_BIRD
# 636 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_19
GrandPrizeRandomization_18:
# 639 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_BIRD
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_12:
# 641 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DINO
# 642 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_22
GrandPrizeRandomization_21:
# 645 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_DINO
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_13:
# 647 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DRAKE
# 648 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_25
GrandPrizeRandomization_24:
# 651 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_DRAKE
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_14:
# 653 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_FISH
# 654 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_28
GrandPrizeRandomization_27:
# 657 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_FISH
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_15:
# 659 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_ANCIENT_STONE, 3
# 660 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_31
GrandPrizeRandomization_30:
# 663 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ANCIENT_STONE
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_16:
# 612 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DINO
# 613 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_33
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_19:
# 637 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_18

GrandPrizeRandomization_22:
# 643 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_21

GrandPrizeRandomization_25:
# 649 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_24

GrandPrizeRandomization_28:
# 655 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_27

GrandPrizeRandomization_31:
# 661 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_30

GrandPrizeRandomization_33:
# 614 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DRAKE
# 615 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_35
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_35:
# 616 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_FISH
# 617 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_37
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_37:
# 618 "data/maps/Route114_LanettesHouse/scripts.pory"
	random 10
# 619 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge GrandPrizeRandomization_40
# 623 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ANCIENT_STONE
GrandPrizeRandomization_39:
	return

GrandPrizeRandomization_40:
# 620 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_NUGGET, 2
	goto GrandPrizeRandomization_39


GrandPrizeLoop::
# 669 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeRandomization
	return


CanceledFabrication_Text::
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The game was not properly saved after\n"
	.string "starting the item fabrication process.\p"
	.string "The mud samples have been discarded.$"

WeakPrize::
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Huh…\p"
	.string "I don't think that output was the best\n"
	.string "we can expect from the machine.\p"
	.string "But worry not, my data shows that the\n"
	.string "machine has stored up some minerals\l"
	.string "and is preparing to fabricate\l"
	.string "something great!$"

MidPrize::
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Hmm…\p"
	.string "That wasn't bad, but I don't think\n"
	.string "it's the pinnacle of what this\l"
	.string "machine is able to fabricate.\p"
	.string "But worry not, my data shows that the\n"
	.string "machine has stored up some minerals\l"
	.string "and is preparing to fabricate\l"
	.string "something great!$"

GrandPrize::
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Oh my!\p"
	.string "Now that is something worth\n"
	.string "celebrating!\p"
	.string "However, my data would suggest that\n"
	.string "this was a fluke and that any\l"
	.string "residue minerals from previous\l"
	.string "attempts are still stored inside\l"
	.string "the machine.$"

GrandPrizeFirstTime::
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Oh my!\p"
	.string "Now that is something worth\n"
	.string "celebrating!\p"
	.string "I never expected to see two\n"
	.string "back-to-back fine items like that!$"

ExtraPrize::
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Oh my!\p"
	.string "Looking at the data produced by the\n"
	.string "machine, I believe that outcome to be\l"
	.string "something fabricated from the piled-up\l"
	.string "minerals the machine had been saving.\p"
	.string "Even if it did take a few attempts to\n"
	.string "get there, I still believe this to be\l"
	.string "a great outcome!$"

GiveASpin::
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Looks like you've collected enough\n"
	.string "mud samples.\p"
	.string "How about giving the machine a spin?$"

MudSamplesFull::
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Looks like your Sample Box is full\n"
	.string "of mud samples.\p"
	.string "I don't think you can fit any more\n"
	.string "mud samples in it until you give\l"
	.string "the machine a spin.$"

NotEnoughMudSamples::
# 90 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Looks like you don't have enough mud\n"
	.string "samples to fabricate any more items.\p"
	.string "If you want to give the machine a spin,\n"
	.string "I suggest heading out there and\l"
	.string "searching for more clumps of mud.\p"
	.string "If you want to know how many mud\n"
	.string "samples you have, you can always check\l"
	.string "the Sample Box in your bag.$"

FirstMudBall::
# 238 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A pretty good first item you got\n"
	.string "there, I'd say!\p"
	.string "There's no telling what will come out\n"
	.string "of the machine next so we better keep\l"
	.string "feeding it more mud samples!\p"
	.string "Sometimes the machine may give out\n"
	.string "items that are of inferior quality,\l"
	.string "but that's only because it's saving\l"
	.string "the truly exquisite minerals for\l"
	.string "something grander.\p"
	.string "If you keep using the machine, I'm\n"
	.string "sure it will fabricate something\l"
	.string "great eventually!$"

MudBallWaiting::
# 253 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Looks like the machine successfully\n"
	.string "fabricated an item.\p"
	.string "As promised, it's all yours.\n"
	.string "go ahead and pick it up!$"

PleaseRemoveItemFromTray::
# 259 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Your item is now ready to be\n"
	.string "picked up.\p"
	.string "Please clear the table before\n"
	.string "fabricating again.$"

Fabricating::
# 265 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAY_SE SE_ELEVATOR}Fabricating…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}\n"
	.string "{PLAY_SE SE_DING_DONG}Fabrication completed.{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

BeginFabrication::
# 269 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Initializing item fabrication…$"

ReadyToFabricate::
# 272 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's a machine used to fabricate\n"
	.string "items from mud samples.\p"
	.string "You have {STR_VAR_1} mud samples.$"

ReadyToFabricate2::
# 277 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Insert 3 mud samples and\n"
	.string "¥500 into the machine?$"

Extractinator_Idle::
# 281 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The machine stands idle.$"

Extractinator_PickUpTreasure::
# 284 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Please clear the table before\n"
	.string "fabricating again.$"

LanettesHouse_PC_Text::
# 292 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The screen is full of all sorts of\n"
	.string "research data.\p"
	.string "…Better leave it be.$"

SampleBoxIntro::
# 298 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Oh?\p"
	.string "I see a fine explorer has stumbled\n"
	.string "upon my humble abode!\p"
	.string "Welcome, welcome!\p"
	.string "Not many people know this, but the\n"
	.string "mud out there, it's full of riches!\p"
	.string "That is why I've been developing\n"
	.string "a machine that extracts the rich\l"
	.string "minerals from the mud and uses\l"
	.string "those to fabricate all kinds of\l"
	.string "items of interest.\p"
	.string "Here, why don't you give it a try?$"

SampleBoxIntro2::
# 312 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When you're exploring Route 7, you\n"
	.string "may come across clumps of mud.\p"
	.string "All you need to do is scoop them up\n"
	.string "and place the mud samples in that box.\p"
	.string "I'm sure there has to always be at\n"
	.string "least one clump somewhere!\p"
	.string "Once you have at least 3 samples\n"
	.string "of mud, come back here and insert\l"
	.string "the samples in the machine on that\l"
	.string "wall over there.\p"
	.string "There's a small fee to use the machine\n"
	.string "but I promise that anything you find\l"
	.string "is yours to keep!$"

SampleBoxIntro3::
# 327 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Oh, and one more thing!\p"
	.string "That box can only hold up to 30\n"
	.string "samples of mud so you should come\l"
	.string "and use the machine every now and then\l"
	.string "or you'll be just wasting resources!$"
