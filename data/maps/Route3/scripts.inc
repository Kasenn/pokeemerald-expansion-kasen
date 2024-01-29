Route3_MapScripts::
	.byte 0


Route3_Hiker::
	trainerbattle_single TRAINER_GABBY_AND_TY_3, Route3_HikerIntro, Route3_HikerDefeated
	msgbox Route3_HikerPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Lass::
	trainerbattle_single TRAINER_GABBY_AND_TY_4, Route3_LassIntro, Route3_LassDefeated
	msgbox Route3_LassPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Maniac::
	trainerbattle_single TRAINER_GABBY_AND_TY_5, Route3_ManiacIntro, Route3_ManiacDefeated
	msgbox Route3_ManiacPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_BugCatcher::
	trainerbattle_single TRAINER_GABBY_AND_TY_6, Route3_BugCatcherIntro, Route3_BugCatcherDefeated
	msgbox Route3_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Twin1::
	trainerbattle_double TRAINER_LOLA_1, Route3_Twin1Intro, Route3_Twin1Defeated, Route3_Twin1NotEnoughMons
	msgbox Route3_Twin1PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Twin2::
	trainerbattle_double TRAINER_LOLA_1, Route3_Twin2Intro, Route3_Twin2Defeated, Route3_Twin2NotEnoughMons
	msgbox Route3_Twin2PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Triathlete::
	trainerbattle_single TRAINER_GWEN, Route3_TriathleteIntro, Route3_TriathleteDefeated
	msgbox Route3_TriathletePostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Camper::
	trainerbattle_single TRAINER_LOLA_2, Route3_CamperIntro, Route3_CamperDefeated
	msgbox Route3_CamperPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_CoolF::
	trainerbattle_single TRAINER_LOLA_3, Route3_CoolFIntro, Route3_CoolFDefeated
	msgbox Route3_CoolFPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_CoolM::
	trainerbattle_single TRAINER_LOLA_4, Route3_CoolMIntro, Route3_CoolMDefeated
	msgbox Route3_CoolMPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Bird1::
	trainerbattle_single TRAINER_LOLA_5, Route3_Bird1Intro, Route3_Bird1Defeated
	msgbox Route3_Bird1PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Youngster::
	trainerbattle_single TRAINER_RICKY_1, Route3_YoungsterIntro, Route3_YoungsterDefeated
	msgbox Route3_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Bird2::
	trainerbattle_single TRAINER_SIMON, Route3_Bird2Intro, Route3_Bird2Defeated
	msgbox Route3_Bird2PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_DoubleLass::
	trainerbattle_single TRAINER_CHARLIE, Route3_DoubleLassIntro, Route3_DoubleLassDefeated
	msgbox Route3_DoubleLassPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_DoubleBoy::
	trainerbattle_single TRAINER_RICKY_2, Route3_DoubleBoyIntro, Route3_DoubleBoyDefeated
	msgbox Route3_DoubleBoyPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_HedgeRunner::
	trainerbattle_single TRAINER_RICKY_3, Route3_HedgeRunnerIntro, Route3_HedgeRunnerDefeated
	msgbox Route3_HedgeRunnerPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3WalkDown:
	walk_down
	step_end

TriggerGina::
	checktrainerflag TRAINER_LOLA_1
	goto_if 0, TriggerGina_1
	release
	end

TriggerGina_1:
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq TriggerGina_5
	end

TriggerGina_5:
	lockall
	playbgm MUS_ENCOUNTER_TWINS, FALSE
	applymovement 10, Common_Movement_ExclamationMark
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 10
	waitmovement 11
	delay 50
	applymovement 10, Route3WalkDown
	applymovement 11, Route3WalkDown
	waitmovement 10
	waitmovement 11
	delay 10
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Route3_Twin2Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LOLA_1, Route3_Twin1Defeated
	waitmessage
	end


TriggerMia::
	checktrainerflag TRAINER_LOLA_1
	goto_if 0, TriggerMia_1
	release
	end

TriggerMia_1:
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq TriggerMia_5
	end

TriggerMia_5:
	lockall
	playbgm MUS_ENCOUNTER_TWINS, FALSE
	applymovement 10, Common_Movement_ExclamationMark
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 10
	waitmovement 11
	delay 50
	applymovement 10, Route3WalkDown
	applymovement 11, Route3WalkDown
	waitmovement 10
	waitmovement 11
	delay 10
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Route3_Twin2Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LOLA_1, Route3_Twin2Defeated
	waitmessage
	end


Route3_Antidote::
	finditem ITEM_ANTIDOTE
	return


Route3_GigaDrain::
	finditem ITEM_TM_GIGA_DRAIN
	return


Route3_HikerIntro::
	.string "Hahahaha!\n"
	.string "How about we have a battle?\l"
	.string "You and me!\l"
	.string "Hahahaha!$"

Route3_HikerDefeated::
	.string "I lost!\n"
	.string "Hahahaha!$"

Route3_HikerPostBattle::
	.string "Hahahahaha! Something flew up my nose!\n"
	.string "Hahahaha-hatchoo!$"

Route3_LassIntro::
	.string "Should I…\n"
	.string "Or shouldn't I?\p"
	.string "Okay, sure, I will battle!$"

Route3_LassDefeated::
	.string "I shouldn't have battled…$"

Route3_LassPostBattle::
	.string "If you're faced with a decision and\n"
	.string "you let someone else choose for you,\l"
	.string "you will regret it, however things\l"
	.string "turn out.$"

