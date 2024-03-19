CoralgroveHarbor_MapScripts::
	.byte 0


CoralgroveHarbor_Sign1::
	msgbox CoralgroveHarbor_Sign1_Text_0, MSGBOX_SIGN
	end


CoralgroveHarbor_Sign2::
	msgbox CoralgroveHarbor_Sign2_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	end


CoralgroveHarbor_Sailor::
	lockall
	faceplayer
	msgbox CoralgroveHarbor_Sailor_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	end


CoralgroveHarbor_OldMan::
	lockall
	faceplayer
	msgbox CoralgroveHarbor_OldMan_Text, MSGBOX_NPC
	waitmessage
	closemessage
	end


CoralgroveHarbor_Woman::
	lockall
	faceplayer
	msgbox CoralgroveHarbor_Woman_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	end


CoralHarborBall::
	finditem ITEM_GREAT_BALL
	return


CoralgroveHarbor_SleepingMan::
	lockall
	goto_if_unset FLAG_UNUSED_TALKEDTOSLEEPINGGUY, CoralgroveHarbor_SleepingMan_1
	msgbox CoralgroveHarbor_SleepingMan_Text_2, MSGBOX_DEFAULT
	waitmessage
	closemessage
	releaseall
	end

CoralgroveHarbor_SleepingMan_1:
	msgbox CoralgroveHarbor_SleepingMan_Text_0, MSGBOX_DEFAULT
	waitmessage
	giveitem ITEM_TM_REST
	waitfanfare
	msgbox CoralgroveHarbor_SleepingMan_Text_1, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_UNUSED_TALKEDTOSLEEPINGGUY
	closemessage
	releaseall
	end


CoralgroveHarbor_Sign1_Text_0:
	.string "Elevator access to city area$"

CoralgroveHarbor_Sign2_Text_0:
	.string "Coralgrove Harbor$"

CoralgroveHarbor_Sailor_Text_0:
	.string "Even though there's a perfectly\ngood ship docked at the harbor,\lsome crazy people would still rather\lcross the ocean by swimming!$"

CoralgroveHarbor_Woman_Text_0:
	.string "I'd really like to set up a shop here\nbut there's simply not enough room.\pDigging a hole in this cliff could\nendanger the city above.$"

CoralgroveHarbor_SleepingMan_Text_0:
	.string "zzz…\pHwuh?\pOh, whew! For a moment I thought\nmy boss might have caught me napping.\pWill you keep this a secret\nif I give you this TM?$"

CoralgroveHarbor_SleepingMan_Text_1:
	.string "Yawn…\pSleep is essential for good health…\nSleep and regain health…$"

CoralgroveHarbor_SleepingMan_Text_2:
	.string "zzz…$"

CoralgroveHarbor_OldMan_Text::
	.string "Beyond the ocean lies the town\n"
	.string "of Azuretide.\p"
	.string "Back in my youth I would've easily\n"
	.string "swam across the ocean but nowadays\l"
	.string "I am more than happy to take the ferry.$"
