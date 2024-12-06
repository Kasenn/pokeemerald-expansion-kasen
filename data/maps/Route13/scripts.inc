Route13_MapScripts::
	.byte 0


R13_BeachSwimmer::
# 33 "data/maps/Route13/scripts.pory"
	msgbox R13_BeachSwimmer_Text, MSGBOX_NPC
	end


Route13_Tr1_Birdkeeper::
# 44 "data/maps/Route13/scripts.pory"
	msgbox Route13_Tr1_Birdkeeper_Text, MSGBOX_NPC
	end


Route13_Tr2_Runner_M::
# 56 "data/maps/Route13/scripts.pory"
	trainerbattle_single TRAINER_R13_TR2_RUNNER_M, R13Tr2_Intro, R13Tr2_Lose
# 57 "data/maps/Route13/scripts.pory"
	msgbox R13Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route13_Tr3_ExpertcoupleMan::
# 75 "data/maps/Route13/scripts.pory"
	trainerbattle_double TRAINER_R13_TR3_EXPERTCOUPLE, R13Tr3_IntroMan, R13Tr3_LoseMan, R13Tr3_NotEnoughMan
# 76 "data/maps/Route13/scripts.pory"
	msgbox R13Tr3_PostBattleMan, MSGBOX_AUTOCLOSE
	end


Route13_Tr3_ExpertcoupleWoman::
# 102 "data/maps/Route13/scripts.pory"
	trainerbattle_double TRAINER_R13_TR3_EXPERTCOUPLE, R13Tr3_IntroWoman, R13Tr3_LoseWoman, R13Tr3_NotEnoughWoman
# 103 "data/maps/Route13/scripts.pory"
	msgbox R13Tr3_PostBattleWoman, MSGBOX_AUTOCLOSE
	end


Route13_Tr4_Hiker::
# 130 "data/maps/Route13/scripts.pory"
	trainerbattle_single TRAINER_R13_TR4_HIKER, R13Tr4_Intro, R13Tr4_Lose
# 131 "data/maps/Route13/scripts.pory"
	msgbox R13Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route13_Tr5_Blackbelt::
# 149 "data/maps/Route13/scripts.pory"
	trainerbattle_single TRAINER_R13_TR5_BLACKBELT, R13Tr5_Intro, R13Tr5_Lose
# 150 "data/maps/Route13/scripts.pory"
	msgbox R13Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


RelocatedFromRoute13::
# 20 "data/maps/Route13/scripts.pory"
	.string "A new update has been applied\n"
	.string "automatically.\p"
	.string "This enables followers and setting\n"
	.string "a preferred follower from party screen,\l"
	.string "an updated “Stats” page in the\l"
	.string "start menu + a lot of bug fixes.\p"
	.string "Due to changes made to this route,\n"
	.string "you will be teleported to the closest\l"
	.string "Pokémon Center.$"

R13_BeachSwimmer_Text::
# 36 "data/maps/Route13/scripts.pory"
	.string "It's a long way to Galewind City.\p"
	.string "Not even an experienced swimmer like\n"
	.string "me would risk trying to swim there\l"
	.string "without Pokémon to aid me.$"

Route13_Tr1_Birdkeeper_Text::
# 47 "data/maps/Route13/scripts.pory"
	.string "Planning to head to Galewind City?\n"
	.string "Good luck with that.\p"
	.string "The weather has been real bad lately,\n"
	.string "so the odds of the bridge being open\l"
	.string "are close to zero.$"

R13Tr2_Intro::
# 60 "data/maps/Route13/scripts.pory"
	.string "I'm building stamina to eventually be\n"
	.string "able to cross the ocean to Galewind.\l"
	.string "Will you be my training partner?$"

R13Tr2_Lose::
# 65 "data/maps/Route13/scripts.pory"
	.string "Our stamina wasn't enough to\n"
	.string "outlast you…$"

R13Tr2_PostBattle::
# 69 "data/maps/Route13/scripts.pory"
	.string "It was nice training with you, but\n"
	.string "I think I'll stick to training solo.$"

R13Tr3_IntroMan::
# 80 "data/maps/Route13/scripts.pory"
	.string "Hank: Our bond is unbreakable!\n"
	.string "You shall witness it first-hand!$"

R13Tr3_LoseMan::
# 84 "data/maps/Route13/scripts.pory"
	.string "Hank: You may have won, but our bond\n"
	.string "still remains!$"

R13Tr3_NotEnoughMan::
# 88 "data/maps/Route13/scripts.pory"
	.string "Hank: You seem to be carrying only\n"
	.string "a single Pokémon.\l"
	.string "This would not be a fair fight.$"

R13Tr3_PostBattleMan::
# 93 "data/maps/Route13/scripts.pory"
	.string "Hank: When battling with another\n"
	.string "person, not only do you have to\l"
	.string "consider your own actions, but you\l"
	.string "must also take into account the other\l"
	.string "person's actions as well.$"

R13Tr3_IntroWoman::
# 107 "data/maps/Route13/scripts.pory"
	.string "Hope: Through thick and thin, we will\n"
	.string "prevail!$"

R13Tr3_LoseWoman::
# 111 "data/maps/Route13/scripts.pory"
	.string "Hope: We may have lost today,\n"
	.string "but we will rise again!$"

R13Tr3_NotEnoughWoman::
# 115 "data/maps/Route13/scripts.pory"
	.string "Hope: It's good that you're bonding\n"
	.string "with your one and only Pokémon,\l"
	.string "but you should really get more\l"
	.string "before considering challenging us.$"

R13Tr3_PostBattleWoman::
# 121 "data/maps/Route13/scripts.pory"
	.string "Hope: Double battles sure are\n"
	.string "something else.\p"
	.string "It can sometimes be easy to overwhelm\n"
	.string "one opponent, but what then, when\l"
	.string "the other opponent is left unchecked?$"

R13Tr4_Intro::
# 134 "data/maps/Route13/scripts.pory"
	.string "On these rocky cliffs, my Pokémon\n"
	.string "have a clear advantage!$"

R13Tr4_Lose::
# 138 "data/maps/Route13/scripts.pory"
	.string "I thought we had the high ground…$"

R13Tr4_PostBattle::
# 141 "data/maps/Route13/scripts.pory"
	.string "Perching yourself by the side of\n"
	.string "a busy road is a great way to train.\p"
	.string "Sometimes things may not go your way,\n"
	.string "but I'd say it's still super effective.$"

R13Tr5_Intro::
# 153 "data/maps/Route13/scripts.pory"
	.string "I have mastered the art of the fist!\n"
	.string "You stand no chance!$"

R13Tr5_Lose::
# 157 "data/maps/Route13/scripts.pory"
	.string "I may be a master, but you,\n"
	.string "are a grandmaster…$"

R13Tr5_PostBattle::
# 161 "data/maps/Route13/scripts.pory"
	.string "Have you ever wondered how those stairs\n"
	.string "on the cliffs were made?\p"
	.string "My ancestors used their bare fists to\n"
	.string "carve them directly to the cliff face.$"
