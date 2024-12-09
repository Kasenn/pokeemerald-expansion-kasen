Coast1_MapScripts::
	.byte 0


Route3_Tr1_Swimmer_F::
	trainerbattle_single TRAINER_R3_TR1_SWIMMER_F, R3Tr1_Intro, R3Tr1_Lose
	msgbox R3Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr2_Swimmer_M::
	trainerbattle_single TRAINER_R3_TR2_SWIMMER_M, R3Tr2_Intro, R3Tr2_Lose
	msgbox R3Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr3_Swimmer_OldSister::
	trainerbattle_single TRAINER_R3_TR3_SWIMMER_OLDSISTER, R3Tr3_Intro, R3Tr3_Lose
	msgbox R3Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr4_Tuber::
	trainerbattle_single TRAINER_R3_TR4_TUBER, R3Tr4_Intro, R3Tr4_Lose
	msgbox R3Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr5_Fisherman::
	trainerbattle_single TRAINER_R3_TR5_FISHERMAN, R3Tr5_Intro, R3Tr5_Lose
	msgbox R3Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr6_LandSwimmer_1::
	trainerbattle_single TRAINER_R3_TR6_LANDSWIMMER_1, R3Tr6_Intro, R3Tr6_Lose
	msgbox R3Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr7_LandSwimmer_2::
	trainerbattle_single TRAINER_R3_TR7_LANDSWIMMER_2, R3Tr7_Intro, R3Tr7_Lose
	msgbox R3Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr8_Sailor::
	trainerbattle_single TRAINER_R3_TR8_SAILOR, R3Tr8_Intro, R3Tr8_Lose
	msgbox R3Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr9_Swimmer_M1::
	trainerbattle_single TRAINER_R3_TR9_SWIMMER_M1, R3Tr9_Intro, R3Tr9_Lose
	msgbox R3Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr10_Swimmer_M2::
	trainerbattle_single TRAINER_R3_TR10_SWIMMER_M2, R3Tr10_Intro, R3Tr10_Lose
	msgbox R3Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr11_Swimmer_F1::
	trainerbattle_single TRAINER_R3_TR11_SWIMMER_F1, R3Tr11_Intro, R3Tr11_Lose
	msgbox R3Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Coast_Runes::
	checkitem ITEM_HISTORY_BOOK
	compare VAR_RESULT, TRUE
	goto_if_eq Coast_Runes_1
	msgbox IndescipherableText, MSGBOX_SIGN
	return

Coast_Runes_1:
	msgbox OnlyGuardiansMayEnter, MSGBOX_SIGN
	return


R3Tr1_Intro::
	.string "My Pokémon are in their natural\n"
	.string "habitat.\p"
	.string "There's no way we can lose!$"

R3Tr1_Lose::
	.string "B-But…\n"
	.string "We had the terrain advantage…$"

R3Tr1_PostBattle::
	.string "I know!\p"
	.string "The real reason I lost is because\n"
	.string "it's not raining.\p"
	.string "That's when we're truly in our\n"
	.string "element!$"

R3Tr2_Intro::
	.string "Swimming with your Pokémon!\p"
	.string "You're making me jealous!$"

R3Tr2_Lose::
	.string "Oh!\n"
	.string "I can't…$"

R3Tr2_PostBattle::
	.string "I wish I could ride my Pokémon\n"
	.string "like you do…$"

R3Tr3_Intro::
	.string "Sigh…\p"
	.string "Here I am in the sea, but who's with me?\n"
	.string "My little brother!\p"
	.string "Let's battle so I won't have to dwell\n"
	.string "on that!$"

R3Tr3_Lose::
	.string "I only lost because I was distracted\n"
	.string "looking after my little brother!$"

R3Tr3_PostBattle::
	.string "Sigh…\p"
	.string "If only it wasn't my little brother\n"
	.string "next to me, but a nice boyfriend…$"

