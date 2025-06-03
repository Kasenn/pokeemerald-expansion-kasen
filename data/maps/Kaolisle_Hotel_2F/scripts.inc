Kaolisle_Hotel_2F_MapScripts::
	.byte 0


Room201::
# 4 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Room201_Text_0, MSGBOX_SIGN
	end


Room202::
# 8 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Room202_Text_0, MSGBOX_SIGN
	end


Room203::
# 12 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Room203_Text_0, MSGBOX_SIGN
	end


Room204::
# 16 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Room204_Text_0, MSGBOX_SIGN
	end


Kaolisle_Hotel_DoorLocked::
# 21 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Kaolisle_Hotel_DoorLocked_Text, MSGBOX_SIGN
	end


Kaolisle_Hotel_2F_Attendant::
# 25 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Kaolisle_Hotel_2F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_2F_Hiker::
# 29 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Kaolisle_Hotel_2F_Hiker_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_2F_Girl2::
# 33 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Kaolisle_Hotel_2F_Girl2_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_2F_Man2::
# 37 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	goto_if_set FLAG_OBTAINED_TROPICALSTONE, Kaolisle_Hotel_2F_Man2_2
# 41 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Kaolisle_Hotel_2F_Man2_Text, MSGBOX_NPC
# 42 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	checkpartymon SPECIES_PIKACHU, 0
# 43 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_Hotel_2F_Man2_5
Kaolisle_Hotel_2F_Man2_4:
# 47 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	checkpartymon SPECIES_EXEGGCUTE, 0
# 48 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_Hotel_2F_Man2_8
Kaolisle_Hotel_2F_Man2_7:
# 52 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	goto_if_unset FLAG_Q25_HOTEL_TROPICALSTONE_START, Kaolisle_Hotel_2F_Man2_11
Kaolisle_Hotel_2F_Man2_10:
	end

Kaolisle_Hotel_2F_Man2_2:
# 38 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox Kaolisle_Hotel_UseStoneCarefully, MSGBOX_NPC
	end

Kaolisle_Hotel_2F_Man2_5:
# 44 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
# 45 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	goto Kaolisle_Hotel_2F_Man2_MonFound
	goto Kaolisle_Hotel_2F_Man2_4

Kaolisle_Hotel_2F_Man2_8:
# 49 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EXEGGCUTE
# 50 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	goto Kaolisle_Hotel_2F_Man2_MonFound
	goto Kaolisle_Hotel_2F_Man2_7

Kaolisle_Hotel_2F_Man2_11:
# 53 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	startquest FLAG_Q25_HOTEL_TROPICALSTONE_START
# 54 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	special ShowJournalPopupAdd
	goto Kaolisle_Hotel_2F_Man2_10


Kaolisle_Hotel_2F_Man2_MonFound::
# 59 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	lock
# 60 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	msgbox ThatMonCouldTropical, MSGBOX_DEFAULT
	checkitemspace ITEM_TROPICAL_STONE
# 0 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_2F_Man2_MonFound_2
Kaolisle_Hotel_2F_Man2_MonFound_1:
# 64 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	waitse
# 65 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	giveitem ITEM_TROPICAL_STONE
# 66 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	setflag FLAG_OBTAINED_TROPICALSTONE
# 67 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	waitfanfare
# 68 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	closemessage
# 69 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	goto_if_set FLAG_Q25_HOTEL_TROPICALSTONE_START, Kaolisle_Hotel_2F_Man2_MonFound_4
	return

Kaolisle_Hotel_2F_Man2_MonFound_2:
# 62 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	goto ZeBagIsFull
	goto Kaolisle_Hotel_2F_Man2_MonFound_1

Kaolisle_Hotel_2F_Man2_MonFound_4:
# 70 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	completequest FLAG_Q25_HOTEL_TROPICALSTONE_COMPLETE
# 71 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	special ShowJournalPopupRemove
	return


Room201_Text_0:
# 4 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "Room 201$"

Room202_Text_0:
# 8 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "Room 202$"

Room203_Text_0:
# 12 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "Room 203$"

Room204_Text_0:
# 16 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "Room 204$"

Kaolisle_Hotel_DoorLocked_Text::
# 75 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "The door is locked.$"

Kaolisle_Hotel_2F_Attendant_Text::
# 78 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "You and your party are welcome to\n"
	.string "relax to the fullest here at the\l"
	.string "Kaolisle Grand Resort.$"

Kaolisle_Hotel_2F_Hiker_Text::
# 83 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "So this is the Sinko region, huh…\n"
	.string "Not bad…$"

Kaolisle_Hotel_2F_Girl2_Text::
# 87 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "Have you heard of mints?\p"
	.string "They are a rare plant that can\n"
	.string "apparently alter a Pokémon's nature!$"

Kaolisle_Hotel_2F_Man2_Text::
# 93 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "I'm an owner of a jewelry shop.\p"
	.string "Part of my job is getting my hands on\n"
	.string "rare stones to be used in our shop.\p"
	.string "In fact, I have this rare Tropical\n"
	.string "Stone right here but I'm not sure it's\l"
	.string "something I should cut.\p"
	.string "Tell you what, if you can show\n"
	.string "me a Pokémon that can use it,\l"
	.string "you can have it!$"

Kaolisle_Hotel_UseStoneCarefully::
# 104 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "That stone is very rare.\p"
	.string "Take care deciding on which Pokémon\n"
	.string "you want to use it.$"

ThatMonCouldTropical::
# 109 "data/maps/Kaolisle_Hotel_2F/scripts.pory"
	.string "Oh, I believe your {STR_VAR_1} could\n"
	.string "probably use this stone!\p"
	.string "A promise is a promise,\n"
	.string "so here you go!$"
