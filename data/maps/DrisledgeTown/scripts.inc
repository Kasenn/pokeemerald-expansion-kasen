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
# 10 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeGym
	return


DrisledgeTownOnTransition::
# 20 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_VISITED_DRISLEDGE
# 21 "data/maps/DrisledgeTown/scripts.pory"
	gettime
# 22 "data/maps/DrisledgeTown/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 23 "data/maps/DrisledgeTown/scripts.pory"
	special SetDrisledgeWeather
# 24 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeNPCs
# 25 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeGym
# 26 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeTownOnTransition_1
	return

DrisledgeTownOnTransition_1:
# 27 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeTownOnTransition_3
# 27 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeTownOnTransition_3
# 31 "data/maps/DrisledgeTown/scripts.pory"
	setmaplayoutindex LAYOUT_DRISLEDGE_TOWN_BROKEN
	return

DrisledgeTownOnTransition_3:
# 28 "data/maps/DrisledgeTown/scripts.pory"
	setmaplayoutindex LAYOUT_DRISLEDGE_TOWN_BROKEN2
	return


SetDrisledgeNPCs::
# 37 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_TEMP_2
# 38 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ge SetDrisledgeNPCs_2
SetDrisledgeNPCs_1:
# 41 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetDrisledgeNPCs_6
SetDrisledgeNPCs_4:
	return

SetDrisledgeNPCs_2:
# 39 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto SetDrisledgeNPCs_1

SetDrisledgeNPCs_5:
# 42 "data/maps/DrisledgeTown/scripts.pory"
	clearflag FLAG_TEMP_2
	goto SetDrisledgeNPCs_4

SetDrisledgeNPCs_6:
# 41 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le SetDrisledgeNPCs_5
# 41 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge SetDrisledgeNPCs_5
	goto SetDrisledgeNPCs_4


SetUpBrokenDrisledge::
# 48 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgeTrees
# 49 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgeBushes
# 50 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgePuddles
# 51 "data/maps/DrisledgeTown/scripts.pory"
	call SetUpDrisledgeHouses
	return


SetUpGhostTownDrisledge::
	return


SetUpDrisledgeTrees::
# 58 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 23, 22, 0x204, FALSE
# 59 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 22, 14, 0x204, FALSE
# 60 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 24, 11, 0x204, FALSE
# 61 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 6, 0x254, FALSE
# 62 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 6, 0x254, FALSE
# 63 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 6, 0x254, FALSE
# 64 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 7, 0x254, FALSE
# 65 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 7, 0x254, FALSE
# 66 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 7, 0x254, FALSE
# 67 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 8, 0x254, FALSE
# 68 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 8, 0x254, FALSE
# 69 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 8, 0x254, FALSE
# 70 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 8, 0x254, FALSE
# 71 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 9, 0x254, FALSE
# 72 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 9, 0x254, FALSE
	return


SetUpDrisledgeBushes::
# 77 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 1, 0x205, FALSE
# 78 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 4, 0x205, FALSE
# 79 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 18, 4, 0x205, FALSE
# 80 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 5, 0x205, FALSE
# 81 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 28, 6, 0x205, FALSE
# 82 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 7, 0x205, FALSE
# 83 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 8, 0x205, FALSE
# 84 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 26, 9, 0x205, FALSE
# 85 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 27, 9, 0x205, FALSE
# 86 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 27, 10, 0x205, FALSE
# 87 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 25, 11, 0x205, FALSE
# 88 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 25, 12, 0x205, FALSE
# 89 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 22, 12, 0x205, FALSE
# 90 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 16, 12, 0x205, FALSE
# 91 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 17, 12, 0x205, FALSE
# 92 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 12, 0x205, FALSE
# 93 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 13, 0x205, FALSE
# 94 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 14, 0x205, FALSE
# 95 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 15, 15, 0x205, FALSE
# 96 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 14, 0x205, FALSE
# 97 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 15, 0x205, FALSE
# 98 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 16, 0x205, FALSE
# 99 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 21, 15, 0x205, FALSE
# 100 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 24, 14, 0x205, FALSE
# 101 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 5, 21, 0x205, FALSE
# 102 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 5, 22, 0x205, FALSE
# 103 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 6, 22, 0x205, FALSE
# 104 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 6, 24, 0x205, FALSE
# 105 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 23, 0x205, FALSE
# 106 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 22, 0x205, FALSE
# 107 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 22, 0x205, FALSE
# 108 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 20, 24, 0x205, FALSE
# 109 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 21, 23, 0x205, FALSE
# 110 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 23, 24, 0x205, FALSE
	return


