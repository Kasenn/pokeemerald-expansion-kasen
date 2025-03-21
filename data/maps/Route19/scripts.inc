Route19_MapScripts::
	.byte 0


Route19_Tr1_SwimmerF::
	trainerbattle_single TRAINER_R19_TR1_SWIMMER_F, R19Tr1_Intro, R19Tr1_Lose
	msgbox R19Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr2_SwimmerM::
	trainerbattle_single TRAINER_R19_TR2_SWIMMER_M, R19Tr2_Intro, R19Tr2_Lose
	msgbox R19Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr3_SwimmerM::
	trainerbattle_single TRAINER_R19_TR3_SWIMMER_M, R19Tr3_Intro, R19Tr3_Lose
	msgbox R19Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleM::
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleM_Intro, Route19_Tr4_SwimmerCoupleM_Defeat, Route19_Tr4_SwimmerCoupleM_NotEnoughMons
	msgbox Route19_Tr4_SwimmerCoupleM_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr4_SwimmerCoupleF::
	trainerbattle_double TRAINER_R19_TR4_SWIMMER_COUPLE, Route19_Tr4_SwimmerCoupleF_Intro, Route19_Tr4_SwimmerCoupleF_Defeat, Route19_Tr4_SwimmerCoupleF_NotEnoughMons
	msgbox Route19_Tr4_SwimmerCoupleF_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr5_SwimmerF::
	trainerbattle_single TRAINER_R19_TR5_SWIMMER_F, R19Tr5_Intro, R19Tr5_Lose
	msgbox R19Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr6_SwimmerM::
	trainerbattle_single TRAINER_R19_TR6_SWIMMER_M, R19Tr6_Intro, R19Tr6_Lose
	msgbox R19Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr7_BlackBelt::
	trainerbattle_single TRAINER_R19_TR7_BLACKBELT, R19Tr7_Intro, R19Tr7_Lose
	msgbox R19Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr8_Hiker::
	trainerbattle_single TRAINER_R19_TR8_HIKER, R19Tr8_Intro, R19Tr8_Lose
	msgbox R19Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr9_Picnicker::
	trainerbattle_single TRAINER_R19_TR9_PICNICKER, R19Tr9_Intro, R19Tr9_Lose
	msgbox R19Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route19_Tr10_SwimmerM::
	trainerbattle_single TRAINER_R19_TR10_SWIMMER_M, R19Tr10_Intro, R19Tr10_Lose
	msgbox R19Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


R19Tr1_Intro::
	.string "$"

R19Tr1_Lose::
	.string "$"

R19Tr1_PostBattle::
	.string "$"

R19Tr2_Intro::
	.string "$"

R19Tr2_Lose::
	.string "$"

R19Tr2_PostBattle::
	.string "$"

R19Tr3_Intro::
	.string "$"

R19Tr3_Lose::
	.string "$"

R19Tr3_PostBattle::
	.string "$"

Route19_Tr4_SwimmerCoupleM_Intro::
	.string "$"

Route19_Tr4_SwimmerCoupleM_Defeat::
	.string "$"

Route19_Tr4_SwimmerCoupleM_NotEnoughMons::
	.string "$"

Route19_Tr4_SwimmerCoupleM_PostBattle::
	.string "$"

Route19_Tr4_SwimmerCoupleF_Intro::
	.string "$"

Route19_Tr4_SwimmerCoupleF_Defeat::
	.string "$"

Route19_Tr4_SwimmerCoupleF_NotEnoughMons::
	.string "$"

Route19_Tr4_SwimmerCoupleF_PostBattle::
	.string "$"

R19Tr5_Intro::
	.string "$"

R19Tr5_Lose::
	.string "$"

R19Tr5_PostBattle::
	.string "$"

R19Tr6_Intro::
	.string "$"

R19Tr6_Lose::
	.string "$"

R19Tr6_PostBattle::
	.string "$"

R19Tr7_Intro::
	.string "$"

R19Tr7_Lose::
	.string "$"

R19Tr7_PostBattle::
	.string "$"

R19Tr8_Intro::
	.string "$"

R19Tr8_Lose::
	.string "$"

R19Tr8_PostBattle::
	.string "$"

R19Tr9_Intro::
	.string "$"

R19Tr9_Lose::
	.string "$"

R19Tr9_PostBattle::
	.string "$"

R19Tr10_Intro::
	.string "$"

R19Tr10_Lose::
	.string "$"

R19Tr10_PostBattle::
	.string "$"
