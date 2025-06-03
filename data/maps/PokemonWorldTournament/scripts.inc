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
	goto_if_set FLAG_LATIAS_ROAMING, BP_Mart_ItemShop2_2
# 103 "data/maps/PokemonWorldTournament/scripts.pory"
	goto_if_set FLAG_LATIOS_ROAMING, BP_Mart_ItemShop2_2
# 107 "data/maps/PokemonWorldTournament/scripts.pory"
	bpmart BP_Mart_Items2, FALSE
BP_Mart_ItemShop2_1:
# 109 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PleaseSaveSomeBp
# 110 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	return

BP_Mart_ItemShop2_2:
# 104 "data/maps/PokemonWorldTournament/scripts.pory"
	bpmart BP_Mart_Items2LegendaryOn, FALSE
	goto BP_Mart_ItemShop2_1


	.align 2
# 113 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Items2:
# 114 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 115 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 116 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 117 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 118 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 119 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GALLADITE
# 120 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_SABLENITE
# 121 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BANETTITE
	.2byte ITEM_NONE

	.align 2
# 124 "data/maps/PokemonWorldTournament/scripts.pory"
BP_Mart_Items2LegendaryOn:
# 125 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 126 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 127 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 128 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 129 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 130 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_GALLADITE
# 131 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_SABLENITE
# 132 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_BANETTITE
# 133 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_LATIASITE
# 134 "data/maps/PokemonWorldTournament/scripts.pory"
	.2byte ITEM_LATIOSITE
	.2byte ITEM_NONE

FeatureNotReady::
# 139 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	return


WorldTournamentYoungster::
# 148 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentYoungster_Text, MSGBOX_NPC
	return


WorldTournamentGentleman::
# 151 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentGentleman_Text, MSGBOX_NPC
	return


WorldTournamentAceTrainer::
# 154 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentAceTrainer_Text, MSGBOX_NPC
	return


WorldTournamentScientist::
# 157 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentScientist_Text, MSGBOX_NPC
	return


WorldTournamentHiker::
# 160 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentHiker_Text, MSGBOX_NPC
	return


WorldTournamentMan5::
# 163 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentMan5_Text, MSGBOX_NPC
	return


WorldTournamentGirl3::
# 166 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentGirl3_Text, MSGBOX_NPC
	return


WorldTournamentLeftBouncer::
# 169 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentLeftBouncer_Text, MSGBOX_NPC
	return


WorldTournamentRightBouncer::
# 172 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox WorldTournamentRightBouncer_Text, MSGBOX_NPC
	return


PokemonWorldTournament_LeftAttendant::
# 223 "data/maps/PokemonWorldTournament/scripts.pory"
	goto_if_set FLAG_TEMP_1, PokemonWorldTournament_LeftAttendant_2
# 227 "data/maps/PokemonWorldTournament/scripts.pory"
	message WelcomeToPWT
PokemonWorldTournament_LeftAttendant_1:
# 229 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 230 "data/maps/PokemonWorldTournament/scripts.pory"
	setflag FLAG_TEMP_1
# 231 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 3, 0, 0, PokemonWorldTournament_LeftAttendant_Text_0, PokemonWorldTournament_LeftAttendant_Text_1, PokemonWorldTournament_LeftAttendant_Text_2
# 232 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PokemonWorldTournament_LeftAttendant_6
# 235 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PokemonWorldTournament_LeftAttendant_7
# 237 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PokemonWorldTournament_LeftAttendant_8
# 238 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PokemonWorldTournament_LeftAttendant_8
	return

PokemonWorldTournament_LeftAttendant_2:
# 224 "data/maps/PokemonWorldTournament/scripts.pory"
	message WelcomeToPWT_Short
	goto PokemonWorldTournament_LeftAttendant_1

PokemonWorldTournament_LeftAttendant_6:
# 234 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return

PokemonWorldTournament_LeftAttendant_7:
# 236 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return

PokemonWorldTournament_LeftAttendant_8:
# 239 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PokemonWorldTournament_LeftAttendant_Text_3, MSGBOX_SIGN
	end


PWT_Info::
# 256 "data/maps/PokemonWorldTournament/scripts.pory"
	message PWT_Info_WhichTournament
# 257 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 258 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Info_Text_0, PWT_Info_Text_1, PWT_Info_Text_2, PWT_Info_Text_3, PWT_Info_Text_4
# 259 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 260 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Info_2
# 262 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Info_3
# 264 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Info_4
# 266 "data/maps/PokemonWorldTournament/scripts.pory"
	case 3, PWT_Info_5
# 268 "data/maps/PokemonWorldTournament/scripts.pory"
	case 4, PWT_Info_6
# 269 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Info_6
	return

PWT_Info_2:
# 261 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_BattleFormats
	return

PWT_Info_3:
# 263 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_Frosthearth
	return

PWT_Info_4:
# 265 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_Rental
	return

PWT_Info_5:
# 267 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info_Mix
	return

PWT_Info_6:
# 270 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PokemonWorldTournament_LeftAttendant
	return


