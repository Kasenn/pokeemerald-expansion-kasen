Route18_MapScripts::
# 2 "data/maps/Route18/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/Route18/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route18_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route18/scripts.pory"
	cleartrainerflag TRAINER_R18_TR8_BREEDER_M
# 4 "data/maps/Route18/scripts.pory"
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Route18/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 8 "data/maps/Route18/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route18/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/Route18/scripts.pory"
	setvar VAR_HOUR_OVERRIDE, 12
# 10 "data/maps/Route18/scripts.pory"
	setvar VAR_MINUTE_OVERRIDE, 0
	return

Route18_MapScripts_MAP_SCRIPT_ON_RESUME:
# 14 "data/maps/Route18/scripts.pory"
	setstepcallback STEP_CB_ROUTE_18
	return


Route18_Tr1_Hiker1::
# 19 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR1_HIKER1, R18Tr1_Intro, R18Tr1_Lose
# 20 "data/maps/Route18/scripts.pory"
	msgbox R18Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr2_RangerM::
# 42 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR2_RANGER_M, R18Tr2_Intro, R18Tr2_Lose
# 43 "data/maps/Route18/scripts.pory"
	msgbox R18Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr3_Kindler::
# 65 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR3_KINDLER, R18Tr3_Intro, R18Tr3_Lose
# 66 "data/maps/Route18/scripts.pory"
	msgbox R18Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr4_Hiker2::
# 86 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR4_HIKER2, R18Tr4_Intro, R18Tr4_Lose
# 87 "data/maps/Route18/scripts.pory"
	msgbox R18Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr5_RangerF::
# 106 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR5_RANGER_F, R18Tr5_Intro, R18Tr5_Lose
# 107 "data/maps/Route18/scripts.pory"
	msgbox R18Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr6_Scientist::
# 126 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR6_SCIENTIST, R18Tr6_Intro, R18Tr6_Lose
# 127 "data/maps/Route18/scripts.pory"
	msgbox R18Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr7_Pokemaniac::
# 146 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR7_POKEMANIAC, R18Tr7_Intro, R18Tr7_Lose
# 147 "data/maps/Route18/scripts.pory"
	msgbox R18Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route18_Tr8_BreederM::
# 163 "data/maps/Route18/scripts.pory"
	trainerbattle_single TRAINER_R18_TR8_BREEDER_M, R18Tr8_Intro, R18Tr8_Lose, SetR18BreederFlag
# 164 "data/maps/Route18/scripts.pory"
	msgbox R18Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


SetR18BreederFlag::
# 168 "data/maps/Route18/scripts.pory"
	setflag FLAG_R18_BREEDER_DEFEATED
# 169 "data/maps/Route18/scripts.pory"
	release
	end


Route18_Tr9_AceTrainerM::
# 185 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR9_ACE_TRAINER_M
	goto_if 1, Route18_Tr9_AceTrainerM_1
# 188 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR1_HIKER1
	goto_if 1, Route18_Tr9_AceTrainerM_5
Route18_Tr9_AceTrainerM_3:
# 200 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_NotEligible, MSGBOX_NPC
	end

Route18_Tr9_AceTrainerM_1:
# 186 "data/maps/Route18/scripts.pory"
	goto R18_Ace_PostBattle
	return

Route18_Tr9_AceTrainerM_2:
# 197 "data/maps/Route18/scripts.pory"
	goto R18_Ace_EligibleForBattle
	return

Route18_Tr9_AceTrainerM_4:
# 190 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR3_KINDLER
	goto_if 1, Route18_Tr9_AceTrainerM_9
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_5:
# 189 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR2_RANGER_M
	goto_if 1, Route18_Tr9_AceTrainerM_4
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_8:
# 192 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR5_RANGER_F
	goto_if 1, Route18_Tr9_AceTrainerM_13
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_9:
# 191 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR4_HIKER2
	goto_if 1, Route18_Tr9_AceTrainerM_8
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_12:
# 194 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR7_POKEMANIAC
	goto_if 1, Route18_Tr9_AceTrainerM_16
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_13:
# 193 "data/maps/Route18/scripts.pory"
	checktrainerflag TRAINER_R18_TR6_SCIENTIST
	goto_if 1, Route18_Tr9_AceTrainerM_12
	goto Route18_Tr9_AceTrainerM_3

Route18_Tr9_AceTrainerM_16:
# 195 "data/maps/Route18/scripts.pory"
	goto_if_set FLAG_R18_BREEDER_DEFEATED, Route18_Tr9_AceTrainerM_2
	goto Route18_Tr9_AceTrainerM_3


R18_Ace_EligibleForBattle::
# 205 "data/maps/Route18/scripts.pory"
	lock
