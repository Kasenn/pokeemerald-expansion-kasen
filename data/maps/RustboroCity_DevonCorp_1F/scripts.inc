RustboroCity_DevonCorp_1F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoreslateHarborSetFlags
	.byte 0


RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_EventScript_EmployeeNew::
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_2
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox EmployeeNew_TakeTimeToRecover, MSGBOX_NPC
RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_1:
	end

RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_2:
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_NPC
	goto RustboroCity_DevonCorp_1F_EventScript_EmployeeNew_1


RustboroCity_DevonCorp_1F_EventScript_GreeterNew::
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_HELPED_DEVON_CORP, RustboroCity_DevonCorp_1F_EventScript_GreeterNew_2
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp2, MSGBOX_NPC
RustboroCity_DevonCorp_1F_EventScript_GreeterNew_1:
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	checkitem ITEM_LETTER
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_1F_EventScript_GreeterNew_6
RustboroCity_DevonCorp_1F_EventScript_GreeterNew_5:
	end

RustboroCity_DevonCorp_1F_EventScript_GreeterNew_2:
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OurSavior, MSGBOX_NPC
	goto RustboroCity_DevonCorp_1F_EventScript_GreeterNew_1

RustboroCity_DevonCorp_1F_EventScript_GreeterNew_6:
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lockall
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox GreeterHandOverLetter, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setvar VAR_DESERT_BYPASS, 1
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeitem ITEM_LETTER, 1
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox ExplainGoGoggles, MSGBOX_NPC
	goto RustboroCity_DevonCorp_1F_EventScript_GreeterNew_5


RustboroCity_DevonCorp_1F_EventScript_RocketGreeter::
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RocketGreeter, MSGBOX_NPC
	end


RustboroCity_DevonCorp_1F_Rocket1::
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC1F_ROCKET_1, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_1F_Rocket2::
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC1F_ROCKET_2, RustboroCity_DevonCorp_1F_Rocket2_Intro, RustboroCity_DevonCorp_1F_Rocket2_Defeat
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Rocket2_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket1::
# 154 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC_BASEROCKET_1, RustboroCity_DevonCorp_Basement_Rocket1_Intro, RustboroCity_DevonCorp_Basement_Rocket1_Defeat
# 155 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_Basement_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket2::
# 169 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC_BASEROCKET_2, RustboroCity_DevonCorp_Basement_Rocket2_Intro, RustboroCity_DevonCorp_Basement_Rocket2_Defeat
# 170 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_Basement_Rocket2_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket3::
# 185 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC_BASEROCKET_3, RustboroCity_DevonCorp_Basement_Rocket3_Intro, RustboroCity_DevonCorp_Basement_Rocket3_Defeat
# 186 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_Basement_Rocket3_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_Basement_Rocket4::
# 202 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC_BASEROCKET_4, RustboroCity_DevonCorp_Basement_Rocket4_Intro, RustboroCity_DevonCorp_Basement_Rocket4_Defeat
# 203 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_Basement_Rocket4_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket1::
# 218 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC2F_ROCKET_1, RustboroCity_DevonCorp_2F_Rocket1_Intro, RustboroCity_DevonCorp_2F_Rocket1_Defeat
# 219 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket2::
# 235 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC2F_ROCKET_2, RustboroCity_DevonCorp_2F_Rocket2_Intro, RustboroCity_DevonCorp_2F_Rocket2_Defeat
# 236 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Rocket2_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket3::
# 250 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC2F_ROCKET_3, RustboroCity_DevonCorp_2F_Rocket3_Intro, RustboroCity_DevonCorp_2F_Rocket3_Defeat
# 251 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Rocket3_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket4::
# 268 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC2F_ROCKET_4, RustboroCity_DevonCorp_2F_Rocket4_Intro, RustboroCity_DevonCorp_2F_Rocket4_Defeat
# 269 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Rocket4_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_2F_Rocket5::
# 285 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC2F_ROCKET_5, RustboroCity_DevonCorp_2F_Rocket5_Intro, RustboroCity_DevonCorp_2F_Rocket5_Defeat
# 286 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Rocket5_PostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_DevonCorp_3F_Rocket1::
# 301 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	trainerbattle_single TRAINER_DC3F_ROCKET_1, RustboroCity_DevonCorp_3F_Rocket1_Intro, RustboroCity_DevonCorp_3F_Rocket1_Defeat
# 302 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Rocket1_PostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Basement_Scientist1::
# 317 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_Scientist1_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist2::
# 325 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_Scientist2_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist3::
# 334 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_Scientist3_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist4::
# 344 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_Scientist4_Text, MSGBOX_NPC
	end


Rustboro_Basement_Scientist5::
# 352 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 353 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lockall
# 354 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_BASEMENT_SUPERPOTION, Rustboro_Basement_Scientist5_2
# 358 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_Scientist5_Text, MSGBOX_DEFAULT
# 359 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 360 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setflag FLAG_BASEMENT_SUPERPOTION
# 361 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 362 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 363 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

