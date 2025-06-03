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
	addobject 2
# 26 "data/maps/Route23Lake/scripts.pory"
	special FadeOutOrbEffect
# 27 "data/maps/Route23Lake/scripts.pory"
	waitstate
# 28 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 29 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_FLY
# 30 "data/maps/Route23Lake/scripts.pory"
	waitse
# 31 "data/maps/Route23Lake/scripts.pory"
	delay 30
# 32 "data/maps/Route23Lake/scripts.pory"
	applymovement 2, TriggerLatiosRoam_Movement_0
# 33 "data/maps/Route23Lake/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 35 "data/maps/Route23Lake/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
# 36 "data/maps/Route23Lake/scripts.pory"
	waitmoncry
# 37 "data/maps/Route23Lake/scripts.pory"
	delay 30
# 38 "data/maps/Route23Lake/scripts.pory"
	playse SE_PC_ON
# 39 "data/maps/Route23Lake/scripts.pory"
	waitse
# 40 "data/maps/Route23Lake/scripts.pory"
	msgbox LatisRegistered, MSGBOX_SIGN
# 41 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 42 "data/maps/Route23Lake/scripts.pory"
	playse SE_M_FLY
# 43 "data/maps/Route23Lake/scripts.pory"
	applymovement 2, TriggerLatiosRoam_Movement_1
# 44 "data/maps/Route23Lake/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route23Lake/scripts.pory"
	waitse
# 46 "data/maps/Route23Lake/scripts.pory"
	delay 60
# 47 "data/maps/Route23Lake/scripts.pory"
	setseenmon SPECIES_LATIOS
# 48 "data/maps/Route23Lake/scripts.pory"
	setflag FLAG_LATIOS_ROAMING
# 49 "data/maps/Route23Lake/scripts.pory"
	setvar VAR_0x8004, 1
# 50 "data/maps/Route23Lake/scripts.pory"
	special InitRoamer
# 51 "data/maps/Route23Lake/scripts.pory"
	removeobject 2
# 52 "data/maps/Route23Lake/scripts.pory"
	fadeinbgm 0
# 53 "data/maps/Route23Lake/scripts.pory"
	delay 48
	end

TriggerLatiosRoam_2:
# 9 "data/maps/Route23Lake/scripts.pory"
	release
	end


# 32 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_0:
# 32 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 32 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 32 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 32 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
# 32 "data/maps/Route23Lake/scripts.pory"
	walk_slow_down
	step_end

# 43 "data/maps/Route23Lake/scripts.pory"
TriggerLatiosRoam_Movement_1:
# 43 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 43 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 43 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 43 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 43 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
# 43 "data/maps/Route23Lake/scripts.pory"
	walk_fast_up
	step_end

SoulDewStartsShining::
# 57 "data/maps/Route23Lake/scripts.pory"
	.string "The Soul Dew in your bag suddenly\n"
	.string "began shining by itself!$"

LatisRegistered::
# 61 "data/maps/Route23Lake/scripts.pory"
	.string "The Pokémon was registered on your\n"
	.string "Pokédex.$"
