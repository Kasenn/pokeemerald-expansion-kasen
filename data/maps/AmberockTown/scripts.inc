AmberockTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_FlagControl
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PaperVisibility
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AmberockTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AmberockTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AmberockTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_3, 0, SetPlayerKrokorokModel
	.2byte 0

AmberockTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY, Amberock_GroupGoesToGate
	.2byte 0


Amberock_GateEvent1::
	setvar VAR_TEMP_3, 1
	goto AmberockGateEventMain
	return


Amberock_GateEvent2::
	setvar VAR_TEMP_3, 2
	goto AmberockGateEventMain
	return


Amberock_GateEvent3::
	setvar VAR_TEMP_3, 3
	goto AmberockGateEventMain
	return


Amberock_GateEvent4::
	setvar VAR_TEMP_3, 4
	goto AmberockGateEventMain
	return


AmberockGateEventMain::
	lock
	safefollow
	switch VAR_TEMP_3
	case 1, AmberockGateEventMain_3
	case 2, AmberockGateEventMain_4
	case 3, AmberockGateEventMain_5
	case 4, AmberockGateEventMain_6
AmberockGateEventMain_1:
	waitmovement 0
	turnobject 10, DIR_SOUTH
	delay 8
	msgbox VolknerTakePrisoners, MSGBOX_AUTOCLOSE
	applymovement 7, Amberock_LeftRocketLeaves
	applymovement 8, Amberock_RightRocketLeaves
	delay 48
	applymovement 22, Amberock_VolknerLeaves
	delay 16
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 10, DIR_EAST
	waitmovement 0
	delay 16
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	turnobject 10, DIR_SOUTH
	msgbox ClayGoAfterGiovanni, MSGBOX_AUTOCLOSE
	delay 8
	applymovement 10, Walk1Up
	waitmovement 0
	delay 16
	applymovement 27, MoveGateLeft
	applymovement 28, MoveGateRight
	waitmovement 0
	delay 8
	applymovement 10, ClayGoesToFactory
	waitmovement 0
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_BEAT_GUARDS
	removeobject 10
	removeobject 22
	removeobject 7
	removeobject 8
	setobjectxyperm 27, 41, 20
	setobjectxyperm 28, 44, 20
	release
	return

AmberockGateEventMain_3:
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement1
	goto AmberockGateEventMain_1

AmberockGateEventMain_4:
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement2
	goto AmberockGateEventMain_1

AmberockGateEventMain_5:
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement3
	goto AmberockGateEventMain_1

AmberockGateEventMain_6:
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement4
	goto AmberockGateEventMain_1


MoveGateLeft:
	lock_facing_direction
	lock_anim
	walk_left
	step_end

MoveGateRight:
	lock_facing_direction
	lock_anim
	walk_right
	step_end

Amberock_LeftRocketLeaves:
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

Amberock_RightRocketLeaves:
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

Amberock_VolknerLeaves:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

ClayGoesToFactory:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

GateMovement1:
	walk_right
	walk_right
	walk_up
	step_end

GateMovement2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_fast_up
	step_end

GateMovement3:
	walk_left
	walk_left
	walk_left
	walk_in_place_fast_up
	step_end

GateMovement4:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

Amberock_GroupGoesToGate::
	delay 15
	turnobject 10, DIR_SOUTH
	msgbox LetsGoToGate, MSGBOX_AUTOCLOSE
	turnobject 10, DIR_EAST
	delay 15
	applymovement 9, Amberock_GroupGoesToGate_Movement_0
	waitmovement 0
	removeobject 9
	goto_if_set FLAG_FACTORY_ITEM_1, Amberock_GroupGoesToGate_2
	goto_if_set FLAG_FACTORY_ITEM_2, Amberock_GroupGoesToGate_2
	goto_if_set FLAG_FACTORY_ITEM_3, Amberock_GroupGoesToGate_2
