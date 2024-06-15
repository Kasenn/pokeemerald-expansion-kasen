Kaolisle_Hotel_4F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LockDoorAfterGym
	map_script MAP_SCRIPT_ON_TRANSITION, LockDoorAfterGym
	.byte 0


LockDoorAfterGym::
	goto_if_set FLAG_BADGE03_GET, LockDoorAfterGym_2
LockDoorAfterGym_1:
	end

LockDoorAfterGym_2:
	setmetatile 4, 5, 0x0B3, TRUE
	goto LockDoorAfterGym_1


Room401::
	msgbox Room401_Text_0, MSGBOX_SIGN
	end


Room402::
	msgbox Room402_Text_0, MSGBOX_SIGN
	end


Room403::
	msgbox Room403_Text_0, MSGBOX_SIGN
	end


Room404::
	msgbox Room404_Text_0, MSGBOX_SIGN
	end


Kaolisle_Hotel_4F_Man2::
	msgbox Kaolisle_Hotel_4F_Man2_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_4F_Woman4::
	msgbox Kaolisle_Hotel_4F_Woman4_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_4F_FinnishGuy::
	msgbox Kaolisle_Hotel_4F_FinnishGuy_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_4F_Kirlia::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
	msgbox Kaolisle_Hotel_4F_Kirlia_Text, MSGBOX_DEFAULT
	closemessage
	waitmoncry
	release
	end


Kaolisle_Hotel_4F_Jasmine::
	goto_if_set FLAG_TALKED_TO_JASMINE_AT_HOTEL, Kaolisle_Hotel_4F_Jasmine_2
	msgbox Kaolisle_Hotel_4F_Jasmine_Text, MSGBOX_NPC
	setflag FLAG_TALKED_TO_JASMINE_AT_HOTEL
Kaolisle_Hotel_4F_Jasmine_1:
	end

Kaolisle_Hotel_4F_Jasmine_2:
	msgbox Kaolisle_Hotel_4F_Jasmine_Text2, MSGBOX_NPC
	goto Kaolisle_Hotel_4F_Jasmine_1


Kaolisle_Hotel_4F_Attendant::
	msgbox Kaolisle_Hotel_4F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_4F_Attendant2::
	msgbox Kaolisle_Hotel_4F_Attendant2_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_4F_Ampharos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox Kaolisle_Hotel_4F_Ampharos_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Room401_Text_0:
	.string "Room 401$"

Room402_Text_0:
	.string "Room 402$"

Room403_Text_0:
	.string "Room 403$"

Room404_Text_0:
	.string "Room 404\nReservation not found$"

Kaolisle_Hotel_4F_Ampharos_Text_0:
	.string "Amphy: Palu!\nPalulu!$"

Kaolisle_Hotel_4F_Man2_Text::
	.string "I'm staying at the prestigious\n"
	.string "Kaolisle Grand Resort, yet I'm stuck\l"
	.string "in my room working.\l"
	.string "Disappointing!$"

Kaolisle_Hotel_4F_Woman4_Text::
	.string "Did you know this?\n"
	.string "It's from an article in Pokémon Pal.\p"
	.string "“Press the START Button while in a bag\n"
	.string "to sort the items.\l"
	.string "The Berry pocket will return to\l"
	.string "its original order when closing and\l"
	.string "re-opening your bag.”$"

Kaolisle_Hotel_4F_FinnishGuy_Text::
	.string "Olen tullut tänne lomailemaan,\n"
	.string "mutta pakko myöntää, että paikallisten\l"
	.string "kanssa keskustelu on hieman vaikeaa\l"
	.string "heikon kielitaitoni vuoksi.\p"
	.string "Onneksi Kirliani telepaattiset taidot\n"
	.string "auttavat tulkkaamaan puhetta\l"
	.string "kumpaankin suuntaan.$"

Kaolisle_Hotel_4F_FinnishGuy_Text2::
	.string "Oon tääl lomal mut pakko myöntää et\n"
	.string "paikallisten kans puhumine o hieman vaikeet\l"
	.string "heikon kielitaidon vuoks.\p"
	.string "Onneks Kirlian telepaattiset taidot\n"
	.string "auttaa tulkkaa puhetta kumpaanki suuntaa.$"

Kaolisle_Hotel_4F_Kirlia_Text::
	.string "“I'm here on a vacation, though I\n"
	.string "have to admit, having conversations\l"
	.string "with the locals is a bit difficult\l"
	.string "due to my poor language skills.\p"
	.string "Luckily my Kirlia's telepathic\n"
	.string "abilities help with interpreting\l"
	.string "speech between parties.”$"

Kaolisle_Hotel_4F_Attendant_Text::
	.string "Huh?\p"
	.string "Oh, I swear I wasn't slacking off!\p"
	.string "I just happened to spot some dirt\n"
	.string "in this corner!$"

Kaolisle_Hotel_4F_Jasmine_Text::
	.string "Jasmine: Oh, hello…\n"
	.string "Um… {PLAYER}… was it?\p"
	.string "Y-you look like you've grown a lot\n"
	.string "as a trainer since we last met.\p"
	.string "I hope your journey hasn't been\n"
	.string "too arduous…\p"
	.string "I was on my way back home from the\n"
	.string "ranch, but, um… the trip was so long\l"
	.string "that I thought it best to have a rest\l"
	.string "at this hotel…\p"
	.string "Thankfully they still had vacant rooms\n"
	.string "when I arrived…$"

Kaolisle_Hotel_4F_Jasmine_Text2::
	.string "…Oh! This big fella…\n"
	.string "S-she is my traveling companion, Amphy.\p"
	.string "It's been a few years but there was\n"
	.string "a time when Amphy fell seriously ill…\p"
	.string "T-thankfully another trainer showed up\n"
	.string "and helped me rescue it… kinda like\l"
	.string "what you did back at the Ranch…\p"
	.string "Amphy used to operate a lighthouse in\n"
	.string "the city where I used to live, but…\p"
	.string "After being healed, she became much\n"
	.string "more energetic and restless and would\l"
	.string "often sneak out of the lighthouse to\l"
	.string "come and play with me.\p"
	.string "Um, so, it was eventually decided that\n"
	.string "Amphy was unfit to operate the\l"
	.string "lighthouse…\p"
	.string "That's when I decided to bring her\n"
	.string "in as a permanent member of my team\l"
	.string "and she's refused to leave my side\l"
	.string "ever since…$"

Kaolisle_Hotel_4F_Attendant2_Text::
	.string "Here at Kaolisle Grand Resort,\n"
	.string "cleanliness and customer satisfaction\l"
	.string "are our top priorities.\p"
	.string "That is why our staff is ever diligent,\n"
	.string "never letting their attention slip!$"
