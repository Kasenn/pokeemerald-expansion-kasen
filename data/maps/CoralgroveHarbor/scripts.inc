CoralgroveHarbor_MapScripts::
	.byte 0


CoralgroveHarbor_Sign1::
# 4 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_Sign1_Text_0, MSGBOX_SIGN
	end


CoralgroveHarbor_Sign2::
# 9 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_Sign2_Text_0, MSGBOX_SIGN
# 10 "data/maps/CoralgroveHarbor/scripts.pory"
	waitmessage
# 11 "data/maps/CoralgroveHarbor/scripts.pory"
	closemessage
	end


CoralgroveHarbor_Sailor::
# 16 "data/maps/CoralgroveHarbor/scripts.pory"
	lock
# 17 "data/maps/CoralgroveHarbor/scripts.pory"
	faceplayer
# 18 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_Sailor_Text_0, MSGBOX_NPC
# 19 "data/maps/CoralgroveHarbor/scripts.pory"
	waitmessage
# 20 "data/maps/CoralgroveHarbor/scripts.pory"
	closemessage
	end


CoralgroveHarbor_OldMan::
# 25 "data/maps/CoralgroveHarbor/scripts.pory"
	lock
# 26 "data/maps/CoralgroveHarbor/scripts.pory"
	faceplayer
# 27 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_OldMan_Text, MSGBOX_NPC
# 28 "data/maps/CoralgroveHarbor/scripts.pory"
	waitmessage
# 29 "data/maps/CoralgroveHarbor/scripts.pory"
	closemessage
	end


CoralgroveHarbor_Woman::
# 41 "data/maps/CoralgroveHarbor/scripts.pory"
	lock
# 42 "data/maps/CoralgroveHarbor/scripts.pory"
	faceplayer
# 43 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_Woman_Text_0, MSGBOX_NPC
# 44 "data/maps/CoralgroveHarbor/scripts.pory"
	waitmessage
# 45 "data/maps/CoralgroveHarbor/scripts.pory"
	closemessage
	end


CoralHarborBall::
# 50 "data/maps/CoralgroveHarbor/scripts.pory"
	finditem ITEM_GREAT_BALL
	return


CoralgroveHarbor_SleepingMan::
# 54 "data/maps/CoralgroveHarbor/scripts.pory"
	lock
	checkitem ITEM_TM_REST
# 0 "data/maps/CoralgroveHarbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralgroveHarbor_SleepingMan_1
# 67 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_SleepingMan_Text_2, MSGBOX_DEFAULT
# 68 "data/maps/CoralgroveHarbor/scripts.pory"
	waitmessage
# 69 "data/maps/CoralgroveHarbor/scripts.pory"
	closemessage
# 70 "data/maps/CoralgroveHarbor/scripts.pory"
	releaseall
	end

CoralgroveHarbor_SleepingMan_1:
# 56 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_SleepingMan_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/CoralgroveHarbor/scripts.pory"
	waitmessage
# 58 "data/maps/CoralgroveHarbor/scripts.pory"
	giveitem ITEM_TM_REST
# 59 "data/maps/CoralgroveHarbor/scripts.pory"
	waitfanfare
# 60 "data/maps/CoralgroveHarbor/scripts.pory"
	msgbox CoralgroveHarbor_SleepingMan_Text_1, MSGBOX_DEFAULT
# 61 "data/maps/CoralgroveHarbor/scripts.pory"
	waitmessage
# 62 "data/maps/CoralgroveHarbor/scripts.pory"
	closemessage
# 63 "data/maps/CoralgroveHarbor/scripts.pory"
	releaseall
	end


CoralgroveHarbor_Sign1_Text_0:
# 4 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "Elevator access to city area$"

CoralgroveHarbor_Sign2_Text_0:
# 9 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "Coralgrove Harbor$"

CoralgroveHarbor_Sailor_Text_0:
# 18 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "Even though there's a perfectly\ngood ship docked at the harbor,\lsome crazy people would still rather\lcross the ocean by swimming!$"

CoralgroveHarbor_Woman_Text_0:
# 43 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "I'd really like to set up a shop here\nbut there's simply not enough room.\pDigging a hole in this cliff could\nendanger the city above.$"

CoralgroveHarbor_SleepingMan_Text_0:
# 56 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "Zzz…\pHwuh?\pOh, whew! For a moment I thought\nmy boss might have caught me napping.\pWill you keep this a secret\nif I give you this TM?$"

CoralgroveHarbor_SleepingMan_Text_1:
# 60 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "Yawn…\pSleep is essential for good health…\nSleep and regain health…$"

CoralgroveHarbor_SleepingMan_Text_2:
# 67 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "Zzz…$"

CoralgroveHarbor_OldMan_Text::
# 32 "data/maps/CoralgroveHarbor/scripts.pory"
	.string "Beyond the ocean lies the town\n"
	.string "of Azuretide.\p"
	.string "Back in my youth I would've easily\n"
	.string "swam across the ocean but nowadays\l"
	.string "I am more than happy to take the ferry.$"
