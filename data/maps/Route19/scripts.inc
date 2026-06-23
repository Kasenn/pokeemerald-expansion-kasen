Route19_MapScripts::
# 2 "data/maps/Route19/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route19_MapScripts_MAP_SCRIPT_ON_RESUME
# 19 "data/maps/Route19/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route19_MapScripts_MAP_SCRIPT_ON_LOAD
# 32 "data/maps/Route19/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route19_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
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

Route19_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/Route19/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Route19_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route19_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 34 "data/maps/Route19/scripts.pory"
	msgbox EndOfBetaNotice, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route19/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Route19_Tr1_SwimmerF::
# 47 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_SWIMMER_F, R19Tr1_Intro, R19Tr1_Lose
# 48 "data/maps/Route19/scripts.pory"
	msgbox R19Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr2_SwimmerM::
# 65 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_SWIMMER_M, R19Tr2_Intro, R19Tr2_Lose
# 66 "data/maps/Route19/scripts.pory"
	msgbox R19Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr3_SwimmerM::
# 81 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_SWIMMER_M2, R19Tr3_Intro, R19Tr3_Lose
# 82 "data/maps/Route19/scripts.pory"
	msgbox R19Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleM::
# 101 "data/maps/Route19/scripts.pory"
	trainerbattle_double TRAINER_R19_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleM_Intro, Route19_Tr4_SwimmerCoupleM_Defeat, Route19_Tr4_SwimmerCoupleM_NotEnoughMons
# 102 "data/maps/Route19/scripts.pory"
	msgbox Route19_Tr4_SwimmerCoupleM_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleF::
# 123 "data/maps/Route19/scripts.pory"
	trainerbattle_double TRAINER_R19_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleF_Intro, Route19_Tr4_SwimmerCoupleF_Defeat, Route19_Tr4_SwimmerCoupleF_NotEnoughMons
# 124 "data/maps/Route19/scripts.pory"
	msgbox Route19_Tr4_SwimmerCoupleF_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr5_SwimmerF::
# 145 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_SWIMMER_F2, R19Tr5_Intro, R19Tr5_Lose
# 146 "data/maps/Route19/scripts.pory"
	msgbox R19Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr6_SwimmerM::
# 163 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_SWIMMER_M3, R19Tr6_Intro, R19Tr6_Lose
# 164 "data/maps/Route19/scripts.pory"
	msgbox R19Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr7_BlackBelt::
# 183 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_BLACKBELT, R19Tr7_Intro, R19Tr7_Lose
# 184 "data/maps/Route19/scripts.pory"
	msgbox R19Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr8_Hiker::
# 201 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_HIKER, R19Tr8_Intro, R19Tr8_Lose
# 202 "data/maps/Route19/scripts.pory"
	msgbox R19Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr9_Picnicker::
# 220 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_PICNICKER, R19Tr9_Intro, R19Tr9_Lose
# 221 "data/maps/Route19/scripts.pory"
	msgbox R19Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr10_SwimmerM::
# 240 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_SWIMMER_M4, R19Tr10_Intro, R19Tr10_Lose
# 241 "data/maps/Route19/scripts.pory"
	msgbox R19Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Bergmite::
# 259 "data/maps/Route19/scripts.pory"
	lock
# 260 "data/maps/Route19/scripts.pory"
	faceplayer
# 261 "data/maps/Route19/scripts.pory"
	waitse
# 262 "data/maps/Route19/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_ENCOUNTER
# 263 "data/maps/Route19/scripts.pory"
	delay 40
# 264 "data/maps/Route19/scripts.pory"
	waitmoncry
# 265 "data/maps/Route19/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 35
# 266 "data/maps/Route19/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 267 "data/maps/Route19/scripts.pory"
	doscriptedbattle
# 268 "data/maps/Route19/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 269 "data/maps/Route19/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 270 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route19_Bergmite_2
# 288 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route19_Bergmite_5
Route19_Bergmite_4:
# 306 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route19_Bergmite_8
Route19_Bergmite_7:
# 324 "data/maps/Route19/scripts.pory"
	setflag FLAG_ROUTE19_BERGMITE
# 325 "data/maps/Route19/scripts.pory"
	release
	end

Route19_Bergmite_2:
# 271 "data/maps/Route19/scripts.pory"
	setflag FLAG_ROUTE19_BERGMITE
