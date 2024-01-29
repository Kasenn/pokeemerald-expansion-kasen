PokeRanch_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetVolkner
	.byte 0


SetVolkner::
	setflag FLAG_RANCH_EVENT_NPC
	setflag FLAG_MAREEP_NOT_RETURNED
	goto_if_unset FLAG_RANCH_HELPED, SetVolkner_2
SetVolkner_1:
	compare VAR_POKERANCH, 0
	goto_if_eq SetVolkner_4
	return

SetVolkner_2:
	setflag FLAG_HIDE_RANCH_OWNER
	goto SetVolkner_1

SetVolkner_4:
	setflag FLAG_HIDE_VOLKNER_2
	return


PokeRanch_Mareep::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox PokeRanch_Mareep_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


PokeRanch_Lass::
	lock
	faceplayer
	msgbox PokeRanch_Lass_Text_0, MSGBOX_DEFAULT
	waitmessage
	release
	end


PokeRanch_Owner::
	lock
	msgbox PokeRanch_Owner_Text_0, MSGBOX_DEFAULT
	waitmessage
	release
	end


PokeRanch_Volkner::
	lock
	faceplayer
	setflag FLAG_VOLKNER_MET
	goto_if_set FLAG_RANCH_HELPED, PokeRanch_Volkner_1
	compare VAR_POKERANCH, 0
	goto_if_eq PokeRanch_Volkner_8
PokeRanch_Volkner_7:
	compare VAR_POKERANCH, 1
	goto_if_eq PokeRanch_Volkner_13
	return

PokeRanch_Volkner_1:
	msgbox PokeRanch_VolknerReward, MSGBOX_DEFAULT
	giveitem ITEM_HM01
	waitse
	msgbox Ranch_ExplainCut
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PokeRanch_Volkner_5
PokeRanch_Volkner_4:
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PokeRanch_Volkner_11
PokeRanch_Volkner_10:
	compare VAR_FACING, DIR_WEST
	goto_if_eq PokeRanch_Volkner_22
PokeRanch_Volkner_21:
	compare VAR_FACING, DIR_EAST
	goto_if_eq PokeRanch_Volkner_30
PokeRanch_Volkner_29:
	waitmovement 0
	setflag FLAG_HIDE_VOLKNER_1
	setflag FLAG_RECEIVED_HM_CUT
	removeobject 10
	delay 20
	release
	end

PokeRanch_Volkner_5:
	applymovement 10, PokeRanch_VolknerExit2FacingSWE
	goto PokeRanch_Volkner_4

PokeRanch_Volkner_8:
	msgbox PokeRanch_VolknerInitialIntro, MSGBOX_DEFAULT
	waitmessage
	closemessage
	playse SE_PIN
	applymovement 10, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox PokeRanch_VolknerIntroContinued, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_Volkner_16
	goto_if_set FLAG_JASMINE_TALKED_TO_FIRST, PokeRanch_Volkner_17
	msgbox PokeRanch_JasmineNotTalkedTo, MSGBOX_DEFAULT
	waitmessage
	closemessage
PokeRanch_Volkner_15:
	msgbox PokeRanch_VolknerSecondIssue, MSGBOX_DEFAULT
	waitmessage
	closemessage
	setvar VAR_POKERANCH, 1
	setflag FLAG_VOLKNER_TALKED_TO_FIRST
	goto PokeRanch_VolknerMoveAfterIntro
	goto PokeRanch_Volkner_7

PokeRanch_Volkner_11:
	applymovement 10, PokeRanch_VolknerExit2FacingNorth
	goto PokeRanch_Volkner_10

PokeRanch_Volkner_13:
	msgbox PokeRanch_VolknerGossip, MSGBOX_DEFAULT
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_Volkner_26
PokeRanch_Volkner_24:
	waitmessage
	closemessage
	release
	end

PokeRanch_Volkner_16:
	msgbox PokeRanch_JasmineAlreadyHelped, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto PokeRanch_Volkner_15

PokeRanch_Volkner_17:
	msgbox PokeRanch_JasmineTalkedToFirst, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto PokeRanch_Volkner_15

PokeRanch_Volkner_22:
	applymovement 10, PokeRanch_VolknerExit2FacingSWE
	goto PokeRanch_Volkner_21

