BasaluffTown_MapScripts::
# 7 "data/maps/BasaluffTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/BasaluffTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 25 "data/maps/BasaluffTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BasaluffTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BasaluffTown/scripts.pory"
	setflag FLAG_VISITED_BASALEK
# 9 "data/maps/BasaluffTown/scripts.pory"
	call SetupRivalGfxId
# 10 "data/maps/BasaluffTown/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 11 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_TEMP_3, 23
	goto_if_eq BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 18 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_HOUR_OVERRIDE, 12
	return

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 11 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_TEMP_4, 16
	goto_if_eq BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/BasaluffTown/scripts.pory"
	setobjectxyperm 10, 24, 16
# 16 "data/maps/BasaluffTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	goto BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 21 "data/maps/BasaluffTown/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 22 "data/maps/BasaluffTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return

BasaluffTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/BasaluffTown/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, BasaluffAutomaticRivalFight
	.2byte 0


BasaluffAutomaticRivalFight::
# 31 "data/maps/BasaluffTown/scripts.pory"
	delay 30
# 32 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_TEMP_5, 0
	checkplayergender
# 0 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BasaluffAutomaticRivalFight_2
# 46 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffBrendan_LetsStart
# 47 "data/maps/BasaluffTown/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_BASALEK_TOWN, BasalekBrendan_LostText
# 48 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasaluffAutomaticRivalFight_9
# 52 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffBrendan_NoMegaPostBattle
BasaluffAutomaticRivalFight_8:
# 54 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffBrendan_Goodbye
BasaluffAutomaticRivalFight_1:
# 56 "data/maps/BasaluffTown/scripts.pory"
	closemessage
# 57 "data/maps/BasaluffTown/scripts.pory"
	safefollow
# 58 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, BasaluffAutomaticRivalFight_Movement_0
# 59 "data/maps/BasaluffTown/scripts.pory"
	waitmovement 0
# 60 "data/maps/BasaluffTown/scripts.pory"
	setflag FLAG_RIVAL_MET_IN_BASALEK
# 61 "data/maps/BasaluffTown/scripts.pory"
	removeobject 10
# 62 "data/maps/BasaluffTown/scripts.pory"
	release
	return

BasaluffAutomaticRivalFight_2:
# 34 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_LetsStart
# 35 "data/maps/BasaluffTown/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_BASALEK_TOWN, BasalekMay_LostText
# 36 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasaluffAutomaticRivalFight_5
# 41 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_NoMegaPostBattle
# 42 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_Goodbye2
	goto BasaluffAutomaticRivalFight_1

BasaluffAutomaticRivalFight_5:
# 37 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_PostBattle
# 38 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_Goodbye
	goto BasaluffAutomaticRivalFight_1

BasaluffAutomaticRivalFight_9:
# 49 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffBrendan_PostBattle
	goto BasaluffAutomaticRivalFight_8


BasalekTown_Sign1::
# 150 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Sign1_Text, MSGBOX_SIGN
	return


BasalekTown_Sign2::
# 158 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Sign2_Text, MSGBOX_SIGN
	return


BasalekTown_Man5::
# 166 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Man5_Text, MSGBOX_NPC
# 167 "data/maps/BasaluffTown/scripts.pory"
	goto_if_unset FLAG_Q38_BASALEK_TUNNELS_START, BasalekTown_Man5_2
	return

BasalekTown_Man5_1:
# 168 "data/maps/BasaluffTown/scripts.pory"
	startquest FLAG_Q38_BASALEK_TUNNELS_START
# 169 "data/maps/BasaluffTown/scripts.pory"
	special ShowJournalPopupAdd
	return

BasalekTown_Man5_2:
# 167 "data/maps/BasaluffTown/scripts.pory"
	checktrainerflag TRAINER_BASALTUNNEL_TR12_BROCK
	goto_if 0, BasalekTown_Man5_1
	return


BasalekTown_RichBoy::
# 183 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_RichBoy_Text, MSGBOX_NPC
	return


BasalekTown_Twin::
# 190 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Twin_Text, MSGBOX_NPC
	return


BasalekTown_OldMan::
# 198 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_OldMan_Text, MSGBOX_NPC
	return


BasalekTown_HealTrigger::
# 208 "data/maps/BasaluffTown/scripts.pory"
	lock
