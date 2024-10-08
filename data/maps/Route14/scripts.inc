Route14_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, R14_ControlFlags
	.byte 0


R14_ControlFlags::
	special SetRoute119Weather
	switch VAR_ROUTE14_ROCKET_EVENT
	case 0, R14_ControlFlags_2
	case 1, R14_ControlFlags_2
	case 2, R14_ControlFlags_3
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	return

R14_ControlFlags_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return

R14_ControlFlags_3:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	return


Route14_Tr1_Running_F::
	trainerbattle_single TRAINER_R14_TR1_RUNNING_F, R14Tr1_Intro, R14Tr1_Lose
	msgbox R14Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr2_Hiker::
	trainerbattle_single TRAINER_R14_TR2_HIKER, R14Tr2_Intro, R14Tr2_Lose
	msgbox R14Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


R14_Sign1::
	msgbox R14_Sign1_Text, MSGBOX_SIGN
	return


R14_RR_Event_Trigger1::
	lock
	msgbox R14_RR_Event_Trigger1Stop, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	clearflag FLAG_TEMP_2
	addobject 14
	delay 30
	safefollow
	applymovement 14, R14_GruntEscapes
	waitmovement 0
	removeobject 14
	applymovement 15, R14_ChaseGrunt1
	waitmovement 0
	msgbox R14_DontTakeResearch
	closemessage
	applymovement 15, R14_ChaseGrunt2
	waitmovement 0
	fadedefaultbgm
	setobjectxyperm 15, 41, 13
	setobjectxy 15, 41, 13
	compare VAR_PEARLWOOD_TOWN_STATE, 10
	goto_if_eq R14_RR_Event_Trigger1_2
	setvar VAR_PEARLWOOD_TOWN_STATE, 20
R14_RR_Event_Trigger1_1:
	setvar VAR_ROUTE14_ROCKET_EVENT, 1
	release
	end

R14_RR_Event_Trigger1_2:
	setvar VAR_PEARLWOOD_TOWN_STATE, 15
	goto R14_RR_Event_Trigger1_1


R14_GruntEscapes:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

R14_GruntEscapes2:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

R14_ChaseGrunt1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

R14_ChaseGrunt2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

R14_BlockAccessToFacility::
	compare VAR_ROUTE14_ROCKET_EVENT, 1
	goto_if_eq R14_BlockAccessToFacility_2
	msgbox R14_BlockAccessToFacility_Text2
R14_BlockAccessToFacility_1:
	closemessage
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
	waitmovement 0
	release
	return

R14_BlockAccessToFacility_2:
	msgbox R14_BlockAccessToFacility_Text
	goto R14_BlockAccessToFacility_1


R14_Scientist::
	msgbox R14_Scientist_Text, MSGBOX_NPC
	return


R14_Bouncer::
	msgbox R14_Bouncer_Text, MSGBOX_NPC
	turnobject 17, DIR_SOUTH
	return


R14_HelpScientist1::
	setvar VAR_TEMP_1, 1
	goto R14_HelpScientist
	return


R14_HelpScientist2::
	setvar VAR_TEMP_1, 2
	goto R14_HelpScientist
	return


R14_HelpScientist3::
	setvar VAR_TEMP_1, 3
	goto R14_HelpScientist
	return


R14_HelpScientist::
	lock
	safefollow
	switch VAR_TEMP_1
	case 1, R14_HelpScientist_3
	case 2, R14_HelpScientist_4
	case 3, R14_HelpScientist_5
R14_HelpScientist_1:
	waitmovement 0
	playse SE_PIN
	applymovement 15, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	switch VAR_TEMP_1
	case 1, R14_HelpScientist_8
	case 2, R14_HelpScientist_9
	case 3, R14_HelpScientist_10
R14_HelpScientist_6:
	delay 15
	msgbox R14_Robbed
	setvar VAR_ROUTE14_ROCKET_EVENT, 2
	release
	return

R14_HelpScientist_3:
	applymovement 15, Common_Movement_WalkInPlaceFasterLeft
	goto R14_HelpScientist_1

R14_HelpScientist_4:
	applymovement 15, Common_Movement_WalkInPlaceFasterUp
	goto R14_HelpScientist_1

R14_HelpScientist_5:
	applymovement 15, Common_Movement_WalkInPlaceFasterRight
	goto R14_HelpScientist_1

R14_HelpScientist_8:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto R14_HelpScientist_6

R14_HelpScientist_9:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto R14_HelpScientist_6

R14_HelpScientist_10:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto R14_HelpScientist_6


R14_ChaseAfterRocket1::
	setvar VAR_TEMP_1, 1
	goto R14_ChaseAfterRocket
	return


R14_ChaseAfterRocket2::
	setvar VAR_TEMP_1, 2
	goto R14_ChaseAfterRocket
	return


R14_ChaseAfterRocket::
	lock
	compare VAR_TEMP_1, 1
	goto_if_eq R14_ChaseAfterRocket_2
	turnobject 17, DIR_EAST
R14_ChaseAfterRocket_1:
	playse SE_PIN
	safefollow
	applymovement 17, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	applymovement 17, R14_GruntEscapes2
	waitmovement 0
	removeobject 17
	release
	setvar VAR_ROUTE14_ROCKET_EVENT, 3
	return

R14_ChaseAfterRocket_2:
	turnobject 17, DIR_NORTH
	goto R14_ChaseAfterRocket_1


