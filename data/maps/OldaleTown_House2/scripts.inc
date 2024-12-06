OldaleTown_House2_MapScripts::
	.byte 0


NotMyNectar::
# 4 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 5 "data/maps/OldaleTown_House2/scripts.pory"
	safefollow
# 6 "data/maps/OldaleTown_House2/scripts.pory"
	turnobject 1, DIR_NORTH
# 7 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement 0
# 8 "data/maps/OldaleTown_House2/scripts.pory"
	delay 10
# 9 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NotMyNectar_Text, MSGBOX_NPC
# 10 "data/maps/OldaleTown_House2/scripts.pory"
	waitmessage
# 11 "data/maps/OldaleTown_House2/scripts.pory"
	closemessage
# 12 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 13 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement 0
# 14 "data/maps/OldaleTown_House2/scripts.pory"
	delay 30
# 15 "data/maps/OldaleTown_House2/scripts.pory"
	release
	return


NectarManiac::
# 19 "data/maps/OldaleTown_House2/scripts.pory"
	goto_if_unset FLAG_ORICORIO_SHOWN_TO_MANIAC, NectarManiac_2
# 35 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NectarManiac_GoRightIn, MSGBOX_NPC
	end

NectarManiac_2:
# 20 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 21 "data/maps/OldaleTown_House2/scripts.pory"
	faceplayer
# 22 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NectarManiac_Text
# 23 "data/maps/OldaleTown_House2/scripts.pory"
	specialvar VAR_RESULT, CheckOricorio
# 24 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NectarManiac_5
NectarManiac_4:
	end

NectarManiac_5:
# 25 "data/maps/OldaleTown_House2/scripts.pory"
	safefollow
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	playse SE_PIN
# 27 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 28 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement 0
# 29 "data/maps/OldaleTown_House2/scripts.pory"
	delay 48
# 30 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NectarManiac_OricorioFound, MSGBOX_NPC
# 31 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
	goto NectarManiac_4


NectarManiac_OricorioFound::
# 39 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Oh? I can see you've caught one\nof those wretched birds!\pThis means you are someone I can trust\nnot to mess up my beautiful garden!\pPlease, enjoy its peace and\ntranquility to the fullest.$"

NectarManiac_GoRightIn::
# 43 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Enjoy the peace and tranquility\nof my beautiful garden.$"

NectarManiac_Text::
# 47 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I planted a bunch of expensive flowers\non my backyard to attract some rare\lbug type Pokémon, but instead all\lI get are these stupid birds.\pIf you could show me one of these\nbirds imprisoned inside a Poké Ball,\lI might let you access my backyard.$"

NotMyNectar_Text::
# 51 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Excuse me, but did I give you\na permission to enter my backyard?\pYou'll probably just end up trampling\nmy precious flowers.$"
