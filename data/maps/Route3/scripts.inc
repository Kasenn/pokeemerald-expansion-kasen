Route3_MapScripts::
# 2 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TurnR3Player2
# 8 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route3/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP
	return

Route3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Route3/scripts.pory"
	map_script_2 VAR_RANCH_AMPHAROS, 1, AmphyScene
	.2byte 0


TurnR3Player2::
# 13 "data/maps/Route3/scripts.pory"
	map_script_2 VAR_RANCH_AMPHAROS, 1, TurnR3Player
# 14 "data/maps/Route3/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, EndScript
	return


EndScript::
# 17 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


TurnR3Player::
# 21 "data/maps/Route3/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


AmphyScene::
# 25 "data/maps/Route3/scripts.pory"
	delay 24
# 26 "data/maps/Route3/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 27 "data/maps/Route3/scripts.pory"
	waitmoncry
# 28 "data/maps/Route3/scripts.pory"
	delay 48
# 29 "data/maps/Route3/scripts.pory"
	applymovement 23, Walk6Up, MAP_ROUTE3
# 30 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
# 32 "data/maps/Route3/scripts.pory"
	removeobject 23, MAP_ROUTE3
# 33 "data/maps/Route3/scripts.pory"
	setvar VAR_RANCH_AMPHAROS, 2
# 34 "data/maps/Route3/scripts.pory"
	delay 30
# 35 "data/maps/Route3/scripts.pory"
	release
	end


HideAmphyR3::
# 39 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
# 40 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Hiker::
# 45 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_HIKER, Route3_HikerIntro, Route3_HikerDefeated
# 46 "data/maps/Route3/scripts.pory"
	msgbox Route3_HikerPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Lass::
# 51 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_UNUSED_54_, Route3_LassIntro, Route3_LassDefeated
# 52 "data/maps/Route3/scripts.pory"
	msgbox Route3_LassPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Maniac::
# 57 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_POKEMANIAC, Route3_ManiacIntro, Route3_ManiacDefeated
# 58 "data/maps/Route3/scripts.pory"
	msgbox Route3_ManiacPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_BugCatcher::
# 63 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_BUGCATCHER, Route3_BugCatcherIntro, Route3_BugCatcherDefeated
# 64 "data/maps/Route3/scripts.pory"
	msgbox Route3_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Twin1::
# 69 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_R4_TWINS, Route3_Twin1Intro, Route3_Twin1Defeated, Route3_Twin1NotEnoughMons
# 70 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin1PostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Twin2::
# 75 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_R4_TWINS, Route3_Twin2Intro, Route3_Twin2Defeated, Route3_Twin2NotEnoughMons
# 76 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin2PostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Triathlete::
# 81 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_TRIATHLETE, Route3_TriathleteIntro, Route3_TriathleteDefeated
# 82 "data/maps/Route3/scripts.pory"
	msgbox Route3_TriathletePostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Camper::
# 87 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_CAMPER, Route3_CamperIntro, Route3_CamperDefeated
# 88 "data/maps/Route3/scripts.pory"
	msgbox Route3_CamperPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_CoolF::
# 93 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_COOL_F, Route3_CoolFIntro, Route3_CoolFDefeated
# 94 "data/maps/Route3/scripts.pory"
	msgbox Route3_CoolFPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_CoolM::
# 99 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_COOL_M, Route3_CoolMIntro, Route3_CoolMDefeated
# 100 "data/maps/Route3/scripts.pory"
	msgbox Route3_CoolMPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Bird1::
# 105 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_BIRDKEEPER, Route3_Bird1Intro, Route3_Bird1Defeated
# 106 "data/maps/Route3/scripts.pory"
	msgbox Route3_Bird1PostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Youngster::
# 111 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_YOUNGSTER, Route3_YoungsterIntro, Route3_YoungsterDefeated
# 112 "data/maps/Route3/scripts.pory"
	msgbox Route3_YoungsterPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Bird2::
# 117 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_BIRDKEEPER_2, Route3_Bird2Intro, Route3_Bird2Defeated
# 118 "data/maps/Route3/scripts.pory"
	msgbox Route3_Bird2PostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_DoubleLass::
# 123 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_DOUBLE_LASS, Route3_DoubleLassIntro, Route3_DoubleLassDefeated
# 124 "data/maps/Route3/scripts.pory"
	msgbox Route3_DoubleLassPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_DoubleBoy::
