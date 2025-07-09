Drisledge_Mart_MapScripts::
# 2 "data/maps/Drisledge_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DrisMartFlagControl
# 3 "data/maps/Drisledge_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetMartDoor
	.byte 0


SetMartDoor::
# 7 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetMartDoor_1
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SetMartDoor_1
	return

SetMartDoor_1:
# 8 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 0, 0x327, TRUE
# 9 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 1, 0x251, FALSE
	return


DrisMartFlagControl::
# 14 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisMartFlagControl_1
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisMartFlagControl_1
# 21 "data/maps/Drisledge_Mart/scripts.pory"
	setflag FLAG_TEMP_2
	return

DrisMartFlagControl_1:
# 15 "data/maps/Drisledge_Mart/scripts.pory"
	setweather WEATHER_SHADE
# 16 "data/maps/Drisledge_Mart/scripts.pory"
	playbgm MUS_NONE, TRUE
# 17 "data/maps/Drisledge_Mart/scripts.pory"
	setflag FLAG_TEMP_1
	return


testSteps::
# 26 "data/maps/Drisledge_Mart/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_GROTTO_STEP_COUNT
# 27 "data/maps/Drisledge_Mart/scripts.pory"
	msgbox testSteps_Text_0, MSGBOX_NPC
	return


MartCounterHop1::
# 31 "data/maps/Drisledge_Mart/scripts.pory"
	lock
# 32 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MartCounterHop1_2
# 36 "data/maps/Drisledge_Mart/scripts.pory"
	msgbox DrisledgeMart_Return, MSGBOX_YESNO
MartCounterHop1_1:
# 38 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MartCounterHop1_6
# 42 "data/maps/Drisledge_Mart/scripts.pory"
	closemessage
# 43 "data/maps/Drisledge_Mart/scripts.pory"
	waitse
# 44 "data/maps/Drisledge_Mart/scripts.pory"
	playse SE_LEDGE
# 45 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MartCounterHop1_9
# 49 "data/maps/Drisledge_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToEast
MartCounterHop1_8:
# 51 "data/maps/Drisledge_Mart/scripts.pory"
	waitmovement 0
# 52 "data/maps/Drisledge_Mart/scripts.pory"
	release
	return

MartCounterHop1_2:
# 33 "data/maps/Drisledge_Mart/scripts.pory"
	msgbox MartCounterEmpty, MSGBOX_YESNO
	goto MartCounterHop1_1

MartCounterHop1_6:
# 39 "data/maps/Drisledge_Mart/scripts.pory"
	release
	end

MartCounterHop1_9:
# 46 "data/maps/Drisledge_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToWest
	goto MartCounterHop1_8


MartCounterHop2::
# 55 "data/maps/Drisledge_Mart/scripts.pory"
	lock
# 56 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop2_2
# 60 "data/maps/Drisledge_Mart/scripts.pory"
	msgbox DrisledgeMart_Return, MSGBOX_YESNO
MartCounterHop2_1:
# 62 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MartCounterHop2_6
# 66 "data/maps/Drisledge_Mart/scripts.pory"
	closemessage
# 67 "data/maps/Drisledge_Mart/scripts.pory"
	waitse
# 68 "data/maps/Drisledge_Mart/scripts.pory"
	playse SE_LEDGE
# 69 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop2_9
# 79 "data/maps/Drisledge_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToSouth
# 80 "data/maps/Drisledge_Mart/scripts.pory"
	delay 8
# 81 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 3, 0x329, FALSE
# 82 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 4, 0x241, TRUE
# 83 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
MartCounterHop2_8:
# 85 "data/maps/Drisledge_Mart/scripts.pory"
	waitmovement 0
# 86 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 3, 0x239, FALSE
# 87 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 4, 0x241, TRUE
# 88 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
# 89 "data/maps/Drisledge_Mart/scripts.pory"
	release
	return

MartCounterHop2_2:
# 57 "data/maps/Drisledge_Mart/scripts.pory"
	msgbox MartCounterEmpty, MSGBOX_YESNO
	goto MartCounterHop2_1

MartCounterHop2_6:
# 63 "data/maps/Drisledge_Mart/scripts.pory"
	release
	end

