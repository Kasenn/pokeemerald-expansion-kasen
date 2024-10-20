OldaleTown_House2_MapScripts::
	.byte 0


NotMyNectar::
	lock
	safefollow
	applymovement 1, NectarUp
	waitmovement 0
	delay 10
	msgbox NotMyNectar_Text, MSGBOX_NPC
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
	waitmovement 0
	delay 30
	release
	return


NectarManiac::
	compare VAR_NECTAR_MANIAC_HOUSE, 0
	goto_if_eq NectarManiac_2
	msgbox NectarManiac_GoRightIn, MSGBOX_NPC
	end

NectarManiac_2:
	msgbox NectarManiac_Text, MSGBOX_NPC
	specialvar VAR_RESULT, CheckOricorio
	compare VAR_RESULT, TRUE
	goto_if_eq NectarManiac_5
NectarManiac_4:
	end

NectarManiac_5:
	safefollow
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox NectarManiac_OricorioFound, MSGBOX_NPC
	setvar VAR_NECTAR_MANIAC_HOUSE, 1
	goto NectarManiac_4


NectarUp:
	face_up
	step_end

NectarManiac_OricorioFound::
	.string "Oh? I can see you've caught one\nof those wretched birds!\pThis means you are someone I can trust\nnot to mess up my beautiful garden!\pPlease, enjoy its peace and\ntranquility to the fullest.$"

NectarManiac_GoRightIn::
	.string "Enjoy the peace and tranquility\nof my beautiful garden.$"

NectarManiac_Text::
	.string "I planted a bunch of expensive flowers\non my backyard to attract some rare\lbug type Pokémon, but instead all\lI get are these stupid birds.\pIf you could show me one of these\nbirds imprisoned inside a Poké Ball,\lI might let you access my backyard.$"

NotMyNectar_Text::
	.string "Excuse me, but did I give you\na permission to enter my backyard?\pYou'll probably just end up trampling\nmy precious flowers.$"
