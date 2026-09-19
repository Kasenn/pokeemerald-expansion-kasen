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
# 52 "data/maps/SkyPillar_1F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalPartner_11
# 61 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 62 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_30
# 63 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_31
# 64 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_32
# 65 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_TORCHIC
SetupRivalPartner_4:
	end

SetupRivalPartner_2:
# 29 "data/maps/SkyPillar_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto SetupRivalPartner_1

SetupRivalPartner_5:
# 34 "data/maps/SkyPillar_1F/scripts.pory"
	goto_if_set FLAG_RIVAL_COSTUME_CHANGE, SetupRivalPartner_8
# 43 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 44 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_20
# 45 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_21
# 46 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_22
# 47 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_TORCHIC
	goto SetupRivalPartner_4

SetupRivalPartner_8:
# 35 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 36 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_15
# 37 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_16
# 38 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_17
# 39 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_ORAS_TORCHIC
	goto SetupRivalPartner_4

SetupRivalPartner_11:
# 53 "data/maps/SkyPillar_1F/scripts.pory"
	switch VAR_STARTER_MON
# 54 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_ROWLET, SetupRivalPartner_25
# 55 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_TORCHIC, SetupRivalPartner_26
# 56 "data/maps/SkyPillar_1F/scripts.pory"
	case SPECIES_PIPLUP, SetupRivalPartner_27
# 57 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_ORAS_TORCHIC
	goto SetupRivalPartner_4

SetupRivalPartner_15:
# 36 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_ORAS_TORCHIC
	goto SetupRivalPartner_4

SetupRivalPartner_16:
# 37 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_ORAS_PIPLUP
	goto SetupRivalPartner_4

SetupRivalPartner_17:
# 38 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_ORAS_ROWLET
	goto SetupRivalPartner_4

SetupRivalPartner_20:
# 44 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_TORCHIC
	goto SetupRivalPartner_4

SetupRivalPartner_21:
# 45 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_PIPLUP
	goto SetupRivalPartner_4

SetupRivalPartner_22:
# 46 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_MAY_ROWLET
	goto SetupRivalPartner_4

SetupRivalPartner_25:
# 54 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_ORAS_TORCHIC
	goto SetupRivalPartner_4

SetupRivalPartner_26:
# 55 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_ORAS_PIPLUP
	goto SetupRivalPartner_4

SetupRivalPartner_27:
# 56 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_ORAS_ROWLET
	goto SetupRivalPartner_4

SetupRivalPartner_30:
# 62 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_TORCHIC
	goto SetupRivalPartner_4

SetupRivalPartner_31:
# 63 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_PIPLUP
	goto SetupRivalPartner_4

SetupRivalPartner_32:
# 64 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_TOWER_PARTNER, PARTNER_BRENDAN_ROWLET
	goto SetupRivalPartner_4


FollowerStaysBehind::
# 73 "data/maps/SkyPillar_1F/scripts.pory"
	lock
# 74 "data/maps/SkyPillar_1F/scripts.pory"
	playse SE_PIN
# 75 "data/maps/SkyPillar_1F/scripts.pory"
	exclamationmark OBJ_EVENT_ID_NPC_FOLLOWER
# 76 "data/maps/SkyPillar_1F/scripts.pory"
	facefollowernpc
# 77 "data/maps/SkyPillar_1F/scripts.pory"
	delay 15
	checkplayergender
# 0 "data/maps/SkyPillar_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FollowerStaysBehind_2
# 82 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox BrendanStayHere
FollowerStaysBehind_1:
# 84 "data/maps/SkyPillar_1F/scripts.pory"
	closemessage
# 85 "data/maps/SkyPillar_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 86 "data/maps/SkyPillar_1F/scripts.pory"
	release
	end

FollowerStaysBehind_2:
# 79 "data/maps/SkyPillar_1F/scripts.pory"
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
# 89 "data/maps/SkyPillar_1F/scripts.pory"
	.string "{RIVAL}: You're not planning to leave\n"
	.string "me to tackle this tower alone,\l"
	.string "are you?\p"
	.string "Well, if you do decide to leave,\n"
	.string "I'm going back to the floor above us.\p"
	.string "There's bound to be all sorts of new\n"
	.string "and exciting Pokémon here!$"

BrendanStayHere::
# 98 "data/maps/SkyPillar_1F/scripts.pory"
	.string "{RIVAL}: Got something more important\n"
	.string "to do?\p"
	.string "I understand.\p"
	.string "If you do decide to leave, I'm going\n"
	.string "back to the floor above us.\p"
	.string "There's bound to be all sorts of new\n"
	.string "and exciting Pokémon here.$"
