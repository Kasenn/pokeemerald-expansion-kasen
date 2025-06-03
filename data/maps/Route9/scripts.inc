Route9_MapScripts::
	.byte 0


Route9_Tr1_Swimmer_M::
# 4 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR1_SWIMMER_M, R9Tr1_Intro, R9Tr1_Lose
# 5 "data/maps/Route9/scripts.pory"
	msgbox R9Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr2_BlackBelt::
# 21 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR2_BLACKBELT, R9Tr2_Intro, R9Tr2_Lose
# 22 "data/maps/Route9/scripts.pory"
	msgbox R9Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr3_BirdKeeper::
# 41 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR3_BIRDKEEPER, R9Tr3_Intro, R9Tr3_Lose
# 42 "data/maps/Route9/scripts.pory"
	msgbox R9Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr4_BattleGirl::
# 61 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR4_BATTLEGIRL, R9Tr4_Intro, R9Tr4_Lose
# 62 "data/maps/Route9/scripts.pory"
	msgbox R9Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr5_Swimmer_F::
# 78 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR5_SWIMMER_F, R9Tr5_Intro, R9Tr5_Lose
# 79 "data/maps/Route9/scripts.pory"
	msgbox R9Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr6_Fisherman::
# 100 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR6_FISHERMAN, R9Tr6_Intro, R9Tr6_Lose
# 101 "data/maps/Route9/scripts.pory"
	msgbox R9Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr7_Hiker::
# 117 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR7_HIKER, R9Tr7_Intro, R9Tr7_Lose
# 118 "data/maps/Route9/scripts.pory"
	msgbox R9Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr8_Collector::
# 135 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR8_COLLECTOR, R9Tr8_Intro, R9Tr8_Lose
# 136 "data/maps/Route9/scripts.pory"
	msgbox R9Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr9_Swimmer_M2::
# 152 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR9_SWIMMER_M2, R9Tr9_Intro, R9Tr9_Lose
# 153 "data/maps/Route9/scripts.pory"
	msgbox R9Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route9_Tr10_LandSwimmer::
# 170 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_R9_TR10_LANDSWIMMER, R9Tr10_Intro, R9Tr10_Lose
# 171 "data/maps/Route9/scripts.pory"
	msgbox R9Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


R9Tr1_Intro::
# 8 "data/maps/Route9/scripts.pory"
	.string "I try not to swim where the currents\n"
	.string "are too strong.$"

R9Tr1_Lose::
# 12 "data/maps/Route9/scripts.pory"
	.string "Oh, please, no!$"

R9Tr1_PostBattle::
# 15 "data/maps/Route9/scripts.pory"
	.string "If I get swept away, I'll lose all my\n"
	.string "sense of place…$"

R9Tr2_Intro::
# 25 "data/maps/Route9/scripts.pory"
	.string "I contemplate Pokémon 24 hours a day.\n"
	.string "How could you possibly beat me?$"

R9Tr2_Lose::
# 29 "data/maps/Route9/scripts.pory"
	.string "I lose.\n"
	.string "I will concede defeat.$"

R9Tr2_PostBattle::
# 33 "data/maps/Route9/scripts.pory"
	.string "Urggh…\n"
	.string "You're a Pokémon fanatic, aren't you?\p"
	.string "You must contemplate Pokémon 24 hours\n"
	.string "a day, don't you?$"

R9Tr3_Intro::
# 45 "data/maps/Route9/scripts.pory"
	.string "I do not fear you, for I have\n"
	.string "my trusty birds with me!$"

R9Tr3_Lose::
# 49 "data/maps/Route9/scripts.pory"
	.string "Maybe I should've been more\n"
	.string "afraid…$"

R9Tr3_PostBattle::
# 53 "data/maps/Route9/scripts.pory"
	.string "With my trusty birds, I have no\n"
	.string "need to brave the currents.\p"
	.string "My birds will take me anywhere\n"
	.string "I want to go.$"

R9Tr4_Intro::
# 65 "data/maps/Route9/scripts.pory"
	.string "My Pokémon are faster than these\n"
	.string "currents. Try to keep up!$"

R9Tr4_Lose::
# 69 "data/maps/Route9/scripts.pory"
	.string "Couldn't keep up…$"

R9Tr4_PostBattle::
# 72 "data/maps/Route9/scripts.pory"
	.string "Your Pokémon is so strong, I bet\n"
	.string "it could swim against the currents!$"

R9Tr5_Intro::
# 82 "data/maps/Route9/scripts.pory"
	.string "No tiny current can wash away\n"
	.string "my Pokémon.\p"
	.string "Witness their sturdiness!$"

R9Tr5_Lose::
# 87 "data/maps/Route9/scripts.pory"
	.string "We may be immovable against\n"
	.string "currents, but not other Pokémon…$"

R9Tr5_PostBattle::
# 91 "data/maps/Route9/scripts.pory"
	.string "You never know where a current will\n"
	.string "take you.\p"
	.string "Sometimes it's treasure,\n"
	.string "sometimes Pokémon battle.\l"
	.string "Both exciting in their own way.$"

R9Tr6_Intro::
# 104 "data/maps/Route9/scripts.pory"
	.string "Check out all these Pokémon I caught!$"

R9Tr6_Lose::
# 107 "data/maps/Route9/scripts.pory"
	.string "Guess all the ones I caught were just\n"
	.string "small fries…$"

R9Tr6_PostBattle::
# 111 "data/maps/Route9/scripts.pory"
	.string "One day I will fish up a Pokémon no\n"
	.string "trainer can defeat. Mark my words!$"

R9Tr7_Intro::
# 121 "data/maps/Route9/scripts.pory"
	.string "I've fought hundreds of battles.\n"
	.string "You can't win!$"

R9Tr7_Lose::
# 125 "data/maps/Route9/scripts.pory"
	.string "I've also lost hundreds of battles…$"

R9Tr7_PostBattle::
# 128 "data/maps/Route9/scripts.pory"
	.string "I never battle when I know I'll win.\n"
	.string "I like to battle at the razor's edge of\l"
	.string "victory and defeat!$"

R9Tr8_Intro::
# 139 "data/maps/Route9/scripts.pory"
	.string "Welcome!\n"
	.string "I've been expecting you!$"

R9Tr8_Lose::
# 143 "data/maps/Route9/scripts.pory"
	.string "No! Please!$"

R9Tr8_PostBattle::
# 146 "data/maps/Route9/scripts.pory"
	.string "A strong child trainer\n"
	.string "That's so annoying!$"

R9Tr9_Intro::
# 156 "data/maps/Route9/scripts.pory"
	.string "I've led a life of woe and misery…\n"
	.string "I've been cast away, and this is where\l"
	.string "I've drifted…$"

R9Tr9_Lose::
# 161 "data/maps/Route9/scripts.pory"
	.string "Another loss…$"

R9Tr9_PostBattle::
# 164 "data/maps/Route9/scripts.pory"
	.string "A life adrift…\n"
	.string "I don't want it anymore!$"

R9Tr10_Intro::
# 174 "data/maps/Route9/scripts.pory"
	.string "Did the currents carry you here, too?\n"
	.string "This must have been fated.\l"
	.string "Let's battle!$"

R9Tr10_Lose::
# 179 "data/maps/Route9/scripts.pory"
	.string "Strong!\n"
	.string "Too much so!$"

R9Tr10_PostBattle::
# 183 "data/maps/Route9/scripts.pory"
	.string "It's just my luck that a tough TRAINER\n"
	.string "like you would drift here…\l"
	.string "I must be cursed…$"
