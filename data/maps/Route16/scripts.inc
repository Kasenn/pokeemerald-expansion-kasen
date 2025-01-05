Route16_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, Route16_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_6
	checkitem ITEM_ZYGARDE_CUBE
	compare VAR_RESULT, TRUE
	goto_if_eq Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setmaplayoutindex LAYOUT_ROUTE16_NO_CURRENTS
	setflag FLAG_TEMP_1
	clearflag FLAG_TEMP_6
	return

Route16_MapScripts_MAP_SCRIPT_ON_RESUME:
	setstepcallback STEP_CB_ASH
	return


RapidsTooStrong::
	msgbox RapidsTooStrong_Text, MSGBOX_NPC
	return


Route16_Fisher::
	msgbox Route16_Tr3_Fisher_Text, MSGBOX_NPC
	return


Route16_SwimmerM::
	msgbox Route16_Tr4_SwimmerM_Text, MSGBOX_NPC
	return


Route16_Tr1_SwimmerM::
	trainerbattle_single TRAINER_R16_TR1_SWIMMER_M, R16Tr1_Intro, R16Tr1_Lose
	msgbox R16Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr2_SwimmerF::
	trainerbattle_single TRAINER_R16_TR2_SWIMMER_F, R16Tr2_Intro, R16Tr2_Lose
	msgbox R16Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr5_SwimmerF::
	trainerbattle_single TRAINER_R16_TR5_SWIMMER_F, R16Tr5_Intro, R16Tr5_Lose
	msgbox R16Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr6_SwimmerF::
	trainerbattle_single TRAINER_R16_TR6_SWIMMER_F, R16Tr6_Intro, R16Tr6_Lose
	msgbox R16Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr7_Guitarist::
	trainerbattle_single TRAINER_R16_TR7_GUITARIST, R16Tr7_Intro, R16Tr7_Lose
	msgbox R16Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr8_Hiker::
	trainerbattle_single TRAINER_R16_TR8_HIKER, R16Tr8_Intro, R16Tr8_Lose
	msgbox R16Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr9_Beauty::
	trainerbattle_single TRAINER_R16_TR9_BEAUTY, R16Tr9_Intro, R16Tr9_Lose
	msgbox R16Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr10_NinjaBoy::
	trainerbattle_single TRAINER_R16_TR10_NINJABOY, R16Tr10_Intro, R16Tr10_Lose
	msgbox R16Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr11_ExpertF::
	trainerbattle_single TRAINER_R16_TR11_EXPERT_F, R16Tr11_Intro, R16Tr11_Lose
	msgbox R16Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route16_Tr12_NinjaBoy2::
	trainerbattle_single TRAINER_R16_TR12_NINJABOY2, R16Tr12_Intro, R16Tr12_Lose
	msgbox R16Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


RapidsTooStrong_Text::
	.string "The waves here can be really\n"
	.string "unpredictable.\p"
	.string "No choice but to wait for\n"
	.string "them to die down.$"

Route16_Tr3_Fisher_Text::
	.string "The volcanic activity up north is\n"
	.string "keeping these waters warm.\p"
	.string "The warmer the water, the more\n"
	.string "energetic the fish.$"

Route16_Tr4_SwimmerM_Text::
	.string "I'm trying to get to Basalek Town,\n"
	.string "but I think I took a wrong turn…$"

R16Tr1_Intro::
	.string "My Pokémon are at the top of\n"
	.string "their game!$"

R16Tr1_Lose::
	.string "Clearly we need to train more!$"

R16Tr1_PostBattle::
	.string "Maybe a short break is in order…$"

R16Tr2_Intro::
	.string "I'm the greatest swimmer in the world!\n"
	.string "Think you can keep up?$"

R16Tr2_Lose::
	.string "Being a good swimmer doesn't make"
	.string "me any better as a trainer…$"

R16Tr2_PostBattle::
	.string "I want to be with my water Pokémon."
	.string "That's why I swim.$"

R16Tr5_Intro::
	.string "I was starting to get bored\n"
	.string "of swimming.\l"
	.string "Glad you showed up!$"

R16Tr5_Lose::
	.string "Now I wish you had not showed up…$"

R16Tr5_PostBattle::
	.string "There's not much room to navigate\n"
	.string "between these rocks.\p"
	.string "Careful you don't smash against\n"
	.string "a rock!$"

R16Tr6_Intro::
	.string "You heading to Basalek Town?\n"
	.string "Not without battling me first!$"

R16Tr6_Lose::
	.string "Okay, you may proceed.$"

R16Tr6_PostBattle::
	.string "The route to Basalek town can be\n"
	.string "a bit overwhelming.\p"
	.string "Be sure to hydrate!$"

R16Tr7_Intro::
	.string "A heated Pokémon battle!\p"
	.string "Just the type of inspiration\n"
	.string "I was looking for!$"

R16Tr7_Lose::
	.string "That was fire!$"

R16Tr7_PostBattle::
	.string "That battle lit a fire in my soul!\n"
	.string "Thanks, bro!$"

R16Tr8_Intro::
	.string "We hikers aren't afraid of anything.\n"
	.string "Let me prove it to you!$"

R16Tr8_Lose::
	.string "I may have lost,\n"
	.string "but my spirit will not falter!$"

R16Tr8_PostBattle::
	.string "I can tell just how fearless you are.\n"
	.string "You'd make a great hiker!$"

R16Tr9_Intro::
	.string "I've got the fire in me, baby.\n"
	.string "I can't stand it! I have to battle!$"

R16Tr9_Lose::
	.string "Ooh, that was a scorching-hot match!$"

R16Tr9_PostBattle::
	.string "The heat of the lava pools warms\n"
	.string "me up, baby!$"

R16Tr10_Intro::
	.string "Freeze!\n"
	.string "This is a stick up!$"

R16Tr10_Lose::
	.string "I was just kidding!\p"
	.string "I wasn't really going to rob\n"
	.string "you, I promise!$"

R16Tr10_PostBattle::
	.string "Please forgive me!\n"
	.string "It was just a joke!$"

R16Tr11_Intro::
	.string "I may look old, but underestimate me,\n"
	.string "and you'll pay for it!$"

R16Tr11_Lose::
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

R16Tr11_PostBattle::
	.string "Well, well, I've lost. I can't call\n"
	.string "myself an expern now, can I?$"

R16Tr12_Intro::
	.string "The smoke… The jagged terrain…\n"
	.string "A perfect location for ninja ambush!$"

R16Tr12_Lose::
	.string "Ninja vanish!$"

R16Tr12_PostBattle::
	.string "…Now this is awkward…$"
