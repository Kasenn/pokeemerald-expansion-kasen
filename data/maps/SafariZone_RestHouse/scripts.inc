SafariZone_RestHouse_MapScripts::
	.byte 0


SafariZone_RestHouse_Youngster::
# 4 "data/maps/SafariZone_RestHouse/scripts.pory"
	msgbox SafariZone_RestHouse_Text_Youngster2, MSGBOX_NPC
	end


SafariZone_RestHouse_PsychicM::
# 9 "data/maps/SafariZone_RestHouse/scripts.pory"
	msgbox SafariZone_RestHouse_Text_PsychicM2, MSGBOX_NPC
	end


SafariZone_RestHouse_FatMan::
# 14 "data/maps/SafariZone_RestHouse/scripts.pory"
	goto_if_set FLAG_RESTED_AT_SAFARI, SafariZone_RestHouse_FatMan_2
# 18 "data/maps/SafariZone_RestHouse/scripts.pory"
	lock
# 19 "data/maps/SafariZone_RestHouse/scripts.pory"
	faceplayer
# 20 "data/maps/SafariZone_RestHouse/scripts.pory"
	msgbox SafariZone_RestHouse_Text_FatMan2, MSGBOX_YESNO
# 21 "data/maps/SafariZone_RestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SafariZone_RestHouse_FatMan_5
# 26 "data/maps/SafariZone_RestHouse/scripts.pory"
	special RestAtSafari
# 27 "data/maps/SafariZone_RestHouse/scripts.pory"
	setflag FLAG_RESTED_AT_SAFARI
# 28 "data/maps/SafariZone_RestHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/maps/SafariZone_RestHouse/scripts.pory"
	playfanfare MUS_HEAL
# 30 "data/maps/SafariZone_RestHouse/scripts.pory"
	closemessage
# 31 "data/maps/SafariZone_RestHouse/scripts.pory"
	waitfanfare
# 32 "data/maps/SafariZone_RestHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 33 "data/maps/SafariZone_RestHouse/scripts.pory"
	delay 15
# 34 "data/maps/SafariZone_RestHouse/scripts.pory"
	msgbox RefreshedSafari, MSGBOX_NPC
	end

SafariZone_RestHouse_FatMan_2:
# 15 "data/maps/SafariZone_RestHouse/scripts.pory"
	msgbox AlreadyRestedSafari, MSGBOX_NPC
	end

	end

SafariZone_RestHouse_FatMan_5:
# 22 "data/maps/SafariZone_RestHouse/scripts.pory"
	msgbox GoSafari, MSGBOX_NPC
	end


SafariZone_RestHouse_Text_PsychicM2::
# 40 "data/maps/SafariZone_RestHouse/scripts.pory"
	.string "Every area I've seen so far has been\n"
	.string "so unique.\l"
	.string "I wonder what lies further to the north.$"

SafariZone_RestHouse_Text_Youngster2::
# 45 "data/maps/SafariZone_RestHouse/scripts.pory"
	.string "I've been looking for a real rare\n"
	.string "Pokémon that I could use to brag to\l"
	.string "my friends but so far I haven't had\l"
	.string "much luck…$"

SafariZone_RestHouse_Text_FatMan2::
# 52 "data/maps/SafariZone_RestHouse/scripts.pory"
	.string "This is the Safari Zone Rest House.\p"
	.string "People who rest here have more energy\n"
	.string "to keep continuing their Safari Game.\p"
	.string "Would you like to take a rest?$"

GoSafari::
# 58 "data/maps/SafariZone_RestHouse/scripts.pory"
	.string "I get it.\p"
	.string "You must be too excited to continue your\n"
	.string "Safari Game that you simply cannot wait.$"

RefreshedSafari::
# 63 "data/maps/SafariZone_RestHouse/scripts.pory"
	.string "Doesn't it feel great to take a moment\n"
	.string "of respite?\p"
	.string "Enjoy the rest of your Safari Game!$"

AlreadyRestedSafari::
# 68 "data/maps/SafariZone_RestHouse/scripts.pory"
	.string "You've already rested here once during\n"
	.string "your Safari Game.\l"
	.string "Go out there and enjoy the Safari!$"
