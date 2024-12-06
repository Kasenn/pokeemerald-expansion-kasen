Shoreslate_House3_1F_MapScripts::
	.byte 0


Shoreslate_House3_1F_BlackBelt::
# 4 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_LUCARIONITE, Shoreslate_House3_1F_BlackBelt_2
# 8 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, Shoreslate_House3_1F_BlackBelt_5
# 40 "data/maps/Shoreslate_House3_1F/scripts.pory"
	checkplayergender
# 41 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_8
# 45 "data/maps/Shoreslate_House3_1F/scripts.pory"
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
# 21 "data/maps/Shoreslate_House3_1F/scripts.pory"
	lock
# 22 "data/maps/Shoreslate_House3_1F/scripts.pory"
	faceplayer
# 23 "data/maps/Shoreslate_House3_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_19
# 28 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_BlackBelt_Female_YesAura, MSGBOX_DEFAULT
Shoreslate_House3_1F_BlackBelt_18:
	checkitemspace ITEM_LUCARIONITE
# 0 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_23
Shoreslate_House3_1F_BlackBelt_22:
# 33 "data/maps/Shoreslate_House3_1F/scripts.pory"
	giveitem ITEM_LUCARIONITE
# 34 "data/maps/Shoreslate_House3_1F/scripts.pory"
	waitmessage
# 35 "data/maps/Shoreslate_House3_1F/scripts.pory"
	waitse
# 36 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox LucarioniteGet, MSGBOX_NPC
	end

Shoreslate_House3_1F_BlackBelt_8:
# 42 "data/maps/Shoreslate_House3_1F/scripts.pory"
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
	end

Shoreslate_House3_1F_BlackBelt_15:
# 13 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_BlackBelt_Male_NoAura, MSGBOX_NPC
	goto Shoreslate_House3_1F_BlackBelt_14

Shoreslate_House3_1F_BlackBelt_19:
# 25 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_BlackBelt_Male_YesAura, MSGBOX_DEFAULT
	goto Shoreslate_House3_1F_BlackBelt_18

Shoreslate_House3_1F_BlackBelt_23:
# 31 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto ZeBagIsFull
	goto Shoreslate_House3_1F_BlackBelt_22


Shoreslate_House3_2F_Girl::
# 80 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHORESLATE_POTION, Shoreslate_House3_2F_Girl_2
# 84 "data/maps/Shoreslate_House3_1F/scripts.pory"
	switch VAR_TEMP_1
# 85 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 10, Shoreslate_House3_2F_Girl_6
# 95 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 9, Shoreslate_House3_2F_Girl_7
# 98 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 8, Shoreslate_House3_2F_Girl_8
# 101 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 7, Shoreslate_House3_2F_Girl_9
# 104 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 6, Shoreslate_House3_2F_Girl_10
# 107 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 5, Shoreslate_House3_2F_Girl_11
# 110 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 4, Shoreslate_House3_2F_Girl_12
# 113 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 3, Shoreslate_House3_2F_Girl_13
# 116 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 2, Shoreslate_House3_2F_Girl_14
# 119 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 1, Shoreslate_House3_2F_Girl_15
# 122 "data/maps/Shoreslate_House3_1F/scripts.pory"
	case 0, Shoreslate_House3_2F_Girl_16
Shoreslate_House3_2F_Girl_4:
	end

Shoreslate_House3_2F_Girl_2:
# 81 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_NoMoreGames, MSGBOX_NPC
	end

Shoreslate_House3_2F_Girl_6:
# 86 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_10, MSGBOX_NPC
	checkitemspace ITEM_SUPER_POTION
# 0 "data/maps/Shoreslate_House3_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_2F_Girl_18
Shoreslate_House3_2F_Girl_17:
# 90 "data/maps/Shoreslate_House3_1F/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 91 "data/maps/Shoreslate_House3_1F/scripts.pory"
	setflag FLAG_RECEIVED_SHORESLATE_POTION
# 92 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
# 93 "data/maps/Shoreslate_House3_1F/scripts.pory"
	waitmessage