# 209 "data/maps/BasaluffTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 210 "data/maps/BasaluffTown/scripts.pory"
	special HealPlayerParty
# 211 "data/maps/BasaluffTown/scripts.pory"
	setrespawn HEAL_LOCATION_BASALUFF_TOWN
# 212 "data/maps/BasaluffTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 213 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_HealTrigger_Text
# 214 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_TEMP_0, 1
# 215 "data/maps/BasaluffTown/scripts.pory"
	release
	return


BasalekTown_HealTrigger2::
# 224 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 225 "data/maps/BasaluffTown/scripts.pory"
	release
	return


BasalekTown_Beauty::
# 228 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Beauty_Text, MSGBOX_SIGN
	return


BasalekTown_EggWoman::
# 237 "data/maps/BasaluffTown/scripts.pory"
	lock
# 238 "data/maps/BasaluffTown/scripts.pory"
	faceplayer
# 239 "data/maps/BasaluffTown/scripts.pory"
	checkdexmon SPECIES_EEVEE
# 240 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BasalekTown_EggWoman_3
BasalekTown_EggWoman_1:
# 245 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, BasalekTown_EggWoman_7
	msgbox BasalekTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 0 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekTown_EggWoman_10
# 253 "data/maps/BasaluffTown/scripts.pory"
	getpartysize
# 254 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq BasalekTown_EggWoman_13
# 258 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Text_HopeYoullWalkPlentyWithEgg
# 259 "data/maps/BasaluffTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 260 "data/maps/BasaluffTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/BasaluffTown/scripts.pory"
	message BasalekTown_Text_ReceivedTheEgg
# 262 "data/maps/BasaluffTown/scripts.pory"
	waitfanfare
# 263 "data/maps/BasaluffTown/scripts.pory"
	giveegg SPECIES_EEVEE
# 264 "data/maps/BasaluffTown/scripts.pory"
	release
	return

BasalekTown_EggWoman_2:
# 241 "data/maps/BasaluffTown/scripts.pory"
	setflag FLAG_EEVEE_EGG_SHOWN
# 242 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_EggHatched, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_3:
# 240 "data/maps/BasaluffTown/scripts.pory"
	goto_if_unset FLAG_EEVEE_EGG_SHOWN, BasalekTown_EggWoman_2
	goto BasalekTown_EggWoman_1

BasalekTown_EggWoman_7:
# 246 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_10:
# 250 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Text_AsYouWishThen, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_13:
# 255 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_Text_NoRoomForThisEgg, MSGBOX_AUTOCLOSE
	end


BasalekTown_RivalTrigger1::
# 314 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_TEMP_2, 1
# 315 "data/maps/BasaluffTown/scripts.pory"
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalTrigger2::
# 318 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_TEMP_2, 2
# 319 "data/maps/BasaluffTown/scripts.pory"
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalTrigger3::
# 322 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_TEMP_2, 3
# 323 "data/maps/BasaluffTown/scripts.pory"
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalScript::
# 327 "data/maps/BasaluffTown/scripts.pory"
	lock
# 328 "data/maps/BasaluffTown/scripts.pory"
	safefollow
# 329 "data/maps/BasaluffTown/scripts.pory"
	getfollowerxy VAR_TEMP_3, VAR_TEMP_4
# 330 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_ne BasalekTown_RivalScript_2
BasalekTown_RivalScript_1:
# 333 "data/maps/BasaluffTown/scripts.pory"
	delay 5
# 334 "data/maps/BasaluffTown/scripts.pory"
	opendoor 20, 15
# 335 "data/maps/BasaluffTown/scripts.pory"
	waitdooranim
# 336 "data/maps/BasaluffTown/scripts.pory"
	addobject 10
# 337 "data/maps/BasaluffTown/scripts.pory"
	setobjectxy 10, 20, 15
# 338 "data/maps/BasaluffTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 339 "data/maps/BasaluffTown/scripts.pory"
	delay 16
# 340 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, Walk1Down
# 341 "data/maps/BasaluffTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/BasaluffTown/scripts.pory"
	closedoor 20, 15
# 343 "data/maps/BasaluffTown/scripts.pory"
	waitdooranim
# 344 "data/maps/BasaluffTown/scripts.pory"
	switch VAR_TEMP_2
# 345 "data/maps/BasaluffTown/scripts.pory"
	case 1, BasalekTown_RivalScript_6
