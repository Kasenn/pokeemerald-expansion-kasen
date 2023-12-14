OldaleTown_House2_MapScripts::
	.byte 0


NotMyNectar::
	lockall
	applymovement 1, NectarUp
	waitmovement 0
	delay 10
	msgbox NotMyNectar_Text, MSGBOX_NPC
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PC_Nectar
	waitmovement 0
	delay 30
	release
	end


NectarManiac::
	msgbox NectarManiac_Text, MSGBOX_NPC
	end


NectarUp:
	face_up
	step_end

PC_Nectar:
	walk_down
	step_end

NectarManiac_Text::
	.string "I planted a bunch of expensive flowers\non my backyard to attract some rare\lbug type Pokémon, but instead all\lI get are these stupid birds.\pIf you could show me one of these\nbirds imprisoned inside a Poké Ball,\lI might let you access my backyard.$"

NotMyNectar_Text::
	.string "Excuse me, but did I give you\na permission to enter my backyard?\pYou'll probably just end up trampling\nmy precious flowers.$"