# 272 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 273 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 274 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 275 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 276 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 277 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 278 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 279 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 280 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 281 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 282 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 283 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 285 "data/maps/Route19/scripts.pory"
	release
	end

Route19_Bergmite_5:
# 289 "data/maps/Route19/scripts.pory"
	setvar VAR_0x8004, SPECIES_BERGMITE
# 290 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 291 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 292 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 293 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 294 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 295 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 296 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 297 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 298 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 299 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 300 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 301 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 302 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 303 "data/maps/Route19/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 304 "data/maps/Route19/scripts.pory"
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_4

Route19_Bergmite_8:
# 307 "data/maps/Route19/scripts.pory"
	setvar VAR_0x8004, SPECIES_BERGMITE
# 308 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 309 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 310 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 311 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 312 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 313 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 314 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 315 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 316 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 317 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 318 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 319 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 320 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 321 "data/maps/Route19/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 322 "data/maps/Route19/scripts.pory"
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_7


Route19_Camper::
# 330 "data/maps/Route19/scripts.pory"
	msgbox Route19_Camper_Text, MSGBOX_NPC
	return


EndOfBetaNotice::
# 39 "data/maps/Route19/scripts.pory"
	.string "This is the end of the current beta.\p"
	.string "You may continue to explore further,\n"
	.string "but do know that this area has not\l"
	.string "been fully tested.\p"
	.string "Proceed at your own risk!$"

R19Tr1_Intro::
# 51 "data/maps/Route19/scripts.pory"
	.string "Let's warm up by having\n"
	.string "a Pokémon battle!$"

R19Tr1_Lose::
# 55 "data/maps/Route19/scripts.pory"
	.string "Ice cold…$"

R19Tr1_PostBattle::
# 58 "data/maps/Route19/scripts.pory"
	.string "Being able to swim in these waters\n"
	.string "requires a strong spirit,\l"
	.string "whether it be people or Pokémon!$"

R19Tr2_Intro::
# 69 "data/maps/Route19/scripts.pory"
	.string "I'm a natural-born winner!$"

R19Tr2_Lose::
# 72 "data/maps/Route19/scripts.pory"
	.string "I'm a natural-born loser…$"

R19Tr2_PostBattle::
# 75 "data/maps/Route19/scripts.pory"
	.string "I used to get angry whenever I lost,\n"
	.string "but I've learned to keep my head cool.$"

R19Tr3_Intro::
# 85 "data/maps/Route19/scripts.pory"
	.string "Do you ever swim\n"
	.string "beside your Pokémon?$"

R19Tr3_Lose::
# 89 "data/maps/Route19/scripts.pory"
	.string "Can't believe I lost\n"
	.string "on my home field…$"

R19Tr3_PostBattle::
# 93 "data/maps/Route19/scripts.pory"
	.string "You should get yourself a swimsuit\n"
	.string "and see how your Pokémon feel when\l"
	.string "they dip into this ice-cold water.\l"
	.string "It really opens up your eyes.$"

Route19_Tr4_SwimmerCoupleM_Intro::
# 105 "data/maps/Route19/scripts.pory"
	.string "Jesse: We've been honing our Pokémon\n"
	.string "to their limit. You cannot win!$"

Route19_Tr4_SwimmerCoupleM_Defeat::
# 109 "data/maps/Route19/scripts.pory"
	.string "Jesse: I was sure we had it…$"

Route19_Tr4_SwimmerCoupleM_NotEnoughMons::
# 112 "data/maps/Route19/scripts.pory"
	.string "Jesse: You're going to need more\n"
	.string "Pokémon if you want to challenge us!$"

Route19_Tr4_SwimmerCoupleM_PostBattle::
# 116 "data/maps/Route19/scripts.pory"
	.string "Jesse: To excel in double battles,\n"
	.string "you need to think about the synergy\l"
	.string "between your Pokémon.$"

Route19_Tr4_SwimmerCoupleF_Intro::
# 127 "data/maps/Route19/scripts.pory"
	.string "Heidi: We've been honing our Pokémon\n"
	.string "to their limit. You cannot win!$"

