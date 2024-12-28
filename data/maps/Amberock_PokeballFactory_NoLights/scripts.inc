Amberock_PokeballFactory_NoLights_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
	goto_if_ge Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	setflag FLAG_TEMP_2
	return

Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm 11, 10, 6
	goto Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Amberock_PokeballFactory_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflashlevel 0
	setweather WEATHER_SHADE
	setflag FLAG_TEMP_1
	return


BlindRocket1::
	msgbox BlindRocket1_Text
	release
	return


BlindRocket2::
	msgbox BlindRocket2_Text
	release
	return


BlindRocket3::
	msgbox BlindRocket3_Intro, MSGBOX_NPC
	return


BlindRocket4::
	lock
	faceplayer
	message BlindRocket4_Text
	waitmessage
	dynmultichoice 23, 8, TRUE, 2, 0, 0, BlindRocket4_Text_0, BlindRocket4_Text_1
	compare VAR_RESULT, 0
	goto_if_eq BlindRocket4_1
	msgbox BlindRocket4_Foe, MSGBOX_NPC
	return

BlindRocket4_1:
	msgbox BlindRocket4_Friend, MSGBOX_NPC
	return


BlindRocket5::
	trainerbattle_single TRAINER_FACTORY_ROCKET_1, BlindRocket5_Intro, BlindRocket5_Lose
	msgbox BlindRocket5_PostBat, MSGBOX_AUTOCLOSE
	return


BlindRocket6::
	msgbox BlindRocket6_Text, MSGBOX_NPC
	return


BlindRocket7::
	checktrainerflag TRAINER_FACTORY_ROCKET_2
	goto_if 1, BlindRocket7_2
	lock
	faceplayer
	message BlindRocket7_Text
	waitmessage
	dynmultichoice 23, 0, TRUE, 4, 0, 0, BlindRocket7_Text_0, BlindRocket7_Text_1, BlindRocket7_Text_2, BlindRocket7_Text_3, BlindRocket7_Text_4, BlindRocket7_Text_5
	switch VAR_RESULT
	case 0, BlindRocket7_5
	case 1, BlindRocket7_6
	case 2, BlindRocket7_7
	case 3, BlindRocket7_8
	case 4, BlindRocket7_9
	case 5, BlindRocket7_10
	return

BlindRocket7_2:
	msgbox BlindRocket7_PostBat, MSGBOX_NPC
	end

BlindRocket7_5:
	goto BlindRocket7_WrongName
	return

BlindRocket7_6:
	goto BlindRocket7_Giovanni
	return

BlindRocket7_7:
	goto BlindRocket7_Grunt
	return

BlindRocket7_8:
	goto BlindRocket7_WrongName
	return

BlindRocket7_9:
	goto BlindRocket7_CorrectName
	return

BlindRocket7_10:
	goto BlindRocket7_WrongName
	return


BlindRocket7_WrongName::
	msgbox BlindRocket7_WrongName_Text
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_2, BlindRocket7_Lose
	return


BlindRocket7_Giovanni::
	msgbox BlindRocket7_Giovanni_Text
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_2, BlindRocket7_Lose
	return


BlindRocket7_Grunt::
	msgbox BlindRocket7_Grunt_Text
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_2, BlindRocket7_Lose
	return


BlindRocket7_CorrectName::
	msgbox BlindRocket7_CorrectName_Text, MSGBOX_NPC
	end


BlindRocket8::
	msgbox BlindRocket8_Text
	release
	return


BlindRocket9::
	msgbox BlindRocket9_Text
	release
	return


FactoryEmployee_1::
	msgbox FactoryEmployee_1_Text
	release
	return


FactoryEmployee_2::
	msgbox FactoryEmployee_2_Text, MSGBOX_NPC
	return


FactoryEmployee_3::
	msgbox FactoryEmployee_3_Text, MSGBOX_NPC
	return


BlindRocket4_Text_0:
	.string "Friend$"

BlindRocket4_Text_1:
	.string "Foe$"

BlindRocket7_Text_0:
	.string "Alan$"

BlindRocket7_Text_1:
	.string "Giovanni$"

BlindRocket7_Text_2:
	.string "Grunt$"

BlindRocket7_Text_3:
	.string "Miles$"

BlindRocket7_Text_4:
	.string "Noel$"

BlindRocket7_Text_5:
	.string "{RIVAL}$"

BlindRocket1_Text::
	.string "Help, I can't see!\n"
	.string "Is someone there?$"

BlindRocket2_Text::
	.string "What happened?\p"
	.string "The Krokoroks bailed and now\n"
	.string "I can't find my way out!$"

BlindRocket3_Intro::
	.string "Aren't you a little short\n"
	.string "for a Team Rocket Grunt?$"

BlindRocket3_Lose::
	.string "If only I could've seen what\n"
	.string "I was doing…$"

BlindRocket3_PostBat::
	.string "What a terrible timing\n"
	.string "for a blackout.$"

BlindRocket4_Text::
	.string "Are you a friend or a foe?$"

BlindRocket4_Friend::
	.string "Glad to hear that.$"

BlindRocket4_Foe::
	.string "Haha.\n"
	.string "Good one!$"

BlindRocket5_Intro::
	.string "You don't look like you're\n"
	.string "supposed to be here.\l"
	.string "Intruder alert!$"

BlindRocket5_Lose::
	.string "I'm sorry,\n"
	.string "I'll keep my mouth shut!$"

BlindRocket5_PostBat::
	.string "False alarm!$"

BlindRocket6_Text::
	.string "I'm making sure nobody's getting\n"
	.string "through here.\p"
	.string "You should pick a spot to guard\n"
	.string "as well.$"

BlindRocket7_Text::
	.string "It's so dark here!\n"
	.string "You, what's your name?$"

BlindRocket7_WrongName_Text::
	.string "That's not a name I recognize.\n"
	.string "You must be an intruder!$"

BlindRocket7_Giovanni_Text::
	.string "Do you think I'm stupid?\p"
	.string "There's only one Giovanni and\n"
	.string "you sound nothing like him!$"

BlindRocket7_Grunt_Text::
	.string "Do you take me for a fool?\p"
	.string "Grunt is a title, not a name.\n"
	.string "We've got an intruder here!$"

BlindRocket7_CorrectName_Text::
	.string "Ah, that checks out.$"

BlindRocket7_Lose::
	.string "Can't believe I just lost to a kid…$"

BlindRocket7_PostBat::
	.string "You're not the one who caused\n"
	.string "this blackout, are you?$"

BlindRocket8_Text::
	.string "Is this a wall, or a box?$"

BlindRocket9_Text::
	.string "Where did everyone go?$"

FactoryEmployee_1_Text::
	.string "Boy, I sure hope we have\n"
	.string "a good insurance policy…$"

FactoryEmployee_2_Text::
	.string "Not only did we lose a lot of\n"
	.string "inventory, just look at this\l"
	.string "mess they made…$"

FactoryEmployee_3_Text::
	.string "Thankfully all the machinery\n"
	.string "is intact.\p"
	.string "As soon as we get the generator\n"
	.string "back to full power and clean this\l"
	.string "place up a bit, we'll be back\l"
	.string "in business.$"
