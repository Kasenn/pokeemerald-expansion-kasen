RustboroCity_DevonCorp_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ShoreslateHarborSetFlags
	.byte 0


RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_EventScript_EmployeeNew::
	goto_if_set FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_2
	msgbox EmployeeNew_TakeTimeToRecover, MSGBOX_NPC
RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_1:
	end

RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_2:
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_NPC
	goto RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_1


RustboroCity_DevonCorp_1F_EventScript_GreeterNew::
	goto_if_set FLAG_HELPED_DEVON_CORP, RustboroCity_DevonCorp_1F_EventScript_GreeterNew_2
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp2, MSGBOX_NPC
RustboroCity_DevonCorp_1F_EventScript_GreeterNew_1:
	checkitem ITEM_LETTER
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_1F_EventScript_GreeterNew_6
RustboroCity_DevonCorp_1F_EventScript_GreeterNew_5:
	end

RustboroCity_DevonCorp_1F_EventScript_GreeterNew_2:
	msgbox RustboroCity_DevonCorp_1F_Text_OurSavior, MSGBOX_NPC
	goto RustboroCity_DevonCorp_1F_EventScript_GreeterNew_1

RustboroCity_DevonCorp_1F_EventScript_GreeterNew_6:
	lockall
	msgbox GreeterHandOverLetter, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setvar VAR_DESERT_BYPASS, 1
	removeitem ITEM_LETTER, 1
	msgbox ExplainGoGoggles, MSGBOX_NPC
	goto RustboroCity_DevonCorp_1F_EventScript_GreeterNew_5


Update3::
	checkitem ITEM_GO_GOGGLES
	compare VAR_RESULT, TRUE
	goto_if_eq Update3_2
Update3_1:
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
	setflag FLAG_HIDE_STONE_SPHERE_FC
	setflag FLAG_OLDMAN_PEARLSTRING
	setflag FLAG_LANDMARK_LOST_GLADE
	setflag FLAG_LANDMARK_WINDY_WOODS
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_PEARLWOOD_POINT
	setflag FLAG_VISITED_OLDALE_TOWN
	checktrainerflag TRAINER_GABBY_AND_TY_1
	goto_if 1, Update3_5
Update3_4:
	checktrainerflag TRAINER_MARY
	goto_if 1, Update3_8
Update3_7:
	checktrainerflag TRAINER_KAOLGYM_CLAY
	goto_if 1, Update3_11
Update3_10:
	msgbox FlagsAndVarsUpdated2, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Update3_14
Update3_13:
	closemessage
	release
	end

Update3_2:
	setvar VAR_DESERT_BYPASS, 1
	goto Update3_1

Update3_5:
	setvar VAR_BADGES_OBTAINED, 1
	goto Update3_4

Update3_8:
	setvar VAR_BADGES_OBTAINED, 2
	goto Update3_7

Update3_11:
	setvar VAR_BADGES_OBTAINED, 3
	goto Update3_10

Update3_14:
	warp MAP_CORALGROVE_CITY, 26, 31
	goto Update3_13


RustboroCity_DevonCorp_1F_EventScript_RocketGreeter::
	msgbox RocketGreeter, MSGBOX_NPC
	end