Amberock_GroupGoesToGate_1:
	applymovement 10, ClayMovesToGate
	applymovement 22, VolknerMovesToGate
	waitmovement 10
	setobjectxy 10, 42, 22
	setobjectxyperm 10, 42, 22
	setobjectxy 22, 43, 22
	setobjectxyperm 22, 43, 22
	turnobject 10, DIR_NORTH
	turnobject 22, DIR_NORTH
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
	release
	return

Amberock_GroupGoesToGate_2:
	playse SE_PIN
	applymovement 10, ExclamationMark
	waitmovement 0
	delay 48
	turnobject 10, DIR_SOUTH
	delay 15
	msgbox KrokorokWasCarryingSomething, MSGBOX_AUTOCLOSE
	closemessage
	turnobject 10, DIR_EAST
	delay 15
	goto_if_set FLAG_FACTORY_ITEM_1, Amberock_GroupGoesToGate_9
Amberock_GroupGoesToGate_8:
	goto_if_set FLAG_FACTORY_ITEM_2, Amberock_GroupGoesToGate_12
Amberock_GroupGoesToGate_11:
	goto_if_set FLAG_FACTORY_ITEM_3, Amberock_GroupGoesToGate_15
Amberock_GroupGoesToGate_14:
	delay 60
	goto Amberock_GroupGoesToGate_1

Amberock_GroupGoesToGate_9:
	clearflag FLAG_FACTORY_ITEM_1_OUTSIDE
	addobject 24
	goto Amberock_GroupGoesToGate_8

Amberock_GroupGoesToGate_12:
	clearflag FLAG_FACTORY_ITEM_2_OUTSIDE
	addobject 25
	goto Amberock_GroupGoesToGate_11

Amberock_GroupGoesToGate_15:
	clearflag FLAG_FACTORY_ITEM_3_OUTSIDE
	addobject 26
	goto Amberock_GroupGoesToGate_14


ClayMovesToGate:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

VolknerMovesToGate:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SetFactoryWarp2::
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_lt SetFactoryWarp2_2
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY_NO_LIGHTS, 1
SetFactoryWarp2_1:
	release
	return

SetFactoryWarp2_2:
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY, 1
	goto SetFactoryWarp2_1


SetFactoryWarp1::
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_lt SetFactoryWarp1_2
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY_NO_LIGHTS, 0
SetFactoryWarp1_1:
	release
	return

SetFactoryWarp1_2:
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY, 0
	goto SetFactoryWarp1_1


Amberock_FlagControl::
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_FlagControl_2
Amberock_FlagControl_1:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_ge Amberock_FlagControl_5
Amberock_FlagControl_4:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
	goto_if_eq Amberock_FlagControl_8
Amberock_FlagControl_7:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_BEAT_GUARDS
	goto_if_ge Amberock_FlagControl_11
Amberock_FlagControl_10:
	goto_if_unset FLAG_DISGUISED_AS_KROKOROK, Amberock_FlagControl_14
	setflag FLAG_TEMP_HIDE_FOLLOWER
	setflag FLAG_TEMP_6
Amberock_FlagControl_13:
	goto_if_set FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_FlagControl_18
	setflag FLAG_TEMP_C
Amberock_FlagControl_17:
	call Amberock_AcerolaEvent
	call Amberock_SetPlayerModel
	return

Amberock_FlagControl_2:
	setflag FLAG_TEMP_A
	setflag FLAG_REPAIR_AMBEROCK_BRIDGE
	goto Amberock_FlagControl_1

Amberock_FlagControl_5:
	setflag FLAG_TEMP_D
	goto Amberock_FlagControl_4

Amberock_FlagControl_8:
	setflag FLAG_TEMP_6
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 10, 42, 22
	setobjectxyperm 22, 43, 22
	goto Amberock_FlagControl_7

Amberock_FlagControl_11:
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_8
	setobjectxyperm 27, 41, 20
	setobjectxyperm 28, 44, 20
	goto Amberock_FlagControl_10

