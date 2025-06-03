Amberock_PokeballFactory_NoLights_MapScripts::
# 2 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
	goto_if_ge Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 12 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	setflag FLAG_TEMP_2
	return

Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	setobjectxyperm 11, 10, 6
	goto Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	setflashlevel 0
# 8 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	setweather WEATHER_SHADE
# 9 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	setflag FLAG_TEMP_1
	return


BlindRocket1::
# 18 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket1_Text
# 19 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	release
	return


BlindRocket2::
# 26 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket2_Text
# 27 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	release
	return


BlindRocket3::
# 36 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket3_Intro, MSGBOX_NPC
	return


BlindRocket4::
# 52 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	lock
# 53 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	faceplayer
# 54 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	message BlindRocket4_Text
# 55 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	waitmessage
# 56 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	dynmultichoice 23, 8, TRUE, 2, 0, 0, BlindRocket4_Text_0, BlindRocket4_Text_1
# 57 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlindRocket4_1
# 61 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket4_Foe, MSGBOX_NPC
	return

BlindRocket4_1:
# 58 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket4_Friend, MSGBOX_NPC
	return


BlindRocket5::
# 76 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	trainerbattle_single TRAINER_FACTORY_ROCKET_1, BlindRocket5_Intro, BlindRocket5_Lose
# 77 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket5_PostBat, MSGBOX_AUTOCLOSE
	return


BlindRocket6::
# 93 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket6_Text, MSGBOX_NPC
	return


BlindRocket7::
# 103 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	checktrainerflag TRAINER_FACTORY_ROCKET_2
	goto_if 1, BlindRocket7_2
# 107 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	lock
# 108 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	faceplayer
# 109 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	message BlindRocket7_Text
# 110 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	waitmessage
# 111 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	dynmultichoice 23, 0, TRUE, 4, 0, 0, BlindRocket7_Text_0, BlindRocket7_Text_1, BlindRocket7_Text_2, BlindRocket7_Text_3, BlindRocket7_Text_4, BlindRocket7_Text_5
# 112 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	case 0, BlindRocket7_5
# 115 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	case 1, BlindRocket7_6
# 117 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	case 2, BlindRocket7_7
# 119 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	case 3, BlindRocket7_8
# 121 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	case 4, BlindRocket7_9
# 123 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	case 5, BlindRocket7_10
	return

BlindRocket7_2:
# 104 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket7_PostBat, MSGBOX_NPC
	end

BlindRocket7_5:
# 114 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	goto BlindRocket7_WrongName
	return

BlindRocket7_6:
# 116 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	goto BlindRocket7_Giovanni
	return

BlindRocket7_7:
# 118 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	goto BlindRocket7_Grunt
	return

BlindRocket7_8:
# 120 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	goto BlindRocket7_WrongName
	return

BlindRocket7_9:
# 122 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	goto BlindRocket7_CorrectName
	return

BlindRocket7_10:
# 124 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	goto BlindRocket7_WrongName
	return


BlindRocket7_WrongName::
# 133 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket7_WrongName_Text
# 134 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_2, BlindRocket7_Lose
	return


BlindRocket7_Giovanni::
# 137 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket7_Giovanni_Text
# 138 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_2, BlindRocket7_Lose
	return


BlindRocket7_Grunt::
# 141 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket7_Grunt_Text
# 142 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_2, BlindRocket7_Lose
	return


BlindRocket7_CorrectName::
# 145 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket7_CorrectName_Text, MSGBOX_NPC
	end


BlindRocket8::
# 174 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket8_Text
# 175 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	release
	return


BlindRocket9::
# 182 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox BlindRocket9_Text
# 183 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	release
	return


FactoryEmployee_1::
# 190 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox FactoryEmployee_1_Text
# 191 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	release
	return


FactoryEmployee_2::
# 194 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox FactoryEmployee_2_Text, MSGBOX_NPC
	return


FactoryEmployee_3::
# 197 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	msgbox FactoryEmployee_3_Text, MSGBOX_NPC
	return


BlindRocket4_Text_0:
# 56 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Friend$"

BlindRocket4_Text_1:
# 56 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Foe$"

BlindRocket7_Text_0:
# 111 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Alan$"

BlindRocket7_Text_1:
# 111 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Giovanni$"

BlindRocket7_Text_2:
# 111 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Grunt$"

BlindRocket7_Text_3:
# 111 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Miles$"

BlindRocket7_Text_4:
# 111 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Noel$"

BlindRocket7_Text_5:
# 111 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "{RIVAL}$"

BlindRocket1_Text::
# 21 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Help, I can't see!\n"
	.string "Is someone there?$"

BlindRocket2_Text::
# 29 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "What happened?\p"
	.string "The Krokoroks bailed and now\n"
	.string "I can't find my way out!$"

BlindRocket3_Intro::
# 38 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Aren't you a little short\n"
	.string "for a Team Rocket Grunt?$"

BlindRocket3_Lose::
# 42 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "If only I could've seen what\n"
	.string "I was doing…$"

BlindRocket3_PostBat::
# 46 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "What a terrible timing\n"
	.string "for a blackout.$"

BlindRocket4_Text::
# 64 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Are you a friend or a foe?$"

BlindRocket4_Friend::
# 67 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Glad to hear that.$"

BlindRocket4_Foe::
# 70 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Haha.\n"
	.string "Good one!$"

BlindRocket5_Intro::
# 79 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "You don't look like you're\n"
	.string "supposed to be here.\l"
	.string "Intruder alert!$"

BlindRocket5_Lose::
# 84 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "I'm sorry,\n"
	.string "I'll keep my mouth shut!$"

BlindRocket5_PostBat::
# 88 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "False alarm!$"

BlindRocket6_Text::
# 95 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "I'm making sure nobody's getting\n"
	.string "through here.\p"
	.string "You should pick a spot to guard\n"
	.string "as well.$"

BlindRocket7_Text::
# 127 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "It's so dark here!\n"
	.string "You, what's your name?$"

BlindRocket7_WrongName_Text::
# 148 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "That's not a name I recognize.\n"
	.string "You must be an intruder!$"

BlindRocket7_Giovanni_Text::
# 152 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Do you think I'm stupid?\p"
	.string "There's only one Giovanni and\n"
	.string "you sound nothing like him!$"

BlindRocket7_Grunt_Text::
# 157 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Do you take me for a fool?\p"
	.string "Grunt is a title, not a name.\n"
	.string "We've got an intruder here!$"

BlindRocket7_CorrectName_Text::
# 162 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Ah, that checks out.$"

BlindRocket7_Lose::
# 165 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Can't believe I just lost to a kid…$"

BlindRocket7_PostBat::
# 168 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "You're not the one who caused\n"
	.string "this blackout, are you?$"

BlindRocket8_Text::
# 177 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Is this a wall, or a box?$"

BlindRocket9_Text::
# 185 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Where did everyone go?$"

FactoryEmployee_1_Text::
# 199 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Boy, I sure hope we have\n"
	.string "a good insurance policy…$"

FactoryEmployee_2_Text::
# 203 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Not only did we lose a lot of\n"
	.string "inventory, just look at this\l"
	.string "mess they made…$"

FactoryEmployee_3_Text::
# 208 "data/maps/Amberock_PokeballFactory_NoLights/scripts.pory"
	.string "Thankfully all the machinery\n"
	.string "is intact.\p"
	.string "As soon as we get the generator\n"
	.string "back to full power and clean this\l"
	.string "place up a bit, we'll be back\l"
	.string "in business.$"
