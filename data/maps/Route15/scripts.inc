Route15_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, R15_FlagControl
	map_script MAP_SCRIPT_ON_LOAD, R15_ClearBlockade
	.byte 0


R15_FlagControl::
	special SetRoute123Weather
	switch VAR_ROUTE14_ROCKET_EVENT
	case 4, R15_FlagControl_2
	case 5, R15_FlagControl_2
	case 6, R15_FlagControl_3
	case 7, R15_FlagControl_3
	return

R15_FlagControl_2:
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_1
	return

R15_FlagControl_3:
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_1
	return


R15_ClearBlockade::
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge R15_ClearBlockade_1
	return

R15_ClearBlockade_1:
	setmetatile 34, 44, 0x001, FALSE
	setmetatile 35, 44, 0x001, FALSE
	setmetatile 34, 45, 0x001, FALSE
	setmetatile 35, 45, 0x001, FALSE
	return


R15_Acerola::
	goto_if_set FLAG_TEMP_5, R15_Acerola_2
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq R15_Acerola_5
	bufferstring STR_VAR_1, R15_Acerola_Text_1
R15_Acerola_4:
	msgbox R15_Acerola_Text, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq R15_Acerola_9
	msgbox AcerolaYouMustBeBusy
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	compare VAR_FACING, DIR_NORTH
	goto_if_eq R15_Acerola_13
R15_Acerola_12:
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq R15_Acerola_16
R15_Acerola_15:
	compare VAR_FACING, DIR_EAST
	goto_if_eq R15_Acerola_19
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
R15_Acerola_18:
	delay 48
	msgbox AcerolaThatWay
R15_Acerola_8:
	setflag FLAG_TEMP_5
	release
	end

R15_Acerola_2:
	msgbox AcerolaThatWay, MSGBOX_NPC
	end

R15_Acerola_5:
	bufferstring STR_VAR_1, R15_Acerola_Text_0
	goto R15_Acerola_4

R15_Acerola_9:
	msgbox AcerolaShame
	goto R15_Acerola_8

R15_Acerola_13:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto R15_Acerola_12

R15_Acerola_16:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto R15_Acerola_15

R15_Acerola_19:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto R15_Acerola_18


Route15_Sign1::
	msgbox Route15_Sign1_Text, MSGBOX_SIGN
	return


Route15_Sign2::
	msgbox Route15_Sign2_Text, MSGBOX_SIGN
	return


Route15_Sign3::
	msgbox Route15_Sign3_Text, MSGBOX_SIGN
	return


R15_RockBlock::
	msgbox R15_RockBlock_Text, MSGBOX_NPC
	turnobject 2, DIR_NORTH
	return


R15_RR_Escapes::
	lock
	setvar VAR_ROUTE14_ROCKET_EVENT, 4
	turnobject 18, DIR_NORTH
	playse SE_PIN
	applymovement 18, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	applymovement 18, R15_GruntEscapes
	waitmovement 0
	removeobject 18
	removeobject 23
	release
	return


