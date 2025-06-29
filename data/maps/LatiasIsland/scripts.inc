LatiasIsland_MapScripts::
# 22 "data/maps/LatiasIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LatiasIsland_MapScripts_MAP_SCRIPT_ON_RESUME
# 25 "data/maps/LatiasIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 44 "data/maps/LatiasIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LatiasIsland_MapScripts_MAP_SCRIPT_ON_RESUME:
# 23 "data/maps/LatiasIsland/scripts.pory"
	setstepcallback STEP_CB_LATIASISLAND
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 26 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_SHINY_MULTIPLIER, 8
# 27 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_PERMA_DAY
# 28 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_TEMP_8
# 29 "data/maps/LatiasIsland/scripts.pory"
	call Amberock_SetPlayerModel
# 30 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 31 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_LATIASISLE_PUZZLE2_SOLVED, LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 35 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_LATIASISLE_PUZZLE3_SOLVED, LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 32 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
# 33 "data/maps/LatiasIsland/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE2_BOULDER, 36, 38
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LatiasIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 36 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_7, 100
# 37 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_9, 100
# 38 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_A, 100
# 39 "data/maps/LatiasIsland/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE3_BOULDER_1, 36, 21
# 40 "data/maps/LatiasIsland/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE3_BOULDER_2, 47, 11
# 41 "data/maps/LatiasIsland/scripts.pory"
	setobjectxyperm LOCALID_PUZZLE3_BOULDER_3, 50, 20
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
# 45 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_3, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 49 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 53 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 57 "data/maps/LatiasIsland/scripts.pory"
	switch VAR_MON_ON_SWITCH_X
# 58 "data/maps/LatiasIsland/scripts.pory"
	case 1, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_20
# 63 "data/maps/LatiasIsland/scripts.pory"
	case 2, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_21
# 66 "data/maps/LatiasIsland/scripts.pory"
	case 3, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_22
# 69 "data/maps/LatiasIsland/scripts.pory"
	case 4, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_23
# 72 "data/maps/LatiasIsland/scripts.pory"
	case 5, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_24
# 75 "data/maps/LatiasIsland/scripts.pory"
	case 6, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_25
# 78 "data/maps/LatiasIsland/scripts.pory"
	case 7, LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_26
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 82 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_29
LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27:
# 86 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_34
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 46 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3BC, 1
# 47 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 50 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, 1
# 51 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 49 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 54 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 17, METATILE_LatiIsles_LI_BarrierUp, 1
# 55 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 18, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 53 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 53 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 53 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_ne LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 59 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 60 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3C8, 0
# 61 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierDown, 0
# 62 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_21:
# 64 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 65 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 67 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 68 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 70 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 21, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 71 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_7, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_24:
# 73 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 34, 13, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 74 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_8, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_25:
# 76 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 47, 11, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 77 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_9, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 79 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 20, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 80 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_A, 100
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_18

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_28:
# 83 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierDown, FALSE
# 84 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierDown, FALSE
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_29:
# 82 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_28
	goto LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_32:
# 87 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 17, METATILE_LatiIsles_LI_BarrierDown, FALSE
# 88 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 18, METATILE_LatiIsles_LI_BarrierDown, FALSE
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_33:
# 86 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_37
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_34:
# 86 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_33
	return

LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_37:
# 86 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq LatiasIsland_MapScripts_MAP_SCRIPT_ON_LOAD_32
	return


LatiasIsland_Switch1::
# 94 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_3, 100
	goto_if_eq LatiasIsland_Switch1_2
# 98 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3C8, 0
# 99 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierDown, 0
# 100 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 101 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 102 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 103 "data/maps/LatiasIsland/scripts.pory"
	waitse
# 104 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 100
# 105 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch1_2:
# 95 "data/maps/LatiasIsland/scripts.pory"
	release
	end


SteppedOffofSwitch1::
# 108 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 109 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3BC, TRUE
# 110 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 111 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 112 "data/maps/LatiasIsland/scripts.pory"
	waitse
# 113 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_0, 0
# 114 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
	return


