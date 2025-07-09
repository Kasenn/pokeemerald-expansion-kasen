Drisledge_Mart_Backroom_MapScripts::
# 2 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MartBackroomFlag
	.byte 0


MartBackroomFlag::
# 5 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_set FLAG_LITWICK_TAG_COMPLETE, MartBackroomFlag_2
MartBackroomFlag_1:
# 11 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_set FLAG_LITWICK_CAUGHT, MartBackroomFlag_4
	return

MartBackroomFlag_2:
# 7 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setobjectxyperm 1, 14, 13
# 8 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	clearflag FLAG_TEMP_1
# 9 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag FLAG_TEMP_2
	goto MartBackroomFlag_1

MartBackroomFlag_4:
# 12 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	clearflag FLAG_TEMP_2
	return


Drisledge_Litwick::
# 17 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_set FLAG_LITWICK_TAG_COMPLETE, Drisledge_Litwick_2
Drisledge_Litwick_1:
# 20 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Drisledge_Litwick_5
Drisledge_Litwick_4:
# 23 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Drisledge_Litwick_7
	return

Drisledge_Litwick_2:
# 18 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto LitwickMain
	goto Drisledge_Litwick_1

Drisledge_Litwick_5:
# 21 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto LitwickChase_2
	goto Drisledge_Litwick_4

Drisledge_Litwick_7:
# 24 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto LitwickChase_3
	return


DrisledgeMart_Box::
# 28 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox CharredBox, MSGBOX_SIGN
# 29 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_set FLAG_LITWICK_CAUGHT, DrisledgeMart_Box_2
# 32 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	gettime
# 33 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 35 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeMart_Box_5
# 35 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeMart_Box_5
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisledgeMart_Box_5
DrisledgeMart_Box_4:
# 41 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_unset FLAG_Q35_CHARRED_CRATE_START, DrisledgeMart_Box_12
	return

DrisledgeMart_Box_2:
	end

DrisledgeMart_Box_5:
# 36 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DrisledgeMart_Box_15
	goto DrisledgeMart_Box_4

DrisledgeMart_Box_11:
# 42 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	startquest FLAG_Q35_CHARRED_CRATE_START
# 43 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	special ShowJournalPopupAdd
	return

DrisledgeMart_Box_12:
# 41 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_unset FLAG_LITWICK_CAUGHT, DrisledgeMart_Box_11
	return

DrisledgeMart_Box_15:
# 37 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto DrisledgeMart_Box_4


LitwickChase_1_Left::
# 53 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setvar VAR_TEMP_3, 1
# 54 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto LitwickChase_1_Main
	return


LitwickChase_1_Right::
# 57 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto LitwickChase_1_Main
	return


LitwickChase_1_Main::
# 60 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	lock
# 61 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq LitwickChase_1_Main_2
LitwickChase_1_Main_1:
# 65 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	safefollow
# 66 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	exclamationmark 1
# 67 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	applymovement 1, LitwickEscape1
# 68 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	waitmovement 0
# 69 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setobjectxyperm 1, 14, 4
# 70 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_SOUTH
# 71 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setvar VAR_TEMP_1, 2
# 72 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	release
	return

LitwickChase_1_Main_2:
# 63 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_WEST
	goto LitwickChase_1_Main_1


# 74 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
LitwickEscape1:
# 75 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_up
# 75 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_up
# 76 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 76 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
	step_end

LitwickChase_2::
# 79 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	lock
# 80 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	faceplayer
# 81 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	playse SE_PIN
# 82 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 83 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_ne LitwickChase_2_3
LitwickChase_2_1:
# 86 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	exclamationmark 1
# 87 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LitwickChase_2_7
# 91 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	applymovement 1, LitwickEscape2
LitwickChase_2_6:
# 93 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	waitmovement 0
# 94 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setobjectxyperm 1, 3, 4
# 95 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_SOUTH
# 96 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setvar VAR_TEMP_1, 3
# 97 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	release
	return

LitwickChase_2_2:
# 84 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	safefollow
	goto LitwickChase_2_1

LitwickChase_2_3:
# 83 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_ne LitwickChase_2_2
	goto LitwickChase_2_1

LitwickChase_2_7:
# 88 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	applymovement 1, LitwickEscape2North
	goto LitwickChase_2_6


# 100 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
LitwickEscape2North:
# 101 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_up
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 102 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 103 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
	step_end

