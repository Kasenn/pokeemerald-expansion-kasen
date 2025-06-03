Route16_MapScripts::
# 2 "data/maps/Route16/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/Route16/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route16_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route16/scripts.pory"
	setflag FLAG_TEMP_6
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Route16/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/Route16/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE16_NO_CURRENTS
# 6 "data/maps/Route16/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/Route16/scripts.pory"
	clearflag FLAG_TEMP_6
	return

Route16_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/Route16/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


RapidsTooStrong::
# 16 "data/maps/Route16/scripts.pory"
	msgbox RapidsTooStrong_Text, MSGBOX_NPC
	return


Route16_Fisher::
# 26 "data/maps/Route16/scripts.pory"
	msgbox Route16_Tr3_Fisher_Text, MSGBOX_NPC
	return


Route16_SwimmerM::
# 36 "data/maps/Route16/scripts.pory"
	msgbox Route16_Tr4_SwimmerM_Text, MSGBOX_NPC
	return


Route16_Tr1_SwimmerM::
# 44 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR1_SWIMMER_M, R16Tr1_Intro, R16Tr1_Lose
# 45 "data/maps/Route16/scripts.pory"
	msgbox R16Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr2_SwimmerF::
# 60 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR2_SWIMMER_F, R16Tr2_Intro, R16Tr2_Lose
# 61 "data/maps/Route16/scripts.pory"
	msgbox R16Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr5_SwimmerF::
# 78 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR5_SWIMMER_F, R16Tr5_Intro, R16Tr5_Lose
# 79 "data/maps/Route16/scripts.pory"
	msgbox R16Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr6_SwimmerF::
# 98 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR6_SWIMMER_F, R16Tr6_Intro, R16Tr6_Lose
# 99 "data/maps/Route16/scripts.pory"
	msgbox R16Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr7_Guitarist::
# 116 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR7_GUITARIST, R16Tr7_Intro, R16Tr7_Lose
# 117 "data/maps/Route16/scripts.pory"
	msgbox R16Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr8_Hiker::
# 134 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR8_HIKER, R16Tr8_Intro, R16Tr8_Lose
# 135 "data/maps/Route16/scripts.pory"
	msgbox R16Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr9_Beauty::
# 152 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR9_BEAUTY, R16Tr9_Intro, R16Tr9_Lose
# 153 "data/maps/Route16/scripts.pory"
	msgbox R16Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr10_NinjaBoy::
# 169 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR10_NINJABOY, R16Tr10_Intro, R16Tr10_Lose
# 170 "data/maps/Route16/scripts.pory"
	msgbox R16Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr11_ExpertF::
# 186 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR11_EXPERT_F, R16Tr11_Intro, R16Tr11_Lose
# 187 "data/maps/Route16/scripts.pory"
	msgbox R16Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr12_NinjaBoy2::
# 204 "data/maps/Route16/scripts.pory"
	trainerbattle_single TRAINER_R16_TR12_NINJABOY2, R16Tr12_Intro, R16Tr12_Lose
# 205 "data/maps/Route16/scripts.pory"
	msgbox R16Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


RapidsTooStrong_Text::
# 18 "data/maps/Route16/scripts.pory"
	.string "The waves here can be really\n"
	.string "unpredictable.\p"
	.string "No choice but to wait for\n"
	.string "them to die down.$"

Route16_Tr3_Fisher_Text::
# 28 "data/maps/Route16/scripts.pory"
	.string "The volcanic activity up north is\n"
	.string "keeping these waters warm.\p"
	.string "The warmer the water, the more\n"
	.string "energetic the fish.$"

Route16_Tr4_SwimmerM_Text::
# 38 "data/maps/Route16/scripts.pory"
	.string "I'm trying to get to Basalek Town,\n"
	.string "but I think I took a wrong turn…$"

R16Tr1_Intro::
# 48 "data/maps/Route16/scripts.pory"
	.string "My Pokémon are at the top of\n"
	.string "their game!$"

R16Tr1_Lose::
# 52 "data/maps/Route16/scripts.pory"
	.string "Clearly we need to train more!$"

R16Tr1_PostBattle::
# 55 "data/maps/Route16/scripts.pory"
	.string "Maybe a short break is in order…$"

R16Tr2_Intro::
# 64 "data/maps/Route16/scripts.pory"
	.string "I'm the greatest swimmer in the world!\n"
	.string "Think you can keep up?$"

