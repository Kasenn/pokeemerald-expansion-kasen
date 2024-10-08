AldeleafBigHouse1_MapScripts::
	.byte 0


AldeleafBigHouse1_Woman::
	msgbox AldeleafBigHouse1_Woman_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_Man::
	msgbox AldeleafBigHouse1_2F_Man_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_Woman::
	msgbox AldeleafBigHouse1_2F_Woman_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_LittleGirl::
	msgbox AldeleafBigHouse1_2F_LittleGirl_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_Swablu::
	msgbox AldeleafBigHouse1_2F_Swablu_Text_0, MSGBOX_SIGN
	end


AldeleafBigHouse1_2F_Snorlax::
	msgbox AldeleafBigHouse1_2F_Snorlax_Text_0, MSGBOX_SIGN
	end


AldeleafBigHouse1_2F_Azurill::
	msgbox AldeleafBigHouse1_2F_Azurill_Text_0, MSGBOX_SIGN
	end


AldeleafBigHouse2_Maniac::
	msgbox AldeleafBigHouse2_Maniac_Text, MSGBOX_NPC
	end


AldeleafBigHouse2_2F_OldWoman::
	lockall
	faceplayer
	goto_if_set FLAG_RECEIVED_LAVA_COOKIE, AldeleafBigHouse2_2F_OldWoman_2
AldeleafBigHouse2_2F_OldWoman_1:
	msgbox AldeleafBigHouse2_2F_OldWoman_Text, MSGBOX_DEFAULT
	giveitem ITEM_LAVA_COOKIE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_RECEIVED_LAVA_COOKIE
	waitmessage
	closemessage
	release
	end

AldeleafBigHouse2_2F_OldWoman_2:
	goto AldeleafBigHouse2_2F_OldWoman2
	goto AldeleafBigHouse2_2F_OldWoman_1


AldeleafBigHouse2_2F_OldMan::
	msgbox AldeleafBigHouse2_2F_OldMan_Text, MSGBOX_NPC
	end


AldeleafBigHouse2_2F_OldWoman2::
	msgbox AldeleafBigHouse2_2F_OldWoman2_Text_0, MSGBOX_NPC
	end


AldeleafBigHouse3_2F_Exorcist::
	compare VAR_ALDELEAF_HOUSE, 0
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_2
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_5
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_5
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_10
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_13
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_15
	msgbox AldeleafBigHouse3_2F_Exorcist_MediumAura, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_2:
	msgbox AldeleafBigHouse3_2F_Exorcist_NoAura, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_5:
	msgbox AldeleafBigHouse3_2F_Exorcist_StrongAura, MSGBOX_NPC
	giveitem ITEM_TALISMAN
	msgbox AldeleafBigHouse3_2F_Exorcist_StrongAuraContinued, MSGBOX_NPC
	setvar VAR_ALDELEAF_HOUSE, 10
	end

AldeleafBigHouse3_2F_Exorcist_10:
	msgbox AldeleafBigHouse3_2F_Exorcist_LeaveMe, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_13:
	msgbox AldeleafBigHouse3_2F_Exorcist_AuraGone, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_15:
	msgbox AldeleafBigHouse3_2F_Exorcist_AuraGone, MSGBOX_NPC
	end


AldeleafBigHouse3_Man::
	msgbox AldeleafBigHouse3_Man_Text, MSGBOX_NPC
	end


AldeleafBigHouse3_Ditto::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DITTO, CRY_MODE_NORMAL
	msgbox AldeleafBigHouse3_Ditto_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


AldeleafBigHouse3_3F_PokeBall::
	goto_if_unset FLAG_TOUCHPOKEBALL, AldeleafBigHouse3_3F_PokeBall_2
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	lockall
	msgbox AldeleafBigHouse3_3F_PokeBall_Text_Sure, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_5
	hideobjectat 1, MAP_ALDELEAF_BIG_HOUSE3_3F
	message AldeleafBigHouse3_3F_PokeBall_PickedUp
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox AldeleafBigHouse3_3F_PokeBall_Name, MSGBOX_YESNO
	msgbox AldeleafBigHouse3_3F_PokeBall_Stop, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	closemessage
	clearflag FLAG_HIDE3FMAN
	addobject 2, MAP_ALDELEAF_BIG_HOUSE3_3F
	showobjectat 2, MAP_ALDELEAF_BIG_HOUSE3_3F
	special DrawWholeMapView
	delay 30
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_8
AldeleafBigHouse3_3F_PokeBall_7:
	compare VAR_FACING, DIR_EAST
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_11
AldeleafBigHouse3_3F_PokeBall_10:
	waitmovement 2, MAP_ALDELEAF_BIG_HOUSE3_3F
	delay 10
	msgbox AldeleafBigHouse3_3F_PokeBall_GiveThatBack, MSGBOX_DEFAULT
	waitmessage
	closemessage
	delay 15
	compare VAR_TEMP_2, DIR_SOUTH
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_14
AldeleafBigHouse3_3F_PokeBall_13:
	compare VAR_TEMP_2, DIR_EAST
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_17
AldeleafBigHouse3_3F_PokeBall_16:
	waitmovement 2
	showobjectat 1, MAP_ALDELEAF_BIG_HOUSE3_3F
	delay 60
	compare VAR_TEMP_2, DIR_SOUTH
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_20
AldeleafBigHouse3_3F_PokeBall_19:
	compare VAR_TEMP_2, DIR_EAST
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_23
AldeleafBigHouse3_3F_PokeBall_22:
	delay 15
	msgbox AldeleafBigHouse3_3F_PokeBall_GetOut, MSGBOX_NPC
	setflag FLAG_ANGEREDGUYINALDELEAF
	warp MAP_ALDELEAF_BIG_HOUSE3_2F, 1, 3
	release
	end

