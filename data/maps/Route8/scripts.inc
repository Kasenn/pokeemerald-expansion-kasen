Route8_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag
	.byte 0


Route7_Trainer1_Camper::
	trainerbattle_single TRAINER_R7_TR1_CAMPER, Route7_Trainer1_Camper_Intro, Route7_Trainer1_Camper_Defeat
	msgbox Route7_Trainer1_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer2_Picnicker::
	trainerbattle_single TRAINER_R7_TR2_PICNICKER, Route7_Trainer2_Picnicker_Intro, Route7_Trainer2_Picnicker_Defeat
	msgbox Route7_Trainer2_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer3_Ninjaboy::
	trainerbattle_single TRAINER_R7_TR3_NINJABOY, Route7_Trainer3_Ninjaboy_Intro, Route7_Trainer3_Ninjaboy_Defeat
	msgbox Route7_Trainer3_Ninjaboy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer4_Birdkeeper::
	trainerbattle_single TRAINER_R7_TR4_BIRDKEEPER, Route7_Trainer4_Birdkeeper_Intro, Route7_Trainer4_Birdkeeper_Defeat
	msgbox Route7_Trainer4_Birdkeeper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer5_Blackbelt::
	trainerbattle_single TRAINER_R7_TR5_BLACKBELT, Route7_Trainer5_Blackbelt_Intro, Route7_Trainer5_Blackbelt_Defeat
	msgbox Route7_Trainer5_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer6_Picnicker2::
	trainerbattle_single TRAINER_R7_TR6_PICNICKER2, Route7_Trainer6_Picnicker2_Intro, Route7_Trainer6_Picnicker2_Defeat
	msgbox Route7_Trainer6_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer7_Fisherman::
	trainerbattle_single TRAINER_R7_TR7_FISHERMAN, Route7_Trainer7_Fisherman_Intro, Route7_Trainer7_Fisherman_Defeat
	msgbox Route7_Trainer7_Fisherman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer8_Hiker::
	trainerbattle_single TRAINER_R7_TR8_HIKER, Route7_Trainer8_Hiker_Intro, Route7_Trainer8_Hiker_Defeat
	msgbox Route7_Trainer8_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer9_Parasollady::
	trainerbattle_single TRAINER_R7_TR9_PARASOLLADY, Route7_Trainer9_Parasollady_Intro, Route7_Trainer9_Parasollady_Defeat
	msgbox Route7_Trainer9_Parasollady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer10_NinjaBoy::
	trainerbattle_single TRAINER_R7_TR10_NINJABOY, Route7_Trainer10_NinjaBoy_Intro, Route7_Trainer10_NinjaBoy_Defeat
	msgbox Route7_Trainer10_NinjaBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Ball1::
	finditem ITEM_HP_UP
	end


Route7_Ball2::
	finditem ITEM_FULL_HEAL
	end


Route8_SoMuchMud::
	msgbox Route8_SoMuchMud_Text, MSGBOX_NPC
	end


Route7_Trainer1_Camper_Intro::
	.string "Only the strong can get through\n"
	.string "the desert.\l"
	.string "Let's see just how strong you are!$"

Route7_Trainer1_Camper_Defeat::
	.string "Too strong!$"

Route7_Trainer1_Camper_PostBattle::
	.string "I bet you had no trouble getting\n"
	.string "through the desert.$"

Route7_Trainer2_Picnicker_Intro::
	.string "I bought new boots, so I came\n"
	.string "all this way to get them dirty.\p"
	.string "You're right! If I have a battle,\n"
	.string "they may get even dirtier!$"

Route7_Trainer2_Picnicker_Defeat::
	.string "Oh! My boots got completely soaked\n"
	.string "in the battle!$"

Route7_Trainer2_Picnicker_PostBattle::
	.string "I hope you brought some boots as well.\n"
	.string "Wading through all this mud\l"
	.string "without proper gear will be a slog!$"

Route7_Trainer3_Ninjaboy_Intro::
	.string "Ninjas are swift as arrows!\n"
	.string "No amount of mud will stop us!$"

