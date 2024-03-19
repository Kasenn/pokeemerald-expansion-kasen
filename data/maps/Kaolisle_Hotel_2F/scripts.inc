Kaolisle_Hotel_2F_MapScripts::
	.byte 0


Room201::
	msgbox Room201_Text_0, MSGBOX_SIGN
	end


Room202::
	msgbox Room202_Text_0, MSGBOX_SIGN
	end


Room203::
	msgbox Room203_Text_0, MSGBOX_SIGN
	end


Room204::
	msgbox Room204_Text_0, MSGBOX_SIGN
	end


Kaolisle_Hotel_DoorLocked::
	msgbox Kaolisle_Hotel_DoorLocked_Text, MSGBOX_SIGN
	end


Kaolisle_Hotel_2F_Attendant::
	msgbox Kaolisle_Hotel_2F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_2F_Hiker::
	msgbox Kaolisle_Hotel_2F_Hiker_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_2F_Girl2::
	msgbox Kaolisle_Hotel_2F_Girl2_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_2F_Man2::
	goto_if_set FLAG_OBTAINED_TROPICALSTONE, Kaolisle_Hotel_2F_Man2_2
	msgbox Kaolisle_Hotel_2F_Man2_Text, MSGBOX_NPC
	checkpartymon SPECIES_PIKACHU, 0
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_Hotel_2F_Man2_5
Kaolisle_Hotel_2F_Man2_4:
	checkpartymon SPECIES_EXEGGCUTE, 0
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_Hotel_2F_Man2_8
Kaolisle_Hotel_2F_Man2_7:
	end

Kaolisle_Hotel_2F_Man2_2:
	msgbox Kaolisle_Hotel_UseStoneCarefully, MSGBOX_NPC
	end

Kaolisle_Hotel_2F_Man2_5:
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
	goto Kaolisle_Hotel_2F_Man2_MonFound
	goto Kaolisle_Hotel_2F_Man2_4

Kaolisle_Hotel_2F_Man2_8:
	bufferspeciesname STR_VAR_1, SPECIES_EXEGGCUTE
	goto Kaolisle_Hotel_2F_Man2_MonFound
	goto Kaolisle_Hotel_2F_Man2_7


Kaolisle_Hotel_2F_Man2_MonFound::
	lock
	msgbox ThatMonCouldTropical, MSGBOX_DEFAULT
	checkitemspace ITEM_TROPICAL_STONE
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_2F_Man2_MonFound_2
	waitse
	giveitem ITEM_TROPICAL_STONE
	setflag FLAG_OBTAINED_TROPICALSTONE
	waitfanfare
	closemessage
	return

Kaolisle_Hotel_2F_Man2_MonFound_2:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


Room201_Text_0:
	.string "Room 201$"

Room202_Text_0:
	.string "Room 202$"

Room203_Text_0:
	.string "Room 203$"

Room204_Text_0:
	.string "Room 204$"

Kaolisle_Hotel_DoorLocked_Text::
	.string "The door is locked.$"

Kaolisle_Hotel_2F_Attendant_Text::
	.string "You and your party are welcome to\n"
	.string "relax to the fullest here at the\l"
	.string "Kaolisle Grand Resort.$"

Kaolisle_Hotel_2F_Hiker_Text::
	.string "So this is the Sinko region, huh…\n"
	.string "Not bad…$"

Kaolisle_Hotel_2F_Girl2_Text::
	.string "Have you heard of mints?\p"
	.string "They are a rare plant that can\n"
	.string "apparently alter a Pokémon's nature!$"

Kaolisle_Hotel_2F_Man2_Text::
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
	.string "That stone is very rare.\p"
	.string "Take care deciding on which Pokémon\n"
	.string "you want to use it.$"

ThatMonCouldTropical::
	.string "Oh, I believe your {STR_VAR_1} could\n"
	.string "probably use this stone!\p"
	.string "A promise is a promise,\n"
	.string "so here you go!$"
