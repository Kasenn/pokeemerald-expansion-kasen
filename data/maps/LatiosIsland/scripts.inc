LatiosIsland_MapScripts::
# 69 "data/maps/LatiosIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LatiosIsland_MapScripts_MAP_SCRIPT_ON_RESUME
# 72 "data/maps/LatiosIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 87 "data/maps/LatiosIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LatiosIsland_MapScripts_MAP_SCRIPT_ON_RESUME:
# 70 "data/maps/LatiosIsland/scripts.pory"
	setstepcallback STEP_CB_LATIOSISLAND
	return

LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 73 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_SHINY_MULTIPLIER, 8
# 74 "data/maps/LatiosIsland/scripts.pory"
	setflag FLAG_PERMA_DAY
# 75 "data/maps/LatiosIsland/scripts.pory"
	setflag FLAG_TEMP_8
# 76 "data/maps/LatiosIsland/scripts.pory"
	call Amberock_SetPlayerModel
# 77 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 78 "data/maps/LatiosIsland/scripts.pory"
	goto_if_set FLAG_LATIOSISLE_PUZZLE1_SOLVED, LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 82 "data/maps/LatiosIsland/scripts.pory"
	goto_if_set FLAG_LATIOSISLE_PUZZLE2_SOLVED, LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 79 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_1, 100
# 80 "data/maps/LatiosIsland/scripts.pory"
	setobjectxyperm LOCALID_LATIOSISLAND_ROCK_1, 9, 48
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LatiosIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 83 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_4, 100
# 84 "data/maps/LatiosIsland/scripts.pory"
	setobjectxyperm LOCALID_LATIOSISLAND_ROCK_2, 37, 28
	return

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
# 88 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_1, 100
	goto_if_ne LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 94 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_2, 100
	goto_if_ne LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 98 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_3, 100
	goto_if_ne LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 102 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_4, 100
	goto_if_ne LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 106 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_ne LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 110 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_ne LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_17
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 114 "data/maps/LatiosIsland/scripts.pory"
	switch VAR_MON_ON_SWITCH_X
# 115 "data/maps/LatiosIsland/scripts.pory"
	case 1, LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_21
# 121 "data/maps/LatiosIsland/scripts.pory"
	case 2, LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_22
# 125 "data/maps/LatiosIsland/scripts.pory"
	case 3, LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_23
# 129 "data/maps/LatiosIsland/scripts.pory"
	case 4, LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_24
# 133 "data/maps/LatiosIsland/scripts.pory"
	case 5, LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_25