R15_GruntEscapes:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route15_Tr1_Birdkeeper::
	trainerbattle_single TRAINER_R15_TR1_BIRDKEEPER, R15Tr1_Intro, R15Tr1_Lose
	msgbox R15Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr2_RangerF::
	trainerbattle_single TRAINER_R15_TR2_RANGERF, R15Tr2_Intro, R15Tr2_Lose
	msgbox R15Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr3_RangerM::
	trainerbattle_single TRAINER_R15_TR3_RANGERM, R15Tr3_Intro, R15Tr3_Lose
	msgbox R15Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr4_Gentleman::
	trainerbattle_single TRAINER_R15_TR4_GENTLEMAN, R15Tr4_Intro, R15Tr4_Lose
	msgbox R15Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr5_Ninjaboy1::
	trainerbattle_single TRAINER_R15_TR5_NINJABOY1, R15Tr5_Intro, R15Tr5_Lose
	msgbox R15Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr6_Ninjaboy2::
	trainerbattle_single TRAINER_R15_TR6_NINJABOY2, R15Tr6_Intro, R15Tr6_Lose
	msgbox R15Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr7_Bugcatcher::
	trainerbattle_single TRAINER_R15_TR7_BUGCATCHER, R15Tr7_Intro, R15Tr7_Lose
	msgbox R15Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr8_Bugcatcher2::
	trainerbattle_single TRAINER_R15_TR8_BUGCATCHER2, R15Tr8_Intro, R15Tr8_Lose
	msgbox R15Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr9_Beauty::
	trainerbattle_single TRAINER_R15_TR9_BEAUTY, R15Tr9_Intro, R15Tr9_Lose
	msgbox R15Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr10_Fisher::
	trainerbattle_single TRAINER_R15_TR10_FISHER, R15Tr10_Intro, R15Tr10_Lose
	msgbox R15Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr13_Cooltrainer::
	trainerbattle_single TRAINER_R15_TR13_COOLTRAINER, R15Tr13_Intro, R15Tr13_Lose
	msgbox R15Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr14_Lass::
	trainerbattle_single TRAINER_R15_TR14_LASS, R15Tr14_Intro, R15Tr14_Lose
	msgbox R15Tr14_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr15_Scientist::
	trainerbattle_single TRAINER_R15_TR15_SCIENTIST, R15Tr15_Intro, R15Tr15_Lose
	msgbox R15Tr15_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr16_Aromalady::
	trainerbattle_single TRAINER_R15_TR16_AROMALADY, R15Tr16_Intro, R15Tr16_Lose
	msgbox R15Tr16_PostBattle, MSGBOX_AUTOCLOSE
	end


Route15_Tr17_Ninjaboy3::
	trainerbattle_single TRAINER_R15_TR17_NINJABOY3, R15Tr17_Intro, R15Tr17_Lose
	msgbox R15Tr17_PostBattle, MSGBOX_AUTOCLOSE
	end


R15_AceTrainerF::
	setvar VAR_TEMP_1, FEMALE
	goto R15_AceTrainerInteraction
	return


R15_AceTrainerM::
	setvar VAR_TEMP_1, MALE
	goto R15_AceTrainerInteraction
	return


R15_AceTrainerInteraction::
	checktrainerflag TRAINER_R15_ACETRAINER_M
	goto_if 1, R15_AceTrainerInteraction_1
	checktrainerflag TRAINER_R15_ACETRAINER_F
	goto_if 1, R15_AceTrainerInteraction_1
	checktrainerflag TRAINER_R15_TR1_BIRDKEEPER
	goto_if 1, R15_AceTrainerInteraction_4
R15_AceTrainerInteraction_3:
	goto R15_AceTrainerNotEligible
	return

R15_AceTrainerInteraction_1:
	goto R15_AceTrainerPostBattle
	return

R15_AceTrainerInteraction_2:
	goto R15_AceTrainerBattle
	return

R15_AceTrainerInteraction_4:
	checktrainerflag TRAINER_R15_TR2_RANGERF
	goto_if 1, R15_AceTrainerInteraction_6
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_6:
	checktrainerflag TRAINER_R15_TR3_RANGERM
	goto_if 1, R15_AceTrainerInteraction_8
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_8:
	checktrainerflag TRAINER_R15_TR4_GENTLEMAN
	goto_if 1, R15_AceTrainerInteraction_10
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_10:
	checktrainerflag TRAINER_R15_TR5_NINJABOY1
	goto_if 1, R15_AceTrainerInteraction_12
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_12:
	checktrainerflag TRAINER_R15_TR6_NINJABOY2
	goto_if 1, R15_AceTrainerInteraction_14
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_14:
	checktrainerflag TRAINER_R15_TR7_BUGCATCHER
	goto_if 1, R15_AceTrainerInteraction_16
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_16:
	checktrainerflag TRAINER_R15_TR8_BUGCATCHER2
	goto_if 1, R15_AceTrainerInteraction_18
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_18:
	checktrainerflag TRAINER_R15_TR9_BEAUTY
	goto_if 1, R15_AceTrainerInteraction_20
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_20:
	checktrainerflag TRAINER_R15_TR10_FISHER
	goto_if 1, R15_AceTrainerInteraction_22
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_22:
	checktrainerflag TRAINER_R15_TR13_COOLTRAINER
	goto_if 1, R15_AceTrainerInteraction_24
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_24:
	checktrainerflag TRAINER_R15_TR14_LASS
	goto_if 1, R15_AceTrainerInteraction_26
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_26:
	checktrainerflag TRAINER_R15_TR15_SCIENTIST
	goto_if 1, R15_AceTrainerInteraction_28
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_28:
	checktrainerflag TRAINER_R15_TR16_AROMALADY
	goto_if 1, R15_AceTrainerInteraction_30
	goto R15_AceTrainerInteraction_3