Route19_Tr4_SwimmerCoupleF_Defeat::
# 131 "data/maps/Route19/scripts.pory"
	.string "Heidi: I was sure we had it…$"

Route19_Tr4_SwimmerCoupleF_NotEnoughMons::
# 134 "data/maps/Route19/scripts.pory"
	.string "Heidi: You're going to need more\n"
	.string "Pokémon if you want to challenge us!$"

Route19_Tr4_SwimmerCoupleF_PostBattle::
# 138 "data/maps/Route19/scripts.pory"
	.string "Heidi: If we want to grow stronger,\n"
	.string "we need to work on our synergy.$"

R19Tr5_Intro::
# 149 "data/maps/Route19/scripts.pory"
	.string "My Pokémon like to play with others.\n"
	.string "Won't you entertain them?$"

R19Tr5_Lose::
# 153 "data/maps/Route19/scripts.pory"
	.string "You're being too rough…$"

R19Tr5_PostBattle::
# 156 "data/maps/Route19/scripts.pory"
	.string "Don't worry about my Pokémon.\n"
	.string "They'll be fine once they relax\l"
	.string "in the water for a moment.$"

R19Tr6_Intro::
# 167 "data/maps/Route19/scripts.pory"
	.string "The longer my Pokémon endure\n"
	.string "these waters, the faster they get!$"

R19Tr6_Lose::
# 171 "data/maps/Route19/scripts.pory"
	.string "Even with our speed,\n"
	.string "we lagged behind…$"

R19Tr6_PostBattle::
# 175 "data/maps/Route19/scripts.pory"
	.string "Speed is everything for us swimmers.\p"
	.string "For example, the faster I finish my\n"
	.string "workout and get myself in front of\l"
	.string "a warm hearth, the better.$"

R19Tr7_Intro::
# 187 "data/maps/Route19/scripts.pory"
	.string "You dare interrupt my\n"
	.string "training regimen?!$"

R19Tr7_Lose::
# 191 "data/maps/Route19/scripts.pory"
	.string "Hmph… Got lucky,\n"
	.string "I guess.$"

R19Tr7_PostBattle::
# 195 "data/maps/Route19/scripts.pory"
	.string "Leave me be.\n"
	.string "I'm in the middle of training.$"

R19Tr8_Intro::
# 205 "data/maps/Route19/scripts.pory"
	.string "Ah, an up-and-coming young trainer!\n"
	.string "Witness the power of ice!$"

R19Tr8_Lose::
# 209 "data/maps/Route19/scripts.pory"
	.string "What? How?!$"

R19Tr8_PostBattle::
# 212 "data/maps/Route19/scripts.pory"
	.string "Some believe us hikers to be focused\n"
	.string "on mostly Rock-type Pokémon.\p"
	.string "The truth is, we use whatever excels\n"
	.string "in the current climate we're in.$"

R19Tr9_Intro::
# 224 "data/maps/Route19/scripts.pory"
	.string "My partner was built for this weather.\n"
	.string "Behold!$"

R19Tr9_Lose::
# 228 "data/maps/Route19/scripts.pory"
	.string "We tried our best, and that's\n"
	.string "all that matters.$"

R19Tr9_PostBattle::
# 232 "data/maps/Route19/scripts.pory"
	.string "Some Pokémon have very strong\n"
	.string "weather-related abilities.\p"
	.string "Use them to your advantage\n"
	.string "whenever you can.$"

R19Tr10_Intro::
# 244 "data/maps/Route19/scripts.pory"
	.string "You're going to get rolled over!$"

R19Tr10_Lose::
# 247 "data/maps/Route19/scripts.pory"
	.string "We really took a nosedive there…$"

R19Tr10_PostBattle::
# 250 "data/maps/Route19/scripts.pory"
	.string "Have you ever noticed how almost every\n"
	.string "Wailord seems to be of different size?\p"
	.string "I don't think I've ever seen\n"
	.string "a Wailord as big as the Pokédex claims\l"
	.string "them to be.$"

Route19_Camper_Text::
# 332 "data/maps/Route19/scripts.pory"
	.string "Have you seen any interesting\n"
	.string "Pokémon around lately?\p"
	.string "I've heard talks of some Pokémon\n"
	.string "disguising themselves as icebergs, but\l"
	.string "I've yet to see it with my own eyes.$"
