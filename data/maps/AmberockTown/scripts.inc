AmberockTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_FlagControl
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PaperVisibility
	.byte 0


Amberock_FlagControl::
	goto_if_set FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_FlagControl_2
	setflag FLAG_TEMP_C
Amberock_FlagControl_1:
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_2
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_FlagControl_6
Amberock_FlagControl_5:
	goto_if_set FLAG_BADGE05_GET, Amberock_FlagControl_10
Amberock_FlagControl_8:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_FlagControl_13
	goto_if_set FLAG_PC_CHANGE_COSTUME, Amberock_FlagControl_19
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

Amberock_FlagControl_2:
	setmaplayoutindex LAYOUT_AMBEROCK_TEST
	goto Amberock_FlagControl_1

Amberock_FlagControl_6:
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_1
	goto Amberock_FlagControl_5

Amberock_FlagControl_9:
	setobjectxyperm 31, 33, 11
	clearflag FLAG_TEMP_2
	goto Amberock_FlagControl_8

Amberock_FlagControl_10:
	goto_if_unset FLAG_RECEIVED_HM_SURF, Amberock_FlagControl_9
	goto Amberock_FlagControl_8

Amberock_FlagControl_13:
	goto_if_set FLAG_PC_CHANGE_COSTUME, Amberock_FlagControl_16
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

Amberock_FlagControl_16:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_NORMAL_ORAS
	return

Amberock_FlagControl_19:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_NORMAL_ORAS
	return


Amberock_PaperVisibility::
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_PaperVisibility_2
	return

Amberock_PaperVisibility_1:
	setmetatile 27 + 30, 10, 0x128, FALSE
	setmetatile 27 + 30, 12, 0x189, FALSE
	setmetatile 26 + 30, 12, 0x189, FALSE
	setmetatile 25 + 30, 13, 0x170, FALSE
	setmetatile 24 + 30, 13, 0x170, FALSE
	setmetatile 23 + 30, 13, 0x170, FALSE
	setmetatile 23 + 30, 14, 0x170, FALSE
	setmetatile 24 + 30, 14, 0x170, FALSE
	setmetatile 25 + 30, 14, 0x170, FALSE
	setmetatile 24 + 30, 15, 0x170, FALSE
	setmetatile 25 + 30, 15, 0x170, FALSE
	setmetatile 26 + 30, 15, 0x170, FALSE
	setmetatile 26 + 30, 16, 0x170, FALSE
	setmetatile 27 + 30, 16, 0x170, FALSE
	setmetatile 28 + 30, 16, 0x170, FALSE
	return

Amberock_PaperVisibility_2:
	goto_if_unset FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_PaperVisibility_1
	return


Amberock_SurfScientist::
	lock
	faceplayer
	msgbox HereIsSurfHM
	giveitem ITEM_HM03
	msgbox GoGetBackPapers
	closemessage
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Amberock_SurfScientist_2
	applymovement 1, ScientistLeavesStraight
Amberock_SurfScientist_1:
	waitmovement 0
	removeobject 1
	setflag FLAG_RECEIVED_HM_SURF
	release
	return

Amberock_SurfScientist_2:
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 64
	goto_if_ne Amberock_SurfScientist_7
Amberock_SurfScientist_5:
	applymovement 1, ScientistLeavesDetour
	goto Amberock_SurfScientist_1

Amberock_SurfScientist_6:
	safefollow
	goto Amberock_SurfScientist_5

Amberock_SurfScientist_7:
	compare VAR_TEMP_2, 10
	goto_if_ne Amberock_SurfScientist_6
	goto Amberock_SurfScientist_5


ScientistLeavesDetour:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

ScientistLeavesStraight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Amberock_Papers::
	lock
	safefollow
	msgbox PapersOnGround
	removeobject 3
	setmetatile 57, 10, 0x128, FALSE
	special DrawWholeMapView
	closemessage
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	addobject 1
	addobject 2
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
	checktrainerflag TRAINER_R15_TR18_BERRYROCKET
	goto_if 0, Amberock_Papers_2
Amberock_Papers_1:
	delay 60
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_6
	case DIR_WEST, Amberock_Papers_7
	case DIR_EAST, Amberock_Papers_8
