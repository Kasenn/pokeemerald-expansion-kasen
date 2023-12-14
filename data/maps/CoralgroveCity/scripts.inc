CoralgroveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Coralgrove_State
	.byte 0


Coralgrove_State::
	compare VAR_CORALGROVE_STATE, 0
	goto_if_eq Coralgrove_State_2
Coralgrove_State_1:
	end

Coralgrove_State_2:
	setvar VAR_CORALGROVE_STATE, 1
	setflag FLAG_CORAL_FLAG_1
	setflag FLAG_UNUSED_0x267_CG_HIDEGHOST
	hideobjectat 11, MAP_CORALGROVE_CITY
	goto Coralgrove_State_1


CoralHideGhost2::
	compare VAR_CORALGROVE_STATE, 1
	goto_if_eq CoralHideGhost2_2
	release
	end

CoralHideGhost2_2:
	hideobjectat 11, MAP_CORALGROVE_CITY
	release
	end


Coralgrove_HauntedHouse::
	lockall
	compare VAR_CORALGROVE_STATE, 1
	goto_if_eq Coralgrove_HauntedHouse_2
Coralgrove_HauntedHouse_1:
	msgbox Coralgrove_HauntedHouse_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	release
	end

Coralgrove_HauntedHouse_2:
	setvar VAR_CORALGROVE_STATE, 2
	goto Coralgrove_HauntedHouse_1


CoralShowGhost::
	compare VAR_CORALGROVE_STATE, 2
	goto_if_eq CoralShowGhost_1
	return

CoralShowGhost_1:
	setvar VAR_CORALGROVE_STATE, 3
	clearflag FLAG_UNUSED_0x267_CG_HIDEGHOST
	showobjectat 11, MAP_CORALGROVE_CITY
	return


CoralHideGhost::
	compare VAR_CORALGROVE_STATE, 3
	goto_if_eq CoralHideGhost_2
CoralHideGhost_1:
	end

CoralHideGhost_2:
	lockall
	fadeoutbgm 0
	delay 60
	msgbox CoralHideGhost_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	fadescreenspeed FADE_TO_WHITE, 2
	setflag FLAG_UNUSED_0x267_CG_HIDEGHOST
	setvar VAR_CORALGROVE_STATE, 4
	hideobjectat 11, MAP_CORALGROVE_CITY
	delay 30
	fadescreenspeed FADE_FROM_WHITE, 2
	delay 90
	fadeinbgm 0
	delay 60
	release
	goto CoralHideGhost_1


Coralgrove_MAN_3::
	lockall
	faceplayer
	msgbox Coralgrove_MAN_3_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_GENTLEMAN::
	lockall
	faceplayer
	msgbox Coralgrove_GENTLEMAN_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_MartMan::
	lockall
	faceplayer
	msgbox Coralgrove_MartMan_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoralGrove_NINJA_BOY::
	lockall
	faceplayer
	msgbox CoralGrove_NINJA_BOY_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	end


CoralGrove_OLD_WOMAN::
	lockall
	msgbox CoralGrove_OLD_WOMAN_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	releaseall
	end


CoralGrove_OLD_MAN::
	lockall
	faceplayer
	msgbox CoralGrove_OLD_MAN_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_LASS::
	lockall
	faceplayer
	msgbox Coralgrove_LASS_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_HIKER::
	lockall
	faceplayer
	msgbox Coral_Hiker_Text, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_Children::
	lockall
	faceplayer
	msgbox Coralgrove_Children_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_school::
	msgbox Coralgrove_school_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	end


CoralSign::
	msgbox CoralSign_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	return


CoralGreatBall::
	finditem ITEM_GREAT_BALL
	return


Coralgrove_HauntedHouse_Text_0:
	.string "The door is nailed shut.\nLooks like nobody lives here.$"

CoralHideGhost_Text_0:
	.string "No, you're not the one…$"

Coralgrove_MAN_3_Text_0:
	.string "To the south lies Primrose Town.\pIf you want to go anywhere else,\nyou must take the elevator to\lthe north to access the harbor area.$"

Coralgrove_GENTLEMAN_Text_0:
	.string "They recently opened this new shop\nbut I have no idea what lies inside.\pI don't want to enter situations where\na person of my stature would not\lnormally be seen in so I'm deliberating\lwhether I should peek in.$"

Coralgrove_MartMan_Text_0:
	.string "Hello and welcome!\nThis is the Battle Shop.\pHere you can purchase useful\ncombat items and consumables.\pInstead of regular currency, everything\nin our shop is purchasable with\lBattle Points, or BP, instead!$"

CoralGrove_NINJA_BOY_Text_0:
	.string "I swear I saw this ghost girl flying\nabout but none of the adults believe me!$"

CoralGrove_OLD_WOMAN_Text_0:
	.string "Such pretty flowers…$"

CoralGrove_OLD_MAN_Text_0:
	.string "My wife is mesmerized by flowers.\pI don't really care about flowers\nbut better not let her catch on…$"

Coralgrove_LASS_Text_0:
	.string "Can you even call this place a city?\pThere's the Trainers' School and\nthe Pokémon Gym but apart from those\lthere's very little to do here.$"

Coralgrove_Children_Text_0:
	.string "We're on recess!$"

Coralgrove_school_Text_0:
	.string "Pokémon Trainers' School$"

CoralSign_Text_0:
	.string "CORALGROVE CITY\n“Home of many aspiring trainers.”$"

Coral_Hiker_Text::
	.string "There was landslide between\nCoralgrove City and Primrose Town.\pThere's some rocks here and there but\nmost of it has already been cleared.$"