# 129 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_DOUBLE_YOUNGSTER, Route3_DoubleBoyIntro, Route3_DoubleBoyDefeated
# 130 "data/maps/Route3/scripts.pory"
	msgbox Route3_DoubleBoyPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_HedgeRunner::
# 135 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_R4_TRIATHLETE_2, Route3_HedgeRunnerIntro, Route3_HedgeRunnerDefeated
# 136 "data/maps/Route3/scripts.pory"
	msgbox Route3_HedgeRunnerPostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route3/scripts.pory"
	waitmessage
	end


TriggerGina::
# 141 "data/maps/Route3/scripts.pory"
	checktrainerflag TRAINER_R4_TWINS
	goto_if 0, TriggerGina_1
# 163 "data/maps/Route3/scripts.pory"
	release
	end

TriggerGina_1:
# 142 "data/maps/Route3/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 143 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq TriggerGina_5
# 159 "data/maps/Route3/scripts.pory"
	release
	end

TriggerGina_5:
# 144 "data/maps/Route3/scripts.pory"
	lock
# 145 "data/maps/Route3/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 146 "data/maps/Route3/scripts.pory"
	safefollow
# 147 "data/maps/Route3/scripts.pory"
	exclamationmark 10, 11
# 148 "data/maps/Route3/scripts.pory"
	applymovement 10, Walk1Down
# 149 "data/maps/Route3/scripts.pory"
	applymovement 11, Walk1Down
# 150 "data/maps/Route3/scripts.pory"
	waitmovement 10
# 151 "data/maps/Route3/scripts.pory"
	waitmovement 11
# 152 "data/maps/Route3/scripts.pory"
	delay 10
# 153 "data/maps/Route3/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 154 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin1Intro, MSGBOX_DEFAULT
# 155 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_R4_TWINS, Route3_Twin1Defeated
# 156 "data/maps/Route3/scripts.pory"
	waitmessage
	end


TriggerMia::
# 169 "data/maps/Route3/scripts.pory"
	checktrainerflag TRAINER_R4_TWINS
	goto_if 0, TriggerMia_1
# 191 "data/maps/Route3/scripts.pory"
	release
	end

TriggerMia_1:
# 170 "data/maps/Route3/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 171 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq TriggerMia_5
# 187 "data/maps/Route3/scripts.pory"
	release
	end

TriggerMia_5:
# 172 "data/maps/Route3/scripts.pory"
	lock
# 173 "data/maps/Route3/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 174 "data/maps/Route3/scripts.pory"
	safefollow
# 175 "data/maps/Route3/scripts.pory"
	exclamationmark 10, 11
# 176 "data/maps/Route3/scripts.pory"
	applymovement 10, Walk1Down
# 177 "data/maps/Route3/scripts.pory"
	applymovement 11, Walk1Down
# 178 "data/maps/Route3/scripts.pory"
	waitmovement 10
# 179 "data/maps/Route3/scripts.pory"
	waitmovement 11
# 180 "data/maps/Route3/scripts.pory"
	delay 10
# 181 "data/maps/Route3/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 182 "data/maps/Route3/scripts.pory"
	msgbox Route3_Twin2Intro, MSGBOX_DEFAULT
# 183 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_R4_TWINS, Route3_Twin2Defeated
# 184 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_Antidote::
# 197 "data/maps/Route3/scripts.pory"
	finditem ITEM_ANTIDOTE
	return


Route3_GigaDrain::
# 200 "data/maps/Route3/scripts.pory"
	finditem ITEM_TM_GRASS_KNOT
	return


MultiRegisterSign::
# 423 "data/maps/Route3/scripts.pory"
	msgbox MultiRegisterSign_Text, MSGBOX_SIGN
	return


Route3_HikerIntro::
# 203 "data/maps/Route3/scripts.pory"
	.string "Hahahaha!\n"
	.string "How about we have a battle?\l"
	.string "You and me!\l"
	.string "Hahahaha!$"

Route3_HikerDefeated::
# 209 "data/maps/Route3/scripts.pory"
	.string "I lost!\n"
	.string "Hahahaha!$"

Route3_HikerPostBattle::
# 213 "data/maps/Route3/scripts.pory"
	.string "Hahahahaha! Something flew up my nose!\n"
	.string "Hahahaha-hatchoo!$"