# 206 "data/maps/Route18/scripts.pory"
	faceplayer
# 207 "data/maps/Route18/scripts.pory"
	goto_if_unset FLAG_TEMP_5, R18_Ace_EligibleForBattle_2
# 212 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_ReadyForBattleShort, MSGBOX_YESNO
R18_Ace_EligibleForBattle_1:
# 214 "data/maps/Route18/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R18_Ace_EligibleForBattle_6
R18_Ace_EligibleForBattle_5:
# 219 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_DeclineBattle, MSGBOX_NPC
	end

R18_Ace_EligibleForBattle_2:
# 208 "data/maps/Route18/scripts.pory"
	setflag FLAG_TEMP_5
# 209 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R18_Ace_EligibleForBattle_1

R18_Ace_EligibleForBattle_6:
# 215 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_BeginBattle, MSGBOX_DEFAULT
# 216 "data/maps/Route18/scripts.pory"
	trainerbattle_no_intro TRAINER_R18_TR9_ACE_TRAINER_M, R18_Ace_Lose
# 217 "data/maps/Route18/scripts.pory"
	goto R18_Ace_PostBattle
	goto R18_Ace_EligibleForBattle_5


R18_Ace_PostBattle::
# 224 "data/maps/Route18/scripts.pory"
	lock
# 225 "data/maps/Route18/scripts.pory"
	faceplayer
# 226 "data/maps/Route18/scripts.pory"
	goto_if_set FLAG_OBTAINED_LOADED_DICE, R18_Ace_PostBattle_2
# 230 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_LOADED_DICE
# 0 "data/maps/Route18/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R18_Ace_PostBattle_5
R18_Ace_PostBattle_4:
# 234 "data/maps/Route18/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 235 "data/maps/Route18/scripts.pory"
	waitfanfare
# 236 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_ExplainReward
# 237 "data/maps/Route18/scripts.pory"
	setflag FLAG_OBTAINED_LOADED_DICE
# 238 "data/maps/Route18/scripts.pory"
	setvar VAR_0x8004, 30
# 239 "data/maps/Route18/scripts.pory"
	call RewardBP
# 240 "data/maps/Route18/scripts.pory"
	release
	end

R18_Ace_PostBattle_2:
# 227 "data/maps/Route18/scripts.pory"
	msgbox R18_Ace_PostBattle_Text, MSGBOX_NPC
	end

R18_Ace_PostBattle_5:
# 232 "data/maps/Route18/scripts.pory"
	goto ZeBagIsFull
	goto R18_Ace_PostBattle_4


R18Tr1_Intro::
# 23 "data/maps/Route18/scripts.pory"
	.string "My legs are solid from pounding up\n"
	.string "and down the mountains.\p"
	.string "They're not going to buckle easily,\n"
	.string "friend!$"

R18Tr1_Lose::
# 29 "data/maps/Route18/scripts.pory"
	.string "Ouch! My legs cramped up!$"

R18Tr1_PostBattle::
# 32 "data/maps/Route18/scripts.pory"
	.string "Try hiking, and I mean really\n"
	.string "pounding, on these mountain trails\l"
	.string "with a heavy pack weighing dozens of\l"
	.string "pounds.\p"
	.string "That, my friend, will get your body\n"
	.string "into serious shape.$"

R18Tr2_Intro::
# 46 "data/maps/Route18/scripts.pory"
	.string "I can see the plea in my\n"
	.string "Pokémon's eyes.\p"
	.string "To fight! And to win!$"

R18Tr2_Lose::
# 51 "data/maps/Route18/scripts.pory"
	.string "The eyes of your Pokémon\n"
	.string "are glimmering with strength!$"

R18Tr2_PostBattle::
# 55 "data/maps/Route18/scripts.pory"
	.string "I can see the plea in my\n"
	.string "Pokémon's eyes.\p"
	.string "They're saying,\n"
	.string "“Get back up! I'm OK!”\p"
	.string "Yep! I can understand my Pokémon's\n"
	.string "feelings by looking into their eyes.$"

R18Tr3_Intro::
# 69 "data/maps/Route18/scripts.pory"
	.string "There's nothing my companion and I\n"
	.string "cannot overcome!$"

R18Tr3_Lose::
# 73 "data/maps/Route18/scripts.pory"
	.string "We did our best, and that's\n"
	.string "all that matters.$"

R18Tr3_PostBattle::
# 77 "data/maps/Route18/scripts.pory"
	.string "A well-trained Pokémon can\n"
	.string "easily take on an entire team of\l"
	.string "untrained rabble.\p"
	.string "Your Pokémon are exceptionally\n"
	.string "trained.$"

