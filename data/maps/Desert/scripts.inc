Desert_MapScripts::
	.byte 0


DesertQuakesOn::
	setflag FLAG_DESERT_STEPS
	release
	end


DesertQuakesOff::
	clearflag FLAG_DESERT_STEPS
	release
	end


DesertEntrance::
	msgbox DesertEntrance_Text_0, MSGBOX_NPC
	end


ScorchedDesert_TriggerQuakes::
	lockall
	random 9
	goto_if_set FLAG_DESERT_RUINS_OPENED, ScorchedDesert_TriggerQuakes_2
ScorchedDesert_TriggerQuakes_1:
	compare VAR_RESULT, 5
	goto_if_le ScorchedDesert_TriggerQuakes_5
ScorchedDesert_TriggerQuakes_4:
	releaseall
	end

ScorchedDesert_TriggerQuakes_2:
	random 30
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_5:
	addvar VAR_TEMP_DESERTRUINSFOUND, 1
	switch VAR_TEMP_DESERTRUINSFOUND
	case 1, ScorchedDesert_TriggerQuakes_8
	case 2, ScorchedDesert_TriggerQuakes_9
	case 3, ScorchedDesert_TriggerQuakes_10
	case 4, ScorchedDesert_TriggerQuakes_11
	case 5, ScorchedDesert_TriggerQuakes_12
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_8:
	playse SE_SWITCH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 6
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	msgbox ScorchedDesert_TriggerQuakes_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_9:
	playse SE_SWITCH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 10
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	msgbox ScorchedDesert_TriggerQuakes_Text_1, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_10:
	playse SE_M_STRENGTH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 14
	setvar VAR_0x8007, 6
	special ShakeCamera
	waitstate
	msgbox ScorchedDesert_TriggerQuakes_Text_2, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_11:
	playse SE_M_STRENGTH
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 20
	setvar VAR_0x8007, 4
	special ShakeCamera
	waitstate
	msgbox ScorchedDesert_TriggerQuakes_Text_3, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto ScorchedDesert_TriggerQuakes_4

ScorchedDesert_TriggerQuakes_12:
	playse SE_M_EARTHQUAKE
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 30
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	waitse
	delay 30
	closemessage
	setvar VAR_TEMP_DESERTRUINSFOUND, 0
	delay 10
	playse SE_SWITCH
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	setmetatile VAR_TEMP_1, VAR_TEMP_2, 0x3DF, FALSE
	setobjectxy OBJ_EVENT_ID_PLAYER, VAR_TEMP_1, VAR_TEMP_2
	special DrawWholeMapView
	goto ScorchedDesert_FallThroughFloor
	goto ScorchedDesert_TriggerQuakes_4


ScorchedDesert_FallThroughFloor::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedDesert_FallThroughFloorMovement
	waitmovement 0
	playse SE_FALL
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_16
ScorchedDesert_FallThroughFloor_14:
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_13
ScorchedDesert_FallThroughFloor_11:
	compare VAR_TEMP_1, 31
	goto_if_le ScorchedDesert_FallThroughFloor_10
ScorchedDesert_FallThroughFloor_8:
	compare VAR_TEMP_1, 31
	goto_if_gt ScorchedDesert_FallThroughFloor_7
ScorchedDesert_FallThroughFloor_6:
	msgbox ScorchedDesert_FallThroughFloor_Text_0
ScorchedDesert_FallThroughFloor_1:
	waitstate
	end

ScorchedDesert_FallThroughFloor_2:
	warpholexy MAP_UNDERGROUND_RUINS, 5, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_3:
	warpholexy MAP_UNDERGROUND_RUINS, 79, 57
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_4:
	warpholexy MAP_UNDERGROUND_RUINS, 24, 63
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_5:
	warpholexy MAP_UNDERGROUND_RUINS, 73, 4
	goto ScorchedDesert_FallThroughFloor_1

ScorchedDesert_FallThroughFloor_7:
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_5
	goto ScorchedDesert_FallThroughFloor_6

ScorchedDesert_FallThroughFloor_10:
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_4
	goto ScorchedDesert_FallThroughFloor_8

ScorchedDesert_FallThroughFloor_13:
	compare VAR_TEMP_2, 37
	goto_if_gt ScorchedDesert_FallThroughFloor_3
	goto ScorchedDesert_FallThroughFloor_11

ScorchedDesert_FallThroughFloor_16:
	compare VAR_TEMP_2, 37
	goto_if_le ScorchedDesert_FallThroughFloor_2
	goto ScorchedDesert_FallThroughFloor_14


