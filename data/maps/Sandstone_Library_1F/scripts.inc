Sandstone_Library_1F_MapScripts::
	.byte 0


Library_Receptionist::
# 4 "data/maps/Sandstone_Library_1F/scripts.pory"
	checkitem ITEM_HISTORY_BOOK
# 5 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Library_Receptionist_3
Library_Receptionist_1:
# 9 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Receptionist_Text, MSGBOX_NPC
	end

Library_Receptionist_2:
# 6 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Receptionist_Text2, MSGBOX_NPC
	end

Library_Receptionist_3:
# 5 "data/maps/Sandstone_Library_1F/scripts.pory"
	goto_if_set FLAG_RECOMMEND_LIBRARY, Library_Receptionist_2
	goto Library_Receptionist_1


Library_Youngster::
# 29 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Youngster_Text, MSGBOX_NPC
	end


Library_Scientist::
# 38 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Scientist_Text, MSGBOX_NPC
	end


Library_HexManiac::
# 47 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_HexManiac_Text, MSGBOX_NPC
	end


Library_Woman1::
# 56 "data/maps/Sandstone_Library_1F/scripts.pory"
	lock
# 57 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Woman1_Text
# 58 "data/maps/Sandstone_Library_1F/scripts.pory"
	release
	end


Library_FatGuy::
# 66 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_FatGuy_Text, MSGBOX_NPC
# 67 "data/maps/Sandstone_Library_1F/scripts.pory"
	turnobject 3, DIR_WEST
	end


Library_Book::
# 77 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Book_Text, MSGBOX_SIGN
	end


Library_OldWoman::
# 87 "data/maps/Sandstone_Library_1F/scripts.pory"
	lock
# 88 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_OldWoman_Text
# 89 "data/maps/Sandstone_Library_1F/scripts.pory"
	release
	end


Library_Hiker::
# 98 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Hiker_Text, MSGBOX_NPC
	end


Library_Mom::
# 107 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Mom_Text, MSGBOX_NPC
	end


Library_Daughter::
# 117 "data/maps/Sandstone_Library_1F/scripts.pory"
	lock
# 118 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Daughter_Text
# 119 "data/maps/Sandstone_Library_1F/scripts.pory"
	release
	end


Library_Birch::
# 127 "data/maps/Sandstone_Library_1F/scripts.pory"
	lock
# 128 "data/maps/Sandstone_Library_1F/scripts.pory"
	faceplayer
# 129 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Birch_Text
# 130 "data/maps/Sandstone_Library_1F/scripts.pory"
	closemessage
# 131 "data/maps/Sandstone_Library_1F/scripts.pory"
	delay 20
# 132 "data/maps/Sandstone_Library_1F/scripts.pory"
	safefollow
# 133 "data/maps/Sandstone_Library_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 134 "data/maps/Sandstone_Library_1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/Sandstone_Library_1F/scripts.pory"
	delay 10
# 136 "data/maps/Sandstone_Library_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 137 "data/maps/Sandstone_Library_1F/scripts.pory"
	waitmovement 0
# 138 "data/maps/Sandstone_Library_1F/scripts.pory"
	delay 20
# 139 "data/maps/Sandstone_Library_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterDown
# 140 "data/maps/Sandstone_Library_1F/scripts.pory"
	waitmovement 0
# 141 "data/maps/Sandstone_Library_1F/scripts.pory"
	delay 30
# 142 "data/maps/Sandstone_Library_1F/scripts.pory"
	faceplayer
# 143 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_Birch_Text2
# 144 "data/maps/Sandstone_Library_1F/scripts.pory"
	closemessage
# 145 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Library_Birch_2
# 158 "data/maps/Sandstone_Library_1F/scripts.pory"
	applymovement 5, BirchLeavesShort
Library_Birch_1:
# 160 "data/maps/Sandstone_Library_1F/scripts.pory"
	waitmovement 0
# 161 "data/maps/Sandstone_Library_1F/scripts.pory"
	removeobject 5
# 162 "data/maps/Sandstone_Library_1F/scripts.pory"
	setflag FLAG_HIDE_LIBRARY_BIRCH
# 163 "data/maps/Sandstone_Library_1F/scripts.pory"
	delay 30
# 164 "data/maps/Sandstone_Library_1F/scripts.pory"
	release
	end

