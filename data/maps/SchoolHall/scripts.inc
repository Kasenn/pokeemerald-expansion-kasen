SchoolHall_MapScripts::
	.byte 0


SchoolReceptionist::
	lockall
	faceplayer
	msgbox SchoolReceptionist_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


SchoolOldMan::
	lockall
	faceplayer
	msgbox SchoolOldMan_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


SchoolTeach::
	lockall
	faceplayer
	checktrainerflag TRAINER_ARCHIE
	goto_if 0, SchoolTeach_1
	checktrainerflag TRAINER_LEAH
	goto_if 0, SchoolTeach_1
	checktrainerflag TRAINER_DAISY
	goto_if 0, SchoolTeach_1
	checktrainerflag TRAINER_ROSE_1
	goto_if 0, SchoolTeach_1
	goto_if_set FLAG_SCHOOL_DONE, SchoolTeach_2
	msgbox SchoolTeach_Text_2, MSGBOX_NPC
	giveitem ITEM_TM_FALSE_SWIPE
	waitmessage
	msgbox SchoolTeach_Text_3, MSGBOX_NPC
	closemessage
	setflag FLAG_SCHOOL_DONE
	release
	end

SchoolTeach_1:
	msgbox SchoolTeach_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end

SchoolTeach_2:
	msgbox SchoolTeach_Text_1, MSGBOX_NPC
	closemessage
	release
	end


SchoolHallGirl3::
	lockall
	faceplayer
	checktrainerflag TRAINER_ARCHIE
	goto_if 0, SchoolHallGirl3_1
	msgbox SchoolHallGirl3_Text_1, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end

SchoolHallGirl3_1:
	msgbox SchoolHallGirl3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallGirl3_4
	closemessage
	release
	end

SchoolHallGirl3_4:
	trainerbattle_no_intro TRAINER_ARCHIE, SchoolHallGirl3Defeated
	return


SchoolHallKidM::
	lockall
	faceplayer
	checktrainerflag TRAINER_LEAH
	goto_if 0, SchoolHallKidM_1
	msgbox SchoolHallKidM_Text_1, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end

SchoolHallKidM_1:
	msgbox SchoolHallKidM_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallKidM_4
	closemessage
	release
	end

SchoolHallKidM_4:
	trainerbattle_no_intro TRAINER_LEAH, SchoolHallKidMDefeated
	return


SchoolHallBoy2::
	lockall
	faceplayer
	checktrainerflag TRAINER_DAISY
	goto_if 0, SchoolHallBoy2_1
	msgbox SchoolHallBoy2_Text_1, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end

SchoolHallBoy2_1:
	msgbox SchoolHallBoy2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallBoy2_4
	closemessage
	release
	end

SchoolHallBoy2_4:
	trainerbattle_no_intro TRAINER_DAISY, SchoolHallBoy2Defeated
	return


SchoolHallGirl2::
	lockall
	faceplayer
	checktrainerflag TRAINER_ROSE_1
	goto_if 0, SchoolHallGirl2_1
	msgbox SchoolHallGirl2_Text_1, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end

SchoolHallGirl2_1:
	msgbox SchoolHallGirl2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SchoolHallGirl2_4
	closemessage
	release
	end

SchoolHallGirl2_4:
	trainerbattle_no_intro TRAINER_ROSE_1, SchoolHallGirl2Defeated
	return


SchoolReceptionist_Text_0:
	.string "This is the Pokémon Trainers' School,\na place where many aspiring trainers\lcome to hone their skills.$"

SchoolOldMan_Text_0:
	.string "While many of the students here are\nyoung, this school will accept\lanyone who's eager to learn.$"

SchoolTeach_Text_0:
	.string "The students in this class room are\npracticing all sorts of strategies.\pIf you can defeat them all,\nI will give you a prize.$"

SchoolTeach_Text_1:
	.string "Don't forget what you've learned.$"

SchoolTeach_Text_2:
	.string "You have defeated all the students.\nAs promised, a prize for you.$"

SchoolTeach_Text_3:
	.string "That TM contains the move False Swipe.\pFalse Swipe makes it easier to catch\nwild Pokémon by leaving the foe with\lat least 1 HP.$"

SchoolHallGirl3_Text_0:
	.string "I'm studying Baton Pass strategies.\nWould you like to have a battle?$"

SchoolHallGirl3_Text_1:
	.string "That was fun.$"

SchoolHallKidM_Text_0:
	.string "I'm studying Toxic strategies.\nWould you like to have a battle?$"

SchoolHallKidM_Text_1:
	.string "Clearly I need to polish my strategy.$"

SchoolHallBoy2_Text_0:
	.string "I'm studying Last Resort strategies.\nWould you like to have a battle?$"

SchoolHallBoy2_Text_1:
	.string "Next time I'll win for sure.$"

SchoolHallGirl2_Text_0:
	.string "I'm studying Toxic Heal strategies.\nWould you like to have a battle?$"

SchoolHallGirl2_Text_1:
	.string "I need to study more.$"

SchoolHallGirl3Defeated::
	.string "Maybe next time…$"

SchoolHallKidMDefeated::
	.string "I lost again…$"

SchoolHallBoy2Defeated::
	.string "Clearly not the winning strategy.$"

SchoolHallGirl2Defeated::
	.string "Come on, at least give me a chance.$"
