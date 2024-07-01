Route12_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, R12_ResetTrainer
	.byte 0


R12_ResetTrainer::
	cleartrainerflag TRAINER_R12_TR12_BUGMANIAC
	release
	end


R12_Sign::
	msgbox R12_Sign_Text, MSGBOX_SIGN
	end


R12_OldWoman::
	msgbox R12_OldWoman_Text, MSGBOX_NPC
	end


R12_Cyclist1::
	msgbox R12_Cyclist1_Text, MSGBOX_NPC
	end


R12_Cyclist2::
	goto_if_set FLAG_R12_XSPEED, R12_Cyclist2_2
	lock
	faceplayer
	msgbox R12_Cyclist2_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_X_SPEED
	compare VAR_RESULT, FALSE
	goto_if_eq R12_Cyclist2_5
	giveitem ITEM_X_SPEED
	waitfanfare
	setflag FLAG_R12_XSPEED
	closemessage
	release
	end

R12_Cyclist2_2:
	msgbox R12_GottaGoFast, MSGBOX_NPC
	end

R12_Cyclist2_5:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


Route12_Tr1_Triathlete_F::
	trainerbattle_single TRAINER_R12_TR1_TRIATHLETE_F, R12Tr1_Intro, R12Tr1_Lose
	msgbox R12Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr2_Triathlete_M::
	trainerbattle_single TRAINER_R12_TR2_TRIATHLETE_M, R12Tr2_Intro, R12Tr2_Lose
	msgbox R12Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr3_Triathlete_F2::
	trainerbattle_single TRAINER_R12_TR3_TRIATHLETE_F2, R12Tr3_Intro, R12Tr3_Lose
	msgbox R12Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr4_Triathlete_M2::
	trainerbattle_single TRAINER_R12_TR4_TRIATHLETE_M2, R12Tr4_Intro, R12Tr4_Lose
	msgbox R12Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr5_Triathlete_M3::
	trainerbattle_single TRAINER_R12_TR5_TRIATHLETE_M3, R12Tr5_Intro, R12Tr5_Lose
	msgbox R12Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr6_Triathlete_F3::
	trainerbattle_single TRAINER_R12_TR6_TRIATHLETE_F3, R12Tr6_Intro, R12Tr6_Lose
	msgbox R12Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr9_Psychic_M::
	trainerbattle_single TRAINER_R12_TR9_PSYCHIC_M, R12Tr9_Intro, R12Tr9_Lose
	msgbox R12Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr10_Hiker::
	trainerbattle_single TRAINER_R12_TR10_HIKER, R12Tr10_Intro, R12Tr10_Lose
	msgbox R12Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr11_Lass::
	trainerbattle_single TRAINER_R12_TR11_LASS, R12Tr11_Intro, R12Tr11_Lose
	msgbox R12Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr12_Bugmaniac::
	trainerbattle_single TRAINER_R12_TR12_BUGMANIAC, R12Tr12_Intro, R12Tr12_Lose
	msgbox R12Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


Route12_Tr13_Ninjaboy::
	trainerbattle_single TRAINER_R12_TR13_NINJABOY, R12Tr13_Intro, R12Tr13_Lose
	msgbox R12Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


R12_HoneyTree::
	lockall
	checkitem ITEM_HONEY, 1
	compare VAR_RESULT, TRUE
	goto_if_eq R12_HoneyTree_1
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

R12_HoneyTree_1:
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq R12_HoneyTree_4
	waitmessage
	closemessage
	release
	end

R12_HoneyTree_4:
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
	waitmessage
	closemessage
	removeitem ITEM_HONEY, 1
	random 10
	switch VAR_RESULT
	case 0, R12_HoneyTree_9
	case 1, R12_HoneyTree_10
	case 2, R12_HoneyTree_11
	case 3, R12_HoneyTree_12
	case 4, R12_HoneyTree_13
	case 5, R12_HoneyTree_14
	case 6, R12_HoneyTree_15
	case 7, R12_HoneyTree_16
	case 8, R12_HoneyTree_17
	case 9, R12_HoneyTree_18
R12_HoneyTree_7:
	dowildbattle
	release
	end

R12_HoneyTree_9:
	setwildbattlelevelrange SPECIES_COMFEY, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_10:
	setwildbattlelevelrange SPECIES_EMOLGA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_11:
	setwildbattlelevelrange SPECIES_EMOLGA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_12:
	setwildbattlelevelrange SPECIES_EMOLGA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_13:
	setwildbattlelevelrange SPECIES_NINCADA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_14:
	setwildbattlelevelrange SPECIES_NINCADA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_15:
	setwildbattlelevelrange SPECIES_NINCADA, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_16:
	setwildbattlelevelrange SPECIES_COMFEY, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_17:
	setwildbattlelevelrange SPECIES_COMFEY, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7