# 355 "data/maps/BasaluffTown/scripts.pory"
	case 2, BasalekTown_RivalScript_7
# 365 "data/maps/BasaluffTown/scripts.pory"
	case 3, BasalekTown_RivalScript_8
BasalekTown_RivalScript_4:
# 376 "data/maps/BasaluffTown/scripts.pory"
	waitmovement 10
# 377 "data/maps/BasaluffTown/scripts.pory"
	waitmovement LOCALID_PLAYER
# 378 "data/maps/BasaluffTown/scripts.pory"
	delay 24
	checkplayergender
# 0 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BasalekTown_RivalScript_10
# 403 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK_MART, BasalekTown_RivalScript_23
# 412 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffTown_Brendan_NoBails
BasalekTown_RivalScript_22:
# 414 "data/maps/BasaluffTown/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_BASALEK_TOWN, BasalekBrendan_LostText
# 415 "data/maps/BasaluffTown/scripts.pory"
	release
# 416 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasalekTown_RivalScript_33
# 420 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffBrendan_NoMegaPostBattle
BasalekTown_RivalScript_32:
# 422 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffBrendan_Goodbye
BasalekTown_RivalScript_9:
# 424 "data/maps/BasaluffTown/scripts.pory"
	closemessage
# 425 "data/maps/BasaluffTown/scripts.pory"
	safefollow
# 426 "data/maps/BasaluffTown/scripts.pory"
	switch VAR_TEMP_2
# 427 "data/maps/BasaluffTown/scripts.pory"
	case 1, BasalekTown_RivalScript_15
# 429 "data/maps/BasaluffTown/scripts.pory"
	case 2, BasalekTown_RivalScript_16
# 431 "data/maps/BasaluffTown/scripts.pory"
	case 3, BasalekTown_RivalScript_17
BasalekTown_RivalScript_13:
# 435 "data/maps/BasaluffTown/scripts.pory"
	waitmovement 10
# 436 "data/maps/BasaluffTown/scripts.pory"
	waitmovement LOCALID_PLAYER
# 437 "data/maps/BasaluffTown/scripts.pory"
	setflag FLAG_RIVAL_MET_IN_BASALEK
# 438 "data/maps/BasaluffTown/scripts.pory"
	removeobject 10
# 439 "data/maps/BasaluffTown/scripts.pory"
	release
	return

BasalekTown_RivalScript_2:
# 331 "data/maps/BasaluffTown/scripts.pory"
	unlockfollowermovement
	goto BasalekTown_RivalScript_1

BasalekTown_RivalScript_6:
# 346 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, BasalekTown_RivalScript_Movement_0
# 347 "data/maps/BasaluffTown/scripts.pory"
	delay 48
# 348 "data/maps/BasaluffTown/scripts.pory"
	applymovement LOCALID_PLAYER, BasalekTown_RivalScript_Movement_1
# 349 "data/maps/BasaluffTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_1
# 350 "data/maps/BasaluffTown/scripts.pory"
	unlockfollowermovement
# 351 "data/maps/BasaluffTown/scripts.pory"
	delay 64
# 352 "data/maps/BasaluffTown/scripts.pory"
	applymovement LOCALID_PLAYER, BasalekTown_RivalScript_Movement_2
# 353 "data/maps/BasaluffTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_2
# 354 "data/maps/BasaluffTown/scripts.pory"
	unlockfollowermovement
	goto BasalekTown_RivalScript_4

BasalekTown_RivalScript_7:
# 356 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, BasalekTown_RivalScript_Movement_3
# 357 "data/maps/BasaluffTown/scripts.pory"
	delay 64
# 358 "data/maps/BasaluffTown/scripts.pory"
	applymovement LOCALID_PLAYER, BasalekTown_RivalScript_Movement_1
# 359 "data/maps/BasaluffTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_1
# 360 "data/maps/BasaluffTown/scripts.pory"
	unlockfollowermovement
# 361 "data/maps/BasaluffTown/scripts.pory"
	delay 64
# 362 "data/maps/BasaluffTown/scripts.pory"
	applymovement LOCALID_PLAYER, BasalekTown_RivalScript_Movement_2
# 363 "data/maps/BasaluffTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_2
# 364 "data/maps/BasaluffTown/scripts.pory"
	unlockfollowermovement
	goto BasalekTown_RivalScript_4

