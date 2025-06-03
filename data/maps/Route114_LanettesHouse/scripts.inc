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
# 154 "data/maps/Route114_LanettesHouse/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_MUD_SAMPLES
# 155 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_MUD_REWARD_WAITING, LanettesHouse_Scientist_24
# 159 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_eq LanettesHouse_Scientist_30
# 163 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_SAMPLES, 2
	goto_if_le LanettesHouse_Scientist_33
# 167 "data/maps/Route114_LanettesHouse/scripts.pory"
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
# 148 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_Q19_MUDSCIENTIST_START, LanettesHouse_Scientist_27
LanettesHouse_Scientist_26:
	end

LanettesHouse_Scientist_24:
# 156 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox MudBallWaiting, MSGBOX_NPC
	end

LanettesHouse_Scientist_27:
# 149 "data/maps/Route114_LanettesHouse/scripts.pory"
	startquest FLAG_Q19_MUDSCIENTIST_START
# 150 "data/maps/Route114_LanettesHouse/scripts.pory"
	special ShowJournalPopupAdd
	goto LanettesHouse_Scientist_26

LanettesHouse_Scientist_30:
# 160 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox MudSamplesFull, MSGBOX_NPC
	end

LanettesHouse_Scientist_33:
# 164 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox NotEnoughMudSamples, MSGBOX_NPC
	end


LanettesHouse_Extractinator::
# 170 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkmoney 500
# 171 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Extractinator_2
# 171 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_SAMPLES, 2
	goto_if_le LanettesHouse_Extractinator_2
# 176 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_MUD_REWARD_WAITING, LanettesHouse_Extractinator_7
# 181 "data/maps/Route114_LanettesHouse/scripts.pory"
	call TurnExtractinatorOn
# 182 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 183 "data/maps/Route114_LanettesHouse/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_MUD_SAMPLES
# 184 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ReadyToFabricate
# 185 "data/maps/Route114_LanettesHouse/scripts.pory"
	showmoneybox 0, 0
# 186 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ReadyToFabricate2, MSGBOX_YESNO
# 187 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Extractinator_10
# 196 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_SHOP
# 197 "data/maps/Route114_LanettesHouse/scripts.pory"
	removemoney 500
# 198 "data/maps/Route114_LanettesHouse/scripts.pory"
	updatemoneybox
# 199 "data/maps/Route114_LanettesHouse/scripts.pory"
	subvar VAR_MUD_SAMPLES, 3
# 200 "data/maps/Route114_LanettesHouse/scripts.pory"
	setobjectxyperm 2, 5, 1
# 201 "data/maps/Route114_LanettesHouse/scripts.pory"
	clearflag FLAG_MUD_REWARD_WAITING
# 202 "data/maps/Route114_LanettesHouse/scripts.pory"
	addobject 2
# 203 "data/maps/Route114_LanettesHouse/scripts.pory"
	message BeginFabrication
# 204 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmessage
# 205 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 80
# 206 "data/maps/Route114_LanettesHouse/scripts.pory"
	hidemoneybox
# 207 "data/maps/Route114_LanettesHouse/scripts.pory"
	message Fabricating
# 208 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 30
# 209 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmessage
# 210 "data/maps/Route114_LanettesHouse/scripts.pory"
	closemessage
# 211 "data/maps/Route114_LanettesHouse/scripts.pory"
	safefollow
# 212 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 2, Walk1Down
# 213 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox PleaseRemoveItemFromTray
# 215 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 216 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 217 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 218 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end

LanettesHouse_Extractinator_2:
# 172 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_SELECT
# 173 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Extractinator_Idle, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_7:
# 177 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_SELECT
# 178 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Extractinator_PickUpTreasure, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_10:
# 188 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_PC_OFF
# 189 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 190 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 191 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 192 "data/maps/Route114_LanettesHouse/scripts.pory"
	hidemoneybox
# 193 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