R16Tr2_Lose::
# 68 "data/maps/Route16/scripts.pory"
	.string "Being a good swimmer doesn't make\n"
	.string "me any better as a trainer…$"

R16Tr2_PostBattle::
# 72 "data/maps/Route16/scripts.pory"
	.string "I want to be with my Water Pokémon.\n"
	.string "That's why I swim.$"

R16Tr5_Intro::
# 82 "data/maps/Route16/scripts.pory"
	.string "I was starting to get bored\n"
	.string "of swimming.\l"
	.string "Glad you showed up!$"

R16Tr5_Lose::
# 87 "data/maps/Route16/scripts.pory"
	.string "Now I wish you had not showed up…$"

R16Tr5_PostBattle::
# 90 "data/maps/Route16/scripts.pory"
	.string "There's not much room to navigate\n"
	.string "between these rocks.\p"
	.string "Careful you don't smash against\n"
	.string "a rock!$"

R16Tr6_Intro::
# 102 "data/maps/Route16/scripts.pory"
	.string "You heading to Basalek Town?\n"
	.string "Not without battling me first!$"

R16Tr6_Lose::
# 106 "data/maps/Route16/scripts.pory"
	.string "Okay, you may proceed.$"

R16Tr6_PostBattle::
# 109 "data/maps/Route16/scripts.pory"
	.string "The route to Basalek town can be\n"
	.string "a bit overwhelming.\p"
	.string "Be sure to hydrate!$"

R16Tr7_Intro::
# 120 "data/maps/Route16/scripts.pory"
	.string "A heated Pokémon battle!\p"
	.string "Just the type of inspiration\n"
	.string "I was looking for!$"

R16Tr7_Lose::
# 125 "data/maps/Route16/scripts.pory"
	.string "That was fire!$"

R16Tr7_PostBattle::
# 128 "data/maps/Route16/scripts.pory"
	.string "That battle lit a fire in my soul!\n"
	.string "Thanks, bro!$"

R16Tr8_Intro::
# 138 "data/maps/Route16/scripts.pory"
	.string "We hikers aren't afraid of anything.\n"
	.string "Let me prove it to you!$"

R16Tr8_Lose::
# 142 "data/maps/Route16/scripts.pory"
	.string "I may have lost,\n"
	.string "but my spirit will not falter!$"

R16Tr8_PostBattle::
# 146 "data/maps/Route16/scripts.pory"
	.string "I can tell just how fearless you are.\n"
	.string "You'd make a great hiker!$"

R16Tr9_Intro::
# 156 "data/maps/Route16/scripts.pory"
	.string "I've got the fire in me, baby.\n"
	.string "I can't stand it! I have to battle!$"

R16Tr9_Lose::
# 160 "data/maps/Route16/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"

R16Tr9_PostBattle::
# 163 "data/maps/Route16/scripts.pory"
	.string "The heat of the lava pools warms\n"
	.string "me up, baby!$"

R16Tr10_Intro::
# 173 "data/maps/Route16/scripts.pory"
	.string "My Pokémon knows the most powerful\n"
	.string "move in the world. Observe!$"

R16Tr10_Lose::
# 177 "data/maps/Route16/scripts.pory"
	.string "Not the winning move…$"

R16Tr10_PostBattle::
# 180 "data/maps/Route16/scripts.pory"
	.string "I thought with enough firepower,\n"
	.string "we'd be unbeatable…$"

R16Tr11_Intro::
# 190 "data/maps/Route16/scripts.pory"
	.string "I may look old, but underestimate me,\n"
	.string "and you'll pay for it!$"

R16Tr11_Lose::
# 194 "data/maps/Route16/scripts.pory"
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

R16Tr11_PostBattle::
# 198 "data/maps/Route16/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
	.string "myself an expern now, can I?$"

R16Tr12_Intro::
# 208 "data/maps/Route16/scripts.pory"
	.string "The smoke… The jagged terrain…\n"
	.string "A perfect location for ninja ambush!$"

R16Tr12_Lose::
# 212 "data/maps/Route16/scripts.pory"
	.string "Ninja vanish!$"

R16Tr12_PostBattle::
# 215 "data/maps/Route16/scripts.pory"
	.string "…Now this is awkward…$"