BasalekTown_RivalScript_8:
# 366 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, BasalekTown_RivalScript_Movement_4
# 367 "data/maps/BasaluffTown/scripts.pory"
	delay 64
# 368 "data/maps/BasaluffTown/scripts.pory"
	applymovement LOCALID_PLAYER, BasalekTown_RivalScript_Movement_1
# 369 "data/maps/BasaluffTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_1
# 370 "data/maps/BasaluffTown/scripts.pory"
	unlockfollowermovement
# 371 "data/maps/BasaluffTown/scripts.pory"
	delay 48
# 372 "data/maps/BasaluffTown/scripts.pory"
	applymovement LOCALID_PLAYER, BasalekTown_RivalScript_Movement_5
# 373 "data/maps/BasaluffTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_5
# 374 "data/maps/BasaluffTown/scripts.pory"
	unlockfollowermovement
	goto BasalekTown_RivalScript_4

BasalekTown_RivalScript_10:
# 380 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK_MART, BasalekTown_RivalScript_19
# 389 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffTown_May_NoBails
BasalekTown_RivalScript_18:
# 391 "data/maps/BasaluffTown/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_BASALEK_TOWN, BasalekMay_LostText
# 392 "data/maps/BasaluffTown/scripts.pory"
	release
# 393 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasalekTown_RivalScript_26
# 398 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_NoMegaPostBattle
# 399 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_Goodbye2
	goto BasalekTown_RivalScript_9

BasalekTown_RivalScript_15:
# 428 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, BasalekTown_RivalScript_Movement_6
	goto BasalekTown_RivalScript_13

BasalekTown_RivalScript_16:
# 430 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, BasalekTown_RivalScript_Movement_7
	goto BasalekTown_RivalScript_13

BasalekTown_RivalScript_17:
# 432 "data/maps/BasaluffTown/scripts.pory"
	applymovement 10, BasalekTown_RivalScript_Movement_8
# 433 "data/maps/BasaluffTown/scripts.pory"
	applymovement LOCALID_PLAYER, BasalekTown_RivalScript_Movement_9
	goto BasalekTown_RivalScript_13

BasalekTown_RivalScript_19:
# 381 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, BasalekTown_RivalScript_29
# 385 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffTown_May_1Bail
	goto BasalekTown_RivalScript_18

BasalekTown_RivalScript_23:
# 404 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, BasalekTown_RivalScript_36
# 408 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffTown_Brendan_1Bail
	goto BasalekTown_RivalScript_22

BasalekTown_RivalScript_26:
# 394 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_PostBattle
# 395 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffMay_Goodbye
	goto BasalekTown_RivalScript_9

BasalekTown_RivalScript_29:
# 382 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffTown_May_2Bails
	goto BasalekTown_RivalScript_18

BasalekTown_RivalScript_33:
# 417 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffBrendan_PostBattle
	goto BasalekTown_RivalScript_32

BasalekTown_RivalScript_36:
# 405 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasaluffTown_Brendan_2Bails
	goto BasalekTown_RivalScript_22


# 442 "data/maps/BasaluffTown/scripts.pory"
TurnPlayerAndFollowerRight:
# 443 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 443 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 444 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_right
	step_end

BasalekTown_LevelChecker::
# 508 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_DAILY_BASALEK_CHECKER, BasalekTown_LevelChecker_2
# 512 "data/maps/BasaluffTown/scripts.pory"
	lock
# 513 "data/maps/BasaluffTown/scripts.pory"
	faceplayer
# 514 "data/maps/BasaluffTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_BASALEK_LEVEL_CHECK
# 515 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_LevelChecker_NoMatch, MSGBOX_AUTOCLOSE
# 516 "data/maps/BasaluffTown/scripts.pory"
	matchpartylevel VAR_BASALEK_LEVEL_CHECK
# 517 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekTown_LevelChecker_5
# 524 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_LevelChecker_YesMatch
# 525 "data/maps/BasaluffTown/scripts.pory"
	switch VAR_BASALEK_LEVEL_REWARD
# 526 "data/maps/BasaluffTown/scripts.pory"
	case 0, BasalekTown_LevelChecker_9
# 528 "data/maps/BasaluffTown/scripts.pory"
	case 1, BasalekTown_LevelChecker_10