R15_AceTrainerInteraction_30:
	checktrainerflag TRAINER_R15_TR17_NINJABOY3
	goto_if 1, R15_AceTrainerInteraction_2
	goto R15_AceTrainerInteraction_3


R15_AceTrainerPostBattle::
	compare VAR_ROUTE14_ROCKET_EVENT, 7
	goto_if_eq R15_AceTrainerPostBattle_2
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerPostBattle_5
	msgbox R15_Ace_RewardFemale, MSGBOX_DEFAULT
R15_AceTrainerPostBattle_4:
	checkitemspace ITEM_ROCKY_HELMET
	compare VAR_RESULT, FALSE
	goto_if_eq R15_AceTrainerPostBattle_13
	giveitem ITEM_ROCKY_HELMET
	waitfanfare
	msgbox R15_Ace_ExplainReward
	setvar VAR_ROUTE14_ROCKET_EVENT, 7
	setvar VAR_0x8004, 25
	call RewardBP
	release
	end

R15_AceTrainerPostBattle_2:
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerPostBattle_9
	msgbox R15_Ace_PostBattleFemale, MSGBOX_NPC
R15_AceTrainerPostBattle_8:
	turnobject 27, DIR_WEST
	turnobject 28, DIR_WEST
	end

R15_AceTrainerPostBattle_5:
	msgbox R15_Ace_RewardMale, MSGBOX_DEFAULT
	goto R15_AceTrainerPostBattle_4

R15_AceTrainerPostBattle_9:
	msgbox R15_Ace_PostBattleMale, MSGBOX_NPC
	goto R15_AceTrainerPostBattle_8

R15_AceTrainerPostBattle_13:
	msgbox NotEnoughRoom, MSGBOX_NPC
	turnobject 27, DIR_WEST
	turnobject 28, DIR_WEST
	end


R15_AceTrainerBattle::
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_eq R15_AceTrainerBattle_2
R15_AceTrainerBattle_1:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq R15_AceTrainerBattle_5
	bufferstring STR_VAR_1, R15_AceTrainerBattle_Text_1
R15_AceTrainerBattle_4:
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattle_8
	msgbox R15GetMoreMonsFemale, MSGBOX_NPC
	return

R15_AceTrainerBattle_2:
	goto R15_AceTrainerBattleEnoughMons
	goto R15_AceTrainerBattle_1

R15_AceTrainerBattle_5:
	bufferstring STR_VAR_1, R15_AceTrainerBattle_Text_0
	goto R15_AceTrainerBattle_4

R15_AceTrainerBattle_8:
	msgbox R15GetMoreMonsMale, MSGBOX_NPC
	return


R15_AceTrainerBattleEnoughMons::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_8, R15_AceTrainerBattleEnoughMons_2
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_11
	msgbox R11_Ace_ReadyForBattleFemaleShort, MSGBOX_YESNO
R15_AceTrainerBattleEnoughMons_1:
	compare VAR_RESULT, TRUE
	goto_if_eq R15_AceTrainerBattleEnoughMons_6
R15_AceTrainerBattleEnoughMons_5:
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_15
	msgbox R15_Ace_DeclineBattleFemale, MSGBOX_NPC
R15_AceTrainerBattleEnoughMons_14:
	turnobject 27, DIR_WEST
	turnobject 28, DIR_WEST
	end