LatiasIsland_DontAbandonMon::
# 118 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 0
	goto_if_eq LatiasIsland_DontAbandonMon_2
# 122 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 123 "data/maps/LatiasIsland/scripts.pory"
	bufferlivemonnickname 0
# 124 "data/maps/LatiasIsland/scripts.pory"
	msgbox LatiasIsland_DontAbandonMon_Text, MSGBOX_AUTOCLOSE
# 125 "data/maps/LatiasIsland/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Right
# 126 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_DontAbandonMon_2:
# 119 "data/maps/LatiasIsland/scripts.pory"
	release
	end


FollowerStayPutLatias::
# 134 "data/maps/LatiasIsland/scripts.pory"
	faceplayer
# 135 "data/maps/LatiasIsland/scripts.pory"
	bufferlivemonnickname 0
# 136 "data/maps/LatiasIsland/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 137 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_FOLLOWER_STAYS_PUT, FollowerStayPutLatias_2
# 152 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Text, MSGBOX_YESNO
# 153 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FollowerStayPutLatias_8
FollowerStayPutLatias_1:
# 183 "data/maps/LatiasIsland/scripts.pory"
	release
	return

FollowerStayPutLatias_2:
# 138 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Follow, MSGBOX_YESNO
# 139 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FollowerStayPutLatias_5
# 147 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Text2
# 148 "data/maps/LatiasIsland/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
	goto FollowerStayPutLatias_1

FollowerStayPutLatias_5:
# 140 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 141 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 142 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_TEMP_5
# 143 "data/maps/LatiasIsland/scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 144 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Follow2
	goto FollowerStayPutLatias_1

FollowerStayPutLatias_8:
# 155 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 39
	goto_if_eq FollowerStayPutLatias_36
FollowerStayPutLatias_34:
# 158 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq FollowerStayPutLatias_33
FollowerStayPutLatias_31:
# 161 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq FollowerStayPutLatias_30
FollowerStayPutLatias_28:
# 164 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq FollowerStayPutLatias_27
FollowerStayPutLatias_25:
# 167 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_eq FollowerStayPutLatias_24
FollowerStayPutLatias_22:
# 171 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 47
	goto_if_eq FollowerStayPutLatias_21
FollowerStayPutLatias_19:
# 174 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_eq FollowerStayPutLatias_18
FollowerStayPutLatias_10:
# 177 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_FOLLOWER_STAYS_PUT
# 178 "data/maps/LatiasIsland/scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 179 "data/maps/LatiasIsland/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
# 180 "data/maps/LatiasIsland/scripts.pory"
	msgbox FollowerStayPut_Text2
	goto FollowerStayPutLatias_1

FollowerStayPutLatias_11:
# 156 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 1
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_12:
# 159 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 2
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_13:
# 162 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 3
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_14:
# 165 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 4
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_15:
# 168 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 5
# 169 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_TEMP_5
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_16:
# 172 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 6
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_17:
# 175 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 7
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_18:
# 174 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 20
	goto_if_eq FollowerStayPutLatias_17
	goto FollowerStayPutLatias_10

FollowerStayPutLatias_21:
# 171 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 11
	goto_if_eq FollowerStayPutLatias_16
	goto FollowerStayPutLatias_19

FollowerStayPutLatias_24:
# 167 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 13
	goto_if_eq FollowerStayPutLatias_15
	goto FollowerStayPutLatias_22

FollowerStayPutLatias_27:
# 164 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 21
	goto_if_eq FollowerStayPutLatias_14
	goto FollowerStayPutLatias_25

FollowerStayPutLatias_30:
# 161 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 38
	goto_if_eq FollowerStayPutLatias_13
	goto FollowerStayPutLatias_28

FollowerStayPutLatias_33:
# 158 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 38
	goto_if_eq FollowerStayPutLatias_12
	goto FollowerStayPutLatias_31

FollowerStayPutLatias_36:
# 155 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_2, 55
	goto_if_eq FollowerStayPutLatias_11
	goto FollowerStayPutLatias_34


LatiasIsland_CallBackMon1::
# 206 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 1
	goto_if_eq LatiasIsland_CallBackMon1_2
