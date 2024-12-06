Route5_MapScripts::
# 2 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag
	.byte 0


Route5_Youngster::
# 6 "data/maps/Route5/scripts.pory"
	msgbox Route5_Youngster_Text, MSGBOX_NPC
	end


Route5_Crustle::
# 15 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_CRUSTLE, CRY_MODE_NORMAL
# 16 "data/maps/Route5/scripts.pory"
	waitmoncry
# 17 "data/maps/Route5/scripts.pory"
	msgbox Route5_Crustle_Text, MSGBOX_NPC
	end


Route5_Trainer1_Fisher::
# 26 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR1_FISHER, Route5_Trainer1_Fisher_Intro, Route5_Trainer1_Fisher_Defeat
# 27 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer1_Fisher_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer2_Beauty::
# 46 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR2_BEAUTY, Route5_Trainer2_Beauty_Intro, Route5_Trainer2_Beauty_Defeat
# 47 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer2_Beauty_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer3_YoungCouple::
# 63 "data/maps/Route5/scripts.pory"
	trainerbattle_double TRAINER_R5_TR3_YOUNGCOUPLE, Route5_Trainer3_YoungCouple_Intro, Route5_Trainer3_YoungCouple_Defeat, Route5_Trainer3_YoungCouple_NotEnough
# 64 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer3_YoungCouple_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer3_YoungCouple2::
# 87 "data/maps/Route5/scripts.pory"
	trainerbattle_double TRAINER_R5_TR3_YOUNGCOUPLE, Route5_Trainer3_YoungCouple2_Intro, Route5_Trainer3_YoungCouple2_Defeat, Route5_Trainer3_YoungCouple2_NotEnough
# 88 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer3_YoungCouple2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer4_Lass1::
# 110 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR4_LASS1, Route5_Trainer4_Lass1_Intro, Route5_Trainer4_Lass1_Defeat
# 111 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer4_Lass1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer5_PokeFan_F::
# 125 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR5_POKEFAN_F, Route5_Trainer5_PokeFan_F_Intro, Route5_Trainer5_PokeFan_F_Defeat
# 126 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer5_PokeFan_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer6_Lass2::
# 142 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR6_LASS2, Route5_Trainer6_Lass2_Intro, Route5_Trainer6_Lass2_Defeat
# 143 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer6_Lass2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer7_Gentleman::
# 159 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR7_GENTLEMAN, Route5_Trainer7_Gentleman_Intro, Route5_Trainer7_Gentleman_Defeat
# 160 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer7_Gentleman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer8_Youngster::
# 174 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR8_YOUNGSTER, Route5_Trainer8_Youngster_Intro, Route5_Trainer8_Youngster_Defeat
# 175 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer8_Youngster_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer9_Triathlete::
# 190 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR9_TRIATHLETE, Route5_Trainer9_Triathlete_Intro, Route5_Trainer9_Triathlete_Defeat
# 191 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer9_Triathlete_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer10_RichBoy::
# 207 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR10_RICHBOY, Route5_Trainer10_RichBoy_Intro, Route5_Trainer10_RichBoy_Defeat
# 208 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer10_RichBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer11_Man_5::
# 225 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR11_MAN_5, Route5_Trainer11_Man_5_Intro, Route5_Trainer11_Man_5_Defeat
# 226 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer11_Man_5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer12_BugCatcher::
# 241 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR12_BUGCATCHER, Route5_Trainer12_BugCatcher_Intro, Route5_Trainer12_BugCatcher_Defeat
# 242 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer12_BugCatcher_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer13_NinjaBoy::
# 258 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR13_NINJABOY, Route5_Trainer13_NinjaBoy_Intro, Route5_Trainer13_NinjaBoy_Defeat
# 259 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer13_NinjaBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_Trainer14_Hiker::
# 275 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_R5_TR14_HIKER, Route5_Trainer14_Hiker_Intro, Route5_Trainer14_Hiker_Defeat
# 276 "data/maps/Route5/scripts.pory"
	msgbox Route5_Trainer14_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route5_ItemBall1::
# 295 "data/maps/Route5/scripts.pory"
	finditem ITEM_SUPER_REPEL
	return


Route5_ItemBall2::
# 298 "data/maps/Route5/scripts.pory"
	finditem ITEM_GREAT_BALL
	return


Route5_ItemBall3::
# 301 "data/maps/Route5/scripts.pory"
	finditem ITEM_TM_ROCK_TOMB
	return