PWT_Info_BattleFormats::
# 278 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_BattleFormats_Text
# 279 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Info_Frosthearth::
# 292 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_Frosthearth_Text
# 293 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Info_Rental::
# 307 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_Rental_Text
# 308 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Info_Mix::
# 323 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox PWT_Info_Mix_Text
# 324 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Info
	return


PWT_Participate::
# 342 "data/maps/PokemonWorldTournament/scripts.pory"
	message PWT_Participate_Text
# 343 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 344 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Info_Text_1, PWT_Info_Text_2, PWT_Info_Text_3, PWT_Info_Text_4
# 345 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 346 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_2
# 348 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_3
# 350 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_4
# 352 "data/maps/PokemonWorldTournament/scripts.pory"
	case 3, PWT_Participate_5
# 353 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_5
	return

PWT_Participate_2:
# 347 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate_Frosthearth
	return

PWT_Participate_3:
# 349 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate_Rental
	return

PWT_Participate_4:
# 351 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate_Mix
	return

PWT_Participate_5:
# 354 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PokemonWorldTournament_LeftAttendant
	return


PWT_Participate_Frosthearth::
# 367 "data/maps/PokemonWorldTournament/scripts.pory"
	message WhichBattleFormat
# 368 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 369 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
# 370 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 371 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_Frosthearth_2
# 373 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_Frosthearth_3
# 375 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_Frosthearth_4
# 376 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_Frosthearth_4
	return

PWT_Participate_Frosthearth_2:
# 372 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Frosthearth_Single
	return

PWT_Participate_Frosthearth_3:
# 374 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Frosthearth_Double
	return

PWT_Participate_Frosthearth_4:
# 377 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return


PWT_Participate_Rental::
# 381 "data/maps/PokemonWorldTournament/scripts.pory"
	message WhichBattleFormat
# 382 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 383 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
# 384 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 385 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_Rental_2
# 387 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_Rental_3
# 389 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_Rental_4
# 390 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_Rental_4
	return

PWT_Participate_Rental_2:
# 386 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Rental_Single
	return

PWT_Participate_Rental_3:
# 388 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Rental_Double
	return

PWT_Participate_Rental_4:
# 391 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return


PWT_Participate_Mix::
# 395 "data/maps/PokemonWorldTournament/scripts.pory"
	message WhichBattleFormat
# 396 "data/maps/PokemonWorldTournament/scripts.pory"
	waitmessage
# 397 "data/maps/PokemonWorldTournament/scripts.pory"
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
# 398 "data/maps/PokemonWorldTournament/scripts.pory"
	switch VAR_RESULT
# 399 "data/maps/PokemonWorldTournament/scripts.pory"
	case 0, PWT_Participate_Mix_2
# 401 "data/maps/PokemonWorldTournament/scripts.pory"
	case 1, PWT_Participate_Mix_3
# 403 "data/maps/PokemonWorldTournament/scripts.pory"
	case 2, PWT_Participate_Mix_4
# 404 "data/maps/PokemonWorldTournament/scripts.pory"
	case MULTI_B_PRESSED, PWT_Participate_Mix_4
	return

PWT_Participate_Mix_2:
# 400 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Mix_Single
	return

PWT_Participate_Mix_3:
# 402 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Mix_Double
	return

PWT_Participate_Mix_4:
# 405 "data/maps/PokemonWorldTournament/scripts.pory"
	goto PWT_Participate
	return


PWT_Frosthearth_Single::
# 412 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Frosthearth_Double::
# 417 "data/maps/PokemonWorldTournament/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 418 "data/maps/PokemonWorldTournament/scripts.pory"
	special SavePlayerParty
# 419 "data/maps/PokemonWorldTournament/scripts.pory"
	frontier_checkineligible
# 420 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq PWT_Frosthearth_Double_2
# 426 "data/maps/PokemonWorldTournament/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_DATA_LVL_MODE
# 427 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 428 "data/maps/PokemonWorldTournament/scripts.pory"
	fadescreen FADE_TO_BLACK
# 429 "data/maps/PokemonWorldTournament/scripts.pory"
	callnative RemoveFollowingPokemon
# 432 "data/maps/PokemonWorldTournament/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 433 "data/maps/PokemonWorldTournament/scripts.pory"
	special ChoosePartyForBattleFrontier
# 434 "data/maps/PokemonWorldTournament/scripts.pory"
	waitstate
# 435 "data/maps/PokemonWorldTournament/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 436 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 437 "data/maps/PokemonWorldTournament/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PWT_Frosthearth_Double_5
# 441 "data/maps/PokemonWorldTournament/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
PWT_Frosthearth_Double_4:
	end

PWT_Frosthearth_Double_2:
# 421 "data/maps/PokemonWorldTournament/scripts.pory"
	bufferstring STR_VAR_2, PWT_Frosthearth_Double_Text_0
# 422 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen
# 423 "data/maps/PokemonWorldTournament/scripts.pory"
	release
	end

PWT_Frosthearth_Double_5:
# 438 "data/maps/PokemonWorldTournament/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
	goto PWT_Frosthearth_Double_4


