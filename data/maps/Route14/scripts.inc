Route14_MapScripts::
# 2 "data/maps/Route14/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, R14_ControlFlags
	.byte 0


R14_ControlFlags::
# 6 "data/maps/Route14/scripts.pory"
	special SetRoute119Weather
# 7 "data/maps/Route14/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge R14_ControlFlags_2
R14_ControlFlags_1:
# 13 "data/maps/Route14/scripts.pory"
	switch VAR_ROUTE14_ROCKET_EVENT
# 14 "data/maps/Route14/scripts.pory"
	case 0, R14_ControlFlags_5
# 15 "data/maps/Route14/scripts.pory"
	case 1, R14_ControlFlags_5
# 18 "data/maps/Route14/scripts.pory"
	case 2, R14_ControlFlags_6
# 23 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_2
# 24 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_4
	return

R14_ControlFlags_2:
# 8 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_1
# 9 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_3
# 11 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_4
	goto R14_ControlFlags_1

R14_ControlFlags_5:
# 16 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_1
# 17 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_2
	return

R14_ControlFlags_6:
# 19 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/Route14/scripts.pory"
	setflag FLAG_TEMP_3
	return


Route14_Tr1_Running_F::
# 30 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR1_RUNNING_F, R14Tr1_Intro, R14Tr1_Lose
# 31 "data/maps/Route14/scripts.pory"
	msgbox R14Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr2_Hiker::
# 51 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR2_HIKER, R14Tr2_Intro, R14Tr2_Lose
# 52 "data/maps/Route14/scripts.pory"
	msgbox R14Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


R14_Sign1::
# 71 "data/maps/Route14/scripts.pory"
	msgbox R14_Sign1_Text, MSGBOX_SIGN
	return


R14_RR_Event_Trigger1::
# 77 "data/maps/Route14/scripts.pory"
	lock
# 78 "data/maps/Route14/scripts.pory"
	msgbox R14_RR_Event_Trigger1Stop, MSGBOX_DEFAULT
# 79 "data/maps/Route14/scripts.pory"
	closemessage
# 80 "data/maps/Route14/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 81 "data/maps/Route14/scripts.pory"
	clearflag FLAG_TEMP_2
# 82 "data/maps/Route14/scripts.pory"
	addobject 14
# 83 "data/maps/Route14/scripts.pory"
	delay 30
# 84 "data/maps/Route14/scripts.pory"
	safefollow
# 85 "data/maps/Route14/scripts.pory"
	applymovement 14, R14_GruntEscapes
# 86 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route14/scripts.pory"
	removeobject 14
# 88 "data/maps/Route14/scripts.pory"
	applymovement 15, R14_ChaseGrunt1
# 89 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route14/scripts.pory"
	msgbox R14_DontTakeResearch
# 91 "data/maps/Route14/scripts.pory"
	closemessage
# 92 "data/maps/Route14/scripts.pory"
	applymovement 15, R14_ChaseGrunt2
# 93 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route14/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/Route14/scripts.pory"
	setobjectxyperm 15, 41, 13
# 96 "data/maps/Route14/scripts.pory"
	setobjectxy 15, 41, 13
# 97 "data/maps/Route14/scripts.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 98 "data/maps/Route14/scripts.pory"
	goto_if_set FLAG_Q34_DADS_HOME_START, R14_RR_Event_Trigger1_2
R14_RR_Event_Trigger1_1:
# 101 "data/maps/Route14/scripts.pory"
	setflag FLAG_HIDE_LAB_RIVAL
# 102 "data/maps/Route14/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 1
# 103 "data/maps/Route14/scripts.pory"
	release
	end

R14_RR_Event_Trigger1_2:
# 99 "data/maps/Route14/scripts.pory"
	completequest FLAG_Q34_DADS_HOME_COMPLETE
	goto R14_RR_Event_Trigger1_1


# 111 "data/maps/Route14/scripts.pory"
R14_GruntEscapes:
# 112 "data/maps/Route14/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route14/scripts.pory"
	walk_fast_down
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route14/scripts.pory"
	step_end

# 116 "data/maps/Route14/scripts.pory"
R14_GruntEscapes2:
# 117 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route14/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route14/scripts.pory"
	step_end

# 120 "data/maps/Route14/scripts.pory"
R14_ChaseGrunt1:
# 121 "data/maps/Route14/scripts.pory"
	walk_down
# 121 "data/maps/Route14/scripts.pory"
	walk_down
# 121 "data/maps/Route14/scripts.pory"
	walk_down
# 121 "data/maps/Route14/scripts.pory"
	walk_down
