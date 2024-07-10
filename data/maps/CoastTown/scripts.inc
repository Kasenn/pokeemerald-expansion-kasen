CoastTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CoastTown_Visited
	.byte 0


CoastTown_Visited::
	setflag FLAG_VISITED_AZURETIDE
	end


CoastTown_Sign1::
	msgbox CoastTown_Sign1_Text_0, MSGBOX_SIGN
	end


CoastTown_Sign2::
	msgbox CoastTown_Sign2_Text_0, MSGBOX_SIGN
	end


CoastTown_Sign3::
	msgbox CoastTown_Sign3_Text_0, MSGBOX_SIGN
	end


CoastTown_Sign4::
	msgbox CoastTown_Sign4_Text_0, MSGBOX_SIGN
	end


CoastTown_OldWoman::
	lockall
	faceplayer
	msgbox CoastTown_OldWoman_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoastTown_OldMan::
	lockall
	faceplayer
	msgbox CoastTown_OldMan_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Azuretide_Mart_OldWoman::
	msgbox Azuretide_Mart_OldWoman_Text, MSGBOX_NPC
	return


CoastTown_FatGuy::
	lockall
	faceplayer
	msgbox CoastTown_FatGuy_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoastTown_FatGuy2::
	lockall
	faceplayer
	goto_if_unset FLAG_AZURETIDE_HONEY, CoastTown_FatGuy2_2
	msgbox FatGuyHoneyGivenAlready, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end

CoastTown_FatGuy2_2:
	msgbox FatGuyHoneyIntro, MSGBOX_NPC
	checkitemspace ITEM_HONEY, 3
	compare VAR_RESULT, TRUE
	goto_if_eq CoastTown_FatGuy2_4
	msgbox FatGuyNotEnoughRoom, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end

CoastTown_FatGuy2_4:
	giveitem ITEM_HONEY, 3
	msgbox FatGuyHoneyGiven, MSGBOX_NPC
	setflag FLAG_AZURETIDE_HONEY
	waitmessage
	closemessage
	release
	end


CoastTown_LittleGirl::
	msgbox CoastTown_LittleGirl_Text_0, MSGBOX_NPC
	closemessage
	end


CoastTown_Triathlete::
	msgbox CoastTown_Triathlete_Text_0, MSGBOX_NPC
	closemessage
	end


CoastTown_Swimmer::
	lockall
	faceplayer
	msgbox CoastTown_Swimmer_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoastTown_NoPokemonTree1::
	lockall
	goto_if_set FLAG_COASTTOWN_TREE1, CoastTown_NoPokemonTree1_1
	call CoastTown_EmptyPokemonTree_Event
	compare VAR_RESULT, 6
	goto_if_ge CoastTown_NoPokemonTree1_5
CoastTown_NoPokemonTree1_4:
	releaseall
	end

CoastTown_NoPokemonTree1_1:
	msgbox CoastTown_NoPokemonTree1_Text_0, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

CoastTown_NoPokemonTree1_5:
	setflag FLAG_COASTTOWN_TREE1
	goto CoastTown_NoPokemonTree1_4


CoastTown_NoPokemonTree2::
	lockall
	goto_if_set FLAG_COASTTOWN_TREE2, CoastTown_NoPokemonTree2_1
	call CoastTown_EmptyPokemonTree_Event
	compare VAR_RESULT, 6
	goto_if_ge CoastTown_NoPokemonTree2_5
CoastTown_NoPokemonTree2_4:
	releaseall
	end

CoastTown_NoPokemonTree2_1:
	msgbox CoastTown_NoPokemonTree1_Text_0, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

CoastTown_NoPokemonTree2_5:
	setflag FLAG_COASTTOWN_TREE2
	goto CoastTown_NoPokemonTree2_4


CoastTown_NoPokemonTree3::
	lockall
	goto_if_set FLAG_COASTTOWN_TREE3, CoastTown_NoPokemonTree3_1
	call CoastTown_EmptyPokemonTree_Event
	compare VAR_RESULT, 6
	goto_if_ge CoastTown_NoPokemonTree3_5
CoastTown_NoPokemonTree3_4:
	releaseall
	end

CoastTown_NoPokemonTree3_1:
	msgbox CoastTown_NoPokemonTree1_Text_0, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

