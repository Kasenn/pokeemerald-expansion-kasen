UndergroundRuins_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetRuinsFlag
	map_script MAP_SCRIPT_ON_LOAD, DesertRuin1FTileSet
	.byte 0


SetRuinsFlag::
	setflag FLAG_LANDMARK_DESERT_RUINS
	end


DesertRuin1FTileSet::
	goto_if_unset FLAG_DESERT_RUINS_OPENED, DesertRuin1FTileSet_2
DesertRuin1FTileSet_1:
	end

DesertRuin1FTileSet_2:
	setmetatile 4, 3, 0x245, TRUE
	setmetatile 5, 3, 0x245, TRUE
	setmetatile 6, 3, 0x245, TRUE
	setmetatile 7, 3, 0x245, TRUE
	setmetatile 8, 3, 0x245, TRUE
	setmetatile 9, 3, 0x245, TRUE
	setmetatile 10, 3, 0x245, TRUE
	setmetatile 4, 4, 0x245, TRUE
	setmetatile 5, 4, 0x245, TRUE
	setmetatile 6, 4, 0x245, TRUE
	setmetatile 7, 4, 0x245, TRUE
	setmetatile 8, 4, 0x245, TRUE
	setmetatile 9, 4, 0x245, TRUE
	setmetatile 10, 4, 0x245, TRUE
	setmetatile 4, 5, 0x245, TRUE
	setmetatile 5, 5, 0x245, TRUE
	setmetatile 6, 5, 0x245, TRUE
	setmetatile 7, 5, 0x245, TRUE
	setmetatile 8, 5, 0x245, TRUE
	setmetatile 9, 5, 0x245, TRUE
	setmetatile 10, 5, 0x245, TRUE
	setmetatile 4, 6, 0x245, TRUE
	setmetatile 5, 6, 0x245, TRUE
	setmetatile 6, 6, 0x245, TRUE
	setmetatile 7, 6, 0x245, TRUE
	setmetatile 8, 6, 0x245, TRUE
	setmetatile 9, 6, 0x245, TRUE
	setmetatile 10, 6, 0x245, TRUE
	setmetatile 4, 7, 0x245, TRUE
	setmetatile 5, 7, 0x245, TRUE
	setmetatile 6, 7, 0x245, TRUE
	setmetatile 7, 7, 0x245, TRUE
	setmetatile 8, 7, 0x245, TRUE
	setmetatile 9, 7, 0x245, TRUE
	setmetatile 10, 7, 0x245, TRUE
	setmetatile 4, 8, 0x245, TRUE
	setmetatile 5, 8, 0x245, TRUE
	setmetatile 6, 8, 0x245, TRUE
	setmetatile 7, 8, 0x245, TRUE
	setmetatile 8, 8, 0x245, TRUE
	setmetatile 9, 8, 0x245, TRUE
	setmetatile 10, 8, 0x245, TRUE
	setmetatile 4, 9, 0x219, TRUE
	setmetatile 5, 9, 0x219, TRUE
	setmetatile 6, 9, 0x219, TRUE
	setmetatile 7, 9, 0x219, TRUE
	setmetatile 8, 9, 0x219, TRUE
	setmetatile 9, 9, 0x219, TRUE
	setmetatile 10, 9, 0x219, TRUE
	setmetatile 5, 10, 0x219, TRUE
	setmetatile 6, 10, 0x219, TRUE
	setmetatile 7, 10, 0x219, TRUE
	setmetatile 8, 10, 0x219, TRUE
	setmetatile 9, 10, 0x219, TRUE
	goto DesertRuin1FTileSet_1


RuinsEntranceMan::
	setflag FLAG_RECOMMEND_LIBRARY
	goto_if_set FLAG_ARCHEOLOGIST_TALKED_TO, RuinsEntranceMan_2
	goto_if_set FLAG_DESERT_RUINS_OPENED, RuinsEntranceMan_5
	msgbox RuinsEntranceMan_Text, MSGBOX_NPC
	end

RuinsEntranceMan_2:
	msgbox RuinsEntranceMan_Text, MSGBOX_NPC
	end

RuinsEntranceMan_5:
	setflag FLAG_ARCHEOLOGIST_TALKED_TO
	msgbox RuinsEntranceMan_After, MSGBOX_NPC
	end


DesertRuins_WallText::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText_1
	lock
	msgbox TranslateWallText1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText_5
	msgbox WallText1Translated, MSGBOX_SIGN
	end

DesertRuins_WallText_1:
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText_5:
	closemessage
	release
	end


