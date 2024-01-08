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


CoastTown_FatGuy::
	lockall
	faceplayer
	msgbox CoastTown_FatGuy_Text_0, MSGBOX_NPC
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


CoastTown_Sign1_Text_0:
	.string "Azuretide Harbor$"

CoastTown_Sign2_Text_0:
	.string "Diving Treasure Hunter's house$"

CoastTown_Sign3_Text_0:
	.string "AZURETIDE TOWN\p“Where the land ends and the\nsea begins.”$"

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

UnsureTreeShake::
	.string "You give the tree a firm shake but\nyou're not sure if it did anything.$"

NoPokemonTreeShake::
	.string "You give the tree a firm shake but it\nseems that this tree has no Pokémon.$"

YesPokemonTreeShake::
	.string "You give the tree a firm shake and\na wild Pokémon lands in front of you!$"
