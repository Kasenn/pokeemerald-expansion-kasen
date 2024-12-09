SchoolHall2F_MapScripts::
	.byte 0


School2F_Receptionist::
	lockall
	faceplayer
	msgbox School2F_Receptionist_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


School2F_Door::
	lockall
	msgbox School2F_Door_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	release
	end


SchoolPoster1::
	msgbox SchoolPoster1_Text, MSGBOX_SIGN
	return


SchoolPoster2::
	msgbox SchoolPoster2_Text, MSGBOX_SIGN
	return


SchoolPoster3::
	msgbox SchoolPoster3_Text, MSGBOX_SIGN
	return


SchoolPoster4::
	msgbox SchoolPoster4_Text, MSGBOX_SIGN
	return


SchoolPC::
	msgbox SchoolPC_Text, MSGBOX_SIGN
	return


School2F_Receptionist_Text_0:
	.string "I'm sorry, but the headmaster\nis currently busy.$"

School2F_Door_Text_0:
	.string "It's locked.$"

SchoolPoster1_Text::
	.string "It's a poster advertising some\n"
	.string "sort of school play.$"

SchoolPoster2_Text::
	.string "It's a poster advertising some sort of\n"
	.string "after school Pokémon battling club.$"

SchoolPoster3_Text::
	.string "It's a movie poster about a masked\n"
	.string "super hero, fighting against evil\l"
	.string "with her partner Riolu.$"

SchoolPoster4_Text::
	.string "It's a poster giving instructions\n"
	.string "on how to use the PC as a guest.$"

SchoolPC_Text::
	.string "It's a school PC.\n"
	.string "It doesn't seem to turn on.\p"
	.string "Whoever used it last must have\n"
	.string "forgot to plug in the charger.$"
