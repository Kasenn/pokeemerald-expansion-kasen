Sandstone_LargeHouse3_4F_MapScripts::
	.byte 0


DevFight::
# 6 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	lock
# 7 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	faceplayer
# 8 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	checktrainerflag TRAINER_KASEN
	goto_if 1, DevFight_2
DevFight_1:
# 17 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto_if_set FLAG_TEMP_1, DevFight_5
# 20 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto_if_set FLAG_TEMP_2, DevFight_6
# 24 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox FightDev, MSGBOX_YESNO
DevFight_4:
# 26 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DevFight_13
# 32 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	special SavePlayerParty
# 33 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setpartylevel 50
# 34 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
# 35 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_SYSTEM_NOREWARDBATTLES
# 36 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_HEAL_AFTER_BATTLE
# 37 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	special HealPlayerParty
# 38 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevFightLetsBegin
# 39 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_KASEN, KasenLoseText
# 40 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	special LoadPlayerParty
# 41 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
# 42 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
# 43 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	clearflag FLAG_HEAL_AFTER_BATTLE
# 44 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DevFight_17
# 48 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	clearflag FLAG_TEMP_1
# 49 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_TEMP_2
# 50 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevFightGoodAttempt, MSGBOX_NPC
DevFight_16:
# 52 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	releaseall
	end

DevFight_2:
# 9 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto_if_unset FLAG_DEV_REWARD, DevFight_10
# 13 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox FightDevGoodBattle, MSGBOX_NPC
	end

DevFight_5:
# 18 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox FightDevShort, MSGBOX_YESNO
	goto DevFight_4

DevFight_6:
# 21 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox FightDevTryAgain, MSGBOX_YESNO
	goto DevFight_4

DevFight_10:
# 10 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto GetDevReward
	goto DevFight_1

DevFight_13:
# 27 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_TEMP_1
# 28 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevFightLater, MSGBOX_NPC
	end

DevFight_17:
# 45 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto GetDevReward
	goto DevFight_16


GetDevReward::
	checkitemspace ITEM_ABILITY_PATCH
# 0 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GetDevReward_2
GetDevReward_1:
# 61 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevFightTakeReward
# 62 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 63 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	waitfanfare
# 64 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_DEV_REWARD
# 65 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevFightTakeTheseAsWell
# 66 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	addbp 30
# 67 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 68 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox GetDevReward_Text_0, MSGBOX_DEFAULT
# 69 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	waitfanfare
# 70 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto_if_unset FLAG_INTRO_TO_BP, GetDevReward_5
GetDevReward_4:
# 74 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	releaseall
	end

GetDevReward_2:
# 59 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto ZeBagIsFull
	goto GetDevReward_1

GetDevReward_5:
# 71 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox ExplainBP, MSGBOX_DEFAULT
# 72 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_INTRO_TO_BP
	goto GetDevReward_4


DevRoom_Boxes::
# 136 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevRoom_Boxes_Text, MSGBOX_SIGN
	end


DevRoom_PileOfBooks::
# 140 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevRoom_PileOfBooks_Text, MSGBOX_SIGN
	end


DevRoom_Books::
# 144 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevRoom_Books_Text, MSGBOX_SIGN
	end


DevRoom_LeftShelf::
# 148 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevRoom_LeftShelf_Text, MSGBOX_SIGN
	end


DevRoom_RightShelf::
# 152 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox DevRoom_RightShelf_Text, MSGBOX_SIGN
	end


BerryWoman::
# 178 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SANDSTONE_BERRY, BerryWoman_2
# 182 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	safefollow
# 183 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	lock
# 184 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	faceplayer
# 185 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	checkitem ITEM_WAILMER_PAIL
# 186 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox ImTheBerryLady
# 187 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	closemessage
# 188 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BerryWoman_5
BerryWoman_4:
# 201 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	releaseall
	end

BerryWoman_2:
# 179 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox AlreadyGaveABerry, MSGBOX_NPC
	end

BerryWoman_5:
# 189 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	playse SE_PIN
# 190 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	applymovement 1, ExclamationMark
# 191 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	waitmovement 0
# 192 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	delay 48
# 193 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox BerryLadyHaveABerry
	checkitemspace ITEM_CHOPLE_BERRY
# 0 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BerryWoman_8
BerryWoman_7:
# 197 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	giveitem ITEM_CHOPLE_BERRY
# 198 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	waitfanfare
# 199 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	setflag FLAG_RECEIVED_SANDSTONE_BERRY
	goto BerryWoman_4

BerryWoman_8:
# 195 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	goto ZeBagIsFull
	goto BerryWoman_7


SandstoneLargehouse3_Woman::
# 225 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SandstoneLargehouse3_Woman_Text, MSGBOX_NPC
	end


SandstoneLargehouse3_Man::
# 230 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SandstoneLargehouse3_Man_Text, MSGBOX_NPC
	end


SandstoneLargehouse3_Hiker::
# 250 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SandstoneLargehouse3_Hiker_Text, MSGBOX_NPC
	end