# 137 "data/maps/LatiosIsland/scripts.pory"
	case 6, LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_26
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_19:
# 142 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_1, 100
	goto_if_eq LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_28
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27:
# 148 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_2, 100
	goto_if_eq LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_31
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_30:
# 152 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_3, 100
	goto_if_eq LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_34
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_33:
# 156 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_4, 100
	goto_if_eq LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_37
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_36:
# 160 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_40
LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_39:
# 164 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_42
	return

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 89 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 49, METATILE_LatiIsles_LI_BarrierUp, 1
# 90 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 49, METATILE_LatiIsles_LI_BarrierUp, 1
# 91 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 35, METATILE_LatiIsles_LI_BarrierUp, 1
# 92 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 35, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 95 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 51, METATILE_LatiIsles_LI_BarrierUp, 1
# 96 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 52, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 99 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 33, METATILE_LatiIsles_LI_BarrierUp, 1
# 100 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 34, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 103 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 29, METATILE_LatiIsles_LI_BarrierUp, 1
# 104 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 29, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 107 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 26, METATILE_LatiIsles_LI_BarrierUp, 1
# 108 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 38, 26, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 111 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 23, METATILE_LatiIsles_LI_BarrierUp, 1
# 112 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 23, METATILE_LatiIsles_LI_BarrierUp, 1
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_16

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_21:
# 116 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 49, METATILE_LatiIsles_LI_BarrierDown, 0
# 117 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 49, METATILE_LatiIsles_LI_BarrierDown, 0
# 118 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 35, METATILE_LatiIsles_LI_BarrierDown, 0
# 119 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 35, METATILE_LatiIsles_LI_BarrierDown, 0
# 120 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_1, 100
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_19

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 122 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 51, METATILE_LatiIsles_LI_BarrierDown, 0
# 123 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 52, METATILE_LatiIsles_LI_BarrierDown, 0
# 124 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_2, 100
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_19

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 126 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 33, METATILE_LatiIsles_LI_BarrierDown, 0
# 127 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 34, METATILE_LatiIsles_LI_BarrierDown, 0
# 128 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_3, 100
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_19

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_24:
# 130 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 29, METATILE_LatiIsles_LI_BarrierDown, 0
# 131 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 29, METATILE_LatiIsles_LI_BarrierDown, 0
# 132 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_4, 100
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_19

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_25:
# 134 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 26, METATILE_LatiIsles_LI_BarrierDown, 0
# 135 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 38, 26, METATILE_LatiIsles_LI_BarrierDown, 0
# 136 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_19

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 138 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 23, METATILE_LatiIsles_LI_BarrierDown, 0
# 139 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 23, METATILE_LatiIsles_LI_BarrierDown, 0
# 140 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_6, 100
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_19

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_28:
# 143 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 49, METATILE_LatiIsles_LI_BarrierDown, 0
# 144 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 49, METATILE_LatiIsles_LI_BarrierDown, 0
# 145 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 35, METATILE_LatiIsles_LI_BarrierDown, 0
# 146 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 35, METATILE_LatiIsles_LI_BarrierDown, 0
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_27

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_31:
# 149 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 51, METATILE_LatiIsles_LI_BarrierDown, 0
# 150 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 52, METATILE_LatiIsles_LI_BarrierDown, 0
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_30

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_34:
# 153 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 33, METATILE_LatiIsles_LI_BarrierDown, 0
# 154 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 34, METATILE_LatiIsles_LI_BarrierDown, 0
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_33

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_37:
# 157 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 29, METATILE_LatiIsles_LI_BarrierDown, 0
# 158 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 29, METATILE_LatiIsles_LI_BarrierDown, 0
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_36

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_40:
# 161 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 26, METATILE_LatiIsles_LI_BarrierDown, 0
# 162 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 38, 26, METATILE_LatiIsles_LI_BarrierDown, 0
	goto LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_39

LatiosIsland_MapScripts_MAP_SCRIPT_ON_LOAD_42:
# 165 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 23, METATILE_LatiIsles_LI_BarrierDown, 0
# 166 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 23, METATILE_LatiIsles_LI_BarrierDown, 0
	return


LatiosIsland_Switch1::
# 172 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_1, 100
	goto_if_eq LatiosIsland_Switch1_2
# 176 "data/maps/LatiosIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 177 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8001, 9
	goto_if_eq LatiosIsland_Switch1_6
LatiosIsland_Switch1_4:
# 181 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 49, METATILE_LatiIsles_LI_BarrierDown, 0
# 182 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 49, METATILE_LatiIsles_LI_BarrierDown, 0
# 183 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 35, METATILE_LatiIsles_LI_BarrierDown, 0
# 184 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 35, METATILE_LatiIsles_LI_BarrierDown, 0
# 185 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 9, 48, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 186 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 187 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 188 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 189 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_1, 100
# 190 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_Switch1_2:
# 173 "data/maps/LatiosIsland/scripts.pory"
	release
	end

LatiosIsland_Switch1_5:
# 178 "data/maps/LatiosIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
# 179 "data/maps/LatiosIsland/scripts.pory"
	setflag FLAG_LATIOSISLE_PUZZLE1_SOLVED
	goto LatiosIsland_Switch1_4

LatiosIsland_Switch1_6:
# 177 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8002, 48
	goto_if_eq LatiosIsland_Switch1_5
	goto LatiosIsland_Switch1_4


LatiosIsland_Switch2::
# 193 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_2, 100
	goto_if_eq LatiosIsland_Switch2_2
