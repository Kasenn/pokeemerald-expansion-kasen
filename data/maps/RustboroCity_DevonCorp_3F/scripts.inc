RustboroCity_DevonCorp_3F_MapScripts::
	.byte 0


DevonCorpTrigger1::
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger1_2
	safefollow
	call DevonTurnRocket
	setvar VAR_TEMP_2, 1
	applymovement 3, DevonRocketMove1
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger1_2:
	release
	end


DevonCorpTrigger2::
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger2_2
	safefollow
	call DevonTurnRocket
	setvar VAR_TEMP_2, 2
	applymovement 3, DevonRocketMove2
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger2_2:
	release
	end


DevonCorpTrigger3::
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger3_2
	safefollow
	call DevonTurnRocket
	setvar VAR_TEMP_2, 3
	applymovement 3, DevonRocketMove3
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger3_2:
	release
	end


DevonCorpTrigger4::
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger4_2
	safefollow
	call DevonTurnRocket
	setvar VAR_TEMP_2, 4
	applymovement 3, DevonRocketMove4
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger4_2:
	release
	end


DevonRocketMove1:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

DevonRocketMove2:
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

DevonRocketMove3:
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

DevonRocketMove4:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

DevonTurnRocket::
	lockall
	playse SE_PIN
	turnobject 3, DIR_WEST
	applymovement 3, Common_Movement_ExclamationMark
	delay 60
	return


DevonCorpRocketMainEvent::
	waitmovement 0
	delay 15
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	msgbox DevonProtonBeforeBattle, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_DC3F_ROCKET_PROTON, DevonProtonDefeatText
	msgbox DevonProtonPostBattle, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_DEVON_UNDER_ATTACK
	setflag FLAG_HELPED_DEVON_CORP
	clearflag FLAG_HIDE_SHORESLATE_BOAT
	removeobject 3
	removeobject 4
	fadenewbgm MUS_SLATEPORT
	fadescreen FADE_FROM_BLACK
	delay 20
	switch VAR_TEMP_2
	case 1, DevonCorpRocketMainEvent_3
	case 2, DevonCorpRocketMainEvent_4
	case 3, DevonCorpRocketMainEvent_5
	case 4, DevonCorpRocketMainEvent_6
DevonCorpRocketMainEvent_1:
	end

DevonCorpRocketMainEvent_3:
	goto MovePrez1
	goto DevonCorpRocketMainEvent_1

DevonCorpRocketMainEvent_4:
	goto MovePrez2
	goto DevonCorpRocketMainEvent_1

DevonCorpRocketMainEvent_5:
	goto MovePrez3
	goto DevonCorpRocketMainEvent_1

DevonCorpRocketMainEvent_6:
	goto MovePrez4
	goto DevonCorpRocketMainEvent_1


MovePrez1::
	safefollow
	applymovement 1, PrezMove1
	waitmovement 0
	goto DevonPrezTalk
	return


PrezMove1:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

MovePrez2::
	safefollow
	applymovement 1, PrezMove2
	waitmovement 0
	goto DevonPrezTalk
	return


PrezMove2:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MovePrez3::
	safefollow
	applymovement 1, PrezMove3
	waitmovement 0
	goto DevonPrezTalk
	return


PrezMove3:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MovePrez4::
	safefollow
	applymovement 1, PrezMove4
	waitmovement 0
	goto DevonPrezTalk
	return


PrezMove4:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	step_end

DevonPrezTalk::
	msgbox DevonPrezCongratulations, MSGBOX_DEFAULT
	giveitem ITEM_HM05
	msgbox ExplainFlash, MSGBOX_NPC
	return


DevonPrez::
	msgbox PrezThanks, MSGBOX_NPC
	end


DevonCorp_Safe::
	msgbox DevonCorp_Safe_Text, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
	end


Devon3F_Employee::
	msgbox Devon3F_Employee_Text, MSGBOX_NPC
	end


DevonProtonBeforeBattle::
	.string "Proton: Well well well,\n"
	.string "what do we have here?\p"
	.string "Some little brat who's trying to play\n"
	.string "a hero and make an enemy of\l"
	.string "Team Rocket?\p"
	.string "All we are doing is negotiating\n"
	.string "between adults and you think you can\l"
	.string "just barge here and meddle in\l"
	.string "Team Rocket's official business?\p"
	.string "Well, it looks like I, one of the\n"
	.string "Team Rocket Executives, need to teach\l"
	.string "a brat like you some manners!$"