Amberock_FlagControl_14:
	setflag FLAG_TEMP_5
	goto Amberock_FlagControl_13

Amberock_FlagControl_18:
	setmaplayoutindex LAYOUT_AMBEROCK_TEST
	goto Amberock_FlagControl_17


Amberock_KrokorokIntro::
	lock
	safefollow
	delay 15
	playse SE_PIN
	turnobject 10, DIR_SOUTH
	turnobject 22, DIR_SOUTH
	applymovement 10, ExclamationMark
	applymovement 22, ExclamationMark
	waitmovement 0
	delay 64
	dismountplayer
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
	waitmovement 0
	unlockfollowermovement
	msgbox VolknerGreetsPlayer
	turnobject 22, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	turnobject 10, DIR_EAST
	msgbox ClayHelped
	turnobject 22, DIR_SOUTH
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox VolknerControlKrokorok
	turnobject 22, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	turnobject 10, DIR_EAST
	msgbox ClayTip
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_SPOKE_WITH_CLAY
	release
	return


Amberock_Clay::
	msgbox Amberock_Clay_Text, MSGBOX_NPC
	return


Amberock_Volkner::
	msgbox Amberock_Volkner_Text, MSGBOX_NPC
	return


Amberock_KrokorokScript::
	msgbox SwitchToKrokorok, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_KrokorokScript_2
	closemessage
	delay 15
	clearflag FLAG_TEMP_5
	addobject 11
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
	waitmovement 0
	setkrokorokdisguise
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
	waitmovement 0
	setflag FLAG_DISGUISED_AS_KROKOROK
	setflag FLAG_TEMP_HIDE_FOLLOWER
	callnative UpdateFollowingPokemon
	setflag FLAG_SYS_USE_STRENGTH
	removeobject 9
	clearflag FLAG_SYS_B_DASH
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, KrokorokGoesNorthThroughFence
	delay 8
	playse SE_LEDGE
	delay 32
	playse SE_M_DIG
	waitse
	playse SE_M_DIG
	waitse
	playse SE_M_DIG
	waitse
	playse SE_M_DIG
	waitse
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
	delay 32
	playse SE_M_SAND_ATTACK
	playse SE_BIKE_HOP
	waitmovement 0
	release
	return

Amberock_KrokorokScript_2:
	release
	end


Amberock_KrokorokGiovanniCutScene::
	lock
	delay 15
	msgbox GiovanniWeAreOnSchedule
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Amberock_KrokorokGiovanniCutScene_Movement_0
	waitmovement 0
	msgbox ClayLetsBail
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Right
	waitmovement 0
	msgbox ClayLetsBail2
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_GIOVANNI
	release
	return


Amberock_RecallKrokorok::
	msgbox TellKrokorokToRetreat, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_RecallKrokorok_2
	closemessage
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, KrokorokGoesSouthThroughFence
	delay 8
	playse SE_LEDGE
	delay 32
	playse SE_M_DIG
	waitse
	playse SE_M_DIG
	waitse
	playse SE_M_DIG
	waitse
	playse SE_M_DIG
	waitse
	fadenewbgm MUS_RUSTBORO
	delay 32
	playse SE_M_SAND_ATTACK
	playse SE_BIKE_HOP
	waitmovement 0
	clearflag FLAG_TEMP_6
	addobject 9
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerFromKrokorokSouth
	waitmovement 0
	setkrokorokdisguise
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
	waitmovement 0
	clearflag FLAG_DISGUISED_AS_KROKOROK
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	callnative UpdateFollowingPokemon
	removeobject 11
	setflag FLAG_SYS_B_DASH
	return

Amberock_RecallKrokorok_2:
	release
	end


PokeFactory_Packer::
	msgbox PokeFactory_Packer_Text
	release
	return


KrokorokGoesNorthThroughFence:
	walk_in_place_fast_up
	jump_in_place_up
	set_invisible
	delay_16
	walk_slow_up
	walk_slow_up
	delay_16
	delay_16
	delay_16
	set_visible
	jump_in_place_up
	step_end

