Route23_MapScripts::
	.byte 0


R23_Girl1::
# 6 "data/maps/Route23/scripts.pory"
	msgbox R23_Girl1_Text, MSGBOX_NPC
	return


Route23_Tr1_Breeder_M::
# 16 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR1_BREEDER_M, R23Tr1_Intro, R23Tr1_Lose
# 17 "data/maps/Route23/scripts.pory"
	msgbox R23Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr2_Maniac::
# 37 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR2_MANIAC, R23Tr2_Intro, R23Tr2_Lose
# 38 "data/maps/Route23/scripts.pory"
	msgbox R23Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr3_Twin1::
# 56 "data/maps/Route23/scripts.pory"
	trainerbattle_double TRAINER_R23_TR3_TWINS, R23Tr3_Intro, R23Tr3_Lose, R23Tr3_NotEnoughMons
# 57 "data/maps/Route23/scripts.pory"
	msgbox R23Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr3_Twin2::
# 77 "data/maps/Route23/scripts.pory"
	trainerbattle_double TRAINER_R23_TR3_TWINS, R23Tr3_Intro2, R23Tr3_Lose2, R23Tr3_NotEnoughMons2
# 78 "data/maps/Route23/scripts.pory"
	msgbox R23Tr3_PostBattle2, MSGBOX_AUTOCLOSE
	end


Route23_Tr4_Breeder_F::
# 98 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR4_BREEDER_F, R23Tr4_Intro, R23Tr4_Lose
# 99 "data/maps/Route23/scripts.pory"
	msgbox R23Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr5_Hexmaniac_1::
# 115 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR5_HEXMANIAC_1, R23Tr5_Intro, R23Tr5_Lose
# 116 "data/maps/Route23/scripts.pory"
	msgbox R23Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr6_Psychic_M::
# 130 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR6_PSYCHIC_M, R23Tr6_Intro, R23Tr6_Lose
# 131 "data/maps/Route23/scripts.pory"
	msgbox R23Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr7_Hexmaniac_2::
# 149 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR7_HEXMANIAC_2, R23Tr7_Intro, R23Tr7_Lose
# 150 "data/maps/Route23/scripts.pory"
	msgbox R23Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr8_Triathlete_F::
# 168 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR8_TRIATHLETE_F, R23Tr8_Intro, R23Tr8_Lose
# 169 "data/maps/Route23/scripts.pory"
	msgbox R23Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr9_Fisherman::
# 186 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR9_FISHERMAN, R23Tr9_Intro, R23Tr9_Lose
# 187 "data/maps/Route23/scripts.pory"
	msgbox R23Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr10_Battlegirl::
# 205 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR10_BATTLEGIRL, R23Tr10_Intro, R23Tr10_Lose
# 206 "data/maps/Route23/scripts.pory"
	msgbox R23Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr11_Ninjaboy::
# 222 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_R23_TR11_NINJABOY, R23Tr11_Intro, R23Tr11_Lose
# 223 "data/maps/Route23/scripts.pory"
	msgbox R23Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route23_Tr12_Acetrainer::
# 240 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR12_ACETRAINER
	goto_if 1, Route23_Tr12_Acetrainer_1
# 243 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR1_BREEDER_M
	goto_if 1, Route23_Tr12_Acetrainer_5
Route23_Tr12_Acetrainer_3:
# 257 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_NotEligible, MSGBOX_NPC
	end

Route23_Tr12_Acetrainer_1:
# 241 "data/maps/Route23/scripts.pory"
	goto R23_Ace_PostBattle
	return

Route23_Tr12_Acetrainer_2:
# 254 "data/maps/Route23/scripts.pory"
	goto R23_Ace_EligibleForBattle
	return