PWT_Rental_Single::
# 446 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Rental_Double::
# 450 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Mix_Single::
# 454 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Mix_Double::
# 458 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


Pwt_Incomplete::
# 474 "data/maps/PokemonWorldTournament/scripts.pory"
	msgbox Pwt_Incomplete_Text, MSGBOX_NPC
	return


PokemonWorldTournament_LeftAttendant_Text_0:
# 231 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Participate$"

PokemonWorldTournament_LeftAttendant_Text_1:
# 231 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Info$"

PokemonWorldTournament_LeftAttendant_Text_2:
# 231 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Quit$"

PokemonWorldTournament_LeftAttendant_Text_3:
# 239 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "We hope to see you again!$"

PWT_Info_Text_0:
# 258 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "About battle formats$"

PWT_Info_Text_1:
# 258 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Frosthearth$"

PWT_Info_Text_2:
# 258 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Rental$"

PWT_Info_Text_3:
# 258 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Mix$"

PWT_Info_Text_4:
# 258 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Back$"

PWT_Participate_Frosthearth_Text_0:
# 369 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Single Battle$"

PWT_Participate_Frosthearth_Text_1:
# 369 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Double Battle$"

PWT_Frosthearth_Double_Text_0:
# 421 "data/maps/PokemonWorldTournament/scripts.pory"
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
# 141 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "This feature is not currently\n"
	.string "available.\p"
	.string "We apologize for the inconvenience.$"

WorldTournamentYoungster_Text::
# 175 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Someday, I'll be a famous guy!\p"
	.string "But for now, I'm just a spectator\n"
	.string "here.$"

WorldTournamentGentleman_Text::
# 180 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "The Pokémon World Tournament\n"
	.string "attracts big names as well.\p"
	.string "I'm pretty sure I saw Aaron,\n"
	.string "the Gym Leader of Coralgrove City\l"
	.string "waltz in not too long ago.$"

WorldTournamentAceTrainer_Text::
# 187 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "It's the Pokémon World Tournament!\n"
	.string "It's all in the name!\p"
	.string "Trainers have gathered\n"
	.string "from all over the world!$"

WorldTournamentScientist_Text::
# 193 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "The crowd will go wild for\n"
	.string "my Pokémon!$"

WorldTournamentHiker_Text::
# 197 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Many trainers from far away\n"
	.string "will come to participate!$"

WorldTournamentMan5_Text::
# 201 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "I'm not much of a trainer myself,\n"
	.string "but my brother has come real close\l"
	.string "to winning in the past.\p"
	.string "If we cheer loud enough,\n"
	.string "he'll definitely win this time!$"

WorldTournamentGirl3_Text::
# 208 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "The competition is really fierce\n"
	.string "this time around.\p"
	.string "I can't wait to see who wins!$"

WorldTournamentLeftBouncer_Text::
# 213 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "That's the Pokemon World Tournament\n"
	.string "for you! It's packed with spectators!$"

WorldTournamentRightBouncer_Text::
# 217 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "It's crazy popular! This is what\n"
	.string "packed to the rafters means!$"

WelcomeToPWT::
# 244 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Welcome to the\n"
	.string "Pokémon World Tournament!\p"
	.string "Would you like to participate\n"
	.string "in the tournament?$"

WelcomeToPWT_Short::
# 250 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Would you like to participate\n"
	.string "in the tournament?$"

PWT_Info_WhichTournament::
# 273 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Which tournament do you\n"
	.string "want to know about?$"

PWT_Info_BattleFormats_Text::
# 281 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "There are two battle formats\n"
	.string "to a tournament:\l"
	.string "Single and Double.\p"
	.string "Single Battles need three Pokémon,\n"
	.string "while Double Battles need four.\p"
	.string "Double battles give you more points\n"
	.string "when you manage to win, so jump in!\l"
	.string "It's worthwhile to try it!$"

PWT_Info_Frosthearth_Text::
# 295 "data/maps/PokemonWorldTournament/scripts.pory"
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
# 310 "data/maps/PokemonWorldTournament/scripts.pory"
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
# 326 "data/maps/PokemonWorldTournament/scripts.pory"
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
# 357 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Which tournament\n"
	.string "will you participate in?$"

WhichBattleFormat::
# 361 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Which battle format\n"
	.string "will you choose?$"

PWT_NotEnoughValidMons::
# 462 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "My dear challenger!\p"
	.string "You do not have the {STR_VAR_2} Pokémon\n"
	.string "required for entry.\p"
	.string "Please note that certain Legendary\n"
	.string "Pokémon may be ineligible to enter.\p"
	.string "Eggs{STR_VAR_1} ineligible.\p"
	.string "When you have made your preparations,\n"
	.string "please do return.$"

Pwt_Incomplete_Text::
# 476 "data/maps/PokemonWorldTournament/scripts.pory"
	.string "Hello, and welcome to the\n"
	.string "Pokémon World Tournament!\p"
	.string "…Is what I would normally say.\p"
	.string "The Pokémon World Tournament\n"
	.string "is still under construction,\l"
	.string "so we are currently hosting\l"
	.string "Battle Factory here instead.$"