Amberock_Papers_4:
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 24
	goto_if_set FLAG_TEMP_A, Amberock_Papers_10
	msgbox OurPapers
Amberock_Papers_9:
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_30
	case DIR_WEST, Amberock_Papers_31
	case DIR_EAST, Amberock_Papers_32
Amberock_Papers_28:
	waitmovement 0
	delay 60
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_35
	case DIR_WEST, Amberock_Papers_36
	case DIR_EAST, Amberock_Papers_37
Amberock_Papers_33:
	waitmovement 0
	delay 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_Papers_39
	bufferstring STR_VAR_1, Amberock_Papers_Text_1
Amberock_Papers_38:
	goto_if_set FLAG_ACEROLA_TALKED_TO, Amberock_Papers_43
	msgbox AcerolaVisitGymAlternative
Amberock_Papers_42:
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Amberock_Papers_48
	case DIR_WEST, Amberock_Papers_49
	case DIR_EAST, Amberock_Papers_50
Amberock_Papers_46:
	waitmovement 0
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
	removeobject 1
	removeobject 2
	delay 15
	release
	return

Amberock_Papers_2:
	call AmberockAlternativeCutscene
	goto Amberock_Papers_1

Amberock_Papers_6:
	compare VAR_TEMP_1, 57
	goto_if_eq Amberock_Papers_15
Amberock_Papers_13:
	applymovement 1, MoveScientist2
	goto Amberock_Papers_4

Amberock_Papers_7:
	compare VAR_TEMP_1, 58
	goto_if_eq Amberock_Papers_20
Amberock_Papers_18:
	setobjectxy 31, 28, 4
	applymovement 1, Walk5Down
	goto Amberock_Papers_4

Amberock_Papers_8:
	compare VAR_TEMP_1, 56
	goto_if_eq Amberock_Papers_25
Amberock_Papers_23:
	setobjectxy 31, 28, 4
	applymovement 1, MoveScientist1
	goto Amberock_Papers_4

Amberock_Papers_10:
	msgbox OurPapersAlternative
	goto Amberock_Papers_9

Amberock_Papers_14:
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_13

Amberock_Papers_15:
	compare VAR_TEMP_2, 8
	goto_if_eq Amberock_Papers_14
	goto Amberock_Papers_13

Amberock_Papers_19:
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_18

Amberock_Papers_20:
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_19
	goto Amberock_Papers_18

Amberock_Papers_24:
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_23

Amberock_Papers_25:
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_24
	goto Amberock_Papers_23

Amberock_Papers_30:
	applymovement 1, ScientistLeave2
	goto Amberock_Papers_28

Amberock_Papers_31:
	applymovement 1, Walk5Up
	goto Amberock_Papers_28

Amberock_Papers_32:
	applymovement 1, ScientistLeave1
	goto Amberock_Papers_28

Amberock_Papers_35:
	applymovement 2, MoveScientist2
	goto Amberock_Papers_33

Amberock_Papers_36:
	setobjectxy 32, 28, 4
	applymovement 2, Walk5Down
	goto Amberock_Papers_33

Amberock_Papers_37:
	setobjectxy 32, 28, 4
	applymovement 2, MoveScientist1
	goto Amberock_Papers_33

Amberock_Papers_39:
	bufferstring STR_VAR_1, Amberock_Papers_Text_0
	goto Amberock_Papers_38

Amberock_Papers_43:
	msgbox AcerolaVisitGym
	goto Amberock_Papers_42

Amberock_Papers_48:
	applymovement 2, ScientistLeave2
	goto Amberock_Papers_46

Amberock_Papers_49:
	applymovement 2, Walk5Up
	goto Amberock_Papers_46

Amberock_Papers_50:
	applymovement 2, ScientistLeave1
	goto Amberock_Papers_46


MoveScientist1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

MoveScientist2:
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

ScientistLeave2:
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

ScientistLeave1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

AmberockAlternativeCutscene::
	delay 48
	switch VAR_FACING
	case DIR_WEST, AmberockAlternativeCutscene_3
	case DIR_EAST, AmberockAlternativeCutscene_3
