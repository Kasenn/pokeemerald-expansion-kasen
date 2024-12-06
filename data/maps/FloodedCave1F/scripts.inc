FloodedCave1F_MapScripts::
# 2 "data/maps/FloodedCave1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FloodedCaveLandmark
	.byte 0


FloodedCaveLandmark::
# 6 "data/maps/FloodedCave1F/scripts.pory"
	setflag FLAG_VISITED_FLOODEDCAVE
	end


FC_Hiker::
# 11 "data/maps/FloodedCave1F/scripts.pory"
	msgbox FC_Hiker_Text, MSGBOX_NPC
	end


FightingClub_Tr1_Blackbelt::
# 21 "data/maps/FloodedCave1F/scripts.pory"
	trainerbattle_single TRAINER_FC_TR1_BLACKBELT, FCTr1_Intro, FCTr1_Lose
# 22 "data/maps/FloodedCave1F/scripts.pory"
	msgbox FCTr1_PostBattle, MSGBOX_AUTOCLOSE
	end


FightingClub_Tr2_Battlegirl::
# 41 "data/maps/FloodedCave1F/scripts.pory"
	trainerbattle_single TRAINER_FC_TR2_BATTLEGIRL, FCTr2_Intro, FCTr2_Lose
# 42 "data/maps/FloodedCave1F/scripts.pory"
	msgbox FCTr2_PostBattle, MSGBOX_AUTOCLOSE
	end


FightingClub_Tr3_Camper::
# 58 "data/maps/FloodedCave1F/scripts.pory"
	trainerbattle_single TRAINER_FC_TR3_CAMPER, FCTr3_Intro, FCTr3_Lose
# 59 "data/maps/FloodedCave1F/scripts.pory"
	msgbox FCTr3_PostBattle, MSGBOX_AUTOCLOSE
	end


FightingClub_Tr4_Hiker::
# 76 "data/maps/FloodedCave1F/scripts.pory"
	trainerbattle_single TRAINER_FC_TR4_HIKER, FCTr4_Intro, FCTr4_Lose
# 77 "data/maps/FloodedCave1F/scripts.pory"
	msgbox FCTr4_PostBattle, MSGBOX_AUTOCLOSE
	end


FC_Hiker_Text::
# 14 "data/maps/FloodedCave1F/scripts.pory"
	.string "I've seen people hopping on these\n"
	.string "pillars but I'm worried they might not\l"
	.string "support my weight.$"

FCTr1_Intro::
# 25 "data/maps/FloodedCave1F/scripts.pory"
	.string "To be able to come this far means that\n"
	.string "you're not afraid of pillar jumping.\p"
	.string "But are you afraid of Pokémon battles?$"

FCTr1_Lose::
# 30 "data/maps/FloodedCave1F/scripts.pory"
	.string "I admit defeat.$"

FCTr1_PostBattle::
# 33 "data/maps/FloodedCave1F/scripts.pory"
	.string "Caves like these are a great place to\n"
	.string "train.\p"
	.string "Sometimes there's almost too many wild\n"
	.string "Pokémon here.$"

FCTr2_Intro::
# 45 "data/maps/FloodedCave1F/scripts.pory"
	.string "I have never lost a single battle!\n"
	.string "Let me prove it to you!$"

FCTr2_Lose::
# 49 "data/maps/FloodedCave1F/scripts.pory"
	.string "This one doesn't count!$"

FCTr2_PostBattle::
# 52 "data/maps/FloodedCave1F/scripts.pory"
	.string "I have never lost a single battle…\n"
	.string "starting now!$"

FCTr3_Intro::
# 62 "data/maps/FloodedCave1F/scripts.pory"
	.string "Found any rare Pokémon?$"

FCTr3_Lose::
# 65 "data/maps/FloodedCave1F/scripts.pory"
	.string "Why can I never win?$"

FCTr3_PostBattle::
# 68 "data/maps/FloodedCave1F/scripts.pory"
	.string "They're usually only found in the\n"
	.string "north, so you can imagine just how\l"
	.string "surprised I was when I saw a Seel\l"
	.string "swimming around here yesterday!$"

FCTr4_Intro::
# 80 "data/maps/FloodedCave1F/scripts.pory"
	.string "Us hikers love exploring caves.\p"
	.string "But what we love even more is\n"
	.string "Pokémon battles!$"

FCTr4_Lose::
# 85 "data/maps/FloodedCave1F/scripts.pory"
	.string "You know what we hikers love even more\n"
	.string "than Pokémon battles?\l"
	.string "Actually winning them…$"

FCTr4_PostBattle::
# 90 "data/maps/FloodedCave1F/scripts.pory"
	.string "I'm getting an uneasy feeling exploring\n"
	.string "this cave.\p"
	.string "It feels like there's something big\n"
	.string "hidden here…$"
