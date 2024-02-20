Route28_MapScripts::
	.byte 0


Route28_BrotherTrigger_1::
	goto_if_set FLAG_ROUTE28_DESPAWN_BROTHER, Route28_BrotherTrigger_1_1
	lockall
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	applymovement 4, Route28_MoveBrother1
	waitmovement 4
	delay 15
	call Route28_BrotherFight
	applymovement 4, Route28BrotherLeaves1
	goto Route28_EndScript
	return

Route28_BrotherTrigger_1_1:
	release
	end


Route28_BrotherTrigger_2::
	goto_if_set FLAG_ROUTE28_DESPAWN_BROTHER, Route28_BrotherTrigger_2_1
	lockall
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	applymovement 4, Route28_MoveBrother2
	waitmovement 4
	delay 15
	call Route28_BrotherFight
	applymovement 4, Route28BrotherLeaves2
	goto Route28_EndScript
	return

Route28_BrotherTrigger_2_1:
	release
	end


Route28_EndScript::
	waitmovement 4
	delay 15
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	removeobject 4
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end


Route28_MoveBrother1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route28_MoveBrother2:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route28BrotherLeaves1:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route28BrotherLeaves2:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route28_BrotherFight::
	delay 5
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_8
Route28_BrotherFight_6:
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_5
Route28_BrotherFight_4:
	msgbox Route28_BrotherIntro, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto_if_set FLAG_UNUSED_PICKEDROWLET, Route28_BrotherFight_22
Route28_BrotherFight_21:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, Route28_BrotherFight_31
Route28_BrotherFight_30:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, Route28_BrotherFight_37
Route28_BrotherFight_1:
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_12
	msgbox Route28_BrotherPostBattleNoBadge, MSGBOX_DEFAULT
Route28_BrotherFight_11:
	waitmessage
	closemessage
	return

Route28_BrotherFight_2:
	msgbox Route28_BrotherIntroAfterGym, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto_if_set FLAG_UNUSED_PICKEDROWLET, Route28_BrotherFight_16
Route28_BrotherFight_15:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, Route28_BrotherFight_25
Route28_BrotherFight_24:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, Route28_BrotherFight_33
	goto Route28_BrotherFight_1

Route28_BrotherFight_3:
	msgbox Route28_BrotherIntroAfterGym, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto_if_set FLAG_UNUSED_PICKEDROWLET, Route28_BrotherFight_19
Route28_BrotherFight_18:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, Route28_BrotherFight_28
Route28_BrotherFight_27:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, Route28_BrotherFight_35
	goto Route28_BrotherFight_1

Route28_BrotherFight_5:
	goto_if_set FLAG_RECEIVED_HM_FLY, Route28_BrotherFight_3
	goto Route28_BrotherFight_4

Route28_BrotherFight_8:
	goto_if_unset FLAG_RECEIVED_HM_FLY, Route28_BrotherFight_2
	goto Route28_BrotherFight_6

Route28_BrotherFight_12:
	msgbox Route28_BrotherPostBattle, MSGBOX_DEFAULT
	goto Route28_BrotherFight_11

Route28_BrotherFight_16:
	trainerbattle_no_intro TRAINER_BROTHER3_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_15

Route28_BrotherFight_19:
	trainerbattle_no_intro TRAINER_BROTHER4_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_18

Route28_BrotherFight_22:
	trainerbattle_no_intro TRAINER_BROTHER2_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_21

Route28_BrotherFight_25:
	trainerbattle_no_intro TRAINER_BROTHER3_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_24

Route28_BrotherFight_28:
	trainerbattle_no_intro TRAINER_BROTHER4_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_27

Route28_BrotherFight_31:
	trainerbattle_no_intro TRAINER_BROTHER2_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_30

Route28_BrotherFight_33:
	trainerbattle_no_intro TRAINER_BROTHER3_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_35:
	trainerbattle_no_intro TRAINER_BROTHER4_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_37:
	trainerbattle_no_intro TRAINER_BROTHER2_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1


Route28_TM::
	finditem ITEM_TM43
	end


Route28_ItemBall::
	finditem ITEM_FULL_HEAL
	end


