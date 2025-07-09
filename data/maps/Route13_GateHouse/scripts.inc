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
	exclamationmark 1
# 23 "data/maps/Route13_GateHouse/scripts.pory"
	switch VAR_TEMP_1
# 24 "data/maps/Route13_GateHouse/scripts.pory"
	case 1, R13_GateHouseMain_3
# 26 "data/maps/Route13_GateHouse/scripts.pory"
	case 2, R13_GateHouseMain_4
# 29 "data/maps/Route13_GateHouse/scripts.pory"
	case 3, R13_GateHouseMain_5
R13_GateHouseMain_1:
# 33 "data/maps/Route13_GateHouse/scripts.pory"
	msgbox R13_StormAhead
# 34 "data/maps/Route13_GateHouse/scripts.pory"
	closemessage
# 35 "data/maps/Route13_GateHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Left
# 36 "data/maps/Route13_GateHouse/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route13_GateHouse/scripts.pory"
	release
	end

R13_GateHouseMain_3:
# 25 "data/maps/Route13_GateHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto R13_GateHouseMain_1

R13_GateHouseMain_4:
# 27 "data/maps/Route13_GateHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Up
# 28 "data/maps/Route13_GateHouse/scripts.pory"
	waitmovement 0
	goto R13_GateHouseMain_1

R13_GateHouseMain_5:
# 30 "data/maps/Route13_GateHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Walk2Up
# 31 "data/maps/Route13_GateHouse/scripts.pory"
	waitmovement 0
	goto R13_GateHouseMain_1


R13_StormAhead::
# 41 "data/maps/Route13_GateHouse/scripts.pory"
	.string "I'm sorry, but the sea bridge is\n"
	.string "closed due to a massive storm.$"