Route5_Trainer15_CoolTrainer::
# 305 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR15_COOLTRAINER
	goto_if 1, Route5_Trainer15_CoolTrainer_2
# 309 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR1_FISHER
	goto_if 1, Route5_Trainer15_CoolTrainer_7
Route5_Trainer15_CoolTrainer_4:
# 325 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainer_DefeatMoreTrainers, MSGBOX_NPC
	end

Route5_Trainer15_CoolTrainer_2:
# 306 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainer_PostBattle, MSGBOX_NPC
	end

Route5_Trainer15_CoolTrainer_5:
# 323 "data/maps/Route5/scripts.pory"
	goto Route5_CoolTrainerEligibleForBattle
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_6:
# 311 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR3_YOUNGCOUPLE
	goto_if 1, Route5_Trainer15_CoolTrainer_11
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_7:
# 310 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR2_BEAUTY
	goto_if 1, Route5_Trainer15_CoolTrainer_6
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_10:
# 313 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR5_POKEFAN_F
	goto_if 1, Route5_Trainer15_CoolTrainer_15
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_11:
# 312 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR4_LASS1
	goto_if 1, Route5_Trainer15_CoolTrainer_10
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_14:
# 315 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR7_GENTLEMAN
	goto_if 1, Route5_Trainer15_CoolTrainer_19
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_15:
# 314 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR6_LASS2
	goto_if 1, Route5_Trainer15_CoolTrainer_14
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_18:
# 317 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR9_TRIATHLETE
	goto_if 1, Route5_Trainer15_CoolTrainer_23
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_19:
# 316 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR8_YOUNGSTER
	goto_if 1, Route5_Trainer15_CoolTrainer_18
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_22:
# 319 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR11_MAN_5
	goto_if 1, Route5_Trainer15_CoolTrainer_27
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_23:
# 318 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR10_RICHBOY
	goto_if 1, Route5_Trainer15_CoolTrainer_22
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_26:
# 321 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR13_NINJABOY
	goto_if 1, Route5_Trainer15_CoolTrainer_30
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_27:
# 320 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR12_BUGCATCHER
	goto_if 1, Route5_Trainer15_CoolTrainer_26
	goto Route5_Trainer15_CoolTrainer_4

Route5_Trainer15_CoolTrainer_30:
# 322 "data/maps/Route5/scripts.pory"
	checktrainerflag TRAINER_R5_TR14_HIKER
	goto_if 1, Route5_Trainer15_CoolTrainer_5
	goto Route5_Trainer15_CoolTrainer_4


Route5_CoolTrainerEligibleForBattle::
# 329 "data/maps/Route5/scripts.pory"
	lockall
# 330 "data/maps/Route5/scripts.pory"
	faceplayer
# 331 "data/maps/Route5/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route5_CoolTrainerEligibleForBattle_2
# 336 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainer_ReadyForBattleShort, MSGBOX_YESNO
Route5_CoolTrainerEligibleForBattle_1:
# 338 "data/maps/Route5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route5_CoolTrainerEligibleForBattle_6
# 344 "data/maps/Route5/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route5_CoolTrainerEligibleForBattle_8
	return

Route5_CoolTrainerEligibleForBattle_2:
# 332 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_2
# 333 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainer_ReadyForBattle, MSGBOX_YESNO
	goto Route5_CoolTrainerEligibleForBattle_1

Route5_CoolTrainerEligibleForBattle_6:
# 339 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainerEligibleForBattle_Text_0, MSGBOX_DEFAULT
# 340 "data/maps/Route5/scripts.pory"
	trainerbattle_no_intro TRAINER_R5_TR15_COOLTRAINER, Route5_CoolTrainerDefeated
# 341 "data/maps/Route5/scripts.pory"
	goto Route5_CoolTrainerPostBattle
	end

Route5_CoolTrainerEligibleForBattle_8:
# 345 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainer_DeclineBattle, MSGBOX_NPC
	end


Route5_CoolTrainerPostBattle::
# 350 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainerReward, MSGBOX_DEFAULT
# 351 "data/maps/Route5/scripts.pory"
	giveitem ITEM_EVIOLITE
# 352 "data/maps/Route5/scripts.pory"
	waitfanfare
# 353 "data/maps/Route5/scripts.pory"
	msgbox Route5_ExplainReward, MSGBOX_DEFAULT
# 354 "data/maps/Route5/scripts.pory"
	call Route5_GiveBP
# 355 "data/maps/Route5/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 356 "data/maps/Route5/scripts.pory"
	msgbox Route5_CoolTrainerPostBattle_Text_0, MSGBOX_DEFAULT
