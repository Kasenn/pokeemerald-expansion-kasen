Route21_MapScripts::
# 2 "data/maps/Route21/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route21_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route21_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route21/scripts.pory"
	clearflag FLAG_TIME_STOP
# 4 "data/maps/Route21/scripts.pory"
	clearflag FLAG_ENCHANTED_FOREST_NIGHT
	return


TrainerBattle_TRAINER_R21_RANGER_F::
# 9 "data/maps/Route21/scripts.pory"
	trainerbattle_single TRAINER_R21_RANGER_F, TRAINER_R21_RANGER_F_Intro, TRAINER_R21_RANGER_F_Lose
# 10 "data/maps/Route21/scripts.pory"
	msgbox TRAINER_R21_RANGER_F_PostBattle, MSGBOX_AUTOCLOSE
	return


TrainerBattle_TRAINER_R21_MYSTERIOUS_SISTERS_BigSis::
# 23 "data/maps/Route21/scripts.pory"
	trainerbattle_double TRAINER_R21_MYSTERIOUS_SISTERS, TRAINER_R21_MYSTERIOUS_SISTERS_IntroBigSis, TRAINER_R21_MYSTERIOUS_SISTERS_LoseBigSis, TRAINER_R21_MYSTERIOUS_SISTERS_NotEnoughMonsBigSis
# 24 "data/maps/Route21/scripts.pory"
	msgbox TRAINER_R21_MYSTERIOUS_SISTERS_PostBattleBigSis, MSGBOX_AUTOCLOSE
	return


TrainerBattle_TRAINER_R21_MYSTERIOUS_SISTERS_LilSis::
# 40 "data/maps/Route21/scripts.pory"
	trainerbattle_double TRAINER_R21_MYSTERIOUS_SISTERS, TRAINER_R21_MYSTERIOUS_SISTERS_IntroLilSis, TRAINER_R21_MYSTERIOUS_SISTERS_LoseLilSis, TRAINER_R21_MYSTERIOUS_SISTERS_NotEnoughMonsLilSis
# 41 "data/maps/Route21/scripts.pory"
	msgbox TRAINER_R21_MYSTERIOUS_SISTERS_PostBattleLilSis, MSGBOX_AUTOCLOSE
	return


TrainerBattle_TRAINER_R21_HIKER::
# 57 "data/maps/Route21/scripts.pory"
	trainerbattle_single TRAINER_R21_HIKER, TRAINER_R21_HIKER_Intro, TRAINER_R21_HIKER_Lose
# 58 "data/maps/Route21/scripts.pory"
	msgbox TRAINER_R21_HIKER_PostBattle, MSGBOX_AUTOCLOSE
	return


TrainerBattle_TRAINER_R21_RANGER_M::
# 71 "data/maps/Route21/scripts.pory"
	trainerbattle_single TRAINER_R21_RANGER_M, TRAINER_R21_RANGER_M_Intro, TRAINER_R21_RANGER_M_Lose
# 72 "data/maps/Route21/scripts.pory"
	msgbox TRAINER_R21_RANGER_M_PostBattle, MSGBOX_AUTOCLOSE
	return


TrainerBattle_TRAINER_R21_FAIRY_TALE_GIRL::
# 85 "data/maps/Route21/scripts.pory"
	trainerbattle_single TRAINER_R21_FAIRY_TALE_GIRL, TRAINER_R21_FAIRY_TALE_GIRL_Intro, TRAINER_R21_FAIRY_TALE_GIRL_Lose
# 86 "data/maps/Route21/scripts.pory"
	msgbox TRAINER_R21_FAIRY_TALE_GIRL_PostBattle, MSGBOX_AUTOCLOSE
	return


Route21_Lass::
# 99 "data/maps/Route21/scripts.pory"
	msgbox Route21_Lass_Text, MSGBOX_NPC
	return


TRAINER_R21_RANGER_F_Intro::
# 12 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_RANGER_F_Lose::
# 15 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_RANGER_F_PostBattle::
# 18 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_IntroBigSis::
# 26 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_LoseBigSis::
# 29 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_PostBattleBigSis::
# 32 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_NotEnoughMonsBigSis::
# 35 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_IntroLilSis::
# 43 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_LoseLilSis::
# 46 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_PostBattleLilSis::
# 49 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_MYSTERIOUS_SISTERS_NotEnoughMonsLilSis::
# 52 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_HIKER_Intro::
# 60 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_HIKER_Lose::
# 63 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_HIKER_PostBattle::
# 66 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_RANGER_M_Intro::
# 74 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_RANGER_M_Lose::
# 77 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_RANGER_M_PostBattle::
# 80 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_FAIRY_TALE_GIRL_Intro::
# 88 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_FAIRY_TALE_GIRL_Lose::
# 91 "data/maps/Route21/scripts.pory"
	.string "wip$"

TRAINER_R21_FAIRY_TALE_GIRL_PostBattle::
# 94 "data/maps/Route21/scripts.pory"
	.string "wip$"

Route21_Lass_Text::
# 101 "data/maps/Route21/scripts.pory"
	.string "wip$"