R15_AceTrainerBattleEnoughMons_2:
	setflag FLAG_TEMP_8
	compare VAR_TEMP_1, MALE
	goto_if_eq R15_AceTrainerBattleEnoughMons_8
	msgbox R11_Ace_ReadyForBattleFemale, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_6:
	msgbox R15_Ace_BeginBattle, MSGBOX_DEFAULT
	trainerbattle_two_trainers TRAINER_R15_ACETRAINER_M, R15_AceM_Lose, TRAINER_R15_ACETRAINER_F, R15_AceF_Lose
	goto R15_AceTrainerPostBattle
	goto R15_AceTrainerBattleEnoughMons_5

R15_AceTrainerBattleEnoughMons_8:
	msgbox R11_Ace_ReadyForBattleMale, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_11:
	msgbox R11_Ace_ReadyForBattleMaleShort, MSGBOX_YESNO
	goto R15_AceTrainerBattleEnoughMons_1

R15_AceTrainerBattleEnoughMons_15:
	msgbox R15_Ace_DeclineBattleMale, MSGBOX_NPC
	goto R15_AceTrainerBattleEnoughMons_14


R15_AceTrainerNotEligible::
	compare VAR_TEMP_1, FEMALE
	goto_if_eq R15_AceTrainerNotEligible_2
	msgbox R15DefeatMoreTrainersMale, MSGBOX_NPC
R15_AceTrainerNotEligible_1:
	turnobject 27, DIR_WEST
	turnobject 28, DIR_WEST
	end

R15_AceTrainerNotEligible_2:
	msgbox R15DefeatMoreTrainersFemale, MSGBOX_NPC
	goto R15_AceTrainerNotEligible_1


R15_Acerola_Text_0:
	.string "mister$"

R15_Acerola_Text_1:
	.string "miss$"

R15_AceTrainerBattle_Text_0:
	.string "lad$"

R15_AceTrainerBattle_Text_1:
	.string "lass$"

AcerolaThatWay::
	.string "If you're looking for the guy in black\n"
	.string "clothes, I saw him heading south\l"
	.string "towards Amberock Town.$"

AcerolaShame::
	.string "You must be looking for the guy\n"
	.string "dressed in black, yes?\p"
	.string "I saw him running south towards\n"
	.string "Amberock Town.$"

AcerolaYouMustBeBusy::
	.string "Oh, really? The person behind you\n"
	.string "seems to disagree.$"

R15_Acerola_Text::
	.string "Hiya, {STR_VAR_1}!\n"
	.string "Tell me, are you busy right now?$"

Route15_Sign1_Text::
	.string "Move Reminder's House$"

Route15_Sign2_Text::
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town\l$"

Route15_Sign3_Text::
	.string "Route 15\n"
	.string "{UP_ARROW} Fishing Village\l"
	.string "{DOWN_ARROW} Amberock Town\l"
	.string "{RIGHT_ARROW} Berry Fields$"

R15_RockBlock_Text::
	.string "As a Pokémon Ranger, it is my duty to\n"
	.string "clear this path as fast as possible!$"

R15Tr1_Intro::
	.string "My Pokémon have so much room to\n"
	.string "move here.\l"
	.string "There's nowhere your Pokémon can hide!$"

R15Tr1_Lose::
	.string "We got too ambitious…$"

R15Tr1_PostBattle::
	.string "My Pokémon have been scouting the\n"
	.string "nearby trees.\p"
	.string "They seem to be drawn towards\n"
	.string "something in the southeast.$"

R15Tr2_Intro::
	.string "We haven't had any real challenge\n"
	.string "in a while.\l"
	.string "Let's see if you can provide one!$"

R15Tr2_Lose::
	.string "Yep, I'd say you were adequate…$"

R15Tr2_PostBattle::
	.string "Us Pokémon Rangers keep routes\n"
	.string "safe from harm.\p"
	.string "That's why we must keep our Pokémon\n"
	.string "alert and prepared for anything.$"

R15Tr3_Intro::
	.string "You know it, I know it,\n"
	.string "there's nothing more to be said.\p"
	.string "Let's go!$"

