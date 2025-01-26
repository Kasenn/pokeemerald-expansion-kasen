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


PokemonWorldTournament_LeftAttendant::
	goto_if_set FLAG_TEMP_1, PokemonWorldTournament_LeftAttendant_2
	message WelcomeToPWT
PokemonWorldTournament_LeftAttendant_1:
	waitmessage
	setflag FLAG_TEMP_1
	dynmultichoice 23, 0, FALSE, 3, 0, 0, PokemonWorldTournament_LeftAttendant_Text_0, PokemonWorldTournament_LeftAttendant_Text_1, PokemonWorldTournament_LeftAttendant_Text_2
	switch VAR_RESULT
	case 0, PokemonWorldTournament_LeftAttendant_6
	case 1, PokemonWorldTournament_LeftAttendant_7
	case 2, PokemonWorldTournament_LeftAttendant_8
	case MULTI_B_PRESSED, PokemonWorldTournament_LeftAttendant_8
	return

PokemonWorldTournament_LeftAttendant_2:
	message WelcomeToPWT_Short
	goto PokemonWorldTournament_LeftAttendant_1

PokemonWorldTournament_LeftAttendant_6:
	goto PWT_Participate
	return

PokemonWorldTournament_LeftAttendant_7:
	goto PWT_Info
	return

PokemonWorldTournament_LeftAttendant_8:
	msgbox PokemonWorldTournament_LeftAttendant_Text_3, MSGBOX_SIGN
	end


PWT_Info::
	message PWT_Info_WhichTournament
	waitmessage
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Info_Text_0, PWT_Info_Text_1, PWT_Info_Text_2, PWT_Info_Text_3, PWT_Info_Text_4
	switch VAR_RESULT
	case 0, PWT_Info_2
	case 1, PWT_Info_3
	case 2, PWT_Info_4
	case 3, PWT_Info_5
	case 4, PWT_Info_6
	case MULTI_B_PRESSED, PWT_Info_6
	return

PWT_Info_2:
	goto PWT_Info_BattleFormats
	return

PWT_Info_3:
	goto PWT_Info_Frosthearth
	return

PWT_Info_4:
	goto PWT_Info_Rental
	return

PWT_Info_5:
	goto PWT_Info_Mix
	return

PWT_Info_6:
	goto PokemonWorldTournament_LeftAttendant
	return


PWT_Info_BattleFormats::
	msgbox PWT_Info_BattleFormats_Text
	goto PWT_Info
	return


PWT_Info_Frosthearth::
	msgbox PWT_Info_Frosthearth_Text
	goto PWT_Info
	return


PWT_Info_Rental::
	msgbox PWT_Info_Rental_Text
	goto PWT_Info
	return


PWT_Info_Mix::
	msgbox PWT_Info_Mix_Text
	goto PWT_Info
	return


PWT_Participate::
	message PWT_Participate_Text
	waitmessage
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Info_Text_1, PWT_Info_Text_2, PWT_Info_Text_3, PWT_Info_Text_4
	switch VAR_RESULT
	case 0, PWT_Participate_2
	case 1, PWT_Participate_3
	case 2, PWT_Participate_4
	case 3, PWT_Participate_5
	case MULTI_B_PRESSED, PWT_Participate_5
	return

PWT_Participate_2:
	goto PWT_Participate_Frosthearth
	return

PWT_Participate_3:
	goto PWT_Participate_Rental
	return

PWT_Participate_4:
	goto PWT_Participate_Mix
	return

PWT_Participate_5:
	goto PokemonWorldTournament_LeftAttendant
	return


PWT_Participate_Frosthearth::
	message WhichBattleFormat
	waitmessage
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
	switch VAR_RESULT
	case 0, PWT_Participate_Frosthearth_2
	case 1, PWT_Participate_Frosthearth_3
	case 2, PWT_Participate_Frosthearth_4
	case MULTI_B_PRESSED, PWT_Participate_Frosthearth_4
	return

PWT_Participate_Frosthearth_2:
	goto PWT_Frosthearth_Single
	return

PWT_Participate_Frosthearth_3:
	goto PWT_Frosthearth_Double
	return

PWT_Participate_Frosthearth_4:
	goto PWT_Participate
	return


PWT_Participate_Rental::
	message WhichBattleFormat
	waitmessage
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
	switch VAR_RESULT
	case 0, PWT_Participate_Rental_2
	case 1, PWT_Participate_Rental_3
	case 2, PWT_Participate_Rental_4
	case MULTI_B_PRESSED, PWT_Participate_Rental_4
	return

