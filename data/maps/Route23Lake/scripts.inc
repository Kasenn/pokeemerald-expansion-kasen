Route23Lake_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route23Lake_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route23Lake_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_1
	return


TriggerLatiosRoam::
	checkitem ITEM_SOUL_DEW
	compare VAR_RESULT, FALSE
	goto_if_eq TriggerLatiosRoam_2
	safefollow
	release
	fadeoutbgm 0
	delay 60
	msgbox SoulDewStartsShining, MSGBOX_SIGN
	playse SE_M_DETECT
	dofieldeffectsparkle 19, 15, 0
	waitfieldeffect FLDEFF_SPARKLE
	setvar VAR_RESULT, 1
	playse SE_ORB
	special DoOrbEffect
	delay 150
	waitstate
	addobject 2
	special FadeOutOrbEffect
	waitstate
	delay 60
	playse SE_M_FLY
	waitse
	delay 30
	applymovement 2, TriggerLatiosRoam_Movement_0
	waitmovement 0
	delay 60
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
	waitmoncry
	delay 30
	playse SE_PC_ON
	waitse
	msgbox LatisRegistered, MSGBOX_SIGN
	delay 60
	playse SE_M_FLY
	applymovement 2, TriggerLatiosRoam_Movement_1
	waitmovement 0
	waitse
	delay 60
	setseenmon SPECIES_LATIOS
	setflag FLAG_LATIOS_ROAMING
	setvar VAR_0x8004, 1
	special InitRoamer
	removeobject 2
	fadeinbgm 0
	delay 48
	end

TriggerLatiosRoam_2:
	release
	end


TriggerLatiosRoam_Movement_0:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

TriggerLatiosRoam_Movement_1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SoulDewStartsShining::
	.string "The Soul Dew in your bag suddenly\n"
	.string "began shining by itself!$"

LatisRegistered::
	.string "The Pokémon was registered on your\n"
	.string "Pokédex.$"