KrokorokGoesSouthThroughFence:
	walk_in_place_fast_down
	jump_in_place_down
	set_invisible
	delay_16
	walk_slow_down
	walk_slow_down
	delay_16
	delay_16
	delay_16
	set_visible
	jump_in_place_down
	step_end

DiscoverAmberock::
	setflag FLAG_VISITED_AMBEROCK
	release
	return


Amberock_RetreatKrokorok::
	msgbox CallKrokorokBack, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_RetreatKrokorok_2
Amberock_RetreatKrokorok_1:
	release
	return

Amberock_RetreatKrokorok_2:
	clearflag FLAG_DISGUISED_AS_KROKOROK
	setflag FLAG_SYS_B_DASH
	warp MAP_AMBEROCK_TOWN, 30, 21
	waitstate
	goto Amberock_RetreatKrokorok_1


Amberock_PaperVisibility::
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_PaperVisibility_2
	return

Amberock_PaperVisibility_1:
	setmetatile 27 + 30, 10, 0x128, FALSE
	setmetatile 27 + 30, 12, 0x189, FALSE
	setmetatile 26 + 30, 12, 0x189, FALSE
	setmetatile 25 + 30, 13, 0x170, FALSE
	setmetatile 24 + 30, 13, 0x170, FALSE
	setmetatile 23 + 30, 13, 0x170, FALSE
	setmetatile 23 + 30, 14, 0x170, FALSE
	setmetatile 24 + 30, 14, 0x170, FALSE
	setmetatile 25 + 30, 14, 0x170, FALSE
	setmetatile 24 + 30, 15, 0x170, FALSE
	setmetatile 25 + 30, 15, 0x170, FALSE
	setmetatile 26 + 30, 15, 0x170, FALSE
	setmetatile 26 + 30, 16, 0x170, FALSE
	setmetatile 27 + 30, 16, 0x170, FALSE
	setmetatile 28 + 30, 16, 0x170, FALSE
	return

Amberock_PaperVisibility_2:
	goto_if_unset FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_PaperVisibility_1
	return


Amberock_SurfScientist::
	lock
	faceplayer
	msgbox HereIsSurfHM
	giveitem ITEM_HM03
	msgbox GoGetBackPapers
	closemessage
	safefollow
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Amberock_SurfScientist_2
	applymovement 1, ScientistLeavesStraight
Amberock_SurfScientist_1:
	waitmovement 0
	removeobject 1
	setflag FLAG_RECEIVED_HM_SURF
	release
	return

Amberock_SurfScientist_2:
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 64
	goto_if_eq Amberock_SurfScientist_7
Amberock_SurfScientist_5:
	applymovement 1, ScientistLeavesDetour
	goto Amberock_SurfScientist_1

Amberock_SurfScientist_6:
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_SurfScientist_5

Amberock_SurfScientist_7:
	compare VAR_TEMP_2, 10
	goto_if_eq Amberock_SurfScientist_6
	goto Amberock_SurfScientist_5


ScientistLeavesDetour:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

ScientistLeavesStraight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Amberock_Papers::
	lock
	safefollow
	msgbox PapersOnGround
	removeobject 3
	setmetatile 57, 10, 0x128, FALSE
	special DrawWholeMapView
	closemessage
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	addobject 1
	addobject 2
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
	checktrainerflag TRAINER_R15_TR18_BERRYROCKET
	goto_if 0, Amberock_Papers_2
Amberock_Papers_1:
	delay 60
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_6
	case DIR_WEST, Amberock_Papers_7
	case DIR_EAST, Amberock_Papers_8
Amberock_Papers_4:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 24
	goto_if_set FLAG_TEMP_A, Amberock_Papers_10
	msgbox OurPapers
Amberock_Papers_9:
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_30
	case DIR_WEST, Amberock_Papers_31
	case DIR_EAST, Amberock_Papers_32
