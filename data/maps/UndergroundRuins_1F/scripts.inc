UndergroundRuins_1F_MapScripts::
# 2 "data/maps/UndergroundRuins_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetRuinsFlag
# 3 "data/maps/UndergroundRuins_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DesertRuin1FTileSet
	.byte 0


SetRuinsFlag::
# 7 "data/maps/UndergroundRuins_1F/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_RUINS
	end


DesertRuin1FTileSet::
# 12 "data/maps/UndergroundRuins_1F/scripts.pory"
	goto_if_unset FLAG_DESERT_RUINS_OPENED, DesertRuin1FTileSet_2
DesertRuin1FTileSet_1:
	end

DesertRuin1FTileSet_2:
# 13 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 4, 3, 0x245, TRUE
# 14 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 3, 0x245, TRUE
# 15 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 3, 0x245, TRUE
# 16 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 3, 0x245, TRUE
# 17 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 3, 0x245, TRUE
# 18 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 3, 0x245, TRUE
# 19 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 10, 3, 0x245, TRUE
# 20 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 4, 4, 0x245, TRUE
# 21 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 4, 0x245, TRUE
# 22 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 4, 0x245, TRUE
# 23 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 4, 0x245, TRUE
# 24 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 4, 0x245, TRUE
# 25 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 4, 0x245, TRUE
# 26 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 10, 4, 0x245, TRUE
# 27 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 4, 5, 0x245, TRUE
# 28 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 5, 0x245, TRUE
# 29 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 5, 0x245, TRUE
# 30 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 5, 0x245, TRUE
# 31 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 5, 0x245, TRUE
# 32 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 5, 0x245, TRUE
# 33 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 10, 5, 0x245, TRUE
# 34 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 4, 6, 0x245, TRUE
# 35 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 6, 0x245, TRUE
# 36 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 6, 0x245, TRUE
# 37 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 6, 0x245, TRUE
# 38 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 6, 0x245, TRUE
# 39 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 6, 0x245, TRUE
# 40 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 10, 6, 0x245, TRUE
# 41 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 4, 7, 0x245, TRUE
# 42 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 7, 0x245, TRUE
# 43 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 7, 0x245, TRUE
# 44 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 7, 0x245, TRUE
# 45 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 7, 0x245, TRUE
# 46 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 7, 0x245, TRUE
# 47 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 10, 7, 0x245, TRUE
# 48 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 4, 8, 0x245, TRUE
# 49 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 8, 0x245, TRUE
# 50 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 8, 0x245, TRUE
# 51 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 8, 0x245, TRUE
# 52 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 8, 0x245, TRUE
# 53 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 8, 0x245, TRUE
# 54 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 10, 8, 0x245, TRUE
# 55 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 4, 9, 0x219, TRUE
# 56 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 9, 0x219, TRUE
# 57 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 9, 0x219, TRUE
# 58 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 9, 0x219, TRUE
# 59 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 9, 0x219, TRUE
# 60 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 9, 0x219, TRUE
# 61 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 10, 9, 0x219, TRUE
# 62 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 5, 10, 0x219, TRUE
# 63 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 6, 10, 0x219, TRUE
# 64 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 7, 10, 0x219, TRUE
# 65 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 8, 10, 0x219, TRUE
# 66 "data/maps/UndergroundRuins_1F/scripts.pory"
	setmetatile 9, 10, 0x219, TRUE
	goto DesertRuin1FTileSet_1


RuinsEntranceMan::
# 72 "data/maps/UndergroundRuins_1F/scripts.pory"
	setflag FLAG_RECOMMEND_LIBRARY
# 73 "data/maps/UndergroundRuins_1F/scripts.pory"
	goto_if_set FLAG_ARCHEOLOGIST_TALKED_TO, RuinsEntranceMan_2
# 77 "data/maps/UndergroundRuins_1F/scripts.pory"
	goto_if_set FLAG_DESERT_RUINS_OPENED, RuinsEntranceMan_5
# 82 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox RuinsEntranceMan_Text, MSGBOX_NPC
	end

RuinsEntranceMan_2:
# 74 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox RuinsEntranceMan_Text, MSGBOX_NPC
	end

RuinsEntranceMan_5:
# 78 "data/maps/UndergroundRuins_1F/scripts.pory"
	setflag FLAG_ARCHEOLOGIST_TALKED_TO
# 79 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox RuinsEntranceMan_After, MSGBOX_NPC
	end


DesertRuins_WallText::
# 109 "data/maps/UndergroundRuins_1F/scripts.pory"
	checkitem ITEM_HISTORY_BOOK
# 110 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText_1
# 115 "data/maps/UndergroundRuins_1F/scripts.pory"
	lock
# 116 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox TranslateWallText1, MSGBOX_YESNO
# 117 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText_5
# 122 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox WallText1Translated, MSGBOX_SIGN
	end

DesertRuins_WallText_1:
# 111 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText_5:
# 118 "data/maps/UndergroundRuins_1F/scripts.pory"
	closemessage
# 119 "data/maps/UndergroundRuins_1F/scripts.pory"
	release
	end


DesertRuins_WallText2::
# 137 "data/maps/UndergroundRuins_1F/scripts.pory"
	checkitem ITEM_HISTORY_BOOK
# 138 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText2_1
# 143 "data/maps/UndergroundRuins_1F/scripts.pory"
	lock
# 144 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox TranslateWallText1, MSGBOX_YESNO
# 145 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText2_5
# 150 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox WallTextTranslated2, MSGBOX_SIGN
	end

DesertRuins_WallText2_1:
# 139 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText2_5:
# 146 "data/maps/UndergroundRuins_1F/scripts.pory"
	closemessage
