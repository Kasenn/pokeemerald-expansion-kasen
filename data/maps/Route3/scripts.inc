Route3_MapScripts::
	.byte 0


Route3_Hiker::
	trainerbattle_single TRAINER_GABBY_AND_TY_3, Route3_HikerIntro, Route3_HikerDefeated
	msgbox Route3_HikerPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Lass::
	trainerbattle_single TRAINER_GABBY_AND_TY_4, Route3_LassIntro, Route3_LassDefeated
	msgbox Route3_LassPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Maniac::
	trainerbattle_single TRAINER_GABBY_AND_TY_5, Route3_ManiacIntro, Route3_ManiacDefeated
	msgbox Route3_ManiacPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_BugCatcher::
	trainerbattle_single TRAINER_GABBY_AND_TY_6, Route3_BugCatcherIntro, Route3_BugCatcherDefeated
	msgbox Route3_BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Twin1::
	trainerbattle_double TRAINER_LOLA_1, Route3_Twin1Intro, Route3_Twin1Defeated, Route3_Twin1NotEnoughMons
	msgbox Route3_Twin1PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Twin2::
	trainerbattle_double TRAINER_LOLA_1, Route3_Twin2Intro, Route3_Twin2Defeated, Route3_Twin2NotEnoughMons
	msgbox Route3_Twin2PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Triathlete::
	trainerbattle_single TRAINER_GWEN, Route3_TriathleteIntro, Route3_TriathleteDefeated
	msgbox Route3_TriathletePostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Camper::
	trainerbattle_single TRAINER_LOLA_2, Route3_CamperIntro, Route3_CamperDefeated
	msgbox Route3_CamperPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_CoolF::
	trainerbattle_single TRAINER_LOLA_3, Route3_CoolFIntro, Route3_CoolFDefeated
	msgbox Route3_CoolFPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_CoolM::
	trainerbattle_single TRAINER_LOLA_4, Route3_CoolMIntro, Route3_CoolMDefeated
	msgbox Route3_CoolMPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Bird1::
	trainerbattle_single TRAINER_LOLA_5, Route3_Bird1Intro, Route3_Bird1Defeated
	msgbox Route3_Bird1PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Youngster::
	trainerbattle_single TRAINER_RICKY_1, Route3_YoungsterIntro, Route3_YoungsterDefeated
	msgbox Route3_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Bird2::
	trainerbattle_single TRAINER_SIMON, Route3_Bird2Intro, Route3_Bird2Defeated
	msgbox Route3_Bird2PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_DoubleLass::
	trainerbattle_single TRAINER_CHARLIE, Route3_DoubleLassIntro, Route3_DoubleLassDefeated
	msgbox Route3_DoubleLassPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_DoubleBoy::
	trainerbattle_single TRAINER_RICKY_2, Route3_DoubleBoyIntro, Route3_DoubleBoyDefeated
	msgbox Route3_DoubleBoyPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_HedgeRunner::
	trainerbattle_single TRAINER_RICKY_3, Route3_HedgeRunnerIntro, Route3_HedgeRunnerDefeated
	msgbox Route3_HedgeRunnerPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route3_Antidote::
	finditem ITEM_ANTIDOTE
	return


Route3_GigaDrain::
	finditem ITEM_TM_GIGA_DRAIN
	return


Route3_HikerIntro::
	.string "Behold the power of fairy!$"

Route3_HikerDefeated::
	.string "My little babies!$"

Route3_HikerPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_LassIntro::
	.string "Behold the power of fairy!$"

Route3_LassDefeated::
	.string "My little babies!$"

Route3_LassPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_ManiacIntro::
	.string "Behold the power of fairy!$"

Route3_ManiacDefeated::
	.string "My little babies!$"

Route3_ManiacPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_BugCatcherIntro::
	.string "Behold the power of fairy!$"

Route3_BugCatcherDefeated::
	.string "My little babies!$"

Route3_BugCatcherPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_Twin1Intro::
	.string "Behold the power of fairy!$"

Route3_Twin1Defeated::
	.string "My little babies!$"

Route3_Twin1PostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_Twin2Intro::
	.string "Behold the power of fairy!$"

Route3_Twin2Defeated::
	.string "My little babies!$"

Route3_Twin2PostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_TriathleteIntro::
	.string "Behold the power of fairy!$"

Route3_TriathleteDefeated::
	.string "My little babies!$"

Route3_TriathletePostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_CamperIntro::
	.string "Behold the power of fairy!$"

Route3_CamperDefeated::
	.string "My little babies!$"

Route3_CamperPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_CoolFIntro::
	.string "Behold the power of fairy!$"

Route3_CoolFDefeated::
	.string "My little babies!$"

Route3_CoolFPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_CoolMIntro::
	.string "Behold the power of fairy!$"

Route3_CoolMDefeated::
	.string "My little babies!$"

Route3_CoolMPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_Bird1Intro::
	.string "Behold the power of fairy!$"

Route3_Bird1Defeated::
	.string "My little babies!$"

Route3_Bird1PostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_YoungsterIntro::
	.string "Behold the power of fairy!$"

Route3_YoungsterDefeated::
	.string "My little babies!$"

Route3_YoungsterPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_Bird2Intro::
	.string "Behold the power of fairy!$"

Route3_Bird2Defeated::
	.string "My little babies!$"

Route3_Bird2PostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_DoubleLassIntro::
	.string "Behold the power of fairy!$"

Route3_DoubleLassDefeated::
	.string "My little babies!$"

Route3_DoubleLassPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_DoubleBoyIntro::
	.string "Behold the power of fairy!$"

Route3_DoubleBoyDefeated::
	.string "My little babies!$"

Route3_DoubleBoyPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_HedgeRunnerIntro::
	.string "Behold the power of fairy!$"

Route3_HedgeRunnerDefeated::
	.string "My little babies!$"

Route3_HedgeRunnerPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route3_Twin1NotEnoughMons::
	.string "$"

Route3_Twin2NotEnoughMons::
	.string "$"
