DrisledgeTown_MapScripts::
# 2 "data/maps/DrisledgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DrisledgeTownOnTransition
# 3 "data/maps/DrisledgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DrisledgeTownOnLoad
	.byte 0


DrisledgeTownOnLoad::
# 7 "data/maps/DrisledgeTown/scripts.pory"
	gettime
# 8 "data/maps/DrisledgeTown/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 9 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeGym
	return


DrisledgeTownOnTransition::
# 16 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_TEMP_4
# 17 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_VISITED_DRISLEDGE
# 18 "data/maps/DrisledgeTown/scripts.pory"
	gettime
# 19 "data/maps/DrisledgeTown/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 20 "data/maps/DrisledgeTown/scripts.pory"
	special SetDrisledgeWeather
# 21 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeNPCs
# 22 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeGym
# 23 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeTownOnTransition_1
	return

DrisledgeTownOnTransition_1:
# 24 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeTownOnTransition_3
# 24 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeTownOnTransition_3
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisledgeTownOnTransition_3
# 28 "data/maps/DrisledgeTown/scripts.pory"
	clearflag FLAG_TEMP_4
# 29 "data/maps/DrisledgeTown/scripts.pory"
	setmaplayoutindex LAYOUT_DRISLEDGE_TOWN_BROKEN
	return

DrisledgeTownOnTransition_3:
# 25 "data/maps/DrisledgeTown/scripts.pory"
	setmaplayoutindex LAYOUT_DRISLEDGE_TOWN_BROKEN2
	return


SetDrisledgeNPCs::
# 35 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_TEMP_2
# 36 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ge SetDrisledgeNPCs_2
SetDrisledgeNPCs_1:
# 39 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetDrisledgeNPCs_6
SetDrisledgeNPCs_4:
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SetDrisledgeNPCs_12
SetDrisledgeNPCs_11:
	return

SetDrisledgeNPCs_2:
# 37 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto SetDrisledgeNPCs_1

SetDrisledgeNPCs_5:
# 40 "data/maps/DrisledgeTown/scripts.pory"
	clearflag FLAG_TEMP_2
	goto SetDrisledgeNPCs_4

SetDrisledgeNPCs_6:
# 39 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le SetDrisledgeNPCs_5
# 39 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge SetDrisledgeNPCs_5
	goto SetDrisledgeNPCs_4

SetDrisledgeNPCs_12:
# 43 "data/maps/DrisledgeTown/scripts.pory"
	clearflag FLAG_TEMP_2
	goto SetDrisledgeNPCs_11


SetUpBrokenDrisledge::
# 49 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgeTrees
# 50 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgeBushes
# 51 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgePuddles
# 52 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgeHouses
	return


SetUpGhostTownDrisledge::
	return


SetUpDrisledgeTrees::
# 59 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 23, 22, 0x204, FALSE
# 60 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 22, 14, 0x204, FALSE
# 61 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 24, 11, 0x204, FALSE
# 62 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 6, 0x254, FALSE
# 63 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 6, 0x254, FALSE
# 64 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 6, 0x254, FALSE
# 65 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 7, 0x254, FALSE
# 66 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 7, 0x254, FALSE
# 67 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 7, 0x254, FALSE
# 68 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 8, 0x254, FALSE
# 69 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 8, 0x254, FALSE
# 70 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 8, 0x254, FALSE
# 71 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 8, 0x254, FALSE
# 72 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 9, 0x254, FALSE
# 73 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 9, 0x254, FALSE
	return


