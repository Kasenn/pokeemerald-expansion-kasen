Route7_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag
	.byte 0


Route8_Boy::
	msgbox Route8_Boy_Text, MSGBOX_NPC
	end


Route8_HoneyTrader::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_2, Route8_HoneyTrader_2
Route8_HoneyTrader_1:
	goto_if_unset FLAG_TEMP_2, Route8_HoneyTrader_5
Route8_HoneyTrader_4:
	setflag FLAG_TEMP_2
	compare VAR_RESULT, FALSE
	goto_if_eq Route8_HoneyTrader_8
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_10
	return

Route8_HoneyTrader_2:
	msgbox Route8_HoneyTrader_TextShort, MSGBOX_YESNO
	goto Route8_HoneyTrader_1

Route8_HoneyTrader_5:
	msgbox Route8_HoneyTrader_Text, MSGBOX_YESNO
	goto Route8_HoneyTrader_4

Route8_HoneyTrader_8:
	msgbox Route8_HoneyTrader_Decline, MSGBOX_NPC
	end

Route8_HoneyTrader_10:
	checkitem ITEM_ORAN_BERRY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Route8_HoneyTrader_12
	checkitemspace ITEM_HONEY, 2
	compare VAR_RESULT, FALSE
	goto_if_eq Route8_HoneyTrader_15
	removeitem ITEM_ORAN_BERRY, 1
	additem ITEM_HONEY, 2
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route8_Trade, MSGBOX_DEFAULT
	waitse
	waitmessage
	msgbox Route8_ThanksForTrade, MSGBOX_NPC
	end

Route8_HoneyTrader_12:
	msgbox Route8_HoneyTrader_DontHaveBerries, MSGBOX_NPC
	end

Route8_HoneyTrader_15:
	msgbox Route8_HoneyTrader_NotEnoughRoom, MSGBOX_NPC
	end


Route8_Sign::
	msgbox Route8_Sign_Text, MSGBOX_SIGN
	end


Route8_Ball1::
	finditem ITEM_GREAT_BALL
	end


Route8_Ball2::
	finditem ITEM_TM69
	end


Route8_Trainer1_ParasolLady::
	trainerbattle_single TRAINER_R8_TR1_PARASOLLADY, Route8_Trainer1_ParasolLady_Intro, Route8_Trainer1_ParasolLady_Defeat
	msgbox Route8_Trainer1_ParasolLady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer2_SRJR::
	trainerbattle_double TRAINER_R8_TR2_SRJR, Route8_Trainer2_SRJR_Intro, Route8_Trainer2_SRJR_Defeat, Route8_Trainer2_SRJR_NotEnoughMons
	msgbox Route8_Trainer2_SRJR_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer2_SRJR2::
	trainerbattle_double TRAINER_R8_TR2_SRJR, Route8_Trainer2_SRJR2_Intro, Route8_Trainer2_SRJR2_Defeat, Route8_Trainer2_SRJR2_NotEnoughMons
	msgbox Route8_Trainer2_SRJR_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer3_AromaLady::
	trainerbattle_single TRAINER_R8_TR3_AROMALADY, Route8_Trainer3_AromaLady_Intro, Route8_Trainer3_AromaLady_Defeat
	msgbox Route8_Trainer3_AromaLady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer4_Youngster::
	trainerbattle_single TRAINER_R8_TR4_YOUNGSTER, Route8_Trainer4_Youngster_Intro, Route8_Trainer4_Youngster_Defeat
	msgbox Route8_Trainer4_Youngster_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer5_Psychic_F::
	trainerbattle_single TRAINER_R8_TR5_PSYCHIC_F, Route8_Trainer5_Psychic_F_Intro, Route8_Trainer5_Psychic_F_Defeat
	msgbox Route8_Trainer5_Psychic_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer6_Camper_M::
	trainerbattle_single TRAINER_R8_TR6_CAMPER_M, Route8_Trainer6_Camper_M_Intro, Route8_Trainer6_Camper_M_Defeat
	msgbox Route8_Trainer6_Camper_M_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer7_Triathlete_M::
	trainerbattle_single TRAINER_R8_TR7_TRIATHLETE_M, Route8_Trainer7_Triathlete_M_Intro, Route8_Trainer7_Triathlete_M_Defeat
	msgbox Route8_Trainer7_Triathlete_M_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer8_Gentleman::
	trainerbattle_single TRAINER_R8_TR8_GENTLEMAN, Route8_Trainer8_Gentleman_Intro, Route8_Trainer8_Gentleman_Defeat
	msgbox Route8_Trainer8_Gentleman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer9_Hiker::
	trainerbattle_single TRAINER_R8_TR9_HIKER, Route8_Trainer9_Hiker_Intro, Route8_Trainer9_Hiker_Defeat
	msgbox Route8_Trainer9_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer10_OldCouple::
	trainerbattle_double TRAINER_R8_TR10_OLDCOUPLE, Route8_Trainer10_OldCouple_Intro, Route8_Trainer10_OldCouple_Defeat, Route8_Trainer10_OldCouple_NotEnoughMons
	msgbox Route8_Trainer10_OldCouple_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer10_OldCouple2::
	trainerbattle_double TRAINER_R8_TR10_OLDCOUPLE, Route8_Trainer10_OldCouple2_Intro, Route8_Trainer10_OldCouple2_Defeat, Route8_Trainer10_OldCouple2_NotEnoughMons
	msgbox Route8_Trainer10_OldCouple2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer11_BirdKeeper::
	trainerbattle_single TRAINER_R8_TR11_BIRDKEEPER, Route8_Trainer11_BirdKeeper_Intro, Route8_Trainer11_BirdKeeper_Defeat
	msgbox Route8_Trainer11_BirdKeeper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Boy_Text::
	.string "Why'd they have to set the flower shop\n"
	.string "in the middle of nowhere.\l"
	.string "I'm tired of walking all the way here…$"

