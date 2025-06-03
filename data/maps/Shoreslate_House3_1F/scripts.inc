Shoreslate_House3_1F_MapScripts::
	.byte 0


Shoreslate_House3_1F_BlackBelt::
# 4 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_LUCARIONITE, Shoreslate_House3_1F_BlackBelt_2
# 8 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, Shoreslate_House3_1F_BlackBelt_5
# 49 "data/maps/Shoreslate_House3_1F/scripts.pory"
	checkplayergender
# 50 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_8
# 54 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_House3_1F_BlackBelt_Female, MSGBOX_NPC
Shoreslate_House3_1F_BlackBelt_7:
	end

Shoreslate_House3_1F_BlackBelt_2:
# 5 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox LucarioniteGet, MSGBOX_NPC
	end

Shoreslate_House3_1F_BlackBelt_5:
# 9 "data/maps/Shoreslate_House3_1F/scripts.pory"
	checkdexmon SPECIES_LUCARIO
# 10 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_11
# 25 "data/maps/Shoreslate_House3_1F/scripts.pory"
	lock
# 26 "data/maps/Shoreslate_House3_1F/scripts.pory"
	faceplayer
# 27 "data/maps/Shoreslate_House3_1F/scripts.pory"
	checkplayergender
# 28 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_19
# 32 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_BlackBelt_Female_YesAura, MSGBOX_DEFAULT
Shoreslate_House3_1F_BlackBelt_18:
	checkitemspace ITEM_LUCARIONITE
# 0 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_26
Shoreslate_House3_1F_BlackBelt_25:
# 37 "data/maps/Shoreslate_House3_1F/scripts.pory"
	giveitem ITEM_LUCARIONITE
# 38 "data/maps/Shoreslate_House3_1F/scripts.pory"
	waitmessage
# 39 "data/maps/Shoreslate_House3_1F/scripts.pory"
	setflag FLAG_OBTAINED_LUCARIONITE
# 40 "data/maps/Shoreslate_House3_1F/scripts.pory"
	waitse
# 41 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox LucarioniteGet, MSGBOX_NPC
# 42 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_set FLAG_Q15_SHORESLATE_TOUGHGUY_START, Shoreslate_House3_1F_BlackBelt_29
Shoreslate_House3_1F_BlackBelt_28:
	end

Shoreslate_House3_1F_BlackBelt_8:
# 51 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_House3_1F_BlackBelt_Male, MSGBOX_NPC
	goto Shoreslate_House3_1F_BlackBelt_7

Shoreslate_House3_1F_BlackBelt_11:
# 11 "data/maps/Shoreslate_House3_1F/scripts.pory"
	checkplayergender
# 12 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_15
# 16 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_BlackBelt_Female_NoAura, MSGBOX_NPC
Shoreslate_House3_1F_BlackBelt_14:
# 18 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_unset FLAG_Q15_SHORESLATE_TOUGHGUY_START, Shoreslate_House3_1F_BlackBelt_23
Shoreslate_House3_1F_BlackBelt_22:
	end

Shoreslate_House3_1F_BlackBelt_15:
# 13 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_BlackBelt_Male_NoAura, MSGBOX_NPC
	goto Shoreslate_House3_1F_BlackBelt_14

Shoreslate_House3_1F_BlackBelt_19:
# 29 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_BlackBelt_Male_YesAura, MSGBOX_DEFAULT
	goto Shoreslate_House3_1F_BlackBelt_18

Shoreslate_House3_1F_BlackBelt_23:
# 19 "data/maps/Shoreslate_House3_1F/scripts.pory"
	startquest FLAG_Q15_SHORESLATE_TOUGHGUY_START
# 20 "data/maps/Shoreslate_House3_1F/scripts.pory"
	special ShowJournalPopupAdd
	goto Shoreslate_House3_1F_BlackBelt_22

Shoreslate_House3_1F_BlackBelt_26:
# 35 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto ZeBagIsFull
	goto Shoreslate_House3_1F_BlackBelt_25

Shoreslate_House3_1F_BlackBelt_29:
# 43 "data/maps/Shoreslate_House3_1F/scripts.pory"
	completequest FLAG_Q15_SHORESLATE_TOUGHGUY_COMPLETE
# 44 "data/maps/Shoreslate_House3_1F/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_House3_1F_BlackBelt_28


Shoreslate_House3_2F_Girl::
# 89 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHORESLATE_POTION, Shoreslate_House3_2F_Girl_2
# 93 "data/maps/Shoreslate_House3_1F/scripts.pory"
	switch VAR_TEMP_1