# 105 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
LitwickEscape2:
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 106 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
	step_end

LitwickChase_3::
# 110 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	lock
# 111 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	faceplayer
# 112 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 114 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_ne LitwickChase_3_3
LitwickChase_3_1:
# 117 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	exclamationmark 1
# 118 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LitwickChase_3_7
# 127 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	applymovement 1, LitwickEscape3
LitwickChase_3_6:
# 129 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	waitmovement 0
# 130 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setobjectxy 1, 14, 13
# 131 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setobjectxyperm 1, 14, 13
# 132 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_SOUTH
# 133 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	removeobject 2
# 134 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setvar VAR_TEMP_1, 4
# 135 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag FLAG_TEMP_2
# 136 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag FLAG_LITWICK_TAG_COMPLETE
# 137 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	release
	return

LitwickChase_3_2:
# 115 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	safefollow
	goto LitwickChase_3_1

LitwickChase_3_3:
# 114 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_ne LitwickChase_3_2
	goto LitwickChase_3_1

LitwickChase_3_7:
# 119 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LitwickChase_3_12
LitwickChase_3_11:
# 123 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	applymovement 1, LitwickEscape3North
	goto LitwickChase_3_6

LitwickChase_3_10:
# 120 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	applymovement 1, LitwickEscape3NorthLong
	goto LitwickChase_3_6

LitwickChase_3_12:
# 119 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_TEMP_2 == 4, 0
	goto_if_ne LitwickChase_3_10
	goto LitwickChase_3_11


# 139 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
LitwickEscape3North:
# 140 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_up
# 141 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 141 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 142 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 142 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 142 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 142 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 143 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
	step_end

# 145 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
LitwickEscape3NorthLong:
# 146 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_up
# 147 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 147 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 147 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 148 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 148 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 148 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 148 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 149 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
	step_end

# 151 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
LitwickEscape3:
# 152 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_left
# 153 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 153 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 153 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_down
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
# 154 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	walk_fast_right
	step_end

LitwickMain::
# 158 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	lock
# 159 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	faceplayer
# 160 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	waitse
# 161 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	playmoncry SPECIES_LITWICK, CRY_MODE_NORMAL
# 162 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	waitmoncry
# 163 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_set FLAG_TEMP_A, LitwickMain_2
# 167 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox LitwickStaresAtYou, MSGBOX_YESNO
LitwickMain_1:
# 169 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LitwickMain_6
# 185 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	call Common_OpenBag
# 186 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	switch VAR_ITEM_ID
# 187 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_NONE, LitwickMain_9
# 202 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_POKE_BALL, LitwickMain_10
# 203 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_GREAT_BALL, LitwickMain_10
# 204 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_ULTRA_BALL, LitwickMain_10
# 205 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_MASTER_BALL, LitwickMain_10
# 206 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_PREMIER_BALL, LitwickMain_10
# 207 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_HEAL_BALL, LitwickMain_10
# 208 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_NET_BALL, LitwickMain_10
# 209 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_NEST_BALL, LitwickMain_10
# 210 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_DIVE_BALL, LitwickMain_10
# 211 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_DUSK_BALL, LitwickMain_10
# 212 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_TIMER_BALL, LitwickMain_10
# 213 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_QUICK_BALL, LitwickMain_10
# 214 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_REPEAT_BALL, LitwickMain_10
# 215 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_LUXURY_BALL, LitwickMain_10
# 216 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_LEVEL_BALL, LitwickMain_10
# 217 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_LURE_BALL, LitwickMain_10
# 218 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_MOON_BALL, LitwickMain_10
# 219 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_FRIEND_BALL, LitwickMain_10
# 220 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_LOVE_BALL, LitwickMain_10
# 221 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_FAST_BALL, LitwickMain_10
# 222 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_HEAVY_BALL, LitwickMain_10
# 223 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_DREAM_BALL, LitwickMain_10
# 224 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_SAFARI_BALL, LitwickMain_10
# 225 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_SPORT_BALL, LitwickMain_10
# 226 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_PARK_BALL, LitwickMain_10
# 227 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_BEAST_BALL, LitwickMain_10
# 228 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_CHERISH_BALL, LitwickMain_10
# 229 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case ITEM_DIRE_BALL, LitwickMain_10
# 232 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox ThatsNotaBall, MSGBOX_NPC
# 233 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag VAR_TEMP_A
	end