Route3_LassIntro::
# 218 "data/maps/Route3/scripts.pory"
	.string "Should I…\n"
	.string "Or shouldn't I?\p"
	.string "Okay, sure, I will battle!$"

Route3_LassDefeated::
# 223 "data/maps/Route3/scripts.pory"
	.string "I shouldn't have battled…$"

Route3_LassPostBattle::
# 226 "data/maps/Route3/scripts.pory"
	.string "If you're faced with a decision and\n"
	.string "you let someone else choose for you,\l"
	.string "you will regret it, however things\l"
	.string "turn out.$"

Route3_ManiacIntro::
# 233 "data/maps/Route3/scripts.pory"
	.string "Y-you want to battle with me?\n"
	.string "Even though I just caught my Pokémon?$"

Route3_ManiacDefeated::
# 237 "data/maps/Route3/scripts.pory"
	.string "Y-you're all happy to win?\n"
	.string "Even though it's only me?$"

Route3_ManiacPostBattle::
# 241 "data/maps/Route3/scripts.pory"
	.string "Oh, so now you want to say a word to\n"
	.string "the loser?\p"
	.string "Aren't you just the coolest?\n"
	.string "Humph!$"

Route3_BugCatcherIntro::
# 248 "data/maps/Route3/scripts.pory"
	.string "My bug Pokémon are tough!\n"
	.string "Let's battle!$"

Route3_BugCatcherDefeated::
# 252 "data/maps/Route3/scripts.pory"
	.string "I lost!\n"
	.string "I thought I had you!$"

Route3_BugCatcherPostBattle::
# 256 "data/maps/Route3/scripts.pory"
	.string "Bug Pokémon evolve quickly.\n"
	.string "So they get strong quickly, too.$"

Route3_Twin1Intro::
# 261 "data/maps/Route3/scripts.pory"
	.string "Gina: Okay, let's battle with our\n"
	.string "Pokémon!$"

Route3_Twin1Defeated::
# 265 "data/maps/Route3/scripts.pory"
	.string "Gina: Losing upsets me!$"

Route3_Twin1PostBattle::
# 268 "data/maps/Route3/scripts.pory"
	.string "Gina: You are strong!\n"
	.string "We have to train lots more!$"

Route3_Twin2Intro::
# 273 "data/maps/Route3/scripts.pory"
	.string "Mia: We are twins, so we battle\n"
	.string "Pokémon together.$"

Route3_Twin2Defeated::
# 277 "data/maps/Route3/scripts.pory"
	.string "Mia: We battled together, but we\n"
	.string "both lost…$"

Route3_Twin2PostBattle::
# 281 "data/maps/Route3/scripts.pory"
	.string "Mia: We will train our Pokémon more\n"
	.string "and be strong like you.$"

Route3_TriathleteIntro::
# 286 "data/maps/Route3/scripts.pory"
	.string "The triathlon is hard in the extreme.\p"
	.string "You have to complete the three events\n"
	.string "of swimming, cycling, and running.$"

Route3_TriathleteDefeated::
# 291 "data/maps/Route3/scripts.pory"
	.string "Pokémon battles are hard, too!$"

Route3_TriathletePostBattle::
# 294 "data/maps/Route3/scripts.pory"
	.string "I'm exhausted, so I need a break.\n"
	.string "It's important to get proper rest.$"

Route3_CamperIntro::
# 299 "data/maps/Route3/scripts.pory"
	.string "I'll give you some of my sandwich\n"
	.string "if you'll lose.$"

Route3_CamperDefeated::
# 303 "data/maps/Route3/scripts.pory"
	.string "Tch! I thought a sandwich would be\n"
	.string "enough of a bribe…$"

Route3_CamperPostBattle::
# 307 "data/maps/Route3/scripts.pory"
	.string "My Sandile loves eating\n"
	.string "my sandwiches.$"

Route3_CoolFIntro::
# 312 "data/maps/Route3/scripts.pory"
	.string "Pokémon have many special abilities.\n"
	.string "If you want to become a first-class\l"
	.string "trainer, learn about them.$"

Route3_CoolFDefeated::
# 317 "data/maps/Route3/scripts.pory"
	.string "You're obviously thinking.$"

