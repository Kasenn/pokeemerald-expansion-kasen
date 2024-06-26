Route23_MapScripts::
	.byte 0


R23_Girl1::
	msgbox R23_Girl1_Text, MSGBOX_NPC
	return


Route23_Tr1_Breeder_M::
	trainerbattle_single TRAINER_R23_TR1_BREEDER_M, R23Tr1_Intro, R23Tr1_Lose
	msgbox R23Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr2_Maniac::
	trainerbattle_single TRAINER_R23_TR2_MANIAC, R23Tr2_Intro, R23Tr2_Lose
	msgbox R23Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr3_Twin1::
	trainerbattle_double TRAINER_R23_TR3_TWINS, R23Tr3_Intro, R23Tr3_Lose, R23Tr3_NotEnoughMons
	msgbox R23Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr3_Twin2::
	trainerbattle_double TRAINER_R23_TR3_TWINS, R23Tr3_Intro2, R23Tr3_Lose2, R23Tr3_NotEnoughMons2
	msgbox R23Tr3_PostBattle2, MSGBOX_AUTOCLOSE
	end


Route23_Tr4_Breeder_F::
	trainerbattle_single TRAINER_R23_TR4_BREEDER_F, R23Tr4_Intro, R23Tr4_Lose
	msgbox R23Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr5_Hexmaniac_1::
	trainerbattle_single TRAINER_R23_TR5_HEXMANIAC_1, R23Tr5_Intro, R23Tr5_Lose
	msgbox R23Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr6_Psychic_M::
	trainerbattle_single TRAINER_R23_TR6_PSYCHIC_M, R23Tr6_Intro, R23Tr6_Lose
	msgbox R23Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr7_Hexmaniac_2::
	trainerbattle_single TRAINER_R23_TR7_HEXMANIAC_2, R23Tr7_Intro, R23Tr7_Lose
	msgbox R23Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr8_Triathlete_F::
	trainerbattle_single TRAINER_R23_TR8_TRIATHLETE_F, R23Tr8_Intro, R23Tr8_Lose
	msgbox R23Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr9_Fisherman::
	trainerbattle_single TRAINER_R23_TR9_FISHERMAN, R23Tr9_Intro, R23Tr9_Lose
	msgbox R23Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr10_Battlegirl::
	trainerbattle_single TRAINER_R23_TR10_BATTLEGIRL, R23Tr10_Intro, R23Tr10_Lose
	msgbox R23Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr11_Ninjaboy::
	trainerbattle_single TRAINER_R23_TR11_NINJABOY, R23Tr11_Intro, R23Tr11_Lose
	msgbox R23Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr12_Acetrainer::
	checktrainerflag TRAINER_R23_TR12_ACETRAINER
	goto_if 1, Route23_Tr12_Acetrainer_1
	checktrainerflag TRAINER_R23_TR1_BREEDER_M
	goto_if 1, Route23_Tr12_Acetrainer_5
Route23_Tr12_Acetrainer_3:
	msgbox R23_Ace_NotEligible, MSGBOX_NPC
	end

Route23_Tr12_Acetrainer_1:
	goto R23_Ace_PostBattle
	return

Route23_Tr12_Acetrainer_2:
	goto R23_Ace_EligibleForBattle
	return

Route23_Tr12_Acetrainer_4:
	checktrainerflag TRAINER_R23_TR3_TWINS
	goto_if 1, Route23_Tr12_Acetrainer_9
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_5:
	checktrainerflag TRAINER_R23_TR2_MANIAC
	goto_if 1, Route23_Tr12_Acetrainer_4
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_8:
	checktrainerflag TRAINER_R23_TR5_HEXMANIAC_1
	goto_if 1, Route23_Tr12_Acetrainer_13
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_9:
	checktrainerflag TRAINER_R23_TR4_BREEDER_F
	goto_if 1, Route23_Tr12_Acetrainer_8
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_12:
	checktrainerflag TRAINER_R23_TR7_HEXMANIAC_2
	goto_if 1, Route23_Tr12_Acetrainer_17
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_13:
	checktrainerflag TRAINER_R23_TR6_PSYCHIC_M
	goto_if 1, Route23_Tr12_Acetrainer_12
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_16:
	checktrainerflag TRAINER_R23_TR9_FISHERMAN
	goto_if 1, Route23_Tr12_Acetrainer_20
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_17:
	checktrainerflag TRAINER_R23_TR8_TRIATHLETE_F
	goto_if 1, Route23_Tr12_Acetrainer_16
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_20:
	checktrainerflag TRAINER_R23_TR10_BATTLEGIRL
	goto_if 1, Route23_Tr12_Acetrainer_2
	goto Route23_Tr12_Acetrainer_3


