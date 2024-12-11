Route9_MapScripts::
	.byte 0


Route9_Tr1_Swimmer_M::
	trainerbattle_single TRAINER_R9_TR1_SWIMMER_M, R9Tr1_Intro, R9Tr1_Lose
	msgbox R9Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr2_BlackBelt::
	trainerbattle_single TRAINER_R9_TR2_BLACKBELT, R9Tr2_Intro, R9Tr2_Lose
	msgbox R9Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr3_BirdKeeper::
	trainerbattle_single TRAINER_R9_TR3_BIRDKEEPER, R9Tr3_Intro, R9Tr3_Lose
	msgbox R9Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr4_BattleGirl::
	trainerbattle_single TRAINER_R9_TR4_BATTLEGIRL, R9Tr4_Intro, R9Tr4_Lose
	msgbox R9Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr5_Swimmer_F::
	trainerbattle_single TRAINER_R9_TR5_SWIMMER_F, R9Tr5_Intro, R9Tr5_Lose
	msgbox R9Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr6_Fisherman::
	trainerbattle_single TRAINER_R9_TR6_FISHERMAN, R9Tr6_Intro, R9Tr6_Lose
	msgbox R9Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr7_Hiker::
	trainerbattle_single TRAINER_R9_TR7_HIKER, R9Tr7_Intro, R9Tr7_Lose
	msgbox R9Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr8_Collector::
	trainerbattle_single TRAINER_R9_TR8_COLLECTOR, R9Tr8_Intro, R9Tr8_Lose
	msgbox R9Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr9_Swimmer_M2::
	trainerbattle_single TRAINER_R9_TR9_SWIMMER_M2, R9Tr9_Intro, R9Tr9_Lose
	msgbox R9Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr10_LandSwimmer::
	trainerbattle_single TRAINER_R9_TR10_LANDSWIMMER, R9Tr10_Intro, R9Tr10_Lose
	msgbox R9Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


R9Tr1_Intro::
	.string "I try not to swim where the currents\n"
	.string "are too strong.$"

R9Tr1_Lose::
	.string "Oh, please, no!$"

R9Tr1_PostBattle::
	.string "If I get swept away, I'll lose all my\n"
	.string "sense of place…$"

R9Tr2_Intro::
	.string "I contemplate Pokémon 24 hours a day.\n"
	.string "How could you possibly beat me?$"

R9Tr2_Lose::
	.string "I lose.\n"
	.string "I will concede defeat.$"

R9Tr2_PostBattle::
	.string "Urggh…\n"
	.string "You're a Pokémon fanatic, aren't you?\p"
	.string "You must contemplate Pokémon 24 hours\n"
	.string "a day, don't you?$"

R9Tr3_Intro::
	.string "I do not fear you, for I have\n"
	.string "my trusty birds with me!$"

R9Tr3_Lose::
	.string "Maybe I should've been more\n"
	.string "afraid…$"

R9Tr3_PostBattle::
	.string "With my trusty birds, I have no\n"
	.string "need to brave the currents.\p"
	.string "My birds will take me anywhere\n"
	.string "I want to go.$"

R9Tr4_Intro::
	.string "My Pokémon are faster than these\n"
	.string "currents. Try to keep up!$"

R9Tr4_Lose::
	.string "Couldn't keep up…$"

R9Tr4_PostBattle::
	.string "Your Pokémon is so strong, I bet\n"
	.string "it could swim against the currents!$"

R9Tr5_Intro::
	.string "No tiny current can wash away\n"
	.string "my Pokémon.\p"
	.string "Witness their sturdiness!$"

R9Tr5_Lose::
	.string "We may be immovable against\n"
	.string "currents, but not other Pokémon…$"

R9Tr5_PostBattle::
	.string "You never know where a current will\n"
	.string "take you.\p"
	.string "Sometimes it's treasure,\n"
	.string "sometimes Pokémon battle.\l"
	.string "Both exciting in their own way.$"

R9Tr6_Intro::
	.string "Check out all these Pokémon I caught!$"

R9Tr6_Lose::
	.string "Guess all the ones I caught were just\n"
	.string "small fries…$"

R9Tr6_PostBattle::
	.string "One day I will fish up a Pokémon no\n"
	.string "trainer can defeat. Mark my words!$"

R9Tr7_Intro::
	.string "I've fought hundreds of battles.\n"
	.string "You can't win!$"

R9Tr7_Lose::
	.string "I've also lost hundreds of battles…$"

R9Tr7_PostBattle::
	.string "I never battle when I know I'll win.\n"
	.string "I like to battle at the razor's edge of\l"
	.string "victory and defeat!$"

R9Tr8_Intro::
	.string "Welcome!\n"
	.string "I've been expecting you!$"

R9Tr8_Lose::
	.string "No! Please!$"

R9Tr8_PostBattle::
	.string "A strong child trainer\n"
	.string "That's so annoying!$"

R9Tr9_Intro::
	.string "I've led a life of woe and misery…\n"
	.string "I've been cast away, and this is where\l"
	.string "I've drifted…$"

R9Tr9_Lose::
	.string "Another loss…$"

R9Tr9_PostBattle::
	.string "A life adrift…\n"
	.string "I don't want it anymore!$"

R9Tr10_Intro::
	.string "Did the currents carry you here, too?\n"
	.string "This must have been fated.\l"
	.string "Let's battle!$"

R9Tr10_Lose::
	.string "Strong!\n"
	.string "Too much so!$"

R9Tr10_PostBattle::
	.string "It's just my luck that a tough TRAINER\n"
	.string "like you would drift here…\l"
	.string "I must be cursed…$"
