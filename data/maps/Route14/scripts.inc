Route14_MapScripts::
	.byte 0


Route14_Tr1_Running_F::
	trainerbattle_single TRAINER_R14_TR1_RUNNING_F, R14Tr1_Intro, R14Tr1_Lose
	msgbox R14Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route14_Tr2_Hiker::
	trainerbattle_single TRAINER_R14_TR2_HIKER, R14Tr2_Intro, R14Tr2_Lose
	msgbox R14Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


BetaBlock::
	lock
	msgbox EndOfBeta
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
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

EndOfBeta::
	.string "This is currently the end of beta.\n"
	.string "Thanks for playing!$"