SetUpDrisledgeBushes::
# 78 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 1, 0x205, FALSE
# 79 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 4, 0x205, FALSE
# 80 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 18, 4, 0x205, FALSE
# 81 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 5, 0x205, FALSE
# 82 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 28, 6, 0x205, FALSE
# 83 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 7, 0x205, FALSE
# 84 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 8, 0x205, FALSE
# 85 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 26, 9, 0x205, FALSE
# 86 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 27, 9, 0x205, FALSE
# 87 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 27, 10, 0x205, FALSE
# 88 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 25, 11, 0x205, FALSE
# 89 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 25, 12, 0x205, FALSE
# 90 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 22, 12, 0x205, FALSE
# 91 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 16, 12, 0x205, FALSE
# 92 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 17, 12, 0x205, FALSE
# 93 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 12, 0x205, FALSE
# 94 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 13, 0x205, FALSE
# 95 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 14, 0x205, FALSE
# 96 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 15, 0x205, FALSE
# 97 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 14, 0x205, FALSE
# 98 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 15, 0x205, FALSE
# 99 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 16, 0x205, FALSE
# 100 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 21, 15, 0x205, FALSE
# 101 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 24, 14, 0x205, FALSE
# 102 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 5, 21, 0x205, FALSE
# 103 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 5, 22, 0x205, FALSE
# 104 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 6, 22, 0x205, FALSE
# 105 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 6, 24, 0x205, FALSE
# 106 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 23, 0x205, FALSE
# 107 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 22, 0x205, FALSE
# 108 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 22, 0x205, FALSE
# 109 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 24, 0x205, FALSE
# 110 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 21, 23, 0x205, FALSE
# 111 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 23, 24, 0x205, FALSE
	return


SetUpDrisledgePuddles::
# 115 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 13, 5, 0x254, FALSE
# 116 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 5, 0x254, FALSE
# 117 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 6, 0x254, FALSE
# 118 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 13, 6, 0x254, FALSE
# 119 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 6, 0x254, FALSE
# 120 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 7, 0x254, FALSE
# 121 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 13, 7, 0x254, FALSE
# 122 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 7, 0x254, FALSE
# 123 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 9, 0x254, FALSE
# 124 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 9, 0x254, FALSE
# 125 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 9, 0x254, FALSE
# 126 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 10, 0x254, FALSE
# 127 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 10, 0x254, FALSE
# 128 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 10, 0x254, FALSE
# 129 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 10, 0x254, FALSE
# 130 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 11, 0x254, FALSE
# 131 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 11, 0x254, FALSE
# 132 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 11, 0x254, FALSE
# 133 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 11, 0x254, FALSE
	return


SetUpDrisledgeHouses::
# 137 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 21, 0x2E8, FALSE
# 138 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 21, 0x2E9, FALSE
# 139 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 21, 0x2EA, FALSE
# 140 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 21, 0x2EB, FALSE
# 142 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 22, 0x2F4, TRUE
# 143 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 22, 0x2F5, TRUE
# 144 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 22, 0x2F2, TRUE
# 145 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 22, 0x2F3, TRUE
# 147 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 23, 0x2F8, TRUE
# 148 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 23, 0x2FD, TRUE
# 149 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 23, 0x2FA, TRUE
# 150 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 23, 0x2FB, TRUE
# 152 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 24, 0x300, TRUE
# 153 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 24, 0x302, TRUE
# 154 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 24, 0x303, TRUE
# 156 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 21 -8, 0x2E8, FALSE
# 157 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8 + 9, 21 -8, 0x2E9, FALSE
# 158 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 21 -8, 0x2EA, FALSE
# 159 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 21 -8, 0x2EB, FALSE
# 161 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 22 -8, 0x2F4, TRUE
# 162 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8 + 9, 22 -8, 0x2F5, TRUE
# 163 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 22 -8, 0x2F2, TRUE
# 164 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 22 -8, 0x2F3, TRUE
# 166 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 23 -8, 0x2F8, TRUE
# 167 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8 + 9, 23 -8, 0x2FD, TRUE
# 168 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 23 -8, 0x2FA, TRUE
# 169 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 23 -8, 0x2FB, TRUE
# 171 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 24 -8, 0x300, TRUE
# 172 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 24 -8, 0x302, TRUE
# 173 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 24 -8, 0x303, TRUE
	return


SetDrisledgeGym::
# 178 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetDrisledgeGym_2
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SetDrisledgeGym_2
# 182 "data/maps/DrisledgeTown/scripts.pory"
	setdynamicwarp MAP_DRISLEDGE_GYM, 5, 51
