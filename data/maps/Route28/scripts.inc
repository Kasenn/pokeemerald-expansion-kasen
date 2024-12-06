Route28_MapScripts::
	.byte 0


Route28_BrotherTrigger_1::
# 4 "data/maps/Route28/scripts.pory"
	goto_if_set FLAG_ROUTE28_DESPAWN_BROTHER, Route28_BrotherTrigger_1_1
# 9 "data/maps/Route28/scripts.pory"
	lock
# 10 "data/maps/Route28/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 11 "data/maps/Route28/scripts.pory"
	safefollow
# 12 "data/maps/Route28/scripts.pory"
	applymovement 4, Route28_MoveBrother1
# 13 "data/maps/Route28/scripts.pory"
	waitmovement 4
# 14 "data/maps/Route28/scripts.pory"
	delay 15
# 15 "data/maps/Route28/scripts.pory"
	call Route28_BrotherFight
# 16 "data/maps/Route28/scripts.pory"
	safefollow
# 17 "data/maps/Route28/scripts.pory"
	applymovement 4, Route28BrotherLeaves1
# 18 "data/maps/Route28/scripts.pory"
	goto Route28_EndScript
	return

Route28_BrotherTrigger_1_1:
# 5 "data/maps/Route28/scripts.pory"
	release
	end


Route28_BrotherTrigger_2::
# 22 "data/maps/Route28/scripts.pory"
	goto_if_set FLAG_ROUTE28_DESPAWN_BROTHER, Route28_BrotherTrigger_2_1
# 27 "data/maps/Route28/scripts.pory"
	lock
# 28 "data/maps/Route28/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 29 "data/maps/Route28/scripts.pory"
	safefollow
# 30 "data/maps/Route28/scripts.pory"
	applymovement 4, Route28_MoveBrother2
# 31 "data/maps/Route28/scripts.pory"
	waitmovement 4
# 32 "data/maps/Route28/scripts.pory"
	delay 15
# 33 "data/maps/Route28/scripts.pory"
	call Route28_BrotherFight
# 34 "data/maps/Route28/scripts.pory"
	safefollow
# 35 "data/maps/Route28/scripts.pory"
	applymovement 4, Route28BrotherLeaves2
# 36 "data/maps/Route28/scripts.pory"
	goto Route28_EndScript
	return

Route28_BrotherTrigger_2_1:
# 23 "data/maps/Route28/scripts.pory"
	release
	end


Route28_EndScript::
# 41 "data/maps/Route28/scripts.pory"
	waitmovement 4
# 42 "data/maps/Route28/scripts.pory"
	delay 15
# 43 "data/maps/Route28/scripts.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 44 "data/maps/Route28/scripts.pory"
	removeobject 4
# 45 "data/maps/Route28/scripts.pory"
	savebgm MUS_DUMMY
# 46 "data/maps/Route28/scripts.pory"
	fadedefaultbgm
# 47 "data/maps/Route28/scripts.pory"
	releaseall
	end


# 51 "data/maps/Route28/scripts.pory"
Route28_MoveBrother1:
# 52 "data/maps/Route28/scripts.pory"
	walk_down
# 52 "data/maps/Route28/scripts.pory"
	walk_down
# 53 "data/maps/Route28/scripts.pory"
	walk_left
# 53 "data/maps/Route28/scripts.pory"
	walk_left
# 53 "data/maps/Route28/scripts.pory"
	walk_left
# 54 "data/maps/Route28/scripts.pory"
	walk_down
# 54 "data/maps/Route28/scripts.pory"
	walk_down
# 54 "data/maps/Route28/scripts.pory"
	walk_down
	step_end

# 56 "data/maps/Route28/scripts.pory"
Route28_MoveBrother2:
# 57 "data/maps/Route28/scripts.pory"
	walk_down
# 57 "data/maps/Route28/scripts.pory"
	walk_down
# 58 "data/maps/Route28/scripts.pory"
	walk_left
# 58 "data/maps/Route28/scripts.pory"
	walk_left
# 59 "data/maps/Route28/scripts.pory"
	walk_down
# 59 "data/maps/Route28/scripts.pory"
	walk_down
# 59 "data/maps/Route28/scripts.pory"
	walk_down
	step_end

# 61 "data/maps/Route28/scripts.pory"
Route28BrotherLeaves1:
# 62 "data/maps/Route28/scripts.pory"
	walk_right
# 63 "data/maps/Route28/scripts.pory"
	walk_down