CoastTown_NoPokemonTree3_5:
	setflag FLAG_COASTTOWN_TREE3
	goto CoastTown_NoPokemonTree3_4


CoastTown_EmptyPokemonTree_Event::
	msgbox CoastTown_EmptyPokemonTree_Event_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CoastTown_EmptyPokemonTree_Event_1
	closemessage
	releaseall
	end

CoastTown_EmptyPokemonTree_Event_1:
	closemessage
	playse SE_SUDOWOODO_SHAKE
	waitse
	random 9
	compare VAR_RESULT, 5
	goto_if_le CoastTown_EmptyPokemonTree_Event_5
	compare VAR_RESULT, 6
	goto_if_ge CoastTown_EmptyPokemonTree_Event_7
	return

CoastTown_EmptyPokemonTree_Event_5:
	msgbox UnsureTreeShake, MSGBOX_DEFAULT
	waitmessage
	closemessage
	releaseall
	end

CoastTown_EmptyPokemonTree_Event_7:
	msgbox NoPokemonTreeShake, MSGBOX_DEFAULT
	waitmessage
	closemessage
	return


CoastTown_YesPokemonTree1::
	lockall
	goto_if_set FLAG_COASTTOWN_YESTREE1, CoastTown_YesPokemonTree1_1
	call CoastTown_YesPokemonTree_Event
	compare VAR_RESULT, 7
	goto_if_ge CoastTown_YesPokemonTree1_5
CoastTown_YesPokemonTree1_4:
	releaseall
	end

CoastTown_YesPokemonTree1_1:
	msgbox CoastTown_YesPokemonTree1_Text_0, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

CoastTown_YesPokemonTree1_5:
	setflag FLAG_COASTTOWN_YESTREE1
	goto CoastTown_YesPokemonTree1_4


CoastTown_YesPokemonTree2::
	lockall
	goto_if_set FLAG_COASTTOWN_YESTREE2, CoastTown_YesPokemonTree2_1
	call CoastTown_YesPokemonTree_Event
	compare VAR_RESULT, 7
	goto_if_ge CoastTown_YesPokemonTree2_5
CoastTown_YesPokemonTree2_4:
	releaseall
	end

CoastTown_YesPokemonTree2_1:
	msgbox CoastTown_YesPokemonTree1_Text_0, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

CoastTown_YesPokemonTree2_5:
	setflag FLAG_COASTTOWN_YESTREE2
	goto CoastTown_YesPokemonTree2_4


CoastTown_YesPokemonTree3::
	lockall
	goto_if_set FLAG_COASTTOWN_YESTREE3, CoastTown_YesPokemonTree3_1
	call CoastTown_YesPokemonTree_Event
	compare VAR_RESULT, 7
	goto_if_ge CoastTown_YesPokemonTree3_5
CoastTown_YesPokemonTree3_4:
	releaseall
	end

CoastTown_YesPokemonTree3_1:
	msgbox CoastTown_YesPokemonTree1_Text_0, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

CoastTown_YesPokemonTree3_5:
	setflag FLAG_COASTTOWN_YESTREE3
	goto CoastTown_YesPokemonTree3_4


AzureTide_MysteryWoman::
	lock
	goto_if_set FLAG_TEMP_3, AzureTide_MysteryWoman_2
	msgbox AzureTide_MysteryWoman_Text, MSGBOX_DEFAULT
	faceplayer
	msgbox AzureTide_MysteryWoman_Text2, MSGBOX_YESNO
AzureTide_MysteryWoman_1:
	compare VAR_RESULT, FALSE
	goto_if_eq AzureTide_MysteryWoman_6
	goto_if_set FLAG_BADGE03_GET, AzureTide_MysteryWoman_10
	goto_if_set FLAG_BADGE02_GET, AzureTide_MysteryWoman_13
	goto_if_set FLAG_BADGE01_GET, AzureTide_MysteryWoman_15
	end

AzureTide_MysteryWoman_2:
	faceplayer
	msgbox AzureTide_MysteryWoman_TextShort, MSGBOX_YESNO
	goto AzureTide_MysteryWoman_1

AzureTide_MysteryWoman_6:
	msgbox AzureTide_MysteryWoman_Decline, MSGBOX_NPC
	setflag FLAG_TEMP_3
	turnobject 7, DIR_WEST
	end