Rustboro_Basement_Scientist5_2:
# 355 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox BasementPleaseHurry, MSGBOX_NPC
	end


Rustboro_Basement_DevonEmployee1::
# 377 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_DevonEmployee1_Text, MSGBOX_NPC
	end


Rustboro_Basement_DevonEmployee2::
# 388 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_DevonEmployee2_Text, MSGBOX_NPC
	end


Rustboro_Basement_DevonGreeter::
# 397 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_DevonGreeter_Text, MSGBOX_NPC
	end


Rustboro_Basement_Collection::
# 407 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox Rustboro_Basement_Collection_Text, MSGBOX_SIGN
	end


Rustboro_Basement_ItemBall::
# 415 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	finditem ITEM_QUICK_BALL
	end


RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct::
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those running shoes!\n"
	.string "They're one of our products!\p"
	.string "It makes me happy when I see someone\n"
	.string "using something we made.$"

RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay::
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
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
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
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
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It may take us a while to recover from\n"
	.string "the attack and assess just how much\l"
	.string "was stolen, but at least nobody was\l"
	.string "seriously hurt.$"

RustboroCity_DevonCorp_1F_Text_OurSavior::
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Oh, you're the young trainer who drove\n"
	.string "off Team Rocket, right?\l"
	.string "Thank you so much!\p"
	.string "Everyone's still a bit shaken\n"
	.string "but we'll manage somehow.$"

GreeterHandOverLetter::
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "What's this, a letter?\p"
	.string "… … … …\p"
	.string "I see. this isn't the first time\n"
	.string "you've had a tuffle with Team Rocket.\p"
	.string "Well, we can't simply let you leave\n"
	.string "empty-handed.\p"
	.string "For your heroic deeds, I have\n"
	.string "been authorized to give you these.$"

ExplainGoGoggles::
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "With those Go-Goggles, you\n"
	.string "should have no trouble crossing\l"
	.string "the desert near Route 6.$"

RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp2::
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the Devon\n"
	.string "Corporation.\p"
	.string "We're proud producers of items and\n"
	.string "medicine that enhance your life.\p"
	.string "We're still not open to the public\n"
	.string "but we'll always make an exception\l"
	.string "for you!$"

RocketGreeter::
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Huh? Wasn't there a guard posted\n"
	.string "outside?\p"
	.string "Anyway, the offices are closed.\n"
	.string "Get out. Now.$"

RustboroCity_DevonCorp_1F_Rocket1_Intro::
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're Team Rocket!\n"
	.string "We like to cause trouble!\l"
	.string "Ooh! Are you scared?$"

RustboroCity_DevonCorp_1F_Rocket1_Defeat::
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You think you're a hero?$"

RustboroCity_DevonCorp_1F_Rocket1_PostBattle::
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're not always evil. We just do\n"
	.string "whatever we like.$"

RustboroCity_DevonCorp_1F_Rocket2_Intro::
# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, hey! Keep out of our way!$"

RustboroCity_DevonCorp_1F_Rocket2_Defeat::
# 146 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Arggh. I give up.$"

RustboroCity_DevonCorp_1F_Rocket2_PostBattle::
# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Our boss has some big plan regarding\n"
	.string "this place. I wonder what it is.$"

RustboroCity_DevonCorp_Basement_Rocket1_Intro::
# 158 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "An unknown child wandering here?\n"
	.string "Who are you?$"

RustboroCity_DevonCorp_Basement_Rocket1_Defeat::
# 162 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Tch! I took you too lightly!$"

RustboroCity_DevonCorp_Basement_Rocket1_PostBattle::
# 165 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We won't let you ruin our plans!$"

RustboroCity_DevonCorp_Basement_Rocket2_Intro::
# 173 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It feels great ordering Pokémon to\n"
	.string "commit crimes.$"

RustboroCity_DevonCorp_Basement_Rocket2_Defeat::
# 177 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You're kidding!$"

RustboroCity_DevonCorp_Basement_Rocket2_PostBattle::
# 180 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I feel lousy over losing! Bah!\n"
	.string "I hate useless Pokémon!$"

RustboroCity_DevonCorp_Basement_Rocket3_Intro::
# 189 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Ha ha ha!\p"
	.string "How boring. It was far too easy to\n"
	.string "take over this place!\l"
	.string "Come on, keep me amused!$"

RustboroCity_DevonCorp_Basement_Rocket3_Defeat::
# 195 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Wh-who are you?$"

RustboroCity_DevonCorp_Basement_Rocket3_PostBattle::
# 198 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You beat me, and I won't forget it!$"

RustboroCity_DevonCorp_Basement_Rocket4_Intro::
# 206 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Surprise! I'm secretly a member of\n"
	.string "Team Rocket!$"