R23_Ace_EligibleForBattle::
	lockall
	faceplayer
	goto_if_unset FLAG_TEMP_5, R23_Ace_EligibleForBattle_2
	msgbox R23_Ace_ReadyForBattleShort, MSGBOX_YESNO
R23_Ace_EligibleForBattle_1:
	compare VAR_RESULT, TRUE
	goto_if_eq R23_Ace_EligibleForBattle_6
R23_Ace_EligibleForBattle_5:
	msgbox R23_Ace_DeclineBattle, MSGBOX_NPC
	end

R23_Ace_EligibleForBattle_2:
	setflag FLAG_TEMP_5
	msgbox R23_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R23_Ace_EligibleForBattle_1

R23_Ace_EligibleForBattle_6:
	msgbox R23_Ace_BeginBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_R23_TR12_ACETRAINER, R23_Ace_Lose
	goto R23_Ace_PostBattle
	goto R23_Ace_EligibleForBattle_5


R23_Ace_PostBattle::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_CHOICE_SCARF, R23_Ace_PostBattle_2
	msgbox R23_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_CHOICE_SCARF
	compare VAR_RESULT, FALSE
	goto_if_eq R23_Ace_PostBattle_5
	giveitem ITEM_CHOICE_SCARF
	waitfanfare
	msgbox R23_Ace_ExplainReward
	setflag FLAG_OBTAINED_CHOICE_SCARF
	setvar VAR_0x8004, 30
	call RewardBP
	release
	end

R23_Ace_PostBattle_2:
	msgbox R23_Ace_PostBattle_Text, MSGBOX_NPC
	end

R23_Ace_PostBattle_5:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


R23_Girl1_Text::
	.string "This place looks so dreary.\p"
	.string "I need to get to Crystalpine Town,\n"
	.string "but I think I'll find another route…$"

R23Tr1_Intro::
	.string "My Pokémon aren't fans of this\n"
	.string "weather, but they'll battle you\l"
	.string "either way!$"

R23Tr1_Lose::
	.string "Should've listened to my gut and\n"
	.string "not fought…$"

R23Tr1_PostBattle::
	.string "Certain Pokémon like certain weathers\n"
	.string "more than the other.\p"
	.string "Water Pokémon generally do great\n"
	.string "in rain.$"

R23Tr2_Intro::
	.string "This is the perfect weather for an\n"
	.string "epic battle! Come, face me!$"

R23Tr2_Lose::
	.string "Truly, this battle will go down in\n"
	.string "history!$"

R23Tr2_PostBattle::
	.string "I love the weather here.\p"
	.string "It's dreadful and tempestuous,\n"
	.string "just like my soul.$"

R23Tr3_Intro::
	.string "Belle: Come play with us!$"

R23Tr3_Lose::
	.string "Belle: You're no fun…$"

R23Tr3_PostBattle::
	.string "Belle: We are so in sync with each\n"
	.string "other, we often say the same thing!$"

R23Tr3_NotEnoughMons::
	.string "Belle: Come play with us!\p"
	.string "…Oh, but you don't have enough\n"
	.string "Pokémon…$"

R23Tr3_Intro2::
	.string "Bella: Come play with us!$"

R23Tr3_Lose2::
	.string "Bella: You're no fun…$"

R23Tr3_PostBattle2::
	.string "Bella: We are so in sync with each\n"
	.string "other, we often say the same thing!$"

R23Tr3_NotEnoughMons2::
	.string "Bella: Come play with us!\p"
	.string "…Oh, but you don't have enough\n"
	.string "Pokémon…$"

R23Tr4_Intro::
	.string "Strength in numbers!$"

R23Tr4_Lose::
	.string "Looks like quality trumps quantity…$"

R23Tr4_PostBattle::
	.string "Having many Pokémon is great for\n"
	.string "variety, but it doesn't help if you\l"
	.string "forget to train everyone equally.$"

R23Tr5_Intro::
	.string "Why do you disturb me?$"

R23Tr5_Lose::
	.string "Is it finally over?$"

R23Tr5_PostBattle::
	.string "Why do you still disturb me?$"

R23Tr6_Intro::
	.string "The route ahead is cursed!\p"
	.string "I will stop you from going further!$"

