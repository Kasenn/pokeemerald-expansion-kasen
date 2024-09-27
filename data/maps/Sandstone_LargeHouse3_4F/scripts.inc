Sandstone_LargeHouse3_4F_MapScripts::
	.byte 0


DevFight::
	lockall
	faceplayer
	checktrainerflag TRAINER_KASEN
	goto_if 1, DevFight_2
DevFight_1:
	goto_if_set FLAG_TEMP_1, DevFight_5
	goto_if_set FLAG_TEMP_2, DevFight_6
	msgbox FightDev, MSGBOX_YESNO
DevFight_4:
	compare VAR_RESULT, FALSE
	goto_if_eq DevFight_13
	special SavePlayerParty
	setpartylevel 50
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
	setflag FLAG_SYSTEM_NOREWARDBATTLES
	setflag FLAG_HEAL_AFTER_BATTLE
	special HealPlayerParty
	msgbox DevFightLetsBegin
	trainerbattle_no_intro TRAINER_KASEN, KasenLoseText
	special LoadPlayerParty
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
	clearflag FLAG_HEAL_AFTER_BATTLE
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DevFight_17
	clearflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	msgbox DevFightGoodAttempt, MSGBOX_NPC
DevFight_16:
	releaseall
	end

DevFight_2:
	goto_if_unset FLAG_DEV_REWARD, DevFight_10
	msgbox FightDevGoodBattle, MSGBOX_NPC
	end

DevFight_5:
	msgbox FightDevShort, MSGBOX_YESNO
	goto DevFight_4

DevFight_6:
	msgbox FightDevTryAgain, MSGBOX_YESNO
	goto DevFight_4

DevFight_10:
	goto GetDevReward
	goto DevFight_1

DevFight_13:
	setflag FLAG_TEMP_1
	msgbox DevFightLater, MSGBOX_NPC
	end

DevFight_17:
	goto GetDevReward
	goto DevFight_16


GetDevReward::
	checkitemspace ITEM_ABILITY_PATCH
	compare VAR_RESULT, FALSE
	goto_if_eq GetDevReward_2
	msgbox DevFightTakeReward
	giveitem ITEM_ABILITY_PATCH
	waitfanfare
	setflag FLAG_DEV_REWARD
	msgbox DevFightTakeTheseAsWell
	addbp 30
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox GetDevReward_Text_0, MSGBOX_DEFAULT
	waitfanfare
	goto_if_unset FLAG_INTRO_TO_BP, GetDevReward_5
GetDevReward_4:
	releaseall
	end

GetDevReward_2:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end

GetDevReward_5:
	msgbox ExplainBP, MSGBOX_DEFAULT
	setflag FLAG_INTRO_TO_BP
	goto GetDevReward_4


DevRoom_Boxes::
	msgbox DevRoom_Boxes_Text, MSGBOX_SIGN
	end


DevRoom_PileOfBooks::
	msgbox DevRoom_PileOfBooks_Text, MSGBOX_SIGN
	end


DevRoom_Books::
	msgbox DevRoom_Books_Text, MSGBOX_SIGN
	end


DevRoom_LeftShelf::
	msgbox DevRoom_LeftShelf_Text, MSGBOX_SIGN
	end


DevRoom_RightShelf::
	msgbox DevRoom_RightShelf_Text, MSGBOX_SIGN
	end


BerryWoman::
	goto_if_set FLAG_RECEIVED_SANDSTONE_BERRY, BerryWoman_2
	safefollow
	lockall
	faceplayer
	checkitem ITEM_WAILMER_PAIL
	msgbox ImTheBerryLady
	closemessage
	compare VAR_RESULT, TRUE
	goto_if_eq BerryWoman_5
BerryWoman_4:
	releaseall
	end

BerryWoman_2:
	msgbox AlreadyGaveABerry, MSGBOX_NPC
	end

BerryWoman_5:
	playse SE_PIN
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	msgbox BerryLadyHaveABerry
	checkitemspace ITEM_CHOPLE_BERRY
	compare VAR_RESULT, FALSE
	goto_if_eq BerryWoman_8
	giveitem ITEM_CHOPLE_BERRY
	waitfanfare
	setflag FLAG_RECEIVED_SANDSTONE_BERRY
	goto BerryWoman_4