RustboroCity_DevonCorp_1F_Rocket1::
	trainerbattle_single TRAINER_DC1F_ROCKET_1, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	msgbox RustboroCity_DevonCorp_1F_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_1F_Rocket2::
	trainerbattle_single TRAINER_DC1F_ROCKET_2, RustboroCity_DevonCorp_1F_Rocket2_Intro, RustboroCity_DevonCorp_1F_Rocket2_Defeat
	msgbox RustboroCity_DevonCorp_1F_Rocket2_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket1::
	trainerbattle_single TRAINER_DC_BASEROCKET_1, RustboroCity_DevonCorp_Basement_Rocket1_Intro, RustboroCity_DevonCorp_Basement_Rocket1_Defeat
	msgbox RustboroCity_DevonCorp_Basement_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket2::
	trainerbattle_single TRAINER_DC_BASEROCKET_2, RustboroCity_DevonCorp_Basement_Rocket2_Intro, RustboroCity_DevonCorp_Basement_Rocket2_Defeat
	msgbox RustboroCity_DevonCorp_Basement_Rocket2_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket3::
	trainerbattle_single TRAINER_DC_BASEROCKET_3, RustboroCity_DevonCorp_Basement_Rocket3_Intro, RustboroCity_DevonCorp_Basement_Rocket3_Defeat
	msgbox RustboroCity_DevonCorp_Basement_Rocket3_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket4::
	trainerbattle_single TRAINER_DC_BASEROCKET_4, RustboroCity_DevonCorp_Basement_Rocket4_Intro, RustboroCity_DevonCorp_Basement_Rocket4_Defeat
	msgbox RustboroCity_DevonCorp_Basement_Rocket4_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket1::
	trainerbattle_single TRAINER_DC2F_ROCKET_1, RustboroCity_DevonCorp_2F_Rocket1_Intro, RustboroCity_DevonCorp_2F_Rocket1_Defeat
	msgbox RustboroCity_DevonCorp_2F_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket2::
	trainerbattle_single TRAINER_DC2F_ROCKET_2, RustboroCity_DevonCorp_2F_Rocket2_Intro, RustboroCity_DevonCorp_2F_Rocket2_Defeat
	msgbox RustboroCity_DevonCorp_2F_Rocket2_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket3::
	trainerbattle_single TRAINER_DC2F_ROCKET_3, RustboroCity_DevonCorp_2F_Rocket3_Intro, RustboroCity_DevonCorp_2F_Rocket3_Defeat
	msgbox RustboroCity_DevonCorp_2F_Rocket3_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket4::
	trainerbattle_single TRAINER_DC2F_ROCKET_4, RustboroCity_DevonCorp_2F_Rocket4_Intro, RustboroCity_DevonCorp_2F_Rocket4_Defeat
	msgbox RustboroCity_DevonCorp_2F_Rocket4_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket5::
	trainerbattle_single TRAINER_DC2F_ROCKET_5, RustboroCity_DevonCorp_2F_Rocket5_Intro, RustboroCity_DevonCorp_2F_Rocket5_Defeat
	msgbox RustboroCity_DevonCorp_2F_Rocket5_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_3F_Rocket1::
	trainerbattle_single TRAINER_DC3F_ROCKET_1, RustboroCity_DevonCorp_3F_Rocket1_Intro, RustboroCity_DevonCorp_3F_Rocket1_Defeat
	msgbox RustboroCity_DevonCorp_3F_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Basement_Scientist1::
	msgbox Rustboro_Basement_Scientist1_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist2::
	msgbox Rustboro_Basement_Scientist2_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist3::
	msgbox Rustboro_Basement_Scientist3_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist4::
	msgbox Rustboro_Basement_Scientist4_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist5::
	faceplayer
	lockall
	goto_if_set FLAG_BASEMENT_SUPERPOTION, Rustboro_Basement_Scientist5_2
	msgbox Rustboro_Basement_Scientist5_Text, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_POTION
	setflag FLAG_BASEMENT_SUPERPOTION
	waitmessage
	closemessage
	release
	end

Rustboro_Basement_Scientist5_2:
	msgbox BasementPleaseHurry, MSGBOX_NPC
	end


Rustboro_Basement_DevonEmployee1::
	msgbox Rustboro_Basement_DevonEmployee1_Text, MSGBOX_NPC
	end


Rustboro_Basement_DevonEmployee2::
	msgbox Rustboro_Basement_DevonEmployee2_Text, MSGBOX_NPC
	end


Rustboro_Basement_DevonGreeter::
	msgbox Rustboro_Basement_DevonGreeter_Text, MSGBOX_NPC
	end


Rustboro_Basement_Collection::
	msgbox Rustboro_Basement_Collection_Text, MSGBOX_SIGN
	end


Rustboro_Basement_ItemBall::
	finditem ITEM_QUICK_BALL
	end


RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct::
	.string "Hey, those running shoes!\n"
	.string "They're one of our products!\p"
	.string "It makes me happy when I see someone\n"
	.string "using something we made.$"

RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay::
	.string "Samples of rocks and metal are\n"
	.string "displayed in the glass case.\p"
	.string "There's a panel with some writing\n"
	.string "on it…\p"
	.string "“Devon Corporation got its start as\n"
	.string "a producer of stones from quarries.\p"
	.string "“The company also produced iron from\n"
	.string "filings in the sand.\p"
	.string "“From that humble start as a producer\n"
	.string "of raw materials, Devon developed.\p"
	.string "“Devon is now a manufacturer of a wide\n"
	.string "range of industrial products.”$"

RustboroCity_DevonCorp_1F_Text_ProductDisplay::
	.string "Prototypes and test products fill\n"
	.string "the glass display case.\p"
	.string "There's a panel with a description…\p"
	.string "“In addition to industrial products,\n"
	.string "Devon now markets sundries and\l"
	.string "pharmaceuticals for better lifestyles.\p"
	.string "“Recently, Devon has begun marketing\n"
	.string "tools for Pokémon trainers, including\l"
	.string "Poké Balls and Pokénav systems.”$"