R15Tr3_Lose::
	.string "Guh…$"

R15Tr3_PostBattle::
	.string "There's no need for words.\p"
	.string "The way you carry yourself in battle\n"
	.string "says more than any words ever could.$"

R15Tr4_Intro::
	.string "You there!\n"
	.string "How about a friendly competition?$"

R15Tr4_Lose::
	.string "Good show!$"

R15Tr4_PostBattle::
	.string "There's nothing more invigorating than\n"
	.string "a friendly competition!$"

R15Tr5_Intro::
	.string "Go ninja go!$"

R15Tr5_Lose::
	.string "My Pokémon were supposed to be the\n"
	.string "world's most fearsome fighting team!$"

R15Tr5_PostBattle::
	.string "Gimme a break.$"

R15Tr6_Intro::
	.string "I crush anyone who stands against me!$"

R15Tr6_Lose::
	.string "Um, forget what I said before\n"
	.string "the battle…$"

R15Tr6_PostBattle::
	.string "Can we just pretend we never met?$"

R15Tr7_Intro::
	.string "Let me show you just how awesome bugs\n"
	.string "can be!$"

R15Tr7_Lose::
	.string "This loss is entirely my and not\n"
	.string "my bugs' fault.$"

R15Tr7_PostBattle::
	.string "Bugs are still cool!\n"
	.string "Even if I'm not…$"

R15Tr8_Intro::
	.string "$"

R15Tr8_Lose::
	.string "$"

R15Tr8_PostBattle::
	.string "$"

R15Tr9_Intro::
	.string "Think your Pokémon can outshine mine?$"

R15Tr9_Lose::
	.string "Outshone and outmaneuvered…$"

R15Tr9_PostBattle::
	.string "Your Pokémon shine like no other.\n"
	.string "Never stop cherishing them.$"

R15Tr10_Intro::
	.string "I'm having no luck when it comes to\n"
	.string "fishing.\p"
	.string "Maybe I'll have more luck in a Pokémon\n"
	.string "battle!$"

R15Tr10_Lose::
	.string "Still no luck…$"

R15Tr10_PostBattle::
	.string "I wanted to try fishing here but\n"
	.string "this cliff is so high that my lure\l"
	.string "doesn't even reach the ocean.$"

R15Tr13_Intro::
	.string "You look like a strong trainer.\n"
	.string "Are you?$"

R15Tr13_Lose::
	.string "I have been outmatched.\n"
	.string "Well fought.$"

R15Tr13_PostBattle::
	.string "Sometimes you can guess how strong\n"
	.string "a trainer is just by looking at them.\p"
	.string "I could tell that you were probably\n"
	.string "stronger than me, but I couldn't just\l"
	.string "back down from the challenge.$"

R15Tr14_Intro::
	.string "You seem like you'd enjoy a relaxing\n"
	.string "Pokémon battle!$"

R15Tr14_Lose::
	.string "Even if I lost, I still had fun!$"

R15Tr14_PostBattle::
	.string "I saw some creepy looking people come\n"
	.string "through this way recently.\l"
	.string "They were headed south.$"

R15Tr15_Intro::
	.string "You are ruining my research!$"

R15Tr15_Lose::
	.string "My samples…\n"
	.string "in shambles…$"

R15Tr15_PostBattle::
	.string "I'm out here collecting water samples\n"
	.string "for analysis.\p"
	.string "I'm hoping to find a connection\n"
	.string "between water quality and the type of\l"
	.string "Pokémon habitat it attracts.$"

R15Tr16_Intro::
	.string "Please, allow me to evaluate if you\n"
	.string "have raised your Pokémon properly.$"

R15Tr16_Lose::
	.string "Yes, they are growing properly.$"

R15Tr16_PostBattle::
	.string "Try raising Pokémon with more\n"
	.string "attention to their character traits.$"

R15Tr17_Intro::
	.string "I do my triathlon training with Pokémon,\n"
	.string "so I'm pretty confident about my speed.$"