ScorchedDesert_FallThroughFloorMovement:
	set_invisible
	step_end

DesertItem1::
	finditem ITEM_TM_ROCK_SLIDE
	end


DesertItem2::
	finditem ITEM_HEART_SCALE
	end


DesertItem3::
	finditem ITEM_ELIXIR
	end


Desert_Trainer1_Camper::
	trainerbattle_single TRAINER_DESERT_TR1_CAMPER, Desert_Trainer1_Camper_Intro, Desert_Trainer1_Camper_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer1_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer2_Camper2::
	trainerbattle_single TRAINER_DESERT_TR2_CAMPER2, Desert_Trainer2_Camper2_Intro, Desert_Trainer2_Camper2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer2_Camper2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer3_Picnicker::
	trainerbattle_single TRAINER_DESERT_TR3_PICNICKER, Desert_Trainer3_Picnicker_Intro, Desert_Trainer3_Picnicker_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer3_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer4_Picnicker2::
	trainerbattle_single TRAINER_DESERT_TR4_PICNICKER2, Desert_Trainer4_Picnicker2_Intro, Desert_Trainer4_Picnicker2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer4_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer5_Hiker::
	trainerbattle_single TRAINER_DESERT_TR5_HIKER, Desert_Trainer5_Hiker_Intro, Desert_Trainer5_Hiker_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer5_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer6_Blackbelt::
	trainerbattle_single TRAINER_DESERT_TR6_BLACKBELT, Desert_Trainer6_Blackbelt_Intro, Desert_Trainer6_Blackbelt_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer6_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer7_Picnicker3::
	trainerbattle_single TRAINER_DESERT_TR7_PICNICKER3, Desert_Trainer7_Picnicker3_Intro, Desert_Trainer7_Picnicker3_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer7_Picnicker3_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer8_Hiker2::
	trainerbattle_single TRAINER_DESERT_TR8_HIKER2, Desert_Trainer8_Hiker2_Intro, Desert_Trainer8_Hiker2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer8_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer9_Hiker3::
	trainerbattle_single TRAINER_DESERT_TR9_HIKER3, Desert_Trainer9_Hiker3_Intro, Desert_Trainer9_Hiker3_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer9_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer10_Firebreather::
	trainerbattle_single TRAINER_DESERT_TR10_FIREBREATHER, Desert_Trainer10_Firebreather_Intro, Desert_Trainer10_Firebreather_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer10_Firebreather_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer11_Blackbelt2::
	trainerbattle_single TRAINER_DESERT_TR11_BLACKBELT2, Desert_Trainer11_Blackbelt2_Intro, Desert_Trainer11_Blackbelt2_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer11_Blackbelt2_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer12_Hiker4::
	trainerbattle_single TRAINER_DESERT_TR12_HIKER4, Desert_Trainer12_Hiker4_Intro, Desert_Trainer12_Hiker4_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer12_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_Trainer13_Psychic_F::
	trainerbattle_single TRAINER_DESERT_TR13_PSYCHIC_F, Desert_Trainer13_Psychic_F_Intro, Desert_Trainer13_Psychic_F_Defeat, DesertTrainer_IncreaseVar
	msgbox Desert_Trainer13_Psychic_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Desert_QuakesAbout::
	goto_if_set FLAG_DESERT_RUINS_OPENED, Desert_QuakesAbout_2
	msgbox Desert_QuakesAbout_Text, MSGBOX_NPC
	end

Desert_QuakesAbout_2:
	msgbox Desert_QuakesAbout_LessQuakes, MSGBOX_NPC
	end


DesertTrainer_IncreaseVar::
	addvar VAR_DESERT_TRAINERS, 1
	release
	end


Desert_Trainer14_Cooltrainer::
	compare VAR_DESERT_TRAINERS, 14
	goto_if_ge Desert_Trainer14_Cooltrainer_1
	compare VAR_DESERT_TRAINERS, 12
	goto_if_le Desert_Trainer14_Cooltrainer_2
	goto Desert_Trainer14_CooltrainerEligibleForBattle
	return

Desert_Trainer14_Cooltrainer_1:
	msgbox Desert_Trainer14_Cooltrainer_PostBattle, MSGBOX_NPC
	end

Desert_Trainer14_Cooltrainer_2:
	msgbox Desert_Trainer14_Cooltrainer_DefeatMoreTrainers, MSGBOX_NPC
	end