Route23_Tr12_Acetrainer_4:
# 245 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR3_TWINS
	goto_if 1, Route23_Tr12_Acetrainer_9
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_5:
# 244 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR2_MANIAC
	goto_if 1, Route23_Tr12_Acetrainer_4
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_8:
# 247 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR5_HEXMANIAC_1
	goto_if 1, Route23_Tr12_Acetrainer_13
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_9:
# 246 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR4_BREEDER_F
	goto_if 1, Route23_Tr12_Acetrainer_8
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_12:
# 249 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR7_HEXMANIAC_2
	goto_if 1, Route23_Tr12_Acetrainer_17
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_13:
# 248 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR6_PSYCHIC_M
	goto_if 1, Route23_Tr12_Acetrainer_12
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_16:
# 251 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR9_FISHERMAN
	goto_if 1, Route23_Tr12_Acetrainer_20
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_17:
# 250 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR8_TRIATHLETE_F
	goto_if 1, Route23_Tr12_Acetrainer_16
	goto Route23_Tr12_Acetrainer_3

Route23_Tr12_Acetrainer_20:
# 252 "data/maps/Route23/scripts.pory"
	checktrainerflag TRAINER_R23_TR10_BATTLEGIRL
	goto_if 1, Route23_Tr12_Acetrainer_2
	goto Route23_Tr12_Acetrainer_3


R23_Ace_EligibleForBattle::
# 263 "data/maps/Route23/scripts.pory"
	lockall
# 264 "data/maps/Route23/scripts.pory"
	faceplayer
# 265 "data/maps/Route23/scripts.pory"
	goto_if_unset FLAG_TEMP_5, R23_Ace_EligibleForBattle_2
# 270 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_ReadyForBattleShort, MSGBOX_YESNO
R23_Ace_EligibleForBattle_1:
# 272 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R23_Ace_EligibleForBattle_6
R23_Ace_EligibleForBattle_5:
# 277 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_DeclineBattle, MSGBOX_NPC
	end

R23_Ace_EligibleForBattle_2:
# 266 "data/maps/Route23/scripts.pory"
	setflag FLAG_TEMP_5
# 267 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R23_Ace_EligibleForBattle_1

R23_Ace_EligibleForBattle_6:
# 273 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_BeginBattle, MSGBOX_DEFAULT
# 274 "data/maps/Route23/scripts.pory"
	trainerbattle_no_intro TRAINER_R23_TR12_ACETRAINER, R23_Ace_Lose
# 275 "data/maps/Route23/scripts.pory"
	goto R23_Ace_PostBattle
	goto R23_Ace_EligibleForBattle_5


R23_Ace_PostBattle::
# 282 "data/maps/Route23/scripts.pory"
	lock
# 283 "data/maps/Route23/scripts.pory"
	faceplayer
# 284 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_OBTAINED_CHOICE_SCARF, R23_Ace_PostBattle_2
# 288 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_CHOICE_SCARF
# 0 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R23_Ace_PostBattle_5
R23_Ace_PostBattle_4:
# 292 "data/maps/Route23/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
# 293 "data/maps/Route23/scripts.pory"
	waitfanfare
# 294 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_ExplainReward
# 295 "data/maps/Route23/scripts.pory"
	setflag FLAG_OBTAINED_CHOICE_SCARF
# 296 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8004, 30
# 297 "data/maps/Route23/scripts.pory"
	call RewardBP
# 298 "data/maps/Route23/scripts.pory"
	release
	end

R23_Ace_PostBattle_2:
# 285 "data/maps/Route23/scripts.pory"
	msgbox R23_Ace_PostBattle_Text, MSGBOX_NPC
	end

R23_Ace_PostBattle_5:
# 290 "data/maps/Route23/scripts.pory"
	goto ZeBagIsFull
	goto R23_Ace_PostBattle_4


R23_Girl1_Text::
# 8 "data/maps/Route23/scripts.pory"
	.string "This place looks so dreary.\p"
	.string "I need to get to Crystalpine Town,\n"
	.string "but I think I'll find another route…$"

R23Tr1_Intro::
# 20 "data/maps/Route23/scripts.pory"
	.string "My Pokémon aren't fans of this\n"
	.string "weather, but they'll battle you\l"
	.string "either way!$"

