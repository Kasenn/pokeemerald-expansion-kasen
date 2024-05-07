WipCity1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WipCity1_Visited
	.byte 0


WipCity1_Visited::
	setflag FLAG_VISITED_WIP_CITY1
	setflag FLAG_HIDE_AMPHAROS
	end


AldeleafCity_BirdTrainer::
	msgbox AldeleafCity_BirdTrainer_Text, MSGBOX_NPC
	end


AldeleafCity_OldMan::
	lockall
	msgbox AldeleafCity_OldMan_Text, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


AldeleafCity_OldWoman::
	msgbox AldeleafCity_OldWoman_Text, MSGBOX_NPC
	end


AldeleafCity_Runner::
	msgbox AldeleafCity_Runner_Text, MSGBOX_NPC
	end


AldeleafCity_Lass::
	msgbox AldeleafCity_Lass_Text, MSGBOX_NPC
	end


AldeleafCity_Boy::
	msgbox AldeleafCity_Boy_Text, MSGBOX_NPC
	end


AldeleafCity_Maniac::
	lockall
	faceplayer
	checktrainerflag TRAINER_VITO
	goto_if 0, AldeleafCity_Maniac_1
	goto_if_set FLAG_SHELL_BELL_RECEIVED, AldeleafCity_Maniac_8
	checkitemspace ITEM_SHELL_BELL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq AldeleafCity_Maniac_14
	msgbox NotRoomForShellBell, MSGBOX_NPC
	end

AldeleafCity_Maniac_1:
	msgbox AldeleafCity_Maniac_Text, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq AldeleafCity_Maniac_5
	msgbox AldeleafCity_Maniac_DeclineBattle, MSGBOX_NPC
	end

AldeleafCity_Maniac_4:
	lockall
	faceplayer
	msgbox AldeleafCity_Maniac_Continues, MSGBOX_DEFAULT
	checkitemspace ITEM_SHELL_BELL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq AldeleafCity_Maniac_11
	msgbox NotRoomForShellBell, MSGBOX_NPC
	end

AldeleafCity_Maniac_5:
	trainerbattle_no_intro TRAINER_VITO, AldeleafCity_Maniac_Defeated
	goto AldeleafCity_Maniac_4

AldeleafCity_Maniac_8:
	msgbox AldeleafCity_Maniac_PostBattle, MSGBOX_NPC
	end

AldeleafCity_Maniac_11:
	giveitem ITEM_SHELL_BELL, 1
	setflag FLAG_SHELL_BELL_RECEIVED
	msgbox ExplainShellBell, MSGBOX_NPC
	end

AldeleafCity_Maniac_14:
	msgbox AldeleafCity_Maniac_Continues, MSGBOX_DEFAULT
	giveitem ITEM_SHELL_BELL, 1
	setflag FLAG_SHELL_BELL_RECEIVED
	msgbox ExplainShellBell, MSGBOX_NPC
	end


AldeleafCity_Child1::
	msgbox AldeleafCity_Child1_Text, MSGBOX_NPC
	turnobject 10, DIR_EAST
	end


AldeleafCity_Child2::
	msgbox AldeleafCity_Child2_Text, MSGBOX_NPC
	turnobject 11, DIR_WEST
	end


AldeleafCity_LittleGirl::
	msgbox AldeleafCity_LittleGirl_Text, MSGBOX_NPC
	end


AldeleafCity_Woman::
	msgbox AldeleafCity_Woman_Text, MSGBOX_NPC
	end


AldeleafCity_Youngster::
	msgbox AldeleafCity_Youngster_Text, MSGBOX_NPC
	end


AldeleafCity_Hidden::
	goto_if_unset FLAG_ALDELEAF_QUICK_BALL, AldeleafCity_Hidden_2
	msgbox AldeleafCity_Hidden_Text2, MSGBOX_NPC
	end

AldeleafCity_Hidden_2:
	msgbox AldeleafCity_Hidden_Text, MSGBOX_NPC
	checkitemspace ITEM_QUICK_BALL, 1
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafCity_Hidden_4
	giveitem ITEM_QUICK_BALL, 1
	setflag FLAG_ALDELEAF_QUICK_BALL
	waitmessage
	closemessage
	end

AldeleafCity_Hidden_4:
	msgbox NotRoomQuickBall, MSGBOX_NPC
	end


AldeleafCity_KeyMan::
	lockall
	msgbox AldeleafCity_KeyMan_Text, MSGBOX_DEFAULT
	waitmessage
	closemessage
	checkitem ITEM_LOST_KEY
	compare VAR_RESULT, TRUE
	goto_if_eq AldeleafCity_KeyMan_2
AldeleafCity_KeyMan_1:
	release
	end

