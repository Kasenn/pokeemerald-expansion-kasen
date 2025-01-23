PokemonWorldTournament_MapScripts::
	.byte 0


@hasMoveTutor

BP_Mart_MoveTutor::
	lock
	faceplayer
	message BP_Mart_Greetings
	waitmessage
	bpmart BP_Mart_Moves, TRUE
	compare VAR_RESULT, FALSE
	goto_if_eq BP_Mart_MoveTutor_2
	msgbox IllTakeYourBPNow
BP_Mart_MoveTutor_1:
	release
	return

BP_Mart_MoveTutor_2:
	msgbox PleaseSaveSomeBp
	goto BP_Mart_MoveTutor_1


	.align 2
BP_Mart_Moves:
	.2byte MOVE_SPITE
	.2byte MOVE_AFTER_YOU
	.2byte MOVE_ALLY_SWITCH
	.2byte MOVE_GRAVITY
	.2byte MOVE_TELEKINESIS
	.2byte MOVE_ROLE_PLAY
	.2byte MOVE_WONDER_ROOM
	.2byte MOVE_AQUA_TAIL
	.2byte MOVE_GASTRO_ACID
	.2byte MOVE_SEED_BOMB
	.2byte MOVE_LASER_FOCUS
	.2byte MOVE_SUPER_FANG
	.2byte MOVE_DUAL_CHOP
	.2byte MOVE_NONE
	.2byte ITEM_NONE

BP_Mart_ItemShop::
	lock
	faceplayer
	message BP_Mart_Greetings2
	waitmessage
	bpmart BP_Mart_Items, FALSE
	msgbox PleaseSaveSomeBp
	release
	return


	.align 2
BP_Mart_Items:
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_SNOWBALL
	.2byte ITEM_RED_CARD
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE

BP_Mart_ItemShop2::
	lock
	faceplayer
	message BP_Mart_Greetings2
	waitmessage
	goto_if_set FLAG_LATIAS_ROAMING, BP_Mart_ItemShop2_2
	goto_if_set FLAG_LATIOS_ROAMING, BP_Mart_ItemShop2_2
	bpmart BP_Mart_Items2, FALSE
BP_Mart_ItemShop2_1:
	msgbox PleaseSaveSomeBp
	release
	return

BP_Mart_ItemShop2_2:
	bpmart BP_Mart_Items2LegendaryOn, FALSE
	goto BP_Mart_ItemShop2_1


	.align 2
BP_Mart_Items2:
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_CHARIZARDITE_X
	.2byte ITEM_CHARIZARDITE_Y
	.2byte ITEM_BLASTOISINITE
	.2byte ITEM_GARDEVOIRITE
	.2byte ITEM_GALLADITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_NONE

	.align 2
BP_Mart_Items2LegendaryOn:
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_CHARIZARDITE_X
	.2byte ITEM_CHARIZARDITE_Y
	.2byte ITEM_BLASTOISINITE
	.2byte ITEM_GARDEVOIRITE
	.2byte ITEM_GALLADITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_LATIASITE
	.2byte ITEM_LATIOSITE
	.2byte ITEM_NONE

FeatureNotReady::
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	return


WorldTournamentYoungster::
	msgbox WorldTournamentYoungster_Text, MSGBOX_NPC
	return


WorldTournamentGentleman::
	msgbox WorldTournamentGentleman_Text, MSGBOX_NPC
	return


WorldTournamentAceTrainer::
	msgbox WorldTournamentAceTrainer_Text, MSGBOX_NPC
	return


WorldTournamentScientist::
	msgbox WorldTournamentScientist_Text, MSGBOX_NPC
	return


WorldTournamentHiker::
	msgbox WorldTournamentHiker_Text, MSGBOX_NPC
	return


WorldTournamentMan5::
	msgbox WorldTournamentMan5_Text, MSGBOX_NPC
	return


WorldTournamentGirl3::
	msgbox WorldTournamentGirl3_Text, MSGBOX_NPC
	return


WorldTournamentLeftBouncer::
	msgbox WorldTournamentLeftBouncer_Text, MSGBOX_NPC
	return


WorldTournamentRightBouncer::
	msgbox WorldTournamentRightBouncer_Text, MSGBOX_NPC
	return


IllTakeYourBPNow::
	.string "I'll be taking your BP now.$"

BP_Mart_Greetings::
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some exquisite moves?$"

BP_Mart_Greetings2::
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "for some exquisite items?$"

PleaseSaveSomeBp::
	.string "Please save some BP\n"
	.string "and come see us again.$"

FeatureNotReady_Text::
	.string "This feature is not currently\n"
	.string "available.\p"
	.string "We apologize for the inconvenience.$"

WorldTournamentYoungster_Text::
	.string "Someday, I'll be a famous guy!\p"
	.string "But for now, I'm just a spectator\n"
	.string "here.$"

WorldTournamentGentleman_Text::
	.string "The Pokémon World Tournament\n"
	.string "attracts big names as well.\p"
	.string "I'm pretty sure I saw Aaron,\n"
	.string "the Gym Leader of Coralgrove City\l"
	.string "waltz in not too long ago.$"

WorldTournamentAceTrainer_Text::
	.string "It's the Pokémon World Tournament!\n"
	.string "It's all in the name!\p"
	.string "Trainers have gathered\n"
	.string "from all over the world!$"

WorldTournamentScientist_Text::
	.string "The crowd will go wild for\n"
	.string "my Pokémon!$"

WorldTournamentHiker_Text::
	.string "Many trainers from far away\n"
	.string "will come to participate!$"

WorldTournamentMan5_Text::
	.string "I'm not much of a trainer myself,\n"
	.string "but my brother has come real close\l"
	.string "to winning in the past.\p"
	.string "If we cheer loud enough,\n"
	.string "he'll definitely win this time!$"

WorldTournamentGirl3_Text::
	.string "The competition is really fierce\n"
	.string "this time around.\p"
	.string "I can't wait to see who wins!$"

WorldTournamentLeftBouncer_Text::
	.string "That's the Pokemon World Tournament\n"
	.string "for you! It's packed with spectators!$"

WorldTournamentRightBouncer_Text::
	.string "It's crazy popular! This is what\n"
	.string "packed to the rafters means!$"
