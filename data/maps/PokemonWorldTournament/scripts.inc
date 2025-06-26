PokemonWorldTournament_MapScripts::
# 2 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonWorldTournament_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonWorldTournament_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

PokemonWorldTournament_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
# 4 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 5 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 6 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 7 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
	.2byte 0

PokemonWorldTournament_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/PokemonWorldTournament/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
	.2byte 0


# 14 "data/maps/PokemonWorldTournament/scripts.pory"
@hasMoveTutor

BP_Mart_MoveTutor::
# 18 "data/maps/PokemonWorldTournament/scripts.pory"
	lock
# 19 "data/maps/PokemonWorldTournament/scripts.pory"
	faceplayer
# 20 "data/maps/PokemonWorldTournament/scripts.pory"
	message BP_Mart_Greetings
# 21 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 22 "data/maps/PokemonWorldTournament/scripts.pory"
	bpmart BP_Mart_Moves, TRUE
# 23 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BP_Mart_MoveTutor_2
# 27 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox IllTakeYourBPNow
BP_Mart_MoveTutor_1:
# 29 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return

BP_Mart_MoveTutor_2:
# 24 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PleaseSaveSomeBp
	goto BP_Mart_MoveTutor_1


	.align 2
# 57 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Moves:
# 58 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_SPITE
# 59 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_AFTER_YOU
# 60 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_ALLY_SWITCH
# 61 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_GRAVITY
# 62 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_TELEKINESIS
# 63 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_ROLE_PLAY
# 64 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_WONDER_ROOM
# 65 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_AQUA_TAIL
# 66 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_GASTRO_ACID
# 67 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_SEED_BOMB
# 68 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_LASER_FOCUS
# 69 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_SUPER_FANG
# 70 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_DUAL_CHOP
# 71 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

BP_Mart_ItemShop::
# 75 "data/maps/PokemonWorldTournament/scripts.pory"
	lock
# 76 "data/maps/PokemonWorldTournament/scripts.pory"
	faceplayer
# 77 "data/maps/PokemonWorldTournament/scripts.pory"
	message BP_Mart_Greetings2
# 78 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 79 "data/maps/PokemonWorldTournament/scripts.pory"
	bpmart BP_Mart_Items, FALSE
# 80 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PleaseSaveSomeBp
# 81 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return


	.align 2
# 84 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Items:
# 85 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 86 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_POWER_HERB
# 87 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 88 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 89 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 90 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_SNOWBALL
# 91 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_RED_CARD
# 92 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 93 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 94 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE

BP_Mart_ItemShop2::
# 99 "data/maps/PokemonWorldTournament/scripts.pory"
	lock
# 100 "data/maps/PokemonWorldTournament/scripts.pory"
	faceplayer
# 101 "data/maps/PokemonWorldTournament/scripts.pory"
	message BP_Mart_Greetings2
# 102 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 103 "data/maps/PokemonWorldTournament/scripts.pory"
	bpmart BP_Mart_Items2, FALSE
# 104 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PleaseSaveSomeBp
# 105 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return


	.align 2
# 108 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Items2:
# 109 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 110 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 111 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 112 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 113 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 114 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GALLADITE
# 115 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_SABLENITE
# 116 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BANETTITE
	.2byte ITEM_NONE

	.align 2
# 119 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Items2LegendaryOn:
# 120 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 121 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 122 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 123 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 124 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 125 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GALLADITE
# 126 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_SABLENITE
# 127 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BANETTITE
# 128 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_LATIASITE
# 129 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_LATIOSITE
	.2byte ITEM_NONE

FeatureNotReady::
# 134 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	return


WorldTournamentYoungster::
# 143 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentYoungster_Text, MSGBOX_NPC
	return


WorldTournamentGentleman::
# 146 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentGentleman_Text, MSGBOX_NPC
	return


WorldTournamentAceTrainer::
# 149 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentAceTrainer_Text, MSGBOX_NPC
	return


WorldTournamentScientist::
# 152 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentScientist_Text, MSGBOX_NPC
	return


WorldTournamentHiker::
# 155 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentHiker_Text, MSGBOX_NPC
	return


WorldTournamentMan5::
# 158 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentMan5_Text, MSGBOX_NPC
	return


WorldTournamentGirl3::
# 161 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentGirl3_Text, MSGBOX_NPC
	return


WorldTournamentLeftBouncer::
# 164 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentLeftBouncer_Text, MSGBOX_NPC
	return


