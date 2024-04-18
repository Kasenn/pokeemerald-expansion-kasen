Route13_MapScripts::
	.byte 0


R13_BeachSwimmer::
	msgbox R13_BeachSwimmer_Text, MSGBOX_NPC
	end


Route13_Tr1_Birdkeeper::
	msgbox Route13_Tr1_Birdkeeper_Text, MSGBOX_NPC
	end


Route13_Tr2_Runner_M::
	trainerbattle_single TRAINER_R13_TR2_RUNNER_M, R13Tr2_Intro, R13Tr2_Lose
	msgbox R13Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route13_Tr3_ExpertcoupleMan::
	trainerbattle_double TRAINER_R13_TR3_EXPERTCOUPLE, R13Tr3_IntroMan, R13Tr3_LoseMan, R13Tr3_NotEnoughMan
	msgbox R13Tr3_PostBattleMan, MSGBOX_AUTOCLOSE
	end


Route13_Tr3_ExpertcoupleWoman::
	trainerbattle_double TRAINER_R13_TR3_EXPERTCOUPLE, R13Tr3_IntroWoman, R13Tr3_LoseWoman, R13Tr3_NotEnoughWoman
	msgbox R13Tr3_PostBattleWoman, MSGBOX_AUTOCLOSE
	end


Route13_Tr4_Hiker::
	trainerbattle_single TRAINER_R13_TR4_HIKER, R13Tr4_Intro, R13Tr4_Lose
	msgbox R13Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route13_Tr5_Blackbelt::
	trainerbattle_single TRAINER_R13_TR5_BLACKBELT, R13Tr5_Intro, R13Tr5_Lose
	msgbox R13Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


SetR11RivalFight::
	lock
	msgbox WantToSetRivalFight, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SetR11RivalFight_2
	checkitem ITEM_DOWSING_MACHINE
	compare VAR_RESULT, TRUE
	goto_if_eq SetR11RivalFight_5
	msgbox RivalFought, MSGBOX_NPC
	clearflag FLAG_RIVAL_HARBOR_ANGRY
	additem ITEM_DOWSING_MACHINE
SetR11RivalFight_4:
	end

SetR11RivalFight_2:
	closemessage
	release
	end

SetR11RivalFight_5:
	msgbox RivalNotFought, MSGBOX_NPC
	setflag FLAG_RIVAL_HARBOR_ANGRY
	removeitem ITEM_DOWSING_MACHINE
	goto SetR11RivalFight_4


R13_BeachSwimmer_Text::
	.string "It's a long way to Galewind City.\p"
	.string "Not even an experienced swimmer like\n"
	.string "me would risk trying to swim there\l"
	.string "without Pokémon to aid me.$"

Route13_Tr1_Birdkeeper_Text::
	.string "Planning to head to Galewind City?\n"
	.string "I wouldn't bother, unless you have\n"
	.string "surfing Pokémon or flying Pokémon\l"
	.string "that can take you there directly.$"

R13Tr2_Intro::
	.string "I'm building stamina to eventually be\n"
	.string "able to cross the ocean to Galewind.\l"
	.string "Will you be my training partner?$"

R13Tr2_Lose::
	.string "Our stamina wasn't enough to\n"
	.string "outlast you…$"

R13Tr2_PostBattle::
	.string "It was nice training with you, but\n"
	.string "I think I'll stick to training solo.$"

R13Tr3_IntroMan::
	.string "Hank: Our bond is unbreakable!\n"
	.string "You shall witness it first-hand!$"

R13Tr3_LoseMan::
	.string "Hank: You may have won, but our bond\n"
	.string "still remains!$"

R13Tr3_NotEnoughMan::
	.string "Hank: You seem to be carrying only\n"
	.string "a single Pokémon.\l"
	.string "This would not be a fair fight.$"

R13Tr3_PostBattleMan::
	.string "Hank: When battling with another\n"
	.string "person, not only do you have to\l"
	.string "consider your own actions, but you\l"
	.string "must also take into account the other\l"
	.string "person's actions as well.$"

R13Tr3_IntroWoman::
	.string "Hope: Through thick and thin, we will\n"
	.string "prevail!$"

R13Tr3_LoseWoman::
	.string "Hope: We may have lost today,\n"
	.string "but we will rise again!$"

R13Tr3_NotEnoughWoman::
	.string "Hope: It's good that you're bonding\n"
	.string "with your one and only Pokémon,\l"
	.string "but you should really get more\l"
	.string "before considering challenging us.$"

R13Tr3_PostBattleWoman::
	.string "Hope: Double battles sure are\n"
	.string "something else.\p"
	.string "It can sometimes be easy to overwhelm\n"
	.string "one opponent, but what then, when\l"
	.string "the other opponent is left unchecked?$"

R13Tr4_Intro::
	.string "On these rocky cliffs, my Pokémon\n"
	.string "have a clear advantage!$"

R13Tr4_Lose::
	.string "I thought we had the high ground…$"

R13Tr4_PostBattle::
	.string "Perching yourself by the side of\n"
	.string "a busy road is a great way to train.\p"
	.string "Sometimes things may not go your way,\n"
	.string "but I'd say it's still super effective.$"

R13Tr5_Intro::
	.string "I have mastered the art of the fist!\n"
	.string "You stand no chance!$"

R13Tr5_Lose::
	.string "I may be a master, but you,\n"
	.string "are a grandmaster…$"

R13Tr5_PostBattle::
	.string "Have you ever wondered how those stairs\n"
	.string "on the cliffs were made?\p"
	.string "My ancestors used their bare fists to\n"
	.string "carve them directly to the cliff face.$"

WantToSetRivalFight::
	.string "This option will change an upcoming\n"
	.string "rival event based on whether the rival\l"
	.string "was fought in the Coralgrove elevator.\p"
	.string "Would you like to switch the event?$"

RivalNotFought::
	.string "Rival set to NOT FOUGHT.\n"
	.string "Removed the Itemfinder.$"

RivalFought::
	.string "Rival set to FOUGHT.\n"
	.string "Added the Itemfinder.$"