AldeleafBigHouse3_3F_PokeBall_2:
	msgbox AldeleafBigHouse3_3F_PokeBall_Text, MSGBOX_SIGN
	setflag FLAG_TOUCHPOKEBALL
	end

AldeleafBigHouse3_3F_PokeBall_5:
	closemessage
	release
	end

AldeleafBigHouse3_3F_PokeBall_8:
	applymovement 2, AldeleafBigHouse3_3F_MoveLong, MAP_ALDELEAF_BIG_HOUSE3_3F
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLooksLeft
	setvar VAR_TEMP_2, DIR_SOUTH
	goto AldeleafBigHouse3_3F_PokeBall_7

AldeleafBigHouse3_3F_PokeBall_11:
	applymovement 2, AldeleafBigHouse3_3F_MoveShort, MAP_ALDELEAF_BIG_HOUSE3_3F
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLooksLeft
	setvar VAR_TEMP_2, DIR_EAST
	goto AldeleafBigHouse3_3F_PokeBall_10

AldeleafBigHouse3_3F_PokeBall_14:
	applymovement 2, AldeleafBigHouse3_3F_MovesToTableShort, MAP_ALDELEAF_BIG_HOUSE3_3F
	goto AldeleafBigHouse3_3F_PokeBall_13

AldeleafBigHouse3_3F_PokeBall_17:
	applymovement 2, AldeleafBigHouse3_3F_MovesToTableLong, MAP_ALDELEAF_BIG_HOUSE3_3F
	delay 20
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto AldeleafBigHouse3_3F_PokeBall_16

AldeleafBigHouse3_3F_PokeBall_20:
	applymovement 2, AldeleafBigHouse3_3F_UpRight, MAP_ALDELEAF_BIG_HOUSE3_3F
	goto AldeleafBigHouse3_3F_PokeBall_19

AldeleafBigHouse3_3F_PokeBall_23:
	applymovement 2, AldeleafBigHouse3_3F_LeftDown, MAP_ALDELEAF_BIG_HOUSE3_3F
	goto AldeleafBigHouse3_3F_PokeBall_22


PlayerLooksLeft:
	walk_in_place_faster_left
	step_end

AldeleafBigHouse3_3F_MoveLong:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

AldeleafBigHouse3_3F_MoveShort:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

AldeleafBigHouse3_3F_MovesToTableShort:
	walk_down
	walk_in_place_right
	step_end

AldeleafBigHouse3_3F_MovesToTableLong:
	walk_up
	walk_right
	walk_right
	walk_in_place_down
	step_end

AldeleafBigHouse3_3F_UpRight:
	walk_up
	walk_in_place_right
	step_end

AldeleafBigHouse3_3F_LeftDown:
	walk_left
	walk_in_place_down
	step_end

AldeleafBigHouse3_2F_Hide3FMan::
	setflag FLAG_HIDE3FMAN
	goto_if_set FLAG_ANGEREDGUYINALDELEAF, AldeleafBigHouse3_2F_Hide3FMan_2
AldeleafBigHouse3_2F_Hide3FMan_1:
	release
	end

AldeleafBigHouse3_2F_Hide3FMan_2:
	msgbox AldeleafBigHouse3_3F_PokeBall_StayOut, MSGBOX_DEFAULT
	waitmessage
	closemessage
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
	waitmovement 0
	goto AldeleafBigHouse3_2F_Hide3FMan_1


AldeleafBigHouse1_2F_Swablu_Text_0:
	.string "It's a Swablu doll.$"

AldeleafBigHouse1_2F_Snorlax_Text_0:
	.string "It's a Clefairy doll.$"

AldeleafBigHouse1_2F_Azurill_Text_0:
	.string "It's an Azurill doll.$"