WorldTournamentRightBouncer::
# 167 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentRightBouncer_Text, MSGBOX_NPC
	return


PokemonWorldTournament_LeftAttendant::
# 218 "data/maps/PokemonWorldTournament/scripts.pory"
	goto_if_set FLAG_TEMP_1, PokemonWorldTournament_LeftAttendant_2
# 222 "data/maps/PokemonWorldTournament/scripts.pory"
	message WelcomeToPWT
PokemonWorldTournament_LeftAttendant_1:
# 224 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 225 "data/maps/PokemonWorldTournament/scripts.pory"
	setflag FLAG_TEMP_1
# 226 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 3, 0, 0, PokemonWorldTournament_LeftAttendant_Text_0, PokemonWorldTournament_LeftAttendant_Text_1, PokemonWorldTournament_LeftAttendant_Text_2
# 227 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PokemonWorldTournament_LeftAttendant_6
# 230 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PokemonWorldTournament_LeftAttendant_7
# 232 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PokemonWorldTournament_LeftAttendant_8
# 233 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PokemonWorldTournament_LeftAttendant_8
	return

PokemonWorldTournament_LeftAttendant_2:
# 219 "data/maps/PokemonWorldTournament/scripts.pory"
	message WelcomeToPWT_Short
	goto PokemonWorldTournament_LeftAttendant_1

PokemonWorldTournament_LeftAttendant_6:
# 229 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return

PokemonWorldTournament_LeftAttendant_7:
# 231 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return

PokemonWorldTournament_LeftAttendant_8:
# 234 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PokemonWorldTournament_LeftAttendant_Text_3, MSGBOX_SIGN
	end


PWT_Info::
# 251 "data/maps/PokemonWorldTournament/scripts.pory"
	message PWT_Info_WhichTournament
# 252 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 253 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Info_Text_0, PWT_Info_Text_1, PWT_Info_Text_2, PWT_Info_Text_3, PWT_Info_Text_4
# 254 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 255 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Info_2
# 257 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Info_3
# 259 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Info_4
# 261 "data/maps/PokemonWorldTournament/scripts.pory"
	case 3, PWT_Info_5
# 263 "data/maps/PokemonWorldTournament/scripts.pory"
	case 4, PWT_Info_6
# 264 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Info_6
	return

PWT_Info_2:
# 256 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_BattleFormats
	return

PWT_Info_3:
# 258 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_Frosthearth
	return

PWT_Info_4:
# 260 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_Rental
	return

PWT_Info_5:
# 262 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_Mix
	return

PWT_Info_6:
# 265 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PokemonWorldTournament_LeftAttendant
	return


PWT_Info_BattleFormats::
# 273 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_BattleFormats_Text
# 274 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Info_Frosthearth::
# 287 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_Frosthearth_Text
# 288 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Info_Rental::
# 302 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_Rental_Text
# 303 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Info_Mix::
# 318 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_Mix_Text
# 319 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Participate::
# 337 "data/maps/PokemonWorldTournament/scripts.pory"
	message PWT_Participate_Text
# 338 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 339 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Info_Text_1, PWT_Info_Text_2, PWT_Info_Text_3, PWT_Info_Text_4
# 340 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 341 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_2
# 343 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_3
# 345 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_4
# 347 "data/maps/PokemonWorldTournament/scripts.pory"
	case 3, PWT_Participate_5
# 348 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_5
	return

PWT_Participate_2:
# 342 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate_Frosthearth
	return

PWT_Participate_3:
# 344 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate_Rental
	return

PWT_Participate_4:
# 346 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate_Mix
	return

PWT_Participate_5:
# 349 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PokemonWorldTournament_LeftAttendant
	return


PWT_Participate_Frosthearth::
# 362 "data/maps/PokemonWorldTournament/scripts.pory"
	message WhichBattleFormat
# 363 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 364 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
# 365 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 366 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_Frosthearth_2
# 368 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_Frosthearth_3
# 370 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_Frosthearth_4
# 371 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_Frosthearth_4
	return

PWT_Participate_Frosthearth_2:
# 367 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Frosthearth_Single
	return

PWT_Participate_Frosthearth_3:
# 369 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Frosthearth_Double
	return

PWT_Participate_Frosthearth_4:
# 372 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return


PWT_Participate_Rental::
# 376 "data/maps/PokemonWorldTournament/scripts.pory"
	message WhichBattleFormat