PokeRanch_Volkner_25:
	msgbox Volkner2_JasmineHelped, MSGBOX_DEFAULT
	setflag FLAG_VOLKNER_INFORMED
	goto PokeRanch_Volkner_24

PokeRanch_Volkner_26:
	goto_if_unset FLAG_VOLKNER_INFORMED, PokeRanch_Volkner_25
	goto PokeRanch_Volkner_24

PokeRanch_Volkner_30:
	applymovement 10, PokeRanch_VolknerExit2FacingSWE
	goto PokeRanch_Volkner_29


PokeRanch_VolknerExit2FacingNorth:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PokeRanch_VolknerExit2FacingSWE:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PokeRanch_VolknerMoveAfterIntro::
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_2
PokeRanch_VolknerMoveAfterIntro_1:
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_5
PokeRanch_VolknerMoveAfterIntro_4:
	compare VAR_FACING, DIR_WEST
	goto_if_eq PokeRanch_VolknerMoveAfterIntro_8
PokeRanch_VolknerMoveAfterIntro_7:
	waitmovement 0
	removeobject 10
	setflag FLAG_HIDE_VOLKNER_1
	clearflag FLAG_HIDE_VOLKNER_2
	delay 40
	release
	end

PokeRanch_VolknerMoveAfterIntro_2:
	applymovement 10, PokeRanch_VolknerExitFacingSouth
	goto PokeRanch_VolknerMoveAfterIntro_1

PokeRanch_VolknerMoveAfterIntro_5:
	applymovement 10, PokeRanch_VolknerExitFacingNorth
	goto PokeRanch_VolknerMoveAfterIntro_4

PokeRanch_VolknerMoveAfterIntro_8:
	applymovement 10, PokeRanch_VolknerExitFacingSouth
	goto PokeRanch_VolknerMoveAfterIntro_7


PokeRanch_VolknerExitFacingSouth:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PokeRanch_VolknerExitFacingNorth:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PokeRanch_MareepTrigger::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox PokeRanch_Mareep_Text_0, MSGBOX_DEFAULT
	waitmoncry
	msgbox PokeRanch_MareepTrigger_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	clearflag FLAG_RANCH_EVENT_NPC
	hideobjectat 19, MAP_POKE_RANCH
	delay 40
	msgbox PokeRanch_MareepTrigger_Text_1, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement 0
	delay 90
	applymovement OBJ_EVENT_ID_PLAYER, RanchMovePlayer
	waitmovement 0
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	setobjectxy 19, 44, 8
	showobjectat 19, MAP_POKE_RANCH
	delay 50
	goto_if_set FLAG_UNUSED_WW_ENDEVENT, PokeRanch_MareepTrigger_2
	msgbox RanchGrunt2, MSGBOX_DEFAULT
	waitmessage
	closemessage
PokeRanch_MareepTrigger_1:
	delay 40
	fadeoutbgm 1
	msgbox PokeRanch_MareepTrigger_Text_2, MSGBOX_DEFAULT
	applymovement 13, Common_Movement_QuestionMark
	delay 10
	applymovement 16, Common_Movement_QuestionMark
	applymovement 14, Common_Movement_QuestionMark
	delay 20
	applymovement 12, TurnGrunt12
	delay 5
	applymovement 13, TurnGrunt13
	delay 5
	applymovement 14, TurnGrunt14
	applymovement 15, TurnGrunt15
	delay 5
	applymovement 16, TurnGrunt16
	delay 5
	applymovement 17, TurnGrunt17
	waitmovement 0
	delay 20
	waitmessage
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	applymovement 18, VolknerArrive
	applymovement 19, JasmineArrive
	turnobject 12, DIR_WEST
	turnobject 14, DIR_WEST
	turnobject 16, DIR_WEST
	turnobject 13, DIR_EAST
	turnobject 15, DIR_EAST
	turnobject 17, DIR_EAST
	waitmovement 18
	waitmovement 19
	goto_if_set FLAG_JASMINE_MET, PokeRanch_MareepTrigger_6
	msgbox VolknerRant2, MSGBOX_DEFAULT
PokeRanch_MareepTrigger_5:
	waitmessage
	closemessage
	applymovement 12, MoveGrunt12
	applymovement 13, MoveGrunt13
	applymovement 14, MoveGrunt14
	applymovement 15, MoveGrunt15
	applymovement 16, MoveGrunt16
	applymovement 17, MoveGrunt17
	waitmovement 12
	delay 20
	trainerbattle_no_intro TRAINER_RICKY_4, PokeRanchRocket1Defeat
	goto Ranch_FirstRocketWon
	end