TurnExtractinatorOn::
# 222 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_PC_ON
# 223 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 224 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2B1, TRUE
# 225 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 226 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 227 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 228 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 229 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 230 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2B1, TRUE
# 231 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 232 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 233 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2A1, TRUE
# 234 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 235 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 236 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 6
# 237 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 3, 1, 0x2B1, TRUE
# 238 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
	return


LanettesHouse_PC::
# 294 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox LanettesHouse_PC_Text, MSGBOX_SIGN
	return


ExtractBall::
# 340 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_BAD_LUCK_PROTECTION, 100
	goto_if_ge ExtractBall_2
# 346 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_MUD_INTRO, ExtractBall_5
# 352 "data/maps/Route114_LanettesHouse/scripts.pory"
	random 15
# 353 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 354 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvar VAR_TEMP_7, 20
# 355 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_1, 0
	goto_if_ne ExtractBall_8
# 359 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_2, 0
	goto_if_ne ExtractBall_9
# 363 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_3, 0
	goto_if_ne ExtractBall_10
# 367 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_4, 0
	goto_if_ne ExtractBall_11
# 371 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_5, 0
	goto_if_ne ExtractBall_12
# 375 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_6, 0
	goto_if_ne ExtractBall_13
# 379 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_7, 0
	goto_if_ne ExtractBall_14
# 383 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_8, 0
	goto_if_ne ExtractBall_15
# 387 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_9, 0
	goto_if_ne ExtractBall_16
# 391 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_MUD_REWARD_10, 0
	goto_if_ne ExtractBall_17
ExtractBall_7:
# 395 "data/maps/Route114_LanettesHouse/scripts.pory"
	switch VAR_MUD_REWARD
# 396 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 0, ExtractBall_30
# 397 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 1, ExtractBall_30
# 401 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 2, ExtractBall_31
# 402 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 3, ExtractBall_31
# 406 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 4, ExtractBall_32
# 407 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 5, ExtractBall_32
# 411 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 6, ExtractBall_33
# 412 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 7, ExtractBall_33
# 416 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 8, ExtractBall_34
# 417 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 9, ExtractBall_34
# 421 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 10, ExtractBall_35
# 422 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 11, ExtractBall_35
# 426 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 12, ExtractBall_36
# 427 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 13, ExtractBall_36
# 431 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 14, ExtractBall_37
# 432 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 15, ExtractBall_37
# 436 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 16, ExtractBall_38
# 437 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 17, ExtractBall_38
# 441 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 18, ExtractBall_39
# 442 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 19, ExtractBall_39
# 446 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 20, ExtractBall_40
# 447 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 21, ExtractBall_40
# 451 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 22, ExtractBall_41
# 452 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 23, ExtractBall_41
# 456 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 24, ExtractBall_42
# 457 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 25, ExtractBall_42
# 461 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 26, ExtractBall_43
# 462 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 27, ExtractBall_43
# 466 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 28, ExtractBall_44
# 467 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 29, ExtractBall_44
# 471 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 30, ExtractBall_45
# 472 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 31, ExtractBall_45
# 476 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 32, ExtractBall_46
# 477 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 33, ExtractBall_46
# 481 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 34, ExtractBall_47
# 482 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 35, ExtractBall_47
# 486 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 36, ExtractBall_48
# 487 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 37, ExtractBall_48
# 488 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 38, ExtractBall_48
# 489 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 39, ExtractBall_48
# 493 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 40, ExtractBall_49
# 494 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 41, ExtractBall_49
# 495 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 42, ExtractBall_49
# 496 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 43, ExtractBall_49
# 500 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 44, ExtractBall_50
# 501 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 45, ExtractBall_50
# 502 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 46, ExtractBall_50
# 503 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 47, ExtractBall_50
# 507 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 48, ExtractBall_51
# 508 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 49, ExtractBall_51
# 509 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 50, ExtractBall_51
# 510 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 51, ExtractBall_51
# 514 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 52, ExtractBall_52
# 515 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 53, ExtractBall_52
# 516 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 54, ExtractBall_52
# 517 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 55, ExtractBall_52
# 521 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 56, ExtractBall_53
# 522 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 57, ExtractBall_53
# 523 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 58, ExtractBall_53
# 524 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 59, ExtractBall_53
# 528 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 60, ExtractBall_54
# 529 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 61, ExtractBall_54
# 530 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 62, ExtractBall_54
# 531 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 63, ExtractBall_54
# 535 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 64, ExtractBall_55
# 536 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 65, ExtractBall_55
# 537 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 66, ExtractBall_55
# 538 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 67, ExtractBall_55
# 542 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 68, ExtractBall_56
# 543 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 69, ExtractBall_56
# 544 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 70, ExtractBall_56
# 545 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 71, ExtractBall_56
# 549 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 72, ExtractBall_57
# 550 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 73, ExtractBall_57
# 551 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 74, ExtractBall_57
# 552 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 75, ExtractBall_57
# 556 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 76, ExtractBall_58
# 557 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 77, ExtractBall_58
# 558 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 78, ExtractBall_58
# 559 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 79, ExtractBall_58
# 563 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 80, ExtractBall_59
# 564 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 81, ExtractBall_59
# 565 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 82, ExtractBall_59
# 566 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 83, ExtractBall_59
# 570 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 84, ExtractBall_60
# 574 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 85, ExtractBall_61
# 578 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 86, ExtractBall_62
# 582 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 87, ExtractBall_63
# 586 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 88, ExtractBall_64
# 587 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 89, ExtractBall_64
# 591 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 90, ExtractBall_65
# 592 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 91, ExtractBall_65
# 593 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 92, ExtractBall_65
# 594 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 93, ExtractBall_65
# 595 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 94, ExtractBall_65
# 596 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 95, ExtractBall_65
# 597 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 96, ExtractBall_65
# 598 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 97, ExtractBall_65
# 599 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 98, ExtractBall_65
# 600 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 99, ExtractBall_65
ExtractBall_28:
# 604 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_Q19_MUDSCIENTIST_START, ExtractBall_67
	return