Amberock_Papers_28:
	waitmovement 0
	delay 60
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_35
	case DIR_WEST, Amberock_Papers_36
	case DIR_EAST, Amberock_Papers_37
Amberock_Papers_33:
	waitmovement 0
	delay 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_Papers_39
	bufferstring STR_VAR_1, Amberock_Papers_Text_1
Amberock_Papers_38:
	goto_if_set FLAG_ACEROLA_TALKED_TO, Amberock_Papers_43
	msgbox AcerolaVisitGymAlternative
Amberock_Papers_42:
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_48
	case DIR_WEST, Amberock_Papers_49
	case DIR_EAST, Amberock_Papers_50
Amberock_Papers_46:
	waitmovement 0
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
	removeobject 1
	removeobject 2
	delay 15
	release
	return

Amberock_Papers_2:
	call AmberockAlternativeCutscene
	goto Amberock_Papers_1

Amberock_Papers_6:
	compare VAR_TEMP_1, 57
	goto_if_eq Amberock_Papers_15
Amberock_Papers_13:
	applymovement 1, MoveScientist2
	goto Amberock_Papers_4

Amberock_Papers_7:
	compare VAR_TEMP_1, 58
	goto_if_eq Amberock_Papers_20
Amberock_Papers_18:
	setobjectxy 31, 28, 4
	applymovement 1, Walk6Down
	goto Amberock_Papers_4

Amberock_Papers_8:
	compare VAR_TEMP_1, 56
	goto_if_eq Amberock_Papers_25
Amberock_Papers_23:
	setobjectxy 31, 28, 4
	applymovement 1, MoveScientist1
	goto Amberock_Papers_4

Amberock_Papers_10:
	msgbox OurPapersAlternative
	goto Amberock_Papers_9

Amberock_Papers_14:
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_13

Amberock_Papers_15:
	compare VAR_TEMP_2, 8
	goto_if_eq Amberock_Papers_14
	goto Amberock_Papers_13

Amberock_Papers_19:
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_18

Amberock_Papers_20:
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_19
	goto Amberock_Papers_18

Amberock_Papers_24:
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_23

Amberock_Papers_25:
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_24
	goto Amberock_Papers_23

Amberock_Papers_30:
	applymovement 1, ScientistLeave2
	goto Amberock_Papers_28

Amberock_Papers_31:
	applymovement 1, Walk5Up
	goto Amberock_Papers_28

Amberock_Papers_32:
	applymovement 1, ScientistLeave1
	goto Amberock_Papers_28

Amberock_Papers_35:
	applymovement 2, MoveScientist2
	goto Amberock_Papers_33

Amberock_Papers_36:
	setobjectxy 32, 28, 4
	applymovement 2, Walk6Down
	goto Amberock_Papers_33

Amberock_Papers_37:
	setobjectxy 32, 28, 4
	applymovement 2, MoveScientist1
	goto Amberock_Papers_33

Amberock_Papers_39:
	bufferstring STR_VAR_1, Amberock_Papers_Text_0
	goto Amberock_Papers_38

Amberock_Papers_43:
	msgbox AcerolaVisitGym
	goto Amberock_Papers_42

Amberock_Papers_48:
	applymovement 2, ScientistLeave2
	goto Amberock_Papers_46

Amberock_Papers_49:
	applymovement 2, Walk5Up
	goto Amberock_Papers_46

Amberock_Papers_50:
	applymovement 2, ScientistLeave1
	goto Amberock_Papers_46


MoveScientist1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MoveScientist2:
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

ScientistLeave2:
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

ScientistLeave1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

AmberockAlternativeCutscene::
	delay 48
	switch VAR_FACING
	case DIR_WEST, AmberockAlternativeCutscene_3
	case DIR_EAST, AmberockAlternativeCutscene_3