# 530 "data/maps/BasaluffTown/scripts.pory"
	case 2, BasalekTown_LevelChecker_11
# 532 "data/maps/BasaluffTown/scripts.pory"
	case 3, BasalekTown_LevelChecker_12
BasalekTown_LevelChecker_7:
# 535 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekTown_LevelChecker_17
BasalekTown_LevelChecker_16:
# 538 "data/maps/BasaluffTown/scripts.pory"
	setflag FLAG_DAILY_BASALEK_CHECKER
# 539 "data/maps/BasaluffTown/scripts.pory"
	addvar VAR_BASALEK_LEVEL_REWARD, 1
# 540 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_BASALEK_LEVEL_REWARD, 4
	goto_if_eq BasalekTown_LevelChecker_20
BasalekTown_LevelChecker_19:
# 543 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_LevelChecker_ComeAgain
# 544 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_Q37_BASALEK_LEVELMON_START, BasalekTown_LevelChecker_24
BasalekTown_LevelChecker_22:
# 548 "data/maps/BasaluffTown/scripts.pory"
	release
	return

BasalekTown_LevelChecker_2:
# 509 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekTown_LevelChecker_ComeAgain, MSGBOX_NPC
	end

BasalekTown_LevelChecker_5:
# 518 "data/maps/BasaluffTown/scripts.pory"
	goto_if_unset FLAG_Q37_BASALEK_LEVELMON_START, BasalekTown_LevelChecker_14
BasalekTown_LevelChecker_13:
	end

BasalekTown_LevelChecker_9:
# 527 "data/maps/BasaluffTown/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_10:
# 529 "data/maps/BasaluffTown/scripts.pory"
	giveitem ITEM_BINDING_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_11:
# 531 "data/maps/BasaluffTown/scripts.pory"
	giveitem ITEM_FOCUS_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_12:
# 533 "data/maps/BasaluffTown/scripts.pory"
	giveitem ITEM_CHOICE_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_14:
# 519 "data/maps/BasaluffTown/scripts.pory"
	startquest FLAG_Q37_BASALEK_LEVELMON_START
# 520 "data/maps/BasaluffTown/scripts.pory"
	special ShowJournalPopupAdd
	goto BasalekTown_LevelChecker_13

BasalekTown_LevelChecker_17:
# 536 "data/maps/BasaluffTown/scripts.pory"
	goto ZeBagIsFull
	goto BasalekTown_LevelChecker_16

BasalekTown_LevelChecker_20:
# 541 "data/maps/BasaluffTown/scripts.pory"
	setvar VAR_BASALEK_LEVEL_CHECK, 0
	goto BasalekTown_LevelChecker_19

BasalekTown_LevelChecker_23:
# 545 "data/maps/BasaluffTown/scripts.pory"
	completequest FLAG_Q37_BASALEK_LEVELMON_COMPLETE
# 546 "data/maps/BasaluffTown/scripts.pory"
	special ShowJournalPopupRemove
	goto BasalekTown_LevelChecker_22

BasalekTown_LevelChecker_24:
# 544 "data/maps/BasaluffTown/scripts.pory"
	goto_if_unset FLAG_Q37_BASALEK_LEVELMON_COMPLETE, BasalekTown_LevelChecker_23
	goto BasalekTown_LevelChecker_22


BasalekHouse1_Woman::
# 571 "data/maps/BasaluffTown/scripts.pory"
	lock
# 572 "data/maps/BasaluffTown/scripts.pory"
	faceplayer
# 573 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekHouse1_Woman_Text
# 574 "data/maps/BasaluffTown/scripts.pory"
	goto_if_set FLAG_BASALEK_WOMAN_LEMONADE, BasalekHouse1_Woman_2
# 578 "data/maps/BasaluffTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 579 "data/maps/BasaluffTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekHouse1_Woman_5
# 583 "data/maps/BasaluffTown/scripts.pory"
	setflag FLAG_BASALEK_WOMAN_LEMONADE
# 584 "data/maps/BasaluffTown/scripts.pory"
	release
	return

BasalekHouse1_Woman_2:
# 575 "data/maps/BasaluffTown/scripts.pory"
	release
	end

BasalekHouse1_Woman_5:
# 580 "data/maps/BasaluffTown/scripts.pory"
	release
	end