BerryWoman_8:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


SandstoneLargehouse3_Woman::
	msgbox SandstoneLargehouse3_Woman_Text, MSGBOX_NPC
	end


SandstoneLargehouse3_Man::
	msgbox SandstoneLargehouse3_Man_Text, MSGBOX_NPC
	end


SandstoneLargehouse3_Hiker::
	msgbox SandstoneLargehouse3_Hiker_Text, MSGBOX_NPC
	end


SandstoneLargehouse3_Book::
	lockall
	msgbox SL3_Book_Intro, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_2
SandstoneLargehouse3_Book_1:
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_5
SandstoneLargehouse3_Book_4:
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_8
SandstoneLargehouse3_Book_7:
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_11
SandstoneLargehouse3_Book_10:
	releaseall
	end

SandstoneLargehouse3_Book_2:
	msgbox SL3_Book_Part1, MSGBOX_YESNO
	goto SandstoneLargehouse3_Book_1

SandstoneLargehouse3_Book_5:
	msgbox SL3_Book_Part2, MSGBOX_YESNO
	goto SandstoneLargehouse3_Book_4

SandstoneLargehouse3_Book_8:
	msgbox SL3_Book_Part3, MSGBOX_YESNO
	goto SandstoneLargehouse3_Book_7

SandstoneLargehouse3_Book_11:
	msgbox SL3_Book_Part4, MSGBOX_SIGN
	goto SandstoneLargehouse3_Book_10


GetDevReward_Text_0:
	.string "Earned {STR_VAR_1} BP!$"

FightDevGoodBattle::
	.string "That was a great battle.$"

FightDevShort::
	.string "So, are we ready?$"

FightDevTryAgain::
	.string "What's this?\n"
	.string "You want to try again?$"

FightDev::
	.string "Why hello there.\p"
	.string "My name is Kasen, and I'm\n"
	.string "the developer of this game.\p"
	.string "I'm surprised you managed to\n"
	.string "find my place.\p"
	.string "Since we're here, how about\n"
	.string "a little Pokémon battle?\p"
	.string "I must warn you, I've got a real\n"
	.string "powerful team.\p"
	.string "Also, for the duration of this battle,\n"
	.string "all Pokémon will be scaled to level 50.$"

DevFightLater::
	.string "I understand.\p"
	.string "You need time to prep,\n"
	.string "is that it?\p"
	.string "Feel free to use the PC next to the\n"
	.string "bookcase to access your storage.$"

DevFightLetsBegin::
	.string "Splendid!\n"
	.string "Here we go!$"

KasenLoseText::
	.string "I can't believe I just lost.\n"
	.string "Maybe I should've cheated…$"

DevFightGoodAttempt::
	.string "That was a good attempt, but looks\n"
	.string "like the winner this time was me.$"

DevFightTakeReward::
	.string "Well, you managed to beat me fair\n"
	.string "and square.\p"
	.string "I guess you want some kind of\n"
	.string "reward now, is that it?\p"
	.string "Hmm…\n"
	.string "What to give…\p"
	.string "Aha!\p"
	.string "I'm sure this will come in handy!$"

DevFightTakeTheseAsWell::
	.string "And take these as well.$"

DevRoom_Boxes_Text::
	.string "It's a pile of unlabeled boxes.$"

DevRoom_PileOfBooks_Text::
	.string "It's a pile of books.\p"
	.string "Probably not the best location\n"
	.string "to store them…$"

DevRoom_Books_Text::
	.string "There seems to be some sort of\n"
	.string "notebooks strewn across the table.$"

DevRoom_LeftShelf_Text::
	.string "It's a bookshelf with a Torchic doll\n"
	.string "on top.$"

DevRoom_RightShelf_Text::
	.string "It's a bookshelf with a Pikachu doll\n"
	.string "on top.$"