# 197 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 51, METATILE_LatiIsles_LI_BarrierDown, 0
# 198 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 52, METATILE_LatiIsles_LI_BarrierDown, 0
# 199 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 18, 48, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 200 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 201 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 202 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 203 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_2, 100
# 204 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_Switch2_2:
# 194 "data/maps/LatiosIsland/scripts.pory"
	release
	end


LatiosIsland_Switch3::
# 207 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_3, 100
	goto_if_eq LatiosIsland_Switch3_2
# 211 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 33, METATILE_LatiIsles_LI_BarrierDown, 0
# 212 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 34, METATILE_LatiIsles_LI_BarrierDown, 0
# 213 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 20, 30, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 214 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 215 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 216 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 217 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_3, 100
# 218 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_Switch3_2:
# 208 "data/maps/LatiosIsland/scripts.pory"
	release
	end


LatiosIsland_Switch4::
# 221 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_4, 100
	goto_if_eq LatiosIsland_Switch4_2
# 225 "data/maps/LatiosIsland/scripts.pory"
	getobjectxy VAR_BOULDER_ID
# 226 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8001, 37
	goto_if_eq LatiosIsland_Switch4_6
LatiosIsland_Switch4_4:
# 230 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 29, METATILE_LatiIsles_LI_BarrierDown, 0
# 231 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 29, METATILE_LatiIsles_LI_BarrierDown, 0
# 232 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 28, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 233 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 234 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 235 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 236 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_4, 100
# 237 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_Switch4_2:
# 222 "data/maps/LatiosIsland/scripts.pory"
	release
	end

LatiosIsland_Switch4_5:
# 227 "data/maps/LatiosIsland/scripts.pory"
	copyobjectxytoperm VAR_BOULDER_ID
# 228 "data/maps/LatiosIsland/scripts.pory"
	setflag FLAG_LATIOSISLE_PUZZLE2_SOLVED
	goto LatiosIsland_Switch4_4

LatiosIsland_Switch4_6:
# 226 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8002, 28
	goto_if_eq LatiosIsland_Switch4_5
	goto LatiosIsland_Switch4_4


LatiosIsland_Switch5::
# 240 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_eq LatiosIsland_Switch5_2
# 244 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 26, METATILE_LatiIsles_LI_BarrierDown, 0
# 245 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 38, 26, METATILE_LatiIsles_LI_BarrierDown, 0
# 246 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 25, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 247 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 248 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 249 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 250 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_5, 100
# 251 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_Switch5_2:
# 241 "data/maps/LatiosIsland/scripts.pory"
	release
	end


LatiosIsland_Switch6::
# 254 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_eq LatiosIsland_Switch6_2
# 258 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 23, METATILE_LatiIsles_LI_BarrierDown, 0
# 259 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 23, METATILE_LatiIsles_LI_BarrierDown, 0
# 260 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 22, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 261 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 262 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 263 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 264 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_6, 100
# 265 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_Switch6_2:
# 255 "data/maps/LatiosIsland/scripts.pory"
	release
	end


SteppedOffofSwitch1_Latios::
# 269 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 9, 48, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 270 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 49, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 271 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 49, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 272 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 35, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 273 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 35, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 274 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 275 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 276 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_1, 0
# 277 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
	return


SteppedOffofSwitch2_Latios::
# 280 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 18, 48, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 281 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 51, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 282 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 52, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 283 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 284 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 285 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_2, 0
# 286 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
	return


SteppedOffofSwitch3_Latios::
# 289 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 20, 30, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 290 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 33, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 291 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 34, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 292 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 293 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 294 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_3, 0
# 295 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
	return


SteppedOffofSwitch4_Latios::
# 298 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 28, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 299 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 29, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 300 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 29, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 301 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 302 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 303 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_4, 0
# 304 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
	return


SteppedOffofSwitch5_Latios::
# 307 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 25, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 308 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 26, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 309 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 38, 26, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 310 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 311 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 312 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_5, 0
# 313 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
	return


