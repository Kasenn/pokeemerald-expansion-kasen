SchoolHall2F_MapScripts::
	.byte 0


School2F_Receptionist::
# 4 "data/maps/SchoolHall2F/scripts.pory"
	lockall
# 5 "data/maps/SchoolHall2F/scripts.pory"
	faceplayer
# 6 "data/maps/SchoolHall2F/scripts.pory"
	msgbox School2F_Receptionist_Text_0, MSGBOX_NPC
# 7 "data/maps/SchoolHall2F/scripts.pory"
	waitmessage
# 8 "data/maps/SchoolHall2F/scripts.pory"
	closemessage
# 9 "data/maps/SchoolHall2F/scripts.pory"
	release
	end


School2F_Door::
# 14 "data/maps/SchoolHall2F/scripts.pory"
	lockall
# 15 "data/maps/SchoolHall2F/scripts.pory"
	msgbox School2F_Door_Text_0, MSGBOX_SIGN
# 16 "data/maps/SchoolHall2F/scripts.pory"
	waitmessage
# 17 "data/maps/SchoolHall2F/scripts.pory"
	closemessage
# 18 "data/maps/SchoolHall2F/scripts.pory"
	release
	end


SchoolPoster1::
# 23 "data/maps/SchoolHall2F/scripts.pory"
	msgbox SchoolPoster1_Text, MSGBOX_SIGN
	return


SchoolPoster2::
# 31 "data/maps/SchoolHall2F/scripts.pory"
	msgbox SchoolPoster2_Text, MSGBOX_SIGN
	return


SchoolPoster3::
# 39 "data/maps/SchoolHall2F/scripts.pory"
	msgbox SchoolPoster3_Text, MSGBOX_SIGN
	return


SchoolPoster4::
# 48 "data/maps/SchoolHall2F/scripts.pory"
	msgbox SchoolPoster4_Text, MSGBOX_SIGN
	return


SchoolPC::
# 56 "data/maps/SchoolHall2F/scripts.pory"
	msgbox SchoolPC_Text, MSGBOX_SIGN
	return


School2F_Receptionist_Text_0:
# 6 "data/maps/SchoolHall2F/scripts.pory"
	.string "I'm sorry, but the headmaster\nis currently busy.$"

School2F_Door_Text_0:
# 15 "data/maps/SchoolHall2F/scripts.pory"
	.string "It's locked.$"

SchoolPoster1_Text::
# 25 "data/maps/SchoolHall2F/scripts.pory"
	.string "It's a poster advertising some\n"
	.string "sort of school play.$"

SchoolPoster2_Text::
# 33 "data/maps/SchoolHall2F/scripts.pory"
	.string "It's a poster advertising some sort of\n"
	.string "after school Pokémon battling club.$"

SchoolPoster3_Text::
# 41 "data/maps/SchoolHall2F/scripts.pory"
	.string "It's a movie poster about a masked\n"
	.string "super hero, fighting against evil\l"
	.string "with her partner Riolu.$"

SchoolPoster4_Text::
# 50 "data/maps/SchoolHall2F/scripts.pory"
	.string "It's a poster giving instructions\n"
	.string "on how to use the PC as a guest.$"

SchoolPC_Text::
# 58 "data/maps/SchoolHall2F/scripts.pory"
	.string "It's a school PC.\n"
	.string "It doesn't seem to turn on.\p"
	.string "Whoever used it last must have\n"
	.string "forgot to plug in the charger.$"