# 63 "data/maps/Route28/scripts.pory"
	walk_down
# 63 "data/maps/Route28/scripts.pory"
	walk_down
# 63 "data/maps/Route28/scripts.pory"
	walk_down
# 63 "data/maps/Route28/scripts.pory"
	walk_down
# 63 "data/maps/Route28/scripts.pory"
	walk_down
# 63 "data/maps/Route28/scripts.pory"
	walk_down
# 63 "data/maps/Route28/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/Route28/scripts.pory"
Route28BrotherLeaves2:
# 66 "data/maps/Route28/scripts.pory"
	walk_left
# 67 "data/maps/Route28/scripts.pory"
	walk_down
# 67 "data/maps/Route28/scripts.pory"
	walk_down
# 67 "data/maps/Route28/scripts.pory"
	walk_down
# 67 "data/maps/Route28/scripts.pory"
	walk_down
# 67 "data/maps/Route28/scripts.pory"
	walk_down
# 67 "data/maps/Route28/scripts.pory"
	walk_down
# 67 "data/maps/Route28/scripts.pory"
	walk_down
# 67 "data/maps/Route28/scripts.pory"
	walk_down
	step_end

Route28_BrotherFight::
# 71 "data/maps/Route28/scripts.pory"
	delay 5
# 72 "data/maps/Route28/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_8
Route28_BrotherFight_6:
# 85 "data/maps/Route28/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_5
Route28_BrotherFight_4:
# 99 "data/maps/Route28/scripts.pory"
	msgbox Route28_BrotherIntro, MSGBOX_DEFAULT
# 100 "data/maps/Route28/scripts.pory"
	waitmessage
# 101 "data/maps/Route28/scripts.pory"
	closemessage
# 102 "data/maps/Route28/scripts.pory"
	switch VAR_STARTER_MON
# 103 "data/maps/Route28/scripts.pory"
	case 0, Route28_BrotherFight_24
# 105 "data/maps/Route28/scripts.pory"
	case 1, Route28_BrotherFight_25
# 107 "data/maps/Route28/scripts.pory"
	case 2, Route28_BrotherFight_26
Route28_BrotherFight_1:
# 111 "data/maps/Route28/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_12
# 115 "data/maps/Route28/scripts.pory"
	msgbox Route28_BrotherPostBattleNoBadge, MSGBOX_DEFAULT
Route28_BrotherFight_11:
# 117 "data/maps/Route28/scripts.pory"
	waitmessage
# 118 "data/maps/Route28/scripts.pory"
	closemessage
	return

Route28_BrotherFight_2:
# 73 "data/maps/Route28/scripts.pory"
	msgbox Route28_BrotherIntroAfterGym, MSGBOX_DEFAULT
# 74 "data/maps/Route28/scripts.pory"
	waitmessage
# 75 "data/maps/Route28/scripts.pory"
	closemessage
# 76 "data/maps/Route28/scripts.pory"
	switch VAR_STARTER_MON
# 77 "data/maps/Route28/scripts.pory"
	case 0, Route28_BrotherFight_16
# 79 "data/maps/Route28/scripts.pory"
	case 1, Route28_BrotherFight_17
# 81 "data/maps/Route28/scripts.pory"
	case 2, Route28_BrotherFight_18
	goto Route28_BrotherFight_1

Route28_BrotherFight_3:
# 86 "data/maps/Route28/scripts.pory"
	msgbox Route28_BrotherIntroAfterGym, MSGBOX_DEFAULT
# 87 "data/maps/Route28/scripts.pory"
	waitmessage
# 88 "data/maps/Route28/scripts.pory"
	closemessage
# 89 "data/maps/Route28/scripts.pory"
	switch VAR_STARTER_MON
# 90 "data/maps/Route28/scripts.pory"
	case 0, Route28_BrotherFight_20
# 92 "data/maps/Route28/scripts.pory"
	case 1, Route28_BrotherFight_21
# 94 "data/maps/Route28/scripts.pory"
	case 2, Route28_BrotherFight_22
	goto Route28_BrotherFight_1

Route28_BrotherFight_5:
# 85 "data/maps/Route28/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLY, Route28_BrotherFight_3
	goto Route28_BrotherFight_4

Route28_BrotherFight_8:
# 72 "data/maps/Route28/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_FLY, Route28_BrotherFight_2
	goto Route28_BrotherFight_6

Route28_BrotherFight_12:
# 112 "data/maps/Route28/scripts.pory"
	msgbox Route28_BrotherPostBattle, MSGBOX_DEFAULT
	goto Route28_BrotherFight_11