AmberockAlternativeCutscene_1:
	waitmovement 0
	special SpawnCameraObject
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_5
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Down
AmberockAlternativeCutscene_4:
	waitmovement 0
	delay 60
	msgbox RocketYoureTooLate
	closemessage
	setflag FLAG_TEMP_A
	applymovement 4, Walk4Down
	waitmovement 0
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_9
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Up
AmberockAlternativeCutscene_8:
	waitmovement 0
	special RemoveCameraObject
	return

AmberockAlternativeCutscene_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto AmberockAlternativeCutscene_1

AmberockAlternativeCutscene_5:
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Down
	goto AmberockAlternativeCutscene_4

AmberockAlternativeCutscene_9:
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Up
	goto AmberockAlternativeCutscene_8


Amberock_WelcomeSign::
	msgbox Amberock_WelcomeSign_Text, MSGBOX_SIGN
	return


Amberock_FactorySign::
	msgbox Amberock_FactorySign_Text, MSGBOX_SIGN
	return


Amberock_GameCornerSign::
	msgbox Amberock_GameCornerSign_Text, MSGBOX_SIGN
	return


PokeFactory_Bouncer::
	msgbox PokeFactory_Bouncer_Text, MSGBOX_NPC
	turnobject 7, DIR_SOUTH
	turnobject 8, DIR_SOUTH
	return


Amberock_Girl2::
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_eq Amberock_Girl2_1
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
	goto_if_ge Amberock_Girl2_2
	msgbox Amberock_Girl2_Text2, MSGBOX_NPC
	return

Amberock_Girl2_1:
	msgbox Amberock_Girl2_Text, MSGBOX_NPC
	return

Amberock_Girl2_2:
	msgbox Amberock_Girl2_Text3, MSGBOX_NPC
	return


Amberock_OldWoman::
	msgbox Amberock_OldWoman_Text, MSGBOX_NPC
	return


Amberock_Boy::
	msgbox Amberock_Boy_Text, MSGBOX_NPC
	return


Amberock_OldMan::
	lock
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_OldMan_2
	faceplayer
	msgbox Amberock_OldMan_Text
	giveitem ITEM_COIN_CASE
	release
	turnobject 16, DIR_SOUTH
	end

Amberock_OldMan_2:
	msgbox Amberock_OldMan_Text2
	release
	end


Amberock_Magnemite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGNEMITE, CRY_MODE_NORMAL
	msgbox Amberock_Magnemite_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Amberock_BridgeRepair::
	msgbox Amberock_BridgeRepair_Text, MSGBOX_NPC
	return


Amberock_AcerolaEvent::
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_2
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_AcerolaEvent_2
Amberock_AcerolaEvent_1:
	goto_if_set FLAG_BADGE05_GET, Amberock_AcerolaEvent_6
Amberock_AcerolaEvent_4:
	return

Amberock_AcerolaEvent_2:
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_1
	goto Amberock_AcerolaEvent_1

Amberock_AcerolaEvent_5:
	setobjectxyperm 1, 63, 11
	clearflag FLAG_TEMP_2
	goto Amberock_AcerolaEvent_4

Amberock_AcerolaEvent_6:
	goto_if_unset FLAG_RECEIVED_HM_SURF, Amberock_AcerolaEvent_5
	goto Amberock_AcerolaEvent_4


Amberock_SetPlayerModel::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_SetPlayerModel_2
	switch VAR_CHOSEN_OUTFIT
	case 0, Amberock_SetPlayerModel_10
	case 1, Amberock_SetPlayerModel_11
	case 2, Amberock_SetPlayerModel_12
Amberock_SetPlayerModel_1:
	return

Amberock_SetPlayerModel_2:
	switch VAR_CHOSEN_OUTFIT
	case 0, Amberock_SetPlayerModel_6
	case 1, Amberock_SetPlayerModel_7
	case 2, Amberock_SetPlayerModel_8
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_NORMAL_RS
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_7:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_8:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_NORMAL_ORAS
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_10:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_NORMAL_RS
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_11:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_12:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_NORMAL_ORAS
	goto Amberock_SetPlayerModel_1