AldeleafCity_KeyMan_2:
	applymovement 16, Common_Movement_ExclamationMark
	playse SE_PIN
	faceplayer
	delay 60
	msgbox AldeleafCity_KeyMan_MyKey, MSGBOX_DEFAULT
	waitmessage
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox AldeleafCity_KeyMan_Return, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	msgbox AldeleafCity_KeyMan_Help, MSGBOX_DEFAULT
	closemessage
	delay 20
	removeitem ITEM_LOST_KEY
	turnobject 16, DIR_NORTH
	delay 30
	opendoor 8, 37
	waitdooranim
	applymovement 16, Walk1Up
	waitmovement 0
	delay 5
	removeobject 16
	closedoor 8, 37
	setflag FLAG_KEY_RETURNED
	waitdooranim
	hideobjectat 16, MAP_WIP_CITY1
	setobjectxyperm 16, 0, 30
	goto AldeleafCity_KeyMan_1


Aldeleaf_Sign::
	msgbox Aldeleaf_Sign_Text, MSGBOX_SIGN
	end


Aldeleaf_Sign2::
	msgbox Aldeleaf_Sign2_Text, MSGBOX_SIGN
	end


Aldeleaf_Sign3::
	msgbox Aldeleaf_Sign3_Text, MSGBOX_SIGN
	end


Aldeleaf_Sign4::
	msgbox Aldeleaf_Sign4_Text, MSGBOX_SIGN
	end


Aldeleaf_GymUnavailable::
	msgbox Aldeleaf_GymUnavailable_Text, MSGBOX_NPC
	end


Aldeleaf_Sudowoodo::
	checkitem ITEM_WAILMER_PAIL
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_Sudowoodo_2
Aldeleaf_Sudowoodo_1:
	lockall
	goto_if_unset FLAG_BADGE02_GET, Aldeleaf_Sudowoodo_NoCut
	checkpartymove MOVE_CUT
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Aldeleaf_Sudowoodo_4
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Aldeleaf_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto Aldeleaf_Sudowoodo_CutDown
	end

Aldeleaf_Sudowoodo_2:
	lock
	msgbox WantToWaterTree, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Aldeleaf_Sudowoodo_7
	closemessage
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	goto Aldeleaf_Sudowoodo_CutDown
	goto Aldeleaf_Sudowoodo_1

Aldeleaf_Sudowoodo_4:
	goto Aldeleaf_Sudowoodo_NoCut
	return

Aldeleaf_Sudowoodo_7:
	closemessage
	release
	end


Aldeleaf_Sudowoodo_NoCut::
	lock
	faceplayer
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement 1, Aldeleaf_SudowoodoShake
	waitmovement 1
	release
	end


Aldeleaf_SudowoodoShake:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

Aldeleaf_Sudowoodo_CutDown::
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement 1, Aldeleaf_SudowoodoShake
	waitmovement 1
	checkitem ITEM_WAILMER_PAIL
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_Sudowoodo_CutDown_2
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
Aldeleaf_Sudowoodo_CutDown_1:
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SUDOWOODO, 20
	dowildbattle
	delay 20
	fadescreenswapbuffers FADE_TO_BLACK
	delay 20
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_DEFEATED_SUDOWOODO
	delay 20
	release
	end

Aldeleaf_Sudowoodo_CutDown_2:
	msgbox gText_Sudowoodo_Attacked_Watering, MSGBOX_DEFAULT
	goto Aldeleaf_Sudowoodo_CutDown_1


Aldeleaf_TrainerNearSudowoodo::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SUDOWOODO, Aldeleaf_TrainerNearSudowoodo_2
	msgbox Aldeleaf_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
	waitmessage
	closemessage
Aldeleaf_TrainerNearSudowoodo_1:
	release
	end

Aldeleaf_TrainerNearSudowoodo_2:
	setflag FLAG_DEFEATED_SUDOWOODO2
	msgbox Aldeleaf_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
	waitmessage
	closemessage
	compare VAR_FACING, DIR_WEST
	goto_if_eq Aldeleaf_TrainerNearSudowoodo_6
	applymovement 3, Aldeleaf_TrainerMoveShort
Aldeleaf_TrainerNearSudowoodo_5:
	waitmovement 0
	delay 10
	removeobject 3
	delay 30
	goto Aldeleaf_TrainerNearSudowoodo_1

Aldeleaf_TrainerNearSudowoodo_6:
	applymovement 3, Aldeleaf_TrainerMoveLong
	goto Aldeleaf_TrainerNearSudowoodo_5


Aldeleaf_TrainerMoveLong:
	walk_down
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Aldeleaf_TrainerMoveShort:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

AldeleafCity_Maniac_DeclineBattle::
	.string "That's fine,\n"
	.string "I would've beat you anyway.$"

AldeleafCity_Maniac_Continues::
	.string "Fine, I guess you win.\p"
	.string "… … …\p"
	.string "…What?\p"
	.string "You want a reward?\n"
	.string "Fine, take this…$"

ExplainShellBell::
	.string "Have your Pokémon hold that and\n"
	.string "any time it strikes a foe,\l"
	.string "it regains a small portion of its HP.$"