EmployeeNew_TakeTimeToRecover::
	.string "It may take us a while to recover from\n"
	.string "the attack and assess just how much\l"
	.string "was stolen, but at least nobody was\l"
	.string "seriously hurt.$"

FlagsAndVarsUpdated2::
	.string "Flags and Vars updated.\p"
	.string "Would you like to warp to Coralgrove?\n"
	.string "(Choose YES if current area is bugged)$"

RustboroCity_DevonCorp_1F_Text_OurSavior::
	.string "Oh, you're the young trainer who drove\n"
	.string "off Team Rocket, right?\l"
	.string "Thank you so much!\p"
	.string "Everyone's still a bit shaken\n"
	.string "but we'll manage somehow.$"

GreeterHandOverLetter::
	.string "What's this, a letter?\p"
	.string "… … … …\p"
	.string "I see. this isn't the first time\n"
	.string "you've had a tuffle with Team Rocket.\p"
	.string "Well, we can't simply let you leave\n"
	.string "empty-handed.\p"
	.string "For your heroic deeds, I have\n"
	.string "been authorized to give you these.$"

ExplainGoGoggles::
	.string "With those Go-Goggles, you\n"
	.string "should have no trouble crossing\l"
	.string "the desert near Route 6.$"

RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp2::
	.string "Hello and welcome to the Devon\n"
	.string "Corporation.\p"
	.string "We're proud producers of items and\n"
	.string "medicine that enhance your life.\p"
	.string "We're still not open to the public\n"
	.string "but we'll always make an exception\l"
	.string "for you!$"

RocketGreeter::
	.string "Huh? Wasn't there a guard posted\n"
	.string "outside?\p"
	.string "Anyway, the offices are closed.\n"
	.string "Get out. Now.$"

RustboroCity_DevonCorp_1F_Rocket1_Intro::
	.string "We're Team Rocket!\n"
	.string "We like to cause trouble!\l"
	.string "Ooh! Are you scared?$"

RustboroCity_DevonCorp_1F_Rocket1_Defeat::
	.string "You think you're a hero?$"

RustboroCity_DevonCorp_1F_Rocket1_PostBattle::
	.string "We're not always evil. We just do\n"
	.string "whatever we like.$"

RustboroCity_DevonCorp_1F_Rocket2_Intro::
	.string "Hey, hey! Keep out of our way!$"

RustboroCity_DevonCorp_1F_Rocket2_Defeat::
	.string "Arggh. I give up.$"

RustboroCity_DevonCorp_1F_Rocket2_PostBattle::
	.string "Our boss has some big plan regarding\n"
	.string "this place. I wonder what it is.$"

RustboroCity_DevonCorp_Basement_Rocket1_Intro::
	.string "An unknown child wandering here?\n"
	.string "Who are you?$"

RustboroCity_DevonCorp_Basement_Rocket1_Defeat::
	.string "Tch! I took you too lightly!$"

RustboroCity_DevonCorp_Basement_Rocket1_PostBattle::
	.string "We won't let you ruin our plans!$"

RustboroCity_DevonCorp_Basement_Rocket2_Intro::
	.string "It feels great ordering Pokémon to\n"
	.string "commit crimes.$"

RustboroCity_DevonCorp_Basement_Rocket2_Defeat::
	.string "You're kidding!$"

RustboroCity_DevonCorp_Basement_Rocket2_PostBattle::
	.string "I feel lousy over losing! Bah!\n"
	.string "I hate useless Pokémon!$"

RustboroCity_DevonCorp_Basement_Rocket3_Intro::
	.string "Ha ha ha!\p"
	.string "How boring. It was far too easy to\n"
	.string "take over this place!\l"
	.string "Come on, keep me amused!$"

RustboroCity_DevonCorp_Basement_Rocket3_Defeat::
	.string "Wh-who are you?$"

RustboroCity_DevonCorp_Basement_Rocket3_PostBattle::
	.string "You beat me, and I won't forget it!$"

RustboroCity_DevonCorp_Basement_Rocket4_Intro::
	.string "Surprise! I'm secretly a member of\n"
	.string "Team Rocket!$"

RustboroCity_DevonCorp_Basement_Rocket4_Defeat::
	.string "I miscalculated my odds…$"