R12_HoneyTree_18:
	setwildbattlelevelrange SPECIES_MUNCHLAX, 23, ITEM_NONE, SPECIES_NONE, 26
	goto R12_HoneyTree_7


R12_Sign_Text::
	.string "Cycling Road$"

R12_OldWoman_Text::
	.string "I don't have a bike, so I guess I need\n"
	.string "to trek through the lower route…$"

R12_Cyclist1_Text::
	.string "There have been propositions made to\n"
	.string "rebuild this road and make it more\l"
	.string "straight.\p"
	.string "I prefer it being all twisted;\n"
	.string "makes it more fun to slalom down.$"

R12_Cyclist2_Text::
	.string "Sometimes in Pokémon battles, speed\n"
	.string "can be the determining factor between\l"
	.string "a win and a lose.\p"
	.string "If your Pokémon are too slow, you\n"
	.string "should try using items like X Speed to\l"
	.string "really give them the edge.\l"
	.string "Here, try it out.$"

R12_GottaGoFast::
	.string "Gotta go quickly, or\n"
	.string "however the saying goes.$"

R12Tr1_Intro::
	.string "This is the Cycling Road.\p"
	.string "Hope you're ready for fast-paced\n"
	.string "Pokémon battles!$"

R12Tr1_Lose::
	.string "Too fast for me!$"

R12Tr1_PostBattle::
	.string "A lot of the people here are practicing\n"
	.string "for the Sandstone gym challenge.$"

R12Tr2_Intro::
	.string "Whoa! Watch it!\n"
	.string "I guess you're not used to bike racing.$"

R12Tr2_Lose::
	.string "Whoa!\n"
	.string "My brakes failed!$"

R12Tr2_PostBattle::
	.string "Flat tires and brake problems can\n"
	.string "cause serious injury!\l"
	.string "Inspect your BIKE for problems!$"

R12Tr3_Intro::
	.string "Yo, you!\n"
	.string "Can you keep up with my speed?$"

R12Tr3_Lose::
	.string "Crash and burn!$"

R12Tr3_PostBattle::
	.string "Speed alone won't let me win at Pokémon.\n"
	.string "I need to reconsider this…$"

R12Tr4_Intro::
	.string "Don't panic if your bike's going fast!$"

R12Tr4_Lose::
	.string "I shouldn't panic during Pokémon\n"
	.string "battles…$"

R12Tr4_PostBattle::
	.string "There's no need to panic or stress.\n"
	.string "Take it easy. There's plenty of time.$"

R12Tr5_Intro::
	.string "My Pokémon roll around at the speed\n"
	.string "of sound. You're too slow!$"

R12Tr5_Lose::
	.string "It's no use…$"

R12Tr5_PostBattle::
	.string "My speed couldn't outmatch your\n"
	.string "strength…$"

R12Tr6_Intro::
	.string "I've been riding without stopping.\n"
	.string "My thighs are like rocks!$"

R12Tr6_Lose::
	.string "I'm worried about muscle cramps…$"

R12Tr6_PostBattle::
	.string "Oh, you have some Gym Badges?\n"
	.string "No wonder you're so strong!$"

R12Tr9_Intro::
	.string "I have foreseen your intentions!\n"
	.string "I cannot possibly lose!$"

R12Tr9_Lose::
	.string "I failed to prophesize my own demise!$"

R12Tr9_PostBattle::
	.string "I see your future…\p"
	.string "Hmm…\n"
	.string "I see a shining light…$"

R12Tr10_Intro::
	.string "My rock Pokémon are more solid than\n"
	.string "this bridge going over us!$"

R12Tr10_Lose::
	.string "Oh, how the rock crumbles…$"

R12Tr10_PostBattle::
	.string "I don't trust the integrity of this\n"
	.string "bridge. That's why I would rather walk.$"

R12Tr11_Intro::
	.string "If I win, I'm going to use the victory\n"
	.string "money to buy a bike!$"

R12Tr11_Lose::
	.string "Maybe one day…$"

R12Tr11_PostBattle::
	.string "I wish I could afford a bike, but I\n"
	.string "can't help spending my money on\l"
	.string "other things…$"

R12Tr12_Intro::
	.string "I'm looking for rare Pokémon.\n"
	.string "Have you seen any?$"

R12Tr12_Lose::
	.string "Maybe I should stick to catching\n"
	.string "Pokémon…$"

R12Tr12_PostBattle::
	.string "I swear I saw this weird green alien\n"
	.string "looking thingy the other day, but\l"
	.string "everyone keeps calling me crazy!$"

R12Tr13_Intro::
	.string "Fear my ninja skills!$"

R12Tr13_Lose::
	.string "Ninja vanish!$"

R12Tr13_PostBattle::
	.string "I used “ninja vanish,” so you're\n"
	.string "not supposed to see me anymore.$"
