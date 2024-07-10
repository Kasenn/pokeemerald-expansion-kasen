Route2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, R2ClearLandslide
	.byte 0


R2ClearLandslide::
	goto_if_set FLAG_CORAL_FLAG_1, R2ClearLandslide_1
	end

R2ClearLandslide_1:
	setmetatile 19, 7, 0x0AF, FALSE
	setmetatile 20, 7, 0x0CF, FALSE
	setmetatile 19, 8, 0x071, FALSE
	setmetatile 19, 9, 0x0AF, FALSE
	setmetatile 20, 9, 0x0CF, FALSE
	setmetatile 20, 10, 0x071, FALSE
	setmetatile 19, 11, 0x0AF, FALSE
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


Route2_Sign::
	msgbox Route2_Sign_Text, MSGBOX_SIGN
	return


WindyWoods_Sign::
	msgbox WindyWoods_Sign_Text, MSGBOX_SIGN
	return


Primrose_Sign2::
	msgbox Primrose_Sign2_Text, MSGBOX_SIGN
	return


Route3_Sign2::
	msgbox Route3_Sign2_Text, MSGBOX_SIGN
	return


Route5_Sign::
	msgbox Route5_Sign_Text, MSGBOX_SIGN
	return


Route7_Sign::
	msgbox Route7_Sign_Text, MSGBOX_SIGN
	return


Desert_Sign::
	msgbox Desert_Sign_Text, MSGBOX_SIGN
	return


Route11_Sign::
	msgbox Route11_Sign_Text, MSGBOX_SIGN
	return


Route15_Sign4::
	msgbox Route15_Sign4_Text, MSGBOX_SIGN
	return


Route23_Sign::
	msgbox Route23_Sign_Text, MSGBOX_SIGN
	return


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

Route2_Sign_Text::
	.string "{UP_ARROW} Coralgrove City\n"
	.string "{RIGHT_ARROW} Windy Woods\l"
	.string "{DOWN_ARROW} Primrose Town$"

WindyWoods_Sign_Text::
	.string "Trainer Tips\p"
	.string "To quickly throw a Poké Ball\n"
	.string "in battle, press the R button.\p"
	.string "To change which Poké Ball is thrown,\n"
	.string "hold the R button and press left or\l"
	.string "right on the D-Pad.$"

Primrose_Sign2_Text::
	.string "{UP_ARROW} Route 2\n"
	.string "{RIGHT_ARROW} Primrose Meadow\l"
	.string "{DOWN_ARROW} Route 1$"

Route3_Sign2_Text::
	.string "{UP_ARROW} Pokémon Ranch\n"
	.string "{RIGHT_ARROW} Aldeleaf City\l"
	.string "{LEFT_ARROW} Azuretide Town$"

Route5_Sign_Text::
	.string "Trainer Tips\p"
	.string "Making Pokémon battle weaker opponents\n"
	.string "makes it grow slower than normal.\p"
	.string "Conversely, having a Pokémon battle\n"
	.string "opponents that are stronger than it\l"
	.string "will grant the Pokémon extra experience.$"

Route7_Sign_Text::
	.string "Trainer Tips\p"
	.string "Running causes a lot of ruckus,\n"
	.string "making you the center of attention.\p"
	.string "If you want to avoid the\n"
	.string "attention of other trainers,\l"
	.string "consider slowing down your pace.$"

Desert_Sign_Text::
	.string "Trainer Tips\p"
	.string "Some Pokémon have strong trapping\n"
	.string "abilities that stop trainers from\l"
	.string "fleeing against them.\p"
	.string "Some Marts carry Poké Dolls that\n"
	.string "can be used to distract these Pokémon\l"
	.string "for long enough to allow escape.$"

Route11_Sign_Text::
	.string "Trainer Tips\p"
	.string "Pokémon with the move Cut can\n"
	.string "cut down long grass, making\l"
	.string "a trek through wilderness safer.\p"
	.string "Pokémon with the ability Hyper\n"
	.string "Cutter can cut an even wider area\l"
	.string "of grass at a time.$"

Route15_Sign4_Text::
	.string "Trainer Tips\p"
	.string "Pokémon can only know up to\n"
	.string "4 different moves.\p"
	.string "When teaching new moves to a Pokémon,\n"
	.string "any previous one can be replaced.\l"
	.string "Even HM moves!$"

Route23_Sign_Text::
	.string "Trainer Tips\p"
	.string "Some Pokémon like to make their\n"
	.string "home in small hidden grottos\l"
	.string "between the trees.\p"
	.string "If the grotto is left empty,\n"
	.string "a new Pokémon may make it its home\l"
	.string "after the grotto has been left\l"
	.string "undisturbed for some time.$"
