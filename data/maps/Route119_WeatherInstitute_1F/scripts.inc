Route119_WeatherInstitute_1F_MapScripts::
# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_LANDMARK_LEGENDARY_INSTITUTE
	return


LegendaryInstitute1F_Greeter::
	checkplayergender
# 0 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LegendaryInstitute1F_Greeter_2
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	bufferstring STR_VAR_1, LegendaryInstitute1F_Greeter_Text_1
LegendaryInstitute1F_Greeter_1:
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LegendaryInstitute1F_Greeter_5
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox LegendaryInstitute1F_Greeter_Text, MSGBOX_NPC
	return

LegendaryInstitute1F_Greeter_2:
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	bufferstring STR_VAR_1, LegendaryInstitute1F_Greeter_Text_0
	goto LegendaryInstitute1F_Greeter_1

LegendaryInstitute1F_Greeter_5:
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox LegendaryInstitute1F_Greeter_Text2, MSGBOX_NPC
	return


LegendaryInstitute1F_Woman::
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LegendaryInstitute1F_Woman_2
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox LegendaryInstitute1F_Woman_Text, MSGBOX_NPC
LegendaryInstitute1F_Woman_1:
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	turnobject 1, DIR_EAST
	return

LegendaryInstitute1F_Woman_2:
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox LegendaryInstitute1F_Woman_Text2, MSGBOX_NPC
	goto LegendaryInstitute1F_Woman_1


LegendaryInstitute1F_Man::
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox LegendaryInstitute1F_Man_Text, MSGBOX_NPC
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	turnobject 2, DIR_WEST
	return


LegendaryInstitute1F_Greeter_Text_0:
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "lad$"

LegendaryInstitute1F_Greeter_Text_1:
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "lass$"

LegendaryInstitute1F_Greeter_Text::
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Thank you so much for helping us\n"
	.string "recover our research.\p"
	.string "We hope you find that Zygarde\n"
	.string "Cube useful!$"

LegendaryInstitute1F_Woman_Text::
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I recommend checking out the Sandstone\n"
	.string "Library if you're ever in that area.\p"
	.string "Many of the upstairs books sound\n"
	.string "like folktale, but most of them\l"
	.string "are actually rooted in reality.$"

LegendaryInstitute1F_Man_Text::
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "My research is in shambles due to\n"
	.string "the recent Team Rocket attack…$"

LegendaryInstitute1F_Greeter_Text2::
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "You must be the young {STR_VAR_1} who went\n"
	.string "after Team Rocket to recover our\l"
	.string "research.\p"
	.string "The head scientist is waiting for\n"
	.string "you upstairs.$"

LegendaryInstitute1F_Woman_Text2::
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I'm sorry, but I'm really busy.\p"
	.string "You should head upstairs and\n"
	.string "talk with the head scientist instead.$"
