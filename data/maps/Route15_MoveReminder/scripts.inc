Route15_MoveReminder_MapScripts::
	.byte 0


Route15_MoveReminder::
	lock
	faceplayer
	message HowMayIHelp
	waitmessage
	goto_if_set FLAG_MET_MOVE_REMINDER, Route15_MoveReminder_1
	dynmultipush Route15_MoveReminder_Text_1, 0
	dynmultipush Route15_MoveReminder_Text_2, 1
	dynmultipush Route15_MoveReminder_Text_3, 2
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Route15_MoveReminder_11
	case 1, Route15_MoveReminder_12
	case 2, Route15_MoveReminder_13
	case MULTI_B_PRESSED, Route15_MoveReminder_14
	return

Route15_MoveReminder_1:
	dynmultipush Route15_MoveReminder_Text_0, 0
	dynmultipush Route15_MoveReminder_Text_1, 1
	dynmultipush Route15_MoveReminder_Text_2, 2
	dynmultipush Route15_MoveReminder_Text_3, 3
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Route15_MoveReminder_5
	case 1, Route15_MoveReminder_6
	case 2, Route15_MoveReminder_7
	case 3, Route15_MoveReminder_8
	case MULTI_B_PRESSED, Route15_MoveReminder_9
	return

Route15_MoveReminder_5:
	goto ReminderTeachMove
	return

Route15_MoveReminder_6:
	goto ReminderWhoAreYou
	return

Route15_MoveReminder_7:
	goto ReminderWhyLiveHere
	return

Route15_MoveReminder_8:
	goto ReminderGoodbye
	return

Route15_MoveReminder_9:
	goto ReminderGoodbye
	return

Route15_MoveReminder_11:
	goto ReminderWhoAreYou
	return

Route15_MoveReminder_12:
	goto ReminderWhyLiveHere
	return

Route15_MoveReminder_13:
	goto ReminderGoodbye
	return

Route15_MoveReminder_14:
	goto ReminderGoodbye
	return


ReminderTeachMove::
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, FALSE
	goto_if_eq ReminderTeachMove_2
ReminderTeachMove_1:
	msgbox HaveScaleWantMeToTeachMove, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq ReminderTeachMove_5
ReminderTeachMove_4:
	goto MoveReminder_ChooseMon
	return

ReminderTeachMove_2:
	goto ComeBackWithHeartScale
	goto ReminderTeachMove_1

ReminderTeachMove_5:
	goto ComeBackWithHeartScale
	goto ReminderTeachMove_4


ReminderWhoAreYou::
	msgbox R15_ImTheMoveTutor
	setflag FLAG_MET_MOVE_REMINDER
	goto Route15_MoveReminder
	return


ReminderWhyLiveHere::
	msgbox WhyILiveHere
	goto Route15_MoveReminder
	return


ReminderGoodbye::
	msgbox ReminderGoodbye_Text
	release
	return


MoveReminder_ChooseMon::
	msgbox TutorWhichMon
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
	goto ChooseMoveToTeach
	return


ChooseMoveToTeach::
	msgbox TeachWhichMove
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, MoveReminder_ChooseMon
	msgbox HandedOverHeartScale
	removeitem ITEM_HEART_SCALE
	goto ComeBackWithHeartScale
	return


NoMoveToTeachMon::
	msgbox DontHaveMoveToTeachPokemon
	goto MoveReminder_ChooseMon
	return


CantTeachEgg::
	msgbox CantTeachEgg_Text
	goto MoveReminder_ChooseMon
	return


ComeBackWithHeartScale::
	msgbox ComeBackWithHeartScale_Text
	release
	end


Route15_MoveReminder_Text_0:
	.string "Teach a move$"

Route15_MoveReminder_Text_1:
	.string "Who are you?$"

Route15_MoveReminder_Text_2:
	.string "Why live here?$"

Route15_MoveReminder_Text_3:
	.string "Goodbye$"

HowMayIHelp::
	.string "How may I help?$"

HaveScaleWantMeToTeachMove::
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness Heart Scale!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

R15_ImTheMoveTutor::
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a Heart Scale.\n"
	.string "I'm collecting those now.$"

WhyILiveHere::
	.string "I used to live in Sandstone City, but\n"
	.string "over time the big city life grew\l"
	.string "too hectic for me.\p"
	.string "I much prefer the fresh air that\n"
	.string "living next to the ocean provides.$"

ReminderGoodbye_Text::
	.string "Okay then.\n"
	.string "Have a nice day.$"

TutorWhichMon::
	.string "Which Pokémon needs tutoring?$"

TeachWhichMove::
	.string "Which move should I teach?$"

HandedOverHeartScale::
	.string "{PLAYER} handed over one Heart Scale\n"
	.string "in exchange.$"

DontHaveMoveToTeachPokemon::
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

CantTeachEgg_Text::
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an egg.$"

ComeBackWithHeartScale_Text::
	.string "If your Pokémon need to learn a move,\n"
	.string "come back with a Heart Scale.$"