R23Tr1_Lose::
# 25 "data/maps/Route23/scripts.pory"
	.string "Should've listened to my gut and\n"
	.string "not fought…$"

R23Tr1_PostBattle::
# 29 "data/maps/Route23/scripts.pory"
	.string "Certain Pokémon like certain weathers\n"
	.string "more than the other.\p"
	.string "Water Pokémon generally do great\n"
	.string "in rain.$"

R23Tr2_Intro::
# 41 "data/maps/Route23/scripts.pory"
	.string "This is the perfect weather for an\n"
	.string "epic battle! Come, face me!$"

R23Tr2_Lose::
# 45 "data/maps/Route23/scripts.pory"
	.string "Truly, this battle will go down in\n"
	.string "history!$"

R23Tr2_PostBattle::
# 49 "data/maps/Route23/scripts.pory"
	.string "I love the weather here.\p"
	.string "It's dreadful and tempestuous,\n"
	.string "just like my soul.$"

R23Tr3_Intro::
# 60 "data/maps/Route23/scripts.pory"
	.string "Belle: Come play with us!$"

R23Tr3_Lose::
# 63 "data/maps/Route23/scripts.pory"
	.string "Belle: You're no fun…$"

R23Tr3_PostBattle::
# 66 "data/maps/Route23/scripts.pory"
	.string "Belle: We are so in sync with each\n"
	.string "other, we often say the same thing!$"

R23Tr3_NotEnoughMons::
# 70 "data/maps/Route23/scripts.pory"
	.string "Belle: Come play with us!\p"
	.string "…Oh, but you don't have enough\n"
	.string "Pokémon…$"

R23Tr3_Intro2::
# 81 "data/maps/Route23/scripts.pory"
	.string "Bella: Come play with us!$"

R23Tr3_Lose2::
# 84 "data/maps/Route23/scripts.pory"
	.string "Bella: You're no fun…$"

R23Tr3_PostBattle2::
# 87 "data/maps/Route23/scripts.pory"
	.string "Bella: We are so in sync with each\n"
	.string "other, we often say the same thing!$"

R23Tr3_NotEnoughMons2::
# 91 "data/maps/Route23/scripts.pory"
	.string "Bella: Come play with us!\p"
	.string "…Oh, but you don't have enough\n"
	.string "Pokémon…$"

R23Tr4_Intro::
# 102 "data/maps/Route23/scripts.pory"
	.string "Strength in numbers!$"

R23Tr4_Lose::
# 105 "data/maps/Route23/scripts.pory"
	.string "Looks like quality trumps quantity…$"

R23Tr4_PostBattle::
# 108 "data/maps/Route23/scripts.pory"
	.string "Having many Pokémon is great for\n"
	.string "variety, but it doesn't help if you\l"
	.string "forget to train everyone equally.$"

R23Tr5_Intro::
# 119 "data/maps/Route23/scripts.pory"
	.string "Why do you disturb me?$"

R23Tr5_Lose::
# 122 "data/maps/Route23/scripts.pory"
	.string "Is it finally over?$"

R23Tr5_PostBattle::
# 125 "data/maps/Route23/scripts.pory"
	.string "Why do you still disturb me?$"

R23Tr6_Intro::
# 134 "data/maps/Route23/scripts.pory"
	.string "The route ahead is cursed!\p"
	.string "I will stop you from going further!$"

R23Tr6_Lose::
# 138 "data/maps/Route23/scripts.pory"
	.string "Maybe you have what it takes to\n"
	.string "withstand the curse…$"

R23Tr6_PostBattle::
# 142 "data/maps/Route23/scripts.pory"
	.string "I sense a strong presence slumbering\n"
	.string "nearby.\l"
	.string "I advise against going any further.$"

R23Tr7_Intro::
# 153 "data/maps/Route23/scripts.pory"
	.string "You seem like you have interesting\n"
	.string "Pokémon.\l"
	.string "Can you show them to me?$"