Library_Birch_2:
# 146 "data/maps/Sandstone_Library_1F/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 147 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq Library_Birch_5
# 150 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq Library_Birch_6
# 154 "data/maps/Sandstone_Library_1F/scripts.pory"
	applymovement 5, BirchLeavesLong
	goto Library_Birch_1

Library_Birch_5:
# 148 "data/maps/Sandstone_Library_1F/scripts.pory"
	applymovement 5, BirchLeavesLonger
	goto Library_Birch_1

Library_Birch_6:
# 151 "data/maps/Sandstone_Library_1F/scripts.pory"
	applymovement 5, BirchLeavesLongest
	goto Library_Birch_1


# 187 "data/maps/Sandstone_Library_1F/scripts.pory"
BirchLeavesShort:
# 188 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 188 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 189 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 189 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 189 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 189 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 190 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 190 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 190 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 190 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 191 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 191 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/Sandstone_Library_1F/scripts.pory"
BirchLeavesLong:
# 195 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_down
# 196 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 196 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 197 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 197 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 197 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 197 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 197 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 198 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 198 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 198 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 198 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 199 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 199 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
	step_end

# 201 "data/maps/Sandstone_Library_1F/scripts.pory"
BirchLeavesLonger:
# 202 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_down
# 203 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 203 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 203 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 204 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 204 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 204 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 204 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 204 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 205 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 205 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 205 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 205 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 205 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 206 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 206 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/Sandstone_Library_1F/scripts.pory"
BirchLeavesLongest:
# 209 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_down
# 209 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_down
# 210 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 210 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_left
# 211 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 211 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 211 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 211 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 211 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 211 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 212 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 212 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 212 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 212 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_right
# 213 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
# 213 "data/maps/Sandstone_Library_1F/scripts.pory"
	walk_up
	step_end

Library_MegaBook::
# 217 "data/maps/Sandstone_Library_1F/scripts.pory"
	lock
# 218 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_MegaBook_Text, MSGBOX_YESNO
# 219 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Library_MegaBook_2
# 223 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_MegaBook_Text2, MSGBOX_YESNO
# 224 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Library_MegaBook_5
# 228 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_MegaBook_Text3, MSGBOX_SIGN
	end

Library_MegaBook_2:
# 220 "data/maps/Sandstone_Library_1F/scripts.pory"
	closemessage
	end

Library_MegaBook_5:
# 225 "data/maps/Sandstone_Library_1F/scripts.pory"
	closemessage
	end


Library_HistoryBook::
# 261 "data/maps/Sandstone_Library_1F/scripts.pory"
	checkitem ITEM_HISTORY_BOOK
# 262 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Library_HistoryBook_2
# 266 "data/maps/Sandstone_Library_1F/scripts.pory"
	goto_if_set FLAG_RECOMMEND_LIBRARY, Library_HistoryBook_5
# 280 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_HistoryBook_Text, MSGBOX_SIGN
	end

Library_HistoryBook_2:
# 263 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox Library_HistoryBook_Text, MSGBOX_SIGN
	end

Library_HistoryBook_5:
# 267 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox TakeHistoryBook, MSGBOX_YESNO
# 268 "data/maps/Sandstone_Library_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Library_HistoryBook_8
# 273 "data/maps/Sandstone_Library_1F/scripts.pory"
	finditem ITEM_HISTORY_BOOK
# 274 "data/maps/Sandstone_Library_1F/scripts.pory"
	goto_if_set FLAG_Q18_DESERT_LIBRARYBOOK_START, Library_HistoryBook_11
Library_HistoryBook_10:
	end

Library_HistoryBook_8:
# 269 "data/maps/Sandstone_Library_1F/scripts.pory"
	closemessage
# 270 "data/maps/Sandstone_Library_1F/scripts.pory"
	release
	end

Library_HistoryBook_11:
# 275 "data/maps/Sandstone_Library_1F/scripts.pory"
	completequest FLAG_Q18_DESERT_LIBRARYBOOK_COMPLETE
# 276 "data/maps/Sandstone_Library_1F/scripts.pory"
	special ShowJournalPopupRemove
	goto Library_HistoryBook_10


EventScript_Bookcase1::
# 294 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox EventScript_Bookcase1_Text, MSGBOX_SIGN
	end