Route3_CoolFPostBattle::
# 320 "data/maps/Route3/scripts.pory"
	.string "The special abilities of Pokémon\n"
	.string "will make battle styles change.$"

Route3_CoolMIntro::
# 325 "data/maps/Route3/scripts.pory"
	.string "Your party Pokémon…\n"
	.string "Do you have different types?$"

Route3_CoolMDefeated::
# 329 "data/maps/Route3/scripts.pory"
	.string "I've seen your policy in action!$"

Route3_CoolMPostBattle::
# 332 "data/maps/Route3/scripts.pory"
	.string "I think it's awesome you're so strong\n"
	.string "battling with your favorite Pokémon.$"

Route3_Bird1Intro::
# 337 "data/maps/Route3/scripts.pory"
	.string "My Pokémon are strong!\n"
	.string "How about yours?$"

Route3_Bird1Defeated::
# 341 "data/maps/Route3/scripts.pory"
	.string "Your Pokémon were stronger…$"

Route3_Bird1PostBattle::
# 344 "data/maps/Route3/scripts.pory"
	.string "A Pokémon that grows steadily is one\n"
	.string "you can count on.$"

Route3_YoungsterIntro::
# 349 "data/maps/Route3/scripts.pory"
	.string "There is no stronger trainer than I!$"

Route3_YoungsterDefeated::
# 352 "data/maps/Route3/scripts.pory"
	.string "This can't be!$"

Route3_YoungsterPostBattle::
# 355 "data/maps/Route3/scripts.pory"
	.string "There probably is no stronger trainer\n"
	.string "than you!$"

Route3_Bird2Intro::
# 360 "data/maps/Route3/scripts.pory"
	.string "I'll show you the true potential of me\n"
	.string "and my bird Pokémon!$"

Route3_Bird2Defeated::
# 364 "data/maps/Route3/scripts.pory"
	.string "We lacked potential…$"

Route3_Bird2PostBattle::
# 367 "data/maps/Route3/scripts.pory"
	.string "Ever since I was a little kid, I always\n"
	.string "admired bird Pokémon…$"

Route3_DoubleLassIntro::
# 372 "data/maps/Route3/scripts.pory"
	.string "Let me teach you how strong my\n"
	.string "adorable Pokémon are!$"

Route3_DoubleLassDefeated::
# 376 "data/maps/Route3/scripts.pory"
	.string "You're a notch above me…$"

Route3_DoubleLassPostBattle::
# 379 "data/maps/Route3/scripts.pory"
	.string "Pokémon that possess cuteness and\n"
	.string "power, that's ideal, I think.$"

Route3_DoubleBoyIntro::
# 384 "data/maps/Route3/scripts.pory"
	.string "To train myself, I challenge all\n"
	.string "whom I meet!$"

Route3_DoubleBoyDefeated::
# 388 "data/maps/Route3/scripts.pory"
	.string "Uncle! I give up!$"

Route3_DoubleBoyPostBattle::
# 391 "data/maps/Route3/scripts.pory"
	.string "All I can do is keep training until\n"
	.string "I can defeat strong trainers such\l"
	.string "as yourself.$"

Route3_HedgeRunnerIntro::
# 397 "data/maps/Route3/scripts.pory"
	.string "I'll battle while I'm running!\n"
	.string "Try to keep up with me!$"

Route3_HedgeRunnerDefeated::
# 401 "data/maps/Route3/scripts.pory"
	.string "Gasp, gasp…$"

Route3_HedgeRunnerPostBattle::
# 404 "data/maps/Route3/scripts.pory"
	.string "I made the mistake of trying to battle\n"
	.string "while running!\p"
	.string "I should take a run to calm down…$"

Route3_Twin1NotEnoughMons::
# 410 "data/maps/Route3/scripts.pory"
	.string "Gina: Oh? Only one Pokémon?\n"
	.string "Then, we don't battle with you.\p"
	.string "If there's only one Pokémon, it will\n"
	.string "be lonesome. That's not nice.$"

Route3_Twin2NotEnoughMons::
# 416 "data/maps/Route3/scripts.pory"
	.string "Mia: You want to battle with us?\p"
	.string "It's a big no-no if you don't have two\n"
	.string "Pokémon with you.\l"
	.string "We're too strong for you!$"

MultiRegisterSign_Text::
# 425 "data/maps/Route3/scripts.pory"
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