# 122 "data/maps/Route14/scripts.pory"
	walk_left
# 122 "data/maps/Route14/scripts.pory"
	walk_left
# 122 "data/maps/Route14/scripts.pory"
	walk_left
# 122 "data/maps/Route14/scripts.pory"
	walk_left
# 123 "data/maps/Route14/scripts.pory"
	step_end

# 125 "data/maps/Route14/scripts.pory"
R14_ChaseGrunt2:
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
# 126 "data/maps/Route14/scripts.pory"
	walk_left
	step_end

R14_BlockAccessToFacility::
# 134 "data/maps/Route14/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 1
	goto_if_eq R14_BlockAccessToFacility_2
# 138 "data/maps/Route14/scripts.pory"
	msgbox R14_BlockAccessToFacility_Text2
R14_BlockAccessToFacility_1:
# 140 "data/maps/Route14/scripts.pory"
	closemessage
# 141 "data/maps/Route14/scripts.pory"
	safefollow
# 142 "data/maps/Route14/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 143 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route14/scripts.pory"
	release
	return

R14_BlockAccessToFacility_2:
# 135 "data/maps/Route14/scripts.pory"
	msgbox R14_BlockAccessToFacility_Text
	goto R14_BlockAccessToFacility_1


R14_Scientist::
# 155 "data/maps/Route14/scripts.pory"
	msgbox R14_Scientist_Text, MSGBOX_NPC
	return


R14_Bouncer::
# 164 "data/maps/Route14/scripts.pory"
	msgbox R14_Bouncer_Text, MSGBOX_NPC
# 165 "data/maps/Route14/scripts.pory"
	turnobject 17, DIR_SOUTH
	return


R14_HelpScientist1::
# 174 "data/maps/Route14/scripts.pory"
	setvar VAR_TEMP_1, 1
# 175 "data/maps/Route14/scripts.pory"
	goto R14_HelpScientist
	return


R14_HelpScientist2::
# 178 "data/maps/Route14/scripts.pory"
	setvar VAR_TEMP_1, 2
# 179 "data/maps/Route14/scripts.pory"
	goto R14_HelpScientist
	return


R14_HelpScientist3::
# 182 "data/maps/Route14/scripts.pory"
	setvar VAR_TEMP_1, 3
# 183 "data/maps/Route14/scripts.pory"
	goto R14_HelpScientist
	return


R14_HelpScientist::
# 186 "data/maps/Route14/scripts.pory"
	lock
# 187 "data/maps/Route14/scripts.pory"
	safefollow
# 188 "data/maps/Route14/scripts.pory"
	switch VAR_TEMP_1
# 189 "data/maps/Route14/scripts.pory"
	case 1, R14_HelpScientist_3
# 191 "data/maps/Route14/scripts.pory"
	case 2, R14_HelpScientist_4
# 193 "data/maps/Route14/scripts.pory"
	case 3, R14_HelpScientist_5
R14_HelpScientist_1:
# 196 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route14/scripts.pory"
	playse SE_PIN
# 198 "data/maps/Route14/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 199 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route14/scripts.pory"
	delay 48
# 201 "data/maps/Route14/scripts.pory"
	switch VAR_TEMP_1
# 202 "data/maps/Route14/scripts.pory"
	case 1, R14_HelpScientist_8
# 204 "data/maps/Route14/scripts.pory"
	case 2, R14_HelpScientist_9
# 206 "data/maps/Route14/scripts.pory"
	case 3, R14_HelpScientist_10
R14_HelpScientist_6:
# 209 "data/maps/Route14/scripts.pory"
	delay 15
# 210 "data/maps/Route14/scripts.pory"
	msgbox R14_Robbed
# 211 "data/maps/Route14/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 2
# 212 "data/maps/Route14/scripts.pory"
	release
	return

R14_HelpScientist_3:
# 190 "data/maps/Route14/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterLeft
	goto R14_HelpScientist_1

R14_HelpScientist_4:
# 192 "data/maps/Route14/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterUp
	goto R14_HelpScientist_1

R14_HelpScientist_5:
# 194 "data/maps/Route14/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterRight
	goto R14_HelpScientist_1

R14_HelpScientist_8:
# 203 "data/maps/Route14/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto R14_HelpScientist_6

R14_HelpScientist_9:
# 205 "data/maps/Route14/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto R14_HelpScientist_6

R14_HelpScientist_10:
# 207 "data/maps/Route14/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto R14_HelpScientist_6


R14_ChaseAfterRocket1::
# 216 "data/maps/Route14/scripts.pory"
	setvar VAR_TEMP_1, 1