AzureTide_MysteryWoman_10:
	msgbox AzureTide_MysteryWoman_3Badges, MSGBOX_NPC
	turnobject 7, DIR_WEST
	end

AzureTide_MysteryWoman_13:
	msgbox AzureTide_MysteryWoman_2Badges, MSGBOX_NPC
	turnobject 7, DIR_WEST
	end

AzureTide_MysteryWoman_15:
	msgbox AzureTide_MysteryWoman_1Badges, MSGBOX_NPC
	turnobject 7, DIR_WEST
	end


CoastTown_YesPokemonTree_Event::
	msgbox CoastTown_EmptyPokemonTree_Event_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CoastTown_YesPokemonTree_Event_1
	closemessage
	releaseall
	end

CoastTown_YesPokemonTree_Event_1:
	closemessage
	playse SE_SUDOWOODO_SHAKE
	waitse
	random 10
	compare VAR_RESULT, 6
	goto_if_le CoastTown_YesPokemonTree_Event_5
	compare VAR_RESULT, 7
	goto_if_ge CoastTown_YesPokemonTree_Event_7
	return

CoastTown_YesPokemonTree_Event_5:
	msgbox UnsureTreeShake, MSGBOX_DEFAULT
	waitmessage
	closemessage
	releaseall
	end

CoastTown_YesPokemonTree_Event_7:
	msgbox YesPokemonTreeShake, MSGBOX_DEFAULT
	random 5
	compare VAR_RESULT, 0
	goto_if_eq CoastTown_YesPokemonTree_Event_10
CoastTown_YesPokemonTree_Event_9:
	compare VAR_RESULT, 1
	goto_if_eq CoastTown_YesPokemonTree_Event_13
CoastTown_YesPokemonTree_Event_12:
	compare VAR_RESULT, 2
	goto_if_eq CoastTown_YesPokemonTree_Event_16
CoastTown_YesPokemonTree_Event_15:
	compare VAR_RESULT, 3
	goto_if_eq CoastTown_YesPokemonTree_Event_19
CoastTown_YesPokemonTree_Event_18:
	compare VAR_RESULT, 4
	goto_if_eq CoastTown_YesPokemonTree_Event_22
CoastTown_YesPokemonTree_Event_21:
	dowildbattle
	setvar VAR_RESULT, 8
	return

CoastTown_YesPokemonTree_Event_10:
	setwildbattle SPECIES_BOUNSWEET, 14
	goto CoastTown_YesPokemonTree_Event_9

CoastTown_YesPokemonTree_Event_13:
	setwildbattle SPECIES_SPINARAK, 14
	goto CoastTown_YesPokemonTree_Event_12

CoastTown_YesPokemonTree_Event_16:
	setwildbattle SPECIES_APPLIN, 14
	goto CoastTown_YesPokemonTree_Event_15

CoastTown_YesPokemonTree_Event_19:
	setwildbattle SPECIES_SKWOVET, 14
	goto CoastTown_YesPokemonTree_Event_18

CoastTown_YesPokemonTree_Event_22:
	setwildbattle SPECIES_MANKEY, 14
	goto CoastTown_YesPokemonTree_Event_21


Azuretide_HoneyTree::
	lockall
	goto_if_unset FLAG_AZURETIDE_HONEY, Azuretide_HoneyTree_2
	checkitem ITEM_HONEY, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Azuretide_HoneyTree_4
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	waitmessage
	closemessage
	release
	end

Azuretide_HoneyTree_2:
	msgbox Azuretide_HoneyTree_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end

Azuretide_HoneyTree_4:
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Azuretide_HoneyTree_7
	waitmessage
	closemessage
	release
	end

Azuretide_HoneyTree_7:
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
	waitmessage
	closemessage
	removeitem ITEM_HONEY, 1
	random 10
	compare VAR_RESULT, 0
	goto_if_eq Azuretide_HoneyTree_11
Azuretide_HoneyTree_10:
	compare VAR_RESULT, 1
	goto_if_eq Azuretide_HoneyTree_14
Azuretide_HoneyTree_13:
	compare VAR_RESULT, 2
	goto_if_eq Azuretide_HoneyTree_17
Azuretide_HoneyTree_16:
	compare VAR_RESULT, 3
	goto_if_eq Azuretide_HoneyTree_20
