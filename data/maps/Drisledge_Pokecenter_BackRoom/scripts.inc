Drisledge_Pokecenter_BackRoom_MapScripts::
# 2 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Backroom_SetFlags
# 3 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Backroom_SetFlags
	.byte 0


Backroom_SetFlags::
# 7 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	gettime
# 8 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 9 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le Backroom_SetFlags_1
# 9 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge Backroom_SetFlags_1
# 26 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 27 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 31
	goto_if_ge Backroom_SetFlags_10
Backroom_SetFlags_9:
# 32 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	goto_if_set FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_14
	return

Backroom_SetFlags_1:
# 10 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	goto_if_unset FLAG_OBTAINED_GENGARITE, Backroom_SetFlags_6
# 20 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
# 21 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 22 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
	return

Backroom_SetFlags_6:
# 11 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 3
# 12 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	clearflag FLAG_TEMP_1
# 13 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 14 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 32
	goto_if_eq Backroom_SetFlags_12
	return

Backroom_SetFlags_10:
# 30 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto Backroom_SetFlags_9

Backroom_SetFlags_12:
# 15 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 16 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
	return

Backroom_SetFlags_14:
# 33 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 2
	return


TriggerWeirdPresence::
# 39 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	lock
# 40 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	msgbox FeelaWeirdPresence
# 41 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 2
# 42 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 31
# 43 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	release
	return


TriggerGengariteEvent::
# 51 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	lock
# 52 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	turnobject 2, DIR_SOUTH
# 53 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	turnobject 3, DIR_SOUTH
# 54 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	turnobject 4, DIR_SOUTH
# 55 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	safefollow
# 57 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 2, ExclamationMark
# 58 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 3, ExclamationMark
# 59 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 4, ExclamationMark
# 60 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	waitmovement 0
# 61 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	delay 48
# 62 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 2, RunFastRight2
# 63 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 3, RunFastUp
# 64 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	applymovement 4, RunFastLeft2
# 65 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	waitmovement 0
# 66 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	removeobject 2
# 67 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	removeobject 3
# 68 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	removeobject 4
# 69 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_TEMP_1, 4
# 70 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 32
# 71 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	release
	return


# 74 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
RunFastLeft2:
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
# 75 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_left
	step_end

# 77 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
RunFastRight2:
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
# 78 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	walk_fast_right
	step_end

FindGengarite::
# 82 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	finditem ITEM_GENGARITE
# 83 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	setflag FLAG_OBTAINED_GENGARITE
	return


FeelaWeirdPresence::
# 45 "data/maps/Drisledge_Pokecenter_BackRoom/scripts.pory"
	.string "You feel as if something, or\n"
	.string "someone, is watching you.$"
