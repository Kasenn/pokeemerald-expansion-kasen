Kaolisle_Hotel_3F_MapScripts::
	.byte 0


Room301::
	msgbox Room301_Text_0, MSGBOX_SIGN
	end


Room302::
	msgbox Room302_Text_0, MSGBOX_SIGN
	end


Room303::
	msgbox Room303_Text_0, MSGBOX_SIGN
	end


Room304::
	msgbox Room304_Text_0, MSGBOX_SIGN
	end


Kaolisle_Hotel_3F_Attendant::
	msgbox Kaolisle_Hotel_3F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_Woman1::
	msgbox Kaolisle_Hotel_3F_Woman1_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_HexManiac::
	msgbox Kaolisle_Hotel_3F_HexManiac_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_EchoWoman::
	goto_if_set FLAG_OBTAINED_ECHOEDVOICE, Kaolisle_Hotel_3F_EchoWoman_2
	lock
	faceplayer
	msgbox Kaolisle_Hotel_3F_EchoWoman_Text, MSGBOX_DEFAULT
	waitse
	giveitem ITEM_TM49
	setflag FLAG_OBTAINED_ECHOEDVOICE
	waitfanfare
	closemessage
	release
	end

Kaolisle_Hotel_3F_EchoWoman_2:
	msgbox Kaolisle_Hotel_3F_EchoWoman_Text2, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_Man5::
	msgbox Kaolisle_Hotel_3F_Man5_Text, MSGBOX_NPC
	end


Room301_Text_0:
	.string "Room 301$"

Room302_Text_0:
	.string "Room 302$"

Room303_Text_0:
	.string "Room 303$"

Room304_Text_0:
	.string "Room 304$"

Kaolisle_Hotel_3F_Attendant_Text::
	.string "Giving the plants water just when they\n"
	.string "need it most is the work of a pro.$"

Kaolisle_Hotel_3F_Woman1_Text::
	.string "I'm on a holiday with my Pokémon.\p"
	.string "I considered leaving it in the Pokémon\n"
	.string "Day Care, but I just couldn't do it\l"
	.string "after the look it gave me.$"

Kaolisle_Hotel_3F_HexManiac_Text::
	.string "… … … …\p"
	.string "…Don't talk to me…\p"
	.string "…If you do, I won't…\n"
	.string "…hear the elevator…$"

Kaolisle_Hotel_3F_EchoWoman_Text::
	.string "Tra-la-la-la-laaa! {EMOJI_NOTE}\p"
	.string "… … … …\p"
	.string "The echo here is a bit weak. I want to\n"
	.string "sing but it sounds so muted without\l"
	.string "the echo.\p"
	.string "What about you? Would you\n"
	.string "like to be my echo?$"

Kaolisle_Hotel_3F_EchoWoman_Text2::
	.string "If we sang with Echoed Voice together,\n"
	.string "our power would go through the roof!$"

Kaolisle_Hotel_3F_Man5_Text::
	.string "Whatever type of Pokémon that your\n"
	.string "Pokémon are weak to, you should\l"
	.string "have other Pokémon on your team\l"
	.string "that are effective against that type.$"