AmberockAlternativeCutscene_1:
	waitmovement 0
	special SpawnCameraObject
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_5
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Down
AmberockAlternativeCutscene_4:
	waitmovement 0
	delay 60
	msgbox RocketYoureTooLate
	closemessage
	setflag FLAG_TEMP_A
	applymovement 4, Walk4Down
	waitmovement 0
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_9
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Up
AmberockAlternativeCutscene_8:
	waitmovement 0
	special RemoveCameraObject
	return

AmberockAlternativeCutscene_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto AmberockAlternativeCutscene_1

AmberockAlternativeCutscene_5:
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Down
	goto AmberockAlternativeCutscene_4

AmberockAlternativeCutscene_9:
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Up
	goto AmberockAlternativeCutscene_8


Amberock_WelcomeSign::
	msgbox Amberock_WelcomeSign_Text, MSGBOX_SIGN
	return


Amberock_FactorySign::
	msgbox Amberock_FactorySign_Text, MSGBOX_SIGN
	return


Amberock_GameCornerSign::
	msgbox Amberock_GameCornerSign_Text, MSGBOX_SIGN
	return


PokeFactory_Bouncer::
	msgbox PokeFactory_Bouncer_Text, MSGBOX_NPC
	turnobject 7, DIR_SOUTH
	turnobject 8, DIR_SOUTH
	return


Amberock_Girl2::
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_STORY_COMPLETE
	goto_if_eq Amberock_Girl2_1
	msgbox Amberock_Girl2_Text2, MSGBOX_NPC
	return

Amberock_Girl2_1:
	msgbox Amberock_Girl2_Text, MSGBOX_NPC
	return


Amberock_OldWoman::
	msgbox Amberock_OldWoman_Text, MSGBOX_NPC
	return


Amberock_Boy::
	msgbox Amberock_Boy_Text, MSGBOX_NPC
	return


Amberock_OldMan::
	lock
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_OldMan_2
	faceplayer
	msgbox Amberock_OldMan_Text
	giveitem ITEM_COIN_CASE
	release
	turnobject 16, DIR_SOUTH
	end

Amberock_OldMan_2:
	msgbox Amberock_OldMan_Text2
	release
	end


Amberock_Magnemite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGNEMITE, CRY_MODE_NORMAL
	msgbox Amberock_Magnemite_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Amberock_BridgeRepair::
	msgbox Amberock_BridgeRepair_Text, MSGBOX_NPC
	return


Amberock_Papers_Text_0:
	.string "mister$"

Amberock_Papers_Text_1:
	.string "miss$"

HereIsSurfHM::
	.string "Ah, perfect timing!\p"
	.string "I was able to get my hands on the\n"
	.string "perfect Hidden Machine for this job.\p"
	.string "Here, you should take it.$"

GoGetBackPapers::
	.string "As much as I would like to help you on\n"
	.string "this, I'm just a scientist after all.\p"
	.string "I mean, I don't even have my own\n"
	.string "Pokémon!\p"
	.string "I know this is a lot to ask from\n"
	.string "someone you barely even know,\l"
	.string "but please, recover our research\l"
	.string "material from Team Rocket!\p"
	.string "I had a talk with my colleagues and we\n"
	.string "have unanimously decided that if you\l"
	.string "do this, we'll reward you with\l"
	.string "something special.\p"
	.string "With that said, I need to get back to\n"
	.string "my research.\p"
	.string "When you're done, come meet me back at\n"
	.string "the research center on Route 14.$"

PapersOnGround::
	.string "There seems to be some papers on\n"
	.string "the ground here.\p"
	.string "{PLAYER} picked up the papers.$"

OurPapers::
	.string "Can I see those papers?\p"
	.string "{PLAYER} handed the papers to the\n"
	.string "scientist.\p"
	.string "… … … …\p"
	.string "Yes, these are definitely some of\n"
	.string "the papers that were stolen.\p"
	.string "The culprit must have fled to Amberock\n"
	.string "Town and cut the bridge behind him,\l"
	.string "giving him ample time to hide.\p"
	.string "That scoundrel!\p"
	.string "It would take too long to wait for\n"
	.string "the bridge to be repaired.\p"
	.string "You should prepare your team for\n"
	.string "what lies ahead.\p"
	.string "In the meantime, I'll try to get my\n"
	.string "hands on a Hidden Machine that can\l"
	.string "teach your Pokémon how to carry\l"
	.string "people across water.\p"
	.string "I'll meet you back here once we're\n"
	.string "both ready.$"

