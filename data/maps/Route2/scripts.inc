Route2_MapScripts::
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route2/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_ROUTE2_HIKER, 74, 32
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/Route2/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_TALKED_TO_AIDE
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route2/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE2_LAYOUT_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/Route2/scripts.pory"
	setvar VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_DIDNT_ENTER
	return


Route2_Landslide::
# 16 "data/maps/Route2/scripts.pory"
	msgbox Route2_Landslide_Text_0, MSGBOX_NPC
	return


Route2_Fisher::
# 20 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_R2_FISHER, Route2_Text_FisherIntro, Route2_Text_FisherDefeated
# 21 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_FisherPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Lass::
# 35 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_R2_LASS, Route2_Text_LassIntro, Route2_Text_LassDefeated
# 36 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_LassPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_BlackBelt::
# 51 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_R2_BLACKBELT, Route2_Text_BlackBeltIntro, Route2_Text_BlackBeltDefeated
# 52 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_BlackBeltPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Youngster::
# 66 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_R2_YOUNGSTER, Route2_Text_YoungsterIntro, Route2_Text_YoungsterDefeated
# 67 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Youngster2::
# 81 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_R2_YOUNGSTER2, Route2_Text_Youngster2Intro, Route2_Text_Youngster2Defeated
# 82 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_Youngster2PostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Girl3::
# 102 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_R2_SCHOOL_KID_F, Route2_Text_Girl3Intro, Route2_Text_Girl3Defeated
# 103 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_Girl3PostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Sign::
# 117 "data/maps/Route2/scripts.pory"
	msgbox Route2_Sign_Text, MSGBOX_SIGN
	return


WindyWoods_Sign::
# 125 "data/maps/Route2/scripts.pory"
	msgbox WindyWoods_Sign_Text, MSGBOX_SIGN
	return


Primrose_Sign2::
# 136 "data/maps/Route2/scripts.pory"
	msgbox Primrose_Sign2_Text, MSGBOX_SIGN
	return


Route3_Sign2::
# 145 "data/maps/Route2/scripts.pory"
	msgbox Route3_Sign2_Text, MSGBOX_SIGN
	return


Route5_Sign::
# 154 "data/maps/Route2/scripts.pory"
	msgbox Route5_Sign_Text, MSGBOX_SIGN
	return


Route5_Sign2::
# 166 "data/maps/Route2/scripts.pory"
	msgbox Route5_Sign2_Text, MSGBOX_SIGN
	return


Route7_Sign::
# 175 "data/maps/Route2/scripts.pory"
	msgbox Route7_Sign_Text, MSGBOX_SIGN
	return


Desert_Sign::
# 187 "data/maps/Route2/scripts.pory"
	msgbox Desert_Sign_Text, MSGBOX_SIGN
	return


Route11_Sign::
# 200 "data/maps/Route2/scripts.pory"
	msgbox Route11_Sign_Text, MSGBOX_SIGN
	return


Route14_TrainerTips::
# 213 "data/maps/Route2/scripts.pory"
	msgbox Route14_TrainerTips_Text, MSGBOX_SIGN
	return


Route23_Sign::
# 224 "data/maps/Route2/scripts.pory"
	msgbox Route23_Sign_Text, MSGBOX_SIGN
	return


Route8_Sign2::
# 238 "data/maps/Route2/scripts.pory"
	msgbox Route8_Sign2_Text, MSGBOX_SIGN
	return


Route1_Sign::
# 253 "data/maps/Route2/scripts.pory"
	msgbox Route1_Sign_Text, MSGBOX_SIGN
	return


R18_PlayerTipsSign::
# 277 "data/maps/Route2/scripts.pory"
	msgbox R18_PlayerTipsSign_Text, MSGBOX_SIGN
	return


Route2_Landslide_Text_0:
# 16 "data/maps/Route2/scripts.pory"
	.string "Looks like the route to Coralgrove City\nis buried under a landslide.\pI guess I need to take the detour\nthrough Windy Woods…$"