MartCounterHop2_9:
# 70 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 3, 0x329, FALSE
# 71 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/Drisledge_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToNorthMart
# 73 "data/maps/Drisledge_Mart/scripts.pory"
	delay 22
# 74 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 3, 0x239, FALSE
# 75 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 1, 4, 0x331, TRUE
# 76 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
	goto MartCounterHop2_8


MartCounterHop3::
# 92 "data/maps/Drisledge_Mart/scripts.pory"
	lock
# 93 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop3_2
# 97 "data/maps/Drisledge_Mart/scripts.pory"
	msgbox DrisledgeMart_Return, MSGBOX_YESNO
MartCounterHop3_1:
# 99 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MartCounterHop3_6
# 103 "data/maps/Drisledge_Mart/scripts.pory"
	closemessage
# 104 "data/maps/Drisledge_Mart/scripts.pory"
	waitse
# 105 "data/maps/Drisledge_Mart/scripts.pory"
	playse SE_LEDGE
# 106 "data/maps/Drisledge_Mart/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MartCounterHop3_9
# 116 "data/maps/Drisledge_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToSouth
# 117 "data/maps/Drisledge_Mart/scripts.pory"
	delay 8
# 118 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 0, 3, 0x328, FALSE
# 119 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 0, 4, 0x240, TRUE
# 120 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
MartCounterHop3_8:
# 122 "data/maps/Drisledge_Mart/scripts.pory"
	waitmovement 0
# 123 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 0, 4, 0x240, TRUE
# 124 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 0, 3, 0x238, FALSE
# 125 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
# 126 "data/maps/Drisledge_Mart/scripts.pory"
	release
	return

MartCounterHop3_2:
# 94 "data/maps/Drisledge_Mart/scripts.pory"
	msgbox MartCounterEmpty, MSGBOX_YESNO
	goto MartCounterHop3_1

MartCounterHop3_6:
# 100 "data/maps/Drisledge_Mart/scripts.pory"
	release
	end

MartCounterHop3_9:
# 107 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 0, 3, 0x328, FALSE
# 108 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
# 109 "data/maps/Drisledge_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToNorthMart
# 110 "data/maps/Drisledge_Mart/scripts.pory"
	delay 22
# 111 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 0, 3, 0x238, FALSE
# 112 "data/maps/Drisledge_Mart/scripts.pory"
	setmetatile 0, 4, 0x330, TRUE
# 113 "data/maps/Drisledge_Mart/scripts.pory"
	special DrawWholeMapView
	goto MartCounterHop3_8


# 137 "data/maps/Drisledge_Mart/scripts.pory"
HopOverLedgeToWest:
# 138 "data/maps/Drisledge_Mart/scripts.pory"
	jump_2_left
# 139 "data/maps/Drisledge_Mart/scripts.pory"
	delay_16
# 140 "data/maps/Drisledge_Mart/scripts.pory"
	step_end

# 143 "data/maps/Drisledge_Mart/scripts.pory"
HopOverLedgeToEast:
# 144 "data/maps/Drisledge_Mart/scripts.pory"
	jump_2_right
# 145 "data/maps/Drisledge_Mart/scripts.pory"
	delay_16
# 146 "data/maps/Drisledge_Mart/scripts.pory"
	step_end

# 149 "data/maps/Drisledge_Mart/scripts.pory"
HopOverLedgeToNorthMart:
# 150 "data/maps/Drisledge_Mart/scripts.pory"
	jump_2_up
# 151 "data/maps/Drisledge_Mart/scripts.pory"
	delay_16
# 152 "data/maps/Drisledge_Mart/scripts.pory"
	step_end

testSteps_Text_0:
# 27 "data/maps/Drisledge_Mart/scripts.pory"
	.string "{STR_VAR_1}$"

MartCounterEmpty::
# 129 "data/maps/Drisledge_Mart/scripts.pory"
	.string "There's nobody behind the counter.\p"
	.string "Jump over the counter?$"

DrisledgeMart_Return::
# 133 "data/maps/Drisledge_Mart/scripts.pory"
	.string "Jump back over the counter?$"