R18Tr4_Intro::
# 90 "data/maps/Route18/scripts.pory"
	.string "Hahahaha!\n"
	.string "How about we have a battle?\l"
	.string "You and me!\l"
	.string "Hahahaha!$"

R18Tr4_Lose::
# 96 "data/maps/Route18/scripts.pory"
	.string "I lost!\n"
	.string "Hahahaha!$"

R18Tr4_PostBattle::
# 100 "data/maps/Route18/scripts.pory"
	.string "Hahahahaha! Something flew up my nose!\n"
	.string "Hahahaha-hatchoo!$"

R18Tr5_Intro::
# 110 "data/maps/Route18/scripts.pory"
	.string "I'll have a battle with you using\n"
	.string "my freshly caught Pokémon!$"

R18Tr5_Lose::
# 114 "data/maps/Route18/scripts.pory"
	.string "I had no idea how my Pokémon\n"
	.string "would fight. I mean, I caught them\l"
	.string "just a moment ago!$"

R18Tr5_PostBattle::
# 119 "data/maps/Route18/scripts.pory"
	.string "I may have just caught them, but\n"
	.string "I'll raise them to be strong!\l"
	.string "Our time together has just begun!$"

R18Tr6_Intro::
# 130 "data/maps/Route18/scripts.pory"
	.string "I've got a Pokémon that I simply\n"
	.string "must test on someone!$"

R18Tr6_Lose::
# 134 "data/maps/Route18/scripts.pory"
	.string "Results inconclusive.$"

R18Tr6_PostBattle::
# 137 "data/maps/Route18/scripts.pory"
	.string "Nobody knows how these lava pools\n"
	.string "are able to keep going in this\l"
	.string "freezing weather.\p"
	.string "Some suspect that the the lava is\n"
	.string "somehow being generated by a Pokémon.$"

R18Tr7_Intro::
# 150 "data/maps/Route18/scripts.pory"
	.string "I'll obliterate any trainer that\n"
	.string "crosses my path!$"

R18Tr7_Lose::
# 154 "data/maps/Route18/scripts.pory"
	.string "Mommy!$"

R18Tr7_PostBattle::
# 157 "data/maps/Route18/scripts.pory"
	.string "…What?\n"
	.string "Why are you looking at me like that?$"

R18Tr8_Intro::
# 172 "data/maps/Route18/scripts.pory"
	.string "We've just got to do what we can!$"

R18Tr8_Lose::
# 175 "data/maps/Route18/scripts.pory"
	.string "I feel like I understood what I\n"
	.string "could do and what I couldn't.$"

R18Tr8_PostBattle::
# 179 "data/maps/Route18/scripts.pory"
	.string "I'll try to increase the things I can\n"
	.string "do and challenge you again!$"

R18_Ace_NotEligible::
# 244 "data/maps/Route18/scripts.pory"
	.string "Think you have what it takes to\n"
	.string "challenge me?\p"
	.string "My Pokémon are ice cold.\p"
	.string "You better get warmed up by beating\n"
	.string "all the other trainers here first.$"

R18_Ace_ReadyForBattle::
# 251 "data/maps/Route18/scripts.pory"
	.string "I've seen you fighting the other\n"
	.string "trainers around here.\p"
	.string "With all that warm-up out of the way,\n"
	.string "you want to test your limits against\l"
	.string "an ice cold team like mine?$"

R18_Ace_ReadyForBattleShort::
# 258 "data/maps/Route18/scripts.pory"
	.string "Changed your mind, eh?$"

R18_Ace_BeginBattle::
# 261 "data/maps/Route18/scripts.pory"
	.string "Good.\n"
	.string "Prepare for a bone-chilling battle!$"

R18_Ace_DeclineBattle::
# 265 "data/maps/Route18/scripts.pory"
	.string "Heh, thought so.$"

R18_Ace_PostBattle_Text::
# 268 "data/maps/Route18/scripts.pory"
	.string "I expect to hear only\n"
	.string "great things about you.$"

R18_Ace_Reward::
# 272 "data/maps/Route18/scripts.pory"
	.string "I'm not going to try and make\n"
	.string "excuses for why I lost.\p"
	.string "This was all really a matter\p"
	.string "of skill.\p"
	.string "Here, maybe you can put this thing\n"
	.string "to a better use than I ever could.$"

R18_Ace_ExplainReward::
# 280 "data/maps/Route18/scripts.pory"
	.string "Give those loaded dice to a Pokémon\n"
	.string "to hold, and any multistrike move\l"
	.string "they use is guaranteed to hit\l"
	.string "the maximum number of times.\p"
	.string "Also, I want you to have these.$"

R18_Ace_Lose::
# 287 "data/maps/Route18/scripts.pory"
	.string "Amazing display of skill.\n"
	.string "I completely froze there!$"
