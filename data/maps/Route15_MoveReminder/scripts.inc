Route15_MoveReminder_MapScripts::
	.byte 0


Route15_MoveReminder::
# 4 "data/maps/Route15_MoveReminder/scripts.pory"
	lock
# 5 "data/maps/Route15_MoveReminder/scripts.pory"
	faceplayer
# 6 "data/maps/Route15_MoveReminder/scripts.pory"
	message HowMayIHelp
# 7 "data/maps/Route15_MoveReminder/scripts.pory"
	waitmessage
# 8 "data/maps/Route15_MoveReminder/scripts.pory"
	goto_if_set FLAG_MET_MOVE_REMINDER, Route15_MoveReminder_1
# 28 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultipush Route15_MoveReminder_Text_1, 0
# 29 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultipush Route15_MoveReminder_Text_2, 1
# 30 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultipush Route15_MoveReminder_Text_3, 2
# 31 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
# 32 "data/maps/Route15_MoveReminder/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/Route15_MoveReminder/scripts.pory"
	case 0, Route15_MoveReminder_11
# 35 "data/maps/Route15_MoveReminder/scripts.pory"
	case 1, Route15_MoveReminder_12
# 37 "data/maps/Route15_MoveReminder/scripts.pory"
	case 2, Route15_MoveReminder_13
# 39 "data/maps/Route15_MoveReminder/scripts.pory"
	case MULTI_B_PRESSED, Route15_MoveReminder_14
	return

Route15_MoveReminder_1:
# 9 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultipush Route15_MoveReminder_Text_0, 0
# 10 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultipush Route15_MoveReminder_Text_1, 1
# 11 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultipush Route15_MoveReminder_Text_2, 2
# 12 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultipush Route15_MoveReminder_Text_3, 3
# 13 "data/maps/Route15_MoveReminder/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
# 14 "data/maps/Route15_MoveReminder/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/Route15_MoveReminder/scripts.pory"
	case 0, Route15_MoveReminder_5
# 17 "data/maps/Route15_MoveReminder/scripts.pory"
	case 1, Route15_MoveReminder_6
# 19 "data/maps/Route15_MoveReminder/scripts.pory"
	case 2, Route15_MoveReminder_7
# 21 "data/maps/Route15_MoveReminder/scripts.pory"
	case 3, Route15_MoveReminder_8
# 23 "data/maps/Route15_MoveReminder/scripts.pory"
	case MULTI_B_PRESSED, Route15_MoveReminder_9
	return

Route15_MoveReminder_5:
# 16 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderTeachMove
	return

Route15_MoveReminder_6:
# 18 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderWhoAreYou
	return

Route15_MoveReminder_7:
# 20 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderWhyLiveHere
	return

Route15_MoveReminder_8:
# 22 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderGoodbye
	return

Route15_MoveReminder_9:
# 24 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderGoodbye
	return

Route15_MoveReminder_11:
# 34 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderWhoAreYou
	return

Route15_MoveReminder_12:
# 36 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderWhyLiveHere
	return

Route15_MoveReminder_13:
# 38 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderGoodbye
	return

Route15_MoveReminder_14:
# 40 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ReminderGoodbye
	return


ReminderTeachMove::
# 46 "data/maps/Route15_MoveReminder/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 47 "data/maps/Route15_MoveReminder/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReminderTeachMove_2
ReminderTeachMove_1:
# 50 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox HaveScaleWantMeToTeachMove, MSGBOX_YESNO
# 51 "data/maps/Route15_MoveReminder/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReminderTeachMove_5
ReminderTeachMove_4:
# 54 "data/maps/Route15_MoveReminder/scripts.pory"
	goto MoveReminder_ChooseMon
	return

ReminderTeachMove_2:
# 48 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ComeBackWithHeartScale
	goto ReminderTeachMove_1

ReminderTeachMove_5:
# 52 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ComeBackWithHeartScale
	goto ReminderTeachMove_4


ReminderWhoAreYou::
# 57 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox R15_ImTheMoveTutor
# 58 "data/maps/Route15_MoveReminder/scripts.pory"
	setflag FLAG_MET_MOVE_REMINDER
