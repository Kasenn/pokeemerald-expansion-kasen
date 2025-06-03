Kaolisle_BirdHouse_MapScripts::
# 2 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideBirdHouseBirds
	.byte 0


HideBirdHouseBirds::
# 12 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	setflag FLAG_TEMP_5
# 13 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	setflag FLAG_TEMP_6
# 14 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	setflag FLAG_TEMP_7
# 15 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	setflag FLAG_TEMP_8
# 16 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	setflag FLAG_TEMP_9
# 17 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	switch VAR_KAOLISLE_BIRDS
# 18 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 101, HideBirdHouseBirds_2
# 20 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 102, HideBirdHouseBirds_3
# 22 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 103, HideBirdHouseBirds_4
# 25 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 104, HideBirdHouseBirds_5
# 27 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 105, HideBirdHouseBirds_6
# 30 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 106, HideBirdHouseBirds_7
# 33 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 107, HideBirdHouseBirds_8
# 37 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 108, HideBirdHouseBirds_9
# 39 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 109, HideBirdHouseBirds_10
# 42 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 110, HideBirdHouseBirds_11
# 45 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 111, HideBirdHouseBirds_12
# 49 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 112, HideBirdHouseBirds_13
# 52 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 113, HideBirdHouseBirds_14
# 56 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 114, HideBirdHouseBirds_15
# 60 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 115, HideBirdHouseBirds_16
# 65 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 116, HideBirdHouseBirds_17
# 67 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 117, HideBirdHouseBirds_18
# 70 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 118, HideBirdHouseBirds_19
# 73 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 119, HideBirdHouseBirds_20
# 77 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 120, HideBirdHouseBirds_21
# 80 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 121, HideBirdHouseBirds_22
# 84 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 122, HideBirdHouseBirds_23
# 88 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 123, HideBirdHouseBirds_24
# 93 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 124, HideBirdHouseBirds_25
# 96 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 125, HideBirdHouseBirds_26
# 100 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 126, HideBirdHouseBirds_27
# 104 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 127, HideBirdHouseBirds_28
# 109 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 128, HideBirdHouseBirds_29
# 113 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 129, HideBirdHouseBirds_30
# 118 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 130, HideBirdHouseBirds_31
# 123 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	case 131, HideBirdHouseBirds_32
	return

HideBirdHouseBirds_2:
# 19 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_3:
# 21 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_4:
# 23 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
# 24 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_5:
# 26 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_6:
# 28 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
# 29 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_7:
# 31 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
# 32 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_8:
# 34 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
# 35 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
# 36 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_9:
# 38 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
	return

HideBirdHouseBirds_10:
# 40 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
# 41 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
	return

HideBirdHouseBirds_11:
# 43 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 44 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_12:
# 46 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 47 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
# 48 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_13:
# 50 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 51 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_14:
# 53 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 54 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 55 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_15:
# 57 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 58 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 59 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_16:
# 61 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 62 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 63 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
# 64 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_17:
# 66 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
	return

HideBirdHouseBirds_18:
# 68 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 69 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_19:
# 71 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 72 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_20:
# 74 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 75 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
# 76 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_21:
# 78 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 79 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_22:
# 81 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 82 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 83 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_23:
# 85 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 86 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 87 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_24:
# 89 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 90 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 91 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
# 92 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_25:
# 94 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 95 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
	return

HideBirdHouseBirds_26:
# 97 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 98 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 99 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_27:
# 101 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 102 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 103 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_28:
# 105 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 106 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 107 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
# 108 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_29:
# 110 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 111 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 112 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HideBirdHouseBirds_30:
# 114 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 115 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 116 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 117 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HideBirdHouseBirds_31:
# 119 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 120 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 121 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 122 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HideBirdHouseBirds_32:
# 124 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_9
# 125 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_8
# 126 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_7
# 127 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_6
# 128 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	clearflag FLAG_TEMP_5
	return


Kaolisle_BirdHouse_BirdMan::
	checkitem ITEM_TM_BULLET_SEED
# 0 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_BirdHouse_BirdMan_2
# 137 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	compare VAR_KAOLISLE_BIRDS, 0
	goto_if_eq Kaolisle_BirdHouse_BirdMan_5
# 146 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	compare VAR_KAOLISLE_BIRDS, 100
	goto_if_eq Kaolisle_BirdHouse_BirdMan_8
# 154 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	compare VAR_KAOLISLE_BIRDS, 131
	goto_if_lt Kaolisle_BirdHouse_BirdMan_14
# 163 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	lock
# 164 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	faceplayer
# 165 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	msgbox TakeBulletSeed
# 166 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 167 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_BirdHouse_BirdMan_24
Kaolisle_BirdHouse_BirdMan_23:
# 170 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	goto_if_set FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_26
Kaolisle_BirdHouse_BirdMan_13:
# 175 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	release
	end