NotRoomForShellBell::
	.string "Oh, but you don't have\n"
	.string "enough room…$"

AldeleafCity_Maniac_PostBattle::
	.string "Leave me alone.$"

AldeleafCity_KeyMan_MyKey::
	.string "Oh! That's my key!$"

AldeleafCity_KeyMan_Return::
	.string "{PLAYER} returned the Lost Key\n"
	.string "to the man.$"

AldeleafCity_KeyMan_Help::
	.string "Thank you for returning my key!\p"
	.string "I want you to have something.\n"
	.string "Just let me open this door real quick…$"

Aldeleaf_GymUnavailable_Text::
	.string "I'm sorry, but we can't currently\n"
	.string "accept new challengers.\p"
	.string "The Gym Leader is busy dealing with a\n"
	.string "situation at the Pokémon Ranch.\l"
	.string "If you'd like to help,\l"
	.string "the ranch is just west of Aldeleaf.$"

Aldeleaf_WantToCut::
	.string "There's a weird tree blocking\n"
	.string "the way.\p"
	.string "Would you like to cut it?$"

WantToWaterTree::
	.string "There's a weird tree growing here.\p"
	.string "Would you like to water it with your\n"
	.string "Wailmer Pail?$"

Aldeleaf_Text_OnceAnOddTreePastHere::
	.string "Oh wow! So the tree was\n"
	.string "a wild Pokémon!?\l"
	.string "Thanks for clearing the way!$"

Aldeleaf_OddTreeHereSeemsToWiggle::
	.string "I wanted to go train in Windplume\n"
	.string "Valley but this weird tree\l"
	.string "has appeared here out of nowhere!$"

AldeleafCity_BirdTrainer_Text::
	.string "I wanted to take on the gym but I don't\n"
	.string "think my bird Pokémon stand a chance…$"

AldeleafCity_OldMan_Text::
	.string "There's been a lot of people\n"
	.string "coming and going recently.\l"
	.string "Could this be a sign of\l"
	.string "something sinister…$"

AldeleafCity_OldWoman_Text::
	.string "Sometimes my husband tries to\n"
	.string "read too much into everything.$"

AldeleafCity_Runner_Text::
	.string "There's no better exercise than\n"
	.string "running up and down the stairs!$"

AldeleafCity_Lass_Text::
	.string "I don't see why they had to fence off\n"
	.string "those floors on the upper layer.\p"
	.string "They're identical to the ones\n"
	.string "over here…$"

AldeleafCity_Boy_Text::
	.string "I don't remember seeing you before.\n"
	.string "Are you a Trainer?\p"
	.string "If you're looking for the gym,\n"
	.string "just head north.\l"
	.string "It's impossible to miss it.$"

AldeleafCity_Maniac_Text::
	.string "I see you are carrying\n"
	.string "some Poké Balls.\p"
	.string "You know, I'm something of a\n"
	.string "Pokémon Trainer myself.\l"
	.string "Care to have a go?$"

AldeleafCity_Maniac_Defeated::
	.string "Okay, I guess you pass…$"

AldeleafCity_Child1_Text::
	.string "We're conc…condug…doing tests!\n"
	.string "You're not allowed to look!$"

AldeleafCity_Child2_Text::
	.string "This is super secret!\n"
	.string "Go away!$"

AldeleafCity_LittleGirl_Text::
	.string "Have you been to the museum?\n"
	.string "There's lots of cool stuff to see!$"

AldeleafCity_Woman_Text::
	.string "Have you been to the ranch?\n"
	.string "They have a lot of cute Pokémon there!$"

AldeleafCity_Youngster_Text::
	.string "My friend and I are playing\n"
	.string "hide and seek.\l"
	.string "He's really hidden himself well…$"

AldeleafCity_Hidden_Text::
	.string "I'm hiding from my friend.\p"
	.string "Please don't tell him you\n"
	.string "found me, okay?\p"
	.string "Here, I'll give you this if you\n"
	.string "keep quiet.$"

AldeleafCity_Hidden_Text2::
	.string "I'm hiding from my friend.$"

NotRoomQuickBall::
	.string "Oh, but you don't have enough room\n"
	.string "in your Ball Pocket…$"

AldeleafCity_KeyMan_Text::
	.string "Oh no, my key…\n"
	.string "Did I leave it at home?\l"
	.string "No… Maybe I dropped it?$"

Aldeleaf_Sign_Text::
	.string "ALDELEAF CITY\n"
	.string "“The border between nature and\l"
	.string "civilization.”$"

Aldeleaf_Sign2_Text::
	.string "Aldeleaf City Pokémon Gym\n"
	.string "Leader: Volkner$"

Aldeleaf_Sign3_Text::
	.string "{UP_ARROW} Route 28\n"
	.string "{RIGHT_ARROW} Windplume Valley$"

Aldeleaf_Sign4_Text::
	.string "Aldeleaf City Museum$"
