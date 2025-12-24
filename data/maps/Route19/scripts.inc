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
# 53 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR2_SWIMMER_M, R19Tr2_Intro, R19Tr2_Lose
# 54 "data/maps/Route19/scripts.pory"
	msgbox R19Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr3_SwimmerM::
# 69 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR3_SWIMMER_M, R19Tr3_Intro, R19Tr3_Lose
# 70 "data/maps/Route19/scripts.pory"
	msgbox R19Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleM::
# 89 "data/maps/Route19/scripts.pory"
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleM_Intro, Route19_Tr4_SwimmerCoupleM_Defeat, Route19_Tr4_SwimmerCoupleM_NotEnoughMons
# 90 "data/maps/Route19/scripts.pory"
	msgbox Route19_Tr4_SwimmerCoupleM_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleF::
# 111 "data/maps/Route19/scripts.pory"
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleF_Intro, Route19_Tr4_SwimmerCoupleF_Defeat, Route19_Tr4_SwimmerCoupleF_NotEnoughMons
# 112 "data/maps/Route19/scripts.pory"
	msgbox Route19_Tr4_SwimmerCoupleF_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr5_SwimmerF::
# 133 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR5_SWIMMER_F, R19Tr5_Intro, R19Tr5_Lose
# 134 "data/maps/Route19/scripts.pory"
	msgbox R19Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr6_SwimmerM::
# 151 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR6_SWIMMER_M, R19Tr6_Intro, R19Tr6_Lose
# 152 "data/maps/Route19/scripts.pory"
	msgbox R19Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr7_BlackBelt::
# 171 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR7_BLACKBELT, R19Tr7_Intro, R19Tr7_Lose
# 172 "data/maps/Route19/scripts.pory"
	msgbox R19Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr8_Hiker::
# 189 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR8_HIKER, R19Tr8_Intro, R19Tr8_Lose
# 190 "data/maps/Route19/scripts.pory"
	msgbox R19Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr9_Picnicker::
# 208 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR9_PICNICKER, R19Tr9_Intro, R19Tr9_Lose
# 209 "data/maps/Route19/scripts.pory"
	msgbox R19Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr10_SwimmerM::
# 225 "data/maps/Route19/scripts.pory"
	trainerbattle_single TRAINER_R19_TR10_SWIMMER_M, R19Tr10_Intro, R19Tr10_Lose
# 226 "data/maps/Route19/scripts.pory"
	msgbox R19Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Bergmite::
# 240 "data/maps/Route19/scripts.pory"
	lock
# 241 "data/maps/Route19/scripts.pory"
	faceplayer
# 242 "data/maps/Route19/scripts.pory"
	waitse
# 243 "data/maps/Route19/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_ENCOUNTER
# 244 "data/maps/Route19/scripts.pory"
	delay 40
# 245 "data/maps/Route19/scripts.pory"
	waitmoncry
# 246 "data/maps/Route19/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 35
# 247 "data/maps/Route19/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 248 "data/maps/Route19/scripts.pory"
	dowildbattle
# 249 "data/maps/Route19/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 250 "data/maps/Route19/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 251 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route19_Bergmite_2
# 269 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route19_Bergmite_5
Route19_Bergmite_4:
# 287 "data/maps/Route19/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route19_Bergmite_8
Route19_Bergmite_7:
# 305 "data/maps/Route19/scripts.pory"
	setflag FLAG_ROUTE19_BERGMITE
# 306 "data/maps/Route19/scripts.pory"
	release
	end

Route19_Bergmite_2:
# 252 "data/maps/Route19/scripts.pory"
	setflag FLAG_ROUTE19_BERGMITE
# 253 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 254 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 255 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 256 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 257 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 258 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 259 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 260 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 261 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 262 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 263 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 264 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 265 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 266 "data/maps/Route19/scripts.pory"
	release
	end

Route19_Bergmite_5:
# 270 "data/maps/Route19/scripts.pory"
	setvar VAR_0x8004, SPECIES_BERGMITE
# 271 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 272 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 273 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 274 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 275 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 276 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 277 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 278 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 279 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 280 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 281 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 282 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 283 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 284 "data/maps/Route19/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 285 "data/maps/Route19/scripts.pory"
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_4