Kaolisle_BirdHouse_BirdMan_2:
# 134 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	msgbox ThanksForReturningBirds, MSGBOX_NPC
	end

Kaolisle_BirdHouse_BirdMan_5:
# 138 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	msgbox PleaseHelpReturnBirds, MSGBOX_NPC
# 139 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	setvar VAR_KAOLISLE_BIRDS, 100
# 140 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	goto_if_unset FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_11
Kaolisle_BirdHouse_BirdMan_10:
	end

Kaolisle_BirdHouse_BirdMan_8:
# 147 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	msgbox PleaseHelpReturnBirds_Reminder, MSGBOX_NPC
# 148 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	goto_if_unset FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_18
Kaolisle_BirdHouse_BirdMan_17:
	end

Kaolisle_BirdHouse_BirdMan_11:
# 141 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	startquest FLAG_Q28_KAOLISLE_LOSTBIRDS_START
# 142 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	special ShowJournalPopupAdd
	goto Kaolisle_BirdHouse_BirdMan_10

Kaolisle_BirdHouse_BirdMan_14:
# 155 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	msgbox SomeBirdsAreBack, MSGBOX_NPC
# 156 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	goto_if_unset FLAG_Q28_KAOLISLE_LOSTBIRDS_START, Kaolisle_BirdHouse_BirdMan_21
Kaolisle_BirdHouse_BirdMan_20:
	end

Kaolisle_BirdHouse_BirdMan_18:
# 149 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	startquest FLAG_Q28_KAOLISLE_LOSTBIRDS_START
# 150 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	special ShowJournalPopupAdd
	goto Kaolisle_BirdHouse_BirdMan_17

Kaolisle_BirdHouse_BirdMan_21:
# 157 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	startquest FLAG_Q28_KAOLISLE_LOSTBIRDS_START
# 158 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	special ShowJournalPopupAdd
	goto Kaolisle_BirdHouse_BirdMan_20

Kaolisle_BirdHouse_BirdMan_24:
# 168 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	goto ZeBagIsFull
	goto Kaolisle_BirdHouse_BirdMan_23

Kaolisle_BirdHouse_BirdMan_26:
# 171 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	completequest FLAG_Q28_KAOLISLE_LOSTBIRDS_COMPLETE
# 172 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	special ShowJournalPopupRemove
	goto Kaolisle_BirdHouse_BirdMan_13


KaolisleBirdHouse_Pikipek::
# 227 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	lock
# 228 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	faceplayer
# 229 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	waitse
# 230 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	playmoncry SPECIES_PIKIPEK, CRY_MODE_NORMAL
# 231 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	msgbox KaolisleBirdHouse_Pikipek_Text_0, MSGBOX_DEFAULT
# 232 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	waitmoncry
# 233 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	release
	end


KaolisleBirdHouse_Trumbeak::
# 237 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	lock
# 238 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	faceplayer
# 239 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	waitse
# 240 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	playmoncry SPECIES_TRUMBEAK, CRY_MODE_NORMAL
# 241 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	msgbox KaolisleBirdHouse_Trumbeak_Text_0, MSGBOX_DEFAULT
# 242 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	waitmoncry
# 243 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	release
	end


KaolisleBirdHouse_Pikipek_Text_0:
# 231 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	.string "Pikipek: Kreek!$"

KaolisleBirdHouse_Trumbeak_Text_0:
# 241 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	.string "Trumbeak: Kreek!$"

ThanksForReturningBirds::
# 179 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	.string "Thank you again for guiding my\n"
	.string "precious birds back!$"

PleaseHelpReturnBirds::
# 183 "data/maps/Kaolisle_BirdHouse/scripts.pory"
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
# 204 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	.string "There should be three Pikipeks and\n"
	.string "two Trumbeaks.\p"
	.string "They must've simply gotten lost, so\n"
	.string "if you give them a gentle nudge and\l"
	.string "point towards home, I'm sure they\l"
	.string "can figure out the rest.$"

SomeBirdsAreBack::
# 212 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	.string "I see some of the birds are back,\n"
	.string "but some are still missing.\p"
	.string "As a reminder, there should be\n"
	.string "three Pikipeks and two Trumbeaks.$"

TakeBulletSeed::
# 218 "data/maps/Kaolisle_BirdHouse/scripts.pory"
	.string "Thank you so much for guiding my\n"
	.string "precious birds back!\p"
	.string "I don't have much to offer in\n"
	.string "terms of rewards, but I hope this\l"
	.string "will suffice.$"