SteppedOffofSwitch6_Latios::
# 316 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 22, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 317 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 23, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 318 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 23, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 319 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 320 "data/maps/LatiosIsland/scripts.pory"
	waitse
# 321 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_6, 0
# 322 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
	return


FollowerStayPutLatios::
# 326 "data/maps/LatiosIsland/scripts.pory"
	faceplayer
# 327 "data/maps/LatiosIsland/scripts.pory"
	bufferlivemonnickname 0
# 328 "data/maps/LatiosIsland/scripts.pory"
	getfollowerxy VAR_TEMP_7, VAR_TEMP_8
# 329 "data/maps/LatiosIsland/scripts.pory"
	goto_if_set FLAG_FOLLOWER_STAYS_PUT, FollowerStayPutLatios_2
# 343 "data/maps/LatiosIsland/scripts.pory"
	msgbox FollowerStayPut_Text, MSGBOX_YESNO
# 344 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FollowerStayPutLatios_8
FollowerStayPutLatios_1:
# 370 "data/maps/LatiosIsland/scripts.pory"
	release
	return

FollowerStayPutLatios_2:
# 330 "data/maps/LatiosIsland/scripts.pory"
	msgbox FollowerStayPut_Follow, MSGBOX_YESNO
# 331 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FollowerStayPutLatios_5
# 338 "data/maps/LatiosIsland/scripts.pory"
	msgbox FollowerStayPut_Text2
# 339 "data/maps/LatiosIsland/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
	goto FollowerStayPutLatios_1

FollowerStayPutLatios_5:
# 332 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 333 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 334 "data/maps/LatiosIsland/scripts.pory"
	setmetatile VAR_TEMP_7, VAR_TEMP_8, METATILE_LatiIsles_LatiasIsland_SwitchDown, FALSE
# 335 "data/maps/LatiosIsland/scripts.pory"
	msgbox FollowerStayPut_Follow2
	goto FollowerStayPutLatios_1

FollowerStayPutLatios_8:
# 346 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_7, 9
	goto_if_eq FollowerStayPutLatios_32
FollowerStayPutLatios_30:
# 349 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_7, 18
	goto_if_eq FollowerStayPutLatios_29
FollowerStayPutLatios_27:
# 352 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_7, 20
	goto_if_eq FollowerStayPutLatios_26
FollowerStayPutLatios_24:
# 355 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_7, 37
	goto_if_eq FollowerStayPutLatios_23
FollowerStayPutLatios_21:
# 358 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_7, 41
	goto_if_eq FollowerStayPutLatios_20
FollowerStayPutLatios_18:
# 361 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_7, 37
	goto_if_eq FollowerStayPutLatios_17
FollowerStayPutLatios_10:
# 364 "data/maps/LatiosIsland/scripts.pory"
	setflag FLAG_FOLLOWER_STAYS_PUT
# 365 "data/maps/LatiosIsland/scripts.pory"
	setmetatile VAR_TEMP_7, VAR_TEMP_8, METATILE_LatiIsles_LatiasIsland_SwitchDown, TRUE
# 366 "data/maps/LatiosIsland/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_SOUTH
# 367 "data/maps/LatiosIsland/scripts.pory"
	msgbox FollowerStayPut_Text2
	goto FollowerStayPutLatios_1

FollowerStayPutLatios_11:
# 347 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 1
	goto FollowerStayPutLatios_10

FollowerStayPutLatios_12:
# 350 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 2
	goto FollowerStayPutLatios_10

FollowerStayPutLatios_13:
# 353 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 3
	goto FollowerStayPutLatios_10

FollowerStayPutLatios_14:
# 356 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 4
	goto FollowerStayPutLatios_10

FollowerStayPutLatios_15:
# 359 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 5
	goto FollowerStayPutLatios_10

FollowerStayPutLatios_16:
# 362 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 6
	goto FollowerStayPutLatios_10

FollowerStayPutLatios_17:
# 361 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_8, 22
	goto_if_eq FollowerStayPutLatios_16
	goto FollowerStayPutLatios_10