Route19_Bergmite_8:
# 288 "data/maps/Route19/scripts.pory"
	setvar VAR_0x8004, SPECIES_BERGMITE
# 289 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 290 "data/maps/Route19/scripts.pory"
	removeobject VAR_LAST_TALKED
# 291 "data/maps/Route19/scripts.pory"
	setmetatile 81, 3, 0x170, FALSE
# 292 "data/maps/Route19/scripts.pory"
	setmetatile 82, 3, 0x170, FALSE
# 293 "data/maps/Route19/scripts.pory"
	setmetatile 83, 3, 0x170, FALSE
# 294 "data/maps/Route19/scripts.pory"
	setmetatile 81, 4, 0x170, FALSE
# 295 "data/maps/Route19/scripts.pory"
	setmetatile 82, 4, 0x170, FALSE
# 296 "data/maps/Route19/scripts.pory"
	setmetatile 83, 4, 0x170, FALSE
# 297 "data/maps/Route19/scripts.pory"
	setmetatile 81, 5, 0x170, FALSE
# 298 "data/maps/Route19/scripts.pory"
	setmetatile 82, 5, 0x170, FALSE
# 299 "data/maps/Route19/scripts.pory"
	setmetatile 83, 5, 0x170, FALSE
# 300 "data/maps/Route19/scripts.pory"
	special DrawWholeMapView
# 301 "data/maps/Route19/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 302 "data/maps/Route19/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 303 "data/maps/Route19/scripts.pory"
	msgbox gText_LegendaryRanAway
	goto Route19_Bergmite_7


Route19_Camper::
# 311 "data/maps/Route19/scripts.pory"
	msgbox Route19_Camper_Text, MSGBOX_NPC
	return


R19Tr1_Intro::
# 39 "data/maps/Route19/scripts.pory"
	.string "Let's warm up by having\n"
	.string "a Pokémon battle!$"

R19Tr1_Lose::
# 43 "data/maps/Route19/scripts.pory"
	.string "Ice cold…$"

R19Tr1_PostBattle::
# 46 "data/maps/Route19/scripts.pory"
	.string "Being able to swim in these waters\n"
	.string "requires a strong spirit,\l"
	.string "whether it be people or Pokémon!$"

R19Tr2_Intro::
# 57 "data/maps/Route19/scripts.pory"
	.string "I'm a natural-born winner!$"

R19Tr2_Lose::
# 60 "data/maps/Route19/scripts.pory"
	.string "I'm a natural-born loser…$"

R19Tr2_PostBattle::
# 63 "data/maps/Route19/scripts.pory"
	.string "I used to get angry whenever I lost,\n"
	.string "but I've learned to keep my head cool.$"

R19Tr3_Intro::
# 73 "data/maps/Route19/scripts.pory"
	.string "Do you ever swim\n"
	.string "beside your Pokémon?$"

R19Tr3_Lose::
# 77 "data/maps/Route19/scripts.pory"
	.string "Can't believe I lost\n"
	.string "on my home field…$"

R19Tr3_PostBattle::
# 81 "data/maps/Route19/scripts.pory"
	.string "You should get yourself a swimsuit\n"
	.string "and see how your Pokémon feel when\l"
	.string "they dip into this ice-cold water.\l"
	.string "It really opens up your eyes.$"

Route19_Tr4_SwimmerCoupleM_Intro::
# 93 "data/maps/Route19/scripts.pory"
	.string "Jesse: We've been honing our Pokémon\n"
	.string "to their limit. You cannot win!$"

Route19_Tr4_SwimmerCoupleM_Defeat::
# 97 "data/maps/Route19/scripts.pory"
	.string "Jesse: I was sure we had it…$"

Route19_Tr4_SwimmerCoupleM_NotEnoughMons::
# 100 "data/maps/Route19/scripts.pory"
	.string "Jesse: You're going to need more\n"
	.string "Pokémon if you want to challenge us!$"

Route19_Tr4_SwimmerCoupleM_PostBattle::
# 104 "data/maps/Route19/scripts.pory"
	.string "Jesse: To excel in double battles,\n"
	.string "you need to think about the synergy\l"
	.string "between your Pokémon.$"

