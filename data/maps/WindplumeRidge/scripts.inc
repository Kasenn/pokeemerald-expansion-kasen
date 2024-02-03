WindplumeRidge_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetWindPlumeFlag
	.byte 0


SetWindPlumeFlag::
	setflag FLAG_LANDMARK_WINDPLUME_VALLEY
	release
	end


WindplumeRidge_StartWind::
	setweather WEATHER_STRONG_WINDS
	doweather
	end


WindplumeRidge_RemoveWind::
	setweather WEATHER_SUNNY
	doweather
	end


HideAldeleafWoman::
	setflag FLAG_DEFEATED_SUDOWOODO2
	release
	end


Windplume_IronBall::
	finditem ITEM_IRON_BALL
	return


Windplume_Guide::
	msgbox Windplume_Guide_Text, MSGBOX_NPC
	end


Windplume_Trainer1::
	trainerbattle_single TRAINER_WPV_TR1_BIRDKEEPER, Windplume_Text_Trainer1Intro, Windplume_Text_Trainer1Defeat
	msgbox Windplume_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer2::
	trainerbattle_single TRAINER_WPV_TR2_TRIATH, Windplume_Text_Trainer2Intro, Windplume_Text_Trainer2Defeat
	msgbox Windplume_Text_Trainer2PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer3::
	trainerbattle_single TRAINER_WPV_TR3_BATTLEGIRL, Windplume_Text_Trainer3Intro, Windplume_Text_Trainer3Defeat
	msgbox Windplume_Text_Trainer3PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer4::
	trainerbattle_single TRAINER_WPV_TR4_CAMPER, Windplume_Text_Trainer4Intro, Windplume_Text_Trainer4Defeat
	msgbox Windplume_Text_Trainer4PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer5::
	trainerbattle_single TRAINER_WPV_TR5_BIRDKEEPER, Windplume_Text_Trainer5Intro, Windplume_Text_Trainer5Defeat
	msgbox Windplume_Text_Trainer5PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer6::
	trainerbattle_single TRAINER_WPV_TR6_MANIAC, Windplume_Text_Trainer6Intro, Windplume_Text_Trainer6Defeat
	msgbox Windplume_Text_Trainer6PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer7::
	trainerbattle_single TRAINER_WPV_TR7_BIRDKEEPER, Windplume_Text_Trainer7Intro, Windplume_Text_Trainer7Defeat
	msgbox Windplume_Text_Trainer7PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer8::
	trainerbattle_single TRAINER_WPV_TR8_NINJABOY, Windplume_Text_Trainer8Intro, Windplume_Text_Trainer8Defeat
	msgbox Windplume_Text_Trainer8PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer9::
	trainerbattle_single TRAINER_WPV_TR9_LASS, Windplume_Text_Trainer9Intro, Windplume_Text_Trainer9Defeat
	msgbox Windplume_Text_Trainer9PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer10::
	trainerbattle_single TRAINER_WPV_TR10_TRIATH, Windplume_Text_Trainer10Intro, Windplume_Text_Trainer10Defeat
	msgbox Windplume_Text_Trainer10PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer11::
	trainerbattle_single TRAINER_WPV_TR11_BIRDKEEPER, Windplume_Text_Trainer11Intro, Windplume_Text_Trainer11Defeat
	msgbox Windplume_Text_Trainer11PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer12::
	trainerbattle_single TRAINER_WPV_TR12_BATTLEGIRL, Windplume_Text_Trainer12Intro, Windplume_Text_Trainer12Defeat
	msgbox Windplume_Text_Trainer12PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer13::
	trainerbattle_single TRAINER_WPV_TR13_BIRDKEEPER, Windplume_Text_Trainer13Intro, Windplume_Text_Trainer13Defeat
	msgbox Windplume_Text_Trainer13PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Trainer14::
	lockall
	faceplayer
	trainerbattle_single TRAINER_WPV_TR14_SKYLA, Windplume_Text_Trainer14Intro, Windplume_Text_Trainer14Defeat, Windplume_Event_SkylaDefeated, NO_MUSIC
	msgbox Windplume_Text_Trainer14PostBattle, MSGBOX_AUTOCLOSE
	end


Windplume_Event_SkylaDefeated::
	msgbox Windplume_Text_Trainer14Outro, MSGBOX_DEFAULT
	waitmessage
	closemessage
	giveitem ITEM_HM02
	waitfanfare
	call SetWindPlumeTrainersDefeated
	msgbox Windplume_Text_ExplainFly, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


