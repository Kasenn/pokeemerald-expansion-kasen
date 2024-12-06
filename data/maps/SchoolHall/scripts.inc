SchoolHall_MapScripts::
	.byte 0


SchoolReceptionist::
# 4 "data/maps/SchoolHall/scripts.pory"
	lockall
# 5 "data/maps/SchoolHall/scripts.pory"
	faceplayer
# 6 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolReceptionist_Text_0, MSGBOX_NPC
# 7 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 8 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 9 "data/maps/SchoolHall/scripts.pory"
	release
	end


SchoolOldMan::
# 14 "data/maps/SchoolHall/scripts.pory"
	lockall
# 15 "data/maps/SchoolHall/scripts.pory"
	faceplayer
# 16 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolOldMan_Text_0, MSGBOX_NPC
# 17 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 18 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 19 "data/maps/SchoolHall/scripts.pory"
	release
	end


SchoolTeach::
# 24 "data/maps/SchoolHall/scripts.pory"
	lockall
# 25 "data/maps/SchoolHall/scripts.pory"
	faceplayer
# 26 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_ARCHIE
	goto_if 0, SchoolTeach_1
# 26 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_LEAH
	goto_if 0, SchoolTeach_1
# 26 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_DAISY
	goto_if 0, SchoolTeach_1
# 26 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_ROSE_1
	goto_if 0, SchoolTeach_1
	checkitem ITEM_TM_FALSE_SWIPE
# 0 "data/maps/SchoolHall/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SchoolTeach_2
# 40 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolTeach_Text_2, MSGBOX_NPC
# 41 "data/maps/SchoolHall/scripts.pory"
	giveitem ITEM_TM_FALSE_SWIPE
# 42 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 43 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolTeach_Text_3, MSGBOX_NPC
# 44 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 45 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolTeach_1:
# 27 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolTeach_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 29 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 30 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolTeach_2:
# 34 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolTeach_Text_1, MSGBOX_NPC
# 35 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 36 "data/maps/SchoolHall/scripts.pory"
	release
	end


SchoolHallGirl3::
# 51 "data/maps/SchoolHall/scripts.pory"
	lockall
# 52 "data/maps/SchoolHall/scripts.pory"
	faceplayer
# 53 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_ARCHIE
	goto_if 0, SchoolHallGirl3_1
# 67 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallGirl3_Text_1, MSGBOX_NPC
# 68 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 69 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 70 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallGirl3_1:
# 54 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallGirl3_Text_0, MSGBOX_YESNO
# 55 "data/maps/SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallGirl3_4
# 61 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 62 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallGirl3_4:
# 56 "data/maps/SchoolHall/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SchoolHallGirl3Defeated
# 57 "data/maps/SchoolHall/scripts.pory"
	release
	end


SchoolHallKidM::
# 76 "data/maps/SchoolHall/scripts.pory"
	lockall
# 77 "data/maps/SchoolHall/scripts.pory"
	faceplayer
# 78 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_LEAH
	goto_if 0, SchoolHallKidM_1
# 92 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallKidM_Text_1, MSGBOX_NPC
# 93 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 94 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 95 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallKidM_1:
# 79 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallKidM_Text_0, MSGBOX_YESNO
# 80 "data/maps/SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallKidM_4
# 86 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 87 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallKidM_4:
# 81 "data/maps/SchoolHall/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAH, SchoolHallKidMDefeated
# 82 "data/maps/SchoolHall/scripts.pory"
	release
	end


SchoolHallBoy2::
# 101 "data/maps/SchoolHall/scripts.pory"
	lockall
# 102 "data/maps/SchoolHall/scripts.pory"
	faceplayer
# 103 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_DAISY
	goto_if 0, SchoolHallBoy2_1
# 117 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallBoy2_Text_1, MSGBOX_NPC
# 118 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 119 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 120 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallBoy2_1:
# 104 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallBoy2_Text_0, MSGBOX_YESNO
# 105 "data/maps/SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallBoy2_4
# 111 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 112 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallBoy2_4:
# 106 "data/maps/SchoolHall/scripts.pory"
	trainerbattle_no_intro TRAINER_DAISY, SchoolHallBoy2Defeated
# 107 "data/maps/SchoolHall/scripts.pory"
	release
	end