Azuretide_HoneyTree_19:
	compare VAR_RESULT, 4
	goto_if_eq Azuretide_HoneyTree_23
Azuretide_HoneyTree_22:
	compare VAR_RESULT, 5
	goto_if_eq Azuretide_HoneyTree_26
Azuretide_HoneyTree_25:
	compare VAR_RESULT, 6
	goto_if_eq Azuretide_HoneyTree_29
Azuretide_HoneyTree_28:
	compare VAR_RESULT, 7
	goto_if_eq Azuretide_HoneyTree_32
Azuretide_HoneyTree_31:
	compare VAR_RESULT, 8
	goto_if_eq Azuretide_HoneyTree_35
Azuretide_HoneyTree_34:
	compare VAR_RESULT, 9
	goto_if_eq Azuretide_HoneyTree_38
Azuretide_HoneyTree_37:
	dowildbattle
	release
	end

Azuretide_HoneyTree_11:
	setwildbattle SPECIES_VENONAT, 7
	goto Azuretide_HoneyTree_10

Azuretide_HoneyTree_14:
	setwildbattle SPECIES_VENONAT, 7
	goto Azuretide_HoneyTree_13

Azuretide_HoneyTree_17:
	setwildbattle SPECIES_VENONAT, 8
	goto Azuretide_HoneyTree_16

Azuretide_HoneyTree_20:
	setwildbattle SPECIES_SKWOVET, 7
	goto Azuretide_HoneyTree_19

Azuretide_HoneyTree_23:
	setwildbattle SPECIES_SKWOVET, 7
	goto Azuretide_HoneyTree_22

Azuretide_HoneyTree_26:
	setwildbattle SPECIES_SKWOVET, 8
	goto Azuretide_HoneyTree_25

Azuretide_HoneyTree_29:
	setwildbattle SPECIES_SKWOVET, 8
	goto Azuretide_HoneyTree_28

Azuretide_HoneyTree_32:
	setwildbattle SPECIES_APPLIN, 7
	goto Azuretide_HoneyTree_31

Azuretide_HoneyTree_35:
	setwildbattle SPECIES_APPLIN, 8
	goto Azuretide_HoneyTree_34

Azuretide_HoneyTree_38:
	setwildbattle SPECIES_MUNCHLAX, 8
	goto Azuretide_HoneyTree_37


Azuretide_Ampharos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	waitmoncry
	msgbox AmphyPoints, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Azuretide_Ampharos_2
	setvar VAR_RANCH_AMPHAROS, 1
	warp MAP_ROUTE3, 91, 16
	waitstate
	end

Azuretide_Ampharos_2:
	release
	end


AmphyLeaves:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CoastTown_Sign1_Text_0:
	.string "Azuretide Harbor$"

CoastTown_Sign2_Text_0:
	.string "Treasure Hunter's house$"

CoastTown_Sign3_Text_0:
	.string "AZURETIDE TOWN\p“Where the land ends and the\nsea begins.”$"

CoastTown_Sign4_Text_0:
	.string "Azuretide Herb Shop$"

CoastTown_OldWoman_Text_0:
	.string "There's been a lot of trainers coming\nhere via the ferry recently.\pShame many of them are in a hurry and\ndon't even care to say hello.$"

CoastTown_OldMan_Text_0:
	.string "For the city folk our way of living\nmay seem simple but that's\ljust the way we like it.$"

CoastTown_FatGuy_Text_0:
	.string "My friend told me she saw a wild Pokémon\nin one of these trees recently.\pI've been shaking these trees for\nhours yet I've found zilch.$"

CoastTown_LittleGirl_Text_0:
	.string "I'm looking for hidden treasure!\nWish I had an Itemfinder…$"

CoastTown_Triathlete_Text_0:
	.string "No time to talk,\nI'm practicing for a triathlon.\pRunning in sand is tough but I'm sure\nit improves my running technique.$"

CoastTown_Swimmer_Text_0:
	.string "Eek!\pSomething wriggly just touched my leg!$"

CoastTown_NoPokemonTree1_Text_0:
	.string "There doesn't seem to be any\nwild Pokémon in this tree.$"

CoastTown_EmptyPokemonTree_Event_Text_0:
	.string "There could be wild\nPokémon in this tree.\pWant to give it a shake?$"

