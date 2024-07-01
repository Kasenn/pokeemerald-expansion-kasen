Drisledge_Mart_Backroom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MartBackroomFlag
	.byte 0


MartBackroomFlag::
	setflag FLAG_TEMP_1
	goto_if_set FLAG_LITWICK_TAG_COMPLETE, MartBackroomFlag_2
MartBackroomFlag_1:
	goto_if_set FLAG_LITWICK_CAUGHT, MartBackroomFlag_4
	return

MartBackroomFlag_2:
	setobjectxyperm 1, 14, 13
	clearflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	goto MartBackroomFlag_1

MartBackroomFlag_4:
	setflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	return


Drisledge_Litwick::
	goto_if_set FLAG_LITWICK_TAG_COMPLETE, Drisledge_Litwick_2
Drisledge_Litwick_1:
	compare VAR_TEMP_1, 2
	goto_if_eq Drisledge_Litwick_5
Drisledge_Litwick_4:
	compare VAR_TEMP_1, 3
	goto_if_eq Drisledge_Litwick_7
	return

Drisledge_Litwick_2:
	goto LitwickMain
	goto Drisledge_Litwick_1

Drisledge_Litwick_5:
	goto LitwickChase_2
	goto Drisledge_Litwick_4

Drisledge_Litwick_7:
	goto LitwickChase_3
	return


DrisledgeMart_Box::
	msgbox CharredBox, MSGBOX_SIGN
	goto_if_set FLAG_LITWICK_CAUGHT, DrisledgeMart_Box_2
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeMart_Box_4
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeMart_Box_4
	return

DrisledgeMart_Box_2:
	end

DrisledgeMart_Box_4:
	compare VAR_TEMP_1, 0
	goto_if_eq DrisledgeMart_Box_8
	return

DrisledgeMart_Box_8:
	setvar VAR_TEMP_1, 1
	clearflag FLAG_TEMP_1
	return


LitwickChase_1_Left::
	setvar VAR_TEMP_3, 1
	goto LitwickChase_1_Main
	return


LitwickChase_1_Right::
	goto LitwickChase_1_Main
	return


LitwickChase_1_Main::
	lock
	playse SE_PIN
	compare VAR_TEMP_3, 1
	goto_if_eq LitwickChase_1_Main_2
LitwickChase_1_Main_1:
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	applymovement 1, LitwickEscape1
	waitmovement 0
	setobjectxyperm 1, 14, 4
	turnobject 1, DIR_SOUTH
	setvar VAR_TEMP_1, 2
	release
	return

LitwickChase_1_Main_2:
	turnobject 1, DIR_WEST
	goto LitwickChase_1_Main_1


LitwickEscape1:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	step_end

LitwickChase_2::
	lock
	faceplayer
	playse SE_PIN
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	compare VAR_FACING, DIR_EAST
	goto_if_eq LitwickChase_2_2
	applymovement 1, LitwickEscape2
LitwickChase_2_1:
	waitmovement 0
	setobjectxyperm 1, 3, 4
	turnobject 1, DIR_SOUTH
	setvar VAR_TEMP_1, 3
	release
	return

LitwickChase_2_2:
	applymovement 1, LitwickEscape2North
	goto LitwickChase_2_1


LitwickEscape2North:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	step_end

LitwickEscape2:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

LitwickChase_3::
	lock
	faceplayer
	playse SE_PIN
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	compare VAR_FACING, DIR_EAST
	goto_if_eq LitwickChase_3_2
	applymovement 1, LitwickEscape3
LitwickChase_3_1:
	waitmovement 0
	setobjectxy 1, 14, 13
	setobjectxyperm 1, 14, 13
	turnobject 1, DIR_SOUTH
	removeobject 2
	setvar VAR_TEMP_1, 4
	setflag FLAG_TEMP_2
	setflag FLAG_LITWICK_TAG_COMPLETE
	release
	return

LitwickChase_3_2:
	applymovement 1, LitwickEscape3North
	goto LitwickChase_3_1


LitwickEscape3North:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

LitwickEscape3:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

LitwickMain::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LITWICK, CRY_MODE_NORMAL
	waitmoncry
	goto_if_set FLAG_TEMP_A, LitwickMain_2
	msgbox LitwickStaresAtYou, MSGBOX_YESNO
