RustboroCity_DevonCorp_3F_MapScripts::
	.byte 0


DevonCorpTrigger1::
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger1_2
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call DevonTurnRocket
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 3, DevonRocketMove1
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger1_2:
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


DevonCorpTrigger2::
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger2_2
# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call DevonTurnRocket
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_TEMP_2, 2
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 3, DevonRocketMove2
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger2_2:
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


DevonCorpTrigger3::
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger3_2
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call DevonTurnRocket
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_TEMP_2, 3
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 3, DevonRocketMove3
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger3_2:
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


DevonCorpTrigger4::
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, DevonCorpTrigger4_2
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call DevonTurnRocket
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_TEMP_2, 4
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 3, DevonRocketMove4
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonCorpRocketMainEvent
	return

DevonCorpTrigger4_2:
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
DevonRocketMove1:
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
DevonRocketMove2:
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
DevonRocketMove3:
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
DevonRocketMove4:
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

DevonTurnRocket::
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playse SE_PIN
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject 3, DIR_WEST
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 60
	return


DevonCorpRocketMainEvent::
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 15
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox DevonProtonBeforeBattle, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	trainerbattle_no_intro TRAINER_DC3F_ROCKET_PROTON, DevonProtonDefeatText
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox DevonProtonPostBattle, MSGBOX_DEFAULT
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_DEVON_UNDER_ATTACK
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HELPED_DEVON_CORP
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_SHORESLATE_BOAT
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	removeobject 3
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	removeobject 4
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadenewbgm MUS_SLATEPORT
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 20
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	switch VAR_TEMP_2
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	case 1, DevonCorpRocketMainEvent_3
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	case 2, DevonCorpRocketMainEvent_4
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	case 3, DevonCorpRocketMainEvent_5
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	case 4, DevonCorpRocketMainEvent_6
DevonCorpRocketMainEvent_1:
	end

DevonCorpRocketMainEvent_3:
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto MovePrez1
	goto DevonCorpRocketMainEvent_1

DevonCorpRocketMainEvent_4:
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto MovePrez2
	goto DevonCorpRocketMainEvent_1

DevonCorpRocketMainEvent_5:
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto MovePrez3
	goto DevonCorpRocketMainEvent_1

DevonCorpRocketMainEvent_6:
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto MovePrez4
	goto DevonCorpRocketMainEvent_1


MovePrez1::
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 1, PrezMove1
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonPrezTalk
	return


# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
PrezMove1:
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

MovePrez2::
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 1, PrezMove2
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonPrezTalk
	return


# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
PrezMove2:
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

MovePrez3::
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 1, PrezMove3
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonPrezTalk
	return


# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
PrezMove3:
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

MovePrez4::
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	safefollow
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 1, PrezMove4
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto DevonPrezTalk
	return


# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
PrezMove4:
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

DevonPrezTalk::
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox DevonPrezCongratulations, MSGBOX_DEFAULT
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_HM05
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox ExplainFlash, MSGBOX_NPC
	return


DevonPrez::
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox PrezThanks, MSGBOX_NPC
	end


DevonCorp_Safe::
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox DevonCorp_Safe_Text, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
	end


Devon3F_Employee::
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox Devon3F_Employee_Text, MSGBOX_NPC
	end


DevonProtonBeforeBattle::
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
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
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "What? How?!\p"
	.string "… … … …\p"
	.string "Hmph… Well, not that this matters.\n"
	.string "We already got what we came here for.$"

DevonProtonPostBattle::
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Proton: Hmph…\p"
	.string "You may have won a small victory today\n"
	.string "but don't get cocky. A small obstacle\l"
	.string "like you won't be much of a problem\l"
	.string "for our mission.\p"
	.string "I advise you to be very afraid of what\n"
	.string "is to come!$"

DevonPrezCongratulations::
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ah, you must be {PLAYER}.\n"
	.string "I've heard so much about you.\p"
	.string "I'm Mr. Stone, the president of\n"
	.string "the Devon Corporation.\p"
	.string "Thank you so much for driving that\n"
	.string "pesky Team Rocket away and saving\l"
	.string "our company!\p"
	.string "Unfortunately, Team Rocket did not\n"
	.string "leave here empty-handed.\p"
	.string "They didn't seem to care much for\n"
	.string "the wealth in my safe, and seemed to\l"
	.string "be more interested in our research\l"
	.string "and prototypes.\p"
	.string "I don't know what they are planning,\n"
	.string "but they are clearly preparing for\l"
	.string "something.\p"
	.string "Anywho, I don't have much to offer you\n"
	.string "seeing how we just got robbed, but I do\l"
	.string "have this thing from my personal\l"
	.string "collection.\p"
	.string "A trainer like you should find it\n"
	.string "useful.$"

ExplainFlash::
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
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
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you once again for coming\n"
	.string "to our rescue. I hope we can provide\l"
	.string "more help for you in your journeys once\l"
	.string "we have recovered from this attack.$"

DevonCorp_Safe_Text::
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a pretty hefty looking safe.$"

RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor::
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
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
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Now, you should know that\n"
	.string "I am a great PRESIDENT.\p"
	.string "So, I'd never be so cheap as to ask\n"
	.string "a favor for nothing in return.\p"
	.string "That's why I want you to have this!$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare::
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
	.string "go with caution and care!$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou::
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I'm counting on you!$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends::
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
	.string "myself in work.\p"
	.string "Consequently, I'm not familiar with\n"
	.string "trends and that sort of thing.\p"
	.string "But do young people all want to be\n"
	.string "TRAINERS in the POKéMON LEAGUE?$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular::
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
	.string "and TIMER BALL, have become hugely\l"
	.string "popular among TRAINERS.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay::
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by the president.$"

Devon3F_Employee_Text::
# 313 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm glad to see the president is okay.\n"
	.string "We were all very worried about him.$"
