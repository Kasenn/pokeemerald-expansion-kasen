Route18_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	cleartrainerflag TRAINER_R18_TR8_BREEDER_M
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


Route18_Tr1_Hiker1::
	trainerbattle_single TRAINER_R18_TR1_HIKER1, R18Tr1_Intro, R18Tr1_Lose
	msgbox R18Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr2_RangerM::
	trainerbattle_single TRAINER_R18_TR2_RANGER_M, R18Tr2_Intro, R18Tr2_Lose
	msgbox R18Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr3_Kindler::
	trainerbattle_single TRAINER_R18_TR3_KINDLER, R18Tr3_Intro, R18Tr3_Lose
	msgbox R18Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr4_Hiker2::
	trainerbattle_single TRAINER_R18_TR4_HIKER2, R18Tr4_Intro, R18Tr4_Lose
	msgbox R18Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr5_RangerF::
	trainerbattle_single TRAINER_R18_TR5_RANGER_F, R18Tr5_Intro, R18Tr5_Lose
	msgbox R18Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr6_Scientist::
	trainerbattle_single TRAINER_R18_TR6_SCIENTIST, R18Tr6_Intro, R18Tr6_Lose
	msgbox R18Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr7_Pokemaniac::
	trainerbattle_single TRAINER_R18_TR7_POKEMANIAC, R18Tr7_Intro, R18Tr7_Lose
	msgbox R18Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr8_BreederM::
	trainerbattle_single TRAINER_R18_TR8_BREEDER_M, R18Tr8_Intro, R18Tr8_Lose, SetR18BreederFlag
	msgbox R18Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


SetR18BreederFlag::
	setflag FLAG_R18_BREEDER_DEFEATED
	release
	end


Route18_Tr9_AceTrainerM::
	checktrainerflag TRAINER_R18_TR9_ACE_TRAINER_M
	goto_if 1, Route18_Tr9_AceTrainerM_1
	checktrainerflag TRAINER_R18_TR1_HIKER1
	goto_if 1, Route18_Tr9_AceTrainerM_5
Route18_Tr9_AceTrainerM_3:
	msgbox R18_Ace_NotEligible, MSGBOX_NPC
	end

Route18_Tr9_AceTrainerM_1:
	goto R18_Ace_PostBattle
	return

Route18_Tr9_AceTrainerM_2:
	goto R18_Ace_EligibleForBattle
	return

Route18_Tr9_AceTrainerM_4:
	checktrainerflag TRAINER_R18_TR3_KINDLER
	goto_if 1, Route18_Tr9_AceTrainerM_9
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_5:
	checktrainerflag TRAINER_R18_TR2_RANGER_M
	goto_if 1, Route18_Tr9_AceTrainerM_4
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_8:
	checktrainerflag TRAINER_R18_TR5_RANGER_F
	goto_if 1, Route18_Tr9_AceTrainerM_13
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_9:
	checktrainerflag TRAINER_R18_TR4_HIKER2
	goto_if 1, Route18_Tr9_AceTrainerM_8
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_12:
	checktrainerflag TRAINER_R18_TR7_POKEMANIAC
	goto_if 1, Route18_Tr9_AceTrainerM_16
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_13:
	checktrainerflag TRAINER_R18_TR6_SCIENTIST
	goto_if 1, Route18_Tr9_AceTrainerM_12
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_16:
	goto_if_set FLAG_R18_BREEDER_DEFEATED, Route18_Tr9_AceTrainerM_2
	goto Route18_Tr9_AceTrainerM_3


R18_Ace_EligibleForBattle::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_5, R18_Ace_EligibleForBattle_2
	msgbox R18_Ace_ReadyForBattleShort, MSGBOX_YESNO
R18_Ace_EligibleForBattle_1:
	compare VAR_RESULT, TRUE
	goto_if_eq R18_Ace_EligibleForBattle_6
R18_Ace_EligibleForBattle_5:
	msgbox R18_Ace_DeclineBattle, MSGBOX_NPC
	end

R18_Ace_EligibleForBattle_2:
	setflag FLAG_TEMP_5
	msgbox R18_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R18_Ace_EligibleForBattle_1

R18_Ace_EligibleForBattle_6:
	msgbox R18_Ace_BeginBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_R18_TR9_ACE_TRAINER_M, R18_Ace_Lose
	goto R18_Ace_PostBattle
	goto R18_Ace_EligibleForBattle_5


R18_Ace_PostBattle::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_LOADED_DICE, R18_Ace_PostBattle_2
	msgbox R18_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_LOADED_DICE
	compare VAR_RESULT, FALSE
	goto_if_eq R18_Ace_PostBattle_5
R18_Ace_PostBattle_4:
	giveitem ITEM_LOADED_DICE
	waitfanfare
	msgbox R18_Ace_ExplainReward
	setflag FLAG_OBTAINED_LOADED_DICE
	setvar VAR_0x8004, 30
	call RewardBP
	release
	end

R18_Ace_PostBattle_2:
	msgbox R18_Ace_PostBattle_Text, MSGBOX_NPC
	end

R18_Ace_PostBattle_5:
	goto ZeBagIsFull
	goto R18_Ace_PostBattle_4


