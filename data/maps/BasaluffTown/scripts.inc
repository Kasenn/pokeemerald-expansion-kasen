BasaluffTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_BASALEK
	call Common_EventScript_SetupRivalGfxId
	return


BasalekTown_Sign1::
	msgbox BasalekTown_Sign1_Text, MSGBOX_SIGN
	return


BasalekTown_Sign2::
	msgbox BasalekTown_Sign2_Text, MSGBOX_SIGN
	return


BasalekTown_Man5::
	msgbox BasalekTown_Man5_Text, MSGBOX_NPC
	return


BasalekTown_RichBoy::
	msgbox BasalekTown_RichBoy_Text, MSGBOX_NPC
	return


BasalekTown_Twin::
	msgbox BasalekTown_Twin_Text, MSGBOX_NPC
	return


BasalekTown_OldMan::
	msgbox BasalekTown_OldMan_Text, MSGBOX_NPC
	return


BasalekTown_HealTrigger::
	lock
	fadescreen FADE_TO_WHITE
	special HealPlayerParty
	fadescreen FADE_FROM_WHITE
	msgbox BasalekTown_HealTrigger_Text
	setvar VAR_TEMP_0, 1
	release
	return


BasalekTown_HealTrigger2::
	setvar VAR_TEMP_0, 0
	release
	return


BasalekTown_Beauty::
	msgbox BasalekTown_Beauty_Text, MSGBOX_SIGN
	return


BasalekTown_EggWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, BasalekTown_EggWoman_2
	msgbox BasalekTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekTown_EggWoman_5
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq BasalekTown_EggWoman_8
	msgbox BasalekTown_Text_HopeYoullWalkPlentyWithEgg
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message BasalekTown_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_EEVEE
	release
	return

BasalekTown_EggWoman_2:
	msgbox BasalekTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_5:
	msgbox BasalekTown_Text_AsYouWishThen, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_8:
	msgbox BasalekTown_Text_NoRoomForThisEgg, MSGBOX_AUTOCLOSE
	end


BasalekTown_RivalTrigger1::
	setvar VAR_TEMP_2, 1
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalTrigger2::
	setvar VAR_TEMP_2, 2
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalTrigger3::
	setvar VAR_TEMP_2, 3
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalScript::
	return


BasalekTown_Sign1_Text::
	.string "BASALEK TOWN\p"
	.string "“Let the hot spring\n"
	.string "wash away your worries!”$"

BasalekTown_Sign2_Text::
	.string "{UP_ARROW} Route 17\n"
	.string "{LEFT_ARROW} Basalek Tunnel\l"
	.string "{DOWN_ARROW} Route 16$"

BasalekTown_Man5_Text::
	.string "See that cave down there?\n"
	.string "That's Basalek Tunnel.\p"
	.string "It's said that due to the oppressing\n"
	.string "atmosphere, training there is more\l"
	.string "efficient than anywhere else.\p"
	.string "This has caused the place to become\n"
	.string "jam-packed with very experienced\l"
	.string "Pokémon trainers.$"

BasalekTown_RichBoy_Text::
	.string "I like warmth as much as the next\n"
	.string "guy, but this is too much.$"

BasalekTown_Twin_Text::
	.string "I'm bored…\p"
	.string "All the adults care about is sitting\n"
	.string "in the hot spring day after day…$"

BasalekTown_OldMan_Text::
	.string "If your Pokémon are feeling worn out,\n"
	.string "hop in to the hot spring and they'll\l"
	.string "be refreshed in no time!\p"
	.string "If you need to access a PC, they've\n"
	.string "set up a station inside the Mart.$"

BasalekTown_HealTrigger_Text::
	.string "The water is perfectly warm.\n"
	.string "It feels exquisite…\p"
	.string "{PLAY_SE SE_USE_ITEM}{PLAYER} and the Pokémon were\n"
	.string "fully refreshed!$"

BasalekTown_Beauty_Text::
	.string "I've got some errands to run, but I\n"
	.string "guess I can stay for another 5 minutes.$"

BasalekTown_Text_HaveEggWillYouTakeIt::
	.string "I have here an EGG.\p"
	.string "I'd hoped to hatch it by covering it in\n"
	.string "hot sand by the hot springs.\l"
	.string "But that doesn't seem to be enough…\p"
	.string "I've heard it would be best if it were\n"
	.string "kept together with POKéMON and\l"
	.string "carried about.\p"
	.string "You are a TRAINER, yes?\n"
	.string "And your POKéMON radiate vitality.\p"
	.string "So, what say you?\n"
	.string "Will you take this EGG to hatch?$"

BasalekTown_Text_HopeYoullWalkPlentyWithEgg::
	.string "Good! I hope you'll walk plenty with\n"
	.string "this here EGG!$"

BasalekTown_Text_ReceivedTheEgg::
	.string "{PLAYER} received the EGG.$"

BasalekTown_Text_NoRoomForThisEgg::
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

BasalekTown_Text_AsYouWishThen::
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this EGG, I will be here.$"

BasalekTown_Text_EverySoOftenEggFoundAtDayCare::
	.string "Every so often, an EGG will be found at\n"
	.string "the POKéMON DAY CARE.\p"
	.string "Or at least that's how the rumor goes.$"