SetPlayerKrokorokModel::
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, SetPlayerKrokorokModel_2
SetPlayerKrokorokModel_1:
	setvar VAR_TEMP_3, 1
	return

SetPlayerKrokorokModel_2:
	setkrokorokdisguise
	goto SetPlayerKrokorokModel_1


Amberock_GroupGoesToGate_Movement_0:
	enter_pokeball
	set_invisible
	step_end

Amberock_KrokorokGiovanniCutScene_Movement_0:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_in_place_fast_down
	step_end

Amberock_Papers_Text_0:
	.string "mister$"

Amberock_Papers_Text_1:
	.string "miss$"

VolknerTakePrisoners::
	.string "Clay: These guards barely put up\n"
	.string "a fight.\p"
	.string "Volkner will deliver them to\n"
	.string "the police, while we will head\l"
	.string "inside and put a stop to this.$"

ClayGoAfterGiovanni::
	.string "I'll head directly to the pier.\p"
	.string "You go grab those papers,\n"
	.string "and once you're ready,\l"
	.string "come assist me at the pier.$"

LetsGoToGate::
	.string "Clay: With the facility plunged\n"
	.string "into darkness, we can rush\l"
	.string "the gates without raising an alarm.\p"
	.string "Let's go!$"

KrokorokWasCarryingSomething::
	.string "Clay: It looks like the Krokorok\n"
	.string "was carrying something.\p"
	.string "Most of this stuff belonged to\n"
	.string "Team Rocket, so no need to feel bad\l"
	.string "for taking it.\p"
	.string "Once you're ready,\n"
	.string "meet us at the gates.$"

VolknerGreetsPlayer::
	.string "Volkner: Oh, it's you.\n"
	.string "{PLAYER}, right?\p"
	.string "You're here after Team Rocket\n"
	.string "as well? Perfect timing.\p"
	.string "Busting through the main gate would\n"
	.string "most likely sound an alarm, so we\l"
	.string "came up with a different way in.$"

ClayHelped::
	.string "Interrogating the grunt we caught\n"
	.string "at the Pokémon Ranch, we learned\l"
	.string "about where Team Rocket might\l"
	.string "attack next.\p"
	.string "So, I contacted Mr. Clay,\n"
	.string "who was willing to train a Krokorok\l"
	.string "we can order around and use to\l"
	.string "spy on their operations.$"

VolknerControlKrokorok::
	.string "This Krokorok is wearing a hidden\n"
	.string "ear piece and a camera, allowing\l"
	.string "us to order it around remotely.\p"
	.string "I've seen how good you are with\n"
	.string "Pokémon.\p"
	.string "Maybe you'd like to command\n"
	.string "the Krokorok?\p"
	.string "The objective is simple: find out who\n"
	.string "is in charge, what their plans are,\l"
	.string "and sabotage the facility's generator\l"
	.string "so that we can sneak in while they are\l"
	.string "trying to figure out what happened.$"

Amberock_Clay_Text::
	.string "Team Rocket ain't known for\n"
	.string "their kindness, so they might not\l"
	.string "like it if they spot a Krokorok\l"
	.string "wandering around aimlessly.\p"
	.string "Try to avoid their sight, and\n"
	.string "do not veer too close to one,\l"
	.string "lest they hear you.$"

ClayTip::
	.string "Clay: Team Rocket ain't known for\n"
	.string "their kindness, so they might not\l"
	.string "like it if they spot a Krokorok\l"
	.string "wandering around aimlessly.\p"
	.string "Try to avoid their sight, and\n"
	.string "do not veer too close to one,\l"
	.string "lest they hear you.$"

Amberock_Volkner_Text::
	.string "The objective is simple: find out who\n"
	.string "is in charge, what their plans are,\l"
	.string "and sabotage the facility's generator\l"
	.string "so that we can sneak in while they are\l"
	.string "trying to figure out what happened.$"

