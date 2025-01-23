FrostfireCity_MapScripts::
	.byte 0


FrostHearth_Sign1::
	msgbox FrostHearth_Sign1_Text, MSGBOX_SIGN
	return


FrostHearth_Sign2::
	msgbox FrostHearth_Sign2_Text, MSGBOX_SIGN
	return


FrostHearth_Sign3::
	msgbox FrostHearth_Sign3_Text, MSGBOX_SIGN
	return


FrostHearth_Sign4::
	msgbox FrostHearth_Sign4_Text, MSGBOX_SIGN
	return


FrostHearth_Sign5::
	msgbox FrostHearth_Sign5_Text, MSGBOX_SIGN
	return


FrostHearth_Sign6::
	msgbox FrostHearth_Sign6_Text, MSGBOX_SIGN
	return


FrostHearth_Sign7::
	msgbox FrostHearth_Sign7_Text, MSGBOX_SIGN
	return


Frosthearth_GymUnavailable::
	msgbox Frosthearth_GymUnavailable_Text, MSGBOX_NPC
	setflag FLAG_FIND_PRYCE_QUEST
	return


Frosthearth_Boy2::
	return


Frosthearth_Rufflet::
	return


Frosthearth_Maniac::
	return


Frosthearth_Man5::
	return


Frosthearth_NinjaBoy::
	return


Frosthearth_Sailor::
	return


Frosthearth_FilmingCrew::
	return


Frosthearth_Lass1::
	return


Frosthearth_Lass2::
	return


Frosthearth_OldMan::
	return


Frosthearth_Twin::
	return


Frosthearth_LoneOldWoman::
	return


Frosthearth_Swimmer::
	return


Frosthearth_Scott::
	return


Frosthearth_Girl::
	return


Frosthearth_HoundourTrainer::
	return


Frosthearth_Houndour1::
	return


Frosthearth_Houndour2::
	return


Frosthearth_OldWomanSand::
	return


Frosthearth_ExpertSand::
	return


Frosthearth_Girl3::
	return


Frosthearth_OldWomanSprings1::
	return


Frosthearth_OldWomanSprings2::
	return


FrostHearth_Sign1_Text::
	.string "Frosthearth City Pokémon Gym\n"
	.string "Leaders: Blaine & Pryce$"

FrostHearth_Sign2_Text::
	.string "Hearth Motel\n"
	.string "“Home is where the hearth is.”$"

FrostHearth_Sign3_Text::
	.string "Frosthearth Harbor$"

FrostHearth_Sign4_Text::
	.string "Frosthearth City Pokémon Fan Club$"

FrostHearth_Sign5_Text::
	.string "The Pokémon World Tournament$"

FrostHearth_Sign6_Text::
	.string "Mr. Hyper's Hyper Training School\n"
	.string "“Train your Pokémon like a pro!”$"

FrostHearth_Sign7_Text::
	.string "FROSTHEARTH CITY\n"
	.string "“The capitol of the north.”$"

Frosthearth_GymUnavailable_Text::
	.string "I'm sorry, but we can't currently\n"
	.string "accept new challengers.\p"
	.string "The Gym Leader went to explore\n"
	.string "the Frigid Frontier, and has yet\l"
	.string "to return.$"