# 377 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 378 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
# 379 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 380 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_Rental_2
# 382 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_Rental_3
# 384 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_Rental_4
# 385 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_Rental_4
	return

PWT_Participate_Rental_2:
# 381 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Rental_Single
	return

PWT_Participate_Rental_3:
# 383 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Rental_Double
	return

PWT_Participate_Rental_4:
# 386 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return


PWT_Participate_Mix::
# 390 "data/maps/PokemonWorldTournament/scripts.pory"
	message WhichBattleFormat
# 391 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 392 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
# 393 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 394 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_Mix_2
# 396 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_Mix_3
# 398 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_Mix_4
# 399 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_Mix_4
	return

PWT_Participate_Mix_2:
# 395 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Mix_Single
	return

PWT_Participate_Mix_3:
# 397 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Mix_Double
	return

PWT_Participate_Mix_4:
# 400 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return


PWT_Frosthearth_Single::
# 407 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Frosthearth_Double::
# 412 "data/maps/PokemonWorldTournament/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 413 "data/maps/PokemonWorldTournament/scripts.pory"
	special SavePlayerParty
# 414 "data/maps/PokemonWorldTournament/scripts.pory"
	frontier_checkineligible
# 415 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq PWT_Frosthearth_Double_2
# 421 "data/maps/PokemonWorldTournament/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_DATA_LVL_MODE
# 422 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 423 "data/maps/PokemonWorldTournament/scripts.pory"
	fadescreen FADE_TO_BLACK
# 424 "data/maps/PokemonWorldTournament/scripts.pory"
	callnative RemoveFollowingPokemon
# 427 "data/maps/PokemonWorldTournament/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 428 "data/maps/PokemonWorldTournament/scripts.pory"
	special ChoosePartyForBattleFrontier
# 429 "data/maps/PokemonWorldTournament/scripts.pory"
	waitstate
# 430 "data/maps/PokemonWorldTournament/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 431 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 432 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PWT_Frosthearth_Double_5
# 436 "data/maps/PokemonWorldTournament/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
PWT_Frosthearth_Double_4:
	end

PWT_Frosthearth_Double_2:
# 416 "data/maps/PokemonWorldTournament/scripts.pory"
	bufferstring STR_VAR_2, PWT_Frosthearth_Double_Text_0
# 417 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen
# 418 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	end

PWT_Frosthearth_Double_5:
# 433 "data/maps/PokemonWorldTournament/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
	goto PWT_Frosthearth_Double_4


PWT_Rental_Single::
# 441 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Rental_Double::
# 445 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Mix_Single::
# 449 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Mix_Double::
# 453 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


Pwt_Incomplete::
# 469 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox Pwt_Incomplete_Text, MSGBOX_NPC
	return


PokemonWorldTournament_LeftAttendant_Text_0:
# 226 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Participate$"

PokemonWorldTournament_LeftAttendant_Text_1:
# 226 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Info$"

PokemonWorldTournament_LeftAttendant_Text_2:
# 226 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Quit$"

PokemonWorldTournament_LeftAttendant_Text_3:
# 234 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "We hope to see you again!$"

PWT_Info_Text_0:
# 253 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "About battle formats$"

PWT_Info_Text_1:
# 253 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Frosthearth$"

PWT_Info_Text_2:
# 253 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Rental$"

PWT_Info_Text_3:
# 253 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Mix$"

PWT_Info_Text_4:
# 253 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Back$"

PWT_Participate_Frosthearth_Text_0:
# 364 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Single Battle$"

PWT_Participate_Frosthearth_Text_1:
# 364 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Double Battle$"

PWT_Frosthearth_Double_Text_0:
# 416 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "four$"

IllTakeYourBPNow::
# 32 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "I'll be taking your BP now.$"

BP_Mart_Greetings::
# 36 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some exquisite moves?$"

BP_Mart_Greetings2::
# 44 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some exquisite items?$"

PleaseSaveSomeBp::
# 52 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Please save some BP\n"
	.string "and come see us again.$"

FeatureNotReady_Text::
# 136 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "This feature is not currently\n"
	.string "available.\p"
	.string "We apologize for the inconvenience.$"

WorldTournamentYoungster_Text::
# 170 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Someday, I'll be a famous guy!\p"
	.string "But for now, I'm just a spectator\n"
	.string "here.$"

WorldTournamentGentleman_Text::
# 175 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "The Pokémon World Tournament\n"
	.string "attracts big names as well.\p"
	.string "I'm pretty sure I saw Aaron,\n"
	.string "the Gym Leader of Coralgrove City\l"
	.string "waltz in not too long ago.$"

