Route5_MapScripts::
	.byte 0


Route5_IncreaseVar::
	addvar VAR_ROUTE5_TRAINERCOUNT, 1
	release
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


Route5_Trainer15_CoolTrainer::
	trainerbattle_single TRAINER_R5_TR15_COOLTRAINER, Route5_Trainer15_CoolTrainer_Intro, Route5_Trainer15_CoolTrainer_Defeat, Route5_IncreaseVar
	msgbox Route5_Trainer15_CoolTrainer_PostBattle, MSGBOX_AUTOCLOSE
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


Route5_Trainer1_Fisher_Intro::
	.string "$"

Route5_Trainer1_Fisher_Defeat::
	.string "$"

Route5_Trainer1_Fisher_PostBattle::
	.string "$"

Route5_Trainer2_Beauty_Intro::
	.string "$"

Route5_Trainer2_Beauty_Defeat::
	.string "$"

Route5_Trainer2_Beauty_PostBattle::
	.string "$"

Route5_Trainer3_YoungCouple_Intro::
	.string "$"

Route5_Trainer3_YoungCouple_Defeat::
	.string "$"

Route5_Trainer3_YoungCouple_PostBattle::
	.string "$"

Route5_Trainer3_YoungCouple_NotEnough::
	.string "$"

Route5_Trainer4_Lass1_Intro::
	.string "$"

Route5_Trainer4_Lass1_Defeat::
	.string "$"

Route5_Trainer4_Lass1_PostBattle::
	.string "$"

Route5_Trainer5_PokeFan_F_Intro::
	.string "$"

Route5_Trainer5_PokeFan_F_Defeat::
	.string "$"

Route5_Trainer5_PokeFan_F_PostBattle::
	.string "$"

Route5_Trainer6_Lass2_Intro::
	.string "$"

Route5_Trainer6_Lass2_Defeat::
	.string "$"

Route5_Trainer6_Lass2_PostBattle::
	.string "$"

Route5_Trainer7_Gentleman_Intro::
	.string "$"

Route5_Trainer7_Gentleman_Defeat::
	.string "$"

Route5_Trainer7_Gentleman_PostBattle::
	.string "$"

Route5_Trainer8_Youngster_Intro::
	.string "$"

Route5_Trainer8_Youngster_Defeat::
	.string "$"

Route5_Trainer8_Youngster_PostBattle::
	.string "$"

Route5_Trainer9_Triathlete_Intro::
	.string "$"

Route5_Trainer9_Triathlete_Defeat::
	.string "$"

Route5_Trainer9_Triathlete_PostBattle::
	.string "$"

Route5_Trainer10_RichBoy_Intro::
	.string "$"

Route5_Trainer10_RichBoy_Defeat::
	.string "$"

Route5_Trainer10_RichBoy_PostBattle::
	.string "$"

Route5_Trainer11_Man_5_Intro::
	.string "$"

Route5_Trainer11_Man_5_Defeat::
	.string "$"

Route5_Trainer11_Man_5_PostBattle::
	.string "$"

Route5_Trainer12_BugCatcher_Intro::
	.string "$"

Route5_Trainer12_BugCatcher_Defeat::
	.string "$"

Route5_Trainer12_BugCatcher_PostBattle::
	.string "$"

Route5_Trainer13_NinjaBoy_Intro::
	.string "$"

Route5_Trainer13_NinjaBoy_Defeat::
	.string "$"

Route5_Trainer13_NinjaBoy_PostBattle::
	.string "$"

Route5_Trainer14_Hiker_Intro::
	.string "$"

Route5_Trainer14_Hiker_Defeat::
	.string "$"

Route5_Trainer14_Hiker_PostBattle::
	.string "$"

Route5_Trainer15_CoolTrainer_Intro::
	.string "$"

Route5_Trainer15_CoolTrainer_Defeat::
	.string "$"

Route5_Trainer15_CoolTrainer_PostBattle::
	.string "$"
