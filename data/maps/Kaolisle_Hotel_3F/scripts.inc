Kaolisle_Hotel_3F_MapScripts::
	.byte 0


Room301::
# 4 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Room301_Text_0, MSGBOX_SIGN
	end


Room302::
# 8 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Room302_Text_0, MSGBOX_SIGN
	end


Room303::
# 12 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Room303_Text_0, MSGBOX_SIGN
	end


Room304::
# 16 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Room304_Text_0, MSGBOX_SIGN
	end


Kaolisle_Hotel_3F_Attendant::
# 21 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Kaolisle_Hotel_3F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_Woman1::
# 25 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Kaolisle_Hotel_3F_Woman1_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_HexManiac::
# 29 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Kaolisle_Hotel_3F_HexManiac_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_EchoWoman::
# 33 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	goto_if_set FLAG_OBTAINED_ECHOEDVOICE, Kaolisle_Hotel_3F_EchoWoman_2
# 37 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	lock
# 38 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	faceplayer
# 39 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Kaolisle_Hotel_3F_EchoWoman_Text, MSGBOX_DEFAULT
# 40 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	waitse
# 41 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	giveitem ITEM_TM_ECHOED_VOICE
# 42 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	setflag FLAG_OBTAINED_ECHOEDVOICE
# 43 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	waitfanfare
# 44 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	closemessage
# 45 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	release
	end

Kaolisle_Hotel_3F_EchoWoman_2:
# 34 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Kaolisle_Hotel_3F_EchoWoman_Text2, MSGBOX_NPC
	end


Kaolisle_Hotel_3F_Man5::
# 49 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	msgbox Kaolisle_Hotel_3F_Man5_Text, MSGBOX_NPC
	end


Room301_Text_0:
# 4 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "Room 301$"

Room302_Text_0:
# 8 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "Room 302$"

Room303_Text_0:
# 12 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "Room 303$"

Room304_Text_0:
# 16 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "Room 304$"

Kaolisle_Hotel_3F_Attendant_Text::
# 53 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "Giving the plants water just when they\n"
	.string "need it most is the work of a pro.$"

Kaolisle_Hotel_3F_Woman1_Text::
# 57 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "I'm on a holiday with my Pokémon.\p"
	.string "I considered leaving it in the Pokémon\n"
	.string "Day Care, but I just couldn't do it\l"
	.string "after the look it gave me.$"

Kaolisle_Hotel_3F_HexManiac_Text::
# 63 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "… … … …\p"
	.string "…Don't talk to me…\p"
	.string "…If you do, I won't…\n"
	.string "…hear the elevator…$"

Kaolisle_Hotel_3F_EchoWoman_Text::
# 69 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "Tra-la-la-la-laaa! {EMOJI_NOTE}\p"
	.string "… … … …\p"
	.string "The echo here is a bit weak. I want to\n"
	.string "sing but it sounds so muted without\l"
	.string "the echo.\p"
	.string "What about you? Would you\n"
	.string "like to be my echo?$"

Kaolisle_Hotel_3F_EchoWoman_Text2::
# 78 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "If we sang with Echoed Voice together,\n"
	.string "our power would go through the roof!$"

Kaolisle_Hotel_3F_Man5_Text::
# 82 "data/maps/Kaolisle_Hotel_3F/scripts.pory"
	.string "Whatever type of Pokémon that your\n"
	.string "Pokémon are weak to, you should\l"
	.string "have other Pokémon on your team\l"
	.string "that are effective against that type.$"
