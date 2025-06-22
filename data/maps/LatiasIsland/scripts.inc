LatiasIsland_MapScripts::
# 16 "data/maps/LatiasIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LatiasIsland_MapScripts_MAP_SCRIPT_ON_RESUME
# 19 "data/maps/LatiasIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 26 "data/maps/LatiasIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LatiasIsland_MapScripts_MAP_SCRIPT_ON_RESUME:
# 17 "data/maps/LatiasIsland/scripts.pory"
	setstepcallback STEP_CB_LATIASISLAND
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 21 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_LATIASISLE_PUZZLE2_SOLVED, LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
# 23 "data/maps/LatiasIsland/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE2_BOULDER, 36, 38
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
# 27 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 31 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 35 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 39 "data/maps/LatiasIsland/scripts.pory"
	switch VAR_TEMP_3
# 40 "data/maps/LatiasIsland/scripts.pory"
	case 1, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_20
# 45 "data/maps/LatiasIsland/scripts.pory"
	case 2, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_21
# 48 "data/maps/LatiasIsland/scripts.pory"
	case 3, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_22
# 51 "data/maps/LatiasIsland/scripts.pory"
	case 4, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_23
# 54 "data/maps/LatiasIsland/scripts.pory"
	case 5, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_24
# 57 "data/maps/LatiasIsland/scripts.pory"
	case 6, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_25
# 60 "data/maps/LatiasIsland/scripts.pory"
	case 7, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_26
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 64 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_29
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27:
# 68 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_34
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 28 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3BC, 1
# 29 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 32 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, 1
# 33 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 31 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 36 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 33, 17, METATILE_LatiIsles_LI_BarrierUp, 1
# 37 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 33, 18, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 35 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 35 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 35 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 41 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 42 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3C8, 0
# 43 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierDown, 0
# 44 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_21:
# 46 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 47 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 49 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 50 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 52 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 21, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 53 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_7, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_24:
# 55 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 37, 12, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 56 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_8, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_25:
# 58 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 13, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 59 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_9, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 61 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 20, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 62 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_A, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_28:
# 65 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierDown, FALSE
# 66 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierDown, FALSE
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_29:
# 64 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_28
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_32:
# 69 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 33, 17, METATILE_LatiIsles_LI_BarrierDown, FALSE
# 70 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 33, 18, METATILE_LatiIsles_LI_BarrierDown, FALSE
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_33:
# 68 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_37
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_34:
# 68 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_33
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_37:
# 68 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_32
	return


LatiasIsland_Switch1::
# 76 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_eq LatiasIsland_Switch1_2
# 80 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3C8, 0
# 81 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierDown, 0
# 82 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 83 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 84 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/LatiasIsland/scripts.pory"
	waitse
# 86 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_0, 100
# 87 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch1_2:
# 77 "data/maps/LatiasIsland/scripts.pory"
	release
	end


SteppedOffofSwitch1::
# 90 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 91 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3BC, TRUE
# 92 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 93 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 94 "data/maps/LatiasIsland/scripts.pory"
	waitse
# 95 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_0, 0
# 96 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
	return


FollowerStayPut::
# 100 "data/maps/LatiasIsland/scripts.pory"
	faceplayer
# 101 "data/maps/LatiasIsland/scripts.pory"
	bufferlivemonnickname 0
# 102 "data/maps/LatiasIsland/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 103 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_FOLLOWER_STAYS_PUT, FollowerStayPut_2
# 117 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Text, MSGBOX_YESNO
# 118 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FollowerStayPut_8
FollowerStayPut_1:
# 147 "data/maps/LatiasIsland/scripts.pory"
	release
	return

FollowerStayPut_2:
# 104 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Follow, MSGBOX_YESNO
# 105 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FollowerStayPut_5
# 112 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Text2
# 113 "data/maps/LatiasIsland/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
	goto FollowerStayPut_1

FollowerStayPut_5:
# 106 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 0
# 107 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 108 "data/maps/LatiasIsland/scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 109 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Follow2
	goto FollowerStayPut_1

