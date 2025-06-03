Coast1_MapScripts::
	.byte 0


Route3_Tr1_Swimmer_F::
# 4 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR1_SWIMMER_F, R3Tr1_Intro, R3Tr1_Lose
# 5 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr2_Swimmer_M::
# 26 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR2_SWIMMER_M, R3Tr2_Intro, R3Tr2_Lose
# 27 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr3_Swimmer_OldSister::
# 44 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR3_SWIMMER_OLDSISTER, R3Tr3_Intro, R3Tr3_Lose
# 45 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr4_Tuber::
# 66 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR4_TUBER, R3Tr4_Intro, R3Tr4_Lose
# 67 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr5_Fisherman::
# 85 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR5_FISHERMAN, R3Tr5_Intro, R3Tr5_Lose
# 86 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr6_LandSwimmer_1::
# 104 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR6_LANDSWIMMER_1, R3Tr6_Intro, R3Tr6_Lose
# 105 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr7_LandSwimmer_2::
# 122 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR7_LANDSWIMMER_2, R3Tr7_Intro, R3Tr7_Lose
# 123 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr8_Sailor::
# 143 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR8_SAILOR, R3Tr8_Intro, R3Tr8_Lose
# 144 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr9_Swimmer_M1::
# 167 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR9_SWIMMER_M1, R3Tr9_Intro, R3Tr9_Lose
# 168 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr10_Swimmer_M2::
# 188 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR10_SWIMMER_M2, R3Tr10_Intro, R3Tr10_Lose
# 189 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Tr11_Swimmer_F1::
# 206 "data/maps/Coast1/scripts.pory"
	trainerbattle_single TRAINER_R3_TR11_SWIMMER_F1, R3Tr11_Intro, R3Tr11_Lose
# 207 "data/maps/Coast1/scripts.pory"
	msgbox R3Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Coast_Runes::
	checkitem ITEM_HISTORY_BOOK
# 0 "data/maps/Coast1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Coast_Runes_1
# 231 "data/maps/Coast1/scripts.pory"
	msgbox IndescipherableText, MSGBOX_SIGN
	return

Coast_Runes_1:
# 228 "data/maps/Coast1/scripts.pory"
	msgbox OnlyGuardiansMayEnter, MSGBOX_SIGN
	return


R3Tr1_Intro::
# 8 "data/maps/Coast1/scripts.pory"
	.string "My Pokémon are in their natural\n"
	.string "habitat.\p"
	.string "There's no way we can lose!$"

R3Tr1_Lose::
# 13 "data/maps/Coast1/scripts.pory"
	.string "B-But…\n"
	.string "We had the terrain advantage…$"

R3Tr1_PostBattle::
# 17 "data/maps/Coast1/scripts.pory"
	.string "I know!\p"
	.string "The real reason I lost is because\n"
	.string "it's not raining.\p"
	.string "That's when we're truly in our\n"
	.string "element!$"

R3Tr2_Intro::
# 30 "data/maps/Coast1/scripts.pory"
	.string "Swimming with your Pokémon!\p"
	.string "You're making me jealous!$"

R3Tr2_Lose::
# 34 "data/maps/Coast1/scripts.pory"
	.string "Oh!\n"
	.string "I can't…$"

R3Tr2_PostBattle::
# 38 "data/maps/Coast1/scripts.pory"
	.string "I wish I could ride my Pokémon\n"
	.string "like you do…$"

R3Tr3_Intro::
# 48 "data/maps/Coast1/scripts.pory"
	.string "Sigh…\p"
	.string "Here I am in the sea, but who's with me?\n"
	.string "My little brother!\p"
	.string "Let's battle so I won't have to dwell\n"
	.string "on that!$"

R3Tr3_Lose::
# 55 "data/maps/Coast1/scripts.pory"
	.string "I only lost because I was distracted\n"
	.string "looking after my little brother!$"

R3Tr3_PostBattle::
# 59 "data/maps/Coast1/scripts.pory"
	.string "Sigh…\p"
	.string "If only it wasn't my little brother\n"
	.string "next to me, but a nice boyfriend…$"

R3Tr4_Intro::
# 70 "data/maps/Coast1/scripts.pory"
	.string "I'm having so much fun with\n"
	.string "my big sister!\p"
	.string "But I'll happily play with you too!$"

R3Tr4_Lose::
# 75 "data/maps/Coast1/scripts.pory"
	.string "Oh no…$"

R3Tr4_PostBattle::
# 78 "data/maps/Coast1/scripts.pory"
	.string "You may have won, but I bet you\n"
	.string "can't beat my tough big sister!\p"
	.string "Don't cry when you lose!$"

R3Tr5_Intro::
# 89 "data/maps/Coast1/scripts.pory"
	.string "Through fishing, I have attained a\n"
	.string "state of becalmed serenity…\p"
	.string "Please, allow me to demonstrate…$"

