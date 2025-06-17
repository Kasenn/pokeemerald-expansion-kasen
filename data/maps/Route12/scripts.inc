Route12_MapScripts::
# 2 "data/maps/Route12/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, R12_ResetTrainer
	.byte 0


R12_ResetTrainer::
# 5 "data/maps/Route12/scripts.pory"
	cleartrainerflag TRAINER_R12_TR12_BUGMANIAC
# 6 "data/maps/Route12/scripts.pory"
	release
	end


R12_Sign::
# 11 "data/maps/Route12/scripts.pory"
	msgbox R12_Sign_Text, MSGBOX_SIGN
	end


R12_OldWoman::
# 19 "data/maps/Route12/scripts.pory"
	msgbox R12_OldWoman_Text, MSGBOX_NPC
	end


R12_Cyclist1::
# 28 "data/maps/Route12/scripts.pory"
	msgbox R12_Cyclist1_Text, MSGBOX_NPC
	end


R12_Cyclist2::
# 40 "data/maps/Route12/scripts.pory"
	goto_if_set FLAG_R12_XSPEED, R12_Cyclist2_2
# 44 "data/maps/Route12/scripts.pory"
	lock
# 45 "data/maps/Route12/scripts.pory"
	faceplayer
# 46 "data/maps/Route12/scripts.pory"
	msgbox R12_Cyclist2_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_X_SPEED
# 0 "data/maps/Route12/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R12_Cyclist2_5
R12_Cyclist2_4:
# 50 "data/maps/Route12/scripts.pory"
	giveitem ITEM_X_SPEED
# 51 "data/maps/Route12/scripts.pory"
	waitfanfare
# 52 "data/maps/Route12/scripts.pory"
	setflag FLAG_R12_XSPEED
# 53 "data/maps/Route12/scripts.pory"
	closemessage
# 54 "data/maps/Route12/scripts.pory"
	release
	end

R12_Cyclist2_2:
# 41 "data/maps/Route12/scripts.pory"
	msgbox R12_GottaGoFast, MSGBOX_NPC
	end

R12_Cyclist2_5:
# 48 "data/maps/Route12/scripts.pory"
	goto ZeBagIsFull
	goto R12_Cyclist2_4


Route12_Tr1_Triathlete_F::
# 72 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR1_TRIATHLETE_F, R12Tr1_Intro, R12Tr1_Lose
# 73 "data/maps/Route12/scripts.pory"
	msgbox R12Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr2_Triathlete_M::
# 90 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR2_TRIATHLETE_M, R12Tr2_Intro, R12Tr2_Lose
# 91 "data/maps/Route12/scripts.pory"
	msgbox R12Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr3_Triathlete_F2::
# 109 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR3_TRIATHLETE_F2, R12Tr3_Intro, R12Tr3_Lose
# 110 "data/maps/Route12/scripts.pory"
	msgbox R12Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr4_Triathlete_M2::
# 126 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR4_TRIATHLETE_M2, R12Tr4_Intro, R12Tr4_Lose
# 127 "data/maps/Route12/scripts.pory"
	msgbox R12Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr5_Triathlete_M3::
# 143 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR5_TRIATHLETE_M3, R12Tr5_Intro, R12Tr5_Lose
# 144 "data/maps/Route12/scripts.pory"
	msgbox R12Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr6_Triathlete_F3::
# 160 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR6_TRIATHLETE_F3, R12Tr6_Intro, R12Tr6_Lose
# 161 "data/maps/Route12/scripts.pory"
	msgbox R12Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr9_Psychic_M::
# 177 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR9_PSYCHIC_M, R12Tr9_Intro, R12Tr9_Lose
# 178 "data/maps/Route12/scripts.pory"
	msgbox R12Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr10_Hiker::
# 195 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR10_HIKER, R12Tr10_Intro, R12Tr10_Lose
# 196 "data/maps/Route12/scripts.pory"
	msgbox R12Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr11_Lass::
# 212 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR11_LASS, R12Tr11_Intro, R12Tr11_Lose
# 213 "data/maps/Route12/scripts.pory"
	msgbox R12Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr12_Bugmaniac::
# 230 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR12_BUGMANIAC, R12Tr12_Intro, R12Tr12_Lose
# 231 "data/maps/Route12/scripts.pory"
	msgbox R12Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr13_Ninjaboy::
# 249 "data/maps/Route12/scripts.pory"
	trainerbattle_single TRAINER_R12_TR13_NINJABOY, R12Tr13_Intro, R12Tr13_Lose
# 250 "data/maps/Route12/scripts.pory"
	msgbox R12Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


R12_HoneyTree::
# 265 "data/maps/Route12/scripts.pory"
	lock
# 266 "data/maps/Route12/scripts.pory"
	checkitem ITEM_HONEY, 1