AldeleafBigHouse2_2F_OldWoman2_Text_0:
	.string "Oh, aren't you just the cutest.$"

AldeleafBigHouse1_Woman_Text::
	.string "Have you heard of Pokémon\n"
	.string "transformations?\l"
	.string "Apparently some regions have these.\p"
	.string "Over in Galar they have Dynamaxing while\n"
	.string "Paldea has Terastallization.\p"
	.string "I wonder if we have something similar…$"

AldeleafBigHouse1_2F_Man_Text::
	.string "Life here is great.\p"
	.string "Sure we're far from other large\n"
	.string "settlements but we have everything\l"
	.string "we could possibly want right here.$"

AldeleafBigHouse1_2F_Woman_Text::
	.string "Aldeleaf City is sometimes also\n"
	.string "called “The Crossroads”.\p"
	.string "This is thanks to Aldeleaf's\n"
	.string "central location,\l"
	.string "causing a lot of people to pass through\l"
	.string "as they travel to other cities.\p"
	.string "Though for some reason the traffic\n"
	.string "from the north has almost completely\l"
	.string "stopped…$"

AldeleafBigHouse1_2F_LittleGirl_Text::
	.string "Look at all these dolls mommy and\n"
	.string "daddy got me!$"

AldeleafBigHouse2_Maniac_Text::
	.string "Sometimes during a Pokémon battle,\n"
	.string "A Pokémon can get really lucky and land\l"
	.string "a devastating blow against the foe,\l"
	.string "usually referred to as critical hit.\p"
	.string "In recent years, most Pokémon have\n"
	.string "started developing thicker skins,\l"
	.string "making them less susceptible to\l"
	.string "major harm from these strikes.$"

AldeleafBigHouse2_2F_OldWoman_Text::
	.string "Oh, aren't you just the cutest.\n"
	.string "Here, have a cookie.$"

AldeleafBigHouse2_2F_OldMan_Text::
	.string "Us old folk don't have much going on\n"
	.string "these days so visitors are certainly\l"
	.string "appreciated.$"

AldeleafBigHouse3_2F_Exorcist_NoAura::
	.string "… … … …\p"
	.string "… … … …\p"
	.string "You have a very clear aura…$"

AldeleafBigHouse3_2F_Exorcist_MediumAura::
	.string "… … … …\p"
	.string "I sense an evil aura\n"
	.string "emanating from you…\p"
	.string "However, I don't believe\n"
	.string "you are its source…$"

AldeleafBigHouse3_2F_Exorcist_StrongAura::
	.string "AAH, what an overwherlmingly\n"
	.string "evil presence…!\p"
	.string "… … … …\p"
	.string "Oh?\p"
	.string "I don't believe you are\n"
	.string "the source, however…\p"
	.string "Here, take this paper talisman.\n"
	.string "It will protect you from evil spirits.$"

AldeleafBigHouse3_2F_Exorcist_StrongAuraContinued::
	.string "Carry it with you.\n"
	.string "Always.$"

AldeleafBigHouse3_2F_Exorcist_LeaveMe::
	.string "Please leave, before the aura\n"
	.string "around you overwhelms me!$"

AldeleafBigHouse3_2F_Exorcist_AuraGone::
	.string "Ahh, I can no longer sense the\n"
	.string "presence of the evil aura around you…$"

AldeleafBigHouse3_Man_Text::
	.string "Do you like my Pokémon?\n"
	.string "If you ask me, I'd say it's perfect.$"

AldeleafBigHouse3_Ditto_Text::
	.string "Dii…$"

AldeleafBigHouse3_3F_PokeBall_Text::
	.string "Someone has left a Poké Ball here.\n"
	.string "Probably best to leave it be…$"

AldeleafBigHouse3_3F_PokeBall_Text_Sure::
	.string "Someone has left a Poké Ball here.\n"
	.string "Are you sure you want to take it?$"

AldeleafBigHouse3_3F_PokeBall_PickedUp::
	.string "{PLAYER} obtained an Eevee!$"

AldeleafBigHouse3_3F_PokeBall_Name::
	.string "Do you want to give a nickname\n"
	.string "to your new Pokémon?$"

AldeleafBigHouse3_3F_PokeBall_Stop::
	.string "STOP!!$"

AldeleafBigHouse3_3F_PokeBall_GiveThatBack::
	.string "What do you think you're doing,\n"
	.string "stealing other people's Pokémon!?\l"
	.string "Now give it back!$"

AldeleafBigHouse3_3F_PokeBall_GetOut::
	.string "Now get out of my apartment!$"

AldeleafBigHouse3_3F_PokeBall_StayOut::
	.string "Probably best not to\n"
	.string "go upstairs again…$"
