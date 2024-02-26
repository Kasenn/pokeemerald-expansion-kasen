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


Route7_Ball1::
	finditem ITEM_HP_UP
	end


Route7_Ball2::
	finditem ITEM_FULL_HEAL
	end


Route7_Trainer1_Camper_Intro::
	.string "$"

Route7_Trainer1_Camper_Defeat::
	.string "$"

Route7_Trainer1_Camper_PostBattle::
	.string "$"

Route7_Trainer2_Picnicker_Intro::
	.string "$"

Route7_Trainer2_Picnicker_Defeat::
	.string "$"

Route7_Trainer2_Picnicker_PostBattle::
	.string "$"

Route7_Trainer3_Ninjaboy_Intro::
	.string "$"

Route7_Trainer3_Ninjaboy_Defeat::
	.string "$"

Route7_Trainer3_Ninjaboy_PostBattle::
	.string "$"

Route7_Trainer4_Birdkeeper_Intro::
	.string "$"

Route7_Trainer4_Birdkeeper_Defeat::
	.string "$"

Route7_Trainer4_Birdkeeper_PostBattle::
	.string "$"

Route7_Trainer5_Blackbelt_Intro::
	.string "$"

Route7_Trainer5_Blackbelt_Defeat::
	.string "$"

Route7_Trainer5_Blackbelt_PostBattle::
	.string "$"

Route7_Trainer6_Picnicker2_Intro::
	.string "$"

Route7_Trainer6_Picnicker2_Defeat::
	.string "$"

Route7_Trainer6_Picnicker2_PostBattle::
	.string "$"

Route7_Trainer7_Fisherman_Intro::
	.string "$"

Route7_Trainer7_Fisherman_Defeat::
	.string "$"

Route7_Trainer7_Fisherman_PostBattle::
	.string "$"

Route7_Trainer8_Hiker_Intro::
	.string "$"

Route7_Trainer8_Hiker_Defeat::
	.string "$"

Route7_Trainer8_Hiker_PostBattle::
	.string "$"

Route7_Trainer9_Parasollady_Intro::
	.string "$"

Route7_Trainer9_Parasollady_Defeat::
	.string "$"

Route7_Trainer9_Parasollady_PostBattle::
	.string "$"