Route19_Tr4_SwimmerCoupleF_Intro::
# 115 "data/maps/Route19/scripts.pory"
	.string "Heidi: We've been honing our Pokémon\n"
	.string "to their limit. You cannot win!$"

Route19_Tr4_SwimmerCoupleF_Defeat::
# 119 "data/maps/Route19/scripts.pory"
	.string "Heidi: I was sure we had it…$"

Route19_Tr4_SwimmerCoupleF_NotEnoughMons::
# 122 "data/maps/Route19/scripts.pory"
	.string "Heidi: You're going to need more\n"
	.string "Pokémon if you want to challenge us!$"

Route19_Tr4_SwimmerCoupleF_PostBattle::
# 126 "data/maps/Route19/scripts.pory"
	.string "Heidi: If we want to grow stronger,\n"
	.string "we need to work on our synergy.$"

R19Tr5_Intro::
# 137 "data/maps/Route19/scripts.pory"
	.string "My Pokémon like to play with others.\n"
	.string "Won't you entertain them?$"

R19Tr5_Lose::
# 141 "data/maps/Route19/scripts.pory"
	.string "You're being too rough…$"

R19Tr5_PostBattle::
# 144 "data/maps/Route19/scripts.pory"
	.string "Don't worry about my Pokémon.\n"
	.string "They'll be fine once they relax\l"
	.string "in the water for a moment.$"

R19Tr6_Intro::
# 155 "data/maps/Route19/scripts.pory"
	.string "The longer my Pokémon endure\n"
	.string "these waters, the faster they get!$"

R19Tr6_Lose::
# 159 "data/maps/Route19/scripts.pory"
	.string "Even with our speed,\n"
	.string "we lagged behind…$"

R19Tr6_PostBattle::
# 163 "data/maps/Route19/scripts.pory"
	.string "Speed is everything for us swimmers.\p"
	.string "For example, the faster I finish my\n"
	.string "workout and get myself in front of\l"
	.string "a warm hearth, the better.$"

R19Tr7_Intro::
# 175 "data/maps/Route19/scripts.pory"
	.string "You dare interrupt my\n"
	.string "training regimen?!$"

R19Tr7_Lose::
# 179 "data/maps/Route19/scripts.pory"
	.string "Hmph… Got lucky,\n"
	.string "I guess.$"

R19Tr7_PostBattle::
# 183 "data/maps/Route19/scripts.pory"
	.string "Leave me be.\n"
	.string "I'm in the middle of training.$"

R19Tr8_Intro::
# 193 "data/maps/Route19/scripts.pory"
	.string "Ah, an up-and-coming young trainer!\n"
	.string "Witness the power of ice!$"

R19Tr8_Lose::
# 197 "data/maps/Route19/scripts.pory"
	.string "What? How?!$"

R19Tr8_PostBattle::
# 200 "data/maps/Route19/scripts.pory"
	.string "Some believe us hikers to be focused\n"
	.string "on mostly Rock-type Pokémon.\p"
	.string "The truth is, we use whatever excels\n"
	.string "in the current climate we're in.$"

R19Tr9_Intro::
# 212 "data/maps/Route19/scripts.pory"
	.string "My partner was built for this.\n"
	.string "Behold!$"

R19Tr9_Lose::
# 216 "data/maps/Route19/scripts.pory"
	.string "We tried our best, and that's\n"
	.string "all that matters.$"

R19Tr9_PostBattle::
# 220 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr10_Intro::
# 229 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr10_Lose::
# 232 "data/maps/Route19/scripts.pory"
	.string "wip$"

R19Tr10_PostBattle::
# 235 "data/maps/Route19/scripts.pory"
	.string "wip$"

Route19_Camper_Text::
# 313 "data/maps/Route19/scripts.pory"
	.string "Have you seen any interesting\n"
	.string "Pokémon around lately?\p"
	.string "I've heard talks of some Pokémon\n"
	.string "disguising themselves as icebergs, but\l"
	.string "I've yet to see it with my own eyes.$"