R3Tr4_Intro::
	.string "I'm having so much fun with\n"
	.string "my big sister!\p"
	.string "But I'll happily play with you too!$"

R3Tr4_Lose::
	.string "Oh no…$"

R3Tr4_PostBattle::
	.string "You may have won, but I bet you\n"
	.string "can't beat my tough big sister!\p"
	.string "Don't cry when you lose!$"

R3Tr5_Intro::
	.string "Through fishing, I have attained a\n"
	.string "state of becalmed serenity…\p"
	.string "Please, allow me to demonstrate…$"

R3Tr5_Lose::
	.string "Though I have lost, my heart remains\n"
	.string "calm…$"

R3Tr5_PostBattle::
	.string "It matters not that I catch nothing.\n"
	.string "The line remains in the water…$"

R3Tr6_Intro::
	.string "I'm in a sour mood right now.\n"
	.string "You, help me mellow down!$"

R3Tr6_Lose::
	.string "Not the outcome I expected…$"

R3Tr6_PostBattle::
	.string "I was looking for a nice beach to\n"
	.string "relax, but all these jagged rocks\l"
	.string "everywhere are ruining the mood.$"

R3Tr7_Intro::
	.string "I've been looking for pearls,\n"
	.string "but so far have been unsuccessful.\p"
	.string "Maybe I'll have better luck in\n"
	.string "a Pokémon battle!$"

R3Tr7_Lose::
	.string "I must be doing something wrong…$"

R3Tr7_PostBattle::
	.string "Have you seen that massive boulder\n"
	.string "to the north?\p"
	.string "I don't think it's a natural\n"
	.string "formation.$"

R3Tr8_Intro::
	.string "You're here to steal my treasure,\n"
	.string "aren't you?!$"

R3Tr8_Lose::
	.string "No more!\p"
	.string "Here, I'll pay you if you\n"
	.string "just leave me alone!$"

R3Tr8_PostBattle::
	.string "Did you know?\p"
	.string "Apparently there used to be a huge\n"
	.string "mountain to the north of here, but\l"
	.string "it was blown to smithereens during\l"
	.string "a fierce battle between Pokémon.\p"
	.string "All these rocks and islands were\n"
	.string "formed from the rubble.$"

R3Tr9_Intro::
	.string "If you think you can take me in\n"
	.string "a Pokémon battle, think again!$"

R3Tr9_Lose::
	.string "I feel like Magikarp floundering\n"
	.string "on dry land…$"

R3Tr9_PostBattle::
	.string "Swimming in these parts of the world\n"
	.string "is rough.\p"
	.string "You need to keep your eyes peeled at\n"
	.string "all times, lest a rogue wave throws\l"
	.string "you against a rock.$"

R3Tr10_Intro::
	.string "Swimming is a full-body workout!\n"
	.string "You will get fit!$"

R3Tr10_Lose::
	.string "I admit it!\n"
	.string "You win!$"

R3Tr10_PostBattle::
	.string "Thanks to my daily swimming routine…\n"
	.string "Look! Feast your eyes on this physique!$"

R3Tr11_Intro::
	.string "I love the Pokémon you're\n"
	.string "surfing on!\p"
	.string "Can you show me more?$"

R3Tr11_Lose::
	.string "I'm not crying!\n"
	.string "I just got some water in my eyes!$"

R3Tr11_PostBattle::
	.string "I wish I could surf on my Pokémon,\n"
	.string "but they're just way too small to\l"
	.string "be ridden.$"

OnlyGuardiansMayEnter::
	.string "The rock wall is covered in\n"
	.string "indecipherable glyphs.\p"
	.string "With the help of your History Book,\n"
	.string "you can interpret a short passage:\p"
	.string "“Long ago, the way was sealed by the\n"
	.string "power of the Three, and only by their\l"
	.string "power can it once again be opened.”$"

IndescipherableText::
	.string "The rock wall is covered in\n"
	.string "indecipherable glyphs.$"