SetUpDrisledgePuddles::
# 114 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 13, 5, 0x254, FALSE
# 115 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 5, 0x254, FALSE
# 116 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 6, 0x254, FALSE
# 117 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 13, 6, 0x254, FALSE
# 118 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 6, 0x254, FALSE
# 119 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 12, 7, 0x254, FALSE
# 120 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 13, 7, 0x254, FALSE
# 121 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 14, 7, 0x254, FALSE
# 122 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 9, 0x254, FALSE
# 123 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 9, 0x254, FALSE
# 124 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 9, 0x254, FALSE
# 125 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 10, 0x254, FALSE
# 126 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 10, 0x254, FALSE
# 127 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 10, 0x254, FALSE
# 128 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 10, 0x254, FALSE
# 129 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 11, 0x254, FALSE
# 130 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 11, 0x254, FALSE
# 131 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 11, 0x254, FALSE
# 132 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 11, 11, 0x254, FALSE
	return


SetUpDrisledgeHouses::
# 136 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 21, 0x2E8, FALSE
# 137 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 21, 0x2E9, FALSE
# 138 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 21, 0x2EA, FALSE
# 139 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 21, 0x2EB, FALSE
# 141 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 22, 0x2F4, TRUE
# 142 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 22, 0x2F5, TRUE
# 143 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 22, 0x2F2, TRUE
# 144 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 22, 0x2F3, TRUE
# 146 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 23, 0x2F8, TRUE
# 147 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8, 23, 0x2FD, TRUE
# 148 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 23, 0x2FA, TRUE
# 149 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 23, 0x2FB, TRUE
# 151 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7, 24, 0x300, TRUE
# 152 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9, 24, 0x302, TRUE
# 153 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10, 24, 0x303, TRUE
# 155 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 21 -8, 0x2E8, FALSE
# 156 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8 + 9, 21 -8, 0x2E9, FALSE
# 157 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 21 -8, 0x2EA, FALSE
# 158 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 21 -8, 0x2EB, FALSE
# 160 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 22 -8, 0x2F4, TRUE
# 161 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8 + 9, 22 -8, 0x2F5, TRUE
# 162 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 22 -8, 0x2F2, TRUE
# 163 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 22 -8, 0x2F3, TRUE
# 165 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 23 -8, 0x2F8, TRUE
# 166 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 8 + 9, 23 -8, 0x2FD, TRUE
# 167 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 23 -8, 0x2FA, TRUE
# 168 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 23 -8, 0x2FB, TRUE
# 170 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 7 + 9, 24 -8, 0x300, TRUE
# 171 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 9 + 9, 24 -8, 0x302, TRUE
# 172 "data/maps/DrisledgeTown/scripts.pory"
	setmetatile 10 + 9, 24 -8, 0x303, TRUE
	return


SetDrisledgeGym::
# 177 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetDrisledgeGym_2
# 181 "data/maps/DrisledgeTown/scripts.pory"
	setdynamicwarp MAP_DRISLEDGE_GYM, 5, 51
SetDrisledgeGym_1:
	return

SetDrisledgeGym_2:
# 178 "data/maps/DrisledgeTown/scripts.pory"
	setdynamicwarp MAP_DRISLEDGE_GYM_HOUSE, 4, 8
	goto SetDrisledgeGym_1


Drisledge_Sign1::
# 187 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Sign1_Text, MSGBOX_SIGN
	return


Drisledge_Sign2::
# 195 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Sign2_Text, MSGBOX_SIGN
	return