CoastTown_YesPokemonTree1_Text_0:
	.string "There doesn't seem to be any\nwild Pokémon left in this tree.$"

Azuretide_HoneyTree_Text_0:
	.string "It's a peculiar looking tree.$"

Azuretide_Mart_OldWoman_Text::
	.string "Make sure you're always stocked up\n"
	.string "on Antidotes.\p"
	.string "Nothing feels worse than running back\n"
	.string "to a Pokémon Center because your\l"
	.string "Pokémon got poisoned.$"

FatGuyHoneyIntro::
	.string "These types of trees are\n"
	.string "known as honey trees.\p"
	.string "By slathering some honey on its bark,\n"
	.string "you can attract Pokémon that would\l"
	.string "normally be too skittish to appear.\p"
	.string "Why don't you give it a try?$"

FatGuyHoneyGiven::
	.string "Just slather some of that honey and\n"
	.string "it should cause some Pokémon to\l"
	.string "appear without delay.\p"
	.string "There are more trees like this out\n"
	.string "there in the world and many of them\l"
	.string "should be able to attract an entirely\l"
	.string "different set of Pokémon.$"

FatGuyNotEnoughRoom::
	.string "Oh, but you don't have enough room…$"

FatGuyHoneyGivenAlready::
	.string "Go on, try using some of\n"
	.string "that honey on this tree.$"

UnsureTreeShake::
	.string "You give the tree a firm shake but\nyou're not sure if it did anything.$"

NoPokemonTreeShake::
	.string "You give the tree a firm shake but it\nseems that this tree has no Pokémon.$"

AzureTide_MysteryWoman_Text::
	.string "How many years has it been since\n"
	.string "we last visited It?\p"
	.string "I bet those old geezers completely\n"
	.string "forgot It!\p"
	.string "… … … …$"

AzureTide_MysteryWoman_Text2::
	.string "Oh!\p"
	.string "Don't surprise the elderly by\n"
	.string "sneaking up on them like that!\p"
	.string "Wait… You are a trainer, yes?\p"
	.string "And you just arrived from\n"
	.string "Coralgrove Archipelago?\l"
	.string "I wonder…\l"
	.string "You!\l"
	.string "Yes, you!\p"
	.string "Would you care for a little bout?\n"
	.string "I'm very much interested to see\l"
	.string "how you battle.$"

AzureTide_MysteryWoman_Decline::
	.string "Hmph…\p"
	.string "Well, I won't force you if you\n"
	.string "don't feel like it.$"

AzureTide_MysteryWoman_TextShort::
	.string "You're back. Care for\n"
	.string "a little bout?$"

AzureTide_MysteryWoman_3Badges::
	.string "Actually, I think we may have to\n"
	.string "postpone the battle.\l"
	.string "You only have 3 Gym Badges and\n"
	.string "I'm a pretty strong trainer.\p"
	.string "Get a couple more and then\n"
	.string "get back to me.$"

AzureTide_MysteryWoman_2Badges::
	.string "Now that I think about it,\n"
	.string "you're still probably a rookie.\p"
	.string "Why, I bet you don't have more\n"
	.string "than 2 Gym Badges.\p"
	.string "Tell you what, get a few more\n"
	.string "Badges and then come back to me.$"

AzureTide_MysteryWoman_1Badges::
	.string "Hm… Now that I think about it,\n"
	.string "since you just came from Coralgrove,\l"
	.string "you probably only have a single\l"
	.string "Gym Badge.\p"
	.string "I'm a pretty strong trainer so you\n"
	.string "should work on getting some more Badges\n"
	.string "before taking on my challenge.$"

YesPokemonTreeShake::
	.string "You give the tree a firm shake and\na wild Pokémon lands in front of you!$"

HoneyUsedOnTree::
	.string "You slather some honey on the tree…\p"
	.string "…\p"
	.string "…\p"
	.string "The honey lured in a wild Pokémon!$"

HoneyTree_NoHoney::
	.string "It's a honey tree.$"

HoneyTree_YesHoney::
	.string "It's a honey tree. Would you\n"
	.string "like to slather some honey on it?$"

AmphyPoints::
	.string "The Ampharos seems to be pointing\n"
	.string "towards the ranch and gesturing you\l"
	.string "to follow.\p"
	.string "Follow the Pokémon?$"