BasalekHouse1_Man::
# 591 "data/maps/BasaluffTown/scripts.pory"
	msgbox BasalekHouse1_Man_Text, MSGBOX_NPC
	return


# 58 "data/maps/BasaluffTown/scripts.pory"
BasaluffAutomaticRivalFight_Movement_0:
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 58 "data/maps/BasaluffTown/scripts.pory"
	walk_right
	step_end

# 346 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_0:
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 346 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_left
	step_end

# 348 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_1:
# 348 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_down
	step_end

# 352 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_2:
# 352 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_right
	step_end

# 356 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_3:
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 356 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_left
	step_end

# 366 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_4:
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 366 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_right
	step_end

# 372 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_5:
# 372 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_left
	step_end

# 428 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_6:
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 428 "data/maps/BasaluffTown/scripts.pory"
	walk_right
	step_end

# 430 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_7:
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 430 "data/maps/BasaluffTown/scripts.pory"
	walk_right
	step_end

# 432 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_8:
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_up
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
# 432 "data/maps/BasaluffTown/scripts.pory"
	walk_right
	step_end

# 433 "data/maps/BasaluffTown/scripts.pory"
BasalekTown_RivalScript_Movement_9:
# 433 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 433 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 433 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 433 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_up
# 433 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 433 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 433 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 433 "data/maps/BasaluffTown/scripts.pory"
	delay_16
# 433 "data/maps/BasaluffTown/scripts.pory"
	walk_in_place_fast_right
	step_end

BasaluffMay_LetsStart::
# 64 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: Alright, this should be\n"
	.string "enough space for us to battle.\p"
	.string "Let's go!$"

BasalekMay_LostText::
# 69 "data/maps/BasaluffTown/scripts.pory"
	.string "Wow!\n"
	.string "{PLAYER}, you're strong!\p"
	.string "I was worried that you might be\n"
	.string "falling behind in your training.$"

BasaluffMay_PostBattle::
# 75 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: Oh wow,\n"
	.string "That was a great battle!\p"
	.string "It's nice to see you put that Mega\n"
	.string "Ring into good use.\p"
	.string "Even if Korrina had only given me\n"
	.string "a ring, I'm not sure I could've\l"
	.string "still beaten you!$"

BasaluffMay_NoMegaPostBattle::
# 84 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: That was a great battle, but\n"
	.string "I must say, I'm a bit disappointed…\p"
	.string "We got these great gifts from\n"
	.string "my dad and Korrina, and you're\l"
	.string "just letting them collect dust.\p"
	.string "Or maybe, was it because I was so\n"
	.string "weak that you didn't see the need\l"
	.string "to use them in the first place…$"

BasaluffMay_Goodbye::
# 94 "data/maps/BasaluffTown/scripts.pory"
	.string "Anyways, I'm guessing you're\n"
	.string "heading to Frosthearth City to\l"
	.string "challenge the Pokémon Gym there?\p"
	.string "I'm heading that way as well,\n"
	.string "so maybe we'll meet again soon!\p"
	.string "Well, anyway, see you!$"

BasaluffMay_Goodbye2::
# 102 "data/maps/BasaluffTown/scripts.pory"
	.string "A-Anyways, I'm guessing you're\n"
	.string "heading to Frosthearth City to\l"
	.string "challenge the Pokémon Gym there?\p"
	.string "I'm heading that way as well,\n"
	.string "so maybe we'll meet again soon!\p"
	.string "Well, anyway, see you…$"

BasaluffBrendan_LetsStart::
# 110 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: Okay, this should be\n"
	.string "enough space for us to battle.\p"
	.string "Let's do this!$"

BasalekBrendan_LostText::
# 115 "data/maps/BasaluffTown/scripts.pory"
	.string "Hmm…\n"
	.string "I see you've been training hard.\p"
	.string "That stings a bit--I had a head start\n"
	.string "on you as a trainer…$"

BasaluffBrendan_PostBattle::
# 121 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: That was a great battle!\p"
	.string "It's nice to see you put that Mega\n"
	.string "Ring into good use.\p"
	.string "I'm not sure if I could've beaten\n"
	.string "you even if you did not have it.$"