LatiasIsland_CallBackMon1_1:
# 223 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_CallBackMon1_2:
# 207 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SELECT
# 208 "data/maps/LatiasIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 209 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiasIsland_CallBackMon1_4
	goto LatiasIsland_CallBackMon1_1

LatiasIsland_CallBackMon1_4:
# 210 "data/maps/LatiasIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiasIsland_CallBackMon1_Movement_0
# 211 "data/maps/LatiasIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 212 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 213 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 214 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_3, 0
# 215 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 59, 0x3BC, TRUE
# 216 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 60, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 217 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 39, 55, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 218 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 219 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 220 "data/maps/LatiasIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiasIsland_CallBackMon1_1


LatiasIsland_CallBackMon2::
# 227 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 3
	goto_if_eq LatiasIsland_CallBackMon2_2
LatiasIsland_CallBackMon2_1:
# 245 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_CallBackMon2_2:
# 228 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_LATIASISLE_PUZZLE2_SOLVED
# 229 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SELECT
# 230 "data/maps/LatiasIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 231 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiasIsland_CallBackMon2_4
	goto LatiasIsland_CallBackMon2_1

LatiasIsland_CallBackMon2_4:
# 232 "data/maps/LatiasIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiasIsland_CallBackMon1_Movement_0
# 233 "data/maps/LatiasIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 234 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 235 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 236 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 0
# 237 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 238 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 239 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 240 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 241 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 242 "data/maps/LatiasIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiasIsland_CallBackMon2_1


LatiasIsland_CallBackMon3::
# 249 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 5
	goto_if_eq LatiasIsland_CallBackMon3_2
LatiasIsland_CallBackMon3_1:
# 268 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_CallBackMon3_2:
# 250 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_LATIASISLE_PUZZLE3_SOLVED
# 251 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SELECT
# 252 "data/maps/LatiasIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 253 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiasIsland_CallBackMon3_4
	goto LatiasIsland_CallBackMon3_1

LatiasIsland_CallBackMon3_4:
# 254 "data/maps/LatiasIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiasIsland_CallBackMon1_Movement_0
# 255 "data/maps/LatiasIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 256 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 257 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 258 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_8, 0
# 259 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_TEMP_5
# 260 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 17, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 261 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 18, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 262 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 34, 13, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 263 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 264 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 265 "data/maps/LatiasIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiasIsland_CallBackMon3_1


LatiasIsland_Switch2::
# 277 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiasIsland_Switch2_2
# 281 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 282 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
# 283 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 284 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 36
	goto_if_eq LatiasIsland_Switch2_6
LatiasIsland_Switch2_4:
# 287 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiasIsland_Switch2_10
# 294 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 295 "data/maps/LatiasIsland/scripts.pory"
	waitse
LatiasIsland_Switch2_9:
# 297 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 298 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch2_2:
# 278 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch2_5:
# 285 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
	goto LatiasIsland_Switch2_4

LatiasIsland_Switch2_6:
# 284 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 38
	goto_if_eq LatiasIsland_Switch2_5
	goto LatiasIsland_Switch2_4

LatiasIsland_Switch2_10:
# 288 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 289 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 290 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 291 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto LatiasIsland_Switch2_9


SteppedOffofSwitch2::
# 301 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 302 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 38, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 303 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 304 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq SteppedOffofSwitch2_2
# 313 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 314 "data/maps/LatiasIsland/scripts.pory"
	waitse
SteppedOffofSwitch2_1:
# 316 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

SteppedOffofSwitch2_2:
# 306 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 307 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 308 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 309 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 310 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto SteppedOffofSwitch2_1


LatiasIsland_Switch3::
# 320 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiasIsland_Switch3_2
# 324 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 325 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 100
# 326 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiasIsland_Switch3_5
# 333 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 334 "data/maps/LatiasIsland/scripts.pory"
	waitse
LatiasIsland_Switch3_4:
# 336 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 337 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch3_2:
# 321 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch3_5:
# 327 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 328 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierDown, 0
# 329 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 330 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto LatiasIsland_Switch3_4


