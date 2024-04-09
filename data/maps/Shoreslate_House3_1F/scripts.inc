Shoreslate_House3_1F_MapScripts::
	.byte 0


Shoreslate_House3_1F_BlackBelt::
	goto_if_set FLAG_OBTAINED_LUCARIONITE, Shoreslate_House3_1F_BlackBelt_2
	goto_if_set FLAG_OBTAINED_MEGA_RING, Shoreslate_House3_1F_BlackBelt_5
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_8
	msgbox Shoreslate_House3_1F_BlackBelt_Female, MSGBOX_NPC
Shoreslate_House3_1F_BlackBelt_7:
	end

Shoreslate_House3_1F_BlackBelt_2:
	msgbox LucarioniteGet, MSGBOX_NPC
	end

Shoreslate_House3_1F_BlackBelt_5:
	checkdexmon SPECIES_LUCARIO
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_11
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_19
	msgbox Shoreslate_BlackBelt_Female_YesAura, MSGBOX_DEFAULT
Shoreslate_House3_1F_BlackBelt_18:
	checkitemspace ITEM_LUCARIONITE
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_23
	giveitem ITEM_LUCARIONITE
	waitmessage
	waitse
	msgbox LucarioniteGet, MSGBOX_NPC
	end

Shoreslate_House3_1F_BlackBelt_8:
	msgbox Shoreslate_House3_1F_BlackBelt_Male, MSGBOX_NPC
	goto Shoreslate_House3_1F_BlackBelt_7

Shoreslate_House3_1F_BlackBelt_11:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Shoreslate_House3_1F_BlackBelt_15
	msgbox Shoreslate_BlackBelt_Female_NoAura, MSGBOX_NPC
Shoreslate_House3_1F_BlackBelt_14:
	end

Shoreslate_House3_1F_BlackBelt_15:
	msgbox Shoreslate_BlackBelt_Male_NoAura, MSGBOX_NPC
	goto Shoreslate_House3_1F_BlackBelt_14

Shoreslate_House3_1F_BlackBelt_19:
	msgbox Shoreslate_BlackBelt_Male_YesAura, MSGBOX_DEFAULT
	goto Shoreslate_House3_1F_BlackBelt_18

Shoreslate_House3_1F_BlackBelt_23:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


Shoreslate_House3_2F_Girl::
	goto_if_set FLAG_RECEIVED_SHORESLATE_POTION, Shoreslate_House3_2F_Girl_2
	switch VAR_TEMP_1
	case 10, Shoreslate_House3_2F_Girl_6
	case 9, Shoreslate_House3_2F_Girl_7
	case 8, Shoreslate_House3_2F_Girl_8
	case 7, Shoreslate_House3_2F_Girl_9
	case 6, Shoreslate_House3_2F_Girl_10
	case 5, Shoreslate_House3_2F_Girl_11
	case 4, Shoreslate_House3_2F_Girl_12
	case 3, Shoreslate_House3_2F_Girl_13
	case 2, Shoreslate_House3_2F_Girl_14
	case 1, Shoreslate_House3_2F_Girl_15
	case 0, Shoreslate_House3_2F_Girl_16
Shoreslate_House3_2F_Girl_4:
	end

Shoreslate_House3_2F_Girl_2:
	msgbox Shoreslate_Annoy_NoMoreGames, MSGBOX_NPC
	end

Shoreslate_House3_2F_Girl_6:
	msgbox Shoreslate_Annoy_10, MSGBOX_NPC
	checkitemspace ITEM_SUPER_POTION
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_House3_2F_Girl_18
	giveitem ITEM_SUPER_POTION
	setflag FLAG_RECEIVED_SHORESLATE_POTION
	addvar VAR_TEMP_1, 1
	waitmessage
	closemessage
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_7:
	msgbox Shoreslate_Annoy_9, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_8:
	msgbox Shoreslate_Annoy_8, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_9:
	msgbox Shoreslate_Annoy_7, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_10:
	msgbox Shoreslate_Annoy_6, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_11:
	msgbox Shoreslate_Annoy_5, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_12:
	msgbox Shoreslate_Annoy_4, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_13:
	msgbox Shoreslate_Annoy_3, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_14:
	msgbox Shoreslate_Annoy_2, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_15:
	msgbox Shoreslate_Annoy_1, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_16:
	msgbox Shoreslate_Annoy_0, MSGBOX_NPC
	addvar VAR_TEMP_1, 1
	goto Shoreslate_House3_2F_Girl_4

Shoreslate_House3_2F_Girl_18:
	msgbox FatGuyNotEnoughRoom, MSGBOX_NPC
	end


Shoreslate_House3_3F_Man::
	msgbox Shoreslate_House3_3F_Man_Text, MSGBOX_NPC
	end


Shoreslate_BlackBelt_Male_NoAura::
	.string "Are you a tough guy?\n"
	.string "Maybe, but your aura is weak.$"

Shoreslate_BlackBelt_Female_NoAura::
	.string "Are you a tough girl?\n"
	.string "Maybe, but your aura is weak.$"

Shoreslate_BlackBelt_Male_YesAura::
	.string "Are you a tough guy?\n"
	.string "Yes, I can sense your aura.\l"
	.string "You should take this.$"

Shoreslate_BlackBelt_Female_YesAura::
	.string "Are you a tough girl?\n"
	.string "Yes, I can sense your aura.\l"
	.string "You should take this.$"

LucarioniteGet::
	.string "Never let your fighting spirit die.$"

Shoreslate_House3_1F_BlackBelt_Male::
	.string "Are you a tough guy?\n"
	.string "No, I don't think so.$"

Shoreslate_House3_1F_BlackBelt_Female::
	.string "Are you a tough girl?\n"
	.string "No, I don't think so.$"

Shoreslate_Annoy_0::
	.string "What are you doing in my apartment?\n"
	.string "Please leave.$"

Shoreslate_Annoy_1::
	.string "Didn't you hear what I said?\n"
	.string "Shoo!$"

Shoreslate_Annoy_2::
	.string "Why do you still linger?\n"
	.string "Begone!$"

Shoreslate_Annoy_3::
	.string "Scram!$"

Shoreslate_Annoy_4::
	.string "Is this like a language barrier thing?\n"
	.string "DOOR. OUT. BYE-BYE!$"

Shoreslate_Annoy_5::
	.string "Why are you doing this…\n"
	.string "Please, just go…$"

Shoreslate_Annoy_6::
	.string "I'll just pretend you're not here.\n"
	.string "You're nothing but a ghost!$"

Shoreslate_Annoy_7::
	.string "Look, I'm sorry. Resorting to anger\n"
	.string "was wrong of me. But please, could\l"
	.string "you just go already?$"

Shoreslate_Annoy_8::
	.string "Why are you still here?$"

Shoreslate_Annoy_9::
	.string "Okay, this is not funny.\n"
	.string "I'm sorry if I've wronged someone,\l"
	.string "but please, just leave me alone already!$"

Shoreslate_Annoy_10::
	.string "Fine, you win! Will you go away\n"
	.string "if I give you this?$"

Shoreslate_Annoy_NoMoreGames::
	.string "You got what you wanted, didn't you?\n"
	.string "Now leave me alone!$"

Shoreslate_House3_3F_Man_Text::
	.string "Yes, I'm fully aware of how barren\n"
	.string "this place is but give me a break, okay?\l"
	.string "I just moved in.$"