LitwickMain_2:
# 164 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox LitwickStaresAtYouShort, MSGBOX_YESNO
	goto LitwickMain_1

LitwickMain_6:
# 170 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox LitwickFrowns
# 171 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	switch VAR_FACING
# 172 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_NORTH, LitwickMain_14
# 174 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_SOUTH, LitwickMain_15
# 176 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_WEST, LitwickMain_16
# 178 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_EAST, LitwickMain_17
LitwickMain_12:
# 181 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	release
# 182 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag FLAG_TEMP_A
	end

LitwickMain_9:
# 188 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox LitwickFrowns
# 189 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	switch VAR_FACING
# 190 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_NORTH, LitwickMain_20
# 192 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_SOUTH, LitwickMain_21
# 194 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_WEST, LitwickMain_22
# 196 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	case DIR_EAST, LitwickMain_23
LitwickMain_18:
# 199 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	release
# 200 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag VAR_TEMP_A
	end

LitwickMain_10:
# 230 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto LitwickEligibleBall
	return

LitwickMain_14:
# 173 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_NORTH
	goto LitwickMain_12

LitwickMain_15:
# 175 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_SOUTH
	goto LitwickMain_12

LitwickMain_16:
# 177 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_WEST
	goto LitwickMain_12

LitwickMain_17:
# 179 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_EAST
	goto LitwickMain_12

LitwickMain_20:
# 191 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_NORTH
	goto LitwickMain_18

LitwickMain_21:
# 193 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_SOUTH
	goto LitwickMain_18

LitwickMain_22:
# 195 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_WEST
	goto LitwickMain_18

LitwickMain_23:
# 197 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	turnobject 1, DIR_EAST
	goto LitwickMain_18


LitwickEligibleBall::
# 239 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 240 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox LitwickGetsInsideBall
# 241 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	removeobject 1
# 242 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setflag FLAG_LITWICK_CAUGHT
# 243 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITWICK
# 244 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	removeitem VAR_ITEM_ID, 1
# 245 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	givemon SPECIES_LITWICK, 5, ITEM_NONE, VAR_ITEM_ID
# 246 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	call GiveMon_Script
# 247 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	release
# 248 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	clearflag FLAG_TEMP_2
# 249 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	addobject 2
# 250 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto_if_set FLAG_Q35_CHARRED_CRATE_START, LitwickEligibleBall_1
	return

LitwickEligibleBall_1:
# 251 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	completequest FLAG_Q35_CHARRED_CRATE_COMPLETE
# 252 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	special ShowJournalPopupRemove
	return


GiveMon_Script::
# 283 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 284 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 285 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 286 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	message GiveMon_Script_Text_0
# 287 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	waitmessage
# 288 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	waitfanfare
# 289 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GiveMon_Script_1
# 298 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GiveMon_Script_2
# 309 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	return

GiveMon_Script_1:
# 290 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 291 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GiveMon_Script_7
# 294 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 295 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return

GiveMon_Script_2:
# 299 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 300 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GiveMon_Script_10
# 304 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 305 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

GiveMon_Script_7:
	return

GiveMon_Script_10:
# 301 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return


GiveMon_Script_Text_0:
# 286 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_2}!$"

CharredBox::
# 46 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	.string "It's an empty crate.\p"
	.string "The interior of the crate appears\n"
	.string "to be slightly charred.$"

LitwickStaresAtYouShort::
# 256 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	.string "Offer the Pokémon a Poké Ball\n"
	.string "from your bag?$"

LitwickStaresAtYou::
# 260 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	.string "The Pokémon seems to have gotten\n"
	.string "comfortable with your presence\l"
	.string "after your little game of tag.\p"
	.string "It seems to be living here\n"
	.string "all alone.\p"
	.string "Offer it a Poké Ball from your bag?$"

LitwickFrowns::
# 268 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	.string "The Pokémon looks at you\n"
	.string "expectantly, but then turns\l"
	.string "to minding its own business.$"

ThatsNotaBall::
# 273 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	.string "That's not a Poké Ball!$"

LitwickGetsInsideBall::
# 276 "data/maps/Drisledge_Mart_Backroom/scripts.pory"
	.string "You place the {STR_VAR_1} on\n"
	.string "the ground, and the Pokémon\l"
	.string "gently taps the ball.$"
