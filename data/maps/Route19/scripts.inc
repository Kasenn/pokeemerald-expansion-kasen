Route19_MapScripts::
# 2 "data/maps/Route19/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route19_MapScripts_MAP_SCRIPT_ON_RESUME
# 19 "data/maps/Route19/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route19_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route19_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route19/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route19_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Route19_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Route19/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 5 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route19_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

Route19_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 6 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 7 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 8 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 9 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 10 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 11 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 12 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 13 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 14 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 15 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
	return

Route19_MapScripts_MAP_SCRIPT_ON_LOAD:
# 20 "data/maps/Route19/scripts.pory"
	goto_if_set FLAG_ROUTE19_BERGMITE, Route19_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route19_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 21 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 22 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 23 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 24 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 25 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 26 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 27 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 28 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 29 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
	return


Route19_Tr1_SwimmerF::
# 35 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR1_SWIMMER_F, R19Tr1_Intro, R19Tr1_Lose
# 36 "data/maps/Route19/scripts.pory"
	msgbox R19Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr2_SwimmerM::
# 50 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR2_SWIMMER_M, R19Tr2_Intro, R19Tr2_Lose
# 51 "data/maps/Route19/scripts.pory"
	msgbox R19Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr3_SwimmerM::
# 65 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR3_SWIMMER_M, R19Tr3_Intro, R19Tr3_Lose
# 66 "data/maps/Route19/scripts.pory"
	msgbox R19Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleM::
# 80 "data/maps/Route19/scripts.pory"
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleM_Intro, Route19_Tr4_SwimmerCoupleM_Defeat, Route19_Tr4_SwimmerCoupleM_NotEnoughMons
# 81 "data/maps/Route19/scripts.pory"
	msgbox Route19_Tr4_SwimmerCoupleM_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleF::
# 98 "data/maps/Route19/scripts.pory"
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleF_Intro, Route19_Tr4_SwimmerCoupleF_Defeat, Route19_Tr4_SwimmerCoupleF_NotEnoughMons
# 99 "data/maps/Route19/scripts.pory"
	msgbox Route19_Tr4_SwimmerCoupleF_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr5_SwimmerF::
# 117 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR5_SWIMMER_F, R19Tr5_Intro, R19Tr5_Lose
# 118 "data/maps/Route19/scripts.pory"
	msgbox R19Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr6_SwimmerM::
# 132 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR6_SWIMMER_M, R19Tr6_Intro, R19Tr6_Lose
# 133 "data/maps/Route19/scripts.pory"
	msgbox R19Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr7_BlackBelt::
# 147 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR7_BLACKBELT, R19Tr7_Intro, R19Tr7_Lose
# 148 "data/maps/Route19/scripts.pory"
	msgbox R19Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr8_Hiker::
# 162 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR8_HIKER, R19Tr8_Intro, R19Tr8_Lose
# 163 "data/maps/Route19/scripts.pory"
	msgbox R19Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr9_Picnicker::
# 177 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR9_PICNICKER, R19Tr9_Intro, R19Tr9_Lose
# 178 "data/maps/Route19/scripts.pory"
	msgbox R19Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr10_SwimmerM::
# 192 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR10_SWIMMER_M, R19Tr10_Intro, R19Tr10_Lose
# 193 "data/maps/Route19/scripts.pory"
	msgbox R19Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Bergmite::
# 206 "data/maps/Route19/scripts.pory"
	lock
# 207 "data/maps/Route19/scripts.pory"
	faceplayer
# 208 "data/maps/Route19/scripts.pory"
	waitse
# 209 "data/maps/Route19/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_ENCOUNTER
# 210 "data/maps/Route19/scripts.pory"
	delay 40
# 211 "data/maps/Route19/scripts.pory"
	waitmoncry
# 212 "data/maps/Route19/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 35
# 213 "data/maps/Route19/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 214 "data/maps/Route19/scripts.pory"
	dowildbattle
# 215 "data/maps/Route19/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 216 "data/maps/Route19/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route19_Bergmite_2
# 235 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route19_Bergmite_5
Route19_Bergmite_4:
# 253 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route19_Bergmite_8
Route19_Bergmite_7:
# 271 "data/maps/Route19/scripts.pory"
	setflag FLAG_ROUTE19_BERGMITE
# 272 "data/maps/Route19/scripts.pory"
	release
	end

Route19_Bergmite_2:
# 218 "data/maps/Route19/scripts.pory"
	setflag FLAG_ROUTE19_BERGMITE
# 219 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 220 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 221 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 222 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 223 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 224 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 225 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 226 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 227 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 228 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 229 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 230 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 231 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 232 "data/maps/Route19/scripts.pory"
	release
	end

Route19_Bergmite_5:
# 236 "data/maps/Route19/scripts.pory"
	setvar VAR_0x8004, SPECIES_BERGMITE
# 237 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 238 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 239 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 240 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 241 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 242 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 243 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 244 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 245 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 246 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 247 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 248 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 249 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 250 "data/maps/Route19/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 251 "data/maps/Route19/scripts.pory"
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_4

Route19_Bergmite_8:
# 254 "data/maps/Route19/scripts.pory"
	setvar VAR_0x8004, SPECIES_BERGMITE
# 255 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 256 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 257 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 258 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 259 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 260 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 261 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 262 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 263 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 264 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 265 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 266 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 267 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 268 "data/maps/Route19/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 269 "data/maps/Route19/scripts.pory"
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_7


R19Tr1_Intro::
# 39 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr1_Lose::
# 42 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr1_PostBattle::
# 45 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr2_Intro::
# 54 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr2_Lose::
# 57 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr2_PostBattle::
# 60 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr3_Intro::
# 69 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr3_Lose::
# 72 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr3_PostBattle::
# 75 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleM_Intro::
# 84 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleM_Defeat::
# 87 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleM_NotEnoughMons::
# 90 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleM_PostBattle::
# 93 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleF_Intro::
# 102 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleF_Defeat::
# 105 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleF_NotEnoughMons::
# 108 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Tr4_SwimmerCoupleF_PostBattle::
# 111 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr5_Intro::
# 121 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr5_Lose::
# 124 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr5_PostBattle::
# 127 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr6_Intro::
# 136 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr6_Lose::
# 139 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr6_PostBattle::
# 142 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr7_Intro::
# 151 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr7_Lose::
# 154 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr7_PostBattle::
# 157 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr8_Intro::
# 166 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr8_Lose::
# 169 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr8_PostBattle::
# 172 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr9_Intro::
# 181 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr9_Lose::
# 184 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr9_PostBattle::
# 187 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr10_Intro::
# 196 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr10_Lose::
# 199 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr10_PostBattle::
# 202 "data/maps/Route19/scripts.pory"
	.string "wip$"