# 59 "data/maps/Route15_MoveReminder/scripts.pory"
	goto Route15_MoveReminder
	return


ReminderWhyLiveHere::
# 62 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox WhyILiveHere
# 63 "data/maps/Route15_MoveReminder/scripts.pory"
	goto Route15_MoveReminder
	return


ReminderGoodbye::
# 66 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox ReminderGoodbye_Text
# 67 "data/maps/Route15_MoveReminder/scripts.pory"
	release
	return


MoveReminder_ChooseMon::
# 71 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox TutorWhichMon
# 72 "data/maps/Route15_MoveReminder/scripts.pory"
	special ChooseMonForMoveRelearner
# 73 "data/maps/Route15_MoveReminder/scripts.pory"
	waitstate
# 74 "data/maps/Route15_MoveReminder/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ComeBackWithHeartScale
# 75 "data/maps/Route15_MoveReminder/scripts.pory"
	special IsSelectedMonEgg
# 76 "data/maps/Route15_MoveReminder/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
# 77 "data/maps/Route15_MoveReminder/scripts.pory"
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
# 78 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ChooseMoveToTeach
	return


ChooseMoveToTeach::
# 82 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox TeachWhichMove
# 83 "data/maps/Route15_MoveReminder/scripts.pory"
	special TeachMoveRelearnerMove
# 84 "data/maps/Route15_MoveReminder/scripts.pory"
	waitstate
# 85 "data/maps/Route15_MoveReminder/scripts.pory"
	goto_if_eq VAR_0x8004, 0, MoveReminder_ChooseMon
# 86 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox HandedOverHeartScale
# 87 "data/maps/Route15_MoveReminder/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 88 "data/maps/Route15_MoveReminder/scripts.pory"
	goto ComeBackWithHeartScale
	return


NoMoveToTeachMon::
# 92 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox DontHaveMoveToTeachPokemon
# 93 "data/maps/Route15_MoveReminder/scripts.pory"
	goto MoveReminder_ChooseMon
	return


CantTeachEgg::
# 96 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox CantTeachEgg_Text
# 97 "data/maps/Route15_MoveReminder/scripts.pory"
	goto MoveReminder_ChooseMon
	return


ComeBackWithHeartScale::
# 100 "data/maps/Route15_MoveReminder/scripts.pory"
	msgbox ComeBackWithHeartScale_Text
# 101 "data/maps/Route15_MoveReminder/scripts.pory"
	release
	end


Route15_MoveReminder_Text_0:
# 9 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Teach a move$"

Route15_MoveReminder_Text_1:
# 10 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Who are you?$"

Route15_MoveReminder_Text_2:
# 11 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Why live here?$"

Route15_MoveReminder_Text_3:
# 12 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Goodbye$"

HowMayIHelp::
# 105 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "How may I help?$"

HaveScaleWantMeToTeachMove::
# 108 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness Heart Scale!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

R15_ImTheMoveTutor::
# 114 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a Heart Scale.\n"
	.string "I'm collecting those now.$"

WhyILiveHere::
# 124 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "I used to live in Sandstone City, but\n"
	.string "over time the big city life grew\l"
	.string "too hectic for me.\p"
	.string "I much prefer the fresh air that\n"
	.string "living next to the ocean provides.$"

ReminderGoodbye_Text::
# 131 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Okay then.\n"
	.string "Have a nice day.$"

TutorWhichMon::
# 135 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Which Pokémon needs tutoring?$"

TeachWhichMove::
# 138 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Which move should I teach?$"

HandedOverHeartScale::
# 141 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "{PLAYER} handed over one Heart Scale\n"
	.string "in exchange.$"

DontHaveMoveToTeachPokemon::
# 145 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

CantTeachEgg_Text::
# 150 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an egg.$"

ComeBackWithHeartScale_Text::
# 154 "data/maps/Route15_MoveReminder/scripts.pory"
	.string "If your Pokémon need to learn a move,\n"
	.string "come back with a Heart Scale.$"