GiovanniWeAreOnSchedule::
	.string "Clay: Is that who I think it is?\n"
	.string "Get us a bit closer, will ya?$"

ClayLetsBail::
	.string "Proton: We've finished grabbing\n"
	.string "the Poké Balls from the assembly\l"
	.string "lines, and are now scouring through\l"
	.string "the crates.\p"
	.string "It will take a while to grab\n"
	.string "everything, but we should be able to\l"
	.string "finish before we are discovered.\p"
	.string "???: Excellent. And what about\n"
	.string "the research?\p"
	.string "Proton: Everything is going exactly\n"
	.string "as planned.\l"
	.string "Some of the smartest people I know\l"
	.string "are on the case.$"

ClayLetsBail2::
	.string "Clay: It's just as we feared.\p"
	.string "This ain't some small\n"
	.string "remnant force.\p"
	.string "That's Giovanni, the actual leader\n"
	.string "of the syndicate.\p"
	.string "Quick, we must cut the power NOW.\p"
	.string "We need to get inside this facility\n"
	.string "and put an end to this!$"

PokeFactory_Packer_Text::
	.string "The grunt is too busy packing the\n"
	.string "crates to notice the Krokorok.$"

TellKrokorokToRetreat::
	.string "Order the Krokorok to return back\n"
	.string "to the group?$"

CallKrokorokBack::
	.string "Order the Krokorok to return back\n"
	.string "to the group?$"

HereIsSurfHM::
	.string "Ah, perfect timing!\p"
	.string "I was able to get my hands on the\n"
	.string "perfect Hidden Machine for this job.\p"
	.string "Here, you should take it.$"

GoGetBackPapers::
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
	.string "There seems to be some papers on\n"
	.string "the ground here.\p"
	.string "{PLAYER} picked up the papers.$"

OurPapers::
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
	.string "Rocket Grunt: I see our little\n"
	.string "diversion wasn't enough to fool you.\p"
	.string "But, it matters not.\n"
	.string "You're late anyway!\p"
	.string "Good luck ever catching me!$"

Amberock_WelcomeSign_Text::
	.string "AMBEROCK TOWN\n"
	.string "“The town where everyone prospers!”$"

Amberock_FactorySign_Text::
	.string "Poké Ball Factory$"

Amberock_GameCornerSign_Text::
	.string "“The play spot for all!”\n"
	.string "Amberock Game Corner$"

PokeFactory_Bouncer_Text::
	.string "This place isn't a playground.\n"
	.string "Beat it, kid.$"

Amberock_Girl2_Text::
	.string "Team Rocket attacked the Poké Ball\n"
	.string "factory? I hope everybody is okay.$"

Amberock_Girl2_Text2::
	.string "There's some pretty menacing guys\n"
	.string "guarding the gate to the factory.\p"
	.string "I wonder what's going on…$"

Amberock_Girl2_Text3::
	.string "What's going on with the factory?$"

Amberock_OldWoman_Text::
	.string "They kicked me out because I was\n"
	.string "too good of a player!\p"
	.string "They say my Magnemite was rigging the\n"
	.string "machines, but there's no proof of that!$"

Amberock_Boy_Text::
	.string "They say Amberock Town used to be\n"
	.string "Amberock City, but the cliffs have\l"
	.string "slowly eroded away and reduced the\l"
	.string "size of livable land.$"

Amberock_OldMan_Text::
	.string "I'm done gambling!\n"
	.string "It has led me absolutely nowhere!\p"
	.string "Here, you want this?\n"
	.string "Well, it's yours!$"

Amberock_OldMan_Text2::
	.string "Stupid Game Corner…$"

Amberock_Magnemite_Text::
	.string "Magnemite: Bzzzt!$"

Amberock_BridgeRepair_Text::
	.string "This bridge breaks quite often,\n"
	.string "so we need to be on constant lookout\l"
	.string "and fix it before it causes trouble\l"
	.string "for the residents.$"