FollowerStayPutLatios_20:
# 358 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_8, 25
	goto_if_eq FollowerStayPutLatios_15
	goto FollowerStayPutLatios_18

FollowerStayPutLatios_23:
# 355 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_8, 28
	goto_if_eq FollowerStayPutLatios_14
	goto FollowerStayPutLatios_21

FollowerStayPutLatios_26:
# 352 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_8, 30
	goto_if_eq FollowerStayPutLatios_13
	goto FollowerStayPutLatios_24

FollowerStayPutLatios_29:
# 349 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_8, 48
	goto_if_eq FollowerStayPutLatios_12
	goto FollowerStayPutLatios_27

FollowerStayPutLatios_32:
# 346 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_TEMP_8, 48
	goto_if_eq FollowerStayPutLatios_11
	goto FollowerStayPutLatios_30


LatiosIsland_CallBackMon1::
# 374 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 1
	goto_if_eq LatiosIsland_CallBackMon1_2
LatiosIsland_CallBackMon1_1:
# 399 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_CallBackMon1_2:
# 375 "data/maps/LatiosIsland/scripts.pory"
	playse SE_SELECT
# 376 "data/maps/LatiosIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 377 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiosIsland_CallBackMon1_4
	goto LatiosIsland_CallBackMon1_1

LatiosIsland_CallBackMon1_4:
# 378 "data/maps/LatiosIsland/scripts.pory"
	getobjectxy LOCALID_LATIOSISLAND_ROCK_1
# 379 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_eq LatiosIsland_CallBackMon1_8
# 379 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8001, 12
	goto_if_eq LatiosIsland_CallBackMon1_8
LatiosIsland_CallBackMon1_6:
# 384 "data/maps/LatiosIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiosIsland_CallBackMon1_Movement_0
# 385 "data/maps/LatiosIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 386 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 387 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 388 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_1, 0
# 389 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 49, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 390 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 49, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 391 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 11, 35, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 392 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 12, 35, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 393 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 9, 48, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 394 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 395 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 396 "data/maps/LatiosIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiosIsland_CallBackMon1_1

LatiosIsland_CallBackMon1_7:
# 380 "data/maps/LatiosIsland/scripts.pory"
	msgbox ShouldMoveRockFirst
# 381 "data/maps/LatiosIsland/scripts.pory"
	release
	end

LatiosIsland_CallBackMon1_8:
# 379 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8002, 49
	goto_if_eq LatiosIsland_CallBackMon1_7
	goto LatiosIsland_CallBackMon1_6


LatiosIsland_CallBackMon2::
# 408 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 2
	goto_if_eq LatiosIsland_CallBackMon2_2
LatiosIsland_CallBackMon2_1:
# 431 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_CallBackMon2_2:
# 409 "data/maps/LatiosIsland/scripts.pory"
	playse SE_SELECT
# 410 "data/maps/LatiosIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 411 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiosIsland_CallBackMon2_4
	goto LatiosIsland_CallBackMon2_1

LatiosIsland_CallBackMon2_4:
# 412 "data/maps/LatiosIsland/scripts.pory"
	getobjectxy LOCALID_LATIOSISLAND_ROCK_1
# 413 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8001, 19
	goto_if_eq LatiosIsland_CallBackMon2_7
# 418 "data/maps/LatiosIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiosIsland_CallBackMon1_Movement_0
# 419 "data/maps/LatiosIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 420 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 421 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 422 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_2, 0
# 423 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 51, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 424 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 52, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 425 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 18, 48, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 426 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 427 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 428 "data/maps/LatiosIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiosIsland_CallBackMon2_1

LatiosIsland_CallBackMon2_7:
# 414 "data/maps/LatiosIsland/scripts.pory"
	msgbox ShouldMoveRockFirst
# 415 "data/maps/LatiosIsland/scripts.pory"
	release
	end


LatiosIsland_CallBackMon3::
# 435 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 3
	goto_if_eq LatiosIsland_CallBackMon3_2