R23Tr6_Lose::
	.string "Maybe you have what it takes to\n"
	.string "withstand the curse…$"

R23Tr6_PostBattle::
	.string "I sense a strong presence slumbering\n"
	.string "nearby.\l"
	.string "I advise against going any further.$"

R23Tr7_Intro::
	.string "You seem like you have interesting\n"
	.string "Pokémon.\l"
	.string "Can you show them to me?$"

R23Tr7_Lose::
	.string "Interesting…$"

R23Tr7_PostBattle::
	.string "You have interesting Pokémon.\p"
	.string "I hope I can study them more\n"
	.string "sometime soon.$"

R23Tr8_Intro::
	.string "You! Battle! Now!$"

R23Tr8_Lose::
	.string "No more battling.\n"
	.string "Must train more!$"

R23Tr8_PostBattle::
	.string "I'm running in water.\p"
	.string "That means I'm practicing for\n"
	.string "two sports at the same time!$"

R23Tr9_Intro::
	.string "With my companions beside me, I'm not\n"
	.string "afraid of a small thunderstorm.\l"
	.string "Here, let me introduce you to them!$"

R23Tr9_Lose::
	.string "A small setback, but we recover.$"

R23Tr9_PostBattle::
	.string "Fishing in a thunderstorm can be\n"
	.string "dangerous, but thanks to my Pokémon,\l"
	.string "I never have to fear a thing.$"

R23Tr10_Intro::
	.string "Are you here to train as well?\n"
	.string "Great, let's be training partners!$"

R23Tr10_Lose::
	.string "Good hustle!$"

R23Tr10_PostBattle::
	.string "We will keep training until my Pokémon\n"
	.string "is able to punch a Ghost Pokémon!$"

R23Tr11_Intro::
	.string "I lay in ambush, and a trainer has\n"
	.string "landed in my trap!$"

R23Tr11_Lose::
	.string "If you don't lose, how am I supposed\n"
	.string "to have fun playing ninja?$"

R23Tr11_PostBattle::
	.string "I'm going to ambush a weaker-looking\n"
	.string "trainer next time.$"

R23_Ace_PostBattle_Text::
	.string "Even if we lost, my Pokémon and I\n"
	.string "are satisfied.$"

R23_Ace_NotEligible::
	.string "My Pokémon absolutely adore this\n"
	.string "weather.\p"
	.string "The issue is, they are getting a bit\n"
	.string "frustrated because there's no-one\l"
	.string "around that's strong enough to stand\l"
	.string "against them in battle.\p"
	.string "Do you think you might stand\n"
	.string "a chance?\p"
	.string "Prove it to us by defeating the other\n"
	.string "trainers in this area first.$"

R23_Ace_Lose::
	.string "Even with the weather on our side,\n"
	.string "we still lost…$"

R23_Ace_ReadyForBattle::
	.string "My Pokémon absolutely adore this\n"
	.string "weather.\p"
	.string "The issue is, they are getting a bit\n"
	.string "frustrated because there's no-one\l"
	.string "around that's strong enough to stand\l"
	.string "against them in battle.\p"
	.string "You look like someone who could\n"
	.string "pose a challenge.\p"
	.string "Care for a Pokémon battle in this\n"
	.string "high-intensity weather?$"

R23_Ace_ReadyForBattleShort::
	.string "I see you're back.\p"
	.string "My Pokémon are anxiously waiting for\n"
	.string "a challenge.\p"
	.string "Will you be that challenge?$"

R23_Ace_BeginBattle::
	.string "Great! Let's have some fun!$"

R23_Ace_DeclineBattle::
	.string "That's a shame. My Pokémon and I were\n"
	.string "actually getting a bit excited.\p"
	.string "Let me know if you change your mind.$"

R23_Ace_Reward::
	.string "Thanks to this beneficial weather,\n"
	.string "I thought we had this in the bag.\p"
	.string "That was a fun battle.\p"
	.string "To commemorate it, I want you to\n"
	.string "have this.$"

R23_Ace_ExplainReward::
	.string "Having a Pokémon hold that Choice\n"
	.string "Scarf will give a massive boost to\l"
	.string "its speed.\p"
	.string "The downside is, it makes it able to\n"
	.string "only focus on using a single move.\p"
	.string "I considered using it myself, but I\n"
	.string "didn't see the need after witnessing\l"
	.string "just how fast all my Pokémon were in\l"
	.string "this weather.\p"
	.string "Anyway, I want you to have these\n"
	.string "as well.$"
