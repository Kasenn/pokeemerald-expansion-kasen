Route13_GateHouse_MapScripts::
	.byte 0


R13_GateHouseTrigger1::
	setvar VAR_TEMP_1, 1
	goto R13_GateHouseMain
	return


R13_GateHouseTrigger2::
	setvar VAR_TEMP_1, 2
	goto R13_GateHouseMain
	return


R13_GateHouseTrigger3::
	setvar VAR_TEMP_1, 3
	goto R13_GateHouseMain
	return


R13_GateHouseMain::
	lock
	safefollow
	playse SE_PIN
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	switch VAR_TEMP_1
	case 1, R13_GateHouseMain_3
	case 2, R13_GateHouseMain_4
	case 3, R13_GateHouseMain_5
R13_GateHouseMain_1:
	msgbox R13_StormAhead
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	release
	end

R13_GateHouseMain_3:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto R13_GateHouseMain_1

R13_GateHouseMain_4:
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	goto R13_GateHouseMain_1

R13_GateHouseMain_5:
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
	waitmovement 0
	goto R13_GateHouseMain_1


R13_StormAhead::
	.string "I'm sorry, but the sea bridge is\n"
	.string "closed due to a massive storm.$"