Route14_Tr3_ParasolLady::
	trainerbattle_single TRAINER_R14_TR3_PARASOLLADY, R14Tr3_Intro, R14Tr3_Lose
	msgbox R14Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr4_Fisher::
	trainerbattle_single TRAINER_R14_TR4_FISHER, R14Tr4_Intro, R14Tr4_Lose
	msgbox R14Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr5_ParasolLady2::
	trainerbattle_single TRAINER_R14_TR5_PARASOLLADY2, R14Tr5_Intro, R14Tr5_Lose
	msgbox R14Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr6_NinjaBoy::
	trainerbattle_single TRAINER_R14_TR6_NINJABOY, R14Tr6_Intro, R14Tr6_Lose
	msgbox R14Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr7_Rocker::
	trainerbattle_single TRAINER_R14_TR7_ROCKER, R14Tr7_Intro, R14Tr7_Lose
	msgbox R14Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr8_Maniac::
	trainerbattle_single TRAINER_R14_TR8_MANIAC, R14Tr8_Intro, R14Tr8_Lose
	msgbox R14Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Grotto_Entrance::
	lock
	msgbox GoInsideGrotto, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Route14_Grotto_Entrance_2
	warp MAP_ROUTE14_GROTTO, 6, 19
	waitstate
	release
	return

Route14_Grotto_Entrance_2:
	release
	end


R14Tr1_Intro::
	.string "Whether it be rain or sunshine,\n"
	.string "I still push on!$"

R14Tr1_Lose::
	.string "I can handle any weather,\n"
	.string "but I couldn't handle you…$"

R14Tr1_PostBattle::
	.string "It seems to rain here on an almost\n"
	.string "daily basis.\p"
	.string "When you finally get a sunny day,\n"
	.string "having endured all that rain really\l"
	.string "makes it feel worth the wait.$"

R14Tr2_Intro::
	.string "The road to the next town is long\n"
	.string "and arduous.\l"
	.string "Let's see if you're prepared!$"

R14Tr2_Lose::
	.string "Heh… Guess I'm the one who wasn't\n"
	.string "prepared…$"

R14Tr2_PostBattle::
	.string "You should stock up on essentials if\n"
	.string "you're planning to head out this way.\l"
	.string "It's a long way till the next town.$"

R14_Sign1_Text::
	.string "Legendary Pokémon Research Center$"

R14_RR_Event_Trigger1Stop::
	.string "Wait!\n"
	.string "Stop!$"

R14_DontTakeResearch::
	.string "Please don't take our important\n"
	.string "research!$"

R14_BlockAccessToFacility_Text::
	.string "Better see what the commotion\n"
	.string "is about…$"

R14_BlockAccessToFacility_Text2::
	.string "Better retrieve the stolen research\n"
	.string "first…$"

R14_Scientist_Text::
	.string "Please chase them down and recover\n"
	.string "our important research papers!\p"
	.string "I'll find another way around and catch\n"
	.string "up with you as soon as I can.$"

R14_Bouncer_Text::
	.string "I'm sorry, but we don't take visitors\n"
	.string "at this time.$"

R14_Robbed::
	.string "You! You look like a strong trainer!\p"
	.string "Please! Our important research was\n"
	.string "just stolen by Team Rocket!\p"
	.string "I saw them crossing this gap by\n"
	.string "jumping on the stone pillars.\p"
	.string "I would follow them myself but I don't\n"
	.string "have the dexterity to do that.\p"
	.string "Can you please chase them down and\n"
	.string "recover our important research papers?\p"
	.string "I'll find another way around and catch\n"
	.string "up with you as soon as I can.$"

R14Tr3_Intro::
	.string "Why am I carrying this parasol?\p"
	.string "I'll tell you if you can win against me.$"

R14Tr3_Lose::
	.string "A parasol can't ward off Pokémon\n"
	.string "attacks…$"

R14Tr3_PostBattle::
	.string "I don't think strong sunlight is good\n"
	.string "for my Pokémon.\l"
	.string "So I shield them with my parasol.$"

R14Tr4_Intro::
	.string "I like it when my opponents struggle!$"

R14Tr4_Lose::
	.string "Looks like I'm the one struggling…$"

R14Tr4_PostBattle::
	.string "Whether it's fishing or training your\n"
	.string "Pokémon, the most important thing is\l"
	.string "to have patience.$"

R14Tr5_Intro::
	.string "Splish splash splish splash!\p"
	.string "Oh, a trainer! Let's see if your\n"
	.string "Pokémon can make a splash!$"

R14Tr5_Lose::
	.string "You're no fun…$"

R14Tr5_PostBattle::
	.string "I love being in a rain with my\n"
	.string "Pokémon!\p"
	.string "The sound of rain can be so calming,\n"
	.string "and my Pokémon likes it too!$"

R14Tr6_Intro::
	.string "My last target may have escaped,\n"
	.string "but you won't!$"

R14Tr6_Lose::
	.string "Target too strong!\n"
	.string "Retreat!$"

R14Tr6_PostBattle::
	.string "Please leave me be!\p"
	.string "I promise I won't prey on the\n"
	.string "weak again!$"

R14Tr7_Intro::
	.string "My bird is the strongest in the world!\n"
	.string "Behold!$"

R14Tr7_Lose::
	.string "This failure is on me,\n"
	.string "not on my Pokémon…$"

R14Tr7_PostBattle::
	.string "Most birds don't like flying in\n"
	.string "the rain.\l"
	.string "My bird isn't like most birds.$"

R14Tr8_Intro::
	.string "Ufufufufufu…\n"
	.string "Want to battle against my Pokémon…?$"

R14Tr8_Lose::
	.string "M-My Pokémon…$"

R14Tr8_PostBattle::
	.string "A big body that's all lumpy and hard,\n"
	.string "enormous horns, and vicious fangs…\p"
	.string "Ufufufufu…\n"
	.string "I wish I had a Pokémon… like that…$"