AlreadyGaveABerry::
	.string "Rejuvenate the planet,\n"
	.string "one tree at a time.$"

ImTheBerryLady::
	.string "Did you know that plants are the\n"
	.string "lungs of this planet?\l"
	.string "Keeping Mother Nature healthy\l"
	.string "keeps us healthy.$"

BerryLadyHaveABerry::
	.string "Oh!\p"
	.string "I see you are carrying a Wailmer Pail.\p"
	.string "You must really care about nature\n"
	.string "as well.\p"
	.string "Why don't you try planting this in\n"
	.string "a rich soil somewhere?$"

SandstoneLargehouse3_Woman_Text::
	.string "We don't often get visitors here.\p"
	.string "It's like people get lost\n"
	.string "on the way here.$"

SandstoneLargehouse3_Man_Text::
	.string "To the east of the city lies route 13,\n"
	.string "and beyond that, Galewind City.\p"
	.string "In the past, people used Pokémon to\n"
	.string "surf between the cities, but recently,\l"
	.string "a massive sea bridge was built to\l"
	.string "connect the cities together, making\l"
	.string "the route much easier to traverse.$"

SandstoneLargehouse3_Hiker_Text::
	.string "Have you been to the desert?\p"
	.string "In the past I was out there,\n"
	.string "trying to uncover its secrets.\p"
	.string "I believe we were real close to\n"
	.string "uncovering something big, but then\l"
	.string "an earthquake caused certain areas\l"
	.string "to collapse, ruining all of our\l"
	.string "progress.$"

SL3_Book_Intro::
	.string "It looks to be a journal written by\n"
	.string "a member of a desert expedition team.\l"
	.string "Would you like to read it?$"

SL3_Book_Part1::
	.string "“Day 3 of the expedition.”\p"
	.string "“We stumbled upon a cave we swear\n"
	.string "wasn't here when we first arrived.\p"
	.string "At a first glance, it seems like any\n"
	.string "regular cave filled with Zubats.\l"
	.string "Hardly something to write home about.\p"
	.string "However, some of the expedition\n"
	.string "members have reported feeling\l"
	.string "something ominous emanating from\l"
	.string "this cave.\l"
	.string "I suggest we investigate it further.”\p"
	.string "Keep reading?$"

SL3_Book_Part2::
	.string "“Day 4 of the expedition.”\p"
	.string "“This is certainly peculiar.\p"
	.string "Maybe it's the fatigue playing tricks\n"
	.string "on us, but I swear the boulders\l"
	.string "in this cave have moved on their own.\p"
	.string "It's simply impossible for any human\n"
	.string "to move these, and none of the members\l"
	.string "of the expedition have strong enough\l"
	.string "Pokémon that could handle the heavy\l"
	.string "lifting for them.\l"
	.string "Something very strange is happening\l"
	.string "here.”\p"
	.string "Keep reading?$"

SL3_Book_Part3::
	.string "“Day 7 of the expedition.”\p"
	.string "“We've been investigating the cave\n"
	.string "for a few days now.\p"
	.string "If I didn't know better, I would say\n"
	.string "this cave is either alive, or haunted.\p"
	.string "Every time we enter, it seems as if\n"
	.string "the boulders have moved around on\l"
	.string "their own.\p"
	.string "It's as if the cave itself is trying\n"
	.string "to somehow communicate with us.\p"
	.string "If that's the case, I wish it would\n"
	.string "write on a piece of paper instead…”\p"
	.string "Keep reading?$"

SL3_Book_Part4::
	.string "“Day 11 of the expedition.”\p"
	.string "“We were so close,\n"
	.string "I could sense it!\p"
	.string "We were this close to cracking the\n"
	.string "secret of the cave when an earthquake\l"
	.string "happened and forced us to evacuate\l"
	.string "from the cave.\p"
	.string "We tried going back for the cave\n"
	.string "after the quakes had ended, but\l"
	.string "the entrance was nowhere to be found.\p"
	.string "It's almost as if the desert itself\n"
	.string "wanted to keep the secret safe…”\p"
	.string "The rest of the journal seems to\n"
	.string "drivel on…$"