R3Tr5_Lose::
# 94 "data/maps/Coast1/scripts.pory"
	.string "Though I have lost, my heart remains\n"
	.string "calm…$"

R3Tr5_PostBattle::
# 98 "data/maps/Coast1/scripts.pory"
	.string "It matters not that I catch nothing.\n"
	.string "The line remains in the water…$"

R3Tr6_Intro::
# 108 "data/maps/Coast1/scripts.pory"
	.string "I'm in a sour mood right now.\n"
	.string "You, help me mellow down!$"

R3Tr6_Lose::
# 112 "data/maps/Coast1/scripts.pory"
	.string "Not the outcome I expected…$"

R3Tr6_PostBattle::
# 115 "data/maps/Coast1/scripts.pory"
	.string "I was looking for a nice beach to\n"
	.string "relax, but all these jagged rocks\l"
	.string "everywhere are ruining the mood.$"

R3Tr7_Intro::
# 126 "data/maps/Coast1/scripts.pory"
	.string "I've been looking for pearls,\n"
	.string "but so far have been unsuccessful.\p"
	.string "Maybe I'll have better luck in\n"
	.string "a Pokémon battle!$"

R3Tr7_Lose::
# 132 "data/maps/Coast1/scripts.pory"
	.string "I must be doing something wrong…$"

R3Tr7_PostBattle::
# 135 "data/maps/Coast1/scripts.pory"
	.string "Have you seen that massive boulder\n"
	.string "to the north?\p"
	.string "I don't think it's a natural\n"
	.string "formation.$"

R3Tr8_Intro::
# 147 "data/maps/Coast1/scripts.pory"
	.string "You're here to steal my treasure,\n"
	.string "aren't you?!$"

R3Tr8_Lose::
# 151 "data/maps/Coast1/scripts.pory"
	.string "No more!\p"
	.string "Here, I'll pay you if you\n"
	.string "just leave me alone!$"

R3Tr8_PostBattle::
# 156 "data/maps/Coast1/scripts.pory"
	.string "Did you know?\p"
	.string "Apparently there used to be a huge\n"
	.string "mountain to the north of here, but\l"
	.string "it was blown to smithereens during\l"
	.string "a fierce battle between Pokémon.\p"
	.string "All these rocks and islands were\n"
	.string "formed from the rubble.$"

R3Tr9_Intro::
# 171 "data/maps/Coast1/scripts.pory"
	.string "If you think you can take me in\n"
	.string "a Pokémon battle, think again!$"

R3Tr9_Lose::
# 175 "data/maps/Coast1/scripts.pory"
	.string "I feel like Magikarp floundering\n"
	.string "on dry land…$"

R3Tr9_PostBattle::
# 179 "data/maps/Coast1/scripts.pory"
	.string "Swimming in these parts of the world\n"
	.string "is rough.\p"
	.string "You need to keep your eyes peeled at\n"
	.string "all times, lest a rogue wave throws\l"
	.string "you against a rock.$"

R3Tr10_Intro::
# 192 "data/maps/Coast1/scripts.pory"
	.string "Swimming is a full-body workout!\n"
	.string "You will get fit!$"

R3Tr10_Lose::
# 196 "data/maps/Coast1/scripts.pory"
	.string "I admit it!\n"
	.string "You win!$"

R3Tr10_PostBattle::
# 200 "data/maps/Coast1/scripts.pory"
	.string "Thanks to my daily swimming routine…\n"
	.string "Look! Feast your eyes on this physique!$"

R3Tr11_Intro::
# 211 "data/maps/Coast1/scripts.pory"
	.string "I love the Pokémon you're\n"
	.string "surfing on!\p"
	.string "Can you show me more?$"

R3Tr11_Lose::
# 216 "data/maps/Coast1/scripts.pory"
	.string "I'm not crying!\n"
	.string "I just got some water in my eyes!$"

R3Tr11_PostBattle::
# 220 "data/maps/Coast1/scripts.pory"
	.string "I wish I could surf on my Pokémon,\n"
	.string "but they're just way too small to\l"
	.string "be ridden.$"

OnlyGuardiansMayEnter::
# 234 "data/maps/Coast1/scripts.pory"
	.string "The rock wall is covered in\n"
	.string "indecipherable glyphs.\p"
	.string "With the help of your History Book,\n"
	.string "you can interpret a short passage:\p"
	.string "“Long ago, the way was sealed by the\n"
	.string "power of the Three, and only by their\l"
	.string "power can it once again be opened.”$"

IndescipherableText::
# 243 "data/maps/Coast1/scripts.pory"
	.string "The rock wall is covered in\n"
	.string "indecipherable glyphs.$"