Route8_HoneyTrader_Text::
	.string "Hi! I'm looking for Oran Berries.\n"
	.string "With the help of my Pokémon,\l"
	.string "I've been able to amass a large\l"
	.string "quantity of Honey.\p"
	.string "Do you have any Oran Berries?\n"
	.string "I'd be willing to trade 2 jars of\l"
	.string "Honey for 1 Oran Berry.\p"
	.string "Would you like to trade?$"

Route8_HoneyTrader_TextShort::
	.string "Would you like to trade an Oran Berry\n"
	.string "for Honey?$"

Route8_HoneyTrader_Decline::
	.string "Oh…\p"
	.string "Well, if you find any Oran Berries\n"
	.string "and would like to trade,\l"
	.string "you'll find me here.$"

Route8_HoneyTrader_DontHaveBerries::
	.string "Hm… You don't seem to be carrying\n"
	.string "any Oran Berries…$"

Route8_HoneyTrader_NotEnoughRoom::
	.string "Hm… You don't seem to have any room\n"
	.string "to hold the honey…$"

Route8_Trade::
	.string "{PLAYER} traded 1 Oran Berry\n"
	.string "for 2 jars of Honey!$"

Route8_ThanksForTrade::
	.string "Thanks for the trade! Come find me\n"
	.string "if you'd like to trade more!$"

Route8_Sign_Text::
	.string "{LEFT_ARROW} Pretty Petal flower shop\n"
	.string "{DOWN_ARROW} Shoreslate City$"

Route8_Trainer1_ParasolLady_Intro::
	.string "I just bought this parasol.\n"
	.string "My cuteness should be up by a third!$"

Route8_Trainer1_ParasolLady_Defeat::
	.string "You're better than me by about\n"
	.string "five times!$"

Route8_Trainer1_ParasolLady_PostBattle::
	.string "Using accessories effectively is\n"
	.string "the secret behind fashion appeal.$"

Route8_Trainer2_SRJR_Intro::
	.string "Kate: Together, we're fearless!\n"
	.string "We'll demonstrate how tough we are!$"

Route8_Trainer2_SRJR_Defeat::
	.string "Kate: I blew it in front of my junior\n"
	.string "student partner…$"

Route8_Trainer2_SRJR_PostBattle::
	.string "Kate: When someone's relying on me,\n"
	.string "I get this urge to look cool in front\l"
	.string "of them…$"

Route8_Trainer2_SRJR_NotEnoughMons::
	.string "Kate: If you've only got one Pokémon,\n"
	.string "we can't battle with you.\p"
	.string "That would be bullying.$"

Route8_Trainer2_SRJR2_Intro::
	.string "Joy: Together, we're fearless!\n"
	.string "We'll demonstrate how tough we are!$"

Route8_Trainer2_SRJR2_Defeat::
	.string "Joy: Please forgive me, Kate!$"

Route8_Trainer2_SRJR2_PostBattle::
	.string "Joy: Ehehe, I'll have to train with Kate,\n"
	.string "my senior student partner, again.$"

Route8_Trainer2_SRJR2_NotEnoughMons::
	.string "Joy: You need at least two Pokémon\n"
	.string "if you're going to challenge us!$"

Route8_Trainer3_AromaLady_Intro::
	.string "Oh, aren't you an adorable trainer!\n"
	.string "Please, I need a romantic battle!\l"
	.string "I'm somewhat decent!$"

Route8_Trainer3_AromaLady_Defeat::
	.string "Oh, how strong you are!\n"
	.string "You've given me quite a shock!$"