DrisledgeMart_OldMan::
# 202 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 203 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeMart_OldMan_Text
# 204 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
# 205 "data/maps/DrisledgeTown/scripts.pory"
	release
	return


Drisledge_LittleGirl::
# 214 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_LittleGirl_Text, MSGBOX_NPC
# 215 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge Drisledge_LittleGirl_2
# 218 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 1
	goto_if_ne Drisledge_LittleGirl_4
# 219 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 3
	goto_if_ne Drisledge_LittleGirl_4
# 220 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 5
	goto_if_ne Drisledge_LittleGirl_4
# 221 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne Drisledge_LittleGirl_4
	return

Drisledge_LittleGirl_2:
	end

Drisledge_LittleGirl_4:
# 223 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_DRISLEDGE_TOWN_STATE, 1
	return


Drisledge_LittleGirl2::
# 231 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_LittleGirl_Text2, MSGBOX_NPC
# 232 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge Drisledge_LittleGirl2_2
# 235 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 2
	goto_if_ne Drisledge_LittleGirl2_4
# 236 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 3
	goto_if_ne Drisledge_LittleGirl2_4
# 237 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 6
	goto_if_ne Drisledge_LittleGirl2_4
# 238 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne Drisledge_LittleGirl2_4
	return

Drisledge_LittleGirl2_2:
	end

Drisledge_LittleGirl2_4:
# 240 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_DRISLEDGE_TOWN_STATE, 2
	return


SetDrisledgeOldPersonVar::
# 247 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge SetDrisledgeOldPersonVar_2
# 251 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 4
	goto_if_ne SetDrisledgeOldPersonVar_4
# 252 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 5
	goto_if_ne SetDrisledgeOldPersonVar_4
# 253 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 6
	goto_if_ne SetDrisledgeOldPersonVar_4
# 254 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne SetDrisledgeOldPersonVar_4
	return

SetDrisledgeOldPersonVar_2:
# 248 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

SetDrisledgeOldPersonVar_4:
# 256 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_DRISLEDGE_TOWN_STATE, 4
	return


DrisledgeTown_House2_ExpertM::
# 261 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 262 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeTown_House2_ExpertM_Text
# 263 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
# 264 "data/maps/DrisledgeTown/scripts.pory"
	release
	return


DrisledgeTown_House2_ExpertF::
# 267 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeTown_House2_ExpertF_Text, MSGBOX_NPC
# 268 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
	return


Drisledge_House1_OldWoman::
# 282 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_House1_OldWoman_Text, MSGBOX_NPC
# 283 "data/maps/DrisledgeTown/scripts.pory"
	call SetDrisledgeOldPersonVar
	return


DrisledgeDoll1::
# 294 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 295 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll2::
# 298 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SMOOCHUM
# 299 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll3::
# 302 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GULPIN
# 303 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll4::
# 306 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLEFAIRY
# 307 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll5::
# 310 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DUSKULL
# 311 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll6::
# 314 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JIGGLYPUFF
# 315 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll7::
# 318 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AZURILL
# 319 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll8::
# 322 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WYNAUT
# 323 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll9::
# 326 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 327 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll10::
# 330 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KECLEON
# 331 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll11::
# 334 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LOTAD
# 335 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll12::
# 338 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MEOWTH
# 339 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll13::
# 342 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WOOPER
# 343 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDoll14::
# 346 "data/maps/DrisledgeTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
# 347 "data/maps/DrisledgeTown/scripts.pory"
	goto DrisledgeDollMain
	return


DrisledgeDollMain::
# 350 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeDollMain_Text, MSGBOX_SIGN
	return


Drisledge_Pokecenter_Boy3::
# 357 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Pokecenter_Boy3_Text, MSGBOX_NPC
	return


Drisledge_Pokecenter_Man1::
# 360 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Pokecenter_Man1_Text, MSGBOX_NPC
	return


Drisledge_Pokecenter_Girl2::
# 363 "data/maps/DrisledgeTown/scripts.pory"
	msgbox Drisledge_Pokecenter_Girl2_Text, MSGBOX_NPC
	return


