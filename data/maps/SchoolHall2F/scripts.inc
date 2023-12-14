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


School2F_Receptionist_Text_0:
	.string "I'm sorry, but the headmaster\nis currently busy.$"

School2F_Door_Text_0:
	.string "It's locked.$"