BasaluffBrendan_NoMegaPostBattle::
# 128 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: That was a great battle!\p"
	.string "Though I must admit,\n"
	.string "I'm a bit disappointed…\p"
	.string "We got this cool stuff from\n"
	.string "my dad and Korrina, so I was\l"
	.string "kind of expecting to see you\l"
	.string "use them in battle.\p"
	.string "Or perhaps, I was so weak that you\n"
	.string "didn't even see the need to use them\l"
	.string "against me…$"

BasaluffBrendan_Goodbye::
# 140 "data/maps/BasaluffTown/scripts.pory"
	.string "Anyway, I'm guessing you're\n"
	.string "heading to Frosthearth City to\l"
	.string "challenge the Pokémon Gym there?\p"
	.string "I'm heading that way as well,\n"
	.string "so maybe we'll meet again soon!\p"
	.string "Well, anyway, hang in there!$"

BasalekTown_Sign1_Text::
# 152 "data/maps/BasaluffTown/scripts.pory"
	.string "BASALEK TOWN\p"
	.string "“Let the hot spring\n"
	.string "wash away your worries!”$"

BasalekTown_Sign2_Text::
# 160 "data/maps/BasaluffTown/scripts.pory"
	.string "{UP_ARROW} Route 17\n"
	.string "{LEFT_ARROW} Basalek Tunnels\l"
	.string "{DOWN_ARROW} Route 16$"

BasalekTown_Man5_Text::
# 172 "data/maps/BasaluffTown/scripts.pory"
	.string "See that cave down there?\n"
	.string "That's Basalek Tunnels.\p"
	.string "It's said that due to the oppressing\n"
	.string "atmosphere, training there is more\l"
	.string "efficient than anywhere else.\p"
	.string "This has caused the place to become\n"
	.string "jam-packed with very experienced\l"
	.string "Pokémon trainers.$"

BasalekTown_RichBoy_Text::
# 185 "data/maps/BasaluffTown/scripts.pory"
	.string "I like warmth as much as the next\n"
	.string "guy, but this is too much.$"

BasalekTown_Twin_Text::
# 192 "data/maps/BasaluffTown/scripts.pory"
	.string "I'm bored…\p"
	.string "All the adults care about is sitting\n"
	.string "in the hot spring day after day…$"

BasalekTown_OldMan_Text::
# 200 "data/maps/BasaluffTown/scripts.pory"
	.string "If your Pokémon are feeling worn out,\n"
	.string "hop in to the hot spring and they'll\l"
	.string "be refreshed in no time!\p"
	.string "If you need to access a PC, they've\n"
	.string "set up a station inside the Mart.$"

BasalekTown_HealTrigger_Text::
# 217 "data/maps/BasaluffTown/scripts.pory"
	.string "The water is perfectly warm.\n"
	.string "It feels exquisite…\p"
	.string "{PLAY_SE SE_USE_ITEM}{PLAYER} and the Pokémon were\n"
	.string "fully refreshed!$"

BasalekTown_Beauty_Text::
# 230 "data/maps/BasaluffTown/scripts.pory"
	.string "I've got some errands to run,\n"
	.string "but I guess I can stay for\l"
	.string "another five minutes.$"

BasalekTown_Text_HaveEggWillYouTakeIt::
# 267 "data/maps/BasaluffTown/scripts.pory"
	.string "I recently found my Pokémon carrying\n"
	.string "this egg.\p"
	.string "In the past I would have been ecstatic,\n"
	.string "but I don't think I'm capable of taking\l"
	.string "care of any more Pokémon anymore.\p"
	.string "I saw your battle with your friend,\n"
	.string "and I must say, I'm very impressed.\p"
	.string "You seem like the type of person who\n"
	.string "takes good care of their Pokémon.\p"
	.string "What say you?\n"
	.string "Would you like to care for this egg?$"

BasalekTown_Text_HopeYoullWalkPlentyWithEgg::
# 281 "data/maps/BasaluffTown/scripts.pory"
	.string "Thank you!\n"
	.string "It warms my heart, knowing it will have\l"
	.string "someone caring for it.$"

BasalekTown_Text_ReceivedTheEgg::
# 287 "data/maps/BasaluffTown/scripts.pory"
	.string "{PLAYER} received the Pokémon egg.$"

BasalekTown_Text_NoRoomForThisEgg::
# 290 "data/maps/BasaluffTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this egg…$"

BasalekTown_Text_AsYouWishThen::
# 294 "data/maps/BasaluffTown/scripts.pory"
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this egg, I will be here.$"

