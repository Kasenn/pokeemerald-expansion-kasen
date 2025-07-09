Sandstone_LargeHouse2_3F_MapScripts::
# 2 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ResetPorygon
	.byte 0


ResetPorygon::
# 6 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_SANDSTONEPORYGON_STATE, 2
	goto_if_eq ResetPorygon_2
ResetPorygon_1:
	end

ResetPorygon_2:
# 7 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	setvar VAR_SANDSTONEPORYGON_STATE, 1
	goto ResetPorygon_1


Sandstone_BigHouse2_3F_Man::
# 13 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_SANDSTONEPORYGON_STATE, 3
	goto_if_eq Sandstone_BigHouse2_3F_Man_2
# 18 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_SANDSTONEPORYGON_STATE, 2
	goto_if_eq Sandstone_BigHouse2_3F_Man_5
# 22 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	lock
# 23 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	faceplayer
# 24 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 25 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_ne Sandstone_BigHouse2_3F_Man_9
Sandstone_BigHouse2_3F_Man_7:
# 28 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_SANDSTONEPORYGON_STATE, 1
	goto_if_eq Sandstone_BigHouse2_3F_Man_13
# 49 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox GetAntiVirus, MSGBOX_NPC
# 50 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	setvar VAR_SANDSTONEPORYGON_STATE, 1
# 51 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	goto_if_unset FLAG_Q32_SANDSTONE_ANTIVIRUS_START, Sandstone_BigHouse2_3F_Man_16
Sandstone_BigHouse2_3F_Man_15:
	end

Sandstone_BigHouse2_3F_Man_2:
# 14 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox BusyAnsweringEmail, MSGBOX_NPC
# 15 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	turnobject 1, DIR_NORTH
	end

Sandstone_BigHouse2_3F_Man_5:
# 19 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox GoAheadInstall, MSGBOX_NPC
	end

Sandstone_BigHouse2_3F_Man_8:
# 26 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	safefollow
	goto Sandstone_BigHouse2_3F_Man_7

Sandstone_BigHouse2_3F_Man_9:
# 25 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_ne Sandstone_BigHouse2_3F_Man_8
	goto Sandstone_BigHouse2_3F_Man_7

Sandstone_BigHouse2_3F_Man_13:
# 29 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	checkitem ITEM_ANTIVIRUS
# 30 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse2_3F_Man_19
# 34 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox InstallAntiVirus, MSGBOX_DEFAULT
# 35 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	closemessage
# 36 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Sandstone_BigHouse2_3F_Man_22
# 40 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	applymovement 1, WalkSouthToBench
Sandstone_BigHouse2_3F_Man_21:
# 42 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	setvar VAR_SANDSTONEPORYGON_STATE, 2
# 43 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	setobjectxyperm 1, 13, 3
# 44 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitmovement 0
# 45 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	delay 30
# 46 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	release
	end

Sandstone_BigHouse2_3F_Man_16:
# 52 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	startquest FLAG_Q32_SANDSTONE_ANTIVIRUS_START
# 53 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	special ShowJournalPopupAdd
	goto Sandstone_BigHouse2_3F_Man_15

Sandstone_BigHouse2_3F_Man_19:
# 31 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox INeedAntiVirus, MSGBOX_NPC
	end

Sandstone_BigHouse2_3F_Man_22:
# 37 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	applymovement 1, WalkEastToBench
	goto Sandstone_BigHouse2_3F_Man_21


Sandstone_BigHouse2_3F_PC::
# 59 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	lock
# 60 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox WantToInstallAV, MSGBOX_YESNO
# 61 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse2_3F_PC_2
# 66 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	message Av2
# 67 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitmessage
# 68 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	message Av3
# 69 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitmessage
# 70 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	message Av4
# 71 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitmessage
# 72 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox InstallingAV, MSGBOX_DEFAULT
# 73 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	removeitem ITEM_ANTIVIRUS
# 74 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	setvar VAR_SANDSTONEPORYGON_STATE, 3
# 75 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	setwildbattle SPECIES_PORYGON, 30
# 76 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	dowildbattle
# 77 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	goto PCAftermath
	return

Sandstone_BigHouse2_3F_PC_2:
# 62 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	closemessage
# 63 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	release
	end


PCAftermath::
# 81 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	delay 30
# 82 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	applymovement 1, Moveleftandup
# 83 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitmovement 0
# 84 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	delay 15
# 85 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 86 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	delay 15
# 87 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox ItWasAPorygon, MSGBOX_DEFAULT
# 88 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	addmoney 5000
# 89 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	closemessage
# 90 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	applymovement LOCALID_PLAYER, StepAway
# 91 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitmovement 0
# 92 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	applymovement 1, Walk1Up
# 93 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitmovement 0
# 94 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	delay 30
# 95 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	release
# 96 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	goto_if_set FLAG_Q32_SANDSTONE_ANTIVIRUS_START, PCAftermath_2
PCAftermath_1:
	end