DrisledgeGymToggle::
# 382 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_eq DrisledgeGymToggle_1
# 387 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
# 388 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGymToggle_Text_0, MSGBOX_SIGN
	return

DrisledgeGymToggle_1:
# 383 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 1
# 384 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGymToggle_Text_0, MSGBOX_SIGN
	return


Drisledge_BerryGastly::
# 393 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 394 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 395 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 396 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 397 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
# 398 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 399 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM2, Drisledge_BerryGastly_2
Drisledge_BerryGastly_1:
# 403 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

Drisledge_BerryGastly_2:
# 400 "data/maps/DrisledgeTown/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 401 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_DRISLEDGE_ITEM2
	goto Drisledge_BerryGastly_1


Drisledge_Haunter::
# 407 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 408 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 409 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 410 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_HAUNTER, CRY_MODE_NORMAL
# 411 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeHaunter_Text, MSGBOX_DEFAULT
# 412 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 413 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


DrisledgeBanette::
# 421 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 422 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 423 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 424 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
# 425 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeBanette_Text, MSGBOX_DEFAULT
# 426 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 427 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


DrisledgeBanette1::
# 431 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 432 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 433 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 434 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
# 435 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeBanette_Text, MSGBOX_DEFAULT
# 436 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 437 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM3, DrisledgeBanette1_2
DrisledgeBanette1_1:
# 441 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

DrisledgeBanette1_2:
# 438 "data/maps/DrisledgeTown/scripts.pory"
	giveitem ITEM_COLBUR_BERRY
# 439 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_DRISLEDGE_ITEM3
	goto DrisledgeBanette1_1


Drisledge_Acerola::
# 449 "data/maps/DrisledgeTown/scripts.pory"
	checkplayergender
# 450 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Drisledge_Acerola_2
# 454 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_1
Drisledge_Acerola_1:
# 456 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, Drisledge_Acerola_5
# 471 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaCheckWithScientist, MSGBOX_NPC
	return

Drisledge_Acerola_2:
# 451 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_0
	goto Drisledge_Acerola_1

Drisledge_Acerola_5:
# 457 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_set FLAG_ACEROLA_ITEM, Drisledge_Acerola_9
# 461 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Drisledge_Acerola_12
# 465 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaYoureBack, MSGBOX_NPC
# 466 "data/maps/DrisledgeTown/scripts.pory"
	goto_if_unset FLAG_ACEROLA_ITEM, Drisledge_Acerola_14
	return

Drisledge_Acerola_9:
# 458 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaWithFriends, MSGBOX_NPC
	end

Drisledge_Acerola_12:
# 462 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaLetsDance, MSGBOX_NPC
	end

Drisledge_Acerola_14:
# 467 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


AcerolaDanceTriggerCorner::
# 481 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_TEMP_4, 1
# 482 "data/maps/DrisledgeTown/scripts.pory"
	release
	return


AcerolaDanceTriggerWest::
# 485 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 1
# 486 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerNorth::
# 489 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 2
# 490 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerEast::
# 493 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 3
# 494 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerSouth::
# 497 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_5, 4
# 498 "data/maps/DrisledgeTown/scripts.pory"
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerMain::
# 501 "data/maps/DrisledgeTown/scripts.pory"
	addvar VAR_TEMP_4, 1
# 502 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_TEMP_4, 50
	goto_if_lt AcerolaDanceTriggerMain_2
	checkitemspace ITEM_TM_CAPTIVATE
# 0 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AcerolaDanceTriggerMain_5
# 510 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 511 "data/maps/DrisledgeTown/scripts.pory"
	safefollow
# 512 "data/maps/DrisledgeTown/scripts.pory"
	applymovement 6, FacePlayer
# 513 "data/maps/DrisledgeTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/DrisledgeTown/scripts.pory"
	playse SE_PIN
# 515 "data/maps/DrisledgeTown/scripts.pory"
	applymovement 6, ExclamationMark
# 516 "data/maps/DrisledgeTown/scripts.pory"
	waitmovement 0
