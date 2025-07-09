SkyPillar_1F_MapScripts::
# 2 "data/maps/SkyPillar_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRivalPartner
# 3 "data/maps/SkyPillar_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SetupRivalPartner
	.byte 0


AdamantTower1F_Janitor::
# 7 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox AdamantTower1F_Janitor_Text, MSGBOX_NPC
	end


AdamantTower1F_Man4::
# 19 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox AdamantTower1F_Man4_Text, MSGBOX_NPC
	end


SetupRivalPartner::
# 28 "data/maps/SkyPillar_1F/scripts.pory"
	goto_if_unset FLAG_PARTNER_HEALS, SetupRivalPartner_2
SetupRivalPartner_1:
# 31 "data/maps/SkyPillar_1F/scripts.pory"
	checkplayergender
# 32 "data/maps/SkyPillar_1F/scripts.pory"
	call SetupRivalGfxId
# 33 "data/maps/SkyPillar_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SetupRivalPartner_5
# 56 "data/maps/SkyPillar_1F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalPartner_11
# 67 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 68 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_27
# 70 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_28
# 72 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_29
SetupRivalPartner_4:
	end

SetupRivalPartner_2:
# 29 "data/maps/SkyPillar_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto SetupRivalPartner_1

SetupRivalPartner_5:
# 34 "data/maps/SkyPillar_1F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalPartner_8
# 45 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 46 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_19
# 48 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_20
# 50 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_21
	goto SetupRivalPartner_4

SetupRivalPartner_8:
# 35 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 36 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_15
# 38 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_16
# 40 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_17
	goto SetupRivalPartner_4

SetupRivalPartner_11:
# 57 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 58 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_23
# 60 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_24
# 62 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_25
	goto SetupRivalPartner_4

SetupRivalPartner_15:
# 37 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 0
	goto SetupRivalPartner_4

SetupRivalPartner_16:
# 39 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 1
	goto SetupRivalPartner_4

SetupRivalPartner_17:
# 41 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 2
	goto SetupRivalPartner_4

SetupRivalPartner_19:
# 47 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 3
	goto SetupRivalPartner_4

SetupRivalPartner_20:
# 49 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 4
	goto SetupRivalPartner_4

SetupRivalPartner_21:
# 51 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 5
	goto SetupRivalPartner_4

SetupRivalPartner_23:
# 59 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 6
	goto SetupRivalPartner_4

SetupRivalPartner_24:
# 61 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 7
	goto SetupRivalPartner_4

SetupRivalPartner_25:
# 63 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 8
	goto SetupRivalPartner_4

SetupRivalPartner_27:
# 69 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 9
	goto SetupRivalPartner_4

SetupRivalPartner_28:
# 71 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 10
	goto SetupRivalPartner_4

SetupRivalPartner_29:
# 73 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, 11
	goto SetupRivalPartner_4


FollowerStaysBehind::
# 81 "data/maps/SkyPillar_1F/scripts.pory"
	lock
# 82 "data/maps/SkyPillar_1F/scripts.pory"
	playse SE_PIN
# 83 "data/maps/SkyPillar_1F/scripts.pory"
	exclamationmark OBJ_EVENT_ID_NPC_FOLLOWER
# 84 "data/maps/SkyPillar_1F/scripts.pory"
	facefollowernpc
# 85 "data/maps/SkyPillar_1F/scripts.pory"
	delay 15
	checkplayergender
# 0 "data/maps/SkyPillar_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FollowerStaysBehind_2
# 90 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox BrendanStayHere
FollowerStaysBehind_1:
# 92 "data/maps/SkyPillar_1F/scripts.pory"
	closemessage
# 93 "data/maps/SkyPillar_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 94 "data/maps/SkyPillar_1F/scripts.pory"
	release
	end

FollowerStaysBehind_2:
# 87 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox MaystayHere
	goto FollowerStaysBehind_1


AdamantTower1F_Janitor_Text::
# 10 "data/maps/SkyPillar_1F/scripts.pory"
	.string "My family has been the caretaker of\n"
	.string "this tower for as far back as the\l"
	.string "records go.\p"
	.string "It's not an easy job,\n"
	.string "but somebody has to do it.$"

AdamantTower1F_Man4_Text::
# 22 "data/maps/SkyPillar_1F/scripts.pory"
	.string "The trainers upstairs absolutely\n"
	.string "wrecked my team…$"

MaystayHere::
# 97 "data/maps/SkyPillar_1F/scripts.pory"
	.string "{RIVAL}: You're not planning to leave\n"
	.string "me to tackle this tower alone,\l"
	.string "are you?\p"
	.string "Well, if you do decide to leave,\n"
	.string "I'm going back to the floor above us.\p"
	.string "There's bound to be all sorts of new\n"
	.string "and exciting Pokémon here!$"

BrendanStayHere::
# 106 "data/maps/SkyPillar_1F/scripts.pory"
	.string "{RIVAL}: Got something more important\n"
	.string "to do?\p"
	.string "I understand.\p"
	.string "If you do decide to leave, I'm going\n"
	.string "back to the floor above us.\p"
	.string "There's bound to be all sorts of new\n"
	.string "and exciting Pokémon here.$"