# 357 "data/maps/Route5/scripts.pory"
	waitfanfare
# 358 "data/maps/Route5/scripts.pory"
	goto_if_unset FLAG_INTRO_TO_BP, Route5_CoolTrainerPostBattle_2
Route5_CoolTrainerPostBattle_1:
# 362 "data/maps/Route5/scripts.pory"
	waitmessage
# 363 "data/maps/Route5/scripts.pory"
	closemessage
# 364 "data/maps/Route5/scripts.pory"
	release
	end

Route5_CoolTrainerPostBattle_2:
# 359 "data/maps/Route5/scripts.pory"
	msgbox ExplainBP, MSGBOX_DEFAULT
# 360 "data/maps/Route5/scripts.pory"
	setflag FLAG_INTRO_TO_BP
	goto Route5_CoolTrainerPostBattle_1


Route5_GiveBP::
# 368 "data/maps/Route5/scripts.pory"
	buffernumberstring STR_VAR_1, 20
# 369 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, 20
# 370 "data/maps/Route5/scripts.pory"
	special GiveFrontierBattlePoints
	return


Route5_CoolTrainerEligibleForBattle_Text_0:
# 339 "data/maps/Route5/scripts.pory"
	.string "Great. Let us begin!$"

Route5_CoolTrainerPostBattle_Text_0:
# 356 "data/maps/Route5/scripts.pory"
	.string "Earned {STR_VAR_1} BP!$"

Route5_Youngster_Text::
# 9 "data/maps/Route5/scripts.pory"
	.string "These Crustle have been sitting\n"
	.string "here for hours.\l"
	.string "They just refuse to budge!$"

Route5_Crustle_Text::
# 20 "data/maps/Route5/scripts.pory"
	.string "No amount of coaxing seems to make\n"
	.string "the Crustle move.$"

Route5_Trainer1_Fisher_Intro::
# 30 "data/maps/Route5/scripts.pory"
	.string "Look at all the Pokémon I've obtained\n"
	.string "through the power of fishing!$"

Route5_Trainer1_Fisher_Defeat::
# 34 "data/maps/Route5/scripts.pory"
	.string "The power of fishing has let me down!$"

Route5_Trainer1_Fisher_PostBattle::
# 37 "data/maps/Route5/scripts.pory"
	.string "I heard the western part of Sinko\n"
	.string "has all sorts of different fish\l"
	.string "living there.\p"
	.string "I plan to check it out but my travels\n"
	.string "are so slow because I just have to stop\l"
	.string "and fish whenever I see a pool of water.$"

Route5_Trainer2_Beauty_Intro::
# 50 "data/maps/Route5/scripts.pory"
	.string "Stop! Have a good look at my precious\n"
	.string "Pokémon!$"

Route5_Trainer2_Beauty_Defeat::
# 54 "data/maps/Route5/scripts.pory"
	.string "Oh, how dare you!\n"
	.string "Don't take it so seriously!$"

Route5_Trainer2_Beauty_PostBattle::
# 58 "data/maps/Route5/scripts.pory"
	.string "I didn't expect to lose this easily…\n"
	.string "I'll win next time!$"

Route5_Trainer3_YoungCouple_Intro::
# 67 "data/maps/Route5/scripts.pory"
	.string "Ella: We always fight our\n"
	.string "battles together!$"

Route5_Trainer3_YoungCouple_Defeat::
# 71 "data/maps/Route5/scripts.pory"
	.string "Ella: I can't believe one is\n"
	.string "greater than two…$"

Route5_Trainer3_YoungCouple_PostBattle::
# 75 "data/maps/Route5/scripts.pory"
	.string "Ella: We originally began our\n"
	.string "journey from Pearlwood Point in\l"
	.string "Coralgrove Islands.\p"
	.string "We got our ultra-rare starters\n"
	.string "straight from Prof. Birch!$"

Route5_Trainer3_YoungCouple_NotEnough::
# 82 "data/maps/Route5/scripts.pory"
	.string "Ella: You should get more Pokémon\n"
	.string "or else this will be an uneven battle.$"

Route5_Trainer3_YoungCouple2_Intro::
# 91 "data/maps/Route5/scripts.pory"
	.string "Evan: Behold our combined strength!$"

Route5_Trainer3_YoungCouple2_PostBattle::
# 94 "data/maps/Route5/scripts.pory"
	.string "Evan: Double battles are so\n"
	.string "refreshing.\p"
	.string "Unfortunately, many people seem to\n"
	.string "disagree and refuse to battle us.$"