LitwickMain_1:
	compare VAR_RESULT, FALSE
	goto_if_eq LitwickMain_6
	call Common_OpenBag
	switch VAR_ITEM_ID
	case ITEM_NONE, LitwickMain_9
	case 1, LitwickMain_10
	case 2, LitwickMain_10
	case 3, LitwickMain_10
	case 4, LitwickMain_10
	case 5, LitwickMain_10
	case 6, LitwickMain_10
	case 7, LitwickMain_10
	case 8, LitwickMain_10
	case 9, LitwickMain_10
	case 10, LitwickMain_10
	case 11, LitwickMain_10
	case 12, LitwickMain_10
	case 13, LitwickMain_10
	case 14, LitwickMain_10
	case 15, LitwickMain_10
	case 16, LitwickMain_10
	case 17, LitwickMain_10
	case 18, LitwickMain_10
	case 19, LitwickMain_10
	case 20, LitwickMain_10
	case 21, LitwickMain_10
	case 22, LitwickMain_10
	case 23, LitwickMain_10
	case 24, LitwickMain_10
	case 25, LitwickMain_10
	case 26, LitwickMain_10
	case 27, LitwickMain_10
	msgbox ThatsNotaBall, MSGBOX_NPC
	setflag VAR_TEMP_A
	end

LitwickMain_2:
	msgbox LitwickStaresAtYouShort, MSGBOX_YESNO
	goto LitwickMain_1

LitwickMain_6:
	msgbox LitwickFrowns
	switch VAR_FACING
	case DIR_NORTH, LitwickMain_14
	case DIR_SOUTH, LitwickMain_15
	case DIR_WEST, LitwickMain_16
	case DIR_EAST, LitwickMain_17
LitwickMain_12:
	release
	setflag FLAG_TEMP_A
	end

LitwickMain_9:
	msgbox LitwickFrowns
	switch VAR_FACING
	case DIR_NORTH, LitwickMain_20
	case DIR_SOUTH, LitwickMain_21
	case DIR_WEST, LitwickMain_22
	case DIR_EAST, LitwickMain_23
LitwickMain_18:
	release
	setflag VAR_TEMP_A
	end

LitwickMain_10:
	goto LitwickEligibleBall
	return

LitwickMain_14:
	turnobject 1, DIR_NORTH
	goto LitwickMain_12

LitwickMain_15:
	turnobject 1, DIR_SOUTH
	goto LitwickMain_12

LitwickMain_16:
	turnobject 1, DIR_WEST
	goto LitwickMain_12

LitwickMain_17:
	turnobject 1, DIR_EAST
	goto LitwickMain_12

LitwickMain_20:
	turnobject 1, DIR_NORTH
	goto LitwickMain_18

LitwickMain_21:
	turnobject 1, DIR_SOUTH
	goto LitwickMain_18

LitwickMain_22:
	turnobject 1, DIR_WEST
	goto LitwickMain_18

LitwickMain_23:
	turnobject 1, DIR_EAST
	goto LitwickMain_18


LitwickEligibleBall::
	bufferitemname STR_VAR_1, VAR_ITEM_ID
	msgbox LitwickGetsInsideBall
	removeobject 1
	setflag FLAG_LITWICK_CAUGHT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITWICK
	playfanfare MUS_OBTAIN_ITEM
	givemon SPECIES_LITWICK, 5, ITEM_NONE, VAR_ITEM_ID
	removeitem VAR_ITEM_ID, 1
	call GiveMon_Script
	release
	clearflag FLAG_TEMP_2
	addobject 2
	return


GiveMon_Script::
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
	message GiveMon_Script_Text_0
	waitmessage
	waitfanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GiveMon_Script_2
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GiveMon_Script_4
	return

GiveMon_Script_2:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq GiveMon_Script_7
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return

GiveMon_Script_4:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq GiveMon_Script_10
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	return

GiveMon_Script_7:
	return

GiveMon_Script_10:
	call Common_EventScript_TransferredToPC
	return


GiveMon_Script_Text_0:
	.string "{PLAYER} received the {STR_VAR_2}!$"

CharredBox::
	.string "It's an empty crate.\p"
	.string "The interior of the crate appears\n"
	.string "to be slightly charred.$"

LitwickStaresAtYouShort::
	.string "Offer the Pokémon a Poké Ball\n"
	.string "from your bag?$"

LitwickStaresAtYou::
	.string "The Pokémon seems to have gotten\n"
	.string "comfortable with your presence\l"
	.string "after your little game of tag.\p"
	.string "It seems to be living here\n"
	.string "all alone.\p"
	.string "Offer it a Poké Ball from your bag?$"

LitwickFrowns::
	.string "The Pokémon looks at you\n"
	.string "expectantly, but then turns\l"
	.string "to minding its own business.$"

ThatsNotaBall::
	.string "That's not a Poké Ball!$"

LitwickGetsInsideBall::
	.string "You place the {STR_VAR_1} on\n"
	.string "the ground, and the Pokémon\l"
	.string "gently taps the ball.$"
