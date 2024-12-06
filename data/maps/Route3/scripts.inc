Route3_MapScripts::
# 2 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TurnR3Player2
# 3 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Route3/scripts.pory"
	map_script_2 VAR_RANCH_AMPHAROS, 1, AmphyScene
	.2byte 0


TurnR3Player2::
# 8 "data/maps/Route3/scripts.pory"
	map_script_2 VAR_RANCH_AMPHAROS, 1, TurnR3Player
# 9 "data/maps/Route3/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, EndScript
	return


EndScript::
# 12 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


TurnR3Player::
# 16 "data/maps/Route3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


AmphyScene::
# 20 "data/maps/Route3/scripts.pory"
	delay 24
# 21 "data/maps/Route3/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 22 "data/maps/Route3/scripts.pory"
	waitmoncry
# 23 "data/maps/Route3/scripts.pory"
	delay 48
# 24 "data/maps/Route3/scripts.pory"
	applymovement 23, Walk6Up, MAP_ROUTE3
# 25 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
# 27 "data/maps/Route3/scripts.pory"
	removeobject 23, MAP_ROUTE3
# 28 "data/maps/Route3/scripts.pory"
	setvar VAR_RANCH_AMPHAROS, 2
# 29 "data/maps/Route3/scripts.pory"
	delay 30
# 30 "data/maps/Route3/scripts.pory"
	release
	end


HideAmphyR3::
# 34 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
# 35 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Hiker::
# 40 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_3, Route3_HikerIntro, Route3_HikerDefeated
# 41 "data/maps/Route3/scripts.pory"
	msgbox Route3_HikerPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Lass::
# 46 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_4, Route3_LassIntro, Route3_LassDefeated
# 47 "data/maps/Route3/scripts.pory"
	msgbox Route3_LassPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Maniac::
# 52 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_5, Route3_ManiacIntro, Route3_ManiacDefeated
# 53 "data/maps/Route3/scripts.pory"
	msgbox Route3_ManiacPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_BugCatcher::
# 58 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_6, Route3_BugCatcherIntro, Route3_BugCatcherDefeated
# 59 "data/maps/Route3/scripts.pory"
	msgbox Route3_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Twin1::
# 64 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_LOLA_1, Route3_Twin1Intro, Route3_Twin1Defeated, Route3_Twin1NotEnoughMons
# 65 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin1PostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Twin2::
# 70 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_LOLA_1, Route3_Twin2Intro, Route3_Twin2Defeated, Route3_Twin2NotEnoughMons
# 71 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin2PostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Triathlete::
# 76 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route3_TriathleteIntro, Route3_TriathleteDefeated
# 77 "data/maps/Route3/scripts.pory"
	msgbox Route3_TriathletePostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Camper::
# 82 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_LOLA_2, Route3_CamperIntro, Route3_CamperDefeated
# 83 "data/maps/Route3/scripts.pory"
	msgbox Route3_CamperPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_CoolF::
# 88 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_LOLA_3, Route3_CoolFIntro, Route3_CoolFDefeated
# 89 "data/maps/Route3/scripts.pory"
	msgbox Route3_CoolFPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_CoolM::
# 94 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_LOLA_4, Route3_CoolMIntro, Route3_CoolMDefeated
# 95 "data/maps/Route3/scripts.pory"
	msgbox Route3_CoolMPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Bird1::
# 100 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_LOLA_5, Route3_Bird1Intro, Route3_Bird1Defeated
# 101 "data/maps/Route3/scripts.pory"
	msgbox Route3_Bird1PostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Youngster::
# 106 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route3_YoungsterIntro, Route3_YoungsterDefeated
# 107 "data/maps/Route3/scripts.pory"
	msgbox Route3_YoungsterPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Bird2::
# 112 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route3_Bird2Intro, Route3_Bird2Defeated
# 113 "data/maps/Route3/scripts.pory"
	msgbox Route3_Bird2PostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_DoubleLass::
# 118 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, Route3_DoubleLassIntro, Route3_DoubleLassDefeated
# 119 "data/maps/Route3/scripts.pory"
	msgbox Route3_DoubleLassPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_DoubleBoy::
# 124 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICKY_2, Route3_DoubleBoyIntro, Route3_DoubleBoyDefeated
# 125 "data/maps/Route3/scripts.pory"
	msgbox Route3_DoubleBoyPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_HedgeRunner::