# 267 "data/maps/Route12/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R12_HoneyTree_1
# 311 "data/maps/Route12/scripts.pory"
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

R12_HoneyTree_1:
# 269 "data/maps/Route12/scripts.pory"
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
# 270 "data/maps/Route12/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R12_HoneyTree_4
# 304 "data/maps/Route12/scripts.pory"
	waitmessage
# 305 "data/maps/Route12/scripts.pory"
	closemessage
# 306 "data/maps/Route12/scripts.pory"
	release
	end

R12_HoneyTree_4:
# 271 "data/maps/Route12/scripts.pory"
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
# 272 "data/maps/Route12/scripts.pory"
	waitmessage
# 273 "data/maps/Route12/scripts.pory"
	closemessage
# 274 "data/maps/Route12/scripts.pory"
	removeitem ITEM_HONEY, 1
# 275 "data/maps/Route12/scripts.pory"
	random 10
# 276 "data/maps/Route12/scripts.pory"
	switch VAR_RESULT
# 277 "data/maps/Route12/scripts.pory"
	case 0, R12_HoneyTree_9
# 279 "data/maps/Route12/scripts.pory"
	case 1, R12_HoneyTree_10
# 281 "data/maps/Route12/scripts.pory"
	case 2, R12_HoneyTree_11
# 283 "data/maps/Route12/scripts.pory"
	case 3, R12_HoneyTree_12
# 285 "data/maps/Route12/scripts.pory"
	case 4, R12_HoneyTree_13
# 287 "data/maps/Route12/scripts.pory"
	case 5, R12_HoneyTree_14
# 289 "data/maps/Route12/scripts.pory"
	case 6, R12_HoneyTree_15
# 291 "data/maps/Route12/scripts.pory"
	case 7, R12_HoneyTree_16
# 293 "data/maps/Route12/scripts.pory"
	case 8, R12_HoneyTree_17
# 295 "data/maps/Route12/scripts.pory"
	case 9, R12_HoneyTree_18
R12_HoneyTree_7:
# 298 "data/maps/Route12/scripts.pory"
	setflag FLAG_CHANCE_TO_HIDDEN_ABILITY
# 299 "data/maps/Route12/scripts.pory"
	dowildbattle
# 300 "data/maps/Route12/scripts.pory"
	release
	end

R12_HoneyTree_9:
# 278 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_COMFEY, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_10:
# 280 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_EMOLGA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_11:
# 282 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_EMOLGA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_12:
# 284 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_EMOLGA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_13:
# 286 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_NINCADA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_14:
# 288 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_NINCADA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_15:
# 290 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_NINCADA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_16:
# 292 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_COMFEY, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_17:
# 294 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_COMFEY, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_18:
# 296 "data/maps/Route12/scripts.pory"
	setwildbattlelevelrange SPECIES_MUNCHLAX, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7


R12_Sign_Text::
# 14 "data/maps/Route12/scripts.pory"
	.string "Cycling Road$"

R12_OldWoman_Text::
# 22 "data/maps/Route12/scripts.pory"
	.string "I don't have a bike, so I guess I need\n"
	.string "to trek through the lower route…$"

R12_Cyclist1_Text::
# 31 "data/maps/Route12/scripts.pory"
	.string "There have been propositions made to\n"
	.string "rebuild this road and make it more\l"
	.string "straight.\p"
	.string "I prefer it being all twisted;\n"
	.string "makes it more fun to slalom down.$"

R12_Cyclist2_Text::
# 57 "data/maps/Route12/scripts.pory"
	.string "Sometimes in Pokémon battles, speed\n"
	.string "can be the determining factor between\l"
	.string "a win and a lose.\p"
	.string "If your Pokémon are too slow, you\n"
	.string "should try using items like X Speed to\l"
	.string "really give them the edge.\l"
	.string "Here, try it out.$"

R12_GottaGoFast::
# 66 "data/maps/Route12/scripts.pory"
	.string "Gotta go quickly, or\n"
	.string "however the saying goes.$"

R12Tr1_Intro::
# 76 "data/maps/Route12/scripts.pory"
	.string "This is the Cycling Road.\p"
	.string "Hope you're ready for fast-paced\n"
	.string "Pokémon battles!$"

R12Tr1_Lose::
# 81 "data/maps/Route12/scripts.pory"
	.string "Too fast for me!$"

R12Tr1_PostBattle::
# 84 "data/maps/Route12/scripts.pory"
	.string "A lot of the people here are practicing\n"
	.string "for the Sandstone gym challenge.$"

R12Tr2_Intro::
# 94 "data/maps/Route12/scripts.pory"
	.string "Whoa! Watch it!\n"
	.string "I guess you're not used to bike racing.$"

R12Tr2_Lose::
# 98 "data/maps/Route12/scripts.pory"
	.string "Whoa!\n"
	.string "My brakes failed!$"