LatiosIsland_CallBackMon3_1:
# 452 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_CallBackMon3_2:
# 436 "data/maps/LatiosIsland/scripts.pory"
	playse SE_SELECT
# 437 "data/maps/LatiosIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 438 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiosIsland_CallBackMon3_4
	goto LatiosIsland_CallBackMon3_1

LatiosIsland_CallBackMon3_4:
# 439 "data/maps/LatiosIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiosIsland_CallBackMon1_Movement_0
# 440 "data/maps/LatiosIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 441 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 442 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 443 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_3, 0
# 444 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 33, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 445 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 19, 34, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 446 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 20, 30, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 447 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 448 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 449 "data/maps/LatiosIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiosIsland_CallBackMon3_1


LatiosIsland_CallBackMon4::
# 456 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 4
	goto_if_eq LatiosIsland_CallBackMon4_2
LatiosIsland_CallBackMon4_1:
# 473 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_CallBackMon4_2:
# 457 "data/maps/LatiosIsland/scripts.pory"
	playse SE_SELECT
# 458 "data/maps/LatiosIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 459 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiosIsland_CallBackMon4_4
	goto LatiosIsland_CallBackMon4_1

LatiosIsland_CallBackMon4_4:
# 460 "data/maps/LatiosIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiosIsland_CallBackMon1_Movement_0
# 461 "data/maps/LatiosIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 462 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 463 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 464 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_4, 0
# 465 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 29, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 466 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 29, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 467 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 28, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 468 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 469 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 470 "data/maps/LatiosIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiosIsland_CallBackMon4_1


LatiosIsland_CallBackMon5::
# 477 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 5
	goto_if_eq LatiosIsland_CallBackMon5_2
LatiosIsland_CallBackMon5_1:
# 500 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_CallBackMon5_2:
# 478 "data/maps/LatiosIsland/scripts.pory"
	playse SE_SELECT
# 479 "data/maps/LatiosIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 480 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiosIsland_CallBackMon5_4
	goto LatiosIsland_CallBackMon5_1

LatiosIsland_CallBackMon5_4:
# 481 "data/maps/LatiosIsland/scripts.pory"
	getobjectxy LOCALID_LATIOSISLAND_ROCK_1
# 482 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8001, 37
	goto_if_eq LatiosIsland_CallBackMon5_8
# 482 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8001, 38
	goto_if_eq LatiosIsland_CallBackMon5_8
LatiosIsland_CallBackMon5_6:
# 487 "data/maps/LatiosIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiosIsland_CallBackMon1_Movement_0
# 488 "data/maps/LatiosIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 489 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 490 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 491 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_5, 0
# 492 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 26, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 493 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 38, 26, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 494 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 25, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 495 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 496 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 497 "data/maps/LatiosIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiosIsland_CallBackMon5_1

LatiosIsland_CallBackMon5_7:
# 483 "data/maps/LatiosIsland/scripts.pory"
	msgbox ShouldMoveRockFirst
# 484 "data/maps/LatiosIsland/scripts.pory"
	release
	end

LatiosIsland_CallBackMon5_8:
# 482 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x8002, 26
	goto_if_eq LatiosIsland_CallBackMon5_7
	goto LatiosIsland_CallBackMon5_6


LatiosIsland_CallBackMon6::
# 504 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_MON_ON_SWITCH_X, 6
	goto_if_eq LatiosIsland_CallBackMon6_2
LatiosIsland_CallBackMon6_1:
# 521 "data/maps/LatiosIsland/scripts.pory"
	release
	return

LatiosIsland_CallBackMon6_2:
# 505 "data/maps/LatiosIsland/scripts.pory"
	playse SE_SELECT
# 506 "data/maps/LatiosIsland/scripts.pory"
	msgbox LatiasIsland_CallBackMon1_Text, MSGBOX_YESNO
# 507 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LatiosIsland_CallBackMon6_4
	goto LatiosIsland_CallBackMon6_1

LatiosIsland_CallBackMon6_4:
# 508 "data/maps/LatiosIsland/scripts.pory"
	waitmove OBJ_EVENT_ID_FOLLOWER, LatiosIsland_CallBackMon1_Movement_0
