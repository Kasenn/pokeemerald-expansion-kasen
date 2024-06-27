Route5_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag
	.byte 0


Route5_IncreaseVar::
	addvar VAR_ROUTE5_TRAINERCOUNT, 1
	release
	end


Route5_Youngster::
	msgbox Route5_Youngster_Text, MSGBOX_NPC
	end


Route5_Crustle::
	playmoncry SPECIES_CRUSTLE, CRY_MODE_NORMAL
	waitmoncry
	msgbox Route5_Crustle_Text, MSGBOX_NPC
	end


Route5_Trainer1_Fisher::
	trainerbattle_single TRAINER_R5_TR1_FISHER, Route5_Trainer1_Fisher_Intro, Route5_Trainer1_Fisher_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer1_Fisher_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer2_Beauty::
	trainerbattle_single TRAINER_R5_TR2_BEAUTY, Route5_Trainer2_Beauty_Intro, Route5_Trainer2_Beauty_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer2_Beauty_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer3_YoungCouple::
	trainerbattle_double TRAINER_R5_TR3_YOUNGCOUPLE, Route5_Trainer3_YoungCouple_Intro, Route5_Trainer3_YoungCouple_Defeat, Route5_Trainer3_YoungCouple_NotEnough, Route5_IncreaseVar
	msgbox Route5_Trainer3_YoungCouple_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer3_YoungCouple2::
	trainerbattle_double TRAINER_R5_TR3_YOUNGCOUPLE, Route5_Trainer3_YoungCouple2_Intro, Route5_Trainer3_YoungCouple2_Defeat, Route5_Trainer3_YoungCouple2_NotEnough, Route5_IncreaseVar
	msgbox Route5_Trainer3_YoungCouple2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer4_Lass1::
	trainerbattle_single TRAINER_R5_TR4_LASS1, Route5_Trainer4_Lass1_Intro, Route5_Trainer4_Lass1_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer4_Lass1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer5_PokeFan_F::
	trainerbattle_single TRAINER_R5_TR5_POKEFAN_F, Route5_Trainer5_PokeFan_F_Intro, Route5_Trainer5_PokeFan_F_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer5_PokeFan_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer6_Lass2::
	trainerbattle_single TRAINER_R5_TR6_LASS2, Route5_Trainer6_Lass2_Intro, Route5_Trainer6_Lass2_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer6_Lass2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer7_Gentleman::
	trainerbattle_single TRAINER_R5_TR7_GENTLEMAN, Route5_Trainer7_Gentleman_Intro, Route5_Trainer7_Gentleman_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer7_Gentleman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer8_Youngster::
	trainerbattle_single TRAINER_R5_TR8_YOUNGSTER, Route5_Trainer8_Youngster_Intro, Route5_Trainer8_Youngster_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer8_Youngster_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer9_Triathlete::
	trainerbattle_single TRAINER_R5_TR9_TRIATHLETE, Route5_Trainer9_Triathlete_Intro, Route5_Trainer9_Triathlete_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer9_Triathlete_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer10_RichBoy::
	trainerbattle_single TRAINER_R5_TR10_RICHBOY, Route5_Trainer10_RichBoy_Intro, Route5_Trainer10_RichBoy_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer10_RichBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer11_Man_5::
	trainerbattle_single TRAINER_R5_TR11_MAN_5, Route5_Trainer11_Man_5_Intro, Route5_Trainer11_Man_5_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer11_Man_5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer12_BugCatcher::
	trainerbattle_single TRAINER_R5_TR12_BUGCATCHER, Route5_Trainer12_BugCatcher_Intro, Route5_Trainer12_BugCatcher_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer12_BugCatcher_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer13_NinjaBoy::
	trainerbattle_single TRAINER_R5_TR13_NINJABOY, Route5_Trainer13_NinjaBoy_Intro, Route5_Trainer13_NinjaBoy_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer13_NinjaBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer14_Hiker::
	trainerbattle_single TRAINER_R5_TR14_HIKER, Route5_Trainer14_Hiker_Intro, Route5_Trainer14_Hiker_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer14_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_ItemBall1::
	finditem ITEM_SUPER_REPEL
	return


