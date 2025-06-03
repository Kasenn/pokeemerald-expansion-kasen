FrosthearthCity_Motel_2F_MapScripts::
# 2 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 6 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 7 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	switch VAR_MOTEL_CUSTOMERS
# 8 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	case 1, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 10 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	case 2, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 12 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	case 3, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 14 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	case 4, FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	clearflag FLAG_TEMP_1
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 11 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	clearflag FLAG_TEMP_2
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	clearflag FLAG_TEMP_3
	return

FrosthearthCity_Motel_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	clearflag FLAG_TEMP_4
	return


Frosthearth_MotelGuest1_OldMan::
# 21 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest1_OldMan_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Man::
# 24 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest1_Man_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Woman::
# 27 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest1_Woman_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Hiker::
# 30 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest1_Hiker_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest1_Twin::
# 33 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest1_Twin_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Mother::
# 60 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest2_Mother_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Father::
# 63 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest2_Father_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Son::
# 66 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest2_Son_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest2_Daughter::
# 69 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest2_Daughter_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor1::
# 93 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest3_Sailor1_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor2::
# 96 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest3_Sailor2_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor3::
# 99 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest3_Sailor3_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor4::
# 102 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest3_Sailor4_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor5::
# 105 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest3_Sailor5_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor6::
# 108 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest3_Sailor6_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest3_Sailor7::
# 111 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest3_Sailor7_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest4_AceTrainerF::
# 154 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest4_AceTrainerF_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest4_AceTrainerM::
# 157 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest4_AceTrainerM_Text, MSGBOX_NPC
	return


Frosthearth_MotelGuest4_Linoone::
# 168 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	lock
# 169 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	faceplayer
# 170 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitse
# 171 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 172 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest4_Linoone_Text_0
# 173 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitmoncry
# 174 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	release
	end


Frosthearth_MotelGuest4_Toxicroak::
# 178 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	lock
# 179 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	faceplayer
# 180 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitse
# 181 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
# 182 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest4_Toxicroak_Text_0
# 183 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitmoncry
# 184 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	release
	end


Frosthearth_MotelGuest4_Durant::
# 188 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	lock
# 189 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	faceplayer
# 190 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitse
# 191 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	playmoncry SPECIES_DURANT, CRY_MODE_NORMAL
# 192 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest4_Durant_Text_0
# 193 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitmoncry
# 194 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	release
	end


Frosthearth_MotelGuest4_Espeon::
# 198 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	lock
# 199 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	faceplayer
# 200 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitse
# 201 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
# 202 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	msgbox Frosthearth_MotelGuest4_Espeon_Text_0
# 203 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	waitmoncry
# 204 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	release
	end


Frosthearth_MotelGuest4_Linoone_Text_0:
# 172 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Linoone: Gumomoh?$"

Frosthearth_MotelGuest4_Toxicroak_Text_0:
# 182 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Toxicroak: Ribbit!$"

Frosthearth_MotelGuest4_Durant_Text_0:
# 192 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Durant: Skree!$"

Frosthearth_MotelGuest4_Espeon_Text_0:
# 202 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Espeon: Myu-myuu?$"

Frosthearth_MotelGuest1_OldMan_Text::
# 35 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Where's the soup?!$"

Frosthearth_MotelGuest1_Man_Text::
# 38 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "It's surprisingly hard to find any\n"
	.string "lodging in this city.\p"
	.string "We had to book our reservation\n"
	.string "weeks in advance.$"

Frosthearth_MotelGuest1_Woman_Text::
# 44 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Are you a tourist as well?\p"
	.string "Trainer or not, you should\n"
	.string "definitely check out the\l"
	.string "Pokémon World Tournament!$"

Frosthearth_MotelGuest1_Hiker_Text::
# 50 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Once we're done eating, we'll be\n"
	.string "heading to the wilderness to see if\l"
	.string "we can find any interesting Pokémon.$"

Frosthearth_MotelGuest1_Twin_Text::
# 55 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "I hope daddy can get me a Spheal!\n"
	.string "They're so cute!$"

Frosthearth_MotelGuest2_Mother_Text::
# 71 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "I can't wait to explore the city.\p"
	.string "I just hope our dinner will be\n"
	.string "ready soon.$"

Frosthearth_MotelGuest2_Father_Text::
# 76 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Frosthearth seems like the ultimate\n"
	.string "tourist spot.\p"
	.string "Whatever your interests are, there's\n"
	.string "bound to be something for you here.$"

Frosthearth_MotelGuest2_Son_Text::
# 82 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "I can't wait to take part in the\n"
	.string "Pokémon World Tournament!$"

Frosthearth_MotelGuest2_Daughter_Text::
# 86 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "I can't decide what I want to do.\p"
	.string "Relaxing in the hot pool sounds nice,\n"
	.string "but I also want to go out there and\l"
	.string "see what exotic Pokémon I can find!$"

Frosthearth_MotelGuest3_Sailor1_Text::
# 113 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Sailing is hard work.\p"
	.string "Us sailors need to take a break\n"
	.string "every now and then, too!$"

Frosthearth_MotelGuest3_Sailor2_Text::
# 118 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "We only just stepped off the boat,\n"
	.string "but I'm already starting to miss it…$"

Frosthearth_MotelGuest3_Sailor3_Text::
# 122 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Boy, the chef sure is taking his\n"
	.string "sweet time.\p"
	.string "I hope the food is worth the wait.$"

Frosthearth_MotelGuest3_Sailor4_Text::
# 127 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Have you ever been to Skyloch\n"
	.string "Village?\p"
	.string "I swear I once saw a golden Magikarp\n"
	.string "swimming in the lake there!$"

Frosthearth_MotelGuest3_Sailor5_Text::
# 133 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Very few ships travel to Frosthearth\n"
	.string "City due to the freezing conditions.\p"
	.string "You don't want to miss your ride,\n"
	.string "or you might be stuck waiting here\l"
	.string "for a long time.$"

Frosthearth_MotelGuest3_Sailor6_Text::
# 140 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "I'm hungry…\p"
	.string "Maybe I ought to grab a snack\n"
	.string "from the Mart.$"

Frosthearth_MotelGuest3_Sailor7_Text::
# 145 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "Some sailors have reported seeing an\n"
	.string "unregistered vessel sailing the seas.\p"
	.string "Attempts have been made to contact\n"
	.string "the ship, but they never answer\l"
	.string "when hailed, and generally seem to\l"
	.string "keep their distance from everyone.$"

Frosthearth_MotelGuest4_AceTrainerF_Text::
# 159 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "I'm so proud of our Pokémon!$"

Frosthearth_MotelGuest4_AceTrainerM_Text::
# 162 "data/maps/FrosthearthCity_Motel_2F/scripts.pory"
	.string "We scored a big victory at the\n"
	.string "Pokémon World Tournament,\l"
	.string "so we're celebrating with our Pokémon!$"