# 130 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICKY_3, Route3_HedgeRunnerIntro, Route3_HedgeRunnerDefeated
# 131 "data/maps/Route3/scripts.pory"
	msgbox Route3_HedgeRunnerPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route3/scripts.pory"
	waitmessage
	end


TriggerGina::
# 136 "data/maps/Route3/scripts.pory"
	checktrainerflag TRAINER_LOLA_1
	goto_if 0, TriggerGina_1
# 162 "data/maps/Route3/scripts.pory"
	release
	end

TriggerGina_1:
# 137 "data/maps/Route3/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 138 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq TriggerGina_5
# 158 "data/maps/Route3/scripts.pory"
	release
	end

TriggerGina_5:
# 139 "data/maps/Route3/scripts.pory"
	lock
# 140 "data/maps/Route3/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 141 "data/maps/Route3/scripts.pory"
	safefollow
# 142 "data/maps/Route3/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 143 "data/maps/Route3/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 144 "data/maps/Route3/scripts.pory"
	waitmovement 10
# 145 "data/maps/Route3/scripts.pory"
	waitmovement 11
# 146 "data/maps/Route3/scripts.pory"
	delay 50
# 147 "data/maps/Route3/scripts.pory"
	applymovement 10, Walk1Down
# 148 "data/maps/Route3/scripts.pory"
	applymovement 11, Walk1Down
# 149 "data/maps/Route3/scripts.pory"
	waitmovement 10
# 150 "data/maps/Route3/scripts.pory"
	waitmovement 11
# 151 "data/maps/Route3/scripts.pory"
	delay 10
# 152 "data/maps/Route3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 153 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin1Intro, MSGBOX_DEFAULT
# 154 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_LOLA_1, Route3_Twin1Defeated
# 155 "data/maps/Route3/scripts.pory"
	waitmessage
	end


TriggerMia::
# 168 "data/maps/Route3/scripts.pory"
	checktrainerflag TRAINER_LOLA_1
	goto_if 0, TriggerMia_1
# 194 "data/maps/Route3/scripts.pory"
	release
	end

TriggerMia_1:
# 169 "data/maps/Route3/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 170 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq TriggerMia_5
# 190 "data/maps/Route3/scripts.pory"
	release
	end

TriggerMia_5:
# 171 "data/maps/Route3/scripts.pory"
	lock
# 172 "data/maps/Route3/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 173 "data/maps/Route3/scripts.pory"
	safefollow
# 174 "data/maps/Route3/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 175 "data/maps/Route3/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 176 "data/maps/Route3/scripts.pory"
	waitmovement 10
# 177 "data/maps/Route3/scripts.pory"
	waitmovement 11
# 178 "data/maps/Route3/scripts.pory"
	delay 50
# 179 "data/maps/Route3/scripts.pory"
	applymovement 10, Walk1Down
# 180 "data/maps/Route3/scripts.pory"
	applymovement 11, Walk1Down
# 181 "data/maps/Route3/scripts.pory"
	waitmovement 10
# 182 "data/maps/Route3/scripts.pory"
	waitmovement 11
# 183 "data/maps/Route3/scripts.pory"
	delay 10
# 184 "data/maps/Route3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 185 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin2Intro, MSGBOX_DEFAULT
# 186 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_LOLA_1, Route3_Twin2Defeated
# 187 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Antidote::
# 200 "data/maps/Route3/scripts.pory"
	finditem ITEM_ANTIDOTE
	return


Route3_GigaDrain::
# 203 "data/maps/Route3/scripts.pory"
	finditem ITEM_TM_GRASS_KNOT
	return


MultiRegisterSign::
# 426 "data/maps/Route3/scripts.pory"
	msgbox MultiRegisterSign_Text, MSGBOX_SIGN
	return


Route3_HikerIntro::
# 206 "data/maps/Route3/scripts.pory"
	.string "Hahahaha!\n"
	.string "How about we have a battle?\l"
	.string "You and me!\l"
	.string "Hahahaha!$"

Route3_HikerDefeated::
# 212 "data/maps/Route3/scripts.pory"
	.string "I lost!\n"
	.string "Hahahaha!$"

Route3_HikerPostBattle::
# 216 "data/maps/Route3/scripts.pory"
	.string "Hahahahaha! Something flew up my nose!\n"
	.string "Hahahaha-hatchoo!$"

Route3_LassIntro::
# 221 "data/maps/Route3/scripts.pory"
	.string "Should I…\n"
	.string "Or shouldn't I?\p"
	.string "Okay, sure, I will battle!$"