SetDrisledgeGym_1:
	return

SetDrisledgeGym_2:
# 179 "data/maps/DrisledgeTown/scripts.pory"
	setdynamicwarp MAP_DRISLEDGE_GYM_HOUSE, 4, 8
	goto SetDrisledgeGym_1


Drisledge_Sign1::
# 188 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Sign1_Text, MSGBOX_SIGN
	return


Drisledge_Sign2::
# 196 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Sign2_Text, MSGBOX_SIGN
	return


DrisledgeMart_OldMan::
# 203 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 204 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeMart_OldMan_Text
# 205 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
# 206 "data/maps/DrisledgeTown/scripts.pory"
	release
	return


Drisledge_LittleGirl::
# 215 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_LittleGirl_Text, MSGBOX_NPC
# 216 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge Drisledge_LittleGirl_2
# 219 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 1
	goto_if_ne Drisledge_LittleGirl_4
# 220 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 3
	goto_if_ne Drisledge_LittleGirl_4
# 221 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 5
	goto_if_ne Drisledge_LittleGirl_4
# 222 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne Drisledge_LittleGirl_4
	return

Drisledge_LittleGirl_2:
	end

Drisledge_LittleGirl_4:
# 224 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_DRISLEDGE_TOWN_STATE, 1
	return


Drisledge_LittleGirl2::
# 232 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_LittleGirl_Text2, MSGBOX_NPC
# 233 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge Drisledge_LittleGirl2_2
# 236 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 2
	goto_if_ne Drisledge_LittleGirl2_4
# 237 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 3
	goto_if_ne Drisledge_LittleGirl2_4
# 238 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 6
	goto_if_ne Drisledge_LittleGirl2_4
# 239 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne Drisledge_LittleGirl2_4
	return

Drisledge_LittleGirl2_2:
	end

Drisledge_LittleGirl2_4:
# 241 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_DRISLEDGE_TOWN_STATE, 2
	return


SetDrisledgeOldPersonVar::
# 248 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge SetDrisledgeOldPersonVar_2
# 252 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 4
	goto_if_ne SetDrisledgeOldPersonVar_4
# 253 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 5
	goto_if_ne SetDrisledgeOldPersonVar_4
# 254 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 6
	goto_if_ne SetDrisledgeOldPersonVar_4
# 255 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne SetDrisledgeOldPersonVar_4
	return

SetDrisledgeOldPersonVar_2:
# 249 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

SetDrisledgeOldPersonVar_4:
# 257 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_DRISLEDGE_TOWN_STATE, 4
	return


DrisledgeTown_House2_ExpertM::
# 262 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 263 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeTown_House2_ExpertM_Text
# 264 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
# 265 "data/maps/DrisledgeTown/scripts.pory"
	release
	return


DrisledgeTown_House2_ExpertF::
# 268 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeTown_House2_ExpertF_Text, MSGBOX_NPC
# 269 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
	return


Drisledge_House1_OldWoman::
# 283 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_House1_OldWoman_Text, MSGBOX_NPC
# 284 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
	return


DrisledgeDoll1::
# 295 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 296 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll2::
# 299 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SMOOCHUM
# 300 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll3::
# 303 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GULPIN
# 304 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll4::
# 307 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLEFAIRY
# 308 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll5::
# 311 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DUSKULL
# 312 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll6::
# 315 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JIGGLYPUFF
# 316 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll7::
# 319 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AZURILL
# 320 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll8::
# 323 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WYNAUT
# 324 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll9::
# 327 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 328 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll10::
# 331 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KECLEON
# 332 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll11::
# 335 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LOTAD
# 336 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll12::
# 339 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MEOWTH
# 340 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll13::
# 343 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WOOPER
# 344 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll14::
# 347 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
# 348 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDollMain::
# 351 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeDollMain_Text, MSGBOX_SIGN
	return