PokeRanch_MareepTrigger_2:
	msgbox RanchGrunt1, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto PokeRanch_MareepTrigger_1

PokeRanch_MareepTrigger_6:
	msgbox VolknerRant, MSGBOX_DEFAULT
	goto PokeRanch_MareepTrigger_5


TurnGrunt12:
	walk_in_place_left
	walk_in_place_up
	walk_in_place_down
	walk_in_place_right
	step_end

TurnGrunt13:
	walk_in_place_right
	walk_in_place_down
	walk_in_place_up
	walk_in_place_left
	step_end

TurnGrunt14:
	walk_in_place_left
	walk_in_place_right
	walk_in_place_up
	walk_in_place_down
	step_end

TurnGrunt15:
	walk_in_place_down
	walk_in_place_left
	walk_in_place_right
	walk_in_place_up
	step_end

TurnGrunt16:
	walk_in_place_right
	walk_in_place_left
	walk_in_place_down
	walk_in_place_up
	step_end

TurnGrunt17:
	walk_in_place_down
	walk_in_place_up
	walk_in_place_left
	walk_in_place_right
	step_end

Ranch_FirstRocketWon::
	delay 20
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	delay 20
	msgbox RanchRocket2Challenge, MSGBOX_DEFAULT
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_RICKY_5, PokeRanchRocket2Defeat
	goto PokeRanch_SpecialBattleWon
	end


PokeRanch_SpecialBattleWon::
	msgbox Ranch_RocketEscape, MSGBOX_DEFAULT
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	fadenewbgm MUS_MUTED
	removeobject 12
	removeobject 14
	removeobject 15
	removeobject 16
	removeobject 17
	setobjectxy 18, 35, 6
	setobjectxy 19, 36, 6
	turnobject 18, DIR_SOUTH
	turnobject 19, DIR_SOUTH
	turnobject 13, DIR_NORTH
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 40
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 40
	fadenewbgm MUS_OLDALE
	savebgm MUS_OLDALE
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_SpecialBattleWon_2
	msgbox Ranch_RocketEscapeFail2, MSGBOX_DEFAULT
PokeRanch_SpecialBattleWon_1:
	waitmessage
	closemessage
	applymovement 18, AfterBattleVolkner1
	waitmovement 0
	applymovement 13, AfterBattleRocket1
	waitmovement 0
	applymovement 18, AfterBattleVolkner2
	applymovement 13, AfterBattleRocket2
	waitmovement 0
	delay 10
	applymovement 19, AfterBattleJasmine1
	waitmovement 0
	delay 10
	goto_if_set FLAG_JASMINE_MET, PokeRanch_SpecialBattleWon_6
	msgbox Ranch_JasmineHeadsBack2, MSGBOX_DEFAULT
PokeRanch_SpecialBattleWon_5:
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 18
	removeobject 19
	removeobject 13
	removeobject 7
	setflag FLAG_HIDE_VOLKNER_2
	setflag FLAG_RANCH_EVENT_NPC
	setflag FLAG_VOLKNER_HELPED
	clearflag FLAG_MAREEP_NOT_RETURNED
	goto_if_set FLAG_JASMINE_HELPED, PokeRanch_SpecialBattleWon_10
PokeRanch_SpecialBattleWon_9:
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 40
	release
	end

PokeRanch_SpecialBattleWon_2:
	msgbox Ranch_RocketEscapeFail, MSGBOX_DEFAULT
	goto PokeRanch_SpecialBattleWon_1

PokeRanch_SpecialBattleWon_6:
	msgbox Ranch_JasmineHeadsBack, MSGBOX_DEFAULT
	goto PokeRanch_SpecialBattleWon_5

PokeRanch_SpecialBattleWon_10:
	call Ranch_QuestFlagsComplete
	goto PokeRanch_SpecialBattleWon_9


Ranch_QuestFlagsComplete::
	setflag FLAG_RANCH_HELPED
	clearflag FLAG_HIDE_RANCH_OWNER
	clearflag FLAG_HIDE_VOLKNER_1
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	return


AfterBattleVolkner1:
	walk_up
	walk_in_place_down
	step_end

AfterBattleRocket1:
	walk_left
	walk_up
	step_end