Desert_Trainer14_CooltrainerEligibleForBattle::
	lockall
	faceplayer
	goto_if_unset FLAG_TEMP_5, Desert_Trainer14_CooltrainerEligibleForBattle_2
	msgbox Desert_Trainer14_Cooltrainer_ReadyForBattleShort, MSGBOX_YESNO
Desert_Trainer14_CooltrainerEligibleForBattle_1:
	compare VAR_RESULT, YES
	goto_if_eq Desert_Trainer14_CooltrainerEligibleForBattle_6
	compare VAR_RESULT, NO
	goto_if_eq Desert_Trainer14_CooltrainerEligibleForBattle_8
	return

Desert_Trainer14_CooltrainerEligibleForBattle_2:
	setflag FLAG_TEMP_5
	msgbox Desert_Trainer14_Cooltrainer_ReadyForBattle, MSGBOX_YESNO
	goto Desert_Trainer14_CooltrainerEligibleForBattle_1

Desert_Trainer14_CooltrainerEligibleForBattle_6:
	msgbox Desert_Trainer14_CooltrainerEligibleForBattle_Text_0, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DESERT_TR14_COOLTRAINER, Desert_Trainer14_CooltrainerDefeated
	goto Desert_Trainer14_CooltrainerPostBattle
	end

Desert_Trainer14_CooltrainerEligibleForBattle_8:
	msgbox Desert_Trainer14_Cooltrainer_DeclineBattle, MSGBOX_NPC
	end


Desert_Trainer14_CooltrainerPostBattle::
	msgbox Desert_Trainer14_CooltrainerReward, MSGBOX_DEFAULT
	giveitem ITEM_SAFETY_GOGGLES
	waitfanfare
	msgbox Desert_ExplainReward, MSGBOX_DEFAULT
	call Desert_GiveBP
	setvar VAR_DESERT_TRAINERS, 14
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox Desert_Trainer14_CooltrainerPostBattle_Text_0, MSGBOX_DEFAULT
	waitfanfare
	goto_if_unset FLAG_INTRO_TO_BP, Desert_Trainer14_CooltrainerPostBattle_2
Desert_Trainer14_CooltrainerPostBattle_1:
	waitmessage
	closemessage
	release
	end

Desert_Trainer14_CooltrainerPostBattle_2:
	msgbox ExplainBP, MSGBOX_DEFAULT
	setflag FLAG_INTRO_TO_BP
	goto Desert_Trainer14_CooltrainerPostBattle_1


Desert_GiveBP::
	buffernumberstring STR_VAR_1, 20
	setvar VAR_0x8004, 20
	special GiveFrontierBattlePoints
	return


TestVarDesert::
	buffernumberstring STR_VAR_1, VAR_DESERT_TRAINERS
	msgbox TestVarDesert_Text_0, MSGBOX_NPC
	end


Desert_EventScript_SandstormTrigger::
	goto_if_eq VAR_FACING, DIR_WEST, Desert_EventScript_SandstormTrigger2
	goto_if_eq VAR_FACING, DIR_NORTH, Desert_EventScript_SandstormTrigger2
	goto_if_eq VAR_FACING, DIR_SOUTH, Desert_EventScript_SandstormTrigger2
	setweather WEATHER_SANDSTORM
	fadenewbgm MUS_DESERT
	doweather
	end


Desert_EventScript_SandstormTrigger2::
	end


DesertEntrance_Text_0:
	.string "This place is still work in progress.\n"
	.string "You're free to explore, though there's\l"
	.string "no trainers here and even the terrain\l"
	.string "is still under construction in places.\p"
	.string "Wild encounters should be working.$"

ScorchedDesert_TriggerQuakes_Text_0:
	.string "You can feel the ground\nshaking slightly.$"

ScorchedDesert_TriggerQuakes_Text_1:
	.string "The shaking seems to be growing\nin magnitude.$"

ScorchedDesert_TriggerQuakes_Text_2:
	.string "You notice the sand shifting below\nyour feet as the shaking intensifies.$"

ScorchedDesert_TriggerQuakes_Text_3:
	.string "The shaking is getting intense.$"

ScorchedDesert_FallThroughFloor_Text_0:
	.string "something borked$"

Desert_Trainer14_CooltrainerEligibleForBattle_Text_0:
	.string "Yay! Let's go!$"

Desert_Trainer14_CooltrainerPostBattle_Text_0:
	.string "Earned {STR_VAR_1} BP!$"

