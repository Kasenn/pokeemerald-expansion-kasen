FrosthearthCity_Motel_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	switch VAR_MOTEL_CUSTOMERS
	case 1, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	clearflag FLAG_TEMP_1
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	clearflag FLAG_TEMP_2
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	clearflag FLAG_TEMP_3
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	clearflag FLAG_TEMP_4
	return


Frosthearth_MotelGuest1_OldMan::
	msgbox Frosthearth_MotelGuest1_OldMan_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Man::
	msgbox Frosthearth_MotelGuest1_Man_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Woman::
	msgbox Frosthearth_MotelGuest1_Woman_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Hiker::
	msgbox Frosthearth_MotelGuest1_Hiker_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Twin::
	msgbox Frosthearth_MotelGuest1_Twin_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Mother::
	msgbox Frosthearth_MotelGuest2_Mother_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Father::
	msgbox Frosthearth_MotelGuest2_Father_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Son::
	msgbox Frosthearth_MotelGuest2_Son_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Daughter::
	msgbox Frosthearth_MotelGuest2_Daughter_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor1::
	msgbox Frosthearth_MotelGuest3_Sailor1_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor2::
	msgbox Frosthearth_MotelGuest3_Sailor2_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor3::
	msgbox Frosthearth_MotelGuest3_Sailor3_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor4::
	msgbox Frosthearth_MotelGuest3_Sailor4_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor5::
	msgbox Frosthearth_MotelGuest3_Sailor5_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor6::
	msgbox Frosthearth_MotelGuest3_Sailor6_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor7::
	msgbox Frosthearth_MotelGuest3_Sailor7_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest4_AceTrainerF::
	msgbox Frosthearth_MotelGuest4_AceTrainerF_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest4_AceTrainerM::
	msgbox Frosthearth_MotelGuest4_AceTrainerM_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest4_Linoone::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
	msgbox Frosthearth_MotelGuest4_Linoone_Text_0
	waitmoncry
	release
	end


Frosthearth_MotelGuest4_Toxicroak::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
	msgbox Frosthearth_MotelGuest4_Toxicroak_Text_0
	waitmoncry
	release
	end


Frosthearth_MotelGuest4_Durant::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DURANT, CRY_MODE_NORMAL
	msgbox Frosthearth_MotelGuest4_Durant_Text_0
	waitmoncry
	release
	end


Frosthearth_MotelGuest4_Espeon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
	msgbox Frosthearth_MotelGuest4_Espeon_Text_0
	waitmoncry
	release
	end


Frosthearth_MotelGuest4_Linoone_Text_0:
	.string "Linoone: Gumomoh?$"

Frosthearth_MotelGuest4_Toxicroak_Text_0:
	.string "Toxicroak: Ribbit!$"

Frosthearth_MotelGuest4_Durant_Text_0:
	.string "Durant: Skree!$"

Frosthearth_MotelGuest4_Espeon_Text_0:
	.string "Espeon: Myu-myuu?$"

Frosthearth_MotelGuest1_OldMan_Text::
	.string "Where's the soup?!$"

Frosthearth_MotelGuest1_Man_Text::
	.string "It's surprisingly hard to find any\n"
	.string "lodging in this city.\p"
	.string "We had to book our reservation\n"
	.string "weeks in advance.$"

Frosthearth_MotelGuest1_Woman_Text::
	.string "Are you a tourist as well?\p"
	.string "Trainer or not, you should\n"
	.string "definitely check out the\l"
	.string "Pokémon World Tournament!$"

Frosthearth_MotelGuest1_Hiker_Text::
	.string "Once we're done eating, we'll be\n"
	.string "heading to the wilderness to see if\l"
	.string "we can find any interesting Pokémon.$"

Frosthearth_MotelGuest1_Twin_Text::
	.string "I hope daddy can get me a Spheal!\n"
	.string "They're so cute!$"

Frosthearth_MotelGuest2_Mother_Text::
	.string "I can't wait to explore the city.\p"
	.string "I just hope our dinner will be\n"
	.string "ready soon.$"

Frosthearth_MotelGuest2_Father_Text::
	.string "Frosthearth seems like the ultimate\n"
	.string "tourist spot.\p"
	.string "Whatever your interests are, there's\n"
	.string "bound to be something for you here.$"

Frosthearth_MotelGuest2_Son_Text::
	.string "I can't wait to take part in the\n"
	.string "Pokémon World Tournament!$"

Frosthearth_MotelGuest2_Daughter_Text::
	.string "I can't decide what I want to do.\p"
	.string "Relaxing in the hot pool sounds nice,\n"
	.string "but I also want to go out there and\l"
	.string "see what exotic Pokémon I can find!$"

Frosthearth_MotelGuest3_Sailor1_Text::
	.string "Sailing is hard work.\p"
	.string "Us sailors need to take a break\n"
	.string "every now and then, too!$"

Frosthearth_MotelGuest3_Sailor2_Text::
	.string "We only just stepped off the boat,\n"
	.string "but I'm already starting to miss it…$"

Frosthearth_MotelGuest3_Sailor3_Text::
	.string "Boy, the chef sure is taking his\n"
	.string "sweet time.\p"
	.string "I hope the food is worth the wait.$"

Frosthearth_MotelGuest3_Sailor4_Text::
	.string "Have you ever been to Skyloch\n"
	.string "Village?\p"
	.string "I swear I once saw a golden Magikarp\n"
	.string "swimming in the lake there!$"

Frosthearth_MotelGuest3_Sailor5_Text::
	.string "Very few ships travel to Frosthearth\n"
	.string "City due to the freezing conditions.\p"
	.string "You don't want to miss your ride,\n"
	.string "or you might be stuck waiting here\l"
	.string "for a long time.$"

Frosthearth_MotelGuest3_Sailor6_Text::
	.string "I'm hungry…\p"
	.string "Maybe I ought to grab a snack\n"
	.string "from the Mart.$"

Frosthearth_MotelGuest3_Sailor7_Text::
	.string "Some sailors have reported seeing an\n"
	.string "unregistered vessel sailing the seas.\p"
	.string "Attempts have been made to contact\n"
	.string "the ship, but they never answer\l"
	.string "when hailed, and generally seem to\l"
	.string "keep their distance from everyone.$"

Frosthearth_MotelGuest4_AceTrainerF_Text::
	.string "I'm so proud of our Pokémon!$"

Frosthearth_MotelGuest4_AceTrainerM_Text::
	.string "We scored a big victory at the\n"
	.string "Pokémon World Tournament,\l"
	.string "so we're celebrating with our Pokémon!$"