Route28_BrotherFight_16:
# 78 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER3_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_17:
# 80 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER3_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_18:
# 82 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER3_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_20:
# 91 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER4_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_21:
# 93 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER4_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_22:
# 95 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER4_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_24:
# 104 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER2_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_25:
# 106 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER2_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_26:
# 108 "data/maps/Route28/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER2_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1


Route28_TM::
# 189 "data/maps/Route28/scripts.pory"
	finditem ITEM_TM_SECRET_POWER
	end


Route28_ItemBall::
# 193 "data/maps/Route28/scripts.pory"
	finditem ITEM_FULL_HEAL
	end


Route28_Trainer1_BugCatcher::
# 198 "data/maps/Route28/scripts.pory"
	trainerbattle_single TRAINER_R28_TR1_BUGCATCHER, Route28_Trainer1_BugCatcherIntro, Route28_Trainer1_BugCatcherDefeat
# 199 "data/maps/Route28/scripts.pory"
	msgbox Route28_Trainer1_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Trainer2_Hiker::
# 203 "data/maps/Route28/scripts.pory"
	trainerbattle_single TRAINER_R28_TR2_HIKER, Route28_Trainer2_HikerIntro, Route28_Trainer2_HikerDefeat
# 204 "data/maps/Route28/scripts.pory"
	msgbox Route28_Trainer2_HikerPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Trainer3_NinjaBoy::
# 208 "data/maps/Route28/scripts.pory"
	trainerbattle_single TRAINER_R28_TR3_NINJABOY, Route28_Trainer3_NinjaBoyIntro, Route28_Trainer3_NinjaBoyDefeat
# 209 "data/maps/Route28/scripts.pory"
	msgbox Route28_Trainer3_NinjaBoyPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Trainer4_Psychic::
# 213 "data/maps/Route28/scripts.pory"
	trainerbattle_single TRAINER_R28_TR4_PSYCHIC, Route28_Trainer4_PsychicIntro, Route28_Trainer4_PsychicDefeat
# 214 "data/maps/Route28/scripts.pory"
	msgbox Route28_Trainer4_PsychicPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Fisher::
# 274 "data/maps/Route28/scripts.pory"
	msgbox Route28_Fisher_Text, MSGBOX_NPC
	end


Route28_Sign::
# 293 "data/maps/Route28/scripts.pory"
	msgbox Route28_Sign_Text, MSGBOX_SIGN
	return


Route28_BrotherIntro::
# 122 "data/maps/Route28/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\p"
	.string "I see you've finally made your way\n"
	.string "off the Coralgrove Islands.\p"
	.string "I wanted to head north to check out\n"
	.string "the Pokémon League in Snowcrest City\l"
	.string "but there's been an avalanche\l"
	.string "higher up the route so I couldn't\l"
	.string "even reach Iceperch City.\p"
	.string "In any case, I've gone and caught\n"
	.string "a lot of new Pokémon.\p"
	.string "Let's see if yours are any match\n"
	.string "to them!$"

Route28_BrotherIntroAfterGym::
# 137 "data/maps/Route28/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\p"
	.string "I see you've finally made your way\n"
	.string "off the Coralgrove Islands.\p"
	.string "I wanted to head north to check out\n"
	.string "the Pokémon League in Snowcrest City\l"
	.string "but there's been an avalanche\l"
	.string "higher up the route so I couldn't\l"
	.string "even reach Iceperch City.\p"
	.string "I see you've already gone and\n"
	.string "obtained the Dynamo Badge from\l"
	.string "the Aldeleaf Gym.\p"
	.string "Good, that means you're not a complete\n"
	.string "newbie anymore.\p"
	.string "In any case, I've gone and caught\n"
	.string "a lot of new Pokémon.\p"
	.string "Let's see if yours are any match\n"
	.string "to them!$"

Route28_BrotherLost::
# 156 "data/maps/Route28/scripts.pory"
	.string "I…Hm…Not quite the outcome\n"
	.string "I expected…\l"
	.string "Beginner's luck, maybe?$"

Route28_BrotherPostBattle::
# 161 "data/maps/Route28/scripts.pory"
	.string "I see I clearly underestimated you.\n"
	.string "Looks like I need to actually\l"
	.string "start trying.\p"
	.string "Seeing how the route north is blocked,\n"
	.string "if I want to challenge even more gyms,\l"
	.string "I need to head south to Shoreslate City\l"
	.string "to take a ferry across the ocean.\l"
	.string "You may want to do the same.\p"
	.string "Anyway, catch ya later!$"