RustboroCity_DevonCorp_Basement_Rocket4_Defeat::
# 210 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I miscalculated my odds…$"

RustboroCity_DevonCorp_Basement_Rocket4_PostBattle::
# 213 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I spent years infiltrating this place\n"
	.string "and now my cover is blown…$"

RustboroCity_DevonCorp_2F_Rocket1_Intro::
# 222 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I've been given strict orders.\p"
	.string "I'm to crush anyone who challenges\n"
	.string "Team Rocket!$"

RustboroCity_DevonCorp_2F_Rocket1_Defeat::
# 227 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "!!!$"

RustboroCity_DevonCorp_2F_Rocket1_PostBattle::
# 230 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I failed in my duties…\n"
	.string "I'll be docked pay for this…$"

RustboroCity_DevonCorp_2F_Rocket2_Intro::
# 239 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "How did you make it past the guards\n"
	.string "downstairs?$"

RustboroCity_DevonCorp_2F_Rocket2_Defeat::
# 243 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Gulp! This is a bleak moment.$"

RustboroCity_DevonCorp_2F_Rocket2_PostBattle::
# 246 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I see now how you got through…$"

RustboroCity_DevonCorp_2F_Rocket3_Intro::
# 254 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Most excellent!\p"
	.string "This place will fulfill our\n"
	.string "grand design.$"

RustboroCity_DevonCorp_2F_Rocket3_Defeat::
# 259 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hmmm…\n"
	.string "All grand plans come with snags.$"

RustboroCity_DevonCorp_2F_Rocket3_PostBattle::
# 263 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Do you honestly believe you can stop\n"
	.string "Team Rocket?$"

RustboroCity_DevonCorp_2F_Rocket4_Intro::
# 272 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You plan to save the Devon Corp\n"
	.string "president?\p"
	.string "So sad that won't be possible…\n"
	.string "because I'm going to beat you!$"

RustboroCity_DevonCorp_2F_Rocket4_Defeat::
# 278 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "No! Unbelievable!$"

RustboroCity_DevonCorp_2F_Rocket4_PostBattle::
# 281 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I do not believe it! I was beaten!\n$"

RustboroCity_DevonCorp_2F_Rocket5_Intro::
# 289 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "This is no place for little kids!\n"
	.string "Shoo!$"

RustboroCity_DevonCorp_2F_Rocket5_Defeat::
# 293 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "WHAT are you?!$"

RustboroCity_DevonCorp_2F_Rocket5_PostBattle::
# 296 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Impossible…\n"
	.string "To be beaten by a little kid…$"

RustboroCity_DevonCorp_3F_Rocket1_Intro::
# 305 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Our boss is having an important meeting\n"
	.string "with the president of Devon Corp.\l"
	.string "I won't let you intervene!$"

RustboroCity_DevonCorp_3F_Rocket1_Defeat::
# 310 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I let you down, boss…$"

RustboroCity_DevonCorp_3F_Rocket1_PostBattle::
# 313 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Just who are you?!$"

Rustboro_Basement_Scientist1_Text::
# 320 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "What's happening out there?\n"
	.string "Is it safe?$"

Rustboro_Basement_Scientist2_Text::
# 328 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I was in the middle of some\n"
	.string "imporant research.\l"
	.string "I hope my samples haven't expired…$"

Rustboro_Basement_Scientist3_Text::
# 337 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I guess these crooks didn't notice\n"
	.string "this laptop here.\p"
	.string "I'll encrypt all the research so it'll\n"
	.string "be completely useless to them!$"

Rustboro_Basement_Scientist4_Text::
# 347 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Who are you?\n"
	.string "You don't look like one of them.$"

Rustboro_Basement_Scientist5_Text::
# 366 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a high probability some of\n"
	.string "our research is being destroyed\l"
	.string "even as we speak!\p"
	.string "Here, take this. Hopefully it'll help\n"
	.string "you in your fight agaist them.$"

BasementPleaseHurry::
# 373 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Please hurry!$"

Rustboro_Basement_DevonEmployee1_Text::
# 380 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "These crooks forced everyone except\n"
	.string "for the president to the basement\l"
	.string "when they attacked.\p"
	.string "I don't know what they want from him\n"
	.string "but I hope he's safe…$"

Rustboro_Basement_DevonEmployee2_Text::
# 391 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "This is unprecedented!\n"
	.string "When we get out of this,\l"
	.string "we're definitely hiring guards.$"

Rustboro_Basement_DevonGreeter_Text::
# 400 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Everybody here seems to be unharmed.\p"
	.string "If you can, please help our president.\n"
	.string "Last I saw him, he was in his office\l"
	.string "on the 3rd floor.$"

Rustboro_Basement_Collection_Text::
# 410 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's a collection of various products\n"
	.string "developed by the Devon Corporation.$"
