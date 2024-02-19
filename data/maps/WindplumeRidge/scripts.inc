WindplumeRidge_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetWindPlumeFlag
	.byte 0


SetWindPlumeFlag::
	setflag FLAG_LANDMARK_WINDPLUME_VALLEY
	release
	end


WindPlume_VarSetter::
	compare VAR_WIND_SPEED, 0
	goto_if_eq WindPlume_VarSetter_2
WindPlume_VarSetter_1:
	compare VAR_WIND_SPEED, 1
	goto_if_eq WindPlume_VarSetter_5
WindPlume_VarSetter_4:
	compare VAR_WIND_SPEED, 2
	goto_if_eq WindPlume_VarSetter_7
	return

WindPlume_VarSetter_2:
	msgbox WindPlume_VarSetter_Text_0, MSGBOX_NPC
	setvar VAR_WIND_SPEED, 1
	goto WindPlume_VarSetter_1

WindPlume_VarSetter_5:
	msgbox WindPlume_VarSetter_Text_1, MSGBOX_NPC
	setvar VAR_WIND_SPEED, 2
	goto WindPlume_VarSetter_4

WindPlume_VarSetter_7:
	msgbox WindPlume_VarSetter_Text_2, MSGBOX_NPC
	setvar VAR_WIND_SPEED, 0
	return


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
	goto_if_set FLAG_RECEIVED_HM_FLY, Windplume_Guide_2
	msgbox Windplume_Guide_Text, MSGBOX_NPC
Windplume_Guide_1:
	end

Windplume_Guide_2:
	msgbox Windplume_Guide_Text_Post, MSGBOX_NPC
	goto Windplume_Guide_1


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
	setflag FLAG_RECEIVED_HM_FLY
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


WindPlume_VarSetter_Text_0:
	.string "VAR_WIND_SPEED set to 1$"

WindPlume_VarSetter_Text_1:
	.string "VAR_WIND_SPEED set to 2$"

WindPlume_VarSetter_Text_2:
	.string "VAR_WIND_SPEED set back to 0$"

Windplume_Guide_Text_Post::
	.string "You're back! I assume you've taken\n"
	.string "a victory against Skyla?\p"
	.string "Good job! It's rare to see a trainer\n"
	.string "that can take Skyla on like that!\p"
	.string "With that said though, don't become\n"
	.string "content in your victory!\l"
	.string "Knowing Skyla, she's probably already\l"
	.string "hard at work, training her Pokémon.\p"
	.string "She tends to be a bit competitive\n"
	.string "so expect to see a rematch between\l"
	.string "you two any time soon!$"

Windplume_Guide_Text::
	.string "Oh, we have a new challenger!\p"
	.string "This place is called the Windplume\n"
	.string "Valley.\p"
	.string "There's a constant wind blowing through\n"
	.string "this valley which really makes it an\l"
	.string "ideal place for flying-type trainers to\l"
	.string "train their Pokémon.\p"
	.string "The wind allows the flying-type\n"
	.string "Pokémon to move at extraordinary speeds,\l"
	.string "sometimes even allowing them to execute\l"
	.string "some of their attacks faster!\p"
	.string "Anyway, there's an elite trainer\n"
	.string "waiting for challengers on the other\l"
	.string "side of the valley.\p"
	.string "If you can get there and beat them in\n"
	.string "a Pokémon battle, you just might get\l"
	.string "an awesome reward!\p"
	.string "Anyway, better get to it!$"

Windplume_Text_Trainer1Intro::
	.string "I have the wind on my side!\n"
	.string "What chance do you thing you got!?$"

Windplume_Text_Trainer1Defeat::
	.string "Even with the wind on my side,\n"
	.string "I couldn't keep up…$"

Windplume_Text_Trainer1PostBattle::
	.string "This wind is really great for my birds.\n"
	.string "They love going fast so this place is\l"
	.string "a paradise for them.$"

Windplume_Text_Trainer2Intro::
	.string "Gotta go fast!$"

Windplume_Text_Trainer2Defeat::
	.string "Not fast enough…$"

Windplume_Text_Trainer2PostBattle::
	.string "Maybe outspeeding your opponent\n"
	.string "just isn't enough…$"

Windplume_Text_Trainer3Intro::
	.string "Just because I'm not a bird keeper\n"
	.string "doesn't mean I don't have flying\l"
	.string "Pokemon!$"

Windplume_Text_Trainer3Defeat::
	.string "Maybe I need to consider a change\n"
	.string "in strategy…$"

Windplume_Text_Trainer3PostBattle::
	.string "This place is great for training.\n"
	.string "If you don't try to fight the wind\l"
	.string "and just go with it,\l"
	.string "the feeling can be kind of liberating.$"