PWT_Participate_Rental_2:
	goto PWT_Rental_Single
	return

PWT_Participate_Rental_3:
	goto PWT_Rental_Double
	return

PWT_Participate_Rental_4:
	goto PWT_Participate
	return


PWT_Participate_Mix::
	message WhichBattleFormat
	waitmessage
	dynmultichoice 23, 0, FALSE, 6, 0, 0, PWT_Participate_Frosthearth_Text_0, PWT_Participate_Frosthearth_Text_1, PWT_Info_Text_4
	switch VAR_RESULT
	case 0, PWT_Participate_Mix_2
	case 1, PWT_Participate_Mix_3
	case 2, PWT_Participate_Mix_4
	case MULTI_B_PRESSED, PWT_Participate_Mix_4
	return

PWT_Participate_Mix_2:
	goto PWT_Mix_Single
	return

PWT_Participate_Mix_3:
	goto PWT_Mix_Double
	return

PWT_Participate_Mix_4:
	goto PWT_Participate
	return


PWT_Frosthearth_Single::
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Frosthearth_Double::
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Rental_Single::
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Rental_Double::
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Mix_Single::
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PWT_Mix_Double::
	msgbox FeatureNotReady_Text, MSGBOX_NPC
	end


PokemonWorldTournament_LeftAttendant_Text_0:
	.string "Participate$"

PokemonWorldTournament_LeftAttendant_Text_1:
	.string "Info$"

PokemonWorldTournament_LeftAttendant_Text_2:
	.string "Quit$"

PokemonWorldTournament_LeftAttendant_Text_3:
	.string "We hope to see you again!$"

PWT_Info_Text_0:
	.string "About battle formats$"

PWT_Info_Text_1:
	.string "Frosthearth$"

PWT_Info_Text_2:
	.string "Rental$"

PWT_Info_Text_3:
	.string "Mix$"

PWT_Info_Text_4:
	.string "Back$"

PWT_Participate_Frosthearth_Text_0:
	.string "Single Battle$"

PWT_Participate_Frosthearth_Text_1:
	.string "Double Battle$"

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

WelcomeToPWT::
	.string "Welcome to the\n"
	.string "Pokémon World Tournament!\p"
	.string "Would you like to participate\n"
	.string "in the tournament?$"

WelcomeToPWT_Short::
	.string "Would you like to participate\n"
	.string "in the tournament?$"

PWT_Info_WhichTournament::
	.string "Which tournament do you\n"
	.string "want to know about?$"

PWT_Info_BattleFormats_Text::
	.string "There are two battle formats\n"
	.string "to a tournament:\l"
	.string "Single and Double.\p"
	.string "Single Battles need three Pokémon,\n"
	.string "while Double Battles need four.\p"
	.string "Double battles give you more points\n"
	.string "when you manage to win, so jump in!\l"
	.string "It's worthwhile to try it!$"

PWT_Info_Frosthearth_Text::
	.string "Frosthearth Tournament is a tournament\n"
	.string "where anything goes.\p"
	.string "You may use any Pokémon or\n"
	.string "held items of your choice.\p"
	.string "For these battles, all Pokémon\n"
	.string "will be set to Level 25.\p"
	.string "The winner will be rewarded\n"
	.string "with BP.\l"
	.string "Good luck!$"

PWT_Info_Rental_Text::
	.string "Rental Tournament is a unique\n"
	.string "tournament where we prepare\l"
	.string "the Pokémon with which you\l"
	.string "will battle.\p"
	.string "Rental Pokémon will be randomly\n"
	.string "selected for you.\l"
	.string "So luck plays a big part!\p"
	.string "The winner will be rewarded\n"
	.string "with BP.\l"
	.string "Good luck!$"

PWT_Info_Mix_Text::
	.string "Mix Tournament is a unique tournament\n"
	.string "where you and your opponent swap\l"
	.string "Pokémon before battling.\p"
	.string "You'll normally swap one Pokémon,\n"
	.string "but you'll swap two in Double Battles.\p"
	.string "Swapped Pokémon will be returned\n"
	.string "after the battle, so don't be alarmed.\p"
	.string "For these battles, all Pokémon\n"
	.string "will be set to Level 50.\p"
	.string "The winner will be rewarded\n"
	.string "with BP.\l"
	.string "Good luck!$"

PWT_Participate_Text::
	.string "Which tournament\n"
	.string "will you participate in?$"

WhichBattleFormat::
	.string "Which battle format\n"
	.string "will you choose?$"