FollowerStayPut_8:
# 120 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 39
	goto_if_eq FollowerStayPut_36
FollowerStayPut_34:
# 123 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq FollowerStayPut_33
FollowerStayPut_31:
# 126 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq FollowerStayPut_30
FollowerStayPut_28:
# 129 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq FollowerStayPut_27
FollowerStayPut_25:
# 132 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq FollowerStayPut_24
FollowerStayPut_22:
# 135 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_eq FollowerStayPut_21
FollowerStayPut_19:
# 138 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_eq FollowerStayPut_18
FollowerStayPut_10:
# 141 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_FOLLOWER_STAYS_PUT
# 142 "data/maps/LatiasIsland/scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 143 "data/maps/LatiasIsland/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
# 144 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Text2
	goto FollowerStayPut_1

FollowerStayPut_11:
# 121 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto FollowerStayPut_10

FollowerStayPut_12:
# 124 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 2
	goto FollowerStayPut_10

FollowerStayPut_13:
# 127 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 3
	goto FollowerStayPut_10

FollowerStayPut_14:
# 130 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 4
	goto FollowerStayPut_10

FollowerStayPut_15:
# 133 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 5
	goto FollowerStayPut_10

FollowerStayPut_16:
# 136 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 6
	goto FollowerStayPut_10

FollowerStayPut_17:
# 139 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 7
	goto FollowerStayPut_10

FollowerStayPut_18:
# 138 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 20
	goto_if_eq FollowerStayPut_17
	goto FollowerStayPut_10

FollowerStayPut_21:
# 135 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 13
	goto_if_eq FollowerStayPut_16
	goto FollowerStayPut_19

FollowerStayPut_24:
# 132 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 12
	goto_if_eq FollowerStayPut_15
	goto FollowerStayPut_22

FollowerStayPut_27:
# 129 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 21
	goto_if_eq FollowerStayPut_14
	goto FollowerStayPut_25

FollowerStayPut_30:
# 126 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 38
	goto_if_eq FollowerStayPut_13
	goto FollowerStayPut_28

FollowerStayPut_33:
# 123 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 38
	goto_if_eq FollowerStayPut_12
	goto FollowerStayPut_31

FollowerStayPut_36:
# 120 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 55
	goto_if_eq FollowerStayPut_11
	goto FollowerStayPut_34


LatiasIsland_CallBackMon1::
# 170 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq LatiasIsland_CallBackMon1_2
LatiasIsland_CallBackMon1_1:
# 187 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_CallBackMon1_2:
# 171 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SELECT
# 172 "data/maps/LatiasIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 173 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiasIsland_CallBackMon1_4
	goto LatiasIsland_CallBackMon1_1

LatiasIsland_CallBackMon1_4:
# 174 "data/maps/LatiasIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiasIsland_CallBackMon1_Movement_0
# 175 "data/maps/LatiasIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 176 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 177 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 0
# 178 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_0, 0
# 179 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3BC, TRUE
# 180 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 181 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 182 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 183 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 184 "data/maps/LatiasIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiasIsland_CallBackMon1_1


LatiasIsland_CallBackMon2::
# 191 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq LatiasIsland_CallBackMon2_2
LatiasIsland_CallBackMon2_1:
# 209 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_CallBackMon2_2:
# 192 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_LATIASISLE_PUZZLE2_SOLVED
# 193 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SELECT
# 194 "data/maps/LatiasIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 195 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiasIsland_CallBackMon2_4
	goto LatiasIsland_CallBackMon2_1

LatiasIsland_CallBackMon2_4:
# 196 "data/maps/LatiasIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiasIsland_CallBackMon1_Movement_0
# 197 "data/maps/LatiasIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 198 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 199 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 0
# 200 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 0
# 201 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 202 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 203 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 204 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 205 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 206 "data/maps/LatiasIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiasIsland_CallBackMon2_1


LatiasIsland_Switch2::
# 218 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiasIsland_Switch2_2
# 222 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 223 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
# 224 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 225 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 36
	goto_if_eq LatiasIsland_Switch2_6