SteppedOffofSwitch3::
# 340 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 341 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 44, 38, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 342 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 343 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq SteppedOffofSwitch3_2
# 352 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 353 "data/maps/LatiasIsland/scripts.pory"
	waitse
SteppedOffofSwitch3_1:
# 355 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

SteppedOffofSwitch3_2:
# 345 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 40, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 346 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 41, 38, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 347 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 348 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 349 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto SteppedOffofSwitch3_1


LatiasIsland_Switch4::
# 359 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq LatiasIsland_Switch4_2
# 363 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 21, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 364 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_7, 100
# 365 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 366 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 36
	goto_if_eq LatiasIsland_Switch4_6
LatiasIsland_Switch4_4:
# 370 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 371 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 372 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch4_2:
# 360 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch4_5:
# 367 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
# 368 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_TEMP_4
	goto LatiasIsland_Switch4_4

LatiasIsland_Switch4_6:
# 366 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 21
	goto_if_eq LatiasIsland_Switch4_5
	goto LatiasIsland_Switch4_4


LatiasIsland_Switch5::
# 375 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq LatiasIsland_Switch5_2
# 379 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 34, 13, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 380 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_8, 100
# 381 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 382 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 34
	goto_if_eq LatiasIsland_Switch5_6
LatiasIsland_Switch5_4:
# 386 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 387 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 388 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch5_2:
# 376 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch5_5:
# 383 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
# 384 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_TEMP_5
	goto LatiasIsland_Switch5_4

LatiasIsland_Switch5_6:
# 382 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 13
	goto_if_eq LatiasIsland_Switch5_5
	goto LatiasIsland_Switch5_4


LatiasIsland_Switch6::
# 391 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq LatiasIsland_Switch6_2
# 395 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 47, 11, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 396 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_9, 100
# 397 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 398 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 47
	goto_if_eq LatiasIsland_Switch6_6
LatiasIsland_Switch6_4:
# 402 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 403 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 404 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch6_2:
# 392 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch6_5:
# 399 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
# 400 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_TEMP_6
	goto LatiasIsland_Switch6_4

LatiasIsland_Switch6_6:
# 398 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 11
	goto_if_eq LatiasIsland_Switch6_5
	goto LatiasIsland_Switch6_4


LatiasIsland_Switch7::
# 407 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq LatiasIsland_Switch7_2
# 411 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 20, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 412 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_A, 100
# 413 "data/maps/LatiasIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 414 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8001, 50
	goto_if_eq LatiasIsland_Switch7_6
LatiasIsland_Switch7_4:
# 418 "data/maps/LatiasIsland/scripts.pory"
	call LatiIsle_LowerLastPuzzleBarriers
# 419 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 420 "data/maps/LatiasIsland/scripts.pory"
	release
	return

LatiasIsland_Switch7_2:
# 408 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_Switch7_5:
# 415 "data/maps/LatiasIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
# 416 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_TEMP_7
	goto LatiasIsland_Switch7_4

LatiasIsland_Switch7_6:
# 414 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x8002, 20
	goto_if_eq LatiasIsland_Switch7_5
	goto LatiasIsland_Switch7_4


LatiIsle_LowerLastPuzzleBarriers::
# 425 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_13
LatiIsle_LowerLastPuzzleBarriers_7:
# 431 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_TEMP_4, LatiIsle_LowerLastPuzzleBarriers_6
LatiIsle_LowerLastPuzzleBarriers_4:
# 438 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 439 "data/maps/LatiasIsland/scripts.pory"
	waitse
LatiIsle_LowerLastPuzzleBarriers_1:
	return

LatiIsle_LowerLastPuzzleBarriers_2:
# 426 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 17, METATILE_LatiIsles_LI_BarrierDown, 0
# 427 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 18, METATILE_LatiIsles_LI_BarrierDown, 0
# 428 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 429 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto LatiIsle_LowerLastPuzzleBarriers_1

LatiIsle_LowerLastPuzzleBarriers_3:
# 432 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 17, METATILE_LatiIsles_LI_BarrierDown, 0
# 433 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 18, METATILE_LatiIsles_LI_BarrierDown, 0
# 434 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 435 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto LatiIsle_LowerLastPuzzleBarriers_1