R15Tr17_Lose::
	.string "I need to get more practices in,\n"
	.string "I guess.$"

R15Tr17_PostBattle::
	.string "Training is meaningful only if you\n"
	.string "keep it up regularly.\p"
	.string "Okay! I'll resume my training!\n"
	.string "Tomorrow!$"

R15_Ace_PostBattleMale::
	.string "That was a great battle.\p"
	.string "Keep growing and I bet you can even\n"
	.string "take on the Pokémon League!$"

R15_Ace_PostBattleFemale::
	.string "I can't believe we lost even though\n"
	.string "it was a two against one battle.$"

R15_Ace_ExplainReward::
	.string "The Rocky Helmet causes any Pokémon\n"
	.string "that comes in contact with the Pokémon\l"
	.string "wearing it to take damage.\p"
	.string "It's especially great if the enemy is\n"
	.string "using multi-hit moves or the Pokémon\l"
	.string "wearing the helmet is especially bulky.\p"
	.string "In addition to that,\n"
	.string "I want you to have these.$"

R15_Ace_RewardMale::
	.string "That was a great battle!\p"
	.string "Despite going against two opponents,\n"
	.string "you still managed to secure a victory.\p"
	.string "Such great skill has to be rewarded!$"

R15_Ace_RewardFemale::
	.string "I'm shocked!\n"
	.string "I thought our combos were unbeatable!\p"
	.string "This feat of strength will not go\n"
	.string "unrewarded.\l"
	.string "Here, have this.$"

R15GetMoreMonsMale::
	.string "I've seen you battling the other\n"
	.string "trainers around here and there's\l"
	.string "no doubt you're strong,\l"
	.string "but we only fight in pairs.\p"
	.string "You'll need to have at least 2 Pokémon\n"
	.string "that are ready for battle.$"

R15GetMoreMonsFemale::
	.string "You seem like a nice {STR_VAR_1} and you're\n"
	.string "more than capable of defeating every\l"
	.string "other trainer on this route,\l"
	.string "but we always fight in pairs.\p"
	.string "It would be too unfair if we fought\n"
	.string "you while you only had 1 Pokémon\l"
	.string "that was ready for battle.$"

R11_Ace_ReadyForBattleMale::
	.string "I've seen the ease with which you\n"
	.string "defeated other trainers around here.\p"
	.string "Would you care to challenge us?\p"
	.string "This will be a double battle so you\n"
	.string "need at least two healthy Pokémon.$"

R11_Ace_ReadyForBattleFemale::
	.string "I saw the way you took out every\n"
	.string "other trainer in this area.\p"
	.string "You seem pretty strong.\p"
	.string "Would you like to try your hand at\n"
	.string "a double battle?\p"
	.string "I warn you, our teamwork is\n"
	.string "second to none.$"

R11_Ace_ReadyForBattleMaleShort::
	.string "Have you changed your mind?$"

R11_Ace_ReadyForBattleFemaleShort::
	.string "You're back!\p"
	.string "That must mean you've changed your\n"
	.string "mind, correct?$"

R15_Ace_BeginBattle::
	.string "Okay then, let's begin!$"

R15_AceM_Lose::
	.string "Even against two opponents, you\n"
	.string "still kept your cool…\l"
	.string "Amazing!$"

R15_AceF_Lose::
	.string "Even with our combined strength,\n"
	.string "we lost…$"

R15_Ace_DeclineBattleMale::
	.string "Well, if you change your mind,\n"
	.string "you can find us here.$"

R15_Ace_DeclineBattleFemale::
	.string "Oh…\p"
	.string "Well, do let us know if you change\n"
	.string "your mind, okay?$"

R15DefeatMoreTrainersFemale::
	.string "I'm sorry, but we don't really care\n"
	.string "to fight against anyone who hasn't\l"
	.string "proven themself yet.\p"
	.string "Try defeating more trainers first.$"

R15DefeatMoreTrainersMale::
	.string "You want a REAL battle?\p"
	.string "Prove that you're not a weakling first\n"
	.string "and only then come and talk to us.$"