Route5_Trainer3_YoungCouple2_Defeat::
# 100 "data/maps/Route5/scripts.pory"
	.string "Evan: How can a single trainer be\n"
	.string "so strong?$"

Route5_Trainer3_YoungCouple2_NotEnough::
# 104 "data/maps/Route5/scripts.pory"
	.string "Evan: We only fight in pairs.\n"
	.string "Get some more Pokémon if you want to\l"
	.string "challenge us.$"

Route5_Trainer4_Lass1_Intro::
# 114 "data/maps/Route5/scripts.pory"
	.string "I never yield to anyone!$"

Route5_Trainer4_Lass1_Defeat::
# 117 "data/maps/Route5/scripts.pory"
	.string "I yield!$"

Route5_Trainer4_Lass1_PostBattle::
# 120 "data/maps/Route5/scripts.pory"
	.string "I've never seen a trainer as strong\n"
	.string "as you. What's your secret?$"

Route5_Trainer5_PokeFan_F_Intro::
# 129 "data/maps/Route5/scripts.pory"
	.string "Oh? Are you a trainer?\n"
	.string "Let's have a friendly Pokémon battle.$"

Route5_Trainer5_PokeFan_F_Defeat::
# 133 "data/maps/Route5/scripts.pory"
	.string "Oh my, looks like I lost.$"

Route5_Trainer5_PokeFan_F_PostBattle::
# 136 "data/maps/Route5/scripts.pory"
	.string "Some people take battling way too\n"
	.string "seriously.\l"
	.string "Me? I prefer a laid-back, fun battle.$"

Route5_Trainer6_Lass2_Intro::
# 146 "data/maps/Route5/scripts.pory"
	.string "I saw you look at me funny!\n"
	.string "This calls for a Pokémon battle!$"

Route5_Trainer6_Lass2_Defeat::
# 150 "data/maps/Route5/scripts.pory"
	.string "I shouldn't have called you out…$"

Route5_Trainer6_Lass2_PostBattle::
# 153 "data/maps/Route5/scripts.pory"
	.string "I just wanted to have a fun\n"
	.string "Pokémon battle but you just\l"
	.string "absolutely crushed my team…$"

Route5_Trainer7_Gentleman_Intro::
# 163 "data/maps/Route5/scripts.pory"
	.string "I must see how you carry\n"
	.string "yourself in a battle of Pokémon!$"

Route5_Trainer7_Gentleman_Defeat::
# 167 "data/maps/Route5/scripts.pory"
	.string "How elegant!$"

Route5_Trainer7_Gentleman_PostBattle::
# 170 "data/maps/Route5/scripts.pory"
	.string "That battle was truly elegant!$"

Route5_Trainer8_Youngster_Intro::
# 178 "data/maps/Route5/scripts.pory"
	.string "Get ready to lose!\n"
	.string "I'm not holding back my punches!$"

Route5_Trainer8_Youngster_Defeat::
# 182 "data/maps/Route5/scripts.pory"
	.string "I let you win on purpose!$"

Route5_Trainer8_Youngster_PostBattle::
# 185 "data/maps/Route5/scripts.pory"
	.string "You would not have stood a chance\n"
	.string "had I actually used my full power!$"

Route5_Trainer9_Triathlete_Intro::
# 194 "data/maps/Route5/scripts.pory"
	.string "Can you keep up with my Pokémon?$"

Route5_Trainer9_Triathlete_Defeat::
# 197 "data/maps/Route5/scripts.pory"
	.string "I may have fallen,\n"
	.string "but will rise again!$"

Route5_Trainer9_Triathlete_PostBattle::
# 201 "data/maps/Route5/scripts.pory"
	.string "Cycling is so much fun.\n"
	.string "You can get a bike of your own from\l"
	.string "the Shoreslate City bike shop.$"

Route5_Trainer10_RichBoy_Intro::
# 211 "data/maps/Route5/scripts.pory"
	.string "My father brought me new Pokémon\n"
	.string "from his trip to the Safari Zone.\l"
	.string "Let's see if they are any good.$"

Route5_Trainer10_RichBoy_Defeat::
# 216 "data/maps/Route5/scripts.pory"
	.string "How droll…$"

Route5_Trainer10_RichBoy_PostBattle::
# 219 "data/maps/Route5/scripts.pory"
	.string "Hmph… These Pokémon are no good.\n"
	.string "I must inform father to procure\l"
	.string "something even stronger.$"