TestVarDesert_Text_0:
	.string "{STR_VAR_1}$"

Desert_Trainer1_Camper_Intro::
	.string "The desert climate can be tough,\n"
	.string "but I'm even tougher.$"

Desert_Trainer1_Camper_Defeat::
	.string "Not… tough… enough…$"

Desert_Trainer1_Camper_PostBattle::
	.string "Take care when exploring the desert.\n"
	.string "The sandstorm can be vicious\l"
	.string "and the land treacherous.$"

Desert_Trainer2_Camper2_Intro::
	.string "I'm looking for desert treasures,\n"
	.string "but looks like I found a trainer battle\l"
	.string "instead!$"

Desert_Trainer2_Camper2_Defeat::
	.string "I should probably stick to\n"
	.string "treasure hunting…$"

Desert_Trainer2_Camper2_PostBattle::
	.string "There can be all sorts of treasures\n"
	.string "buried in the sand.\l"
	.string "You never know what you'll find.$"

Desert_Trainer3_Picnicker_Intro::
	.string "I'm on a patrol.\n"
	.string "I'll check your strength as well!$"

Desert_Trainer3_Picnicker_Defeat::
	.string "You were so strong\n"
	.string "that I couldn't help falling back!$"

Desert_Trainer3_Picnicker_PostBattle::
	.string "Nothing scares me\n"
	.string "when I patrol with my Pokémon!$"

Desert_Trainer4_Picnicker2_Intro::
	.string "Straying off the beaten path…\n"
	.string "You must be searching for a battle!$"

Desert_Trainer4_Picnicker2_Defeat::
	.string "How could I lose…\n"
	.string "This is ridiculous!$"

Desert_Trainer4_Picnicker2_PostBattle::
	.string "The desert can be hard to navigate.\p"
	.string "If you ever become lost, try to find\n"
	.string "other people and follow the path\l"
	.string "they're taking.$"

Desert_Trainer5_Hiker_Intro::
	.string "How tough are you?\n"
	.string "We shall expose that secret!$"

Desert_Trainer5_Hiker_Defeat::
	.string "Oh! Your strength!\n"
	.string "It is shrouded in mystery!$"

Desert_Trainer5_Hiker_PostBattle::
	.string "This desert hoards mysteries in\n"
	.string "its shifting sands!$"

Desert_Trainer6_Blackbelt_Intro::
	.string "I will crush any who dare\n"
	.string "challenge me!$"

Desert_Trainer6_Blackbelt_Defeat::
	.string "My strength wanes…$"

Desert_Trainer6_Blackbelt_PostBattle::
	.string "This little sandstorm doesn't\n"
	.string "intimidate me.\p"
	.string "Sand is just tiny rocks, and I'm\n"
	.string "the master of breaking rocks.$"

Desert_Trainer7_Picnicker3_Intro::
	.string "Are you here to train?\n"
	.string "Care to train against me?$"

Desert_Trainer7_Picnicker3_Defeat::
	.string "Good hustle.$"

Desert_Trainer7_Picnicker3_PostBattle::
	.string "Training here is great, just be\n"
	.string "careful of the wild Trapinch.\p"
	.string "They like to surprise you and\n"
	.string "bite at your ankles.$"

Desert_Trainer8_Hiker2_Intro::
	.string "Who might you be?\p"
	.string "Are you perhaps searching for\n"
	.string "ancient ruins?\n$"

Desert_Trainer8_Hiker2_Defeat::
	.string "What a disgraceful setback…$"

Desert_Trainer8_Hiker2_PostBattle::
	.string "There's a set of small ancient ruins to\n"
	.string "the northeast of us but I believe\l"
	.string "the sands might be hiding even more\l"
	.string "ruins beneath.$"

Desert_Trainer9_Hiker3_Intro::
	.string "The sand erodes mountains,\n"
	.string "but my Pokémon still stand!$"

Desert_Trainer9_Hiker3_Defeat::
	.string "Such power…!$"

Desert_Trainer9_Hiker3_PostBattle::
	.string "I have no doubt your Pokémon could\n"
	.string "withstand even a tsunami!$"

Desert_Trainer10_Firebreather_Intro::
	.string "Help, I can't see anything\n"
	.string "in this storm!\l"
	.string "Are you a trainer?\l"
	.string "Want to have a battle?$"

Desert_Trainer10_Firebreather_Defeat::
	.string "I can't see! Is it over?\n"
	.string "Did we lose?$"