Route28_BrotherPostBattleNoBadge::
# 172 "data/maps/Route28/scripts.pory"
	.string "I see I clearly underestimated you.\n"
	.string "Looks like I need to actually\l"
	.string "start trying.\p"
	.string "Seeing how the route north is blocked,\n"
	.string "if I want to challenge even more gyms,\l"
	.string "I need to head south to Shoreslate City\l"
	.string "to take a ferry across the ocean.\p"
	.string "Seeing how much you've progressed,\n"
	.string "I think you should try taking on the\l"
	.string "Aldeleaf City Gym.\p"
	.string "Once you've obtained your second badge,\n"
	.string "you may want to head south as well.\p"
	.string "Anyway, catch ya later!$"

Route28_Trainer1_BugCatcherIntro::
# 218 "data/maps/Route28/scripts.pory"
	.string "You're not afraid of little bugs,\n"
	.string "are you?$"

Route28_Trainer1_BugCatcherDefeat::
# 222 "data/maps/Route28/scripts.pory"
	.string "How could this be?!$"

Route28_Trainer1_BugCatcherPostBattle::
# 225 "data/maps/Route28/scripts.pory"
	.string "Next time I'll have an army of bugs.\n"
	.string "You can count on that!$"

Route28_Trainer2_HikerIntro::
# 230 "data/maps/Route28/scripts.pory"
	.string "The path forward is blocked.\n"
	.string "Why not have a duel with me instead?$"

Route28_Trainer2_HikerDefeat::
# 234 "data/maps/Route28/scripts.pory"
	.string "Bwahaha! Good show!$"

Route28_Trainer2_HikerPostBattle::
# 237 "data/maps/Route28/scripts.pory"
	.string "I know your types, always wanting to\n"
	.string "explore every nook and cranny.\l"
	.string "I am much the same.\p"
	.string "Still, the road ahead is very unsafe.\n"
	.string "I recommend turning back while you can.$"

Route28_Trainer3_NinjaBoyIntro::
# 245 "data/maps/Route28/scripts.pory"
	.string "I move at the speed of sound!$"

Route28_Trainer3_NinjaBoyDefeat::
# 248 "data/maps/Route28/scripts.pory"
	.string "Ninjas, scatter!$"

Route28_Trainer3_NinjaBoyPostBattle::
# 251 "data/maps/Route28/scripts.pory"
	.string "I must train more by staying here\n"
	.string "and ambushing any unsuspecting\l"
	.string "trainers to a Pokémon battle!$"

Route28_Trainer4_PsychicIntro::
# 257 "data/maps/Route28/scripts.pory"
	.string "Have you ever fought against\n"
	.string "psychic types before?\l"
	.string "Prepare to get overwhelmed!$"

Route28_Trainer4_PsychicDefeat::
# 262 "data/maps/Route28/scripts.pory"
	.string "I should've seen this…$"

Route28_Trainer4_PsychicPostBattle::
# 265 "data/maps/Route28/scripts.pory"
	.string "I'm sensing you want to explore\n"
	.string "the route ahead?\p"
	.string "Even without the avalanche blocking\n"
	.string "your way, I'm afraid the area might\l"
	.string "be way out of your league.$"

Route28_Fisher_Text::
# 277 "data/maps/Route28/scripts.pory"
	.string "Route 28 is split in northern and\n"
	.string "southern sections.\p"
	.string "The northern section of the route goes\n"
	.string "high up into the mountains, making\l"
	.string "that part of the route quite snowy.\p"
	.string "Some of the terrain between the\n"
	.string "sections is incredibly rough so\l"
	.string "instead of forcing people to endanger\l"
	.string "themselves every time they want to\l"
	.string "get across, they opted to build\l"
	.string "a tunnel house that goes over\l"
	.string "the dangerous terrain instead.$"

Route28_Sign_Text::
# 295 "data/maps/Route28/scripts.pory"
	.string "Trainer Tips\p"
	.string "During a battle, holding the START\n"
	.string "button and pressing up or down on\l"
	.string "the D-Pad changes the style of the\l"
	.string "window border, while pressing left or\l"
	.string "down on the D-Pad changes the color\l"
	.string "of the battle interface.\p"
	.string "During double battles, pressing the\n"
	.string "SELECT button switches the view\l"
	.string "between health bars and numbers.$"