PCAftermath_2:
# 97 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	completequest FLAG_Q32_SANDSTONE_ANTIVIRUS_COMPLETE
# 98 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	special ShowJournalPopupRemove
	goto PCAftermath_1


# 158 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
WalkEastToBench:
# 159 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_right
# 160 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_down
# 161 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_in_place_left
	step_end

# 163 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
WalkSouthToBench:
# 164 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_down
# 165 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_right
# 166 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_in_place_left
	step_end

# 168 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
Moveleftandup:
# 169 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_left
# 170 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_in_place_up
	step_end

# 172 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
StepAway:
# 173 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	face_right
# 174 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	lock_facing_direction
# 175 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	walk_left
	step_end

Sandstone_BigHouse2_2F_FanM::
# 179 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox Sandstone_BigHouse2_2F_FanM_Text, MSGBOX_NPC
	end


Sandstone_BigHouse2_2F_FanF::
# 183 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox Sandstone_BigHouse2_2F_FanF_Text, MSGBOX_NPC
	end


Sandstone_BigHouse2_1F_Maniac::
# 199 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	goto_if_set FLAG_SANDSTONE_DUSKBALLS, Sandstone_BigHouse2_1F_Maniac_2
# 203 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	lock
# 204 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	faceplayer
# 205 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox Sandstone_BigHouse2_1F_Maniac_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_DUSK_BALL, 2
# 0 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse2_1F_Maniac_5
Sandstone_BigHouse2_1F_Maniac_4:
# 209 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	giveitem ITEM_DUSK_BALL, 2
# 210 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	setflag FLAG_SANDSTONE_DUSKBALLS
# 211 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	waitfanfare
# 212 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox Sandstone_BigHouse2_1F_Maniac_Text2, MSGBOX_NPC
	end

Sandstone_BigHouse2_1F_Maniac_2:
# 200 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	msgbox Sandstone_BigHouse2_1F_Maniac_Text2, MSGBOX_NPC
	end

Sandstone_BigHouse2_1F_Maniac_5:
# 207 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	goto ZeBagIsFull
	goto Sandstone_BigHouse2_1F_Maniac_4


BusyAnsweringEmail::
# 103 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "I'm sorry. I am indeed thankful you\n"
	.string "were able to help me, but there's\l"
	.string "some very important work email I\l"
	.string "have to respond to…$"

GoAheadInstall::
# 109 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "Go ahead, the PC is all yours.$"

INeedAntiVirus::
# 112 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "You should be able to get Antivirus\n"
	.string "software from the department store.$"

InstallAntiVirus::
# 116 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "You brought the Antivirus?\n"
	.string "That's great!\p"
	.string "Sorry, I'm a bit computer-illiterate.\n"
	.string "Do you think you could install it\l"
	.string "for me?$"

GetAntiVirus::
# 123 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "There seems to be something wrong with\n"
	.string "my PC.\p"
	.string "If it's not too much of a bother, could\n"
	.string "you fetch me an Antivirus from the\l"
	.string "department store?$"

WantToInstallAV::
# 130 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "The computer stands idle. Would you\n"
	.string "like to install the Antivirus?$"

Av2::
# 134 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "Installing{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…$"

Av3::
# 137 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "The PC is starting to act weird…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

Av4::
# 140 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

InstallingAV::
# 143 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "Something leaps at you from the\n"
	.string "monitor!$"

ItWasAPorygon::
# 147 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "Oh, so the virus was a… Pokémon?\p"
	.string "Huh… Can't say I've ever heard of\n"
	.string "something like this happening.\p"
	.string "Anyway, thank you for your help.\p"
	.string "Here's ¥5000. That should cover\n"
	.string "the cost of the Antivirus software.\p"
	.string "Now, if you'll excuse me, I need to\n"
	.string "get back to work.$"

Sandstone_BigHouse2_2F_FanM_Text::
# 186 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "Whatever your age, you can have\n"
	.string "Pokémon battles if you have Pokémon\l"
	.string "by your side.$"

Sandstone_BigHouse2_2F_FanF_Text::
# 191 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "After many battles, you start to see\n"
	.string "more deeply and understand things.\p"
	.string "That's why I know exactly what my\n"
	.string "husband is thinking!$"

Sandstone_BigHouse2_1F_Maniac_Text::
# 216 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "There are times when you want to catch\n"
	.string "Pokémon in dark places, right?\l"
	.string "I'll share some of these with you.$"

Sandstone_BigHouse2_1F_Maniac_Text2::
# 221 "data/maps/Sandstone_LargeHouse2_3F/scripts.pory"
	.string "A Dusk Ball works well at night or\n"
	.string "in a cave.\p"
	.string "Plus, it has a most excellent name!\n"
	.string "Dusk! The Dusk Ball.\p"
	.string "I believe it can even catch and control\n"
	.string "the darkness found in hearts.$"
