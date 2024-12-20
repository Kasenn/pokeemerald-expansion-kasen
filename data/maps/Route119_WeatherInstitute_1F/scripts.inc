Route119_WeatherInstitute_1F_MapScripts::
	.byte 0


LegendaryInstitute1F_Greeter::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LegendaryInstitute1F_Greeter_2
	bufferstring STR_VAR_1, LegendaryInstitute1F_Greeter_Text_1
LegendaryInstitute1F_Greeter_1:
	checkitem ITEM_ZYGARDE_CUBE
	compare VAR_RESULT, FALSE
	goto_if_eq LegendaryInstitute1F_Greeter_5
	msgbox LegendaryInstitute1F_Greeter_Text, MSGBOX_NPC
	return

LegendaryInstitute1F_Greeter_2:
	bufferstring STR_VAR_1, LegendaryInstitute1F_Greeter_Text_0
	goto LegendaryInstitute1F_Greeter_1

LegendaryInstitute1F_Greeter_5:
	msgbox LegendaryInstitute1F_Greeter_Text2
	return


LegendaryInstitute1F_Woman::
	checkitem ITEM_ZYGARDE_CUBE
	compare VAR_RESULT, FALSE
	goto_if_eq LegendaryInstitute1F_Woman_2
	msgbox LegendaryInstitute1F_Woman_Text, MSGBOX_NPC
LegendaryInstitute1F_Woman_1:
	turnobject 1, DIR_EAST
	return

LegendaryInstitute1F_Woman_2:
	msgbox LegendaryInstitute1F_Woman_Text2
	goto LegendaryInstitute1F_Woman_1


LegendaryInstitute1F_Man::
	msgbox LegendaryInstitute1F_Man_Text, MSGBOX_NPC
	turnobject 2, DIR_WEST
	return


LegendaryInstitute1F_Greeter_Text_0:
	.string "lad$"

LegendaryInstitute1F_Greeter_Text_1:
	.string "lass$"

LegendaryInstitute1F_Greeter_Text::
	.string "Thank you so much for helping us\n"
	.string "recover our research.\p"
	.string "We hope you find that Zygarde\n"
	.string "Cube useful!$"

LegendaryInstitute1F_Woman_Text::
	.string "I recommend checking out the Sandstone\n"
	.string "Library if you're ever in that area.\p"
	.string "Many of the upstairs books sound\n"
	.string "like folktale, but most of them\l"
	.string "are actually rooted in reality.$"

LegendaryInstitute1F_Man_Text::
	.string "My research is in shambles due to\n"
	.string "the recent Team Rocket attack…$"

LegendaryInstitute1F_Greeter_Text2::
	.string "You must be the young {STR_VAR_1} who went\n"
	.string "after Team Rocket to recover our\l"
	.string "research.\p"
	.string "The head scientist is waiting for\n"
	.string "you upstairs.$"

LegendaryInstitute1F_Woman_Text2::
	.string "I'm sorry, but I'm really busy.\p"
	.string "You should head upstairs and\n"
	.string "talk with the head scientist instead.$"