DesertRuins_WallText2::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText2_1
	lock
	msgbox TranslateWallText1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText2_5
	msgbox WallTextTranslated2, MSGBOX_SIGN
	end

DesertRuins_WallText2_1:
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText2_5:
	closemessage
	release
	end


DesertRuins_WallText3::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText3_1
	lock
	msgbox TranslateWallText1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText3_5
	msgbox WallTextTranslated3, MSGBOX_SIGN
	end

DesertRuins_WallText3_1:
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText3_5:
	closemessage
	release
	end


DesertRuins_WallText4::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText4_1
	lock
	msgbox TranslateWallText1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText4_5
	msgbox WallTextTranslated4, MSGBOX_SIGN
	end

DesertRuins_WallText4_1:
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText4_5:
	closemessage
	release
	end


DesertRuins_WallText5::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText5_1
	lock
	msgbox TranslateWallText1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText5_5
	msgbox WallTextTranslated5, MSGBOX_SIGN
	end

DesertRuins_WallText5_1:
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText5_5:
	closemessage
	release
	end


RuinsEntranceMan_After::
	.string "What?! The wall collapsed and revealed\n"
	.string "a new floor to the ruins?!\p"
	.string "And what's more, there's even more\n"
	.string "glyphs down there?!\p"
	.string "Well, I must certainly go explore\n"
	.string "downstairs as soon as I've finished\l"
	.string "reading through this!$"

RuinsEntranceMan_Text::
	.string "This wall documents some of the last\n"
	.string "days of an ancient civilization.\p"
	.string "There's a mention of the entire sky\n"
	.string "turning red but nobody living has ever\l"
	.string "witnessed anything like that, so\l"
	.string "the truth behind this phenomenon\l"
	.string "remains a total mystery.\p"
	.string "If you'd like to learn to read the\n"
	.string "glyphs yourself, you should visit\l"
	.string "Sandstone City's library and borrow\l"
	.string "a book on ancient Sinko history.$"

DesertRuins_WallText_Text1::
	.string "The wall is covered in a bunch of\n"
	.string "indecipherable glyphs.$"

TranslateWallText1::
	.string "The wall is covered in a bunch of\n"
	.string "indecipherable glyphs.\p"
	.string "Would you like to attempt to translate\n"
	.string "them using the History Book?$"

WallText1Translated::
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:\p"
	.string "“The skies ____ ______ __________ red.\p"
	.string "King ______ promises ___ ______ that\n"
	.string "everything ____ be _______, but I\l"
	.string "wouldn't __ __ optimistic.\p"
	.string "____ as I _____ this ____, I'm having\n"
	.string "exceedingly ____ ____ staying _____.\p"
	.string "____ folk say ____ ___ a massive\n"
	.string "bird _____ from the g_ou__ ____\l"
	.string "days ago.\p"
	.string "Surely, it isn't ____ we”\p"
	.string "The glyphs end abruptly.$"

WallTextTranslated2::
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:\p"
	.string "“The _____ ____ been ___________ yellow\n"
	.string "for ___ ____ few ____.\p"
	.string "____ also _______ more wilted _____ __\n"
	.string "the fields than __ _____ for this ____\l"
	.string "of year.\p"
	.string "Have we somehow ________ the wrath of\n"
	.string "some _______ god?”$"

WallTextTranslated3::
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:\p"
	.string "“____ noticed many of the _______\n"
	.string "getting extraordinarily ______ lately.\l"
	.string "_ _______ it might be the ______\l"
	.string "taking a ____ on them.\p"
	.string "Still, ____ amount of __________ and\n"
	.string "lack of ____ force has me _________…”$"

WallTextTranslated4::
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:\p"
	.string "“_________ is happening. ___ skies ____\n"
	.string "_______ _______ unnaturally orange,\l"
	.string "and the ______ have _____ panicking.\p"
	.string "King ______ has ordered __ __ ___ down\n"
	.string "the populace, and to find __ ___________\l"
	.string "for ____ phenomenon.\p"
	.string "Maybe it's the _______, but ____ been\n"
	.string "_______ __ hard to stay awake lately.”$"

WallTextTranslated5::
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:"
	.string "“The King _____ us to ____ digging\n"
	.string "deeper, but the _______ are clearly\l"
	.string "afraid of _________.\p"
	.string "____ have noticed the _________ activity\n"
	.string "increasing ___ further we delve, and\l"
	.string "_______ something _______ might be\l"
	.string "resting _____ ___ ______ here.\p"
	.string "Still, everyday __ ____ forward…”$"