Route2_Text_FisherIntro::
# 24 "data/maps/Route2/scripts.pory"
	.string "Hope you're ready for\na splash-tacular match!$"

Route2_Text_FisherDefeated::
# 27 "data/maps/Route2/scripts.pory"
	.string "Guess I bait off more than\nI could chew…$"

Route2_Text_FisherPostBattle::
# 30 "data/maps/Route2/scripts.pory"
	.string "I really floundered that battle, huh…$"

Route2_Text_LassIntro::
# 39 "data/maps/Route2/scripts.pory"
	.string "Behold the power of fairy!$"

Route2_Text_LassDefeated::
# 42 "data/maps/Route2/scripts.pory"
	.string "My little baby!$"

Route2_Text_LassPostBattle::
# 45 "data/maps/Route2/scripts.pory"
	.string "You're mean! You didn't\n"
	.string "have to battle so seriously!$"

Route2_Text_BlackBeltIntro::
# 55 "data/maps/Route2/scripts.pory"
	.string "You are getting in the way\nof my training regimen!$"

Route2_Text_BlackBeltDefeated::
# 58 "data/maps/Route2/scripts.pory"
	.string "Magnificent display of skill!$"

Route2_Text_BlackBeltPostBattle::
# 61 "data/maps/Route2/scripts.pory"
	.string "You have potential to become\na great black belt.\pIf you're interested,\ndrop by our dojo in Sandstone City.$"

Route2_Text_YoungsterIntro::
# 70 "data/maps/Route2/scripts.pory"
	.string "Our eyes met so you\nknow what that means!$"

Route2_Text_YoungsterDefeated::
# 73 "data/maps/Route2/scripts.pory"
	.string "You must've cheated somehow…$"

Route2_Text_YoungsterPostBattle::
# 76 "data/maps/Route2/scripts.pory"
	.string "You're older than me so you were\nsupposed to let me win!$"

Route2_Text_Youngster2Intro::
# 85 "data/maps/Route2/scripts.pory"
	.string "Are you going to challenge the\n"
	.string "Pokémon Gym in Coralgrove City?\l"
	.string "Let me see your Pokémon first!$"

Route2_Text_Youngster2Defeated::
# 90 "data/maps/Route2/scripts.pory"
	.string "Wait, is it already over?$"

Route2_Text_Youngster2PostBattle::
# 93 "data/maps/Route2/scripts.pory"
	.string "If you're heading to Coralgrove,\n"
	.string "you should check out the\l"
	.string "Pokémon Trainers' School.\l"
	.string "They teach some crazy stuff to\l"
	.string "the students there!$"

Route2_Text_Girl3Intro::
# 106 "data/maps/Route2/scripts.pory"
	.string "Even Pokémon battles\ncan teach you something!$"

Route2_Text_Girl3Defeated::
# 109 "data/maps/Route2/scripts.pory"
	.string "This was a learning experience.$"

Route2_Text_Girl3PostBattle::
# 112 "data/maps/Route2/scripts.pory"
	.string "As long as I learned something,\nthis was still a positive experience.$"

Route2_Sign_Text::
# 119 "data/maps/Route2/scripts.pory"
	.string "{UP_ARROW} Coralgrove City\n"
	.string "{LEFT_ARROW} Windy Woods\l"
	.string "{DOWN_ARROW} Primrose Town$"

WindyWoods_Sign_Text::
# 127 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "To quickly throw a Poké Ball\n"
	.string "in battle, press the R button.\p"
	.string "To change which Poké Ball is thrown,\n"
	.string "hold the R button and press left or\l"
	.string "right on the D-Pad.$"

Primrose_Sign2_Text::
# 138 "data/maps/Route2/scripts.pory"
	.string "{UP_ARROW} Route 2\n"
	.string "{RIGHT_ARROW} Primrose Meadow\l"
	.string "{DOWN_ARROW} Route 1$"

