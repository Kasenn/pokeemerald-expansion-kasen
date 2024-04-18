FloodedCave1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FloodedCaveLandmark
	.byte 0


FloodedCaveLandmark::
	setflag FLAG_VISITED_FLOODEDCAVE
	end


FC_Hiker::
	msgbox FC_Hiker_Text, MSGBOX_NPC
	end


FightingClub_Tr1_Blackbelt::
	trainerbattle_single TRAINER_FC_TR1_BLACKBELT, FCTr1_Intro, FCTr1_Lose
	msgbox FCTr1_PostBattle, MSGBOX_AUTOCLOSE
	end


FightingClub_Tr2_Battlegirl::
	trainerbattle_single TRAINER_FC_TR2_BATTLEGIRL, FCTr2_Intro, FCTr2_Lose
	msgbox FCTr2_PostBattle, MSGBOX_AUTOCLOSE
	end


FightingClub_Tr3_Camper::
	trainerbattle_single TRAINER_FC_TR3_CAMPER, FCTr3_Intro, FCTr3_Lose
	msgbox FCTr3_PostBattle, MSGBOX_AUTOCLOSE
	end


FightingClub_Tr4_Hiker::
	trainerbattle_single TRAINER_FC_TR4_HIKER, FCTr4_Intro, FCTr4_Lose
	msgbox FCTr4_PostBattle, MSGBOX_AUTOCLOSE
	end


FC_Hiker_Text::
	.string "I've seen people hopping on these\n"
	.string "pillars but I'm worried they might not\l"
	.string "support my weight.$"

FCTr1_Intro::
	.string "To be able to come this far means that\n"
	.string "you're not afraid of pillar jumping.\p"
	.string "But are you afraid of Pokémon battles?$"

FCTr1_Lose::
	.string "I admit defeat.$"

FCTr1_PostBattle::
	.string "Caves like these are a great place to\n"
	.string "train.\p"
	.string "Sometimes there's almost too many wild\n"
	.string "Pokémon here.$"

FCTr2_Intro::
	.string "I have never lost a single battle!\n"
	.string "Let me prove it to you!$"

FCTr2_Lose::
	.string "This one doesn't count!$"

FCTr2_PostBattle::
	.string "I have never lost a single battle…\n"
	.string "starting now!$"

FCTr3_Intro::
	.string "Found any rare Pokémon?$"

FCTr3_Lose::
	.string "Why can I never win?$"

FCTr3_PostBattle::
	.string "They're usually only found in the\n"
	.string "north, so you can imagine just how\l"
	.string "surprised I was when I saw a Seel\l"
	.string "swimming around here yesterday!$"

FCTr4_Intro::
	.string "Us hikers love exploring caves.\p"
	.string "But what we love even more is\n"
	.string "Pokémon battles!$"

FCTr4_Lose::
	.string "You know what we hikers love even more\n"
	.string "than Pokémon battles?\l"
	.string "Actually winning them…$"

FCTr4_PostBattle::
	.string "I'm getting an uneasy feeling exploring\n"
	.string "this cave.\p"
	.string "It feels like there's something big\n"
	.string "hidden here…$"