Route5_ItemBall2::
	finditem ITEM_GREAT_BALL
	return


Route5_ItemBall3::
	finditem ITEM_TM39
	return


Route5_Trainer15_CoolTrainer::
	compare VAR_ROUTE5_TRAINERCOUNT, 15
	goto_if_ge Route5_Trainer15_CoolTrainer_1
	compare VAR_ROUTE5_TRAINERCOUNT, 13
	goto_if_le Route5_Trainer15_CoolTrainer_2
	goto Route5_CoolTrainerEligibleForBattle
	return

Route5_Trainer15_CoolTrainer_1:
	msgbox Route5_CoolTrainer_PostBattle, MSGBOX_NPC
	end

Route5_Trainer15_CoolTrainer_2:
	msgbox Route5_CoolTrainer_DefeatMoreTrainers, MSGBOX_NPC
	end


Route5_CoolTrainerEligibleForBattle::
	lockall
	faceplayer
	goto_if_unset FLAG_TEMP_2, Route5_CoolTrainerEligibleForBattle_2
	msgbox Route5_CoolTrainer_ReadyForBattleShort, MSGBOX_YESNO
Route5_CoolTrainerEligibleForBattle_1:
	compare VAR_RESULT, YES
	goto_if_eq Route5_CoolTrainerEligibleForBattle_6
	compare VAR_RESULT, NO
	goto_if_eq Route5_CoolTrainerEligibleForBattle_8
	return

Route5_CoolTrainerEligibleForBattle_2:
	setflag FLAG_TEMP_2
	msgbox Route5_CoolTrainer_ReadyForBattle, MSGBOX_YESNO
	goto Route5_CoolTrainerEligibleForBattle_1

Route5_CoolTrainerEligibleForBattle_6:
	msgbox Route5_CoolTrainerEligibleForBattle_Text_0, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_R5_TR15_COOLTRAINER, Route5_CoolTrainerDefeated
	goto Route5_CoolTrainerPostBattle
	end

Route5_CoolTrainerEligibleForBattle_8:
	msgbox Route5_CoolTrainer_DeclineBattle, MSGBOX_NPC
	end


Route5_CoolTrainerPostBattle::
	msgbox Route5_CoolTrainerReward, MSGBOX_DEFAULT
	giveitem ITEM_EVIOLITE
	waitfanfare
	msgbox Route5_ExplainReward, MSGBOX_DEFAULT
	call Route5_GiveBP
	setvar VAR_ROUTE5_TRAINERCOUNT, 15
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox Route5_CoolTrainerPostBattle_Text_0, MSGBOX_DEFAULT
	waitfanfare
	goto_if_unset FLAG_INTRO_TO_BP, Route5_CoolTrainerPostBattle_2
Route5_CoolTrainerPostBattle_1:
	waitmessage
	closemessage
	release
	end

Route5_CoolTrainerPostBattle_2:
	msgbox ExplainBP, MSGBOX_DEFAULT
	setflag FLAG_INTRO_TO_BP
	goto Route5_CoolTrainerPostBattle_1


Route5_GiveBP::
	buffernumberstring STR_VAR_1, 20
	setvar VAR_0x8004, 20
	special GiveFrontierBattlePoints
	return


Route5_CoolTrainerEligibleForBattle_Text_0:
	.string "Great. Let us begin!$"

Route5_CoolTrainerPostBattle_Text_0:
	.string "Earned {STR_VAR_1} BP!$"

Route5_Youngster_Text::
	.string "These Crustle have been sitting\n"
	.string "here for hours.\l"
	.string "They just refuse to budge!$"

Route5_Crustle_Text::
	.string "No amount of coaxing seems to make\n"
	.string "the Crustle move.$"

Route5_Trainer1_Fisher_Intro::
	.string "Look at all the Pokémon I've obtained\n"
	.string "through the power of fishing!$"

Route5_Trainer1_Fisher_Defeat::
	.string "The power of fishing has let me down!$"

Route5_Trainer1_Fisher_PostBattle::
	.string "I heard the western part of Sinko\n"
	.string "has all sorts of different fish\l"
	.string "living there.\p"
	.string "I plan to check it out but my travels\n"
	.string "are so slow because I just have to stop\l"
	.string "and fish whenever I see a pool of water.$"