Route7_Trainer3_Ninjaboy_Defeat::
	.string "I may outmatch you in speed,\n"
	.string "but not in strength…$"

Route7_Trainer3_Ninjaboy_PostBattle::
	.string "Ninjas may be fast, but my Pokémon\n"
	.string "clearly got slowed by the mud.$"

Route7_Trainer4_Birdkeeper_Intro::
	.string "The ground Pokémon here have no chance\n"
	.string "against my flying types!\l"
	.string "And neither do you!$"

Route7_Trainer4_Birdkeeper_Defeat::
	.string "Spoke too soon…$"

Route7_Trainer4_Birdkeeper_PostBattle::
	.string "I could use my Pokémon to fly over this\n"
	.string "dreary place but I prefer doing things\l"
	.string "the hard way.\l"
	.string "Really builds the character.$"

Route7_Trainer5_Blackbelt_Intro::
	.string "Training in the mud has made my Pokémon\n"
	.string "faster than ever.\p"
	.string "Here, let me show you!$"

Route7_Trainer5_Blackbelt_Defeat::
	.string "I will admit my defeat gracefully…$"

Route7_Trainer5_Blackbelt_PostBattle::
	.string "I can't believe I lost after\n"
	.string "all my training.\p"
	.string "I'm a disgrace…$"

Route7_Trainer6_Picnicker2_Intro::
	.string "Pokémon trainers nurture friendship\n"
	.string "with their battles!$"

Route7_Trainer6_Picnicker2_Defeat::
	.string "This feeling of defeat…\n"
	.string "is like a bottomless swamp…$"

Route7_Trainer6_Picnicker2_PostBattle::
	.string "I'm researching what kinds of\n"
	.string "Pokémon live around here.\p"
	.string "That way, I can plan which Pokémon\n"
	.string "I should take along.$"

Route7_Trainer7_Fisherman_Intro::
	.string "I can't and will not stop fishing.\p"
	.string "Though when it comes to battling,\n"
	.string "I can make an exception.$"

Route7_Trainer7_Fisherman_Defeat::
	.string "Battling was a mistake.\n"
	.string "I should just stick to fishing!$"

Route7_Trainer7_Fisherman_PostBattle::
	.string "If I find water, I drop in my\n"
	.string "fishing line.\p"
	.string "Even with a puddle, there may be\n"
	.string "Pokémon that I've never seen.$"

Route7_Trainer8_Hiker_Intro::
	.string "This Hiker wandering the world will\n"
	.string "teach a child like you the harshness\l"
	.string "of life and the difficulty of\l"
	.string "Pokémon battles!$"

Route7_Trainer8_Hiker_Defeat::
	.string "The teacher was schooled…\n"
	.string "You're very strict, aren't you?$"

Route7_Trainer8_Hiker_PostBattle::
	.string "Looks like there is really nothing\n"
	.string "an old hiker like myself can teach you.\l"
	.string "You are the teacher now.$"

Route7_Trainer9_Parasollady_Intro::
	.string "Look! This is my favorite parasol!\n"
	.string "Oh, and my fabulous Pokémon!$"

Route7_Trainer9_Parasollady_Defeat::
	.string "You were only supposed to look…$"

Route7_Trainer9_Parasollady_PostBattle::
	.string "You're probably wondering why I'm\n"
	.string "carrying a parasol here.\p"
	.string "When your Pokémon jumps in a puddle\n"
	.string "of mud, you wish you'd have a parasol\l"
	.string "in hand.$"

Route7_Trainer10_NinjaBoy_Intro::
	.string "I shall become a real ninja when\n"
	.string "I grow up!$"

Route7_Trainer10_NinjaBoy_Defeat::
	.string "Excellent! Excellent!$"

Route7_Trainer10_NinjaBoy_PostBattle::
	.string "So, what's a real ninja supposed to\n"
	.string "do?$"

Route8_SoMuchMud_Text::
	.string "Ugh… Look at all this mud.\p"
	.string "How is a fine lady such as myself\n"
	.string "expected to get across without\l"
	.string "getting my dress dirty?$"
