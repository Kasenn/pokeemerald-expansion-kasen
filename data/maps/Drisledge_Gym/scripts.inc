Drisledge_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetDrisledgeGymFog
	.byte 0


SetDrisledgeGymFog::
	setflashlevel 1
	return


EventScript_FallDownDrisledgeGym::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warpholexy MAP_DRISLEDGE_GYM, 5, 38
	waitstate
	end


DrisledgeTest::
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MIMIKYU, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_TEMP_1
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