SchoolHallGirl2::
# 126 "data/maps/SchoolHall/scripts.pory"
	lockall
# 127 "data/maps/SchoolHall/scripts.pory"
	faceplayer
# 128 "data/maps/SchoolHall/scripts.pory"
	checktrainerflag TRAINER_ROSE_1
	goto_if 0, SchoolHallGirl2_1
# 142 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallGirl2_Text_1, MSGBOX_NPC
# 143 "data/maps/SchoolHall/scripts.pory"
	waitmessage
# 144 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 145 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallGirl2_1:
# 129 "data/maps/SchoolHall/scripts.pory"
	msgbox SchoolHallGirl2_Text_0, MSGBOX_YESNO
# 130 "data/maps/SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallGirl2_4
# 136 "data/maps/SchoolHall/scripts.pory"
	closemessage
# 137 "data/maps/SchoolHall/scripts.pory"
	release
	end

SchoolHallGirl2_4:
# 131 "data/maps/SchoolHall/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSE_1, SchoolHallGirl2Defeated
# 132 "data/maps/SchoolHall/scripts.pory"
	release
	end


SchoolReceptionist_Text_0:
# 6 "data/maps/SchoolHall/scripts.pory"
	.string "This is the Pokémon Trainers' School,\na place where many aspiring trainers\lcome to hone their skills.$"

SchoolOldMan_Text_0:
# 16 "data/maps/SchoolHall/scripts.pory"
	.string "While many of the students here are\nyoung, this school will accept\lanyone who's eager to learn.$"

SchoolTeach_Text_0:
# 27 "data/maps/SchoolHall/scripts.pory"
	.string "The students in this class room are\npracticing all sorts of strategies.\pIf you can defeat them all,\nI will give you a prize.$"

SchoolTeach_Text_1:
# 34 "data/maps/SchoolHall/scripts.pory"
	.string "Don't forget what you've learned.$"

SchoolTeach_Text_2:
# 40 "data/maps/SchoolHall/scripts.pory"
	.string "You have defeated all the students.\nAs promised, a prize for you.$"

SchoolTeach_Text_3:
# 43 "data/maps/SchoolHall/scripts.pory"
	.string "That TM contains the move False Swipe.\pFalse Swipe makes it easier to catch\nwild Pokémon by leaving the foe with\lat least 1 HP.$"

SchoolHallGirl3_Text_0:
# 54 "data/maps/SchoolHall/scripts.pory"
	.string "I'm studying Baton Pass strategies.\nWould you like to have a battle?$"

SchoolHallGirl3_Text_1:
# 67 "data/maps/SchoolHall/scripts.pory"
	.string "That was fun.$"

SchoolHallKidM_Text_0:
# 79 "data/maps/SchoolHall/scripts.pory"
	.string "I'm studying Toxic strategies.\nWould you like to have a battle?$"

SchoolHallKidM_Text_1:
# 92 "data/maps/SchoolHall/scripts.pory"
	.string "Clearly I need to polish my strategy.$"

SchoolHallBoy2_Text_0:
# 104 "data/maps/SchoolHall/scripts.pory"
	.string "I'm studying Last Resort strategies.\nWould you like to have a battle?$"

SchoolHallBoy2_Text_1:
# 117 "data/maps/SchoolHall/scripts.pory"
	.string "Next time I'll win for sure.$"

SchoolHallGirl2_Text_0:
# 129 "data/maps/SchoolHall/scripts.pory"
	.string "I'm studying Toxic Heal strategies.\nWould you like to have a battle?$"

SchoolHallGirl2_Text_1:
# 142 "data/maps/SchoolHall/scripts.pory"
	.string "I need to study more.$"

SchoolHallGirl3Defeated::
# 150 "data/maps/SchoolHall/scripts.pory"
	.string "Maybe next time…$"

SchoolHallKidMDefeated::
# 154 "data/maps/SchoolHall/scripts.pory"
	.string "I lost again…$"

SchoolHallBoy2Defeated::
# 158 "data/maps/SchoolHall/scripts.pory"
	.string "Clearly not the winning strategy.$"

SchoolHallGirl2Defeated::
# 162 "data/maps/SchoolHall/scripts.pory"
	.string "Come on, at least give me a chance.$"
