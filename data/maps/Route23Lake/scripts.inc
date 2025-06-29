Route23Lake_MapScripts::
# 2 "data/maps/Route23Lake/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23Lake_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route23Lake_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route23Lake/scripts.pory"
	call Amberock_SetPlayerModel
# 4 "data/maps/Route23Lake/scripts.pory"
	checkpartymon SPECIES_LATIAS, FALSE
# 5 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_TEMP_4
# 6 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_TEMP_5
# 7 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_TEMP_3
# 9 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_TEMP_1
	return


TriggerLatiosRoam::
# 14 "data/maps/Route23Lake/scripts.pory"
	checkpartymon SPECIES_LATIOS, FALSE
# 15 "data/maps/Route23Lake/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TriggerLatiosRoam_2
	checkitem ITEM_SOUL_DEW
# 0 "data/maps/Route23Lake/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TriggerLatiosRoam_5
# 68 "data/maps/Route23Lake/scripts.pory"
	safefollow
# 69 "data/maps/Route23Lake/scripts.pory"
	release
# 70 "data/maps/Route23Lake/scripts.pory"
	fadeoutbgm 0
# 71 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 72 "data/maps/Route23Lake/scripts.pory"
	msgbox SoulDewStartsShining, MSGBOX_SIGN
# 73 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_DETECT
# 74 "data/maps/Route23Lake/scripts.pory"
	dofieldeffectsparkle 19, 15, 0
# 75 "data/maps/Route23Lake/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 76 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_RESULT, 1
# 77 "data/maps/Route23Lake/scripts.pory"
	playse SE_ORB
# 78 "data/maps/Route23Lake/scripts.pory"
	special DoOrbEffect
# 79 "data/maps/Route23Lake/scripts.pory"
	delay 150
# 80 "data/maps/Route23Lake/scripts.pory"
	waitstate
# 81 "data/maps/Route23Lake/scripts.pory"
	random 65535
# 82 "data/maps/Route23Lake/scripts.pory"
	compare VAR_RESULT, 32
	goto_if_lt TriggerLatiosRoam_12
TriggerLatiosRoam_11:
# 85 "data/maps/Route23Lake/scripts.pory"
	goto_if_set FLAG_LATIOS_SHINY, TriggerLatiosRoam_19
# 89 "data/maps/Route23Lake/scripts.pory"
	addobject 2
TriggerLatiosRoam_18:
# 91 "data/maps/Route23Lake/scripts.pory"
	special FadeOutOrbEffect
# 92 "data/maps/Route23Lake/scripts.pory"
	waitstate
# 93 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 94 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_FLY
# 95 "data/maps/Route23Lake/scripts.pory"
	waitse
# 96 "data/maps/Route23Lake/scripts.pory"
	delay 30
# 97 "data/maps/Route23Lake/scripts.pory"
	goto_if_set FLAG_LATIOS_SHINY, TriggerLatiosRoam_23
# 101 "data/maps/Route23Lake/scripts.pory"
	applymovement 2, TriggerLatiosRoam_Movement_4
TriggerLatiosRoam_22:
# 103 "data/maps/Route23Lake/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 105 "data/maps/Route23Lake/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
# 106 "data/maps/Route23Lake/scripts.pory"
	waitmoncry
# 107 "data/maps/Route23Lake/scripts.pory"
	delay 30
# 108 "data/maps/Route23Lake/scripts.pory"
	playse SE_PC_ON
# 109 "data/maps/Route23Lake/scripts.pory"
	waitse
# 110 "data/maps/Route23Lake/scripts.pory"
	msgbox LatisRegistered, MSGBOX_SIGN
# 111 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 112 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_FLY
# 113 "data/maps/Route23Lake/scripts.pory"
	goto_if_set FLAG_LATIOS_SHINY, TriggerLatiosRoam_27
# 117 "data/maps/Route23Lake/scripts.pory"
	applymovement 2, TriggerLatiosRoam_Movement_5
TriggerLatiosRoam_26:
# 119 "data/maps/Route23Lake/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route23Lake/scripts.pory"
	waitse
# 121 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 122 "data/maps/Route23Lake/scripts.pory"
	setseenmon SPECIES_LATIOS
# 123 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_LATIOS_ROAMING
# 124 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_0x8004, 1
# 125 "data/maps/Route23Lake/scripts.pory"
	special InitRoamer
# 126 "data/maps/Route23Lake/scripts.pory"
	removeobject 2
# 127 "data/maps/Route23Lake/scripts.pory"
	removeobject 3
# 128 "data/maps/Route23Lake/scripts.pory"
	fadeinbgm 0
# 129 "data/maps/Route23Lake/scripts.pory"
	delay 48
	end

TriggerLatiosRoam_2:
# 16 "data/maps/Route23Lake/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8000
# 17 "data/maps/Route23Lake/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq TriggerLatiosRoam_8
# 21 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_TEMP_0, LOCALID_RIDE_LATIOS
TriggerLatiosRoam_7:
# 23 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 24 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_FACING, DIR_SOUTH
# 25 "data/maps/Route23Lake/scripts.pory"
	waitmove LOCALID_LATIBALL_ROUTE23, TriggerLatiosRoam_Movement_0
# 27 "data/maps/Route23Lake/scripts.pory"
	addobject VAR_TEMP_0
# 29 "data/maps/Route23Lake/scripts.pory"
	removeobject LOCALID_LATIBALL_ROUTE23
# 30 "data/maps/Route23Lake/scripts.pory"
	msgbox LatiasWantsToTakeYouSomewhere, MSGBOX_YESNO
