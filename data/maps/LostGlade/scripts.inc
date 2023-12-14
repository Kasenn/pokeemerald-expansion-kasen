LostGlade_MapScripts::
	.byte 0


LostGladeShrine::
	msgbox LostGladeShrine_Text_0, MSGBOX_SIGN
	end


LostGladeCamper::
	goto_if_set FLAG_UNUSED_GLADE, LostGladeCamper_1
	msgbox LostGladeCamper_Text_1, MSGBOX_NPC
	end

LostGladeCamper_1:
	msgbox LostGladeCamper_Text_0, MSGBOX_NPC
	end


LostGladeFlag::
	goto_if_unset FLAG_UNUSED_GLADE, LostGladeFlag_2
	releaseall
	end

LostGladeFlag_2:
	setflag FLAG_UNUSED_GLADE
	setvar VAR_OLDALE_TOWN_STATE, 2
	releaseall
	end


LostGladeShrine_Text_0:
	.string "A forgotten shrine for some\nforgotten deity.$"

LostGladeCamper_Text_0:
	.string "You've been to the large puddle\nas well, haven't you?\pThere must be some clue to breaking\nthe curse on this place.$"

LostGladeCamper_Text_1:
	.string "This place is weird.\pNo matter which direction I go,\nI seem to always end up back here.$"