Route5_Trainer11_Man_5_Intro::
# 229 "data/maps/Route5/scripts.pory"
	.string "Can you feel the heat?$"

Route5_Trainer11_Man_5_Defeat::
# 232 "data/maps/Route5/scripts.pory"
	.string "Looks like I'm the one who got burned…$"

Route5_Trainer11_Man_5_PostBattle::
# 235 "data/maps/Route5/scripts.pory"
	.string "Your passion burns brighter\n"
	.string "than the sun!\l"
	.string "Never let anything extinguish it!$"

Route5_Trainer12_BugCatcher_Intro::
# 245 "data/maps/Route5/scripts.pory"
	.string "My bugs are raring to go.\n"
	.string "Let's see if you can keep up!$"

Route5_Trainer12_BugCatcher_Defeat::
# 249 "data/maps/Route5/scripts.pory"
	.string "We never stood a chance…$"

Route5_Trainer12_BugCatcher_PostBattle::
# 252 "data/maps/Route5/scripts.pory"
	.string "I haven't seen a single bug\n"
	.string "on this route.\l"
	.string "Maybe I need to switch location.$"

Route5_Trainer13_NinjaBoy_Intro::
# 262 "data/maps/Route5/scripts.pory"
	.string "My Pokémon evolved and it turned into\n"
	.string "two different species!$"

Route5_Trainer13_NinjaBoy_Defeat::
# 266 "data/maps/Route5/scripts.pory"
	.string "Even with double the Pokémon\n"
	.string "I could not win…$"

Route5_Trainer13_NinjaBoy_PostBattle::
# 270 "data/maps/Route5/scripts.pory"
	.string "What a strange Pokémon…\n"
	.string "Are there more like this?$"

Route5_Trainer14_Hiker_Intro::
# 279 "data/maps/Route5/scripts.pory"
	.string "You never know what you might find\n"
	.string "when taking the path least traveled.\l"
	.string "This time you found a battle!$"

Route5_Trainer14_Hiker_Defeat::
# 284 "data/maps/Route5/scripts.pory"
	.string "What a fine show of strength!$"

Route5_Trainer14_Hiker_PostBattle::
# 287 "data/maps/Route5/scripts.pory"
	.string "Walking down the beaten path is so\n"
	.string "boring.\p"
	.string "Sometimes taking the path least\n"
	.string "traveled can lead you to unexpected\l"
	.string "treasures.$"

Route5_CoolTrainer_ReadyForBattle::
# 372 "data/maps/Route5/scripts.pory"
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
# 383 "data/maps/Route5/scripts.pory"
	.string "Well? Have you changed your mind?$"

Route5_CoolTrainer_DeclineBattle::
# 386 "data/maps/Route5/scripts.pory"
	.string "Understood. Come talk to me\n"
	.string "if you change your mind.$"

Route5_CoolTrainer_PostBattle::
# 390 "data/maps/Route5/scripts.pory"
	.string "I'm glad to have met you here today.\n"
	.string "It's rare to see someone so young\l"
	.string "yet so talented.$"

Route5_CoolTrainer_DefeatMoreTrainers::
# 395 "data/maps/Route5/scripts.pory"
	.string "If you want to challenge me, prove\n"
	.string "to me that you are a skilled trainer\l"
	.string "by defeating all the other trainers\l"
	.string "on this route.$"

Route5_CoolTrainerDefeated::
# 401 "data/maps/Route5/scripts.pory"
	.string "Truly a magnificent display of skill!$"

Route5_CoolTrainerReward::
# 404 "data/maps/Route5/scripts.pory"
	.string "You have more than proved yourself\n"
	.string "to be a skilled trainer.\l"
	.string "As a reward for your victory,\l"
	.string "I want you to have this.$"

Route5_ExplainReward::
# 410 "data/maps/Route5/scripts.pory"
	.string "When you give the Eviolite to a\n"
	.string "Pokémon that can still evolve,\l"
	.string "its Defense and Sp. Def both rise\l"
	.string "sharply!\p"
	.string "I want you to take these as well.$"

ExplainBP::
# 417 "data/maps/Route5/scripts.pory"
	.string "These are Battle Points, or BP.\p"
	.string "They can be used to purchase powerful\n"
	.string "items at designated stores.\p"
	.string "Many trainers hand out BP\n"
	.string "as an additional reward,\l"
	.string "with the amount earned slightly\l"
	.string "increasing as the trainers\l"
	.string "become stronger.$"