# 517 "data/maps/DrisledgeTown/scripts.pory"
	delay 48
# 518 "data/maps/DrisledgeTown/scripts.pory"
	switch VAR_TEMP_5
# 519 "data/maps/DrisledgeTown/scripts.pory"
	case 1, AcerolaDanceTriggerMain_9
# 521 "data/maps/DrisledgeTown/scripts.pory"
	case 2, AcerolaDanceTriggerMain_10
# 523 "data/maps/DrisledgeTown/scripts.pory"
	case 3, AcerolaDanceTriggerMain_11
# 525 "data/maps/DrisledgeTown/scripts.pory"
	case 4, AcerolaDanceTriggerMain_12
AcerolaDanceTriggerMain_7:
# 528 "data/maps/DrisledgeTown/scripts.pory"
	delay 15
# 529 "data/maps/DrisledgeTown/scripts.pory"
	checkplayergender
# 530 "data/maps/DrisledgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq AcerolaDanceTriggerMain_14
# 534 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_1
AcerolaDanceTriggerMain_13:
# 536 "data/maps/DrisledgeTown/scripts.pory"
	msgbox AcerolaGoodDancer
# 537 "data/maps/DrisledgeTown/scripts.pory"
	giveitem ITEM_TM_CAPTIVATE
# 538 "data/maps/DrisledgeTown/scripts.pory"
	setflag FLAG_ACEROLA_ITEM
# 539 "data/maps/DrisledgeTown/scripts.pory"
	setvar VAR_TEMP_3, 0
# 540 "data/maps/DrisledgeTown/scripts.pory"
	release
	return

AcerolaDanceTriggerMain_2:
# 503 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

AcerolaDanceTriggerMain_5:
# 507 "data/maps/DrisledgeTown/scripts.pory"
	release
	end

AcerolaDanceTriggerMain_9:
# 520 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_10:
# 522 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_11:
# 524 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_12:
# 526 "data/maps/DrisledgeTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_14:
# 531 "data/maps/DrisledgeTown/scripts.pory"
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_0
	goto AcerolaDanceTriggerMain_13


Drisledge_Gengar::
# 570 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 571 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 572 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 573 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
# 574 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeGengar_Text, MSGBOX_DEFAULT
# 575 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 576 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


Drisledge_Mismagius::
# 583 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 584 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 585 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 586 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_NORMAL
# 587 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
# 588 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 589 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


Drisledge_Mimikyu::
# 594 "data/maps/DrisledgeTown/scripts.pory"
	lock
# 595 "data/maps/DrisledgeTown/scripts.pory"
	faceplayer
# 596 "data/maps/DrisledgeTown/scripts.pory"
	waitse
# 597 "data/maps/DrisledgeTown/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
# 598 "data/maps/DrisledgeTown/scripts.pory"
	msgbox DrisledgeMimikyu_Text, MSGBOX_DEFAULT
# 599 "data/maps/DrisledgeTown/scripts.pory"
	waitmoncry
# 600 "data/maps/DrisledgeTown/scripts.pory"
	release
	end


DrisledgeGymToggle_Text_0:
# 384 "data/maps/DrisledgeTown/scripts.pory"
	.string "Town state changed.$"

Drisledge_Acerola_Text_0:
# 451 "data/maps/DrisledgeTown/scripts.pory"
	.string "mister$"

Drisledge_Acerola_Text_1:
# 454 "data/maps/DrisledgeTown/scripts.pory"
	.string "miss$"

Drisledge_Sign1_Text::
# 189 "data/maps/DrisledgeTown/scripts.pory"
	.string "DRISLEDGE TOWN\n"
	.string "“The happiest town in the world.”$"

Drisledge_Sign2_Text::
# 197 "data/maps/DrisledgeTown/scripts.pory"
	.string "Drisledge Town Pokémon Gym$"

DrisledgeMart_OldMan_Text::
# 207 "data/maps/DrisledgeTown/scripts.pory"
	.string "I feel like the products here are\n"
	.string "constantly changing locations.\l"
	.string "I can never find what I want.$"