RustboroCity_DevonCorp_Basement_Rocket4_PostBattle::
	.string "I spent years infiltrating this place\n"
	.string "and now my cover is blown…$"

RustboroCity_DevonCorp_2F_Rocket1_Intro::
	.string "I've been given strict orders.\p"
	.string "I'm to crush anyone who challenges\n"
	.string "Team Rocket!$"

RustboroCity_DevonCorp_2F_Rocket1_Defeat::
	.string "!!!$"

RustboroCity_DevonCorp_2F_Rocket1_PostBattle::
	.string "I failed in my duties…\n"
	.string "I'll be docked pay for this…$"

RustboroCity_DevonCorp_2F_Rocket2_Intro::
	.string "How did you make it past the guards\n"
	.string "downstairs?$"

RustboroCity_DevonCorp_2F_Rocket2_Defeat::
	.string "Gulp! This is a bleak moment.$"

RustboroCity_DevonCorp_2F_Rocket2_PostBattle::
	.string "I see now how you got through…$"

RustboroCity_DevonCorp_2F_Rocket3_Intro::
	.string "Most excellent!\p"
	.string "This place will fulfill our\n"
	.string "grand design.$"

RustboroCity_DevonCorp_2F_Rocket3_Defeat::
	.string "Hmmm…\n"
	.string "All grand plans come with snags.$"

RustboroCity_DevonCorp_2F_Rocket3_PostBattle::
	.string "Do you honestly believe you can stop\n"
	.string "Team Rocket?$"

RustboroCity_DevonCorp_2F_Rocket4_Intro::
	.string "You plan to save the Devon Corp\n"
	.string "president?\p"
	.string "So sad that won't be possible…\n"
	.string "because I'm going to beat you!$"

RustboroCity_DevonCorp_2F_Rocket4_Defeat::
	.string "No! Unbelievable!$"

RustboroCity_DevonCorp_2F_Rocket4_PostBattle::
	.string "I do not believe it! I was beaten!\n$"

RustboroCity_DevonCorp_2F_Rocket5_Intro::
	.string "This is no place for little kids!\n"
	.string "Shoo!$"

RustboroCity_DevonCorp_2F_Rocket5_Defeat::
	.string "WHAT are you?!$"

RustboroCity_DevonCorp_2F_Rocket5_PostBattle::
	.string "Impossible…\n"
	.string "To be beaten by a little kid…$"

RustboroCity_DevonCorp_3F_Rocket1_Intro::
	.string "Our boss is having an important meeting\n"
	.string "with the president of Devon Corp.\l"
	.string "I won't let you intervene!$"

RustboroCity_DevonCorp_3F_Rocket1_Defeat::
	.string "I let you down, boss…$"

RustboroCity_DevonCorp_3F_Rocket1_PostBattle::
	.string "Just who are you?!$"

Rustboro_Basement_Scientist1_Text::
	.string "What's happening out there?\n"
	.string "Is it safe?$"

Rustboro_Basement_Scientist2_Text::
	.string "I was in the middle of some\n"
	.string "imporant research.\l"
	.string "I hope my samples haven't expired…$"

Rustboro_Basement_Scientist3_Text::
	.string "I guess these crooks didn't notice\n"
	.string "this laptop here.\p"
	.string "I'll encrypt all the research so it'll\n"
	.string "be completely useless to them!$"

Rustboro_Basement_Scientist4_Text::
	.string "Who are you?\n"
	.string "You don't look like one of them.$"

Rustboro_Basement_Scientist5_Text::
	.string "There's a high probability some of\n"
	.string "our research is being destroyed\l"
	.string "even as we speak!\p"
	.string "Here, take this. Hopefully it'll help\n"
	.string "you in your fight agaist them.$"

BasementPleaseHurry::
	.string "Please hurry!$"

Rustboro_Basement_DevonEmployee1_Text::
	.string "These crooks forced everyone except\n"
	.string "for the president to the basement\l"
	.string "when they attacked.\p"
	.string "I don't know what they want from him\n"
	.string "but I hope he's safe…$"

Rustboro_Basement_DevonEmployee2_Text::
	.string "This is unprecedented!\n"
	.string "When we get out of this,\l"
	.string "we're definitely hiring guards.$"

Rustboro_Basement_DevonGreeter_Text::
	.string "Everybody here seems to be unharmed.\p"
	.string "If you can, please help our president.\n"
	.string "Last I saw him, he was in his office\l"
	.string "in the 3rd floor.$"

Rustboro_Basement_Collection_Text::
	.string "It's a collection of various products\n"
	.string "developed by the Devon Corporation.$"
