Sandstone_Library_1F_MapScripts::
	.byte 0


Library_Receptionist::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, FALSE
	goto_if_eq Library_Receptionist_3
Library_Receptionist_1:
	msgbox Library_Receptionist_Text, MSGBOX_NPC
	end

Library_Receptionist_2:
	msgbox Library_Receptionist_Text2, MSGBOX_NPC
	end

Library_Receptionist_3:
	goto_if_set FLAG_RECOMMEND_LIBRARY, Library_Receptionist_2
	goto Library_Receptionist_1


Library_Youngster::
	msgbox Library_Youngster_Text, MSGBOX_NPC
	end


Library_Scientist::
	msgbox Library_Scientist_Text, MSGBOX_NPC
	end


Library_HexManiac::
	msgbox Library_HexManiac_Text, MSGBOX_NPC
	end


Library_Woman1::
	lock
	msgbox Library_Woman1_Text
	release
	end


Library_FatGuy::
	msgbox Library_FatGuy_Text, MSGBOX_NPC
	turnobject 3, DIR_WEST
	end


Library_Book::
	msgbox Library_Book_Text, MSGBOX_SIGN
	end


Library_OldWoman::
	lock
	msgbox Library_OldWoman_Text
	release
	end


Library_Hiker::
	msgbox Library_Hiker_Text, MSGBOX_NPC
	end


Library_Mom::
	msgbox Library_Mom_Text, MSGBOX_NPC
	end


Library_Daughter::
	lock
	msgbox Library_Daughter_Text
	release
	end


Library_Birch::
	msgbox Library_Birch_Text, MSGBOX_NPC
	end


Library_MegaBook::
	msgbox Library_MegaBook_Text, MSGBOX_SIGN
	end


Library_HistoryBook::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, TRUE
	goto_if_eq Library_HistoryBook_2
	goto_if_set FLAG_RECOMMEND_LIBRARY, Library_HistoryBook_5
	msgbox Library_HistoryBook_Text, MSGBOX_SIGN
	end

Library_HistoryBook_2:
	msgbox Library_HistoryBook_Text, MSGBOX_SIGN
	end

Library_HistoryBook_5:
	msgbox TakeHistoryBook, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Library_HistoryBook_8
	finditem ITEM_HISTORY_BOOK
	end

Library_HistoryBook_8:
	closemessage
	release
	end


EventScript_Bookcase1::
	msgbox EventScript_Bookcase1_Text, MSGBOX_SIGN
	end


EventScript_Bookcase2::
	msgbox EventScript_Bookcase2_Text, MSGBOX_SIGN
	end


Library_Receptionist_Text::
	.string "Hello.\n"
	.string "This is the Sandstone Library.\p"
	.string "Please keep quiet while you're on\n"
	.string "the premises.$"

Library_Receptionist_Text2::
	.string "Hello.\n"
	.string "This is the Sandstone Library.\p"
	.string "Please keep quiet while you're on\n"
	.string "the premises.\p"
	.string "… … …\p"
	.string "You're looking for history books?\p"
	.string "You can find those in the northwest\n"
	.string "corner on the second floor.$"

Library_Youngster_Text::
	.string "Many of the books here are all\n"
	.string "too tough for me to understand…$"

Library_Scientist_Text::
	.string "Please don't disturb me when\n"
	.string "I'm doing research.$"

Library_HexManiac_Text::
	.string "The book…\n"
	.string "I can't find the book…$"

Library_Woman1_Text::
	.string "… … …$"

Library_FatGuy_Text::
	.string "I'm reading a magazine article about\n"
	.string "newly discovered Pokémon evolutions.\l"
	.string "These are so cool!$"

Library_Book_Text::
	.string "The book looks to be some kind of\n"
	.string "thriller, but it's too hard to tell\l"
	.string "from this angle.$"

Library_OldWoman_Text::
	.string "Why must some of these shelves be\n"
	.string "so high…$"

Library_Hiker_Text::
	.string "I bet some of these old history books\n"
	.string "reveal the secrets of the desert ruins!$"

Library_Mom_Text::
	.string "My daughter doesn't know how to read\n"
	.string "yet, but thankfully the library also\l"
	.string "has picture books for the younglings.$"

Library_Daughter_Text::
	.string "Ooh!$"

Library_Birch_Text::
	.string "$"

Library_MegaBook_Text::
	.string "$"

Library_HistoryBook_Text::
	.string "The shelves are lined with books\n"
	.string "about old Sinko history.$"

TakeHistoryBook::
	.string "The shelves are lined with books\n"
	.string "about old Sinko history.\p"
	.string "Loan one of the books?$"

EventScript_Bookcase1_Text::
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

EventScript_Bookcase2_Text::
	.string "The shelves are lined with books\n"
	.string "worn from being read by many people.$"