# 31 "data/maps/Route23Lake/scripts.pory"
	closemessage
# 32 "data/maps/Route23Lake/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TriggerLatiosRoam_15
# 39 "data/maps/Route23Lake/scripts.pory"
	turnobject VAR_TEMP_0, DIR_NORTH
# 40 "data/maps/Route23Lake/scripts.pory"
	addobject LOCALID_FAKE_PLAYER_ROUTE23
# 41 "data/maps/Route23Lake/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER_ROUTE23, MAP_ROUTE23LAKE, 0
# 42 "data/maps/Route23Lake/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE23LAKE
# 43 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_STOP_GROUND_EFFECTS
# 44 "data/maps/Route23Lake/scripts.pory"
	waitmove LOCALID_FAKE_PLAYER_ROUTE23, TriggerLatiosRoam_Movement_2
# 45 "data/maps/Route23Lake/scripts.pory"
	call SetSittingPlayerModel
# 46 "data/maps/Route23Lake/scripts.pory"
	removeobject LOCALID_FAKE_PLAYER_ROUTE23
# 47 "data/maps/Route23Lake/scripts.pory"
	setobjectxyperm LOCALID_FAKE_PLAYER_ROUTE23, 19, 13
# 48 "data/maps/Route23Lake/scripts.pory"
	addobject LOCALID_FAKE_PLAYER_ROUTE23
# 49 "data/maps/Route23Lake/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER_ROUTE23, MAP_ROUTE23LAKE, 0
# 50 "data/maps/Route23Lake/scripts.pory"
	delay 16
# 51 "data/maps/Route23Lake/scripts.pory"
	applymovement VAR_TEMP_0, PlayerAndLatiasLeave2
# 52 "data/maps/Route23Lake/scripts.pory"
	applymovement LOCALID_FAKE_PLAYER_ROUTE23, TriggerLatiosRoam_Movement_3
# 53 "data/maps/Route23Lake/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route23Lake/scripts.pory"
	clearflag FLAG_STOP_GROUND_EFFECTS
# 55 "data/maps/Route23Lake/scripts.pory"
	clearflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 56 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_0x8004, 3
# 57 "data/maps/Route23Lake/scripts.pory"
	callnative LatisWarp
# 58 "data/maps/Route23Lake/scripts.pory"
	special LatiRide
# 59 "data/maps/Route23Lake/scripts.pory"
	waitstate
TriggerLatiosRoam_14:
# 61 "data/maps/Route23Lake/scripts.pory"
	release
	end

TriggerLatiosRoam_5:
# 65 "data/maps/Route23Lake/scripts.pory"
	release
	end

TriggerLatiosRoam_8:
# 18 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_TEMP_0, LOCALID_RIDE_SHINY_LATIOS
	goto TriggerLatiosRoam_7

TriggerLatiosRoam_12:
# 83 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_LATIOS_SHINY
	goto TriggerLatiosRoam_11

TriggerLatiosRoam_15:
# 33 "data/maps/Route23Lake/scripts.pory"
	waitmove VAR_TEMP_0, TriggerLatiosRoam_Movement_1
# 34 "data/maps/Route23Lake/scripts.pory"
	removeobject VAR_TEMP_0
# 35 "data/maps/Route23Lake/scripts.pory"
	clearflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 36 "data/maps/Route23Lake/scripts.pory"
	clearflag FLAG_STOP_GROUND_EFFECTS
	goto TriggerLatiosRoam_14

TriggerLatiosRoam_19:
# 86 "data/maps/Route23Lake/scripts.pory"
	addobject 3
	goto TriggerLatiosRoam_18

TriggerLatiosRoam_23:
# 98 "data/maps/Route23Lake/scripts.pory"
	applymovement 3, TriggerLatiosRoam_Movement_4
	goto TriggerLatiosRoam_22

TriggerLatiosRoam_27:
# 114 "data/maps/Route23Lake/scripts.pory"
	applymovement 3, TriggerLatiosRoam_Movement_5
	goto TriggerLatiosRoam_26


# 25 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_0:
# 25 "data/maps/Route23Lake/scripts.pory"
	set_visible
# 25 "data/maps/Route23Lake/scripts.pory"
	delay_1
# 25 "data/maps/Route23Lake/scripts.pory"
	delay_1
# 25 "data/maps/Route23Lake/scripts.pory"
	delay_1
# 25 "data/maps/Route23Lake/scripts.pory"
	lati_ball
	step_end

# 33 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_1:
# 33 "data/maps/Route23Lake/scripts.pory"
	enter_pokeball
# 33 "data/maps/Route23Lake/scripts.pory"
	set_invisible
	step_end

# 44 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_2:
# 44 "data/maps/Route23Lake/scripts.pory"
	jump_2_up
# 44 "data/maps/Route23Lake/scripts.pory"
	lock_anim
	step_end

# 52 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_3:
# 52 "data/maps/Route23Lake/scripts.pory"
	lock_anim
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_slow_up
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_up
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_up
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_faster_up
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_faster_up
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_faster_up
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_faster_up
# 52 "data/maps/Route23Lake/scripts.pory"
	walk_faster_up
	step_end

# 98 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_4:
# 98 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 98 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 98 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 98 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 98 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
	step_end

# 114 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_5:
# 114 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
	step_end

SoulDewStartsShining::
# 133 "data/maps/Route23Lake/scripts.pory"
	.string "The Soul Dew in your bag suddenly\n"
	.string "began shining by itself!$"

LatisRegistered::
# 137 "data/maps/Route23Lake/scripts.pory"
	.string "The Pokémon was registered on your\n"
	.string "Pokédex.$"