Route28_Trainer1_BugCatcher::
	trainerbattle_single TRAINER_R28_TR1_BUGCATCHER, Route28_Trainer1_BugCatcherIntro, Route28_Trainer1_BugCatcherDefeat
	msgbox Route28_Trainer1_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Trainer2_Hiker::
	trainerbattle_single TRAINER_R28_TR2_HIKER, Route28_Trainer2_HikerIntro, Route28_Trainer2_HikerDefeat
	msgbox Route28_Trainer2_HikerPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Trainer3_NinjaBoy::
	trainerbattle_single TRAINER_R28_TR3_NINJABOY, Route28_Trainer3_NinjaBoyIntro, Route28_Trainer3_NinjaBoyDefeat
	msgbox Route28_Trainer3_NinjaBoyPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Trainer4_Psychic::
	trainerbattle_single TRAINER_R28_TR4_PSYCHIC, Route28_Trainer4_PsychicIntro, Route28_Trainer4_PsychicDefeat
	msgbox Route28_Trainer4_PsychicPostBattle, MSGBOX_AUTOCLOSE
	end


Route28_Fisher::
	msgbox Route28_Fisher_Text, MSGBOX_NPC
	end


Route28_BrotherIntro::
	.string "Thomas: Yo, {PLAYER}!\p"
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
	.string "Thomas: Yo, {PLAYER}!\p"
	.string "I see you've finally made your way\n"
	.string "off the Coralgrove Islands.\p"
	.string "I wanted to head north to check out\n"
	.string "the Pokémon League in Snowcrest City\l"
	.string "but there's been an avalanche\l"
	.string "higher up the route so I couldn't\l"
	.string "even reach Iceperch City.\p"
	.string "I see you've already gone and got\n"
	.string "the Dynamo Badge from the Aldeleaf Gym.\l"
	.string "Good, that means you're not a complete\l"
	.string "newbie anymore.\p"
	.string "In any case, I've gone and caught\n"
	.string "a lot of new Pokémon.\p"
	.string "Let's see if yours are any match\n"
	.string "to them!$"

Route28_BrotherLost::
	.string "I…Hm…Not quite the outcome\n"
	.string "I expected…\l"
	.string "Beginner's luck, maybe?$"

Route28_BrotherPostBattle::
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
	.string "You're not afraid of little bugs,\n"
	.string "are you?$"

Route28_Trainer1_BugCatcherDefeat::
	.string "How could this be?!$"

Route28_Trainer1_BugCatcherPostBattle::
	.string "Next time I'll have an army of bugs.\n"
	.string "You can count on that!$"

Route28_Trainer2_HikerIntro::
	.string "The path forward is blocked.\n"
	.string "Why not have a duel with me instead?$"

Route28_Trainer2_HikerDefeat::
	.string "Bwahaha! Good show!$"

Route28_Trainer2_HikerPostBattle::
	.string "I know your types, always wanting to\n"
	.string "explore every nook and cranny.\l"
	.string "I am much the same.\p"
	.string "Still, the road ahead is very unsafe.\n"
	.string "I recommend turning back while you can.$"

Route28_Trainer3_NinjaBoyIntro::
	.string "I move at the speed of sound!$"

Route28_Trainer3_NinjaBoyDefeat::
	.string "Ninjas, scatter!$"

Route28_Trainer3_NinjaBoyPostBattle::
	.string "I must train more by staying here\n"
	.string "and ambushing any unsuspecting\l"
	.string "trainers to a Pokémon battle!$"

Route28_Trainer4_PsychicIntro::
	.string "Have you ever fought against\n"
	.string "psychic types before?\l"
	.string "Prepare to get overwhelmed!$"

Route28_Trainer4_PsychicDefeat::
	.string "I should've seen this…$"

Route28_Trainer4_PsychicPostBattle::
	.string "I'm sensing you want to explore\n"
	.string "the route ahead?\p"
	.string "Even without the avalanche blocking\n"
	.string "your way, I'm afraid the area might\l"
	.string "be way out of your league.$"

Route28_Fisher_Text::
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