SandstoneLargehouse3_Book::
# 265 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	lock
# 266 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SL3_Book_Intro, MSGBOX_YESNO
# 267 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_2
SandstoneLargehouse3_Book_1:
# 270 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_5
SandstoneLargehouse3_Book_4:
# 273 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_8
SandstoneLargehouse3_Book_7:
# 276 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneLargehouse3_Book_11
SandstoneLargehouse3_Book_10:
# 279 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	releaseall
	end

SandstoneLargehouse3_Book_2:
# 268 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SL3_Book_Part1, MSGBOX_YESNO
	goto SandstoneLargehouse3_Book_1

SandstoneLargehouse3_Book_5:
# 271 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SL3_Book_Part2, MSGBOX_YESNO
	goto SandstoneLargehouse3_Book_4

SandstoneLargehouse3_Book_8:
# 274 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SL3_Book_Part3, MSGBOX_YESNO
	goto SandstoneLargehouse3_Book_7

SandstoneLargehouse3_Book_11:
# 277 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	msgbox SL3_Book_Part4, MSGBOX_SIGN
	goto SandstoneLargehouse3_Book_10


GetDevReward_Text_0:
# 68 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "Earned {STR_VAR_1} BP!$"

FightDevGoodBattle::
# 78 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "That was a great battle.$"

FightDevShort::
# 81 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "So, are we ready?$"

FightDevTryAgain::
# 84 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "What's this?\n"
	.string "You want to try again?$"

FightDev::
# 88 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
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
# 101 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "I understand.\p"
	.string "You need time to prep,\n"
	.string "is that it?\p"
	.string "Feel free to use the PC next to the\n"
	.string "bookcase to access your storage.$"

DevFightLetsBegin::
# 108 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "Splendid!\n"
	.string "Here we go!$"

KasenLoseText::
# 112 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "I can't believe I just lost.\n"
	.string "Maybe I should've cheated…$"

DevFightGoodAttempt::
# 116 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "That was a good attempt, but looks\n"
	.string "like the winner this time was me.$"

DevFightTakeReward::
# 120 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "Well, you managed to beat me fair\n"
	.string "and square.\p"
	.string "I guess you want some kind of\n"
	.string "reward now, is that it?\p"
	.string "Hmm…\n"
	.string "What to give…\p"
	.string "Aha!\p"
	.string "I'm sure this will come in handy!$"

DevFightTakeTheseAsWell::
# 131 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "And take these as well.$"

DevRoom_Boxes_Text::
# 156 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "It's a pile of unlabeled boxes.$"

DevRoom_PileOfBooks_Text::
# 159 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "It's a pile of books.\p"
	.string "Probably not the best location\n"
	.string "to store them…$"

DevRoom_Books_Text::
# 164 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "There seems to be some sort of\n"
	.string "notebooks strewn across the table.$"

DevRoom_LeftShelf_Text::
# 168 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "It's a bookshelf with a Torchic doll\n"
	.string "on top.$"

DevRoom_RightShelf_Text::
# 172 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "It's a bookshelf with a Pikachu doll\n"
	.string "on top.$"

AlreadyGaveABerry::
# 205 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "Rejuvenate the planet,\n"
	.string "one tree at a time.$"

ImTheBerryLady::
# 209 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "Did you know that plants are the\n"
	.string "lungs of this planet?\l"
	.string "Keeping Mother Nature healthy\l"
	.string "keeps us healthy.$"

BerryLadyHaveABerry::
# 215 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "Oh!\p"
	.string "I see you are carrying a Wailmer Pail.\p"
	.string "You must really care about nature\n"
	.string "as well.\p"
	.string "Why don't you try planting this in\n"
	.string "a rich soil somewhere?$"

SandstoneLargehouse3_Woman_Text::
# 234 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "We don't often get visitors here.\p"
	.string "It's like people get lost\n"
	.string "on the way here.$"

SandstoneLargehouse3_Man_Text::
# 239 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "To the east of the city lies route 13,\n"
	.string "and beyond that, Galewind City.\p"
	.string "In the past, people used Pokémon to\n"
	.string "surf between the cities, but recently,\l"
	.string "a massive sea bridge was built to\l"
	.string "connect the cities together, making\l"
	.string "the route much easier to traverse.$"

SandstoneLargehouse3_Hiker_Text::
# 253 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "Have you been to the desert?\p"
	.string "In the past I was out there,\n"
	.string "trying to uncover its secrets.\p"
	.string "I believe we were real close to\n"
	.string "uncovering something big, but then\l"
	.string "an earthquake caused certain areas\l"
	.string "to collapse, ruining all of our\l"
	.string "progress.$"

SL3_Book_Intro::
# 283 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
	.string "It looks to be a journal written by\n"
	.string "a member of a desert expedition team.\l"
	.string "Would you like to read it?$"

SL3_Book_Part1::
# 288 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
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
# 302 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
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
# 317 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
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
# 332 "data/maps/Sandstone_LargeHouse3_4F/scripts.pory"
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