# 217 "data/maps/Route14/scripts.pory"
	goto R14_ChaseAfterRocket
	return


R14_ChaseAfterRocket2::
# 220 "data/maps/Route14/scripts.pory"
	setvar VAR_TEMP_1, 2
# 221 "data/maps/Route14/scripts.pory"
	goto R14_ChaseAfterRocket
	return


R14_ChaseAfterRocket::
# 224 "data/maps/Route14/scripts.pory"
	lock
# 225 "data/maps/Route14/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq R14_ChaseAfterRocket_2
# 229 "data/maps/Route14/scripts.pory"
	turnobject 17, DIR_EAST
R14_ChaseAfterRocket_1:
# 231 "data/maps/Route14/scripts.pory"
	playse SE_PIN
# 232 "data/maps/Route14/scripts.pory"
	safefollow
# 233 "data/maps/Route14/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 234 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route14/scripts.pory"
	delay 48
# 236 "data/maps/Route14/scripts.pory"
	applymovement 17, R14_GruntEscapes2
# 237 "data/maps/Route14/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route14/scripts.pory"
	removeobject 17
# 239 "data/maps/Route14/scripts.pory"
	release
# 240 "data/maps/Route14/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 3
	return

R14_ChaseAfterRocket_2:
# 226 "data/maps/Route14/scripts.pory"
	turnobject 17, DIR_NORTH
	goto R14_ChaseAfterRocket_1


Route14_Tr3_ParasolLady::
# 258 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR3_PARASOLLADY, R14Tr3_Intro, R14Tr3_Lose
# 259 "data/maps/Route14/scripts.pory"
	msgbox R14Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr4_Fisher::
# 276 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR4_FISHER, R14Tr4_Intro, R14Tr4_Lose
# 277 "data/maps/Route14/scripts.pory"
	msgbox R14Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr5_ParasolLady2::
# 293 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR5_PARASOLLADY2, R14Tr5_Intro, R14Tr5_Lose
# 294 "data/maps/Route14/scripts.pory"
	msgbox R14Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr6_NinjaBoy::
# 313 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR6_NINJABOY, R14Tr6_Intro, R14Tr6_Lose
# 314 "data/maps/Route14/scripts.pory"
	msgbox R14Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr7_Rocker::
# 332 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR7_ROCKER, R14Tr7_Intro, R14Tr7_Lose
# 333 "data/maps/Route14/scripts.pory"
	msgbox R14Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr8_Maniac::
# 351 "data/maps/Route14/scripts.pory"
	trainerbattle_single TRAINER_R14_TR8_MANIAC, R14Tr8_Intro, R14Tr8_Lose
# 352 "data/maps/Route14/scripts.pory"
	msgbox R14Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Grotto_Entrance::
# 370 "data/maps/Route14/scripts.pory"
	lock
# 371 "data/maps/Route14/scripts.pory"
	msgbox GoInsideGrotto, MSGBOX_YESNO
# 372 "data/maps/Route14/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route14_Grotto_Entrance_2
# 376 "data/maps/Route14/scripts.pory"
	warp MAP_ROUTE14_GROTTO, 6, 19
# 377 "data/maps/Route14/scripts.pory"
	waitstate
# 378 "data/maps/Route14/scripts.pory"
	release
	return

Route14_Grotto_Entrance_2:
# 373 "data/maps/Route14/scripts.pory"
	release
	end


R14Tr1_Intro::
# 34 "data/maps/Route14/scripts.pory"
	.string "Whether it be rain or sunshine,\n"
	.string "I still push on!$"

R14Tr1_Lose::
# 38 "data/maps/Route14/scripts.pory"
	.string "I can handle any weather,\n"
	.string "but I couldn't handle you…$"

R14Tr1_PostBattle::
# 42 "data/maps/Route14/scripts.pory"
	.string "It seems to rain here on an almost\n"
	.string "daily basis.\p"
	.string "When you finally get a sunny day,\n"
	.string "having endured all that rain really\l"
	.string "makes it feel worth the wait.$"

R14Tr2_Intro::
# 55 "data/maps/Route14/scripts.pory"
	.string "The road to the next town is long\n"
	.string "and arduous.\l"
	.string "Let's see if you're prepared!$"

R14Tr2_Lose::
# 60 "data/maps/Route14/scripts.pory"
	.string "Heh… Guess I'm the one who wasn't\n"
	.string "prepared…$"

R14Tr2_PostBattle::
# 64 "data/maps/Route14/scripts.pory"
	.string "You should stock up on essentials if\n"
	.string "you're planning to head out this way.\l"
	.string "It's a long way till the next town.$"

