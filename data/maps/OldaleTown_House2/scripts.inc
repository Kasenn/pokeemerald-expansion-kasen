OldaleTown_House2_MapScripts::
	.byte 0


NotMyNectar::
	lock
	safefollow
	turnobject 1, DIR_NORTH
	delay 10
	msgbox NotMyNectar_Text, MSGBOX_NPC
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
	waitmovement 0
	delay 30
	release
	end


NectarManiac::
	goto_if_unset FLAG_ORICORIO_SHOWN_TO_MANIAC, NectarManiac_2
	msgbox NectarManiac_GoRightIn, MSGBOX_NPC
	end

NectarManiac_2:
	lock
	faceplayer
	msgbox NectarManiac_Text
	specialvar VAR_RESULT, CheckOricorio
	compare VAR_RESULT, TRUE
	goto_if_eq NectarManiac_4
	msgbox DrewQuickSketch
	message DrewQuickSketch2
	waitmessage
	delay 20
	showmonpic SPECIES_SPRIGATITO, 10, 3
	waitbuttonpress
	hidemonpic
	msgbox NeverSaidWasAnArtist
	release
	goto_if_unset FLAG_Q01_PRIMROSE_ORICORIO_START, NectarManiac_11
NectarManiac_10:
	end

NectarManiac_4:
	safefollow
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox NectarManiac_OricorioFound, MSGBOX_NPC
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
	release
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, NectarManiac_8
NectarManiac_7:
	end

NectarManiac_8:
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
	special ShowJournalPopupRemove
	goto NectarManiac_7

NectarManiac_11:
	startquest FLAG_Q01_PRIMROSE_ORICORIO_START
	special ShowJournalPopupAdd
	goto NectarManiac_10


NectarManiac_OricorioFound::
	.string "Oh? I can see you've caught one\nof those wretched birds!\pThis means you are someone I can trust\nnot to mess up my beautiful garden!\pPlease, enjoy its peace and\ntranquility to the fullest.$"

NectarManiac_GoRightIn::
	.string "Enjoy the peace and tranquility\nof my beautiful garden.$"

NeverSaidWasAnArtist::
	.string "… … … What?\p"
	.string "Never said I was an artist, did I?$"

DrewQuickSketch::
	.string "I was able to sketch one of the\n"
	.string "culprits before they had a chance\l"
	.string "to flee the scene.$"

DrewQuickSketch2::
	.string "Here it is.$"

NectarManiac_Text::
	.string "I planted a bunch of expensive flowers\n"
	.string "in my backyard to attract some rare\l"
	.string "bug type Pokémon, but instead all\l"
	.string "I get are these stupid birds.\p"
	.string "If you could show me one of these\n"
	.string "birds imprisoned inside a Poké Ball,\l"
	.string "I might let you access my backyard.$"

NotMyNectar_Text::
	.string "Excuse me, but did I give you\na permission to enter my backyard?\pYou'll probably just end up trampling\nmy precious flowers.$"
