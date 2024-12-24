CoralgroveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Coralgrove_State
	.byte 0


Coralgrove_State::
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_TEMP_1
	return


CoralHideGhost2::
	removeobject 11
	clearflag FLAG_TEMP_2
	release
	return


Coralgrove_HauntedHouse::
	lock
	goto_if_unset FLAG_0x267_CG_HIDEGHOST, Coralgrove_HauntedHouse_2
Coralgrove_HauntedHouse_1:
	msgbox Coralgrove_HauntedHouse_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	release
	end

Coralgrove_HauntedHouse_2:
	setflag FLAG_TEMP_2
	goto Coralgrove_HauntedHouse_1


CoralShowGhost::
	clearflag FLAG_TEMP_1
	addobject 11
	release
	return


CoralHideGhost::
	lock
	fadeoutbgm 0
	delay 60
	msgbox CoralHideGhost_Text_0
	closemessage
	fadescreenspeed FADE_TO_WHITE, 2
	setflag FLAG_0x267_CG_HIDEGHOST
	clearflag FLAG_TEMP_2
	removeobject 11
	delay 30
	fadescreenspeed FADE_FROM_WHITE, 2
	delay 90
	fadeinbgm 0
	delay 60
	release
	return


Coralgrove_MAN_3::
	msgbox Coralgrove_MAN_3_Text_0, MSGBOX_NPC
	return


Coralgrove_GENTLEMAN::
	goto_if_set FLAG_CORALGROVE_CUTSCENE, Coralgrove_GENTLEMAN_2
	msgbox Coralgrove_GENTLEMAN_Text, MSGBOX_NPC
Coralgrove_GENTLEMAN_1:
	turnobject 12, DIR_NORTH
	return

Coralgrove_GENTLEMAN_2:
	msgbox Coralgrove_DroppedSomething, MSGBOX_NPC
	goto Coralgrove_GENTLEMAN_1


Coralgrove_LeftBirds::
	setvar VAR_TEMP_3, 1
	goto Coralgrove_BirdEvent
	return


Coralgrove_RightBirds::
	setvar VAR_TEMP_3, 2
	goto Coralgrove_BirdEvent
	return


Coralgrove_BirdEvent::
	lock
	safefollow
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Up
	waitmovement 0
	compare VAR_TEMP_3, 1
	goto_if_eq Coralgrove_BirdEvent_2
	applymovement 13, BirdFlyFromEast
	waitmovement 13
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	applymovement 13, BirdFlyFromEast
	waitmovement 13
Coralgrove_BirdEvent_1:
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Down
	waitmovement 0
	special RemoveCameraObject
	delay 30
	removeobject 13
	removeobject 14
	setflag FLAG_CORALGROVE_CUTSCENE
	clearflag FLAG_OBTAINED_PIDGEOTITE
	release
	end

Coralgrove_BirdEvent_2:
	applymovement 14, BirdFlyFromWest
	waitmovement 14
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	applymovement 14, BirdFlyFromWest
	waitmovement 14
	goto Coralgrove_BirdEvent_1


BirdFlyFromWest:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

BirdFlyFromEast:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Coralgrove_MartMan::
	msgbox Coralgrove_MartMan_Text_0, MSGBOX_NPC
	return


CoralGrove_NINJA_BOY::
	msgbox CoralGrove_NINJA_BOY_Text_0, MSGBOX_NPC
	return


CoralGrove_OLD_WOMAN::
	lock
	msgbox CoralGrove_OLD_WOMAN_Text_0, MSGBOX_DEFAULT
	closemessage
	release
	return


CoralGrove_OLD_MAN::
	msgbox CoralGrove_OLD_MAN_Text_0, MSGBOX_NPC
	return


Coralgrove_LASS::
	msgbox Coralgrove_LASS_Text_0, MSGBOX_NPC
	return


Coralgrove_HIKER::
	msgbox Coral_Hiker_Text, MSGBOX_NPC
	return


Coralgrove_Children::
	msgbox Coralgrove_Children_Text_0, MSGBOX_NPC
	return


Coralgrove_school::
	msgbox Coralgrove_school_Text_0, MSGBOX_SIGN
	return


Coralgrove_Lifthouse::
	msgbox Coralgrove_Lifthouse_Text_0, MSGBOX_SIGN
	return


CoralSign::
	msgbox CoralSign_Text_0, MSGBOX_SIGN
	return


CoralGreatBall::
	finditem ITEM_GREAT_BALL
	return


CoralGrove_EventScript_GymSign::
	msgbox CoralGrove_EventScript_GymSign_Text_0, MSGBOX_SIGN
	return


Coralgrove_HauntedHouse_Text_0:
	.string "The door is nailed shut.\nLooks like nobody lives here.$"

CoralHideGhost_Text_0:
	.string "No, you're not the one…$"

Coralgrove_MAN_3_Text_0:
	.string "To the south lies Primrose Town.\pIf you want to go anywhere else,\nyou must take the elevator to\lthe north to access the harbor area.$"

Coralgrove_MartMan_Text_0:
	.string "Hello and welcome!\nThis is the Battle Shop.\pHere you can purchase useful\ncombat items and consumables.\pInstead of regular currency, everything\nin our shop is purchasable with\lBattle Points, or BP, instead!$"

CoralGrove_NINJA_BOY_Text_0:
	.string "I swear I saw this ghost girl flying\nabout but none of the adults believe me!$"

CoralGrove_OLD_WOMAN_Text_0:
	.string "Such pretty flowers…$"

CoralGrove_OLD_MAN_Text_0:
	.string "My wife often gets mesmerized\nby flowers.\pI don't really care about flowers\nbut better not let her catch on…$"

Coralgrove_LASS_Text_0:
	.string "Can you even call this place a city?\pThere's the Trainers' School and\nthe Pokémon Gym but apart from those\lthere's very little to do here.$"

Coralgrove_Children_Text_0:
	.string "We're on recess!$"

Coralgrove_school_Text_0:
	.string "Pokémon Trainers' School$"

Coralgrove_Lifthouse_Text_0:
	.string "Elevator access to harbor area$"

CoralSign_Text_0:
	.string "CORALGROVE CITY\n“Home of many aspiring trainers.”$"

CoralGrove_EventScript_GymSign_Text_0:
	.string "Coralgrove City Pokémon Gym\nLeader: Aaron$"

Coralgrove_GENTLEMAN_Text::
	.string "Do you ever look far into the horizon\n"
	.string "and let your worries fade away?$"

Coralgrove_DroppedSomething::
	.string "Did you see that?\p"
	.string "I think that Pidgeot dropped\n"
	.string "something in the ocean.$"

Coral_Hiker_Text::
	.string "There was a landslide between\n"
	.string "Coralgrove City and Primrose Town.\p"
	.string "There's some rocks here and there but\n"
	.string "most of it has already been cleared.$"