Route3_Sign2_Text::
# 147 "data/maps/Route2/scripts.pory"
	.string "{UP_ARROW} Pokémon Ranch\n"
	.string "{RIGHT_ARROW} Aldeleaf City\l"
	.string "{LEFT_ARROW} Azuretide Town$"

Route5_Sign_Text::
# 156 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "Making Pokémon battle weaker opponents\n"
	.string "makes it grow slower than normal.\p"
	.string "Conversely, having a Pokémon battle\n"
	.string "opponents that are stronger than it\l"
	.string "will grant the Pokémon extra experience.$"

Route5_Sign2_Text::
# 168 "data/maps/Route2/scripts.pory"
	.string "{UP_ARROW} Aldeleaf City\n"
	.string "{RIGHT_ARROW} Flower Fields\l"
	.string "{DOWN_ARROW} Skyloch Village$"

Route7_Sign_Text::
# 177 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "Running causes a lot of ruckus,\n"
	.string "making you the center of attention.\p"
	.string "If you want to avoid the\n"
	.string "attention of other trainers,\l"
	.string "consider slowing down your pace.$"

Desert_Sign_Text::
# 189 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "Some Pokémon have strong trapping\n"
	.string "abilities that stop trainers from\l"
	.string "fleeing against them.\p"
	.string "Some Marts carry Poké Dolls that\n"
	.string "can be used to distract these Pokémon\l"
	.string "for long enough to allow escape.$"

Route11_Sign_Text::
# 202 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "Pokémon with the move Cut can\n"
	.string "cut down long grass, making\l"
	.string "a trek through wilderness safer.\p"
	.string "Pokémon with the ability Hyper\n"
	.string "Cutter can cut an even wider area\l"
	.string "of grass at a time.$"

Route14_TrainerTips_Text::
# 215 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "When in battle and choosing a move,\n"
	.string "pressing the L button will display\l"
	.string "additional information of the\l"
	.string "chosen move.$"

Route23_Sign_Text::
# 226 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "Some Pokémon like to make their\n"
	.string "home in small hidden grottos\l"
	.string "between the trees.\p"
	.string "If the grotto is left empty,\n"
	.string "a new Pokémon may make it its home\l"
	.string "after the grotto has been left\l"
	.string "undisturbed for some time.$"

Route8_Sign2_Text::
# 240 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "A lot can happen on the road,\n"
	.string "and some of these events are\l"
	.string "recorded in the Trainer Info.\p"
	.string "To see statistics of certain events,\n"
	.string "press the START button and head to\l"
	.string "the “Stats” screen.\p"
	.string "To view even more detailed statistics,\n"
	.string "press the A-button.$"

Route1_Sign_Text::
# 255 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "If you ever feel lonely on your\n"
	.string "travels, simply let your Pokémon\l"
	.string "walk alongside you!\p"
	.string "To let a Pokémon out of its ball,\n"
	.string "head to the party menu, choose\l"
	.string "the Pokémon you want to walk with,\l"
	.string "select “Follower”, and then “Set”\l"
	.string "to walk with that Pokémon.\p"
	.string "If you don't have a preferred\n"
	.string "Pokémon to walk with, you can\l"
	.string "“Unset” your current Pokémon and\l"
	.string "use whichever is your party's\l"
	.string "first conscious one.\p"
	.string "Note: some areas may have rules\n"
	.string "against letting Pokémon walk freely,\l"
	.string "while some areas may be too small\l"
	.string "for certain larger species.$"

R18_PlayerTipsSign_Text::
# 279 "data/maps/Route2/scripts.pory"
	.string "Trainer Tips\p"
	.string "Ice-type Pokémon are strengthened by\n"
	.string "snowfall, massively increasing their\l"
	.string "Defense stat.\p"
	.string "This benefit does not apply in\n"
	.string "a blizzard, a weather so intense,\l"
	.string "it will cause damage to any\l"
	.string "non-Ice-type Pokémon.$"