R18Tr1_Intro::
	.string "My legs are solid from pounding up\n"
	.string "and down the mountains.\p"
	.string "They're not going to buckle easily,\n"
	.string "friend!$"

R18Tr1_Lose::
	.string "Ouch! My legs cramped up!$"

R18Tr1_PostBattle::
	.string "Try hiking, and I mean really\n"
	.string "pounding, on these mountain trails\l"
	.string "with a heavy pack weighing dozens of\l"
	.string "pounds.\p"
	.string "That, my friend, will get your body\n"
	.string "into serious shape.$"

R18Tr2_Intro::
	.string "I can see the plea in my\n"
	.string "Pokémon's eyes.\p"
	.string "To fight! And to win!$"

R18Tr2_Lose::
	.string "The eyes of your Pokémon\n"
	.string "are glimmering with strength!$"

R18Tr2_PostBattle::
	.string "I can see the plea in my\n"
	.string "Pokémon's eyes.\p"
	.string "They're saying,\n"
	.string "“Get back up! I'm OK!”\p"
	.string "Yep! I can understand my Pokémon's\n"
	.string "feelings by looking into their eyes.$"

R18Tr3_Intro::
	.string "There's nothing my companion and I\n"
	.string "cannot overcome!$"

R18Tr3_Lose::
	.string "We did our best, and that's\n"
	.string "all that matters.$"

R18Tr3_PostBattle::
	.string "A well-trained Pokémon can\n"
	.string "easily take on an entire team of\l"
	.string "untrained rabble.\p"
	.string "Your Pokémon are exceptionally\n"
	.string "trained.$"

R18Tr4_Intro::
	.string "Hahahaha!\n"
	.string "How about we have a battle?\l"
	.string "You and me!\l"
	.string "Hahahaha!$"

R18Tr4_Lose::
	.string "I lost!\n"
	.string "Hahahaha!$"

R18Tr4_PostBattle::
	.string "Hahahahaha! Something flew up my nose!\n"
	.string "Hahahaha-hatchoo!$"

R18Tr5_Intro::
	.string "I'll have a battle with you using\n"
	.string "my freshly caught Pokémon!$"

R18Tr5_Lose::
	.string "I had no idea how my Pokémon\n"
	.string "would fight. I mean, I caught them\l"
	.string "just a moment ago!$"

R18Tr5_PostBattle::
	.string "I may have just caught them, but\n"
	.string "I'll raise them to be strong!\l"
	.string "Our time together has just begun!$"

R18Tr6_Intro::
	.string "I've got a Pokémon that I simply\n"
	.string "must test on someone!$"

R18Tr6_Lose::
	.string "Results inconclusive.$"

R18Tr6_PostBattle::
	.string "Nobody knows how these lava pools\n"
	.string "are able to keep going in this\l"
	.string "freezing weather.\p"
	.string "Some suspect that the the lava is\n"
	.string "somehow being generated by a Pokémon.$"

R18Tr7_Intro::
	.string "I'll obliterate any trainer that\n"
	.string "crosses my path!$"

R18Tr7_Lose::
	.string "Mommy!$"

R18Tr7_PostBattle::
	.string "…What?\n"
	.string "Why are you looking at me like that?$"

R18Tr8_Intro::
	.string "We've just got to do what we can!$"

R18Tr8_Lose::
	.string "I feel like I understood what I\n"
	.string "could do and what I couldn't.$"

R18Tr8_PostBattle::
	.string "I'll try to increase the things I can\n"
	.string "do and challenge you again!$"

R18_Ace_NotEligible::
	.string "Think you have what it takes to\n"
	.string "challenge me?\p"
	.string "My Pokémon are ice cold.\p"
	.string "You better get warmed up by beating\n"
	.string "all the other trainers here first.$"

R18_Ace_ReadyForBattle::
	.string "I've seen you fighting the other\n"
	.string "trainers around here.\p"
	.string "With all that warm-up out of the way,\n"
	.string "you want to test your limits against\l"
	.string "an ice cold team like mine?$"

R18_Ace_ReadyForBattleShort::
	.string "Changed your mind, eh?$"

R18_Ace_BeginBattle::
	.string "Good.\n"
	.string "Prepare for a bone-chilling battle!$"

R18_Ace_DeclineBattle::
	.string "Heh, thought so.$"

R18_Ace_PostBattle_Text::
	.string "I expect to hear only\n"
	.string "great things about you.$"

R18_Ace_Reward::
	.string "I'm not going to try and make\n"
	.string "excuses for why I lost.\p"
	.string "This was all really a matter\p"
	.string "of skill.\p"
	.string "Here, maybe you can put this thing\n"
	.string "to a better use than I ever could.$"

R18_Ace_ExplainReward::
	.string "Give those loaded dice to a Pokémon\n"
	.string "to hold, and any multistrike move\l"
	.string "they use is guaranteed to hit\l"
	.string "the maximum number of times.\p"
	.string "Also, I want you to have these.$"

R18_Ace_Lose::
	.string "Amazing display of skill.\n"
	.string "I completely froze there!$"