LatiasIsland_Switch2_4:
# 228 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiasIsland_Switch2_10
# 235 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 236 "data/maps/LatiasIsland/scripts.pory"
	waitse
LatiasIsland_Switch2_9:
# 238 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 239 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch2_2:
# 219 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch2_5:
# 226 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
	goto LatiasIsland_Switch2_4

LatiasIsland_Switch2_6:
# 225 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 38
	goto_if_eq LatiasIsland_Switch2_5
	goto LatiasIsland_Switch2_4

LatiasIsland_Switch2_10:
# 229 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 230 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 231 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 232 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto LatiasIsland_Switch2_9


SteppedOffofSwitch2::
# 242 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 243 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 38, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 244 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 245 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq SteppedOffofSwitch2_2
# 254 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 255 "data/maps/LatiasIsland/scripts.pory"
	waitse
SteppedOffofSwitch2_1:
# 257 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

SteppedOffofSwitch2_2:
# 247 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 248 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 249 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 250 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 251 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto SteppedOffofSwitch2_1


LatiasIsland_Switch3::
# 261 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiasIsland_Switch3_2
# 265 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 266 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 100
# 267 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiasIsland_Switch3_5
# 274 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 275 "data/maps/LatiasIsland/scripts.pory"
	waitse
LatiasIsland_Switch3_4:
# 277 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 278 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch3_2:
# 262 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch3_5:
# 268 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 269 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 270 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 271 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto LatiasIsland_Switch3_4


SteppedOffofSwitch3::
# 281 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 282 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 283 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq SteppedOffofSwitch3_2
# 293 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 294 "data/maps/LatiasIsland/scripts.pory"
	waitse
SteppedOffofSwitch3_1:
# 296 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

SteppedOffofSwitch3_2:
# 286 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 287 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 288 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 289 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 290 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto SteppedOffofSwitch3_1


LatiasIsland_Switch4::
# 300 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq LatiasIsland_Switch4_2
# 304 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 21, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 305 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_7, 100
# 306 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 307 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 36
	goto_if_eq LatiasIsland_Switch4_6
LatiasIsland_Switch4_4:
# 310 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 311 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 312 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch4_2:
# 301 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch4_5:
# 308 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
	goto LatiasIsland_Switch4_4

LatiasIsland_Switch4_6:
# 307 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 21
	goto_if_eq LatiasIsland_Switch4_5
	goto LatiasIsland_Switch4_4


LatiasIsland_Switch5::
# 315 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq LatiasIsland_Switch5_2
# 319 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 37, 12, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 320 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_8, 100
# 321 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 322 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 37
	goto_if_eq LatiasIsland_Switch5_6
LatiasIsland_Switch5_4:
# 325 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 326 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 327 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch5_2:
# 316 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch5_5:
# 323 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
	goto LatiasIsland_Switch5_4

LatiasIsland_Switch5_6:
# 322 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 12
	goto_if_eq LatiasIsland_Switch5_5
	goto LatiasIsland_Switch5_4


LatiasIsland_Switch6::
# 330 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq LatiasIsland_Switch6_2
# 334 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 13, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 335 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_9, 100
# 336 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 337 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 50
	goto_if_eq LatiasIsland_Switch6_6
LatiasIsland_Switch6_4:
# 340 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 341 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 342 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch6_2:
# 331 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch6_5:
# 338 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
	goto LatiasIsland_Switch6_4

LatiasIsland_Switch6_6:
# 337 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 13
	goto_if_eq LatiasIsland_Switch6_5
	goto LatiasIsland_Switch6_4


LatiasIsland_Switch7::
# 345 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq LatiasIsland_Switch7_2
# 349 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 20, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 350 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_A, 100
# 351 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 352 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 50
	goto_if_eq LatiasIsland_Switch7_6
LatiasIsland_Switch7_4:
# 355 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 356 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 357 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch7_2:
# 346 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch7_5:
# 353 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
	goto LatiasIsland_Switch7_4