AfterBattleVolkner2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

AfterBattleRocket2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

AfterBattleJasmine1:
	walk_down
	step_end

MoveGrunt12:
	walk_down
	walk_down
	walk_down
	walk_in_place_right
	step_end

MoveGrunt13:
	walk_down
	walk_down
	step_end

MoveGrunt14:
	walk_left
	walk_left
	step_end

MoveGrunt15:
	walk_right
	walk_right
	step_end

MoveGrunt16:
	walk_left
	step_end

MoveGrunt17:
	walk_right
	step_end

VolknerArrive:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

JasmineArrive:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_left
	step_end

RanchMovePlayer:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

PokeRanch_Mareep_Text_0:
	.string "Baa!$"

PokeRanch_Lass_Text_0:
	.string "Mareep are so cute!\nJust being near one is causing all\lmy hair to stand up.$"

PokeRanch_Owner_Text_0:
	.string "Oh, what am I to do…$"

PokeRanch_MareepTrigger_Text_0:
	.string "This must be the missing Mareep…$"

PokeRanch_MareepTrigger_Text_1:
	.string "{COLOR RED}{SHADOW LIGHT_RED}WE GOT YOU NOW!$"

PokeRanch_MareepTrigger_Text_2:
	.string "NOT SO FAST!!$"

PokeRanch_VolknerReward::
	.string "Volkner: You've been a great help\n"
	.string "around the farm.\p"
	.string "Honestly I'm not sure if Jasmine\n"
	.string "and I could've even dealt with\l"
	.string "all the problems without your help.\p"
	.string "To show my gratitude,\n"
	.string "I want you to have this.$"

Volkner2_JasmineHelped::
	.string "You've already helped Jasmine\n"
	.string "with her task?\l"
	.string "That's great!\p"
	.string "That only leaves us with the case\n"
	.string "of the missing Mareep.$"

Ranch_ExplainCut::
	.string "Volkner: That's a Hidden Machine,\n"
	.string "or HM for short.\l"
	.string "This specific HM contains the move Cut.\p"
	.string "Cut allows your Pokémon to get rid of\n"
	.string "certain pesky trees blocking your path.\p"
	.string "Do note that HM moves can be hard to\n"
	.string "get rid of and may require the help\l"
	.string "of a move deleter.\p"
	.string "Also, to use the move in the field,\n"
	.string "you must first obtain my gym badge.\p"
	.string "If you believe yourself to be ready,\n"
	.string "come take on my gym challenge!$"

PokeRanch_VolknerInitialIntro::
	.string "Sorry, but we've got a bit of\n"
	.string "a situation going on here.\p"
	.string "We're going to have to ask\n"
	.string "the public to leave…$"

PokeRanch_VolknerIntroContinued::
	.string "Oh but wait,\n"
	.string "you seem to be a Pokémon trainer.\p"
	.string "In that case,\n"
	.string "maybe you could help with the case?\p"
	.string "Volkner: My name is Volkner.\p"
	.string "I'm the gym leader of Aldeleaf\n"
	.string "City but every now and then I get\l"
	.string "called to help the locals with all\l"
	.string "sorts of different problems.$"

PokeRanch_JasmineAlreadyHelped::
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "First…\p"
	.string "Huh?\p"
	.string "You already talked to Jasmine\n"
	.string "AND helped her out?\l"
	.string "Wow, talk about a go-getter!$"

PokeRanch_JasmineTalkedToFirst::
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "I noticed you went inside the barn\n"
	.string "earlier so you probably already\l"
	.string "talked to Jasmine?\p"
	.string "Great, so I probably don't have\n"
	.string "to explain that part to you.\p$"

PokeRanch_JasmineNotTalkedTo::
	.string "We're dealing with two\n"
	.string "big issues here.\p"
	.string "First, some of the Mareep around\n"
	.string "the ranch have fallen ill.\p"
	.string "As much as I'd like to help,\n"
	.string "I don't really have much experience\l"
	.string "dealing with cases like this.\p"
	.string "As such, I called over a friend\n"
	.string "who could probably help.\p"
	.string "To know more,\n"
	.string "go look for her in the barn.$"