ExtractBall_2:
# 341 "data/maps/Route114_LanettesHouse/scripts.pory"
	call GrandPrizeRandomization
# 342 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_BAD_LUCK_PROTECTION, 0
# 343 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1003
	end

ExtractBall_5:
# 347 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ANCIENT_STONE
# 348 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 999
# 349 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_MUD_INTRO
	end

ExtractBall_8:
# 356 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_1
# 357 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_1, 0
	goto ExtractBall_7

ExtractBall_9:
# 360 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_2
# 361 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_2, 0
	goto ExtractBall_7

ExtractBall_10:
# 364 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_3
# 365 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_3, 0
	goto ExtractBall_7

ExtractBall_11:
# 368 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_4
# 369 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_4, 0
	goto ExtractBall_7

ExtractBall_12:
# 372 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_5
# 373 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_5, 0
	goto ExtractBall_7

ExtractBall_13:
# 376 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_6
# 377 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_6, 0
	goto ExtractBall_7

ExtractBall_14:
# 380 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_7
# 381 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_7, 0
	goto ExtractBall_7

ExtractBall_15:
# 384 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_8
# 385 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_8, 0
	goto ExtractBall_7

ExtractBall_16:
# 388 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_9
# 389 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_9, 0
	goto ExtractBall_7

ExtractBall_17:
# 392 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_10
# 393 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD_10, 0
	goto ExtractBall_7