LatiasIsland_Switch7_6:
# 352 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 20
	goto_if_eq LatiasIsland_Switch7_5
	goto LatiasIsland_Switch7_4


LatiIsle_LowerLastPuzzleBarriers::
# 362 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_5
LatiIsle_LowerLastPuzzleBarriers_3:
# 369 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 370 "data/maps/LatiasIsland/scripts.pory"
	waitse
LatiIsle_LowerLastPuzzleBarriers_1:
	return

LatiIsle_LowerLastPuzzleBarriers_2:
# 363 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 33, 17, METATILE_LatiIsles_LI_BarrierDown, 0
# 364 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 33, 18, METATILE_LatiIsles_LI_BarrierDown, 0
# 365 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 366 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto LatiIsle_LowerLastPuzzleBarriers_1

LatiIsle_LowerLastPuzzleBarriers_4:
# 362 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_8
	goto LatiIsle_LowerLastPuzzleBarriers_3

LatiIsle_LowerLastPuzzleBarriers_5:
# 362 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_4
	goto LatiIsle_LowerLastPuzzleBarriers_3

LatiIsle_LowerLastPuzzleBarriers_8:
# 362 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_2
	goto LatiIsle_LowerLastPuzzleBarriers_3


SteppedOffofSwitch4::
# 376 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 377 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 21, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 378 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 379 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_7, 0
	return


SteppedOffofSwitch5::
# 383 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 384 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 37, 12, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 385 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 386 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_8, 0
	return


SteppedOffofSwitch6::
# 390 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 391 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 13, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 392 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 393 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_9, 0
	return


SteppedOffofSwitch7::
# 397 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 398 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 20, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 399 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 400 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_A, 0
	return


SteppedOffofSwitchGlobal::
# 404 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 405 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq SteppedOffofSwitchGlobal_5
SteppedOffofSwitchGlobal_3:
# 413 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 414 "data/maps/LatiasIsland/scripts.pory"
	waitse
SteppedOffofSwitchGlobal_1:
	return

SteppedOffofSwitchGlobal_2:
# 406 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 407 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 408 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 409 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 410 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto SteppedOffofSwitchGlobal_1

SteppedOffofSwitchGlobal_4:
# 405 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq SteppedOffofSwitchGlobal_8
	goto SteppedOffofSwitchGlobal_3

SteppedOffofSwitchGlobal_5:
# 405 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq SteppedOffofSwitchGlobal_4
	goto SteppedOffofSwitchGlobal_3

SteppedOffofSwitchGlobal_8:
# 405 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq SteppedOffofSwitchGlobal_2
	goto SteppedOffofSwitchGlobal_3


# 174 "data/maps/LatiasIsland/scripts.pory"
LatiasIsland_CallBackMon1_Movement_0:
# 174 "data/maps/LatiasIsland/scripts.pory"
	enter_pokeball
# 174 "data/maps/LatiasIsland/scripts.pory"
	set_invisible
	step_end

FollowerStayPut_Follow::
# 150 "data/maps/LatiasIsland/scripts.pory"
	.string "{STR_VAR_1} is currently\n"
	.string "holding down a pressure plate.\p"
	.string "Instruct it to follow you again?$"

FollowerStayPut_Follow2::
# 155 "data/maps/LatiasIsland/scripts.pory"
	.string "{STR_VAR_1} is following you again.$"

FollowerStayPut_Text::
# 158 "data/maps/LatiasIsland/scripts.pory"
	.string "There seems to be a pressure plate\n"
	.string "here.\p"
	.string "Instruct {STR_VAR_1} to hold\n"
	.string "the plate down?$"

FollowerStayPut_Text2::
# 164 "data/maps/LatiasIsland/scripts.pory"
	.string "{STR_VAR_1} is holding the\n"
	.string "pressure plate down.$"

LatiasIsland_CallBackMon1_Text::
# 212 "data/maps/LatiasIsland/scripts.pory"
	.string "You can see your Pokémon from here.\n"
	.string "Want to return it to its ball?$"