PokeRanch_VolknerSecondIssue::
	.string "The other issue we are dealing with\n"
	.string "is a case of missing Mareep.\p"
	.string "The ranch owner noticed earlier how\n"
	.string "one of his Mareep had gone missing.\p"
	.string "The Mareep are not known for wandering\n"
	.string "around so something must've\l"
	.string "happened to it.\p"
	.string "I'm going to look around the ranch\n"
	.string "for clues but any help you can offer\l"
	.string "would be greatly appreciated.$"

PokeRanch_VolknerGossip::
	.string "There must be some clues here…$"

PokeRanchRocket1Defeat::
	.string "Not again…$"

PokeRanchRocket2Defeat::
	.string "We lost!?$"

Ranch_RocketEscape::
	.string "Rocket Grunt 6: These guys are\n"
	.string "way too strong!\p"
	.string "Rocket Grunt 1: This calls for\n"
	.string "a tactical retreat!\l"
	.string "They can't catch all of us!$"

Ranch_RocketEscapeFail::
	.string "Rocket Grunt 1: Drats…\p"
	.string "Volkner: The others may have escaped\n"
	.string "but at least we caught someone who\l"
	.string "was seemingly calling the shots here.\p"
	.string "I'll head out and turn this guy in\n"
	.string "to the authority.\l"
	.string "Maybe we can learn more about\l"
	.string "Team Rocket's plans.\p"
	.string "Come see me later in front\n"
	.string "of the ranch.$"

Ranch_RocketEscapeFail2::
	.string "Rocket Grunt 1: Drats…\p"
	.string "Volkner: The others may have escaped\n"
	.string "but at least we caught someone who\l"
	.string "was seemingly calling the shots here.\p"
	.string "I'll head out and turn this guy in\n"
	.string "to the authority.\l"
	.string "Maybe we can learn more about\l"
	.string "Team Rocket's plans.\p"
	.string "Come see me later in front\n"
	.string "of the ranch.\p"
	.string "It'll probably take me a while\n"
	.string "to escort this guy.\l"
	.string "In the meanwhile, your help at the\l"
	.string "barn would be greatly appreciated.$"

Ranch_JasmineHeadsBack::
	.string "Jasmine: I need to head back and\n"
	.string "make sure the situation at the barn\l"
	.string "is under control…\p"
	.string "Um, if you don't mind,\n"
	.string "I'd like to take that little guy\l"
	.string "hiding behind you back to the barn…$"

Ranch_JasmineHeadsBack2::
	.string "???: Um, if you don't mind,\n"
	.string "I'd like to take that little guy\l"
	.string "hiding behind you back to the barn…$"

RanchRocket2Challenge::
	.string "Don't think you're out\n"
	.string "of the woods yet!$"

VolknerRant2::
	.string "???: Looks like we arrived\n"
	.string "just in time…\p"
	.string "Volkner: I saw some of these guys\n"
	.string "skulking in the woods so I knew\l"
	.string "there was trouble about.\p"
	.string "You're not taking anybody's\n"
	.string "Pokémon today!\p"
	.string "Rocket Grunt 3: There's two\n"
	.string "gym leaders here!?\p"
	.string "Rocket Grunt 5: We're done for!\p"
	.string "Rocket Grunt 1: CALM YOURSELF!\n"
	.string "We still outnumber them two-to-one!\p"
	.string "Let's do this!$"

VolknerRant::
	.string "Jasmine: Looks like we arrived\n"
	.string "just in time…\p"
	.string "Volkner: I saw some of these guys\n"
	.string "skulking in the woods so I knew\l"
	.string "there was trouble about.\p"
	.string "You're not taking anybody's\n"
	.string "Pokémon today!\p"
	.string "Rocket Grunt 3: There's two\n"
	.string "gym leaders here!?\p"
	.string "Rocket Grunt 5: We're done for!\p"
	.string "Rocket Grunt 1: CALM YOURSELF!\n"
	.string "We still outnumber them two-to-one!\p"
	.string "Let's do this!$"

RanchGrunt1::
	.string "Rocket Grunt 1: Well well well,\n"
	.string "looks like our trap worked perfectly!\p"
	.string "Remember me from Windy Woods?\n"
	.string "This time I got some backup!\p"
	.string "You better hand over all your Pokémon\n"
	.string "if you want to leave this place alive!$"

RanchGrunt2::
	.string "Rocket Grunt 1: Well well well,\n"
	.string "looks like our trap worked perfectly!\p"
	.string "You better hand over all your Pokémon\n"
	.string "if you want to leave this place alive!$"
