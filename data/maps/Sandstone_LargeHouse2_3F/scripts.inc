Sandstone_LargeHouse2_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ResetPorygon
	.byte 0


ResetPorygon::
	compare VAR_SANDSTONEPORYGON_STATE, 2
	goto_if_eq ResetPorygon_2
ResetPorygon_1:
	end

ResetPorygon_2:
	setvar VAR_SANDSTONEPORYGON_STATE, 1
	goto ResetPorygon_1


Sandstone_BigHouse2_3F_Man::
	compare VAR_SANDSTONEPORYGON_STATE, 3
	goto_if_eq Sandstone_BigHouse2_3F_Man_2
	compare VAR_SANDSTONEPORYGON_STATE, 2
	goto_if_eq Sandstone_BigHouse2_3F_Man_5
	lock
	faceplayer
	compare VAR_SANDSTONEPORYGON_STATE, 1
	goto_if_eq Sandstone_BigHouse2_3F_Man_8
	msgbox GetAntiVirus, MSGBOX_NPC
	setvar VAR_SANDSTONEPORYGON_STATE, 1
	end

Sandstone_BigHouse2_3F_Man_2:
	msgbox BusyAnsweringEmail, MSGBOX_NPC
	turnobject 1, DIR_NORTH
	end

Sandstone_BigHouse2_3F_Man_5:
	msgbox GoAheadInstall, MSGBOX_NPC
	end

Sandstone_BigHouse2_3F_Man_8:
	checkitem ITEM_ANTIVIRUS
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse2_3F_Man_11
	msgbox InstallAntiVirus, MSGBOX_DEFAULT
	closemessage
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Sandstone_BigHouse2_3F_Man_14
	applymovement 1, WalkSouthToBench
Sandstone_BigHouse2_3F_Man_13:
	setvar VAR_SANDSTONEPORYGON_STATE, 2
	setobjectxyperm 1, 13, 3
	waitmovement 0
	delay 30
	release
	end

Sandstone_BigHouse2_3F_Man_11:
	msgbox INeedAntiVirus, MSGBOX_NPC
	end

Sandstone_BigHouse2_3F_Man_14:
	applymovement 1, WalkEastToBench
	goto Sandstone_BigHouse2_3F_Man_13


Sandstone_BigHouse2_3F_PC::
	lock
	msgbox WantToInstallAV, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse2_3F_PC_2
	message Av2
	waitmessage
	message Av3
	waitmessage
	message Av4
	waitmessage
	msgbox InstallingAV, MSGBOX_DEFAULT
	removeitem ITEM_ANTIVIRUS
	setvar VAR_SANDSTONEPORYGON_STATE, 3
	setwildbattle SPECIES_PORYGON, 35
	dowildbattle
	goto PCAftermath
	return

Sandstone_BigHouse2_3F_PC_2:
	closemessage
	release
	end


PCAftermath::
	delay 30
	applymovement 1, Moveleftandup
	waitmovement 0
	delay 15
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	delay 15
	msgbox ItWasAPorygon, MSGBOX_DEFAULT
	addmoney 5000
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, StepAway
	waitmovement 0
	applymovement 1, Walk1Up
	waitmovement 0
	delay 30
	release
	end


WalkEastToBench:
	walk_right
	walk_down
	walk_in_place_left
	step_end

WalkSouthToBench:
	walk_down
	walk_right
	walk_in_place_left
	step_end

Moveleftandup:
	walk_left
	walk_in_place_up
	step_end

StepAway:
	face_right
	lock_facing_direction
	walk_left
	step_end

Sandstone_BigHouse2_2F_FanM::
	msgbox Sandstone_BigHouse2_2F_FanM_Text, MSGBOX_NPC
	end


Sandstone_BigHouse2_2F_FanF::
	msgbox Sandstone_BigHouse2_2F_FanF_Text, MSGBOX_NPC
	end


Sandstone_BigHouse2_1F_Maniac::
	goto_if_set FLAG_SANDSTONE_DUSKBALLS, Sandstone_BigHouse2_1F_Maniac_2
	lock
	faceplayer
	msgbox Sandstone_BigHouse2_1F_Maniac_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_DUSK_BALL, 2
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse2_1F_Maniac_5
	giveitem ITEM_DUSK_BALL, 2
	setflag FLAG_SANDSTONE_DUSKBALLS
	waitfanfare
	msgbox Sandstone_BigHouse2_1F_Maniac_Text2, MSGBOX_NPC
	end

Sandstone_BigHouse2_1F_Maniac_2:
	msgbox Sandstone_BigHouse2_1F_Maniac_Text2, MSGBOX_NPC
	end

Sandstone_BigHouse2_1F_Maniac_5:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


BusyAnsweringEmail::
	.string "I'm sorry. I am indeed thankful you\n"
	.string "were able to help me, but there's\l"
	.string "some very important work email I\l"
	.string "have to respond to…$"

GoAheadInstall::
	.string "Go ahead, the PC is all yours.$"

INeedAntiVirus::
	.string "You should be able to get Antivirus\n"
	.string "software from the department store.$"

InstallAntiVirus::
	.string "You brought the Antivirus?\n"
	.string "That's great!\p"
	.string "Sorry, I'm a bit computer-illiterate.\n"
	.string "Do you think you could install it\l"
	.string "for me?$"

GetAntiVirus::
	.string "There seems to be something wrong with\n"
	.string "my PC.\p"
	.string "If it's not too much of a bother, could\n"
	.string "you fetch me an Antivirus from the\l"
	.string "department store?$"

WantToInstallAV::
	.string "The computer stands idle. Would you\n"
	.string "like to install the Antivirus?$"

Av2::
	.string "Installing{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…$"

Av3::
	.string "The PC is starting to act weird…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

Av4::
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

InstallingAV::
	.string "Something leaps at you from the\n"
	.string "monitor!$"

ItWasAPorygon::
	.string "Oh, so the virus was a… Pokémon?\p"
	.string "Huh… Can't say I've ever heard of\n"
	.string "something like this happening.\p"
	.string "Anyway, thank you for your help.\p"
	.string "Here's ¥5000. That should cover\n"
	.string "the cost of the Antivirus software.\p"
	.string "Now, if you'll excuse me, I need to\n"
	.string "get back to work.$"

Sandstone_BigHouse2_2F_FanM_Text::
	.string "Whatever your age, you can have\n"
	.string "Pokémon battles if you have Pokémon\l"
	.string "by your side.$"

Sandstone_BigHouse2_2F_FanF_Text::
	.string "After many battles, you start to see\n"
	.string "more deeply and understand things.\p"
	.string "That's why I know exactly what my\n"
	.string "husband is thinking!$"

Sandstone_BigHouse2_1F_Maniac_Text::
	.string "There are times when you want to catch\n"
	.string "Pokémon in dark places, right?\l"
	.string "I'll share some of these with you.$"

Sandstone_BigHouse2_1F_Maniac_Text2::
	.string "A Dusk Ball works well at night or\n"
	.string "in a cave.\p"
	.string "Plus, it has a most excellent name!\n"
	.string "Dusk! The Dusk Ball.\p"
	.string "I believe it can even catch and control\n"
	.string "the darkness found in hearts.$"
