Drisledge_Pokecenter_BackRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Backroom_SetFlags
	map_script MAP_SCRIPT_ON_LOAD, Backroom_SetFlags
	.byte 0


Backroom_SetFlags::
	checkitem ITEM_ZYGARDE_CUBE
	compare VAR_RESULT, TRUE
	goto_if_eq Backroom_SetFlags_2
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	compare VAR_TEMP_0, 6
	goto_if_le Backroom_SetFlags_4
	compare VAR_TEMP_0, 18
	goto_if_ge Backroom_SetFlags_4
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_1, 1
	compare VAR_DRISLEDGE_TOWN_STATE, 31
	goto_if_ge Backroom_SetFlags_17
Backroom_SetFlags_16:
	goto_if_set FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_23
	return

Backroom_SetFlags_2:
	goto_if_unset FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_10
	setvar VAR_TEMP_1, 4
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
Backroom_SetFlags_9:
	end

Backroom_SetFlags_4:
	goto_if_unset FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_13
	setvar VAR_TEMP_1, 4
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return

Backroom_SetFlags_10:
	setvar VAR_TEMP_1, 3
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	compare VAR_DRISLEDGE_TOWN_STATE, 32
	goto_if_eq Backroom_SetFlags_19
	goto Backroom_SetFlags_9

Backroom_SetFlags_13:
	setvar VAR_TEMP_1, 3
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	compare VAR_DRISLEDGE_TOWN_STATE, 32
	goto_if_eq Backroom_SetFlags_21
	return

Backroom_SetFlags_17:
	setvar VAR_TEMP_1, 2
	goto Backroom_SetFlags_16

Backroom_SetFlags_19:
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_1, 4
	goto Backroom_SetFlags_9

Backroom_SetFlags_21:
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_1, 4
	return

Backroom_SetFlags_23:
	setvar VAR_TEMP_1, 2
	return


TriggerWeirdPresence::
	lock
	msgbox FeelaWeirdPresence
	setvar VAR_TEMP_1, 2
	setvar VAR_DRISLEDGE_TOWN_STATE, 31
	release
	return


TriggerGengariteEvent::
	lock
	turnobject 2, DIR_SOUTH
	turnobject 3, DIR_SOUTH
	turnobject 4, DIR_SOUTH
	playse SE_PIN
	safefollow
	applymovement 2, ExclamationMark
	applymovement 3, ExclamationMark
	applymovement 4, ExclamationMark
	waitmovement 0
	delay 48
	applymovement 2, RunFastRight2
	applymovement 3, RunFastUp
	applymovement 4, RunFastLeft2
	waitmovement 0
	removeobject 2
	removeobject 3
	removeobject 4
	setvar VAR_TEMP_1, 4
	setvar VAR_DRISLEDGE_TOWN_STATE, 32
	release
	return


RunFastLeft2:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RunFastRight2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

FindGengarite::
	finditem ITEM_GENGARITE
	setflag FLAG_OBTAINED_GENGARITE
	return


FeelaWeirdPresence::
	.string "You feel as if something, or\n"
	.string "someone, is watching you.$"