Route5_Trainer2_Beauty_Intro::
	.string "Stop! Have a good look at my precious\n"
	.string "Pokémon!$"

Route5_Trainer2_Beauty_Defeat::
	.string "Oh, how dare you!\n"
	.string "Don't take it so seriously!$"

Route5_Trainer2_Beauty_PostBattle::
	.string "I didn't expect to lose this easily…\n"
	.string "I'll win next time!$"

Route5_Trainer3_YoungCouple_Intro::
	.string "Ella: We always fight our\n"
	.string "battles together!$"

Route5_Trainer3_YoungCouple_Defeat::
	.string "Ella: I can't believe one is\n"
	.string "greater than two…$"

Route5_Trainer3_YoungCouple_PostBattle::
	.string "Ella: We originally began our\n"
	.string "journey from Pearlwood Point in\l"
	.string "Coralgrove Islands.\p"
	.string "We got our ultra-rare starters\n"
	.string "straight from Prof. Birch!$"

Route5_Trainer3_YoungCouple_NotEnough::
	.string "Ella: You should get more Pokémon\n"
	.string "or else this will be an uneven battle.$"

Route5_Trainer3_YoungCouple2_Intro::
	.string "Evan: Behold our combined strength!$"

Route5_Trainer3_YoungCouple2_PostBattle::
	.string "Evan: Double battles are so\n"
	.string "refreshing.\p"
	.string "Unfortunately, many people seem to\n"
	.string "disagree and refuse to battle us.$"

Route5_Trainer3_YoungCouple2_Defeat::
	.string "Evan: How can a single trainer be\n"
	.string "so strong?$"

Route5_Trainer3_YoungCouple2_NotEnough::
	.string "Evan: We only fight in pairs.\n"
	.string "Get some more Pokémon if you want to\l"
	.string "challenge us.$"

Route5_Trainer4_Lass1_Intro::
	.string "I never yield to anyone!$"

Route5_Trainer4_Lass1_Defeat::
	.string "I yield!$"

Route5_Trainer4_Lass1_PostBattle::
	.string "I've never seen a trainer as strong\n"
	.string "as you. What's your secret?$"

Route5_Trainer5_PokeFan_F_Intro::
	.string "Oh? Are you a trainer?\n"
	.string "Let's have a friendly Pokémon battle.$"

Route5_Trainer5_PokeFan_F_Defeat::
	.string "Oh my, looks like I lost.$"

Route5_Trainer5_PokeFan_F_PostBattle::
	.string "Some people take battling way too\n"
	.string "seriously.\l"
	.string "Me? I prefer a laid-back, fun battle.$"

Route5_Trainer6_Lass2_Intro::
	.string "I saw you look at me funny!\n"
	.string "This calls for a Pokémon battle!$"

Route5_Trainer6_Lass2_Defeat::
	.string "I shouldn't have called you out…$"

Route5_Trainer6_Lass2_PostBattle::
	.string "I just wanted to have a fun\n"
	.string "Pokémon battle but you just\l"
	.string "absolutely crushed my team…$"

Route5_Trainer7_Gentleman_Intro::
	.string "I must see how you carry\n"
	.string "yourself in a battle of Pokémon!$"

Route5_Trainer7_Gentleman_Defeat::
	.string "How elegant!$"

Route5_Trainer7_Gentleman_PostBattle::
	.string "That battle was truly elegant!$"

Route5_Trainer8_Youngster_Intro::
	.string "Get ready to lose!\n"
	.string "I'm not holding back my punches!$"

Route5_Trainer8_Youngster_Defeat::
	.string "I let you win on purpose!$"

Route5_Trainer8_Youngster_PostBattle::
	.string "You would not have stood a chance\n"
	.string "had I actually used my full power!$"

Route5_Trainer9_Triathlete_Intro::
	.string "Can you keep up with my Pokémon?$"

Route5_Trainer9_Triathlete_Defeat::
	.string "I may have fallen,\n"
	.string "but will rise again!$"

Route5_Trainer9_Triathlete_PostBattle::
	.string "Cycling is so much fun.\n"
	.string "You can get a bike of your own from\l"
	.string "the Shoreslate City bike shop.$"