BasalekTown_Text_EverySoOftenEggFoundAtDayCare::
# 299 "data/maps/BasaluffTown/scripts.pory"
	.string "Every so often, an egg will be found at\n"
	.string "the Pokémon Day Care.\p"
	.string "Or at least that's how the rumor goes.$"

BasalekTown_EggHatched::
# 304 "data/maps/BasaluffTown/scripts.pory"
	.string "How is the egg doing?\p"
	.string "… … …\p"
	.string "It hatched already?\n"
	.string "That's great to hear.\l"
	.string "I knew I chose a caring trainer.$"

BasaluffTown_Brendan_NoBails::
# 447 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: Oh, hey {PLAYER}!\n"
	.string "It's been a while, huh?\p"
	.string "I was on my way to Route 17, but\n"
	.string "the weather was so unbearably humid\l"
	.string "that I just had to turn back and\l"
	.string "get myself some extra drinks for\l"
	.string "the journey.\p"
	.string "Anyway, enough about me.\p"
	.string "How about we have ourselves\n"
	.string "a Pokémon battle?\p"
	.string "I'm curious to see if you've mastered\n"
	.string "using the Mega Evolution technique.$"

BasaluffTown_Brendan_1Bail::
# 461 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: You weren't trying to\n"
	.string "make a break for it while I was\l"
	.string "patiently waiting inside the Mart,\l"
	.string "were you?\p"
	.string "Well, I hope you're prepared,\n"
	.string "because here I come!$"

BasaluffTown_Brendan_2Bails::
# 469 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: I had a feeling you might\n"
	.string "be walking out on me, just like you did\l"
	.string "back at the Coralgrove Harbor.\p"
	.string "Well, you're not fooling me again.\n"
	.string "Get ready, because here I come!$"

BasaluffTown_May_NoBails::
# 476 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: Oh, hi {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "I was on my way to Route 17,\n"
	.string "but  had to turn back just to\l"
	.string "get myself some extra drinks for\l"
	.string "the journey.\p"
	.string "I honestly don't know how people can\n"
	.string "even live in this humid atmosphere.\p"
	.string "Anyways, enough about me.\p"
	.string "How about we have ourselves\n"
	.string "a Pokémon battle?\p"
	.string "I'm curious to see if you've mastered\n"
	.string "using the Mega Evolution technique.$"

BasaluffTown_May_1Bail::
# 491 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: You weren't trying to\n"
	.string "bail on me while I patiently waited\l"
	.string "for you inside the Mart?\p"
	.string "Well, I hope you've prepared yourself,\n"
	.string "because here I come!$"

BasaluffTown_May_2Bails::
# 498 "data/maps/BasaluffTown/scripts.pory"
	.string "{RIVAL}: Aha!\n"
	.string "I knew you'd try to bail on me!\p"
	.string "I'm not going to let you fool me\n"
	.string "like you fooled me back at the\l"
	.string "Coralgrove Harbor!\p"
	.string "Get ready, because here I come!$"

BasalekTown_LevelChecker_NoMatch::
# 551 "data/maps/BasaluffTown/scripts.pory"
	.string "…I saw it!\n"
	.string "Today's number is {STR_VAR_1}!\p"
	.string "Show me a Pokémon that's Lv. {STR_VAR_1}.\n"
	.string "If you can, I'll reward you.$"

BasalekTown_LevelChecker_YesMatch::
# 557 "data/maps/BasaluffTown/scripts.pory"
	.string "…Oh, now, hunh?!\p"
	.string "I see you have a Pokémon\n"
	.string "that is Lv. {STR_VAR_1}.\p"
	.string "Well, I'll be! How remarkable!\p"
	.string "I'll thank you for that visual treat\n"
	.string "with this.$"

BasalekTown_LevelChecker_ComeAgain::
# 565 "data/maps/BasaluffTown/scripts.pory"
	.string "Come back another day for\n"
	.string "another showcase!$"

BasalekHouse1_Woman_Text::
# 586 "data/maps/BasaluffTown/scripts.pory"
	.string "It's pretty warm out there.\n"
	.string "Remember to hydrate!$"

BasalekHouse1_Man_Text::
# 593 "data/maps/BasaluffTown/scripts.pory"
	.string "Thanks to geothermal energy, we can\n"
	.string "cool our houses for next to nothing.$"
