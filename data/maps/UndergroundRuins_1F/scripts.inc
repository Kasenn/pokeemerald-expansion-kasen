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
	msgbox DesertRuins_WallText_Text1, MSGBOX_SIGN
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
	.string "days of an ancient civilization.\l"
	.string "There's a mention of the entire sky\l"
	.string "turning red but nobody living has ever\l"
	.string "witnessed anything like that so\l"
	.string "the truth behind this phenomenon\l"
	.string "remains a total mystery.\p"
	.string "If you'd like to learn to read the\n"
	.string "glyphs yourself, you should visit\l"
	.string "Sandstone City's library and borrow\l"
	.string "a book on ancient Sinko history.$"

DesertRuins_WallText_Text1::
	.string "The wall is covered in a bunch of\n"
	.string "indecipherable glyphs.$"
