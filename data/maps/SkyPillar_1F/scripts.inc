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
	goto_if_unset FLAG_PARTNER_HEALS, SetupRivalPartner_2
SetupRivalPartner_1:
	checkplayergender
	call Common_EventScript_SetupRivalGfxId
	compare VAR_RESULT, MALE
	goto_if_eq SetupRivalPartner_5
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalPartner_11
	switch VAR_STARTER_MON
	case SPECIES_ROWLET, SetupRivalPartner_27
	case SPECIES_TORCHIC, SetupRivalPartner_28
	case SPECIES_PIPLUP, SetupRivalPartner_29
SetupRivalPartner_4:
	end

SetupRivalPartner_2:
	setflag FLAG_TEMP_1
	goto SetupRivalPartner_1

SetupRivalPartner_5:
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalPartner_8
	switch VAR_STARTER_MON
	case SPECIES_ROWLET, SetupRivalPartner_19
	case SPECIES_TORCHIC, SetupRivalPartner_20
	case SPECIES_PIPLUP, SetupRivalPartner_21
	goto SetupRivalPartner_4

SetupRivalPartner_8:
	switch VAR_STARTER_MON
	case SPECIES_ROWLET, SetupRivalPartner_15
	case SPECIES_TORCHIC, SetupRivalPartner_16
	case SPECIES_PIPLUP, SetupRivalPartner_17
	goto SetupRivalPartner_4

SetupRivalPartner_11:
	switch VAR_STARTER_MON
	case SPECIES_ROWLET, SetupRivalPartner_23
	case SPECIES_TORCHIC, SetupRivalPartner_24
	case SPECIES_PIPLUP, SetupRivalPartner_25
	goto SetupRivalPartner_4

SetupRivalPartner_15:
	setvar VAR_TOWER_PARTNER, 0
	goto SetupRivalPartner_4

SetupRivalPartner_16:
	setvar VAR_TOWER_PARTNER, 1
	goto SetupRivalPartner_4

SetupRivalPartner_17:
	setvar VAR_TOWER_PARTNER, 2
	goto SetupRivalPartner_4

SetupRivalPartner_19:
	setvar VAR_TOWER_PARTNER, 3
	goto SetupRivalPartner_4

SetupRivalPartner_20:
	setvar VAR_TOWER_PARTNER, 4
	goto SetupRivalPartner_4

SetupRivalPartner_21:
	setvar VAR_TOWER_PARTNER, 5
	goto SetupRivalPartner_4

SetupRivalPartner_23:
	setvar VAR_TOWER_PARTNER, 6
	goto SetupRivalPartner_4

SetupRivalPartner_24:
	setvar VAR_TOWER_PARTNER, 7
	goto SetupRivalPartner_4

SetupRivalPartner_25:
	setvar VAR_TOWER_PARTNER, 8
	goto SetupRivalPartner_4

SetupRivalPartner_27:
	setvar VAR_TOWER_PARTNER, 9
	goto SetupRivalPartner_4

SetupRivalPartner_28:
	setvar VAR_TOWER_PARTNER, 10
	goto SetupRivalPartner_4

SetupRivalPartner_29:
	setvar VAR_TOWER_PARTNER, 11
	goto SetupRivalPartner_4


FollowerStaysBehind::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	facefollowernpc
	delay 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FollowerStaysBehind_2
	msgbox BrendanStayHere
FollowerStaysBehind_1:
	closemessage
	setflag FLAG_TEMP_1
	release
	end

FollowerStaysBehind_2:
	msgbox MaystayHere
	goto FollowerStaysBehind_1


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