DevonProtonDefeatText::
	.string "What? How?!\p"
	.string "… … … …\p"
	.string "Hmph… Well, not that this matters.\n"
	.string "We already got what we came here for.$"

DevonProtonPostBattle::
	.string "Proton: Hmph…\p"
	.string "You may have won a small victory today\n"
	.string "but don't get cocky. A small obstacle\l"
	.string "like you won't be much of a problem\l"
	.string "for our mission.\p"
	.string "I advise you to be very afraid of what\n"
	.string "is to come!$"

DevonPrezCongratulations::
	.string "Ah, you must be {PLAYER}.\n"
	.string "I've heard so much about you.\p"
	.string "I'm Mr. Stone, the president of\n"
	.string "the Devon Corporation.\p"
	.string "Thank you so much for driving that\n"
	.string "pesky Team Rocket away and saving\l"
	.string "our company!\p"
	.string "Unfortunately, Team Rocket did not\n"
	.string "leave here empty-handed.\p"
	.string "They stole some of our products but\n"
	.string "the thing I dread the most is the\l"
	.string "Master Ball they managed to steal\l"
	.string "out of my safe.\p"
	.string "I dread to think what they're going to\n"
	.string "do with a powerful tool like that…\p"
	.string "Anywho, I don't have much to offer you\n"
	.string "seeing how we just got robbed, but I do\l"
	.string "have this thing from my personal\l"
	.string "collection.\p"
	.string "A trainer like you should find it\n"
	.string "useful.$"

ExplainFlash::
	.string "Mr. Stone: That Hidden Machine\n"
	.string "contains the move Flash.\p"
	.string "Using it in battle will lower the foe's\n"
	.string "accuracy, making them less likely to\l"
	.string "hit with their moves.\p"
	.string "It will also help you illuminate dark\n"
	.string "places like certain caves.\p"
	.string "Thank you once again for coming\n"
	.string "to our rescue. I hope we can provide\l"
	.string "more help for you in your journeys once\l"
	.string "we have recovered from this attack.$"

PrezThanks::
	.string "Thank you once again for coming\n"
	.string "to our rescue. I hope we can provide\l"
	.string "more help for you in your journeys once\l"
	.string "we have recovered from this attack.$"

DevonCorp_Safe_Text::
	.string "It's a pretty hefty looking safe.$"

RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor::
	.string "I'm MR. STONE, the PRESIDENT of\n"
	.string "the DEVON CORPORATION.\p"
	.string "I'd just got word about you!\p"
	.string "You saved our staff not just once,\n"
	.string "but twice!\p"
	.string "I have a favor to ask of an amazing\n"
	.string "person like you.\p"
	.string "I understand that you're delivering\n"
	.string "a package to SLATEPORT's SHIPYARD.\p"
	.string "Well, on the way, could you stop off in\n"
	.string "DEWFORD TOWN?\p"
	.string "I was hoping that you'd deliver a\n"
	.string "LETTER to STEVEN in DEWFORD.$"

RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis::
	.string "MR. STONE: Now, you should know that\n"
	.string "I am a great PRESIDENT.\p"
	.string "So, I'd never be so cheap as to ask\n"
	.string "a favor for nothing in return.\p"
	.string "That's why I want you to have this!$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare::
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
	.string "go with caution and care!$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou::
	.string "MR. STONE: I'm counting on you!$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends::
	.string "MR. STONE: Since my youth, I've immersed\n"
	.string "myself in work.\p"
	.string "Consequently, I'm not familiar with\n"
	.string "trends and that sort of thing.\p"
	.string "But do young people all want to be\n"
	.string "TRAINERS in the POKéMON LEAGUE?$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular::
	.string "DEVON's new products, the REPEAT BALL\n"
	.string "and TIMER BALL, have become hugely\l"
	.string "popular among TRAINERS.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay::
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by the president.$"

Devon3F_Employee_Text::
	.string "I'm glad to see the president is okay.\n"
	.string "We were all very worried about him.$"