Route3_LassDefeated::
# 226 "data/maps/Route3/scripts.pory"
	.string "I shouldn't have battled…$"

Route3_LassPostBattle::
# 229 "data/maps/Route3/scripts.pory"
	.string "If you're faced with a decision and\n"
	.string "you let someone else choose for you,\l"
	.string "you will regret it, however things\l"
	.string "turn out.$"

Route3_ManiacIntro::
# 236 "data/maps/Route3/scripts.pory"
	.string "Y-you want to battle with me?\n"
	.string "Even though I just caught my POKéMON?$"

Route3_ManiacDefeated::
# 240 "data/maps/Route3/scripts.pory"
	.string "Y-you're all happy to win?\n"
	.string "Even though it's only me?$"

Route3_ManiacPostBattle::
# 244 "data/maps/Route3/scripts.pory"
	.string "Oh, so now you want to say a word to\n"
	.string "the loser?\p"
	.string "Aren't you just the coolest?\n"
	.string "Humph!$"

Route3_BugCatcherIntro::
# 251 "data/maps/Route3/scripts.pory"
	.string "My bug Pokémon are tough!\n"
	.string "Let's battle!$"

Route3_BugCatcherDefeated::
# 255 "data/maps/Route3/scripts.pory"
	.string "I lost!\n"
	.string "I thought I had you!$"

Route3_BugCatcherPostBattle::
# 259 "data/maps/Route3/scripts.pory"
	.string "Bug Pokémon evolve quickly.\n"
	.string "So they get strong quickly, too.$"

Route3_Twin1Intro::
# 264 "data/maps/Route3/scripts.pory"
	.string "Gina: Okay, let's battle with our\n"
	.string "Pokémon!$"

Route3_Twin1Defeated::
# 268 "data/maps/Route3/scripts.pory"
	.string "Gina: Losing upsets me!$"

Route3_Twin1PostBattle::
# 271 "data/maps/Route3/scripts.pory"
	.string "Gina: You are strong!\n"
	.string "We have to train lots more!$"

Route3_Twin2Intro::
# 276 "data/maps/Route3/scripts.pory"
	.string "Mia: We are twins, so we battle\n"
	.string "Pokémon together.$"

Route3_Twin2Defeated::
# 280 "data/maps/Route3/scripts.pory"
	.string "Mia: We battled together, but we\n"
	.string "both lost…$"

Route3_Twin2PostBattle::
# 284 "data/maps/Route3/scripts.pory"
	.string "Mia: We will train our Pokémon more\n"
	.string "and be strong like you.$"

Route3_TriathleteIntro::
# 289 "data/maps/Route3/scripts.pory"
	.string "The triathlon is hard in the extreme.\p"
	.string "You have to complete the three events\n"
	.string "of swimming, cycling, and running.$"

Route3_TriathleteDefeated::
# 294 "data/maps/Route3/scripts.pory"
	.string "Pokémon battles are hard, too!$"

Route3_TriathletePostBattle::
# 297 "data/maps/Route3/scripts.pory"
	.string "I'm exhausted, so I need a break.\n"
	.string "It's important to get proper rest.$"

Route3_CamperIntro::
# 302 "data/maps/Route3/scripts.pory"
	.string "I'll give you some of my sandwich\n"
	.string "if you'll lose.$"

Route3_CamperDefeated::
# 306 "data/maps/Route3/scripts.pory"
	.string "Tch! I thought a sandwich would be\n"
	.string "enough of a bribe…$"

Route3_CamperPostBattle::
# 310 "data/maps/Route3/scripts.pory"
	.string "My Sandile loves eating\n"
	.string "my sandwiches.$"

Route3_CoolFIntro::
# 315 "data/maps/Route3/scripts.pory"
	.string "Pokémon have many special abilities.\n"
	.string "If you want to become a first-class\l"
	.string "trainer, learn about them.$"

Route3_CoolFDefeated::
# 320 "data/maps/Route3/scripts.pory"
	.string "You're obviously thinking.$"

Route3_CoolFPostBattle::
# 323 "data/maps/Route3/scripts.pory"
	.string "The special abilities of Pokémon\n"
	.string "will make battle styles change.$"

Route3_CoolMIntro::
# 328 "data/maps/Route3/scripts.pory"
	.string "Your party Pokémon…\n"
	.string "Do you have different types?$"