Drisledge_LittleGirl_Text::
# 226 "data/maps/DrisledgeTown/scripts.pory"
	.string "The adults hate the rain so there's\n"
	.string "nobody to ruin our fun out here!$"

Drisledge_LittleGirl_Text2::
# 243 "data/maps/DrisledgeTown/scripts.pory"
	.string "Whee!$"

DrisledgeTown_House2_ExpertM_Text::
# 270 "data/maps/DrisledgeTown/scripts.pory"
	.string "Another rainy day…\n"
	.string "Splendid…$"

DrisledgeTown_House2_ExpertF_Text::
# 274 "data/maps/DrisledgeTown/scripts.pory"
	.string "There's not much to do in a town\n"
	.string "where it never stops raining.\p"
	.string "At least the sound of raindrops\n"
	.string "hitting the roof is relaxing, I guess…$"

Drisledge_House1_OldWoman_Text::
# 285 "data/maps/DrisledgeTown/scripts.pory"
	.string "Do you like my dolls?\p"
	.string "Sometimes it can be a bit noisy when\n"
	.string "everybody starts talking at the same\l"
	.string "time, but other than that, they tend to\l"
	.string "be very well-behaved.$"

DrisledgeDollMain_Text::
# 352 "data/maps/DrisledgeTown/scripts.pory"
	.string "It's a regular {STR_VAR_1} doll.$"

Drisledge_Pokecenter_Boy3_Text::
# 365 "data/maps/DrisledgeTown/scripts.pory"
	.string "Is it just me or are the locals\n"
	.string "a bit weird?$"

Drisledge_Pokecenter_Man1_Text::
# 369 "data/maps/DrisledgeTown/scripts.pory"
	.string "I was afraid we might get drenched\n"
	.string "on our way here.\p"
	.string "Thankfully my Pokémon was holding\n"
	.string "a Utility Umbrella and was able to\l"
	.string "keep us dry through the rain.$"

Drisledge_Pokecenter_Girl2_Text::
# 376 "data/maps/DrisledgeTown/scripts.pory"
	.string "I hate the rain.\n"
	.string "I hope it stops soon.$"

DrisledgeHaunter_Text::
# 416 "data/maps/DrisledgeTown/scripts.pory"
	.string "Haaan!$"

DrisledgeBanette_Text::
# 444 "data/maps/DrisledgeTown/scripts.pory"
	.string "Baaan!$"

AcerolaWithFriends::
# 474 "data/maps/DrisledgeTown/scripts.pory"
	.string "If you're not busy, you\n"
	.string "could stay here forever!\p"
	.string "We can keep dancing and having\n"
	.string "fun with friends!$"

AcerolaLetsDance::
# 542 "data/maps/DrisledgeTown/scripts.pory"
	.string "Yay! Now we've got a real\n"
	.string "dance party going!$"

AcerolaGoodDancer::
# 546 "data/maps/DrisledgeTown/scripts.pory"
	.string "Wow, {STR_VAR_1}, you're\n"
	.string "a really good dancer!\p"
	.string "One of my friends was so impressed\n"
	.string "that they wanted you to have this.$"

AcerolaYoureBack::
# 553 "data/maps/DrisledgeTown/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\p"
	.string "I'm just having some fun with\n"
	.string "my friends.\p"
	.string "If you don't have anything else in\n"
	.string "your mind, would you like to join us?\p"
	.string "We can keep dancing until our legs no\n"
	.string "longer have the energy to carry us!$"

AcerolaCheckWithScientist::
# 562 "data/maps/DrisledgeTown/scripts.pory"
	.string "Hiya, {STR_VAR_1}!\p"
	.string "I'm just having some fun with\n"
	.string "my friends.\p"
	.string "Did you already visit yours near\n"
	.string "Amberock Town?$"

DrisledgeGengar_Text::
# 579 "data/maps/DrisledgeTown/scripts.pory"
	.string "Gen gen!$"

DrisledgeMimikyu_Text::
# 604 "data/maps/DrisledgeTown/scripts.pory"
	.string "Mii-mii!$"