OurPapersAlternative::
	.string "Can I see those papers?\p"
	.string "{PLAYER} handed the papers to the\n"
	.string "scientist.\p"
	.string "… … … …\p"
	.string "Yes, these are definitely some of\n"
	.string "the papers that were stolen.\p"
	.string "You say you saw the culprit flee to\n"
	.string "Amberock Town and cut the bridge\l"
	.string "behind him?\p"
	.string "That scoundrel!\p"
	.string "No matter what we do now, this\n"
	.string "has given him ample time to hide.\p"
	.string "It would take too long to wait for\n"
	.string "the bridge to be repaired.\p"
	.string "You should prepare your team for\n"
	.string "what lies ahead.\p"
	.string "In the meantime, I'll try to get my\n"
	.string "hands on a Hidden Machine that can\l"
	.string "teach your Pokémon how to carry\l"
	.string "people across water.\p"
	.string "I'll meet you back here once we're\n"
	.string "both ready.$"

AcerolaVisitGym::
	.string "Acerola: I couldn't help overhearing\n"
	.string "parts of your conversation.\p"
	.string "If you're looking to strengthen your\n"
	.string "Pokémon, you should totally check the\l"
	.string "Pokémon Gym over in Drisledge Town!\p"
	.string "I hear it's one of the best gyms in\n"
	.string "all of Sinko!\p"
	.string "Anyway, I need to head back home now.\n"
	.string "See you again, {STR_VAR_1}!$"

AcerolaVisitGymAlternative::
	.string "I couldn't help overhearing\n"
	.string "parts of your conversation.\p"
	.string "If you're looking to strengthen your\n"
	.string "Pokémon, you should totally check the\l"
	.string "Pokémon Gym over in Drisledge Town!\p"
	.string "I hear it's one of the best gyms in\n"
	.string "all of Sinko!\p"
	.string "Anyway, I need to head back home now.\n"
	.string "See you again, {STR_VAR_1}!$"

RocketYoureTooLate::
	.string "Rocket Grunt: I see our little\n"
	.string "diversion wasn't enough to fool you.\p"
	.string "But, it matters not.\n"
	.string "You're late anyway!\p"
	.string "Good luck ever catching me!$"

Amberock_WelcomeSign_Text::
	.string "Amberock Town\n"
	.string "“The town where everyone prospers!”$"

Amberock_FactorySign_Text::
	.string "Poké Ball Factory$"

Amberock_GameCornerSign_Text::
	.string "“The play spot for all!”\n"
	.string "Amberock Game Corner$"

PokeFactory_Bouncer_Text::
	.string "This place isn't a playground.\n"
	.string "Beat it, kid.$"

Amberock_Girl2_Text::
	.string "Team Rocket attacked the Poké Ball\n"
	.string "factory? I hope everybody is okay.$"

Amberock_Girl2_Text2::
	.string "There's some pretty menacing guys\n"
	.string "guarding the gate to the factory.\p"
	.string "Wonder what happened…$"

Amberock_OldWoman_Text::
	.string "They kicked me out because I was\n"
	.string "too good of a player!\p"
	.string "They say my Magnemite was rigging the\n"
	.string "machines, but there's no proof of that!$"

Amberock_Boy_Text::
	.string "They say Amberock Town used to be\n"
	.string "Amberock City, but the cliffs have\l"
	.string "slowly eroded away and reduced the\l"
	.string "size of livable land.$"

Amberock_OldMan_Text::
	.string "I'm done gambling!\n"
	.string "It has led me absolutely nowhere!\p"
	.string "Here, you want this?\n"
	.string "Well, it's yours!$"

Amberock_OldMan_Text2::
	.string "Stupid Game Corner…$"

Amberock_Magnemite_Text::
	.string "Magnemite: Bzzzt!$"

Amberock_BridgeRepair_Text::
	.string "This bridge breaks quite often,\n"
	.string "so we need to be on constant lookout\l"
	.string "and fix it before it causes trouble\l"
	.string "for the residents.$"