R23Tr7_Lose::
# 158 "data/maps/Route23/scripts.pory"
	.string "Interesting…$"

R23Tr7_PostBattle::
# 161 "data/maps/Route23/scripts.pory"
	.string "You have interesting Pokémon.\p"
	.string "I hope I can study them more\n"
	.string "sometime soon.$"

R23Tr8_Intro::
# 172 "data/maps/Route23/scripts.pory"
	.string "You! Battle! Now!$"

R23Tr8_Lose::
# 175 "data/maps/Route23/scripts.pory"
	.string "No more battling.\n"
	.string "Must train more!$"

R23Tr8_PostBattle::
# 179 "data/maps/Route23/scripts.pory"
	.string "I'm running in water.\p"
	.string "That means I'm practicing for\n"
	.string "two sports at the same time!$"

R23Tr9_Intro::
# 190 "data/maps/Route23/scripts.pory"
	.string "With my companions beside me, I'm not\n"
	.string "afraid of a small thunderstorm.\l"
	.string "Here, let me introduce you to them!$"

R23Tr9_Lose::
# 195 "data/maps/Route23/scripts.pory"
	.string "A small setback, but we recover.$"

R23Tr9_PostBattle::
# 198 "data/maps/Route23/scripts.pory"
	.string "Fishing in a thunderstorm can be\n"
	.string "dangerous, but thanks to my Pokémon,\l"
	.string "I never have to fear a thing.$"

R23Tr10_Intro::
# 209 "data/maps/Route23/scripts.pory"
	.string "Are you here to train as well?\n"
	.string "Great, let's be training partners!$"

R23Tr10_Lose::
# 213 "data/maps/Route23/scripts.pory"
	.string "Good hustle!$"

R23Tr10_PostBattle::
# 216 "data/maps/Route23/scripts.pory"
	.string "We will keep training until my Pokémon\n"
	.string "is able to punch a Ghost Pokémon!$"

R23Tr11_Intro::
# 226 "data/maps/Route23/scripts.pory"
	.string "I lay in ambush, and a trainer has\n"
	.string "landed in my trap!$"

R23Tr11_Lose::
# 230 "data/maps/Route23/scripts.pory"
	.string "If you don't lose, how am I supposed\n"
	.string "to have fun playing ninja?$"

R23Tr11_PostBattle::
# 234 "data/maps/Route23/scripts.pory"
	.string "I'm going to ambush a weaker-looking\n"
	.string "trainer next time.$"

R23_Ace_PostBattle_Text::
# 302 "data/maps/Route23/scripts.pory"
	.string "Even if we lost, my Pokémon and I\n"
	.string "are satisfied.$"

R23_Ace_NotEligible::
# 306 "data/maps/Route23/scripts.pory"
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
# 318 "data/maps/Route23/scripts.pory"
	.string "Even with the weather on our side,\n"
	.string "we still lost…$"

R23_Ace_ReadyForBattle::
# 322 "data/maps/Route23/scripts.pory"
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
# 334 "data/maps/Route23/scripts.pory"
	.string "I see you're back.\p"
	.string "My Pokémon are anxiously waiting for\n"
	.string "a challenge.\p"
	.string "Will you be that challenge?$"

R23_Ace_BeginBattle::
# 340 "data/maps/Route23/scripts.pory"
	.string "Great! Let's have some fun!$"

R23_Ace_DeclineBattle::
# 343 "data/maps/Route23/scripts.pory"
	.string "That's a shame. My Pokémon and I were\n"
	.string "actually getting a bit excited.\p"
	.string "Let me know if you change your mind.$"

R23_Ace_Reward::
# 348 "data/maps/Route23/scripts.pory"
	.string "Thanks to this beneficial weather,\n"
	.string "I thought we had this in the bag.\p"
	.string "That was a fun battle.\p"
	.string "To commemorate it, I want you to\n"
	.string "have this.$"

R23_Ace_ExplainReward::
# 355 "data/maps/Route23/scripts.pory"
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