WorldTournamentAceTrainer_Text::
# 182 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "It's the Pokémon World Tournament!\n"
	.string "It's all in the name!\p"
	.string "Trainers have gathered\n"
	.string "from all over the world!$"

WorldTournamentScientist_Text::
# 188 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "The crowd will go wild for\n"
	.string "my Pokémon!$"

WorldTournamentHiker_Text::
# 192 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Many trainers from far away\n"
	.string "will come to participate!$"

WorldTournamentMan5_Text::
# 196 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "I'm not much of a trainer myself,\n"
	.string "but my brother has come real close\l"
	.string "to winning in the past.\p"
	.string "If we cheer loud enough,\n"
	.string "he'll definitely win this time!$"

WorldTournamentGirl3_Text::
# 203 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "The competition is really fierce\n"
	.string "this time around.\p"
	.string "I can't wait to see who wins!$"

WorldTournamentLeftBouncer_Text::
# 208 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "That's the Pokemon World Tournament\n"
	.string "for you! It's packed with spectators!$"

WorldTournamentRightBouncer_Text::
# 212 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "It's crazy popular! This is what\n"
	.string "packed to the rafters means!$"

WelcomeToPWT::
# 239 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Welcome to the\n"
	.string "Pokémon World Tournament!\p"
	.string "Would you like to participate\n"
	.string "in the tournament?$"

WelcomeToPWT_Short::
# 245 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Would you like to participate\n"
	.string "in the tournament?$"

PWT_Info_WhichTournament::
# 268 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Which tournament do you\n"
	.string "want to know about?$"

PWT_Info_BattleFormats_Text::
# 276 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "There are two battle formats\n"
	.string "to a tournament:\l"
	.string "Single and Double.\p"
	.string "Single Battles need three Pokémon,\n"
	.string "while Double Battles need four.\p"
	.string "Double battles give you more points\n"
	.string "when you manage to win, so jump in!\l"
	.string "It's worthwhile to try it!$"

PWT_Info_Frosthearth_Text::
# 290 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Frosthearth Tournament is a tournament\n"
	.string "where anything goes.\p"
	.string "You may use any Pokémon or\n"
	.string "held items of your choice.\p"
	.string "For these battles, all Pokémon\n"
	.string "will be set to Level 25.\p"
	.string "The winner will be rewarded\n"
	.string "with BP.\l"
	.string "Good luck!$"

PWT_Info_Rental_Text::
# 305 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Rental Tournament is a unique\n"
	.string "tournament where we prepare\l"
	.string "the Pokémon with which you\l"
	.string "will battle.\p"
	.string "Rental Pokémon will be randomly\n"
	.string "selected for you.\l"
	.string "So luck plays a big part!\p"
	.string "The winner will be rewarded\n"
	.string "with BP.\l"
	.string "Good luck!$"

PWT_Info_Mix_Text::
# 321 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Mix Tournament is a unique tournament\n"
	.string "where you and your opponent swap\l"
	.string "Pokémon before battling.\p"
	.string "You'll normally swap one Pokémon,\n"
	.string "but you'll swap two in Double Battles.\p"
	.string "Swapped Pokémon will be returned\n"
	.string "after the battle, so don't be alarmed.\p"
	.string "For these battles, all Pokémon\n"
	.string "will be set to Level 50.\p"
	.string "The winner will be rewarded\n"
	.string "with BP.\l"
	.string "Good luck!$"

PWT_Participate_Text::
# 352 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Which tournament\n"
	.string "will you participate in?$"

WhichBattleFormat::
# 356 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Which battle format\n"
	.string "will you choose?$"

PWT_NotEnoughValidMons::
# 457 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "My dear challenger!\p"
	.string "You do not have the {STR_VAR_2} Pokémon\n"
	.string "required for entry.\p"
	.string "Please note that certain Legendary\n"
	.string "Pokémon may be ineligible to enter.\p"
	.string "Eggs{STR_VAR_1} ineligible.\p"
	.string "When you have made your preparations,\n"
	.string "please do return.$"

Pwt_Incomplete_Text::
# 471 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Hello, and welcome to the\n"
	.string "Pokémon World Tournament!\p"
	.string "…Is what I would normally say.\p"
	.string "The Pokémon World Tournament\n"
	.string "is still under construction,\l"
	.string "so we are currently hosting\l"
	.string "Battle Factory here instead.$"
