Kaolisle_BirdHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HideBirdHouseBirds
	.byte 0


HideBirdHouseBirds::
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	switch VAR_KAOLISLE_BIRDS
	case 101, HideBirdHouseBirds_2
	case 102, HideBirdHouseBirds_3
	case 103, HideBirdHouseBirds_4
	case 104, HideBirdHouseBirds_5
	case 105, HideBirdHouseBirds_6
	case 106, HideBirdHouseBirds_7
	case 107, HideBirdHouseBirds_8
	case 108, HideBirdHouseBirds_9
	case 109, HideBirdHouseBirds_10
	case 110, HideBirdHouseBirds_11
	case 111, HideBirdHouseBirds_12
	case 112, HideBirdHouseBirds_13
	case 113, HideBirdHouseBirds_14
	case 114, HideBirdHouseBirds_15
	case 115, HideBirdHouseBirds_16
	case 116, HideBirdHouseBirds_17
	case 117, HideBirdHouseBirds_18
	case 118, HideBirdHouseBirds_19
	case 119, HideBirdHouseBirds_20
	case 120, HideBirdHouseBirds_21
	case 121, HideBirdHouseBirds_22
	case 122, HideBirdHouseBirds_23
	case 123, HideBirdHouseBirds_24
	case 124, HideBirdHouseBirds_25
	case 125, HideBirdHouseBirds_26
	case 126, HideBirdHouseBirds_27
	case 127, HideBirdHouseBirds_28
	case 128, HideBirdHouseBirds_29
	case 129, HideBirdHouseBirds_30
	case 130, HideBirdHouseBirds_31
	case 131, HideBirdHouseBirds_32
	return

HideBirdHouseBirds_2:
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_3:
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_4:
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_5:
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_6:
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_7:
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_8:
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_9:
	clearflag FLAG_TEMP_8
	return

HideBirdHouseBirds_10:
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_8
	return

HideBirdHouseBirds_11:
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_12:
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_13:
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_14:
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_15:
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_16:
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_17:
	clearflag FLAG_TEMP_9
	return

HideBirdHouseBirds_18:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_19:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_20:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_21:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_22:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_23:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_24:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_25:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	return

HideBirdHouseBirds_26:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_27:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_28:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_29:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_30:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_31:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_32:
	clearflag FLAG_TEMP_9
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_5
	return


Kaolisle_BirdHouse_BirdMan::
	checkitem ITEM_TM_BULLET_SEED
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_BirdHouse_BirdMan_2
	compare VAR_KAOLISLE_BIRDS, 0
	goto_if_eq Kaolisle_BirdHouse_BirdMan_5
	compare VAR_KAOLISLE_BIRDS, 100
	goto_if_eq Kaolisle_BirdHouse_BirdMan_8
	compare VAR_KAOLISLE_BIRDS, 131
	goto_if_lt Kaolisle_BirdHouse_BirdMan_14
	lock
	faceplayer
	msgbox TakeBulletSeed
	giveitem ITEM_TM_BULLET_SEED
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_BirdHouse_BirdMan_24
Kaolisle_BirdHouse_BirdMan_23:
	goto_if_set FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_26
Kaolisle_BirdHouse_BirdMan_13:
	release
	end

Kaolisle_BirdHouse_BirdMan_2:
	msgbox ThanksForReturningBirds, MSGBOX_NPC
	end

Kaolisle_BirdHouse_BirdMan_5:
	msgbox PleaseHelpReturnBirds, MSGBOX_NPC
	setvar VAR_KAOLISLE_BIRDS, 100
	goto_if_unset FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_11
Kaolisle_BirdHouse_BirdMan_10:
	end

Kaolisle_BirdHouse_BirdMan_8:
	msgbox PleaseHelpReturnBirds_Reminder, MSGBOX_NPC
	goto_if_unset FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_18
Kaolisle_BirdHouse_BirdMan_17:
	end

Kaolisle_BirdHouse_BirdMan_11:
	startquest FLAG_Q28_KAOLISLE_LOSTBIRDS_START
	special ShowJournalPopupAdd
	goto Kaolisle_BirdHouse_BirdMan_10

Kaolisle_BirdHouse_BirdMan_14:
	msgbox SomeBirdsAreBack, MSGBOX_NPC
	goto_if_unset FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_21
Kaolisle_BirdHouse_BirdMan_20:
	end

Kaolisle_BirdHouse_BirdMan_18:
	startquest FLAG_Q28_KAOLISLE_LOSTBIRDS_START
	special ShowJournalPopupAdd
	goto Kaolisle_BirdHouse_BirdMan_17

Kaolisle_BirdHouse_BirdMan_21:
	startquest FLAG_Q28_KAOLISLE_LOSTBIRDS_START
	special ShowJournalPopupAdd
	goto Kaolisle_BirdHouse_BirdMan_20

Kaolisle_BirdHouse_BirdMan_24:
	goto ZeBagIsFull
	goto Kaolisle_BirdHouse_BirdMan_23

Kaolisle_BirdHouse_BirdMan_26:
	completequest FLAG_Q28_KAOLISLE_LOSTBIRDS_COMPLETE
	special ShowJournalPopupRemove
	goto Kaolisle_BirdHouse_BirdMan_13


KaolisleBirdHouse_Pikipek::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKIPEK, CRY_MODE_NORMAL
	msgbox KaolisleBirdHouse_Pikipek_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


KaolisleBirdHouse_Trumbeak::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TRUMBEAK, CRY_MODE_NORMAL
	msgbox KaolisleBirdHouse_Trumbeak_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


KaolisleBirdHouse_Pikipek_Text_0:
	.string "Pikipek: Kreek!$"

KaolisleBirdHouse_Trumbeak_Text_0:
	.string "Trumbeak: Kreek!$"

ThanksForReturningBirds::
	.string "Thank you again for guiding my\n"
	.string "precious birds back!$"

PleaseHelpReturnBirds::
	.string "This morning I accidentally left one\n"
	.string "of my windows open and all my exotic\l"
	.string "birds escaped.\p"
	.string "Do you think you could help me\n"
	.string "guide them back?\p"
	.string "They very much like the weather here\n"
	.string "so I doubt they've flown too far.\p"
	.string "There should be three Pikipeks and\n"
	.string "two Trumbeaks.\p"
	.string "The Trumbeaks love the ocean air,\n"
	.string "so they're probably flying somewhere\l"
	.string "above the ocean.\p"
	.string "The Pikipeks aren't very good fliers,\n"
	.string "so I assume they would probably stick\l"
	.string "rather close to land.\p"
	.string "They must've simply gotten lost, so\n"
	.string "if you give them a gentle nudge and\l"
	.string "point towards home, I'm sure they\l"
	.string "can figure out the rest.$"

PleaseHelpReturnBirds_Reminder::
	.string "There should be three Pikipeks and\n"
	.string "two Trumbeaks.\p"
	.string "They must've simply gotten lost, so\n"
	.string "if you give them a gentle nudge and\l"
	.string "point towards home, I'm sure they\l"
	.string "can figure out the rest.$"

SomeBirdsAreBack::
	.string "I see some of the birds are back,\n"
	.string "but some are still missing.\p"
	.string "As a reminder, there should be\n"
	.string "three Pikipeks and two Trumbeaks.$"

TakeBulletSeed::
	.string "Thank you so much for guiding my\n"
	.string "precious birds back!\p"
	.string "I don't have much to offer in\n"
	.string "terms of rewards, but I hope this\l"
	.string "will suffice.$"