Route5_Trainer10_RichBoy_Intro::
	.string "My father brought me new Pokémon\n"
	.string "from his trip to the Safari Zone.\l"
	.string "Let's see if they are any good.$"

Route5_Trainer10_RichBoy_Defeat::
	.string "How droll…$"

Route5_Trainer10_RichBoy_PostBattle::
	.string "Hmph… These Pokémon are no good.\n"
	.string "I must inform father to procure\l"
	.string "something even stronger.$"

Route5_Trainer11_Man_5_Intro::
	.string "Can you feel the heat?$"

Route5_Trainer11_Man_5_Defeat::
	.string "Looks like I'm the one who got burned…$"

Route5_Trainer11_Man_5_PostBattle::
	.string "Your passion burns brighter\n"
	.string "than the sun!\l"
	.string "Never let anything extinguish it!$"

Route5_Trainer12_BugCatcher_Intro::
	.string "My bugs are raring to go.\n"
	.string "Let's see if you can keep up!$"

Route5_Trainer12_BugCatcher_Defeat::
	.string "We never stood a chance…$"

Route5_Trainer12_BugCatcher_PostBattle::
	.string "I haven't seen a single bug\n"
	.string "on this route.\l"
	.string "Maybe I need to switch location.$"

Route5_Trainer13_NinjaBoy_Intro::
	.string "My Pokémon evolved and it turned into\n"
	.string "two different species!$"

Route5_Trainer13_NinjaBoy_Defeat::
	.string "Even with double the Pokémon\n"
	.string "I could not win…$"

Route5_Trainer13_NinjaBoy_PostBattle::
	.string "What a strange Pokémon…\n"
	.string "Are there more like this?$"

Route5_Trainer14_Hiker_Intro::
	.string "You've found my secret spot!\n"
	.string "This calls for a battle!$"

Route5_Trainer14_Hiker_Defeat::
	.string "What a fine show of strength!$"

Route5_Trainer14_Hiker_PostBattle::
	.string "Walking down the beaten path is so boring.\n"
	.string "Sometimes taking the path least traveled\l"
	.string "can lead you to unexpected treasures.$"

Route5_CoolTrainer_ReadyForBattle::
	.string "I heard you beat all the other\n"
	.string "trainers on this route.\l"
	.string "Excellent display of skill.\p"
	.string "There is still one trainer remaining\n"
	.string "on this route and that is me.\p"
	.string "What do you say,\n"
	.string "care for a Pokémon battle?\l"
	.string "I must warn you,\l"
	.string "I'm a league above everyone else here.$"

Route5_CoolTrainer_ReadyForBattleShort::
	.string "Well? Have you changed your mind?$"

Route5_CoolTrainer_DeclineBattle::
	.string "Understood. Come talk to me\n"
	.string "if you change your mind.$"

Route5_CoolTrainer_PostBattle::
	.string "I'm glad to have met you here today.\n"
	.string "It's rare to see someone so young\l"
	.string "yet so talented.$"

Route5_CoolTrainer_DefeatMoreTrainers::
	.string "If you want to challenge me, prove\n"
	.string "to me that you are a skilled trainer\l"
	.string "by defeating all the other trainers\l"
	.string "on this route.$"

Route5_CoolTrainerDefeated::
	.string "Truly a magnificent display of skill!$"

Route5_CoolTrainerReward::
	.string "You have more than proved yourself\n"
	.string "to be a skilled trainer.\l"
	.string "As a reward for your victory,\l"
	.string "I want you to have this.$"

Route5_ExplainReward::
	.string "When you give the Eviolite to a\n"
	.string "Pokémon that can still evolve,\l"
	.string "its Defense and Sp. Def both rise\l"
	.string "sharply!\p"
	.string "I want you to take these as well.$"

ExplainBP::
	.string "These are Battle Points, or BP.\p"
	.string "They can be used to purchase powerful\n"
	.string "items at designated stores.\p"
	.string "Many trainers hand out BP\n"
	.string "as an additional reward,\l"
	.string "with the amount earned slightly\l"
	.string "increasing as the trainers\l"
	.string "become stronger.$"
