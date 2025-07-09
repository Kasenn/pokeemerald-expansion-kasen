Drisledge_Pokecenter_BackRoom_MapScripts::
# 2 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Backroom_SetFlags
# 3 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Backroom_SetFlags
	.byte 0


Backroom_SetFlags::
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Backroom_SetFlags_2
# 24 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	gettime
# 25 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 26 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le Backroom_SetFlags_4
# 26 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge Backroom_SetFlags_4
# 43 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 44 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 45 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 31
	goto_if_ge Backroom_SetFlags_17
Backroom_SetFlags_16:
# 49 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	goto_if_set FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_23
	return

Backroom_SetFlags_2:
# 8 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	goto_if_unset FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_10
# 18 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
# 19 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
Backroom_SetFlags_9:
	end

Backroom_SetFlags_4:
# 27 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	goto_if_unset FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_13
# 37 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
# 38 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 39 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
	return

Backroom_SetFlags_10:
# 9 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 3
# 10 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	clearflag FLAG_TEMP_1
# 11 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 12 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 32
	goto_if_eq Backroom_SetFlags_19
	goto Backroom_SetFlags_9

Backroom_SetFlags_13:
# 28 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 3
# 29 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	clearflag FLAG_TEMP_1
# 30 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 31 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 32
	goto_if_eq Backroom_SetFlags_21
	return

Backroom_SetFlags_17:
# 47 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto Backroom_SetFlags_16

Backroom_SetFlags_19:
# 13 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto Backroom_SetFlags_9

Backroom_SetFlags_21:
# 32 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 33 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
	return

Backroom_SetFlags_23:
# 50 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 2
	return


TriggerWeirdPresence::
# 56 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	lock
# 57 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	msgbox FeelaWeirdPresence
# 58 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 2
# 59 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 31
# 60 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	release
	return


TriggerGengariteEvent::
# 68 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	lock
# 69 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	turnobject 2, DIR_SOUTH
# 70 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	turnobject 3, DIR_SOUTH
# 71 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	turnobject 4, DIR_SOUTH
# 72 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	playse SE_PIN
# 73 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	safefollow
# 74 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 76 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 77 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	waitmovement 0
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	delay 48
# 79 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 2, RunFastRight2
# 80 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 3, RunFastUp
# 81 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 4, RunFastLeft2
# 82 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	removeobject 2
# 84 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	removeobject 3
# 85 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	removeobject 4
# 86 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
# 87 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 32
# 88 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	release
	return


# 91 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
RunFastLeft2:
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 92 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
	step_end

# 94 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
RunFastRight2:
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 95 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
	step_end

FindGengarite::
# 99 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	finditem ITEM_GENGARITE
# 100 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_OBTAINED_GENGARITE
	return


FeelaWeirdPresence::
# 62 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	.string "You feel as if something, or\n"
	.string "someone, is watching you.$"
