SafariZone_RestHouse_MapScripts::
	.byte 0


SafariZone_RestHouse_Youngster::
	msgbox SafariZone_RestHouse_Text_Youngster2, MSGBOX_NPC
	end


SafariZone_RestHouse_PsychicM::
	msgbox SafariZone_RestHouse_Text_PsychicM2, MSGBOX_NPC
	end


SafariZone_RestHouse_FatMan::
	goto_if_set FLAG_RESTED_AT_SAFARI, SafariZone_RestHouse_FatMan_2
	lock
	faceplayer
	msgbox SafariZone_RestHouse_Text_FatMan2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SafariZone_RestHouse_FatMan_5
	special RestAtSafari
	setflag FLAG_RESTED_AT_SAFARI
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	delay 15
	msgbox RefreshedSafari, MSGBOX_NPC
	end

SafariZone_RestHouse_FatMan_2:
	msgbox AlreadyRestedSafari, MSGBOX_NPC
	end

	end

SafariZone_RestHouse_FatMan_5:
	msgbox GoSafari, MSGBOX_NPC
	end


SafariZone_RestHouse_Text_PsychicM2::
	.string "Every area I've seen so far has been\n"
	.string "so unique.\l"
	.string "I wonder what lies further to the north.$"

SafariZone_RestHouse_Text_Youngster2::
	.string "I've been looking for a real rare\n"
	.string "Pokémon that I could use to brag to\l"
	.string "my friends but so far I haven't had\l"
	.string "much luck…$"

SafariZone_RestHouse_Text_FatMan2::
	.string "This is the Safari Zone Rest House.\p"
	.string "People who rest here have more energy\n"
	.string "to keep continuing their Safari Game.\p"
	.string "Would you like to take a rest?$"

GoSafari::
	.string "I get it.\p"
	.string "You must be too excited to continue your\n"
	.string "Safari Game that you simply cannot wait.$"

RefreshedSafari::
	.string "Doesn't it feel great to take a moment\n"
	.string "of respite?\p"
	.string "Enjoy the rest of your Safari Game!$"

AlreadyRestedSafari::
	.string "You've already rested here once during\n"
	.string "your Safari Game.\l"
	.string "Go out there and enjoy the Safari!$"