Drisledge_Pokecenter_Boy3::
# 358 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Pokecenter_Boy3_Text, MSGBOX_NPC
	return


Drisledge_Pokecenter_Man1::
# 361 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Pokecenter_Man1_Text, MSGBOX_NPC
	return


Drisledge_Pokecenter_Girl2::
# 364 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Pokecenter_Girl2_Text, MSGBOX_NPC
	return


DrisledgeGymToggle::
# 383 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_eq DrisledgeGymToggle_1
# 388 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
# 389 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGymToggle_Text_0, MSGBOX_SIGN
	return

DrisledgeGymToggle_1:
# 384 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 1
# 385 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGymToggle_Text_0, MSGBOX_SIGN
	return


Drisledge_BerryGastly::
# 394 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 395 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 396 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 397 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 398 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
# 399 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 400 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM2, Drisledge_BerryGastly_2
Drisledge_BerryGastly_1:
# 404 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

Drisledge_BerryGastly_2:
# 401 "data/maps/DrisledgeTown/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 402 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_DRISLEDGE_ITEM2
	goto Drisledge_BerryGastly_1


Drisledge_Haunter::
# 408 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 409 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 410 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 411 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_HAUNTER, CRY_MODE_NORMAL
# 412 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeHaunter_Text, MSGBOX_DEFAULT
# 413 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 414 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


DrisledgeBanette::
# 422 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 423 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 424 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 425 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
# 426 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeBanette_Text, MSGBOX_DEFAULT
# 427 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 428 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


DrisledgeBanette1::
# 432 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 433 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 434 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 435 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
# 436 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeBanette_Text, MSGBOX_DEFAULT
# 437 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 438 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM3, DrisledgeBanette1_2
DrisledgeBanette1_1:
# 442 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

DrisledgeBanette1_2:
# 439 "data/maps/DrisledgeTown/scripts.pory"
	giveitem ITEM_COLBUR_BERRY
# 440 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_DRISLEDGE_ITEM3
	goto DrisledgeBanette1_1


Drisledge_Acerola::
# 450 "data/maps/DrisledgeTown/scripts.pory"
	checkplayergender
# 451 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Drisledge_Acerola_2
# 455 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_1
Drisledge_Acerola_1:
# 458 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_set FLAG_ACEROLA_ITEM, Drisledge_Acerola_6
# 468 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Drisledge_Acerola_9
# 473 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_unset FLAG_ACEROLA_ITEM, Drisledge_Acerola_15
	return

Drisledge_Acerola_2:
# 452 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_0
	goto Drisledge_Acerola_1

Drisledge_Acerola_6:
# 459 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, Drisledge_Acerola_12
# 463 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaCheckWithScientist, MSGBOX_NPC
Drisledge_Acerola_11:
	end

Drisledge_Acerola_9:
# 469 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaLetsDance, MSGBOX_NPC
	end

Drisledge_Acerola_12:
# 460 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaWithFriends, MSGBOX_NPC
	goto Drisledge_Acerola_11

Drisledge_Acerola_15:
# 474 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaYoureBack, MSGBOX_NPC
# 475 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_3, 1
	end


AcerolaDanceTriggerCorner::
# 486 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_TEMP_4, 1
# 487 "data/maps/DrisledgeTown/scripts.pory"
	release
	return


AcerolaDanceTriggerWest::
# 490 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 1
# 491 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerNorth::
# 494 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 2
# 495 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerEast::
# 498 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 3
# 499 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerSouth::
# 502 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 4
# 503 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerMain::
# 506 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_TEMP_4, 1
# 507 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_4, 50
	goto_if_lt AcerolaDanceTriggerMain_2
	checkitemspace ITEM_TM_CAPTIVATE
# 0 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AcerolaDanceTriggerMain_5
# 515 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 516 "data/maps/DrisledgeTown/scripts.pory"
	safefollow
# 517 "data/maps/DrisledgeTown/scripts.pory"
	applymovement 6, FacePlayer
