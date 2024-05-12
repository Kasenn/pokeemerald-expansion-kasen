SkyPillar_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRivalPartner
	map_script MAP_SCRIPT_ON_LOAD, SetupRivalPartner
	.byte 0


AdamantTower1F_Janitor::
	msgbox AdamantTower1F_Janitor_Text, MSGBOX_NPC
	end


AdamantTower1F_Man4::
	msgbox AdamantTower1F_Man4_Text, MSGBOX_NPC
	end


SetupRivalPartner::
	checkplayergender
	call Common_EventScript_SetupRivalGfxId
	compare VAR_RESULT, MALE
	goto_if_eq SetupRivalPartner_2
	goto_if_set FLAG_BRENDAN_COSTUME_CHANGE, SetupRivalPartner_8
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_24
	case 1, SetupRivalPartner_25
	case 2, SetupRivalPartner_26
SetupRivalPartner_1:
	end

SetupRivalPartner_2:
	goto_if_set FLAG_MAY_COSTUME_CHANGE, SetupRivalPartner_5
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_16
	case 1, SetupRivalPartner_17
	case 2, SetupRivalPartner_18
	goto SetupRivalPartner_1

SetupRivalPartner_5:
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_12
	case 1, SetupRivalPartner_13
	case 2, SetupRivalPartner_14
	goto SetupRivalPartner_1

SetupRivalPartner_8:
	switch VAR_STARTER_MON
	case 0, SetupRivalPartner_20
	case 1, SetupRivalPartner_21
	case 2, SetupRivalPartner_22
	goto SetupRivalPartner_1

SetupRivalPartner_12:
	setvar VAR_TOWER_PARTNER, 0
	goto SetupRivalPartner_1

SetupRivalPartner_13:
	setvar VAR_TOWER_PARTNER, 1
	goto SetupRivalPartner_1

SetupRivalPartner_14:
	setvar VAR_TOWER_PARTNER, 2
	goto SetupRivalPartner_1

SetupRivalPartner_16:
	setvar VAR_TOWER_PARTNER, 3
	goto SetupRivalPartner_1

SetupRivalPartner_17:
	setvar VAR_TOWER_PARTNER, 4
	goto SetupRivalPartner_1

SetupRivalPartner_18:
	setvar VAR_TOWER_PARTNER, 5
	goto SetupRivalPartner_1

SetupRivalPartner_20:
	setvar VAR_TOWER_PARTNER, 6
	goto SetupRivalPartner_1

SetupRivalPartner_21:
	setvar VAR_TOWER_PARTNER, 7
	goto SetupRivalPartner_1

SetupRivalPartner_22:
	setvar VAR_TOWER_PARTNER, 8
	goto SetupRivalPartner_1

SetupRivalPartner_24:
	setvar VAR_TOWER_PARTNER, 9
	goto SetupRivalPartner_1

SetupRivalPartner_25:
	setvar VAR_TOWER_PARTNER, 10
	goto SetupRivalPartner_1

SetupRivalPartner_26:
	setvar VAR_TOWER_PARTNER, 11
	goto SetupRivalPartner_1


SetUpPlayerParty::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	setflag FLAG_PARTNER_HEALS
	return


Walk1Left:
	walk_left
	step_end

Walk2Left:
	walk_left
	walk_left
	step_end

Walk3Left:
	walk_left
	walk_left
	walk_left
	step_end

Walk4Left:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk1Right:
	walk_right
	step_end

Walk2Right:
	walk_right
	walk_right
	step_end

Walk3Right:
	walk_right
	walk_right
	walk_right
	step_end

Walk4Right:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk1Up:
	walk_up
	step_end

Walk2Up:
	walk_up
	walk_up
	step_end

Walk3Up:
	walk_up
	walk_up
	walk_up
	step_end

Walk4Up:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk1Down:
	walk_down
	step_end

Walk2Down:
	walk_down
	walk_down
	step_end

Walk3Down:
	walk_down
	walk_down
	walk_down
	step_end

Walk4Down:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FollowerStaysBehind::
	compare VAR_TEMP_5, 1
	goto_if_eq FollowerStaysBehind_2
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	facefollower
	checkplayergender
	delay 15
	compare VAR_RESULT, MALE
	goto_if_eq FollowerStaysBehind_5
	msgbox BrendanStayHere
FollowerStaysBehind_4:
	closemessage
	setvar VAR_TEMP_5, 1
	release
	end

FollowerStaysBehind_2:
	release
	end

FollowerStaysBehind_5:
	msgbox MaystayHere
	goto FollowerStaysBehind_4


AdamantTower1F_Janitor_Text::
	.string "My family has been the caretaker of\n"
	.string "this tower for as far back as the\l"
	.string "records go.\p"
	.string "It's not an easy job,\n"
	.string "but somebody has to do it.$"

AdamantTower1F_Man4_Text::
	.string "The trainers upstairs absolutely\n"
	.string "wrecked my team…$"

MaystayHere::
	.string "{RIVAL}: You're not planning to leave\n"
	.string "me to tackle this tower alone,\l"
	.string "are you?\p"
	.string "Well, if you do decide to leave,\n"
	.string "I'm going back to the floor above us.\p"
	.string "There's bound to be all sorts of new\n"
	.string "and exciting Pokémon here!$"

BrendanStayHere::
	.string "{RIVAL}: Got something more important\n"
	.string "to do?\p"
	.string "I understand.\p"
	.string "If you do decide to leave, I'm going\n"
	.string "back to the floor above us.\p"
	.string "There's bound to be all sorts of new\n"
	.string "and exciting Pokémon here.$"