# 509 "data/maps/LatiosIsland/scripts.pory"
	callnative RemoveFollowingPokemon
# 510 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_FOLLOWER_STAYS_PUT
# 511 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_MON_ON_SWITCH_X, 0
# 512 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_6, 0
# 513 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 40, 23, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 514 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 41, 23, METATILE_LatiIsles_LI_BarrierUp, TRUE
# 515 "data/maps/LatiosIsland/scripts.pory"
	setmetatile 37, 22, METATILE_LatiIsles_LatiasIsland_SwitchUp, FALSE
# 516 "data/maps/LatiosIsland/scripts.pory"
	playse SE_M_STRENGTH
# 517 "data/maps/LatiosIsland/scripts.pory"
	special DrawWholeMapView
# 518 "data/maps/LatiosIsland/scripts.pory"
	callnative UpdateFollowingPokemon
	goto LatiosIsland_CallBackMon6_1


LatiosIsland_ReturnToRoute23::
# 530 "data/maps/LatiosIsland/scripts.pory"
	msgbox LatiosIsland_ReturnToRoute23_Text, MSGBOX_YESNO
# 531 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LatiosIsland_ReturnToRoute23_2
# 535 "data/maps/LatiosIsland/scripts.pory"
	closemessage
# 536 "data/maps/LatiosIsland/scripts.pory"
	checkpartymon SPECIES_LATIOS, FALSE
# 537 "data/maps/LatiosIsland/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8000
# 538 "data/maps/LatiosIsland/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq LatiosIsland_ReturnToRoute23_5
# 543 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_A, LOCALID_LATIOSISLAND_LATIOS
# 544 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_B, LOCALID_LATIOSISLAND_LATIOS_HEAD
LatiosIsland_ReturnToRoute23_4:
# 546 "data/maps/LatiosIsland/scripts.pory"
	setflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 547 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_FACING, DIR_SOUTH
# 548 "data/maps/LatiosIsland/scripts.pory"
	waitmove LOCALID_LATIOSISLAND_LATIBALL, LatiosIsland_ReturnToRoute23_Movement_0
# 549 "data/maps/LatiosIsland/scripts.pory"
	showobjectat VAR_TEMP_A, MAP_LATIOS_ISLAND
# 550 "data/maps/LatiosIsland/scripts.pory"
	showobjectat VAR_TEMP_B, MAP_LATIOS_ISLAND
# 551 "data/maps/LatiosIsland/scripts.pory"
	removeobject LOCALID_LATIOSISLAND_LATIBALL
# 552 "data/maps/LatiosIsland/scripts.pory"
	delay 16
# 553 "data/maps/LatiosIsland/scripts.pory"
	addobject LOCALID_FAKE_PLAYER
# 554 "data/maps/LatiosIsland/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER, MAP_LATIOS_ISLAND, 0
# 555 "data/maps/LatiosIsland/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LATIOS_ISLAND
# 556 "data/maps/LatiosIsland/scripts.pory"
	setobjectsubpriority VAR_TEMP_B, MAP_LATIOS_ISLAND, 0
# 557 "data/maps/LatiosIsland/scripts.pory"
	waitmove LOCALID_FAKE_PLAYER, LatiosIsland_ReturnToRoute23_Movement_1
# 558 "data/maps/LatiosIsland/scripts.pory"
	call SetSittingPlayerModel
# 559 "data/maps/LatiosIsland/scripts.pory"
	removeobject LOCALID_FAKE_PLAYER
# 560 "data/maps/LatiosIsland/scripts.pory"
	setobjectxyperm LOCALID_FAKE_PLAYER, 17, 74
# 561 "data/maps/LatiosIsland/scripts.pory"
	addobject LOCALID_FAKE_PLAYER
# 562 "data/maps/LatiosIsland/scripts.pory"
	setobjectsubpriority LOCALID_FAKE_PLAYER, MAP_LATIOS_ISLAND, 1
