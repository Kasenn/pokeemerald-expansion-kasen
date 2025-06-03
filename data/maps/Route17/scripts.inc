Route17_MapScripts::
# 2 "data/maps/Route17/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Route17/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route17_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route17/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 4 "data/maps/Route17/scripts.pory"
	compare VAR_TEMP_4, 15
	goto_if_eq Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/Route17/scripts.pory"
	setweather WEATHER_SNOW
	return

Route17_MapScripts_MAP_SCRIPT_ON_RESUME:
# 9 "data/maps/Route17/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


Route17_Tr1_CamperM::
# 14 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR1_CAMPER_M, R17Tr1_Intro, R17Tr1_Lose
# 15 "data/maps/Route17/scripts.pory"
	msgbox R17Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr2_Picnicker1::
# 33 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR2_PICNICKER1, R17Tr2_Intro, R17Tr2_Lose
# 34 "data/maps/Route17/scripts.pory"
	msgbox R17Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr3_Picnicker2::
# 50 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR3_PICNICKER2, R17Tr3_Intro, R17Tr3_Lose
# 51 "data/maps/Route17/scripts.pory"
	msgbox R17Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr4_Maniac::
# 69 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR4_MANIAC, R17Tr4_Intro, R17Tr4_Lose
# 70 "data/maps/Route17/scripts.pory"
	msgbox R17Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr5_Scientist::
# 86 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR5_SCIENTIST, R17Tr5_Intro, R17Tr5_Lose
# 87 "data/maps/Route17/scripts.pory"
	msgbox R17Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr6_Hiker1::
# 104 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR6_HIKER1, R17Tr6_Intro, R17Tr6_Lose
# 105 "data/maps/Route17/scripts.pory"
	msgbox R17Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr7_Hiker2::
# 124 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR7_HIKER2, R17Tr7_Intro, R17Tr7_Lose
# 125 "data/maps/Route17/scripts.pory"
	msgbox R17Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Sign::
# 146 "data/maps/Route17/scripts.pory"
	msgbox Route17_Sign_Text, MSGBOX_SIGN
	return


Route17_Tr8_Cooltrainer::
# 155 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_R17_TR8_COOLTRAINER, R17Tr8_Intro, R17Tr8_Lose
# 156 "data/maps/Route17/scripts.pory"
	msgbox R17Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


R17Tr1_Intro::
# 18 "data/maps/Route17/scripts.pory"
	.string "This route can be perilous.\p"
	.string "Let me see if your Pokémon are\n"
	.string "capable of traversing it!$"

R17Tr1_Lose::
# 23 "data/maps/Route17/scripts.pory"
	.string "Your Pokémon are more than equipped\n"
	.string "to handle any danger.$"

R17Tr1_PostBattle::
# 27 "data/maps/Route17/scripts.pory"
	.string "We Pokémon Rangers must be constantly\n"
	.string "alert in areas like these.$"

R17Tr2_Intro::
# 37 "data/maps/Route17/scripts.pory"
	.string "Can your Pokémon take the heat?$"

R17Tr2_Lose::
# 40 "data/maps/Route17/scripts.pory"
	.string "Looks like we're the ones who\n"
	.string "got burned…$"

R17Tr2_PostBattle::
# 44 "data/maps/Route17/scripts.pory"
	.string "Make sure to carry Burn or Full\n"
	.string "Heals when traversing these routes.$"

R17Tr3_Intro::
# 54 "data/maps/Route17/scripts.pory"
	.string "Feeling the pressure of the hot air?\n"
	.string "Let my Pokémon cool you off!$"

R17Tr3_Lose::
# 58 "data/maps/Route17/scripts.pory"
	.string "Ice cold!$"

R17Tr3_PostBattle::
# 61 "data/maps/Route17/scripts.pory"
	.string "Have you ever wondered why Ice-type\n"
	.string "Pokémon are weak to Fire?\p"
	.string "Ice is just another form of Water,\n"
	.string "which is super effective against Fire.$"

R17Tr4_Intro::
# 73 "data/maps/Route17/scripts.pory"
	.string "For your sake, I hope your\n"
	.string "Pokémon don't get confused easily!$"

R17Tr4_Lose::
# 77 "data/maps/Route17/scripts.pory"
	.string "I'm confused…\n"
	.string "How did we lose?$"

R17Tr4_PostBattle::
# 81 "data/maps/Route17/scripts.pory"
	.string "How did this happen?$"

R17Tr5_Intro::
# 90 "data/maps/Route17/scripts.pory"
	.string "A new test subject.\n"
	.string "Fantastic!$"

R17Tr5_Lose::
# 94 "data/maps/Route17/scripts.pory"
	.string "Note to self: test subject\n"
	.string "exceeded expectations.$"

R17Tr5_PostBattle::
# 98 "data/maps/Route17/scripts.pory"
	.string "The test has now concluded.\n"
	.string "Thank you for participating.$"

R17Tr6_Intro::
# 108 "data/maps/Route17/scripts.pory"
	.string "Let's get ready to rumble!$"

R17Tr6_Lose::
# 111 "data/maps/Route17/scripts.pory"
	.string "Good show!$"

R17Tr6_PostBattle::
# 114 "data/maps/Route17/scripts.pory"
	.string "Sometimes this area gets hit by\n"
	.string "earthquakes, and new pockets of lava\l"
	.string "spring forth from the ground.\p"
	.string "Thankfully a Pokémon's earthquake is\n"
	.string "not nearly powerful enough to trigger\l"
	.string "a real earthquake.$"

R17Tr7_Intro::
# 128 "data/maps/Route17/scripts.pory"
	.string "Halt!\n"
	.string "Go no further!$"

R17Tr7_Lose::
# 132 "data/maps/Route17/scripts.pory"
	.string "You're strong, but I would still\n"
	.string "advice against continuing further.$"

R17Tr7_PostBattle::
# 136 "data/maps/Route17/scripts.pory"
	.string "Past me lies the Frigid Frontier.\p"
	.string "It is said that a legendary Pokémon\n"
	.string "once made the area its home, but\l"
	.string "nowadays the only sings of life ever\l"
	.string "inhabiting that place are the\l"
	.string "permafrozen trees.$"

Route17_Sign_Text::
# 148 "data/maps/Route17/scripts.pory"
	.string "{LEFT_ARROW} Frigid Frontier\n"
	.string "{RIGHT_ARROW} Route 17 Cable Car Station\l"
	.string "{DOWN_ARROW} Basalek Town$"

R17Tr8_Intro::
# 159 "data/maps/Route17/scripts.pory"
	.string "Even the snow can't quench the fire\n"
	.string "burning in my heart!$"

R17Tr8_Lose::
# 163 "data/maps/Route17/scripts.pory"
	.string "Snuffed out…$"

R17Tr8_PostBattle::
# 166 "data/maps/Route17/scripts.pory"
	.string "From here on out the weather's\n"
	.string "going to get much colder.\p"
	.string "I hope you're well prepared!$"