ExtractBall_30:
# 398 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_NORMAL_GEM, 2
# 399 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 400 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_31:
# 403 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FIRE_GEM, 2
# 404 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 405 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_32:
# 408 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_WATER_GEM, 2
# 409 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 410 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_33:
# 413 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ELECTRIC_GEM, 2
# 414 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 415 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_34:
# 418 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GRASS_GEM, 2
# 419 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 420 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_35:
# 423 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ICE_GEM, 2
# 424 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 425 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_36:
# 428 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FIGHTING_GEM, 2
# 429 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 430 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_37:
# 433 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_POISON_GEM, 2
# 434 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 435 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_38:
# 438 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GROUND_GEM, 2
# 439 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 440 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_39:
# 443 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FLYING_GEM, 2
# 444 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 445 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_40:
# 448 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_PSYCHIC_GEM, 2
# 449 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 450 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_41:
# 453 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BUG_GEM, 2
# 454 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 455 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_42:
# 458 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ROCK_GEM, 2
# 459 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 460 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_43:
# 463 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GHOST_GEM, 2
# 464 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 465 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_44:
# 468 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_DRAGON_GEM, 2
# 469 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 470 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_45:
# 473 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_DARK_GEM, 2
# 474 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 475 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_46:
# 478 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_STEEL_GEM, 2
# 479 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 480 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_47:
# 483 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FAIRY_GEM, 2
# 484 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 485 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1000
	goto ExtractBall_28

ExtractBall_48:
# 490 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_NUGGET
# 491 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 492 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_49:
# 497 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_PEARL, 2
# 498 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 499 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_50:
# 504 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RARE_BONE
# 505 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 506 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_51:
# 511 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RELIC_COPPER, 3
# 512 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 513 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_52:
# 518 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RELIC_SILVER
# 519 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 520 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_53:
# 525 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_HEART_SCALE
# 526 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 527 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_54:
# 532 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_NUGGET
# 533 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 534 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_55:
# 539 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_PEARL
# 540 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 541 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_56:
# 546 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RED_SHARD
# 547 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 548 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_57:
# 553 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BLUE_SHARD
# 554 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 555 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_58:
# 560 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_YELLOW_SHARD
# 561 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 562 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_59:
# 567 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GREEN_SHARD
# 568 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 569 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_60:
# 571 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_PEARL
# 572 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 573 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_61:
# 575 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_RED_SHARD
# 576 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 577 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_62:
# 579 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BLUE_SHARD
# 580 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 581 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_63:
# 583 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_YELLOW_SHARD
# 584 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 585 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_64:
# 588 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_GREEN_SHARD
# 589 "data/maps/Route114_LanettesHouse/scripts.pory"
	addvartovar
# 590 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1001
	goto ExtractBall_28

ExtractBall_65:
# 601 "data/maps/Route114_LanettesHouse/scripts.pory"
	call GrandPrizeRandomization
# 602 "data/maps/Route114_LanettesHouse/scripts.pory"
	setvar VAR_MUD_REWARD, 1002
	goto ExtractBall_28

ExtractBall_66:
# 605 "data/maps/Route114_LanettesHouse/scripts.pory"
	completequest FLAG_Q19_MUDSCIENTIST_COMPLETE
# 606 "data/maps/Route114_LanettesHouse/scripts.pory"
	special ShowJournalPopupRemove
	return

ExtractBall_67:
# 604 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_Q19_MUDSCIENTIST_COMPLETE, ExtractBall_66
	return


GrandPrizeRandomization::
# 611 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, GrandPrizeRandomization_3
GrandPrizeRandomization_1:
# 616 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_ANCIENT_STONE, 3
# 617 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_7
GrandPrizeRandomization_6:
# 639 "data/maps/Route114_LanettesHouse/scripts.pory"
	random 5
# 640 "data/maps/Route114_LanettesHouse/scripts.pory"
	copyvar VAR_TEMP_6, VAR_RESULT
# 641 "data/maps/Route114_LanettesHouse/scripts.pory"
	switch VAR_TEMP_6
# 642 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 0, GrandPrizeRandomization_11
# 648 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 1, GrandPrizeRandomization_12
# 654 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 2, GrandPrizeRandomization_13
# 660 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 3, GrandPrizeRandomization_14
# 666 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 4, GrandPrizeRandomization_15
GrandPrizeRandomization_9:
	return