# 94 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 10, Shoreslate_House3_2F_Girl_6
# 104 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 9, Shoreslate_House3_2F_Girl_7
# 107 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 8, Shoreslate_House3_2F_Girl_8
# 110 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 7, Shoreslate_House3_2F_Girl_9
# 113 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 6, Shoreslate_House3_2F_Girl_10
# 116 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 5, Shoreslate_House3_2F_Girl_11
# 119 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 4, Shoreslate_House3_2F_Girl_12
# 122 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 3, Shoreslate_House3_2F_Girl_13
# 125 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 2, Shoreslate_House3_2F_Girl_14
# 128 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 1, Shoreslate_House3_2F_Girl_15
# 131 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 0, Shoreslate_House3_2F_Girl_16
Shoreslate_House3_2F_Girl_4:
	end

Shoreslate_House3_2F_Girl_2:
# 90 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_NoMoreGames, MSGBOX_NPC
	end

Shoreslate_House3_2F_Girl_6:
# 95 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_10, MSGBOX_NPC
	checkitemspace ITEM_SUPER_POTION
# 0 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_2F_Girl_18
Shoreslate_House3_2F_Girl_17:
# 99 "data/maps/Shoreslate_House3_1F/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 100 "data/maps/Shoreslate_House3_1F/scripts.pory"
	setflag FLAG_RECEIVED_SHORESLATE_POTION
# 101 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
# 102 "data/maps/Shoreslate_House3_1F/scripts.pory"
	waitmessage
# 103 "data/maps/Shoreslate_House3_1F/scripts.pory"
	closemessage
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_7:
# 105 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_9, MSGBOX_NPC
# 106 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_8:
# 108 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_8, MSGBOX_NPC
# 109 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_9:
# 111 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_7, MSGBOX_NPC
# 112 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_10:
# 114 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_6, MSGBOX_NPC
# 115 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_11:
# 117 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_5, MSGBOX_NPC
# 118 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_12:
# 120 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_4, MSGBOX_NPC
# 121 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_13:
# 123 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_3, MSGBOX_NPC
# 124 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_14:
# 126 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_2, MSGBOX_NPC
# 127 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_15:
# 129 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_1, MSGBOX_NPC
# 130 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_16:
# 132 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_0, MSGBOX_NPC
# 133 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_18:
# 97 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto ZeBagIsFull
	goto Shoreslate_House3_2F_Girl_17


Shoreslate_House3_3F_Man::
# 188 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_House3_3F_Man_Text, MSGBOX_NPC
	end


Shoreslate_BlackBelt_Male_NoAura::
# 58 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough guy?\n"
	.string "Maybe, but your aura is weak.$"

Shoreslate_BlackBelt_Female_NoAura::
# 62 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough girl?\n"
	.string "Maybe, but your aura is weak.$"

Shoreslate_BlackBelt_Male_YesAura::
# 66 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough guy?\n"
	.string "Yes, I can sense your aura.\l"
	.string "You should take this.$"

Shoreslate_BlackBelt_Female_YesAura::
# 71 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough girl?\n"
	.string "Yes, I can sense your aura.\l"
	.string "You should take this.$"

LucarioniteGet::
# 76 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Never let your fighting spirit die.$"

Shoreslate_House3_1F_BlackBelt_Male::
# 79 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough guy?\n"
	.string "No, I don't think so.$"

Shoreslate_House3_1F_BlackBelt_Female::
# 83 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough girl?\n"
	.string "No, I don't think so.$"

Shoreslate_Annoy_0::
# 138 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "What are you doing in my apartment?\n"
	.string "Please leave.$"

Shoreslate_Annoy_1::
# 142 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Didn't you hear what I said?\n"
	.string "Shoo!$"

Shoreslate_Annoy_2::
# 146 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Why do you still linger?\n"
	.string "Begone!$"

Shoreslate_Annoy_3::
# 150 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Scram!$"

Shoreslate_Annoy_4::
# 153 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Is this like a language barrier thing?\n"
	.string "DOOR. OUT. BYE-BYE!$"

Shoreslate_Annoy_5::
# 157 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Why are you doing this…\n"
	.string "Please, just go…$"

Shoreslate_Annoy_6::
# 161 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "I'll just pretend you're not here.\n"
	.string "You're nothing but a ghost!$"

Shoreslate_Annoy_7::
# 165 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Look, I'm sorry. Resorting to anger\n"
	.string "was wrong of me. But please, could\l"
	.string "you just go already?$"

Shoreslate_Annoy_8::
# 170 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Why are you still here?$"

Shoreslate_Annoy_9::
# 173 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Okay, this is not funny.\n"
	.string "I'm sorry if I've wronged someone,\l"
	.string "but please, just leave me alone already!$"

Shoreslate_Annoy_10::
# 178 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Fine, you win! Will you go away\n"
	.string "if I give you this?$"

Shoreslate_Annoy_NoMoreGames::
# 182 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "You got what you wanted, didn't you?\n"
	.string "Now leave me alone!$"

Shoreslate_House3_3F_Man_Text::
# 191 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Yes, I'm fully aware of how barren\n"
	.string "this place is but give me a break, okay?\l"
	.string "I just moved in.$"