# 94 "data/maps/Shoreslate_House3_1F/scripts.pory"
	closemessage
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_7:
# 96 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_9, MSGBOX_NPC
# 97 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_8:
# 99 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_8, MSGBOX_NPC
# 100 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_9:
# 102 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_7, MSGBOX_NPC
# 103 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_10:
# 105 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_6, MSGBOX_NPC
# 106 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_11:
# 108 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_5, MSGBOX_NPC
# 109 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_12:
# 111 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_4, MSGBOX_NPC
# 112 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_13:
# 114 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_3, MSGBOX_NPC
# 115 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_14:
# 117 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_2, MSGBOX_NPC
# 118 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_15:
# 120 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_1, MSGBOX_NPC
# 121 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_16:
# 123 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_Annoy_0, MSGBOX_NPC
# 124 "data/maps/Shoreslate_House3_1F/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_18:
# 88 "data/maps/Shoreslate_House3_1F/scripts.pory"
	goto ZeBagIsFull
	goto Shoreslate_House3_2F_Girl_17


Shoreslate_House3_3F_Man::
# 179 "data/maps/Shoreslate_House3_1F/scripts.pory"
	msgbox Shoreslate_House3_3F_Man_Text, MSGBOX_NPC
	end


Shoreslate_BlackBelt_Male_NoAura::
# 49 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough guy?\n"
	.string "Maybe, but your aura is weak.$"

Shoreslate_BlackBelt_Female_NoAura::
# 53 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough girl?\n"
	.string "Maybe, but your aura is weak.$"

Shoreslate_BlackBelt_Male_YesAura::
# 57 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough guy?\n"
	.string "Yes, I can sense your aura.\l"
	.string "You should take this.$"

Shoreslate_BlackBelt_Female_YesAura::
# 62 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough girl?\n"
	.string "Yes, I can sense your aura.\l"
	.string "You should take this.$"

LucarioniteGet::
# 67 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Never let your fighting spirit die.$"

Shoreslate_House3_1F_BlackBelt_Male::
# 70 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough guy?\n"
	.string "No, I don't think so.$"

Shoreslate_House3_1F_BlackBelt_Female::
# 74 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Are you a tough girl?\n"
	.string "No, I don't think so.$"

Shoreslate_Annoy_0::
# 129 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "What are you doing in my apartment?\n"
	.string "Please leave.$"

Shoreslate_Annoy_1::
# 133 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Didn't you hear what I said?\n"
	.string "Shoo!$"

Shoreslate_Annoy_2::
# 137 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Why do you still linger?\n"
	.string "Begone!$"

Shoreslate_Annoy_3::
# 141 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Scram!$"

Shoreslate_Annoy_4::
# 144 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Is this like a language barrier thing?\n"
	.string "DOOR. OUT. BYE-BYE!$"

Shoreslate_Annoy_5::
# 148 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Why are you doing this…\n"
	.string "Please, just go…$"

Shoreslate_Annoy_6::
# 152 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "I'll just pretend you're not here.\n"
	.string "You're nothing but a ghost!$"

Shoreslate_Annoy_7::
# 156 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Look, I'm sorry. Resorting to anger\n"
	.string "was wrong of me. But please, could\l"
	.string "you just go already?$"

Shoreslate_Annoy_8::
# 161 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Why are you still here?$"

Shoreslate_Annoy_9::
# 164 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Okay, this is not funny.\n"
	.string "I'm sorry if I've wronged someone,\l"
	.string "but please, just leave me alone already!$"

Shoreslate_Annoy_10::
# 169 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Fine, you win! Will you go away\n"
	.string "if I give you this?$"

Shoreslate_Annoy_NoMoreGames::
# 173 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "You got what you wanted, didn't you?\n"
	.string "Now leave me alone!$"

Shoreslate_House3_3F_Man_Text::
# 182 "data/maps/Shoreslate_House3_1F/scripts.pory"
	.string "Yes, I'm fully aware of how barren\n"
	.string "this place is but give me a break, okay?\l"
	.string "I just moved in.$"
