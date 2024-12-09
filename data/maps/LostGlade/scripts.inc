LostGlade_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GladeLandmark
	.byte 0


GladeLandmark::
	setflag FLAG_LANDMARK_LOST_GLADE
	return


LostGladeShrine::
	msgbox LostGladeShrine_Text_0, MSGBOX_SIGN
	return


LostGladeCamper::
	goto_if_set FLAG_GLADE_PUZZLE, LostGladeCamper_1
	msgbox LostGladeCamper_Text_1, MSGBOX_NPC
	return

LostGladeCamper_1:
	msgbox LostGladeCamper_Text_0, MSGBOX_NPC
	return


LostGladeFlag::
	goto_if_unset FLAG_GLADE_PUZZLE, LostGladeFlag_2
LostGladeFlag_1:
	releaseall
	end

LostGladeFlag_2:
	setflag FLAG_GLADE_PUZZLE
	goto LostGladeFlag_1


LostGladeShrine_Text_0:
	.string "A forgotten shrine for some\nforgotten deity.\pIt looks like there's a slot for\nsome kind of object here.$"

LostGladeCamper_Text_0:
	.string "You've been to the large puddle\nas well, haven't you?\pIt seems to appear any time I get\ncompletely lost, almost as if\lguiding me back to the start.\pThere must be some clue to breaking\nthe curse on this place.$"

LostGladeCamper_Text_1:
	.string "This place is weird.\pNo matter which direction I go,\nI seem to always end up back here.$"
