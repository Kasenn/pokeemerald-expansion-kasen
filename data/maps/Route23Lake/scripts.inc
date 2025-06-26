Route23Lake_MapScripts::
# 2 "data/maps/Route23Lake/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23Lake_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route23Lake_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_TEMP_1
	return


TriggerLatiosRoam::
	checkitem ITEM_SOUL_DEW
# 0 "data/maps/Route23Lake/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TriggerLatiosRoam_2
# 12 "data/maps/Route23Lake/scripts.pory"
	safefollow
# 13 "data/maps/Route23Lake/scripts.pory"
	release
# 14 "data/maps/Route23Lake/scripts.pory"
	fadeoutbgm 0
# 15 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 16 "data/maps/Route23Lake/scripts.pory"
	msgbox SoulDewStartsShining, MSGBOX_SIGN
# 17 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_DETECT
# 18 "data/maps/Route23Lake/scripts.pory"
	dofieldeffectsparkle 19, 15, 0
# 19 "data/maps/Route23Lake/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 20 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_RESULT, 1
# 21 "data/maps/Route23Lake/scripts.pory"
	playse SE_ORB
# 22 "data/maps/Route23Lake/scripts.pory"
	special DoOrbEffect
# 23 "data/maps/Route23Lake/scripts.pory"
	delay 150
# 24 "data/maps/Route23Lake/scripts.pory"
	waitstate
# 25 "data/maps/Route23Lake/scripts.pory"
	compare VAR_RESULT, 32
	goto_if_lt TriggerLatiosRoam_5
TriggerLatiosRoam_4:
# 28 "data/maps/Route23Lake/scripts.pory"
	goto_if_set FLAG_LATIOS_SHINY, TriggerLatiosRoam_8
# 32 "data/maps/Route23Lake/scripts.pory"
	addobject 2
TriggerLatiosRoam_7:
# 34 "data/maps/Route23Lake/scripts.pory"
	special FadeOutOrbEffect
# 35 "data/maps/Route23Lake/scripts.pory"
	waitstate
# 36 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 37 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_FLY
# 38 "data/maps/Route23Lake/scripts.pory"
	waitse
# 39 "data/maps/Route23Lake/scripts.pory"
	delay 30
# 40 "data/maps/Route23Lake/scripts.pory"
	goto_if_set FLAG_LATIOS_SHINY, TriggerLatiosRoam_12
# 44 "data/maps/Route23Lake/scripts.pory"
	applymovement 2, TriggerLatiosRoam_Movement_0
TriggerLatiosRoam_11:
# 46 "data/maps/Route23Lake/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 48 "data/maps/Route23Lake/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
# 49 "data/maps/Route23Lake/scripts.pory"
	waitmoncry
# 50 "data/maps/Route23Lake/scripts.pory"
	delay 30
# 51 "data/maps/Route23Lake/scripts.pory"
	playse SE_PC_ON
# 52 "data/maps/Route23Lake/scripts.pory"
	waitse
# 53 "data/maps/Route23Lake/scripts.pory"
	msgbox LatisRegistered, MSGBOX_SIGN
# 54 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 55 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_FLY
# 56 "data/maps/Route23Lake/scripts.pory"
	goto_if_set FLAG_LATIOS_SHINY, TriggerLatiosRoam_16
# 60 "data/maps/Route23Lake/scripts.pory"
	applymovement 2, TriggerLatiosRoam_Movement_1
TriggerLatiosRoam_15:
# 62 "data/maps/Route23Lake/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route23Lake/scripts.pory"
	waitse
# 64 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 65 "data/maps/Route23Lake/scripts.pory"
	setseenmon SPECIES_LATIOS
# 66 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_LATIOS_ROAMING
# 67 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_0x8004, 1
# 68 "data/maps/Route23Lake/scripts.pory"
	special InitRoamer
# 69 "data/maps/Route23Lake/scripts.pory"
	removeobject 2
# 70 "data/maps/Route23Lake/scripts.pory"
	removeobject 3
# 71 "data/maps/Route23Lake/scripts.pory"
	fadeinbgm 0
# 72 "data/maps/Route23Lake/scripts.pory"
	delay 48
	end

TriggerLatiosRoam_2:
# 9 "data/maps/Route23Lake/scripts.pory"
	release
	end

TriggerLatiosRoam_5:
# 26 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_LATIOS_SHINY
	goto TriggerLatiosRoam_4

TriggerLatiosRoam_8:
# 29 "data/maps/Route23Lake/scripts.pory"
	addobject 3
	goto TriggerLatiosRoam_7

TriggerLatiosRoam_12:
# 41 "data/maps/Route23Lake/scripts.pory"
	applymovement 3, TriggerLatiosRoam_Movement_0
	goto TriggerLatiosRoam_11

TriggerLatiosRoam_16:
# 57 "data/maps/Route23Lake/scripts.pory"
	applymovement 3, TriggerLatiosRoam_Movement_1
	goto TriggerLatiosRoam_15


# 41 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_0:
# 41 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 41 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 41 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 41 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 41 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
	step_end

# 57 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_1:
# 57 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
	step_end

SoulDewStartsShining::
# 76 "data/maps/Route23Lake/scripts.pory"
	.string "The Soul Dew in your bag suddenly\n"
	.string "began shining by itself!$"

LatisRegistered::
# 80 "data/maps/Route23Lake/scripts.pory"
	.string "The Pokémon was registered on your\n"
	.string "Pokédex.$"