# 518 "data/maps/DrisledgeTown/scripts.pory"
	waitmovement 0
# 519 "data/maps/DrisledgeTown/scripts.pory"
	playse SE_PIN
# 520 "data/maps/DrisledgeTown/scripts.pory"
	applymovement 6, ExclamationMark
# 521 "data/maps/DrisledgeTown/scripts.pory"
	waitmovement 0
# 522 "data/maps/DrisledgeTown/scripts.pory"
	delay 48
# 523 "data/maps/DrisledgeTown/scripts.pory"
	switch VAR_TEMP_5
# 524 "data/maps/DrisledgeTown/scripts.pory"
	case 1, AcerolaDanceTriggerMain_9
# 526 "data/maps/DrisledgeTown/scripts.pory"
	case 2, AcerolaDanceTriggerMain_10
# 528 "data/maps/DrisledgeTown/scripts.pory"
	case 3, AcerolaDanceTriggerMain_11
# 530 "data/maps/DrisledgeTown/scripts.pory"
	case 4, AcerolaDanceTriggerMain_12
AcerolaDanceTriggerMain_7:
# 533 "data/maps/DrisledgeTown/scripts.pory"
	delay 15
# 534 "data/maps/DrisledgeTown/scripts.pory"
	checkplayergender
# 535 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq AcerolaDanceTriggerMain_14
# 539 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_1
AcerolaDanceTriggerMain_13:
# 541 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaGoodDancer
# 542 "data/maps/DrisledgeTown/scripts.pory"
	giveitem ITEM_TM_CAPTIVATE
# 543 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_ACEROLA_ITEM
# 544 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_3, 0
# 545 "data/maps/DrisledgeTown/scripts.pory"
	release
	return

AcerolaDanceTriggerMain_2:
# 508 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

AcerolaDanceTriggerMain_5:
# 512 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

AcerolaDanceTriggerMain_9:
# 525 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_10:
# 527 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_11:
# 529 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_12:
# 531 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_14:
# 536 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_0
	goto AcerolaDanceTriggerMain_13


Drisledge_Gengar::
# 575 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 576 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 577 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 578 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
# 579 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGengar_Text, MSGBOX_DEFAULT
# 580 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 581 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


Drisledge_Mismagius::
# 588 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 589 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 590 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 591 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_NORMAL
# 592 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
# 593 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 594 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


Drisledge_Mimikyu::
# 599 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 600 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 601 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 602 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
# 603 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeMimikyu_Text, MSGBOX_DEFAULT
# 604 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 605 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


Drisledge_Hiker::
# 614 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Hiker_Text, MSGBOX_NPC
	return


DrisledgeGymToggle_Text_0:
# 385 "data/maps/DrisledgeTown/scripts.pory"
	.string "Town state changed.$"

Drisledge_Acerola_Text_0:
# 452 "data/maps/DrisledgeTown/scripts.pory"
	.string "mister$"

Drisledge_Acerola_Text_1:
# 455 "data/maps/DrisledgeTown/scripts.pory"
	.string "miss$"

Drisledge_Sign1_Text::
# 190 "data/maps/DrisledgeTown/scripts.pory"
	.string "DRISLEDGE TOWN\n"
	.string "“The happiest town in the world.”$"

Drisledge_Sign2_Text::
# 198 "data/maps/DrisledgeTown/scripts.pory"
	.string "Drisledge Town Pokémon Gym$"

DrisledgeMart_OldMan_Text::
# 208 "data/maps/DrisledgeTown/scripts.pory"
	.string "I feel like the products here are\n"
	.string "constantly changing locations.\l"
	.string "I can never find what I want.$"

Drisledge_LittleGirl_Text::
# 227 "data/maps/DrisledgeTown/scripts.pory"
	.string "The adults hate the rain so there's\n"
	.string "nobody to ruin our fun out here!$"

Drisledge_LittleGirl_Text2::
# 244 "data/maps/DrisledgeTown/scripts.pory"
	.string "Whee!$"