# 563 "data/maps/LatiosIsland/scripts.pory"
	delay 16
# 564 "data/maps/LatiosIsland/scripts.pory"
	applymovement VAR_TEMP_A, PlayerAndLatiasLeave
# 565 "data/maps/LatiosIsland/scripts.pory"
	applymovement VAR_TEMP_B, PlayerAndLatiasLeave
# 566 "data/maps/LatiosIsland/scripts.pory"
	applymovement LOCALID_FAKE_PLAYER, LatiosIsland_ReturnToRoute23_Movement_2
# 567 "data/maps/LatiosIsland/scripts.pory"
	waitmovement 0
# 568 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_STOP_GROUND_EFFECTS
# 569 "data/maps/LatiosIsland/scripts.pory"
	clearflag FLAG_OVERRIDE_FOLLOWER_DIRECTION
# 570 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_0x8004, 4
# 571 "data/maps/LatiosIsland/scripts.pory"
	callnative LatisWarp
# 572 "data/maps/LatiosIsland/scripts.pory"
	special LatiRide
# 573 "data/maps/LatiosIsland/scripts.pory"
	waitstate
	return

LatiosIsland_ReturnToRoute23_2:
# 532 "data/maps/LatiosIsland/scripts.pory"
	release
	end

LatiosIsland_ReturnToRoute23_5:
# 539 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_A, LOCALID_LATIOSISLAND_LATIOS_SHINY
# 540 "data/maps/LatiosIsland/scripts.pory"
	setvar VAR_TEMP_B, LOCALID_LATIOSISLAND_LATIOS_SHINY_HEAD
	goto LatiosIsland_ReturnToRoute23_4


# 384 "data/maps/LatiosIsland/scripts.pory"
LatiosIsland_CallBackMon1_Movement_0:
# 384 "data/maps/LatiosIsland/scripts.pory"
	enter_pokeball
# 384 "data/maps/LatiosIsland/scripts.pory"
	set_invisible
	step_end

# 548 "data/maps/LatiosIsland/scripts.pory"
LatiosIsland_ReturnToRoute23_Movement_0:
# 548 "data/maps/LatiosIsland/scripts.pory"
	set_visible
# 548 "data/maps/LatiosIsland/scripts.pory"
	delay_1
# 548 "data/maps/LatiosIsland/scripts.pory"
	delay_1
# 548 "data/maps/LatiosIsland/scripts.pory"
	delay_1
# 548 "data/maps/LatiosIsland/scripts.pory"
	lati_ball
	step_end

# 557 "data/maps/LatiosIsland/scripts.pory"
LatiosIsland_ReturnToRoute23_Movement_1:
# 557 "data/maps/LatiosIsland/scripts.pory"
	jump_2_down
# 557 "data/maps/LatiosIsland/scripts.pory"
	lock_anim
	step_end

# 566 "data/maps/LatiosIsland/scripts.pory"
LatiosIsland_ReturnToRoute23_Movement_2:
# 566 "data/maps/LatiosIsland/scripts.pory"
	lock_anim
# 566 "data/maps/LatiosIsland/scripts.pory"
	walk_slow_down
# 566 "data/maps/LatiosIsland/scripts.pory"
	walk_down
# 566 "data/maps/LatiosIsland/scripts.pory"
	walk_down
# 566 "data/maps/LatiosIsland/scripts.pory"
	walk_faster_down
# 566 "data/maps/LatiosIsland/scripts.pory"
	walk_faster_down
# 566 "data/maps/LatiosIsland/scripts.pory"
	walk_faster_down
# 566 "data/maps/LatiosIsland/scripts.pory"
	walk_faster_down
	step_end

ShouldMoveRockFirst::
# 402 "data/maps/LatiosIsland/scripts.pory"
	.string "Should probably move the boulder\n"
	.string "first before moving the Pokémon…$"

LatiosIsland_ReturnToRoute23_Text::
# 524 "data/maps/LatiosIsland/scripts.pory"
	.string "Send out Latios and return\n"
	.string "back to Route 23?$"
