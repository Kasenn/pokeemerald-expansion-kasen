Route13_GateHouse_MapScripts::
	.byte 0


R13_GateHouseTrigger1::
# 6 "data/maps/Route13_GateHouse/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Route13_GateHouse/scripts.pory"
	goto R13_GateHouseMain
	return


R13_GateHouseTrigger2::
# 10 "data/maps/Route13_GateHouse/scripts.pory"
	setvar VAR_TEMP_1, 2
# 11 "data/maps/Route13_GateHouse/scripts.pory"
	goto R13_GateHouseMain
	return


R13_GateHouseTrigger3::
# 14 "data/maps/Route13_GateHouse/scripts.pory"
	setvar VAR_TEMP_1, 3
# 15 "data/maps/Route13_GateHouse/scripts.pory"
	goto R13_GateHouseMain
	return


R13_GateHouseMain::
# 19 "data/maps/Route13_GateHouse/scripts.pory"
	lock
# 20 "data/maps/Route13_GateHouse/scripts.pory"
	safefollow
# 21 "data/maps/Route13_GateHouse/scripts.pory"
	playse SE_PIN
# 22 "data/maps/Route13_GateHouse/scripts.pory"
	applymovement 1, ExclamationMark
# 23 "data/maps/Route13_GateHouse/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route13_GateHouse/scripts.pory"
	delay 48
# 25 "data/maps/Route13_GateHouse/scripts.pory"
	switch VAR_TEMP_1
# 26 "data/maps/Route13_GateHouse/scripts.pory"
	case 1, R13_GateHouseMain_3
# 28 "data/maps/Route13_GateHouse/scripts.pory"
	case 2, R13_GateHouseMain_4
# 31 "data/maps/Route13_GateHouse/scripts.pory"
	case 3, R13_GateHouseMain_5
R13_GateHouseMain_1:
# 35 "data/maps/Route13_GateHouse/scripts.pory"
	msgbox R13_StormAhead
# 36 "data/maps/Route13_GateHouse/scripts.pory"
	closemessage
# 37 "data/maps/Route13_GateHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
# 38 "data/maps/Route13_GateHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route13_GateHouse/scripts.pory"
	release
	end

R13_GateHouseMain_3:
# 27 "data/maps/Route13_GateHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto R13_GateHouseMain_1

R13_GateHouseMain_4:
# 29 "data/maps/Route13_GateHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 30 "data/maps/Route13_GateHouse/scripts.pory"
	waitmovement 0
	goto R13_GateHouseMain_1

R13_GateHouseMain_5:
# 32 "data/maps/Route13_GateHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
# 33 "data/maps/Route13_GateHouse/scripts.pory"
	waitmovement 0
	goto R13_GateHouseMain_1


R13_StormAhead::
# 43 "data/maps/Route13_GateHouse/scripts.pory"
	.string "I'm sorry, but the sea bridge is\n"
	.string "closed due to a massive storm.$"