DrisledgeTown_House2_ExpertM_Text::
# 271 "data/maps/DrisledgeTown/scripts.pory"
	.string "Another rainy day…\n"
	.string "Splendid…$"

DrisledgeTown_House2_ExpertF_Text::
# 275 "data/maps/DrisledgeTown/scripts.pory"
	.string "There's not much to do in a town\n"
	.string "where it never stops raining.\p"
	.string "At least the sound of raindrops\n"
	.string "hitting the roof is relaxing, I guess…$"

Drisledge_House1_OldWoman_Text::
# 286 "data/maps/DrisledgeTown/scripts.pory"
	.string "Do you like my dolls?\p"
	.string "Sometimes it can be a bit noisy when\n"
	.string "everybody starts talking at the same\l"
	.string "time, but other than that, they tend to\l"
	.string "be very well-behaved.$"

DrisledgeDollMain_Text::
# 353 "data/maps/DrisledgeTown/scripts.pory"
	.string "It's a regular {STR_VAR_1} doll.$"

Drisledge_Pokecenter_Boy3_Text::
# 366 "data/maps/DrisledgeTown/scripts.pory"
	.string "Is it just me or are the locals\n"
	.string "a bit weird?$"

Drisledge_Pokecenter_Man1_Text::
# 370 "data/maps/DrisledgeTown/scripts.pory"
	.string "I was afraid we might get drenched\n"
	.string "on our way here.\p"
	.string "Thankfully my Pokémon was holding\n"
	.string "a Utility Umbrella and was able to\l"
	.string "keep us dry through the rain.$"

Drisledge_Pokecenter_Girl2_Text::
# 377 "data/maps/DrisledgeTown/scripts.pory"
	.string "I hate the rain.\n"
	.string "I hope it stops soon.$"

DrisledgeHaunter_Text::
# 417 "data/maps/DrisledgeTown/scripts.pory"
	.string "Haaan!$"

DrisledgeBanette_Text::
# 445 "data/maps/DrisledgeTown/scripts.pory"
	.string "Baaan!$"

AcerolaWithFriends::
# 479 "data/maps/DrisledgeTown/scripts.pory"
	.string "If you're not busy, you\n"
	.string "could stay here forever!\p"
	.string "We can keep dancing and having\n"
	.string "fun with friends!$"

AcerolaLetsDance::
# 547 "data/maps/DrisledgeTown/scripts.pory"
	.string "Yay! Now we've got a real\n"
	.string "dance party going!$"

AcerolaGoodDancer::
# 551 "data/maps/DrisledgeTown/scripts.pory"
	.string "Wow, {STR_VAR_1}, you're\n"
	.string "a really good dancer!\p"
	.string "One of my friends was so impressed\n"
	.string "that they wanted you to have this.$"

AcerolaYoureBack::
# 558 "data/maps/DrisledgeTown/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\p"
	.string "I'm just having some fun with\n"
	.string "my friends.\p"
	.string "If you don't have anything else in\n"
	.string "your mind, would you like to join us?\p"
	.string "We can keep dancing until our legs no\n"
	.string "longer have the energy to carry us!$"

AcerolaCheckWithScientist::
# 567 "data/maps/DrisledgeTown/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\p"
	.string "I'm just having some fun with\n"
	.string "my friends.\p"
	.string "Did you already visit yours near\n"
	.string "Amberock Town?$"

DrisledgeGengar_Text::
# 584 "data/maps/DrisledgeTown/scripts.pory"
	.string "Gen gen!$"

DrisledgeMimikyu_Text::
# 609 "data/maps/DrisledgeTown/scripts.pory"
	.string "Mii-mii!$"

Drisledge_Hiker_Text::
# 616 "data/maps/DrisledgeTown/scripts.pory"
	.string "I heard this town has all sorts of\n"
	.string "festivities going on during the night,\l"
	.string "but how can that be?\p"
	.string "All I see is an abandoned\n"
	.string "ghost town.$"