EventScript_Bookcase2::
# 302 "data/maps/Sandstone_Library_1F/scripts.pory"
	msgbox EventScript_Bookcase2_Text, MSGBOX_SIGN
	end


Library_Receptionist_Text::
# 12 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Hello.\n"
	.string "This is the Sandstone Library.\p"
	.string "Please keep quiet while you're on\n"
	.string "the premises.$"

Library_Receptionist_Text2::
# 18 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Hello.\n"
	.string "This is the Sandstone Library.\p"
	.string "Please keep quiet while you're on\n"
	.string "the premises.\p"
	.string "… … …\p"
	.string "You're looking for history books?\p"
	.string "You can find those in the northwest\n"
	.string "corner on the second floor.$"

Library_Youngster_Text::
# 32 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Many of the books here are all\n"
	.string "too tough for me to understand…$"

Library_Scientist_Text::
# 41 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Please don't disturb me when\n"
	.string "I'm doing research.$"

Library_HexManiac_Text::
# 50 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "The book…\n"
	.string "I can't find the book…$"

Library_Woman1_Text::
# 61 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "… … …$"

Library_FatGuy_Text::
# 70 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "I'm reading a magazine article about\n"
	.string "newly discovered Pokémon evolutions.\l"
	.string "These are so cool!$"

Library_Book_Text::
# 80 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "The book looks to be some kind of\n"
	.string "thriller, but it's too hard to tell\l"
	.string "from this angle.$"

Library_OldWoman_Text::
# 92 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Why must some of these shelves be\n"
	.string "so high…$"

Library_Hiker_Text::
# 101 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "I bet some of these old history books\n"
	.string "reveal the secrets of the desert ruins!$"

Library_Mom_Text::
# 110 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "My daughter doesn't know how to read\n"
	.string "yet, but thankfully the library also\l"
	.string "has picture books for the younglings.$"

Library_Daughter_Text::
# 122 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Ooh!$"

Library_Birch_Text::
# 167 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Prof. Birch: Oh, {PLAYER}!\n"
	.string "Imagine seeing you here!\p"
	.string "And where might my {RIVAL} be?$"

Library_Birch_Text2::
# 172 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "Oh, I see!\n"
	.string "You two are running separately.\l"
	.string "Well, that's fine.\p"
	.string "Oh, yes, I was just gathering material\n"
	.string "for a research project and I was just\l"
	.string "about to head back to Pearlwood.\l"
	.string "Once you're done with whatever it is\l"
	.string "that you're doing here, you and {RIVAL}\l"
	.string "should come visit me in my lab.\l"
	.string "I'm working on something special!\p"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}!$"

Library_MegaBook_Text::
# 231 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "There's a magazine here that describes\n"
	.string "newly discovered Pokémon abilities.\p"
	.string "Would you like to read it?$"

Library_MegaBook_Text2::
# 236 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "SEARING RAGE\p"
	.string "Causes the Pokémon to enrage when below\n"
	.string "half health, greatly increasing its\l"
	.string "physical prowess.\p"
	.string "SPIKE BODY\p"
	.string "Causes immense pain to any Pokémon that\n"
	.string "touches the spikes, whether it's trying\l"
	.string "to attack one or be attacked by one.\p"
	.string "Would you like to keep reading?$"

Library_MegaBook_Text3::
# 247 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "DATA BREACH\n"
	.string "A newly discovered ability.\p"
	.string "Pokémon with Data Breach seem to break\n"
	.string "the laws of nature, being able to\l"
	.string "pierce many defenses like Protect and\l"
	.string "Reflect, and even being able to hit\l"
	.string "Ghost-type Pokémon with moves that\l"
	.string "would normally not be possible.\p"
	.string "The rest of the magazine seems to drag\n"
	.string "on with information you already know.$"

Library_HistoryBook_Text::
# 283 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "The shelves are lined with books\n"
	.string "about old Sinko history.$"

TakeHistoryBook::
# 287 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "The shelves are lined with books\n"
	.string "about old Sinko history.\p"
	.string "Loan one of the books?$"

EventScript_Bookcase1_Text::
# 297 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

EventScript_Bookcase2_Text::
# 305 "data/maps/Sandstone_Library_1F/scripts.pory"
	.string "The shelves are lined with books\n"
	.string "worn from being read by many people.$"