LatiIsle_LowerLastPuzzleBarriers_5:
# 431 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_TEMP_6, LatiIsle_LowerLastPuzzleBarriers_9
	goto LatiIsle_LowerLastPuzzleBarriers_4

LatiIsle_LowerLastPuzzleBarriers_6:
# 431 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_TEMP_5, LatiIsle_LowerLastPuzzleBarriers_5
	goto LatiIsle_LowerLastPuzzleBarriers_4

LatiIsle_LowerLastPuzzleBarriers_9:
# 431 "data/maps/LatiasIsland/scripts.pory"
	goto_if_set FLAG_TEMP_7, LatiIsle_LowerLastPuzzleBarriers_3
	goto LatiIsle_LowerLastPuzzleBarriers_4

LatiIsle_LowerLastPuzzleBarriers_12:
# 425 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_16
	goto LatiIsle_LowerLastPuzzleBarriers_7

LatiIsle_LowerLastPuzzleBarriers_13:
# 425 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_12
	goto LatiIsle_LowerLastPuzzleBarriers_7

LatiIsle_LowerLastPuzzleBarriers_16:
# 425 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq LatiIsle_LowerLastPuzzleBarriers_2
	goto LatiIsle_LowerLastPuzzleBarriers_7


SteppedOffofSwitch4::
# 445 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 446 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 21, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 447 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 448 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_7, 0
	return


SteppedOffofSwitch5::
# 452 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 453 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 34, 13, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 454 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 455 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_8, 0
	return


SteppedOffofSwitch6::
# 459 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 460 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 47, 11, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 461 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 462 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_9, 0
	return


SteppedOffofSwitch7::
# 466 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 467 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 50, 20, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 468 "data/maps/LatiasIsland/scripts.pory"
	call SteppedOffofSwitchGlobal
# 469 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_A, 0
	return


SteppedOffofSwitchGlobal::
# 473 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 474 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_eq SteppedOffofSwitchGlobal_5
SteppedOffofSwitchGlobal_3:
# 482 "data/maps/LatiasIsland/scripts.pory"
	playse SE_SWITCH
# 483 "data/maps/LatiasIsland/scripts.pory"
	waitse
SteppedOffofSwitchGlobal_1:
	return

SteppedOffofSwitchGlobal_2:
# 475 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 17, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 476 "data/maps/LatiasIsland/scripts.pory"
	setmetatile 36, 18, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 477 "data/maps/LatiasIsland/scripts.pory"
	special DrawWholeMapView
# 478 "data/maps/LatiasIsland/scripts.pory"
	playse SE_M_STRENGTH
# 479 "data/maps/LatiasIsland/scripts.pory"
	waitse
	goto SteppedOffofSwitchGlobal_1

SteppedOffofSwitchGlobal_4:
# 474 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_9, 100
	goto_if_eq SteppedOffofSwitchGlobal_8
	goto SteppedOffofSwitchGlobal_3

SteppedOffofSwitchGlobal_5:
# 474 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_8, 100
	goto_if_eq SteppedOffofSwitchGlobal_4
	goto SteppedOffofSwitchGlobal_3

SteppedOffofSwitchGlobal_8:
# 474 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_TEMP_A, 100
	goto_if_eq SteppedOffofSwitchGlobal_2
	goto SteppedOffofSwitchGlobal_3


LatiasIsland_ReturnToSkyloch::
# 489 "data/maps/LatiasIsland/scripts.pory"
	msgbox LatiasIsland_ReturnToSkyloch_Text, MSGBOX_YESNO
# 490 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LatiasIsland_ReturnToSkyloch_2
# 494 "data/maps/LatiasIsland/scripts.pory"
	closemessage
# 495 "data/maps/LatiasIsland/scripts.pory"
	checkpartymon SPECIES_LATIAS, FALSE