Route3_ManiacIntro::
	.string "Y-you want to battle with me?\n"
	.string "Even though I just caught my POKéMON?$"

Route3_ManiacDefeated::
	.string "Y-you're all happy to win?\n"
	.string "Even though it's only me?$"

Route3_ManiacPostBattle::
	.string "Oh, so now you want to say a word to\n"
	.string "the loser?\p"
	.string "Aren't you just the coolest?\n"
	.string "Humph!$"

Route3_BugCatcherIntro::
	.string "My bug Pokémon are tough!\n"
	.string "Let's battle!$"

Route3_BugCatcherDefeated::
	.string "I lost!\n"
	.string "I thought I had you!$"

Route3_BugCatcherPostBattle::
	.string "Bug Pokémon evolve quickly.\n"
	.string "So they get strong quickly, too.$"

Route3_Twin1Intro::
	.string "Gina: Okay, let's battle with our\n"
	.string "Pokémon!$"

Route3_Twin1Defeated::
	.string "Gina: Losing upsets me!$"

Route3_Twin1PostBattle::
	.string "Gina: You are strong!\n"
	.string "We have to train lots more!$"

Route3_Twin2Intro::
	.string "Mia: We are twins, so we battle\n"
	.string "Pokémon together.$"

Route3_Twin2Defeated::
	.string "Mia: We battled together, but we\n"
	.string "both lost…$"

Route3_Twin2PostBattle::
	.string "Mia: We will train our Pokémon more\n"
	.string "and be strong like you.$"

Route3_TriathleteIntro::
	.string "The triathlon is hard in the extreme.\p"
	.string "You have to complete the three events\n"
	.string "of swimming, cycling, and running.$"

Route3_TriathleteDefeated::
	.string "Pokémon battles are hard, too!$"

Route3_TriathletePostBattle::
	.string "I'm exhausted, so I need a break.\n"
	.string "It's important to get proper rest.$"

Route3_CamperIntro::
	.string "I'll give you some of my sandwich\n"
	.string "if you'll lose.$"

Route3_CamperDefeated::
	.string "Tch! I thought a sandwich would be\n"
	.string "enough of a bribe…$"

Route3_CamperPostBattle::
	.string "My Sandshrew loves eating\n"
	.string "my sandwiches.$"

Route3_CoolFIntro::
	.string "Pokémon have many special abilities.\n"
	.string "If you want to become a first-class\l"
	.string "trainer, learn about them.$"

Route3_CoolFDefeated::
	.string "You're obviously thinking.$"

Route3_CoolFPostBattle::
	.string "The special abilities of Pokémon\n"
	.string "will make battle styles change.$"

Route3_CoolMIntro::
	.string "Your party Pokémon…\n"
	.string "Do you have different types?$"

Route3_CoolMDefeated::
	.string "I've seen your policy in action!$"

Route3_CoolMPostBattle::
	.string "I think it's awesome you're so strong\n"
	.string "battling with your favorite Pokémon.$"

Route3_Bird1Intro::
	.string "My Pokémon are strong!\n"
	.string "How about yours?$"

Route3_Bird1Defeated::
	.string "Your Pokémon were stronger…$"

Route3_Bird1PostBattle::
	.string "A Pokémon that grows steadily is one\n"
	.string "you can count on.$"

Route3_YoungsterIntro::
	.string "There is no stronger trainer than I!$"

Route3_YoungsterDefeated::
	.string "This can't be!$"

Route3_YoungsterPostBattle::
	.string "There probably is no stronger trainer\n"
	.string "than you!$"

Route3_Bird2Intro::
	.string "I'll show you the true potential of me\n"
	.string "and my bird Pokémon!$"

Route3_Bird2Defeated::
	.string "We lacked potential…$"

Route3_Bird2PostBattle::
	.string "Ever since I was a little kid, I always\n"
	.string "admired bird Pokémon…$"

Route3_DoubleLassIntro::
	.string "Let me teach you how strong my\n"
	.string "adorable Pokémon are!$"

Route3_DoubleLassDefeated::
	.string "You're a notch above me…$"

Route3_DoubleLassPostBattle::
	.string "Pokémon that possess cuteness and\n"
	.string "power, that's ideal, I think.$"

Route3_DoubleBoyIntro::
	.string "To train myself, I challenge all\n"
	.string "whom I meet!$"

Route3_DoubleBoyDefeated::
	.string "Uncle! I give up!$"

Route3_DoubleBoyPostBattle::
	.string "All I can do is keep training until\n"
	.string "I can defeat strong trainers such\l"
	.string "as yourself.$"

Route3_HedgeRunnerIntro::
	.string "I'll battle while I'm running!\n"
	.string "Try to keep up with me!$"

Route3_HedgeRunnerDefeated::
	.string "Gasp, gasp…$"

Route3_HedgeRunnerPostBattle::
	.string "I made the mistake of trying to battle\n"
	.string "while running!\p"
	.string "I should take a run to calm down…$"

Route3_Twin1NotEnoughMons::
	.string "Gina: Oh? Only one Pokémon?\n"
	.string "Then, we don't battle with you.\p"
	.string "If there's only one Pokémon, it will\n"
	.string "be lonesome. That's not nice.$"

Route3_Twin2NotEnoughMons::
	.string "Mia: You want to battle with us?\p"
	.string "It's a big no-no if you don't have two\n"
	.string "Pokémon with you.\l"
	.string "We're too strong for you!$"
