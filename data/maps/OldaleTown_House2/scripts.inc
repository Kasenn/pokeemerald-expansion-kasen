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
	delay 10
# 8 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NotMyNectar_Text, MSGBOX_NPC
# 9 "data/maps/OldaleTown_House2/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Down
# 10 "data/maps/OldaleTown_House2/scripts.pory"
	delay 30
# 11 "data/maps/OldaleTown_House2/scripts.pory"
	release
	return


NectarManiac::
# 15 "data/maps/OldaleTown_House2/scripts.pory"
	goto_if_unset FLAG_ORICORIO_SHOWN_TO_MANIAC, NectarManiac_2
# 50 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NectarManiac_GoRightIn, MSGBOX_NPC
	end

NectarManiac_2:
# 16 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 17 "data/maps/OldaleTown_House2/scripts.pory"
	faceplayer
# 18 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NectarManiac_Text, MSGBOX_AUTOCLOSE
# 19 "data/maps/OldaleTown_House2/scripts.pory"
	specialvar VAR_RESULT, CheckOricorio
# 20 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NectarManiac_4
# 34 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox DrewQuickSketch
# 35 "data/maps/OldaleTown_House2/scripts.pory"
	message DrewQuickSketch2
# 36 "data/maps/OldaleTown_House2/scripts.pory"
	waitmessage
# 37 "data/maps/OldaleTown_House2/scripts.pory"
	delay 20
# 38 "data/maps/OldaleTown_House2/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 39 "data/maps/OldaleTown_House2/scripts.pory"
	waitbuttonpress
# 40 "data/maps/OldaleTown_House2/scripts.pory"
	hidemonpic
# 41 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NeverSaidWasAnArtist
# 42 "data/maps/OldaleTown_House2/scripts.pory"
	release
# 43 "data/maps/OldaleTown_House2/scripts.pory"
	goto_if_unset FLAG_Q01_PRIMROSE_ORICORIO_START, NectarManiac_11
NectarManiac_10:
	end

NectarManiac_4:
# 21 "data/maps/OldaleTown_House2/scripts.pory"
	safefollow
# 22 "data/maps/OldaleTown_House2/scripts.pory"
	playse SE_PIN
# 23 "data/maps/OldaleTown_House2/scripts.pory"
	exclamationmark 1
# 24 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox NectarManiac_OricorioFound
# 25 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	release
# 27 "data/maps/OldaleTown_House2/scripts.pory"
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, NectarManiac_8
NectarManiac_7:
	end

NectarManiac_8:
# 28 "data/maps/OldaleTown_House2/scripts.pory"
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
# 29 "data/maps/OldaleTown_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto NectarManiac_7

NectarManiac_11:
# 44 "data/maps/OldaleTown_House2/scripts.pory"
	startquest FLAG_Q01_PRIMROSE_ORICORIO_START
# 45 "data/maps/OldaleTown_House2/scripts.pory"
	special ShowJournalPopupAdd
	goto NectarManiac_10


NectarManiac_OricorioFound::
# 54 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Oh? I can see you've caught one\nof those wretched birds!\pThis means you are someone I can trust\nnot to mess up my beautiful garden!\pPlease, enjoy its peace and\ntranquility to the fullest.$"

NectarManiac_GoRightIn::
# 58 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Enjoy the peace and tranquility\nof my beautiful garden.$"

NeverSaidWasAnArtist::
# 62 "data/maps/OldaleTown_House2/scripts.pory"
	.string "… … … What?\p"
	.string "Never said I was an artist, did I?$"

DrewQuickSketch::
# 67 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I was able to sketch one of the\n"
	.string "culprits before they had a chance\l"
	.string "to flee the scene.$"

DrewQuickSketch2::
# 72 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Here it is.$"

NectarManiac_Text::
# 76 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I planted a bunch of expensive flowers\n"
	.string "in my backyard to attract some rare\l"
	.string "bug type Pokémon, but instead all\l"
	.string "I get are these stupid birds.\p"
	.string "If you could show me one of these\n"
	.string "birds imprisoned inside a Poké Ball,\l"
	.string "I might let you access my backyard.$"

NotMyNectar_Text::
# 86 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Excuse me, but did I give you\na permission to enter my backyard?\pYou'll probably just end up trampling\nmy precious flowers.$"