# 496 "data/maps/LatiasIsland/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8000
# 497 "data/maps/LatiasIsland/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq LatiasIsland_ReturnToSkyloch_5
# 502 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_B, LOCALID_LATIASISLAND_LATIAS
# 503 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_C, LOCALID_LATIASISLAND_LATIAS_HEAD
LatiasIsland_ReturnToSkyloch_4:
# 505 "data/maps/LatiasIsland/scripts.pory"
	setflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 506 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_FACING, DIR_SOUTH
# 507 "data/maps/LatiasIsland/scripts.pory"
	waitmove LOCALID_LATIASISLAND_LATIBALL, LatiasIsland_ReturnToSkyloch_Movement_0
# 508 "data/maps/LatiasIsland/scripts.pory"
	showobjectat VAR_TEMP_B, MAP_LATIAS_ISLAND
# 509 "data/maps/LatiasIsland/scripts.pory"
	showobjectat VAR_TEMP_C, MAP_LATIAS_ISLAND
# 510 "data/maps/LatiasIsland/scripts.pory"
	removeobject LOCALID_LATIASISLAND_LATIBALL
# 511 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 512 "data/maps/LatiasIsland/scripts.pory"
	addobject LOCALID_FAKE_PLAYER
# 513 "data/maps/LatiasIsland/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER, MAP_LATIAS_ISLAND, 0
# 514 "data/maps/LatiasIsland/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LATIAS_ISLAND
# 515 "data/maps/LatiasIsland/scripts.pory"
	setobjectsubpriority VAR_TEMP_C, MAP_LATIAS_ISLAND, 0
# 516 "data/maps/LatiasIsland/scripts.pory"
	waitmove LOCALID_FAKE_PLAYER, LatiasIsland_ReturnToSkyloch_Movement_1
# 517 "data/maps/LatiasIsland/scripts.pory"
	call SetSittingPlayerModel
# 518 "data/maps/LatiasIsland/scripts.pory"
	removeobject LOCALID_FAKE_PLAYER
# 519 "data/maps/LatiasIsland/scripts.pory"
	setobjectxyperm LOCALID_FAKE_PLAYER, 15, 68
# 520 "data/maps/LatiasIsland/scripts.pory"
	addobject LOCALID_FAKE_PLAYER
# 521 "data/maps/LatiasIsland/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER, MAP_LATIAS_ISLAND, 1
# 522 "data/maps/LatiasIsland/scripts.pory"
	delay 16
# 523 "data/maps/LatiasIsland/scripts.pory"
	applymovement VAR_TEMP_B, PlayerAndLatiasLeave
# 524 "data/maps/LatiasIsland/scripts.pory"
	applymovement VAR_TEMP_C, PlayerAndLatiasLeave
# 525 "data/maps/LatiasIsland/scripts.pory"
	applymovement LOCALID_FAKE_PLAYER, LatiasIsland_ReturnToSkyloch_Movement_2
# 526 "data/maps/LatiasIsland/scripts.pory"
	waitmovement 0
# 527 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_STOP_GROUND_EFFECTS
# 528 "data/maps/LatiasIsland/scripts.pory"
	clearflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 529 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 530 "data/maps/LatiasIsland/scripts.pory"
	callnative LatisWarp
# 531 "data/maps/LatiasIsland/scripts.pory"
	special LatiRide
# 532 "data/maps/LatiasIsland/scripts.pory"
	waitstate
	return

LatiasIsland_ReturnToSkyloch_2:
# 491 "data/maps/LatiasIsland/scripts.pory"
	release
	end

LatiasIsland_ReturnToSkyloch_5:
# 498 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_B, LOCALID_LATIASISLAND_LATIAS_SHINY
# 499 "data/maps/LatiasIsland/scripts.pory"
	setvar VAR_TEMP_C, LOCALID_LATIASISLAND_LATIAS_SHINY_HEAD
	goto LatiasIsland_ReturnToSkyloch_4


# 540 "data/maps/LatiasIsland/scripts.pory"
SpawnFollower:
# 541 "data/maps/LatiasIsland/scripts.pory"
	set_visible
# 542 "data/maps/LatiasIsland/scripts.pory"
	exit_pokeball
	step_end

