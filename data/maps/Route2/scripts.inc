Route2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, R2ClearLandslide
	.byte 0


R2ClearLandslide::
	goto_if_set FLAG_CORAL_FLAG_1, R2ClearLandslide_1
	end

R2ClearLandslide_1:
	setmetatile 19, 7, 0x0CF, FALSE
	setmetatile 20, 7, 0x0CF, FALSE
	setmetatile 19, 8, 0x071, FALSE
	setmetatile 19, 9, 0x0CF, FALSE
	setmetatile 20, 9, 0x0CF, FALSE
	setmetatile 20, 10, 0x071, FALSE
	setmetatile 19, 11, 0x0CF, FALSE
	setmetatile 20, 11, 0x0CF, FALSE
	setmetatile 20, 12, 0x071, FALSE
	end


Route2_Landslide::
	msgbox Route2_Landslide_Text_0, MSGBOX_NPC
	end


Route2_X_Attack::
	finditem ITEM_X_ATTACK
	return


Route2_Revive::
	finditem ITEM_REVIVE
	return


Route2_Fisher::
	trainerbattle_single TRAINER_GRUNT_MUSEUM_2, Route2_Text_FisherIntro, Route2_Text_FisherDefeated
	msgbox Route2_Text_FisherPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route2_Lass::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, Route2_Text_LassIntro, Route2_Text_LassDefeated
	msgbox Route2_Text_LassPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route2_BlackBelt::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, Route2_Text_BlackBeltIntro, Route2_Text_BlackBeltDefeated
	msgbox Route2_Text_BlackBeltPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route2_Youngster::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, Route2_Text_YoungsterIntro, Route2_Text_YoungsterDefeated
	msgbox Route2_Text_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route2_Girl3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, Route2_Text_Girl3Intro, Route2_Text_Girl3Defeated
	msgbox Route2_Text_Girl3PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route2_Landslide_Text_0:
	.string "Looks like the route to Coralgrove City\nis buried under a landslide.\pI guess I need to take the detour\nthrough Windy Woods…$"

Route2_Text_FisherIntro::
	.string "Hope you're ready for\na splash-tacular match!$"

Route2_Text_FisherDefeated::
	.string "Guess I bait off more than\nI could chew…$"

Route2_Text_FisherPostBattle::
	.string "I really floundered that battle, huh…$"

Route2_Text_LassIntro::
	.string "Behold the power of fairy!$"

Route2_Text_LassDefeated::
	.string "My little babies!$"

Route2_Text_LassPostBattle::
	.string "I guess there's more to\nPokémon battles than cuteness.$"

Route2_Text_BlackBeltIntro::
	.string "You are getting in the way\nof my training regimen!$"

Route2_Text_BlackBeltDefeated::
	.string "Magnificent display of skill!$"

Route2_Text_BlackBeltPostBattle::
	.string "You have potential to become\na great black belt.\pIf you're interested,\ndrop by our dojo in Sandstone City.$"

Route2_Text_YoungsterIntro::
	.string "Our eyes met so\nyou know what that means!$"

Route2_Text_YoungsterDefeated::
	.string "You must've cheated somehow…$"

Route2_Text_YoungsterPostBattle::
	.string "You're older than me so you were\nsupposed to let me win!$"

Route2_Text_Girl3Intro::
	.string "Even Pokémon battles\ncan teach you something!$"

Route2_Text_Girl3Defeated::
	.string "This was a learning experience.$"

Route2_Text_Girl3PostBattle::
	.string "As long as I learned something,\nthis was still a positive experience.$"
