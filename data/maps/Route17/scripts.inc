Route17_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route17_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route17_MapScripts_MAP_SCRIPT_ON_RESUME:
	setstepcallback STEP_CB_ASH
	return


Route17_Tr1_CamperM::
	trainerbattle_single TRAINER_R17_TR1_CAMPER_M, R17Tr1_Intro, R17Tr1_Lose
	msgbox R17Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr2_Picnicker1::
	trainerbattle_single TRAINER_R17_TR2_PICNICKER1, R17Tr2_Intro, R17Tr2_Lose
	msgbox R17Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr3_Picnicker2::
	trainerbattle_single TRAINER_R17_TR3_PICNICKER2, R17Tr3_Intro, R17Tr3_Lose
	msgbox R17Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr4_Maniac::
	trainerbattle_single TRAINER_R17_TR4_MANIAC, R17Tr4_Intro, R17Tr4_Lose
	msgbox R17Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr5_Scientist::
	trainerbattle_single TRAINER_R17_TR5_SCIENTIST, R17Tr5_Intro, R17Tr5_Lose
	msgbox R17Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr6_Hiker1::
	trainerbattle_single TRAINER_R17_TR6_HIKER1, R17Tr6_Intro, R17Tr6_Lose
	msgbox R17Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Tr7_Hiker2::
	trainerbattle_single TRAINER_R17_TR7_HIKER2, R17Tr7_Intro, R17Tr7_Lose
	msgbox R17Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route17_Sign::
	msgbox Route17_Sign_Text, MSGBOX_SIGN
	return


Route17_Tr8_Cooltrainer::
	trainerbattle_single TRAINER_R17_TR8_COOLTRAINER, R17Tr8_Intro, R17Tr8_Lose
	msgbox R17Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


R17Tr1_Intro::
	.string "This route can be perilous.\p"
	.string "Let me see if your Pokémon are\n"
	.string "capable of traversing it!$"

R17Tr1_Lose::
	.string "Your Pokémon are more than equipped\n"
	.string "to handle any danger.$"

R17Tr1_PostBattle::
	.string "We Pokémon Rangers must be constantly\n"
	.string "alert in areas like these.$"

R17Tr2_Intro::
	.string "Can your Pokémon take the heat?$"

R17Tr2_Lose::
	.string "Looks like we're the ones who\n"
	.string "got burned…$"

R17Tr2_PostBattle::
	.string "Make sure to carry Burn or Full\n"
	.string "Heals when traversing these routes.$"

R17Tr3_Intro::
	.string "You! Stop!\n"
	.string "Let me see your Pokémon!$"

R17Tr3_Lose::
	.string "Uh-huh, yes,\n"
	.string "those are some fine Pokémon.$"

R17Tr3_PostBattle::
	.string "You have some exceptional Pokémon.\n"
	.string "You must be taking good care of them.$"

R17Tr4_Intro::
	.string "For your sake, I hope your\n"
	.string "Pokémon don't get confused easily!$"

R17Tr4_Lose::
	.string "I'm confused…\n"
	.string "How did we lose?$"

R17Tr4_PostBattle::
	.string "How did this happen?$"

R17Tr5_Intro::
	.string "A new test subject.\n"
	.string "Fantastic!$"

R17Tr5_Lose::
	.string "Note to self: test subject\n"
	.string "exceeded expectations.$"

R17Tr5_PostBattle::
	.string "The test has now concluded.\n"
	.string "Thank you for participating.$"

R17Tr6_Intro::
	.string "Let's get ready to rumble!$"

R17Tr6_Lose::
	.string "Good show!$"

R17Tr6_PostBattle::
	.string "Sometimes this area gets hit by\n"
	.string "earthquakes, and new pockets of lava\l"
	.string "spring forth from the ground.\p"
	.string "Thankfully a Pokémon's earthquake is\n"
	.string "not nearly powerful enough to trigger\l"
	.string "a real earthquake.$"

R17Tr7_Intro::
	.string "Halt!\n"
	.string "Go no further!$"

R17Tr7_Lose::
	.string "You're strong, but I would still\n"
	.string "advice against continuing further.$"

R17Tr7_PostBattle::
	.string "Past me lies the Frigid Frontier.\p"
	.string "It is said that a legendary Pokémon\n"
	.string "once made the area its home, but\l"
	.string "nowadays the only sings of life ever\l"
	.string "inhabiting that place are the\l"
	.string "permafrozen woods.$"

Route17_Sign_Text::
	.string "{LEFT_ARROW} Frigid Frontier\n"
	.string "{RIGHT_ARROW} Route 17 Cable Car Station\l"
	.string "{DOWN_ARROW} Basalek Town$"

R17Tr8_Intro::
	.string "Even the snow can't quench the fire\n"
	.string "burning in my heart!$"

R17Tr8_Lose::
	.string "Snuffed out…$"

R17Tr8_PostBattle::
	.string "From here on out the weather's\n"
	.string "going to get much colder.\p"
	.string "I hope you're well prepared!$"