# 544 "data/maps/LatiasIsland/scripts.pory"
PlayerAndLatiasLeave:
# 545 "data/maps/LatiasIsland/scripts.pory"
	walk_slow_down
# 546 "data/maps/LatiasIsland/scripts.pory"
	walk_down
# 546 "data/maps/LatiasIsland/scripts.pory"
	walk_down
# 547 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
# 547 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
# 547 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
# 547 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
	step_end

# 549 "data/maps/LatiasIsland/scripts.pory"
PlayerAndLatiasLeave2:
# 550 "data/maps/LatiasIsland/scripts.pory"
	walk_slow_up
# 551 "data/maps/LatiasIsland/scripts.pory"
	walk_up
# 551 "data/maps/LatiasIsland/scripts.pory"
	walk_up
# 552 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_up
# 552 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_up
# 552 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_up
# 552 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_up
# 552 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_up
	step_end

# 210 "data/maps/LatiasIsland/scripts.pory"
LatiasIsland_CallBackMon1_Movement_0:
# 210 "data/maps/LatiasIsland/scripts.pory"
	enter_pokeball
# 210 "data/maps/LatiasIsland/scripts.pory"
	set_invisible
	step_end

# 507 "data/maps/LatiasIsland/scripts.pory"
LatiasIsland_ReturnToSkyloch_Movement_0:
# 507 "data/maps/LatiasIsland/scripts.pory"
	set_visible
# 507 "data/maps/LatiasIsland/scripts.pory"
	delay_1
# 507 "data/maps/LatiasIsland/scripts.pory"
	delay_1
# 507 "data/maps/LatiasIsland/scripts.pory"
	delay_1
# 507 "data/maps/LatiasIsland/scripts.pory"
	lati_ball
	step_end

# 516 "data/maps/LatiasIsland/scripts.pory"
LatiasIsland_ReturnToSkyloch_Movement_1:
# 516 "data/maps/LatiasIsland/scripts.pory"
	jump_2_down
# 516 "data/maps/LatiasIsland/scripts.pory"
	lock_anim
	step_end

# 525 "data/maps/LatiasIsland/scripts.pory"
LatiasIsland_ReturnToSkyloch_Movement_2:
# 525 "data/maps/LatiasIsland/scripts.pory"
	lock_anim
# 525 "data/maps/LatiasIsland/scripts.pory"
	walk_slow_down
# 525 "data/maps/LatiasIsland/scripts.pory"
	walk_down
# 525 "data/maps/LatiasIsland/scripts.pory"
	walk_down
# 525 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
# 525 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
# 525 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
# 525 "data/maps/LatiasIsland/scripts.pory"
	walk_faster_down
	step_end

LatiasIsland_DontAbandonMon_Text::
# 129 "data/maps/LatiasIsland/scripts.pory"
	.string "Can't leave {STR_VAR_1} behind…$"

FollowerStayPut_Follow::
# 186 "data/maps/LatiasIsland/scripts.pory"
	.string "{STR_VAR_1} is currently\n"
	.string "holding down a pressure plate.\p"
	.string "Instruct it to follow you again?$"

FollowerStayPut_Follow2::
# 191 "data/maps/LatiasIsland/scripts.pory"
	.string "{STR_VAR_1} is following you again.$"

FollowerStayPut_Text::
# 194 "data/maps/LatiasIsland/scripts.pory"
	.string "There seems to be a pressure plate\n"
	.string "here.\p"
	.string "Instruct {STR_VAR_1} to hold\n"
	.string "the plate down?$"

FollowerStayPut_Text2::
# 200 "data/maps/LatiasIsland/scripts.pory"
	.string "{STR_VAR_1} is holding the\n"
	.string "pressure plate down.$"

LatiasIsland_CallBackMon1_Text::
# 271 "data/maps/LatiasIsland/scripts.pory"
	.string "You can see your Pokémon from here.\n"
	.string "Want to return it to its ball?$"

LatiasIsland_ReturnToSkyloch_Text::
# 535 "data/maps/LatiasIsland/scripts.pory"
	.string "Send out Latias and return\n"
	.string "back to Skyloch Village?$"