GrandPrizeRandomization_2:
# 612 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_OBTAINED_AERODACTYLITE
# 613 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_AERODACTYLITE
	return

GrandPrizeRandomization_3:
# 611 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_unset FLAG_OBTAINED_AERODACTYLITE, GrandPrizeRandomization_2
	goto GrandPrizeRandomization_1

GrandPrizeRandomization_7:
# 618 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_BIRD
# 619 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_16
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_11:
# 643 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_BIRD
# 644 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_19
GrandPrizeRandomization_18:
# 647 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_BIRD
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_12:
# 649 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DINO
# 650 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_22
GrandPrizeRandomization_21:
# 653 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_DINO
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_13:
# 655 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DRAKE
# 656 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_25
GrandPrizeRandomization_24:
# 659 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_DRAKE
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_14:
# 661 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_FISH
# 662 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_28
GrandPrizeRandomization_27:
# 665 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_FOSSILIZED_FISH
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_15:
# 667 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_ANCIENT_STONE, 3
# 668 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_31
GrandPrizeRandomization_30:
# 671 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ANCIENT_STONE
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_16:
# 620 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DINO
# 621 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_33
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_19:
# 645 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_18

GrandPrizeRandomization_22:
# 651 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_21

GrandPrizeRandomization_25:
# 657 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_24

GrandPrizeRandomization_28:
# 663 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_27

GrandPrizeRandomization_31:
# 669 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_30

GrandPrizeRandomization_33:
# 622 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_DRAKE
# 623 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_35
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_35:
# 624 "data/maps/Route114_LanettesHouse/scripts.pory"
	checkitem ITEM_FOSSILIZED_FISH
# 625 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_37
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_37:
# 626 "data/maps/Route114_LanettesHouse/scripts.pory"
	random 10
# 627 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge GrandPrizeRandomization_40
# 631 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_ANCIENT_STONE
GrandPrizeRandomization_39:
	return

GrandPrizeRandomization_40:
# 628 "data/maps/Route114_LanettesHouse/scripts.pory"
	finditem ITEM_BIG_NUGGET, 2
	goto GrandPrizeRandomization_39


GrandPrizeLoop::
# 677 "data/maps/Route114_LanettesHouse/scripts.pory"
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
# 242 "data/maps/Route114_LanettesHouse/scripts.pory"
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
# 257 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Looks like the machine successfully\n"
	.string "fabricated an item.\p"
	.string "As promised, it's all yours.\n"
	.string "go ahead and pick it up!$"

PleaseRemoveItemFromTray::
# 263 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Your item is now ready to be\n"
	.string "picked up.\p"
	.string "Please clear the table before\n"
	.string "fabricating again.$"

Fabricating::
# 269 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAY_SE SE_ELEVATOR}Fabricating…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}\n"
	.string "{PLAY_SE SE_DING_DONG}Fabrication completed.{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

BeginFabrication::
# 273 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Initializing item fabrication…$"

ReadyToFabricate::
# 276 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's a machine used to fabricate\n"
	.string "items from mud samples.\p"
	.string "You have {STR_VAR_1} mud samples.$"

ReadyToFabricate2::
# 281 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Insert 3 mud samples and\n"
	.string "¥500 into the machine?$"

Extractinator_Idle::
# 285 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The machine stands idle.$"

Extractinator_PickUpTreasure::
# 288 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Please clear the table before\n"
	.string "fabricating again.$"

LanettesHouse_PC_Text::
# 296 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The screen is full of all sorts of\n"
	.string "research data.\p"
	.string "…Better leave it be.$"

SampleBoxIntro::
# 302 "data/maps/Route114_LanettesHouse/scripts.pory"
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
# 316 "data/maps/Route114_LanettesHouse/scripts.pory"
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
# 331 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Oh, and one more thing!\p"
	.string "That box can only hold up to 30\n"
	.string "samples of mud so you should come\l"
	.string "and use the machine every now and then\l"
	.string "or you'll be just wasting resources!$"