Route8_Trainer3_AromaLady_PostBattle::
	.string "Are you busy right now?\n"
	.string "I was thinking that maybe we can have\l"
	.string "a rematch right now…\l"
	.string "But it's all right if you're busy.$"

Route8_Trainer4_Youngster_Intro::
	.string "I learned all sorts of things at the\n"
	.string "Trainer's School.\p"
	.string "I want to test things out for real!$"

Route8_Trainer4_Youngster_Defeat::
	.string "I slacked off in school…\n"
	.string "That's why I lost.$"

Route8_Trainer4_Youngster_PostBattle::
	.string "Maybe I need to go back to school and\n"
	.string "redo some of the courses…$"

Route8_Trainer5_Psychic_F_Intro::
	.string "Ahahahaha!\n"
	.string "I'll dazzle you with my wonders!$"

Route8_Trainer5_Psychic_F_Defeat::
	.string "I wondrously lost!$"

Route8_Trainer5_Psychic_F_PostBattle::
	.string "You managed to win only because it was\n"
	.string "a wonder! Yes, a wonder!\l"
	.string "Don't think you can win all the time!$"

Route8_Trainer6_Camper_M_Intro::
	.string "Camping's fun! You can fish, roast\n"
	.string "marshmallows, and tell spooky stories!\p"
	.string "But the best of all are the Pokémon\n"
	.string "battles!$"

Route8_Trainer6_Camper_M_Defeat::
	.string "Way too strong!$"

Route8_Trainer6_Camper_M_PostBattle::
	.string "I think it's great that I can go\n"
	.string "camping with my Pokémon.$"

Route8_Trainer7_Triathlete_M_Intro::
	.string "I'm in the middle of practicing for\n"
	.string "a triathlon but sure, I'll battle you!$"

Route8_Trainer7_Triathlete_M_Defeat::
	.string "I ran out of energy!$"

Route8_Trainer7_Triathlete_M_PostBattle::
	.string "I'm clearly not strong enough.\n"
	.string "Need to keep practicing!$"

Route8_Trainer8_Gentleman_Intro::
	.string "Might I interest you in a\n"
	.string "Pokémon battle?$"

Route8_Trainer8_Gentleman_Defeat::
	.string "How splendiferous!$"

Route8_Trainer8_Gentleman_PostBattle::
	.string "A fine battle that was!$"

Route8_Trainer9_Hiker_Intro::
	.string "We'll rock you hard!$"

Route8_Trainer9_Hiker_Defeat::
	.string "No contest at all!$"

Route8_Trainer9_Hiker_PostBattle::
	.string "I should try different Pokémon\n"
	.string "types, that's what I ought to do.$"

Route8_Trainer10_OldCouple_Intro::
	.string "Jay: We've been married for\n"
	.string "fifty years.\p"
	.string "The bond we share as a couple could\n"
	.string "never be broken.$"

Route8_Trainer10_OldCouple_Defeat::
	.string "Jay: Oh, dear.\n"
	.string "We've lost, my dear husband.$"

Route8_Trainer10_OldCouple_PostBattle::
	.string "Jay: Fifty years of marriage…\p"
	.string "If we ever argued, we always settled\n"
	.string "it with a Pokémon battle…$"

Route8_Trainer10_OldCouple_NotEnoughMons::
	.string "Jay: Well, well, aren't you a young\n"
	.string "trainer?\p"
	.string "If you'd care to battle with us, you'll\n"
	.string "have to come back with more Pokémon.$"

Route8_Trainer10_OldCouple2_Intro::
	.string "John: We've always battled Pokémon\n"
	.string "together as a twosome.\l"
	.string "We've confidence in ourselves.$"

Route8_Trainer10_OldCouple2_Defeat::
	.string "John: Oh, my.\n"
	.string "We've lost, dear wife.$"

Route8_Trainer10_OldCouple2_PostBattle::
	.string "John: We've been married for\n"
	.string "fifty years.\p"
	.string "Come to think of it, I've yet to beat\n"
	.string "my dear wife in a battle.$"

Route8_Trainer10_OldCouple2_NotEnoughMons::
	.string "John: Well, well, what a young trainer!\p"
	.string "Will you battle with us? If so, you'll\n"
	.string "have to return with more Pokémon.$"

Route8_Trainer11_BirdKeeper_Intro::
	.string "It's over for you!\n"
	.string "I have the high ground!$"

Route8_Trainer11_BirdKeeper_Defeat::
	.string "I was too confident and wasn't\n"
	.string "able to keep level-headed…$"

Route8_Trainer11_BirdKeeper_PostBattle::
	.string "The most important thing in Pokémon\n"
	.string "battles is to keep your cool\l"
	.string "and think straight.\p"
	.string "What I did was rush you head-on\n"
	.string "without thinking.$"
