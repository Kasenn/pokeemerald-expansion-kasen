LostGlade_MapScripts::
# 2 "data/maps/LostGlade/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GladeLandmark
	.byte 0


GladeLandmark::
# 6 "data/maps/LostGlade/scripts.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
	return


LostGladeShrine::
# 10 "data/maps/LostGlade/scripts.pory"
	msgbox LostGladeShrine_Text_0, MSGBOX_SIGN
	return


LostGladeCamper::
# 14 "data/maps/LostGlade/scripts.pory"
	goto_if_set FLAG_GLADE_PUZZLE, LostGladeCamper_1
# 18 "data/maps/LostGlade/scripts.pory"
	msgbox LostGladeCamper_Text_1, MSGBOX_NPC
	return

LostGladeCamper_1:
# 15 "data/maps/LostGlade/scripts.pory"
	msgbox LostGladeCamper_Text_0, MSGBOX_NPC
	return


LostGladeFlag::
# 23 "data/maps/LostGlade/scripts.pory"
	goto_if_unset FLAG_GLADE_PUZZLE, LostGladeFlag_2
LostGladeFlag_1:
# 26 "data/maps/LostGlade/scripts.pory"
	releaseall
	end

LostGladeFlag_2:
# 24 "data/maps/LostGlade/scripts.pory"
	setflag FLAG_GLADE_PUZZLE
	goto LostGladeFlag_1


LostGladeShrine_Text_0:
# 10 "data/maps/LostGlade/scripts.pory"
	.string "A forgotten shrine for some\nforgotten deity.\pIt looks like there's a slot for\nsome kind of object here.$"

LostGladeCamper_Text_0:
# 15 "data/maps/LostGlade/scripts.pory"
	.string "You've been to the large puddle\nas well, haven't you?\pIt seems to appear any time I get\ncompletely lost, almost as if\lguiding me back to the start.\pThere must be some clue to breaking\nthe curse on this place.$"

LostGladeCamper_Text_1:
# 18 "data/maps/LostGlade/scripts.pory"
	.string "This place is weird.\pNo matter which direction I go,\nI seem to always end up back here.$"