Route3_CoolMDefeated::
# 332 "data/maps/Route3/scripts.pory"
	.string "I've seen your policy in action!$"

Route3_CoolMPostBattle::
# 335 "data/maps/Route3/scripts.pory"
	.string "I think it's awesome you're so strong\n"
	.string "battling with your favorite Pokémon.$"

Route3_Bird1Intro::
# 340 "data/maps/Route3/scripts.pory"
	.string "My Pokémon are strong!\n"
	.string "How about yours?$"

Route3_Bird1Defeated::
# 344 "data/maps/Route3/scripts.pory"
	.string "Your Pokémon were stronger…$"

Route3_Bird1PostBattle::
# 347 "data/maps/Route3/scripts.pory"
	.string "A Pokémon that grows steadily is one\n"
	.string "you can count on.$"

Route3_YoungsterIntro::
# 352 "data/maps/Route3/scripts.pory"
	.string "There is no stronger trainer than I!$"

Route3_YoungsterDefeated::
# 355 "data/maps/Route3/scripts.pory"
	.string "This can't be!$"

Route3_YoungsterPostBattle::
# 358 "data/maps/Route3/scripts.pory"
	.string "There probably is no stronger trainer\n"
	.string "than you!$"

Route3_Bird2Intro::
# 363 "data/maps/Route3/scripts.pory"
	.string "I'll show you the true potential of me\n"
	.string "and my bird Pokémon!$"

Route3_Bird2Defeated::
# 367 "data/maps/Route3/scripts.pory"
	.string "We lacked potential…$"

Route3_Bird2PostBattle::
# 370 "data/maps/Route3/scripts.pory"
	.string "Ever since I was a little kid, I always\n"
	.string "admired bird Pokémon…$"

Route3_DoubleLassIntro::
# 375 "data/maps/Route3/scripts.pory"
	.string "Let me teach you how strong my\n"
	.string "adorable Pokémon are!$"

Route3_DoubleLassDefeated::
# 379 "data/maps/Route3/scripts.pory"
	.string "You're a notch above me…$"

Route3_DoubleLassPostBattle::
# 382 "data/maps/Route3/scripts.pory"
	.string "Pokémon that possess cuteness and\n"
	.string "power, that's ideal, I think.$"

Route3_DoubleBoyIntro::
# 387 "data/maps/Route3/scripts.pory"
	.string "To train myself, I challenge all\n"
	.string "whom I meet!$"

Route3_DoubleBoyDefeated::
# 391 "data/maps/Route3/scripts.pory"
	.string "Uncle! I give up!$"

Route3_DoubleBoyPostBattle::
# 394 "data/maps/Route3/scripts.pory"
	.string "All I can do is keep training until\n"
	.string "I can defeat strong trainers such\l"
	.string "as yourself.$"

Route3_HedgeRunnerIntro::
# 400 "data/maps/Route3/scripts.pory"
	.string "I'll battle while I'm running!\n"
	.string "Try to keep up with me!$"

Route3_HedgeRunnerDefeated::
# 404 "data/maps/Route3/scripts.pory"
	.string "Gasp, gasp…$"

Route3_HedgeRunnerPostBattle::
# 407 "data/maps/Route3/scripts.pory"
	.string "I made the mistake of trying to battle\n"
	.string "while running!\p"
	.string "I should take a run to calm down…$"

Route3_Twin1NotEnoughMons::
# 413 "data/maps/Route3/scripts.pory"
	.string "Gina: Oh? Only one Pokémon?\n"
	.string "Then, we don't battle with you.\p"
	.string "If there's only one Pokémon, it will\n"
	.string "be lonesome. That's not nice.$"

Route3_Twin2NotEnoughMons::
# 419 "data/maps/Route3/scripts.pory"
	.string "Mia: You want to battle with us?\p"
	.string "It's a big no-no if you don't have two\n"
	.string "Pokémon with you.\l"
	.string "We're too strong for you!$"

MultiRegisterSign_Text::
# 428 "data/maps/Route3/scripts.pory"
	.string "Trainer Tips\p"
	.string "Key Items in your bag can be\n"
	.string "registered as SELECT for quick and\l"
	.string "convenient use.\p"
	.string "Up to 3 Key Items can be registered\n"
	.string "this way.\p"
	.string "Tapping SELECT while the select menu\n"
	.string "is already open causes the item to be\l"
	.string "used instead of activating the typical\l"
	.string "sort menu option.$"