# 147 "data/maps/UndergroundRuins_1F/scripts.pory"
	release
	end


DesertRuins_WallText3::
# 155 "data/maps/UndergroundRuins_1F/scripts.pory"
	checkitem ITEM_HISTORY_BOOK
# 156 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText3_1
# 161 "data/maps/UndergroundRuins_1F/scripts.pory"
	lock
# 162 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox TranslateWallText1, MSGBOX_YESNO
# 163 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText3_5
# 168 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox WallTextTranslated3, MSGBOX_SIGN
	end

DesertRuins_WallText3_1:
# 157 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText3_5:
# 164 "data/maps/UndergroundRuins_1F/scripts.pory"
	closemessage
# 165 "data/maps/UndergroundRuins_1F/scripts.pory"
	release
	end


DesertRuins_WallText4::
# 173 "data/maps/UndergroundRuins_1F/scripts.pory"
	checkitem ITEM_HISTORY_BOOK
# 174 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText4_1
# 179 "data/maps/UndergroundRuins_1F/scripts.pory"
	lock
# 180 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox TranslateWallText1, MSGBOX_YESNO
# 181 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText4_5
# 186 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox WallTextTranslated4, MSGBOX_SIGN
	end

DesertRuins_WallText4_1:
# 175 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText4_5:
# 182 "data/maps/UndergroundRuins_1F/scripts.pory"
	closemessage
# 183 "data/maps/UndergroundRuins_1F/scripts.pory"
	release
	end


DesertRuins_WallText5::
# 191 "data/maps/UndergroundRuins_1F/scripts.pory"
	checkitem ITEM_HISTORY_BOOK
# 192 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText5_1
# 197 "data/maps/UndergroundRuins_1F/scripts.pory"
	lock
# 198 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox TranslateWallText1, MSGBOX_YESNO
# 199 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText5_5
# 204 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox WallTextTranslated5, MSGBOX_SIGN
	end

DesertRuins_WallText5_1:
# 193 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText5_5:
# 200 "data/maps/UndergroundRuins_1F/scripts.pory"
	closemessage
# 201 "data/maps/UndergroundRuins_1F/scripts.pory"
	release
	end


DesertRuins_WallText6::
	checkitem ITEM_HISTORY_BOOK
# 0 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText6_2
# 213 "data/maps/UndergroundRuins_1F/scripts.pory"
	lock
	msgbox TranslateWallText1, MSGBOX_YESNO
# 0 "data/maps/UndergroundRuins_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertRuins_WallText6_5
# 218 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox WallTextTranslated6, MSGBOX_SIGN
	end

DesertRuins_WallText6_2:
# 210 "data/maps/UndergroundRuins_1F/scripts.pory"
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
	end

DesertRuins_WallText6_5:
# 215 "data/maps/UndergroundRuins_1F/scripts.pory"
	release
	end


RuinsEntranceMan_After::
# 86 "data/maps/UndergroundRuins_1F/scripts.pory"
	.string "What?! The wall collapsed and revealed\n"
	.string "a new floor to the ruins?!\p"
	.string "And what's more, there's even more\n"
	.string "glyphs down there?!\p"
	.string "Well, I must certainly go explore\n"
	.string "downstairs as soon as I've finished\l"
	.string "reading through this!$"

RuinsEntranceMan_Text::
# 95 "data/maps/UndergroundRuins_1F/scripts.pory"
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
# 126 "data/maps/UndergroundRuins_1F/scripts.pory"
	.string "The wall is covered in a bunch of\n"
	.string "indecipherable glyphs.$"

TranslateWallText1::
# 130 "data/maps/UndergroundRuins_1F/scripts.pory"
	.string "The wall is covered in a bunch of\n"
	.string "indecipherable glyphs.\p"
	.string "Would you like to attempt to translate\n"
	.string "them using the History Book?$"

WallText1Translated::
# 223 "data/maps/UndergroundRuins_1F/scripts.pory"
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
# 238 "data/maps/UndergroundRuins_1F/scripts.pory"
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
# 249 "data/maps/UndergroundRuins_1F/scripts.pory"
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:\p"
	.string "“____ noticed many of the _______\n"
	.string "getting extraordinarily ______ lately.\l"
	.string "_ _______ it might be the ______\l"
	.string "taking a ____ on them.\p"
	.string "Still, ____ amount of __________ and\n"
	.string "lack of ____ force has me _________…”$"

WallTextTranslated4::
# 259 "data/maps/UndergroundRuins_1F/scripts.pory"
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
# 271 "data/maps/UndergroundRuins_1F/scripts.pory"
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:\p"
	.string "“The King _____ us to ____ digging\n"
	.string "deeper, but the _______ are clearly\l"
	.string "afraid of _________.\p"
	.string "____ have noticed the _________\n"
	.string "activity increasing ___ further we\l"
	.string "delve, and _______ something _______\l"
	.string "might be resting _____ ___ ______ here.\p"
	.string "Still, everyday __ ____ forward…”$"

WallTextTranslated6::
# 283 "data/maps/UndergroundRuins_1F/scripts.pory"
	.string "Some of the glyphs are missing, but you\n"
	.string "can make out the following text:\p"
	.string "__ found an object _______ __\n"
	.string "a cocoon.\p"
	.string "Could __ belong to a _______?\p"
	.string "___ ______ tried extracting it, ___\n"
	.string "they ___ fell ___ soon _____.\p"
	.string "_ think I ___ see cracks ________\n"
	.string "to form on it.\p"
	.string "Will whatever _______ ____ it be\n"
	.string "our _________, or perhaps, ___\l"
	.string "destruction?$"