Desert_Trainer10_Firebreather_PostBattle::
	.string "I should have never come to this\n"
	.string "stinking desert without eyewear!$"

Desert_Trainer11_Blackbelt2_Intro::
	.string "A punch from my Pokémon can shift\n"
	.string "even the mountains!$"

Desert_Trainer11_Blackbelt2_Defeat::
	.string "Impossible!$"

Desert_Trainer11_Blackbelt2_PostBattle::
	.string "We must train even harder!\n"
	.string "Hundred push-ups, Hundred sit-ups,\l"
	.string "Hundred squats, ten kilometer run!\l"
	.string "Every day!!$"

Desert_Trainer12_Hiker4_Intro::
	.string "For thirty years I have searched for\n"
	.string "ancient ruins!\l"
	.string "I am to be challenged?$"

Desert_Trainer12_Hiker4_Defeat::
	.string "While I have searched for ruins,\n"
	.string "I've not searched for strong Pokémon.$"

Desert_Trainer12_Hiker4_PostBattle::
	.string "For thirty years I have searched for\n"
	.string "ancient ruins!\p"
	.string "No, wait, was that forty years?\n"
	.string "Which was it now?$"

Desert_Trainer13_Psychic_F_Intro::
	.string "I see a Pokémon battle defeat\n"
	.string "in your future.$"

Desert_Trainer13_Psychic_F_Defeat::
	.string "I guess the defeat I saw was my own…$"

Desert_Trainer13_Psychic_F_PostBattle::
	.string "I don't need goggles to see in this\n"
	.string "sandstorm.\p"
	.string "My mind's eye shows me all I need\n"
	.string "to see.$"

Desert_QuakesAbout_Text::
	.string "There have been reports of seismic\n"
	.string "activity around the desert since\l"
	.string "time immemorial.\p"
	.string "Some say these ruins are protected from\n"
	.string "these quakes while some believe\l"
	.string "that their presence is causing tension\l"
	.string "underneath the surface, amplifying\l"
	.string "the magnitude of the tremors.$"

Desert_QuakesAbout_LessQuakes::
	.string "Not too long ago there was a weird\n"
	.string "tremor right beneath our feet.\p"
	.string "Ever since then, the overall seismic\n"
	.string "readings seem to have gone down\l"
	.string "drastically.$"

Desert_Trainer14_Cooltrainer_ReadyForBattle::
	.string "I'm so bored…\p"
	.string "I came to the desert because I heard\n"
	.string "there's a lot of strong trainers\l"
	.string "training here but not one of them had\l"
	.string "a chance against me.\l"
	.string "You on the other hand look like someone\l"
	.string "who could entertain me.\p"
	.string "How about it,\n"
	.string "are you up for a Pokémon battle?\p"
	.string "I'm pretty strong so I hope\n"
	.string "you're prepared!$"

Desert_Trainer14_Cooltrainer_ReadyForBattleShort::
	.string "You're back!\n"
	.string "Can we please have a Pokémon battle?$"

Desert_Trainer14_Cooltrainer_DeclineBattle::
	.string "Aww…\p"
	.string "Please let me know if you change your\n"
	.string "mind. I'm itching for a real battle!$"

Desert_Trainer14_Cooltrainer_PostBattle::
	.string "My Pokémon and I need to train now.\n"
	.string "I hope we can have a rematch once we're\l"
	.string "a little bit stronger!$"

Desert_Trainer14_Cooltrainer_DefeatMoreTrainers::
	.string "I'm so bored…\p"
	.string "I want to fight strong trainers but\n"
	.string "none of the trainers here could match\l"
	.string "my awesomeness…\p"
	.string "You look kinda strong but I'm not\n"
	.string "so sure… $"

Desert_Trainer14_CooltrainerDefeated::
	.string "Even though we lost, I don't feel\n"
	.string "a single bit of resentment.\p"
	.string "That was a really fun battle!\n"
	.string "Can we go again?$"

Desert_Trainer14_CooltrainerReward::
	.string "That was awesome!\p"
	.string "It's been a long time since I've met\n"
	.string "anyone who could rival me!\l"
	.string "I'm so pumped!\p"
	.string "You know what? You were such an awesome\n"
	.string "sport, I want you to take these!$"

Desert_ExplainReward::
	.string "If you give those goggles to a Pokémon,\n"
	.string "they will be protected from powder and\l"
	.string "spore moves and will not take damage\l"
	.string "from weather effects like hail or\l"
	.string "sandstorm!\p"
	.string "…Oh, and take these as well!$"