R14_Sign1_Text::
# 73 "data/maps/Route14/scripts.pory"
	.string "Legendary Pokémon Research Center$"

R14_RR_Event_Trigger1Stop::
# 107 "data/maps/Route14/scripts.pory"
	.string "Wait!\n"
	.string "Stop!$"

R14_DontTakeResearch::
# 128 "data/maps/Route14/scripts.pory"
	.string "Please don't take our important\n"
	.string "research!$"

R14_BlockAccessToFacility_Text::
# 146 "data/maps/Route14/scripts.pory"
	.string "Better see what the commotion\n"
	.string "is about…$"

R14_BlockAccessToFacility_Text2::
# 150 "data/maps/Route14/scripts.pory"
	.string "Better retrieve the stolen research\n"
	.string "first…$"

R14_Scientist_Text::
# 157 "data/maps/Route14/scripts.pory"
	.string "Please chase them down and recover\n"
	.string "our important research papers!\p"
	.string "I'll find another way around and catch\n"
	.string "up with you as soon as I can.$"

R14_Bouncer_Text::
# 167 "data/maps/Route14/scripts.pory"
	.string "I'm sorry, but we don't take visitors\n"
	.string "at this time.$"

R14_Robbed::
# 243 "data/maps/Route14/scripts.pory"
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
# 262 "data/maps/Route14/scripts.pory"
	.string "Why am I carrying this parasol?\p"
	.string "I'll tell you if you can win against me.$"

R14Tr3_Lose::
# 265 "data/maps/Route14/scripts.pory"
	.string "A parasol can't ward off Pokémon\n"
	.string "attacks…$"

R14Tr3_PostBattle::
# 269 "data/maps/Route14/scripts.pory"
	.string "I don't think strong sunlight is good\n"
	.string "for my Pokémon.\l"
	.string "So I shield them with my parasol.$"

R14Tr4_Intro::
# 280 "data/maps/Route14/scripts.pory"
	.string "I like it when my opponents struggle!$"

R14Tr4_Lose::
# 283 "data/maps/Route14/scripts.pory"
	.string "Looks like I'm the one struggling…$"

R14Tr4_PostBattle::
# 286 "data/maps/Route14/scripts.pory"
	.string "Whether it's fishing or training your\n"
	.string "Pokémon, the most important thing is\l"
	.string "to have patience.$"

R14Tr5_Intro::
# 297 "data/maps/Route14/scripts.pory"
	.string "Splish splash splish splash!\p"
	.string "Oh, a trainer! Let's see if your\n"
	.string "Pokémon can make a splash!$"

R14Tr5_Lose::
# 302 "data/maps/Route14/scripts.pory"
	.string "You're no fun…$"

R14Tr5_PostBattle::
# 305 "data/maps/Route14/scripts.pory"
	.string "I love being in a rain with my\n"
	.string "Pokémon!\p"
	.string "The sound of rain can be so calming,\n"
	.string "and my Pokémon likes it too!$"

R14Tr6_Intro::
# 317 "data/maps/Route14/scripts.pory"
	.string "My last target may have escaped,\n"
	.string "but you won't!$"

R14Tr6_Lose::
# 321 "data/maps/Route14/scripts.pory"
	.string "Target too strong!\n"
	.string "Retreat!$"

R14Tr6_PostBattle::
# 325 "data/maps/Route14/scripts.pory"
	.string "Please leave me be!\p"
	.string "I promise I won't prey on the\n"
	.string "weak again!$"

R14Tr7_Intro::
# 336 "data/maps/Route14/scripts.pory"
	.string "My bird is the strongest in the world!\n"
	.string "Behold!$"

R14Tr7_Lose::
# 340 "data/maps/Route14/scripts.pory"
	.string "This failure is on me,\n"
	.string "not on my Pokémon…$"

R14Tr7_PostBattle::
# 344 "data/maps/Route14/scripts.pory"
	.string "Most birds don't like flying in\n"
	.string "the rain.\l"
	.string "My bird isn't like most birds.$"

R14Tr8_Intro::
# 355 "data/maps/Route14/scripts.pory"
	.string "Ufufufufufu…\n"
	.string "Want to battle against my Pokémon…?$"

R14Tr8_Lose::
# 359 "data/maps/Route14/scripts.pory"
	.string "M-My Pokémon…$"

R14Tr8_PostBattle::
# 362 "data/maps/Route14/scripts.pory"
	.string "A big body that's all lumpy and hard,\n"
	.string "enormous horns, and vicious fangs…\p"
	.string "Ufufufufu…\n"
	.string "I wish I had a Pokémon… like that…$"