Windplume_Text_Trainer4Intro::
	.string "Are you here to train?\n"
	.string "Here, let me be your training partner!$"

Windplume_Text_Trainer4Defeat::
	.string "I guess I've been slacking off…$"

Windplume_Text_Trainer4PostBattle::
	.string "Apparently this wind makes it easier\n"
	.string "for Pokémon to execute certain wind or\l"
	.string "flying related moves.\l"
	.string "I hope you've come prepared.$"

Windplume_Text_Trainer5Intro::
	.string "You're looking at the next boss\n"
	.string "of this place!$"

Windplume_Text_Trainer5Defeat::
	.string "You just got lucky, that's all!$"

Windplume_Text_Trainer5PostBattle::
	.string "While this place technically\n"
	.string "isn't a gym, we do have a sort of\l"
	.string "leader character we all look up to.\p"
	.string "They were the first one to use this\n"
	.string "place to train their Pokémon,\l"
	.string "and as such, many regard them as\l"
	.string "the senior trainer.$"

Windplume_Text_Trainer6Intro::
	.string "I love Pokémon!\n"
	.string "I love Pokémon battles even more!$"

Windplume_Text_Trainer6Defeat::
	.string "I hate Pokémon battles…$"

Windplume_Text_Trainer6PostBattle::
	.string "Apparently there's a place to\n"
	.string "catch wild Pokémon here.\l"
	.string "Wonder where that is…$"

Windplume_Text_Trainer7Intro::
	.string "My Pokémon are stronger than the wind.\n"
	.string "They're my pride and joy!$"

Windplume_Text_Trainer7Defeat::
	.string "My Pokémon may be stronger than\n"
	.string "the wind, but they aren't as strong\l"
	.string "as yours.$"

Windplume_Text_Trainer7PostBattle::
	.string "Many bird keepers come here to train.\p"
	.string "That's why you can find feathers\n"
	.string "strewn all over the place.$"

Windplume_Text_Trainer8Intro::
	.string "Swift as the wind, that's the\n"
	.string "ninja way!$"

Windplume_Text_Trainer8Defeat::
	.string "I failed…$"

Windplume_Text_Trainer8PostBattle::
	.string "Ninjas are taught to be quick\n"
	.string "and silent. But ninjas must also\l"
	.string "possess the strength to take down\l"
	.string "their foes.$"

Windplume_Text_Trainer9Intro::
	.string "My Pokémon may not be traditional\n"
	.string "flying types, but that doesn't mean\l"
	.string "you should underestimate us!$"

Windplume_Text_Trainer9Defeat::
	.string "Even with the wind on my side, I lost…$"

Windplume_Text_Trainer9PostBattle::
	.string "Have you wondered how the winds\n"
	.string "are so strong here?\p"
	.string "Apparently it's got something to do\n"
	.string "with how the mountains around us\l"
	.string "funnel it all through here.$"

Windplume_Text_Trainer10Intro::
	.string "Can't you see that I'm training here?!$"

Windplume_Text_Trainer10Defeat::
	.string "Even with all my training…$"

Windplume_Text_Trainer10PostBattle::
	.string "Please don't bother me,\n"
	.string "I'm still in the middle of my training.$"

Windplume_Text_Trainer11Intro::
	.string "Go my birds, bring me victory!$"

Windplume_Text_Trainer11Defeat::
	.string "My Pokémon did their best.\n"
	.string "That's all I can ask for.$"

Windplume_Text_Trainer11PostBattle::
	.string "My birds are free to fly in the air\n"
	.string "while I'm standing here,\l"
	.string "shackled to the ground.\p"
	.string "I wonder, am I holding them back?$"

Windplume_Text_Trainer12Intro::
	.string "This is the final stretch!\n"
	.string "Too bad I stand here!$"

Windplume_Text_Trainer12Defeat::
	.string "How could this be?!\n"
	.string "I wasn't being reckless at all!$"

Windplume_Text_Trainer12PostBattle::
	.string "You've earned it,\n"
	.string "go ahead and claim your prize.\p"
	.string "Oh, I meant the prize of getting to\n"
	.string "challenge the senior trainer, of course!$"

Windplume_Text_Trainer13Intro::
	.string "You're not getting past this point!$"

Windplume_Text_Trainer13Defeat::
	.string "I couldn't block your path…\n"
	.string "You're an impressive trainer!$"

Windplume_Text_Trainer13PostBattle::
	.string "Even I didn't stand a chance\n"
	.string "against you.\p"
	.string "I wonder, will she?$"

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
