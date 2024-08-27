Drisledge_Mart_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DrisMartFlagControl
	map_script MAP_SCRIPT_ON_LOAD, SetMartDoor
	.byte 0


SetMartDoor::
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetMartDoor_1
	return

SetMartDoor_1:
	setmetatile 1, 0, 0x327, TRUE
	setmetatile 1, 1, 0x251, FALSE
	return


DrisMartFlagControl::
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisMartFlagControl_1
	setflag FLAG_TEMP_2
	return

DrisMartFlagControl_1:
	setweather WEATHER_SHADE
	doweather
	playbgm MUS_NONE, TRUE
	setflag FLAG_TEMP_1
	return


testSteps::
	buffernumberstring STR_VAR_1, VAR_GROTTO_STEP_COUNT
	msgbox testSteps_Text_0, MSGBOX_NPC
	return


MartCounterHop1::
	lock
	compare VAR_FACING, DIR_WEST
	goto_if_eq MartCounterHop1_2
	msgbox DrisledgeMart_Return, MSGBOX_YESNO
MartCounterHop1_1:
	compare VAR_RESULT, FALSE
	goto_if_eq MartCounterHop1_6
	closemessage
	waitse
	playse SE_LEDGE
	compare VAR_FACING, DIR_WEST
	goto_if_eq MartCounterHop1_9
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToEast
MartCounterHop1_8:
	waitmovement 0
	release
	return

MartCounterHop1_2:
	msgbox MartCounterEmpty, MSGBOX_YESNO
	goto MartCounterHop1_1

MartCounterHop1_6:
	release
	end

MartCounterHop1_9:
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToWest
	goto MartCounterHop1_8


MartCounterHop2::
	lock
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop2_2
	msgbox DrisledgeMart_Return, MSGBOX_YESNO
MartCounterHop2_1:
	compare VAR_RESULT, FALSE
	goto_if_eq MartCounterHop2_6
	closemessage
	waitse
	playse SE_LEDGE
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop2_9
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToSouth
	delay 8
	setmetatile 1, 3, 0x329, FALSE
	setmetatile 1, 4, 0x241, TRUE
	special DrawWholeMapView
MartCounterHop2_8:
	waitmovement 0
	setmetatile 1, 3, 0x239, FALSE
	setmetatile 1, 4, 0x241, TRUE
	special DrawWholeMapView
	release
	return

MartCounterHop2_2:
	msgbox MartCounterEmpty, MSGBOX_YESNO
	goto MartCounterHop2_1

MartCounterHop2_6:
	release
	end

MartCounterHop2_9:
	setmetatile 1, 3, 0x329, FALSE
	special DrawWholeMapView
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToNorthMart
	delay 22
	setmetatile 1, 3, 0x239, FALSE
	setmetatile 1, 4, 0x331, TRUE
	special DrawWholeMapView
	goto MartCounterHop2_8


MartCounterHop3::
	lock
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop3_2
	msgbox DrisledgeMart_Return, MSGBOX_YESNO
MartCounterHop3_1:
	compare VAR_RESULT, FALSE
	goto_if_eq MartCounterHop3_6
	closemessage
	waitse
	playse SE_LEDGE
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop3_9
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToSouth
	delay 8
	setmetatile 0, 3, 0x328, FALSE
	setmetatile 0, 4, 0x240, TRUE
	special DrawWholeMapView
MartCounterHop3_8:
	waitmovement 0
	setmetatile 0, 4, 0x240, TRUE
	setmetatile 0, 3, 0x238, FALSE
	special DrawWholeMapView
	release
	return

MartCounterHop3_2:
	msgbox MartCounterEmpty, MSGBOX_YESNO
	goto MartCounterHop3_1

MartCounterHop3_6:
	release
	end

MartCounterHop3_9:
	setmetatile 0, 3, 0x328, FALSE
	special DrawWholeMapView
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToNorthMart
	delay 22
	setmetatile 0, 3, 0x238, FALSE
	setmetatile 0, 4, 0x330, TRUE
	special DrawWholeMapView
	goto MartCounterHop3_8


HopOverLedgeToWest:
	jump_2_left
	delay_16
	step_end

HopOverLedgeToEast:
	jump_2_right
	delay_16
	step_end

HopOverLedgeToNorthMart:
	jump_2_up
	delay_16
	step_end

testSteps_Text_0:
	.string "{STR_VAR_1}$"

MartCounterEmpty::
	.string "There's nobody behind the counter.\p"
	.string "Jump over the counter?$"

DrisledgeMart_Return::
	.string "Jump back over the counter?$"