SetWindPlumeTrainersDefeated::
	settrainerflag TRAINER_WPV_TR1_BIRDKEEPER
	settrainerflag TRAINER_WPV_TR2_TRIATH
	settrainerflag TRAINER_WPV_TR3_BATTLEGIRL
	settrainerflag TRAINER_WPV_TR4_CAMPER
	settrainerflag TRAINER_WPV_TR5_BIRDKEEPER
	settrainerflag TRAINER_WPV_TR6_MANIAC
	settrainerflag TRAINER_WPV_TR7_BIRDKEEPER
	settrainerflag TRAINER_WPV_TR8_NINJABOY
	settrainerflag TRAINER_WPV_TR9_LASS
	settrainerflag TRAINER_WPV_TR10_TRIATH
	settrainerflag TRAINER_WPV_TR11_BIRDKEEPER
	settrainerflag TRAINER_WPV_TR12_BATTLEGIRL
	settrainerflag TRAINER_WPV_TR13_BIRDKEEPER
	return


Windplume_Guide_Text::
	.string "Wip$"

Windplume_Text_Trainer1Intro::
	.string "$"

Windplume_Text_Trainer1Defeat::
	.string "$"

Windplume_Text_Trainer1PostBattle::
	.string "$"

Windplume_Text_Trainer2Intro::
	.string "$"

Windplume_Text_Trainer2Defeat::
	.string "$"

Windplume_Text_Trainer2PostBattle::
	.string "$"

Windplume_Text_Trainer3Intro::
	.string "$"

Windplume_Text_Trainer3Defeat::
	.string "$"

Windplume_Text_Trainer3PostBattle::
	.string "$"

Windplume_Text_Trainer4Intro::
	.string "$"

Windplume_Text_Trainer4Defeat::
	.string "$"

Windplume_Text_Trainer4PostBattle::
	.string "$"

Windplume_Text_Trainer5Intro::
	.string "$"

Windplume_Text_Trainer5Defeat::
	.string "$"

Windplume_Text_Trainer5PostBattle::
	.string "$"

Windplume_Text_Trainer6Intro::
	.string "$"

Windplume_Text_Trainer6Defeat::
	.string "$"

Windplume_Text_Trainer6PostBattle::
	.string "$"

Windplume_Text_Trainer7Intro::
	.string "$"

Windplume_Text_Trainer7Defeat::
	.string "$"

Windplume_Text_Trainer7PostBattle::
	.string "$"

Windplume_Text_Trainer8Intro::
	.string "$"

Windplume_Text_Trainer8Defeat::
	.string "$"

Windplume_Text_Trainer8PostBattle::
	.string "$"

Windplume_Text_Trainer9Intro::
	.string "$"

Windplume_Text_Trainer9Defeat::
	.string "$"

Windplume_Text_Trainer9PostBattle::
	.string "$"

Windplume_Text_Trainer10Intro::
	.string "$"

Windplume_Text_Trainer10Defeat::
	.string "$"

Windplume_Text_Trainer10PostBattle::
	.string "$"

Windplume_Text_Trainer11Intro::
	.string "$"

Windplume_Text_Trainer11Defeat::
	.string "$"

Windplume_Text_Trainer11PostBattle::
	.string "$"

Windplume_Text_Trainer12Intro::
	.string "$"

Windplume_Text_Trainer12Defeat::
	.string "$"

Windplume_Text_Trainer12PostBattle::
	.string "$"

Windplume_Text_Trainer13Intro::
	.string "$"

Windplume_Text_Trainer13Defeat::
	.string "$"

Windplume_Text_Trainer13PostBattle::
	.string "$"

Windplume_Text_Trainer14Intro::
	.string "Hee-hee! I've been waiting for you.\p"
	.string "My name is Skyla, and I guess you\n"
	.string "could consider me the “Gym Leader”\l"
	.string "of this place!\p"
	.string "I heard we might be having a new\n"
	.string "challenger who can face the power\l"
	.string "of the flying-type Pokémon and\l"
	.string "not get blown off their feet!\p"
	.string "I'm kinda excited about this battle!\n"
	.string "Why don't you and I have some fun?$"

Windplume_Text_Trainer14Defeat::
	.string "I won't forget this battle!\n"
	.string "I'm glad that I could fight against you!$"

Windplume_Text_Trainer14PostBattle::
	.string "Skyla: Are you and your Pokémon well?\n"
	.string "Our battle together was so much fun.\p"
	.string "Now, my Pokémon and I have started\n"
	.string "training again.\p"
	.string "I hope one day we can have a rematch.\n"
	.string "Next time I will not lose!$"

Windplume_Text_ExplainFly::
	.string "That's a Hidden Machine, Fly!\p"
	.string "When you use that move outside of\n"
	.string "battle, you can easily visit towns\l"
	.string "you've already visited!$"

Windplume_Text_Trainer14Outro::
	.string "You're an amazing Pokémon Trainer.\n"
	.string "My Pokémon and I are happy,\l"
	.string "because for the first time in a while,\l"
	.string "we could fight with our full strength.\p"
	.string "I'm sure a trainer of your caliber\n"
	.string "will find this tremendously helpful.$"