R12Tr2_PostBattle::
# 102 "data/maps/Route12/scripts.pory"
	.string "Flat tires and brake problems can\n"
	.string "cause serious injury!\l"
	.string "Inspect your BIKE for problems!$"

R12Tr3_Intro::
# 113 "data/maps/Route12/scripts.pory"
	.string "Yo, you!\n"
	.string "Can you keep up with my speed?$"

R12Tr3_Lose::
# 117 "data/maps/Route12/scripts.pory"
	.string "Crash and burn!$"

R12Tr3_PostBattle::
# 120 "data/maps/Route12/scripts.pory"
	.string "Speed alone won't let me win at Pokémon.\n"
	.string "I need to reconsider this…$"

R12Tr4_Intro::
# 130 "data/maps/Route12/scripts.pory"
	.string "Don't panic if your bike's going fast!$"

R12Tr4_Lose::
# 133 "data/maps/Route12/scripts.pory"
	.string "I shouldn't panic during Pokémon\n"
	.string "battles…$"

R12Tr4_PostBattle::
# 137 "data/maps/Route12/scripts.pory"
	.string "There's no need to panic or stress.\n"
	.string "Take it easy. There's plenty of time.$"

R12Tr5_Intro::
# 147 "data/maps/Route12/scripts.pory"
	.string "My Pokémon roll around at the speed\n"
	.string "of sound. You're too slow!$"

R12Tr5_Lose::
# 151 "data/maps/Route12/scripts.pory"
	.string "It's no use…$"

R12Tr5_PostBattle::
# 154 "data/maps/Route12/scripts.pory"
	.string "My speed couldn't outmatch your\n"
	.string "strength…$"

R12Tr6_Intro::
# 164 "data/maps/Route12/scripts.pory"
	.string "I've been riding without stopping.\n"
	.string "My thighs are like rocks!$"

R12Tr6_Lose::
# 168 "data/maps/Route12/scripts.pory"
	.string "I'm worried about muscle cramps…$"

R12Tr6_PostBattle::
# 171 "data/maps/Route12/scripts.pory"
	.string "Oh, you have some Gym Badges?\n"
	.string "No wonder you're so strong!$"

R12Tr9_Intro::
# 181 "data/maps/Route12/scripts.pory"
	.string "I have foreseen your intentions!\n"
	.string "I cannot possibly lose!$"

R12Tr9_Lose::
# 185 "data/maps/Route12/scripts.pory"
	.string "I failed to prophesize my own demise!$"

R12Tr9_PostBattle::
# 188 "data/maps/Route12/scripts.pory"
	.string "I see your future…\p"
	.string "Hmm…\n"
	.string "I see a shining light…$"

R12Tr10_Intro::
# 199 "data/maps/Route12/scripts.pory"
	.string "My rock Pokémon are more solid than\n"
	.string "this bridge going over us!$"

R12Tr10_Lose::
# 203 "data/maps/Route12/scripts.pory"
	.string "Oh, how the rock crumbles…$"

R12Tr10_PostBattle::
# 206 "data/maps/Route12/scripts.pory"
	.string "I don't trust the integrity of this\n"
	.string "bridge. That's why I would rather walk.$"

R12Tr11_Intro::
# 216 "data/maps/Route12/scripts.pory"
	.string "If I win, I'm going to use the victory\n"
	.string "money to buy a bike!$"

R12Tr11_Lose::
# 220 "data/maps/Route12/scripts.pory"
	.string "Maybe one day…$"

R12Tr11_PostBattle::
# 223 "data/maps/Route12/scripts.pory"
	.string "I wish I could afford a bike, but I\n"
	.string "can't help spending my money on\l"
	.string "other things…$"

R12Tr12_Intro::
# 234 "data/maps/Route12/scripts.pory"
	.string "I'm looking for rare Pokémon.\n"
	.string "Have you seen any?$"

R12Tr12_Lose::
# 238 "data/maps/Route12/scripts.pory"
	.string "Maybe I should stick to catching\n"
	.string "Pokémon…$"

R12Tr12_PostBattle::
# 242 "data/maps/Route12/scripts.pory"
	.string "I swear I saw this weird green alien\n"
	.string "looking thingy the other day, but\l"
	.string "everyone keeps calling me crazy!$"

R12Tr13_Intro::
# 253 "data/maps/Route12/scripts.pory"
	.string "Fear my ninja skills!$"

R12Tr13_Lose::
# 256 "data/maps/Route12/scripts.pory"
	.string "Ninja vanish!$"

R12Tr13_PostBattle::
# 259 "data/maps/Route12/scripts.pory"
	.string "I used “ninja vanish,” so you're\n"
	.string "not supposed to see me anymore.$"
